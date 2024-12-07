import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from sklearn.linear_model import LinearRegression
from fractions import Fraction

# Read the data from the CSV file
data = pd.read_csv('result/exec_times.csv', header=None)
x = data[0].values.reshape(-1, 1)
y = data[1].values

# Create a linear regression model
model = LinearRegression()
model.fit(x, y)

# Predict y values for the line of best fit
x_fit = np.linspace(min(x), 1, 100).reshape(-1, 1)  # Extrapolate to x=1
y_fit = model.predict(x_fit)

# Plot the data points
plt.scatter(x, y, color='blue', label='Obtained Data')

# Plot the line of best fit
plt.plot(x_fit, y_fit, color='red', linestyle='--', label='Line of Best Fit')

# Highlight the extrapolated point at x=1
y_extrapolated = model.predict([[1]])
plt.scatter([1], y_extrapolated, color='green', zorder=5, label=f'Full Size (1, {y_extrapolated[0]:.2f})')

# Set labels and title
plt.xlabel('Fraction of Full Size')
plt.ylabel('Execution Time (ms)')
plt.title('Model Size Execution Time with Extrapolation')

# Set x-axis to log scale
plt.xscale('log')

# Set the x-axis ticks to match the data points and convert to fractions
unique_x = np.unique(x)
fraction_labels = [str(Fraction(val).limit_denominator()) for val in unique_x]
plt.xticks(unique_x, labels=fraction_labels)

# Enable grid
plt.grid(True)

# Add legend
plt.legend()

# Save the plot to a file
plt.savefig('result/exec_times_plot.png')

# Show the plot
plt.show()