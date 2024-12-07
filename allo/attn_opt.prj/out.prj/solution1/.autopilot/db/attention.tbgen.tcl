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
	{ v263 float 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v264_0 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v264_1 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v265 float 32 regular  }
	{ v266_0 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v266_1 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v267 float 32 regular  }
	{ v268_0 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v268_1 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v269 float 32 regular  }
	{ v270_0 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v270_1 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v271 float 32 regular  }
	{ v272 float 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v273 float 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v274 float 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v275 float 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v276 float 32 regular {array 7680 { 1 3 } 1 1 }  }
	{ v277 float 32 regular {array 7680 { 1 3 } 1 1 }  }
	{ v278 int 32 unused  }
	{ v279 float 32 regular {array 1536 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v263", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v263","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v264_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v264","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 382,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v264_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v264","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 383,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v265", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v265","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v266_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v266","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 382,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v266_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v266","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 383,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v267", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v267","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v268_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v268","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 382,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v268_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v268","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 383,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v269", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v269","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v270_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v270","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 382,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v270_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v270","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 383,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v271", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v271","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v272", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v272","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v273", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v273","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v274", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v274","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v275", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v275","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v276", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v276","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 15,"step" : 1},{"low" : 0,"up" : 4,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v277", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v277","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 15,"step" : 1},{"low" : 0,"up" : 4,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v278", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v278","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v279", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v279","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 60
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v263_address0 sc_out sc_lv 11 signal 0 } 
	{ v263_ce0 sc_out sc_logic 1 signal 0 } 
	{ v263_q0 sc_in sc_lv 32 signal 0 } 
	{ v264_0_address0 sc_out sc_lv 19 signal 1 } 
	{ v264_0_ce0 sc_out sc_logic 1 signal 1 } 
	{ v264_0_q0 sc_in sc_lv 8 signal 1 } 
	{ v264_1_address0 sc_out sc_lv 19 signal 2 } 
	{ v264_1_ce0 sc_out sc_logic 1 signal 2 } 
	{ v264_1_q0 sc_in sc_lv 8 signal 2 } 
	{ v265 sc_in sc_lv 32 signal 3 } 
	{ v266_0_address0 sc_out sc_lv 19 signal 4 } 
	{ v266_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ v266_0_q0 sc_in sc_lv 8 signal 4 } 
	{ v266_1_address0 sc_out sc_lv 19 signal 5 } 
	{ v266_1_ce0 sc_out sc_logic 1 signal 5 } 
	{ v266_1_q0 sc_in sc_lv 8 signal 5 } 
	{ v267 sc_in sc_lv 32 signal 6 } 
	{ v268_0_address0 sc_out sc_lv 19 signal 7 } 
	{ v268_0_ce0 sc_out sc_logic 1 signal 7 } 
	{ v268_0_q0 sc_in sc_lv 8 signal 7 } 
	{ v268_1_address0 sc_out sc_lv 19 signal 8 } 
	{ v268_1_ce0 sc_out sc_logic 1 signal 8 } 
	{ v268_1_q0 sc_in sc_lv 8 signal 8 } 
	{ v269 sc_in sc_lv 32 signal 9 } 
	{ v270_0_address0 sc_out sc_lv 19 signal 10 } 
	{ v270_0_ce0 sc_out sc_logic 1 signal 10 } 
	{ v270_0_q0 sc_in sc_lv 8 signal 10 } 
	{ v270_1_address0 sc_out sc_lv 19 signal 11 } 
	{ v270_1_ce0 sc_out sc_logic 1 signal 11 } 
	{ v270_1_q0 sc_in sc_lv 8 signal 11 } 
	{ v271 sc_in sc_lv 32 signal 12 } 
	{ v272_address0 sc_out sc_lv 10 signal 13 } 
	{ v272_ce0 sc_out sc_logic 1 signal 13 } 
	{ v272_q0 sc_in sc_lv 32 signal 13 } 
	{ v273_address0 sc_out sc_lv 10 signal 14 } 
	{ v273_ce0 sc_out sc_logic 1 signal 14 } 
	{ v273_q0 sc_in sc_lv 32 signal 14 } 
	{ v274_address0 sc_out sc_lv 11 signal 15 } 
	{ v274_ce0 sc_out sc_logic 1 signal 15 } 
	{ v274_q0 sc_in sc_lv 32 signal 15 } 
	{ v275_address0 sc_out sc_lv 11 signal 16 } 
	{ v275_ce0 sc_out sc_logic 1 signal 16 } 
	{ v275_q0 sc_in sc_lv 32 signal 16 } 
	{ v276_address0 sc_out sc_lv 13 signal 17 } 
	{ v276_ce0 sc_out sc_logic 1 signal 17 } 
	{ v276_q0 sc_in sc_lv 32 signal 17 } 
	{ v277_address0 sc_out sc_lv 13 signal 18 } 
	{ v277_ce0 sc_out sc_logic 1 signal 18 } 
	{ v277_q0 sc_in sc_lv 32 signal 18 } 
	{ v278 sc_in sc_lv 32 signal 19 } 
	{ v279_address0 sc_out sc_lv 11 signal 20 } 
	{ v279_ce0 sc_out sc_logic 1 signal 20 } 
	{ v279_we0 sc_out sc_logic 1 signal 20 } 
	{ v279_d0 sc_out sc_lv 32 signal 20 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v263_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v263", "role": "address0" }} , 
 	{ "name": "v263_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v263", "role": "ce0" }} , 
 	{ "name": "v263_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v263", "role": "q0" }} , 
 	{ "name": "v264_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v264_0", "role": "address0" }} , 
 	{ "name": "v264_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v264_0", "role": "ce0" }} , 
 	{ "name": "v264_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v264_0", "role": "q0" }} , 
 	{ "name": "v264_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v264_1", "role": "address0" }} , 
 	{ "name": "v264_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v264_1", "role": "ce0" }} , 
 	{ "name": "v264_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v264_1", "role": "q0" }} , 
 	{ "name": "v265", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v265", "role": "default" }} , 
 	{ "name": "v266_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v266_0", "role": "address0" }} , 
 	{ "name": "v266_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v266_0", "role": "ce0" }} , 
 	{ "name": "v266_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v266_0", "role": "q0" }} , 
 	{ "name": "v266_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v266_1", "role": "address0" }} , 
 	{ "name": "v266_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v266_1", "role": "ce0" }} , 
 	{ "name": "v266_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v266_1", "role": "q0" }} , 
 	{ "name": "v267", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v267", "role": "default" }} , 
 	{ "name": "v268_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v268_0", "role": "address0" }} , 
 	{ "name": "v268_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v268_0", "role": "ce0" }} , 
 	{ "name": "v268_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v268_0", "role": "q0" }} , 
 	{ "name": "v268_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v268_1", "role": "address0" }} , 
 	{ "name": "v268_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v268_1", "role": "ce0" }} , 
 	{ "name": "v268_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v268_1", "role": "q0" }} , 
 	{ "name": "v269", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v269", "role": "default" }} , 
 	{ "name": "v270_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v270_0", "role": "address0" }} , 
 	{ "name": "v270_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v270_0", "role": "ce0" }} , 
 	{ "name": "v270_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v270_0", "role": "q0" }} , 
 	{ "name": "v270_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v270_1", "role": "address0" }} , 
 	{ "name": "v270_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v270_1", "role": "ce0" }} , 
 	{ "name": "v270_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v270_1", "role": "q0" }} , 
 	{ "name": "v271", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v271", "role": "default" }} , 
 	{ "name": "v272_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v272", "role": "address0" }} , 
 	{ "name": "v272_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v272", "role": "ce0" }} , 
 	{ "name": "v272_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v272", "role": "q0" }} , 
 	{ "name": "v273_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v273", "role": "address0" }} , 
 	{ "name": "v273_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v273", "role": "ce0" }} , 
 	{ "name": "v273_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v273", "role": "q0" }} , 
 	{ "name": "v274_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v274", "role": "address0" }} , 
 	{ "name": "v274_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v274", "role": "ce0" }} , 
 	{ "name": "v274_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v274", "role": "q0" }} , 
 	{ "name": "v275_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v275", "role": "address0" }} , 
 	{ "name": "v275_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v275", "role": "ce0" }} , 
 	{ "name": "v275_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v275", "role": "q0" }} , 
 	{ "name": "v276_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "v276", "role": "address0" }} , 
 	{ "name": "v276_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v276", "role": "ce0" }} , 
 	{ "name": "v276_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v276", "role": "q0" }} , 
 	{ "name": "v277_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "v277", "role": "address0" }} , 
 	{ "name": "v277_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v277", "role": "ce0" }} , 
 	{ "name": "v277_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v277", "role": "q0" }} , 
 	{ "name": "v278", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v278", "role": "default" }} , 
 	{ "name": "v279_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v279", "role": "address0" }} , 
 	{ "name": "v279_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v279", "role": "ce0" }} , 
 	{ "name": "v279_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v279", "role": "we0" }} , 
 	{ "name": "v279_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v279", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "39", "42", "61", "80", "91", "96", "99", "102", "103", "104", "105", "106", "107", "108", "109"],
		"CDFG" : "attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1371080", "EstimateLatencyMax" : "1371080",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_844"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_844"},
			{"State" : "ap_ST_fsm_state80", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_844"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_873"},
			{"State" : "ap_ST_fsm_state65", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_fu_911"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_fu_931"},
			{"State" : "ap_ST_fsm_state74", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_fu_931"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_apply_rotary_pos_emb_fu_955"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_969"},
			{"State" : "ap_ST_fsm_state76", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_969"},
			{"State" : "ap_ST_fsm_state34", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_fu_977"},
			{"State" : "ap_ST_fsm_state68", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float2_fu_985"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_992"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_992"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transpose_last_two_d_fu_1002"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_1009"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_1009"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_1017"}],
		"Port" : [
			{"Name" : "v263", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "v0"}]},
			{"Name" : "v264_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v80_0"}]},
			{"Name" : "v264_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v80_1"}]},
			{"Name" : "v265", "Type" : "None", "Direction" : "I"},
			{"Name" : "v266_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v80_0"}]},
			{"Name" : "v266_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v80_1"}]},
			{"Name" : "v267", "Type" : "None", "Direction" : "I"},
			{"Name" : "v268_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v80_0"}]},
			{"Name" : "v268_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v80_1"}]},
			{"Name" : "v269", "Type" : "None", "Direction" : "I"},
			{"Name" : "v270_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v80_0"}]},
			{"Name" : "v270_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v80_1"}]},
			{"Name" : "v271", "Type" : "None", "Direction" : "I"},
			{"Name" : "v272", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_apply_rotary_pos_emb_fu_955", "Port" : "v162"}]},
			{"Name" : "v273", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_apply_rotary_pos_emb_fu_955", "Port" : "v163"}]},
			{"Name" : "v274", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "v1"}]},
			{"Name" : "v275", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "v1"}]},
			{"Name" : "v276", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "102", "SubInstance" : "grp_cache_update_fu_992", "Port" : "v192"}]},
			{"Name" : "v277", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "102", "SubInstance" : "grp_cache_update_fu_992", "Port" : "v192"}]},
			{"Name" : "v278", "Type" : "None", "Direction" : "I"},
			{"Name" : "v279", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v82"}]},
			{"Name" : "pow_reduce_anonymo_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_softmax_fu_911", "Port" : "pow_reduce_anonymo_7"},
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "pow_reduce_anonymo_7"}]},
			{"Name" : "pow_reduce_anonymo_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_softmax_fu_911", "Port" : "pow_reduce_anonymo_6"},
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "pow_reduce_anonymo_6"}]},
			{"Name" : "pow_reduce_anonymo_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_softmax_fu_911", "Port" : "pow_reduce_anonymo_9"},
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "pow_reduce_anonymo_9"}]},
			{"Name" : "pow_reduce_anonymo_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_softmax_fu_911", "Port" : "pow_reduce_anonymo_10"},
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "pow_reduce_anonymo_10"}]},
			{"Name" : "pow_reduce_anonymo_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_softmax_fu_911", "Port" : "pow_reduce_anonymo_8"},
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "pow_reduce_anonymo_8"}]},
			{"Name" : "pow_reduce_anonymo_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_softmax_fu_911", "Port" : "pow_reduce_anonymo_11"},
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "pow_reduce_anonymo_11"}]},
			{"Name" : "pow_reduce_anonymo", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_softmax_fu_911", "Port" : "pow_reduce_anonymo"},
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "pow_reduce_anonymo"}]},
			{"Name" : "quantized_hidden_sta_8", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "grp_quantize_activation_fu_969", "Port" : "v24_0"}]},
			{"Name" : "quantized_hidden_sta_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v78_0_0_0"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_0_0_0"}]},
			{"Name" : "quantized_hidden_sta_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v78_0_0_1"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_0_0_1"}]},
			{"Name" : "quantized_hidden_sta_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v78_0_0_2"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_0_0_2"}]},
			{"Name" : "quantized_hidden_sta_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v78_0_0_3"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_0_0_3"}]},
			{"Name" : "quantized_hidden_sta_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v78_1_0_0"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_1_0_0"}]},
			{"Name" : "quantized_hidden_sta_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v78_1_0_1"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_1_0_1"}]},
			{"Name" : "quantized_hidden_sta_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v78_1_0_2"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_1_0_2"}]},
			{"Name" : "quantized_hidden_sta", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v78_1_0_3"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_1_0_3"}]},
			{"Name" : "q_proj_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "104", "SubInstance" : "grp_reshape_2D_to_3D_fu_1009", "Port" : "v147_0"},
					{"ID" : "80", "SubInstance" : "grp_apply_rotary_pos_emb_fu_955", "Port" : "q_proj_0"}]},
			{"Name" : "k_proj_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "104", "SubInstance" : "grp_reshape_2D_to_3D_fu_1009", "Port" : "v147_0"},
					{"ID" : "80", "SubInstance" : "grp_apply_rotary_pos_emb_fu_955", "Port" : "k_proj_0"}]},
			{"Name" : "v_proj_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "102", "SubInstance" : "grp_cache_update_fu_992", "Port" : "v193_0"},
					{"ID" : "105", "SubInstance" : "grp_reshape_2D_to_3D_fu_1017", "Port" : "v147_0"}]},
			{"Name" : "k_proj_transposed", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "103", "SubInstance" : "grp_transpose_last_two_d_fu_1002", "Port" : "v204"},
					{"ID" : "96", "SubInstance" : "grp_GEMM_3D_float_fu_977", "Port" : "k_proj_transposed"}]},
			{"Name" : "quantized_final_outp_8", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "grp_quantize_activation_fu_969", "Port" : "v24_0"}]},
			{"Name" : "quantized_final_outp_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_0_0_0"}]},
			{"Name" : "quantized_final_outp_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_0_0_1"}]},
			{"Name" : "quantized_final_outp_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_0_0_2"}]},
			{"Name" : "quantized_final_outp_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_0_0_3"}]},
			{"Name" : "quantized_final_outp_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_1_0_0"}]},
			{"Name" : "quantized_final_outp_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_1_0_1"}]},
			{"Name" : "quantized_final_outp_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_1_0_2"}]},
			{"Name" : "quantized_final_outp", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v78_1_0_3"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_8_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_7_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_6_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_5_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_3_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_2_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_1_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_hidden_sta_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_0_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_0_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_0_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_transposed_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_8_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_7_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_6_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_5_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_4_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_3_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_2_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_1_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.quantized_final_outp_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rms_hidden_states_0_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_proj_re_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_proj_re_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.v_proj_re_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.q_embed_0_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.k_embed_0_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.updated_k_cache_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.updated_v_cache_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_weights_0_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.softmax_attn_weights_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_0_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attn_output_2D_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rms_attn_output_0_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_844", "Parent" : "0", "Child" : ["37", "38"],
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
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_844.attention_mul_52stde_U40", "Parent" : "36"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_844.attention_sdiv_97udo_U41", "Parent" : "36"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_873", "Parent" : "0", "Child" : ["40", "41"],
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
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_873.attention_mul_52stde_U40", "Parent" : "39"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_873.attention_sdiv_97udo_U41", "Parent" : "39"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911", "Parent" : "0", "Child" : ["43", "58", "59", "60"],
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
			{"Name" : "v224_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v225_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "pow_reduce_anonymo_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_7"}]},
			{"Name" : "pow_reduce_anonymo_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_6"}]},
			{"Name" : "pow_reduce_anonymo_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_9"}]},
			{"Name" : "pow_reduce_anonymo_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_10"}]},
			{"Name" : "pow_reduce_anonymo_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_8"}]},
			{"Name" : "pow_reduce_anonymo_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo_11"}]},
			{"Name" : "pow_reduce_anonymo", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_pow_generic_float_s_fu_223", "Port" : "pow_reduce_anonymo"}]}]},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223", "Parent" : "42", "Child" : ["44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57"],
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
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_7_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_6_U", "Parent" : "43"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_9_U", "Parent" : "43"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_10_U", "Parent" : "43"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_8_U", "Parent" : "43"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_11_U", "Parent" : "43"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.pow_reduce_anonymo_U", "Parent" : "43"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.attention_mul_41nibs_U1", "Parent" : "43"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.attention_mul_44njbC_U2", "Parent" : "43"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.attention_mul_45nkbM_U3", "Parent" : "43"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.attention_mul_43slbW_U4", "Parent" : "43"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.attention_mul_mulmb6_U5", "Parent" : "43"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.attention_mac_mulncg_U6", "Parent" : "43"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.grp_pow_generic_float_s_fu_223.attention_mul_mulocq_U7", "Parent" : "43"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.attention_faddfsuxdS_U84", "Parent" : "42"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.attention_fdiv_32rcU_U85", "Parent" : "42"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.attention_fcmp_32sc4_U86", "Parent" : "42"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931", "Parent" : "0", "Child" : ["62", "77", "78", "79"],
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
					{"ID" : "62", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_7"}]},
			{"Name" : "pow_reduce_anonymo_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_6"}]},
			{"Name" : "pow_reduce_anonymo_9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_9"}]},
			{"Name" : "pow_reduce_anonymo_10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_10"}]},
			{"Name" : "pow_reduce_anonymo_8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_8"}]},
			{"Name" : "pow_reduce_anonymo_11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo_11"}]},
			{"Name" : "pow_reduce_anonymo", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "62", "SubInstance" : "grp_pow_generic_float_s_fu_137", "Port" : "pow_reduce_anonymo"}]}]},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137", "Parent" : "61", "Child" : ["63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76"],
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
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_7_U", "Parent" : "62"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_6_U", "Parent" : "62"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_9_U", "Parent" : "62"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_10_U", "Parent" : "62"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_8_U", "Parent" : "62"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_11_U", "Parent" : "62"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.pow_reduce_anonymo_U", "Parent" : "62"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.attention_mul_41nibs_U1", "Parent" : "62"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.attention_mul_44njbC_U2", "Parent" : "62"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.attention_mul_45nkbM_U3", "Parent" : "62"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.attention_mul_43slbW_U4", "Parent" : "62"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.attention_mul_mulmb6_U5", "Parent" : "62"},
	{"ID" : "75", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.attention_mac_mulncg_U6", "Parent" : "62"},
	{"ID" : "76", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.grp_pow_generic_float_s_fu_137.attention_mul_mulocq_U7", "Parent" : "62"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.attention_fadd_32pcA_U24", "Parent" : "61"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.attention_fmul_32qcK_U25", "Parent" : "61"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_rms_norm_fu_931.attention_fdiv_32rcU_U26", "Parent" : "61"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955", "Parent" : "0", "Child" : ["81", "82", "83", "84", "85", "86", "87", "88", "89", "90"],
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
			{"Name" : "v162", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v163", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v164_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v165_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "q_proj_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "grp_rotate_half_fu_248", "Port" : "v152_0"}]},
			{"Name" : "k_proj_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "grp_rotate_half_fu_255", "Port" : "v152_0"}]}]},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.rotated_q_0_U", "Parent" : "80"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.rotated_k_0_U", "Parent" : "80"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.grp_rotate_half_fu_248", "Parent" : "80",
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
			{"Name" : "v152_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v153_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.grp_rotate_half_fu_255", "Parent" : "80",
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
			{"Name" : "v152_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v153_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.attention_fadd_32pcA_U61", "Parent" : "80"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.attention_fadd_32pcA_U62", "Parent" : "80"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.attention_fmul_32qcK_U63", "Parent" : "80"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.attention_fmul_32qcK_U64", "Parent" : "80"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.attention_fmul_32qcK_U65", "Parent" : "80"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_955.attention_fmul_32qcK_U66", "Parent" : "80"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_969", "Parent" : "0", "Child" : ["92", "93", "94", "95"],
		"CDFG" : "quantize_activation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33043", "EstimateLatencyMax" : "33043",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v22_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v24_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_969.attention_fadd_32pcA_U33", "Parent" : "91"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_969.attention_fmul_32qcK_U34", "Parent" : "91"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_969.attention_fdiv_32rcU_U35", "Parent" : "91"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_969.attention_fcmp_32sc4_U36", "Parent" : "91"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_977", "Parent" : "0", "Child" : ["97", "98"],
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
			{"Name" : "v209_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v211_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "k_proj_transposed", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_977.attention_fadd_32pcA_U79", "Parent" : "96"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_977.attention_fmul_32qcK_U80", "Parent" : "96"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_985", "Parent" : "0", "Child" : ["100", "101"],
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
			{"Name" : "v251_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v252", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v253_0", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_985.attention_fadd_32pcA_U90", "Parent" : "99"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_985.attention_fmul_32qcK_U91", "Parent" : "99"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_fu_992", "Parent" : "0",
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
			{"Name" : "v192", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v193_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v194", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transpose_last_two_d_fu_1002", "Parent" : "0",
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
			{"Name" : "v203", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v204", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_reshape_2D_to_3D_fu_1009", "Parent" : "0",
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
			{"Name" : "v146", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v147_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_reshape_2D_to_3D_fu_1017", "Parent" : "0",
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
			{"Name" : "v146", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v147_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fadd_32pcA_U95", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fdiv_32rcU_U96", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fpext_3Zio_U97", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fpext_3Zio_U98", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	attention {
		v263 {Type I LastRead 62 FirstWrite -1}
		v264_0 {Type I LastRead 3 FirstWrite -1}
		v264_1 {Type I LastRead 3 FirstWrite -1}
		v265 {Type I LastRead 0 FirstWrite -1}
		v266_0 {Type I LastRead 3 FirstWrite -1}
		v266_1 {Type I LastRead 3 FirstWrite -1}
		v267 {Type I LastRead 0 FirstWrite -1}
		v268_0 {Type I LastRead 3 FirstWrite -1}
		v268_1 {Type I LastRead 3 FirstWrite -1}
		v269 {Type I LastRead 0 FirstWrite -1}
		v270_0 {Type I LastRead 3 FirstWrite -1}
		v270_1 {Type I LastRead 3 FirstWrite -1}
		v271 {Type I LastRead 0 FirstWrite -1}
		v272 {Type I LastRead 5 FirstWrite -1}
		v273 {Type I LastRead 5 FirstWrite -1}
		v274 {Type I LastRead 62 FirstWrite -1}
		v275 {Type I LastRead 62 FirstWrite -1}
		v276 {Type I LastRead 3 FirstWrite -1}
		v277 {Type I LastRead 3 FirstWrite -1}
		v278 {Type I LastRead -1 FirstWrite -1}
		v279 {Type O LastRead -1 FirstWrite 41}
		pow_reduce_anonymo_7 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_6 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_9 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_10 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_8 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo_11 {Type I LastRead -1 FirstWrite -1}
		pow_reduce_anonymo {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta_8 {Type O LastRead -1 FirstWrite -1}
		quantized_hidden_sta_7 {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta_6 {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta_5 {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta_4 {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta_3 {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta_2 {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta_1 {Type I LastRead -1 FirstWrite -1}
		quantized_hidden_sta {Type I LastRead -1 FirstWrite -1}
		q_proj_0 {Type IO LastRead -1 FirstWrite -1}
		k_proj_0 {Type IO LastRead -1 FirstWrite -1}
		v_proj_0 {Type IO LastRead -1 FirstWrite -1}
		k_proj_transposed {Type IO LastRead -1 FirstWrite -1}
		quantized_final_outp_8 {Type O LastRead -1 FirstWrite -1}
		quantized_final_outp_7 {Type I LastRead -1 FirstWrite -1}
		quantized_final_outp_6 {Type I LastRead -1 FirstWrite -1}
		quantized_final_outp_5 {Type I LastRead -1 FirstWrite -1}
		quantized_final_outp_4 {Type I LastRead -1 FirstWrite -1}
		quantized_final_outp_3 {Type I LastRead -1 FirstWrite -1}
		quantized_final_outp_2 {Type I LastRead -1 FirstWrite -1}
		quantized_final_outp_1 {Type I LastRead -1 FirstWrite -1}
		quantized_final_outp {Type I LastRead -1 FirstWrite -1}}
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
		v82 {Type O LastRead -1 FirstWrite 112}}
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
		v82 {Type O LastRead -1 FirstWrite 112}}
	softmax {
		v224_0 {Type I LastRead 2 FirstWrite -1}
		v225_0 {Type IO LastRead 5 FirstWrite 3}
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
		v162 {Type I LastRead 5 FirstWrite -1}
		v163 {Type I LastRead 5 FirstWrite -1}
		v164_0 {Type O LastRead -1 FirstWrite 16}
		v165_0 {Type O LastRead -1 FirstWrite 16}
		q_proj_0 {Type I LastRead 5 FirstWrite -1}
		k_proj_0 {Type I LastRead 5 FirstWrite -1}}
	rotate_half {
		v152_0 {Type I LastRead 3 FirstWrite -1}
		v153_0 {Type O LastRead -1 FirstWrite 3}}
	rotate_half {
		v152_0 {Type I LastRead 3 FirstWrite -1}
		v153_0 {Type O LastRead -1 FirstWrite 3}}
	quantize_activation {
		v22_0 {Type I LastRead 20 FirstWrite -1}
		v24_0 {Type O LastRead -1 FirstWrite 35}}
	GEMM_3D_float {
		v209_0 {Type I LastRead 4 FirstWrite -1}
		v211_0 {Type IO LastRead 8 FirstWrite 15}
		k_proj_transposed {Type I LastRead 4 FirstWrite -1}}
	GEMM_3D_float2 {
		v251_0 {Type I LastRead 4 FirstWrite -1}
		v252 {Type I LastRead 4 FirstWrite -1}
		v253_0 {Type IO LastRead 8 FirstWrite 15}}
	cache_update {
		v192 {Type I LastRead 3 FirstWrite -1}
		v193_0 {Type I LastRead 3 FirstWrite -1}
		v194 {Type O LastRead -1 FirstWrite 4}}
	transpose_last_two_d {
		v203 {Type I LastRead 3 FirstWrite -1}
		v204 {Type O LastRead -1 FirstWrite 4}}
	reshape_2D_to_3D {
		v146 {Type I LastRead 2 FirstWrite -1}
		v147_0 {Type O LastRead -1 FirstWrite 3}}
	reshape_2D_to_3D {
		v146 {Type I LastRead 2 FirstWrite -1}
		v147_0 {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1371080", "Max" : "1371080"}
	, {"Name" : "Interval", "Min" : "1371081", "Max" : "1371081"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v263 { ap_memory {  { v263_address0 mem_address 1 11 }  { v263_ce0 mem_ce 1 1 }  { v263_q0 mem_dout 0 32 } } }
	v264_0 { ap_memory {  { v264_0_address0 mem_address 1 19 }  { v264_0_ce0 mem_ce 1 1 }  { v264_0_q0 mem_dout 0 8 } } }
	v264_1 { ap_memory {  { v264_1_address0 mem_address 1 19 }  { v264_1_ce0 mem_ce 1 1 }  { v264_1_q0 mem_dout 0 8 } } }
	v265 { ap_none {  { v265 in_data 0 32 } } }
	v266_0 { ap_memory {  { v266_0_address0 mem_address 1 19 }  { v266_0_ce0 mem_ce 1 1 }  { v266_0_q0 mem_dout 0 8 } } }
	v266_1 { ap_memory {  { v266_1_address0 mem_address 1 19 }  { v266_1_ce0 mem_ce 1 1 }  { v266_1_q0 mem_dout 0 8 } } }
	v267 { ap_none {  { v267 in_data 0 32 } } }
	v268_0 { ap_memory {  { v268_0_address0 mem_address 1 19 }  { v268_0_ce0 mem_ce 1 1 }  { v268_0_q0 mem_dout 0 8 } } }
	v268_1 { ap_memory {  { v268_1_address0 mem_address 1 19 }  { v268_1_ce0 mem_ce 1 1 }  { v268_1_q0 mem_dout 0 8 } } }
	v269 { ap_none {  { v269 in_data 0 32 } } }
	v270_0 { ap_memory {  { v270_0_address0 mem_address 1 19 }  { v270_0_ce0 mem_ce 1 1 }  { v270_0_q0 mem_dout 0 8 } } }
	v270_1 { ap_memory {  { v270_1_address0 mem_address 1 19 }  { v270_1_ce0 mem_ce 1 1 }  { v270_1_q0 mem_dout 0 8 } } }
	v271 { ap_none {  { v271 in_data 0 32 } } }
	v272 { ap_memory {  { v272_address0 mem_address 1 10 }  { v272_ce0 mem_ce 1 1 }  { v272_q0 mem_dout 0 32 } } }
	v273 { ap_memory {  { v273_address0 mem_address 1 10 }  { v273_ce0 mem_ce 1 1 }  { v273_q0 mem_dout 0 32 } } }
	v274 { ap_memory {  { v274_address0 mem_address 1 11 }  { v274_ce0 mem_ce 1 1 }  { v274_q0 mem_dout 0 32 } } }
	v275 { ap_memory {  { v275_address0 mem_address 1 11 }  { v275_ce0 mem_ce 1 1 }  { v275_q0 mem_dout 0 32 } } }
	v276 { ap_memory {  { v276_address0 mem_address 1 13 }  { v276_ce0 mem_ce 1 1 }  { v276_q0 mem_dout 0 32 } } }
	v277 { ap_memory {  { v277_address0 mem_address 1 13 }  { v277_ce0 mem_ce 1 1 }  { v277_q0 mem_dout 0 32 } } }
	v278 { ap_none {  { v278 in_data 0 32 } } }
	v279 { ap_memory {  { v279_address0 mem_address 1 11 }  { v279_ce0 mem_ce 1 1 }  { v279_we0 mem_we 1 1 }  { v279_d0 mem_din 1 32 } } }
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
