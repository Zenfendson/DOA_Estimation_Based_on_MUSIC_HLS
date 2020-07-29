set moduleName sin_or_cos_double_s
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
set C_modelName {sin_or_cos<double>}
set C_modelType { double 64 }
set C_modelArgList {
	{ t_in double 64 regular  }
	{ do_cos uint 1 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "t_in", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "do_cos", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 64} ]}
# RTL Port declarations: 
set portNum 9
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ t_in sc_in sc_lv 64 signal 0 } 
	{ do_cos sc_in sc_logic 1 signal 1 } 
	{ ap_return sc_out sc_lv 64 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "t_in", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "t_in", "role": "default" }} , 
 	{ "name": "do_cos", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "do_cos", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20"],
		"CDFG" : "sin_or_cos_double_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "43", "EstimateLatencyMax" : "51",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_fu_268"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_256_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fourth_order_double_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ref_4oPi_table_256_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_4_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_5_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_6_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_7_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fourth_order_double_s_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_268", "Parent" : "0", "Child" : ["8", "9"],
		"CDFG" : "scaled_fixed2ieee",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "19", "EstimateLatencyMax" : "27",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_268.music_mux_42_32_1_1_U197", "Parent" : "7"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_scaled_fixed2ieee_fu_268.music_mux_42_32_1_1_U198", "Parent" : "7"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_170ns_5KfY_U201", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_83_1_1_1_U202", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_49Lf8_U203", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_49Lf8_U204", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_49Lf8_U205", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_56ns_52Mgi_U206", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_49ns_44Ngs_U207", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_42ns_33OgC_U208", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mul_64s_63nPgM_U209", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_164_1_1_1_U210", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_mux_164_1_1_1_U211", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	sin_or_cos_double_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 11 FirstWrite -1}
		ref_4oPi_table_256_V {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_4 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_5 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_6 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_7 {Type I LastRead -1 FirstWrite -1}
		fourth_order_double_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "43", "Max" : "51"}
	, {"Name" : "Interval", "Min" : "43", "Max" : "51"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	t_in { ap_none {  { t_in in_data 0 64 } } }
	do_cos { ap_none {  { do_cos in_data 0 1 } } }
}
