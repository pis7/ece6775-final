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
	{ v78_0_0_0 int 8 regular {array 192 { 1 3 } 1 1 }  }
	{ v78_0_0_1 int 8 regular {array 192 { 1 3 } 1 1 }  }
	{ v78_0_0_2 int 8 regular {array 192 { 1 3 } 1 1 }  }
	{ v78_0_0_3 int 8 regular {array 192 { 1 3 } 1 1 }  }
	{ v78_1_0_0 int 8 regular {array 192 { 1 3 } 1 1 }  }
	{ v78_1_0_1 int 8 regular {array 192 { 1 3 } 1 1 }  }
	{ v78_1_0_2 int 8 regular {array 192 { 1 3 } 1 1 }  }
	{ v78_1_0_3 int 8 regular {array 192 { 1 3 } 1 1 }  }
	{ v79_0_V_read int 32 regular  }
	{ v80_0 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v80_1 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v81_V int 32 regular  }
	{ v82 float 32 regular {array 1536 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v78_0_0_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v78_0_0_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v78_0_0_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v78_0_0_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v78_1_0_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v78_1_0_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v78_1_0_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v78_1_0_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v79_0_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v80_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v80_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v81_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v82", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 42
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v78_0_0_0_address0 sc_out sc_lv 8 signal 0 } 
	{ v78_0_0_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ v78_0_0_0_q0 sc_in sc_lv 8 signal 0 } 
	{ v78_0_0_1_address0 sc_out sc_lv 8 signal 1 } 
	{ v78_0_0_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ v78_0_0_1_q0 sc_in sc_lv 8 signal 1 } 
	{ v78_0_0_2_address0 sc_out sc_lv 8 signal 2 } 
	{ v78_0_0_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ v78_0_0_2_q0 sc_in sc_lv 8 signal 2 } 
	{ v78_0_0_3_address0 sc_out sc_lv 8 signal 3 } 
	{ v78_0_0_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ v78_0_0_3_q0 sc_in sc_lv 8 signal 3 } 
	{ v78_1_0_0_address0 sc_out sc_lv 8 signal 4 } 
	{ v78_1_0_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ v78_1_0_0_q0 sc_in sc_lv 8 signal 4 } 
	{ v78_1_0_1_address0 sc_out sc_lv 8 signal 5 } 
	{ v78_1_0_1_ce0 sc_out sc_logic 1 signal 5 } 
	{ v78_1_0_1_q0 sc_in sc_lv 8 signal 5 } 
	{ v78_1_0_2_address0 sc_out sc_lv 8 signal 6 } 
	{ v78_1_0_2_ce0 sc_out sc_logic 1 signal 6 } 
	{ v78_1_0_2_q0 sc_in sc_lv 8 signal 6 } 
	{ v78_1_0_3_address0 sc_out sc_lv 8 signal 7 } 
	{ v78_1_0_3_ce0 sc_out sc_logic 1 signal 7 } 
	{ v78_1_0_3_q0 sc_in sc_lv 8 signal 7 } 
	{ v79_0_V_read sc_in sc_lv 32 signal 8 } 
	{ v80_0_address0 sc_out sc_lv 19 signal 9 } 
	{ v80_0_ce0 sc_out sc_logic 1 signal 9 } 
	{ v80_0_q0 sc_in sc_lv 8 signal 9 } 
	{ v80_1_address0 sc_out sc_lv 19 signal 10 } 
	{ v80_1_ce0 sc_out sc_logic 1 signal 10 } 
	{ v80_1_q0 sc_in sc_lv 8 signal 10 } 
	{ v81_V sc_in sc_lv 32 signal 11 } 
	{ v82_address0 sc_out sc_lv 11 signal 12 } 
	{ v82_ce0 sc_out sc_logic 1 signal 12 } 
	{ v82_we0 sc_out sc_logic 1 signal 12 } 
	{ v82_d0 sc_out sc_lv 32 signal 12 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v78_0_0_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_0_0_0", "role": "address0" }} , 
 	{ "name": "v78_0_0_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v78_0_0_0", "role": "ce0" }} , 
 	{ "name": "v78_0_0_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_0_0_0", "role": "q0" }} , 
 	{ "name": "v78_0_0_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_0_0_1", "role": "address0" }} , 
 	{ "name": "v78_0_0_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v78_0_0_1", "role": "ce0" }} , 
 	{ "name": "v78_0_0_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_0_0_1", "role": "q0" }} , 
 	{ "name": "v78_0_0_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_0_0_2", "role": "address0" }} , 
 	{ "name": "v78_0_0_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v78_0_0_2", "role": "ce0" }} , 
 	{ "name": "v78_0_0_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_0_0_2", "role": "q0" }} , 
 	{ "name": "v78_0_0_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_0_0_3", "role": "address0" }} , 
 	{ "name": "v78_0_0_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v78_0_0_3", "role": "ce0" }} , 
 	{ "name": "v78_0_0_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_0_0_3", "role": "q0" }} , 
 	{ "name": "v78_1_0_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_1_0_0", "role": "address0" }} , 
 	{ "name": "v78_1_0_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v78_1_0_0", "role": "ce0" }} , 
 	{ "name": "v78_1_0_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_1_0_0", "role": "q0" }} , 
 	{ "name": "v78_1_0_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_1_0_1", "role": "address0" }} , 
 	{ "name": "v78_1_0_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v78_1_0_1", "role": "ce0" }} , 
 	{ "name": "v78_1_0_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_1_0_1", "role": "q0" }} , 
 	{ "name": "v78_1_0_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_1_0_2", "role": "address0" }} , 
 	{ "name": "v78_1_0_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v78_1_0_2", "role": "ce0" }} , 
 	{ "name": "v78_1_0_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_1_0_2", "role": "q0" }} , 
 	{ "name": "v78_1_0_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_1_0_3", "role": "address0" }} , 
 	{ "name": "v78_1_0_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v78_1_0_3", "role": "ce0" }} , 
 	{ "name": "v78_1_0_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v78_1_0_3", "role": "q0" }} , 
 	{ "name": "v79_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v79_0_V_read", "role": "default" }} , 
 	{ "name": "v80_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v80_0", "role": "address0" }} , 
 	{ "name": "v80_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v80_0", "role": "ce0" }} , 
 	{ "name": "v80_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v80_0", "role": "q0" }} , 
 	{ "name": "v80_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v80_1", "role": "address0" }} , 
 	{ "name": "v80_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v80_1", "role": "ce0" }} , 
 	{ "name": "v80_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v80_1", "role": "q0" }} , 
 	{ "name": "v81_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v81_V", "role": "default" }} , 
 	{ "name": "v82_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v82", "role": "address0" }} , 
 	{ "name": "v82_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v82", "role": "ce0" }} , 
 	{ "name": "v82_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v82", "role": "we0" }} , 
 	{ "name": "v82_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v82", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "linear_forward_no_mu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "295024", "EstimateLatencyMax" : "295024",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v78_0_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v78_0_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v78_0_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v78_0_0_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v78_1_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v78_1_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v78_1_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v78_1_0_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v80_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v80_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v81_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "v82", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_mul_52stde_U40", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_sdiv_97udo_U41", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	linear_forward_no_mu {
		v78_0_0_0 {Type I LastRead 4 FirstWrite -1}
		v78_0_0_1 {Type I LastRead 4 FirstWrite -1}
		v78_0_0_2 {Type I LastRead 4 FirstWrite -1}
		v78_0_0_3 {Type I LastRead 4 FirstWrite -1}
		v78_1_0_0 {Type I LastRead 4 FirstWrite -1}
		v78_1_0_1 {Type I LastRead 4 FirstWrite -1}
		v78_1_0_2 {Type I LastRead 4 FirstWrite -1}
		v78_1_0_3 {Type I LastRead 4 FirstWrite -1}
		v79_0_V_read {Type I LastRead 0 FirstWrite -1}
		v80_0 {Type I LastRead 3 FirstWrite -1}
		v80_1 {Type I LastRead 3 FirstWrite -1}
		v81_V {Type I LastRead 0 FirstWrite -1}
		v82 {Type O LastRead -1 FirstWrite 112}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "295024", "Max" : "295024"}
	, {"Name" : "Interval", "Min" : "295024", "Max" : "295024"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	v78_0_0_0 { ap_memory {  { v78_0_0_0_address0 mem_address 1 8 }  { v78_0_0_0_ce0 mem_ce 1 1 }  { v78_0_0_0_q0 mem_dout 0 8 } } }
	v78_0_0_1 { ap_memory {  { v78_0_0_1_address0 mem_address 1 8 }  { v78_0_0_1_ce0 mem_ce 1 1 }  { v78_0_0_1_q0 mem_dout 0 8 } } }
	v78_0_0_2 { ap_memory {  { v78_0_0_2_address0 mem_address 1 8 }  { v78_0_0_2_ce0 mem_ce 1 1 }  { v78_0_0_2_q0 mem_dout 0 8 } } }
	v78_0_0_3 { ap_memory {  { v78_0_0_3_address0 mem_address 1 8 }  { v78_0_0_3_ce0 mem_ce 1 1 }  { v78_0_0_3_q0 mem_dout 0 8 } } }
	v78_1_0_0 { ap_memory {  { v78_1_0_0_address0 mem_address 1 8 }  { v78_1_0_0_ce0 mem_ce 1 1 }  { v78_1_0_0_q0 mem_dout 0 8 } } }
	v78_1_0_1 { ap_memory {  { v78_1_0_1_address0 mem_address 1 8 }  { v78_1_0_1_ce0 mem_ce 1 1 }  { v78_1_0_1_q0 mem_dout 0 8 } } }
	v78_1_0_2 { ap_memory {  { v78_1_0_2_address0 mem_address 1 8 }  { v78_1_0_2_ce0 mem_ce 1 1 }  { v78_1_0_2_q0 mem_dout 0 8 } } }
	v78_1_0_3 { ap_memory {  { v78_1_0_3_address0 mem_address 1 8 }  { v78_1_0_3_ce0 mem_ce 1 1 }  { v78_1_0_3_q0 mem_dout 0 8 } } }
	v79_0_V_read { ap_none {  { v79_0_V_read in_data 0 32 } } }
	v80_0 { ap_memory {  { v80_0_address0 mem_address 1 19 }  { v80_0_ce0 mem_ce 1 1 }  { v80_0_q0 mem_dout 0 8 } } }
	v80_1 { ap_memory {  { v80_1_address0 mem_address 1 19 }  { v80_1_ce0 mem_ce 1 1 }  { v80_1_q0 mem_dout 0 8 } } }
	v81_V { ap_none {  { v81_V in_data 0 32 } } }
	v82 { ap_memory {  { v82_address0 mem_address 1 11 }  { v82_ce0 mem_ce 1 1 }  { v82_we0 mem_we 1 1 }  { v82_d0 mem_din 1 32 } } }
}
