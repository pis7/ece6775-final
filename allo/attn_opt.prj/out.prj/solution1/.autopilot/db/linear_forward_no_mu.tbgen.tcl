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
	{ v77_0_0 int 8 regular {array 384 { 1 1 } 1 1 }  }
	{ v77_1_0 int 8 regular {array 384 { 1 1 } 1 1 }  }
	{ v77_2_0 int 8 regular {array 384 { 1 1 } 1 1 }  }
	{ v77_3_0 int 8 regular {array 384 { 1 1 } 1 1 }  }
	{ v78_0_V_read int 32 regular  }
	{ v79 int 8 regular {array 589824 { 1 1 } 1 1 }  }
	{ v80_V int 32 regular  }
	{ v81_V int 32 regular {array 1536 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v77_0_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v77_1_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v77_2_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v77_3_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v78_0_V_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v79", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "v80_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v81_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 42
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v77_0_0_address0 sc_out sc_lv 9 signal 0 } 
	{ v77_0_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ v77_0_0_q0 sc_in sc_lv 8 signal 0 } 
	{ v77_0_0_address1 sc_out sc_lv 9 signal 0 } 
	{ v77_0_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ v77_0_0_q1 sc_in sc_lv 8 signal 0 } 
	{ v77_1_0_address0 sc_out sc_lv 9 signal 1 } 
	{ v77_1_0_ce0 sc_out sc_logic 1 signal 1 } 
	{ v77_1_0_q0 sc_in sc_lv 8 signal 1 } 
	{ v77_1_0_address1 sc_out sc_lv 9 signal 1 } 
	{ v77_1_0_ce1 sc_out sc_logic 1 signal 1 } 
	{ v77_1_0_q1 sc_in sc_lv 8 signal 1 } 
	{ v77_2_0_address0 sc_out sc_lv 9 signal 2 } 
	{ v77_2_0_ce0 sc_out sc_logic 1 signal 2 } 
	{ v77_2_0_q0 sc_in sc_lv 8 signal 2 } 
	{ v77_2_0_address1 sc_out sc_lv 9 signal 2 } 
	{ v77_2_0_ce1 sc_out sc_logic 1 signal 2 } 
	{ v77_2_0_q1 sc_in sc_lv 8 signal 2 } 
	{ v77_3_0_address0 sc_out sc_lv 9 signal 3 } 
	{ v77_3_0_ce0 sc_out sc_logic 1 signal 3 } 
	{ v77_3_0_q0 sc_in sc_lv 8 signal 3 } 
	{ v77_3_0_address1 sc_out sc_lv 9 signal 3 } 
	{ v77_3_0_ce1 sc_out sc_logic 1 signal 3 } 
	{ v77_3_0_q1 sc_in sc_lv 8 signal 3 } 
	{ v78_0_V_read sc_in sc_lv 32 signal 4 } 
	{ v79_address0 sc_out sc_lv 20 signal 5 } 
	{ v79_ce0 sc_out sc_logic 1 signal 5 } 
	{ v79_q0 sc_in sc_lv 8 signal 5 } 
	{ v79_address1 sc_out sc_lv 20 signal 5 } 
	{ v79_ce1 sc_out sc_logic 1 signal 5 } 
	{ v79_q1 sc_in sc_lv 8 signal 5 } 
	{ v80_V sc_in sc_lv 32 signal 6 } 
	{ v81_V_address0 sc_out sc_lv 11 signal 7 } 
	{ v81_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ v81_V_we0 sc_out sc_logic 1 signal 7 } 
	{ v81_V_d0 sc_out sc_lv 32 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v77_0_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v77_0_0", "role": "address0" }} , 
 	{ "name": "v77_0_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v77_0_0", "role": "ce0" }} , 
 	{ "name": "v77_0_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v77_0_0", "role": "q0" }} , 
 	{ "name": "v77_0_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v77_0_0", "role": "address1" }} , 
 	{ "name": "v77_0_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v77_0_0", "role": "ce1" }} , 
 	{ "name": "v77_0_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v77_0_0", "role": "q1" }} , 
 	{ "name": "v77_1_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v77_1_0", "role": "address0" }} , 
 	{ "name": "v77_1_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v77_1_0", "role": "ce0" }} , 
 	{ "name": "v77_1_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v77_1_0", "role": "q0" }} , 
 	{ "name": "v77_1_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v77_1_0", "role": "address1" }} , 
 	{ "name": "v77_1_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v77_1_0", "role": "ce1" }} , 
 	{ "name": "v77_1_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v77_1_0", "role": "q1" }} , 
 	{ "name": "v77_2_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v77_2_0", "role": "address0" }} , 
 	{ "name": "v77_2_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v77_2_0", "role": "ce0" }} , 
 	{ "name": "v77_2_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v77_2_0", "role": "q0" }} , 
 	{ "name": "v77_2_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v77_2_0", "role": "address1" }} , 
 	{ "name": "v77_2_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v77_2_0", "role": "ce1" }} , 
 	{ "name": "v77_2_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v77_2_0", "role": "q1" }} , 
 	{ "name": "v77_3_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v77_3_0", "role": "address0" }} , 
 	{ "name": "v77_3_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v77_3_0", "role": "ce0" }} , 
 	{ "name": "v77_3_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v77_3_0", "role": "q0" }} , 
 	{ "name": "v77_3_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "v77_3_0", "role": "address1" }} , 
 	{ "name": "v77_3_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v77_3_0", "role": "ce1" }} , 
 	{ "name": "v77_3_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v77_3_0", "role": "q1" }} , 
 	{ "name": "v78_0_V_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v78_0_V_read", "role": "default" }} , 
 	{ "name": "v79_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v79", "role": "address0" }} , 
 	{ "name": "v79_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v79", "role": "ce0" }} , 
 	{ "name": "v79_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v79", "role": "q0" }} , 
 	{ "name": "v79_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v79", "role": "address1" }} , 
 	{ "name": "v79_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v79", "role": "ce1" }} , 
 	{ "name": "v79_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v79", "role": "q1" }} , 
 	{ "name": "v80_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v80_V", "role": "default" }} , 
 	{ "name": "v81_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v81_V", "role": "address0" }} , 
 	{ "name": "v81_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v81_V", "role": "ce0" }} , 
 	{ "name": "v81_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v81_V", "role": "we0" }} , 
 	{ "name": "v81_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v81_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "linear_forward_no_mu",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "294965", "EstimateLatencyMax" : "294965",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v77_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v77_1_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v77_2_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v77_3_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v78_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v80_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "v81_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_sdiv_43yd2_U49", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	linear_forward_no_mu {
		v77_0_0 {Type I LastRead 193 FirstWrite -1}
		v77_1_0 {Type I LastRead 193 FirstWrite -1}
		v77_2_0 {Type I LastRead 193 FirstWrite -1}
		v77_3_0 {Type I LastRead 193 FirstWrite -1}
		v78_0_V_read {Type I LastRead 0 FirstWrite -1}
		v79 {Type I LastRead 193 FirstWrite -1}
		v80_V {Type I LastRead 0 FirstWrite -1}
		v81_V {Type O LastRead -1 FirstWrite 244}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "294965", "Max" : "294965"}
	, {"Name" : "Interval", "Min" : "294965", "Max" : "294965"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	v77_0_0 { ap_memory {  { v77_0_0_address0 mem_address 1 9 }  { v77_0_0_ce0 mem_ce 1 1 }  { v77_0_0_q0 mem_dout 0 8 }  { v77_0_0_address1 MemPortADDR2 1 9 }  { v77_0_0_ce1 MemPortCE2 1 1 }  { v77_0_0_q1 MemPortDOUT2 0 8 } } }
	v77_1_0 { ap_memory {  { v77_1_0_address0 mem_address 1 9 }  { v77_1_0_ce0 mem_ce 1 1 }  { v77_1_0_q0 mem_dout 0 8 }  { v77_1_0_address1 MemPortADDR2 1 9 }  { v77_1_0_ce1 MemPortCE2 1 1 }  { v77_1_0_q1 MemPortDOUT2 0 8 } } }
	v77_2_0 { ap_memory {  { v77_2_0_address0 mem_address 1 9 }  { v77_2_0_ce0 mem_ce 1 1 }  { v77_2_0_q0 mem_dout 0 8 }  { v77_2_0_address1 MemPortADDR2 1 9 }  { v77_2_0_ce1 MemPortCE2 1 1 }  { v77_2_0_q1 MemPortDOUT2 0 8 } } }
	v77_3_0 { ap_memory {  { v77_3_0_address0 mem_address 1 9 }  { v77_3_0_ce0 mem_ce 1 1 }  { v77_3_0_q0 mem_dout 0 8 }  { v77_3_0_address1 MemPortADDR2 1 9 }  { v77_3_0_ce1 MemPortCE2 1 1 }  { v77_3_0_q1 MemPortDOUT2 0 8 } } }
	v78_0_V_read { ap_none {  { v78_0_V_read in_data 0 32 } } }
	v79 { ap_memory {  { v79_address0 mem_address 1 20 }  { v79_ce0 mem_ce 1 1 }  { v79_q0 mem_dout 0 8 }  { v79_address1 MemPortADDR2 1 20 }  { v79_ce1 MemPortCE2 1 1 }  { v79_q1 MemPortDOUT2 0 8 } } }
	v80_V { ap_none {  { v80_V in_data 0 32 } } }
	v81_V { ap_memory {  { v81_V_address0 mem_address 1 11 }  { v81_V_ce0 mem_ce 1 1 }  { v81_V_we0 mem_we 1 1 }  { v81_V_d0 mem_din 1 32 } } }
}
