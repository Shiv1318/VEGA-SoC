`timescale 1ns/1ps
module iso_cell #(
    parameter logic CLAMP_VAL = 1'b0
)(
    input  logic data_in,
    input  logic iso_en,
    output logic data_out
);
    assign data_out = iso_en ? CLAMP_VAL : data_in;
endmodule : iso_cell
