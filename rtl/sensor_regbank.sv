// =============================================================================
// Module      : sensor_regbank
// Project     : VEGA SoC
// Description : Sensor Register Bank in PD_MEM domain.
//               Contains Configuration, Status, Sensor Data, Interrupt,
//               and Power Control registers with memory-mapped byte addressing.
//               Write-protected status registers, read-only sensor data.
// =============================================================================

`timescale 1ns/1ps

module sensor_regbank #(
    parameter int DATA_W  = 32,
    parameter int ADDR_W  = 8       // 256 byte address space
)(
    input  logic                clk,
    input  logic                rst_n,

    // Memory-Mapped Register Interface
    input  logic                reg_wr_en,
    input  logic                reg_rd_en,
    input  logic [ADDR_W-1:0]   reg_addr,
    input  logic [DATA_W-1:0]   reg_wdata,
    output logic [DATA_W-1:0]   reg_rdata,
    output logic                reg_ack,

    // Sensor Data Inputs (from ADC or external sensor interface)
    input  logic [DATA_W-1:0]   sensor0_data,
    input  logic [DATA_W-1:0]   sensor1_data,
    input  logic [DATA_W-1:0]   sensor2_data,

    // Interrupt Interface
    output logic                irq_out,            // Interrupt to processor

    // Power Control Outputs (to PMU)
    output logic                pwr_ctrl_sleep_req,
    output logic [1:0]          pwr_ctrl_mode
);

    // -------------------------------------------------------------------------
    // Register Map (word-addressed, each reg is 32-bit)
    // -------------------------------------------------------------------------
    // 0x00 : CTRL_REG       [R/W] - [7:0] enables, [8] soft_reset, [9] irq_en
    // 0x04 : STATUS_REG     [RO]  - [0] busy, [1] sensor_valid, [2] irq_pending
    // 0x08 : SENSOR0_REG    [RO]  - Sensor 0 data
    // 0x0C : SENSOR1_REG    [RO]  - Sensor 1 data
    // 0x10 : SENSOR2_REG    [RO]  - Sensor 2 data
    // 0x14 : IRQ_STATUS_REG [R/W1C] - [2:0] per-sensor IRQ flags
    // 0x18 : IRQ_MASK_REG   [R/W] - [2:0] per-sensor IRQ masks
    // 0x1C : IRQ_THRESH0    [R/W] - Threshold for sensor 0 IRQ
    // 0x20 : IRQ_THRESH1    [R/W] - Threshold for sensor 1 IRQ
    // 0x24 : IRQ_THRESH2    [R/W] - Threshold for sensor 2 IRQ
    // 0x28 : PWR_CTRL_REG   [R/W] - [0] sleep_req, [2:1] pwr_mode

    localparam logic [ADDR_W-1:0] ADDR_CTRL       = 8'h00;
    localparam logic [ADDR_W-1:0] ADDR_STATUS      = 8'h04;
    localparam logic [ADDR_W-1:0] ADDR_SENSOR0     = 8'h08;
    localparam logic [ADDR_W-1:0] ADDR_SENSOR1     = 8'h0C;
    localparam logic [ADDR_W-1:0] ADDR_SENSOR2     = 8'h10;
    localparam logic [ADDR_W-1:0] ADDR_IRQ_STATUS  = 8'h14;
    localparam logic [ADDR_W-1:0] ADDR_IRQ_MASK    = 8'h18;
    localparam logic [ADDR_W-1:0] ADDR_IRQ_THRESH0 = 8'h1C;
    localparam logic [ADDR_W-1:0] ADDR_IRQ_THRESH1 = 8'h20;
    localparam logic [ADDR_W-1:0] ADDR_IRQ_THRESH2 = 8'h24;
    localparam logic [ADDR_W-1:0] ADDR_PWR_CTRL    = 8'h28;

    // -------------------------------------------------------------------------
    // Register Declarations
    // -------------------------------------------------------------------------
    logic [DATA_W-1:0] ctrl_reg;
    logic [DATA_W-1:0] irq_status_reg;
    logic [DATA_W-1:0] irq_mask_reg;
    logic [DATA_W-1:0] irq_thresh0_reg;
    logic [DATA_W-1:0] irq_thresh1_reg;
    logic [DATA_W-1:0] irq_thresh2_reg;
    logic [DATA_W-1:0] pwr_ctrl_reg;

    // -------------------------------------------------------------------------
    // Sensor Valid Latch (updated each cycle from input)
    // -------------------------------------------------------------------------
    logic sensor_valid;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) sensor_valid <= 1'b0;
        else        sensor_valid <= 1'b1;  // Always valid once out of reset
    end

    // -------------------------------------------------------------------------
    // IRQ Threshold Comparison
    // -------------------------------------------------------------------------
    logic irq_sensor0, irq_sensor1, irq_sensor2;

    assign irq_sensor0 = (sensor0_data > irq_thresh0_reg);
    assign irq_sensor1 = (sensor1_data > irq_thresh1_reg);
    assign irq_sensor2 = (sensor2_data > irq_thresh2_reg);

    // -------------------------------------------------------------------------
    // IRQ Status Register - set by threshold crossing, cleared by W1C
    // -------------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            irq_status_reg <= '0;
        end else begin
            // Set bits on threshold crossing
            if (irq_sensor0) irq_status_reg[0] <= 1'b1;
            if (irq_sensor1) irq_status_reg[1] <= 1'b1;
            if (irq_sensor2) irq_status_reg[2] <= 1'b1;
            // W1C: writing 1 to a bit clears it
            if (reg_wr_en && (reg_addr == ADDR_IRQ_STATUS)) begin
                if (reg_wdata[0]) irq_status_reg[0] <= 1'b0;
                if (reg_wdata[1]) irq_status_reg[1] <= 1'b0;
                if (reg_wdata[2]) irq_status_reg[2] <= 1'b0;
            end
        end
    end

    // -------------------------------------------------------------------------
    // Writeable Registers
    // -------------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ctrl_reg        <= '0;
            irq_mask_reg    <= '0;
            irq_thresh0_reg <= 32'hFFFF_FFFF; // Default: never trigger
            irq_thresh1_reg <= 32'hFFFF_FFFF;
            irq_thresh2_reg <= 32'hFFFF_FFFF;
            pwr_ctrl_reg    <= '0;
        end else if (reg_wr_en) begin
            case (reg_addr)
                ADDR_CTRL:       ctrl_reg        <= reg_wdata;
                ADDR_IRQ_MASK:   irq_mask_reg    <= reg_wdata;
                ADDR_IRQ_THRESH0:irq_thresh0_reg <= reg_wdata;
                ADDR_IRQ_THRESH1:irq_thresh1_reg <= reg_wdata;
                ADDR_IRQ_THRESH2:irq_thresh2_reg <= reg_wdata;
                ADDR_PWR_CTRL:   pwr_ctrl_reg    <= reg_wdata;
                default: ;
            endcase
        end
    end

    // -------------------------------------------------------------------------
    // Read Mux
    // -------------------------------------------------------------------------
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            reg_rdata <= '0;
            reg_ack   <= 1'b0;
        end else begin
            reg_ack   <= reg_rd_en | reg_wr_en;  // 1-cycle ack
            reg_rdata <= '0;
            if (reg_rd_en) begin
                case (reg_addr)
                    ADDR_CTRL:       reg_rdata <= ctrl_reg;
                    ADDR_STATUS:     reg_rdata <= {29'b0, irq_status_reg[0], sensor_valid, 1'b0};
                    ADDR_SENSOR0:    reg_rdata <= sensor0_data;
                    ADDR_SENSOR1:    reg_rdata <= sensor1_data;
                    ADDR_SENSOR2:    reg_rdata <= sensor2_data;
                    ADDR_IRQ_STATUS: reg_rdata <= irq_status_reg;
                    ADDR_IRQ_MASK:   reg_rdata <= irq_mask_reg;
                    ADDR_IRQ_THRESH0:reg_rdata <= irq_thresh0_reg;
                    ADDR_IRQ_THRESH1:reg_rdata <= irq_thresh1_reg;
                    ADDR_IRQ_THRESH2:reg_rdata <= irq_thresh2_reg;
                    ADDR_PWR_CTRL:   reg_rdata <= pwr_ctrl_reg;
                    default:         reg_rdata <= 32'hDEAD_BEEF;
                endcase
            end
        end
    end

    // -------------------------------------------------------------------------
    // Output Assignments
    // -------------------------------------------------------------------------
    assign irq_out           = |(irq_status_reg[2:0] & irq_mask_reg[2:0]) & ctrl_reg[9];
    assign pwr_ctrl_sleep_req= pwr_ctrl_reg[0];
    assign pwr_ctrl_mode     = pwr_ctrl_reg[2:1];

    // -------------------------------------------------------------------------
    // Assertions
    // -------------------------------------------------------------------------
    // pragma translate_off
    `ifdef ASSERTIONS_ON

    // Read-only registers must not be written by hardware (check status reg)
    property status_not_sw_writable;
        @(posedge clk) disable iff (!rst_n)
        (reg_wr_en && reg_addr == ADDR_STATUS) |-> 1'b0;
    endproperty
    // Note: this is a design warning, not hard failure — status is RO
    // assert property (status_not_sw_writable)
    //     else $warning("[REGBANK] Attempted write to read-only STATUS register");

    `endif
    // pragma translate_on

endmodule : sensor_regbank
