import allo
from allo.ir.types import float32, int32, int8, uint8, index, Fixed
import numpy as np
from kaixin_data import *

def attention_unopt_test(target, imp):
    CACHE_SIZE_INIT = 5
    SEQ_LEN = 1
    HS_COLS = 1536
    NUM_HEADS = 16
    HEAD_DIM = 96
    SIN_LEN = 10

    def softmax(
        tensor: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1],
        output: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1],
    ):
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(SEQ_LEN):
                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    output[i, j, k] = tensor[i, j, k]

        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(SEQ_LEN):
                max_val: float32 = 0
                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    if output[i, j, k] > max_val:
                        max_val = output[i, j, k]

                sum_exp: float32 = 0.0
                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    output[i, j, k] = 2.71828182846 ** (output[i, j, k] - max_val)
                    sum_exp += output[i, j, k]

                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    output[i, j, k] /= sum_exp

    def causal_mask(mask: float32[SEQ_LEN, SEQ_LEN]):
        for i in allo.grid(SEQ_LEN):
            for j in allo.grid(i + 1):
                mask[i, j] = 0.0

    def GEMM_3D_float(
        tensor1: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        tensor2: float32[NUM_HEADS, HEAD_DIM, CACHE_SIZE_INIT + 1],
        result: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1],
    ):
        for h in allo.grid(NUM_HEADS):
            for i in allo.grid(SEQ_LEN):
                for j in allo.grid(CACHE_SIZE_INIT + 1):
                    for k in allo.grid(HEAD_DIM):
                        result[h, i, j] += tensor1[h, i, k] * tensor2[h, k, j]

    def GEMM_3D_float2(
        tensor1: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1],
        tensor2: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM],
        result: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
    ):
        for h in allo.grid(NUM_HEADS):
            for i in allo.grid(SEQ_LEN):
                for j in allo.grid(HEAD_DIM):
                    for k in allo.grid(CACHE_SIZE_INIT + 1):
                        result[h, i, j] += tensor1[h, i, k] * tensor2[h, k, j]

    def transpose_last_two_dims(
        input: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM],
        transposed: float32[NUM_HEADS, HEAD_DIM, CACHE_SIZE_INIT + 1],
    ):
        for h in allo.grid(NUM_HEADS):
            for s in allo.grid(CACHE_SIZE_INIT + 1):
                for d in allo.grid(HEAD_DIM):
                    transposed[h, d, s] = input[h, s, d]

    def cache_update(
        cache: float32[NUM_HEADS, CACHE_SIZE_INIT, HEAD_DIM],
        new_data: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        output_cache: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM],
    ):
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(CACHE_SIZE_INIT + 1):
                if j != CACHE_SIZE_INIT:
                    for k in allo.grid(HEAD_DIM):
                        output_cache[i, j, k] = cache[i, j, k]
                else:
                    for k in allo.grid(HEAD_DIM):
                        output_cache[i, j, k] = new_data[i, 0, k]

    def rotate_half(
        x: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        rotated: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
    ):
        for h in allo.grid(NUM_HEADS):
            for s in allo.grid(SEQ_LEN):
                for d in allo.grid(HEAD_DIM // 2):
                    rotated[h, s, d] = -1 * x[h, s, d + HEAD_DIM // 2]
                    rotated[h, s, d + HEAD_DIM // 2] = x[h, s, d]

    def apply_rotary_pos_emb(
        q: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        k: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        cos: float32[SIN_LEN, HEAD_DIM],
        sin: float32[SIN_LEN, HEAD_DIM],
        q_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        k_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        p_id: int32,
    ):
        rotated_q: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        rotated_k: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0

        rotate_half(q, rotated_q)
        rotate_half(k, rotated_k)

        for h in allo.grid(NUM_HEADS):
            for s in allo.grid(SEQ_LEN):
                for d in allo.grid(HEAD_DIM):
                    q_embed[h, s, d] = (
                        q[h, s, d] * cos[p_id, d] + rotated_q[h, s, d] * sin[p_id, d]
                    )
                    k_embed[h, s, d] = (
                        k[h, s, d] * cos[p_id, d] + rotated_k[h, s, d] * sin[p_id, d]
                    )

    def reshape_2D_to_3D(
        input: float32[SEQ_LEN, HS_COLS],
        reshaped: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
    ):
        for s in allo.grid(SEQ_LEN):
            for h in allo.grid(NUM_HEADS):
                for d in allo.grid(HEAD_DIM):
                    reshaped[h, s, d] = input[s, h * HEAD_DIM + d]

    def linear_forward_no_mul(
        input: int8[SEQ_LEN, HS_COLS],
        scales: float32[SEQ_LEN],
        weights_packed_data: uint8[HS_COLS // 4, HS_COLS],
        weights_scale: float32,
        q_proj_re: float32[SEQ_LEN, HS_COLS],
    ):
        for i in allo.grid(SEQ_LEN):
            for j in allo.grid(HS_COLS):
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
        scales: float32[SEQ_LEN],
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
                quantized_value: int32 = (
                    input[i, j] * scale + 0.5
                    if input[i, j] * scale > 0
                    else input[i, j] * scale - 0.5
                )
                quantized_value_clamped: int8 = (
                    Qn if quantized_value < Qn else Qp if quantized_value > Qp else quantized_value
                )
                quantized_input[i, j] = quantized_value_clamped

    def rms_norm(
        hidden_states: float32[SEQ_LEN, HS_COLS],
        weight: float32[HS_COLS],
        epsilon: float32,
        output: float32[SEQ_LEN, HS_COLS],
    ):
        for index in allo.grid(SEQ_LEN):
            variance: float32 = 0.0
            for i in allo.grid(HS_COLS):
                variance += hidden_states[index, i] * hidden_states[index, i]

            variance = 1.0 / (variance / HS_COLS + epsilon) ** 0.5
            for i in allo.grid(HS_COLS):
                output[index, i] = hidden_states[index, i] * weight[i] * variance

    def attention(
        hidden_states: float32[SEQ_LEN, HS_COLS],
        q_weights_packed_data: uint8[HS_COLS // 4, HS_COLS],
        q_weights_scale: float32,
        k_weights_packed_data: uint8[HS_COLS // 4, HS_COLS],
        k_weights_scale: float32,
        v_weights_packed_data: uint8[HS_COLS // 4, HS_COLS],
        v_weights_scale: float32,
        o_weights_packed_data: uint8[HS_COLS // 4, HS_COLS],
        o_weights_scale: float32,
        cos: float32[SIN_LEN, HEAD_DIM],
        sin: float32[SIN_LEN, HEAD_DIM],
        ln_weight_in: float32[HS_COLS],
        ln_weight: float32[HS_COLS],
        k_cache: float32[NUM_HEADS, CACHE_SIZE_INIT, HEAD_DIM],
        v_cache: float32[NUM_HEADS, CACHE_SIZE_INIT, HEAD_DIM],
        p_id: int32,
    ) -> float32[SEQ_LEN, HS_COLS]:
        RMS_NORM_EPS: float32 = 1e-5

        # Step 1: Apply input_layernorm
        rms_hidden_states: float32[SEQ_LEN, HS_COLS] = 0
        rms_norm(hidden_states, ln_weight_in, RMS_NORM_EPS, rms_hidden_states)

        # Step 2: Quantize the input activations for Q, K, V projections
        quantized_hidden_states: int8[SEQ_LEN, HS_COLS] = 0
        scales: float32[SEQ_LEN] = 0
        quantize_activation(rms_hidden_states, 8, quantized_hidden_states, scales)

        # Step 3: Linear projections for Q, K, V using quantized GEMM (forward_no_mul)
        q_proj_re: float32[SEQ_LEN, HS_COLS] = 0
        k_proj_re: float32[SEQ_LEN, HS_COLS] = 0
        v_proj_re: float32[SEQ_LEN, HS_COLS] = 0

        linear_forward_no_mul(quantized_hidden_states, scales, q_weights_packed_data, q_weights_scale, q_proj_re)
        linear_forward_no_mul(quantized_hidden_states, scales, k_weights_packed_data, k_weights_scale, k_proj_re)
        linear_forward_no_mul(quantized_hidden_states, scales, v_weights_packed_data, v_weights_scale, v_proj_re)

        # Reshape Q, K, V for attention calculation
        q_proj: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        k_proj: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        v_proj: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0

        reshape_2D_to_3D(q_proj_re, q_proj)
        reshape_2D_to_3D(k_proj_re, k_proj)
        reshape_2D_to_3D(v_proj_re, v_proj)

        # Step 4: Apply rotary embedding
        q_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        k_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        apply_rotary_pos_emb(q_proj, k_proj, cos, sin, q_embed, k_embed, p_id)

        updated_k_cache: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM] = 0
        updated_v_cache: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM] = 0
        cache_update(k_cache, k_embed, updated_k_cache)
        cache_update(v_cache, v_proj, updated_v_cache)

        # Step 5: Transpose K for correct multiplication
        k_proj_transposed: float32[NUM_HEADS, HEAD_DIM, CACHE_SIZE_INIT + 1] = 0
        transpose_last_two_dims(updated_k_cache, k_proj_transposed)

        # Step 6: Calculate attention scores (QK^T) / sqrt(d)
        attn_weights: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1] = 0
        GEMM_3D_float(q_embed, k_proj_transposed, attn_weights)

        scale_factor: float32 = (HEAD_DIM) ** 0.5
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(SEQ_LEN):
                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    attn_weights[i, j, k] /= scale_factor

        # Create a causal mask and apply it to the attention weights
        causal_mask_matrix: float32[SEQ_LEN, SEQ_LEN] = -3.4028235e+38
        causal_mask(causal_mask_matrix)
        for h in allo.grid(NUM_HEADS):
            for i in allo.grid(SEQ_LEN):
                for j in allo.grid(SEQ_LEN):
                    attn_weights[h, i, j] += causal_mask_matrix[i, j]

        # Step 7: Apply softmax
        softmax_attn_weights: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1] = 0
        softmax(attn_weights, softmax_attn_weights)

        # Step 8: Multiply with V
        attn_output: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        GEMM_3D_float2(softmax_attn_weights, updated_v_cache, attn_output)

        # Reshape the attention output from 3D to 2D
        attn_output_2D: float32[SEQ_LEN, HS_COLS] = 0
        for s in allo.grid(SEQ_LEN):
            for h in allo.grid(NUM_HEADS):
                for d in allo.grid(HEAD_DIM):
                    attn_output_2D[s, h * HEAD_DIM + d] = attn_output[h, s, d]

        # Step 9: Apply RMS normalization before projection
        rms_attn_output: float32[SEQ_LEN, HS_COLS] = 0
        rms_norm(attn_output_2D, ln_weight, RMS_NORM_EPS, rms_attn_output)

        # Step 10: Final output projection using quantized GEMM (forward_no_mul)
        quantized_final_output: int8[SEQ_LEN, HS_COLS] = 0
        final_scales: float32[SEQ_LEN] = 0
        quantize_activation(rms_attn_output, 8, quantized_final_output, final_scales)

        final_output: float32[SEQ_LEN, HS_COLS] = 0
        linear_forward_no_mul(quantized_final_output, final_scales, o_weights_packed_data, o_weights_scale, final_output)
        return final_output

    s = allo.customize(attention)

    if target == "sw":
        f = s.build()
    else:
        f = s.build(target="vivado_hls", mode="csyn", project=f"attention_{imp}.prj")

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
        np.array(ln_weight_in, dtype=np.float32),
        np.array(ln_weight, dtype=np.float32),
        np.array(k_cache, dtype=np.float32),
        np.array(v_cache, dtype=np.float32),
        p_id,
    )

    np.testing.assert_allclose(outs, np.array(final_output), atol=1e-3)

def attention_opt_test(target, imp):
    CACHE_SIZE_INIT = 5
    SEQ_LEN = 1
    HS_COLS = 1536
    HS_COLS_4 = 384
    NUM_HEADS = 16
    HEAD_DIM = 96
    SIN_LEN = 10

    # Determine loop tiling factor based on implementation
    loop_tiling_factor = 1
    if imp == "opt-area": loop_tiling_factor = 2
    elif imp == "opt-agressive": loop_tiling_factor = 24

    def softmax(
        tensor: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1],
        output: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1],
    ):
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(SEQ_LEN):
                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    output[i, j, k] = tensor[i, j, k]
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(SEQ_LEN):
                max_val: float32 = 0
                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    if output[i, j, k] > max_val:
                        max_val = output[i, j, k]
                sum_exp: float32 = 0.0
                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    output[i, j, k] = 2.71828182846 ** (output[i, j, k] - max_val)
                    sum_exp += output[i, j, k]
                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    output[i, j, k] /= sum_exp

    def causal_mask(mask: float32[SEQ_LEN, SEQ_LEN]):
        for i in allo.grid(SEQ_LEN):
            for j in allo.grid(i + 1):
                mask[i, j] = 0.0

    def GEMM_3D_float(
        tensor1: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        tensor2: float32[NUM_HEADS, HEAD_DIM, CACHE_SIZE_INIT + 1],
        result: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1],
    ):
        for h in allo.grid(NUM_HEADS):
            for i in allo.grid(SEQ_LEN):
                for j in allo.grid(CACHE_SIZE_INIT + 1):
                    for k in allo.grid(HEAD_DIM):
                        result[h, i, j] += tensor1[h, i, k] * tensor2[h, k, j]

    def GEMM_3D_float2(
        tensor1: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1],
        tensor2: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM],
        result: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
    ):
        for h in allo.grid(NUM_HEADS):
            for i in allo.grid(SEQ_LEN):
                for j in allo.grid(HEAD_DIM):
                    for k in allo.grid(CACHE_SIZE_INIT + 1):
                        result[h, i, j] += tensor1[h, i, k] * tensor2[h, k, j]

    def transpose_last_two_dims(
        input: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM],
        transposed: float32[NUM_HEADS, HEAD_DIM, CACHE_SIZE_INIT + 1],
    ):
        for h in allo.grid(NUM_HEADS):
            for s in allo.grid(CACHE_SIZE_INIT + 1):
                for d in allo.grid(HEAD_DIM):
                    transposed[h, d, s] = input[h, s, d]

    def cache_update(
        cache: float32[NUM_HEADS, CACHE_SIZE_INIT, HEAD_DIM],
        new_data: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        output_cache: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM],
    ):
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(CACHE_SIZE_INIT + 1):
                if j != CACHE_SIZE_INIT:
                    for k in allo.grid(HEAD_DIM):
                        output_cache[i, j, k] = cache[i, j, k]
                else:
                    for k in allo.grid(HEAD_DIM):
                        output_cache[i, j, k] = new_data[i, 0, k]

    def rotate_half(
        x: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        rotated: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
    ):
        for h in allo.grid(NUM_HEADS):
            for s in allo.grid(SEQ_LEN):
                for d in allo.grid(HEAD_DIM // 2):
                    rotated[h, s, d] = -1 * x[h, s, d + HEAD_DIM // 2]
                    rotated[h, s, d + HEAD_DIM // 2] = x[h, s, d]

    def apply_rotary_pos_emb(
        q: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        k: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        cos: float32[SIN_LEN, HEAD_DIM],
        sin: float32[SIN_LEN, HEAD_DIM],
        q_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        k_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
        p_id: int32,
    ):
        rotated_q: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        rotated_k: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        rotate_half(q, rotated_q)
        rotate_half(k, rotated_k)
        for h in allo.grid(NUM_HEADS):
            for s in allo.grid(SEQ_LEN):
                for d in allo.grid(HEAD_DIM):
                    q_embed[h, s, d] = (
                        q[h, s, d] * cos[p_id, d] + rotated_q[h, s, d] * sin[p_id, d]
                    )
                    k_embed[h, s, d] = (
                        k[h, s, d] * cos[p_id, d] + rotated_k[h, s, d] * sin[p_id, d]
                    )

    def reshape_2D_to_3D(
        input: float32[SEQ_LEN, HS_COLS],
        reshaped: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM],
    ):
        for s in allo.grid(SEQ_LEN):
            for h in allo.grid(NUM_HEADS):
                for d in allo.grid(HEAD_DIM):
                    reshaped[h, s, d] = input[s, h * HEAD_DIM + d]

    def linear_forward_no_mul(
        input: int8[SEQ_LEN, HS_COLS_4, 4],
        scales: Fixed(32, 20)[SEQ_LEN],
        weights_packed_data: uint8[HS_COLS_4, HS_COLS],
        weights_scale: Fixed(32, 20),
        q_proj_re: float32[SEQ_LEN, HS_COLS],
    ):
        for i in allo.grid(SEQ_LEN):
            for j in allo.grid(HS_COLS):
                local_acum: Fixed(35, 15) = 0
                for k0 in allo.grid(HS_COLS_4 / loop_tiling_factor):
                    for k1 in allo.grid(loop_tiling_factor):
                        k: index = k0 * loop_tiling_factor + k1
                        packed_value: uint8 = weights_packed_data[k, j]
                        temp: Fixed(35, 15) = 0
                        for l in allo.grid(4):
                            if l + 4 * k < HS_COLS:
                                value: int8 = (packed_value >> (2 * l)) & 0b11
                                weight_value: int8 = 0
                                if value == 0b01:
                                    weight_value = 1
                                elif value == 0b10:
                                    weight_value = -1
                                temp += input[i, k, l] * weight_value
                        local_acum += temp
                q_proj_re[i, j] = local_acum / (scales[i] * weights_scale)

    def quantize_activation(
        input: float32[SEQ_LEN, HS_COLS],
        num_bits: int32,
        quantized_input: int8[SEQ_LEN, HS_COLS_4, 4],
        scales: Fixed(32, 20)[SEQ_LEN],
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

            for j in allo.grid(HS_COLS_4):
                for l in allo.grid(4):
                    quantized_value: int32 = (
                        input[i, j * 4 + l] * scale + 0.5
                        if input[i, j * 4 + l] * scale > 0
                        else input[i, j * 4 + l] * scale - 0.5
                    )
                    quantized_value_clamped: int8 = (
                        Qn if quantized_value < Qn else Qp if quantized_value > Qp else quantized_value
                    )
                    quantized_input[i, j, l] = quantized_value_clamped

    def rms_norm(
        hidden_states: float32[SEQ_LEN, HS_COLS],
        weight: float32[HS_COLS],
        epsilon: float32,
        output: float32[SEQ_LEN, HS_COLS],
    ):
        for index in allo.grid(SEQ_LEN):
            variance: float32 = 0.0
            for i in allo.grid(HS_COLS):
                variance += hidden_states[index, i] * hidden_states[index, i]
            variance = 1.0 / (variance / HS_COLS + epsilon) ** 0.5
            for i in allo.grid(HS_COLS):
                output[index, i] = hidden_states[index, i] * weight[i] * variance

    def attention(
        hidden_states: float32[SEQ_LEN, HS_COLS],
        q_weights_packed_data: uint8[HS_COLS_4, HS_COLS],
        q_weights_scale: float32,
        k_weights_packed_data: uint8[HS_COLS_4, HS_COLS],
        k_weights_scale: float32,
        v_weights_packed_data: uint8[HS_COLS_4, HS_COLS],
        v_weights_scale: float32,
        o_weights_packed_data: uint8[HS_COLS_4, HS_COLS],
        o_weights_scale: float32,
        cos: float32[SIN_LEN, HEAD_DIM],
        sin: float32[SIN_LEN, HEAD_DIM],
        ln_weight_in: float32[HS_COLS],
        ln_weight: float32[HS_COLS],
        k_cache: float32[NUM_HEADS, CACHE_SIZE_INIT, HEAD_DIM],
        v_cache: float32[NUM_HEADS, CACHE_SIZE_INIT, HEAD_DIM],
        p_id: int32,
    ) -> float32[SEQ_LEN, HS_COLS]:
        RMS_NORM_EPS: float32 = 1e-5

        # Step 1: Apply input_layernorm
        rms_hidden_states: float32[SEQ_LEN, HS_COLS] = 0
        rms_norm(hidden_states, ln_weight_in, RMS_NORM_EPS, rms_hidden_states)

        # Step 2: Quantize the input activations for Q, K, V projections
        quantized_hidden_states: int8[SEQ_LEN, HS_COLS_4, 4] = 0
        scales: Fixed(32, 20)[SEQ_LEN] = 0
        quantize_activation(rms_hidden_states, 8, quantized_hidden_states, scales)

        # Step 3: Linear projections for Q, K, V using quantized GEMM (forward_no_mul)
        q_proj_re: float32[SEQ_LEN, HS_COLS] = 0
        k_proj_re: float32[SEQ_LEN, HS_COLS] = 0
        v_proj_re: float32[SEQ_LEN, HS_COLS] = 0

        # Transform float32 to fixed for linear_forward_no_mul
        q_weights_scale_fixed: Fixed(32, 20) = q_weights_scale
        k_weights_scale_fixed: Fixed(32, 20) = k_weights_scale
        v_weights_scale_fixed: Fixed(32, 20) = v_weights_scale
        o_weights_scale_fixed: Fixed(32, 20) = o_weights_scale

        # Copy quantized_hidden_states so that it can be partitioned in linear_forward_no_mul
        # Not copying would result in error since it is being passed to multiple functions
        # See Pitfall 2 on Page 6 in the Allo paper https://arxiv.org/pdf/2404.04815
        quantized_hidden_states_copy: int8[SEQ_LEN, HS_COLS_4, 4] = 0
        for i, j, k in allo.grid(SEQ_LEN, HS_COLS_4, 4):
            quantized_hidden_states_copy[i, j, k] = quantized_hidden_states[i, j, k]

        linear_forward_no_mul(
            quantized_hidden_states_copy, scales, q_weights_packed_data, q_weights_scale_fixed, q_proj_re
        )
        linear_forward_no_mul(
            quantized_hidden_states_copy, scales, k_weights_packed_data, k_weights_scale_fixed, k_proj_re
        )
        linear_forward_no_mul(
            quantized_hidden_states_copy, scales, v_weights_packed_data, v_weights_scale_fixed, v_proj_re
        )

        # Reshape Q, K, V for attention calculation
        q_proj: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        k_proj: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        v_proj: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0

        reshape_2D_to_3D(q_proj_re, q_proj)
        reshape_2D_to_3D(k_proj_re, k_proj)
        reshape_2D_to_3D(v_proj_re, v_proj)

        # Step 4: Apply rotary embedding
        q_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        k_embed: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        apply_rotary_pos_emb(q_proj, k_proj, cos, sin, q_embed, k_embed, p_id)

        updated_k_cache: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM] = 0
        updated_v_cache: float32[NUM_HEADS, CACHE_SIZE_INIT + 1, HEAD_DIM] = 0
        cache_update(k_cache, k_embed, updated_k_cache)
        cache_update(v_cache, v_proj, updated_v_cache)

        # Step 5: Transpose K for correct multiplication
        k_proj_transposed: float32[NUM_HEADS, HEAD_DIM, CACHE_SIZE_INIT + 1] = 0
        transpose_last_two_dims(updated_k_cache, k_proj_transposed)

        # Step 6: Calculate attention scores (QK^T) / sqrt(d)
        attn_weights: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1] = 0
        GEMM_3D_float(q_embed, k_proj_transposed, attn_weights)

        scale_factor: float32 = (HEAD_DIM) ** 0.5
        for i in allo.grid(NUM_HEADS):
            for j in allo.grid(SEQ_LEN):
                for k in allo.grid(CACHE_SIZE_INIT + 1):
                    attn_weights[i, j, k] /= scale_factor

        # Create a causal mask and apply it to the attention weights
        causal_mask_matrix: float32[SEQ_LEN, SEQ_LEN] = -3.4028235e+38
        causal_mask(causal_mask_matrix)
        for h in allo.grid(NUM_HEADS):
            for i in allo.grid(SEQ_LEN):
                for j in allo.grid(SEQ_LEN):
                    attn_weights[h, i, j] += causal_mask_matrix[i, j]

        # Step 7: Apply softmax
        softmax_attn_weights: float32[NUM_HEADS, SEQ_LEN, CACHE_SIZE_INIT + 1] = 0
        softmax(attn_weights, softmax_attn_weights)

        # Step 8: Multiply with V
        attn_output: float32[NUM_HEADS, SEQ_LEN, HEAD_DIM] = 0
        GEMM_3D_float2(softmax_attn_weights, updated_v_cache, attn_output)

        # Reshape the attention output from 3D to 2D
        attn_output_2D: float32[SEQ_LEN, HS_COLS] = 0
        for s in allo.grid(SEQ_LEN):
            for h in allo.grid(NUM_HEADS):
                for d in allo.grid(HEAD_DIM):
                    attn_output_2D[s, h * HEAD_DIM + d] = attn_output[h, s, d]

        # Step 9: Apply RMS normalization before projection
        rms_attn_output: float32[SEQ_LEN, HS_COLS] = 0
        rms_norm(attn_output_2D, ln_weight, RMS_NORM_EPS, rms_attn_output)

        # Step 10: Final output projection using quantized GEMM (forward_no_mul)
        quantized_final_output: int8[SEQ_LEN, HS_COLS_4, 4] = 0
        
        final_scales: Fixed(32, 20)[SEQ_LEN] = 0
        quantize_activation(rms_attn_output, 8, quantized_final_output, final_scales)
        
        # Copy quantized_hidden_states so that it can be partitioned in linear_forward_no_mul
        # Not copying would result in error since it is being passed to multiple functions
        # See Pitfall 2 on Page 6 in the Allo paper https://arxiv.org/pdf/2404.04815
        quantized_final_output_copy: int8[SEQ_LEN, HS_COLS_4, 4] = 0
        for i, j, k in allo.grid(SEQ_LEN, HS_COLS_4, 4):
            quantized_final_output_copy[i, j, k] = quantized_final_output[i, j, k]

        final_output: float32[SEQ_LEN, HS_COLS] = 0
        linear_forward_no_mul(
            quantized_final_output_copy, final_scales, o_weights_packed_data, o_weights_scale_fixed, final_output
        )
        return final_output

    s = allo.customize(attention)

    # linear forward no mul directives
    s_lfnm = allo.customize(linear_forward_no_mul)
    s_lfnm.unroll("l")
    s_lfnm.unroll("k1")
    s_lfnm.pipeline("k0")
    # s_lfnm.input automatically completetely partitions across dimension 3
    s_lfnm.partition(s_lfnm.input, partition_type=2, dim=2, factor=loop_tiling_factor)
    s_lfnm.partition(s_lfnm.weights_packed_data, partition_type=2, factor=loop_tiling_factor, dim=1)
    s.compose(s_lfnm)

    if target == "sw":
        f = s.build()
    else:
        f = s.build(target="vivado_hls", mode="csyn", project=f"attention_{imp}.prj")

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
        np.array(ln_weight_in, dtype=np.float32),
        np.array(ln_weight, dtype=np.float32),
        np.array(k_cache, dtype=np.float32),
        np.array(v_cache, dtype=np.float32),
        p_id,
    )

    np.testing.assert_allclose(outs, np.array(final_output), atol=1e-3)
