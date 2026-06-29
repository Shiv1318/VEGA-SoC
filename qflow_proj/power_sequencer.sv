// =============================================================================
// Module      : power_sequencer
// Project     : VEGA SoC
// Description : Power Sequencer - executes the ordered sleep and wakeup
//               sequences commanded by the PMU. This is the ONLY module that
//               asserts clock gate, isolation, retention save/restore, and
//               power switch controls. PMU only sends commands.
//
// Sleep Entry Sequence:
//   Clock Gate ON -> Isolation ON -> Retention SAVE -> Power OFF
//
// Wakeup Sequence:
//   Power ON -> Retention RESTORE -> Isolation OFF -> Clock Gate OFF
// =============================================================================

`timescale 1ns/1ps

module power_sequencer #(
    parameter int STEP_DELAY = 8   // Cycles to hold each sequencing step
)(
    input  logic clk,
    input  logic rst_n,

    // PMU Command Interface
    input  logic seq_sleep_cmd,     // PMU commands sleep sequence
    input  logic seq_wakeup_cmd,    // PMU commands wakeup sequence
    output logic seq_sleep_ack,     // Sequencer done with sleep
    output logic seq_wakeup_ack,    // Sequencer done with wakeup

    // Retention Controller Handshake
    output logic ret_save_en,       // Tell retention ctrl to SAVE
    output logic ret_restore_en,    // Tell retention ctrl to RESTORE
    input  logic ret_save_done,     // Retention save complete
    input  logic ret_restore_done,  // Retention restore complete

    // Low Power Cell Controls
    output logic clk_gate_en,       // Assert to gate clock (ICG enable)
    output logic iso_en,            // Assert to enable isolation cells
    output logic pwr_sw_off,        // Assert to cut power to PD_PROC / PD_MEM

    // Level Shifter Enable (always on in this simple model)
    output logic lvl_shift_en
);

    // -------------------------------------------------------------------------
    // FSM State Encoding
    // -------------------------------------------------------------------------
    typedef enum logic [3:0] {
        SQ_IDLE          = 4'h0,
        // Sleep Entry
        SQ_CLK_GATE      = 4'h1,
        SQ_ISOLATE       = 4'h2,
        SQ_RET_SAVE      = 4'h3,
        SQ_PWR_OFF       = 4'h4,
        SQ_SLEEP_DONE    = 4'h5,
        // Wakeup
        SQ_PWR_ON        = 4'h6,
        SQ_RET_RESTORE   = 4'h7,
        SQ_DE_ISOLATE    = 4'h8,
        SQ_CLK_UNGATE    = 4'h9,
        SQ_WAKEUP_DONE   = 4'hA
    } seq_state_t;

    seq_state_t state, next_state;

    // -------------------------------------------------------------------------
    // Step Delay Counter
    // -------------------------------------------------------------------------
    logic [$clog2(STEP_DELAY+1)-1:0] step_cnt;
    logic step_done;
    logic step_cnt_en;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            step_cnt <= '0;
        else if (!step_cnt_en)
            step_cnt <= '0;
        else
            step_cnt <= step_cnt + 1'b1;
    end

    assign step_done = (step_cnt >= STEP_DELAY[$clog2(STEP_DELAY+1)-1:0]);

    // -------------------------------------------------------------------------
    // FSM Sequential
    // -------------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) state <= SQ_IDLE;
        else        state <= next_state;
    end

    // -------------------------------------------------------------------------
    // FSM Combinational
    // -------------------------------------------------------------------------
    always_comb begin
        next_state      = state;
        step_cnt_en     = 1'b0;
        seq_sleep_ack   = 1'b0;
        seq_wakeup_ack  = 1'b0;
        ret_save_en     = 1'b0;
        ret_restore_en  = 1'b0;
        clk_gate_en     = 1'b0;
        iso_en          = 1'b0;
        pwr_sw_off      = 1'b0;
        lvl_shift_en    = 1'b1;    // Level shifters always on

        case (state)

            SQ_IDLE: begin
                if (seq_sleep_cmd)
                    next_state = SQ_CLK_GATE;
                else if (seq_wakeup_cmd)
                    next_state = SQ_PWR_ON;
            end

            // ------ Sleep Entry ------

            SQ_CLK_GATE: begin
                clk_gate_en = 1'b1;
                step_cnt_en = 1'b1;
                if (step_done) next_state = SQ_ISOLATE;
            end

            SQ_ISOLATE: begin
                clk_gate_en = 1'b1;
                iso_en      = 1'b1;
                step_cnt_en = 1'b1;
                if (step_done) next_state = SQ_RET_SAVE;
            end

            SQ_RET_SAVE: begin
                clk_gate_en = 1'b1;
                iso_en      = 1'b1;
                ret_save_en = 1'b1;
                if (ret_save_done) next_state = SQ_PWR_OFF;
            end

            SQ_PWR_OFF: begin
                clk_gate_en = 1'b1;
                iso_en      = 1'b1;
                pwr_sw_off  = 1'b1;
                step_cnt_en = 1'b1;
                if (step_done) next_state = SQ_SLEEP_DONE;
            end

            SQ_SLEEP_DONE: begin
                clk_gate_en   = 1'b1;
                iso_en        = 1'b1;
                pwr_sw_off    = 1'b1;
                seq_sleep_ack = 1'b1;
                if (!seq_sleep_cmd) next_state = SQ_IDLE;
            end

            // ------ Wakeup ------

            SQ_PWR_ON: begin
                iso_en      = 1'b1;     // Keep isolation while power ramps
                clk_gate_en = 1'b1;     // Keep clock gated while restoring
                step_cnt_en = 1'b1;
                if (step_done) next_state = SQ_RET_RESTORE;
            end

            SQ_RET_RESTORE: begin
                iso_en          = 1'b1;
                clk_gate_en     = 1'b1;
                ret_restore_en  = 1'b1;
                if (ret_restore_done) next_state = SQ_DE_ISOLATE;
            end

            SQ_DE_ISOLATE: begin
                clk_gate_en = 1'b1;
                iso_en      = 1'b0;     // De-assert isolation
                step_cnt_en = 1'b1;
                if (step_done) next_state = SQ_CLK_UNGATE;
            end

            SQ_CLK_UNGATE: begin
                clk_gate_en = 1'b0;     // Release clock gate
                step_cnt_en = 1'b1;
                if (step_done) next_state = SQ_WAKEUP_DONE;
            end

            SQ_WAKEUP_DONE: begin
                seq_wakeup_ack = 1'b1;
                if (!seq_wakeup_cmd) next_state = SQ_IDLE;
            end

            default: next_state = SQ_IDLE;

        endcase
    end

    // -------------------------------------------------------------------------
    // Assertions
    // -------------------------------------------------------------------------
    // pragma translate_off
    `ifdef ASSERTIONS_ON

    // Must not assert both save and restore simultaneously
    property no_simultaneous_ret;
        @(posedge clk) disable iff (!rst_n)
        !(ret_save_en && ret_restore_en);
    endproperty
    assert property (no_simultaneous_ret)
        else $error("[SEQ] ret_save_en and ret_restore_en both asserted");

    // Power must not be switched off before isolation
    property iso_before_pwr_off;
        @(posedge clk) disable iff (!rst_n)
        $rose(pwr_sw_off) |-> iso_en;
    endproperty
    assert property (iso_before_pwr_off)
        else $error("[SEQ] Power switched off before isolation enabled");

    // Clock must be gated before isolation
    property clkgate_before_iso;
        @(posedge clk) disable iff (!rst_n)
        $rose(iso_en) |-> clk_gate_en;
    endproperty
    assert property (clkgate_before_iso)
        else $error("[SEQ] Isolation asserted before clock gate");

    `endif
    // pragma translate_on

endmodule : power_sequencer
