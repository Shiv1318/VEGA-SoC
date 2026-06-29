// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_vega_top.h for the primary calling header

#ifndef VERILATED_VTB_VEGA_TOP___024ROOT_H_
#define VERILATED_VTB_VEGA_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_vega_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_vega_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_vega_top__DOT__clk;
        CData/*0:0*/ tb_vega_top__DOT__rst_n;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__clk_proc;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated;
        CData/*0:0*/ tb_vega_top__DOT__ext_wakeup_in;
        CData/*0:0*/ tb_vega_top__DOT__rtc_wakeup_in;
        CData/*0:0*/ tb_vega_top__DOT__irq_wakeup_in;
        CData/*0:0*/ tb_vega_top__DOT__ext_wakeup_en;
        CData/*0:0*/ tb_vega_top__DOT__rtc_wakeup_en;
        CData/*0:0*/ tb_vega_top__DOT__irq_wakeup_en;
        CData/*0:0*/ tb_vega_top__DOT__thermal_alert;
        CData/*0:0*/ tb_vega_top__DOT__battery_low;
        CData/*0:0*/ tb_vega_top__DOT__fault_in;
        CData/*0:0*/ tb_vega_top__DOT__psel;
        CData/*0:0*/ tb_vega_top__DOT__penable;
        CData/*0:0*/ tb_vega_top__DOT__pwrite;
        CData/*7:0*/ tb_vega_top__DOT__paddr;
        CData/*0:0*/ tb_vega_top__DOT__pready;
        CData/*0:0*/ tb_vega_top__DOT__pslverr;
        CData/*0:0*/ tb_vega_top__DOT__reg_wr_en;
        CData/*0:0*/ tb_vega_top__DOT__reg_rd_en;
        CData/*7:0*/ tb_vega_top__DOT__reg_addr;
        CData/*0:0*/ tb_vega_top__DOT__reg_ack;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__seq_sleep_cmd;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__seq_wakeup_cmd;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__seq_sleep_ack;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__seq_wakeup_ack;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__clk_gate_en;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__iso_en;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__pwr_sw_off;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__lvl_shift_en;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__ret_save_en;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__ret_restore_en;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__ret_save_done;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__ret_restore_done;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__wakeup_req;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__proc_irq_ack;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__context_saved;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__context_valid;
        CData/*3:0*/ tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__state;
        CData/*3:0*/ tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__next_state;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_en;
        CData/*7:0*/ tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__boot_cnt;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_0;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_sync_1;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_0;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_sync_1;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_0;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_sync_1;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__ext_prev;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__rtc_prev;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__irq_prev;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_ext_lat;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_rtc_lat;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_wakeup_ctrl__DOT__wakeup_irq_lat;
        CData/*3:0*/ tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__state;
        CData/*3:0*/ tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__next_state;
        CData/*3:0*/ tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_power_sequencer__DOT__step_cnt_en;
        CData/*2:0*/ tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__state;
        CData/*2:0*/ tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__next_state;
        CData/*3:0*/ tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__op_cnt_en;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__save_done_next;
    };
    struct {
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__restore_done_next;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_saved_next;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_retention_ctrl__DOT__ctx_valid_next;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__sensor_valid;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_icg_proc__DOT__enable_latched;
        CData/*2:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__state;
        CData/*2:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__next_state;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_overflow;
        CData/*2:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_rd_idx;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_valid;
        CData/*3:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_opcode;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__irq_pending;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__overflow_flag;
        CData/*0:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_done;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vega_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vega_top__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__clk_gated__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vega_top__DOT__dut__DOT__clk_proc__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_vega_top__DOT__pready__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_vega_top__DOT__dut__DOT__u_pmu_fsm__DOT__timeout_cnt;
        IData/*31:0*/ tb_vega_top__DOT__pwdata;
        IData/*31:0*/ tb_vega_top__DOT__prdata;
        IData/*31:0*/ tb_vega_top__DOT__reg_wdata;
        IData/*31:0*/ tb_vega_top__DOT__reg_rdata;
        IData/*31:0*/ tb_vega_top__DOT__sensor0_data;
        IData/*31:0*/ tb_vega_top__DOT__sensor1_data;
        IData/*31:0*/ tb_vega_top__DOT__sensor2_data;
        IData/*31:0*/ tb_vega_top__DOT__test_pass_count;
        IData/*31:0*/ tb_vega_top__DOT__test_fail_count;
        IData/*31:0*/ tb_vega_top__DOT__rd_data;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__prdata_iso;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__ctrl_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_status_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_mask_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh0_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh1_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__irq_thresh2_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_sensor_regbank__DOT__pwr_ctrl_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__op_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_a_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__operand_b_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__result_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__ctrl_reg;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_a;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_b;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__alu_result;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__pipe_result;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk2__DOT__rf_idx;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__unnamedblk3__DOT__rf_idx;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 8> tb_vega_top__DOT__dut__DOT__u_data_processor__DOT__regfile;
        VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb4abe526__0;
    VlTriggerScheduler __VtrigSched_hf8340dfd__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_vega_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_vega_top___024root(Vtb_vega_top__Syms* symsp, const char* v__name);
    ~Vtb_vega_top___024root();
    VL_UNCOPYABLE(Vtb_vega_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
