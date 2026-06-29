# VEGA SoC - Multi-Power-Domain RTL-to-GDSII ASIC Implementation

A low-power multi-power-domain System-on-Chip (SoC) designed using SystemVerilog and implemented through a complete RTL-to-GDSII ASIC design flow using open-source EDA tools with IEEE 1801 UPF implementation.

---

## Overview

**VEGA SoC** consists of three independent power domains:

- **PD_AON** (Always-On): PMU, Wake-up Controller, Power Sequencer
- **PD_PROC** (Processor): Data Processor (ALU), Register File
- **PD_MEM** (Memory): Sensor Register Bank, Retention Controller

The processor and memory domains can be powered down to reduce leakage power while the always-on domain monitors wake-up events.

---

## Key Features

✨ Multi-Power-Domain Architecture | 🔋 Power Gating & Retention Logic | ⚡ Low-Power Design
---|---|---
💾 Power Management Unit (PMU) | 🎯 Power Sequencer | 📊 IEEE 1801 UPF Implementation
🔧 Complete RTL-to-GDSII Flow | 🏭 Manufacturable GDSII Layout | ✅ Full Verification

---

## Design Flow (12 Stages)

| Stage | Description | Tool |
|-------|-------------|------|
| 1️⃣ Problem Definition | Low-power SoC architecture design | - |
| 2️⃣ System Architecture | Design 3 power domains & components | - |
| 3️⃣ RTL Design | SystemVerilog implementation | GVim |
| 4️⃣ RTL Simulation | Functional verification | Icarus/Verilator |
| 5️⃣ Logic Synthesis | RTL to Gate-level | Yosys + ABC |
| 6️⃣ Physical Design | Floorplan, Placement, Routing | GrayWolf/Qrouter |
| 7️⃣ DRC Verification | Manufacturing rules | Magic VLSI |
| 8️⃣ LVS Verification | Connectivity check | Netgen |
| 9️⃣ Static Timing | Timing analysis | OpenSTA |
| 🔟 UPF Implementation | Power intent specification | IEEE 1801 UPF |
| 1️⃣1️⃣ GDSII Generation | Final layout | Magic VLSI |

---

## System Architecture

```
┌─────────────────────────────────────┐
│          VEGA SoC Top Level         │
├──────────────┬──────────┬───────────┤
│  PD_AON      │ PD_PROC  │  PD_MEM   │
├──────────────┼──────────┼───────────┤
│ • PMU FSM    │ • ALU    │ • RegBank │
│ • WakeupCtrl │ • RegFile│ • RetCtrl │
│ • SeqCtrl    │          │           │
└──────────────┴──────────┴───────────┘
```

**RTL Modules:** `vega_top` | `pmu_fsm` | `wakeup_ctrl` | `power_sequencer` | `data_processor` | `sensor_regbank` | `retention_ctrl`

---

## EDA Tools Stack

| Phase | Tool |
|-------|------|
| Design & Simulation | GVim, Icarus Verilog, Verilator, GTKWave |
| Synthesis | Yosys, ABC |
| P&R | GrayWolf, Qrouter, Magic VLSI |
| Verification | Netgen, OpenSTA |
| Integration | Qflow |

---

## Project Structure

```
VEGA-SoC/
├── rtl/              # SystemVerilog modules
├── tb/               # Testbenches
├── qflow_proj/       # Physical design
├── upf/              # IEEE 1801 UPF files
├── docs/             # Documentation
├── scripts/          # Automation scripts
└── README.md
```

---

## Quick Start

### Run Simulation
```bash
cd tb/
icarus_verilog -o vega_sim vega_tb.v ../rtl/*.v
./vega_sim && gtkwave dump.vcd
```

### Run Synthesis
```bash
cd qflow_proj/
qflow synthesize vega_top
```

### Run Place & Route
```bash
qflow place vega_top && qflow route vega_top
```

---

## Results

✅ RTL Synthesis Complete | ✅ Gate-level Netlist Generated | ✅ Placement & Routing Done
---|---|---
✅ DRC Verified | ✅ LVS Verified (Zero Mismatch) | ✅ STA Completed
✅ IEEE 1801 UPF Implemented | ✅ GDSII Layout Generated | **🎉 RTL-to-GDSII Complete**

---

## Future Enhancements

🔲 Clock Gating | 🔲 DVFS Implementation | 🔲 Formal Verification | 🔲 OpenROAD Integration | 🔲 Silicon Tapeout

---

## Author

**Shiv Kumar** | B.Tech VLSI | Jaypee Institute of Information Technology

---

## License

MIT License - See [LICENSE](LICENSE) file

---

**Status:** ✅ Complete | **Last Updated:** June 2026
