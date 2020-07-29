############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project DOA_Estimation_proj
set_top music
add_files src/music.cpp
add_files -tb src/test.cpp
add_files -tb src/test_audio
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./DOA_Estimation_proj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
