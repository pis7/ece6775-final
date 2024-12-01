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
CFLAGS=-g -I${VHLS_INC} -DHLS_NO_XIL_FPO_LIB -std=c++11 -O3

.PHONY: all csim result/attention_csim_full.txt \
		result/attention_csim_4th.txt \
		result/attention_csim_16th.txt \
		result/attention_csim_64th.txt \
		vivado_full \
		vivado_4th \
		vivado_16th \
		vivado_64th \
		bitstream_full \
		bitstream_4th \
		bitstream_16th \
		bitstream_64th \
		clean

all: csim

# build
build/attention_full: attention.cpp attention_test.cpp
	mkdir -p build
	g++ ${CFLAGS} -DFULL $^ -o $@ -lrt

build/attention_4th: attention.cpp attention_test.cpp
	mkdir -p build
	g++ ${CFLAGS} -DFOURTH $^ -o $@ -lrt

build/attention_16th: attention.cpp attention_test.cpp
	mkdir -p build
	g++ ${CFLAGS} -DSIXTEENTH $^ -o $@ -lrt

build/attention_64th: attention.cpp attention_test.cpp
	mkdir -p build
	g++ ${CFLAGS} -DSIXTYFOURTH $^ -o $@ -lrt

result/attention_csim_full.txt: build/attention_full
	@echo -e "Running attention sim full model..."
	mkdir -p result
	./$< | tee $@

result/attention_csim_4th.txt: build/attention_4th
	@echo -e "Running attention sim 1/4 model..."
	mkdir -p result
	./$< | tee $@

result/attention_csim_16th.txt: build/attention_16th
	@echo -e "Running attention sim 1/16 model..."
	mkdir -p result
	./$< | tee $@

result/attention_csim_64th.txt: build/attention_64th
	@echo -e "Running attention sim 1/64 model..."
	mkdir -p result
	./$< | tee $@

# csim
csim: csim_full csim_4th csim_16th csim_64th

csim_full: result/attention_csim_full.txt

csim_4th: result/attention_csim_4th.txt

csim_16th: result/attention_csim_16th.txt

csim_64th: result/attention_csim_64th.txt

# vivado
vivado: vivado_full vivado_4th vivado_16th vivado_64th

vivado_full:
	$(XIL_HLS) -f run_full.tcl

vivado_4th:
	$(XIL_HLS) -f run_4th.tcl

vivado_16th:
	$(XIL_HLS) -f run_16th.tcl

vivado_64th:
	$(XIL_HLS) -f run_64th.tcl

# bitstream

bitstream: bitstream_4th bitstream_16th bitstream_64th

bitstream_full: vivado_full
	source $(XILINX_VIVADO)/settings64.sh; ./run_bitstream.sh -p "attention_full"
	@echo "Bitstream saved to $<"

bitstream_4th: vivado_4th
	source $(XILINX_VIVADO)/settings64.sh; ./run_bitstream.sh -p "attention_4th"
	@echo "Bitstream saved to $<"

bitstream_16th: vivado_16th
	source $(XILINX_VIVADO)/settings64.sh; ./run_bitstream.sh -p "attention_16th"
	@echo "Bitstream saved to $<"

bitstream_64th: vivado_64th
	source $(XILINX_VIVADO)/settings64.sh; ./run_bitstream.sh -p "attention_64th"
	@echo "Bitstream saved to $<"

# accuracy test
accuracy: clean
	mkdir -p build
	mkdir -p result
	./sweep_width.sh
	pip install matplotlib
	python plot.py

# clean
clean:
	rm -rf attention build result *.dat *.log
	rm -rf xillydemo.bit
