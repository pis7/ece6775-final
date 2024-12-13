# Makefile for running Catapult HLS

# Variables
CATAPULT = catapult
TCL_SCRIPT_1 = run_fpga_unopt.tcl
TCL_SCRIPT_2 = run_fpga_resmanaged.tcl
TCL_SCRIPT_3 = run_fpga_opt.tcl
TCL_SCRIPT_4 = run_asic_unopt.tcl
TCL_SCRIPT_5 = run_asic_opt.tcl
CATAPULT_FILES_DIR = catapult_files

# Default target
all: run_fpga_unopt run_fpga_resmanaged run_fpga_opt run_asic_unopt run_asic_opt

# Run Catapult hls
fpga_unopt:
	$(CATAPULT) -product hls -shell -file $(TCL_SCRIPT_1)

fpga_resmanaged:
	$(CATAPULT) -product hls -shell -file $(TCL_SCRIPT_2)

fpga_opt:
	$(CATAPULT) -product hls -shell -file $(TCL_SCRIPT_3)

asic_unopt:
	$(CATAPULT) -product hls -shell -file $(TCL_SCRIPT_4)

asic_opt:
	$(CATAPULT) -product hls -shell -file $(TCL_SCRIPT_5)

# Clean up
clean:
	@echo "Cleaning up..."
	rm -rf $(CATAPULT_FILES_DIR)
	rm -rf catapult* 
	rm -rf Catapult*

.PHONY: all run_catapult clean
