// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_vega_top__Syms.h"


VL_ATTR_COLD void Vtb_vega_top___024root__trace_init_sub__TOP__0(Vtb_vega_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_vega_top ");
    tracep->declBus(c+209,"CLK_PERIOD", false,-1, 31,0);
    tracep->declBus(c+210,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+211,"ADDR_W", false,-1, 31,0);
    tracep->declBus(c+212,"DP_ADDR_OP", false,-1, 7,0);
    tracep->declBus(c+213,"DP_ADDR_OPND_A", false,-1, 7,0);
    tracep->declBus(c+214,"DP_ADDR_OPND_B", false,-1, 7,0);
    tracep->declBus(c+215,"DP_ADDR_RESULT", false,-1, 7,0);
    tracep->declBus(c+216,"DP_ADDR_STATUS", false,-1, 7,0);
    tracep->declBus(c+217,"DP_ADDR_CTRL", false,-1, 7,0);
    tracep->declBus(c+218,"DP_ADDR_RF_BASE", false,-1, 7,0);
    tracep->declBus(c+212,"RB_ADDR_CTRL", false,-1, 7,0);
    tracep->declBus(c+213,"RB_ADDR_STATUS", false,-1, 7,0);
    tracep->declBus(c+214,"RB_ADDR_SENSOR0", false,-1, 7,0);
    tracep->declBus(c+218,"RB_ADDR_IRQ_MASK", false,-1, 7,0);
    tracep->declBus(c+219,"RB_ADDR_THRESH0", false,-1, 7,0);
    tracep->declBus(c+220,"RB_ADDR_PWR_CTRL", false,-1, 7,0);
    tracep->declBus(c+221,"ALU_ADD", false,-1, 3,0);
    tracep->declBus(c+222,"ALU_SUB", false,-1, 3,0);
    tracep->declBus(c+223,"ALU_AND", false,-1, 3,0);
    tracep->declBus(c+224,"ALU_OR", false,-1, 3,0);
    tracep->declBus(c+225,"ALU_XOR", false,-1, 3,0);
    tracep->declBus(c+226,"ALU_CMP", false,-1, 3,0);
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+2,"ext_wakeup_in", false,-1);
    tracep->declBit(c+3,"rtc_wakeup_in", false,-1);
    tracep->declBit(c+4,"irq_wakeup_in", false,-1);
    tracep->declBit(c+5,"ext_wakeup_en", false,-1);
    tracep->declBit(c+6,"rtc_wakeup_en", false,-1);
    tracep->declBit(c+7,"irq_wakeup_en", false,-1);
    tracep->declBit(c+8,"thermal_alert", false,-1);
    tracep->declBit(c+9,"battery_low", false,-1);
    tracep->declBit(c+10,"fault_in", false,-1);
    tracep->declBit(c+11,"psel", false,-1);
    tracep->declBit(c+12,"penable", false,-1);
    tracep->declBit(c+13,"pwrite", false,-1);
    tracep->declBus(c+14,"paddr", false,-1, 7,0);
    tracep->declBus(c+15,"pwdata", false,-1, 31,0);
    tracep->declBus(c+121,"prdata", false,-1, 31,0);
    tracep->declBit(c+122,"pready", false,-1);
    tracep->declBit(c+123,"pslverr", false,-1);
    tracep->declBit(c+16,"reg_wr_en", false,-1);
    tracep->declBit(c+17,"reg_rd_en", false,-1);
    tracep->declBus(c+18,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+19,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+77,"reg_rdata", false,-1, 31,0);
    tracep->declBit(c+78,"reg_ack", false,-1);
    tracep->declBus(c+20,"sensor0_data", false,-1, 31,0);
    tracep->declBus(c+21,"sensor1_data", false,-1, 31,0);
    tracep->declBus(c+22,"sensor2_data", false,-1, 31,0);
    tracep->declBit(c+79,"pmu_active", false,-1);
    tracep->declBit(c+80,"pmu_sleeping", false,-1);
    tracep->declBit(c+81,"pmu_fault", false,-1);
    tracep->declBus(c+82,"pmu_state_out", false,-1, 3,0);
    tracep->declBit(c+191,"irq_out", false,-1);
    tracep->declBus(c+83,"wakeup_src_status", false,-1, 2,0);
    tracep->declBus(c+23,"test_pass_count", false,-1, 31,0);
    tracep->declBus(c+24,"test_fail_count", false,-1, 31,0);
    tracep->declBus(c+25,"rd_data", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+210,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+211,"ADDR_W", false,-1, 31,0);
    tracep->declBus(c+227,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+228,"TIMEOUT_VAL", false,-1, 31,0);
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+2,"ext_wakeup_in", false,-1);
    tracep->declBit(c+3,"rtc_wakeup_in", false,-1);
    tracep->declBit(c+4,"irq_wakeup_in", false,-1);
    tracep->declBit(c+5,"ext_wakeup_en", false,-1);
    tracep->declBit(c+6,"rtc_wakeup_en", false,-1);
    tracep->declBit(c+7,"irq_wakeup_en", false,-1);
    tracep->declBit(c+8,"thermal_alert", false,-1);
    tracep->declBit(c+9,"battery_low", false,-1);
    tracep->declBit(c+10,"fault_in", false,-1);
    tracep->declBit(c+11,"psel", false,-1);
    tracep->declBit(c+12,"penable", false,-1);
    tracep->declBit(c+13,"pwrite", false,-1);
    tracep->declBus(c+14,"paddr", false,-1, 7,0);
    tracep->declBus(c+15,"pwdata", false,-1, 31,0);
    tracep->declBus(c+121,"prdata", false,-1, 31,0);
    tracep->declBit(c+122,"pready", false,-1);
    tracep->declBit(c+123,"pslverr", false,-1);
    tracep->declBit(c+16,"reg_wr_en", false,-1);
    tracep->declBit(c+17,"reg_rd_en", false,-1);
    tracep->declBus(c+18,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+19,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+77,"reg_rdata", false,-1, 31,0);
    tracep->declBit(c+78,"reg_ack", false,-1);
    tracep->declBus(c+20,"sensor0_data", false,-1, 31,0);
    tracep->declBus(c+21,"sensor1_data", false,-1, 31,0);
    tracep->declBus(c+22,"sensor2_data", false,-1, 31,0);
    tracep->declBit(c+79,"pmu_active", false,-1);
    tracep->declBit(c+80,"pmu_sleeping", false,-1);
    tracep->declBit(c+81,"pmu_fault", false,-1);
    tracep->declBus(c+82,"pmu_state_out", false,-1, 3,0);
    tracep->declBit(c+191,"irq_out", false,-1);
    tracep->declBus(c+83,"wakeup_src_status", false,-1, 2,0);
    tracep->declBit(c+59,"seq_sleep_cmd", false,-1);
    tracep->declBit(c+84,"seq_wakeup_cmd", false,-1);
    tracep->declBit(c+60,"seq_sleep_ack", false,-1);
    tracep->declBit(c+61,"seq_wakeup_ack", false,-1);
    tracep->declBit(c+62,"clk_gate_en", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+64,"pwr_sw_off", false,-1);
    tracep->declBit(c+65,"lvl_shift_en", false,-1);
    tracep->declBit(c+66,"ret_save_en", false,-1);
    tracep->declBit(c+67,"ret_restore_en", false,-1);
    tracep->declBit(c+85,"ret_save_done", false,-1);
    tracep->declBit(c+86,"ret_restore_done", false,-1);
    tracep->declBit(c+87,"wakeup_req", false,-1);
    tracep->declBit(c+79,"wakeup_clear", false,-1);
    tracep->declBit(c+170,"proc_idle", false,-1);
    tracep->declBit(c+88,"pwr_ctrl_sleep_req", false,-1);
    tracep->declBus(c+89,"pwr_ctrl_mode", false,-1, 1,0);
    tracep->declBit(c+191,"proc_irq_in", false,-1);
    tracep->declBit(c+199,"proc_irq_ack", false,-1);
    tracep->declBit(c+90,"context_saved", false,-1);
    tracep->declBit(c+91,"context_valid", false,-1);
    tracep->declBit(c+88,"sleep_req", false,-1);
    tracep->declBit(c+200,"clk_proc", false,-1);
    tracep->declBus(c+201,"prdata_iso", false,-1, 31,0);
    tracep->declBit(c+26,"pready_iso", false,-1);
    tracep->pushNamePrefix("g_iso_prdata[0] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+124,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+27,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[10] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+125,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+28,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[11] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+126,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+29,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[12] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+127,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+30,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[13] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+128,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+31,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[14] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+129,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+32,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[15] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+130,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+33,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[16] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+131,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+34,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[17] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+132,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+35,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[18] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+133,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+36,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[19] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+134,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+37,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[1] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+135,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+38,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[20] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+136,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+39,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[21] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+137,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+40,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[22] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+138,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+41,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[23] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+139,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+42,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[24] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+140,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+43,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[25] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+141,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+44,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[26] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+142,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+45,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[27] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+143,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+46,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[28] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+144,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+47,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[29] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+145,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+48,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[2] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+146,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+49,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[30] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+147,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+50,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[31] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+148,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+51,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[3] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+149,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+52,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[4] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+150,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+53,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[5] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+151,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+54,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[6] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+152,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+55,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[7] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+153,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+56,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[8] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+154,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+57,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_iso_prdata[9] ");
    tracep->pushNamePrefix("u_iso ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+155,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+58,"data_out", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_data_processor ");
    tracep->declBus(c+210,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+211,"ADDR_W", false,-1, 31,0);
    tracep->declBus(c+211,"RF_DEPTH", false,-1, 31,0);
    tracep->declBit(c+200,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+62,"clk_gate_en", false,-1);
    tracep->declBit(c+170,"proc_idle", false,-1);
    tracep->declBit(c+11,"psel", false,-1);
    tracep->declBit(c+12,"penable", false,-1);
    tracep->declBit(c+13,"pwrite", false,-1);
    tracep->declBus(c+14,"paddr", false,-1, 7,0);
    tracep->declBus(c+15,"pwdata", false,-1, 31,0);
    tracep->declBus(c+121,"prdata", false,-1, 31,0);
    tracep->declBit(c+122,"pready", false,-1);
    tracep->declBit(c+123,"pslverr", false,-1);
    tracep->declBit(c+191,"irq_in", false,-1);
    tracep->declBit(c+199,"irq_ack", false,-1);
    tracep->declBit(c+202,"clk_gated", false,-1);
    tracep->declBus(c+212,"ADDR_OP", false,-1, 7,0);
    tracep->declBus(c+213,"ADDR_OPND_A", false,-1, 7,0);
    tracep->declBus(c+214,"ADDR_OPND_B", false,-1, 7,0);
    tracep->declBus(c+215,"ADDR_RESULT", false,-1, 7,0);
    tracep->declBus(c+216,"ADDR_STATUS", false,-1, 7,0);
    tracep->declBus(c+217,"ADDR_CTRL", false,-1, 7,0);
    tracep->declBus(c+218,"ADDR_RF_BASE", false,-1, 7,0);
    tracep->declBus(c+171,"state", false,-1, 2,0);
    tracep->declBus(c+203,"next_state", false,-1, 2,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+156+i*1,"regfile", true,(i+0), 31,0);
    }
    tracep->declBus(c+179,"op_reg", false,-1, 31,0);
    tracep->declBus(c+164,"operand_a_reg", false,-1, 31,0);
    tracep->declBus(c+165,"operand_b_reg", false,-1, 31,0);
    tracep->declBus(c+166,"result_reg", false,-1, 31,0);
    tracep->declBus(c+180,"ctrl_reg", false,-1, 31,0);
    tracep->declBus(c+181,"opcode", false,-1, 3,0);
    tracep->declBus(c+182,"rs1_idx", false,-1, 2,0);
    tracep->declBus(c+183,"rs2_idx", false,-1, 2,0);
    tracep->declBus(c+184,"rd_idx", false,-1, 2,0);
    tracep->declBus(c+185,"alu_a", false,-1, 31,0);
    tracep->declBus(c+186,"alu_b", false,-1, 31,0);
    tracep->declBus(c+187,"alu_result", false,-1, 31,0);
    tracep->declBit(c+188,"alu_overflow", false,-1);
    tracep->declBus(c+172,"pipe_result", false,-1, 31,0);
    tracep->declBus(c+173,"pipe_rd_idx", false,-1, 2,0);
    tracep->declBit(c+174,"pipe_valid", false,-1);
    tracep->declBus(c+175,"pipe_opcode", false,-1, 3,0);
    tracep->declBit(c+176,"irq_pending", false,-1);
    tracep->declBit(c+189,"irq_en", false,-1);
    tracep->declBit(c+177,"overflow_flag", false,-1);
    tracep->declBit(c+178,"op_done", false,-1);
    tracep->declBit(c+190,"start_pulse", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+167,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+168,"rf_idx", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+169,"rf_idx", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_icg_proc ");
    tracep->declBit(c+198,"clk_in", false,-1);
    tracep->declBit(c+68,"enable", false,-1);
    tracep->declBit(c+229,"test_en", false,-1);
    tracep->declBit(c+200,"clk_out", false,-1);
    tracep->declBit(c+204,"enable_latched", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_iso_pready ");
    tracep->declBit(c+229,"CLAMP_VAL", false,-1);
    tracep->declBit(c+122,"data_in", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+26,"data_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pmu_fsm ");
    tracep->declBus(c+227,"TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+228,"TIMEOUT_VAL", false,-1, 31,0);
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+88,"sleep_req", false,-1);
    tracep->declBit(c+170,"proc_idle", false,-1);
    tracep->declBit(c+230,"mem_idle", false,-1);
    tracep->declBit(c+87,"wakeup_req", false,-1);
    tracep->declBit(c+59,"seq_sleep_cmd", false,-1);
    tracep->declBit(c+84,"seq_wakeup_cmd", false,-1);
    tracep->declBit(c+60,"seq_sleep_ack", false,-1);
    tracep->declBit(c+61,"seq_wakeup_ack", false,-1);
    tracep->declBit(c+8,"thermal_alert", false,-1);
    tracep->declBit(c+9,"battery_low", false,-1);
    tracep->declBit(c+10,"fault_in", false,-1);
    tracep->declBit(c+79,"pmu_active", false,-1);
    tracep->declBit(c+80,"pmu_sleeping", false,-1);
    tracep->declBit(c+81,"pmu_fault", false,-1);
    tracep->declBus(c+82,"pmu_state_out", false,-1, 3,0);
    tracep->declBus(c+92,"state", false,-1, 3,0);
    tracep->declBus(c+205,"next_state", false,-1, 3,0);
    tracep->declBus(c+93,"timeout_cnt", false,-1, 15,0);
    tracep->declBit(c+94,"timeout_en", false,-1);
    tracep->declBit(c+95,"timeout_hit", false,-1);
    tracep->declBus(c+96,"boot_cnt", false,-1, 7,0);
    tracep->declBit(c+97,"boot_done", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_power_sequencer ");
    tracep->declBus(c+211,"STEP_DELAY", false,-1, 31,0);
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+59,"seq_sleep_cmd", false,-1);
    tracep->declBit(c+84,"seq_wakeup_cmd", false,-1);
    tracep->declBit(c+60,"seq_sleep_ack", false,-1);
    tracep->declBit(c+61,"seq_wakeup_ack", false,-1);
    tracep->declBit(c+66,"ret_save_en", false,-1);
    tracep->declBit(c+67,"ret_restore_en", false,-1);
    tracep->declBit(c+85,"ret_save_done", false,-1);
    tracep->declBit(c+86,"ret_restore_done", false,-1);
    tracep->declBit(c+62,"clk_gate_en", false,-1);
    tracep->declBit(c+63,"iso_en", false,-1);
    tracep->declBit(c+64,"pwr_sw_off", false,-1);
    tracep->declBit(c+65,"lvl_shift_en", false,-1);
    tracep->declBus(c+98,"state", false,-1, 3,0);
    tracep->declBus(c+69,"next_state", false,-1, 3,0);
    tracep->declBus(c+99,"step_cnt", false,-1, 3,0);
    tracep->declBit(c+100,"step_done", false,-1);
    tracep->declBit(c+70,"step_cnt_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_retention_ctrl ");
    tracep->declBus(c+231,"SAVE_CYCLES", false,-1, 31,0);
    tracep->declBus(c+231,"RESTORE_CYCLES", false,-1, 31,0);
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+66,"ret_save_en", false,-1);
    tracep->declBit(c+67,"ret_restore_en", false,-1);
    tracep->declBit(c+85,"ret_save_done", false,-1);
    tracep->declBit(c+86,"ret_restore_done", false,-1);
    tracep->declBit(c+90,"context_saved", false,-1);
    tracep->declBit(c+91,"context_valid", false,-1);
    tracep->declBus(c+101,"state", false,-1, 2,0);
    tracep->declBus(c+71,"next_state", false,-1, 2,0);
    tracep->declBus(c+102,"op_cnt", false,-1, 3,0);
    tracep->declBit(c+72,"op_cnt_en", false,-1);
    tracep->declBit(c+103,"save_complete", false,-1);
    tracep->declBit(c+103,"restore_complete", false,-1);
    tracep->declBit(c+73,"save_done_next", false,-1);
    tracep->declBit(c+74,"restore_done_next", false,-1);
    tracep->declBit(c+75,"ctx_saved_next", false,-1);
    tracep->declBit(c+76,"ctx_valid_next", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_sensor_regbank ");
    tracep->declBus(c+210,"DATA_W", false,-1, 31,0);
    tracep->declBus(c+211,"ADDR_W", false,-1, 31,0);
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+16,"reg_wr_en", false,-1);
    tracep->declBit(c+17,"reg_rd_en", false,-1);
    tracep->declBus(c+18,"reg_addr", false,-1, 7,0);
    tracep->declBus(c+19,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+77,"reg_rdata", false,-1, 31,0);
    tracep->declBit(c+78,"reg_ack", false,-1);
    tracep->declBus(c+20,"sensor0_data", false,-1, 31,0);
    tracep->declBus(c+21,"sensor1_data", false,-1, 31,0);
    tracep->declBus(c+22,"sensor2_data", false,-1, 31,0);
    tracep->declBit(c+191,"irq_out", false,-1);
    tracep->declBit(c+88,"pwr_ctrl_sleep_req", false,-1);
    tracep->declBus(c+89,"pwr_ctrl_mode", false,-1, 1,0);
    tracep->declBus(c+212,"ADDR_CTRL", false,-1, 7,0);
    tracep->declBus(c+213,"ADDR_STATUS", false,-1, 7,0);
    tracep->declBus(c+214,"ADDR_SENSOR0", false,-1, 7,0);
    tracep->declBus(c+215,"ADDR_SENSOR1", false,-1, 7,0);
    tracep->declBus(c+216,"ADDR_SENSOR2", false,-1, 7,0);
    tracep->declBus(c+217,"ADDR_IRQ_STATUS", false,-1, 7,0);
    tracep->declBus(c+218,"ADDR_IRQ_MASK", false,-1, 7,0);
    tracep->declBus(c+219,"ADDR_IRQ_THRESH0", false,-1, 7,0);
    tracep->declBus(c+232,"ADDR_IRQ_THRESH1", false,-1, 7,0);
    tracep->declBus(c+233,"ADDR_IRQ_THRESH2", false,-1, 7,0);
    tracep->declBus(c+220,"ADDR_PWR_CTRL", false,-1, 7,0);
    tracep->declBus(c+192,"ctrl_reg", false,-1, 31,0);
    tracep->declBus(c+193,"irq_status_reg", false,-1, 31,0);
    tracep->declBus(c+194,"irq_mask_reg", false,-1, 31,0);
    tracep->declBus(c+195,"irq_thresh0_reg", false,-1, 31,0);
    tracep->declBus(c+196,"irq_thresh1_reg", false,-1, 31,0);
    tracep->declBus(c+197,"irq_thresh2_reg", false,-1, 31,0);
    tracep->declBus(c+104,"pwr_ctrl_reg", false,-1, 31,0);
    tracep->declBit(c+105,"sensor_valid", false,-1);
    tracep->declBit(c+206,"irq_sensor0", false,-1);
    tracep->declBit(c+207,"irq_sensor1", false,-1);
    tracep->declBit(c+208,"irq_sensor2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_wakeup_ctrl ");
    tracep->declBit(c+198,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+2,"ext_wakeup_in", false,-1);
    tracep->declBit(c+3,"rtc_wakeup_in", false,-1);
    tracep->declBit(c+4,"irq_wakeup_in", false,-1);
    tracep->declBit(c+5,"ext_wakeup_en", false,-1);
    tracep->declBit(c+6,"rtc_wakeup_en", false,-1);
    tracep->declBit(c+7,"irq_wakeup_en", false,-1);
    tracep->declBit(c+79,"wakeup_clear", false,-1);
    tracep->declBit(c+87,"wakeup_req", false,-1);
    tracep->declBus(c+83,"wakeup_src_status", false,-1, 2,0);
    tracep->declBit(c+106,"ext_sync_0", false,-1);
    tracep->declBit(c+107,"ext_sync_1", false,-1);
    tracep->declBit(c+108,"rtc_sync_0", false,-1);
    tracep->declBit(c+109,"rtc_sync_1", false,-1);
    tracep->declBit(c+110,"irq_sync_0", false,-1);
    tracep->declBit(c+111,"irq_sync_1", false,-1);
    tracep->declBit(c+112,"ext_prev", false,-1);
    tracep->declBit(c+113,"rtc_prev", false,-1);
    tracep->declBit(c+114,"irq_prev", false,-1);
    tracep->declBit(c+115,"ext_edge", false,-1);
    tracep->declBit(c+116,"rtc_edge", false,-1);
    tracep->declBit(c+117,"irq_edge", false,-1);
    tracep->declBit(c+118,"wakeup_ext_lat", false,-1);
    tracep->declBit(c+119,"wakeup_rtc_lat", false,-1);
    tracep->declBit(c+120,"wakeup_irq_lat", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_vega_top___024root__trace_init_top(Vtb_vega_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root__trace_init_top\n"); );
    // Body
    Vtb_vega_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_vega_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_vega_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_vega_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_vega_top___024root__trace_register(Vtb_vega_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_vega_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_vega_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_vega_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_vega_top___024root__trace_full_sub_0(Vtb_vega_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_vega_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root__trace_full_top_0\n"); );
    // Init
    Vtb_vega_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vega_top___024root*>(voidSelf);
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_vega_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_vega_top___024root__trace_full_sub_0(Vtb_vega_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_vega_top__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelf->tb_vega_top__DOT__ext_wakeup_in));
    bufp->fullBit(oldp+3,(vlSelf->tb_vega_top__DOT__rtc_wakeup_in));
    bufp->fullBit(oldp+4,(vlSelf->tb_vega_top__DOT__irq_wakeup_in));
    bufp->fullBit(oldp+5,(vlSelf->tb_vega_top__DOT__ext_wakeup_en));
    bufp->fullBit(oldp+6,(vlSelf->tb_vega_top__DOT__rtc_wakeup_en));
    bufp->fullBit(oldp+7,(vlSelf->tb_vega_top__DOT__irq_wakeup_en));
    bufp->fullBit(oldp+8,(vlSelf->tb_vega_top__DOT__thermal_alert));
    bufp->fullBit(oldp+9,(vlSelf->tb_vega_top__DOT__battery_low));
    bufp->fullBit(oldp+10,(vlSelf->tb_vega_top__DOT__fault_in));
    bufp->fullBit(oldp+11,(vlSelf->tb_vega_top__DOT__psel));
    bufp->fullBit(oldp+12,(vlSelf->tb_vega_top__DOT__penable));
    bufp->fullBit(oldp+13,(vlSelf->tb_vega_top__DOT__pwrite));
    bufp->fullCData(oldp+14,(vlSelf->tb_vega_top__DOT__paddr),8);
    bufp->fullIData(oldp+15,(vlSelf->tb_vega_top__DOT__pwdata),32);
    bufp->fullBit(oldp+16,(vlSelf->tb_vega_top__DOT__reg_wr_en));
    bufp->fullBit(oldp+17,(vlSelf->tb_vega_top__DOT__reg_rd_en));
    bufp->fullCData(oldp+18,(vlSelf->tb_vega_top__DOT__reg_addr),8);
    bufp->fullIData(oldp+19,(vlSelf->tb_vega_top__DOT__reg_wdata),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_vega_top__DOT__sensor0_data),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_vega_top__DOT__sensor1_data),32);
    bufp->fullIData(oldp+22,(vlSelf->tb_vega_top__DOT__sensor2_data),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_vega_top__DOT__test_pass_count),32);
    bufp->fullIData(oldp+24,(vlSelf->tb_vega_top__DOT__test_fail_count),32);
    bufp->fullIData(oldp+25,(vlSelf->tb_vega_top__DOT__rd_data),32);
    bufp->fullBit(oldp+26,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                            & (IData)(vlSelf->tb_vega_top__DOT__pready))));
    bufp->fullBit(oldp+27,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & vlSelf->tb_vega_top__DOT__prdata))));
    bufp->fullBit(oldp+28,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0xaU)))));
    bufp->fullBit(oldp+29,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0xbU)))));
    bufp->fullBit(oldp+30,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0xcU)))));
    bufp->fullBit(oldp+31,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+32,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+33,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0xfU)))));
    bufp->fullBit(oldp+34,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x10U)))));
    bufp->fullBit(oldp+35,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x11U)))));
    bufp->fullBit(oldp+36,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x12U)))));
    bufp->fullBit(oldp+37,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x13U)))));
    bufp->fullBit(oldp+38,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 1U)))));
    bufp->fullBit(oldp+39,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x14U)))));
    bufp->fullBit(oldp+40,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x15U)))));
    bufp->fullBit(oldp+41,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x16U)))));
    bufp->fullBit(oldp+42,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x17U)))));
    bufp->fullBit(oldp+43,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x18U)))));
    bufp->fullBit(oldp+44,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x19U)))));
    bufp->fullBit(oldp+45,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x1aU)))));
    bufp->fullBit(oldp+46,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x1bU)))));
    bufp->fullBit(oldp+47,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x1cU)))));
    bufp->fullBit(oldp+48,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x1dU)))));
    bufp->fullBit(oldp+49,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 2U)))));
    bufp->fullBit(oldp+50,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 0x1eU)))));
    bufp->fullBit(oldp+51,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                            & (vlSelf->tb_vega_top__DOT__prdata 
                               >> 0x1fU))));
    bufp->fullBit(oldp+52,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 3U)))));
    bufp->fullBit(oldp+53,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 4U)))));
    bufp->fullBit(oldp+54,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 5U)))));
    bufp->fullBit(oldp+55,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 6U)))));
    bufp->fullBit(oldp+56,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 7U)))));
    bufp->fullBit(oldp+57,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 8U)))));
    bufp->fullBit(oldp+58,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  & (vlSelf->tb_vega_top__DOT__prdata 
                                     >> 9U)))));
    bufp->fullBit(oldp+59,(vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd));
    bufp->fullBit(oldp+60,(vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_ack));
    bufp->fullBit(oldp+61,(vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_ack));
    bufp->fullBit(oldp+62,(vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en));
    bufp->fullBit(oldp+63,(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en));
    bufp->fullBit(oldp+64,(vlSelf->tb_vega_top__DOT__dut__DOT__pwr_sw_off));
    bufp->fullBit(oldp+65,(vlSelf->tb_vega_top__DOT__dut__DOT__lvl_shift_en));
    bufp->fullBit(oldp+66,(vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_en));
    bufp->fullBit(oldp+67,(vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_en));
    bufp->fullBit(oldp+68,((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en)))));
    bufp->fullCData(oldp+69,(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__next_state),4);
    bufp->fullBit(oldp+70,(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt_en));
    bufp->fullCData(oldp+71,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__next_state),3);
    bufp->fullBit(oldp+72,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt_en));
    bufp->fullBit(oldp+73,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__save_done_next));
    bufp->fullBit(oldp+74,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__restore_done_next));
    bufp->fullBit(oldp+75,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_saved_next));
    bufp->fullBit(oldp+76,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_valid_next));
    bufp->fullIData(oldp+77,(vlSelf->tb_vega_top__DOT__reg_rdata),32);
    bufp->fullBit(oldp+78,(vlSelf->tb_vega_top__DOT__reg_ack));
    bufp->fullBit(oldp+79,((2U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))));
    bufp->fullBit(oldp+80,(((5U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)) 
                            | (6U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)))));
    bufp->fullBit(oldp+81,((8U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))));
    bufp->fullCData(oldp+82,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state),4);
    bufp->fullCData(oldp+83,((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat) 
                               << 2U) | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat) 
                                          << 1U) | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat)))),3);
    bufp->fullBit(oldp+84,(vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_cmd));
    bufp->fullBit(oldp+85,(vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_done));
    bufp->fullBit(oldp+86,(vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_done));
    bufp->fullBit(oldp+87,(vlSelf->tb_vega_top__DOT__dut__DOT__wakeup_req));
    bufp->fullBit(oldp+88,((1U & vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg)));
    bufp->fullCData(oldp+89,((3U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg 
                                    >> 1U))),2);
    bufp->fullBit(oldp+90,(vlSelf->tb_vega_top__DOT__dut__DOT__context_saved));
    bufp->fullBit(oldp+91,(vlSelf->tb_vega_top__DOT__dut__DOT__context_valid));
    bufp->fullCData(oldp+92,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state),4);
    bufp->fullSData(oldp+93,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt),16);
    bufp->fullBit(oldp+94,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_en));
    bufp->fullBit(oldp+95,((0x64U <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt))));
    bufp->fullCData(oldp+96,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt),8);
    bufp->fullBit(oldp+97,((0xfU <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt))));
    bufp->fullCData(oldp+98,(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__state),4);
    bufp->fullCData(oldp+99,(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt),4);
    bufp->fullBit(oldp+100,((8U <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt))));
    bufp->fullCData(oldp+101,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__state),3);
    bufp->fullCData(oldp+102,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt),4);
    bufp->fullBit(oldp+103,((4U <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt))));
    bufp->fullIData(oldp+104,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg),32);
    bufp->fullBit(oldp+105,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__sensor_valid));
    bufp->fullBit(oldp+106,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_0));
    bufp->fullBit(oldp+107,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_1));
    bufp->fullBit(oldp+108,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_0));
    bufp->fullBit(oldp+109,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_1));
    bufp->fullBit(oldp+110,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_0));
    bufp->fullBit(oldp+111,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_1));
    bufp->fullBit(oldp+112,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_prev));
    bufp->fullBit(oldp+113,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_prev));
    bufp->fullBit(oldp+114,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_prev));
    bufp->fullBit(oldp+115,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_prev)) 
                             & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_1))));
    bufp->fullBit(oldp+116,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_prev)) 
                             & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_1))));
    bufp->fullBit(oldp+117,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_prev)) 
                             & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_1))));
    bufp->fullBit(oldp+118,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat));
    bufp->fullBit(oldp+119,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat));
    bufp->fullBit(oldp+120,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat));
    bufp->fullIData(oldp+121,(vlSelf->tb_vega_top__DOT__prdata),32);
    bufp->fullBit(oldp+122,(vlSelf->tb_vega_top__DOT__pready));
    bufp->fullBit(oldp+123,(vlSelf->tb_vega_top__DOT__pslverr));
    bufp->fullBit(oldp+124,((1U & vlSelf->tb_vega_top__DOT__prdata)));
    bufp->fullBit(oldp+125,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0xaU))));
    bufp->fullBit(oldp+126,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0xbU))));
    bufp->fullBit(oldp+127,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0xcU))));
    bufp->fullBit(oldp+128,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0xdU))));
    bufp->fullBit(oldp+129,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0xeU))));
    bufp->fullBit(oldp+130,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0xfU))));
    bufp->fullBit(oldp+131,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x10U))));
    bufp->fullBit(oldp+132,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x11U))));
    bufp->fullBit(oldp+133,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x12U))));
    bufp->fullBit(oldp+134,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x13U))));
    bufp->fullBit(oldp+135,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 1U))));
    bufp->fullBit(oldp+136,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x14U))));
    bufp->fullBit(oldp+137,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x15U))));
    bufp->fullBit(oldp+138,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x16U))));
    bufp->fullBit(oldp+139,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x17U))));
    bufp->fullBit(oldp+140,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x18U))));
    bufp->fullBit(oldp+141,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x19U))));
    bufp->fullBit(oldp+142,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+143,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+144,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+145,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+146,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 2U))));
    bufp->fullBit(oldp+147,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+148,((vlSelf->tb_vega_top__DOT__prdata 
                             >> 0x1fU)));
    bufp->fullBit(oldp+149,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 3U))));
    bufp->fullBit(oldp+150,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 4U))));
    bufp->fullBit(oldp+151,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 5U))));
    bufp->fullBit(oldp+152,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 6U))));
    bufp->fullBit(oldp+153,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 7U))));
    bufp->fullBit(oldp+154,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 8U))));
    bufp->fullBit(oldp+155,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                   >> 9U))));
    bufp->fullIData(oldp+156,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[0]),32);
    bufp->fullIData(oldp+157,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[1]),32);
    bufp->fullIData(oldp+158,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[2]),32);
    bufp->fullIData(oldp+159,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[3]),32);
    bufp->fullIData(oldp+160,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[4]),32);
    bufp->fullIData(oldp+161,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[5]),32);
    bufp->fullIData(oldp+162,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[6]),32);
    bufp->fullIData(oldp+163,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[7]),32);
    bufp->fullIData(oldp+164,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_a_reg),32);
    bufp->fullIData(oldp+165,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_b_reg),32);
    bufp->fullIData(oldp+166,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__result_reg),32);
    bufp->fullIData(oldp+167,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+168,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk2__DOT__rf_idx),32);
    bufp->fullIData(oldp+169,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk3__DOT__rf_idx),32);
    bufp->fullBit(oldp+170,((0U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state))));
    bufp->fullCData(oldp+171,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state),3);
    bufp->fullIData(oldp+172,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_result),32);
    bufp->fullCData(oldp+173,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_rd_idx),3);
    bufp->fullBit(oldp+174,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_valid));
    bufp->fullCData(oldp+175,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_opcode),4);
    bufp->fullBit(oldp+176,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending));
    bufp->fullBit(oldp+177,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__overflow_flag));
    bufp->fullBit(oldp+178,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_done));
    bufp->fullIData(oldp+179,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg),32);
    bufp->fullIData(oldp+180,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg),32);
    bufp->fullCData(oldp+181,((0xfU & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)),4);
    bufp->fullCData(oldp+182,((7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                                     >> 4U))),3);
    bufp->fullCData(oldp+183,((7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                                     >> 8U))),3);
    bufp->fullCData(oldp+184,((7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+185,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a),32);
    bufp->fullIData(oldp+186,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b),32);
    bufp->fullIData(oldp+187,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_result),32);
    bufp->fullBit(oldp+188,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_overflow));
    bufp->fullBit(oldp+189,((1U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg 
                                   >> 2U))));
    bufp->fullBit(oldp+190,((1U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg)));
    bufp->fullBit(oldp+191,(((0U != (7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                                           & vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg))) 
                             & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg 
                                >> 9U))));
    bufp->fullIData(oldp+192,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg),32);
    bufp->fullIData(oldp+193,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg),32);
    bufp->fullIData(oldp+194,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg),32);
    bufp->fullIData(oldp+195,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg),32);
    bufp->fullIData(oldp+196,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg),32);
    bufp->fullIData(oldp+197,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg),32);
    bufp->fullBit(oldp+198,(vlSelf->tb_vega_top__DOT__clk));
    bufp->fullBit(oldp+199,(vlSelf->tb_vega_top__DOT__dut__DOT__proc_irq_ack));
    bufp->fullBit(oldp+200,(vlSelf->tb_vega_top__DOT__dut__DOT__clk_proc));
    bufp->fullIData(oldp+201,(vlSelf->tb_vega_top__DOT__dut__DOT__prdata_iso),32);
    bufp->fullBit(oldp+202,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated));
    bufp->fullCData(oldp+203,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__next_state),3);
    bufp->fullBit(oldp+204,(vlSelf->tb_vega_top__DOT__dut__DOT__u_icg_proc__DOT__enable_latched));
    bufp->fullCData(oldp+205,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state),4);
    bufp->fullBit(oldp+206,((vlSelf->tb_vega_top__DOT__sensor0_data 
                             > vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg)));
    bufp->fullBit(oldp+207,((vlSelf->tb_vega_top__DOT__sensor1_data 
                             > vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg)));
    bufp->fullBit(oldp+208,((vlSelf->tb_vega_top__DOT__sensor2_data 
                             > vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg)));
    bufp->fullIData(oldp+209,(0xaU),32);
    bufp->fullIData(oldp+210,(0x20U),32);
    bufp->fullIData(oldp+211,(8U),32);
    bufp->fullCData(oldp+212,(0U),8);
    bufp->fullCData(oldp+213,(4U),8);
    bufp->fullCData(oldp+214,(8U),8);
    bufp->fullCData(oldp+215,(0xcU),8);
    bufp->fullCData(oldp+216,(0x10U),8);
    bufp->fullCData(oldp+217,(0x14U),8);
    bufp->fullCData(oldp+218,(0x18U),8);
    bufp->fullCData(oldp+219,(0x1cU),8);
    bufp->fullCData(oldp+220,(0x28U),8);
    bufp->fullCData(oldp+221,(0U),4);
    bufp->fullCData(oldp+222,(1U),4);
    bufp->fullCData(oldp+223,(2U),4);
    bufp->fullCData(oldp+224,(3U),4);
    bufp->fullCData(oldp+225,(4U),4);
    bufp->fullCData(oldp+226,(7U),4);
    bufp->fullIData(oldp+227,(0x10U),32);
    bufp->fullIData(oldp+228,(0x64U),32);
    bufp->fullBit(oldp+229,(0U));
    bufp->fullBit(oldp+230,(1U));
    bufp->fullIData(oldp+231,(4U),32);
    bufp->fullCData(oldp+232,(0x20U),8);
    bufp->fullCData(oldp+233,(0x24U),8);
}
