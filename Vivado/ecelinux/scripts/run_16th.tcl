#=============================================================================
# run.tcl 
#=============================================================================
# @brief: A Tcl script for synthesizing the baseline attention layer.

# Project name
set hls_prj attention_16th.prj
set dataset_dim 96

# Open/reset the project
open_project ${hls_prj} -reset

# Top function of the design is "dut"
set_top dut

# Add design and testbench files
add_files -cflags "-DSIXTEENTH" attention.cpp
add_files -cflags "-DSIXTEENTH" -tb attention_test.cpp
add_files -tb data_16th

open_solution "solution1"
# Use Zynq device
set_part {xc7z020clg484-1}

# Target clock period is 10ns
create_clock -period 10

# array directives
set_directive_array_partition -type cyclic -factor [expr $dataset_dim / 24] -dim 1 attention q_weights
set_directive_array_partition -type cyclic -factor [expr $dataset_dim / 24] -dim 1 attention k_weights
set_directive_array_partition -type cyclic -factor [expr $dataset_dim / 24] -dim 1 attention v_weights
set_directive_array_partition -type cyclic -factor [expr $dataset_dim / 24] -dim 1 attention o_weights
set_directive_array_partition -type cyclic -factor [expr $dataset_dim / 24] -dim 2 attention quantized_hidden_states
set_directive_array_partition -type cyclic -factor [expr $dataset_dim / 24] -dim 2 attention quantized_final_output
set_directive_array_partition -type complete -dim 3 attention quantized_hidden_states
set_directive_array_partition -type complete -dim 3 attention quantized_final_output
set_directive_array_partition -type cyclic -factor [expr $dataset_dim / 24] -dim 3 attention q_embed
set_directive_array_partition -type cyclic -factor [expr $dataset_dim / 24] -dim 2 attention k_proj_transposed

# quantize_activation directives
set_directive_unroll quantize_activation/QUANTIZE_ACTIVATION_LOOP_5

# linear_forward_no_mul directives
set_directive_pipeline linear_forward_no_mul/LINEAR_FORWARD_NO_MUL_LOOP_3

# GEMM_3D_float directives
set_directive_unroll -factor [expr $dataset_dim / 24] GEMM_3D_float/GEMM_3D_FLOAT_LOOP_4

############################################

# Simulate the C++ design
# csim_design
# Synthesize the design
csynth_design
# Co-simulate the design
# cosim_design
exit
