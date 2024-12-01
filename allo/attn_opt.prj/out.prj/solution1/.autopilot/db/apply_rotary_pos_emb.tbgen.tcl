set moduleName apply_rotary_pos_emb
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
set C_modelName {apply_rotary_pos_emb}
set C_modelType { void 0 }
set C_modelArgList {
	{ v155_V int 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v156_V int 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v157_0_V int 32 regular {array 1536 { 0 3 } 0 1 }  }
	{ v158_0_V int 32 regular {array 1536 { 0 3 } 0 1 }  }
	{ q_proj_V_0 int 32 regular {array 1536 { 1 1 } 1 1 } {global 0}  }
	{ k_proj_V_0 int 32 regular {array 1536 { 1 1 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v155_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v156_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v157_0_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "v158_0_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "q_proj_V_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} , 
 	{ "Name" : "k_proj_V_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 32
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v155_V_address0 sc_out sc_lv 10 signal 0 } 
	{ v155_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ v155_V_q0 sc_in sc_lv 32 signal 0 } 
	{ v156_V_address0 sc_out sc_lv 10 signal 1 } 
	{ v156_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ v156_V_q0 sc_in sc_lv 32 signal 1 } 
	{ v157_0_V_address0 sc_out sc_lv 11 signal 2 } 
	{ v157_0_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ v157_0_V_we0 sc_out sc_logic 1 signal 2 } 
	{ v157_0_V_d0 sc_out sc_lv 32 signal 2 } 
	{ v158_0_V_address0 sc_out sc_lv 11 signal 3 } 
	{ v158_0_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ v158_0_V_we0 sc_out sc_logic 1 signal 3 } 
	{ v158_0_V_d0 sc_out sc_lv 32 signal 3 } 
	{ q_proj_V_0_address0 sc_out sc_lv 11 signal 4 } 
	{ q_proj_V_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ q_proj_V_0_q0 sc_in sc_lv 32 signal 4 } 
	{ q_proj_V_0_address1 sc_out sc_lv 11 signal 4 } 
	{ q_proj_V_0_ce1 sc_out sc_logic 1 signal 4 } 
	{ q_proj_V_0_q1 sc_in sc_lv 32 signal 4 } 
	{ k_proj_V_0_address0 sc_out sc_lv 11 signal 5 } 
	{ k_proj_V_0_ce0 sc_out sc_logic 1 signal 5 } 
	{ k_proj_V_0_q0 sc_in sc_lv 32 signal 5 } 
	{ k_proj_V_0_address1 sc_out sc_lv 11 signal 5 } 
	{ k_proj_V_0_ce1 sc_out sc_logic 1 signal 5 } 
	{ k_proj_V_0_q1 sc_in sc_lv 32 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v155_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v155_V", "role": "address0" }} , 
 	{ "name": "v155_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v155_V", "role": "ce0" }} , 
 	{ "name": "v155_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v155_V", "role": "q0" }} , 
 	{ "name": "v156_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v156_V", "role": "address0" }} , 
 	{ "name": "v156_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v156_V", "role": "ce0" }} , 
 	{ "name": "v156_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v156_V", "role": "q0" }} , 
 	{ "name": "v157_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v157_0_V", "role": "address0" }} , 
 	{ "name": "v157_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v157_0_V", "role": "ce0" }} , 
 	{ "name": "v157_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v157_0_V", "role": "we0" }} , 
 	{ "name": "v157_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v157_0_V", "role": "d0" }} , 
 	{ "name": "v158_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v158_0_V", "role": "address0" }} , 
 	{ "name": "v158_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v158_0_V", "role": "ce0" }} , 
 	{ "name": "v158_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v158_0_V", "role": "we0" }} , 
 	{ "name": "v158_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v158_0_V", "role": "d0" }} , 
 	{ "name": "q_proj_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "q_proj_V_0", "role": "address0" }} , 
 	{ "name": "q_proj_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q_proj_V_0", "role": "ce0" }} , 
 	{ "name": "q_proj_V_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q_proj_V_0", "role": "q0" }} , 
 	{ "name": "q_proj_V_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "q_proj_V_0", "role": "address1" }} , 
 	{ "name": "q_proj_V_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "q_proj_V_0", "role": "ce1" }} , 
 	{ "name": "q_proj_V_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "q_proj_V_0", "role": "q1" }} , 
 	{ "name": "k_proj_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "k_proj_V_0", "role": "address0" }} , 
 	{ "name": "k_proj_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "k_proj_V_0", "role": "ce0" }} , 
 	{ "name": "k_proj_V_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "k_proj_V_0", "role": "q0" }} , 
 	{ "name": "k_proj_V_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "k_proj_V_0", "role": "address1" }} , 
 	{ "name": "k_proj_V_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "k_proj_V_0", "role": "ce1" }} , 
 	{ "name": "k_proj_V_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "k_proj_V_0", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "apply_rotary_pos_emb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11653", "EstimateLatencyMax" : "11653",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rotate_half_fu_254"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rotate_half_fu_261"}],
		"Port" : [
			{"Name" : "v155_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v156_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v157_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v158_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "q_proj_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_rotate_half_fu_254", "Port" : "v145_0_V"}]},
			{"Name" : "k_proj_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "4", "SubInstance" : "grp_rotate_half_fu_261", "Port" : "v145_0_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotated_q_0_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rotated_k_0_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rotate_half_fu_254", "Parent" : "0",
		"CDFG" : "rotate_half",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2337", "EstimateLatencyMax" : "2337",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v145_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v146_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rotate_half_fu_261", "Parent" : "0",
		"CDFG" : "rotate_half",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2337", "EstimateLatencyMax" : "2337",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v145_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v146_0_V", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	apply_rotary_pos_emb {
		v155_V {Type I LastRead 5 FirstWrite -1}
		v156_V {Type I LastRead 5 FirstWrite -1}
		v157_0_V {Type O LastRead -1 FirstWrite 8}
		v158_0_V {Type O LastRead -1 FirstWrite 8}
		q_proj_V_0 {Type I LastRead 5 FirstWrite -1}
		k_proj_V_0 {Type I LastRead 5 FirstWrite -1}}
	rotate_half {
		v145_0_V {Type I LastRead 3 FirstWrite -1}
		v146_0_V {Type O LastRead -1 FirstWrite 3}}
	rotate_half {
		v145_0_V {Type I LastRead 3 FirstWrite -1}
		v146_0_V {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "11653", "Max" : "11653"}
	, {"Name" : "Interval", "Min" : "11653", "Max" : "11653"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v155_V { ap_memory {  { v155_V_address0 mem_address 1 10 }  { v155_V_ce0 mem_ce 1 1 }  { v155_V_q0 mem_dout 0 32 } } }
	v156_V { ap_memory {  { v156_V_address0 mem_address 1 10 }  { v156_V_ce0 mem_ce 1 1 }  { v156_V_q0 mem_dout 0 32 } } }
	v157_0_V { ap_memory {  { v157_0_V_address0 mem_address 1 11 }  { v157_0_V_ce0 mem_ce 1 1 }  { v157_0_V_we0 mem_we 1 1 }  { v157_0_V_d0 mem_din 1 32 } } }
	v158_0_V { ap_memory {  { v158_0_V_address0 mem_address 1 11 }  { v158_0_V_ce0 mem_ce 1 1 }  { v158_0_V_we0 mem_we 1 1 }  { v158_0_V_d0 mem_din 1 32 } } }
	q_proj_V_0 { ap_memory {  { q_proj_V_0_address0 mem_address 1 11 }  { q_proj_V_0_ce0 mem_ce 1 1 }  { q_proj_V_0_q0 mem_dout 0 32 }  { q_proj_V_0_address1 MemPortADDR2 1 11 }  { q_proj_V_0_ce1 MemPortCE2 1 1 }  { q_proj_V_0_q1 MemPortDOUT2 0 32 } } }
	k_proj_V_0 { ap_memory {  { k_proj_V_0_address0 mem_address 1 11 }  { k_proj_V_0_ce0 mem_ce 1 1 }  { k_proj_V_0_q0 mem_dout 0 32 }  { k_proj_V_0_address1 MemPortADDR2 1 11 }  { k_proj_V_0_ce1 MemPortCE2 1 1 }  { k_proj_V_0_q1 MemPortDOUT2 0 32 } } }
}
