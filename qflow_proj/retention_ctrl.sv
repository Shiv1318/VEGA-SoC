// =============================================================================
// Module      : retention_ctrl
// Project     : VEGA SoC
// Description : Retention Controller - manages context save and restore for
//               PD_MEM domain. Handshakes with the Power Sequencer.
//               ret_save_done / ret_restore_done are REGISTERED outputs to
//               break the combinational loop with power_sequencer.
// =============================================================================

`timescale 1ns/1ps

module retention_ctrl #(
    parameter int SAVE_CYCLES    = 4,
    parameter int RESTORE_CYCLES = 4
)(
    input  logic clk,
    input  logic rst_n,

    // Interface with Power Sequencer
    input  logic ret_save_en,
    input  logic ret_restore_en,
    output logic ret_save_done,
    output logic ret_restore_done,

    // Retention status (for debug/assertions)
    output logic context_saved,
    output logic context_valid
);

    // -------------------------------------------------------------------------
    // FSM States
    // -------------------------------------------------------------------------
    typedef enum logic [2:0] {
        RET_IDLE    = 3'h0,
        RET_SAVING  = 3'h1,
        RET_SAVED   = 3'h2,
        RET_RESTORE = 3'h3,
        RET_DONE    = 3'h4
    } ret_state_t;

    ret_state_t state, next_state;

    // -------------------------------------------------------------------------
    // Operation Counter
    // -------------------------------------------------------------------------
    logic [3:0] op_cnt;
    logic       op_cnt_en;
    logic       save_complete;
    logic       restore_complete;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            op_cnt <= '0;
        else if (!op_cnt_en)
            op_cnt <= '0;
        else
            op_cnt <= op_cnt + 1'b1;
    end

    assign save_complete    = (op_cnt >= SAVE_CYCLES[3:0]);
    assign restore_complete = (op_cnt >= RESTORE_CYCLES[3:0]);

    // -------------------------------------------------------------------------
    // FSM Sequential
    // -------------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) state <= RET_IDLE;
        else        state <= next_state;
    end

    // -------------------------------------------------------------------------
    // FSM Combinational — internal signals only
    // -------------------------------------------------------------------------
    logic save_done_next, restore_done_next;
    logic ctx_saved_next, ctx_valid_next;

    always_comb begin
        next_state        = state;
        op_cnt_en         = 1'b0;
        save_done_next    = 1'b0;
        restore_done_next = 1'b0;
        ctx_saved_next    = 1'b0;
        ctx_valid_next    = 1'b0;

        case (state)

            RET_IDLE: begin
                if (ret_save_en)
                    next_state = RET_SAVING;
                else if (ret_restore_en)
                    next_state = RET_RESTORE;
            end

            RET_SAVING: begin
                op_cnt_en = 1'b1;
                if (save_complete)
                    next_state = RET_SAVED;
            end

            RET_SAVED: begin
                ctx_saved_next = 1'b1;
                save_done_next = 1'b1;
                if (!ret_save_en)
                    next_state = RET_IDLE;
            end

            RET_RESTORE: begin
                ctx_saved_next = 1'b1;
                op_cnt_en      = 1'b1;
                if (restore_complete)
                    next_state = RET_DONE;
            end

            RET_DONE: begin
                ctx_valid_next    = 1'b1;
                restore_done_next = 1'b1;
                if (!ret_restore_en)
                    next_state = RET_IDLE;
            end

            default: next_state = RET_IDLE;

        endcase
    end

    // -------------------------------------------------------------------------
    // Registered Outputs — breaks combinational loop with power_sequencer
    // -------------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ret_save_done    <= 1'b0;
            ret_restore_done <= 1'b0;
            context_saved    <= 1'b0;
            context_valid    <= 1'b0;
        end else begin
            ret_save_done    <= save_done_next;
            ret_restore_done <= restore_done_next;
            context_saved    <= ctx_saved_next;
            context_valid    <= ctx_valid_next;
        end
    end

    // -------------------------------------------------------------------------
    // Assertions
    // -------------------------------------------------------------------------
    // pragma translate_off
    `ifdef ASSERTIONS_ON

    property no_save_and_restore;
        @(posedge clk) disable iff (!rst_n)
        !(ret_save_en && ret_restore_en);
    endproperty
    assert property (no_save_and_restore)
        else $error("[RET] Save and restore requested simultaneously");

    property restore_only_after_save;
        @(posedge clk) disable iff (!rst_n)
        $rose(ret_restore_en) |-> context_saved;
    endproperty
    assert property (restore_only_after_save)
        else $error("[RET] Restore requested without prior save");

    `endif
    // pragma translate_on

endmodule : retention_ctrl
