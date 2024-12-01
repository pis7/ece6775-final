set moduleName init_3d_mem
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
set C_modelName {init_3d_mem}
set C_modelType { void 0 }
set C_modelArgList {
	{ mem_0_0_V int 8 regular {array 96 { 0 3 } 0 1 }  }
	{ mem_1_0_V int 8 regular {array 96 { 0 3 } 0 1 }  }
	{ mem_2_0_V int 8 regular {array 96 { 0 3 } 0 1 }  }
	{ mem_3_0_V int 8 regular {array 96 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "mem_0_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "mem_1_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "mem_2_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "mem_3_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 22
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ mem_0_0_V_address0 sc_out sc_lv 7 signal 0 } 
	{ mem_0_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ mem_0_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ mem_0_0_V_d0 sc_out sc_lv 8 signal 0 } 
	{ mem_1_0_V_address0 sc_out sc_lv 7 signal 1 } 
	{ mem_1_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ mem_1_0_V_we0 sc_out sc_logic 1 signal 1 } 
	{ mem_1_0_V_d0 sc_out sc_lv 8 signal 1 } 
	{ mem_2_0_V_address0 sc_out sc_lv 7 signal 2 } 
	{ mem_2_0_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ mem_2_0_V_we0 sc_out sc_logic 1 signal 2 } 
	{ mem_2_0_V_d0 sc_out sc_lv 8 signal 2 } 
	{ mem_3_0_V_address0 sc_out sc_lv 7 signal 3 } 
	{ mem_3_0_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ mem_3_0_V_we0 sc_out sc_logic 1 signal 3 } 
	{ mem_3_0_V_d0 sc_out sc_lv 8 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "mem_0_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mem_0_0_V", "role": "address0" }} , 
 	{ "name": "mem_0_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mem_0_0_V", "role": "ce0" }} , 
 	{ "name": "mem_0_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mem_0_0_V", "role": "we0" }} , 
 	{ "name": "mem_0_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mem_0_0_V", "role": "d0" }} , 
 	{ "name": "mem_1_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mem_1_0_V", "role": "address0" }} , 
 	{ "name": "mem_1_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mem_1_0_V", "role": "ce0" }} , 
 	{ "name": "mem_1_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mem_1_0_V", "role": "we0" }} , 
 	{ "name": "mem_1_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mem_1_0_V", "role": "d0" }} , 
 	{ "name": "mem_2_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mem_2_0_V", "role": "address0" }} , 
 	{ "name": "mem_2_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mem_2_0_V", "role": "ce0" }} , 
 	{ "name": "mem_2_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mem_2_0_V", "role": "we0" }} , 
 	{ "name": "mem_2_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mem_2_0_V", "role": "d0" }} , 
 	{ "name": "mem_3_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "mem_3_0_V", "role": "address0" }} , 
 	{ "name": "mem_3_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mem_3_0_V", "role": "ce0" }} , 
 	{ "name": "mem_3_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mem_3_0_V", "role": "we0" }} , 
 	{ "name": "mem_3_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "mem_3_0_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "init_3d_mem",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "577", "EstimateLatencyMax" : "577",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "mem_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "mem_3_0_V", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	init_3d_mem {
		mem_0_0_V {Type O LastRead -1 FirstWrite 2}
		mem_1_0_V {Type O LastRead -1 FirstWrite 2}
		mem_2_0_V {Type O LastRead -1 FirstWrite 2}
		mem_3_0_V {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "577", "Max" : "577"}
	, {"Name" : "Interval", "Min" : "577", "Max" : "577"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	mem_0_0_V { ap_memory {  { mem_0_0_V_address0 mem_address 1 7 }  { mem_0_0_V_ce0 mem_ce 1 1 }  { mem_0_0_V_we0 mem_we 1 1 }  { mem_0_0_V_d0 mem_din 1 8 } } }
	mem_1_0_V { ap_memory {  { mem_1_0_V_address0 mem_address 1 7 }  { mem_1_0_V_ce0 mem_ce 1 1 }  { mem_1_0_V_we0 mem_we 1 1 }  { mem_1_0_V_d0 mem_din 1 8 } } }
	mem_2_0_V { ap_memory {  { mem_2_0_V_address0 mem_address 1 7 }  { mem_2_0_V_ce0 mem_ce 1 1 }  { mem_2_0_V_we0 mem_we 1 1 }  { mem_2_0_V_d0 mem_din 1 8 } } }
	mem_3_0_V { ap_memory {  { mem_3_0_V_address0 mem_address 1 7 }  { mem_3_0_V_ce0 mem_ce 1 1 }  { mem_3_0_V_we0 mem_we 1 1 }  { mem_3_0_V_d0 mem_din 1 8 } } }
}
