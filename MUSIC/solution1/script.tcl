############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project MUSIC
set_top music
add_files src/music.cpp
add_files src/music.cpp
add_files -tb src/test.cpp
add_files -tb src/test.cpp
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./MUSIC/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
