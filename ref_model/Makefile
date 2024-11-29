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

attn_test/attention_test_full: $(ATTN_FILES)
	$(CXX) $(CXXFLAGS) -DFULL -o $@ $(ATTN_FILES)

attn_test/attention_test_4th: $(ATTN_FILES)
	$(CXX) $(CXXFLAGS) -DFOURTH -o $@ $(ATTN_FILES)

attn_test/attention_test_16th: $(ATTN_FILES)
	$(CXX) $(CXXFLAGS) -DSIXTEENTH -o $@ $(ATTN_FILES)

attn_test/attention_test_64th: $(ATTN_FILES)
	$(CXX) $(CXXFLAGS) -DSIXTYFOURTH -o $@ $(ATTN_FILES)

# csim
run_inference: inference/inference
	./$<

csim_full: attn_test/attention_test_full
	./$<

csim_4th: attn_test/attention_test_4th
	./$<

csim_16th: attn_test/attention_test_16th
	./$<

csim_64th: attn_test/attention_test_64th
	./$<

# Clean up build files
clean:
	rm -f inference/inference
	rm -f attn_test/attention_test