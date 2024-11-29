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
	{ cache_in_V int 40 regular {array 1920 { 1 3 } 1 1 }  }
	{ cache_out_V int 40 regular {array 2304 { 0 3 } 0 1 }  }
	{ update_0_V int 40 regular {array 384 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "cache_in_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "cache_out_V", "interface" : "memory", "bitwidth" : 40, "direction" : "WRITEONLY"} , 
 	{ "Name" : "update_0_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ cache_in_V_address0 sc_out sc_lv 11 signal 0 } 
	{ cache_in_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ cache_in_V_q0 sc_in sc_lv 40 signal 0 } 
	{ cache_out_V_address0 sc_out sc_lv 12 signal 1 } 
	{ cache_out_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ cache_out_V_we0 sc_out sc_logic 1 signal 1 } 
	{ cache_out_V_d0 sc_out sc_lv 40 signal 1 } 
	{ update_0_V_address0 sc_out sc_lv 9 signal 2 } 
	{ update_0_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ update_0_V_q0 sc_in sc_lv 40 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "cache_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "cache_in_V", "role": "address0" }} , 
 	{ "name": "cache_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_in_V", "role": "ce0" }} , 
 	{ "name": "cache_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_in_V", "role": "q0" }} , 
 	{ "name": "cache_out_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "cache_out_V", "role": "address0" }} , 
 	{ "name": "cache_out_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_V", "role": "ce0" }} , 
 	{ "name": "cache_out_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_V", "role": "we0" }} , 
 	{ "name": "cache_out_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_out_V", "role": "d0" }} , 
 	{ "name": "update_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "update_0_V", "role": "address0" }} , 
 	{ "name": "update_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "update_0_V", "role": "ce0" }} , 
 	{ "name": "update_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "update_0_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "cache_update",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4721", "EstimateLatencyMax" : "4721",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "cache_in_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cache_out_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "update_0_V", "Type" : "Memory", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	cache_update {
		cache_in_V {Type I LastRead 3 FirstWrite -1}
		cache_out_V {Type O LastRead -1 FirstWrite 4}
		update_0_V {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4721", "Max" : "4721"}
	, {"Name" : "Interval", "Min" : "4721", "Max" : "4721"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	cache_in_V { ap_memory {  { cache_in_V_address0 mem_address 1 11 }  { cache_in_V_ce0 mem_ce 1 1 }  { cache_in_V_q0 mem_dout 0 40 } } }
	cache_out_V { ap_memory {  { cache_out_V_address0 mem_address 1 12 }  { cache_out_V_ce0 mem_ce 1 1 }  { cache_out_V_we0 mem_we 1 1 }  { cache_out_V_d0 mem_din 1 40 } } }
	update_0_V { ap_memory {  { update_0_V_address0 mem_address 1 9 }  { update_0_V_ce0 mem_ce 1 1 }  { update_0_V_q0 mem_dout 0 40 } } }
}
