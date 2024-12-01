import matplotlib.pyplot as plt
import numpy as np

# Use the Agg backend
plt.switch_backend('Agg')

# Initialize lists to hold the extracted values
bus_tot_w = []
bus_int_w = []
rmse = []

# Read the data from the file
with open('result/sweep_width_output.txt', 'r') as file:
    for line in file:
        parts = line.split()
        try:
            bus_tot_w.append(int(parts[0].split('=')[1]))
            bus_int_w.append(int(parts[1].split('=')[1]))
            rmse.append(float(parts[2].split('=')[1]))
        except (IndexError, ValueError) as e:
            print(f"Skipping line due to error: {line.strip()} - {e}")

# Convert lists to numpy arrays for plotting
bus_tot_w = np.array(bus_tot_w)
bus_int_w = np.array(bus_int_w)
rmse = np.array(rmse)

# Create a 2D plot
plt.figure()
sc = plt.scatter(bus_int_w, bus_tot_w, c=rmse, cmap='viridis', marker='o')

# Add color bar to show the RMSE values
plt.colorbar(sc, label='RMSE')

# Set labels
plt.xlabel('Bus Integer Width (bits)')
plt.ylabel('Bus Total Width (bits)')
plt.title('RMSE vs. Bus Total Width and Bus Integer Width')

# Save the plot to a file
plt.savefig('result/rmse_plot.png')

print("Plot saved to result/rmse_plot.png")