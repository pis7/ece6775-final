set moduleName cache_update
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
set C_modelName {cache_update}
set C_modelType { void 0 }
set C_modelArgList {
	{ v185_V int 32 regular {array 7680 { 1 3 } 1 1 }  }
	{ v186_0_V int 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v187_V int 32 regular {array 9216 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v185_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v186_0_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v187_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v185_V_address0 sc_out sc_lv 13 signal 0 } 
	{ v185_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ v185_V_q0 sc_in sc_lv 32 signal 0 } 
	{ v186_0_V_address0 sc_out sc_lv 11 signal 1 } 
	{ v186_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ v186_0_V_q0 sc_in sc_lv 32 signal 1 } 
	{ v187_V_address0 sc_out sc_lv 14 signal 2 } 
	{ v187_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ v187_V_we0 sc_out sc_logic 1 signal 2 } 
	{ v187_V_d0 sc_out sc_lv 32 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v185_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "v185_V", "role": "address0" }} , 
 	{ "name": "v185_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v185_V", "role": "ce0" }} , 
 	{ "name": "v185_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v185_V", "role": "q0" }} , 
 	{ "name": "v186_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v186_0_V", "role": "address0" }} , 
 	{ "name": "v186_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v186_0_V", "role": "ce0" }} , 
 	{ "name": "v186_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v186_0_V", "role": "q0" }} , 
 	{ "name": "v187_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "v187_V", "role": "address0" }} , 
 	{ "name": "v187_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v187_V", "role": "ce0" }} , 
 	{ "name": "v187_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v187_V", "role": "we0" }} , 
 	{ "name": "v187_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v187_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "cache_update",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18657", "EstimateLatencyMax" : "18657",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v185_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v186_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v187_V", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	cache_update {
		v185_V {Type I LastRead 3 FirstWrite -1}
		v186_0_V {Type I LastRead 3 FirstWrite -1}
		v187_V {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "18657", "Max" : "18657"}
	, {"Name" : "Interval", "Min" : "18657", "Max" : "18657"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v185_V { ap_memory {  { v185_V_address0 mem_address 1 13 }  { v185_V_ce0 mem_ce 1 1 }  { v185_V_q0 mem_dout 0 32 } } }
	v186_0_V { ap_memory {  { v186_0_V_address0 mem_address 1 11 }  { v186_0_V_ce0 mem_ce 1 1 }  { v186_0_V_q0 mem_dout 0 32 } } }
	v187_V { ap_memory {  { v187_V_address0 mem_address 1 14 }  { v187_V_ce0 mem_ce 1 1 }  { v187_V_we0 mem_we 1 1 }  { v187_V_d0 mem_din 1 32 } } }
}
