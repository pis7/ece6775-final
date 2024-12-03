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
# solution options set /Input/SearchPath { $WORKING_DIR $WORKING_DIR/data_4th }
solution options set /Input/SearchPath $WORKING_DIR
solution options set /Input/CompilerFlags {-DFOURTH}

# Add source and testbench files, associating testbench with "data_4th"
solution file add $WORKING_DIR/attention.cpp -type C++ 
solution file add $WORKING_DIR/attention_test.cpp -type C++ -exclude true
# solution file add $WORKING_DIR/data_4th

# Set top-level module
solution design set dut -top

# Set device-specific parameters (Zynq xc7z020clg484-1)
solution library add mgc_Xilinx-ZYNQ-1_beh -- -rtlsyntool Vivado -manufacturer Xilinx -family ZYNQ -speed -1 -part xc7z020clg484-1
solution library add Xilinx_RAMS
solution library add Xilinx_ROMS
solution library add amba
solution library add Xilinx_FIFO

# Define clock and timing parameters
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

# Compile the solution
go new
go compile

# Assemble and prepare the design
# go assembly
# go architect
# go extract

# flow run /SCVerify/launch_make ./scverify/Verify_orig_cxx_osci.mk {} SIMTOOL=osci sim