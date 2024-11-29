#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "../src_c/attention.h"
#include "../data_quarter/cos_tab.h"
#include "../data_quarter/sin_tab.h"
#include "../data_quarter/q_weights.h"
#include "../data_quarter/k_weights.h"
#include "../data_quarter/v_weights.h"
#include "../data_quarter/o_weights.h"
#include "../data_quarter/ln_weight_in.h"
#include "../data_quarter/ln_weight.h"
#include "../data_quarter/k_cache.h"
#include "../data_quarter/v_cache.h"
#include "../data_quarter/hidden_states.h"

int main() {

    // Model parameter sizes
    size_t seq_len = 1;
    size_t num_heads = 8;
    size_t head_dim = 48;
    size_t hidden_size = num_heads*head_dim;
    size_t trig_dim_1 = 10;
    size_t p_id = 5;

    std::vector<std::vector<float>> l_hidden_states;
    for (int i = 0; i < seq_len; i++) {
        std::vector<float> temp;
        for (int j = 0; j < hidden_size; j++) {
            temp.push_back(hidden_states[i][j]);
        }
        l_hidden_states.push_back(temp);
    }

    QuantizedData l_q_weights, l_k_weights, l_v_weights, l_o_weights;
    l_q_weights.scale = q_scale;
    l_k_weights.scale = k_scale;
    l_v_weights.scale = v_scale;
    l_o_weights.scale = o_scale;
    for (int i = 0; i < hidden_size/4; i++) {
        std::vector<uint8_t> temp_q, temp_k, temp_v, temp_o;
        for (int j = 0; j < hidden_size; j++) {
            temp_q.push_back(q_weights[i][j]);
            temp_k.push_back(k_weights[i][j]);
            temp_v.push_back(v_weights[i][j]);
            temp_o.push_back(o_weights[i][j]);
        }
        l_q_weights.packed_data.push_back(temp_q);
        l_k_weights.packed_data.push_back(temp_k);
        l_v_weights.packed_data.push_back(temp_v);
        l_o_weights.packed_data.push_back(temp_o);
    }

    Tensor2D l_cos, l_sin;
    for (int i = 0; i < trig_dim_1; i++) {
        std::vector<float> temp_cos, temp_sin;
        for (int j = 0; j < head_dim; j++) {
            temp_cos.push_back(cos_tab[i][j]);
            temp_sin.push_back(sin_tab[i][j]);
        }
        l_cos.push_back(temp_cos);
        l_sin.push_back(temp_sin);
    }

    std::vector<float> l_ln_weight_in, l_ln_weight;
    for (int i = 0; i < hidden_size; i++) {
        l_ln_weight_in.push_back(ln_weight_in[i]);
        l_ln_weight.push_back(ln_weight[i]);
    }

    Tensor3D l_k_cache, l_v_cache;
    for (int i = 0; i < num_heads; i++) {
        std::vector<std::vector<float>> temp_k, temp_v;
        for (int j = 0; j < p_id; j++) {
            std::vector<float> temp2_k, temp2_v;
            for (int k = 0; k < head_dim; k++) {
                temp2_k.push_back(k_cache[i][j][k]);
                temp2_v.push_back(v_cache[i][j][k]);
            }
            temp_k.push_back(temp2_k);
            temp_v.push_back(temp2_v);
        }
        l_k_cache.push_back(temp_k);
        l_v_cache.push_back(temp_v);
    }

    // Call the attention function
    auto result = bitnet_attention(
        l_hidden_states,
        l_q_weights,
        l_k_weights,
        l_v_weights,
        l_o_weights, 
        l_cos,
        l_sin,
        l_ln_weight_in,
        l_ln_weight,
        hidden_size, num_heads, head_dim, seq_len,
        l_k_cache,
        l_v_cache,
        p_id,
        "decoding"
    );

    // Print the result
    std::cout << std::endl;
    for (int i = 0; i < seq_len; i++) {
        for (int j = 0; j < hidden_size; j++) {
            if (j != hidden_size - 1) std::cout << result[i][j] << ", ";
            else std::cout << result[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
