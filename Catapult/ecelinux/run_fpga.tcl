## UPDATE DIR PATH HERE
## Get the current working directory where the script is running
set CURRENT_DIR $::env(PWD)

## Set the WORKING_DIR relative to the current directory
set WORKING_DIR [file normalize "$CURRENT_DIR"]

## Verify the working directory (optional)
puts "Current directory: $CURRENT_DIR"
puts "Working directory: $WORKING_DIR"

## Set the working directory for Catapult
cd $WORKING_DIR
puts "Catapult working directory set to: $WORKING_DIR"

# Create a new solution and set options to defaults
solution new -state initial
solution options defaults

# Enable Verilog and VHDL output
solution options set Output/OutputVerilog true
solution options set Output/OutputVHDL true

# Include search paths
solution options set /Input/SearchPath $WORKING_DIR

# Add source and testbench files
solution file add $WORKING_DIR/attention.cpp -type C++
solution file add $WORKING_DIR/attention_test.cpp -type C++ -exclude true

# Set top-level module
solution design set dut -top

# Compile the solution
go new
go compile

# Set device-specific parameters (Zynq xc7z020clg484-1)
solution library add mgc_Xilinx-ZYNQ-1_beh -- -rtlsyntool Vivado -manufacturer Xilinx -family ZYNQ -speed -1 -part xc7z014sclg484-1
solution library add Xilinx_RAMS
solution library add Xilinx_ROMS
solution library add amba
# solution library add ML_amba
# solution library add ccs_fpga_hic
solution library add Xilinx_FIFO

directive set SCHED_USE_MULTICYCLE true
directive set -CLOCKS {clk {
    -CLOCK_PERIOD 10.0
    -CLOCK_EDGE rising
    -CLOCK_HIGH_TIME 5.0
    -CLOCK_OFFSET 0.000000
    -CLOCK_UNCERTAINTY 0.0
    -RESET_KIND sync
    -RESET_SYNC_NAME rst
    -RESET_SYNC_ACTIVE high
    -RESET_ASYNC_NAME arst_n
    -RESET_ASYNC_ACTIVE low
    -ENABLE_NAME en
    -ENABLE_ACTIVE high
}}

# # Apply array partitioning directives
# directive set /attention/q_proj/partition {complete 3}
# directive set /attention/k_proj/partition {complete 3}
# directive set /attention/v_proj/partition {complete 3}
# directive set /attention/q_weights/partition {complete 1}
# directive set /attention/k_weights/partition {complete 1}
# directive set /attention/v_weights/partition {complete 1}
# directive set /attention/o_weights/partition {complete 1}
# directive set /attention/quantized_hidden_states/partition {complete 2}
# directive set /attention/quantized_final_output/partition {complete 2}
# directive set /attention/q_embed/partition {complete 3}
# directive set /attention/k_embed/partition {complete 3}
# directive set /attention/k_cache/partition {complete 3}
# directive set /attention/v_cache/partition {complete 3}
# directive set /attention/k_cache_upd/partition {complete 3}
# directive set /attention/v_cache_upd/partition {complete 3}
# directive set /attention/k_proj_transposed/partition {complete 3}
# directive set /attention/attn_weights/partition {complete 3}
# directive set /attention/attn_output/partition {complete 3}

# # Apply pipeline and unroll directives
# directive set /init_1d_mem/INIT_1D_MEM_LOOP_1/unroll
# directive set /init_2d_mem/INIT_2D_MEM_LOOP_1/pipeline
# directive set /init_3d_mem/INIT_3D_MEM_LOOP_2/pipeline
# directive set /rms_norm/RMS_NORM_LOOP_1/pipeline
# directive set /rms_norm/RMS_NORM_LOOP_2/pipeline
# directive set /quantize_activation/QUANTIZE_ACTIVATION_LOOP_2/pipeline
# directive set /quantize_activation/QUANTIZE_ACTIVATION_LOOP_3/unroll
# directive set /linear_forward_no_mul/LINEAR_FORWARD_NO_MUL_LOOP_2/pipeline -II 2
# directive set /reshape_2D_to_3D/RESHAPE_2D_TO_3D_LOOP_3/pipeline
# directive set /apply_rotary_pos_emb/APPLY_ROTARY_POS_EMB_LOOP_2/pipeline
# directive set /apply_rotary_pos_emb/APPLY_ROTARY_POS_EMB_LOOP_5/pipeline
# directive set /cache_update/CACHE_UPDATE_LOOP_2/pipeline
# directive set /transpose_last_two_dims/TRANSPOSE_LAST_TWO_DIMS_LOOP_2/pipeline -II 2
# directive set /GEMM_3D_float/GEMM_3D_FLOAT_LOOP_3/pipeline -II 2
# directive set /create_causal_mask/CREATE_CAUSAL_MASK_LOOP_1/pipeline
# directive set /softmax/SOFTMAX_LOOP_3/pipeline
# directive set /softmax/SOFTMAX_LOOP_4/unroll
# directive set /softmax/SOFTMAX_LOOP_5/unroll
# directive set /attention/SF_LOOP_2/pipeline
# directive set /attention/CM_LOOP_2/pipeline
# directive set /attention/ATTN_2D_LOOP_2/pipeline -II 2

# Assemble and prepare the design
go assembly
go architect
go extract

# # Exit Catapult
# exit
