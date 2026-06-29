// =============================================================================
// Module      : vega_top
// Project     : VEGA SoC
// Description : Top-level integration of all VEGA SoC blocks.
//               Three Power Domains:
//                 PD_AON  : PMU FSM + Wakeup Controller (always-on)
//                 PD_PROC : Data Processor
//                 PD_MEM  : Sensor Register Bank + Retention Controller
//               Power Sequencer and LP Cells are in PD_AON (always powered).
// =============================================================================

`timescale 1ns/1ps

module vega_top #(
    parameter int DATA_W        = 32,
    parameter int ADDR_W        = 8,
    parameter int TIMEOUT_WIDTH = 16,
    parameter int TIMEOUT_VAL   = 1000
)(
    // Primary Clock and Reset
    input  logic                clk,
    input  logic                rst_n,

    // ---- Wakeup Sources ----
    input  logic                ext_wakeup_in,
    input  logic                rtc_wakeup_in,
    input  logic                irq_wakeup_in,

    // Wakeup Enable Masks
    input  logic                ext_wakeup_en,
    input  logic                rtc_wakeup_en,
    input  logic                irq_wakeup_en,

    // ---- Fault / Environmental Inputs ----
    input  logic                thermal_alert,
    input  logic                battery_low,
    input  logic                fault_in,

    // ---- APB Interface to Data Processor ----
    input  logic                psel,
    input  logic                penable,
    input  logic                pwrite,
    input  logic [ADDR_W-1:0]   paddr,
    input  logic [DATA_W-1:0]   pwdata,
    output logic [DATA_W-1:0]   prdata,
    output logic                pready,
    output logic                pslverr,

    // ---- Sensor Register Bank Interface ----
    input  logic                reg_wr_en,
    input  logic                reg_rd_en,
    input  logic [ADDR_W-1:0]   reg_addr,
    input  logic [DATA_W-1:0]   reg_wdata,
    output logic [DATA_W-1:0]   reg_rdata,
    output logic                reg_ack,

    // ---- Sensor Data Inputs ----
    input  logic [DATA_W-1:0]   sensor0_data,
    input  logic [DATA_W-1:0]   sensor1_data,
    input  logic [DATA_W-1:0]   sensor2_data,

    // ---- PMU Status Outputs ----
    output logic                pmu_active,
    output logic                pmu_sleeping,
    output logic                pmu_fault,
    output logic [3:0]          pmu_state_out,

    // ---- Interrupt ----
    output logic                irq_out,

    // ---- Wakeup Source Status ----
    output logic [2:0]          wakeup_src_status
);

    // =========================================================================
    // Internal Wires
    // =========================================================================

    // PMU <-> Sequencer
    logic seq_sleep_cmd, seq_wakeup_cmd;
    logic seq_sleep_ack, seq_wakeup_ack;

    // Sequencer <-> LP Cells
    logic clk_gate_en, iso_en, pwr_sw_off, lvl_shift_en;

    // Sequencer <-> Retention Controller
    logic ret_save_en, ret_restore_en;
    logic ret_save_done, ret_restore_done;

    // Wakeup Controller <-> PMU
    logic wakeup_req;
    logic wakeup_clear;

    // Processor Idle
    logic proc_idle;

    // Sensor RegBank -> PMU
    logic pwr_ctrl_sleep_req;
    logic [1:0] pwr_ctrl_mode;

    // Interrupt from Processor
    logic proc_irq_in;
    logic proc_irq_ack;

    // Retention status
    logic context_saved, context_valid;

    // =========================================================================
    // sleep_req to PMU: either SW (regbank) or processor activity
    // =========================================================================
    logic sleep_req;
    assign sleep_req = pwr_ctrl_sleep_req;

    // Wakeup clear: once PMU is back in ACTIVE
    assign wakeup_clear = pmu_active;

    // Processor IRQ driven by sensor regbank
    assign proc_irq_in = irq_out;

    // =========================================================================
    // PD_AON: PMU FSM
    // =========================================================================
    pmu_fsm #(
        .TIMEOUT_WIDTH (TIMEOUT_WIDTH),
        .TIMEOUT_VAL   (TIMEOUT_VAL)
    ) u_pmu_fsm (
        .clk             (clk),
        .rst_n           (rst_n),
        .sleep_req       (sleep_req),
        .proc_idle       (proc_idle),
        .mem_idle        (1'b1),        // RegBank is always idle (no active ops)
        .wakeup_req      (wakeup_req),
        .seq_sleep_cmd   (seq_sleep_cmd),
        .seq_wakeup_cmd  (seq_wakeup_cmd),
        .seq_sleep_ack   (seq_sleep_ack),
        .seq_wakeup_ack  (seq_wakeup_ack),
        .thermal_alert   (thermal_alert),
        .battery_low     (battery_low),
        .fault_in        (fault_in),
        .pmu_active      (pmu_active),
        .pmu_sleeping    (pmu_sleeping),
        .pmu_fault       (pmu_fault),
        .pmu_state_out   (pmu_state_out)
    );

    // =========================================================================
    // PD_AON: Wakeup Controller
    // =========================================================================
    wakeup_ctrl u_wakeup_ctrl (
        .clk              (clk),
        .rst_n            (rst_n),
        .ext_wakeup_in    (ext_wakeup_in),
        .rtc_wakeup_in    (rtc_wakeup_in),
        .irq_wakeup_in    (irq_wakeup_in),
        .ext_wakeup_en    (ext_wakeup_en),
        .rtc_wakeup_en    (rtc_wakeup_en),
        .irq_wakeup_en    (irq_wakeup_en),
        .wakeup_clear     (wakeup_clear),
        .wakeup_req       (wakeup_req),
        .wakeup_src_status(wakeup_src_status)
    );

    // =========================================================================
    // PD_AON: Power Sequencer
    // =========================================================================
    power_sequencer u_power_sequencer (
        .clk             (clk),
        .rst_n           (rst_n),
        .seq_sleep_cmd   (seq_sleep_cmd),
        .seq_wakeup_cmd  (seq_wakeup_cmd),
        .seq_sleep_ack   (seq_sleep_ack),
        .seq_wakeup_ack  (seq_wakeup_ack),
        .ret_save_en     (ret_save_en),
        .ret_restore_en  (ret_restore_en),
        .ret_save_done   (ret_save_done),
        .ret_restore_done(ret_restore_done),
        .clk_gate_en     (clk_gate_en),
        .iso_en          (iso_en),
        .pwr_sw_off      (pwr_sw_off),
        .lvl_shift_en    (lvl_shift_en)
    );

    // =========================================================================
    // PD_MEM: Retention Controller
    // =========================================================================
    retention_ctrl u_retention_ctrl (
        .clk             (clk),
        .rst_n           (rst_n),
        .ret_save_en     (ret_save_en),
        .ret_restore_en  (ret_restore_en),
        .ret_save_done   (ret_save_done),
        .ret_restore_done(ret_restore_done),
        .context_saved   (context_saved),
        .context_valid   (context_valid)
    );

    // =========================================================================
    // PD_MEM: Sensor Register Bank
    // =========================================================================
    sensor_regbank u_sensor_regbank (
        .clk              (clk),
        .rst_n            (rst_n),
        .reg_wr_en        (reg_wr_en),
        .reg_rd_en        (reg_rd_en),
        .reg_addr         (reg_addr),
        .reg_wdata        (reg_wdata),
        .reg_rdata        (reg_rdata),
        .reg_ack          (reg_ack),
        .sensor0_data     (sensor0_data),
        .sensor1_data     (sensor1_data),
        .sensor2_data     (sensor2_data),
        .irq_out          (irq_out),
        .pwr_ctrl_sleep_req(pwr_ctrl_sleep_req),
        .pwr_ctrl_mode    (pwr_ctrl_mode)
    );

    // =========================================================================
    // PD_PROC: Data Processor with ICG cell at boundary
    // =========================================================================

    // ICG Cell: gate processor clock when sequencer asserts clk_gate_en
    logic clk_proc;
    icg_cell u_icg_proc (
        .clk_in  (clk),
        .enable  (~clk_gate_en),  // enable=1 = clock passes; gate_en=1 = stop clock
        .test_en (1'b0),
        .clk_out (clk_proc)
    );

    data_processor #(
        .DATA_W   (DATA_W),
        .ADDR_W   (ADDR_W)
    ) u_data_processor (
        .clk         (clk_proc),
        .rst_n       (rst_n),
        .clk_gate_en (clk_gate_en),
        .proc_idle   (proc_idle),
        .psel        (psel),
        .penable     (penable),
        .pwrite      (pwrite),
        .paddr       (paddr),
        .pwdata      (pwdata),
        .prdata      (prdata),
        .pready      (pready),
        .pslverr     (pslverr),
        .irq_in      (proc_irq_in),
        .irq_ack     (proc_irq_ack)
    );

    // =========================================================================
    // Isolation Cells on PD_PROC outputs (behavioral)
    // In real flow, these wrap crossing signals at PD_PROC boundary.
    // Here we isolate prdata and pready as representative signals.
    // =========================================================================
    logic [DATA_W-1:0] prdata_iso;
    logic              pready_iso;

    genvar gi;
    generate
        for (gi = 0; gi < DATA_W; gi++) begin : g_iso_prdata
            iso_cell u_iso (
                .data_in  (prdata[gi]),
                .iso_en   (iso_en),
                .data_out (prdata_iso[gi])
            );
        end
    endgenerate

    iso_cell u_iso_pready (
        .data_in  (pready),
        .iso_en   (iso_en),
        .data_out (pready_iso)
    );

    // Note: In this top, prdata/pready are taken directly from processor.
    // In a real chip, the isolated versions would drive the SoC bus fabric.
    // The isolation cells above demonstrate UPF intent.

endmodule : vega_top
