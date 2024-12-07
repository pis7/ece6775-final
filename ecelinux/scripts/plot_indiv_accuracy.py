import matplotlib.pyplot as plt
import numpy as np
import argparse

# Parse command-line arguments
parser = argparse.ArgumentParser(description='Plot ground truth vs result values with a linear reference line.')
parser.add_argument('input_filename', type=str, help='The input file containing the data')
parser.add_argument('output_filename', type=str, help='The output file to save the plot')
parser.add_argument('tot_width', type=int, help='The total width value')
parser.add_argument('int_width', type=int, help='The integer width value')
args = parser.parse_args()

# Initialize lists to hold the extracted values
ground_truth = []
result_value = []

# Read the data from the file
with open(args.input_filename, 'r') as file:
    for line in file:
        parts = line.split(',')
        try:
            result_value.append(float(parts[0].split(':')[1].strip()))
            ground_truth.append(float(parts[1].split(':')[1].strip()))
        except (IndexError, ValueError) as e:
            print(f"Skipping line due to error: {line.strip()} - {e}")

# Convert lists to numpy arrays for plotting
ground_truth = np.array(ground_truth)
result_value = np.array(result_value)

# Create a 2D plot
plt.figure()
plt.scatter(ground_truth, result_value, color='blue', label='Data Points')

# Plot the linear reference line (y = x)
min_val = min(min(ground_truth), min(result_value))
max_val = max(max(ground_truth), max(result_value))
plt.plot([min_val, max_val], [min_val, max_val], color='red', linestyle='--', label='Reference Line (y = x)')

# Set labels and title
plt.xlabel('Ground Truth Value')
plt.ylabel('Result Value')
plt.title(f'Ground Truth vs Result Value (TOT_WIDTH={args.tot_width}, INT_WIDTH={args.int_width})')

# Enable grid
plt.grid(True)

# Add legend
plt.legend()

# Save the plot to a file
plt.savefig(args.output_filename)

# Show the plot
plt.show()

print(f"Plot saved to {args.output_filename}")