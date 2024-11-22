#==========================================================================
# Makefile
#==========================================================================
# @brief: A makefile the compiles and synthesizes the attention program
#
# @desc: 1. "make" runs csim by default
#        2. "make csim" compiles & executes the fixed-point implementation
#        3. "make clean" cleans up the directory


# Extract Vivado HLS include path
XILINX_VIVADO?=/opt/xilinx/Vivado/2019.2
XIL_HLS=source $(XILINX_VIVADO)/settings64.sh; vivado_hls
VHLS_INC=$(XILINX_VIVADO)/include
# Specify compilation flags
CFLAGS= -I${VHLS_INC}

TCL_SCRIPT=run.tcl

.PHONY: all csim result/attention_csim.txt bitstream clean
.SILENT: 

all: csim

attention: attention.cpp attention_test.cpp
	g++ ${CFLAGS} $^ -o $@ -lrt

result/attention_csim.txt: attention
	@echo -e "Running attention sim..."
	mkdir -p result
	./$< | tee $@

csim: result/attention_csim.txt
	@echo "Result recorded to $<"

xillydemo.bit:
	@echo "================================================================="
	@echo "Synthesizing attention and creating bitstream for $(TCL_SCRIPT)..."
	@echo "================================================================="
	$(XIL_HLS) -f $(TCL_SCRIPT)
	./run_bitstream.sh

bitstream: xillydemo.bit
	@echo "Bitstream saved to $<"

clean:
	rm -rf attention *.dat *.prj *.log
	rm -rf zedboard_project* xillydemo.bit
