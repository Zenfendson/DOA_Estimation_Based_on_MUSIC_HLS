set moduleName qrf_alt
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
set C_modelName {qrf_alt}
set C_modelType { void 0 }
set C_modelArgList {
	{ A_M_real float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_M_imag float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ Q_M_real float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ Q_M_imag float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ R_M_real float 32 regular {array 16 { 0 3 } 0 1 }  }
	{ R_M_imag float 32 regular {array 16 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "Q_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "Q_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "R_M_real", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "R_M_imag", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ A_M_real_address0 sc_out sc_lv 4 signal 0 } 
	{ A_M_real_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_M_real_q0 sc_in sc_lv 32 signal 0 } 
	{ A_M_imag_address0 sc_out sc_lv 4 signal 1 } 
	{ A_M_imag_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_M_imag_q0 sc_in sc_lv 32 signal 1 } 
	{ Q_M_real_address0 sc_out sc_lv 4 signal 2 } 
	{ Q_M_real_ce0 sc_out sc_logic 1 signal 2 } 
	{ Q_M_real_we0 sc_out sc_logic 1 signal 2 } 
	{ Q_M_real_d0 sc_out sc_lv 32 signal 2 } 
	{ Q_M_imag_address0 sc_out sc_lv 4 signal 3 } 
	{ Q_M_imag_ce0 sc_out sc_logic 1 signal 3 } 
	{ Q_M_imag_we0 sc_out sc_logic 1 signal 3 } 
	{ Q_M_imag_d0 sc_out sc_lv 32 signal 3 } 
	{ R_M_real_address0 sc_out sc_lv 4 signal 4 } 
	{ R_M_real_ce0 sc_out sc_logic 1 signal 4 } 
	{ R_M_real_we0 sc_out sc_logic 1 signal 4 } 
	{ R_M_real_d0 sc_out sc_lv 32 signal 4 } 
	{ R_M_imag_address0 sc_out sc_lv 4 signal 5 } 
	{ R_M_imag_ce0 sc_out sc_logic 1 signal 5 } 
	{ R_M_imag_we0 sc_out sc_logic 1 signal 5 } 
	{ R_M_imag_d0 sc_out sc_lv 32 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "A_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_real", "role": "address0" }} , 
 	{ "name": "A_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_real", "role": "ce0" }} , 
 	{ "name": "A_M_real_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_real", "role": "q0" }} , 
 	{ "name": "A_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_M_imag", "role": "address0" }} , 
 	{ "name": "A_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_M_imag", "role": "ce0" }} , 
 	{ "name": "A_M_imag_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_M_imag", "role": "q0" }} , 
 	{ "name": "Q_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_real", "role": "address0" }} , 
 	{ "name": "Q_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "ce0" }} , 
 	{ "name": "Q_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_real", "role": "we0" }} , 
 	{ "name": "Q_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_real", "role": "d0" }} , 
 	{ "name": "Q_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "address0" }} , 
 	{ "name": "Q_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "ce0" }} , 
 	{ "name": "Q_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "we0" }} , 
 	{ "name": "Q_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "Q_M_imag", "role": "d0" }} , 
 	{ "name": "R_M_real_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_real", "role": "address0" }} , 
 	{ "name": "R_M_real_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "ce0" }} , 
 	{ "name": "R_M_real_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_real", "role": "we0" }} , 
 	{ "name": "R_M_real_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_real", "role": "d0" }} , 
 	{ "name": "R_M_imag_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "R_M_imag", "role": "address0" }} , 
 	{ "name": "R_M_imag_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "ce0" }} , 
 	{ "name": "R_M_imag_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "R_M_imag", "role": "we0" }} , 
 	{ "name": "R_M_imag_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "R_M_imag", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82"],
		"CDFG" : "qrf_alt",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "684", "EstimateLatencyMax" : "854",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "A_M_real", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_M_imag", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Q_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "Q_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "R_M_real", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "R_M_imag", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "CONFIG_BATCH_CNTS", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "CONFIG_SEQUENCE_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "CONFIG_SEQUENCE_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "CONFIG_SEQUENCE_2", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CONFIG_BATCH_CNTS_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CONFIG_SEQUENCE_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CONFIG_SEQUENCE_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.CONFIG_SEQUENCE_2_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_i_M_real_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_i_M_imag_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.r_i_M_real_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.r_i_M_imag_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090", "Parent" : "0", "Child" : ["10", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55"],
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
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220", "Parent" : "9", "Child" : ["11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31"],
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
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fadd_32ns_3ocq_U53", "Parent" : "10"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fadd_32ns_3ocq_U54", "Parent" : "10"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fadd_32ns_3ocq_U55", "Parent" : "10"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U56", "Parent" : "10"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U57", "Parent" : "10"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U58", "Parent" : "10"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fmul_32ns_3jbC_U59", "Parent" : "10"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fdiv_32ns_3ncg_U60", "Parent" : "10"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fdiv_32ns_3ncg_U61", "Parent" : "10"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fdiv_32ns_3ncg_U62", "Parent" : "10"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U63", "Parent" : "10"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U64", "Parent" : "10"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U65", "Parent" : "10"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U66", "Parent" : "10"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U67", "Parent" : "10"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U68", "Parent" : "10"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U69", "Parent" : "10"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U70", "Parent" : "10"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U71", "Parent" : "10"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fcmp_32ns_3pcA_U72", "Parent" : "10"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.grp_qrf_magnitude_float_s_fu_220.music_fsqrt_32ns_qcK_U73", "Parent" : "10"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fadd_32ns_3ocq_U81", "Parent" : "9"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fadd_32ns_3ocq_U82", "Parent" : "9"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fsub_32ns_3rcU_U83", "Parent" : "9"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fadd_32ns_3ocq_U84", "Parent" : "9"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fsub_32ns_3rcU_U85", "Parent" : "9"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U86", "Parent" : "9"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U87", "Parent" : "9"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U88", "Parent" : "9"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U89", "Parent" : "9"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U90", "Parent" : "9"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U91", "Parent" : "9"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U92", "Parent" : "9"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U93", "Parent" : "9"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U94", "Parent" : "9"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U95", "Parent" : "9"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fmul_32ns_3jbC_U96", "Parent" : "9"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fdiv_32ns_3ncg_U97", "Parent" : "9"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fdiv_32ns_3ncg_U98", "Parent" : "9"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fdiv_32ns_3ncg_U99", "Parent" : "9"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fdiv_32ns_3ncg_U100", "Parent" : "9"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fcmp_32ns_3pcA_U101", "Parent" : "9"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fcmp_32ns_3pcA_U102", "Parent" : "9"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fcmp_32ns_3pcA_U103", "Parent" : "9"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_qrf_givens_float_s_fu_1090.music_fcmp_32ns_3pcA_U104", "Parent" : "9"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3rcU_U111", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U112", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fsub_32ns_3rcU_U113", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U114", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U115", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fadd_32ns_3ocq_U116", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U117", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U118", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U119", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U120", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U121", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U122", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U123", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.music_fmul_32ns_3jbC_U124", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.to_rot_0_V_fifo_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.to_rot_1_V_fifo_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.to_rot_2_V_fifo_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_real_s_fifo_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_real_1_fifo_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_real_2_fifo_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_real_3_fifo_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_real_4_fifo_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_imag_s_fifo_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_imag_1_fifo_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_imag_2_fifo_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_imag_3_fifo_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotations_V_M_imag_4_fifo_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	qrf_alt {
		A_M_real {Type I LastRead 7 FirstWrite -1}
		A_M_imag {Type I LastRead 7 FirstWrite -1}
		Q_M_real {Type O LastRead -1 FirstWrite 10}
		Q_M_imag {Type O LastRead -1 FirstWrite 10}
		R_M_real {Type O LastRead -1 FirstWrite 10}
		R_M_imag {Type O LastRead -1 FirstWrite 10}
		CONFIG_BATCH_CNTS {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_0 {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_1 {Type I LastRead -1 FirstWrite -1}
		CONFIG_SEQUENCE_2 {Type I LastRead -1 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "684", "Max" : "854"}
	, {"Name" : "Interval", "Min" : "684", "Max" : "854"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
]}

set Spec2ImplPortList { 
	A_M_real { ap_memory {  { A_M_real_address0 mem_address 1 4 }  { A_M_real_ce0 mem_ce 1 1 }  { A_M_real_q0 mem_dout 0 32 } } }
	A_M_imag { ap_memory {  { A_M_imag_address0 mem_address 1 4 }  { A_M_imag_ce0 mem_ce 1 1 }  { A_M_imag_q0 mem_dout 0 32 } } }
	Q_M_real { ap_memory {  { Q_M_real_address0 mem_address 1 4 }  { Q_M_real_ce0 mem_ce 1 1 }  { Q_M_real_we0 mem_we 1 1 }  { Q_M_real_d0 mem_din 1 32 } } }
	Q_M_imag { ap_memory {  { Q_M_imag_address0 mem_address 1 4 }  { Q_M_imag_ce0 mem_ce 1 1 }  { Q_M_imag_we0 mem_we 1 1 }  { Q_M_imag_d0 mem_din 1 32 } } }
	R_M_real { ap_memory {  { R_M_real_address0 mem_address 1 4 }  { R_M_real_ce0 mem_ce 1 1 }  { R_M_real_we0 mem_we 1 1 }  { R_M_real_d0 mem_din 1 32 } } }
	R_M_imag { ap_memory {  { R_M_imag_address0 mem_address 1 4 }  { R_M_imag_ce0 mem_ce 1 1 }  { R_M_imag_we0 mem_we 1 1 }  { R_M_imag_d0 mem_din 1 32 } } }
}
