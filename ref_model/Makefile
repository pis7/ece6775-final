.PHONY: clean all run

# Define the compiler and flags
CXX = g++ -g
CXXFLAGS = -std=c++17 -I./include

# Define directories
SRC_DIR = src_c
INFERENCE_DIR = inference

# Define source files
ATTN_FILES = $(wildcard $(SRC_DIR)/*.cpp) attn_test/attention_test.cpp
INF_FILES = $(wildcard $(SRC_DIR)/*.cpp) $(INFERENCE_DIR)/load_model.cpp $(INFERENCE_DIR)/inference.cpp

# Build target
inference/inference: $(INF_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $(INF_FILES)

attn_test/attention_test: $(ATTN_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $(ATTN_FILES)

# Run target
run_inference: inference/inference
	./$<

run_attention: attn_test/attention_test
	./$<

# Clean up build files
clean:
	rm -f inference/inference
	rm -f attn_test/attention_test