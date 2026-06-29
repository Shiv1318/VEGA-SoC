# IEEE 1801 UPF Files

Power intent specification for VEGA SoC

# VEGA SoC — UPF Power Intent Documentation

## Purpose

This document accompanies `vega_top.upf` and explains how each UPF construct
maps to the structural low-power RTL already implemented in the VEGA SoC
(`vega_top.sv`, `pmu_fsm.sv`, `power_sequencer.sv`, `retention_ctrl.sv`,
`sensor_regbank.sv`, `lp_cells.v`).

## Why a UPF file in addition to RTL-level power structures?

The VEGA SoC's low-power behavior (clock gating, isolation, retention,
power switching) is currently **structurally implemented in RTL** — i.e.
the designer instantiates `icg_cell`, `iso_cell`, and explicitly codes the
sleep/wake sequencing FSM in `power_sequencer.sv`. This is a valid and
common approach for FPGA targets, ASIC educational flows, or any flow
whose PnR tool does not consume UPF (as is the case for the open-source
flows evaluated for this project — Qflow 1.3 and the OpenLane v1 / efabless
`flow.tcl`, neither of which invokes a UPF-aware PnR step).

The UPF file formalizes the same intent in the **IEEE 1801** standard
format used by industry signoff tools (Synopsys ICC2/Fusion Compiler,
Cadence Genus/Innovus, OpenROAD invoked with `read_upf`). Writing it
demonstrates the intent in a portable, tool-agnostic way and is the
correct artifact to produce if this design were re-targeted to a
UPF-consuming flow — no RTL changes would be required, only PnR
configuration changes.

## Mapping table

| UPF construct | RTL equivalent | Notes |
|---|---|---|
| `PD_AON` power domain | `pmu_fsm`, `wakeup_ctrl`, `power_sequencer` instances | These are the only blocks always powered; PMU must stay alive to drive wakeup |
| `PD_PROC` power domain | `data_processor` instance | Switchable; gated via `pwr_sw_off` |
| `PD_MEM` power domain | `sensor_regbank` instance | Switchable; gated via `pwr_sw_off` |
| `PD_MEM_RET` power domain | `retention_ctrl` instance | Always-on "shadow" domain holding retention state machine itself |
| `create_power_switch PSW_PROC/PSW_MEM` | `power_sequencer.pwr_sw_off` output | RTL today drives this signal but doesn't physically cut power (behavioral note in `vega_top.sv`); UPF models the switch that would do so in silicon |
| `set_isolation ISO_PROC/ISO_MEM` | `iso_cell` instances (`g_iso_prdata`, `u_iso_pready` in `vega_top.sv`) | Isolation control signal is `power_sequencer.iso_en`, asserted in `SQ_ISOLATE` state |
| `set_level_shifter` (rule `NO_SHIFT`) | `lvlshift_cell` in `lp_cells.v` | Design is single-rail; level shifter modeled for structural completeness only |
| `set_retention RET_MEM` | `retention_ctrl` save/restore FSM | Save/restore signals are `power_sequencer.ret_save_en` / `ret_restore_en`; `retention_ctrl` reports completion via `ret_save_done`/`ret_restore_done` |
| `PST_VEGA` power state table | `pmu_fsm` states `ST_ACTIVE`, `ST_SLEEP`, `ST_DEEP_SLEEP` | One-to-one mapping between PMU FSM states and UPF power states |

## Sleep/Wake Sequence Cross-Reference

The UPF's switch/isolation/retention control signals directly correspond to
the sequencing already coded in `power_sequencer.sv`:

**Sleep entry** (`power_sequencer.sv` states `SQ_CLK_GATE -> SQ_ISOLATE ->
SQ_RET_SAVE -> SQ_PWR_OFF`):
1. Clock gated (`clk_gate_en` -> `icg_cell`)
2. Isolation enabled (`iso_en` -> UPF `set_isolation` control signal)
3. Retention save (`ret_save_en` -> UPF `set_retention` save signal)
4. Power switched off (`pwr_sw_off` -> UPF `create_power_switch` control)

**Wakeup** (`SQ_PWR_ON -> SQ_RET_RESTORE -> SQ_DE_ISOLATE -> SQ_CLK_UNGATE`):
1. Power switched on
2. Retention restored (`ret_restore_en`)
3. Isolation released
4. Clock ungated

This ordering matches the assertions already present in `power_sequencer.sv`
(`clkgate_before_iso`, `iso_before_pwr_off`), so the UPF power state
transitions are consistent with the RTL's own internal correctness checks.


