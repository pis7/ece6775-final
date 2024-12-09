#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile the compiles and runs the attention program
#
# @desc: 1. "make" or "make sw" runs software execution by default
#        2. "make fpga" invokes the HW accelerator
#        3. "make clean" cleans up the directory


INC_PATH=/usr/include/vivado_hls
CFLAGS = -I${INC_PATH} -DHLS_NO_XIL_FPO_LIB -O3

.SILENT:
.PHONY: all sw fpga

all: sw

attention-arm_4th: attention.cpp attention_test.cpp
	@echo "Compiling & executing attention software program on ARM ..."
	g++ ${CFLAGS} -DFOURTH $^ -o $@

attention-arm_16th: attention.cpp attention_test.cpp
	@echo "Compiling & executing attention software program on ARM ..."
	g++ ${CFLAGS} -DSIXTEENTH $^ -o $@

attention-arm_64th: attention.cpp attention_test.cpp
	@echo "Compiling & executing attention software program on ARM ..."
	g++ ${CFLAGS} -DSIXTYFOURTH $^ -o $@

result/attention_arm_sim_%.txt: attention-arm_%
	mkdir -p result
	./$< | tee $@

sw_%: result/attention_arm_sim.txt_%
	@echo "Result saved to $@"

build/attention-fpga_4th: host.cpp
	mkdir -p build
	@echo "Compiling host program"
	g++ ${CFLAGS} -DFOURTH $^ -o $@

build/attention-fpga_16th: host.cpp
	mkdir -p build
	@echo "Compiling host program"
	g++ ${CFLAGS} -DSIXTEENTH $^ -o $@

build/attention-fpga_64th: host.cpp
	mkdir -p build
	@echo "Compiling host program"
	g++ ${CFLAGS} -DSIXTYFOURTH $^ -o $@

fpga_%: build/attention-fpga_%
	@echo "Running HW accelerator"
	./$<

# Clean up the directory before submission
clean:
	@echo "Clean up output files"
	rm -rf build/ attention-sw vivado_hls.log *.prj result out.dat *~
	rm -rf attention-fpga
