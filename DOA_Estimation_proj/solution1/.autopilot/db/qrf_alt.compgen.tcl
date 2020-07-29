# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 125
set hasByteEnable 0
set MemName qrf_alt_CONFIG_BAsc4
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 2
set AddrRange 8
set AddrWd 3
set TrueReset 0
set IsROM 1
set ROMData { "10" "10" "01" "01" "01" "00" "00" "00" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 126
set hasByteEnable 0
set MemName qrf_alt_CONFIG_SEtde
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 2
set AddrRange 11
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "00" "10" "01" "00" "01" "10" "10" "00" "00" "00" "00" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 127
set hasByteEnable 0
set MemName qrf_alt_CONFIG_SEudo
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 2
set AddrRange 11
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "01" "11" "11" "10" "10" "11" "11" "00" "00" "00" "00" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 128
set hasByteEnable 0
set MemName qrf_alt_CONFIG_SEvdy
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 2
set AddrRange 11
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "00" "00" "01" "00" "01" "10" "11" "00" "00" "00" "00" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 129
set hasByteEnable 0
set MemName qrf_alt_q_i_M_real
set CoreName ap_simcore_mem
set PortList { 2 2 }
set DataWd 32
set AddrRange 16
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# FIFO definition:
set ID 130
set FifoName fifo_w32_d2_A
set InstName to_rot_0_V_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 131
set FifoName fifo_w32_d2_A
set InstName to_rot_1_V_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 132
set FifoName fifo_w32_d2_A
set InstName to_rot_2_V_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 133
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_real_s_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 134
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_real_1_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 135
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_real_2_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 136
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_real_3_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 137
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_real_4_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 138
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_imag_s_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 139
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_imag_1_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 140
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_imag_2_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 141
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_imag_3_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# FIFO definition:
set ID 142
set FifoName fifo_w32_d2_A
set InstName rotations_V_M_imag_4_U
set CoreName ap_simcore_fifo
set NumOfStage 2
set RegisteredInput 0
set DualClock 0
set Depth 2
set DataWd 32
set AddrWd 1
set FullThresh 0
set EmptyThresh 0
set impl_style auto
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fifo] == "ap_gen_simcore_fifo"} {
eval "ap_gen_simcore_fifo { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}    corename ${CoreName} \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0\
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
}"
} else {
puts "@W \[IMPL-106\] Cannot find ap_gen_simcore_fifo, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler $FifoName
}


if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_FIFO] == "::AESL_LIB_VIRTEX::xil_gen_FIFO"} {
eval "::AESL_LIB_VIRTEX::xil_gen_FIFO { \
    id ${ID} \
    name ${FifoName} \
    instname ${InstName}
    corename FIFO \
    op fifo \
    stage_num ${NumOfStage} \
    registered_input ${RegisteredInput} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    reset_level 1 \
    sync_rst true \
    dual_clk 0 \
    depth ${Depth} \
    empty_thresh ${EmptyThresh} \
    full_thresh ${FullThresh} \
    style ${impl_style} \
}"
} else {
puts "@W \[IMPL-107\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_FIFO, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 143 \
    name A_M_real \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_real \
    op interface \
    ports { A_M_real_address0 { O 4 vector } A_M_real_ce0 { O 1 bit } A_M_real_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_real'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 144 \
    name A_M_imag \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename A_M_imag \
    op interface \
    ports { A_M_imag_address0 { O 4 vector } A_M_imag_ce0 { O 1 bit } A_M_imag_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'A_M_imag'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 145 \
    name Q_M_real \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename Q_M_real \
    op interface \
    ports { Q_M_real_address0 { O 4 vector } Q_M_real_ce0 { O 1 bit } Q_M_real_we0 { O 1 bit } Q_M_real_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'Q_M_real'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 146 \
    name Q_M_imag \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename Q_M_imag \
    op interface \
    ports { Q_M_imag_address0 { O 4 vector } Q_M_imag_ce0 { O 1 bit } Q_M_imag_we0 { O 1 bit } Q_M_imag_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'Q_M_imag'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 147 \
    name R_M_real \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename R_M_real \
    op interface \
    ports { R_M_real_address0 { O 4 vector } R_M_real_ce0 { O 1 bit } R_M_real_we0 { O 1 bit } R_M_real_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'R_M_real'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 148 \
    name R_M_imag \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename R_M_imag \
    op interface \
    ports { R_M_imag_address0 { O 4 vector } R_M_imag_ce0 { O 1 bit } R_M_imag_we0 { O 1 bit } R_M_imag_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'R_M_imag'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


