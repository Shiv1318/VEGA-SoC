`timescale 1ns/1ps
module lvlshift_cell (
    input  logic data_in,
    input  logic lvl_en,
    output logic data_out
);
    assign data_out = lvl_en ? data_in : 1'b0;
endmodule : lvlshift_cell
