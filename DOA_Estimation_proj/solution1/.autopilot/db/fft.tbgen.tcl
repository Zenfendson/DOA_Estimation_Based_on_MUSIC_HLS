set moduleName fft
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
set C_modelName {fft}
set C_modelType { void 0 }
set C_modelArgList {
	{ x_M_real float 32 regular {array 1024 { 2 3 } 1 1 }  }
	{ x_M_imag float 32 regular {array 1024 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "x_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "x_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ x_M_real_address0 sc_out sc_lv 10 signal 0 } 
	{ x_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ x_M_real_we0 sc_out sc_logic 1 signal 0 } 
	{ x_M_real_d0 sc_out sc_lv 32 signal 0 } 
	{ x_M_real_q0 sc_in sc_lv 32 signal 0 } 
	{ x_M_imag_address0 sc_out sc_lv 10 signal 1 } 
	{ x_M_imag_ce0 sc_out sc_logic 1 signal 1 } 
	{ x_M_imag_we0 sc_out sc_logic 1 signal 1 } 
	{ x_M_imag_d0 sc_out sc_lv 32 signal 1 } 
	{ x_M_imag_q0 sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "x_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "x_M_real", "role": "address0" }} , 
 	{ "name": "x_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_M_real", "role": "ce0" }} , 
 	{ "name": "x_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_M_real", "role": "we0" }} , 
 	{ "name": "x_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_M_real", "role": "d0" }} , 
 	{ "name": "x_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_M_real", "role": "q0" }} , 
 	{ "name": "x_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "x_M_imag", "role": "address0" }} , 
 	{ "name": "x_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_M_imag", "role": "ce0" }} , 
 	{ "name": "x_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_M_imag", "role": "we0" }} , 
 	{ "name": "x_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_M_imag", "role": "d0" }} , 
 	{ "name": "x_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_M_imag", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "15", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36"],
		"CDFG" : "fft",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state48", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_258"},
			{"State" : "ap_ST_fsm_state48", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_sin_or_cos_float_s_fu_274"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_bit_reverse_fu_290"}],
		"Port" : [
			{"Name" : "x_M_real", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "x_M_imag", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_sin_or_cos_float_s_fu_258", "Port" : "ref_4oPi_table_100_V"},
					{"ID" : "15", "SubInstance" : "grp_sin_or_cos_float_s_fu_274", "Port" : "ref_4oPi_table_100_V"}]},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_sin_or_cos_float_s_fu_258", "Port" : "second_order_float_2"},
					{"ID" : "15", "SubInstance" : "grp_sin_or_cos_float_s_fu_274", "Port" : "second_order_float_2"}]},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_sin_or_cos_float_s_fu_258", "Port" : "second_order_float_3"},
					{"ID" : "15", "SubInstance" : "grp_sin_or_cos_float_s_fu_274", "Port" : "second_order_float_3"}]},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_sin_or_cos_float_s_fu_258", "Port" : "second_order_float_s"},
					{"ID" : "15", "SubInstance" : "grp_sin_or_cos_float_s_fu_274", "Port" : "second_order_float_s"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.X_R_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.X_I_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258", "Parent" : "0", "Child" : ["4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "25",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.ref_4oPi_table_100_V_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.second_order_float_2_U", "Parent" : "3"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.second_order_float_3_U", "Parent" : "3"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.second_order_float_s_U", "Parent" : "3"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "3",
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.music_mul_80ns_24fYi_U5", "Parent" : "3"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.music_mux_83_1_1_1_U6", "Parent" : "3"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.music_mux_164_1_1_1_U7", "Parent" : "3"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.music_mux_164_1_1_1_U8", "Parent" : "3"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.music_mul_mul_15ng8j_U9", "Parent" : "3"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_258.music_mul_mul_15nhbi_U10", "Parent" : "3"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274", "Parent" : "0", "Child" : ["16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26"],
		"CDFG" : "sin_or_cos_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "25",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_scaled_fixed2ieee_1_fu_218"}],
		"Port" : [
			{"Name" : "t_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "do_cos", "Type" : "None", "Direction" : "I"},
			{"Name" : "ref_4oPi_table_100_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "second_order_float_s", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.ref_4oPi_table_100_V_U", "Parent" : "15"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.second_order_float_2_U", "Parent" : "15"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.second_order_float_3_U", "Parent" : "15"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.second_order_float_s_U", "Parent" : "15"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.grp_scaled_fixed2ieee_1_fu_218", "Parent" : "15",
		"CDFG" : "scaled_fixed2ieee_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "prescale", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.music_mul_80ns_24fYi_U5", "Parent" : "15"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.music_mux_83_1_1_1_U6", "Parent" : "15"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.music_mux_164_1_1_1_U7", "Parent" : "15"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.music_mux_164_1_1_1_U8", "Parent" : "15"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.music_mul_mul_15ng8j_U9", "Parent" : "15"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sin_or_cos_float_s_fu_274.music_mul_mul_15nhbi_U10", "Parent" : "15"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_bit_reverse_fu_290", "Parent" : "0",
		"CDFG" : "bit_reverse",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13313", "EstimateLatencyMax" : "14337",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "X_R", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U23", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_faddfsub_32ibs_U24", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U25", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U26", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U27", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U28", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fptrunc_64nkbM_U29", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_ddiv_64ns_6lbW_U30", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_sitodp_32nsmb6_U31", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	fft {
		x_M_real {Type IO LastRead 1 FirstWrite 5}
		x_M_imag {Type IO LastRead 1 FirstWrite 5}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	sin_or_cos_float_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 9 FirstWrite -1}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee_1 {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	sin_or_cos_float_s {
		t_in {Type I LastRead 0 FirstWrite -1}
		do_cos {Type I LastRead 9 FirstWrite -1}
		ref_4oPi_table_100_V {Type I LastRead -1 FirstWrite -1}
		second_order_float_2 {Type I LastRead -1 FirstWrite -1}
		second_order_float_3 {Type I LastRead -1 FirstWrite -1}
		second_order_float_s {Type I LastRead -1 FirstWrite -1}}
	scaled_fixed2ieee_1 {
		in_V {Type I LastRead 0 FirstWrite -1}
		prescale {Type I LastRead 0 FirstWrite -1}}
	bit_reverse {
		X_R {Type IO LastRead 3 FirstWrite 3}
		X_I {Type IO LastRead 3 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	x_M_real { ap_memory {  { x_M_real_address0 mem_address 1 10 }  { x_M_real_ce0 mem_ce 1 1 }  { x_M_real_we0 mem_we 1 1 }  { x_M_real_d0 mem_din 1 32 }  { x_M_real_q0 mem_dout 0 32 } } }
	x_M_imag { ap_memory {  { x_M_imag_address0 mem_address 1 10 }  { x_M_imag_ce0 mem_ce 1 1 }  { x_M_imag_we0 mem_we 1 1 }  { x_M_imag_d0 mem_din 1 32 }  { x_M_imag_q0 mem_dout 0 32 } } }
}
