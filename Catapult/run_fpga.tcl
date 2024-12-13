## UPDATE DIR PATH HERE
## Get the current working directory where the script is running
set WORKING_DIR $::env(PWD)

set version = 1
set platform = fpga

project create attention_layer_$platform_$version
# Create a new solution and: set options to defaults
solution new -state initial
solution options defaults

# Enable Verilog and VHDL output
solution options set Output/OutputVerilog true
# solution options set Output/OutputVHDL true

# Include search paths
solution options set /Input/SearchPath $WORKING_DIR
solution options set /Input/CompilerFlags {-DFOURTH}

# Add source and testbench files, associating testbench with "data_4th"
solution file add $WORKING_DIR/attention.cpp -type C++ 
solution file add $WORKING_DIR/attention_test.cpp -type C++ -exclude true

# Set top-level module
go new
solution design set dut -top

# Define clock and timing parameters
directive set -SCHED_USE_MULTICYCLE true
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


go analyze

solution design set dut -top
go compile

# FPGA Library
solution library add mgc_Xilinx-ZYNQ-1_beh -- -rtlsyntool Vivado -manufacturer Xilinx -family ZYNQ -speed -1 -part xc7z020clg484-1
solution library add Xilinx_RAMS
solution library add Xilinx_ROMS
solution library add amba
solution library add Xilinx_FIFO
go libraries

# Setting Constant Arrays to use Registers -> BRAMs instead of LUT. 
# directive set /dut/cos_tab.rom:rsc -MAP_TO_MODULE {[Register]}
# directive set /dut/sin_tab.rom:rsc -MAP_TO_MODULE {[Register]}
# directive set /dut/q_weights.rom:rsc -MAP_TO_MODULE {[Register]}
# directive set /dut/k_weights.rom:rsc -MAP_TO_MODULE {[Register]}
# directive set /dut/v_weights.rom:rsc -MAP_TO_MODULE {[Register]}
# directive set /dut/o_weights.rom:rsc -MAP_TO_MODULE {[Register]}
go architect

# # Gets the RTL Files
go assembly
go extract
