set moduleName bit_reverse
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
set C_modelName {bit_reverse}
set C_modelType { void 0 }
set C_modelArgList {
	{ X_R float 32 regular {array 1024 { 2 2 } 1 1 }  }
	{ X_I float 32 regular {array 1024 { 2 2 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "X_R", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "X_I", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ X_R_address0 sc_out sc_lv 10 signal 0 } 
	{ X_R_ce0 sc_out sc_logic 1 signal 0 } 
	{ X_R_we0 sc_out sc_logic 1 signal 0 } 
	{ X_R_d0 sc_out sc_lv 32 signal 0 } 
	{ X_R_q0 sc_in sc_lv 32 signal 0 } 
	{ X_R_address1 sc_out sc_lv 10 signal 0 } 
	{ X_R_ce1 sc_out sc_logic 1 signal 0 } 
	{ X_R_we1 sc_out sc_logic 1 signal 0 } 
	{ X_R_d1 sc_out sc_lv 32 signal 0 } 
	{ X_R_q1 sc_in sc_lv 32 signal 0 } 
	{ X_I_address0 sc_out sc_lv 10 signal 1 } 
	{ X_I_ce0 sc_out sc_logic 1 signal 1 } 
	{ X_I_we0 sc_out sc_logic 1 signal 1 } 
	{ X_I_d0 sc_out sc_lv 32 signal 1 } 
	{ X_I_q0 sc_in sc_lv 32 signal 1 } 
	{ X_I_address1 sc_out sc_lv 10 signal 1 } 
	{ X_I_ce1 sc_out sc_logic 1 signal 1 } 
	{ X_I_we1 sc_out sc_logic 1 signal 1 } 
	{ X_I_d1 sc_out sc_lv 32 signal 1 } 
	{ X_I_q1 sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "X_R_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_R", "role": "address0" }} , 
 	{ "name": "X_R_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "ce0" }} , 
 	{ "name": "X_R_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "we0" }} , 
 	{ "name": "X_R_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "d0" }} , 
 	{ "name": "X_R_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "q0" }} , 
 	{ "name": "X_R_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_R", "role": "address1" }} , 
 	{ "name": "X_R_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "ce1" }} , 
 	{ "name": "X_R_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_R", "role": "we1" }} , 
 	{ "name": "X_R_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "d1" }} , 
 	{ "name": "X_R_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_R", "role": "q1" }} , 
 	{ "name": "X_I_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_I", "role": "address0" }} , 
 	{ "name": "X_I_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "ce0" }} , 
 	{ "name": "X_I_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "we0" }} , 
 	{ "name": "X_I_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "d0" }} , 
 	{ "name": "X_I_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "q0" }} , 
 	{ "name": "X_I_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "X_I", "role": "address1" }} , 
 	{ "name": "X_I_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "ce1" }} , 
 	{ "name": "X_I_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "X_I", "role": "we1" }} , 
 	{ "name": "X_I_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "d1" }} , 
 	{ "name": "X_I_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "X_I", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "X_I", "Type" : "Memory", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	bit_reverse {
		X_R {Type IO LastRead 3 FirstWrite 3}
		X_I {Type IO LastRead 3 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "13313", "Max" : "14337"}
	, {"Name" : "Interval", "Min" : "13313", "Max" : "14337"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	X_R { ap_memory {  { X_R_address0 mem_address 1 10 }  { X_R_ce0 mem_ce 1 1 }  { X_R_we0 mem_we 1 1 }  { X_R_d0 mem_din 1 32 }  { X_R_q0 mem_dout 0 32 }  { X_R_address1 MemPortADDR2 1 10 }  { X_R_ce1 MemPortCE2 1 1 }  { X_R_we1 MemPortWE2 1 1 }  { X_R_d1 MemPortDIN2 1 32 }  { X_R_q1 MemPortDOUT2 0 32 } } }
	X_I { ap_memory {  { X_I_address0 mem_address 1 10 }  { X_I_ce0 mem_ce 1 1 }  { X_I_we0 mem_we 1 1 }  { X_I_d0 mem_din 1 32 }  { X_I_q0 mem_dout 0 32 }  { X_I_address1 MemPortADDR2 1 10 }  { X_I_ce1 MemPortCE2 1 1 }  { X_I_we1 MemPortWE2 1 1 }  { X_I_d1 MemPortDIN2 1 32 }  { X_I_q1 MemPortDOUT2 0 32 } } }
}
