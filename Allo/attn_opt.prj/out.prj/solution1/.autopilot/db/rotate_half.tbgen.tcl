set moduleName rotate_half
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
set C_modelName {rotate_half}
set C_modelType { void 0 }
set C_modelArgList {
	{ v152_0 float 32 regular {array 1536 { 1 1 } 1 1 }  }
	{ v153_0 float 32 regular {array 1536 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v152_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v153_0", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v152_0_address0 sc_out sc_lv 11 signal 0 } 
	{ v152_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ v152_0_q0 sc_in sc_lv 32 signal 0 } 
	{ v152_0_address1 sc_out sc_lv 11 signal 0 } 
	{ v152_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ v152_0_q1 sc_in sc_lv 32 signal 0 } 
	{ v153_0_address0 sc_out sc_lv 11 signal 1 } 
	{ v153_0_ce0 sc_out sc_logic 1 signal 1 } 
	{ v153_0_we0 sc_out sc_logic 1 signal 1 } 
	{ v153_0_d0 sc_out sc_lv 32 signal 1 } 
	{ v153_0_address1 sc_out sc_lv 11 signal 1 } 
	{ v153_0_ce1 sc_out sc_logic 1 signal 1 } 
	{ v153_0_we1 sc_out sc_logic 1 signal 1 } 
	{ v153_0_d1 sc_out sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v152_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v152_0", "role": "address0" }} , 
 	{ "name": "v152_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v152_0", "role": "ce0" }} , 
 	{ "name": "v152_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v152_0", "role": "q0" }} , 
 	{ "name": "v152_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v152_0", "role": "address1" }} , 
 	{ "name": "v152_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v152_0", "role": "ce1" }} , 
 	{ "name": "v152_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v152_0", "role": "q1" }} , 
 	{ "name": "v153_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v153_0", "role": "address0" }} , 
 	{ "name": "v153_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v153_0", "role": "ce0" }} , 
 	{ "name": "v153_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v153_0", "role": "we0" }} , 
 	{ "name": "v153_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v153_0", "role": "d0" }} , 
 	{ "name": "v153_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v153_0", "role": "address1" }} , 
 	{ "name": "v153_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v153_0", "role": "ce1" }} , 
 	{ "name": "v153_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v153_0", "role": "we1" }} , 
 	{ "name": "v153_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v153_0", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "rotate_half",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1569", "EstimateLatencyMax" : "1569",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v152_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v153_0", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	rotate_half {
		v152_0 {Type I LastRead 3 FirstWrite -1}
		v153_0 {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1569", "Max" : "1569"}
	, {"Name" : "Interval", "Min" : "1569", "Max" : "1569"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v152_0 { ap_memory {  { v152_0_address0 mem_address 1 11 }  { v152_0_ce0 mem_ce 1 1 }  { v152_0_q0 mem_dout 0 32 }  { v152_0_address1 MemPortADDR2 1 11 }  { v152_0_ce1 MemPortCE2 1 1 }  { v152_0_q1 MemPortDOUT2 0 32 } } }
	v153_0 { ap_memory {  { v153_0_address0 mem_address 1 11 }  { v153_0_ce0 mem_ce 1 1 }  { v153_0_we0 mem_we 1 1 }  { v153_0_d0 mem_din 1 32 }  { v153_0_address1 MemPortADDR2 1 11 }  { v153_0_ce1 MemPortCE2 1 1 }  { v153_0_we1 MemPortWE2 1 1 }  { v153_0_d1 MemPortDIN2 1 32 } } }
}