// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vega_top.h for the primary calling header

#include "verilated.h"

#include "Vtb_vega_top__Syms.h"
#include "Vtb_vega_top___024root.h"

VL_ATTR_COLD void Vtb_vega_top___024root___eval_static__TOP(Vtb_vega_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_vega_top___024root___eval_static(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_static\n"); );
    // Body
    Vtb_vega_top___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_vega_top___024root___eval_static__TOP(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_vega_top__DOT__test_pass_count = 0U;
    vlSelf->tb_vega_top__DOT__test_fail_count = 0U;
}

VL_ATTR_COLD void Vtb_vega_top___024root___eval_final(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_vega_top___024root___eval_triggers__stl(Vtb_vega_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vega_top___024root___dump_triggers__stl(Vtb_vega_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_vega_top___024root___eval_stl(Vtb_vega_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_vega_top___024root___eval_settle(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_vega_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_vega_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_vega_top.sv", 21, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_vega_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vega_top___024root___dump_triggers__stl(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*2:0*/, 32> Vtb_vega_top__ConstPool__TABLE_h4d96caa2_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_vega_top__ConstPool__TABLE_h883563d3_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vtb_vega_top__ConstPool__TABLE_h21d1f912_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_vega_top__ConstPool__TABLE_h0c4279dc_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_vega_top__ConstPool__TABLE_h8be308fb_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_vega_top__ConstPool__TABLE_h8a2cb78f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_vega_top__ConstPool__TABLE_h45f01891_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_vega_top__ConstPool__TABLE_he57a9024_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_vega_top__ConstPool__TABLE_h8a0223a9_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_vega_top__ConstPool__TABLE_h76e7afb0_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_vega_top__ConstPool__TABLE_hfbadcf99_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtb_vega_top__ConstPool__TABLE_h3091ca91_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtb_vega_top__ConstPool__TABLE_h874d91a5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_vega_top__ConstPool__TABLE_hfa6f55ce_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_vega_top__ConstPool__TABLE_he153e95f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_vega_top__ConstPool__TABLE_hbe72228b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb_vega_top__ConstPool__TABLE_h1f5de83e_0;

VL_ATTR_COLD void Vtb_vega_top___024root___stl_sequent__TOP__0(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_en = 0U;
    __Vtableidx3 = ((0x10U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg 
                              << 4U)) | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending) 
                                          << 3U) | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state)));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__next_state 
        = Vtb_vega_top__ConstPool__TABLE_h4d96caa2_0
        [__Vtableidx3];
    vlSelf->tb_vega_top__DOT__dut__DOT__proc_irq_ack 
        = Vtb_vega_top__ConstPool__TABLE_h883563d3_0
        [__Vtableidx3];
    if ((2U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg)) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile
            [(7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                    >> 4U))];
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile
            [(7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                    >> 8U))];
    } else {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_a_reg;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_b_reg;
    }
    vlSelf->tb_vega_top__DOT__dut__DOT__wakeup_req 
        = ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat) 
           | ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat) 
              | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat)));
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_cmd = 0U;
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)))) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_en = 1U;
                    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_cmd = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->tb_vega_top__DOT__fault_in) 
                              | (IData)(vlSelf->tb_vega_top__DOT__thermal_alert))))) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd = 1U;
                }
            }
        }
    }
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_result 
        = ((8U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)
            ? 0U : ((4U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)
                     ? ((2U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)
                         ? ((1U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)
                             ? ((vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
                                 == vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b)
                                 ? 1U : 0U) : (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
                                               >> (0x1fU 
                                                   & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b)))
                         : ((1U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)
                             ? (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
                                << (0x1fU & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b))
                             : (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
                                ^ vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b)))
                     : ((2U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)
                         ? ((1U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)
                             ? (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
                                | vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b)
                             : (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
                                & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b))
                         : ((1U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)
                             ? (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
                                - vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b)
                             : (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a 
                                + vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b)))));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_overflow = 0U;
    if ((1U & (~ (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                  >> 3U)))) {
        if ((1U & (~ (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                      >> 2U)))) {
            if ((1U & (~ (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                          >> 1U)))) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_overflow 
                    = (1U & ((1U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg)
                              ? (IData)((1ULL & (((QData)((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a)) 
                                                  - (QData)((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b))) 
                                                 >> 0x20U)))
                              : (IData)((1ULL & (((QData)((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a)) 
                                                  + (QData)((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b))) 
                                                 >> 0x20U)))));
            }
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_done) 
                     << 8U) | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd) 
                                << 7U) | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_done) 
                                           << 6U) | 
                                          (((8U <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt)) 
                                            << 5U) 
                                           | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_cmd) 
                                               << 4U) 
                                              | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__state))))));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__next_state 
        = Vtb_vega_top__ConstPool__TABLE_h21d1f912_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt_en 
        = Vtb_vega_top__ConstPool__TABLE_h0c4279dc_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_ack 
        = Vtb_vega_top__ConstPool__TABLE_h8be308fb_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_ack 
        = Vtb_vega_top__ConstPool__TABLE_h8a2cb78f_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_en 
        = Vtb_vega_top__ConstPool__TABLE_h45f01891_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_en 
        = Vtb_vega_top__ConstPool__TABLE_he57a9024_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en 
        = Vtb_vega_top__ConstPool__TABLE_h8a0223a9_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__iso_en = Vtb_vega_top__ConstPool__TABLE_h76e7afb0_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__pwr_sw_off 
        = Vtb_vega_top__ConstPool__TABLE_hfbadcf99_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__lvl_shift_en 
        = Vtb_vega_top__ConstPool__TABLE_h3091ca91_0
        [__Vtableidx1];
    vlSelf->tb_vega_top__DOT__dut__DOT__prdata_iso 
        = ((0x80000000U & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                            << 0x1fU) & vlSelf->tb_vega_top__DOT__prdata)) 
           | ((0x40000000U & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                               << 0x1eU) & vlSelf->tb_vega_top__DOT__prdata)) 
              | ((0x20000000U & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                  << 0x1dU) & vlSelf->tb_vega_top__DOT__prdata)) 
                 | ((0x10000000U & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                     << 0x1cU) & vlSelf->tb_vega_top__DOT__prdata)) 
                    | ((0x8000000U & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                       << 0x1bU) & vlSelf->tb_vega_top__DOT__prdata)) 
                       | ((0x4000000U & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                          << 0x1aU) 
                                         & vlSelf->tb_vega_top__DOT__prdata)) 
                          | ((0x2000000U & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                             << 0x19U) 
                                            & vlSelf->tb_vega_top__DOT__prdata)) 
                             | ((0x1000000U & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                << 0x18U) 
                                               & vlSelf->tb_vega_top__DOT__prdata)) 
                                | ((0x800000U & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                  << 0x17U) 
                                                 & vlSelf->tb_vega_top__DOT__prdata)) 
                                   | ((0x400000U & 
                                       (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                         << 0x16U) 
                                        & vlSelf->tb_vega_top__DOT__prdata)) 
                                      | ((0x200000U 
                                          & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                              << 0x15U) 
                                             & vlSelf->tb_vega_top__DOT__prdata)) 
                                         | ((0x100000U 
                                             & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                 << 0x14U) 
                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                            | ((0x80000U 
                                                & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                    << 0x13U) 
                                                   & vlSelf->tb_vega_top__DOT__prdata)) 
                                               | ((0x40000U 
                                                   & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                       << 0x12U) 
                                                      & vlSelf->tb_vega_top__DOT__prdata)) 
                                                  | ((0x20000U 
                                                      & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                          << 0x11U) 
                                                         & vlSelf->tb_vega_top__DOT__prdata)) 
                                                     | ((0x10000U 
                                                         & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                             << 0x10U) 
                                                            & vlSelf->tb_vega_top__DOT__prdata)) 
                                                        | ((0x8000U 
                                                            & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                << 0xfU) 
                                                               & vlSelf->tb_vega_top__DOT__prdata)) 
                                                           | ((0x4000U 
                                                               & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                   << 0xeU) 
                                                                  & vlSelf->tb_vega_top__DOT__prdata)) 
                                                              | ((0x2000U 
                                                                  & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                      << 0xdU) 
                                                                     & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                 | ((0x1000U 
                                                                     & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                         << 0xcU) 
                                                                        & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                    | ((0x800U 
                                                                        & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                            << 0xbU) 
                                                                           & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                       | ((0x400U 
                                                                           & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                               << 0xaU) 
                                                                              & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                          | ((0x200U 
                                                                              & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                << 9U) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                             | ((0x100U 
                                                                                & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                << 8U) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                                | ((0x80U 
                                                                                & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                << 7U) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                                | ((0x40U 
                                                                                & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                << 6U) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                                | ((0x20U 
                                                                                & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                << 5U) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                                | ((0x10U 
                                                                                & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                << 4U) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                                | ((8U 
                                                                                & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                << 3U) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                                | ((4U 
                                                                                & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                << 2U) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                                | ((2U 
                                                                                & (((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                << 1U) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)) 
                                                                                | (1U 
                                                                                & ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__iso_en)) 
                                                                                & vlSelf->tb_vega_top__DOT__prdata)))))))))))))))))))))))))))))))));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state 
        = vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state;
    if ((8U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 8U;
    } else if ((4U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
        if ((2U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
                if (vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_ack) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 2U;
                }
            } else if (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__wakeup_req) 
                        & (~ (IData)(vlSelf->tb_vega_top__DOT__battery_low)))) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 7U;
            }
        } else if ((1U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
            if (vlSelf->tb_vega_top__DOT__dut__DOT__wakeup_req) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 7U;
            } else if (vlSelf->tb_vega_top__DOT__battery_low) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 6U;
            }
        } else if ((0x64U <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt))) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 8U;
        } else if (vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_ack) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state 
                = ((IData)(vlSelf->tb_vega_top__DOT__battery_low)
                    ? 6U : 5U);
        }
    } else if ((2U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state 
                = (((IData)(vlSelf->tb_vega_top__DOT__fault_in) 
                    | (IData)(vlSelf->tb_vega_top__DOT__thermal_alert))
                    ? 8U : 4U);
        } else if (((IData)(vlSelf->tb_vega_top__DOT__fault_in) 
                    | (IData)(vlSelf->tb_vega_top__DOT__thermal_alert))) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 8U;
        } else if (vlSelf->tb_vega_top__DOT__battery_low) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 3U;
        } else if ((vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg 
                    & (0U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state)))) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
        if ((0xfU <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt))) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 2U;
        }
    } else {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__clk)))) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_icg_proc__DOT__enable_latched 
            = (1U & (~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en)));
    }
    __Vtableidx2 = (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_en) 
                     << 5U) | (((4U <= (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt)) 
                                << 4U) | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_en) 
                                           << 3U) | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__state))));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__next_state 
        = Vtb_vega_top__ConstPool__TABLE_h874d91a5_0
        [__Vtableidx2];
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt_en 
        = Vtb_vega_top__ConstPool__TABLE_hfa6f55ce_0
        [__Vtableidx2];
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__save_done_next 
        = Vtb_vega_top__ConstPool__TABLE_he153e95f_0
        [__Vtableidx2];
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__restore_done_next 
        = Vtb_vega_top__ConstPool__TABLE_hbe72228b_0
        [__Vtableidx2];
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_saved_next 
        = Vtb_vega_top__ConstPool__TABLE_h1f5de83e_0
        [__Vtableidx2];
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_valid_next 
        = Vtb_vega_top__ConstPool__TABLE_hbe72228b_0
        [__Vtableidx2];
    vlSelf->tb_vega_top__DOT__dut__DOT__clk_proc = 
        ((IData)(vlSelf->tb_vega_top__DOT__clk) & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_icg_proc__DOT__enable_latched));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated 
        = ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en)) 
           & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__clk_proc));
}

VL_ATTR_COLD void Vtb_vega_top___024root___eval_stl(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_vega_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vega_top___024root___dump_triggers__act(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_vega_top.clk or negedge tb_vega_top.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_vega_top.dut.u_data_processor.clk_gated or negedge tb_vega_top.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_vega_top.dut.clk_proc or negedge tb_vega_top.rst_n)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tb_vega_top.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] tb_vega_top.pready)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vega_top___024root___dump_triggers__nba(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_vega_top.clk or negedge tb_vega_top.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_vega_top.dut.u_data_processor.clk_gated or negedge tb_vega_top.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_vega_top.dut.clk_proc or negedge tb_vega_top.rst_n)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tb_vega_top.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] tb_vega_top.pready)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_vega_top___024root___ctor_var_reset(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_vega_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__ext_wakeup_in = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__rtc_wakeup_in = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__irq_wakeup_in = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__ext_wakeup_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__rtc_wakeup_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__irq_wakeup_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__thermal_alert = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__battery_low = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__fault_in = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__psel = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__penable = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__pwrite = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__paddr = VL_RAND_RESET_I(8);
    vlSelf->tb_vega_top__DOT__pwdata = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__prdata = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__pready = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__pslverr = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__reg_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__reg_rd_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__reg_addr = VL_RAND_RESET_I(8);
    vlSelf->tb_vega_top__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__reg_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__reg_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__sensor0_data = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__sensor1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__sensor2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__test_pass_count = 0;
    vlSelf->tb_vega_top__DOT__test_fail_count = 0;
    vlSelf->tb_vega_top__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_cmd = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__iso_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__pwr_sw_off = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__lvl_shift_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_done = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_done = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__wakeup_req = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__proc_irq_ack = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__context_saved = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__context_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__clk_proc = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__prdata_iso = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt = VL_RAND_RESET_I(16);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt = VL_RAND_RESET_I(8);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_1 = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_prev = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_prev = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_prev = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt = VL_RAND_RESET_I(4);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt = VL_RAND_RESET_I(4);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__save_done_next = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__restore_done_next = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_saved_next = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_valid_next = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__sensor_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_icg_proc__DOT__enable_latched = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__next_state = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_a_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_b_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__result_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_result = VL_RAND_RESET_I(32);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_rd_idx = VL_RAND_RESET_I(3);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__overflow_flag = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_done = VL_RAND_RESET_I(1);
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk2__DOT__rf_idx = 0;
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk3__DOT__rf_idx = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__dut__DOT__clk_proc__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__pready__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
