
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
  ap_fixed<32, 12> v25[1]
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
    ap_fixed<32, 12> v57 = v56;	// L86
    v25[i2] = v57;	// L87
    l_S_j_1_j1: for (int j1 = 0; j1 < 384; j1++) {	// L88
      l_S_l_1_l: for (int l = 0; l < 4; l++) {	// L89
        float v60 = v22[i2][((j1 * 4) + l)];	// L90
        float v61 = scale;	// L91
        float v62 = v60 * v61;	// L92
        bool v63 = v62 > (float)0.000000;	// L93
        float v64 = v62 + (float)0.500000;	// L95
        float v65 = v62 - (float)0.500000;	// L96
        float v66 = v63 ? (float)v64 : (float)v65;	// L97
        int32_t v67 = v66;	// L98
        int32_t quantized_value;	// L99
        quantized_value = v67;	// L100
        int32_t v69 = Qn;	// L101
        int32_t v70 = quantized_value;	// L102
        bool v71 = v70 < v69;	// L103
        int32_t v72 = Qp;	// L104
        bool v73 = v70 > v72;	// L105
        int32_t v74 = v73 ? (int32_t)v72 : (int32_t)v70;	// L106
        int32_t v75 = v71 ? (int32_t)v69 : (int32_t)v74;	// L107
        int8_t v76 = v75;	// L108
        int8_t quantized_value_clamped;	// L109
        quantized_value_clamped = v76;	// L110
        int8_t v78 = quantized_value_clamped;	// L111
        v24[i2][j1][l] = v78;	// L112
      }
    }
  }
}

void linear_forward_no_mul(
  int8_t v79[1][384][4],
  ap_fixed<32, 12> v80[1],
  uint8_t v81[384][1536],
  ap_fixed<32, 12> v82,
  float v83[1][1536]
) {	// L118
  #pragma HLS array_partition variable=v79 cyclic dim=2 factor=2

  #pragma HLS array_partition variable=v81 cyclic dim=1 factor=2

  l_S_i_0_i3: for (int i3 = 0; i3 < 1; i3++) {	// L119
    l_S_j_0_j2: for (int j2 = 0; j2 < 1536; j2++) {	// L120
      ap_fixed<35, 20> v86 = 0;	// L122
      ap_fixed<35, 20> local_acum;	// L123
      local_acum = v86;	// L124
      l_S_k0_0_k0: for (int k0 = 0; k0 < 192; k0++) {	// L125
      #pragma HLS pipeline II=1
        l_S_k1_0_k1: for (int k1 = 0; k1 < 2; k1++) {	// L126
        #pragma HLS unroll
          int64_t v90 = k0;	// L127
          int64_t v91 = v90 * 2;	// L130
          ap_int<65> v92 = v91;	// L131
          ap_int<65> v93 = k1;	// L132
          ap_int<65> v94 = v92 + v93;	// L133
          int v95 = v94;	// L134
          int k;	// L135
          k = v95;	// L136
          int v97 = k;	// L137
          int8_t v98 = v81[v97][j2];	// L138
          int8_t packed_value;	// L139
          packed_value = v98;	// L140
          ap_fixed<35, 20> v100 = 0;	// L141
          ap_fixed<35, 20> temp;	// L142
          temp = v100;	// L143
          l_S_l_0_l1: for (int l1 = 0; l1 < 4; l1++) {	// L144
          #pragma HLS unroll
            int v103 = k;	// L147
            int64_t v104 = v103;	// L148
            int64_t v105 = v104 * 4;	// L149
            ap_int<65> v106 = l1;	// L150
            ap_int<65> v107 = v105;	// L151
            ap_int<65> v108 = v106 + v107;	// L152
            bool v109 = v108 < 1536;	// L155
            if (v109) {	// L156
              int64_t v110 = l1;	// L157
              int64_t v111 = v110 * 2;	// L158
              int8_t v112 = v111;	// L159
              int8_t v113 = packed_value;	// L160
              int8_t v114 = v113 >> v112;	// L161
              int32_t v115 = v114;	// L162
              int32_t v116 = v115 & 3;	// L164
              int8_t v117 = v116;	// L165
              int8_t value;	// L166
              value = v117;	// L167
              int8_t weight_value;	// L169
              weight_value = 0;	// L170
              int8_t v120 = value;	// L171
              int32_t v121 = v120;	// L172
              bool v122 = v121 == 1;	// L174
              if (v122) {	// L175
                weight_value = 1;	// L177
              } else {
                int8_t v123 = value;	// L179
                int32_t v124 = v123;	// L180
                bool v125 = v124 == 2;	// L181
                if (v125) {	// L182
                  weight_value = -1;	// L185
                }
              }
              int v126 = k;	// L188
              int8_t v127 = v79[i3][v126][l1];	// L189
              int16_t v128 = v127;	// L190
              int8_t v129 = weight_value;	// L191
              int16_t v130 = v129;	// L192
              int16_t v131 = v128 * v130;	// L193
              ap_fixed<35, 20> v132 = v131;	// L194
              ap_fixed<35, 20> v133 = temp;	// L195
              ap_fixed<35, 20> v134 = v133 + v132;	// L196
              temp = v134;	// L197
            }
          }
          ap_fixed<35, 20> v135 = local_acum;	// L200
          ap_fixed<35, 20> v136 = temp;	// L201
          ap_fixed<35, 20> v137 = v135 + v136;	// L202
          local_acum = v137;	// L203
        }
      }
      ap_fixed<32, 12> v138 = v80[i3];	// L206
      ap_fixed<64, 24> v139 = v138;	// L207
      ap_fixed<64, 24> v140 = v82;	// L208
      ap_fixed<64, 24> v141 = v139 * v140;	// L209
      ap_fixed<35, 20> v142 = local_acum;	// L210
      ap_fixed<99, 60> v143 = v142;	// L211
      ap_fixed<99, 60> v144 = v141;	// L212
      ap_fixed<99, 60> v145 = v143 / v144;	// L213
      float v146 = v145;	// L214
      v83[i3][j2] = v146;	// L215
    }
  }
}

void reshape_2D_to_3D(
  float v147[1][1536],
  float v148[16][1][96]
) {	// L220
  l_S_s_0_s: for (int s = 0; s < 1; s++) {	// L221
    l_S_h_0_h: for (int h = 0; h < 16; h++) {	// L222
      l_S_d_0_d: for (int d = 0; d < 96; d++) {	// L223
        float v152 = v147[s][((h * 96) + d)];	// L224
        v148[h][s][d] = v152;	// L225
      }
    }
  }
}

void rotate_half(
  float v153[16][1][96],
  float v154[16][1][96]
) {	// L231
  l_S_h_0_h1: for (int h1 = 0; h1 < 16; h1++) {	// L232
    l_S_s_0_s1: for (int s1 = 0; s1 < 1; s1++) {	// L233
      l_S_d_0_d1: for (int d1 = 0; d1 < 48; d1++) {	// L234
        float v158 = v153[h1][s1][(d1 + 48)];	// L238
        float v159 = v158 * (float)-1.000000;	// L240
        v154[h1][s1][d1] = v159;	// L241
        float v160 = v153[h1][s1][d1];	// L242
        v154[h1][s1][(d1 + 48)] = v160;	// L243
      }
    }
  }
}

void apply_rotary_pos_emb(
  float v161[16][1][96],
  float v162[16][1][96],
  float v163[10][96],
  float v164[10][96],
  float v165[16][1][96],
  float v166[16][1][96],
  int32_t v167
) {	// L249
  float rotated_q[16][1][96];	// L252
  for (int v169 = 0; v169 < 16; v169++) {	// L253
    for (int v170 = 0; v170 < 1; v170++) {	// L253
      for (int v171 = 0; v171 < 96; v171++) {	// L253
        rotated_q[v169][v170][v171] = (float)0.000000;	// L253
      }
    }
  }
  float rotated_k[16][1][96];	// L254
  for (int v173 = 0; v173 < 16; v173++) {	// L255
    for (int v174 = 0; v174 < 1; v174++) {	// L255
      for (int v175 = 0; v175 < 96; v175++) {	// L255
        rotated_k[v173][v174][v175] = (float)0.000000;	// L255
      }
    }
  }
  rotate_half(v161, rotated_q);	// L256
  rotate_half(v162, rotated_k);	// L257
  l_S_h_0_h2: for (int h2 = 0; h2 < 16; h2++) {	// L258
    l_S_s_0_s2: for (int s2 = 0; s2 < 1; s2++) {	// L259
      l_S_d_0_d2: for (int d2 = 0; d2 < 96; d2++) {	// L260
        float v179 = v161[h2][s2][d2];	// L261
        float v180 = v163[5][d2];	// L262
        float v181 = v179 * v180;	// L263
        float v182 = rotated_q[h2][s2][d2];	// L264
        float v183 = v164[5][d2];	// L265
        float v184 = v182 * v183;	// L266
        float v185 = v181 + v184;	// L267
        v165[h2][s2][d2] = v185;	// L268
        float v186 = v162[h2][s2][d2];	// L269
        float v187 = v163[5][d2];	// L270
        float v188 = v186 * v187;	// L271
        float v189 = rotated_k[h2][s2][d2];	// L272
        float v190 = v164[5][d2];	// L273
        float v191 = v189 * v190;	// L274
        float v192 = v188 + v191;	// L275
        v166[h2][s2][d2] = v192;	// L276
      }
    }
  }
}

void cache_update(
  float v193[16][5][96],
  float v194[16][1][96],
  float v195[16][6][96]
) {	// L282
  l_S_i_0_i4: for (int i4 = 0; i4 < 16; i4++) {	// L283
    l_S_j_0_j3: for (int j3 = 0; j3 < 6; j3++) {	// L284
      ap_int<33> v198 = j3;	// L285
      bool v199 = v198 != 5;	// L288
      if (v199) {	// L289
        l_S_k_0_k1: for (int k1 = 0; k1 < 96; k1++) {	// L290
          float v201 = v193[i4][j3][k1];	// L291
          v195[i4][j3][k1] = v201;	// L292
        }
      } else {
        l_S_k_1_k2: for (int k2 = 0; k2 < 96; k2++) {	// L295
          float v203 = v194[i4][0][k2];	// L296
          v195[i4][j3][k2] = v203;	// L297
        }
      }
    }
  }
}

void transpose_last_two_dims(
  float v204[16][6][96],
  float v205[16][96][6]
) {	// L304
  l_S_h_0_h3: for (int h3 = 0; h3 < 16; h3++) {	// L305
    l_S_s_0_s3: for (int s3 = 0; s3 < 6; s3++) {	// L306
      l_S_d_0_d3: for (int d3 = 0; d3 < 96; d3++) {	// L307
        float v209 = v204[h3][s3][d3];	// L308
        v205[h3][d3][s3] = v209;	// L309
      }
    }
  }
}

void GEMM_3D_float(
  float v210[16][1][96],
  float v211[16][96][6],
  float v212[16][1][6]
) {	// L315
  l_S_h_0_h4: for (int h4 = 0; h4 < 16; h4++) {	// L316
    l_S_i_0_i5: for (int i5 = 0; i5 < 1; i5++) {	// L317
      l_S_j_0_j4: for (int j4 = 0; j4 < 6; j4++) {	// L318
        l_S_k_0_k3: for (int k3 = 0; k3 < 96; k3++) {	// L319
          float v217 = v210[h4][i5][k3];	// L320
          float v218 = v211[h4][k3][j4];	// L321
          float v219 = v217 * v218;	// L322
          float v220 = v212[h4][i5][j4];	// L323
          float v221 = v220 + v219;	// L324
          v212[h4][i5][j4] = v221;	// L325
        }
      }
    }
  }
}

void causal_mask(
  float v222[1][1]
) {	// L332
  l_S_i_0_i6: for (int i6 = 0; i6 < 1; i6++) {	// L333
    l_S_j_0_j5: for (int j5 = 0; j5 < 1; j5++) {	// L334
      v222[i6][j5] = (float)0.000000;	// L336
    }
  }
}

void softmax(
  float v225[16][1][6],
  float v226[16][1][6]
) {	// L341
  l_S_i_0_i7: for (int i7 = 0; i7 < 16; i7++) {	// L342
    l_S_j_0_j6: for (int j6 = 0; j6 < 1; j6++) {	// L343
      l_S_k_0_k4: for (int k4 = 0; k4 < 6; k4++) {	// L344
        float v230 = v225[i7][j6][k4];	// L345
        v226[i7][j6][k4] = v230;	// L346
      }
    }
  }
  l_S_i_3_i8: for (int i8 = 0; i8 < 16; i8++) {	// L350
    l_S_j_3_j7: for (int j7 = 0; j7 < 1; j7++) {	// L351
      float max_val1;	// L354
      max_val1 = (float)0.000000;	// L355
      l_S_k_3_k5: for (int k5 = 0; k5 < 6; k5++) {	// L356
        float v235 = v226[i8][j7][k5];	// L357
        float v236 = max_val1;	// L358
        bool v237 = v235 > v236;	// L359
        if (v237) {	// L360
          float v238 = v226[i8][j7][k5];	// L361
          max_val1 = v238;	// L362
        }
      }
      float sum_exp;	// L365
      sum_exp = (float)0.000000;	// L367
      l_S_k_4_k6: for (int k6 = 0; k6 < 6; k6++) {	// L368
        float v241 = v226[i8][j7][k6];	// L369
        float v242 = max_val1;	// L370
        float v243 = v241 - v242;	// L371
        float v244 = pow((float)2.718282, v243);	// L373
        v226[i8][j7][k6] = v244;	// L374
        float v245 = v226[i8][j7][k6];	// L375
        float v246 = sum_exp;	// L376
        float v247 = v246 + v245;	// L377
        sum_exp = v247;	// L378
      }
      l_S_k_5_k7: for (int k7 = 0; k7 < 6; k7++) {	// L380
        float v249 = v226[i8][j7][k7];	// L381
        float v250 = sum_exp;	// L382
        float v251 = v249 / v250;	// L383
        v226[i8][j7][k7] = v251;	// L384
      }
    }
  }
}

void GEMM_3D_float2(
  float v252[16][1][6],
  float v253[16][6][96],
  float v254[16][1][96]
) {	// L390
  l_S_h_0_h5: for (int h5 = 0; h5 < 16; h5++) {	// L391
    l_S_i_0_i9: for (int i9 = 0; i9 < 1; i9++) {	// L392
      l_S_j_0_j8: for (int j8 = 0; j8 < 96; j8++) {	// L393
        l_S_k_0_k8: for (int k8 = 0; k8 < 6; k8++) {	// L394
          float v259 = v252[h5][i9][k8];	// L395
          float v260 = v253[h5][k8][j8];	// L396
          float v261 = v259 * v260;	// L397
          float v262 = v254[h5][i9][j8];	// L398
          float v263 = v262 + v261;	// L399
          v254[h5][i9][j8] = v263;	// L400
        }
      }
    }
  }
}

void attention(
  float v264[1][1536],
  uint8_t v265[384][1536],
  float v266,
  uint8_t v267[384][1536],
  float v268,
  uint8_t v269[384][1536],
  float v270,
  uint8_t v271[384][1536],
  float v272,
  float v273[10][96],
  float v274[10][96],
  float v275[1536],
  float v276[1536],
  float v277[16][5][96],
  float v278[16][5][96],
  int32_t v279,
  float v280[1][1536]
) {	// L407
  #pragma HLS array_partition variable=v265 cyclic dim=1 factor=2

  #pragma HLS array_partition variable=v267 cyclic dim=1 factor=2

  #pragma HLS array_partition variable=v269 cyclic dim=1 factor=2

  #pragma HLS array_partition variable=v271 cyclic dim=1 factor=2

  float RMS_NORM_EPS;	// L408
  RMS_NORM_EPS = (float)0.000010;	// L410
  float rms_hidden_states[1][1536];	// L413
  for (int v283 = 0; v283 < 1; v283++) {	// L414
    for (int v284 = 0; v284 < 1536; v284++) {	// L414
      rms_hidden_states[v283][v284] = (float)0.000000;	// L414
    }
  }
  float v285 = RMS_NORM_EPS;	// L415
  rms_norm(v264, v275, v285, rms_hidden_states);	// L416
  int8_t quantized_hidden_states[1][384][4];	// L418
  for (int v287 = 0; v287 < 1; v287++) {	// L419
    for (int v288 = 0; v288 < 384; v288++) {	// L419
      for (int v289 = 0; v289 < 4; v289++) {	// L419
        quantized_hidden_states[v287][v288][v289] = 0;	// L419
      }
    }
  }
  ap_fixed<32, 12> v290 = 0;	// L420
  ap_fixed<32, 12> scales[1];	// L421
  for (int v292 = 0; v292 < 1; v292++) {	// L422
    scales[v292] = v290;	// L422
  }
  quantize_activation(rms_hidden_states, 8, quantized_hidden_states, scales);	// L424
  float q_proj_re[1][1536];	// L425
  for (int v294 = 0; v294 < 1; v294++) {	// L426
    for (int v295 = 0; v295 < 1536; v295++) {	// L426
      q_proj_re[v294][v295] = (float)0.000000;	// L426
    }
  }
  float k_proj_re[1][1536];	// L427
  for (int v297 = 0; v297 < 1; v297++) {	// L428
    for (int v298 = 0; v298 < 1536; v298++) {	// L428
      k_proj_re[v297][v298] = (float)0.000000;	// L428
    }
  }
  float v_proj_re[1][1536];	// L429
  for (int v300 = 0; v300 < 1; v300++) {	// L430
    for (int v301 = 0; v301 < 1536; v301++) {	// L430
      v_proj_re[v300][v301] = (float)0.000000;	// L430
    }
  }
  ap_fixed<32, 12> v302 = v266;	// L431
  ap_fixed<32, 12> q_weights_scale_fixed;	// L432
  q_weights_scale_fixed = v302;	// L433
  ap_fixed<32, 12> v304 = v268;	// L434
  ap_fixed<32, 12> k_weights_scale_fixed;	// L435
  k_weights_scale_fixed = v304;	// L436
  ap_fixed<32, 12> v306 = v270;	// L437
  ap_fixed<32, 12> v_weights_scale_fixed;	// L438
  v_weights_scale_fixed = v306;	// L439
  ap_fixed<32, 12> v308 = v272;	// L440
  ap_fixed<32, 12> o_weights_scale_fixed;	// L441
  o_weights_scale_fixed = v308;	// L442
  int8_t quantized_hidden_states_copy[1][384][4];	// L443
  #pragma HLS array_partition variable=quantized_hidden_states_copy cyclic dim=2 factor=2

  for (int v311 = 0; v311 < 1; v311++) {	// L444
    for (int v312 = 0; v312 < 384; v312++) {	// L444
      for (int v313 = 0; v313 < 4; v313++) {	// L444
        quantized_hidden_states_copy[v311][v312][v313] = 0;	// L444
      }
    }
  }
  l_S_i_j_k_0_i10: for (int i10 = 0; i10 < 1; i10++) {	// L445
    l_j9: for (int j9 = 0; j9 < 384; j9++) {	// L446
      l_k9: for (int k9 = 0; k9 < 4; k9++) {	// L447
        int8_t v317 = quantized_hidden_states[i10][j9][k9];	// L448
        quantized_hidden_states_copy[i10][j9][k9] = v317;	// L449
      }
    }
  }
  ap_fixed<32, 12> v318 = q_weights_scale_fixed;	// L453
  linear_forward_no_mul(quantized_hidden_states_copy, scales, v265, v318, q_proj_re);	// L454
  ap_fixed<32, 12> v319 = k_weights_scale_fixed;	// L455
  linear_forward_no_mul(quantized_hidden_states_copy, scales, v267, v319, k_proj_re);	// L456
  ap_fixed<32, 12> v320 = v_weights_scale_fixed;	// L457
  linear_forward_no_mul(quantized_hidden_states_copy, scales, v269, v320, v_proj_re);	// L458
  float q_proj[16][1][96];	// L459
  for (int v322 = 0; v322 < 16; v322++) {	// L460
    for (int v323 = 0; v323 < 1; v323++) {	// L460
      for (int v324 = 0; v324 < 96; v324++) {	// L460
        q_proj[v322][v323][v324] = (float)0.000000;	// L460
      }
    }
  }
  float k_proj[16][1][96];	// L461
  for (int v326 = 0; v326 < 16; v326++) {	// L462
    for (int v327 = 0; v327 < 1; v327++) {	// L462
      for (int v328 = 0; v328 < 96; v328++) {	// L462
        k_proj[v326][v327][v328] = (float)0.000000;	// L462
      }
    }
  }
  float v_proj[16][1][96];	// L463
  for (int v330 = 0; v330 < 16; v330++) {	// L464
    for (int v331 = 0; v331 < 1; v331++) {	// L464
      for (int v332 = 0; v332 < 96; v332++) {	// L464
        v_proj[v330][v331][v332] = (float)0.000000;	// L464
      }
    }
  }
  reshape_2D_to_3D(q_proj_re, q_proj);	// L465
  reshape_2D_to_3D(k_proj_re, k_proj);	// L466
  reshape_2D_to_3D(v_proj_re, v_proj);	// L467
  float q_embed[16][1][96];	// L468
  for (int v334 = 0; v334 < 16; v334++) {	// L469
    for (int v335 = 0; v335 < 1; v335++) {	// L469
      for (int v336 = 0; v336 < 96; v336++) {	// L469
        q_embed[v334][v335][v336] = (float)0.000000;	// L469
      }
    }
  }
  float k_embed[16][1][96];	// L470
  for (int v338 = 0; v338 < 16; v338++) {	// L471
    for (int v339 = 0; v339 < 1; v339++) {	// L471
      for (int v340 = 0; v340 < 96; v340++) {	// L471
        k_embed[v338][v339][v340] = (float)0.000000;	// L471
      }
    }
  }
  apply_rotary_pos_emb(q_proj, k_proj, v273, v274, q_embed, k_embed, v279);	// L472
  float updated_k_cache[16][6][96];	// L473
  for (int v342 = 0; v342 < 16; v342++) {	// L474
    for (int v343 = 0; v343 < 6; v343++) {	// L474
      for (int v344 = 0; v344 < 96; v344++) {	// L474
        updated_k_cache[v342][v343][v344] = (float)0.000000;	// L474
      }
    }
  }
  float updated_v_cache[16][6][96];	// L475
  for (int v346 = 0; v346 < 16; v346++) {	// L476
    for (int v347 = 0; v347 < 6; v347++) {	// L476
      for (int v348 = 0; v348 < 96; v348++) {	// L476
        updated_v_cache[v346][v347][v348] = (float)0.000000;	// L476
      }
    }
  }
  cache_update(v277, k_embed, updated_k_cache);	// L477
  cache_update(v278, v_proj, updated_v_cache);	// L478
  float k_proj_transposed[16][96][6];	// L479
  for (int v350 = 0; v350 < 16; v350++) {	// L480
    for (int v351 = 0; v351 < 96; v351++) {	// L480
      for (int v352 = 0; v352 < 6; v352++) {	// L480
        k_proj_transposed[v350][v351][v352] = (float)0.000000;	// L480
      }
    }
  }
  transpose_last_two_dims(updated_k_cache, k_proj_transposed);	// L481
  float attn_weights[16][1][6];	// L482
  for (int v354 = 0; v354 < 16; v354++) {	// L483
    for (int v355 = 0; v355 < 1; v355++) {	// L483
      for (int v356 = 0; v356 < 6; v356++) {	// L483
        attn_weights[v354][v355][v356] = (float)0.000000;	// L483
      }
    }
  }
  GEMM_3D_float(q_embed, k_proj_transposed, attn_weights);	// L484
  float scale_factor;	// L489
  scale_factor = (float)9.797959;	// L490
  l_S_i_1_i11: for (int i11 = 0; i11 < 16; i11++) {	// L491
    l_S_j_1_j10: for (int j10 = 0; j10 < 1; j10++) {	// L492
      l_S_k_1_k10: for (int k10 = 0; k10 < 6; k10++) {	// L493
        float v361 = attn_weights[i11][j10][k10];	// L494
        float v362 = scale_factor;	// L495
        float v363 = v361 / v362;	// L496
        attn_weights[i11][j10][k10] = v363;	// L497
      }
    }
  }
  float causal_mask_matrix[1][1];	// L503
  for (int v365 = 0; v365 < 1; v365++) {	// L504
    for (int v366 = 0; v366 < 1; v366++) {	// L504
      causal_mask_matrix[v365][v366] = (float)-340282346638528859811704183484516925440.000000;	// L504
    }
  }
  causal_mask(causal_mask_matrix);	// L505
  l_S_h_4_h6: for (int h6 = 0; h6 < 16; h6++) {	// L506
    l_S_i_4_i12: for (int i12 = 0; i12 < 1; i12++) {	// L507
      l_S_j_4_j11: for (int j11 = 0; j11 < 1; j11++) {	// L508
        float v370 = causal_mask_matrix[i12][j11];	// L509
        float v371 = attn_weights[h6][i12][j11];	// L510
        float v372 = v371 + v370;	// L511
        attn_weights[h6][i12][j11] = v372;	// L512
      }
    }
  }
  float softmax_attn_weights[16][1][6];	// L516
  for (int v374 = 0; v374 < 16; v374++) {	// L517
    for (int v375 = 0; v375 < 1; v375++) {	// L517
      for (int v376 = 0; v376 < 6; v376++) {	// L517
        softmax_attn_weights[v374][v375][v376] = (float)0.000000;	// L517
      }
    }
  }
  softmax(attn_weights, softmax_attn_weights);	// L518
  float attn_output[16][1][96];	// L519
  for (int v378 = 0; v378 < 16; v378++) {	// L520
    for (int v379 = 0; v379 < 1; v379++) {	// L520
      for (int v380 = 0; v380 < 96; v380++) {	// L520
        attn_output[v378][v379][v380] = (float)0.000000;	// L520
      }
    }
  }
  GEMM_3D_float2(softmax_attn_weights, updated_v_cache, attn_output);	// L521
  float attn_output_2D[1][1536];	// L522
  for (int v382 = 0; v382 < 1; v382++) {	// L523
    for (int v383 = 0; v383 < 1536; v383++) {	// L523
      attn_output_2D[v382][v383] = (float)0.000000;	// L523
    }
  }
  l_S_s_7_s4: for (int s4 = 0; s4 < 1; s4++) {	// L524
    l_S_h_7_h7: for (int h7 = 0; h7 < 16; h7++) {	// L525
      l_S_d_7_d4: for (int d4 = 0; d4 < 96; d4++) {	// L526
        float v387 = attn_output[h7][s4][d4];	// L527
        attn_output_2D[s4][((h7 * 96) + d4)] = v387;	// L528
      }
    }
  }
  float rms_attn_output[1][1536];	// L532
  for (int v389 = 0; v389 < 1; v389++) {	// L533
    for (int v390 = 0; v390 < 1536; v390++) {	// L533
      rms_attn_output[v389][v390] = (float)0.000000;	// L533
    }
  }
  float v391 = RMS_NORM_EPS;	// L534
  rms_norm(attn_output_2D, v276, v391, rms_attn_output);	// L535
  int8_t quantized_final_output[1][384][4];	// L536
  for (int v393 = 0; v393 < 1; v393++) {	// L537
    for (int v394 = 0; v394 < 384; v394++) {	// L537
      for (int v395 = 0; v395 < 4; v395++) {	// L537
        quantized_final_output[v393][v394][v395] = 0;	// L537
      }
    }
  }
  ap_fixed<32, 12> v396 = 0;	// L538
  ap_fixed<32, 12> final_scales[1];	// L539
  for (int v398 = 0; v398 < 1; v398++) {	// L540
    final_scales[v398] = v396;	// L540
  }
  quantize_activation(rms_attn_output, 8, quantized_final_output, final_scales);	// L541
  int8_t quantized_final_output_copy[1][384][4];	// L542
  #pragma HLS array_partition variable=quantized_final_output_copy cyclic dim=2 factor=2

  for (int v400 = 0; v400 < 1; v400++) {	// L543
    for (int v401 = 0; v401 < 384; v401++) {	// L543
      for (int v402 = 0; v402 < 4; v402++) {	// L543
        quantized_final_output_copy[v400][v401][v402] = 0;	// L543
      }
    }
  }
  l_S_i_j_k_10_i13: for (int i13 = 0; i13 < 1; i13++) {	// L544
    l_j12: for (int j12 = 0; j12 < 384; j12++) {	// L545
      l_k11: for (int k11 = 0; k11 < 4; k11++) {	// L546
        int8_t v406 = quantized_final_output[i13][j12][k11];	// L547
        quantized_final_output_copy[i13][j12][k11] = v406;	// L548
      }
    }
  }
  for (int v407 = 0; v407 < 1; v407++) {	// L553
    for (int v408 = 0; v408 < 1536; v408++) {	// L553
      v280[v407][v408] = (float)0.000000;	// L553
    }
  }
  ap_fixed<32, 12> v409 = o_weights_scale_fixed;	// L554
  linear_forward_no_mul(quantized_final_output_copy, final_scales, v271, v409, v280);	// L555
}

