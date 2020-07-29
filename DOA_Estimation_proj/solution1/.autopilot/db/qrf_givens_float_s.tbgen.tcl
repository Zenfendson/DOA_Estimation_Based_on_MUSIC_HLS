set moduleName qrf_givens_float_s
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
set C_modelName {qrf_givens<float>}
set C_modelType { int 288 }
set C_modelArgList {
	{ extra_pass int 1 regular  }
	{ a_M_real float 32 regular  }
	{ a_M_imag float 32 regular  }
	{ b_M_real float 32 regular  }
	{ b_M_imag float 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "extra_pass", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "a_M_real", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "a_M_imag", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "b_M_real", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "b_M_imag", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 288} ]}
# RTL Port declarations: 
set portNum 17
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ extra_pass sc_in sc_lv 1 signal 0 } 
	{ a_M_real sc_in sc_lv 32 signal 1 } 
	{ a_M_imag sc_in sc_lv 32 signal 2 } 
	{ b_M_real sc_in sc_lv 32 signal 3 } 
	{ b_M_imag sc_in sc_lv 32 signal 4 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
	{ ap_return_4 sc_out sc_lv 32 signal -1 } 
	{ ap_return_5 sc_out sc_lv 32 signal -1 } 
	{ ap_return_6 sc_out sc_lv 32 signal -1 } 
	{ ap_return_7 sc_out sc_lv 32 signal -1 } 
	{ ap_return_8 sc_out sc_lv 32 signal -1 } 
	{ ap_ce sc_in sc_logic 1 ce -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "extra_pass", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "extra_pass", "role": "default" }} , 
 	{ "name": "a_M_real", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "a_M_real", "role": "default" }} , 
 	{ "name": "a_M_imag", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "a_M_imag", "role": "default" }} , 
 	{ "name": "b_M_real", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "b_M_real", "role": "default" }} , 
 	{ "name": "b_M_imag", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "b_M_imag", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_ce", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "ce", "bundle":{"name": "ap_ce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46"],
		"CDFG" : "qrf_givens_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "75", "EstimateLatencyMin" : "75", "EstimateLatencyMax" : "75",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "extra_pass", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_M_imag", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_real", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_M_imag", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fadd_32ns_3ocq_U53", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fadd_32ns_3ocq_U54", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fadd_32ns_3ocq_U55", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U56", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U57", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U58", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U59", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fdiv_32ns_3ncg_U60", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fdiv_32ns_3ncg_U61", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fdiv_32ns_3ncg_U62", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U63", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U64", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U65", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U66", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U67", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U68", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U69", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U70", "Parent" : "1"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U71", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U72", "Parent" : "1"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_magnitude_float_s_fu_220.music_fsqrt_32ns_qcK_U73", "Parent" : "1"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U81", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U82", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3rcU_U83", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U84", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3rcU_U85", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U86", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U87", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U88", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U89", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U90", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U91", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U92", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U93", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U94", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U95", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U96", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U97", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U98", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U99", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fdiv_32ns_3ncg_U100", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U101", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U102", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U103", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fcmp_32ns_3pcA_U104", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	qrf_givens_float_s {
		extra_pass {Type I LastRead 0 FirstWrite -1}
		a_M_real {Type I LastRead 0 FirstWrite -1}
		a_M_imag {Type I LastRead 0 FirstWrite -1}
		b_M_real {Type I LastRead 0 FirstWrite -1}
		b_M_imag {Type I LastRead 0 FirstWrite -1}}
	qrf_magnitude_float_s {
		a_M_real {Type I LastRead 0 FirstWrite -1}
		a_M_imag {Type I LastRead 0 FirstWrite -1}
		b_M_real {Type I LastRead 0 FirstWrite -1}
		b_M_imag {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "75", "Max" : "75"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	extra_pass { ap_none {  { extra_pass in_data 0 1 } } }
	a_M_real { ap_none {  { a_M_real in_data 0 32 } } }
	a_M_imag { ap_none {  { a_M_imag in_data 0 32 } } }
	b_M_real { ap_none {  { b_M_real in_data 0 32 } } }
	b_M_imag { ap_none {  { b_M_imag in_data 0 32 } } }
}
