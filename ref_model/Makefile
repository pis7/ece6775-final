.PHONY: clean all run

# Define the compiler and flags
CXX = g++ -g
CXXFLAGS = -std=c++17 -I./include

# Define directories
SRC_DIR = src_c

all: run

# Define source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)

# Define the output executable
OUTPUT = attention_test

# Build target
$(OUTPUT): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(SRC_FILES)

run: $(OUTPUT)
	./$(OUTPUT)

# Clean up build files
clean:
	rm -f $(OUTPUT)
