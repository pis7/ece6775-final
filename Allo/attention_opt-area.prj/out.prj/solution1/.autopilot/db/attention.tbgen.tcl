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
	{ v264 float 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v265_0 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v265_1 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v266 float 32 regular  }
	{ v267_0 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v267_1 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v268 float 32 regular  }
	{ v269_0 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v269_1 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v270 float 32 regular  }
	{ v271_0 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v271_1 int 8 regular {array 294912 { 1 3 } 1 1 }  }
	{ v272 float 32 regular  }
	{ v273 float 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v274 float 32 regular {array 960 { 1 3 } 1 1 }  }
	{ v275 float 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v276 float 32 regular {array 1536 { 1 3 } 1 1 }  }
	{ v277 float 32 regular {array 7680 { 1 3 } 1 1 }  }
	{ v278 float 32 regular {array 7680 { 1 3 } 1 1 }  }
	{ v279 int 32 unused  }
	{ v280 float 32 regular {array 1536 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v264", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v264","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v265_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v265","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 382,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v265_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v265","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 383,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v266", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v266","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v267_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v267","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 382,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v267_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v267","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 383,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v268", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v268","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v269_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v269","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 382,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v269_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v269","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 383,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v270", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v270","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v271_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v271","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 382,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v271_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "v271","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 1,"up" : 383,"step" : 2},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v272", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v272","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v273", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v273","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v274", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v274","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v275", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v275","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v276", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v276","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1535,"step" : 1}]}]}]} , 
 	{ "Name" : "v277", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v277","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 15,"step" : 1},{"low" : 0,"up" : 4,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v278", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v278","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 15,"step" : 1},{"low" : 0,"up" : 4,"step" : 1},{"low" : 0,"up" : 95,"step" : 1}]}]}]} , 
 	{ "Name" : "v279", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v279","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "v280", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "v280","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 1535,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 60
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v264_address0 sc_out sc_lv 11 signal 0 } 
	{ v264_ce0 sc_out sc_logic 1 signal 0 } 
	{ v264_q0 sc_in sc_lv 32 signal 0 } 
	{ v265_0_address0 sc_out sc_lv 19 signal 1 } 
	{ v265_0_ce0 sc_out sc_logic 1 signal 1 } 
	{ v265_0_q0 sc_in sc_lv 8 signal 1 } 
	{ v265_1_address0 sc_out sc_lv 19 signal 2 } 
	{ v265_1_ce0 sc_out sc_logic 1 signal 2 } 
	{ v265_1_q0 sc_in sc_lv 8 signal 2 } 
	{ v266 sc_in sc_lv 32 signal 3 } 
	{ v267_0_address0 sc_out sc_lv 19 signal 4 } 
	{ v267_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ v267_0_q0 sc_in sc_lv 8 signal 4 } 
	{ v267_1_address0 sc_out sc_lv 19 signal 5 } 
	{ v267_1_ce0 sc_out sc_logic 1 signal 5 } 
	{ v267_1_q0 sc_in sc_lv 8 signal 5 } 
	{ v268 sc_in sc_lv 32 signal 6 } 
	{ v269_0_address0 sc_out sc_lv 19 signal 7 } 
	{ v269_0_ce0 sc_out sc_logic 1 signal 7 } 
	{ v269_0_q0 sc_in sc_lv 8 signal 7 } 
	{ v269_1_address0 sc_out sc_lv 19 signal 8 } 
	{ v269_1_ce0 sc_out sc_logic 1 signal 8 } 
	{ v269_1_q0 sc_in sc_lv 8 signal 8 } 
	{ v270 sc_in sc_lv 32 signal 9 } 
	{ v271_0_address0 sc_out sc_lv 19 signal 10 } 
	{ v271_0_ce0 sc_out sc_logic 1 signal 10 } 
	{ v271_0_q0 sc_in sc_lv 8 signal 10 } 
	{ v271_1_address0 sc_out sc_lv 19 signal 11 } 
	{ v271_1_ce0 sc_out sc_logic 1 signal 11 } 
	{ v271_1_q0 sc_in sc_lv 8 signal 11 } 
	{ v272 sc_in sc_lv 32 signal 12 } 
	{ v273_address0 sc_out sc_lv 10 signal 13 } 
	{ v273_ce0 sc_out sc_logic 1 signal 13 } 
	{ v273_q0 sc_in sc_lv 32 signal 13 } 
	{ v274_address0 sc_out sc_lv 10 signal 14 } 
	{ v274_ce0 sc_out sc_logic 1 signal 14 } 
	{ v274_q0 sc_in sc_lv 32 signal 14 } 
	{ v275_address0 sc_out sc_lv 11 signal 15 } 
	{ v275_ce0 sc_out sc_logic 1 signal 15 } 
	{ v275_q0 sc_in sc_lv 32 signal 15 } 
	{ v276_address0 sc_out sc_lv 11 signal 16 } 
	{ v276_ce0 sc_out sc_logic 1 signal 16 } 
	{ v276_q0 sc_in sc_lv 32 signal 16 } 
	{ v277_address0 sc_out sc_lv 13 signal 17 } 
	{ v277_ce0 sc_out sc_logic 1 signal 17 } 
	{ v277_q0 sc_in sc_lv 32 signal 17 } 
	{ v278_address0 sc_out sc_lv 13 signal 18 } 
	{ v278_ce0 sc_out sc_logic 1 signal 18 } 
	{ v278_q0 sc_in sc_lv 32 signal 18 } 
	{ v279 sc_in sc_lv 32 signal 19 } 
	{ v280_address0 sc_out sc_lv 11 signal 20 } 
	{ v280_ce0 sc_out sc_logic 1 signal 20 } 
	{ v280_we0 sc_out sc_logic 1 signal 20 } 
	{ v280_d0 sc_out sc_lv 32 signal 20 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v264_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v264", "role": "address0" }} , 
 	{ "name": "v264_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v264", "role": "ce0" }} , 
 	{ "name": "v264_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v264", "role": "q0" }} , 
 	{ "name": "v265_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v265_0", "role": "address0" }} , 
 	{ "name": "v265_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v265_0", "role": "ce0" }} , 
 	{ "name": "v265_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v265_0", "role": "q0" }} , 
 	{ "name": "v265_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v265_1", "role": "address0" }} , 
 	{ "name": "v265_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v265_1", "role": "ce0" }} , 
 	{ "name": "v265_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v265_1", "role": "q0" }} , 
 	{ "name": "v266", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v266", "role": "default" }} , 
 	{ "name": "v267_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v267_0", "role": "address0" }} , 
 	{ "name": "v267_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v267_0", "role": "ce0" }} , 
 	{ "name": "v267_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v267_0", "role": "q0" }} , 
 	{ "name": "v267_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v267_1", "role": "address0" }} , 
 	{ "name": "v267_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v267_1", "role": "ce0" }} , 
 	{ "name": "v267_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v267_1", "role": "q0" }} , 
 	{ "name": "v268", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v268", "role": "default" }} , 
 	{ "name": "v269_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v269_0", "role": "address0" }} , 
 	{ "name": "v269_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v269_0", "role": "ce0" }} , 
 	{ "name": "v269_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v269_0", "role": "q0" }} , 
 	{ "name": "v269_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v269_1", "role": "address0" }} , 
 	{ "name": "v269_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v269_1", "role": "ce0" }} , 
 	{ "name": "v269_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v269_1", "role": "q0" }} , 
 	{ "name": "v270", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v270", "role": "default" }} , 
 	{ "name": "v271_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v271_0", "role": "address0" }} , 
 	{ "name": "v271_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v271_0", "role": "ce0" }} , 
 	{ "name": "v271_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v271_0", "role": "q0" }} , 
 	{ "name": "v271_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "v271_1", "role": "address0" }} , 
 	{ "name": "v271_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v271_1", "role": "ce0" }} , 
 	{ "name": "v271_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "v271_1", "role": "q0" }} , 
 	{ "name": "v272", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v272", "role": "default" }} , 
 	{ "name": "v273_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v273", "role": "address0" }} , 
 	{ "name": "v273_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v273", "role": "ce0" }} , 
 	{ "name": "v273_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v273", "role": "q0" }} , 
 	{ "name": "v274_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v274", "role": "address0" }} , 
 	{ "name": "v274_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v274", "role": "ce0" }} , 
 	{ "name": "v274_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v274", "role": "q0" }} , 
 	{ "name": "v275_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v275", "role": "address0" }} , 
 	{ "name": "v275_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v275", "role": "ce0" }} , 
 	{ "name": "v275_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v275", "role": "q0" }} , 
 	{ "name": "v276_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v276", "role": "address0" }} , 
 	{ "name": "v276_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v276", "role": "ce0" }} , 
 	{ "name": "v276_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v276", "role": "q0" }} , 
 	{ "name": "v277_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "v277", "role": "address0" }} , 
 	{ "name": "v277_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v277", "role": "ce0" }} , 
 	{ "name": "v277_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v277", "role": "q0" }} , 
 	{ "name": "v278_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "v278", "role": "address0" }} , 
 	{ "name": "v278_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v278", "role": "ce0" }} , 
 	{ "name": "v278_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v278", "role": "q0" }} , 
 	{ "name": "v279", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v279", "role": "default" }} , 
 	{ "name": "v280_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "v280", "role": "address0" }} , 
 	{ "name": "v280_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v280", "role": "ce0" }} , 
 	{ "name": "v280_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v280", "role": "we0" }} , 
 	{ "name": "v280_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v280", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "39", "42", "61", "80", "86", "97", "100", "103", "104", "105", "106", "107", "108", "109", "110"],
		"CDFG" : "attention",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1371083", "EstimateLatencyMax" : "1371083",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_844"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_844"},
			{"State" : "ap_ST_fsm_state77", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_844"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_linear_forward_no_mu_fu_873"},
			{"State" : "ap_ST_fsm_state64", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_softmax_fu_911"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_fu_931"},
			{"State" : "ap_ST_fsm_state73", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rms_norm_fu_931"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_955"},
			{"State" : "ap_ST_fsm_state75", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_quantize_activation_fu_955"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_apply_rotary_pos_emb_fu_963"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float_fu_977"},
			{"State" : "ap_ST_fsm_state67", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_GEMM_3D_float2_fu_985"},
			{"State" : "ap_ST_fsm_state28", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_992"},
			{"State" : "ap_ST_fsm_state30", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_cache_update_fu_992"},
			{"State" : "ap_ST_fsm_state30", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_transpose_last_two_d_fu_1002"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_1009"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_1009"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_reshape_2D_to_3D_fu_1017"}],
		"Port" : [
			{"Name" : "v264", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "v0"}]},
			{"Name" : "v265_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v81_0"}]},
			{"Name" : "v265_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v81_1"}]},
			{"Name" : "v266", "Type" : "None", "Direction" : "I"},
			{"Name" : "v267_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v81_0"}]},
			{"Name" : "v267_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v81_1"}]},
			{"Name" : "v268", "Type" : "None", "Direction" : "I"},
			{"Name" : "v269_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v81_0"}]},
			{"Name" : "v269_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v81_1"}]},
			{"Name" : "v270", "Type" : "None", "Direction" : "I"},
			{"Name" : "v271_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v81_0"}]},
			{"Name" : "v271_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v81_1"}]},
			{"Name" : "v272", "Type" : "None", "Direction" : "I"},
			{"Name" : "v273", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "86", "SubInstance" : "grp_apply_rotary_pos_emb_fu_963", "Port" : "v163"}]},
			{"Name" : "v274", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "86", "SubInstance" : "grp_apply_rotary_pos_emb_fu_963", "Port" : "v164"}]},
			{"Name" : "v275", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "v1"}]},
			{"Name" : "v276", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_rms_norm_fu_931", "Port" : "v1"}]},
			{"Name" : "v277", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "103", "SubInstance" : "grp_cache_update_fu_992", "Port" : "v193"}]},
			{"Name" : "v278", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "103", "SubInstance" : "grp_cache_update_fu_992", "Port" : "v193"}]},
			{"Name" : "v279", "Type" : "None", "Direction" : "I"},
			{"Name" : "v280", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v83"}]},
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
					{"ID" : "80", "SubInstance" : "grp_quantize_activation_fu_955", "Port" : "v24_0"}]},
			{"Name" : "quantized_hidden_sta_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v79_0_0_0"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_0_0_0"}]},
			{"Name" : "quantized_hidden_sta_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v79_0_0_1"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_0_0_1"}]},
			{"Name" : "quantized_hidden_sta_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v79_0_0_2"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_0_0_2"}]},
			{"Name" : "quantized_hidden_sta_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v79_0_0_3"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_0_0_3"}]},
			{"Name" : "quantized_hidden_sta_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v79_1_0_0"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_1_0_0"}]},
			{"Name" : "quantized_hidden_sta_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v79_1_0_1"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_1_0_1"}]},
			{"Name" : "quantized_hidden_sta_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v79_1_0_2"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_1_0_2"}]},
			{"Name" : "quantized_hidden_sta", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_linear_forward_no_mu_fu_873", "Port" : "v79_1_0_3"},
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_1_0_3"}]},
			{"Name" : "q_proj_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "86", "SubInstance" : "grp_apply_rotary_pos_emb_fu_963", "Port" : "q_proj_0"},
					{"ID" : "105", "SubInstance" : "grp_reshape_2D_to_3D_fu_1009", "Port" : "v148_0"}]},
			{"Name" : "k_proj_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "86", "SubInstance" : "grp_apply_rotary_pos_emb_fu_963", "Port" : "k_proj_0"},
					{"ID" : "105", "SubInstance" : "grp_reshape_2D_to_3D_fu_1009", "Port" : "v148_0"}]},
			{"Name" : "v_proj_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "103", "SubInstance" : "grp_cache_update_fu_992", "Port" : "v194_0"},
					{"ID" : "106", "SubInstance" : "grp_reshape_2D_to_3D_fu_1017", "Port" : "v148_0"}]},
			{"Name" : "k_proj_transposed", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_GEMM_3D_float_fu_977", "Port" : "k_proj_transposed"},
					{"ID" : "104", "SubInstance" : "grp_transpose_last_two_d_fu_1002", "Port" : "v205"}]},
			{"Name" : "quantized_final_outp_8", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_quantize_activation_fu_955", "Port" : "v24_0"}]},
			{"Name" : "quantized_final_outp_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_0_0_0"}]},
			{"Name" : "quantized_final_outp_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_0_0_1"}]},
			{"Name" : "quantized_final_outp_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_0_0_2"}]},
			{"Name" : "quantized_final_outp_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_0_0_3"}]},
			{"Name" : "quantized_final_outp_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_1_0_0"}]},
			{"Name" : "quantized_final_outp_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_1_0_1"}]},
			{"Name" : "quantized_final_outp_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_1_0_2"}]},
			{"Name" : "quantized_final_outp", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_linear_forward_no_mu_fu_844", "Port" : "v79_1_0_3"}]}]},
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
			{"Name" : "v79_0_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_0_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_0_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_0_0_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_1_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_1_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_1_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_1_0_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v80_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v81_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v81_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v82_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "v83", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_844.attention_mul_52sudo_U42", "Parent" : "36"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_844.attention_sdiv_97vdy_U43", "Parent" : "36"},
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
			{"Name" : "v79_0_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_0_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_0_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_0_0_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_1_0_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_1_0_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_1_0_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v79_1_0_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v80_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "v81_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v81_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v82_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "v83", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_873.attention_mul_52sudo_U42", "Parent" : "39"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_linear_forward_no_mu_fu_873.attention_sdiv_97vdy_U43", "Parent" : "39"},
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
			{"Name" : "v225_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v226_0", "Type" : "Memory", "Direction" : "IO"},
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
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.attention_faddfsuyd2_U86", "Parent" : "42"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.attention_fdiv_32rcU_U87", "Parent" : "42"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_softmax_fu_911.attention_fcmp_32tde_U88", "Parent" : "42"},
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
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_955", "Parent" : "0", "Child" : ["81", "82", "83", "84", "85"],
		"CDFG" : "quantize_activation",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33046", "EstimateLatencyMax" : "33046",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v22_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v24_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_955.attention_fadd_32pcA_U33", "Parent" : "80"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_955.attention_fmul_32qcK_U34", "Parent" : "80"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_955.attention_fdiv_32rcU_U35", "Parent" : "80"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_955.attention_fpext_3sc4_U36", "Parent" : "80"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_quantize_activation_fu_955.attention_fcmp_32tde_U37", "Parent" : "80"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963", "Parent" : "0", "Child" : ["87", "88", "89", "90", "91", "92", "93", "94", "95", "96"],
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
			{"Name" : "v163", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v164", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v165_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v166_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "q_proj_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_rotate_half_fu_248", "Port" : "v153_0"}]},
			{"Name" : "k_proj_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "grp_rotate_half_fu_255", "Port" : "v153_0"}]}]},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.rotated_q_0_U", "Parent" : "86"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.rotated_k_0_U", "Parent" : "86"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.grp_rotate_half_fu_248", "Parent" : "86",
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
			{"Name" : "v153_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v154_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.grp_rotate_half_fu_255", "Parent" : "86",
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
			{"Name" : "v153_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v154_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.attention_fadd_32pcA_U63", "Parent" : "86"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.attention_fadd_32pcA_U64", "Parent" : "86"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.attention_fmul_32qcK_U65", "Parent" : "86"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.attention_fmul_32qcK_U66", "Parent" : "86"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.attention_fmul_32qcK_U67", "Parent" : "86"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_apply_rotary_pos_emb_fu_963.attention_fmul_32qcK_U68", "Parent" : "86"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_977", "Parent" : "0", "Child" : ["98", "99"],
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
			{"Name" : "v210_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v212_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "k_proj_transposed", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_977.attention_fadd_32pcA_U81", "Parent" : "97"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float_fu_977.attention_fmul_32qcK_U82", "Parent" : "97"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_985", "Parent" : "0", "Child" : ["101", "102"],
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
			{"Name" : "v252_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v253", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v254_0", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_985.attention_fadd_32pcA_U92", "Parent" : "100"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_GEMM_3D_float2_fu_985.attention_fmul_32qcK_U93", "Parent" : "100"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_cache_update_fu_992", "Parent" : "0",
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
			{"Name" : "v193", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v194_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v195", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_transpose_last_two_d_fu_1002", "Parent" : "0",
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
			{"Name" : "v204", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v205", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_reshape_2D_to_3D_fu_1009", "Parent" : "0",
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
			{"Name" : "v147", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v148_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_reshape_2D_to_3D_fu_1017", "Parent" : "0",
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
			{"Name" : "v147", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v148_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fadd_32pcA_U97", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fdiv_32rcU_U98", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fpext_3sc4_U99", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.attention_fpext_3sc4_U100", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	attention {
		v264 {Type I LastRead 62 FirstWrite -1}
		v265_0 {Type I LastRead 3 FirstWrite -1}
		v265_1 {Type I LastRead 3 FirstWrite -1}
		v266 {Type I LastRead 0 FirstWrite -1}
		v267_0 {Type I LastRead 3 FirstWrite -1}
		v267_1 {Type I LastRead 3 FirstWrite -1}
		v268 {Type I LastRead 0 FirstWrite -1}
		v269_0 {Type I LastRead 3 FirstWrite -1}
		v269_1 {Type I LastRead 3 FirstWrite -1}
		v270 {Type I LastRead 0 FirstWrite -1}
		v271_0 {Type I LastRead 3 FirstWrite -1}
		v271_1 {Type I LastRead 3 FirstWrite -1}
		v272 {Type I LastRead 0 FirstWrite -1}
		v273 {Type I LastRead 5 FirstWrite -1}
		v274 {Type I LastRead 5 FirstWrite -1}
		v275 {Type I LastRead 62 FirstWrite -1}
		v276 {Type I LastRead 62 FirstWrite -1}
		v277 {Type I LastRead 3 FirstWrite -1}
		v278 {Type I LastRead 3 FirstWrite -1}
		v279 {Type I LastRead -1 FirstWrite -1}
		v280 {Type O LastRead -1 FirstWrite 38}
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
		v79_0_0_0 {Type I LastRead 4 FirstWrite -1}
		v79_0_0_1 {Type I LastRead 4 FirstWrite -1}
		v79_0_0_2 {Type I LastRead 4 FirstWrite -1}
		v79_0_0_3 {Type I LastRead 4 FirstWrite -1}
		v79_1_0_0 {Type I LastRead 4 FirstWrite -1}
		v79_1_0_1 {Type I LastRead 4 FirstWrite -1}
		v79_1_0_2 {Type I LastRead 4 FirstWrite -1}
		v79_1_0_3 {Type I LastRead 4 FirstWrite -1}
		v80_0_V_read {Type I LastRead 0 FirstWrite -1}
		v81_0 {Type I LastRead 3 FirstWrite -1}
		v81_1 {Type I LastRead 3 FirstWrite -1}
		v82_V {Type I LastRead 0 FirstWrite -1}
		v83 {Type O LastRead -1 FirstWrite 112}}
	linear_forward_no_mu {
		v79_0_0_0 {Type I LastRead 4 FirstWrite -1}
		v79_0_0_1 {Type I LastRead 4 FirstWrite -1}
		v79_0_0_2 {Type I LastRead 4 FirstWrite -1}
		v79_0_0_3 {Type I LastRead 4 FirstWrite -1}
		v79_1_0_0 {Type I LastRead 4 FirstWrite -1}
		v79_1_0_1 {Type I LastRead 4 FirstWrite -1}
		v79_1_0_2 {Type I LastRead 4 FirstWrite -1}
		v79_1_0_3 {Type I LastRead 4 FirstWrite -1}
		v80_0_V_read {Type I LastRead 0 FirstWrite -1}
		v81_0 {Type I LastRead 3 FirstWrite -1}
		v81_1 {Type I LastRead 3 FirstWrite -1}
		v82_V {Type I LastRead 0 FirstWrite -1}
		v83 {Type O LastRead -1 FirstWrite 112}}
	softmax {
		v225_0 {Type I LastRead 2 FirstWrite -1}
		v226_0 {Type IO LastRead 5 FirstWrite 3}
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
	quantize_activation {
		v22_0 {Type I LastRead 23 FirstWrite -1}
		v24_0 {Type O LastRead -1 FirstWrite 38}}
	apply_rotary_pos_emb {
		v163 {Type I LastRead 5 FirstWrite -1}
		v164 {Type I LastRead 5 FirstWrite -1}
		v165_0 {Type O LastRead -1 FirstWrite 16}
		v166_0 {Type O LastRead -1 FirstWrite 16}
		q_proj_0 {Type I LastRead 5 FirstWrite -1}
		k_proj_0 {Type I LastRead 5 FirstWrite -1}}
	rotate_half {
		v153_0 {Type I LastRead 3 FirstWrite -1}
		v154_0 {Type O LastRead -1 FirstWrite 3}}
	rotate_half {
		v153_0 {Type I LastRead 3 FirstWrite -1}
		v154_0 {Type O LastRead -1 FirstWrite 3}}
	GEMM_3D_float {
		v210_0 {Type I LastRead 4 FirstWrite -1}
		v212_0 {Type IO LastRead 8 FirstWrite 15}
		k_proj_transposed {Type I LastRead 4 FirstWrite -1}}
	GEMM_3D_float2 {
		v252_0 {Type I LastRead 4 FirstWrite -1}
		v253 {Type I LastRead 4 FirstWrite -1}
		v254_0 {Type IO LastRead 8 FirstWrite 15}}
	cache_update {
		v193 {Type I LastRead 3 FirstWrite -1}
		v194_0 {Type I LastRead 3 FirstWrite -1}
		v195 {Type O LastRead -1 FirstWrite 4}}
	transpose_last_two_d {
		v204 {Type I LastRead 3 FirstWrite -1}
		v205 {Type O LastRead -1 FirstWrite 4}}
	reshape_2D_to_3D {
		v147 {Type I LastRead 2 FirstWrite -1}
		v148_0 {Type O LastRead -1 FirstWrite 3}}
	reshape_2D_to_3D {
		v147 {Type I LastRead 2 FirstWrite -1}
		v148_0 {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1371083", "Max" : "1371083"}
	, {"Name" : "Interval", "Min" : "1371084", "Max" : "1371084"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v264 { ap_memory {  { v264_address0 mem_address 1 11 }  { v264_ce0 mem_ce 1 1 }  { v264_q0 mem_dout 0 32 } } }
	v265_0 { ap_memory {  { v265_0_address0 mem_address 1 19 }  { v265_0_ce0 mem_ce 1 1 }  { v265_0_q0 mem_dout 0 8 } } }
	v265_1 { ap_memory {  { v265_1_address0 mem_address 1 19 }  { v265_1_ce0 mem_ce 1 1 }  { v265_1_q0 mem_dout 0 8 } } }
	v266 { ap_none {  { v266 in_data 0 32 } } }
	v267_0 { ap_memory {  { v267_0_address0 mem_address 1 19 }  { v267_0_ce0 mem_ce 1 1 }  { v267_0_q0 mem_dout 0 8 } } }
	v267_1 { ap_memory {  { v267_1_address0 mem_address 1 19 }  { v267_1_ce0 mem_ce 1 1 }  { v267_1_q0 mem_dout 0 8 } } }
	v268 { ap_none {  { v268 in_data 0 32 } } }
	v269_0 { ap_memory {  { v269_0_address0 mem_address 1 19 }  { v269_0_ce0 mem_ce 1 1 }  { v269_0_q0 mem_dout 0 8 } } }
	v269_1 { ap_memory {  { v269_1_address0 mem_address 1 19 }  { v269_1_ce0 mem_ce 1 1 }  { v269_1_q0 mem_dout 0 8 } } }
	v270 { ap_none {  { v270 in_data 0 32 } } }
	v271_0 { ap_memory {  { v271_0_address0 mem_address 1 19 }  { v271_0_ce0 mem_ce 1 1 }  { v271_0_q0 mem_dout 0 8 } } }
	v271_1 { ap_memory {  { v271_1_address0 mem_address 1 19 }  { v271_1_ce0 mem_ce 1 1 }  { v271_1_q0 mem_dout 0 8 } } }
	v272 { ap_none {  { v272 in_data 0 32 } } }
	v273 { ap_memory {  { v273_address0 mem_address 1 10 }  { v273_ce0 mem_ce 1 1 }  { v273_q0 mem_dout 0 32 } } }
	v274 { ap_memory {  { v274_address0 mem_address 1 10 }  { v274_ce0 mem_ce 1 1 }  { v274_q0 mem_dout 0 32 } } }
	v275 { ap_memory {  { v275_address0 mem_address 1 11 }  { v275_ce0 mem_ce 1 1 }  { v275_q0 mem_dout 0 32 } } }
	v276 { ap_memory {  { v276_address0 mem_address 1 11 }  { v276_ce0 mem_ce 1 1 }  { v276_q0 mem_dout 0 32 } } }
	v277 { ap_memory {  { v277_address0 mem_address 1 13 }  { v277_ce0 mem_ce 1 1 }  { v277_q0 mem_dout 0 32 } } }
	v278 { ap_memory {  { v278_address0 mem_address 1 13 }  { v278_ce0 mem_ce 1 1 }  { v278_q0 mem_dout 0 32 } } }
	v279 { ap_none {  { v279 in_data 0 32 } } }
	v280 { ap_memory {  { v280_address0 mem_address 1 11 }  { v280_ce0 mem_ce 1 1 }  { v280_we0 mem_we 1 1 }  { v280_d0 mem_din 1 32 } } }
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
