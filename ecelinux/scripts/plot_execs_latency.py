import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression
from fractions import Fraction

# Read the data from the CSV files
data = pd.read_csv('result/exec_times_fpga.csv', header=None)
ref_data = pd.read_csv('result/exec_times_ref.csv', header=None)
latency_data = pd.read_csv('result/latency_synth.csv', header=None)

x = data[0].values.reshape(-1, 1)
y = data[1].values

x_ref = ref_data[0].values.reshape(-1, 1)
y_ref = ref_data[1].values

x_latency = latency_data[0].values.reshape(-1, 1)
y_latency = latency_data[1].values

# Create linear regression models
model_measured = LinearRegression()
model_measured.fit(x, y)

model_ref = LinearRegression()
model_ref.fit(x_ref, y_ref)

model_latency = LinearRegression()
model_latency.fit(x_latency, y_latency)

# Predict y values for the lines of best fit
x_fit = np.linspace(min(x), 1, 100).reshape(-1, 1)  # Extrapolate to x=1
y_fit_measured = model_measured.predict(x_fit)
y_fit_ref = model_ref.predict(x_fit)

x_fit_latency = np.linspace(min(x_latency), max(x_latency), 100).reshape(-1, 1)
y_fit_latency = model_latency.predict(x_fit_latency)

# Create a figure with two subplots
fig, axs = plt.subplots(1, 2, figsize=(14, 6))

# Plot the execution times
axs[0].scatter(x, y, color='blue', label='FPGA Measured Times')
axs[0].scatter(x_ref, y_ref, color='red', label='Reference Times')
axs[0].plot(x_fit, y_fit_measured, color='blue', linestyle='--', label='Line of Best Fit for Measured')
axs[0].plot(x_fit, y_fit_ref, color='red', linestyle='--', label='Line of Best Fit for Reference')
y_extrapolated_measured = model_measured.predict([[1]])
axs[0].scatter([1], y_extrapolated_measured, color='green', zorder=5, label=f'Full Size Extrapolation (1, {y_extrapolated_measured[0]:.2f})')
axs[0].set_xlabel('Fraction of Full Size Model')
axs[0].set_ylabel('Execution Time (ms)')
axs[0].set_title('Execution Time vs Model Size with Extrapolation')
unique_x = np.unique(np.concatenate((x, x_ref)))
fraction_labels = [str(Fraction(val).limit_denominator()) for val in unique_x]
axs[0].set_xticks(unique_x)
axs[0].set_xticklabels(fraction_labels, rotation=90)
axs[0].grid(True)
axs[0].legend()

# Plot the latencies
axs[1].scatter(x_latency, y_latency, color='blue', label='Synthesized Latency Data')
axs[1].plot(x_fit_latency, y_fit_latency, color='blue', linestyle='--', label='Line of Best Fit')
axs[1].set_xlabel('Fraction of Full Size Model')
axs[1].set_ylabel('Latency (Cycles)')
axs[1].set_title('Synthesized Latency vs Model Size')
unique_x = np.unique(np.concatenate((x, x_ref)))
fraction_labels = [str(Fraction(val).limit_denominator()) for val in unique_x]
axs[1].set_xticks(unique_x)
axs[1].set_xticklabels(fraction_labels, rotation=90)
axs[1].grid(True)
axs[1].legend()

# Save the plot to a file
plt.tight_layout()
plt.savefig('result/execs_latency_vivado.png')

# Show the plot
plt.show()