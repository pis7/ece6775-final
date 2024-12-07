#!/bin/bash

# Check if the correct number of arguments is provided
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <tot_width> <int_width>"
    exit 1
fi

# Get the command line arguments
tot_width=$1
int_width=$2

# Output directory and file
mkdir -p result/
mkdir -p build/
output_file="result/attention_full_${tot_width}_${int_width}.txt"
plot_output_file="result/accuracy_err_plot_${tot_width}_${int_width}.png"

echo "Compiling and extracting for BUS_TOT_W=$tot_width and BUS_INT_W=$int_width..."

# Compile the code with the provided values of tot_width and int_width
g++ -g -I/opt/xilinx/Vivado/2019.2/include -DHLS_NO_XIL_FPO_LIB -std=c++11 -O3 -DFULL -DBUS_TOT_W=$tot_width -DBUS_INT_W=$int_width attention.cpp attention_test.cpp -o build/attention_full_${tot_width}_${int_width} -lrt

# Run the compiled executable and output to the file
./build/attention_full_${tot_width}_${int_width} > $output_file

echo "Execution completed. Results are in $output_file."

# Call the Python script to generate the plot
python3 scripts/plot_indiv_accuracy.py $output_file $plot_output_file $tot_width $int_width

echo "Plot generated. Results are in $plot_output_file."