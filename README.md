# HLS Final Project
- https://github.com/pis7/ece6775-final

# Allo
- MUST BE IN THE `Allo` subdirectory and on a `zhang` server for all of the below
- Follow the setup instructions below before running

## Setup Instructions
Create and Activate Conda Environment <br>
- `conda create -n allo python=3.12`
- `conda activate allo`

Set up the backend LLVM compiler:
- `source /work/shared/common/allo/setup-llvm19.sh`

Set up Vivado:
- `source /opt/xilinx/Vivado/2019.2/settings64.sh`

Install Python requirements:
- `pip install -r requirements.txt`

## Running and Verifying Attention Using Allo Software
Run the unoptimized implementation:
- `python3 main.py --target sw --imp unopt`

Run the area limited optimized implementation:
- `python3 main.py --target sw --imp opt-area`

Run the aggressive optimized implementation:
- `python3 main.py --target sw --imp opt-aggressive`

## Synthesizing Attention Using Vivado
Synthesize the unoptimized implementation:
- `python3 main.py --target vivado --imp unopt`
- Results will be in `attention_unopt.prj`

Synthesize the area limited optimized implementation:
- `python3 main.py --target vivado --imp opt-area`
- Results will be in `attention_opt-area.prj`

Synthesize the aggressive optimized implementation:
- `python3 main.py --target vivado --imp opt-aggressive`
- Results will be in `attention_opt-aggressive.prj`

# Catapult

- MUST BE IN THE `Catapult` subdirectory for all of the below
  
## Setup Instructions

Set up Catapult:
`module load siemens/catapult`

Set up Questasim:
`module load siemens/questasim`

Set up Vivado: - For FPGA Synthesis
`source /opt/xilinx/Vivado/2019.2/settings64.sh`

Set up Vivado: - For ASIC Nangate 45nm
`module load synopsys/synopsys-dc`

## Running and Verifying Attention Using Catapult
To generate the project run 
`make <platform_opttype>` <br>
Where make options are platform: asic, fpga and opttype: unoptimized, resource managed, optimized. 
- Project Files directory: catapult_files
- Latency and Area results can be found in the rtl.rpt/cycle.rpt in the project file directory.
- When Synthesized Resource Utilization and timing report results will be in catapult_files/attention_layer_<PLATFORM>_<opt_type>/\<solution\>/vivado_v/

All the tcl files can be run on the GUI by running do file run.tcl in the console or selecting the run script option in the task bar. 

For simulation checks, it is recommended to use the GUI. or it can be run with 
- `g++ -I $MGC_HOME/shared/include <design file name>.cpp`
We can also run using the make files generated in the project files. <br>

The current run files have been set to run -DFOURTH, but they can be changed to run for larger data for different platforms. <br>

# Vivado
- MUST BE IN THE `Vivado` subdirectory for all of the below

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
- `make vivado` to do synthesis for all four models back-to-back or `make vivado_<N>th` where N is 4, 16, or 54 to correspond to the model size, `make vivado_full` can be run to synthesize the full model

## Running Our Implementation Bitstream Generation
- `cd ecelinux`
- `make bitstream<_<N>th>` to perform synthesis and generate bitstream for 4th, 16th, and 64th size models (full-sized model cannot be synthesized due to resource constraints), the optional _<N>th argument on the end specifies specific model to generate the bitstream (without it, all will be synthesized except the full-sized model)

## Running Our Implementation on FPGA
- Zip `ecelinux` and `zedboard` into a zip file
   + do not include the `zedboard_project.tgz` file in `ecelinux/` or the `.git` folder
   + do not include the .prj folders or any build or result folders
   + do not include the zedboard_project folder
- `scp` the zip file to the Zedboard
- `scp` the appropriate `xillydemo.bit` file from the corresponding `.prj` for the model you wish to use
- `ssh` into the Zedboard
- Unzip the zip file
- Copy `xillydemo.bit` onto the SD card as usual and reboot
- `cd` into the `zedboard/` folder
- `make fpga_<N>th` where <N> is 4, 16, or 64 to correspond to the model size of the `xillydemo.bit` file you loaded
   + to rerun the already-built executable, run directly by using `./build/attention-fpga_<N>th`
- Execution time, comparison to ground truth output from reference model, and overall RMSE will be printed to the console

## Collecting Results for Our Implementation

### Execution Times and Latencies
- FPGA execution times have been manually tabulated in `ecelinux/result/exec_times_fpga.csv`, reference model execution times have been manually tabulated in `ecelinux/result/exec_times_ref.csv`, and latencies have been manually tabulated in `ecelinux/latency_synth.csv` - YOU SHOULD NOT NEED TO MODIFY THESE
- In `ecelinux/`, run `python scripts/plot_execs_latency.py` to generate the plot `result/execs_latency_vivado.png`

### Accuracy Sweep across Bit Widths
- In `ecelinux/`, run `./scripts/sweep_width.sh` to generate the plot `result/accuracy_plot.png`
- Note that certain combinations have divide-by-zero issues, and so are not shown in the final plot

### Individual Bit Width Accuracy Reference vs Ground Truth Plot
- In `ecelinux/`, run `./scripts/user_width.sh <TOT_WIDTH> <INT_WIDTH>`, replacing <TOT_WIDTH> and <INT_WIDTH> with the desired values, to generate the plot `result/accuracy_err_plot_<TOT_WIDTH>_<INT_WIDTH>.png`
