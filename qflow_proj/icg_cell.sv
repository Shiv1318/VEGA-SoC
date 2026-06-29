`timescale 1ns/1ps
module icg_cell (
    input  logic clk_in,
    input  logic enable,
    input  logic test_en,
    output logic clk_out
);
    assign clk_out = clk_in & (enable | test_en);
endmodule : icg_cell
