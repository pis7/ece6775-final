set moduleName quantize_activation
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
set C_modelName {quantize_activation}
set C_modelType { int 32 }
set C_modelArgList {
	{ v22_0_V int 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v24_0_0 int 8 regular {array 384 { 0 3 } 0 1 }  }
	{ v24_1_0 int 8 regular {array 384 { 0 3 } 0 1 }  }
	{ v24_2_0 int 8 regular {array 384 { 0 3 } 0 1 }  }
	{ v24_3_0 int 8 regular {array 384 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v22_0_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v24_0_0", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "v24_1_0", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "v24_2_0", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "v24_3_0", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v22_0_V_address0 sc_out sc_lv 11 signal 0 } 
	{ v22_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ v22_0_V_q0 sc_in sc_lv 32 signal 0 } 
	{ v24_0_0_address0 sc_out sc_lv 9 signal 1 } 
	{ v24_0_0_ce0 sc_out sc_logic 1 signal 1 } 
	{ v24_0_0_we0 sc_out sc_logic 1 signal 1 } 
	{ v24_0_0_d0 sc_out sc_lv 8 signal 1 } 
	{ v24_1_0_address0 sc_out sc_lv 9 signal 2 } 
	{ v24_1_0_ce0 sc_out sc_logic 1 signal 2 } 
	{ v24_1_0_we0 sc_out sc_logic 1 signal 2 } 
	{ v24_1_0_d0 sc_out sc_lv 8 signal 2 } 
	{ v24_2_0_address0 sc_out sc_lv 9 signal 3 } 
	{ v24_2_0_ce0 sc_out sc_logic 1 signal 3 } 
	{ v24_2_0_we0 sc_out sc_logic 1 signal 3 } 
	{ v24_2_0_d0 sc_out sc_lv 8 signal 3 } 
	{ v24_3_0_address0 sc_out sc_lv 9 signal 4 } 
	{ v24_3_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ v24_3_0_we0 sc_out sc_logic 1 signal 4 } 
	{ v24_3_0_d0 sc_out sc_lv 8 signal 4 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v22_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v22_0_V", "role": "address0" }} , 
 	{ "name": "v22_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v22_0_V", "role": "ce0" }} , 
 	{ "name": "v22_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v22_0_V", "role": "q0" }} , 
 	{ "name": "v24_0_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v24_0_0", "role": "address0" }} , 
 	{ "name": "v24_0_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v24_0_0", "role": "ce0" }} , 
 	{ "name": "v24_0_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v24_0_0", "role": "we0" }} , 
 	{ "name": "v24_0_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v24_0_0", "role": "d0" }} , 
 	{ "name": "v24_1_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v24_1_0", "role": "address0" }} , 
 	{ "name": "v24_1_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v24_1_0", "role": "ce0" }} , 
 	{ "name": "v24_1_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v24_1_0", "role": "we0" }} , 
 	{ "name": "v24_1_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v24_1_0", "role": "d0" }} , 
 	{ "name": "v24_2_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v24_2_0", "role": "address0" }} , 
 	{ "name": "v24_2_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v24_2_0", "role": "ce0" }} , 
 	{ "name": "v24_2_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v24_2_0", "role": "we0" }} , 
 	{ "name": "v24_2_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v24_2_0", "role": "d0" }} , 
 	{ "name": "v24_3_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v24_3_0", "role": "address0" }} , 
 	{ "name": "v24_3_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v24_3_0", "role": "ce0" }} , 
 	{ "name": "v24_3_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v24_3_0", "role": "we0" }} , 
 	{ "name": "v24_3_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v24_3_0", "role": "d0" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "quantize_activation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "12325", "EstimateLatencyMax" : "12325",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v22_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v24_0_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v24_1_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v24_2_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v24_3_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_udiv_32xdS_U42", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	quantize_activation {
		v22_0_V {Type I LastRead 37 FirstWrite -1}
		v24_0_0 {Type O LastRead -1 FirstWrite 41}
		v24_1_0 {Type O LastRead -1 FirstWrite 41}
		v24_2_0 {Type O LastRead -1 FirstWrite 41}
		v24_3_0 {Type O LastRead -1 FirstWrite 41}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "12325", "Max" : "12325"}
	, {"Name" : "Interval", "Min" : "12325", "Max" : "12325"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v22_0_V { ap_memory {  { v22_0_V_address0 mem_address 1 11 }  { v22_0_V_ce0 mem_ce 1 1 }  { v22_0_V_q0 mem_dout 0 32 } } }
	v24_0_0 { ap_memory {  { v24_0_0_address0 mem_address 1 9 }  { v24_0_0_ce0 mem_ce 1 1 }  { v24_0_0_we0 mem_we 1 1 }  { v24_0_0_d0 mem_din 1 8 } } }
	v24_1_0 { ap_memory {  { v24_1_0_address0 mem_address 1 9 }  { v24_1_0_ce0 mem_ce 1 1 }  { v24_1_0_we0 mem_we 1 1 }  { v24_1_0_d0 mem_din 1 8 } } }
	v24_2_0 { ap_memory {  { v24_2_0_address0 mem_address 1 9 }  { v24_2_0_ce0 mem_ce 1 1 }  { v24_2_0_we0 mem_we 1 1 }  { v24_2_0_d0 mem_din 1 8 } } }
	v24_3_0 { ap_memory {  { v24_3_0_address0 mem_address 1 9 }  { v24_3_0_ce0 mem_ce 1 1 }  { v24_3_0_we0 mem_we 1 1 }  { v24_3_0_d0 mem_din 1 8 } } }
}
