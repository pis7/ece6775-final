#!/bin/bash

# Read command-line arguments or use default values
num_heads=${1:-4}
head_dim=${2:-24}
hs_cols=${3:-96}
hs_cols_div_4=$((hs_cols / 4))

python truncate_2d.py ground_truth attn_fixed_t 1 $hs_cols
python truncate_2d.py hidden_states attn_fixed_t 1 $hs_cols
python truncate_3d.py k_cache attn_fixed_t $num_heads 5 $head_dim
python truncate_2d.py k_weights uint8_t $hs_cols_div_4 $hs_cols
python truncate_1d.py ln_weight_in attn_fixed_t $hs_cols
python truncate_1d.py ln_weight attn_fixed_t $hs_cols
python truncate_2d.py o_weights uint8_t $hs_cols_div_4 $hs_cols
python truncate_2d.py q_weights uint8_t $hs_cols_div_4 $hs_cols
python truncate_3d.py v_cache attn_fixed_t $head_dim 5 $head_dim
python truncate_2d.py v_weights uint8_t $hs_cols_div_4 $hs_cols
