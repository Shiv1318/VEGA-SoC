// =============================================================================
// Module      : pmu_fsm
// Project     : VEGA SoC
// Author      : VEGA Team
// Description : Power Management Unit FSM - Decision engine only.
//               PMU decides power states and coordinates with Power Sequencer.
//               Does NOT perform clock gating, isolation, retention or power
//               switching. Those are delegated to power_sequencer.sv.
// =============================================================================

`timescale 1ns/1ps

module pmu_fsm #(
    parameter int TIMEOUT_WIDTH = 16,
    parameter int TIMEOUT_VAL   = 16'd1000
)(
    // Clock and Reset
    input  logic                    clk,
    input  logic                    rst_n,

    // Sleep Request Interface
    input  logic                    sleep_req,          // Software sleep request
    input  logic                    proc_idle,          // Data Processor is idle
    input  logic                    mem_idle,           // Memory/RegBank is idle

    // Wakeup Interface (from wakeup_ctrl)
    input  logic                    wakeup_req,         // Any wakeup source asserted

    // Power Sequencer Handshake
    output logic                    seq_sleep_cmd,      // Command sequencer to start sleep
    output logic                    seq_wakeup_cmd,     // Command sequencer to start wakeup
    input  logic                    seq_sleep_ack,      // Sequencer confirms sleep complete
    input  logic                    seq_wakeup_ack,     // Sequencer confirms wakeup complete

    // Fault / Thermal / Battery Inputs
    input  logic                    thermal_alert,      // Over-temperature alert
    input  logic                    battery_low,        // Battery critically low
    input  logic                    fault_in,           // External fault signal

    // PMU Status Outputs
    output logic                    pmu_active,         // System is fully active
    output logic                    pmu_sleeping,       // System is in sleep/deep sleep
    output logic                    pmu_fault,          // PMU is in fault state
    output logic [3:0]              pmu_state_out       // Encoded state for debug/monitoring
);

    // -------------------------------------------------------------------------
    // FSM State Encoding
    // -------------------------------------------------------------------------
    typedef enum logic [3:0] {
        ST_RESET         = 4'h0,
        ST_BOOT          = 4'h1,
        ST_ACTIVE        = 4'h2,
        ST_PRE_POWERDOWN = 4'h3,
        ST_WAIT_SEQ_ACK  = 4'h4,
        ST_SLEEP         = 4'h5,
        ST_DEEP_SLEEP    = 4'h6,
        ST_WAKEUP        = 4'h7,
        ST_FAULT         = 4'h8
    } pmu_state_t;

    pmu_state_t state, next_state;

    // -------------------------------------------------------------------------
    // Timeout Counter
    // -------------------------------------------------------------------------
    logic [TIMEOUT_WIDTH-1:0] timeout_cnt;
    logic                     timeout_en;
    logic                     timeout_hit;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            timeout_cnt <= '0;
        end else if (!timeout_en) begin
            timeout_cnt <= '0;
        end else begin
            timeout_cnt <= timeout_cnt + 1'b1;
        end
    end

    assign timeout_hit = (timeout_cnt >= TIMEOUT_VAL[TIMEOUT_WIDTH-1:0]);

    // -------------------------------------------------------------------------
    // Boot Counter (wait N cycles before going ACTIVE)
    // -------------------------------------------------------------------------
    logic [7:0] boot_cnt;
    logic       boot_done;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            boot_cnt <= '0;
        end else if (state == ST_BOOT) begin
            boot_cnt <= boot_cnt + 1'b1;
        end else begin
            boot_cnt <= '0;
        end
    end

    assign boot_done = (boot_cnt >= 8'd15);

    // -------------------------------------------------------------------------
    // FSM Sequential Logic
    // -------------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            state <= ST_RESET;
        else
            state <= next_state;
    end

    // -------------------------------------------------------------------------
    // FSM Combinational Next-State Logic
    // -------------------------------------------------------------------------
    always_comb begin
        // Defaults
        next_state    = state;
        timeout_en    = 1'b0;
        seq_sleep_cmd = 1'b0;
        seq_wakeup_cmd= 1'b0;

        case (state)

            ST_RESET: begin
                next_state = ST_BOOT;
            end

            ST_BOOT: begin
                if (boot_done)
                    next_state = ST_ACTIVE;
            end

            ST_ACTIVE: begin
                if (fault_in || thermal_alert)
                    next_state = ST_FAULT;
                else if (battery_low)
                    next_state = ST_PRE_POWERDOWN;  // Force sleep on battery low
                else if (sleep_req && proc_idle && mem_idle)
                    next_state = ST_PRE_POWERDOWN;
            end

            ST_PRE_POWERDOWN: begin
                // One-cycle preparation state — validate conditions
                if (fault_in || thermal_alert)
                    next_state = ST_FAULT;
                else begin
                    seq_sleep_cmd = 1'b1;
                    next_state    = ST_WAIT_SEQ_ACK;
                end
            end

            ST_WAIT_SEQ_ACK: begin
                timeout_en = 1'b1;
                seq_sleep_cmd = 1'b1;  // Hold command until ack
                if (timeout_hit)
                    next_state = ST_FAULT;
                else if (seq_sleep_ack)
                    next_state = battery_low ? ST_DEEP_SLEEP : ST_SLEEP;
            end

            ST_SLEEP: begin
                if (wakeup_req)
                    next_state = ST_WAKEUP;
                else if (battery_low)
                    next_state = ST_DEEP_SLEEP;
            end

            ST_DEEP_SLEEP: begin
                if (wakeup_req && !battery_low)
                    next_state = ST_WAKEUP;
            end

            ST_WAKEUP: begin
                seq_wakeup_cmd = 1'b1;
                if (seq_wakeup_ack)
                    next_state = ST_ACTIVE;
            end

            ST_FAULT: begin
                // Sticky fault — only hardware reset clears
                next_state = ST_FAULT;
            end

            default: begin
                next_state = ST_FAULT;
            end

        endcase
    end

    // -------------------------------------------------------------------------
    // Output Logic
    // -------------------------------------------------------------------------
    always_comb begin
        pmu_active   = (state == ST_ACTIVE);
        pmu_sleeping = (state == ST_SLEEP) || (state == ST_DEEP_SLEEP);
        pmu_fault    = (state == ST_FAULT);
        pmu_state_out = state[3:0];
    end

    // -------------------------------------------------------------------------
    // Formal / Simulation Assertions
    // -------------------------------------------------------------------------
    // pragma translate_off
    `ifdef ASSERTIONS_ON

    // No transition from SLEEP directly to FAULT without going through WAKEUP
    property no_sleep_to_fault;
        @(posedge clk) disable iff (!rst_n)
        (state == ST_SLEEP) |-> (next_state != ST_FAULT);
    endproperty
    assert property (no_sleep_to_fault)
        else $error("[PMU] Illegal: SLEEP -> FAULT without WAKEUP");

    // seq_sleep_cmd should only be asserted in PRE_POWERDOWN or WAIT_SEQ_ACK
    property sleep_cmd_valid_state;
        @(posedge clk) disable iff (!rst_n)
        seq_sleep_cmd |-> (state == ST_PRE_POWERDOWN || state == ST_WAIT_SEQ_ACK);
    endproperty
    assert property (sleep_cmd_valid_state)
        else $error("[PMU] seq_sleep_cmd asserted in wrong state");

    // seq_wakeup_cmd should only be asserted in WAKEUP state
    property wakeup_cmd_valid_state;
        @(posedge clk) disable iff (!rst_n)
        seq_wakeup_cmd |-> (state == ST_WAKEUP);
    endproperty
    assert property (wakeup_cmd_valid_state)
        else $error("[PMU] seq_wakeup_cmd asserted in wrong state");

    // After RESET, must go to BOOT
    property reset_to_boot;
        @(posedge clk)
        $rose(rst_n) |=> (state == ST_BOOT);
    endproperty
    assert property (reset_to_boot)
        else $error("[PMU] Did not transition to BOOT after reset release");

    // Timeout must not fire unless in WAIT_SEQ_ACK
    property timeout_only_in_wait;
        @(posedge clk) disable iff (!rst_n)
        timeout_hit |-> (state == ST_WAIT_SEQ_ACK);
    endproperty
    assert property (timeout_only_in_wait)
        else $error("[PMU] Timeout fired outside WAIT_SEQ_ACK");

    `endif
    // pragma translate_on

endmodule : pmu_fsm
