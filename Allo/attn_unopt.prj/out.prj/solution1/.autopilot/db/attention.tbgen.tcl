set moduleName attention
set isTopModule 1
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
set C_modelName {attention}
set C_modelType { void 0 }
set C_modelArgList {
	{ v258 float 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v259 int 8 regular {array 589824 { 1 3 } 1 1 }  }
	{ v260 float 32 regular  }
	{ v261 int 8 regular {array 589824 { 1 3 } 1 1 }  }
	{ v262 float 32 regular  }
	{ v263 int 8 regular {array 589824 { 1 3 } 1 1 }  }
	{ v264 float 32 regular  }
	{ v265 int 8 regular {array 589824 { 1 3 } 1 1 }  }
	{ v266 float 32 regular  }
	{ v267 float 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v268 float 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v269 float 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v270 float 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v271 float 32 regular {array 7680 { 1 3 } 1 1 }  }
	{ v272 float 32 regular {array 7680 { 1 3 } 1 1 }  }
	{ v273 int 32 unused  }
	{ v274 float 32 regular {array 1536 { 2 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v258", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v258","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v259", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v259","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 383,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v260", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v260","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v261", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v261","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 383,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v262", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v262","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v263", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v263","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 383,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v264", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v264","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v265", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v265","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 383,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v266", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v266","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v267", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v267","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v268", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v268","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v269", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v269","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v270", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v270","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v271", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v271","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 15,"step" : 1},{"low" : 0,"up" : 4,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v272", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v272","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 15,"step" : 1},{"low" : 0,"up" : 4,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v273", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v273","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v274", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v274","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 49
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v258_address0 sc_out sc_lv 11 signal 0 } 
	{ v258_ce0 sc_out sc_logic 1 signal 0 } 
	{ v258_q0 sc_in sc_lv 32 signal 0 } 
	{ v259_address0 sc_out sc_lv 20 signal 1 } 
	{ v259_ce0 sc_out sc_logic 1 signal 1 } 
	{ v259_q0 sc_in sc_lv 8 signal 1 } 
	{ v260 sc_in sc_lv 32 signal 2 } 
	{ v261_address0 sc_out sc_lv 20 signal 3 } 
	{ v261_ce0 sc_out sc_logic 1 signal 3 } 
	{ v261_q0 sc_in sc_lv 8 signal 3 } 
	{ v262 sc_in sc_lv 32 signal 4 } 
	{ v263_address0 sc_out sc_lv 20 signal 5 } 
	{ v263_ce0 sc_out sc_logic 1 signal 5 } 
	{ v263_q0 sc_in sc_lv 8 signal 5 } 
	{ v264 sc_in sc_lv 32 signal 6 } 
	{ v265_address0 sc_out sc_lv 20 signal 7 } 
	{ v265_ce0 sc_out sc_logic 1 signal 7 } 
	{ v265_q0 sc_in sc_lv 8 signal 7 } 
	{ v266 sc_in sc_lv 32 signal 8 } 
	{ v267_address0 sc_out sc_lv 10 signal 9 } 
	{ v267_ce0 sc_out sc_logic 1 signal 9 } 
	{ v267_q0 sc_in sc_lv 32 signal 9 } 
	{ v268_address0 sc_out sc_lv 10 signal 10 } 
	{ v268_ce0 sc_out sc_logic 1 signal 10 } 
	{ v268_q0 sc_in sc_lv 32 signal 10 } 
	{ v269_address0 sc_out sc_lv 11 signal 11 } 
	{ v269_ce0 sc_out sc_logic 1 signal 11 } 
	{ v269_q0 sc_in sc_lv 32 signal 11 } 
	{ v270_address0 sc_out sc_lv 11 signal 12 } 
	{ v270_ce0 sc_out sc_logic 1 signal 12 } 
	{ v270_q0 sc_in sc_lv 32 signal 12 } 
	{ v271_address0 sc_out sc_lv 13 signal 13 } 
	{ v271_ce0 sc_out sc_logic 1 signal 13 } 
	{ v271_q0 sc_in sc_lv 32 signal 13 } 
	{ v272_address0 sc_out sc_lv 13 signal 14 } 
	{ v272_ce0 sc_out sc_logic 1 signal 14 } 
	{ v272_q0 sc_in sc_lv 32 signal 14 } 
	{ v273 sc_in sc_lv 32 signal 15 } 
	{ v274_address0 sc_out sc_lv 11 signal 16 } 
	{ v274_ce0 sc_out sc_logic 1 signal 16 } 
	{ v274_we0 sc_out sc_logic 1 signal 16 } 
	{ v274_d0 sc_out sc_lv 32 signal 16 } 
	{ v274_q0 sc_in sc_lv 32 signal 16 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v258_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v258", "role": "address0" }} , 
 	{ "name": "v258_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v258", "role": "ce0" }} , 
 	{ "name": "v258_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v258", "role": "q0" }} , 
 	{ "name": "v259_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v259", "role": "address0" }} , 
 	{ "name": "v259_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v259", "role": "ce0" }} , 
 	{ "name": "v259_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v259", "role": "q0" }} , 
 	{ "name": "v260", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v260", "role": "default" }} , 
 	{ "name": "v261_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v261", "role": "address0" }} , 
 	{ "name": "v261_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v261", "role": "ce0" }} , 
 	{ "name": "v261_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v261", "role": "q0" }} , 
 	{ "name": "v262", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v262", "role": "default" }} , 
 	{ "name": "v263_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v263", "role": "address0" }} , 
 	{ "name": "v263_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v263", "role": "ce0" }} , 
 	{ "name": "v263_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v263", "role": "q0" }} , 
 	{ "name": "v264", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v264", "role": "default" }} , 
 	{ "name": "v265_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v265", "role": "address0" }} , 
 	{ "name": "v265_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v265", "role": "ce0" }} , 
 	{ "name": "v265_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v265", "role": "q0" }} , 
 	{ "name": "v266", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v266", "role": "default" }} , 
 	{ "name": "v267_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v267", "role": "address0" }} , 
 	{ "name": "v267_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v267", "role": "ce0" }} , 
 	{ "name": "v267_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v267", "role": "q0" }} , 
 	{ "name": "v268_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v268", "role": "address0" }} , 
 	{ "name": "v268_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v268", "role": "ce0" }} , 
 	{ "name": "v268_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v268", "role": "q0" }} , 
 	{ "name": "v269_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v269", "role": "address0" }} , 
 	{ "name": "v269_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v269", "role": "ce0" }} , 
 	{ "name": "v269_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v269", "role": "q0" }} , 
 	{ "name": "v270_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v270", "role": "address0" }} , 
 	{ "name": "v270_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v270", "role": "ce0" }} , 
 	{ "name": "v270_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v270", "role": "q0" }} , 
 	{ "name": "v271_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "v271", "role": "address0" }} , 
 	{ "name": "v271_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v271", "role": "ce0" }} , 
 	{ "name": "v271_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v271", "role": "q0" }} , 
 	{ "name": "v272_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "v272", "role": "address0" }} , 
 	{ "name": "v272_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v272", "role": "ce0" }} , 
 	{ "name": "v272_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v272", "role": "q0" }} , 
 	{ "name": "v273", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v273", "role": "default" }} , 
 	{ "name": "v274_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v274", "role": "address0" }} , 
 	{ "name": "v274_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v274", "role": "ce0" }} , 
 	{ "name": "v274_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v274", "role": "we0" }} , 
 	{ "name": "v274_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v274", "role": "d0" }} , 
 	{ "name": "v274_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v274", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "39", "58", "69", "74", "79", "82", "85", "86", "87", "88", "89"],
		"CDFG" : "attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26559620", "EstimateLatencyMax" : "139805828",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state63", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_fu_764"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_fu_784"},
			{"State" : "ap_ST_fsm_state72", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_fu_784"},
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_apply_rotary_pos_emb_fu_808"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_822"},
			{"State" : "ap_ST_fsm_state74", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_822"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_830"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_830"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_830"},
			{"State" : "ap_ST_fsm_state76", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_830"},
			{"State" : "ap_ST_fsm_state32", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_fu_846"},
			{"State" : "ap_ST_fsm_state66", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float2_fu_854"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_861"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_861"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transpose_last_two_d_fu_871"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_878"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_878"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_878"}],
		"Port" : [
			{"Name" : "v258", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "v0"}]},
			{"Name" : "v259", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_linear_forward_no_mu_fu_830", "Port" : "v79"}]},
			{"Name" : "v260", "Type" : "None", "Direction" : "I"},
			{"Name" : "v261", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_linear_forward_no_mu_fu_830", "Port" : "v79"}]},
			{"Name" : "v262", "Type" : "None", "Direction" : "I"},
			{"Name" : "v263", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_linear_forward_no_mu_fu_830", "Port" : "v79"}]},
			{"Name" : "v264", "Type" : "None", "Direction" : "I"},
			{"Name" : "v265", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_linear_forward_no_mu_fu_830", "Port" : "v79"}]},
			{"Name" : "v266", "Type" : "None", "Direction" : "I"},
			{"Name" : "v267", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "58", "SubInstance" : "grp_apply_rotary_pos_emb_fu_808", "Port" : "v157"}]},
			{"Name" : "v268", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "58", "SubInstance" : "grp_apply_rotary_pos_emb_fu_808", "Port" : "v158"}]},
			{"Name" : "v269", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "v1"}]},
			{"Name" : "v270", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "v1"}]},
			{"Name" : "v271", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "grp_cache_update_fu_861", "Port" : "v187"}]},
			{"Name" : "v272", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "grp_cache_update_fu_861", "Port" : "v187"}]},
			{"Name" : "v273", "Type" : "None", "Direction" : "I"},
			{"Name" : "v274", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_linear_forward_no_mu_fu_830", "Port" : "v81"}]},
			{"Name" : "pow_reduce_anonymo_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "pow_reduce_anonymo_7"},
					{"ID" : "20", "SubInstance" : "grp_softmax_fu_764", "Port" : "pow_reduce_anonymo_7"}]},
			{"Name" : "pow_reduce_anonymo_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "pow_reduce_anonymo_6"},
					{"ID" : "20", "SubInstance" : "grp_softmax_fu_764", "Port" : "pow_reduce_anonymo_6"}]},
			{"Name" : "pow_reduce_anonymo_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "pow_reduce_anonymo_9"},
					{"ID" : "20", "SubInstance" : "grp_softmax_fu_764", "Port" : "pow_reduce_anonymo_9"}]},
			{"Name" : "pow_reduce_anonymo_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "pow_reduce_anonymo_10"},
					{"ID" : "20", "SubInstance" : "grp_softmax_fu_764", "Port" : "pow_reduce_anonymo_10"}]},
			{"Name" : "pow_reduce_anonymo_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "pow_reduce_anonymo_8"},
					{"ID" : "20", "SubInstance" : "grp_softmax_fu_764", "Port" : "pow_reduce_anonymo_8"}]},
			{"Name" : "pow_reduce_anonymo_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "pow_reduce_anonymo_11"},
					{"ID" : "20", "SubInstance" : "grp_softmax_fu_764", "Port" : "pow_reduce_anonymo_11"}]},
			{"Name" : "pow_reduce_anonymo", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_rms_norm_fu_784", "Port" : "pow_reduce_anonymo"},
					{"ID" : "20", "SubInstance" : "grp_softmax_fu_764", "Port" : "pow_reduce_anonymo"}]},
			{"Name" : "quantized_hidden_sta", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_linear_forward_no_mu_fu_830", "Port" : "v77_0"},
					{"ID" : "69", "SubInstance" : "grp_quantize_activation_fu_822", "Port" : "v24_0"}]},
			{"Name" : "q_proj_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_reshape_2D_to_3D_fu_878", "Port" : "v142_0"},
					{"ID" : "58", "SubInstance" : "grp_apply_rotary_pos_emb_fu_808", "Port" : "q_proj_0"}]},
			{"Name" : "k_proj_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_reshape_2D_to_3D_fu_878", "Port" : "v142_0"},
					{"ID" : "58", "SubInstance" : "grp_apply_rotary_pos_emb_fu_808", "Port" : "k_proj_0"}]},
			{"Name" : "v_proj_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_reshape_2D_to_3D_fu_878", "Port" : "v142_0"},
					{"ID" : "85", "SubInstance" : "grp_cache_update_fu_861", "Port" : "v188_0"}]},
			{"Name" : "k_proj_transposed", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "79", "SubInstance" : "grp_GEMM_3D_float_fu_846", "Port" : "k_proj_transposed"},
					{"ID" : "86", "SubInstance" : "grp_transpose_last_two_d_fu_871", "Port" : "v199"}]},
			{"Name" : "quantized_final_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_linear_forward_no_mu_fu_830", "Port" : "v77_0"},
					{"ID" : "69", "SubInstance" : "grp_quantize_activation_fu_822", "Port" : "v24_0"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_0_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_0_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rms_hidden_states_0_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_re_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_re_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_re_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_0_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_embed_0_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.updated_k_cache_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.updated_v_cache_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_weights_0_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_attn_weights_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_0_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_2D_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rms_attn_output_0_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764", "Parent" : "0", "Child" : ["21", "36", "37", "38"],
		"CDFG" : "softmax",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5954", "EstimateLatencyMax" : "5954",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v219_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v220_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "pow_reduce_anonymo_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_7"}]},
			{"Name" : "pow_reduce_anonymo_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_6"}]},
			{"Name" : "pow_reduce_anonymo_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_9"}]},
			{"Name" : "pow_reduce_anonymo_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_10"}]},
			{"Name" : "pow_reduce_anonymo_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_8"}]},
			{"Name" : "pow_reduce_anonymo_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_11"}]},
			{"Name" : "pow_reduce_anonymo", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo"}]}]},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223", "Parent" : "20", "Child" : ["22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35"],
		"CDFG" : "pow_generic_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "24", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "24",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "base_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "exp", "Type" : "None", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_7_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_6_U", "Parent" : "21"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_9_U", "Parent" : "21"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_10_U", "Parent" : "21"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_8_U", "Parent" : "21"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_11_U", "Parent" : "21"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_U", "Parent" : "21"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.attention_mul_41nibs_U1", "Parent" : "21"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.attention_mul_44njbC_U2", "Parent" : "21"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.attention_mul_45nkbM_U3", "Parent" : "21"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.attention_mul_43slbW_U4", "Parent" : "21"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.attention_mul_mulmb6_U5", "Parent" : "21"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.attention_mac_mulncg_U6", "Parent" : "21"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.grp_pow_generic_float_s_fu_223.attention_mul_mulocq_U7", "Parent" : "21"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.attention_faddfsutde_U78", "Parent" : "20"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.attention_fdiv_32rcU_U79", "Parent" : "20"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_764.attention_fcmp_32sc4_U80", "Parent" : "20"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784", "Parent" : "0", "Child" : ["40", "55", "56", "57"],
		"CDFG" : "rms_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33854", "EstimateLatencyMax" : "33854",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v3_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "pow_reduce_anonymo_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_7"}]},
			{"Name" : "pow_reduce_anonymo_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_6"}]},
			{"Name" : "pow_reduce_anonymo_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_9"}]},
			{"Name" : "pow_reduce_anonymo_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_10"}]},
			{"Name" : "pow_reduce_anonymo_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_8"}]},
			{"Name" : "pow_reduce_anonymo_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_11"}]},
			{"Name" : "pow_reduce_anonymo", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo"}]}]},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137", "Parent" : "39", "Child" : ["41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54"],
		"CDFG" : "pow_generic_float_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "24", "EstimateLatencyMin" : "24", "EstimateLatencyMax" : "24",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "base_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "exp", "Type" : "None", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "pow_reduce_anonymo", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_7_U", "Parent" : "40"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_6_U", "Parent" : "40"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_9_U", "Parent" : "40"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_10_U", "Parent" : "40"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_8_U", "Parent" : "40"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_11_U", "Parent" : "40"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_U", "Parent" : "40"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.attention_mul_41nibs_U1", "Parent" : "40"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.attention_mul_44njbC_U2", "Parent" : "40"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.attention_mul_45nkbM_U3", "Parent" : "40"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.attention_mul_43slbW_U4", "Parent" : "40"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.attention_mul_mulmb6_U5", "Parent" : "40"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.attention_mac_mulncg_U6", "Parent" : "40"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.grp_pow_generic_float_s_fu_137.attention_mul_mulocq_U7", "Parent" : "40"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.attention_fadd_32pcA_U24", "Parent" : "39"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.attention_fmul_32qcK_U25", "Parent" : "39"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_784.attention_fdiv_32rcU_U26", "Parent" : "39"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808", "Parent" : "0", "Child" : ["59", "60", "61", "62", "63", "64", "65", "66", "67", "68"],
		"CDFG" : "apply_rotary_pos_emb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "23173", "EstimateLatencyMax" : "23173",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rotate_half_fu_248"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rotate_half_fu_255"}],
		"Port" : [
			{"Name" : "v157", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v158", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v159_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v160_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "q_proj_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_rotate_half_fu_248", "Port" : "v147_0"}]},
			{"Name" : "k_proj_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "grp_rotate_half_fu_255", "Port" : "v147_0"}]}]},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.rotated_q_0_U", "Parent" : "58"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.rotated_k_0_U", "Parent" : "58"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.grp_rotate_half_fu_248", "Parent" : "58",
		"CDFG" : "rotate_half",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1569", "EstimateLatencyMax" : "1569",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v147_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v148_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.grp_rotate_half_fu_255", "Parent" : "58",
		"CDFG" : "rotate_half",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1569", "EstimateLatencyMax" : "1569",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v147_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v148_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.attention_fadd_32pcA_U55", "Parent" : "58"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.attention_fadd_32pcA_U56", "Parent" : "58"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.attention_fmul_32qcK_U57", "Parent" : "58"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.attention_fmul_32qcK_U58", "Parent" : "58"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.attention_fmul_32qcK_U59", "Parent" : "58"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_808.attention_fmul_32qcK_U60", "Parent" : "58"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_822", "Parent" : "0", "Child" : ["70", "71", "72", "73"],
		"CDFG" : "quantize_activation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "32275", "EstimateLatencyMax" : "32275",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v22_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v24_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_822.attention_fadd_32pcA_U33", "Parent" : "69"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_822.attention_fmul_32qcK_U34", "Parent" : "69"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_822.attention_fdiv_32rcU_U35", "Parent" : "69"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_822.attention_fcmp_32sc4_U36", "Parent" : "69"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_830", "Parent" : "0", "Child" : ["75", "76", "77", "78"],
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
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_830.attention_faddfsutde_U40", "Parent" : "74"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_830.attention_fmul_32qcK_U41", "Parent" : "74"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_830.attention_fdiv_32rcU_U42", "Parent" : "74"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_830.attention_sitofp_udo_U43", "Parent" : "74"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_846", "Parent" : "0", "Child" : ["80", "81"],
		"CDFG" : "GEMM_3D_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "120033", "EstimateLatencyMax" : "120033",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v204_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v206_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "k_proj_transposed", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_846.attention_fadd_32pcA_U73", "Parent" : "79"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_846.attention_fmul_32qcK_U74", "Parent" : "79"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_854", "Parent" : "0", "Child" : ["83", "84"],
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
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_854.attention_fadd_32pcA_U83", "Parent" : "82"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_854.attention_fmul_32qcK_U84", "Parent" : "82"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_fu_861", "Parent" : "0",
		"CDFG" : "cache_update",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18657", "EstimateLatencyMax" : "18657",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v187", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v188_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v189", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transpose_last_two_d_fu_871", "Parent" : "0",
		"CDFG" : "transpose_last_two_d",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18657", "EstimateLatencyMax" : "18657",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v198", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v199", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_reshape_2D_to_3D_fu_878", "Parent" : "0",
		"CDFG" : "reshape_2D_to_3D",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3105", "EstimateLatencyMax" : "3105",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v141", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v142_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fadd_32pcA_U88", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fdiv_32rcU_U89", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	attention {
		v258 {Type I LastRead 62 FirstWrite -1}
		v259 {Type I LastRead 5 FirstWrite -1}
		v260 {Type I LastRead 0 FirstWrite -1}
		v261 {Type I LastRead 5 FirstWrite -1}
		v262 {Type I LastRead 0 FirstWrite -1}
		v263 {Type I LastRead 5 FirstWrite -1}
		v264 {Type I LastRead 0 FirstWrite -1}
		v265 {Type I LastRead 5 FirstWrite -1}
		v266 {Type I LastRead 0 FirstWrite -1}
		v267 {Type I LastRead 5 FirstWrite -1}
		v268 {Type I LastRead 5 FirstWrite -1}
		v269 {Type I LastRead 62 FirstWrite -1}
		v270 {Type I LastRead 62 FirstWrite -1}
		v271 {Type I LastRead 3 FirstWrite -1}
		v272 {Type I LastRead 3 FirstWrite -1}
		v273 {Type I LastRead -1 FirstWrite -1}
		v274 {Type IO LastRead 14 FirstWrite 20}
		pow_reduce_anonymo_7 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_6 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_9 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_10 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_8 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_11 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta {Type IO LastRead -1 FirstWrite -1}
		q_proj_0 {Type IO LastRead -1 FirstWrite -1}
		k_proj_0 {Type IO LastRead -1 FirstWrite -1}
		v_proj_0 {Type IO LastRead -1 FirstWrite -1}
		k_proj_transposed {Type IO LastRead -1 FirstWrite -1}
		quantized_final_outp {Type IO LastRead -1 FirstWrite -1}}
	softmax {
		v219_0 {Type I LastRead 2 FirstWrite -1}
		v220_0 {Type IO LastRead 5 FirstWrite 3}
		pow_reduce_anonymo_7 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_6 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_9 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_10 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_8 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_11 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo {Type I LastRead -1 FirstWrite -1}}
	pow_generic_float_s {
		base_r {Type I LastRead 0 FirstWrite -1}
		exp {Type I LastRead 0 FirstWrite -1}
		pow_reduce_anonymo_7 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_6 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_9 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_10 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_8 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_11 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo {Type I LastRead -1 FirstWrite -1}}
	rms_norm {
		v0 {Type I LastRead 62 FirstWrite -1}
		v1 {Type I LastRead 62 FirstWrite -1}
		v3_0 {Type O LastRead -1 FirstWrite 72}
		pow_reduce_anonymo_7 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_6 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_9 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_10 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_8 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_11 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo {Type I LastRead -1 FirstWrite -1}}
	pow_generic_float_s {
		base_r {Type I LastRead 0 FirstWrite -1}
		exp {Type I LastRead 0 FirstWrite -1}
		pow_reduce_anonymo_7 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_6 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_9 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_10 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_8 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_11 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo {Type I LastRead -1 FirstWrite -1}}
	apply_rotary_pos_emb {
		v157 {Type I LastRead 5 FirstWrite -1}
		v158 {Type I LastRead 5 FirstWrite -1}
		v159_0 {Type O LastRead -1 FirstWrite 16}
		v160_0 {Type O LastRead -1 FirstWrite 16}
		q_proj_0 {Type I LastRead 5 FirstWrite -1}
		k_proj_0 {Type I LastRead 5 FirstWrite -1}}
	rotate_half {
		v147_0 {Type I LastRead 3 FirstWrite -1}
		v148_0 {Type O LastRead -1 FirstWrite 3}}
	rotate_half {
		v147_0 {Type I LastRead 3 FirstWrite -1}
		v148_0 {Type O LastRead -1 FirstWrite 3}}
	quantize_activation {
		v22_0 {Type I LastRead 19 FirstWrite -1}
		v24_0 {Type O LastRead -1 FirstWrite 34}}
	linear_forward_no_mu {
		v77_0 {Type I LastRead 8 FirstWrite -1}
		p_read {Type I LastRead 0 FirstWrite -1}
		v79 {Type I LastRead 5 FirstWrite -1}
		v80 {Type I LastRead 0 FirstWrite -1}
		v81 {Type IO LastRead 14 FirstWrite 20}}
	GEMM_3D_float {
		v204_0 {Type I LastRead 4 FirstWrite -1}
		v206_0 {Type IO LastRead 8 FirstWrite 15}
		k_proj_transposed {Type I LastRead 4 FirstWrite -1}}
	GEMM_3D_float2 {
		v246_0 {Type I LastRead 4 FirstWrite -1}
		v247 {Type I LastRead 4 FirstWrite -1}
		v248_0 {Type IO LastRead 8 FirstWrite 15}}
	cache_update {
		v187 {Type I LastRead 3 FirstWrite -1}
		v188_0 {Type I LastRead 3 FirstWrite -1}
		v189 {Type O LastRead -1 FirstWrite 4}}
	transpose_last_two_d {
		v198 {Type I LastRead 3 FirstWrite -1}
		v199 {Type O LastRead -1 FirstWrite 4}}
	reshape_2D_to_3D {
		v141 {Type I LastRead 2 FirstWrite -1}
		v142_0 {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "26559620", "Max" : "139805828"}
	, {"Name" : "Interval", "Min" : "26559621", "Max" : "139805829"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v258 { ap_memory {  { v258_address0 mem_address 1 11 }  { v258_ce0 mem_ce 1 1 }  { v258_q0 mem_dout 0 32 } } }
	v259 { ap_memory {  { v259_address0 mem_address 1 20 }  { v259_ce0 mem_ce 1 1 }  { v259_q0 mem_dout 0 8 } } }
	v260 { ap_none {  { v260 in_data 0 32 } } }
	v261 { ap_memory {  { v261_address0 mem_address 1 20 }  { v261_ce0 mem_ce 1 1 }  { v261_q0 mem_dout 0 8 } } }
	v262 { ap_none {  { v262 in_data 0 32 } } }
	v263 { ap_memory {  { v263_address0 mem_address 1 20 }  { v263_ce0 mem_ce 1 1 }  { v263_q0 mem_dout 0 8 } } }
	v264 { ap_none {  { v264 in_data 0 32 } } }
	v265 { ap_memory {  { v265_address0 mem_address 1 20 }  { v265_ce0 mem_ce 1 1 }  { v265_q0 mem_dout 0 8 } } }
	v266 { ap_none {  { v266 in_data 0 32 } } }
	v267 { ap_memory {  { v267_address0 mem_address 1 10 }  { v267_ce0 mem_ce 1 1 }  { v267_q0 mem_dout 0 32 } } }
	v268 { ap_memory {  { v268_address0 mem_address 1 10 }  { v268_ce0 mem_ce 1 1 }  { v268_q0 mem_dout 0 32 } } }
	v269 { ap_memory {  { v269_address0 mem_address 1 11 }  { v269_ce0 mem_ce 1 1 }  { v269_q0 mem_dout 0 32 } } }
	v270 { ap_memory {  { v270_address0 mem_address 1 11 }  { v270_ce0 mem_ce 1 1 }  { v270_q0 mem_dout 0 32 } } }
	v271 { ap_memory {  { v271_address0 mem_address 1 13 }  { v271_ce0 mem_ce 1 1 }  { v271_q0 mem_dout 0 32 } } }
	v272 { ap_memory {  { v272_address0 mem_address 1 13 }  { v272_ce0 mem_ce 1 1 }  { v272_q0 mem_dout 0 32 } } }
	v273 { ap_none {  { v273 in_data 0 32 } } }
	v274 { ap_memory {  { v274_address0 mem_address 1 11 }  { v274_ce0 mem_ce 1 1 }  { v274_we0 mem_we 1 1 }  { v274_d0 mem_din 1 32 }  { v274_q0 mem_dout 0 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
