#=============================================================================
# run.tcl 
#=============================================================================
# @brief: A Tcl script for synthesizing the baseline attention layer.

# Project name
set hls_prj attention.prj

# Open/reset the project
open_project ${hls_prj} -reset

# Top function of the design is "dut"
set_top dut

# Add design and testbench files
add_files attention.cpp
add_files -tb attention_test.cpp
add_files -tb data_short

open_solution "solution1"
# Use Zynq device
set_part {xc7z020clg484-1}

# Target clock period is 10ns
create_clock -period 10

# # init_1d_mem directives
# set_directive_array_partition -type complete -dim 1 init_1d_mem mem
# set_directive_unroll init_1d_mem/INIT_1D_MEM_LOOP_1

# # init_2d_mem directives
# set_directive_array_partition -type complete -dim 2 init_2d_mem mem
# set_directive_pipeline init_2d_mem/INIT_2D_MEM_LOOP_1

# # init_3d_mem directives
# set_directive_array_partition -type complete -dim 3 init_3d_mem mem
# set_directive_pipeline init_3d_mem/INIT_3D_MEM_LOOP_2

# attention_sqrt directives
# set_directive_unroll attention_sqrt/ATTENTION_SQRT_LOOP_1

# # rms_norm directives
# set_directive_array_partition -type complete -dim 1 rms_norm input
# set_directive_array_reshape -type complete -dim 1 rms_norm weight
# set_directive_unroll rms_norm/RMS_NORM_LOOP_1
# set_directive_unroll rms_norm/RMS_NORM_LOOP_2

# # quantize_activation directives
# set_directive_array_partition -type complete -dim 2 quantize_activation input
# set_directive_array_partition -type complete -dim 2 quantize_activation output_states
# set_directive_array_partition -type complete -dim 1 quantize_activation output_scales
# set_directive_pipeline quantize_activation/QUANTIZE_ACTIVATION_LOOP_1

# # linear_forward_no_mul directives
# set_directive_array_partition -type complete -dim 2 linear_forward_no_mul input
# set_directive_array_partition -type complete -dim 2 linear_forward_no_mul output
# set_directive_array_partition -type complete -dim 1 linear_forward_no_mul scales
# set_directive_array_reshape -type complete -dim 1 linear_forward_no_mul packed_weights
# set_directive_array_reshape -type complete -dim 2 linear_forward_no_mul packed_weights
# set_directive_pipeline linear_forward_no_mul/LINEAR_FORWARD_NO_MUL_LOOP_3

# # reshape_2D_to_3D directives
# set_directive_array_partition -type complete -dim 2 reshape_2D_to_3D input
# set_directive_array_partition -type complete -dim 3 reshape_2D_to_3D output
# set_directive_pipeline reshape_2D_to_3D/RESHAPE_2D_TO_3D_LOOP_2

# # apply_rotary_pos_emb directives
# set_directive_array_partition -type complete -dim 3 apply_rotary_pos_emb input_q
# set_directive_array_partition -type complete -dim 3 apply_rotary_pos_emb input_k
# set_directive_array_partition -type complete -dim 3 apply_rotary_pos_emb rotated_q
# set_directive_array_partition -type complete -dim 3 apply_rotary_pos_emb rotated_k
# set_directive_array_partition -type complete -dim 3 apply_rotary_pos_emb output_q
# set_directive_array_partition -type complete -dim 3 apply_rotary_pos_emb output_k
# set_directive_pipeline apply_rotary_pos_emb/APPLY_ROTARY_POS_EMB_LOOP_2
# set_directive_pipeline apply_rotary_pos_emb/APPLY_ROTARY_POS_EMB_LOOP_5

# # cache_update directives
# set_directive_array_reshape -type complete -dim 1 cache_update cache_in
# set_directive_array_reshape -type complete -dim 2 cache_update cache_in
# set_directive_array_reshape -type complete -dim 3 cache_update cache_in
# set_directive_array_partition -type complete -dim 3 cache_update cache_out
# set_directive_array_partition -type complete -dim 3 cache_update update
# set_directive_pipeline cache_update/CACHE_UPDATE_LOOP_3

# # transpose_last_two_dims directives
# set_directive_array_partition -type complete -dim 3 transpose_last_two_dims input
# set_directive_array_partition -type complete -dim 3 transpose_last_two_dims output
# set_directive_pipeline transpose_last_two_dims/TRANSPOSE_LAST_TWO_DIMS_LOOP_2

# # GEMM_3D_float directives
# set_directive_array_partition -type complete -dim 3 GEMM_3D_float input_1
# set_directive_array_partition -type complete -dim 3 GEMM_3D_float input_2
# set_directive_array_partition -type complete -dim 3 GEMM_3D_float output
# set_directive_pipeline GEMM_3D_float/GEMM_3D_FLOAT_LOOP_3

# # create_causal_mask directives
# set_directive_array_partition -type complete -dim 2 create_causal_mask mask
# set_directive_pipeline create_causal_mask/CREATE_CAUSAL_MASK_LOOP_1

# # softmax directives
# set_directive_array_partition -type complete -dim 3 softmax input
# set_directive_pipeline softmax/SOFTMAX_LOOP_2

############################################

# Simulate the C++ design
csim_design
# Synthesize the design
csynth_design
# Co-simulate the design
cosim_design
exit
