#!/bin/bash

# Define the range for bus_tot_w and bus_int_w
bus_tot_w_start=34
bus_tot_w_end=56
bus_int_w_start=12
bus_int_w_end=20
granularity=2

# Output file
mkdir -p result/
mkdir -p build/
output_file="result/sweep_width_output.txt"
> $output_file

# Loop through each value of bus_tot_w
for bus_tot_w in $(seq $bus_tot_w_start $granularity $bus_tot_w_end); do
    # Loop through each value of bus_int_w
    for bus_int_w in $(seq $bus_int_w_start $granularity $bus_int_w_end); do
        echo "Compiling and extracting for BUS_TOT_W=$bus_tot_w and BUS_INT_W=$bus_int_w..."

        # Compile the code with the current values of bus_tot_w and bus_int_w
        g++ -g -I/opt/xilinx/Vivado/2019.2/include -DHLS_NO_XIL_FPO_LIB -std=c++11 -O3 -DFULL -DBUS_TOT_W=$bus_tot_w -DBUS_INT_W=$bus_int_w attention.cpp attention_test.cpp -o build/attention_full_${bus_tot_w}_${bus_int_w} -lrt
        
        # Run the compiled executable and extract the desired line
        ./build/attention_full_${bus_tot_w}_${bus_int_w} | grep 'BUS_TOT_W=' >> $output_file
    done
done

echo "Compilation and extraction completed. Results are in $output_file."

# Call the Python script to generate the plot
python3 plot_accuracy.py

echo "Plot generated."
