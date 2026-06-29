![VEGA SoC - Complete RTL-to-GDSII Design Flow](https://github.com/Shiv1318/VEGA-SoC/raw/main/assets/vega-banner.png)

# VEGA SoC

**Multi-Power-Domain RTL-to-GDSII ASIC Implementation**

VEGA SoC is a low-power multi-power-domain System-on-Chip (SoC) designed using SystemVerilog and implemented through a complete RTL-to-GDSII ASIC design flow. The project demonstrates how a digital chip is taken from synthesizable RTL to a manufacturable GDSII layout using open-source EDA tools. It also includes IEEE 1801 Unified Power Format (UPF) implementation for describing the chip's power intent.

---

## 📋 Overview

The objective of this project is to design a low-power ASIC with multiple power domains and implement the complete physical design flow.

The SoC is divided into **three power domains**:

- **PD_AON (Always-On Domain)** – Contains the Power Management Unit (PMU), Wake-up Controller, and Power Sequencer.
- **PD_PROC (Processor Domain)** – Contains the Data Processor (ALU) and Register File.
- **PD_MEM (Memory Domain)** – Contains the Sensor Register Bank and Retention Controller.

The processor and memory domains can be powered down to reduce leakage power, while the always-on domain continues monitoring wake-up events.

---

## ✨ Features

- ✅ **Multi-Power-Domain SoC Architecture**
- ✅ **Low-Power Design Techniques**
  - Power Gating
  - Retention Logic
  - Wake-up Controller
- ✅ **Power Management Unit (PMU)**
- ✅ **Power Sequencer**
- ✅ **Data Processor (ALU)**
- ✅ **Sensor Register Bank**
- ✅ **IEEE 1801 UPF Implementation**
- ✅ **Complete RTL-to-GDSII Flow**
- ✅ **Manufacturable GDSII Layout**

---

## 🔄 Design Flow

The project follows the complete ASIC implementation flow:

1. **Problem Definition** - Design a low-power SoC with multi-power-domain architecture
2. **System Architecture Design** - Define power domains and system components
3. **RTL Design (SystemVerilog)** - Implement synthesizable RTL modules
4. **RTL Simulation & Testbench** - Verify functionality with directed testbenches
5. **Functional Verification** - Comprehensive verification of all modules
6. **Logic Synthesis** - RTL to Gate-level conversion
7. **Physical Implementation** - Floorplanning, placement, and routing
8. **Design Rule Check (DRC)** - Manufacturing rule verification
9. **Layout Versus Schematic (LVS)** - Connectivity verification
10. **Static Timing Analysis (STA)** - Timing constraint verification
11. **IEEE 1801 UPF Implementation** - Power intent specification
12. **GDSII Generation** - Final manufacturable layout

---

## 🏗️ System Architecture

The architecture consists of three independent power domains:

### Power Domains

```
┌─────────────────────────────────────────────────┐
│                   VEGA SoC                      │
├──────────────┬──────────────┬──────────────────┤
│  PD_AON      │  PD_PROC     │  PD_MEM          │
│  (Always-On) │ (Processor)  │  (Memory)        │
├──────────────┼──────────────┼──────────────────┤
│ • PMU FSM    │ • ALU        │ • Sensor RegBank │
│ • Wakeup Ctrl│ • Reg File   │ • Retention Ctrl │
│ • Seq Ctrl   │              │                  │
└──────────────┴──────────────┴──────────────────┘
```

### RTL Modules

- `vega_top` - Top-level module
- `pmu_fsm` - Power Management Unit FSM
- `wakeup_ctrl` - Wake-up Controller
- `power_sequencer` - Power Sequencing Logic
- `data_processor` - ALU and Data Processing
- `sensor_regbank` - Sensor Register Bank
- `retention_ctrl` - Retention Controller

---

## 🛠️ EDA Tools Used

| Stage | Tool |
|-------|------|
| RTL Design | GVim / VS Code |
| Simulation | Icarus Verilog / Verilator |
| Waveform Analysis | GTKWave |
| Logic Synthesis | Yosys + ABC |
| Placement | GrayWolf |
| Routing | Qrouter |
| Layout Generation | Magic VLSI |
| LVS Verification | Netgen |
| Static Timing Analysis | OpenSTA |
| Complete Physical Design | Qflow |
| Layout Visualization | KLayout |

---

## 📊 Results

✅ RTL successfully synthesized
✅ Gate-level netlist generated
✅ Placement completed
✅ Routing completed
✅ Static Timing Analysis performed
✅ DRC verification completed
✅ LVS verified with zero mismatch
✅ IEEE 1801 UPF implemented
✅ Final GDSII layout generated successfully

---

## 📁 Project Structure

```
VEGA-SoC/
│
├── rtl/                          # SystemVerilog RTL modules
│   ├── vega_top.v
│   ├── pmu_fsm.v
│   ├── wakeup_ctrl.v
│   ├── power_sequencer.v
│   ├── data_processor.v
│   ├── sensor_regbank.v
│   └── retention_ctrl.v
│
├── tb/                           # Testbenches and verification
│   ├── vega_tb.v
│   ├── pmu_tb.v
│   ├── test_vectors/
│   └── waveforms/
│
├── qflow_proj/                   # Qflow physical design project
│   ├── layout/
│   ├── netlist/
│   └── gdsii/
│
├── obj_dir/                      # Build artifacts
│
├── upf/                          # IEEE 1801 UPF files
│   ├── vega_power_intent.upf
│   └── power_domains.upf
│
├── docs/                         # Documentation
│   ├── design_spec.md
│   ├── architecture.md
│   └── power_management.md
│
├── assets/                       # Images and diagrams
│   └── vega-banner.png
│
├── scripts/                      # Automation scripts
│   ├── run_simulation.sh
│   ├── run_synthesis.sh
│   └── run_pnr.sh
│
├── README.md                     # This file
└── LICENSE                       # MIT License
```

---

## 🚀 Getting Started

### Prerequisites

- SystemVerilog/Verilog knowledge
- Open-source EDA tools installed:
  - Icarus Verilog or Verilator
  - Yosys
  - Qflow
  - Magic VLSI
  - OpenSTA

### Running Simulations

```bash
cd tb/
icarus_verilog -o vega_sim vega_tb.v ../rtl/*.v
./vega_sim
gtkwave dump.vcd
```

### Running Synthesis

```bash
cd qflow_proj/
qflow synthesize vega_top
```

### Running Place & Route

```bash
qflow place vega_top
qflow route vega_top
```

---

## 📚 Documentation

Detailed documentation is available in the `docs/` directory:

- **Design Specification** - Complete functional specification
- **Architecture Guide** - System architecture and components
- **Power Management** - UPF implementation details
- **Design Flow** - Step-by-step implementation guide

---

## 🔮 Future Work

- [ ] Clock Gating implementation
- [ ] Dynamic Voltage and Frequency Scaling (DVFS)
- [ ] Additional Low-Power Techniques
- [ ] Formal Verification
- [ ] OpenROAD-based Implementation
- [ ] Silicon Measurement Results
- [ ] Tapeout Integration

---

## 👤 Author

**Shiv Kumar**

B.Tech Electronics & Communication Engineering (VLSI)

*Jaypee Institute of Information Technology*

---

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 🤝 Contributing

Contributions are welcome! Please feel free to submit pull requests or open issues for bugs and feature requests.

---

## 📞 Contact

For questions or collaboration opportunities, please reach out via GitHub issues or email.

---

**Last Updated:** June 29, 2026

**Status:** ✅ RTL-to-GDSII Flow Complete
