set moduleName qrf_magnitude_float_s
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 1
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {qrf_magnitude<float>}
set C_modelType { float 32 }
set C_modelArgList {
	{ a_M_real float 32 regular  }
	{ a_M_imag float 32 regular  }
	{ b_M_real float 32 regular  }
	{ b_M_imag float 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_M_real", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "a_M_imag", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "b_M_real", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "b_M_imag", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32} ]}
# RTL Port declarations: 
set portNum 8
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ a_M_real sc_in sc_lv 32 signal 0 } 
	{ a_M_imag sc_in sc_lv 32 signal 1 } 
	{ b_M_real sc_in sc_lv 32 signal 2 } 
	{ b_M_imag sc_in sc_lv 32 signal 3 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "a_M_real", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "a_M_real", "role": "default" }} , 
 	{ "name": "a_M_imag", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "a_M_imag", "role": "default" }} , 
 	{ "name": "b_M_real", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "b_M_real", "role": "default" }} , 
 	{ "name": "b_M_imag", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "b_M_imag", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21"],
		"CDFG" : "qrf_magnitude_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "48", "EstimateLatencyMin" : "48", "EstimateLatencyMax" : "48",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_imag", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_imag", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U53", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U54", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U55", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U56", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U57", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U58", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U59", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U60", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U61", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U62", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U63", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U64", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U65", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U66", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U67", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U68", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U69", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U70", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U71", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U72", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsqrt_32ns_qcK_U73", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	qrf_magnitude_float_s {
		a_M_real {Type I LastRead 0 FirstWrite -1}
		a_M_imag {Type I LastRead 0 FirstWrite -1}
		b_M_real {Type I LastRead 0 FirstWrite -1}
		b_M_imag {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "48", "Max" : "48"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	a_M_real { ap_none {  { a_M_real in_data 0 32 } } }
	a_M_imag { ap_none {  { a_M_imag in_data 0 32 } } }
	b_M_real { ap_none {  { b_M_real in_data 0 32 } } }
	b_M_imag { ap_none {  { b_M_imag in_data 0 32 } } }
}
