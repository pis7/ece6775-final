
//===------------------------------------------------------------*- C++ -*-===//
//
// Automatically generated file for High-level Synthesis (HLS).
//
//===----------------------------------------------------------------------===//
#include <algorithm>
#include <ap_axi_sdata.h>
#include <ap_fixed.h>
#include <ap_int.h>
#include <hls_math.h>
#include <hls_stream.h>
#include <math.h>
#include <stdint.h>
using namespace std;
void rms_norm(
  float v0[1][1536],
  float v1[1536],
  float v2,
  float v3[1][1536]
) {	// L4
  l_S_index_0_index: for (int index = 0; index < 1; index++) {	// L5
    float variance;	// L6
    variance = (float)0.000000;	// L8
    l_S_i_0_i: for (int i = 0; i < 1536; i++) {	// L9
      float v7 = v0[index][i];	// L10
      float v8 = v7 * v7;	// L11
      float v9 = variance;	// L12
      float v10 = v9 + v8;	// L13
      variance = v10;	// L14
    }
    float v11 = variance;	// L18
    float v12 = v11 / (float)1536.000000;	// L19
    float v13 = v12 + v2;	// L20
    float v14 = pow(v13, (float)0.500000);	// L22
    float v15 = (float)1.000000 / v14;	// L24
    variance = v15;	// L25
    l_S_i_1_i1: for (int i1 = 0; i1 < 1536; i1++) {	// L26
      float v17 = v0[index][i1];	// L27
      float v18 = v1[i1];	// L28
      float v19 = v17 * v18;	// L29
      float v20 = variance;	// L30
      float v21 = v19 * v20;	// L31
      v3[index][i1] = v21;	// L32
    }
  }
}

void quantize_activation(
  float v22[1][1536],
  int32_t v23,
  int8_t v24[1][384][4],
  float v25[1]
) {	// L37
  ap_int<33> v26 = v23;	// L38
  ap_int<33> v27 = v26 - 1;	// L41
  int32_t v28 = v27;	// L42
  int32_t v29 = 1 << v28;	// L43
  int32_t v30 = 0 - v29;	// L45
  int32_t Qn;	// L46
  Qn = v30;	// L47
  ap_int<33> v32 = v29;	// L48
  ap_int<33> v33 = v32 - 1;	// L49
  int32_t v34 = v33;	// L50
  int32_t Qp;	// L51
  Qp = v34;	// L52
  l_S_i_0_i2: for (int i2 = 0; i2 < 1; i2++) {	// L53
    float max_val;	// L55
    max_val = (float)0.000000;	// L56
    l_S_j_0_j: for (int j = 0; j < 1536; j++) {	// L57
      float v39 = v22[i2][j];	// L58
      bool v40 = v39 > (float)0.000000;	// L59
      float v41 = v39 * (float)-1.000000;	// L62
      float v42 = v40 ? (float)v39 : (float)v41;	// L63
      float input_abs;	// L64
      input_abs = v42;	// L65
      float v44 = input_abs;	// L66
      float v45 = max_val;	// L67
      bool v46 = v45 < v44;	// L68
      if (v46) {	// L69
        float v47 = input_abs;	// L70
        max_val = v47;	// L71
      }
    }
    float v48 = max_val;	// L74
    float v49 = max(v48, (float)0.000010);	// L76
    float max_v;	// L77
    max_v = v49;	// L78
    int32_t v51 = Qp;	// L79
    float v52 = v51;	// L80
    float v53 = max_v;	// L81
    float v54 = v52 / v53;	// L82
    float scale;	// L83
    scale = v54;	// L84
    float v56 = scale;	// L85
    v25[i2] = v56;	// L86
    l_S_j_1_j1: for (int j1 = 0; j1 < 384; j1++) {	// L87
      l_S_l_1_l: for (int l = 0; l < 4; l++) {	// L88
        float v59 = v22[i2][((j1 * 4) + l)];	// L89
        float v60 = scale;	// L90
        float v61 = v59 * v60;	// L91
        bool v62 = v61 > (float)0.000000;	// L92
        float v63 = v61 + (float)0.500000;	// L94
        float v64 = v61 - (float)0.500000;	// L95
        float v65 = v62 ? (float)v63 : (float)v64;	// L96
        int32_t v66 = v65;	// L97
        int32_t quantized_value;	// L98
        quantized_value = v66;	// L99
        int32_t v68 = Qn;	// L100
        int32_t v69 = quantized_value;	// L101
        bool v70 = v69 < v68;	// L102
        int32_t v71 = Qp;	// L103
        bool v72 = v69 > v71;	// L104
        int32_t v73 = v72 ? (int32_t)v71 : (int32_t)v69;	// L105
        int32_t v74 = v70 ? (int32_t)v68 : (int32_t)v73;	// L106
        int8_t v75 = v74;	// L107
        int8_t quantized_value_clamped;	// L108
        quantized_value_clamped = v75;	// L109
        int8_t v77 = quantized_value_clamped;	// L110
        v24[i2][j1][l] = v77;	// L111
      }
    }
  }
}

void linear_forward_no_mul(
  int8_t v78[1][384][4],
  ap_fixed<32, 12> v79[1],
  uint8_t v80[384][1536],
  ap_fixed<32, 12> v81,
  float v82[1][1536]
) {	// L117
  #pragma HLS array_partition variable=v78 cyclic dim=2 factor=2

  #pragma HLS array_partition variable=v80 cyclic dim=1 factor=2

  l_S_i_0_i3: for (int i3 = 0; i3 < 1; i3++) {	// L118
    l_S_j_0_j2: for (int j2 = 0; j2 < 1536; j2++) {	// L119
      ap_fixed<35, 20> v85 = 0;	// L121
      ap_fixed<35, 20> local_acum;	// L122
      local_acum = v85;	// L123
      l_S_k0_0_k0: for (int k0 = 0; k0 < 192; k0++) {	// L124
      #pragma HLS pipeline II=1
        l_S_k1_0_k1: for (int k1 = 0; k1 < 2; k1++) {	// L125
        #pragma HLS unroll
          int64_t v89 = k0;	// L126
          int64_t v90 = v89 * 2;	// L129
          ap_int<65> v91 = v90;	// L130
          ap_int<65> v92 = k1;	// L131
          ap_int<65> v93 = v91 + v92;	// L132
          int v94 = v93;	// L133
          int k;	// L134
          k = v94;	// L135
          int v96 = k;	// L136
          int8_t v97 = v80[v96][j2];	// L137
          int8_t packed_value;	// L138
          packed_value = v97;	// L139
          ap_fixed<35, 20> v99 = 0;	// L140
          ap_fixed<35, 20> temp;	// L141
          temp = v99;	// L142
          l_S_l_0_l1: for (int l1 = 0; l1 < 4; l1++) {	// L143
          #pragma HLS unroll
            int v102 = k;	// L146
            int64_t v103 = v102;	// L147
            int64_t v104 = v103 * 4;	// L148
            ap_int<65> v105 = l1;	// L149
            ap_int<65> v106 = v104;	// L150
            ap_int<65> v107 = v105 + v106;	// L151
            bool v108 = v107 < 1536;	// L154
            if (v108) {	// L155
              int64_t v109 = l1;	// L156
              int64_t v110 = v109 * 2;	// L157
              int8_t v111 = v110;	// L158
              int8_t v112 = packed_value;	// L159
              int8_t v113 = v112 >> v111;	// L160
              int32_t v114 = v113;	// L161
              int32_t v115 = v114 & 3;	// L163
              int8_t v116 = v115;	// L164
              int8_t value;	// L165
              value = v116;	// L166
              int8_t weight_value;	// L168
              weight_value = 0;	// L169
              int8_t v119 = value;	// L170
              int32_t v120 = v119;	// L171
              bool v121 = v120 == 1;	// L173
              if (v121) {	// L174
                weight_value = 1;	// L176
              } else {
                int8_t v122 = value;	// L178
                int32_t v123 = v122;	// L179
                bool v124 = v123 == 2;	// L180
                if (v124) {	// L181
                  weight_value = -1;	// L184
                }
              }
              int v125 = k;	// L187
              int8_t v126 = v78[i3][v125][l1];	// L188
              int16_t v127 = v126;	// L189
              int8_t v128 = weight_value;	// L190
              int16_t v129 = v128;	// L191
              int16_t v130 = v127 * v129;	// L192
              ap_fixed<35, 20> v131 = v130;	// L193
              ap_fixed<35, 20> v132 = temp;	// L194
              ap_fixed<35, 20> v133 = v132 + v131;	// L195
              temp = v133;	// L196
            }
          }
          ap_fixed<35, 20> v134 = local_acum;	// L199
          ap_fixed<35, 20> v135 = temp;	// L200
          ap_fixed<35, 20> v136 = v134 + v135;	// L201
          local_acum = v136;	// L202
        }
      }
      ap_fixed<32, 12> v137 = v79[i3];	// L205
      ap_fixed<64, 24> v138 = v137;	// L206
      ap_fixed<64, 24> v139 = v81;	// L207
      ap_fixed<64, 24> v140 = v138 * v139;	// L208
      ap_fixed<35, 20> v141 = local_acum;	// L209
      ap_fixed<99, 60> v142 = v141;	// L210
      ap_fixed<99, 60> v143 = v140;	// L211
      ap_fixed<99, 60> v144 = v142 / v143;	// L212
      float v145 = v144;	// L213
      v82[i3][j2] = v145;	// L214
    }
  }
}

void reshape_2D_to_3D(
  float v146[1][1536],
  float v147[16][1][96]
) {	// L219
  l_S_s_0_s: for (int s = 0; s < 1; s++) {	// L220
    l_S_h_0_h: for (int h = 0; h < 16; h++) {	// L221
      l_S_d_0_d: for (int d = 0; d < 96; d++) {	// L222
        float v151 = v146[s][((h * 96) + d)];	// L223
        v147[h][s][d] = v151;	// L224
      }
    }
  }
}

void rotate_half(
  float v152[16][1][96],
  float v153[16][1][96]
) {	// L230
  l_S_h_0_h1: for (int h1 = 0; h1 < 16; h1++) {	// L231
    l_S_s_0_s1: for (int s1 = 0; s1 < 1; s1++) {	// L232
      l_S_d_0_d1: for (int d1 = 0; d1 < 48; d1++) {	// L233
        float v157 = v152[h1][s1][(d1 + 48)];	// L237
        float v158 = v157 * (float)-1.000000;	// L239
        v153[h1][s1][d1] = v158;	// L240
        float v159 = v152[h1][s1][d1];	// L241
        v153[h1][s1][(d1 + 48)] = v159;	// L242
      }
    }
  }
}

void apply_rotary_pos_emb(
  float v160[16][1][96],
  float v161[16][1][96],
  float v162[10][96],
  float v163[10][96],
  float v164[16][1][96],
  float v165[16][1][96],
  int32_t v166
) {	// L248
  float rotated_q[16][1][96];	// L251
  for (int v168 = 0; v168 < 16; v168++) {	// L252
    for (int v169 = 0; v169 < 1; v169++) {	// L252
      for (int v170 = 0; v170 < 96; v170++) {	// L252
        rotated_q[v168][v169][v170] = (float)0.000000;	// L252
      }
    }
  }
  float rotated_k[16][1][96];	// L253
  for (int v172 = 0; v172 < 16; v172++) {	// L254
    for (int v173 = 0; v173 < 1; v173++) {	// L254
      for (int v174 = 0; v174 < 96; v174++) {	// L254
        rotated_k[v172][v173][v174] = (float)0.000000;	// L254
      }
    }
  }
  rotate_half(v160, rotated_q);	// L255
  rotate_half(v161, rotated_k);	// L256
  l_S_h_0_h2: for (int h2 = 0; h2 < 16; h2++) {	// L257
    l_S_s_0_s2: for (int s2 = 0; s2 < 1; s2++) {	// L258
      l_S_d_0_d2: for (int d2 = 0; d2 < 96; d2++) {	// L259
        float v178 = v160[h2][s2][d2];	// L260
        float v179 = v162[5][d2];	// L261
        float v180 = v178 * v179;	// L262
        float v181 = rotated_q[h2][s2][d2];	// L263
        float v182 = v163[5][d2];	// L264
        float v183 = v181 * v182;	// L265
        float v184 = v180 + v183;	// L266
        v164[h2][s2][d2] = v184;	// L267
        float v185 = v161[h2][s2][d2];	// L268
        float v186 = v162[5][d2];	// L269
        float v187 = v185 * v186;	// L270
        float v188 = rotated_k[h2][s2][d2];	// L271
        float v189 = v163[5][d2];	// L272
        float v190 = v188 * v189;	// L273
        float v191 = v187 + v190;	// L274
        v165[h2][s2][d2] = v191;	// L275
      }
    }
  }
}

void cache_update(
  float v192[16][5][96],
  float v193[16][1][96],
  float v194[16][6][96]
) {	// L281
  l_S_i_0_i4: for (int i4 = 0; i4 < 16; i4++) {	// L282
    l_S_j_0_j3: for (int j3 = 0; j3 < 6; j3++) {	// L283
      ap_int<33> v197 = j3;	// L284
      bool v198 = v197 != 5;	// L287
      if (v198) {	// L288
        l_S_k_0_k1: for (int k1 = 0; k1 < 96; k1++) {	// L289
          float v200 = v192[i4][j3][k1];	// L290
          v194[i4][j3][k1] = v200;	// L291
        }
      } else {
        l_S_k_1_k2: for (int k2 = 0; k2 < 96; k2++) {	// L294
          float v202 = v193[i4][0][k2];	// L295
          v194[i4][j3][k2] = v202;	// L296
        }
      }
    }
  }
}

void transpose_last_two_dims(
  float v203[16][6][96],
  float v204[16][96][6]
) {	// L303
  l_S_h_0_h3: for (int h3 = 0; h3 < 16; h3++) {	// L304
    l_S_s_0_s3: for (int s3 = 0; s3 < 6; s3++) {	// L305
      l_S_d_0_d3: for (int d3 = 0; d3 < 96; d3++) {	// L306
        float v208 = v203[h3][s3][d3];	// L307
        v204[h3][d3][s3] = v208;	// L308
      }
    }
  }
}

void GEMM_3D_float(
  float v209[16][1][96],
  float v210[16][96][6],
  float v211[16][1][6]
) {	// L314
  l_S_h_0_h4: for (int h4 = 0; h4 < 16; h4++) {	// L315
    l_S_i_0_i5: for (int i5 = 0; i5 < 1; i5++) {	// L316
      l_S_j_0_j4: for (int j4 = 0; j4 < 6; j4++) {	// L317
        l_S_k_0_k3: for (int k3 = 0; k3 < 96; k3++) {	// L318
          float v216 = v209[h4][i5][k3];	// L319
          float v217 = v210[h4][k3][j4];	// L320
          float v218 = v216 * v217;	// L321
          float v219 = v211[h4][i5][j4];	// L322
          float v220 = v219 + v218;	// L323
          v211[h4][i5][j4] = v220;	// L324
        }
      }
    }
  }
}

void causal_mask(
  float v221[1][1]
) {	// L331
  l_S_i_0_i6: for (int i6 = 0; i6 < 1; i6++) {	// L332
    l_S_j_0_j5: for (int j5 = 0; j5 < 1; j5++) {	// L333
      v221[i6][j5] = (float)0.000000;	// L335
    }
  }
}

void softmax(
  float v224[16][1][6],
  float v225[16][1][6]
) {	// L340
  l_S_i_0_i7: for (int i7 = 0; i7 < 16; i7++) {	// L341
    l_S_j_0_j6: for (int j6 = 0; j6 < 1; j6++) {	// L342
      l_S_k_0_k4: for (int k4 = 0; k4 < 6; k4++) {	// L343
        float v229 = v224[i7][j6][k4];	// L344
        v225[i7][j6][k4] = v229;	// L345
      }
    }
  }
  l_S_i_3_i8: for (int i8 = 0; i8 < 16; i8++) {	// L349
    l_S_j_3_j7: for (int j7 = 0; j7 < 1; j7++) {	// L350
      float max_val1;	// L353
      max_val1 = (float)0.000000;	// L354
      l_S_k_3_k5: for (int k5 = 0; k5 < 6; k5++) {	// L355
        float v234 = v225[i8][j7][k5];	// L356
        float v235 = max_val1;	// L357
        bool v236 = v234 > v235;	// L358
        if (v236) {	// L359
          float v237 = v225[i8][j7][k5];	// L360
          max_val1 = v237;	// L361
        }
      }
      float sum_exp;	// L364
      sum_exp = (float)0.000000;	// L366
      l_S_k_4_k6: for (int k6 = 0; k6 < 6; k6++) {	// L367
        float v240 = v225[i8][j7][k6];	// L368
        float v241 = max_val1;	// L369
        float v242 = v240 - v241;	// L370
        float v243 = pow((float)2.718282, v242);	// L372
        v225[i8][j7][k6] = v243;	// L373
        float v244 = v225[i8][j7][k6];	// L374
        float v245 = sum_exp;	// L375
        float v246 = v245 + v244;	// L376
        sum_exp = v246;	// L377
      }
      l_S_k_5_k7: for (int k7 = 0; k7 < 6; k7++) {	// L379
        float v248 = v225[i8][j7][k7];	// L380
        float v249 = sum_exp;	// L381
        float v250 = v248 / v249;	// L382
        v225[i8][j7][k7] = v250;	// L383
      }
    }
  }
}

void GEMM_3D_float2(
  float v251[16][1][6],
  float v252[16][6][96],
  float v253[16][1][96]
) {	// L389
  l_S_h_0_h5: for (int h5 = 0; h5 < 16; h5++) {	// L390
    l_S_i_0_i9: for (int i9 = 0; i9 < 1; i9++) {	// L391
      l_S_j_0_j8: for (int j8 = 0; j8 < 96; j8++) {	// L392
        l_S_k_0_k8: for (int k8 = 0; k8 < 6; k8++) {	// L393
          float v258 = v251[h5][i9][k8];	// L394
          float v259 = v252[h5][k8][j8];	// L395
          float v260 = v258 * v259;	// L396
          float v261 = v253[h5][i9][j8];	// L397
          float v262 = v261 + v260;	// L398
          v253[h5][i9][j8] = v262;	// L399
        }
      }
    }
  }
}

void attention(
  float v263[1][1536],
  uint8_t v264[384][1536],
  float v265,
  uint8_t v266[384][1536],
  float v267,
  uint8_t v268[384][1536],
  float v269,
  uint8_t v270[384][1536],
  float v271,
  float v272[10][96],
  float v273[10][96],
  float v274[1536],
  float v275[1536],
  float v276[16][5][96],
  float v277[16][5][96],
  int32_t v278,
  float v279[1][1536]
) {	// L406
  #pragma HLS array_partition variable=v264 cyclic dim=1 factor=2

  #pragma HLS array_partition variable=v266 cyclic dim=1 factor=2

  #pragma HLS array_partition variable=v268 cyclic dim=1 factor=2

  #pragma HLS array_partition variable=v270 cyclic dim=1 factor=2

  float RMS_NORM_EPS;	// L407
  RMS_NORM_EPS = (float)0.000010;	// L409
  float rms_hidden_states[1][1536];	// L412
  for (int v282 = 0; v282 < 1; v282++) {	// L413
    for (int v283 = 0; v283 < 1536; v283++) {	// L413
      rms_hidden_states[v282][v283] = (float)0.000000;	// L413
    }
  }
  float v284 = RMS_NORM_EPS;	// L414
  rms_norm(v263, v274, v284, rms_hidden_states);	// L415
  int8_t quantized_hidden_states[1][384][4];	// L417
  for (int v286 = 0; v286 < 1; v286++) {	// L418
    for (int v287 = 0; v287 < 384; v287++) {	// L418
      for (int v288 = 0; v288 < 4; v288++) {	// L418
        quantized_hidden_states[v286][v287][v288] = 0;	// L418
      }
    }
  }
  float scales[1];	// L419
  for (int v290 = 0; v290 < 1; v290++) {	// L420
    scales[v290] = (float)0.000000;	// L420
  }
  quantize_activation(rms_hidden_states, 8, quantized_hidden_states, scales);	// L422
  float q_proj_re[1][1536];	// L423
  for (int v292 = 0; v292 < 1; v292++) {	// L424
    for (int v293 = 0; v293 < 1536; v293++) {	// L424
      q_proj_re[v292][v293] = (float)0.000000;	// L424
    }
  }
  float k_proj_re[1][1536];	// L425
  for (int v295 = 0; v295 < 1; v295++) {	// L426
    for (int v296 = 0; v296 < 1536; v296++) {	// L426
      k_proj_re[v295][v296] = (float)0.000000;	// L426
    }
  }
  float v_proj_re[1][1536];	// L427
  for (int v298 = 0; v298 < 1; v298++) {	// L428
    for (int v299 = 0; v299 < 1536; v299++) {	// L428
      v_proj_re[v298][v299] = (float)0.000000;	// L428
    }
  }
  ap_fixed<32, 12> v300 = v265;	// L429
  ap_fixed<32, 12> q_weights_scale_fixed;	// L430
  q_weights_scale_fixed = v300;	// L431
  ap_fixed<32, 12> v302 = v267;	// L432
  ap_fixed<32, 12> k_weights_scale_fixed;	// L433
  k_weights_scale_fixed = v302;	// L434
  ap_fixed<32, 12> v304 = v269;	// L435
  ap_fixed<32, 12> v_weights_scale_fixed;	// L436
  v_weights_scale_fixed = v304;	// L437
  ap_fixed<32, 12> v306 = v271;	// L438
  ap_fixed<32, 12> o_weights_scale_fixed;	// L439
  o_weights_scale_fixed = v306;	// L440
  ap_fixed<32, 12> v308 = 0;	// L441
  ap_fixed<32, 12> scales_fixed[1];	// L442
  for (int v310 = 0; v310 < 1; v310++) {	// L443
    scales_fixed[v310] = v308;	// L443
  }
  int8_t quantized_hidden_states_copy[1][384][4];	// L444
  #pragma HLS array_partition variable=quantized_hidden_states_copy cyclic dim=2 factor=2

  for (int v312 = 0; v312 < 1; v312++) {	// L445
    for (int v313 = 0; v313 < 384; v313++) {	// L445
      for (int v314 = 0; v314 < 4; v314++) {	// L445
        quantized_hidden_states_copy[v312][v313][v314] = 0;	// L445
      }
    }
  }
  l_S_i_j_k_0_i10: for (int i10 = 0; i10 < 1; i10++) {	// L446
    l_j9: for (int j9 = 0; j9 < 384; j9++) {	// L447
      l_k9: for (int k9 = 0; k9 < 4; k9++) {	// L448
        int8_t v318 = quantized_hidden_states[i10][j9][k9];	// L449
        quantized_hidden_states_copy[i10][j9][k9] = v318;	// L450
      }
    }
  }
  l_S_i_1_i11: for (int i11 = 0; i11 < 1; i11++) {	// L454
    float v320 = scales[i11];	// L455
    ap_fixed<32, 12> v321 = v320;	// L456
    scales_fixed[i11] = v321;	// L457
  }
  ap_fixed<32, 12> v322 = q_weights_scale_fixed;	// L459
  linear_forward_no_mul(quantized_hidden_states_copy, scales_fixed, v264, v322, q_proj_re);	// L460
  ap_fixed<32, 12> v323 = k_weights_scale_fixed;	// L461
  linear_forward_no_mul(quantized_hidden_states_copy, scales_fixed, v266, v323, k_proj_re);	// L462
  ap_fixed<32, 12> v324 = v_weights_scale_fixed;	// L463
  linear_forward_no_mul(quantized_hidden_states_copy, scales_fixed, v268, v324, v_proj_re);	// L464
  float q_proj[16][1][96];	// L465
  for (int v326 = 0; v326 < 16; v326++) {	// L466
    for (int v327 = 0; v327 < 1; v327++) {	// L466
      for (int v328 = 0; v328 < 96; v328++) {	// L466
        q_proj[v326][v327][v328] = (float)0.000000;	// L466
      }
    }
  }
  float k_proj[16][1][96];	// L467
  for (int v330 = 0; v330 < 16; v330++) {	// L468
    for (int v331 = 0; v331 < 1; v331++) {	// L468
      for (int v332 = 0; v332 < 96; v332++) {	// L468
        k_proj[v330][v331][v332] = (float)0.000000;	// L468
      }
    }
  }
  float v_proj[16][1][96];	// L469
  for (int v334 = 0; v334 < 16; v334++) {	// L470
    for (int v335 = 0; v335 < 1; v335++) {	// L470
      for (int v336 = 0; v336 < 96; v336++) {	// L470
        v_proj[v334][v335][v336] = (float)0.000000;	// L470
      }
    }
  }
  reshape_2D_to_3D(q_proj_re, q_proj);	// L471
  reshape_2D_to_3D(k_proj_re, k_proj);	// L472
  reshape_2D_to_3D(v_proj_re, v_proj);	// L473
  float q_embed[16][1][96];	// L474
  for (int v338 = 0; v338 < 16; v338++) {	// L475
    for (int v339 = 0; v339 < 1; v339++) {	// L475
      for (int v340 = 0; v340 < 96; v340++) {	// L475
        q_embed[v338][v339][v340] = (float)0.000000;	// L475
      }
    }
  }
  float k_embed[16][1][96];	// L476
  for (int v342 = 0; v342 < 16; v342++) {	// L477
    for (int v343 = 0; v343 < 1; v343++) {	// L477
      for (int v344 = 0; v344 < 96; v344++) {	// L477
        k_embed[v342][v343][v344] = (float)0.000000;	// L477
      }
    }
  }
  apply_rotary_pos_emb(q_proj, k_proj, v272, v273, q_embed, k_embed, v278);	// L478
  float updated_k_cache[16][6][96];	// L479
  for (int v346 = 0; v346 < 16; v346++) {	// L480
    for (int v347 = 0; v347 < 6; v347++) {	// L480
      for (int v348 = 0; v348 < 96; v348++) {	// L480
        updated_k_cache[v346][v347][v348] = (float)0.000000;	// L480
      }
    }
  }
  float updated_v_cache[16][6][96];	// L481
  for (int v350 = 0; v350 < 16; v350++) {	// L482
    for (int v351 = 0; v351 < 6; v351++) {	// L482
      for (int v352 = 0; v352 < 96; v352++) {	// L482
        updated_v_cache[v350][v351][v352] = (float)0.000000;	// L482
      }
    }
  }
  cache_update(v276, k_embed, updated_k_cache);	// L483
  cache_update(v277, v_proj, updated_v_cache);	// L484
  float k_proj_transposed[16][96][6];	// L485
  for (int v354 = 0; v354 < 16; v354++) {	// L486
    for (int v355 = 0; v355 < 96; v355++) {	// L486
      for (int v356 = 0; v356 < 6; v356++) {	// L486
        k_proj_transposed[v354][v355][v356] = (float)0.000000;	// L486
      }
    }
  }
  transpose_last_two_dims(updated_k_cache, k_proj_transposed);	// L487
  float attn_weights[16][1][6];	// L488
  for (int v358 = 0; v358 < 16; v358++) {	// L489
    for (int v359 = 0; v359 < 1; v359++) {	// L489
      for (int v360 = 0; v360 < 6; v360++) {	// L489
        attn_weights[v358][v359][v360] = (float)0.000000;	// L489
      }
    }
  }
  GEMM_3D_float(q_embed, k_proj_transposed, attn_weights);	// L490
  float scale_factor;	// L495
  scale_factor = (float)9.797959;	// L496
  l_S_i_2_i12: for (int i12 = 0; i12 < 16; i12++) {	// L497
    l_S_j_2_j10: for (int j10 = 0; j10 < 1; j10++) {	// L498
      l_S_k_2_k10: for (int k10 = 0; k10 < 6; k10++) {	// L499
        float v365 = attn_weights[i12][j10][k10];	// L500
        float v366 = scale_factor;	// L501
        float v367 = v365 / v366;	// L502
        attn_weights[i12][j10][k10] = v367;	// L503
      }
    }
  }
  float causal_mask_matrix[1][1];	// L509
  for (int v369 = 0; v369 < 1; v369++) {	// L510
    for (int v370 = 0; v370 < 1; v370++) {	// L510
      causal_mask_matrix[v369][v370] = (float)-340282346638528859811704183484516925440.000000;	// L510
    }
  }
  causal_mask(causal_mask_matrix);	// L511
  l_S_h_5_h6: for (int h6 = 0; h6 < 16; h6++) {	// L512
    l_S_i_5_i13: for (int i13 = 0; i13 < 1; i13++) {	// L513
      l_S_j_5_j11: for (int j11 = 0; j11 < 1; j11++) {	// L514
        float v374 = causal_mask_matrix[i13][j11];	// L515
        float v375 = attn_weights[h6][i13][j11];	// L516
        float v376 = v375 + v374;	// L517
        attn_weights[h6][i13][j11] = v376;	// L518
      }
    }
  }
  float softmax_attn_weights[16][1][6];	// L522
  for (int v378 = 0; v378 < 16; v378++) {	// L523
    for (int v379 = 0; v379 < 1; v379++) {	// L523
      for (int v380 = 0; v380 < 6; v380++) {	// L523
        softmax_attn_weights[v378][v379][v380] = (float)0.000000;	// L523
      }
    }
  }
  softmax(attn_weights, softmax_attn_weights);	// L524
  float attn_output[16][1][96];	// L525
  for (int v382 = 0; v382 < 16; v382++) {	// L526
    for (int v383 = 0; v383 < 1; v383++) {	// L526
      for (int v384 = 0; v384 < 96; v384++) {	// L526
        attn_output[v382][v383][v384] = (float)0.000000;	// L526
      }
    }
  }
  GEMM_3D_float2(softmax_attn_weights, updated_v_cache, attn_output);	// L527
  float attn_output_2D[1][1536];	// L528
  for (int v386 = 0; v386 < 1; v386++) {	// L529
    for (int v387 = 0; v387 < 1536; v387++) {	// L529
      attn_output_2D[v386][v387] = (float)0.000000;	// L529
    }
  }
  l_S_s_8_s4: for (int s4 = 0; s4 < 1; s4++) {	// L530
    l_S_h_8_h7: for (int h7 = 0; h7 < 16; h7++) {	// L531
      l_S_d_8_d4: for (int d4 = 0; d4 < 96; d4++) {	// L532
        float v391 = attn_output[h7][s4][d4];	// L533
        attn_output_2D[s4][((h7 * 96) + d4)] = v391;	// L534
      }
    }
  }
  float rms_attn_output[1][1536];	// L538
  for (int v393 = 0; v393 < 1; v393++) {	// L539
    for (int v394 = 0; v394 < 1536; v394++) {	// L539
      rms_attn_output[v393][v394] = (float)0.000000;	// L539
    }
  }
  float v395 = RMS_NORM_EPS;	// L540
  rms_norm(attn_output_2D, v275, v395, rms_attn_output);	// L541
  int8_t quantized_final_output[1][384][4];	// L542
  for (int v397 = 0; v397 < 1; v397++) {	// L543
    for (int v398 = 0; v398 < 384; v398++) {	// L543
      for (int v399 = 0; v399 < 4; v399++) {	// L543
        quantized_final_output[v397][v398][v399] = 0;	// L543
      }
    }
  }
  float final_scales[1];	// L544
  for (int v401 = 0; v401 < 1; v401++) {	// L545
    final_scales[v401] = (float)0.000000;	// L545
  }
  quantize_activation(rms_attn_output, 8, quantized_final_output, final_scales);	// L546
  ap_fixed<32, 12> v402 = 0;	// L547
  ap_fixed<32, 12> final_scales_fixed[1];	// L548
  for (int v404 = 0; v404 < 1; v404++) {	// L549
    final_scales_fixed[v404] = v402;	// L549
  }
  l_S_i_11_i14: for (int i14 = 0; i14 < 1; i14++) {	// L550
    float v406 = final_scales[i14];	// L551
    ap_fixed<32, 12> v407 = v406;	// L552
    final_scales_fixed[i14] = v407;	// L553
  }
  int8_t quantized_final_output_copy[1][384][4];	// L555
  #pragma HLS array_partition variable=quantized_final_output_copy cyclic dim=2 factor=2

  for (int v409 = 0; v409 < 1; v409++) {	// L556
    for (int v410 = 0; v410 < 384; v410++) {	// L556
      for (int v411 = 0; v411 < 4; v411++) {	// L556
        quantized_final_output_copy[v409][v410][v411] = 0;	// L556
      }
    }
  }
  l_S_i_j_k_12_i15: for (int i15 = 0; i15 < 1; i15++) {	// L557
    l_j12: for (int j12 = 0; j12 < 384; j12++) {	// L558
      l_k11: for (int k11 = 0; k11 < 4; k11++) {	// L559
        int8_t v415 = quantized_final_output[i15][j12][k11];	// L560
        quantized_final_output_copy[i15][j12][k11] = v415;	// L561
      }
    }
  }
  for (int v416 = 0; v416 < 1; v416++) {	// L566
    for (int v417 = 0; v417 < 1536; v417++) {	// L566
      v279[v416][v417] = (float)0.000000;	// L566
    }
  }
  ap_fixed<32, 12> v418 = o_weights_scale_fixed;	// L567
  linear_forward_no_mul(quantized_final_output_copy, final_scales_fixed, v270, v418, v279);	// L568
}

