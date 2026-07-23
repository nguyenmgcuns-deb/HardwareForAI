1. How do the 3 designs differ in terms of FPGA resource utilization?
Floating-Point (FP32):

DSP48E: Requires a high number of DSP slices because floating-point multiplication and addition operations rely heavily on resource-intensive IEEE-754 Floating-Point IP cores.

LUT / FF: High usage due to the complex control logic, normalization, and alignment hardware required by standard floating-point arithmetic units.

Quantized (Fixed-Point, e.g., ap_fixed or int8):

DSP48E: Reduces DSP usage significantly because fixed-point arithmetic simplifies integer multiplication. With smaller bit-widths, operations can even be mapped entirely onto LUTs instead of dedicated DSPs.

LUT / FF: Decreases substantially compared to the Floating-Point design as fixed-point pipelines require much simpler logic.

BRAM: Decreases if the bit-width reduction allows weights and feature maps to occupy less memory bandwidth and storage per word.

Pruned (Zero-Weight Pruning):

DSP48E & LUT: Reaches the lowest utilization levels. Since operations involving zero weights are pruned out, Vivado HLS synthesizes away unnecessary multipliers and adders, eliminating hardware logic for zero-value computations.

BRAM: May remain identical if dense zero-padding is preserved in memory layout, or decrease further if a compressed sparse format (e.g., CSR/CSC) is implemented.


2. How do the 3 designs differ in terms of area consumption?
Note: On FPGA architectures, Area Consumption corresponds directly to the total percentage of hardware resources utilized—specifically Slices/CLBs, LUTs, FFs, DSPs, and BRAMs—across the silicon array.

Floating-Point (FP32):

Largest Area Footprint: Requires the highest slice area to instantiate full IEEE-754 floating-point ALUs and complex alignment pipelines.

Quantized:

Moderate Area Reduction: Significantly reduces the silicon footprint by substituting floating-point hardware with compact fixed-point multipliers and registers.

Pruned:

Smallest Area Footprint (Most Optimized): Achieves maximum area savings by stripping out redundant compute paths, unburdening logic arrays and reducing routing complexity across the chip.