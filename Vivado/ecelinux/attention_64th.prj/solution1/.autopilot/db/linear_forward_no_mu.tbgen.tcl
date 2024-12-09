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
	{ input_0_0_V int 8 regular {array 6 { 1 3 } 1 1 }  }
	{ input_1_0_V int 8 regular {array 6 { 1 3 } 1 1 }  }
	{ input_2_0_V int 8 regular {array 6 { 1 3 } 1 1 }  }
	{ input_3_0_V int 8 regular {array 6 { 1 3 } 1 1 }  }
	{ output_0_V int 38 regular {array 24 { 2 0 } 1 1 }  }
	{ scales_0_V_read int 38 regular  }
	{ packed_weights int 8 regular {array 144 { 1 3 } 1 1 }  }
	{ w_scale_V int 26 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_0_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_3_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "output_0_V", "interface" : "memory", "bitwidth" : 38, "direction" : "READWRITE"} , 
 	{ "Name" : "scales_0_V_read", "interface" : "wire", "bitwidth" : 38, "direction" : "READONLY"} , 
 	{ "Name" : "packed_weights", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w_scale_V", "interface" : "wire", "bitwidth" : 26, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 32
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_0_0_V_address0 sc_out sc_lv 3 signal 0 } 
	{ input_0_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_0_0_V_q0 sc_in sc_lv 8 signal 0 } 
	{ input_1_0_V_address0 sc_out sc_lv 3 signal 1 } 
	{ input_1_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_1_0_V_q0 sc_in sc_lv 8 signal 1 } 
	{ input_2_0_V_address0 sc_out sc_lv 3 signal 2 } 
	{ input_2_0_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_2_0_V_q0 sc_in sc_lv 8 signal 2 } 
	{ input_3_0_V_address0 sc_out sc_lv 3 signal 3 } 
	{ input_3_0_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ input_3_0_V_q0 sc_in sc_lv 8 signal 3 } 
	{ output_0_V_address0 sc_out sc_lv 5 signal 4 } 
	{ output_0_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ output_0_V_we0 sc_out sc_logic 1 signal 4 } 
	{ output_0_V_d0 sc_out sc_lv 38 signal 4 } 
	{ output_0_V_q0 sc_in sc_lv 38 signal 4 } 
	{ output_0_V_address1 sc_out sc_lv 5 signal 4 } 
	{ output_0_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ output_0_V_we1 sc_out sc_logic 1 signal 4 } 
	{ output_0_V_d1 sc_out sc_lv 38 signal 4 } 
	{ scales_0_V_read sc_in sc_lv 38 signal 5 } 
	{ packed_weights_address0 sc_out sc_lv 8 signal 6 } 
	{ packed_weights_ce0 sc_out sc_logic 1 signal 6 } 
	{ packed_weights_q0 sc_in sc_lv 8 signal 6 } 
	{ w_scale_V sc_in sc_lv 26 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_0_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_0_0_V", "role": "address0" }} , 
 	{ "name": "input_0_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_0_0_V", "role": "ce0" }} , 
 	{ "name": "input_0_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_0_0_V", "role": "q0" }} , 
 	{ "name": "input_1_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_1_0_V", "role": "address0" }} , 
 	{ "name": "input_1_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_0_V", "role": "ce0" }} , 
 	{ "name": "input_1_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_1_0_V", "role": "q0" }} , 
 	{ "name": "input_2_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_2_0_V", "role": "address0" }} , 
 	{ "name": "input_2_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_0_V", "role": "ce0" }} , 
 	{ "name": "input_2_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_0_V", "role": "q0" }} , 
 	{ "name": "input_3_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_3_0_V", "role": "address0" }} , 
 	{ "name": "input_3_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_3_0_V", "role": "ce0" }} , 
 	{ "name": "input_3_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_3_0_V", "role": "q0" }} , 
 	{ "name": "output_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_0_V", "role": "address0" }} , 
 	{ "name": "output_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "ce0" }} , 
 	{ "name": "output_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "we0" }} , 
 	{ "name": "output_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_0_V", "role": "d0" }} , 
 	{ "name": "output_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_0_V", "role": "q0" }} , 
 	{ "name": "output_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "output_0_V", "role": "address1" }} , 
 	{ "name": "output_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "ce1" }} , 
 	{ "name": "output_0_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_0_V", "role": "we1" }} , 
 	{ "name": "output_0_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "output_0_V", "role": "d1" }} , 
 	{ "name": "scales_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":38, "type": "signal", "bundle":{"name": "scales_0_V_read", "role": "default" }} , 
 	{ "name": "packed_weights_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "packed_weights", "role": "address0" }} , 
 	{ "name": "packed_weights_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "packed_weights", "role": "ce0" }} , 
 	{ "name": "packed_weights_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "packed_weights", "role": "q0" }} , 
 	{ "name": "w_scale_V", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "w_scale_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "linear_forward_no_mu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "516", "EstimateLatencyMax" : "516",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "scales_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "packed_weights", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w_scale_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_sdiv_78ns_63seOg_U16", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	linear_forward_no_mu {
		input_0_0_V {Type I LastRead 1 FirstWrite -1}
		input_1_0_V {Type I LastRead 1 FirstWrite -1}
		input_2_0_V {Type I LastRead 1 FirstWrite -1}
		input_3_0_V {Type I LastRead 1 FirstWrite -1}
		output_0_V {Type IO LastRead 3 FirstWrite 5}
		scales_0_V_read {Type I LastRead 0 FirstWrite -1}
		packed_weights {Type I LastRead 2 FirstWrite -1}
		w_scale_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "516", "Max" : "516"}
	, {"Name" : "Interval", "Min" : "516", "Max" : "516"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	input_0_0_V { ap_memory {  { input_0_0_V_address0 mem_address 1 3 }  { input_0_0_V_ce0 mem_ce 1 1 }  { input_0_0_V_q0 mem_dout 0 8 } } }
	input_1_0_V { ap_memory {  { input_1_0_V_address0 mem_address 1 3 }  { input_1_0_V_ce0 mem_ce 1 1 }  { input_1_0_V_q0 mem_dout 0 8 } } }
	input_2_0_V { ap_memory {  { input_2_0_V_address0 mem_address 1 3 }  { input_2_0_V_ce0 mem_ce 1 1 }  { input_2_0_V_q0 mem_dout 0 8 } } }
	input_3_0_V { ap_memory {  { input_3_0_V_address0 mem_address 1 3 }  { input_3_0_V_ce0 mem_ce 1 1 }  { input_3_0_V_q0 mem_dout 0 8 } } }
	output_0_V { ap_memory {  { output_0_V_address0 mem_address 1 5 }  { output_0_V_ce0 mem_ce 1 1 }  { output_0_V_we0 mem_we 1 1 }  { output_0_V_d0 mem_din 1 38 }  { output_0_V_q0 mem_dout 0 38 }  { output_0_V_address1 MemPortADDR2 1 5 }  { output_0_V_ce1 MemPortCE2 1 1 }  { output_0_V_we1 MemPortWE2 1 1 }  { output_0_V_d1 MemPortDIN2 1 38 } } }
	scales_0_V_read { ap_none {  { scales_0_V_read in_data 0 38 } } }
	packed_weights { ap_memory {  { packed_weights_address0 mem_address 1 8 }  { packed_weights_ce0 mem_ce 1 1 }  { packed_weights_q0 mem_dout 0 8 } } }
	w_scale_V { ap_none {  { w_scale_V in_data 0 26 } } }
}
