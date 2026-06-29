// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_vega_top.h"
#include "Vtb_vega_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_vega_top::Vtb_vega_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_vega_top__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_vega_top::Vtb_vega_top(const char* _vcname__)
    : Vtb_vega_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_vega_top::~Vtb_vega_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_vega_top___024root___eval_debug_assertions(Vtb_vega_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_vega_top___024root___eval_static(Vtb_vega_top___024root* vlSelf);
void Vtb_vega_top___024root___eval_initial(Vtb_vega_top___024root* vlSelf);
void Vtb_vega_top___024root___eval_settle(Vtb_vega_top___024root* vlSelf);
void Vtb_vega_top___024root___eval(Vtb_vega_top___024root* vlSelf);

void Vtb_vega_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_vega_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_vega_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_vega_top___024root___eval_static(&(vlSymsp->TOP));
        Vtb_vega_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_vega_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_vega_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_vega_top::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_vega_top::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_vega_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_vega_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_vega_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_vega_top___024root___eval_final(Vtb_vega_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_vega_top::final() {
    Vtb_vega_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_vega_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_vega_top::modelName() const { return "Vtb_vega_top"; }
unsigned Vtb_vega_top::threads() const { return 1; }
void Vtb_vega_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_vega_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_vega_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_vega_top___024root__trace_init_top(Vtb_vega_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_vega_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_vega_top___024root*>(voidSelf);
    Vtb_vega_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtb_vega_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtb_vega_top___024root__trace_register(Vtb_vega_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_vega_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_vega_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_vega_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
