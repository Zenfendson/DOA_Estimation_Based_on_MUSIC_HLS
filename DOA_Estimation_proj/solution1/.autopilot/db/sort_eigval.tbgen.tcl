set moduleName sort_eigval
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
set C_modelName {sort_eigval}
set C_modelType { int 128 }
set C_modelArgList {
	{ eigval_0_read float 32 regular  }
	{ eigval_1_read float 32 regular  }
	{ eigval_2_read float 32 regular  }
	{ eigval_3_read float 32 regular  }
	{ sort_index_0_read int 32 regular  }
	{ sort_index_1_read int 32 regular  }
	{ sort_index_2_read int 32 regular  }
	{ sort_index_3_read int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "eigval_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "eigval_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "eigval_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "eigval_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "sort_index_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "sort_index_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "sort_index_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "sort_index_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 128} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ eigval_0_read sc_in sc_lv 32 signal 0 } 
	{ eigval_1_read sc_in sc_lv 32 signal 1 } 
	{ eigval_2_read sc_in sc_lv 32 signal 2 } 
	{ eigval_3_read sc_in sc_lv 32 signal 3 } 
	{ sort_index_0_read sc_in sc_lv 32 signal 4 } 
	{ sort_index_1_read sc_in sc_lv 32 signal 5 } 
	{ sort_index_2_read sc_in sc_lv 32 signal 6 } 
	{ sort_index_3_read sc_in sc_lv 32 signal 7 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "eigval_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "eigval_0_read", "role": "default" }} , 
 	{ "name": "eigval_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "eigval_1_read", "role": "default" }} , 
 	{ "name": "eigval_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "eigval_2_read", "role": "default" }} , 
 	{ "name": "eigval_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "eigval_3_read", "role": "default" }} , 
 	{ "name": "sort_index_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sort_index_0_read", "role": "default" }} , 
 	{ "name": "sort_index_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sort_index_1_read", "role": "default" }} , 
 	{ "name": "sort_index_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sort_index_2_read", "role": "default" }} , 
 	{ "name": "sort_index_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "sort_index_3_read", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17"],
		"CDFG" : "sort_eigval",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "42",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "eigval_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "eigval_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sort_index_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sort_index_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sort_index_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sort_index_3_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U172", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U173", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U174", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U175", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U176", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U177", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U178", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U179", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U180", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U181", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U182", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U183", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U184", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U185", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U186", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U187", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_42_32_1_1_U188", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	sort_eigval {
		eigval_0_read {Type I LastRead 0 FirstWrite -1}
		eigval_1_read {Type I LastRead 0 FirstWrite -1}
		eigval_2_read {Type I LastRead 0 FirstWrite -1}
		eigval_3_read {Type I LastRead 0 FirstWrite -1}
		sort_index_0_read {Type I LastRead 0 FirstWrite -1}
		sort_index_1_read {Type I LastRead 0 FirstWrite -1}
		sort_index_2_read {Type I LastRead 0 FirstWrite -1}
		sort_index_3_read {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "24", "Max" : "42"}
	, {"Name" : "Interval", "Min" : "24", "Max" : "42"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	eigval_0_read { ap_none {  { eigval_0_read in_data 0 32 } } }
	eigval_1_read { ap_none {  { eigval_1_read in_data 0 32 } } }
	eigval_2_read { ap_none {  { eigval_2_read in_data 0 32 } } }
	eigval_3_read { ap_none {  { eigval_3_read in_data 0 32 } } }
	sort_index_0_read { ap_none {  { sort_index_0_read in_data 0 32 } } }
	sort_index_1_read { ap_none {  { sort_index_1_read in_data 0 32 } } }
	sort_index_2_read { ap_none {  { sort_index_2_read in_data 0 32 } } }
	sort_index_3_read { ap_none {  { sort_index_3_read in_data 0 32 } } }
}
