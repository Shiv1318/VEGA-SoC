// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vega_top.h for the primary calling header

#include "verilated.h"

#include "Vtb_vega_top__Syms.h"
#include "Vtb_vega_top__Syms.h"
#include "Vtb_vega_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vega_top___024root___dump_triggers__act(Vtb_vega_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_vega_top___024root___eval_triggers__act(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_vega_top__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_vega_top__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated__0))) 
                                     | ((~ (IData)(vlSelf->tb_vega_top__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__clk_proc) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__dut__DOT__clk_proc__0))) 
                                     | ((~ (IData)(vlSelf->tb_vega_top__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tb_vega_top__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__clk__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->tb_vega_top__DOT__pready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__pready__0)));
    vlSelf->__VactTriggered.set(5U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__clk__0 
        = vlSelf->tb_vega_top__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__rst_n__0 
        = vlSelf->tb_vega_top__DOT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated__0 
        = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated;
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__dut__DOT__clk_proc__0 
        = vlSelf->tb_vega_top__DOT__dut__DOT__clk_proc;
    vlSelf->__Vtrigprevexpr___TOP__tb_vega_top__DOT__pready__0 
        = vlSelf->tb_vega_top__DOT__pready;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_vega_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
