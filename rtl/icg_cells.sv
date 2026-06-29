// =============================================================================
// Module      : lp_cells
// Project     : VEGA SoC
// Description : Behavioral models of low-power standard cells.
//               In real implementation these map to foundry-specific cells.
//               ICG, Isolation, Level Shifter models for simulation.
// =============================================================================

`timescale 1ns/1ps

// -----------------------------------------------------------------------------
// ICG - Integrated Clock Gate Cell
// Synthesis-safe combinational model (no inferred latch).
// -----------------------------------------------------------------------------
module icg_cell (
    input  logic clk_in,
    input  logic enable,
    input  logic test_en,
    output logic clk_out
);
    assign clk_out = clk_in & (enable | test_en);
endmodule : icg_cell


// -----------------------------------------------------------------------------
// ISO - Isolation Cell
// -----------------------------------------------------------------------------
module iso_cell #(
    parameter logic CLAMP_VAL = 1'b0
)(
    input  logic data_in,
    input  logic iso_en,
    output logic data_out
);
    assign data_out = iso_en ? CLAMP_VAL : data_in;
endmodule : iso_cell


// -----------------------------------------------------------------------------
// LVLSHIFT - Level Shifter
// -----------------------------------------------------------------------------
module lvlshift_cell (
    input  logic data_in,
    input  logic lvl_en,
    output logic data_out
);
    assign data_out = lvl_en ? data_in : 1'b0;
endmodule : lvlshift_cell
