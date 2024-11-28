set moduleName transpose_last_two_d
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
set C_modelName {transpose_last_two_d}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_0_V int 40 regular {array 12 { 1 3 } 1 1 }  }
	{ input_1_V int 40 regular {array 12 { 1 3 } 1 1 }  }
	{ input_2_V int 40 regular {array 12 { 1 3 } 1 1 }  }
	{ input_3_V int 40 regular {array 12 { 1 3 } 1 1 }  }
	{ output_0_V int 40 regular {array 16 { 0 0 } 0 1 }  }
	{ output_1_V int 40 regular {array 16 { 0 0 } 0 1 }  }
	{ output_2_V int 40 regular {array 16 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_0_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "input_3_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "output_0_V", "interface" : "memory", "bitwidth" : 40, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_1_V", "interface" : "memory", "bitwidth" : 40, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_2_V", "interface" : "memory", "bitwidth" : 40, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 42
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_0_V_address0 sc_out sc_lv 4 signal 0 } 
	{ input_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_0_V_q0 sc_in sc_lv 40 signal 0 } 
	{ input_1_V_address0 sc_out sc_lv 4 signal 1 } 
	{ input_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_1_V_q0 sc_in sc_lv 40 signal 1 } 
	{ input_2_V_address0 sc_out sc_lv 4 signal 2 } 
	{ input_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_2_V_q0 sc_in sc_lv 40 signal 2 } 
	{ input_3_V_address0 sc_out sc_lv 4 signal 3 } 
	{ input_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ input_3_V_q0 sc_in sc_lv 40 signal 3 } 
	{ output_0_V_address0 sc_out sc_lv 4 signal 4 } 
	{ output_0_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ output_0_V_we0 sc_out sc_logic 1 signal 4 } 
	{ output_0_V_d0 sc_out sc_lv 40 signal 4 } 
	{ output_0_V_address1 sc_out sc_lv 4 signal 4 } 
	{ output_0_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ output_0_V_we1 sc_out sc_logic 1 signal 4 } 
	{ output_0_V_d1 sc_out sc_lv 40 signal 4 } 
	{ output_1_V_address0 sc_out sc_lv 4 signal 5 } 
	{ output_1_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ output_1_V_we0 sc_out sc_logic 1 signal 5 } 
	{ output_1_V_d0 sc_out sc_lv 40 signal 5 } 
	{ output_1_V_address1 sc_out sc_lv 4 signal 5 } 
	{ output_1_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ output_1_V_we1 sc_out sc_logic 1 signal 5 } 
	{ output_1_V_d1 sc_out sc_lv 40 signal 5 } 
	{ output_2_V_address0 sc_out sc_lv 4 signal 6 } 
	{ output_2_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ output_2_V_we0 sc_out sc_logic 1 signal 6 } 
	{ output_2_V_d0 sc_out sc_lv 40 signal 6 } 
	{ output_2_V_address1 sc_out sc_lv 4 signal 6 } 
	{ output_2_V_ce1 sc_out sc_logic 1 signal 6 } 
	{ output_2_V_we1 sc_out sc_logic 1 signal 6 } 
	{ output_2_V_d1 sc_out sc_lv 40 signal 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_0_V", "role": "address0" }} , 
 	{ "name": "input_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_0_V", "role": "ce0" }} , 
 	{ "name": "input_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "input_0_V", "role": "q0" }} , 
 	{ "name": "input_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_1_V", "role": "address0" }} , 
 	{ "name": "input_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_V", "role": "ce0" }} , 
 	{ "name": "input_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "input_1_V", "role": "q0" }} , 
 	{ "name": "input_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_2_V", "role": "address0" }} , 
 	{ "name": "input_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_V", "role": "ce0" }} , 
 	{ "name": "input_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "input_2_V", "role": "q0" }} , 
 	{ "name": "input_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_3_V", "role": "address0" }} , 
 	{ "name": "input_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_3_V", "role": "ce0" }} , 
 	{ "name": "input_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "input_3_V", "role": "q0" }} , 
 	{ "name": "output_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_0_V", "role": "address0" }} , 
 	{ "name": "output_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "ce0" }} , 
 	{ "name": "output_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "we0" }} , 
 	{ "name": "output_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "output_0_V", "role": "d0" }} , 
 	{ "name": "output_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_0_V", "role": "address1" }} , 
 	{ "name": "output_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "ce1" }} , 
 	{ "name": "output_0_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "we1" }} , 
 	{ "name": "output_0_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "output_0_V", "role": "d1" }} , 
 	{ "name": "output_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_1_V", "role": "address0" }} , 
 	{ "name": "output_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_1_V", "role": "ce0" }} , 
 	{ "name": "output_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_1_V", "role": "we0" }} , 
 	{ "name": "output_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "output_1_V", "role": "d0" }} , 
 	{ "name": "output_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_1_V", "role": "address1" }} , 
 	{ "name": "output_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_1_V", "role": "ce1" }} , 
 	{ "name": "output_1_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_1_V", "role": "we1" }} , 
 	{ "name": "output_1_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "output_1_V", "role": "d1" }} , 
 	{ "name": "output_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_2_V", "role": "address0" }} , 
 	{ "name": "output_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_2_V", "role": "ce0" }} , 
 	{ "name": "output_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_2_V", "role": "we0" }} , 
 	{ "name": "output_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "output_2_V", "role": "d0" }} , 
 	{ "name": "output_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "output_2_V", "role": "address1" }} , 
 	{ "name": "output_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_2_V", "role": "ce1" }} , 
 	{ "name": "output_2_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_2_V", "role": "we1" }} , 
 	{ "name": "output_2_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "output_2_V", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "transpose_last_two_d",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26", "EstimateLatencyMax" : "26",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "output_2_V", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	transpose_last_two_d {
		input_0_V {Type I LastRead 1 FirstWrite -1}
		input_1_V {Type I LastRead 1 FirstWrite -1}
		input_2_V {Type I LastRead 1 FirstWrite -1}
		input_3_V {Type I LastRead 1 FirstWrite -1}
		output_0_V {Type O LastRead -1 FirstWrite 2}
		output_1_V {Type O LastRead -1 FirstWrite 2}
		output_2_V {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "26", "Max" : "26"}
	, {"Name" : "Interval", "Min" : "26", "Max" : "26"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	input_0_V { ap_memory {  { input_0_V_address0 mem_address 1 4 }  { input_0_V_ce0 mem_ce 1 1 }  { input_0_V_q0 mem_dout 0 40 } } }
	input_1_V { ap_memory {  { input_1_V_address0 mem_address 1 4 }  { input_1_V_ce0 mem_ce 1 1 }  { input_1_V_q0 mem_dout 0 40 } } }
	input_2_V { ap_memory {  { input_2_V_address0 mem_address 1 4 }  { input_2_V_ce0 mem_ce 1 1 }  { input_2_V_q0 mem_dout 0 40 } } }
	input_3_V { ap_memory {  { input_3_V_address0 mem_address 1 4 }  { input_3_V_ce0 mem_ce 1 1 }  { input_3_V_q0 mem_dout 0 40 } } }
	output_0_V { ap_memory {  { output_0_V_address0 mem_address 1 4 }  { output_0_V_ce0 mem_ce 1 1 }  { output_0_V_we0 mem_we 1 1 }  { output_0_V_d0 mem_din 1 40 }  { output_0_V_address1 MemPortADDR2 1 4 }  { output_0_V_ce1 MemPortCE2 1 1 }  { output_0_V_we1 MemPortWE2 1 1 }  { output_0_V_d1 MemPortDIN2 1 40 } } }
	output_1_V { ap_memory {  { output_1_V_address0 mem_address 1 4 }  { output_1_V_ce0 mem_ce 1 1 }  { output_1_V_we0 mem_we 1 1 }  { output_1_V_d0 mem_din 1 40 }  { output_1_V_address1 MemPortADDR2 1 4 }  { output_1_V_ce1 MemPortCE2 1 1 }  { output_1_V_we1 MemPortWE2 1 1 }  { output_1_V_d1 MemPortDIN2 1 40 } } }
	output_2_V { ap_memory {  { output_2_V_address0 mem_address 1 4 }  { output_2_V_ce0 mem_ce 1 1 }  { output_2_V_we0 mem_we 1 1 }  { output_2_V_d0 mem_din 1 40 }  { output_2_V_address1 MemPortADDR2 1 4 }  { output_2_V_ce1 MemPortCE2 1 1 }  { output_2_V_we1 MemPortWE2 1 1 }  { output_2_V_d1 MemPortDIN2 1 40 } } }
}
