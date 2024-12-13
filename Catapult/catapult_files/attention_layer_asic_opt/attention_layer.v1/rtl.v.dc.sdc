# written for flow package DesignCompiler 
set sdc_version 1.7 

set_operating_conditions typical
set_load 11.40290 [all_outputs]
## driver/slew constraints on inputs
set data_inputs [list strm_in_rsc_vld {strm_in_rsc_dat[*]} strm_out_rsc_rdy en]
set_driving_cell -no_design_rule -library NangateOpenCellLibrary -lib_cell DFF_X1 -pin Q $data_inputs
set_units -time ns
# time_factor: 1.0

create_clock -name clk -period 10.0 -waveform { 0.0 5.0 } [get_ports {clk}]
set_clock_uncertainty 0.0 [get_clocks {clk}]

create_clock -name virtual_io_clk -period 10.0
## Multi-cycle component nangate-45nm_beh.mgc_div (SOFTMAX_LOOP_5_SOFTMAX_LOOP_5_div_1_cmp) [cycles: 14]
set_multicycle_path 14 -through [get_pins {{dut_core_inst/SOFTMAX_LOOP_5_SOFTMAX_LOOP_5_div_1_cmp/z[*]}}]
set_min_delay 0 -from [get_pins {{dut_core_inst/SOFTMAX_LOOP_5_SOFTMAX_LOOP_5_div_1_cmp/a[*]} {dut_core_inst/SOFTMAX_LOOP_5_SOFTMAX_LOOP_5_div_1_cmp/b[*]}}] -to [get_pins {{dut_core_inst/SOFTMAX_LOOP_5_SOFTMAX_LOOP_5_div_1_cmp/z[*]}}]

## Multi-cycle component nangate-45nm_beh.mgc_div (LINEAR_FORWARD_NO_MUL_LOOP_2_2_LINEAR_FORWARD_NO_MUL_LOOP_2_2_div_1_cmp) [cycles: 27]
set_multicycle_path 27 -through [get_pins {{dut_core_inst/LINEAR_FORWARD_NO_MUL_LOOP_2_2_LINEAR_FORWARD_NO_MUL_LOOP_2_2_div_1_cmp/z[*]}}]
set_min_delay 0 -from [get_pins {{dut_core_inst/LINEAR_FORWARD_NO_MUL_LOOP_2_2_LINEAR_FORWARD_NO_MUL_LOOP_2_2_div_1_cmp/a[*]} {dut_core_inst/LINEAR_FORWARD_NO_MUL_LOOP_2_2_LINEAR_FORWARD_NO_MUL_LOOP_2_2_div_1_cmp/b[*]}}] -to [get_pins {{dut_core_inst/LINEAR_FORWARD_NO_MUL_LOOP_2_2_LINEAR_FORWARD_NO_MUL_LOOP_2_2_div_1_cmp/z[*]}}]

## Multi-cycle component nangate-45nm_beh.mgc_div (rms_norm_384_div_cmp) [cycles: 27]
set_multicycle_path 27 -through [get_pins {{dut_core_inst/rms_norm_384_div_cmp/z[*]}}]
set_min_delay 0 -from [get_pins {{dut_core_inst/rms_norm_384_div_cmp/a[*]} {dut_core_inst/rms_norm_384_div_cmp/b[*]}}] -to [get_pins {{dut_core_inst/rms_norm_384_div_cmp/z[*]}}]

## Multi-cycle component nangate-45nm_beh.mgc_div (operator_40_24_true_AC_TRN_AC_WRAP_1_div_cmp) [cycles: 10]
set_multicycle_path 10 -through [get_pins {{dut_core_inst/operator_40_24_true_AC_TRN_AC_WRAP_1_div_cmp/z[*]}}]
set_min_delay 0 -from [get_pins {{dut_core_inst/operator_40_24_true_AC_TRN_AC_WRAP_1_div_cmp/a[*]} {dut_core_inst/operator_40_24_true_AC_TRN_AC_WRAP_1_div_cmp/b[*]}}] -to [get_pins {{dut_core_inst/operator_40_24_true_AC_TRN_AC_WRAP_1_div_cmp/z[*]}}]

## IO TIMING CONSTRAINTS
set_input_delay -clock [get_clocks {clk}] 0.0 [get_ports {en}]
set_input_delay -clock [get_clocks {clk}] 0.0 [get_ports {rst}]
set_input_delay -clock [get_clocks {clk}] 0.0 [get_ports {strm_in_rsc_dat[*]}]
set_input_delay -clock [get_clocks {clk}] 0.0 [get_ports {strm_in_rsc_vld}]
set_output_delay -clock [get_clocks {clk}] 0.0 [get_ports {strm_in_rsc_rdy}]
set_output_delay -clock [get_clocks {clk}] 0.0 [get_ports {strm_out_rsc_dat[*]}]
set_output_delay -clock [get_clocks {clk}] 0.0 [get_ports {strm_out_rsc_vld}]
set_input_delay -clock [get_clocks {clk}] 0.0 [get_ports {strm_out_rsc_rdy}]

