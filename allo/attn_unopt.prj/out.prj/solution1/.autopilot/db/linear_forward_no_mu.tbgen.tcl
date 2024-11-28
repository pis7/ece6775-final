set moduleName linear_forward_no_mu
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
set C_modelName {linear_forward_no_mu}
set C_modelType { void 0 }
set C_modelArgList {
	{ v77_0 int 8 regular {array 1536 { 1 3 } 1 1 }  }
	{ p_read float 32 regular  }
	{ v79 int 8 regular {array 589824 { 1 3 } 1 1 }  }
	{ v80 float 32 regular  }
	{ v81 float 32 regular {array 1536 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v77_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "p_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v79", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v80", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v81", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v77_0_address0 sc_out sc_lv 11 signal 0 } 
	{ v77_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ v77_0_q0 sc_in sc_lv 8 signal 0 } 
	{ p_read sc_in sc_lv 32 signal 1 } 
	{ v79_address0 sc_out sc_lv 20 signal 2 } 
	{ v79_ce0 sc_out sc_logic 1 signal 2 } 
	{ v79_q0 sc_in sc_lv 8 signal 2 } 
	{ v80 sc_in sc_lv 32 signal 3 } 
	{ v81_address0 sc_out sc_lv 11 signal 4 } 
	{ v81_ce0 sc_out sc_logic 1 signal 4 } 
	{ v81_we0 sc_out sc_logic 1 signal 4 } 
	{ v81_d0 sc_out sc_lv 32 signal 4 } 
	{ v81_q0 sc_in sc_lv 32 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v77_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v77_0", "role": "address0" }} , 
 	{ "name": "v77_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v77_0", "role": "ce0" }} , 
 	{ "name": "v77_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v77_0", "role": "q0" }} , 
 	{ "name": "p_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read", "role": "default" }} , 
 	{ "name": "v79_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v79", "role": "address0" }} , 
 	{ "name": "v79_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v79", "role": "ce0" }} , 
 	{ "name": "v79_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v79", "role": "q0" }} , 
 	{ "name": "v80", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v80", "role": "default" }} , 
 	{ "name": "v81_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v81", "role": "address0" }} , 
 	{ "name": "v81_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v81", "role": "ce0" }} , 
 	{ "name": "v81_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v81", "role": "we0" }} , 
 	{ "name": "v81_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v81", "role": "d0" }} , 
 	{ "name": "v81_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v81", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "linear_forward_no_mu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6518788", "EstimateLatencyMax" : "34830340",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v77_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v80", "Type" : "None", "Direction" : "I"},
			{"Name" : "v81", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_faddfsutde_U40", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fmul_32qcK_U41", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fdiv_32rcU_U42", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_sitofp_udo_U43", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	linear_forward_no_mu {
		v77_0 {Type I LastRead 8 FirstWrite -1}
		p_read {Type I LastRead 0 FirstWrite -1}
		v79 {Type I LastRead 5 FirstWrite -1}
		v80 {Type I LastRead 0 FirstWrite -1}
		v81 {Type IO LastRead 14 FirstWrite 20}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6518788", "Max" : "34830340"}
	, {"Name" : "Interval", "Min" : "6518788", "Max" : "34830340"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v77_0 { ap_memory {  { v77_0_address0 mem_address 1 11 }  { v77_0_ce0 mem_ce 1 1 }  { v77_0_q0 mem_dout 0 8 } } }
	p_read { ap_none {  { p_read in_data 0 32 } } }
	v79 { ap_memory {  { v79_address0 mem_address 1 20 }  { v79_ce0 mem_ce 1 1 }  { v79_q0 mem_dout 0 8 } } }
	v80 { ap_none {  { v80 in_data 0 32 } } }
	v81 { ap_memory {  { v81_address0 mem_address 1 11 }  { v81_ce0 mem_ce 1 1 }  { v81_we0 mem_we 1 1 }  { v81_d0 mem_din 1 32 }  { v81_q0 mem_dout 0 32 } } }
}
