#include <CLI11.hpp>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <numeric>
#include <random>
#include <utility>
#include <chrono>
#include "../src_c/bitnet.h"
#include "../src_c/embedding.h"
#include "../src_c/rotary_embedding.h"
#include "../model_config.h"
#include "load_model.h"


std::vector<size_t> get_encoded_id(const std::string &file_name){
    std::vector<size_t> encoded_id;
    std::ifstream file(file_name, std::ios::binary);

    if (!file) {
        throw std::runtime_error("Error opening file: " + file_name);
    }

    // Get the file size
    file.seekg(0, std::ios::end);
    std::streamsize file_size = file.tellg();
    file.seekg(0, std::ios::beg);


    // Calculate the number of size_t elements in the file
    size_t num_elements = file_size / sizeof(size_t);
    encoded_id.resize(num_elements);

    // Read the data into the vector
    if (!file.read(reinterpret_cast<char*>(encoded_id.data()), file_size)) {
        throw std::runtime_error("Error reading file: " + file_name);
    }

    if (encoded_id.empty()) {
        throw std::runtime_error("No data read from file: " + file_name);
    }
    if (encoded_id[0] != 1) {
        throw std::runtime_error("Should start with encode 1 for </s> " + file_name);
    }

    file.close();

    std::cout << "Encoded_ID: ";
    for (size_t i = 0; i < encoded_id.size(); ++i) {
        std::cout << encoded_id[i] << " ";
    }
    std::cout << std::endl;

    return encoded_id;
}

void save_ids_to_bin(const std::vector<size_t>& data, const std::string& filename) {
    std::ofstream file(filename, std::ios::binary);
    if (!file) {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
        return;
    }

    // Write the data of the vector directly
    file.write(reinterpret_cast<const char*>(data.data()), data.size() * sizeof(size_t));
    file.close();
}

// Element-wise division by temperature
std::vector<float> adjust_temperature(const std::vector<float>& logits, float temperature = 1.0) {
    std::vector<float> adjusted(logits.size());
    std::transform(logits.begin(), logits.end(), adjusted.begin(),
                   [temperature](float logit) { return logit / temperature; });
    return adjusted;
}

// Get top-k values and their indices
std::pair<std::vector<float>, std::vector<int>> top_k(const std::vector<float>& logits, int k) {
    std::vector<int> indices(logits.size());
    std::iota(indices.begin(), indices.end(), 0);

    // Partially sort to find top-k indices
    std::partial_sort(indices.begin(), indices.begin() + k, indices.end(),
                      [&logits](int i, int j) { return logits[i] > logits[j]; });

    // Extract top-k values and indices
    std::vector<float> top_k_values(k);
    std::vector<int> top_k_indices(k);
    for (int i = 0; i < k; ++i) {
        top_k_values[i] = logits[indices[i]];
        top_k_indices[i] = indices[i];
    }

    return {top_k_values, top_k_indices};
}

// Softmax function
std::vector<float> softmax(const std::vector<float>& logits) {
    std::vector<float> exp_values(logits.size());
    float max_logit = *std::max_element(logits.begin(), logits.end());

    // Calculate exponentials
    std::transform(logits.begin(), logits.end(), exp_values.begin(),
                   [max_logit](float logit) { return std::exp(logit - max_logit); });

    // Sum of exponentials
    float sum_exp = std::accumulate(exp_values.begin(), exp_values.end(), 0.0f);

    // normalization
    std::vector<float> probabilities(logits.size());
    std::transform(exp_values.begin(), exp_values.end(), probabilities.begin(),
                   [sum_exp](float value) { return value / sum_exp; });
    return probabilities;
}

// Multinomial sampling function
int sample_from_distribution(const std::vector<float>& probabilities) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::discrete_distribution<> dist(probabilities.begin(), probabilities.end());
    return dist(gen);
}

// sample function
size_t sample(const std::vector<float>& logits, float temperature, int top_k_n) {
    // Step 1: Adjust logits by temperature
    std::vector<float> adjusted_logits = adjust_temperature(logits, temperature);

    // Step 2: Get top-k logits and indices
    auto [top_k_logits, top_k_indices] = top_k(adjusted_logits, top_k_n);

    // Step 3: Compute softmax on top-k logits
    std::vector<float> probs = softmax(top_k_logits);

    // Step 4: Sample from the distribution
    int sampled_index = sample_from_distribution(probs);

    // Step 5: Map sampled index back to the original token ID
    return static_cast<size_t>(top_k_indices[sampled_index]);
}

std::vector<size_t> casual_inference(ModelData &bitnet_model_data, const int max_length,
                      const std::vector<size_t> &encoded_id, float TEMPERATURE=0.8, int TOP_K=5) {
    std::vector<size_t> total_ids = encoded_id;
    size_t seq_len = encoded_id.size();
    std::vector<float> logits;
    size_t generated_id;
    // Initialize the embedding table here to avoid repeated initialization
    Embedding embedding_table(bitnet_model_data.non_layer_params_2D["embed_tokens"]);
    int latency = 0;
    for (size_t i = 0; i < max_length; ++i) {
        if (i == 0) {
            std::cout << "Always Prefill: >>>>>>>>>>>>>>" << std::endl;
        }
        auto start = std::chrono::high_resolution_clock::now();
        logits = bitnet_decoder(embedding_table, bitnet_model_data, total_ids, HIDDEN_SIZE, INTERMEDIATE_SIZE, NUM_HEADS, HEAD_NUM, seq_len, NUM_LAYERS).back();
        generated_id = sample(logits, TEMPERATURE, TOP_K);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> duration = end - start;
        int seconds = duration.count() / 1000;
        latency += seconds;
        total_ids.push_back(generated_id);
        std::cout << "Encoded_ID now: ";
        for (size_t j = 0; j < total_ids.size(); ++j) {
            std::cout << total_ids[j] << " ";
        }
        std::cout << std::endl;
        std::cout << "Inference time for " << i << "th token:"<< seconds << "s" << std::endl;
        seq_len++;
    }
    std::cout << "\nTotal latency: " << latency << "s" << std::endl;
    std::cout << "\nInference Speed: " << latency / (seq_len - encoded_id.size()) << " seconds / token" << std::endl;
    return total_ids;
}

std::vector<size_t> casual_inference_cache(ModelData &bitnet_model_data, const int max_length,
                      const std::vector<size_t> &encoded_id, float TEMPERATURE=0.8, int TOP_K=5) {
    std::vector<size_t> total_ids = encoded_id;
    size_t seq_len = encoded_id.size();
    std::vector<float> logits;
    std::vector<std::vector<std::vector<std::vector<float>>>> k_cache(NUM_LAYERS);
    std::vector<std::vector<std::vector<std::vector<float>>>> v_cache(NUM_LAYERS);
    size_t generated_id;
    std::vector<size_t> id_now;
    id_now.resize(1);
    // Initialize the embedding table here to avoid repeated initialization
    Embedding embedding_table(bitnet_model_data.non_layer_params_2D["embed_tokens"]);
    int latency = 0;
    for (size_t i = 0; i < max_length; ++i) {
        if (i == 0) {
            std::cout << "\n" << std::endl;
            std::cout << "Prefill Starts: >>>>>>>>>>>>>>" << std::endl;
        }
        if (i == 1) {
            std::cout << "\n" << std::endl;
            std::cout << "Decoding Starts: <<<<<<<<<<<<<<<" << std::endl;
        }
        auto start = std::chrono::high_resolution_clock::now();
        if (i == 0){
            logits = bitnet_prefill_decoding(embedding_table, bitnet_model_data, total_ids, HIDDEN_SIZE, INTERMEDIATE_SIZE, NUM_HEADS, HEAD_NUM, seq_len, NUM_LAYERS, k_cache, v_cache, 0, "prefill").back();
        }
        else{
            logits = bitnet_prefill_decoding(embedding_table, bitnet_model_data, id_now, HIDDEN_SIZE, INTERMEDIATE_SIZE, NUM_HEADS, HEAD_NUM, 1, NUM_LAYERS, k_cache, v_cache, total_ids.size() - 1, "decoding").back();
        }
        generated_id = sample(logits, TEMPERATURE, TOP_K);
        id_now[0] = generated_id;
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> duration = end - start;
        int seconds = duration.count() / 1000;
        latency += seconds;
        total_ids.push_back(generated_id);
        std::cout << "Encoded_ID now: ";
        for (size_t j = 0; j < total_ids.size(); ++j) {
            std::cout << total_ids[j] << " ";
        }
        std::cout << std::endl;
        std::cout << "Inference time for " << i << "th token:"<< seconds << "s" << std::endl;
        seq_len++;
    }
    std::cout << "\nTotal latency: " << latency << "s" << std::endl;
    std::cout << "Inference Speed: " << latency / (seq_len - encoded_id.size()) << " seconds / token" << std::endl;
    return total_ids;
}

int main(int argc, char* argv[]) {
    CLI::App app{"Argument Parsing Example"};
    int gen_tokens = 12;  // Default value
    float temp = 0.8;     // Default value
    int topk = 5;        // Default value
    bool prefill_only = false;  // Default value
    // Define named arguments with default values
    app.add_option("--gen_tokens", gen_tokens, "Number of generated tokens (default: 12)");
    app.add_option("--temp", temp, "Temperature for sampling (default: 0.8)");
    app.add_option("--topk", topk, "Top-k sampling limit (default: 5)");
    app.add_option("--prefill_only", prefill_only, "Use prefill-only inference mode");

    CLI11_PARSE(app, argc, argv);

    ModelData bitnet_model_data = load_model_from_bin("model.bin");
    std::vector<size_t> encoded_id = get_encoded_id("encoded_prompt.bin");

    std::vector<size_t> total_ids;

    //pre-calcute the cos/sin values for rotary embeddings here
    for (size_t l = 0; l < NUM_LAYERS; ++l) {
        bitnet_model_data.layers[l].float_params_2D["rotary_emb.cos"] = std::vector<std::vector<float>>(MAX_SEQ_LEN, std::vector<float>(HEAD_NUM));
        bitnet_model_data.layers[l].float_params_2D["rotary_emb.sin"] = std::vector<std::vector<float>>(MAX_SEQ_LEN, std::vector<float>(HEAD_NUM));
        rotary_embedding(bitnet_model_data.layers[l].float_params_1D["rotary_emb.inv_freq"], bitnet_model_data.layers[l].float_params_2D["rotary_emb.cos"], bitnet_model_data.layers[l].float_params_2D["rotary_emb.sin"], MAX_SEQ_LEN, HEAD_NUM);
    }

    if (prefill_only){
       total_ids = casual_inference(bitnet_model_data, gen_tokens, encoded_id, temp, topk);
    }
    else{
        total_ids = casual_inference_cache(bitnet_model_data, gen_tokens, encoded_id, temp, topk);
    }

    save_ids_to_bin(total_ids, "generated_ids.bin");
    return 0;
}