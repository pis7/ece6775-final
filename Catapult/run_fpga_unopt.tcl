## UPDATE DIR PATH HERE
## Get the current working directory where the script is running
set WORKING_DIR $::env(PWD)

# STEP 1: Set up project variables
set VERSION "unopt"
set PLATFORM "fpga"
set PROJECT_DIR "catapult_files"
set SOL_NAME "attention_layer"

# STEP 2: Create a new project in the catapult_files directory
project new -name "attention_layer_${PLATFORM}_${VERSION}" -dir "$WORKING_DIR/$PROJECT_DIR/attention_layer_${PLATFORM}_${VERSION}"
project save
# STEP 3: Create a new solution
solution new -state initial $SOL_NAME 
solution options defaults

# STEP 4: Configure solution options
solution options set Output/OutputVerilog true
# solution options set Output/OutputVHDL true
solution options set Input/SearchPath "$WORKING_DIR" -append

solution options set Input/CompilerFlags {-DFOURTH}

# STEP 5: Add source files
solution file add "$WORKING_DIR/attention.cpp" -type C++ 
solution file add "$WORKING_DIR/attention_test.cpp" -type C++ -exclude true

# STEP 6: Create a new module with a custom name
go new

# STEP 7: Set top-level module
solution design set dut -top

# STEP 8: Define clock and timing parameters
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

# STEP 9: Analyze the design
go analyze

# STEP 10: Set top-level module again (redundant, but kept for consistency)
solution design set dut -top

# STEP 11: Compile the design
go compile
project save
# STEP 12: Add FPGA libraries
solution library add mgc_Xilinx-ZYNQ-1_beh -- \
                    -rtlsyntool Vivado \
                    -manufacturer Xilinx \
                    -family ZYNQ \
                    -speed -1 \
                    -part xc7z020clg484-1

solution library add Xilinx_RAMS
solution library add Xilinx_ROMS
solution library add amba
solution library add Xilinx_FIFO

# STEP 13: Process libraries
go libraries

# STEP 14: Architect the design
go architect

# STEP 15: Generate RTL
go assembly

# STEP 16: Extract the design
go extract

flow run /Vivado/synthesize -shell vivado_v/rtl.v.xv    
project save
