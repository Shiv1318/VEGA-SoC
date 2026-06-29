// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_vega_top__Syms.h"


void Vtb_vega_top___024root__trace_chg_sub_0(Vtb_vega_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_vega_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_vega_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vega_top___024root*>(voidSelf);
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_vega_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_vega_top___024root__trace_chg_sub_0(Vtb_vega_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_vega_top__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->tb_vega_top__DOT__ext_wakeup_in));
        bufp->chgBit(oldp+2,(vlSelf->tb_vega_top__DOT__rtc_wakeup_in));
        bufp->chgBit(oldp+3,(vlSelf->tb_vega_top__DOT__irq_wakeup_in));
        bufp->chgBit(oldp+4,(vlSelf->tb_vega_top__DOT__ext_wakeup_en));
        bufp->chgBit(oldp+5,(vlSelf->tb_vega_top__DOT__rtc_wakeup_en));
        bufp->chgBit(oldp+6,(vlSelf->tb_vega_top__DOT__irq_wakeup_en));
        bufp->chgBit(oldp+7,(vlSelf->tb_vega_top__DOT__thermal_alert));
        bufp->chgBit(oldp+8,(vlSelf->tb_vega_top__DOT__battery_low));
        bufp->chgBit(oldp+9,(vlSelf->tb_vega_top__DOT__fault_in));
        bufp->chgBit(oldp+10,(vlSelf->tb_vega_top__DOT__psel));
        bufp->chgBit(oldp+11,(vlSelf->tb_vega_top__DOT__penable));
        bufp->chgBit(oldp+12,(vlSelf->tb_vega_top__DOT__pwrite));
        bufp->chgCData(oldp+13,(vlSelf->tb_vega_top__DOT__paddr),8);
        bufp->chgIData(oldp+14,(vlSelf->tb_vega_top__DOT__pwdata),32);
        bufp->chgBit(oldp+15,(vlSelf->tb_vega_top__DOT__reg_wr_en));
        bufp->chgBit(oldp+16,(vlSelf->tb_vega_top__DOT__reg_rd_en));
        bufp->chgCData(oldp+17,(vlSelf->tb_vega_top__DOT__reg_addr),8);
        bufp->chgIData(oldp+18,(vlSelf->tb_vega_top__DOT__reg_wdata),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_vega_top__DOT__sensor0_data),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_vega_top__DOT__sensor1_data),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_vega_top__DOT__sensor2_data),32);
        bufp->chgIData(oldp+22,(vlSelf->tb_vega_top__DOT__test_pass_count),32);
        bufp->chgIData(oldp+23,(vlSelf->tb_vega_top__DOT__test_fail_count),32);
        bufp->chgIData(oldp+24,(vlSelf->tb_vega_top__DOT__rd_data),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+25,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                               & (IData)(vlSelf->tb_vega_top__DOT__pready))));
        bufp->chgBit(oldp+26,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & vlSelf->tb_vega_top__DOT__prdata))));
        bufp->chgBit(oldp+27,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0xaU)))));
        bufp->chgBit(oldp+28,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0xbU)))));
        bufp->chgBit(oldp+29,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0xcU)))));
        bufp->chgBit(oldp+30,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0xdU)))));
        bufp->chgBit(oldp+31,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0xeU)))));
        bufp->chgBit(oldp+32,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0xfU)))));
        bufp->chgBit(oldp+33,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x10U)))));
        bufp->chgBit(oldp+34,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x11U)))));
        bufp->chgBit(oldp+35,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x12U)))));
        bufp->chgBit(oldp+36,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x13U)))));
        bufp->chgBit(oldp+37,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 1U)))));
        bufp->chgBit(oldp+38,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x14U)))));
        bufp->chgBit(oldp+39,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x15U)))));
        bufp->chgBit(oldp+40,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x16U)))));
        bufp->chgBit(oldp+41,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x17U)))));
        bufp->chgBit(oldp+42,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x18U)))));
        bufp->chgBit(oldp+43,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x19U)))));
        bufp->chgBit(oldp+44,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x1aU)))));
        bufp->chgBit(oldp+45,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x1bU)))));
        bufp->chgBit(oldp+46,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x1cU)))));
        bufp->chgBit(oldp+47,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x1dU)))));
        bufp->chgBit(oldp+48,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 2U)))));
        bufp->chgBit(oldp+49,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 0x1eU)))));
        bufp->chgBit(oldp+50,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                               & (vlSelf->tb_vega_top__DOT__prdata 
                                  >> 0x1fU))));
        bufp->chgBit(oldp+51,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 3U)))));
        bufp->chgBit(oldp+52,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 4U)))));
        bufp->chgBit(oldp+53,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 5U)))));
        bufp->chgBit(oldp+54,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 6U)))));
        bufp->chgBit(oldp+55,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 7U)))));
        bufp->chgBit(oldp+56,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 8U)))));
        bufp->chgBit(oldp+57,((1U & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     & (vlSelf->tb_vega_top__DOT__prdata 
                                        >> 9U)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+58,(vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd));
        bufp->chgBit(oldp+59,(vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_ack));
        bufp->chgBit(oldp+60,(vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_ack));
        bufp->chgBit(oldp+61,(vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en));
        bufp->chgBit(oldp+62,(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en));
        bufp->chgBit(oldp+63,(vlSelf->tb_vega_top__DOT__dut__DOT__pwr_sw_off));
        bufp->chgBit(oldp+64,(vlSelf->tb_vega_top__DOT__dut__DOT__lvl_shift_en));
        bufp->chgBit(oldp+65,(vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_en));
        bufp->chgBit(oldp+66,(vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_en));
        bufp->chgBit(oldp+67,((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en)))));
        bufp->chgCData(oldp+68,(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__next_state),4);
        bufp->chgBit(oldp+69,(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt_en));
        bufp->chgCData(oldp+70,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__next_state),3);
        bufp->chgBit(oldp+71,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt_en));
        bufp->chgBit(oldp+72,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__save_done_next));
        bufp->chgBit(oldp+73,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__restore_done_next));
        bufp->chgBit(oldp+74,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_saved_next));
        bufp->chgBit(oldp+75,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_valid_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+76,(vlSelf->tb_vega_top__DOT__reg_rdata),32);
        bufp->chgBit(oldp+77,(vlSelf->tb_vega_top__DOT__reg_ack));
        bufp->chgBit(oldp+78,((2U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))));
        bufp->chgBit(oldp+79,(((5U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)) 
                               | (6U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)))));
        bufp->chgBit(oldp+80,((8U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))));
        bufp->chgCData(oldp+81,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state),4);
        bufp->chgCData(oldp+82,((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat) 
                                  << 2U) | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat) 
                                             << 1U) 
                                            | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat)))),3);
        bufp->chgBit(oldp+83,(vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_cmd));
        bufp->chgBit(oldp+84,(vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_done));
        bufp->chgBit(oldp+85,(vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_done));
        bufp->chgBit(oldp+86,(vlSelf->tb_vega_top__DOT__dut__DOT__wakeup_req));
        bufp->chgBit(oldp+87,((1U & vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg)));
        bufp->chgCData(oldp+88,((3U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg 
                                       >> 1U))),2);
        bufp->chgBit(oldp+89,(vlSelf->tb_vega_top__DOT__dut__DOT__context_saved));
        bufp->chgBit(oldp+90,(vlSelf->tb_vega_top__DOT__dut__DOT__context_valid));
        bufp->chgCData(oldp+91,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state),4);
        bufp->chgSData(oldp+92,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt),16);
        bufp->chgBit(oldp+93,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_en));
        bufp->chgBit(oldp+94,((0x64U <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt))));
        bufp->chgCData(oldp+95,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt),8);
        bufp->chgBit(oldp+96,((0xfU <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt))));
        bufp->chgCData(oldp+97,(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__state),4);
        bufp->chgCData(oldp+98,(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt),4);
        bufp->chgBit(oldp+99,((8U <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt))));
        bufp->chgCData(oldp+100,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__state),3);
        bufp->chgCData(oldp+101,(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt),4);
        bufp->chgBit(oldp+102,((4U <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt))));
        bufp->chgIData(oldp+103,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg),32);
        bufp->chgBit(oldp+104,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__sensor_valid));
        bufp->chgBit(oldp+105,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_0));
        bufp->chgBit(oldp+106,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_1));
        bufp->chgBit(oldp+107,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_0));
        bufp->chgBit(oldp+108,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_1));
        bufp->chgBit(oldp+109,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_0));
        bufp->chgBit(oldp+110,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_1));
        bufp->chgBit(oldp+111,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_prev));
        bufp->chgBit(oldp+112,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_prev));
        bufp->chgBit(oldp+113,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_prev));
        bufp->chgBit(oldp+114,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_prev)) 
                                & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_1))));
        bufp->chgBit(oldp+115,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_prev)) 
                                & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_1))));
        bufp->chgBit(oldp+116,(((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_prev)) 
                                & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_1))));
        bufp->chgBit(oldp+117,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat));
        bufp->chgBit(oldp+118,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat));
        bufp->chgBit(oldp+119,(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+120,(vlSelf->tb_vega_top__DOT__prdata),32);
        bufp->chgBit(oldp+121,(vlSelf->tb_vega_top__DOT__pready));
        bufp->chgBit(oldp+122,(vlSelf->tb_vega_top__DOT__pslverr));
        bufp->chgBit(oldp+123,((1U & vlSelf->tb_vega_top__DOT__prdata)));
        bufp->chgBit(oldp+124,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0xaU))));
        bufp->chgBit(oldp+125,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0xbU))));
        bufp->chgBit(oldp+126,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0xcU))));
        bufp->chgBit(oldp+127,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0xdU))));
        bufp->chgBit(oldp+128,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0xeU))));
        bufp->chgBit(oldp+129,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0xfU))));
        bufp->chgBit(oldp+130,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x10U))));
        bufp->chgBit(oldp+131,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x11U))));
        bufp->chgBit(oldp+132,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x12U))));
        bufp->chgBit(oldp+133,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x13U))));
        bufp->chgBit(oldp+134,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 1U))));
        bufp->chgBit(oldp+135,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x14U))));
        bufp->chgBit(oldp+136,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x15U))));
        bufp->chgBit(oldp+137,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x16U))));
        bufp->chgBit(oldp+138,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x17U))));
        bufp->chgBit(oldp+139,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x18U))));
        bufp->chgBit(oldp+140,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x19U))));
        bufp->chgBit(oldp+141,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+142,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+143,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+144,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+145,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 2U))));
        bufp->chgBit(oldp+146,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+147,((vlSelf->tb_vega_top__DOT__prdata 
                                >> 0x1fU)));
        bufp->chgBit(oldp+148,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 3U))));
        bufp->chgBit(oldp+149,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 4U))));
        bufp->chgBit(oldp+150,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 5U))));
        bufp->chgBit(oldp+151,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 6U))));
        bufp->chgBit(oldp+152,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 7U))));
        bufp->chgBit(oldp+153,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 8U))));
        bufp->chgBit(oldp+154,((1U & (vlSelf->tb_vega_top__DOT__prdata 
                                      >> 9U))));
        bufp->chgIData(oldp+155,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[0]),32);
        bufp->chgIData(oldp+156,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[1]),32);
        bufp->chgIData(oldp+157,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[2]),32);
        bufp->chgIData(oldp+158,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[3]),32);
        bufp->chgIData(oldp+159,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[4]),32);
        bufp->chgIData(oldp+160,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[5]),32);
        bufp->chgIData(oldp+161,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[6]),32);
        bufp->chgIData(oldp+162,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[7]),32);
        bufp->chgIData(oldp+163,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_a_reg),32);
        bufp->chgIData(oldp+164,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_b_reg),32);
        bufp->chgIData(oldp+165,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__result_reg),32);
        bufp->chgIData(oldp+166,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+167,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk2__DOT__rf_idx),32);
        bufp->chgIData(oldp+168,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk3__DOT__rf_idx),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+169,((0U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state))));
        bufp->chgCData(oldp+170,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state),3);
        bufp->chgIData(oldp+171,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_result),32);
        bufp->chgCData(oldp+172,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_rd_idx),3);
        bufp->chgBit(oldp+173,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_valid));
        bufp->chgCData(oldp+174,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_opcode),4);
        bufp->chgBit(oldp+175,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending));
        bufp->chgBit(oldp+176,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__overflow_flag));
        bufp->chgBit(oldp+177,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_done));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+178,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg),32);
        bufp->chgIData(oldp+179,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg),32);
        bufp->chgCData(oldp+180,((0xfU & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)),4);
        bufp->chgCData(oldp+181,((7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                                        >> 4U))),3);
        bufp->chgCData(oldp+182,((7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                                        >> 8U))),3);
        bufp->chgCData(oldp+183,((7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                                        >> 0xcU))),3);
        bufp->chgIData(oldp+184,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a),32);
        bufp->chgIData(oldp+185,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b),32);
        bufp->chgIData(oldp+186,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_result),32);
        bufp->chgBit(oldp+187,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_overflow));
        bufp->chgBit(oldp+188,((1U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg 
                                      >> 2U))));
        bufp->chgBit(oldp+189,((1U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+190,(((0U != (7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                                              & vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg))) 
                                & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg 
                                   >> 9U))));
        bufp->chgIData(oldp+191,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg),32);
        bufp->chgIData(oldp+192,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg),32);
        bufp->chgIData(oldp+193,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg),32);
        bufp->chgIData(oldp+194,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg),32);
        bufp->chgIData(oldp+195,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg),32);
        bufp->chgIData(oldp+196,(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg),32);
    }
    bufp->chgBit(oldp+197,(vlSelf->tb_vega_top__DOT__clk));
    bufp->chgBit(oldp+198,(vlSelf->tb_vega_top__DOT__dut__DOT__proc_irq_ack));
    bufp->chgBit(oldp+199,(vlSelf->tb_vega_top__DOT__dut__DOT__clk_proc));
    bufp->chgIData(oldp+200,(vlSelf->tb_vega_top__DOT__dut__DOT__prdata_iso),32);
    bufp->chgBit(oldp+201,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated));
    bufp->chgCData(oldp+202,(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__next_state),3);
    bufp->chgBit(oldp+203,(vlSelf->tb_vega_top__DOT__dut__DOT__u_icg_proc__DOT__enable_latched));
    bufp->chgCData(oldp+204,(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state),4);
    bufp->chgBit(oldp+205,((vlSelf->tb_vega_top__DOT__sensor0_data 
                            > vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg)));
    bufp->chgBit(oldp+206,((vlSelf->tb_vega_top__DOT__sensor1_data 
                            > vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg)));
    bufp->chgBit(oldp+207,((vlSelf->tb_vega_top__DOT__sensor2_data 
                            > vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg)));
}

void Vtb_vega_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root__trace_cleanup\n"); );
    // Init
    Vtb_vega_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vega_top___024root*>(voidSelf);
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
