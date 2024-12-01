#=============================================================================
# run.tcl 
#=============================================================================
# @brief: A Tcl script for synthesizing the baseline attention layer.

# Project name
set hls_prj attention_4th.prj

# Open/reset the project
open_project ${hls_prj} -reset

# Top function of the design is "dut"
set_top dut

# Add design and testbench files
add_files -cflags "-DFOURTH" attention.cpp
add_files -tb attention_test.cpp
add_files -tb data_4th

open_solution "solution1"
# Use Zynq device
set_part {xc7z020clg484-1}

# Target clock period is 10ns
create_clock -period 10

# array directives
# set_directive_array_partition -type complete -dim 3 attention q_proj
# set_directive_array_partition -type complete -dim 3 attention k_proj
# set_directive_array_partition -type complete -dim 3 attention v_proj
# set_directive_array_reshape -type block -factor 2 -dim 1 attention q_weights
# set_directive_array_reshape -type block -factor 2 -dim 1 attention k_weights
# set_directive_array_reshape -type block -factor 2 -dim 1 attention v_weights
# set_directive_array_reshape -type block -factor 2 -dim 1 attention o_weights
set_directive_array_partition -type complete -dim 3 attention quantized_hidden_states
set_directive_array_partition -type complete -dim 3 attention quantized_final_output
# set_directive_array_partition -type complete -dim 3 attention q_embed
# set_directive_array_partition -type complete -dim 3 attention k_embed
# set_directive_array_partition -type complete -dim 3 attention k_cache
# set_directive_array_partition -type complete -dim 3 attention v_cache
# set_directive_array_partition -type complete -dim 3 attention k_cache_upd
# set_directive_array_partition -type complete -dim 3 attention v_cache_upd
# set_directive_array_partition -type complete -dim 3 attention k_proj_transposed
# set_directive_array_partition -type complete -dim 3 attention attn_weights
# set_directive_array_partition -type complete -dim 3 attention attn_output

# # init_1d_mem directives
# set_directive_unroll init_1d_mem/INIT_1D_MEM_LOOP_1

# # init_2d_mem directives
# set_directive_pipeline init_2d_mem/INIT_2D_MEM_LOOP_1

# # init_3d_mem directives
# set_directive_pipeline init_3d_mem/INIT_3D_MEM_LOOP_2

# # rms_norm directives
# set_directive_pipeline rms_norm/RMS_NORM_LOOP_1
# set_directive_pipeline rms_norm/RMS_NORM_LOOP_2

# # quantize_activation directives
# set_directive_unroll quantize_activation/QUANTIZE_ACTIVATION_LOOP_5

# linear_forward_no_mul directives
set_directive_unroll linear_forward_no_mul/LINEAR_FORWARD_NO_MUL_LOOP_4
set_directive_unroll linear_forward_no_mul/LINEAR_FORWARD_NO_MUL_LOOP_5

# # reshape_2D_to_3D directives
# set_directive_pipeline reshape_2D_to_3D/RESHAPE_2D_TO_3D_LOOP_3

# # apply_rotary_pos_emb directives
# set_directive_array_partition -type complete -dim 3 apply_rotary_pos_emb rotated_q
# set_directive_array_partition -type complete -dim 3 apply_rotary_pos_emb rotated_k
# set_directive_pipeline apply_rotary_pos_emb/APPLY_ROTARY_POS_EMB_LOOP_2
# set_directive_pipeline apply_rotary_pos_emb/APPLY_ROTARY_POS_EMB_LOOP_5

# # cache_update directives
# set_directive_pipeline cache_update/CACHE_UPDATE_LOOP_2

# # transpose_last_two_dims directives
# set_directive_pipeline -II 2 transpose_last_two_dims/TRANSPOSE_LAST_TWO_DIMS_LOOP_2

# # GEMM_3D_float directives
# set_directive_pipeline -II 2 GEMM_3D_float/GEMM_3D_FLOAT_LOOP_3

# # create_causal_mask directives
# set_directive_pipeline create_causal_mask/CREATE_CAUSAL_MASK_LOOP_1

# # softmax directives
# set_directive_pipeline softmax/SOFTMAX_LOOP_3
# set_directive_unroll softmax/SOFTMAX_LOOP_4
# set_directive_unroll softmax/SOFTMAX_LOOP_5

# # attention directives
# set_directive_pipeline attention/SF_LOOP_2
# set_directive_pipeline attention/CM_LOOP_2
# set_directive_pipeline -II 2 attention/ATTN_2D_LOOP_2

############################################

# Simulate the C++ design
# csim_design
# Synthesize the design
csynth_design
# Co-simulate the design
# cosim_design
exit
