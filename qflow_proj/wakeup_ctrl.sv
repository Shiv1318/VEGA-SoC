// =============================================================================
// Module      : wakeup_ctrl
// Project     : VEGA SoC
// Description : Wakeup Controller - aggregates wakeup sources (external GPIO,
//               RTC timer, interrupt line) and presents a clean single pulse
//               to the PMU. Includes edge detection, enable masking, and a
//               wakeup status register for software readback.
// =============================================================================

`timescale 1ns/1ps

module wakeup_ctrl (
    input  logic        clk,
    input  logic        rst_n,

    // Wakeup Source Inputs (raw, potentially async — sync'd internally)
    input  logic        ext_wakeup_in,      // External GPIO wakeup
    input  logic        rtc_wakeup_in,      // RTC timer wakeup
    input  logic        irq_wakeup_in,      // Interrupt-based wakeup

    // Enable Mask from PMU / Software
    input  logic        ext_wakeup_en,
    input  logic        rtc_wakeup_en,
    input  logic        irq_wakeup_en,

    // Clear from PMU once wakeup is processed
    input  logic        wakeup_clear,

    // Status Output
    output logic        wakeup_req,         // Aggregated wakeup to PMU
    output logic [2:0]  wakeup_src_status   // Which source triggered [ext,rtc,irq]
);

    // -------------------------------------------------------------------------
    // 2-FF Synchronizers for each async input
    // -------------------------------------------------------------------------
    logic ext_sync_0, ext_sync_1;
    logic rtc_sync_0, rtc_sync_1;
    logic irq_sync_0, irq_sync_1;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ext_sync_0 <= 1'b0; ext_sync_1 <= 1'b0;
            rtc_sync_0 <= 1'b0; rtc_sync_1 <= 1'b0;
            irq_sync_0 <= 1'b0; irq_sync_1 <= 1'b0;
        end else begin
            ext_sync_0 <= ext_wakeup_in; ext_sync_1 <= ext_sync_0;
            rtc_sync_0 <= rtc_wakeup_in; rtc_sync_1 <= rtc_sync_0;
            irq_sync_0 <= irq_wakeup_in; irq_sync_1 <= irq_sync_0;
        end
    end

    // -------------------------------------------------------------------------
    // Rising Edge Detection on synchronized inputs
    // -------------------------------------------------------------------------
    logic ext_prev, rtc_prev, irq_prev;
    logic ext_edge, rtc_edge, irq_edge;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ext_prev <= 1'b0;
            rtc_prev <= 1'b0;
            irq_prev <= 1'b0;
        end else begin
            ext_prev <= ext_sync_1;
            rtc_prev <= rtc_sync_1;
            irq_prev <= irq_sync_1;
        end
    end

    assign ext_edge = ext_sync_1 & ~ext_prev;
    assign rtc_edge = rtc_sync_1 & ~rtc_prev;
    assign irq_edge = irq_sync_1 & ~irq_prev;

    // -------------------------------------------------------------------------
    // Wakeup Source Status Registers (sticky until cleared)
    // -------------------------------------------------------------------------
    logic wakeup_ext_lat;
    logic wakeup_rtc_lat;
    logic wakeup_irq_lat;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wakeup_ext_lat <= 1'b0;
            wakeup_rtc_lat <= 1'b0;
            wakeup_irq_lat <= 1'b0;
        end else if (wakeup_clear) begin
            wakeup_ext_lat <= 1'b0;
            wakeup_rtc_lat <= 1'b0;
            wakeup_irq_lat <= 1'b0;
        end else begin
            if (ext_edge && ext_wakeup_en) wakeup_ext_lat <= 1'b1;
            if (rtc_edge && rtc_wakeup_en) wakeup_rtc_lat <= 1'b1;
            if (irq_edge && irq_wakeup_en) wakeup_irq_lat <= 1'b1;
        end
    end

    // -------------------------------------------------------------------------
    // Aggregated Wakeup Request
    // -------------------------------------------------------------------------
    assign wakeup_req        = wakeup_ext_lat | wakeup_rtc_lat | wakeup_irq_lat;
    assign wakeup_src_status = {wakeup_ext_lat, wakeup_rtc_lat, wakeup_irq_lat};

    // -------------------------------------------------------------------------
    // Assertions
    // -------------------------------------------------------------------------
    // pragma translate_off
    `ifdef ASSERTIONS_ON

    // wakeup_req must not be asserted when all enables are de-asserted and no latch is set
    property no_spurious_wakeup;
        @(posedge clk) disable iff (!rst_n)
        (!ext_wakeup_en && !rtc_wakeup_en && !irq_wakeup_en) |-> !wakeup_req;
    endproperty
    assert property (no_spurious_wakeup)
        else $error("[WAKEUP] Spurious wakeup_req asserted with all enables off");

    `endif
    // pragma translate_on

endmodule : wakeup_ctrl
