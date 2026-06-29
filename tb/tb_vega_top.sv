// =============================================================================
// Testbench  : tb_vega_top
// Project    : VEGA SoC
// Description: Custom directed testbench for full VEGA SoC integration.
//              Tests:
//                1. Power-On Reset
//                2. Boot to Active
//                3. Processor ALU operations (direct operand mode)
//                4. Register File read/write via APB
//                5. Sensor regbank write/read
//                6. IRQ threshold crossing and interrupt generation
//                7. Sleep entry sequence (SW sleep request)
//                8. Wakeup via RTC
//                9. Thermal fault injection
//               10. Battery-low deep sleep
// =============================================================================

`timescale 1ns/1ps
`define ASSERTIONS_ON

module tb_vega_top;

    // =========================================================================
    // Parameters
    // =========================================================================
    localparam int CLK_PERIOD   = 10;   // 100 MHz
    localparam int DATA_W       = 32;
    localparam int ADDR_W       = 8;

    // APB Register Addresses (Data Processor)
    localparam logic [7:0] DP_ADDR_OP      = 8'h00;
    localparam logic [7:0] DP_ADDR_OPND_A  = 8'h04;
    localparam logic [7:0] DP_ADDR_OPND_B  = 8'h08;
    localparam logic [7:0] DP_ADDR_RESULT  = 8'h0C;
    localparam logic [7:0] DP_ADDR_STATUS  = 8'h10;
    localparam logic [7:0] DP_ADDR_CTRL    = 8'h14;
    localparam logic [7:0] DP_ADDR_RF_BASE = 8'h18;

    // Sensor RegBank Addresses
    localparam logic [7:0] RB_ADDR_CTRL      = 8'h00;
    localparam logic [7:0] RB_ADDR_STATUS    = 8'h04;
    localparam logic [7:0] RB_ADDR_SENSOR0   = 8'h08;
    localparam logic [7:0] RB_ADDR_IRQ_MASK  = 8'h18;
    localparam logic [7:0] RB_ADDR_THRESH0   = 8'h1C;
    localparam logic [7:0] RB_ADDR_PWR_CTRL  = 8'h28;

    // ALU opcodes
    localparam logic [3:0] ALU_ADD = 4'h0;
    localparam logic [3:0] ALU_SUB = 4'h1;
    localparam logic [3:0] ALU_AND = 4'h2;
    localparam logic [3:0] ALU_OR  = 4'h3;
    localparam logic [3:0] ALU_XOR = 4'h4;
    localparam logic [3:0] ALU_CMP = 4'h7;

    // =========================================================================
    // DUT Signals
    // =========================================================================
    logic                    clk;
    logic                    rst_n;

    // Wakeup
    logic                    ext_wakeup_in;
    logic                    rtc_wakeup_in;
    logic                    irq_wakeup_in;
    logic                    ext_wakeup_en;
    logic                    rtc_wakeup_en;
    logic                    irq_wakeup_en;

    // Faults
    logic                    thermal_alert;
    logic                    battery_low;
    logic                    fault_in;

    // APB (Data Processor)
    logic                    psel;
    logic                    penable;
    logic                    pwrite;
    logic [ADDR_W-1:0]       paddr;
    logic [DATA_W-1:0]       pwdata;
    logic [DATA_W-1:0]       prdata;
    logic                    pready;
    logic                    pslverr;

    // Sensor RegBank
    logic                    reg_wr_en;
    logic                    reg_rd_en;
    logic [ADDR_W-1:0]       reg_addr;
    logic [DATA_W-1:0]       reg_wdata;
    logic [DATA_W-1:0]       reg_rdata;
    logic                    reg_ack;

    // Sensor data
    logic [DATA_W-1:0]       sensor0_data;
    logic [DATA_W-1:0]       sensor1_data;
    logic [DATA_W-1:0]       sensor2_data;

    // PMU Outputs
    logic                    pmu_active;
    logic                    pmu_sleeping;
    logic                    pmu_fault;
    logic [3:0]              pmu_state_out;

    // Interrupt
    logic                    irq_out;
    logic [2:0]              wakeup_src_status;

    // =========================================================================
    // DUT Instantiation
    // =========================================================================
    vega_top #(
        .DATA_W       (DATA_W),
        .ADDR_W       (ADDR_W),
        .TIMEOUT_WIDTH(16),
        .TIMEOUT_VAL  (100)     // Short timeout for testbench
    ) dut (.*);

    // =========================================================================
    // Clock Generation
    // =========================================================================
    initial clk = 1'b0;
    always #(CLK_PERIOD/2) clk = ~clk;

    // =========================================================================
    // Test Tracking
    // =========================================================================
    int test_pass_count = 0;
    int test_fail_count = 0;

    task automatic check(
        input string   test_name,
        input logic    condition,
        input string   pass_msg = "",
        input string   fail_msg = ""
    );
        if (condition) begin
            $display("[PASS] %0t | %s %s", $time, test_name, pass_msg);
            test_pass_count++;
        end else begin
            $display("[FAIL] %0t | %s %s", $time, test_name, fail_msg);
            test_fail_count++;
        end
    endtask

    // =========================================================================
    // APB Task: Write
    // =========================================================================
    task automatic apb_write(
        input logic [ADDR_W-1:0]  addr,
        input logic [DATA_W-1:0]  data
    );
        @(posedge clk);
        psel    = 1'b1;
        pwrite  = 1'b1;
        paddr   = addr;
        pwdata  = data;
        penable = 1'b0;
        @(posedge clk);
        penable = 1'b1;
        @(posedge clk);
        wait (pready);
        @(posedge clk);
        psel    = 1'b0;
        penable = 1'b0;
        pwrite  = 1'b0;
    endtask

    // =========================================================================
    // APB Task: Read
    // =========================================================================
    task automatic apb_read(
        input  logic [ADDR_W-1:0]  addr,
        output logic [DATA_W-1:0]  data
    );
        @(posedge clk);
        psel    = 1'b1;
        pwrite  = 1'b0;
        paddr   = addr;
        penable = 1'b0;
        @(posedge clk);
        penable = 1'b1;
        @(posedge clk);
        wait (pready);
        data    = prdata;
        @(posedge clk);
        psel    = 1'b0;
        penable = 1'b0;
    endtask

    // =========================================================================
    // RegBank Task: Write
    // =========================================================================
    task automatic rb_write(
        input logic [ADDR_W-1:0]  addr,
        input logic [DATA_W-1:0]  data
    );
        @(posedge clk);
        reg_wr_en = 1'b1;
        reg_rd_en = 1'b0;
        reg_addr  = addr;
        reg_wdata = data;
        @(posedge clk);
        reg_wr_en = 1'b0;
        @(posedge clk);
    endtask

    // =========================================================================
    // RegBank Task: Read
    // =========================================================================
    task automatic rb_read(
        input  logic [ADDR_W-1:0]  addr,
        output logic [DATA_W-1:0]  data
    );
        @(posedge clk);
        reg_rd_en = 1'b1;
        reg_wr_en = 1'b0;
        reg_addr  = addr;
        @(posedge clk);
        reg_rd_en = 1'b0;
        data      = reg_rdata;
        @(posedge clk);
    endtask

    // =========================================================================
    // Wait for PMU State
    // =========================================================================
    task automatic wait_pmu_state(
        input logic [3:0] target_state,
        input int         max_cycles = 500
    );
        int cnt = 0;
        while (pmu_state_out !== target_state && cnt < max_cycles) begin
            @(posedge clk);
            cnt++;
        end
        if (cnt >= max_cycles)
            $display("[WARN] %0t | Timeout waiting for PMU state %0h", $time, target_state);
    endtask

    // =========================================================================
    // VCD Dump
    // =========================================================================
    initial begin
        $dumpfile("vega_top.vcd");
        $dumpvars(0, tb_vega_top);
    end

    // =========================================================================
    // MAIN TEST SEQUENCE
    // =========================================================================
    logic [DATA_W-1:0] rd_data;

    initial begin
        // -----------------------------------------------------------------
        // Initialize all inputs
        // -----------------------------------------------------------------
        rst_n         = 1'b0;
        psel          = 1'b0;
        penable       = 1'b0;
        pwrite        = 1'b0;
        paddr         = '0;
        pwdata        = '0;
        reg_wr_en     = 1'b0;
        reg_rd_en     = 1'b0;
        reg_addr      = '0;
        reg_wdata     = '0;
        ext_wakeup_in = 1'b0;
        rtc_wakeup_in = 1'b0;
        irq_wakeup_in = 1'b0;
        ext_wakeup_en = 1'b0;
        rtc_wakeup_en = 1'b1;  // Enable RTC wakeup
        irq_wakeup_en = 1'b0;
        thermal_alert = 1'b0;
        battery_low   = 1'b0;
        fault_in      = 1'b0;
        sensor0_data  = 32'h0000_0010;
        sensor1_data  = 32'h0000_0020;
        sensor2_data  = 32'h0000_0030;

        // -----------------------------------------------------------------
        // TEST 1: Power-On Reset
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 1: Power-On Reset");
        $display("========================================");
        repeat(5) @(posedge clk);
        rst_n = 1'b1;
        @(posedge clk);
        check("PMU in BOOT state after reset", pmu_state_out === 4'h1,
              "PMU=BOOT", $sformatf("PMU=%0h", pmu_state_out));

        // -----------------------------------------------------------------
        // TEST 2: Boot to Active
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 2: Boot -> Active transition");
        $display("========================================");
        wait_pmu_state(4'h2, 200);  // Wait for ACTIVE (0x2)
        check("PMU transitions to ACTIVE", pmu_state_out === 4'h2,
              "PMU=ACTIVE", $sformatf("PMU=%0h", pmu_state_out));
        check("pmu_active asserted", pmu_active === 1'b1);
        check("pmu_sleeping de-asserted", pmu_sleeping === 1'b0);

        // -----------------------------------------------------------------
        // TEST 3: Data Processor - ALU ADD (direct operand mode)
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 3: Processor ALU ADD (direct mode)");
        $display("========================================");
        // Write operands
        apb_write(DP_ADDR_OPND_A, 32'h0000_00AA);
        apb_write(DP_ADDR_OPND_B, 32'h0000_0055);
        // Set opcode: ADD, rs1=0, rs2=0, rd=0
        apb_write(DP_ADDR_OP, {12'b0, ALU_ADD});
        // Set CTRL: start=1, use_rf=0, irq_en=0
        apb_write(DP_ADDR_CTRL, 32'h0000_0001);
        // Wait for done
        repeat(10) @(posedge clk);
        apb_read(DP_ADDR_RESULT, rd_data);
        check("ALU ADD: 0xAA + 0x55 = 0xFF", rd_data === 32'hFF,
              $sformatf("Got 0x%0h", rd_data), $sformatf("Expected 0xFF, Got 0x%0h", rd_data));

        // -----------------------------------------------------------------
        // TEST 4: Data Processor - ALU SUB
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 4: Processor ALU SUB");
        $display("========================================");
        apb_write(DP_ADDR_OPND_A, 32'h0000_0100);
        apb_write(DP_ADDR_OPND_B, 32'h0000_0001);
        apb_write(DP_ADDR_OP, {12'b0, ALU_SUB});
        apb_write(DP_ADDR_CTRL, 32'h0000_0001);
        repeat(10) @(posedge clk);
        apb_read(DP_ADDR_RESULT, rd_data);
        check("ALU SUB: 0x100 - 0x1 = 0xFF", rd_data === 32'hFF,
              $sformatf("Got 0x%0h", rd_data), $sformatf("Expected 0xFF, Got 0x%0h", rd_data));

        // -----------------------------------------------------------------
        // TEST 5: Data Processor - ALU AND
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 5: Processor ALU AND");
        $display("========================================");
        apb_write(DP_ADDR_OPND_A, 32'hFFFF_FFFF);
        apb_write(DP_ADDR_OPND_B, 32'h0A0A_0A0A);
        apb_write(DP_ADDR_OP, {12'b0, ALU_AND});
        apb_write(DP_ADDR_CTRL, 32'h0000_0001);
        repeat(10) @(posedge clk);
        apb_read(DP_ADDR_RESULT, rd_data);
        check("ALU AND: 0xFFFFFFFF & 0x0A0A0A0A = 0x0A0A0A0A",
              rd_data === 32'h0A0A_0A0A,
              $sformatf("Got 0x%0h", rd_data), $sformatf("Expected 0x0A0A0A0A, Got 0x%0h", rd_data));

        // -----------------------------------------------------------------
        // TEST 6: Data Processor - Register File Write/Read via APB
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 6: Processor Register File R/W");
        $display("========================================");
        // Write to RF[2] and RF[5]
        apb_write(DP_ADDR_RF_BASE + 8'h08, 32'hCAFE_BABE);  // RF[2]
        apb_write(DP_ADDR_RF_BASE + 8'h14, 32'hDEAD_C0DE);  // RF[5]
        apb_read(DP_ADDR_RF_BASE + 8'h08, rd_data);
        check("RF[2] write/read: 0xCAFEBABE", rd_data === 32'hCAFE_BABE,
              $sformatf("Got 0x%0h", rd_data), $sformatf("Expected 0xCAFEBABE, Got 0x%0h", rd_data));
        apb_read(DP_ADDR_RF_BASE + 8'h14, rd_data);
        check("RF[5] write/read: 0xDEADC0DE", rd_data === 32'hDEAD_C0DE,
              $sformatf("Got 0x%0h", rd_data), $sformatf("Expected 0xDEADC0DE, Got 0x%0h", rd_data));

        // -----------------------------------------------------------------
        // TEST 7: ALU CMP using RF values
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 7: Processor ALU CMP via RF");
        $display("========================================");
        // Load same value into RF[0] and RF[1]
        apb_write(DP_ADDR_RF_BASE + 8'h00, 32'h1234_5678);  // RF[0]
        apb_write(DP_ADDR_RF_BASE + 8'h04, 32'h1234_5678);  // RF[1]
        // OP: CMP, rs1=0, rs2=1, rd=3
        apb_write(DP_ADDR_OP, {4'b0011, 3'b001, 1'b0, 3'b000, 1'b0, ALU_CMP});
        // CTRL: start=1, use_rf=1
        apb_write(DP_ADDR_CTRL, 32'h0000_0003);
        repeat(10) @(posedge clk);
        apb_read(DP_ADDR_RESULT, rd_data);
        check("ALU CMP: equal values -> result=1", rd_data === 32'h1,
              $sformatf("Got 0x%0h", rd_data), $sformatf("Expected 1, Got 0x%0h", rd_data));

        // -----------------------------------------------------------------
        // TEST 8: Sensor RegBank - Control Register and Sensor Read
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 8: Sensor RegBank R/W");
        $display("========================================");
        // Enable IRQ in CTRL_REG (bit 9 = irq_en, bits 7:0 = enables)
        rb_write(RB_ADDR_CTRL, 32'h0000_02FF);
        rb_read(RB_ADDR_CTRL, rd_data);
        check("RegBank CTRL_REG write/read", rd_data === 32'h0000_02FF,
              $sformatf("Got 0x%0h", rd_data), $sformatf("Expected 0x2FF, Got 0x%0h", rd_data));

        // Read sensor 0 (driven as 0x10 by TB)
        rb_read(RB_ADDR_SENSOR0, rd_data);
        check("Sensor0 read: 0x10", rd_data === 32'h0000_0010,
              $sformatf("Got 0x%0h", rd_data), $sformatf("Expected 0x10, Got 0x%0h", rd_data));

        // -----------------------------------------------------------------
        // TEST 9: Sensor IRQ - Threshold Crossing
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 9: Sensor IRQ Threshold Crossing");
        $display("========================================");
        // Set threshold below current sensor0 value (0x10)
        // Sensor0 = 0x10, set threshold = 0x0F -> should trigger IRQ
        rb_write(RB_ADDR_THRESH0, 32'h0000_000F);
        // Enable IRQ mask bit 0
        rb_write(RB_ADDR_IRQ_MASK, 32'h0000_0001);
        repeat(5) @(posedge clk);
        check("irq_out asserted on threshold crossing", irq_out === 1'b1,
              "IRQ asserted", "IRQ not asserted");

        // -----------------------------------------------------------------
        // TEST 10: Sleep Entry via Software Sleep Request
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 10: Sleep Entry (SW Sleep Request)");
        $display("========================================");
        // Write sleep request to sensor regbank PWR_CTRL
        rb_write(RB_ADDR_PWR_CTRL, 32'h0000_0001);   // sleep_req = 1
        // Wait for PMU to enter SLEEP (0x5) or WAIT_SEQ_ACK (0x4) then SLEEP
        wait_pmu_state(4'h5, 500);
        check("PMU entered SLEEP", pmu_state_out === 4'h5,
              "PMU=SLEEP", $sformatf("PMU=%0h", pmu_state_out));
        check("pmu_sleeping asserted", pmu_sleeping === 1'b1);

        // -----------------------------------------------------------------
        // TEST 11: Wakeup via RTC
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 11: RTC Wakeup");
        $display("========================================");
        // Clear sleep request first
        rb_write(RB_ADDR_PWR_CTRL, 32'h0000_0000);
        // Assert RTC wakeup
        @(posedge clk);
        rtc_wakeup_in = 1'b1;
        repeat(3) @(posedge clk);
        rtc_wakeup_in = 1'b0;
        // Wait for PMU to go WAKEUP (0x7)
        wait_pmu_state(4'h7, 200);
        check("PMU entered WAKEUP", pmu_state_out === 4'h7,
              "PMU=WAKEUP", $sformatf("PMU=%0h", pmu_state_out));
        // Wait for ACTIVE
        wait_pmu_state(4'h2, 500);
        check("PMU returned to ACTIVE after wakeup", pmu_state_out === 4'h2,
              "PMU=ACTIVE", $sformatf("PMU=%0h", pmu_state_out));
        check("wakeup_src_status[1] (RTC) set", wakeup_src_status[1] === 1'b1,
              "RTC src set", $sformatf("wakeup_src_status=%0b", wakeup_src_status));

        // -----------------------------------------------------------------
        // TEST 12: Thermal Fault Injection
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 12: Thermal Fault Injection");
        $display("========================================");
        // Must be in ACTIVE first - wait for it
        wait_pmu_state(4'h2, 300);
        @(posedge clk);
        thermal_alert = 1'b1;
        wait_pmu_state(4'h8, 50);  // FAULT state = 0x8
        check("PMU entered FAULT on thermal alert", pmu_state_out === 4'h8,
              "PMU=FAULT", $sformatf("PMU=%0h", pmu_state_out));
        check("pmu_fault asserted", pmu_fault === 1'b1);

        // Reset to clear fault (sticky fault state)
        thermal_alert = 1'b0;
        @(posedge clk);
        rst_n = 1'b0;
        repeat(5) @(posedge clk);
        rst_n = 1'b1;
        wait_pmu_state(4'h2, 200);
        check("PMU recovered to ACTIVE after reset", pmu_state_out === 4'h2,
              "PMU=ACTIVE", $sformatf("PMU=%0h", pmu_state_out));

        // -----------------------------------------------------------------
        // TEST 13: Battery-Low -> Deep Sleep
        // -----------------------------------------------------------------
        $display("\n========================================");
        $display(" TEST 13: Battery-Low -> Deep Sleep");
        $display("========================================");
        @(posedge clk);
        battery_low = 1'b1;
        // Sleep request must come from SW too for PMU to act
        rb_write(RB_ADDR_PWR_CTRL, 32'h0000_0001);
        wait_pmu_state(4'h6, 500);  // DEEP_SLEEP = 0x6
        check("PMU entered DEEP_SLEEP on battery_low", pmu_state_out === 4'h6,
              "PMU=DEEP_SLEEP", $sformatf("PMU=%0h", pmu_state_out));
        // Only wakeup if battery NOT low; clear battery_low then wake
        battery_low   = 1'b0;
        rb_write(RB_ADDR_PWR_CTRL, 32'h0000_0000);
        rtc_wakeup_in = 1'b1;
        repeat(3) @(posedge clk);
        rtc_wakeup_in = 1'b0;
        wait_pmu_state(4'h2, 500);
        check("PMU returned to ACTIVE from DEEP_SLEEP", pmu_state_out === 4'h2,
              "PMU=ACTIVE", $sformatf("PMU=%0h", pmu_state_out));

        // -----------------------------------------------------------------
        // SUMMARY
        // -----------------------------------------------------------------
        repeat(20) @(posedge clk);
        $display("\n========================================");
        $display(" VEGA SoC SIMULATION SUMMARY");
        $display("========================================");
        $display(" PASS : %0d", test_pass_count);
        $display(" FAIL : %0d", test_fail_count);
        $display(" TOTAL: %0d", test_pass_count + test_fail_count);
        if (test_fail_count == 0)
            $display(" STATUS: ALL TESTS PASSED");
        else
            $display(" STATUS: SOME TESTS FAILED - CHECK LOG");
        $display("========================================\n");

        $finish;
    end

    // =========================================================================
    // Timeout Watchdog
    // =========================================================================
    initial begin
        #2_000_000;
        $display("[ERROR] Simulation timeout!");
        $finish;
    end

endmodule : tb_vega_top
