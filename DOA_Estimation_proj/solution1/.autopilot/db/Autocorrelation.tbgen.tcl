set moduleName Autocorrelation
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Autocorrelation}
set C_modelType { void 0 }
set C_modelArgList {
	{ X_M_real float 32 regular {array 40 { 1 1 } 1 1 }  }
	{ X_M_imag float 32 regular {array 40 { 1 1 } 1 1 }  }
	{ Rx_M_real float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ Rx_M_imag float 32 regular {array 16 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "X_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "X_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Rx_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "Rx_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ X_M_real_address0 sc_out sc_lv 6 signal 0 } 
	{ X_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ X_M_real_q0 sc_in sc_lv 32 signal 0 } 
	{ X_M_real_address1 sc_out sc_lv 6 signal 0 } 
	{ X_M_real_ce1 sc_out sc_logic 1 signal 0 } 
	{ X_M_real_q1 sc_in sc_lv 32 signal 0 } 
	{ X_M_imag_address0 sc_out sc_lv 6 signal 1 } 
	{ X_M_imag_ce0 sc_out sc_logic 1 signal 1 } 
	{ X_M_imag_q0 sc_in sc_lv 32 signal 1 } 
	{ X_M_imag_address1 sc_out sc_lv 6 signal 1 } 
	{ X_M_imag_ce1 sc_out sc_logic 1 signal 1 } 
	{ X_M_imag_q1 sc_in sc_lv 32 signal 1 } 
	{ Rx_M_real_address0 sc_out sc_lv 4 signal 2 } 
	{ Rx_M_real_ce0 sc_out sc_logic 1 signal 2 } 
	{ Rx_M_real_we0 sc_out sc_logic 1 signal 2 } 
	{ Rx_M_real_d0 sc_out sc_lv 32 signal 2 } 
	{ Rx_M_imag_address0 sc_out sc_lv 4 signal 3 } 
	{ Rx_M_imag_ce0 sc_out sc_logic 1 signal 3 } 
	{ Rx_M_imag_we0 sc_out sc_logic 1 signal 3 } 
	{ Rx_M_imag_d0 sc_out sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "X_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "X_M_real", "role": "address0" }} , 
 	{ "name": "X_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_M_real", "role": "ce0" }} , 
 	{ "name": "X_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_M_real", "role": "q0" }} , 
 	{ "name": "X_M_real_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "X_M_real", "role": "address1" }} , 
 	{ "name": "X_M_real_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_M_real", "role": "ce1" }} , 
 	{ "name": "X_M_real_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_M_real", "role": "q1" }} , 
 	{ "name": "X_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "X_M_imag", "role": "address0" }} , 
 	{ "name": "X_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_M_imag", "role": "ce0" }} , 
 	{ "name": "X_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_M_imag", "role": "q0" }} , 
 	{ "name": "X_M_imag_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "X_M_imag", "role": "address1" }} , 
 	{ "name": "X_M_imag_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_M_imag", "role": "ce1" }} , 
 	{ "name": "X_M_imag_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_M_imag", "role": "q1" }} , 
 	{ "name": "Rx_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Rx_M_real", "role": "address0" }} , 
 	{ "name": "Rx_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Rx_M_real", "role": "ce0" }} , 
 	{ "name": "Rx_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Rx_M_real", "role": "we0" }} , 
 	{ "name": "Rx_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Rx_M_real", "role": "d0" }} , 
 	{ "name": "Rx_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Rx_M_imag", "role": "address0" }} , 
 	{ "name": "Rx_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Rx_M_imag", "role": "ce0" }} , 
 	{ "name": "Rx_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Rx_M_imag", "role": "we0" }} , 
 	{ "name": "Rx_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Rx_M_imag", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "Autocorrelation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2985", "EstimateLatencyMax" : "2985",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "X_M_imag", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rx_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Rx_M_imag", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U40", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U41", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U42", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U43", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U44", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U45", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U46", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U47", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	Autocorrelation {
		X_M_real {Type I LastRead 4 FirstWrite -1}
		X_M_imag {Type I LastRead 4 FirstWrite -1}
		Rx_M_real {Type O LastRead -1 FirstWrite 27}
		Rx_M_imag {Type O LastRead -1 FirstWrite 27}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2985", "Max" : "2985"}
	, {"Name" : "Interval", "Min" : "2985", "Max" : "2985"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	X_M_real { ap_memory {  { X_M_real_address0 mem_address 1 6 }  { X_M_real_ce0 mem_ce 1 1 }  { X_M_real_q0 mem_dout 0 32 }  { X_M_real_address1 MemPortADDR2 1 6 }  { X_M_real_ce1 MemPortCE2 1 1 }  { X_M_real_q1 MemPortDOUT2 0 32 } } }
	X_M_imag { ap_memory {  { X_M_imag_address0 mem_address 1 6 }  { X_M_imag_ce0 mem_ce 1 1 }  { X_M_imag_q0 mem_dout 0 32 }  { X_M_imag_address1 MemPortADDR2 1 6 }  { X_M_imag_ce1 MemPortCE2 1 1 }  { X_M_imag_q1 MemPortDOUT2 0 32 } } }
	Rx_M_real { ap_memory {  { Rx_M_real_address0 mem_address 1 4 }  { Rx_M_real_ce0 mem_ce 1 1 }  { Rx_M_real_we0 mem_we 1 1 }  { Rx_M_real_d0 mem_din 1 32 } } }
	Rx_M_imag { ap_memory {  { Rx_M_imag_address0 mem_address 1 4 }  { Rx_M_imag_ce0 mem_ce 1 1 }  { Rx_M_imag_we0 mem_we 1 1 }  { Rx_M_imag_d0 mem_din 1 32 } } }
}
