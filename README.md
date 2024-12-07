# HLS Final Project

# Vivado

## Directories
- `ecelinux/` - contains the source code, data, and generation scripts for Vivado
- `zedboard/` - contains mostly simlinks to important source files in `ecelinux/` as well we as the `host.cpp` program for execution on the FPGA
- `ref_model/` - contains the necessary source files and test programs to run the attention layer of Kaixin's reference model

## Running Reference Model Csim
- `cd ref_model/`
- `make csim_<N>th` where <N> is 4, 16, or 64 to correspond to the model size, `make csim_full` can be run to simulate the full model
- Execution time and outputs will be printed to the console

## Running Our Implementation Csim
- `cd ecelinux`
- `make csim_<N>th` where <N> is 4, 16, or 64 to correspond to the model size, `make csim_full` can be run to simulate the full model
- Execution time, comparison to ground truth output from reference model and overall RMSE will be printed to the console

## Running Our Implementation HLS -> RTL Synthesis
- `cd ecelinux`
- `make vivado` to do synthesis for all four models back-to-back or `make vivado_<N>th` where N is 4, 16, or 54 to correspond to the model size, `make csim_full` can be run to syntheesize the full model

## Running Our Implementation Bitstream Generation
- `cd ecelinux`
- `make bitstream` to perform synthesis and generate bitstream for 4th, 16th, and 64th size models (full-sized model cannot be synthesized due to resource constraints)

## Running Our Implementation on FPGA
- Zip `ecelinux` and `zedboard` into a zip file, do not include the `zedboard_project.tgz` file in `ecelinux/` or the `.git` folder
- `scp` the zip file to the Zedboard
- `ssh` into the Zedboard
- Unzip the file
- Copy the xillydemo.bit from the appropriate model onto the SD card as usual
- `cd` into the `zedboard/` folder
- `make fpga_<N>th` where <N> is 4, 16, or 64 to correspond to the model size
- Execution time, comparison to ground truth output from reference model and overall RMSE will be printed to the console

## Collecting Results for Our Implementation

### Execution Times and Latencies
- FPGA execution times have been manually tabulated in `ecelinux/result/exec_times_fpga.csv`, reference model execution times have been manually tabulated in `ecelinux/result/exec_times_ref.csv`, and latencies have been manually tabulated in `ecelinux/latency_synth.csv` - YOU SHOULD NOT NEED TO MODIFY THESE
- In `ecelinux/`, run `python scripts/plot_execs_latency.py` to generate the plot `result/execs_latency_vivado.png`

### Accuracy Sweep
- In `ecelinux/`, run `./scripts/sweep_width.sh` to generate the plot `result/accuracy_plot.png`

### Individual Accuracy Reference vs Ground Truth Plot
- In `ecelinux/`, run `./scripts/user_width.sh <TOT_WIDTH> <INT_WIDTH>`, replacing <TOT_WIDTH> and <INT_WIDTH> with the desired values, to generate the plot `result/accuracy_err_plot_<TOT_WIDTH>_<INT_WIDTH>.png`