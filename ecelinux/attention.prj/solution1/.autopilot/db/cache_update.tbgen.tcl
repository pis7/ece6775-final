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
	{ cache_in_0_V int 40 regular {array 8 { 1 3 } 1 1 }  }
	{ cache_in_1_V int 40 regular {array 8 { 1 3 } 1 1 }  }
	{ cache_in_2_V int 40 regular {array 8 { 1 3 } 1 1 }  }
	{ cache_in_3_V int 40 regular {array 8 { 1 3 } 1 1 }  }
	{ cache_out_0_V int 40 regular {array 12 { 0 3 } 0 1 }  }
	{ cache_out_1_V int 40 regular {array 12 { 0 3 } 0 1 }  }
	{ cache_out_2_V int 40 regular {array 12 { 0 3 } 0 1 }  }
	{ cache_out_3_V int 40 regular {array 12 { 0 3 } 0 1 }  }
	{ p_read int 40 regular  }
	{ p_read1 int 40 regular  }
	{ p_read2 int 40 regular  }
	{ p_read3 int 40 regular  }
	{ p_read4 int 40 regular  }
	{ p_read5 int 40 regular  }
	{ p_read6 int 40 regular  }
	{ p_read7 int 40 regular  }
	{ p_read8 int 40 regular  }
	{ p_read9 int 40 regular  }
	{ p_read10 int 40 regular  }
	{ p_read11 int 40 regular  }
	{ p_read12 int 40 regular  }
	{ p_read13 int 40 regular  }
	{ p_read14 int 40 regular  }
	{ p_read15 int 40 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "cache_in_0_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "cache_in_1_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "cache_in_2_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "cache_in_3_V", "interface" : "memory", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "cache_out_0_V", "interface" : "memory", "bitwidth" : 40, "direction" : "WRITEONLY"} , 
 	{ "Name" : "cache_out_1_V", "interface" : "memory", "bitwidth" : 40, "direction" : "WRITEONLY"} , 
 	{ "Name" : "cache_out_2_V", "interface" : "memory", "bitwidth" : 40, "direction" : "WRITEONLY"} , 
 	{ "Name" : "cache_out_3_V", "interface" : "memory", "bitwidth" : 40, "direction" : "WRITEONLY"} , 
 	{ "Name" : "p_read", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read1", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read2", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read3", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read4", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read5", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read6", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read7", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read8", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read9", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read10", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read11", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read12", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read13", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read14", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} , 
 	{ "Name" : "p_read15", "interface" : "wire", "bitwidth" : 40, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 50
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ cache_in_0_V_address0 sc_out sc_lv 3 signal 0 } 
	{ cache_in_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ cache_in_0_V_q0 sc_in sc_lv 40 signal 0 } 
	{ cache_in_1_V_address0 sc_out sc_lv 3 signal 1 } 
	{ cache_in_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ cache_in_1_V_q0 sc_in sc_lv 40 signal 1 } 
	{ cache_in_2_V_address0 sc_out sc_lv 3 signal 2 } 
	{ cache_in_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ cache_in_2_V_q0 sc_in sc_lv 40 signal 2 } 
	{ cache_in_3_V_address0 sc_out sc_lv 3 signal 3 } 
	{ cache_in_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ cache_in_3_V_q0 sc_in sc_lv 40 signal 3 } 
	{ cache_out_0_V_address0 sc_out sc_lv 4 signal 4 } 
	{ cache_out_0_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ cache_out_0_V_we0 sc_out sc_logic 1 signal 4 } 
	{ cache_out_0_V_d0 sc_out sc_lv 40 signal 4 } 
	{ cache_out_1_V_address0 sc_out sc_lv 4 signal 5 } 
	{ cache_out_1_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ cache_out_1_V_we0 sc_out sc_logic 1 signal 5 } 
	{ cache_out_1_V_d0 sc_out sc_lv 40 signal 5 } 
	{ cache_out_2_V_address0 sc_out sc_lv 4 signal 6 } 
	{ cache_out_2_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ cache_out_2_V_we0 sc_out sc_logic 1 signal 6 } 
	{ cache_out_2_V_d0 sc_out sc_lv 40 signal 6 } 
	{ cache_out_3_V_address0 sc_out sc_lv 4 signal 7 } 
	{ cache_out_3_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ cache_out_3_V_we0 sc_out sc_logic 1 signal 7 } 
	{ cache_out_3_V_d0 sc_out sc_lv 40 signal 7 } 
	{ p_read sc_in sc_lv 40 signal 8 } 
	{ p_read1 sc_in sc_lv 40 signal 9 } 
	{ p_read2 sc_in sc_lv 40 signal 10 } 
	{ p_read3 sc_in sc_lv 40 signal 11 } 
	{ p_read4 sc_in sc_lv 40 signal 12 } 
	{ p_read5 sc_in sc_lv 40 signal 13 } 
	{ p_read6 sc_in sc_lv 40 signal 14 } 
	{ p_read7 sc_in sc_lv 40 signal 15 } 
	{ p_read8 sc_in sc_lv 40 signal 16 } 
	{ p_read9 sc_in sc_lv 40 signal 17 } 
	{ p_read10 sc_in sc_lv 40 signal 18 } 
	{ p_read11 sc_in sc_lv 40 signal 19 } 
	{ p_read12 sc_in sc_lv 40 signal 20 } 
	{ p_read13 sc_in sc_lv 40 signal 21 } 
	{ p_read14 sc_in sc_lv 40 signal 22 } 
	{ p_read15 sc_in sc_lv 40 signal 23 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "cache_in_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "cache_in_0_V", "role": "address0" }} , 
 	{ "name": "cache_in_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_in_0_V", "role": "ce0" }} , 
 	{ "name": "cache_in_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_in_0_V", "role": "q0" }} , 
 	{ "name": "cache_in_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "cache_in_1_V", "role": "address0" }} , 
 	{ "name": "cache_in_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_in_1_V", "role": "ce0" }} , 
 	{ "name": "cache_in_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_in_1_V", "role": "q0" }} , 
 	{ "name": "cache_in_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "cache_in_2_V", "role": "address0" }} , 
 	{ "name": "cache_in_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_in_2_V", "role": "ce0" }} , 
 	{ "name": "cache_in_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_in_2_V", "role": "q0" }} , 
 	{ "name": "cache_in_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "cache_in_3_V", "role": "address0" }} , 
 	{ "name": "cache_in_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_in_3_V", "role": "ce0" }} , 
 	{ "name": "cache_in_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_in_3_V", "role": "q0" }} , 
 	{ "name": "cache_out_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "cache_out_0_V", "role": "address0" }} , 
 	{ "name": "cache_out_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_0_V", "role": "ce0" }} , 
 	{ "name": "cache_out_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_0_V", "role": "we0" }} , 
 	{ "name": "cache_out_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_out_0_V", "role": "d0" }} , 
 	{ "name": "cache_out_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "cache_out_1_V", "role": "address0" }} , 
 	{ "name": "cache_out_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_1_V", "role": "ce0" }} , 
 	{ "name": "cache_out_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_1_V", "role": "we0" }} , 
 	{ "name": "cache_out_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_out_1_V", "role": "d0" }} , 
 	{ "name": "cache_out_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "cache_out_2_V", "role": "address0" }} , 
 	{ "name": "cache_out_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_2_V", "role": "ce0" }} , 
 	{ "name": "cache_out_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_2_V", "role": "we0" }} , 
 	{ "name": "cache_out_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_out_2_V", "role": "d0" }} , 
 	{ "name": "cache_out_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "cache_out_3_V", "role": "address0" }} , 
 	{ "name": "cache_out_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_3_V", "role": "ce0" }} , 
 	{ "name": "cache_out_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cache_out_3_V", "role": "we0" }} , 
 	{ "name": "cache_out_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "cache_out_3_V", "role": "d0" }} , 
 	{ "name": "p_read", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read", "role": "default" }} , 
 	{ "name": "p_read1", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read1", "role": "default" }} , 
 	{ "name": "p_read2", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read2", "role": "default" }} , 
 	{ "name": "p_read3", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read3", "role": "default" }} , 
 	{ "name": "p_read4", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read4", "role": "default" }} , 
 	{ "name": "p_read5", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read5", "role": "default" }} , 
 	{ "name": "p_read6", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read6", "role": "default" }} , 
 	{ "name": "p_read7", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read7", "role": "default" }} , 
 	{ "name": "p_read8", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read8", "role": "default" }} , 
 	{ "name": "p_read9", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read9", "role": "default" }} , 
 	{ "name": "p_read10", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read10", "role": "default" }} , 
 	{ "name": "p_read11", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read11", "role": "default" }} , 
 	{ "name": "p_read12", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read12", "role": "default" }} , 
 	{ "name": "p_read13", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read13", "role": "default" }} , 
 	{ "name": "p_read14", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read14", "role": "default" }} , 
 	{ "name": "p_read15", "direction": "in", "datatype": "sc_lv", "bitwidth":40, "type": "signal", "bundle":{"name": "p_read15", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "cache_update",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "14", "EstimateLatencyMax" : "14",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "cache_in_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cache_in_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cache_in_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cache_in_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "cache_out_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cache_out_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cache_out_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cache_out_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read3", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read5", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read6", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read7", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read8", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read9", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read10", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read11", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read12", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read13", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read14", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read15", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mux_42_40_1_1_U86", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mux_42_40_1_1_U87", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mux_42_40_1_1_U88", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dut_mux_42_40_1_1_U89", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	cache_update {
		cache_in_0_V {Type I LastRead 1 FirstWrite -1}
		cache_in_1_V {Type I LastRead 1 FirstWrite -1}
		cache_in_2_V {Type I LastRead 1 FirstWrite -1}
		cache_in_3_V {Type I LastRead 1 FirstWrite -1}
		cache_out_0_V {Type O LastRead -1 FirstWrite 2}
		cache_out_1_V {Type O LastRead -1 FirstWrite 2}
		cache_out_2_V {Type O LastRead -1 FirstWrite 2}
		cache_out_3_V {Type O LastRead -1 FirstWrite 2}
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		p_read3 {Type I LastRead 0 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		p_read5 {Type I LastRead 0 FirstWrite -1}
		p_read6 {Type I LastRead 0 FirstWrite -1}
		p_read7 {Type I LastRead 0 FirstWrite -1}
		p_read8 {Type I LastRead 0 FirstWrite -1}
		p_read9 {Type I LastRead 0 FirstWrite -1}
		p_read10 {Type I LastRead 0 FirstWrite -1}
		p_read11 {Type I LastRead 0 FirstWrite -1}
		p_read12 {Type I LastRead 0 FirstWrite -1}
		p_read13 {Type I LastRead 0 FirstWrite -1}
		p_read14 {Type I LastRead 0 FirstWrite -1}
		p_read15 {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "14", "Max" : "14"}
	, {"Name" : "Interval", "Min" : "14", "Max" : "14"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	cache_in_0_V { ap_memory {  { cache_in_0_V_address0 mem_address 1 3 }  { cache_in_0_V_ce0 mem_ce 1 1 }  { cache_in_0_V_q0 mem_dout 0 40 } } }
	cache_in_1_V { ap_memory {  { cache_in_1_V_address0 mem_address 1 3 }  { cache_in_1_V_ce0 mem_ce 1 1 }  { cache_in_1_V_q0 mem_dout 0 40 } } }
	cache_in_2_V { ap_memory {  { cache_in_2_V_address0 mem_address 1 3 }  { cache_in_2_V_ce0 mem_ce 1 1 }  { cache_in_2_V_q0 mem_dout 0 40 } } }
	cache_in_3_V { ap_memory {  { cache_in_3_V_address0 mem_address 1 3 }  { cache_in_3_V_ce0 mem_ce 1 1 }  { cache_in_3_V_q0 mem_dout 0 40 } } }
	cache_out_0_V { ap_memory {  { cache_out_0_V_address0 mem_address 1 4 }  { cache_out_0_V_ce0 mem_ce 1 1 }  { cache_out_0_V_we0 mem_we 1 1 }  { cache_out_0_V_d0 mem_din 1 40 } } }
	cache_out_1_V { ap_memory {  { cache_out_1_V_address0 mem_address 1 4 }  { cache_out_1_V_ce0 mem_ce 1 1 }  { cache_out_1_V_we0 mem_we 1 1 }  { cache_out_1_V_d0 mem_din 1 40 } } }
	cache_out_2_V { ap_memory {  { cache_out_2_V_address0 mem_address 1 4 }  { cache_out_2_V_ce0 mem_ce 1 1 }  { cache_out_2_V_we0 mem_we 1 1 }  { cache_out_2_V_d0 mem_din 1 40 } } }
	cache_out_3_V { ap_memory {  { cache_out_3_V_address0 mem_address 1 4 }  { cache_out_3_V_ce0 mem_ce 1 1 }  { cache_out_3_V_we0 mem_we 1 1 }  { cache_out_3_V_d0 mem_din 1 40 } } }
	p_read { ap_none {  { p_read in_data 0 40 } } }
	p_read1 { ap_none {  { p_read1 in_data 0 40 } } }
	p_read2 { ap_none {  { p_read2 in_data 0 40 } } }
	p_read3 { ap_none {  { p_read3 in_data 0 40 } } }
	p_read4 { ap_none {  { p_read4 in_data 0 40 } } }
	p_read5 { ap_none {  { p_read5 in_data 0 40 } } }
	p_read6 { ap_none {  { p_read6 in_data 0 40 } } }
	p_read7 { ap_none {  { p_read7 in_data 0 40 } } }
	p_read8 { ap_none {  { p_read8 in_data 0 40 } } }
	p_read9 { ap_none {  { p_read9 in_data 0 40 } } }
	p_read10 { ap_none {  { p_read10 in_data 0 40 } } }
	p_read11 { ap_none {  { p_read11 in_data 0 40 } } }
	p_read12 { ap_none {  { p_read12 in_data 0 40 } } }
	p_read13 { ap_none {  { p_read13 in_data 0 40 } } }
	p_read14 { ap_none {  { p_read14 in_data 0 40 } } }
	p_read15 { ap_none {  { p_read15 in_data 0 40 } } }
}