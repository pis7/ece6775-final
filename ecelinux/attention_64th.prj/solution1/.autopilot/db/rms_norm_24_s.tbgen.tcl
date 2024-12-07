set moduleName rms_norm_24_s
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
set C_modelName {rms_norm<24>}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_0_V int 38 regular {array 24 { 2 3 } 1 1 }  }
	{ weight_V int 38 regular {array 24 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READWRITE"} , 
 	{ "Name" : "weight_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_0_V_address0 sc_out sc_lv 5 signal 0 } 
	{ input_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_0_V_we0 sc_out sc_logic 1 signal 0 } 
	{ input_0_V_d0 sc_out sc_lv 38 signal 0 } 
	{ input_0_V_q0 sc_in sc_lv 38 signal 0 } 
	{ weight_V_address0 sc_out sc_lv 5 signal 1 } 
	{ weight_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ weight_V_q0 sc_in sc_lv 38 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "input_0_V", "role": "address0" }} , 
 	{ "name": "input_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_0_V", "role": "ce0" }} , 
 	{ "name": "input_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_0_V", "role": "we0" }} , 
 	{ "name": "input_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_0_V", "role": "d0" }} , 
 	{ "name": "input_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "input_0_V", "role": "q0" }} , 
 	{ "name": "weight_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_V", "role": "address0" }} , 
 	{ "name": "weight_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ce0" }} , 
 	{ "name": "weight_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "weight_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "rms_norm_24_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "383", "EstimateLatencyMax" : "383",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sqrt_fixed_40_20_s_fu_129", "Parent" : "0",
		"CDFG" : "sqrt_fixed_40_20_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "20", "EstimateLatencyMin" : "20", "EstimateLatencyMax" : "20",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_udiv_41s_30nsbkb_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mul_76s_38s_7cud_U3", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	rms_norm_24_s {
		input_0_V {Type IO LastRead 72 FirstWrite 79}
		weight_V {Type I LastRead 71 FirstWrite -1}}
	sqrt_fixed_40_20_s {
		x_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "383", "Max" : "383"}
	, {"Name" : "Interval", "Min" : "383", "Max" : "383"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_0_V { ap_memory {  { input_0_V_address0 mem_address 1 5 }  { input_0_V_ce0 mem_ce 1 1 }  { input_0_V_we0 mem_we 1 1 }  { input_0_V_d0 mem_din 1 38 }  { input_0_V_q0 mem_dout 0 38 } } }
	weight_V { ap_memory {  { weight_V_address0 mem_address 1 5 }  { weight_V_ce0 mem_ce 1 1 }  { weight_V_q0 mem_dout 0 38 } } }
}
