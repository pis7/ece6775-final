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
	{ v252_V int 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v253 int 8 regular {array 589824 { 1 1 } 1 1 }  }
	{ v254_V int 32 regular  }
	{ v255 int 8 regular {array 589824 { 1 1 } 1 1 }  }
	{ v256_V int 32 regular  }
	{ v257 int 8 regular {array 589824 { 1 1 } 1 1 }  }
	{ v258_V int 32 regular  }
	{ v259 int 8 regular {array 589824 { 1 1 } 1 1 }  }
	{ v260_V int 32 regular  }
	{ v261_V int 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v262_V int 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v263_V int 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v264_V int 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v265_V int 32 regular {array 7680 { 1 3 } 1 1 }  }
	{ v266_V int 32 regular {array 7680 { 1 3 } 1 1 }  }
	{ v267 int 32 unused  }
	{ v268_V int 32 regular {array 1536 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v252_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v252.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v253", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v253","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 383,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v254_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v254.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v255", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v255","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 383,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v256_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v256.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v257", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v257","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 383,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v258_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v258.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v259", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v259","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 383,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v260_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v260.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v261_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v261.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v262_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v262.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v263_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v263.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v264_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v264.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v265_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v265.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 15,"step" : 1},{"low" : 0,"up" : 4,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v266_V", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v266.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 15,"step" : 1},{"low" : 0,"up" : 4,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v267", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v267","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v268_V", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v268.V","cData": "int32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 60
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v252_V_address0 sc_out sc_lv 11 signal 0 } 
	{ v252_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ v252_V_q0 sc_in sc_lv 32 signal 0 } 
	{ v253_address0 sc_out sc_lv 20 signal 1 } 
	{ v253_ce0 sc_out sc_logic 1 signal 1 } 
	{ v253_q0 sc_in sc_lv 8 signal 1 } 
	{ v253_address1 sc_out sc_lv 20 signal 1 } 
	{ v253_ce1 sc_out sc_logic 1 signal 1 } 
	{ v253_q1 sc_in sc_lv 8 signal 1 } 
	{ v254_V sc_in sc_lv 32 signal 2 } 
	{ v255_address0 sc_out sc_lv 20 signal 3 } 
	{ v255_ce0 sc_out sc_logic 1 signal 3 } 
	{ v255_q0 sc_in sc_lv 8 signal 3 } 
	{ v255_address1 sc_out sc_lv 20 signal 3 } 
	{ v255_ce1 sc_out sc_logic 1 signal 3 } 
	{ v255_q1 sc_in sc_lv 8 signal 3 } 
	{ v256_V sc_in sc_lv 32 signal 4 } 
	{ v257_address0 sc_out sc_lv 20 signal 5 } 
	{ v257_ce0 sc_out sc_logic 1 signal 5 } 
	{ v257_q0 sc_in sc_lv 8 signal 5 } 
	{ v257_address1 sc_out sc_lv 20 signal 5 } 
	{ v257_ce1 sc_out sc_logic 1 signal 5 } 
	{ v257_q1 sc_in sc_lv 8 signal 5 } 
	{ v258_V sc_in sc_lv 32 signal 6 } 
	{ v259_address0 sc_out sc_lv 20 signal 7 } 
	{ v259_ce0 sc_out sc_logic 1 signal 7 } 
	{ v259_q0 sc_in sc_lv 8 signal 7 } 
	{ v259_address1 sc_out sc_lv 20 signal 7 } 
	{ v259_ce1 sc_out sc_logic 1 signal 7 } 
	{ v259_q1 sc_in sc_lv 8 signal 7 } 
	{ v260_V sc_in sc_lv 32 signal 8 } 
	{ v261_V_address0 sc_out sc_lv 10 signal 9 } 
	{ v261_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ v261_V_q0 sc_in sc_lv 32 signal 9 } 
	{ v262_V_address0 sc_out sc_lv 10 signal 10 } 
	{ v262_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ v262_V_q0 sc_in sc_lv 32 signal 10 } 
	{ v263_V_address0 sc_out sc_lv 11 signal 11 } 
	{ v263_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ v263_V_q0 sc_in sc_lv 32 signal 11 } 
	{ v264_V_address0 sc_out sc_lv 11 signal 12 } 
	{ v264_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ v264_V_q0 sc_in sc_lv 32 signal 12 } 
	{ v265_V_address0 sc_out sc_lv 13 signal 13 } 
	{ v265_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ v265_V_q0 sc_in sc_lv 32 signal 13 } 
	{ v266_V_address0 sc_out sc_lv 13 signal 14 } 
	{ v266_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ v266_V_q0 sc_in sc_lv 32 signal 14 } 
	{ v267 sc_in sc_lv 32 signal 15 } 
	{ v268_V_address0 sc_out sc_lv 11 signal 16 } 
	{ v268_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ v268_V_we0 sc_out sc_logic 1 signal 16 } 
	{ v268_V_d0 sc_out sc_lv 32 signal 16 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v252_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v252_V", "role": "address0" }} , 
 	{ "name": "v252_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v252_V", "role": "ce0" }} , 
 	{ "name": "v252_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v252_V", "role": "q0" }} , 
 	{ "name": "v253_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v253", "role": "address0" }} , 
 	{ "name": "v253_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v253", "role": "ce0" }} , 
 	{ "name": "v253_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v253", "role": "q0" }} , 
 	{ "name": "v253_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v253", "role": "address1" }} , 
 	{ "name": "v253_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v253", "role": "ce1" }} , 
 	{ "name": "v253_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v253", "role": "q1" }} , 
 	{ "name": "v254_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v254_V", "role": "default" }} , 
 	{ "name": "v255_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v255", "role": "address0" }} , 
 	{ "name": "v255_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v255", "role": "ce0" }} , 
 	{ "name": "v255_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v255", "role": "q0" }} , 
 	{ "name": "v255_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v255", "role": "address1" }} , 
 	{ "name": "v255_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v255", "role": "ce1" }} , 
 	{ "name": "v255_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v255", "role": "q1" }} , 
 	{ "name": "v256_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v256_V", "role": "default" }} , 
 	{ "name": "v257_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v257", "role": "address0" }} , 
 	{ "name": "v257_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v257", "role": "ce0" }} , 
 	{ "name": "v257_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v257", "role": "q0" }} , 
 	{ "name": "v257_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v257", "role": "address1" }} , 
 	{ "name": "v257_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v257", "role": "ce1" }} , 
 	{ "name": "v257_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v257", "role": "q1" }} , 
 	{ "name": "v258_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v258_V", "role": "default" }} , 
 	{ "name": "v259_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v259", "role": "address0" }} , 
 	{ "name": "v259_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v259", "role": "ce0" }} , 
 	{ "name": "v259_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v259", "role": "q0" }} , 
 	{ "name": "v259_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":20, "type": "signal", "bundle":{"name": "v259", "role": "address1" }} , 
 	{ "name": "v259_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v259", "role": "ce1" }} , 
 	{ "name": "v259_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v259", "role": "q1" }} , 
 	{ "name": "v260_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v260_V", "role": "default" }} , 
 	{ "name": "v261_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v261_V", "role": "address0" }} , 
 	{ "name": "v261_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v261_V", "role": "ce0" }} , 
 	{ "name": "v261_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v261_V", "role": "q0" }} , 
 	{ "name": "v262_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v262_V", "role": "address0" }} , 
 	{ "name": "v262_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v262_V", "role": "ce0" }} , 
 	{ "name": "v262_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v262_V", "role": "q0" }} , 
 	{ "name": "v263_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v263_V", "role": "address0" }} , 
 	{ "name": "v263_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v263_V", "role": "ce0" }} , 
 	{ "name": "v263_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v263_V", "role": "q0" }} , 
 	{ "name": "v264_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v264_V", "role": "address0" }} , 
 	{ "name": "v264_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v264_V", "role": "ce0" }} , 
 	{ "name": "v264_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v264_V", "role": "q0" }} , 
 	{ "name": "v265_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "v265_V", "role": "address0" }} , 
 	{ "name": "v265_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v265_V", "role": "ce0" }} , 
 	{ "name": "v265_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v265_V", "role": "q0" }} , 
 	{ "name": "v266_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "v266_V", "role": "address0" }} , 
 	{ "name": "v266_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v266_V", "role": "ce0" }} , 
 	{ "name": "v266_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v266_V", "role": "q0" }} , 
 	{ "name": "v267", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v267", "role": "default" }} , 
 	{ "name": "v268_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v268_V", "role": "address0" }} , 
 	{ "name": "v268_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v268_V", "role": "ce0" }} , 
 	{ "name": "v268_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v268_V", "role": "we0" }} , 
 	{ "name": "v268_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v268_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "28", "54", "79", "84", "86", "87", "88", "89", "90", "91"],
		"CDFG" : "attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1423801", "EstimateLatencyMax" : "1432229",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_778"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_778"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_778"},
			{"State" : "ap_ST_fsm_state55", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_778"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_fu_803"},
			{"State" : "ap_ST_fsm_state51", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_fu_803"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_fu_833"},
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_apply_rotary_pos_emb_fu_859"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_873"},
			{"State" : "ap_ST_fsm_state53", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_873"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_890"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_890"},
			{"State" : "ap_ST_fsm_state32", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_fu_900"},
			{"State" : "ap_ST_fsm_state45", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float2_fu_908"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transpose_last_two_d_fu_915"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_922"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_922"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_922"}],
		"Port" : [
			{"Name" : "v252_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "v0_V"}]},
			{"Name" : "v253", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v79"}]},
			{"Name" : "v254_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "v255", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v79"}]},
			{"Name" : "v256_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "v257", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v79"}]},
			{"Name" : "v258_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "v259", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v79"}]},
			{"Name" : "v260_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "v261_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "79", "SubInstance" : "grp_apply_rotary_pos_emb_fu_859", "Port" : "v151_V"}]},
			{"Name" : "v262_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "79", "SubInstance" : "grp_apply_rotary_pos_emb_fu_859", "Port" : "v152_V"}]},
			{"Name" : "v263_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "v1_V"}]},
			{"Name" : "v264_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "v1_V"}]},
			{"Name" : "v265_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "86", "SubInstance" : "grp_cache_update_fu_890", "Port" : "v181_V"}]},
			{"Name" : "v266_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "86", "SubInstance" : "grp_cache_update_fu_890", "Port" : "v181_V"}]},
			{"Name" : "v267", "Type" : "None", "Direction" : "I"},
			{"Name" : "v268_V", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v81_V"}]},
			{"Name" : "log_apfixed_reduce_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "log_apfixed_reduce_6"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "log_apfixed_reduce_6"}]},
			{"Name" : "log_apfixed_reduce_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "log_apfixed_reduce_5"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "log_apfixed_reduce_5"}]},
			{"Name" : "log_apfixed_reduce_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "log_apfixed_reduce_9"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "log_apfixed_reduce_9"}]},
			{"Name" : "log_apfixed_reduce_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "log_apfixed_reduce_s"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "log_apfixed_reduce_s"}]},
			{"Name" : "log_apfixed_reduce_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "log_apfixed_reduce_7"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "log_apfixed_reduce_7"}]},
			{"Name" : "log_apfixed_reduce_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "log_apfixed_reduce_8"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "log_apfixed_reduce_8"}]},
			{"Name" : "f_x_msb_4_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "f_x_msb_4_table_V"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "f_x_msb_4_table_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "f_x_msb_3_table_V"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "f_x_msb_2_table_V"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_softmax_fu_833", "Port" : "exp_x_msb_1_table_V"},
					{"ID" : "28", "SubInstance" : "grp_rms_norm_fu_803", "Port" : "exp_x_msb_1_table_V"}]},
			{"Name" : "quantized_hidden_sta_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v77_0_0"},
					{"ID" : "84", "SubInstance" : "grp_quantize_activation_fu_873", "Port" : "v24_0_0"}]},
			{"Name" : "quantized_hidden_sta_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v77_1_0"},
					{"ID" : "84", "SubInstance" : "grp_quantize_activation_fu_873", "Port" : "v24_1_0"}]},
			{"Name" : "quantized_hidden_sta_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v77_2_0"},
					{"ID" : "84", "SubInstance" : "grp_quantize_activation_fu_873", "Port" : "v24_2_0"}]},
			{"Name" : "quantized_hidden_sta", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v77_3_0"},
					{"ID" : "84", "SubInstance" : "grp_quantize_activation_fu_873", "Port" : "v24_3_0"}]},
			{"Name" : "q_proj_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "grp_reshape_2D_to_3D_fu_922", "Port" : "v136_0_V"},
					{"ID" : "79", "SubInstance" : "grp_apply_rotary_pos_emb_fu_859", "Port" : "q_proj_V_0"}]},
			{"Name" : "k_proj_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "grp_reshape_2D_to_3D_fu_922", "Port" : "v136_0_V"},
					{"ID" : "79", "SubInstance" : "grp_apply_rotary_pos_emb_fu_859", "Port" : "k_proj_V_0"}]},
			{"Name" : "v_proj_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "grp_reshape_2D_to_3D_fu_922", "Port" : "v136_0_V"},
					{"ID" : "86", "SubInstance" : "grp_cache_update_fu_890", "Port" : "v182_0_V"}]},
			{"Name" : "k_proj_transposed_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_GEMM_3D_float_fu_900", "Port" : "k_proj_transposed_V"},
					{"ID" : "89", "SubInstance" : "grp_transpose_last_two_d_fu_915", "Port" : "v193_V"}]},
			{"Name" : "quantized_final_outp_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v77_0_0"},
					{"ID" : "84", "SubInstance" : "grp_quantize_activation_fu_873", "Port" : "v24_0_0"}]},
			{"Name" : "quantized_final_outp_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v77_1_0"},
					{"ID" : "84", "SubInstance" : "grp_quantize_activation_fu_873", "Port" : "v24_1_0"}]},
			{"Name" : "quantized_final_outp_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v77_2_0"},
					{"ID" : "84", "SubInstance" : "grp_quantize_activation_fu_873", "Port" : "v24_2_0"}]},
			{"Name" : "quantized_final_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_linear_forward_no_mu_fu_778", "Port" : "v77_3_0"},
					{"ID" : "84", "SubInstance" : "grp_quantize_activation_fu_873", "Port" : "v24_3_0"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_3_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_2_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_V_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_V_0_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_V_0_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_3_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_2_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_1_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rms_hidden_states_0_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_re_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_re_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_re_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_0_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_embed_0_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.updated_k_cache_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.updated_v_cache_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_weights_0_V_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_attn_weights_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_0_V_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_2D_V_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rms_attn_output_0_V_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_778", "Parent" : "0", "Child" : ["27"],
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
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_778.attention_sdiv_43yd2_U49", "Parent" : "26"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803", "Parent" : "0", "Child" : ["29", "52", "53"],
		"CDFG" : "rms_norm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "13861", "EstimateLatencyMax" : "13947",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pow_32_20_s_fu_163"}],
		"Port" : [
			{"Name" : "v0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "log_apfixed_reduce_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "log_apfixed_reduce_6"}]},
			{"Name" : "log_apfixed_reduce_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "log_apfixed_reduce_5"}]},
			{"Name" : "log_apfixed_reduce_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "log_apfixed_reduce_9"}]},
			{"Name" : "log_apfixed_reduce_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "log_apfixed_reduce_s"}]},
			{"Name" : "log_apfixed_reduce_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "log_apfixed_reduce_7"}]},
			{"Name" : "log_apfixed_reduce_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "log_apfixed_reduce_8"}]},
			{"Name" : "f_x_msb_4_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "f_x_msb_4_table_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_pow_32_20_s_fu_163", "Port" : "exp_x_msb_1_table_V"}]}]},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163", "Parent" : "28", "Child" : ["30", "43", "51"],
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
					{"ID" : "30", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_6"}]},
			{"Name" : "log_apfixed_reduce_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_5"}]},
			{"Name" : "log_apfixed_reduce_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_9"}]},
			{"Name" : "log_apfixed_reduce_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_s"}]},
			{"Name" : "log_apfixed_reduce_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_7"}]},
			{"Name" : "log_apfixed_reduce_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_8"}]},
			{"Name" : "f_x_msb_4_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "f_x_msb_4_table_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "exp_x_msb_1_table_V"}]}]},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232", "Parent" : "29", "Child" : ["31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42"],
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
	{"ID" : "31", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.log_apfixed_reduce_6_U", "Parent" : "30"},
	{"ID" : "32", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.log_apfixed_reduce_5_U", "Parent" : "30"},
	{"ID" : "33", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.log_apfixed_reduce_9_U", "Parent" : "30"},
	{"ID" : "34", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.log_apfixed_reduce_s_U", "Parent" : "30"},
	{"ID" : "35", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.log_apfixed_reduce_7_U", "Parent" : "30"},
	{"ID" : "36", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.log_apfixed_reduce_8_U", "Parent" : "30"},
	{"ID" : "37", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.attention_mul_85nhbi_U1", "Parent" : "30"},
	{"ID" : "38", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.attention_mul_68nibs_U2", "Parent" : "30"},
	{"ID" : "39", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.attention_mul_60njbC_U3", "Parent" : "30"},
	{"ID" : "40", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.attention_mul_55nkbM_U4", "Parent" : "30"},
	{"ID" : "41", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.attention_mul_7s_lbW_U5", "Parent" : "30"},
	{"ID" : "42", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_log_75_21_s_fu_232.attention_mul_50nmb6_U6", "Parent" : "30"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_exp_core_32_20_54_s_fu_249", "Parent" : "29", "Child" : ["44", "45", "46", "47", "48", "49", "50"],
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
	{"ID" : "44", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_exp_core_32_20_54_s_fu_249.f_x_msb_4_table_V_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_exp_core_32_20_54_s_fu_249.f_x_msb_3_table_V_U", "Parent" : "43"},
	{"ID" : "46", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_exp_core_32_20_54_s_fu_249.f_x_msb_2_table_V_U", "Parent" : "43"},
	{"ID" : "47", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_exp_core_32_20_54_s_fu_249.exp_x_msb_1_table_V_U", "Parent" : "43"},
	{"ID" : "48", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_exp_core_32_20_54_s_fu_249.attention_mul_36nrcU_U20", "Parent" : "43"},
	{"ID" : "49", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_exp_core_32_20_54_s_fu_249.attention_mul_48nsc4_U21", "Parent" : "43"},
	{"ID" : "50", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.grp_exp_core_32_20_54_s_fu_249.attention_mul_50ntde_U22", "Parent" : "43"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.grp_pow_32_20_s_fu_163.attention_mul_60sudo_U31", "Parent" : "29"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.attention_mul_46nvdy_U35", "Parent" : "28"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_803.attention_sdiv_27wdI_U36", "Parent" : "28"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833", "Parent" : "0", "Child" : ["55", "78"],
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
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_6"}]},
			{"Name" : "log_apfixed_reduce_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_5"}]},
			{"Name" : "log_apfixed_reduce_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_9"}]},
			{"Name" : "log_apfixed_reduce_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_s"}]},
			{"Name" : "log_apfixed_reduce_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_7"}]},
			{"Name" : "log_apfixed_reduce_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "log_apfixed_reduce_8"}]},
			{"Name" : "f_x_msb_4_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "f_x_msb_4_table_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_pow_32_20_s_fu_223", "Port" : "exp_x_msb_1_table_V"}]}]},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223", "Parent" : "54", "Child" : ["56", "69", "77"],
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
					{"ID" : "56", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_6"}]},
			{"Name" : "log_apfixed_reduce_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "56", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_5"}]},
			{"Name" : "log_apfixed_reduce_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "56", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_9"}]},
			{"Name" : "log_apfixed_reduce_s", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "56", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_s"}]},
			{"Name" : "log_apfixed_reduce_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "56", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_7"}]},
			{"Name" : "log_apfixed_reduce_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "56", "SubInstance" : "grp_log_75_21_s_fu_232", "Port" : "log_apfixed_reduce_8"}]},
			{"Name" : "f_x_msb_4_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "f_x_msb_4_table_V"}]},
			{"Name" : "f_x_msb_3_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "f_x_msb_3_table_V"}]},
			{"Name" : "f_x_msb_2_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "f_x_msb_2_table_V"}]},
			{"Name" : "exp_x_msb_1_table_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_exp_core_32_20_54_s_fu_249", "Port" : "exp_x_msb_1_table_V"}]}]},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232", "Parent" : "55", "Child" : ["57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68"],
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
	{"ID" : "57", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_6_U", "Parent" : "56"},
	{"ID" : "58", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_5_U", "Parent" : "56"},
	{"ID" : "59", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_9_U", "Parent" : "56"},
	{"ID" : "60", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_s_U", "Parent" : "56"},
	{"ID" : "61", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_7_U", "Parent" : "56"},
	{"ID" : "62", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.log_apfixed_reduce_8_U", "Parent" : "56"},
	{"ID" : "63", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_85nhbi_U1", "Parent" : "56"},
	{"ID" : "64", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_68nibs_U2", "Parent" : "56"},
	{"ID" : "65", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_60njbC_U3", "Parent" : "56"},
	{"ID" : "66", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_55nkbM_U4", "Parent" : "56"},
	{"ID" : "67", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_7s_lbW_U5", "Parent" : "56"},
	{"ID" : "68", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_log_75_21_s_fu_232.attention_mul_50nmb6_U6", "Parent" : "56"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249", "Parent" : "55", "Child" : ["70", "71", "72", "73", "74", "75", "76"],
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
	{"ID" : "70", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.f_x_msb_4_table_V_U", "Parent" : "69"},
	{"ID" : "71", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.f_x_msb_3_table_V_U", "Parent" : "69"},
	{"ID" : "72", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.f_x_msb_2_table_V_U", "Parent" : "69"},
	{"ID" : "73", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.exp_x_msb_1_table_V_U", "Parent" : "69"},
	{"ID" : "74", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.attention_mul_36nrcU_U20", "Parent" : "69"},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.attention_mul_48nsc4_U21", "Parent" : "69"},
	{"ID" : "76", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.grp_exp_core_32_20_54_s_fu_249.attention_mul_50ntde_U22", "Parent" : "69"},
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.grp_pow_32_20_s_fu_223.attention_mul_60sudo_U31", "Parent" : "55"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_833.attention_sdiv_44Bew_U78", "Parent" : "54"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_859", "Parent" : "0", "Child" : ["80", "81", "82", "83"],
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
			{"Name" : "v151_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v152_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v153_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v154_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "q_proj_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "82", "SubInstance" : "grp_rotate_half_fu_254", "Port" : "v141_0_V"}]},
			{"Name" : "k_proj_V_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "grp_rotate_half_fu_261", "Port" : "v141_0_V"}]}]},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_859.rotated_q_0_V_U", "Parent" : "79"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_859.rotated_k_0_V_U", "Parent" : "79"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_859.grp_rotate_half_fu_254", "Parent" : "79",
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
			{"Name" : "v141_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v142_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_859.grp_rotate_half_fu_261", "Parent" : "79",
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
			{"Name" : "v141_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v142_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_873", "Parent" : "0", "Child" : ["85"],
		"CDFG" : "quantize_activation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "12325", "EstimateLatencyMax" : "12325",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v22_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v24_0_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v24_1_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v24_2_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v24_3_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_873.attention_udiv_32xdS_U42", "Parent" : "84"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_fu_890", "Parent" : "0",
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
			{"Name" : "v181_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v182_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v183_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_900", "Parent" : "0",
		"CDFG" : "GEMM_3D_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "46305", "EstimateLatencyMax" : "46305",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v198_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v200_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "k_proj_transposed_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_908", "Parent" : "0",
		"CDFG" : "GEMM_3D_float2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "49185", "EstimateLatencyMax" : "49185",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v240_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v241_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v242_0_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transpose_last_two_d_fu_915", "Parent" : "0",
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
			{"Name" : "v192_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v193_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_reshape_2D_to_3D_fu_922", "Parent" : "0",
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
			{"Name" : "v135_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v136_0_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_mul_46nvdy_U85", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	attention {
		v252_V {Type I LastRead 36 FirstWrite -1}
		v253 {Type I LastRead 193 FirstWrite -1}
		v254_V {Type I LastRead 0 FirstWrite -1}
		v255 {Type I LastRead 193 FirstWrite -1}
		v256_V {Type I LastRead 0 FirstWrite -1}
		v257 {Type I LastRead 193 FirstWrite -1}
		v258_V {Type I LastRead 0 FirstWrite -1}
		v259 {Type I LastRead 193 FirstWrite -1}
		v260_V {Type I LastRead 0 FirstWrite -1}
		v261_V {Type I LastRead 5 FirstWrite -1}
		v262_V {Type I LastRead 5 FirstWrite -1}
		v263_V {Type I LastRead 36 FirstWrite -1}
		v264_V {Type I LastRead 36 FirstWrite -1}
		v265_V {Type I LastRead 3 FirstWrite -1}
		v266_V {Type I LastRead 3 FirstWrite -1}
		v267 {Type I LastRead -1 FirstWrite -1}
		v268_V {Type O LastRead -1 FirstWrite 36}
		log_apfixed_reduce_6 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_5 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_9 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_s {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_7 {Type I LastRead -1 FirstWrite -1}
		log_apfixed_reduce_8 {Type I LastRead -1 FirstWrite -1}
		f_x_msb_4_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_3_table_V {Type I LastRead -1 FirstWrite -1}
		f_x_msb_2_table_V {Type I LastRead -1 FirstWrite -1}
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta_3 {Type IO LastRead -1 FirstWrite -1}
		quantized_hidden_sta_2 {Type IO LastRead -1 FirstWrite -1}
		quantized_hidden_sta_1 {Type IO LastRead -1 FirstWrite -1}
		quantized_hidden_sta {Type IO LastRead -1 FirstWrite -1}
		q_proj_V_0 {Type IO LastRead -1 FirstWrite -1}
		k_proj_V_0 {Type IO LastRead -1 FirstWrite -1}
		v_proj_V_0 {Type IO LastRead -1 FirstWrite -1}
		k_proj_transposed_V {Type IO LastRead -1 FirstWrite -1}
		quantized_final_outp_3 {Type IO LastRead -1 FirstWrite -1}
		quantized_final_outp_2 {Type IO LastRead -1 FirstWrite -1}
		quantized_final_outp_1 {Type IO LastRead -1 FirstWrite -1}
		quantized_final_outp {Type IO LastRead -1 FirstWrite -1}}
	linear_forward_no_mu {
		v77_0_0 {Type I LastRead 193 FirstWrite -1}
		v77_1_0 {Type I LastRead 193 FirstWrite -1}
		v77_2_0 {Type I LastRead 193 FirstWrite -1}
		v77_3_0 {Type I LastRead 193 FirstWrite -1}
		v78_0_V_read {Type I LastRead 0 FirstWrite -1}
		v79 {Type I LastRead 193 FirstWrite -1}
		v80_V {Type I LastRead 0 FirstWrite -1}
		v81_V {Type O LastRead -1 FirstWrite 244}}
	rms_norm {
		v0_V {Type I LastRead 36 FirstWrite -1}
		v1_V {Type I LastRead 36 FirstWrite -1}
		v3_0_V {Type O LastRead -1 FirstWrite 40}
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
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
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
		exp_x_msb_1_table_V {Type I LastRead -1 FirstWrite -1}}
	apply_rotary_pos_emb {
		v151_V {Type I LastRead 5 FirstWrite -1}
		v152_V {Type I LastRead 5 FirstWrite -1}
		v153_0_V {Type O LastRead -1 FirstWrite 8}
		v154_0_V {Type O LastRead -1 FirstWrite 8}
		q_proj_V_0 {Type I LastRead 5 FirstWrite -1}
		k_proj_V_0 {Type I LastRead 5 FirstWrite -1}}
	rotate_half {
		v141_0_V {Type I LastRead 3 FirstWrite -1}
		v142_0_V {Type O LastRead -1 FirstWrite 3}}
	rotate_half {
		v141_0_V {Type I LastRead 3 FirstWrite -1}
		v142_0_V {Type O LastRead -1 FirstWrite 3}}
	quantize_activation {
		v22_0_V {Type I LastRead 37 FirstWrite -1}
		v24_0_0 {Type O LastRead -1 FirstWrite 41}
		v24_1_0 {Type O LastRead -1 FirstWrite 41}
		v24_2_0 {Type O LastRead -1 FirstWrite 41}
		v24_3_0 {Type O LastRead -1 FirstWrite 41}}
	cache_update {
		v181_V {Type I LastRead 3 FirstWrite -1}
		v182_0_V {Type I LastRead 3 FirstWrite -1}
		v183_V {Type O LastRead -1 FirstWrite 4}}
	GEMM_3D_float {
		v198_0_V {Type I LastRead 4 FirstWrite -1}
		v200_0_V {Type IO LastRead 5 FirstWrite 7}
		k_proj_transposed_V {Type I LastRead 4 FirstWrite -1}}
	GEMM_3D_float2 {
		v240_0_V {Type I LastRead 4 FirstWrite -1}
		v241_V {Type I LastRead 4 FirstWrite -1}
		v242_0_V {Type IO LastRead 5 FirstWrite 7}}
	transpose_last_two_d {
		v192_V {Type I LastRead 3 FirstWrite -1}
		v193_V {Type O LastRead -1 FirstWrite 4}}
	reshape_2D_to_3D {
		v135_V {Type I LastRead 2 FirstWrite -1}
		v136_0_V {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1423801", "Max" : "1432229"}
	, {"Name" : "Interval", "Min" : "1423802", "Max" : "1432230"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v252_V { ap_memory {  { v252_V_address0 mem_address 1 11 }  { v252_V_ce0 mem_ce 1 1 }  { v252_V_q0 mem_dout 0 32 } } }
	v253 { ap_memory {  { v253_address0 mem_address 1 20 }  { v253_ce0 mem_ce 1 1 }  { v253_q0 mem_dout 0 8 }  { v253_address1 MemPortADDR2 1 20 }  { v253_ce1 MemPortCE2 1 1 }  { v253_q1 MemPortDOUT2 0 8 } } }
	v254_V { ap_none {  { v254_V in_data 0 32 } } }
	v255 { ap_memory {  { v255_address0 mem_address 1 20 }  { v255_ce0 mem_ce 1 1 }  { v255_q0 mem_dout 0 8 }  { v255_address1 MemPortADDR2 1 20 }  { v255_ce1 MemPortCE2 1 1 }  { v255_q1 MemPortDOUT2 0 8 } } }
	v256_V { ap_none {  { v256_V in_data 0 32 } } }
	v257 { ap_memory {  { v257_address0 mem_address 1 20 }  { v257_ce0 mem_ce 1 1 }  { v257_q0 mem_dout 0 8 }  { v257_address1 MemPortADDR2 1 20 }  { v257_ce1 MemPortCE2 1 1 }  { v257_q1 MemPortDOUT2 0 8 } } }
	v258_V { ap_none {  { v258_V in_data 0 32 } } }
	v259 { ap_memory {  { v259_address0 mem_address 1 20 }  { v259_ce0 mem_ce 1 1 }  { v259_q0 mem_dout 0 8 }  { v259_address1 MemPortADDR2 1 20 }  { v259_ce1 MemPortCE2 1 1 }  { v259_q1 MemPortDOUT2 0 8 } } }
	v260_V { ap_none {  { v260_V in_data 0 32 } } }
	v261_V { ap_memory {  { v261_V_address0 mem_address 1 10 }  { v261_V_ce0 mem_ce 1 1 }  { v261_V_q0 mem_dout 0 32 } } }
	v262_V { ap_memory {  { v262_V_address0 mem_address 1 10 }  { v262_V_ce0 mem_ce 1 1 }  { v262_V_q0 mem_dout 0 32 } } }
	v263_V { ap_memory {  { v263_V_address0 mem_address 1 11 }  { v263_V_ce0 mem_ce 1 1 }  { v263_V_q0 mem_dout 0 32 } } }
	v264_V { ap_memory {  { v264_V_address0 mem_address 1 11 }  { v264_V_ce0 mem_ce 1 1 }  { v264_V_q0 mem_dout 0 32 } } }
	v265_V { ap_memory {  { v265_V_address0 mem_address 1 13 }  { v265_V_ce0 mem_ce 1 1 }  { v265_V_q0 mem_dout 0 32 } } }
	v266_V { ap_memory {  { v266_V_address0 mem_address 1 13 }  { v266_V_ce0 mem_ce 1 1 }  { v266_V_q0 mem_dout 0 32 } } }
	v267 { ap_none {  { v267 in_data 0 32 } } }
	v268_V { ap_memory {  { v268_V_address0 mem_address 1 11 }  { v268_V_ce0 mem_ce 1 1 }  { v268_V_we0 mem_we 1 1 }  { v268_V_d0 mem_din 1 32 } } }
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
