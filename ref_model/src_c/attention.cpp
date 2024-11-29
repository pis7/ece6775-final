#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include "bitnet.h"
#include "linear_kernel_no_mul.h"
#include "float_kernel.h"
#include "attention.h"
#include "rmsnorm.h"
#include "../save_vector_to_array_h.h"


// Function to reshape a 2D matrix into a 3D tensor
// Converts [seq_len, hidden_size] -> [num_heads, seq_len, head_dim]
Tensor3D reshape_2D_to_3D(const std::vector<std::vector<float>> &input, size_t num_heads, size_t seq_len, size_t head_dim) {
    Tensor3D output(num_heads, std::vector<std::vector<float>>(seq_len, std::vector<float>(head_dim)));

    // Ensure the input matrix has the expected dimensions
    if (input.size() != seq_len || input[0].size() != num_heads * head_dim) {
        throw std::runtime_error("Input dimensions do not match the expected [seq_len, num_heads * head_dim]");
    }

    // Correctly iterate through the input matrix to fill the 3D tensor
    for (size_t s = 0; s < seq_len; ++s) {
        for (size_t h = 0; h < num_heads; ++h) {
            for (size_t d = 0; d < head_dim; ++d) {
                output[h][s][d] = input[s][h * head_dim + d];
            }
        }
    }

    return output;
}

void cache_update(std::vector<std::vector<std::vector<float>>> &cache, const std::vector<std::vector<std::vector<float>>> &new_data) {
    if (cache.empty()) {
        std::cerr << "Cache is empty, cannot update" << std::endl;
    } 
    if (new_data[0].size() != 1) {
        std::cerr << "New data must be a single row" << std::endl;
    }
    // Ensure `a` and `b` have compatible shapes
    size_t h = cache.size();
    if (h != new_data.size() || new_data[0].size() != 1 || cache[0][0].size() != new_data[0][0].size()) {
        throw std::invalid_argument("Incompatible dimensions for concatenation.");
    }

    // Append each `b[i][0]` to `a[i]`
    for (size_t i = 0; i < h; ++i) {
        cache[i].push_back(new_data[i][0]);  // Append `1 x d` vector `b[i][0]` to `a[i]`
    }
    return;
}

// Transpose last two dimensions for the K matrix
// Converts [num_heads, seq_len, head_dim] -> [num_heads, head_dim, seq_len]
Tensor3D transpose_last_two_dims(const Tensor3D &input) {
    size_t num_heads = input.size();
    size_t seq_len = input[0].size();
    size_t head_dim = input[0][0].size();

    Tensor3D output(num_heads, std::vector<std::vector<float>>(head_dim, std::vector<float>(seq_len)));

    for (size_t h = 0; h < num_heads; ++h) {
        for (size_t s = 0; s < seq_len; ++s) {
            for (size_t d = 0; d < head_dim; ++d) {
                output[h][d][s] = input[h][s][d];
            }
        }
    }

    return output;
}

// Softmax function (assumes input is of shape [num_heads, seq_len, seq_len])
void softmax(Tensor3D &tensor) {
    for (auto &head : tensor) {
        for (auto &row : head) {
            float max_val = *std::max_element(row.begin(), row.end());
            float sum_exp = 0.0f;

            for (auto &elem : row) {
                elem = std::exp(elem - max_val);  // Prevent overflow
                sum_exp += elem;
            }
            for (auto &elem : row) {
                elem /= sum_exp;
            }
        }
    }
}

// Function to rotate half of the tensor values (used in rotary embeddings)
Tensor3D rotate_half(const Tensor3D &x) {
    size_t num_heads = x.size();
    size_t seq_len = x[0].size();
    size_t head_dim = x[0][0].size();

    Tensor3D rotated_x(num_heads, std::vector<std::vector<float>>(seq_len, std::vector<float>(head_dim)));

    for (size_t h = 0; h < num_heads; ++h) {
        for (size_t s = 0; s < seq_len; ++s) {
            for (size_t d = 0; d < head_dim / 2; ++d) {
                rotated_x[h][s][d] = - x[h][s][d + head_dim / 2];        // Assign x2 to x1 position
                rotated_x[h][s][d + head_dim / 2] = x[h][s][d];       // Assign -x1 to x2 position
            }
        }
    }

    return rotated_x;
}

// Apply rotary position embedding to Q and K tensors
std::pair<Tensor3D, Tensor3D> apply_rotary_pos_emb(const Tensor3D &q, const Tensor3D &k, const Tensor2D &cos, const Tensor2D &sin, size_t p_id, std::string mode = "prefill") {
    Tensor3D q_embed = q;
    Tensor3D k_embed = k;

    size_t num_heads = q.size();
    size_t seq_len = q[0].size();
    size_t head_dim = q[0][0].size();

    Tensor3D rotated_q = rotate_half(q);
    Tensor3D rotated_k = rotate_half(k);

    for (size_t h = 0; h < num_heads; ++h) {
        for (size_t s = 0; s < seq_len; ++s) {
            for (size_t d = 0; d < head_dim; ++d) {
                if (mode == "prefill"){
                    q_embed[h][s][d] = q[h][s][d] * cos[s][d] + rotated_q[h][s][d] * sin[s][d];
                    k_embed[h][s][d] = k[h][s][d] * cos[s][d] + rotated_k[h][s][d] * sin[s][d];
                }
                else if (mode == "decoding"){
                    q_embed[h][s][d] = q[h][s][d] * cos[p_id][d] + rotated_q[h][s][d] * sin[p_id][d];
                    k_embed[h][s][d] = k[h][s][d] * cos[p_id][d] + rotated_k[h][s][d] * sin[p_id][d];
                }
                else{
                    std::cerr << "Invalid mode" << std::endl;
                }
            }
        }
    }

    return {q_embed, k_embed};
}


// Helper function to create a causal mask (lower triangular matrix with negative infinity above the diagonal)
std::vector<std::vector<float>> create_causal_mask(size_t seq_len) {
    std::vector<std::vector<float>> mask(seq_len, std::vector<float>(seq_len,-std::numeric_limits<float>::infinity()));
    // std::vector<std::vector<float>> mask(seq_len, std::vector<float>(seq_len, -65504));
    for (size_t i = 0; i < seq_len; ++i) {
        for (size_t j = 0; j <= i; ++j) {
            mask[i][j] = 0.0f;  // Keep positions on and below the diagonal as zero
        }
    }
    return mask;
}

// Function for Bitnet Attention equivalent in C++
std::vector<std::vector<float>> bitnet_attention(
    std::vector<std::vector<float>> &hidden_states,
    const QuantizedData &q_weights,
    const QuantizedData &k_weights,
    const QuantizedData &v_weights,
    const QuantizedData &o_weights,
    const Tensor2D &cos,
    const Tensor2D &sin,
    const std::vector<float> &ln_weight_in, // New: weights for RMSNorm
    const std::vector<float> &ln_weight, // New: weights for RMSNorm
    size_t hidden_size, size_t num_heads, size_t head_dim, size_t seq_len,
    std::vector<std::vector<std::vector<float>>> &k_cache,
    std::vector<std::vector<std::vector<float>>> &v_cache,
    size_t p_id,
    std::string mode
    ) {
    
    if (mode == "prefill"){
        if (seq_len == 1) {
        //    if (p_id != 0) {
        //        std::cerr << "Position ID must be 0 for prefill mode's first token" << std::endl;
        //    }
        }
    }
    else if (mode == "decoding"){
        if (hidden_states.size() != 1) {
            std::cerr << "Hidden states must be a single row for decoding mode" << std::endl;
        }
        save3DVectorToHeader(k_cache, "layer0_paras/k_cache.h", "k_cache");
        save3DVectorToHeader(v_cache, "layer0_paras/v_cache.h", "v_cache");
        save1DVectorToHeader(hidden_states[0], "layer0_paras/hidden_states.h", "hidden_states");
        save1DVectorToHeader(ln_weight_in, "layer0_paras/ln_weight_in.h", "ln_weight_in");
        save1DVectorToHeader(ln_weight, "layer0_paras/ln_weight.h", "ln_weight");
        save2DVectorToHeader<float>(cos, 0, false, "layer0_paras/cos.h", "cos");
        save2DVectorToHeader<float>(sin, 0, false, "layer0_paras/sin.h", "sin");
        save2DVectorToHeader<uint8_t>(q_weights.packed_data, q_weights.scale, true, "layer0_paras/q_weights.h", "q_weights");
        save2DVectorToHeader<uint8_t>(k_weights.packed_data, k_weights.scale, true, "layer0_paras/k_weights.h", "k_weights");
        save2DVectorToHeader<uint8_t>(v_weights.packed_data, v_weights.scale, true, "layer0_paras/v_weights.h", "v_weights");
        save2DVectorToHeader<uint8_t>(o_weights.packed_data, o_weights.scale, true, "layer0_paras/o_weights.h", "o_weights");
    }
    else{
        std::cerr << "Invalid mode" << std::endl;
    }

    // Step 1: Apply input_layernorm
    for (auto &row : hidden_states) {
        row = rms_norm(row, ln_weight_in, RMS_NORM_EPS);
    }

    // Step 2: Quantize the input activations for Q, K, V projections
    auto quantized_result = quantize_activation(hidden_states, 8);
    std::vector<std::vector<int8_t>> quantized_hidden_states = quantized_result.first;
    std::vector<float> scales = quantized_result.second;

    // Step 3: Linear projections for Q, K, V using quantized GEMM (forward_no_mul)
    std::vector<std::vector<float>> q_proj_re = linear_forward_no_mul(quantized_hidden_states, scales, q_weights, hidden_size);
    std::vector<std::vector<float>> k_proj_re = linear_forward_no_mul(quantized_hidden_states, scales, k_weights, hidden_size);
    std::vector<std::vector<float>> v_proj_re = linear_forward_no_mul(quantized_hidden_states, scales, v_weights, hidden_size);

    // Reshape Q, K, V for attention calculation
    Tensor3D q_proj = reshape_2D_to_3D(q_proj_re, num_heads, seq_len, head_dim);
    Tensor3D k_proj = reshape_2D_to_3D(k_proj_re, num_heads, seq_len, head_dim);
    Tensor3D v_proj = reshape_2D_to_3D(v_proj_re, num_heads, seq_len, head_dim);
            
    // Step 4: Apply rotary embedding
    auto q_k_embed_pair = apply_rotary_pos_emb(q_proj, k_proj, cos, sin, p_id, mode);
    Tensor3D q_embed = q_k_embed_pair.first;
    Tensor3D k_embed = q_k_embed_pair.second;

    if (mode == "prefill"){
        k_cache = k_embed;
        v_cache = v_proj;
    }
    else if (mode == "decoding"){
        cache_update(k_cache, k_embed);
        cache_update(v_cache, v_proj);
        k_embed = k_cache;
        v_proj = v_cache;
    }
    else{
        std::cerr << "Invalid mode" << std::endl;
    }

    // Step 5: Transpose K for correct multiplication
    Tensor3D k_proj_transposed = transpose_last_two_dims(k_embed);

    // Step 6: Calculate attention scores (QK^T) / sqrt(d)
    auto attn_weights = GEMM_3D_float(q_embed, k_proj_transposed);

    double scale_factor = std::sqrt(static_cast<double>(head_dim));
    for (auto &head : attn_weights) {
        for (auto &row : head) {
            for (auto &elem : row) {
                elem /= scale_factor;
            }
        }
    }

    // Create a causal mask and apply it to the attention weights
    auto causal_mask = create_causal_mask(seq_len);
    for (size_t h = 0; h < num_heads; ++h) {
        for (size_t i = 0; i < seq_len; ++i) {
            for (size_t j = 0; j < seq_len; ++j) {
                attn_weights[h][i][j] += causal_mask[i][j];
            }
        }
    }

    // Step 7: Apply softmax
    softmax(attn_weights);

    // Step 8: Multiply with V
    auto attn_output = GEMM_3D_float(attn_weights, v_proj);

    //Reshape the attention output from 3D to 2D
    std::vector<std::vector<float>> attn_output_2D(seq_len, std::vector<float>(hidden_size, 0.0f));
    for (size_t s = 0; s < seq_len; ++s) {
        for (size_t h = 0; h < num_heads; ++h) {
            for (size_t d = 0; d < head_dim; ++d) {
                attn_output_2D[s][h * head_dim + d] = attn_output[h][s][d];
            }
        }
    }

    // Step 9: Apply RMS normalization before projection
    for (auto &row : attn_output_2D) {
        row = rms_norm(row, ln_weight, RMS_NORM_EPS);
    }

    // Step 10: Final output projection using quantized GEMM (forward_no_mul)
    // Quantize the attention output before final projection
    auto quantized_final_result = quantize_activation(attn_output_2D, 8);
    std::vector<std::vector<int8_t>> quantized_final_output = quantized_final_result.first;
    std::vector<float> final_scales = quantized_final_result.second;

    std::vector<std::vector<float>> final_output = linear_forward_no_mul(quantized_final_output, final_scales, o_weights, hidden_size);

    return final_output;
}
