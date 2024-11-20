import allo
from allo.ir.types import float32, int32, int8, int64, uint8
import numpy as np
from test_data import *


def attention_test():
    SEQ_LEN = 5
    HS_COLS = 1536
    NUM_HEADS = 16
    HEAD_DIM = 96

    def softmax(
        tensor: float32[NUM_HEADS, SEQ_LEN, SEQ_LEN], 
        output: float32[NUM_HEADS, SEQ_LEN, SEQ_LEN] 
        ):
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(SEQ_LEN):
                for k in allo.grid(SEQ_LEN):
                    output[i, j, k] = tensor[i, j, k]
        
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(SEQ_LEN):
                max_val: float32 = 0
                for k in allo.grid(SEQ_LEN):
                    if output[i, j, k] > max_val:
                        max_val = output[i, j, k]
                sum_exp: float32 = 0.0
                for k in allo.grid(SEQ_LEN):
                    output[i, j, k] = 2.71828182846 ** (output[i, j, k] - max_val)
                    sum_exp += output[i, j, k]
                for k in allo.grid(SEQ_LEN):
                    output[i, j, k] /= sum_exp

    def causal_mask(
        seq_len: int32, 
        mask: float32[SEQ_LEN, SEQ_LEN]
        ):
        for i in allo.grid(SEQ_LEN):
            for j in allo.grid(i + 1):
                mask[i, j] = 0.0

    def GEMM_3D_float(
        tensor1: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM], 
        tensor2: float32[NUM_HEADS, HEAD_DIM, SEQ_LEN], 
        result: float32[NUM_HEADS, SEQ_LEN, SEQ_LEN]
        ):
        for h in allo.grid(NUM_HEADS):
            for i in allo.grid(SEQ_LEN):
                for j in allo.grid(SEQ_LEN):
                    for k in allo.grid(HEAD_DIM):
                        result[h, i, j] += tensor1[h, i, k] * tensor2[h, k, j]

    def GEMM_3D_float2(
        tensor1: float32[NUM_HEADS, SEQ_LEN, SEQ_LEN], 
        tensor2: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM], 
        result: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM]
        ):
        for h in allo.grid(NUM_HEADS):
            for i in allo.grid(SEQ_LEN):
                for j in allo.grid(HEAD_DIM):
                    for k in allo.grid(SEQ_LEN):
                        result[h, i, j] += tensor1[h, i, k] * tensor2[h, k, j]


    def transpose_last_two_dims(
        input: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM], 
        transposed: float32[NUM_HEADS, HEAD_DIM, SEQ_LEN]
        ):
        for h in allo.grid(NUM_HEADS):
            for s in allo.grid(SEQ_LEN):
                for d in allo.grid(HEAD_DIM):
                    transposed[h, d, s] = input[h, s, d]


    def rotate_half(
        x: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM], 
        rotated: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM]
        ):
        for h in allo.grid(NUM_HEADS):
            for s in allo.grid(SEQ_LEN):
                for d in allo.grid(HEAD_DIM // 2):
                    rotated[h, s, d] = -1 * x[h, s, d + HEAD_DIM // 2]
                    rotated[h, s, d + HEAD_DIM // 2] = x[h, s, d]

    def apply_rotary_pos_emb(
        q: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM], 
        k: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM], 
        cos: float32[SEQ_LEN, HEAD_DIM], 
        sin:float32[SEQ_LEN, HEAD_DIM], 
        q_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM], 
        k_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM]
        ):
        rotated_q: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        rotated_k: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0

        rotate_half(q, rotated_q)
        rotate_half(k, rotated_k)
        for h in allo.grid(NUM_HEADS):
            for s in allo.grid(SEQ_LEN):
                for d in allo.grid(HEAD_DIM):
                    q_embed[h, s, d] = q[h, s, d] * cos[s, d] + rotated_q[h, s, d] * sin[s, d]
                    k_embed[h, s, d] = k[h, s, d] * cos[s, d] + rotated_k[h, s, d] * sin[s, d]



    def reshape_2D_to_3D(
        input: float32[SEQ_LEN, HS_COLS], 
        num_heads: int32, seq_len: int32, 
        head_dim: int32, 
        reshaped: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM]
        ):
        for s in allo.grid(seq_len):
            for h in allo.grid(num_heads):
                for d in allo.grid(head_dim):
                    reshaped[h, s, d] = input[s, h * head_dim + d]


    def linear_forward_no_mul(
        input: int8[SEQ_LEN, HS_COLS], 
        scales: float32[SEQ_LEN], 
        weights_packed_data: uint8[HS_COLS//4, HS_COLS], 
        weights_scale: float32, 
        weight_cols: int32, 
        q_proj_re:float32[SEQ_LEN, HS_COLS]
        ):

        for i in allo.grid(SEQ_LEN):
            for j in allo.grid(weight_cols):
                for k in allo.grid(HS_COLS // 4):
                    packed_value: uint8 = weights_packed_data[k, j]

                    for l in allo.grid(4):
                        col_index: int32 = 4 * k + l
                        if col_index < HS_COLS:
                            shift: int32 = 2 * l
                            value: int8 = (packed_value >> shift) & 0b11
                            weight_value: int8 = 0
                            if value == 0b00:
                                weight_value = 0
                            elif value == 0b01:
                                weight_value = 1
                            elif value == 0b10:
                                weight_value = -1

                            if weight_value == 1:
                                q_proj_re[i, j] += input[i, col_index]
                            elif weight_value == -1:
                                q_proj_re[i, j] -= input[i, col_index]

                q_proj_re[i, j] = q_proj_re[i, j] / (scales[i] * weights_scale)

    def quantize_activation(
        input: float32[SEQ_LEN, HS_COLS], 
        num_bits: int32, 
        quantized_input: int8[SEQ_LEN, HS_COLS], 
        scales: float32[SEQ_LEN]
        ):
        Qn: int32 = -(1 << (num_bits - 1))
        Qp: int32 = (1 << (num_bits - 1)) - 1

        for i in allo.grid(SEQ_LEN):
            max_val: float32 = 0
            for j in allo.grid(HS_COLS):
                input_abs: float32 = input[i, j] if input[i, j] > 0 else -1 * input[i, j]
                if max_val < input_abs:
                    max_val = input_abs
            max_v: float32 = max(max_val, 1e-5)
            scale: float32 = Qp / max_v
            scales[i] = scale
        
            for j in allo.grid(HS_COLS):
                quantized_value: int32 = input[i, j] * scale + 0.5 if input[i, j] * scale > 0 else input[i, j] * scale - 0.5
                quantized_value_clamped: int8 =  Qn if quantized_value < Qn else Qp if quantized_value > Qp else quantized_value
                quantized_input[i, j] = quantized_value_clamped

    def rms_norm(
        hidden_states: float32[HS_COLS], 
        weight: float32[HS_COLS], 
        epsilon: float32, 
        output: float32[HS_COLS]
        ):
        variance: float32 = 0.0
        for i in allo.grid(HS_COLS):
            variance += hidden_states[i] * hidden_states[i]
        
        variance = 1.0 / (variance / HS_COLS + epsilon) ** 0.5
        for i in allo.grid(HS_COLS):
            output[i] = (hidden_states[i] * weight[i] * variance)
    
    def attention(
        hidden_states: float32[SEQ_LEN, HS_COLS], 
        q_weights_packed_data: uint8[HS_COLS//4, HS_COLS], 
        q_weights_scale: float32, 
        k_weights_packed_data: uint8[HS_COLS//4, HS_COLS], 
        k_weights_scale: float32, 
        v_weights_packed_data: uint8[HS_COLS//4, HS_COLS], 
        v_weights_scale: float32, 
        o_weights_packed_data: uint8[HS_COLS//4, HS_COLS], 
        o_weights_scale: float32, 
        cos: float32[SEQ_LEN, HEAD_DIM],
        sin: float32[SEQ_LEN, HEAD_DIM],
        inv_freq: float32[HEAD_DIM//2], 
        ln_weight_in: float32[HS_COLS], 
        ln_weight: float32[HS_COLS],
        hidden_size: int32,
        num_heads: int32,
        head_dim: int32,
        seq_len: int32,
        p_id: int32,
        ) -> float32[SEQ_LEN, HS_COLS]:

        RMS_NORM_EPS: float32 = 1e-5

        # Step 1: Apply input_layernorm
        rms_hidden_states: float32[SEQ_LEN, HS_COLS] = 0
        for i in allo.grid(SEQ_LEN):
            rms_norm(hidden_states[i], ln_weight_in, RMS_NORM_EPS, rms_hidden_states[i])
        
        # Step 2: Quantize the input activations for Q, K, V projections
        quantized_hidden_states: int8[SEQ_LEN, HS_COLS] = 0
        scales: float32[SEQ_LEN] = 0
        quantize_activation(rms_hidden_states, 8, quantized_hidden_states, scales)

        # Step 3: Linear projections for Q, K, V using quantized GEMM (forward_no_mul)
        q_proj_re: float32[SEQ_LEN, HS_COLS] = 0
        k_proj_re: float32[SEQ_LEN, HS_COLS] = 0
        v_proj_re: float32[SEQ_LEN, HS_COLS] = 0

        linear_forward_no_mul(quantized_hidden_states, scales, q_weights_packed_data, q_weights_scale, hidden_size, q_proj_re)
        linear_forward_no_mul(quantized_hidden_states, scales, k_weights_packed_data, k_weights_scale, hidden_size, k_proj_re)
        linear_forward_no_mul(quantized_hidden_states, scales, v_weights_packed_data, v_weights_scale, hidden_size, v_proj_re)

        # Reshape Q, K, V for attention calculation
        q_proj: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        k_proj: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        v_proj: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0

        reshape_2D_to_3D(q_proj_re, num_heads, seq_len, head_dim, q_proj)
        reshape_2D_to_3D(k_proj_re, num_heads, seq_len, head_dim, k_proj)
        reshape_2D_to_3D(v_proj_re, num_heads, seq_len, head_dim, v_proj)

        # Step 4: Apply rotary embedding
        q_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        k_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        apply_rotary_pos_emb(q_proj, k_proj, cos, sin, q_embed, k_embed)

        # TODO: Add cache

        # Step 5: Transpose K for correct multiplication
        k_proj_transposed: float32[NUM_HEADS, HEAD_DIM, SEQ_LEN] = 0
        transpose_last_two_dims(k_embed, k_proj_transposed)

        # Step 6: Calculate attention scores (QK^T) / sqrt(d)
        attn_weights: float32[NUM_HEADS, SEQ_LEN, SEQ_LEN] = 0
        GEMM_3D_float(q_embed, k_proj_transposed, attn_weights)

        scale_factor: float32 = (head_dim) ** 0.5
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(SEQ_LEN):
                for k in allo.grid(SEQ_LEN):
                    attn_weights[i, j, k] /= scale_factor
        
        # Create a causal mask and apply it to the attention weights
        causal_mask: float32[SEQ_LEN, SEQ_LEN] = -3.4028235e+38
        causal_mask(seq_len, causal_mask)
        for h in allo.grid(NUM_HEADS):
            for i in allo.grid(SEQ_LEN):
                for j in allo.grid(SEQ_LEN):
                    attn_weights[h, i, j] += causal_mask[i, j]

        # Step 7: Apply softmax
        softmax_attn_weights: float32[NUM_HEADS, SEQ_LEN, SEQ_LEN] = 0
        softmax(attn_weights, softmax_attn_weights)

        # Step 8: Multiply with V
        attn_output: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM ] = 0
        GEMM_3D_float2(softmax_attn_weights, v_proj, attn_output)

        # Reshape the attention output from 3D to 2D
        attn_output_2D: float32[SEQ_LEN, HS_COLS] = 0
        for s in allo.grid(SEQ_LEN):
            for h in allo.grid(NUM_HEADS):
                for d in allo.grid(HEAD_DIM):
                    attn_output_2D[s, h * head_dim + d] = attn_output[h, s, d]

        # Step 9: Apply RMS normalization before projection
        rms_attn_output: float32[SEQ_LEN, HS_COLS] = 0
        for i in allo.grid(SEQ_LEN):
            rms_norm(attn_output_2D[i], ln_weight, RMS_NORM_EPS, rms_attn_output[i])
        
        # Step 10: Final output projection using quantized GEMM (forward_no_mul)
        # Quantize the attention output before final projection
        quantized_final_output: int8[SEQ_LEN, HS_COLS] = 0
        final_scales: float32[SEQ_LEN] = 0
        quantize_activation(rms_attn_output, 8, quantized_final_output, final_scales)

        final_output: float32[SEQ_LEN, HS_COLS] = 0
        linear_forward_no_mul(quantized_final_output, final_scales, o_weights_packed_data, o_weights_scale, hidden_size, final_output)
        return final_output

    s = allo.customize(attention)
    f = s.build()
    outs = f( 
        np.array(hidden_states, dtype=np.float32),
        np.array(q_weights_packed_data, dtype=np.uint8),
        q_weights_scale,
        np.array(k_weights_packed_data, dtype=np.uint8),
        k_weights_scale,
        np.array(v_weights_packed_data, dtype=np.uint8),
        v_weights_scale,
        np.array(o_weights_packed_data, dtype=np.uint8),
        o_weights_scale,
        np.array(cos, dtype=np.float32),
        np.array(sin, dtype=np.float32),
        np.array(inv_freq, dtype=np.float32),
        np.array(ln_weight_in, dtype=np.float32),
        np.array(ln_weight, dtype=np.float32),
        hidden_size,
        num_heads,
        head_dim,
        seq_len,
        p_id
        )

    np.testing.assert_allclose(outs, np.array(final_output), atol=1e-3)

attention_test()




