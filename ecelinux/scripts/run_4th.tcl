#=============================================================================
# run.tcl 
#=============================================================================
# @brief: A Tcl script for synthesizing the baseline attention layer.

# Project name
set hls_prj attention_4th.prj
set dataset_dim 384

# Open/reset the project
open_project ${hls_prj} -reset

# Top function of the design is "dut"
set_top dut

# Add design and testbench files
add_files -cflags "-DFOURTH" attention.cpp
add_files -cflags "-DFOURTH" -tb attention_test.cpp
add_files -tb data_4th

open_solution "solution1"
# Use Zynq device
set_part {xc7z020clg484-1}

# Target clock period is 10ns
create_clock -period 10

############################################

# Simulate the C++ design
# csim_design
# Synthesize the design
csynth_design
# Co-simulate the design
# cosim_design
exit
