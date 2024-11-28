set moduleName GEMM_3D_float2
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
set C_modelName {GEMM_3D_float2}
set C_modelType { void 0 }
set C_modelArgList {
	{ v246_0 float 32 regular {array 96 { 1 3 } 1 1 }  }
	{ v247 float 32 regular {array 9216 { 1 3 } 1 1 }  }
	{ v248_0 float 32 regular {array 1536 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v246_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v247", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v248_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 17
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v246_0_address0 sc_out sc_lv 7 signal 0 } 
	{ v246_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ v246_0_q0 sc_in sc_lv 32 signal 0 } 
	{ v247_address0 sc_out sc_lv 14 signal 1 } 
	{ v247_ce0 sc_out sc_logic 1 signal 1 } 
	{ v247_q0 sc_in sc_lv 32 signal 1 } 
	{ v248_0_address0 sc_out sc_lv 11 signal 2 } 
	{ v248_0_ce0 sc_out sc_logic 1 signal 2 } 
	{ v248_0_we0 sc_out sc_logic 1 signal 2 } 
	{ v248_0_d0 sc_out sc_lv 32 signal 2 } 
	{ v248_0_q0 sc_in sc_lv 32 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v246_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "v246_0", "role": "address0" }} , 
 	{ "name": "v246_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v246_0", "role": "ce0" }} , 
 	{ "name": "v246_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v246_0", "role": "q0" }} , 
 	{ "name": "v247_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "v247", "role": "address0" }} , 
 	{ "name": "v247_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v247", "role": "ce0" }} , 
 	{ "name": "v247_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v247", "role": "q0" }} , 
 	{ "name": "v248_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v248_0", "role": "address0" }} , 
 	{ "name": "v248_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v248_0", "role": "ce0" }} , 
 	{ "name": "v248_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v248_0", "role": "we0" }} , 
 	{ "name": "v248_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v248_0", "role": "d0" }} , 
 	{ "name": "v248_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v248_0", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "GEMM_3D_float2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "122913", "EstimateLatencyMax" : "122913",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v246_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v247", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v248_0", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fadd_32pcA_U83", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fmul_32qcK_U84", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	GEMM_3D_float2 {
		v246_0 {Type I LastRead 4 FirstWrite -1}
		v247 {Type I LastRead 4 FirstWrite -1}
		v248_0 {Type IO LastRead 8 FirstWrite 15}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "122913", "Max" : "122913"}
	, {"Name" : "Interval", "Min" : "122913", "Max" : "122913"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v246_0 { ap_memory {  { v246_0_address0 mem_address 1 7 }  { v246_0_ce0 mem_ce 1 1 }  { v246_0_q0 mem_dout 0 32 } } }
	v247 { ap_memory {  { v247_address0 mem_address 1 14 }  { v247_ce0 mem_ce 1 1 }  { v247_q0 mem_dout 0 32 } } }
	v248_0 { ap_memory {  { v248_0_address0 mem_address 1 11 }  { v248_0_ce0 mem_ce 1 1 }  { v248_0_we0 mem_we 1 1 }  { v248_0_d0 mem_din 1 32 }  { v248_0_q0 mem_dout 0 32 } } }
}
