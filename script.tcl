############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project mlp_FP
set_top mlp
add_files ../HAAI_Lab7_source/mlp_FP/mlp.cpp
add_files -tb ../HAAI_Lab7_source/mlp_FP/mlp_tb.cpp -csimflags "-Imlp_FP/."
open_solution "solution1"
set_part {xczu3eg-sbva484-1-i} -tool vivado
create_clock -period 10 -name default
#source "./mlp_FP/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -format ip_catalog
