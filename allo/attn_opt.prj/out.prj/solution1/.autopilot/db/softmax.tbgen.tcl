set moduleName softmax
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
set C_modelName {softmax}
set C_modelType { void 0 }
set C_modelArgList {
	{ v213_0_V int 32 regular {array 96 { 1 3 } 1 1 }  }
	{ v214_0_V int 32 regular {array 96 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v213_0_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "v214_0_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v213_0_V_address0 sc_out sc_lv 7 signal 0 } 
	{ v213_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ v213_0_V_q0 sc_in sc_lv 32 signal 0 } 
	{ v214_0_V_address0 sc_out sc_lv 7 signal 1 } 
	{ v214_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ v214_0_V_we0 sc_out sc_logic 1 signal 1 } 
	{ v214_0_V_d0 sc_out sc_lv 32 signal 1 } 
	{ v214_0_V_q0 sc_in sc_lv 32 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v213_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "v213_0_V", "role": "address0" }} , 
 	{ "name": "v213_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v213_0_V", "role": "ce0" }} , 
 	{ "name": "v213_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v213_0_V", "role": "q0" }} , 
 	{ "name": "v214_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "v214_0_V", "role": "address0" }} , 
 	{ "name": "v214_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v214_0_V", "role": "ce0" }} , 
 	{ "name": "v214_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v214_0_V", "role": "we0" }} , 
 	{ "name": "v214_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v214_0_V", "role": "d0" }} , 
 	{ "name": "v214_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v214_0_V", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "24"],
		"CDFG" : "softmax",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5666", "EstimateLatencyMax" : "13922",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pow_32_20_s_fu_223"}],
		"Port" : [
			{"Name" : "v213_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v214_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "log_apfixed_reduce_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_6"}]},
			{"Name" : "log_apfixed_reduce_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_5"}]},
			{"Name" : "log_apfixed_reduce_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_9"}]},
			{"Name" : "log_apfixed_reduce_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_s"}]},
			{"Name" : "log_apfixed_reduce_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_7"}]},
			{"Name" : "log_apfixed_reduce_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_8"}]},
			{"Name" : "f_x_msb_4_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "f_x_msb_4_table_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "exp_x_msb_1_table_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223", "Parent" : "0", "Child" : ["2", "15", "23"],
		"CDFG" : "pow_32_20_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "87",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "y_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "log_apfixed_reduce_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_6"}]},
			{"Name" : "log_apfixed_reduce_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_5"}]},
			{"Name" : "log_apfixed_reduce_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_9"}]},
			{"Name" : "log_apfixed_reduce_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_s"}]},
			{"Name" : "log_apfixed_reduce_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_7"}]},
			{"Name" : "log_apfixed_reduce_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_8"}]},
			{"Name" : "f_x_msb_4_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "f_x_msb_4_table_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "15", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "exp_x_msb_1_table_V"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232", "Parent" : "1", "Child" : ["3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14"],
		"CDFG" : "log_75_21_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "29", "EstimateLatencyMin" : "29", "EstimateLatencyMax" : "29",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "log_apfixed_reduce_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "log_apfixed_reduce_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "log_apfixed_reduce_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "log_apfixed_reduce_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "log_apfixed_reduce_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "log_apfixed_reduce_8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_6_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_5_U", "Parent" : "2"},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_9_U", "Parent" : "2"},
	{"ID" : "6", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_s_U", "Parent" : "2"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_7_U", "Parent" : "2"},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_8_U", "Parent" : "2"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_85nhbi_U1", "Parent" : "2"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_68nibs_U2", "Parent" : "2"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_60njbC_U3", "Parent" : "2"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_55nkbM_U4", "Parent" : "2"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_7s_lbW_U5", "Parent" : "2"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_50nmb6_U6", "Parent" : "2"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249", "Parent" : "1", "Child" : ["16", "17", "18", "19", "20", "21", "22"],
		"CDFG" : "exp_core_32_20_54_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "12", "EstimateLatencyMin" : "12", "EstimateLatencyMax" : "12",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "f_x_msb_4_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.f_x_msb_4_table_V_U", "Parent" : "15"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.f_x_msb_3_table_V_U", "Parent" : "15"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.f_x_msb_2_table_V_U", "Parent" : "15"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.exp_x_msb_1_table_V_U", "Parent" : "15"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.attention_mul_36nrcU_U20", "Parent" : "15"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.attention_mul_48nsc4_U21", "Parent" : "15"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.attention_mul_50ntde_U22", "Parent" : "15"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pow_32_20_s_fu_223.attention_mul_60sudo_U31", "Parent" : "1"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_sdiv_44Bew_U78", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	softmax {
		v213_0_V {Type I LastRead 2 FirstWrite -1}
		v214_0_V {Type IO LastRead 5 FirstWrite 3}
		log_apfixed_reduce_6 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_5 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_9 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_s {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_7 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_8 {Type I LastRead -1 FirstWrite -1}
		f_x_msb_4_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
	pow_32_20_s {
		x_V {Type I LastRead 0 FirstWrite -1}
		y_V {Type I LastRead 0 FirstWrite -1}
		log_apfixed_reduce_6 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_5 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_9 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_s {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_7 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_8 {Type I LastRead -1 FirstWrite -1}
		f_x_msb_4_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
	log_75_21_s {
		x_V {Type I LastRead 0 FirstWrite -1}
		log_apfixed_reduce_6 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_5 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_9 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_s {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_7 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_8 {Type I LastRead -1 FirstWrite -1}}
	exp_core_32_20_54_s {
		x_V {Type I LastRead 0 FirstWrite -1}
		f_x_msb_4_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "5666", "Max" : "13922"}
	, {"Name" : "Interval", "Min" : "5666", "Max" : "13922"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v213_0_V { ap_memory {  { v213_0_V_address0 mem_address 1 7 }  { v213_0_V_ce0 mem_ce 1 1 }  { v213_0_V_q0 mem_dout 0 32 } } }
	v214_0_V { ap_memory {  { v214_0_V_address0 mem_address 1 7 }  { v214_0_V_ce0 mem_ce 1 1 }  { v214_0_V_we0 mem_we 1 1 }  { v214_0_V_d0 mem_din 1 32 }  { v214_0_V_q0 mem_dout 0 32 } } }
}
