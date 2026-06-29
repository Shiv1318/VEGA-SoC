// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_vega_top.h for the primary calling header

#include "verilated.h"

#include "Vtb_vega_top__Syms.h"
#include "Vtb_vega_top___024root.h"

VL_ATTR_COLD void Vtb_vega_top___024root___eval_initial__TOP(Vtb_vega_top___024root* vlSelf);
VlCoroutine Vtb_vega_top___024root___eval_initial__TOP__0(Vtb_vega_top___024root* vlSelf);
VlCoroutine Vtb_vega_top___024root___eval_initial__TOP__1(Vtb_vega_top___024root* vlSelf);
VlCoroutine Vtb_vega_top___024root___eval_initial__TOP__2(Vtb_vega_top___024root* vlSelf);

void Vtb_vega_top___024root___eval_initial(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_initial\n"); );
    // Body
    Vtb_vega_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_vega_top___024root___eval_initial__TOP__0(vlSelf);
    Vtb_vega_top___024root___eval_initial__TOP__1(vlSelf);
    Vtb_vega_top___024root___eval_initial__TOP__2(vlSelf);
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
}

VL_INLINE_OPT VlCoroutine Vtb_vega_top___024root___eval_initial__TOP__0(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_initial__TOP__0\n"); );
    // Init
    std::string __Vtask_tb_vega_top__DOT__check__0__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__0__condition;
    __Vtask_tb_vega_top__DOT__check__0__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__0__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__0__fail_msg;
    CData/*3:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__1__target_state;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__1__target_state = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__1__max_cycles;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__1__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__1__cnt;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__1__cnt = 0;
    std::string __Vtask_tb_vega_top__DOT__check__2__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__2__condition;
    __Vtask_tb_vega_top__DOT__check__2__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__2__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__2__fail_msg;
    std::string __Vtask_tb_vega_top__DOT__check__3__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__3__condition;
    __Vtask_tb_vega_top__DOT__check__3__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__3__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__3__fail_msg;
    std::string __Vtask_tb_vega_top__DOT__check__4__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__4__condition;
    __Vtask_tb_vega_top__DOT__check__4__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__4__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__4__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__5__addr;
    __Vtask_tb_vega_top__DOT__apb_write__5__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__5__data;
    __Vtask_tb_vega_top__DOT__apb_write__5__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__6__addr;
    __Vtask_tb_vega_top__DOT__apb_write__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__6__data;
    __Vtask_tb_vega_top__DOT__apb_write__6__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__7__addr;
    __Vtask_tb_vega_top__DOT__apb_write__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__7__data;
    __Vtask_tb_vega_top__DOT__apb_write__7__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__8__addr;
    __Vtask_tb_vega_top__DOT__apb_write__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__8__data;
    __Vtask_tb_vega_top__DOT__apb_write__8__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_read__9__addr;
    __Vtask_tb_vega_top__DOT__apb_read__9__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_read__9__data;
    __Vtask_tb_vega_top__DOT__apb_read__9__data = 0;
    std::string __Vtask_tb_vega_top__DOT__check__10__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__10__condition;
    __Vtask_tb_vega_top__DOT__check__10__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__10__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__10__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__11__addr;
    __Vtask_tb_vega_top__DOT__apb_write__11__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__11__data;
    __Vtask_tb_vega_top__DOT__apb_write__11__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__12__addr;
    __Vtask_tb_vega_top__DOT__apb_write__12__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__12__data;
    __Vtask_tb_vega_top__DOT__apb_write__12__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__13__addr;
    __Vtask_tb_vega_top__DOT__apb_write__13__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__13__data;
    __Vtask_tb_vega_top__DOT__apb_write__13__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__14__addr;
    __Vtask_tb_vega_top__DOT__apb_write__14__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__14__data;
    __Vtask_tb_vega_top__DOT__apb_write__14__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_read__15__addr;
    __Vtask_tb_vega_top__DOT__apb_read__15__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_read__15__data;
    __Vtask_tb_vega_top__DOT__apb_read__15__data = 0;
    std::string __Vtask_tb_vega_top__DOT__check__16__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__16__condition;
    __Vtask_tb_vega_top__DOT__check__16__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__16__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__16__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__17__addr;
    __Vtask_tb_vega_top__DOT__apb_write__17__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__17__data;
    __Vtask_tb_vega_top__DOT__apb_write__17__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__18__addr;
    __Vtask_tb_vega_top__DOT__apb_write__18__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__18__data;
    __Vtask_tb_vega_top__DOT__apb_write__18__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__19__addr;
    __Vtask_tb_vega_top__DOT__apb_write__19__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__19__data;
    __Vtask_tb_vega_top__DOT__apb_write__19__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__20__addr;
    __Vtask_tb_vega_top__DOT__apb_write__20__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__20__data;
    __Vtask_tb_vega_top__DOT__apb_write__20__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_read__21__addr;
    __Vtask_tb_vega_top__DOT__apb_read__21__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_read__21__data;
    __Vtask_tb_vega_top__DOT__apb_read__21__data = 0;
    std::string __Vtask_tb_vega_top__DOT__check__22__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__22__condition;
    __Vtask_tb_vega_top__DOT__check__22__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__22__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__22__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__23__addr;
    __Vtask_tb_vega_top__DOT__apb_write__23__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__23__data;
    __Vtask_tb_vega_top__DOT__apb_write__23__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__24__addr;
    __Vtask_tb_vega_top__DOT__apb_write__24__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__24__data;
    __Vtask_tb_vega_top__DOT__apb_write__24__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_read__25__addr;
    __Vtask_tb_vega_top__DOT__apb_read__25__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_read__25__data;
    __Vtask_tb_vega_top__DOT__apb_read__25__data = 0;
    std::string __Vtask_tb_vega_top__DOT__check__26__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__26__condition;
    __Vtask_tb_vega_top__DOT__check__26__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__26__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__26__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_read__27__addr;
    __Vtask_tb_vega_top__DOT__apb_read__27__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_read__27__data;
    __Vtask_tb_vega_top__DOT__apb_read__27__data = 0;
    std::string __Vtask_tb_vega_top__DOT__check__28__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__28__condition;
    __Vtask_tb_vega_top__DOT__check__28__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__28__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__28__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__29__addr;
    __Vtask_tb_vega_top__DOT__apb_write__29__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__29__data;
    __Vtask_tb_vega_top__DOT__apb_write__29__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__30__addr;
    __Vtask_tb_vega_top__DOT__apb_write__30__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__30__data;
    __Vtask_tb_vega_top__DOT__apb_write__30__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__31__addr;
    __Vtask_tb_vega_top__DOT__apb_write__31__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__31__data;
    __Vtask_tb_vega_top__DOT__apb_write__31__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_write__32__addr;
    __Vtask_tb_vega_top__DOT__apb_write__32__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_write__32__data;
    __Vtask_tb_vega_top__DOT__apb_write__32__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__apb_read__33__addr;
    __Vtask_tb_vega_top__DOT__apb_read__33__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__apb_read__33__data;
    __Vtask_tb_vega_top__DOT__apb_read__33__data = 0;
    std::string __Vtask_tb_vega_top__DOT__check__34__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__34__condition;
    __Vtask_tb_vega_top__DOT__check__34__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__34__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__34__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__rb_write__35__addr;
    __Vtask_tb_vega_top__DOT__rb_write__35__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__rb_write__35__data;
    __Vtask_tb_vega_top__DOT__rb_write__35__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__rb_read__36__addr;
    __Vtask_tb_vega_top__DOT__rb_read__36__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__rb_read__36__data;
    __Vtask_tb_vega_top__DOT__rb_read__36__data = 0;
    std::string __Vtask_tb_vega_top__DOT__check__37__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__37__condition;
    __Vtask_tb_vega_top__DOT__check__37__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__37__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__37__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__rb_read__38__addr;
    __Vtask_tb_vega_top__DOT__rb_read__38__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__rb_read__38__data;
    __Vtask_tb_vega_top__DOT__rb_read__38__data = 0;
    std::string __Vtask_tb_vega_top__DOT__check__39__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__39__condition;
    __Vtask_tb_vega_top__DOT__check__39__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__39__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__39__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__rb_write__40__addr;
    __Vtask_tb_vega_top__DOT__rb_write__40__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__rb_write__40__data;
    __Vtask_tb_vega_top__DOT__rb_write__40__data = 0;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__rb_write__41__addr;
    __Vtask_tb_vega_top__DOT__rb_write__41__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__rb_write__41__data;
    __Vtask_tb_vega_top__DOT__rb_write__41__data = 0;
    std::string __Vtask_tb_vega_top__DOT__check__42__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__42__condition;
    __Vtask_tb_vega_top__DOT__check__42__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__42__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__42__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__rb_write__43__addr;
    __Vtask_tb_vega_top__DOT__rb_write__43__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__rb_write__43__data;
    __Vtask_tb_vega_top__DOT__rb_write__43__data = 0;
    CData/*3:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__44__target_state;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__44__target_state = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__44__max_cycles;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__44__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__44__cnt;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__44__cnt = 0;
    std::string __Vtask_tb_vega_top__DOT__check__45__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__45__condition;
    __Vtask_tb_vega_top__DOT__check__45__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__45__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__45__fail_msg;
    std::string __Vtask_tb_vega_top__DOT__check__46__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__46__condition;
    __Vtask_tb_vega_top__DOT__check__46__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__46__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__46__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__rb_write__47__addr;
    __Vtask_tb_vega_top__DOT__rb_write__47__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__rb_write__47__data;
    __Vtask_tb_vega_top__DOT__rb_write__47__data = 0;
    CData/*3:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__48__target_state;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__48__target_state = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__48__max_cycles;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__48__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__48__cnt;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__48__cnt = 0;
    std::string __Vtask_tb_vega_top__DOT__check__49__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__49__condition;
    __Vtask_tb_vega_top__DOT__check__49__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__49__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__49__fail_msg;
    CData/*3:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__50__target_state;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__50__target_state = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__50__max_cycles;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__50__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__50__cnt;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__50__cnt = 0;
    std::string __Vtask_tb_vega_top__DOT__check__51__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__51__condition;
    __Vtask_tb_vega_top__DOT__check__51__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__51__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__51__fail_msg;
    std::string __Vtask_tb_vega_top__DOT__check__52__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__52__condition;
    __Vtask_tb_vega_top__DOT__check__52__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__52__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__52__fail_msg;
    CData/*3:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__53__target_state;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__53__target_state = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__53__max_cycles;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__53__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__53__cnt;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__53__cnt = 0;
    CData/*3:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__54__target_state;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__54__target_state = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__54__max_cycles;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__54__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__54__cnt;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__54__cnt = 0;
    std::string __Vtask_tb_vega_top__DOT__check__55__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__55__condition;
    __Vtask_tb_vega_top__DOT__check__55__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__55__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__55__fail_msg;
    std::string __Vtask_tb_vega_top__DOT__check__56__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__56__condition;
    __Vtask_tb_vega_top__DOT__check__56__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__56__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__56__fail_msg;
    CData/*3:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__57__target_state;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__57__target_state = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__57__max_cycles;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__57__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__57__cnt;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__57__cnt = 0;
    std::string __Vtask_tb_vega_top__DOT__check__58__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__58__condition;
    __Vtask_tb_vega_top__DOT__check__58__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__58__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__58__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__rb_write__59__addr;
    __Vtask_tb_vega_top__DOT__rb_write__59__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__rb_write__59__data;
    __Vtask_tb_vega_top__DOT__rb_write__59__data = 0;
    CData/*3:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__60__target_state;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__60__target_state = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__60__max_cycles;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__60__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__60__cnt;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__60__cnt = 0;
    std::string __Vtask_tb_vega_top__DOT__check__61__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__61__condition;
    __Vtask_tb_vega_top__DOT__check__61__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__61__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__61__fail_msg;
    CData/*7:0*/ __Vtask_tb_vega_top__DOT__rb_write__62__addr;
    __Vtask_tb_vega_top__DOT__rb_write__62__addr = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__rb_write__62__data;
    __Vtask_tb_vega_top__DOT__rb_write__62__data = 0;
    CData/*3:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__63__target_state;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__63__target_state = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__63__max_cycles;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__63__max_cycles = 0;
    IData/*31:0*/ __Vtask_tb_vega_top__DOT__wait_pmu_state__63__cnt;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__63__cnt = 0;
    std::string __Vtask_tb_vega_top__DOT__check__64__test_name;
    CData/*0:0*/ __Vtask_tb_vega_top__DOT__check__64__condition;
    __Vtask_tb_vega_top__DOT__check__64__condition = 0;
    std::string __Vtask_tb_vega_top__DOT__check__64__pass_msg;
    std::string __Vtask_tb_vega_top__DOT__check__64__fail_msg;
    // Body
    vlSelf->tb_vega_top__DOT__rst_n = 0U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    vlSelf->tb_vega_top__DOT__paddr = 0U;
    vlSelf->tb_vega_top__DOT__pwdata = 0U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = 0U;
    vlSelf->tb_vega_top__DOT__reg_wdata = 0U;
    vlSelf->tb_vega_top__DOT__ext_wakeup_in = 0U;
    vlSelf->tb_vega_top__DOT__rtc_wakeup_in = 0U;
    vlSelf->tb_vega_top__DOT__irq_wakeup_in = 0U;
    vlSelf->tb_vega_top__DOT__ext_wakeup_en = 0U;
    vlSelf->tb_vega_top__DOT__rtc_wakeup_en = 1U;
    vlSelf->tb_vega_top__DOT__irq_wakeup_en = 0U;
    vlSelf->tb_vega_top__DOT__thermal_alert = 0U;
    vlSelf->tb_vega_top__DOT__battery_low = 0U;
    vlSelf->tb_vega_top__DOT__fault_in = 0U;
    vlSelf->tb_vega_top__DOT__sensor0_data = 0x10U;
    vlSelf->tb_vega_top__DOT__sensor1_data = 0x20U;
    vlSelf->tb_vega_top__DOT__sensor2_data = 0x30U;
    VL_WRITEF("\n========================================\n TEST 1: Power-On Reset\n========================================\n");
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       285);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       285);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       285);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       285);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       285);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       287);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__check__0__fail_msg = VL_SFORMATF_NX("PMU=%0x",
                                                                  4,
                                                                  vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) ;
    __Vtask_tb_vega_top__DOT__check__0__pass_msg = 
        std::string{"PMU=BOOT"};
    __Vtask_tb_vega_top__DOT__check__0__condition = 
        (1U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__0__test_name = 
        std::string{"PMU in BOOT state after reset"};
    if (__Vtask_tb_vega_top__DOT__check__0__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__0__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__0__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__0__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__0__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 2: Boot -> Active transition\n========================================\n");
    __Vtask_tb_vega_top__DOT__wait_pmu_state__1__max_cycles = 0xc8U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__1__target_state = 2U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__1__cnt = 0U;
    while ((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
             != (IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__1__target_state)) 
            & VL_LTS_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__1__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__1__max_cycles))) {
        co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_vega_top.clk)", 
                                                           "tb/tb_vega_top.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vega_top__DOT__wait_pmu_state__1__cnt 
            = ((IData)(1U) + __Vtask_tb_vega_top__DOT__wait_pmu_state__1__cnt);
    }
    if (VL_UNLIKELY(VL_GTES_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__1__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__1__max_cycles))) {
        VL_WRITEF("[WARN] %0t | Timeout waiting for PMU state %0x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__1__target_state));
    }
    __Vtask_tb_vega_top__DOT__check__2__fail_msg = VL_SFORMATF_NX("PMU=%0x",
                                                                  4,
                                                                  vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) ;
    __Vtask_tb_vega_top__DOT__check__2__pass_msg = 
        std::string{"PMU=ACTIVE"};
    __Vtask_tb_vega_top__DOT__check__2__condition = 
        (2U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__2__test_name = 
        std::string{"PMU transitions to ACTIVE"};
    if (__Vtask_tb_vega_top__DOT__check__2__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__2__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__2__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__2__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__2__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    __Vtask_tb_vega_top__DOT__check__3__fail_msg = 
        std::string{""};
    __Vtask_tb_vega_top__DOT__check__3__pass_msg = 
        std::string{""};
    __Vtask_tb_vega_top__DOT__check__3__condition = 
        (2U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__3__test_name = 
        std::string{"pmu_active asserted"};
    if (__Vtask_tb_vega_top__DOT__check__3__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__3__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__3__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__3__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__3__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    __Vtask_tb_vega_top__DOT__check__4__fail_msg = 
        std::string{""};
    __Vtask_tb_vega_top__DOT__check__4__pass_msg = 
        std::string{""};
    __Vtask_tb_vega_top__DOT__check__4__condition = 
        (1U & (~ ((5U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)) 
                  | (6U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)))));
    __Vtask_tb_vega_top__DOT__check__4__test_name = 
        std::string{"pmu_sleeping de-asserted"};
    if (__Vtask_tb_vega_top__DOT__check__4__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__4__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__4__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__4__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__4__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 3: Processor ALU ADD (direct mode)\n========================================\n");
    __Vtask_tb_vega_top__DOT__apb_write__5__data = 0xaaU;
    __Vtask_tb_vega_top__DOT__apb_write__5__addr = 4U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__5__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__5__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__6__data = 0x55U;
    __Vtask_tb_vega_top__DOT__apb_write__6__addr = 8U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__6__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__6__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__7__data = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__7__addr = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__7__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__7__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__8__data = 1U;
    __Vtask_tb_vega_top__DOT__apb_write__8__addr = 0x14U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__8__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__8__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__apb_read__9__addr = 0xcU;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_read__9__addr;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       181);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           182);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_vega_top__DOT__apb_read__9__data = vlSelf->tb_vega_top__DOT__prdata;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__rd_data = __Vtask_tb_vega_top__DOT__apb_read__9__data;
    __Vtask_tb_vega_top__DOT__check__10__fail_msg = VL_SFORMATF_NX("Expected 0xFF, Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__10__pass_msg = VL_SFORMATF_NX("Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__10__condition 
        = (0xffU == vlSelf->tb_vega_top__DOT__rd_data);
    __Vtask_tb_vega_top__DOT__check__10__test_name = 
        std::string{"ALU ADD: 0xAA + 0x55 = 0xFF"};
    if (__Vtask_tb_vega_top__DOT__check__10__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__10__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__10__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__10__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__10__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 4: Processor ALU SUB\n========================================\n");
    __Vtask_tb_vega_top__DOT__apb_write__11__data = 0x100U;
    __Vtask_tb_vega_top__DOT__apb_write__11__addr = 4U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__11__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__11__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__12__data = 1U;
    __Vtask_tb_vega_top__DOT__apb_write__12__addr = 8U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__12__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__12__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__13__data = 1U;
    __Vtask_tb_vega_top__DOT__apb_write__13__addr = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__13__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__13__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__14__data = 1U;
    __Vtask_tb_vega_top__DOT__apb_write__14__addr = 0x14U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__14__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__14__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__apb_read__15__addr = 0xcU;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_read__15__addr;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       181);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           182);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_vega_top__DOT__apb_read__15__data = vlSelf->tb_vega_top__DOT__prdata;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__rd_data = __Vtask_tb_vega_top__DOT__apb_read__15__data;
    __Vtask_tb_vega_top__DOT__check__16__fail_msg = VL_SFORMATF_NX("Expected 0xFF, Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__16__pass_msg = VL_SFORMATF_NX("Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__16__condition 
        = (0xffU == vlSelf->tb_vega_top__DOT__rd_data);
    __Vtask_tb_vega_top__DOT__check__16__test_name = 
        std::string{"ALU SUB: 0x100 - 0x1 = 0xFF"};
    if (__Vtask_tb_vega_top__DOT__check__16__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__16__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__16__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__16__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__16__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 5: Processor ALU AND\n========================================\n");
    __Vtask_tb_vega_top__DOT__apb_write__17__data = 0xffffffffU;
    __Vtask_tb_vega_top__DOT__apb_write__17__addr = 4U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__17__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__17__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__18__data = 0xa0a0a0aU;
    __Vtask_tb_vega_top__DOT__apb_write__18__addr = 8U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__18__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__18__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__19__data = 2U;
    __Vtask_tb_vega_top__DOT__apb_write__19__addr = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__19__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__19__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__20__data = 1U;
    __Vtask_tb_vega_top__DOT__apb_write__20__addr = 0x14U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__20__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__20__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       347);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__apb_read__21__addr = 0xcU;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_read__21__addr;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       181);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           182);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_vega_top__DOT__apb_read__21__data = vlSelf->tb_vega_top__DOT__prdata;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__rd_data = __Vtask_tb_vega_top__DOT__apb_read__21__data;
    __Vtask_tb_vega_top__DOT__check__22__fail_msg = VL_SFORMATF_NX("Expected 0x0A0A0A0A, Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__22__pass_msg = VL_SFORMATF_NX("Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__22__condition 
        = (0xa0a0a0aU == vlSelf->tb_vega_top__DOT__rd_data);
    __Vtask_tb_vega_top__DOT__check__22__test_name = 
        std::string{"ALU AND: 0xFFFFFFFF & 0x0A0A0A0A = 0x0A0A0A0A"};
    if (__Vtask_tb_vega_top__DOT__check__22__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__22__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__22__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__22__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__22__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 6: Processor Register File R/W\n========================================\n");
    __Vtask_tb_vega_top__DOT__apb_write__23__data = 0xcafebabeU;
    __Vtask_tb_vega_top__DOT__apb_write__23__addr = 0x20U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__23__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__23__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__24__data = 0xdeadc0deU;
    __Vtask_tb_vega_top__DOT__apb_write__24__addr = 0x2cU;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__24__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__24__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_read__25__addr = 0x20U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_read__25__addr;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       181);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           182);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_vega_top__DOT__apb_read__25__data = vlSelf->tb_vega_top__DOT__prdata;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__rd_data = __Vtask_tb_vega_top__DOT__apb_read__25__data;
    __Vtask_tb_vega_top__DOT__check__26__fail_msg = VL_SFORMATF_NX("Expected 0xCAFEBABE, Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__26__pass_msg = VL_SFORMATF_NX("Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__26__condition 
        = (0xcafebabeU == vlSelf->tb_vega_top__DOT__rd_data);
    __Vtask_tb_vega_top__DOT__check__26__test_name = 
        std::string{"RF[2] write/read: 0xCAFEBABE"};
    if (__Vtask_tb_vega_top__DOT__check__26__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__26__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__26__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__26__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__26__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    __Vtask_tb_vega_top__DOT__apb_read__27__addr = 0x2cU;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_read__27__addr;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       181);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           182);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_vega_top__DOT__apb_read__27__data = vlSelf->tb_vega_top__DOT__prdata;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__rd_data = __Vtask_tb_vega_top__DOT__apb_read__27__data;
    __Vtask_tb_vega_top__DOT__check__28__fail_msg = VL_SFORMATF_NX("Expected 0xDEADC0DE, Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__28__pass_msg = VL_SFORMATF_NX("Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__28__condition 
        = (0xdeadc0deU == vlSelf->tb_vega_top__DOT__rd_data);
    __Vtask_tb_vega_top__DOT__check__28__test_name = 
        std::string{"RF[5] write/read: 0xDEADC0DE"};
    if (__Vtask_tb_vega_top__DOT__check__28__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__28__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__28__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__28__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__28__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 7: Processor ALU CMP via RF\n========================================\n");
    __Vtask_tb_vega_top__DOT__apb_write__29__data = 0x12345678U;
    __Vtask_tb_vega_top__DOT__apb_write__29__addr = 0x18U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__29__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__29__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__30__data = 0x12345678U;
    __Vtask_tb_vega_top__DOT__apb_write__30__addr = 0x1cU;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__30__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__30__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__31__data = 0x3207U;
    __Vtask_tb_vega_top__DOT__apb_write__31__addr = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__31__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__31__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    __Vtask_tb_vega_top__DOT__apb_write__32__data = 3U;
    __Vtask_tb_vega_top__DOT__apb_write__32__addr = 0x14U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       151);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 1U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_write__32__addr;
    vlSelf->tb_vega_top__DOT__pwdata = __Vtask_tb_vega_top__DOT__apb_write__32__data;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       157);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           160);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       161);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       382);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__apb_read__33__addr = 0xcU;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 1U;
    vlSelf->tb_vega_top__DOT__pwrite = 0U;
    vlSelf->tb_vega_top__DOT__paddr = __Vtask_tb_vega_top__DOT__apb_read__33__addr;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       179);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__penable = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       181);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__pready)))) {
        co_await vlSelf->__VtrigSched_hf8340dfd__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_vega_top.pready)", 
                                                           "tb/tb_vega_top.sv", 
                                                           182);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_vega_top__DOT__apb_read__33__data = vlSelf->tb_vega_top__DOT__prdata;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__psel = 0U;
    vlSelf->tb_vega_top__DOT__penable = 0U;
    vlSelf->tb_vega_top__DOT__rd_data = __Vtask_tb_vega_top__DOT__apb_read__33__data;
    __Vtask_tb_vega_top__DOT__check__34__fail_msg = VL_SFORMATF_NX("Expected 1, Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__34__pass_msg = VL_SFORMATF_NX("Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__34__condition 
        = (1U == vlSelf->tb_vega_top__DOT__rd_data);
    __Vtask_tb_vega_top__DOT__check__34__test_name = 
        std::string{"ALU CMP: equal values -> result=1"};
    if (__Vtask_tb_vega_top__DOT__check__34__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__34__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__34__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__34__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__34__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 8: Sensor RegBank R/W\n========================================\n");
    __Vtask_tb_vega_top__DOT__rb_write__35__data = 0x2ffU;
    __Vtask_tb_vega_top__DOT__rb_write__35__addr = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = __Vtask_tb_vega_top__DOT__rb_write__35__addr;
    vlSelf->tb_vega_top__DOT__reg_wdata = __Vtask_tb_vega_top__DOT__rb_write__35__data;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       203);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__rb_read__36__addr = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       213);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = __Vtask_tb_vega_top__DOT__rb_read__36__addr;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       217);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    __Vtask_tb_vega_top__DOT__rb_read__36__data = vlSelf->tb_vega_top__DOT__reg_rdata;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       220);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__rd_data = __Vtask_tb_vega_top__DOT__rb_read__36__data;
    __Vtask_tb_vega_top__DOT__check__37__fail_msg = VL_SFORMATF_NX("Expected 0x2FF, Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__37__pass_msg = VL_SFORMATF_NX("Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__37__condition 
        = (0x2ffU == vlSelf->tb_vega_top__DOT__rd_data);
    __Vtask_tb_vega_top__DOT__check__37__test_name = 
        std::string{"RegBank CTRL_REG write/read"};
    if (__Vtask_tb_vega_top__DOT__check__37__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__37__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__37__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__37__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__37__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    __Vtask_tb_vega_top__DOT__rb_read__38__addr = 8U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       213);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = __Vtask_tb_vega_top__DOT__rb_read__38__addr;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       217);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    __Vtask_tb_vega_top__DOT__rb_read__38__data = vlSelf->tb_vega_top__DOT__reg_rdata;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       220);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__rd_data = __Vtask_tb_vega_top__DOT__rb_read__38__data;
    __Vtask_tb_vega_top__DOT__check__39__fail_msg = VL_SFORMATF_NX("Expected 0x10, Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__39__pass_msg = VL_SFORMATF_NX("Got 0x%0x",
                                                                   32,
                                                                   vlSelf->tb_vega_top__DOT__rd_data) ;
    __Vtask_tb_vega_top__DOT__check__39__condition 
        = (0x10U == vlSelf->tb_vega_top__DOT__rd_data);
    __Vtask_tb_vega_top__DOT__check__39__test_name = 
        std::string{"Sensor0 read: 0x10"};
    if (__Vtask_tb_vega_top__DOT__check__39__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__39__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__39__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__39__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__39__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 9: Sensor IRQ Threshold Crossing\n========================================\n");
    __Vtask_tb_vega_top__DOT__rb_write__40__data = 0xfU;
    __Vtask_tb_vega_top__DOT__rb_write__40__addr = 0x1cU;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = __Vtask_tb_vega_top__DOT__rb_write__40__addr;
    vlSelf->tb_vega_top__DOT__reg_wdata = __Vtask_tb_vega_top__DOT__rb_write__40__data;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       203);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__rb_write__41__data = 1U;
    __Vtask_tb_vega_top__DOT__rb_write__41__addr = 0x18U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = __Vtask_tb_vega_top__DOT__rb_write__41__addr;
    vlSelf->tb_vega_top__DOT__reg_wdata = __Vtask_tb_vega_top__DOT__rb_write__41__data;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       203);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       415);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       415);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       415);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       415);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       415);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__check__42__fail_msg = 
        std::string{"IRQ not asserted"};
    __Vtask_tb_vega_top__DOT__check__42__pass_msg = 
        std::string{"IRQ asserted"};
    __Vtask_tb_vega_top__DOT__check__42__condition 
        = ((0U != (7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                         & vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg))) 
           & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg 
              >> 9U));
    __Vtask_tb_vega_top__DOT__check__42__test_name = 
        std::string{"irq_out asserted on threshold crossing"};
    if (__Vtask_tb_vega_top__DOT__check__42__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__42__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__42__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__42__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__42__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 10: Sleep Entry (SW Sleep Request)\n========================================\n");
    __Vtask_tb_vega_top__DOT__rb_write__43__data = 1U;
    __Vtask_tb_vega_top__DOT__rb_write__43__addr = 0x28U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = __Vtask_tb_vega_top__DOT__rb_write__43__addr;
    vlSelf->tb_vega_top__DOT__reg_wdata = __Vtask_tb_vega_top__DOT__rb_write__43__data;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       203);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__44__max_cycles = 0x1f4U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__44__target_state = 5U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__44__cnt = 0U;
    while ((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
             != (IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__44__target_state)) 
            & VL_LTS_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__44__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__44__max_cycles))) {
        co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_vega_top.clk)", 
                                                           "tb/tb_vega_top.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vega_top__DOT__wait_pmu_state__44__cnt 
            = ((IData)(1U) + __Vtask_tb_vega_top__DOT__wait_pmu_state__44__cnt);
    }
    if (VL_UNLIKELY(VL_GTES_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__44__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__44__max_cycles))) {
        VL_WRITEF("[WARN] %0t | Timeout waiting for PMU state %0x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__44__target_state));
    }
    __Vtask_tb_vega_top__DOT__check__45__fail_msg = VL_SFORMATF_NX("PMU=%0x",
                                                                   4,
                                                                   vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) ;
    __Vtask_tb_vega_top__DOT__check__45__pass_msg = 
        std::string{"PMU=SLEEP"};
    __Vtask_tb_vega_top__DOT__check__45__condition 
        = (5U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__45__test_name = 
        std::string{"PMU entered SLEEP"};
    if (__Vtask_tb_vega_top__DOT__check__45__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__45__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__45__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__45__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__45__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    __Vtask_tb_vega_top__DOT__check__46__fail_msg = 
        std::string{""};
    __Vtask_tb_vega_top__DOT__check__46__pass_msg = 
        std::string{""};
    __Vtask_tb_vega_top__DOT__check__46__condition 
        = ((5U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)) 
           | (6U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)));
    __Vtask_tb_vega_top__DOT__check__46__test_name = 
        std::string{"pmu_sleeping asserted"};
    if (__Vtask_tb_vega_top__DOT__check__46__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__46__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__46__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__46__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__46__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 11: RTC Wakeup\n========================================\n");
    __Vtask_tb_vega_top__DOT__rb_write__47__data = 0U;
    __Vtask_tb_vega_top__DOT__rb_write__47__addr = 0x28U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = __Vtask_tb_vega_top__DOT__rb_write__47__addr;
    vlSelf->tb_vega_top__DOT__reg_wdata = __Vtask_tb_vega_top__DOT__rb_write__47__data;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       203);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       442);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__rtc_wakeup_in = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       444);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       444);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       444);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__rtc_wakeup_in = 0U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__48__max_cycles = 0xc8U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__48__target_state = 7U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__48__cnt = 0U;
    while ((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
             != (IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__48__target_state)) 
            & VL_LTS_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__48__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__48__max_cycles))) {
        co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_vega_top.clk)", 
                                                           "tb/tb_vega_top.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vega_top__DOT__wait_pmu_state__48__cnt 
            = ((IData)(1U) + __Vtask_tb_vega_top__DOT__wait_pmu_state__48__cnt);
    }
    if (VL_UNLIKELY(VL_GTES_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__48__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__48__max_cycles))) {
        VL_WRITEF("[WARN] %0t | Timeout waiting for PMU state %0x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__48__target_state));
    }
    __Vtask_tb_vega_top__DOT__check__49__fail_msg = VL_SFORMATF_NX("PMU=%0x",
                                                                   4,
                                                                   vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) ;
    __Vtask_tb_vega_top__DOT__check__49__pass_msg = 
        std::string{"PMU=WAKEUP"};
    __Vtask_tb_vega_top__DOT__check__49__condition 
        = (7U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__49__test_name = 
        std::string{"PMU entered WAKEUP"};
    if (__Vtask_tb_vega_top__DOT__check__49__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__49__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__49__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__49__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__49__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    __Vtask_tb_vega_top__DOT__wait_pmu_state__50__max_cycles = 0x1f4U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__50__target_state = 2U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__50__cnt = 0U;
    while ((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
             != (IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__50__target_state)) 
            & VL_LTS_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__50__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__50__max_cycles))) {
        co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_vega_top.clk)", 
                                                           "tb/tb_vega_top.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vega_top__DOT__wait_pmu_state__50__cnt 
            = ((IData)(1U) + __Vtask_tb_vega_top__DOT__wait_pmu_state__50__cnt);
    }
    if (VL_UNLIKELY(VL_GTES_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__50__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__50__max_cycles))) {
        VL_WRITEF("[WARN] %0t | Timeout waiting for PMU state %0x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__50__target_state));
    }
    __Vtask_tb_vega_top__DOT__check__51__fail_msg = VL_SFORMATF_NX("PMU=%0x",
                                                                   4,
                                                                   vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) ;
    __Vtask_tb_vega_top__DOT__check__51__pass_msg = 
        std::string{"PMU=ACTIVE"};
    __Vtask_tb_vega_top__DOT__check__51__condition 
        = (2U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__51__test_name = 
        std::string{"PMU returned to ACTIVE after wakeup"};
    if (__Vtask_tb_vega_top__DOT__check__51__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__51__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__51__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__51__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__51__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    __Vtask_tb_vega_top__DOT__check__52__fail_msg = VL_SFORMATF_NX("wakeup_src_status=%0b",
                                                                   3,
                                                                   (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat) 
                                                                     << 2U) 
                                                                    | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat)))) ;
    __Vtask_tb_vega_top__DOT__check__52__pass_msg = 
        std::string{"RTC src set"};
    __Vtask_tb_vega_top__DOT__check__52__condition 
        = vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat;
    __Vtask_tb_vega_top__DOT__check__52__test_name = 
        std::string{"wakeup_src_status[1] (RTC) set"};
    if (__Vtask_tb_vega_top__DOT__check__52__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__52__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__52__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__52__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__52__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 12: Thermal Fault Injection\n========================================\n");
    __Vtask_tb_vega_top__DOT__wait_pmu_state__53__max_cycles = 0x12cU;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__53__target_state = 2U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__53__cnt = 0U;
    while ((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
             != (IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__53__target_state)) 
            & VL_LTS_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__53__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__53__max_cycles))) {
        co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_vega_top.clk)", 
                                                           "tb/tb_vega_top.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vega_top__DOT__wait_pmu_state__53__cnt 
            = ((IData)(1U) + __Vtask_tb_vega_top__DOT__wait_pmu_state__53__cnt);
    }
    if (VL_UNLIKELY(VL_GTES_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__53__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__53__max_cycles))) {
        VL_WRITEF("[WARN] %0t | Timeout waiting for PMU state %0x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__53__target_state));
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       465);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__thermal_alert = 1U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__54__max_cycles = 0x32U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__54__target_state = 8U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__54__cnt = 0U;
    while ((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
             != (IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__54__target_state)) 
            & VL_LTS_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__54__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__54__max_cycles))) {
        co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_vega_top.clk)", 
                                                           "tb/tb_vega_top.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vega_top__DOT__wait_pmu_state__54__cnt 
            = ((IData)(1U) + __Vtask_tb_vega_top__DOT__wait_pmu_state__54__cnt);
    }
    if (VL_UNLIKELY(VL_GTES_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__54__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__54__max_cycles))) {
        VL_WRITEF("[WARN] %0t | Timeout waiting for PMU state %0x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__54__target_state));
    }
    __Vtask_tb_vega_top__DOT__check__55__fail_msg = VL_SFORMATF_NX("PMU=%0x",
                                                                   4,
                                                                   vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) ;
    __Vtask_tb_vega_top__DOT__check__55__pass_msg = 
        std::string{"PMU=FAULT"};
    __Vtask_tb_vega_top__DOT__check__55__condition 
        = (8U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__55__test_name = 
        std::string{"PMU entered FAULT on thermal alert"};
    if (__Vtask_tb_vega_top__DOT__check__55__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__55__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__55__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__55__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__55__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    __Vtask_tb_vega_top__DOT__check__56__fail_msg = 
        std::string{""};
    __Vtask_tb_vega_top__DOT__check__56__pass_msg = 
        std::string{""};
    __Vtask_tb_vega_top__DOT__check__56__condition 
        = (8U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__56__test_name = 
        std::string{"pmu_fault asserted"};
    if (__Vtask_tb_vega_top__DOT__check__56__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__56__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__56__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__56__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__56__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    vlSelf->tb_vega_top__DOT__thermal_alert = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       474);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__rst_n = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       476);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       476);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       476);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       476);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       476);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__rst_n = 1U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__57__max_cycles = 0xc8U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__57__target_state = 2U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__57__cnt = 0U;
    while ((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
             != (IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__57__target_state)) 
            & VL_LTS_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__57__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__57__max_cycles))) {
        co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_vega_top.clk)", 
                                                           "tb/tb_vega_top.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vega_top__DOT__wait_pmu_state__57__cnt 
            = ((IData)(1U) + __Vtask_tb_vega_top__DOT__wait_pmu_state__57__cnt);
    }
    if (VL_UNLIKELY(VL_GTES_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__57__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__57__max_cycles))) {
        VL_WRITEF("[WARN] %0t | Timeout waiting for PMU state %0x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__57__target_state));
    }
    __Vtask_tb_vega_top__DOT__check__58__fail_msg = VL_SFORMATF_NX("PMU=%0x",
                                                                   4,
                                                                   vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) ;
    __Vtask_tb_vega_top__DOT__check__58__pass_msg = 
        std::string{"PMU=ACTIVE"};
    __Vtask_tb_vega_top__DOT__check__58__condition 
        = (2U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__58__test_name = 
        std::string{"PMU recovered to ACTIVE after reset"};
    if (__Vtask_tb_vega_top__DOT__check__58__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__58__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__58__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__58__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__58__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    VL_WRITEF("\n========================================\n TEST 13: Battery-Low -> Deep Sleep\n========================================\n");
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       488);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__battery_low = 1U;
    __Vtask_tb_vega_top__DOT__rb_write__59__data = 1U;
    __Vtask_tb_vega_top__DOT__rb_write__59__addr = 0x28U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = __Vtask_tb_vega_top__DOT__rb_write__59__addr;
    vlSelf->tb_vega_top__DOT__reg_wdata = __Vtask_tb_vega_top__DOT__rb_write__59__data;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       203);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__60__max_cycles = 0x1f4U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__60__target_state = 6U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__60__cnt = 0U;
    while ((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
             != (IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__60__target_state)) 
            & VL_LTS_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__60__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__60__max_cycles))) {
        co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_vega_top.clk)", 
                                                           "tb/tb_vega_top.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vega_top__DOT__wait_pmu_state__60__cnt 
            = ((IData)(1U) + __Vtask_tb_vega_top__DOT__wait_pmu_state__60__cnt);
    }
    if (VL_UNLIKELY(VL_GTES_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__60__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__60__max_cycles))) {
        VL_WRITEF("[WARN] %0t | Timeout waiting for PMU state %0x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__60__target_state));
    }
    __Vtask_tb_vega_top__DOT__check__61__fail_msg = VL_SFORMATF_NX("PMU=%0x",
                                                                   4,
                                                                   vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) ;
    __Vtask_tb_vega_top__DOT__check__61__pass_msg = 
        std::string{"PMU=DEEP_SLEEP"};
    __Vtask_tb_vega_top__DOT__check__61__condition 
        = (6U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__61__test_name = 
        std::string{"PMU entered DEEP_SLEEP on battery_low"};
    if (__Vtask_tb_vega_top__DOT__check__61__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__61__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__61__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__61__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__61__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    vlSelf->tb_vega_top__DOT__battery_low = 0U;
    __Vtask_tb_vega_top__DOT__rb_write__62__data = 0U;
    __Vtask_tb_vega_top__DOT__rb_write__62__addr = 0x28U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 1U;
    vlSelf->tb_vega_top__DOT__reg_rd_en = 0U;
    vlSelf->tb_vega_top__DOT__reg_addr = __Vtask_tb_vega_top__DOT__rb_write__62__addr;
    vlSelf->tb_vega_top__DOT__reg_wdata = __Vtask_tb_vega_top__DOT__rb_write__62__data;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       201);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__reg_wr_en = 0U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       203);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__rtc_wakeup_in = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       499);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       499);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       499);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_vega_top__DOT__rtc_wakeup_in = 0U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__63__max_cycles = 0x1f4U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__63__target_state = 2U;
    __Vtask_tb_vega_top__DOT__wait_pmu_state__63__cnt = 0U;
    while ((((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
             != (IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__63__target_state)) 
            & VL_LTS_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__63__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__63__max_cycles))) {
        co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_vega_top.clk)", 
                                                           "tb/tb_vega_top.sv", 
                                                           232);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_vega_top__DOT__wait_pmu_state__63__cnt 
            = ((IData)(1U) + __Vtask_tb_vega_top__DOT__wait_pmu_state__63__cnt);
    }
    if (VL_UNLIKELY(VL_GTES_III(32, __Vtask_tb_vega_top__DOT__wait_pmu_state__63__cnt, __Vtask_tb_vega_top__DOT__wait_pmu_state__63__max_cycles))) {
        VL_WRITEF("[WARN] %0t | Timeout waiting for PMU state %0x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(__Vtask_tb_vega_top__DOT__wait_pmu_state__63__target_state));
    }
    __Vtask_tb_vega_top__DOT__check__64__fail_msg = VL_SFORMATF_NX("PMU=%0x",
                                                                   4,
                                                                   vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) ;
    __Vtask_tb_vega_top__DOT__check__64__pass_msg = 
        std::string{"PMU=ACTIVE"};
    __Vtask_tb_vega_top__DOT__check__64__condition 
        = (2U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state));
    __Vtask_tb_vega_top__DOT__check__64__test_name = 
        std::string{"PMU returned to ACTIVE from DEEP_SLEEP"};
    if (__Vtask_tb_vega_top__DOT__check__64__condition) {
        VL_WRITEF("[PASS] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__64__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__64__pass_msg));
        vlSelf->tb_vega_top__DOT__test_pass_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_pass_count);
    } else {
        VL_WRITEF("[FAIL] %0t | %@ %@\n",64,VL_TIME_UNITED_Q(1000),
                  -9,-1,&(__Vtask_tb_vega_top__DOT__check__64__test_name),
                  -1,&(__Vtask_tb_vega_top__DOT__check__64__fail_msg));
        vlSelf->tb_vega_top__DOT__test_fail_count = 
            ((IData)(1U) + vlSelf->tb_vega_top__DOT__test_fail_count);
    }
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hb4abe526__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_vega_top.clk)", 
                                                       "tb/tb_vega_top.sv", 
                                                       508);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n========================================\n VEGA SoC SIMULATION SUMMARY\n========================================\n PASS : %0d\n FAIL : %0d\n TOTAL: %0d\n",
              32,vlSelf->tb_vega_top__DOT__test_pass_count,
              32,vlSelf->tb_vega_top__DOT__test_fail_count,
              32,(vlSelf->tb_vega_top__DOT__test_pass_count 
                  + vlSelf->tb_vega_top__DOT__test_fail_count));
    if ((0U == vlSelf->tb_vega_top__DOT__test_fail_count)) {
        VL_WRITEF(" STATUS: ALL TESTS PASSED\n");
    } else {
        VL_WRITEF(" STATUS: SOME TESTS FAILED - CHECK LOG\n");
    }
    VL_WRITEF("========================================\n\n");
    VL_FINISH_MT("tb/tb_vega_top.sv", 521, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_vega_top___024root___eval_initial__TOP__1(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_initial__TOP__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x77359400ULL, 
                                       nullptr, "tb/tb_vega_top.sv", 
                                       528);
    VL_WRITEF("[ERROR] Simulation timeout!\n");
    VL_FINISH_MT("tb/tb_vega_top.sv", 530, "");
}

VL_INLINE_OPT VlCoroutine Vtb_vega_top___024root___eval_initial__TOP__2(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_vega_top.sv", 
                                           121);
        vlSelf->tb_vega_top__DOT__clk = (1U & (~ (IData)(vlSelf->tb_vega_top__DOT__clk)));
    }
}

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

VL_INLINE_OPT void Vtb_vega_top___024root___act_comb__TOP__0(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___act_comb__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)))) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd = 1U;
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
}

VL_INLINE_OPT void Vtb_vega_top___024root___act_comb__TOP__1(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___act_comb__TOP__1\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__clk)))) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_icg_proc__DOT__enable_latched 
            = (1U & (~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en)));
    }
    vlSelf->tb_vega_top__DOT__dut__DOT__clk_proc = 
        ((IData)(vlSelf->tb_vega_top__DOT__clk) & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_icg_proc__DOT__enable_latched));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated 
        = ((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__clk_gate_en)) 
           & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__clk_proc));
}

void Vtb_vega_top___024root___eval_act(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_act\n"); );
    // Body
    if ((0x18ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_vega_top___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x38ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_vega_top___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_vega_top___024root___nba_sequent__TOP__0(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_vega_top__DOT__rst_n) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt 
            = ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_en)
                ? (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt)))
                : 0U);
        vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt 
            = ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt_en)
                ? (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt)))
                : 0U);
        vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt 
            = ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt_en)
                ? (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt)))
                : 0U);
        vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt 
            = ((1U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt)))
                : 0U);
        vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__state 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__next_state;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__state 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__next_state;
        if ((2U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat = 0U;
            vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat = 0U;
            vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat = 0U;
        } else {
            if ((((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_prev)) 
                  & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_1)) 
                 & (IData)(vlSelf->tb_vega_top__DOT__irq_wakeup_en))) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat = 1U;
            }
            if ((((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_prev)) 
                  & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_1)) 
                 & (IData)(vlSelf->tb_vega_top__DOT__rtc_wakeup_en))) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat = 1U;
            }
            if ((((~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_prev)) 
                  & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_1)) 
                 & (IData)(vlSelf->tb_vega_top__DOT__ext_wakeup_en))) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat = 1U;
            }
        }
        vlSelf->tb_vega_top__DOT__reg_rdata = 0U;
        if (vlSelf->tb_vega_top__DOT__reg_rd_en) {
            vlSelf->tb_vega_top__DOT__reg_rdata = (
                                                   (0x80U 
                                                    & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                    ? 0xdeadbeefU
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                     ? 0xdeadbeefU
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                      ? 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                       ? 0xdeadbeefU
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                         ? 0xdeadbeefU
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg)))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg)))))
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                       ? 
                                                      ((8U 
                                                        & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg)))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__sensor2_data))))
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                        ? 
                                                       ((4U 
                                                         & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__sensor1_data))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__sensor0_data)))
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : 
                                                          ((4U 
                                                            & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                                                               << 2U)) 
                                                           | ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__sensor_valid) 
                                                              << 1U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                          ? 0xdeadbeefU
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->tb_vega_top__DOT__reg_addr))
                                                           ? 0xdeadbeefU
                                                           : vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg))))))));
        }
        vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state;
        if (vlSelf->tb_vega_top__DOT__reg_wr_en) {
            if ((0U != (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                if ((0x18U != (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                    if ((0x1cU != (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                        if ((0x20U != (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                            if ((0x24U != (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                                if ((0x28U == (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                                    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg 
                                        = vlSelf->tb_vega_top__DOT__reg_wdata;
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->tb_vega_top__DOT__reg_ack = ((IData)(vlSelf->tb_vega_top__DOT__reg_rd_en) 
                                             | (IData)(vlSelf->tb_vega_top__DOT__reg_wr_en));
        vlSelf->tb_vega_top__DOT__dut__DOT__context_valid 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_valid_next;
        vlSelf->tb_vega_top__DOT__dut__DOT__context_saved 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_saved_next;
        vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_done 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__restore_done_next;
        vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_done 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__save_done_next;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_prev 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_1;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_prev 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_1;
    } else {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__state = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__state = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat = 0U;
        vlSelf->tb_vega_top__DOT__reg_rdata = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg = 0U;
        vlSelf->tb_vega_top__DOT__reg_ack = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__context_valid = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__context_saved = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__ret_restore_done = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__ret_save_done = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_prev = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_prev = 0U;
    }
    vlSelf->tb_vega_top__DOT__dut__DOT__wakeup_req 
        = ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat) 
           | ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat) 
              | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat)));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_prev 
        = ((IData)(vlSelf->tb_vega_top__DOT__rst_n) 
           & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_1));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__sensor_valid 
        = vlSelf->tb_vega_top__DOT__rst_n;
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_1 
        = ((IData)(vlSelf->tb_vega_top__DOT__rst_n) 
           & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_0));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_1 
        = ((IData)(vlSelf->tb_vega_top__DOT__rst_n) 
           & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_0));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_1 
        = ((IData)(vlSelf->tb_vega_top__DOT__rst_n) 
           & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_0));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_en = 0U;
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_cmd = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)))) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_en = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__seq_wakeup_cmd = 1U;
                }
            }
        }
    }
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_0 
        = ((IData)(vlSelf->tb_vega_top__DOT__rst_n) 
           & (IData)(vlSelf->tb_vega_top__DOT__irq_wakeup_in));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_0 
        = ((IData)(vlSelf->tb_vega_top__DOT__rst_n) 
           & (IData)(vlSelf->tb_vega_top__DOT__rtc_wakeup_in));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_0 
        = ((IData)(vlSelf->tb_vega_top__DOT__rst_n) 
           & (IData)(vlSelf->tb_vega_top__DOT__ext_wakeup_in));
}

VL_INLINE_OPT void Vtb_vega_top___024root___nba_sequent__TOP__1(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0;
    __Vdlyvdim0__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0;
    __Vdlyvval__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0;
    __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1;
    __Vdlyvdim0__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1;
    __Vdlyvval__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1;
    __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v2;
    __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v2 = 0;
    // Body
    __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0 = 0U;
    __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1 = 0U;
    __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v2 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__rst_n)))) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk1__DOT__i = 8U;
    }
    if (vlSelf->tb_vega_top__DOT__rst_n) {
        vlSelf->tb_vega_top__DOT__pslverr = 0U;
        vlSelf->tb_vega_top__DOT__prdata = 0U;
        if ((((IData)(vlSelf->tb_vega_top__DOT__psel) 
              & (IData)(vlSelf->tb_vega_top__DOT__penable)) 
             & (~ (IData)(vlSelf->tb_vega_top__DOT__pwrite)))) {
            if ((0U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                if ((4U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                    if ((8U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                        if ((0xcU != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                            if ((0x10U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                                if ((0x14U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                                    if ((1U & (~ ((0x18U 
                                                   <= (IData)(vlSelf->tb_vega_top__DOT__paddr)) 
                                                  & (0x38U 
                                                     > (IData)(vlSelf->tb_vega_top__DOT__paddr)))))) {
                                        vlSelf->tb_vega_top__DOT__pslverr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0U == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                vlSelf->tb_vega_top__DOT__prdata = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg;
            } else if ((4U == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                vlSelf->tb_vega_top__DOT__prdata = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_a_reg;
            } else if ((8U == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                vlSelf->tb_vega_top__DOT__prdata = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_b_reg;
            } else if ((0xcU == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                vlSelf->tb_vega_top__DOT__prdata = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__result_reg;
            } else if ((0x10U == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                vlSelf->tb_vega_top__DOT__prdata = 
                    (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending) 
                      << 3U) | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__overflow_flag) 
                                 << 2U) | (((0U != (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state)) 
                                            << 1U) 
                                           | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_done))));
            } else if ((0x14U == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                vlSelf->tb_vega_top__DOT__prdata = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg;
            } else if (((0x18U <= (IData)(vlSelf->tb_vega_top__DOT__paddr)) 
                        & (0x38U > (IData)(vlSelf->tb_vega_top__DOT__paddr)))) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk3__DOT__rf_idx 
                    = (((IData)(vlSelf->tb_vega_top__DOT__paddr) 
                        - (IData)(0x18U)) >> 2U);
                vlSelf->tb_vega_top__DOT__prdata = 
                    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile
                    [(7U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk3__DOT__rf_idx)];
            } else {
                vlSelf->tb_vega_top__DOT__prdata = 0xdeadbeefU;
            }
        }
        if ((((IData)(vlSelf->tb_vega_top__DOT__psel) 
              & (IData)(vlSelf->tb_vega_top__DOT__penable)) 
             & (IData)(vlSelf->tb_vega_top__DOT__pwrite))) {
            if ((0U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                if ((4U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                    if ((8U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                        if ((0x14U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                            if (((0x18U <= (IData)(vlSelf->tb_vega_top__DOT__paddr)) 
                                 & (0x38U > (IData)(vlSelf->tb_vega_top__DOT__paddr)))) {
                                vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk2__DOT__rf_idx 
                                    = (((IData)(vlSelf->tb_vega_top__DOT__paddr) 
                                        - (IData)(0x18U)) 
                                       >> 2U);
                                __Vdlyvval__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0 
                                    = vlSelf->tb_vega_top__DOT__pwdata;
                                __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0 = 1U;
                                __Vdlyvdim0__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0 
                                    = (7U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk2__DOT__rf_idx);
                            }
                        }
                    }
                    if ((8U == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_b_reg 
                            = vlSelf->tb_vega_top__DOT__pwdata;
                    }
                }
                if ((4U == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_a_reg 
                        = vlSelf->tb_vega_top__DOT__pwdata;
                }
            }
        } else if (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_valid) 
                    & (3U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state)))) {
            if ((2U & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg)) {
                __Vdlyvval__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1 
                    = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_result;
                __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1 = 1U;
                __Vdlyvdim0__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1 
                    = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_rd_idx;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->tb_vega_top__DOT__psel) 
                       & (IData)(vlSelf->tb_vega_top__DOT__penable)) 
                      & (IData)(vlSelf->tb_vega_top__DOT__pwrite))))) {
            if (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_valid) 
                 & (3U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state)))) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__result_reg 
                    = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_result;
            }
        }
        vlSelf->tb_vega_top__DOT__pready = ((IData)(vlSelf->tb_vega_top__DOT__psel) 
                                            & (IData)(vlSelf->tb_vega_top__DOT__penable));
    } else {
        __Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v2 = 1U;
        vlSelf->tb_vega_top__DOT__pslverr = 0U;
        vlSelf->tb_vega_top__DOT__prdata = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_a_reg = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_b_reg = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__result_reg = 0U;
        vlSelf->tb_vega_top__DOT__pready = 0U;
    }
    if (__Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[__Vdlyvdim0__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0] 
            = __Vdlyvval__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v0;
    }
    if (__Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[__Vdlyvdim0__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1] 
            = __Vdlyvval__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v1;
    }
    if (__Vdlyvset__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile__v2) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[0U] = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[1U] = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[2U] = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[3U] = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[4U] = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[5U] = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[6U] = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile[7U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_vega_top___024root___nba_sequent__TOP__2(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->tb_vega_top__DOT__rst_n) {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_done 
            = (3U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state));
        if ((2U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state))) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_valid = 1U;
            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_opcode 
                = (0xfU & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg);
            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_rd_idx 
                = (7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                         >> 0xcU));
            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__overflow_flag 
                = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_overflow;
            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_result 
                = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_result;
        } else {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_valid = 0U;
        }
        if ((((0U != (7U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                            & vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg))) 
              & (vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg 
                 >> 9U)) & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg 
                            >> 2U))) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending = 1U;
        } else if ((4U == (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state))) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending = 0U;
        }
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state 
            = vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__next_state;
    } else {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_done = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_valid = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_opcode = 0xfU;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_rd_idx = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__overflow_flag = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_result = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state = 0U;
    }
}

VL_INLINE_OPT void Vtb_vega_top___024root___nba_comb__TOP__0(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state)))) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__seq_sleep_cmd = 1U;
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
}

VL_INLINE_OPT void Vtb_vega_top___024root___nba_sequent__TOP__3(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->tb_vega_top__DOT__rst_n) {
        if ((((IData)(vlSelf->tb_vega_top__DOT__psel) 
              & (IData)(vlSelf->tb_vega_top__DOT__penable)) 
             & (IData)(vlSelf->tb_vega_top__DOT__pwrite))) {
            if ((0U == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg 
                    = vlSelf->tb_vega_top__DOT__pwdata;
            }
            if ((0U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                if ((4U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                    if ((8U != (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                        if ((0x14U == (IData)(vlSelf->tb_vega_top__DOT__paddr))) {
                            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg 
                                = vlSelf->tb_vega_top__DOT__pwdata;
                        }
                    }
                }
            }
        } else {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg 
                = (0xfffffffeU & vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg);
        }
    } else {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg = 0U;
    }
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
}

VL_INLINE_OPT void Vtb_vega_top___024root___nba_sequent__TOP__4(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->tb_vega_top__DOT__rst_n) {
        if ((vlSelf->tb_vega_top__DOT__sensor0_data 
             > vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg)) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                = (1U | vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg);
        }
        if ((vlSelf->tb_vega_top__DOT__sensor1_data 
             > vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg)) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                = (2U | vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg);
        }
        if ((vlSelf->tb_vega_top__DOT__sensor2_data 
             > vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg)) {
            vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                = (4U | vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg);
        }
        if (vlSelf->tb_vega_top__DOT__reg_wr_en) {
            if ((0U != (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                if ((0x18U == (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                    vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg 
                        = vlSelf->tb_vega_top__DOT__reg_wdata;
                }
                if ((0x18U != (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                    if ((0x1cU == (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                        vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg 
                            = vlSelf->tb_vega_top__DOT__reg_wdata;
                    }
                    if ((0x1cU != (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                        if ((0x20U == (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                            vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg 
                                = vlSelf->tb_vega_top__DOT__reg_wdata;
                        }
                        if ((0x20U != (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                            if ((0x24U == (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                                vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg 
                                    = vlSelf->tb_vega_top__DOT__reg_wdata;
                            }
                        }
                    }
                }
            }
            if ((0U == (IData)(vlSelf->tb_vega_top__DOT__reg_addr))) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg 
                    = vlSelf->tb_vega_top__DOT__reg_wdata;
            }
        }
        if (((IData)(vlSelf->tb_vega_top__DOT__reg_wr_en) 
             & (0x14U == (IData)(vlSelf->tb_vega_top__DOT__reg_addr)))) {
            if ((1U & vlSelf->tb_vega_top__DOT__reg_wdata)) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                    = (0xfffffffeU & vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg);
            }
            if ((2U & vlSelf->tb_vega_top__DOT__reg_wdata)) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                    = (0xfffffffdU & vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg);
            }
            if ((4U & vlSelf->tb_vega_top__DOT__reg_wdata)) {
                vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg 
                    = (0xfffffffbU & vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg);
            }
        }
    } else {
        vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg = 0U;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg = 0xffffffffU;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg = 0xffffffffU;
        vlSelf->tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg = 0xffffffffU;
    }
}

VL_INLINE_OPT void Vtb_vega_top___024root___nba_comb__TOP__1(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___nba_comb__TOP__1\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtb_vega_top___024root___nba_comb__TOP__2(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___nba_comb__TOP__2\n"); );
    // Body
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
}

extern const VlUnpacked<CData/*2:0*/, 32> Vtb_vega_top__ConstPool__TABLE_h4d96caa2_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtb_vega_top__ConstPool__TABLE_h883563d3_0;

VL_INLINE_OPT void Vtb_vega_top___024root___nba_comb__TOP__4(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___nba_comb__TOP__4\n"); );
    // Init
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = ((0x10U & (vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg 
                              << 4U)) | (((IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending) 
                                          << 3U) | (IData)(vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state)));
    vlSelf->tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__next_state 
        = Vtb_vega_top__ConstPool__TABLE_h4d96caa2_0
        [__Vtableidx3];
    vlSelf->tb_vega_top__DOT__dut__DOT__proc_irq_ack 
        = Vtb_vega_top__ConstPool__TABLE_h883563d3_0
        [__Vtableidx3];
}

void Vtb_vega_top___024root___eval_nba(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x19ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x1dULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x1bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x39ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___act_comb__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_vega_top___024root___nba_comb__TOP__4(vlSelf);
    }
}

void Vtb_vega_top___024root___eval_triggers__act(Vtb_vega_top___024root* vlSelf);
void Vtb_vega_top___024root___timing_commit(Vtb_vega_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vega_top___024root___dump_triggers__act(Vtb_vega_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_vega_top___024root___timing_resume(Vtb_vega_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_vega_top___024root___dump_triggers__nba(Vtb_vega_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_vega_top___024root___eval(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_vega_top___024root___eval_triggers__act(vlSelf);
            Vtb_vega_top___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_vega_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb/tb_vega_top.sv", 21, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_vega_top___024root___timing_resume(vlSelf);
                Vtb_vega_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_vega_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_vega_top.sv", 21, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_vega_top___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_vega_top___024root___timing_commit(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___timing_commit\n"); );
    // Body
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb4abe526__0.commit("@(posedge tb_vega_top.clk)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf8340dfd__0.commit("@([changed] tb_vega_top.pready)");
    }
}

void Vtb_vega_top___024root___timing_resume(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___timing_resume\n"); );
    // Body
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb4abe526__0.resume("@(posedge tb_vega_top.clk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf8340dfd__0.resume("@([changed] tb_vega_top.pready)");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_vega_top___024root___eval_debug_assertions(Vtb_vega_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_vega_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
