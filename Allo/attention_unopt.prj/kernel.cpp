
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
) {	// L3
  l_S_index_0_index: for (int index = 0; index < 1; index++) {	// L4
    float variance;	// L5
    variance = (float)0.000000;	// L7
    l_S_i_0_i: for (int i = 0; i < 1536; i++) {	// L8
      float v7 = v0[index][i];	// L9
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
  int8_t v24[1][1536],
  float v25[1]
) {	// L37
  ap_int<33> v26 = v23;	// L38
  ap_int<33> v27 = v26 - 1;	// L41
  int32_t v28 = v27;	// L42
  int32_t v29 = 1 << v28;	// L44
  int32_t v30 = 0 - v29;	// L46
  int32_t Qn;	// L47
  Qn = v30;	// L48
  ap_int<33> v32 = v29;	// L56
  ap_int<33> v33 = v32 - 1;	// L59
  int32_t v34 = v33;	// L60
  int32_t Qp;	// L61
  Qp = v34;	// L62
  l_S_i_0_i2: for (int i2 = 0; i2 < 1; i2++) {	// L63
    float max_val;	// L66
    max_val = (float)0.000000;	// L67
    l_S_j_0_j: for (int j = 0; j < 1536; j++) {	// L68
      float v39 = v22[i2][j];	// L69
      bool v40 = v39 > (float)0.000000;	// L72
      float v41 = v39 * (float)-1.000000;	// L79
      float v42 = v40 ? (float)v39 : (float)v41;	// L80
      float input_abs;	// L81
      input_abs = v42;	// L82
      float v44 = input_abs;	// L83
      float v45 = max_val;	// L84
      bool v46 = v45 < v44;	// L85
      if (v46) {	// L86
        float v47 = input_abs;	// L87
        max_val = v47;	// L88
      }
    }
    float v48 = max_val;	// L91
    float v49 = max(v48, (float)0.000010);	// L93
    float max_v;	// L94
    max_v = v49;	// L95
    int32_t v51 = Qp;	// L96
    float v52 = v51;	// L97
    float v53 = max_v;	// L98
    float v54 = v52 / v53;	// L99
    float scale;	// L100
    scale = v54;	// L101
    float v56 = scale;	// L102
    v25[i2] = v56;	// L103
    l_S_j_1_j1: for (int j1 = 0; j1 < 1536; j1++) {	// L104
      float v58 = v22[i2][j1];	// L105
      float v59 = scale;	// L106
      float v60 = v58 * v59;	// L107
      bool v61 = v60 > (float)0.000000;	// L110
      float v62 = v60 + (float)0.500000;	// L115
      float v63 = v60 - (float)0.500000;	// L120
      float v64 = v61 ? (float)v62 : (float)v63;	// L121
      int32_t v65 = v64;	// L122
      int32_t quantized_value;	// L123
      quantized_value = v65;	// L124
      int32_t v67 = Qn;	// L125
      int32_t v68 = quantized_value;	// L126
      bool v69 = v68 < v67;	// L127
      int32_t v70 = Qp;	// L128
      bool v71 = v68 > v70;	// L130
      int32_t v72 = v71 ? (int32_t)v70 : (int32_t)v68;	// L133
      int32_t v73 = v69 ? (int32_t)v67 : (int32_t)v72;	// L135
      int8_t v74 = v73;	// L136
      int8_t quantized_value_clamped;	// L137
      quantized_value_clamped = v74;	// L138
      int8_t v76 = quantized_value_clamped;	// L139
      v24[i2][j1] = v76;	// L140
    }
  }
}

void linear_forward_no_mul(
  int8_t v77[1][1536],
  float v78[1],
  uint8_t v79[384][1536],
  float v80,
  float v81[1][1536]
) {	// L145
  l_S_i_0_i3: for (int i3 = 0; i3 < 1; i3++) {	// L146
    l_S_j_0_j2: for (int j2 = 0; j2 < 1536; j2++) {	// L147
      l_S_k_0_k: for (int k = 0; k < 384; k++) {	// L148
        int8_t v85 = v79[k][j2];	// L149
        int8_t packed_value;	// L150
        packed_value = v85;	// L151
        l_S_l_0_l: for (int l = 0; l < 4; l++) {	// L152
          int64_t v88 = k;	// L155
          int64_t v89 = v88 * 4;	// L156
          ap_int<65> v90 = v89;	// L157
          ap_int<65> v91 = l;	// L158
          ap_int<65> v92 = v90 + v91;	// L159
          int32_t v93 = v92;	// L160
          int32_t col_index;	// L161
          col_index = v93;	// L162
          int32_t v95 = col_index;	// L164
          bool v96 = v95 < 1536;	// L165
          if (v96) {	// L166
            int64_t v97 = l;	// L169
            int64_t v98 = v97 * 2;	// L170
            int32_t v99 = v98;	// L171
            int32_t shift;	// L172
            shift = v99;	// L173
            int32_t v101 = shift;	// L174
            int8_t v102 = v101;	// L175
            int8_t v103 = packed_value;	// L176
            int8_t v104 = v103 >> v102;	// L177
            int32_t v105 = v104;	// L178
            int32_t v106 = v105 & 3;	// L180
            int8_t v107 = v106;	// L181
            int8_t value;	// L182
            value = v107;	// L183
            int8_t weight_value;	// L186
            weight_value = 0;	// L187
            int8_t v110 = value;	// L188
            int32_t v111 = v110;	// L189
            bool v112 = v111 == 0;	// L191
            if (v112) {	// L192
              weight_value = 0;	// L195
            } else {
              int8_t v113 = value;	// L197
              int32_t v114 = v113;	// L198
              bool v115 = v114 == 1;	// L200
              if (v115) {	// L201
                weight_value = 1;	// L204
              } else {
                int8_t v116 = value;	// L206
                int32_t v117 = v116;	// L207
                bool v118 = v117 == 2;	// L209
                if (v118) {	// L210
                  weight_value = -1;	// L215
                }
              }
            }
            int8_t v119 = weight_value;	// L219
            int32_t v120 = v119;	// L220
            bool v121 = v120 == 1;	// L222
            if (v121) {	// L223
              int32_t v122 = col_index;	// L224
              int v123 = v122;	// L225
              int8_t v124 = v77[i3][v123];	// L226
              float v125 = v81[i3][j2];	// L227
              float v126 = v124;	// L228
              float v127 = v125 + v126;	// L229
              v81[i3][j2] = v127;	// L230
            } else {
              int8_t v128 = weight_value;	// L235
              int32_t v129 = v128;	// L236
              bool v130 = v129 == -1;	// L237
              if (v130) {	// L238
                int32_t v131 = col_index;	// L239
                int v132 = v131;	// L240
                int8_t v133 = v77[i3][v132];	// L241
                float v134 = v81[i3][j2];	// L242
                float v135 = v133;	// L243
                float v136 = v134 - v135;	// L244
                v81[i3][j2] = v136;	// L245
              }
            }
          }
        }
      }
      float v137 = v81[i3][j2];	// L251
      float v138 = v78[i3];	// L252
      float v139 = v138 * v80;	// L253
      float v140 = v137 / v139;	// L254
      v81[i3][j2] = v140;	// L255
    }
  }
}

void reshape_2D_to_3D(
  float v141[1][1536],
  float v142[16][1][96]
) {	// L260
  l_S_s_0_s: for (int s = 0; s < 1; s++) {	// L261
    l_S_h_0_h: for (int h = 0; h < 16; h++) {	// L262
      l_S_d_0_d: for (int d = 0; d < 96; d++) {	// L263
        float v146 = v141[s][((h * 96) + d)];	// L264
        v142[h][s][d] = v146;	// L265
      }
    }
  }
}

void rotate_half(
  float v147[16][1][96],
  float v148[16][1][96]
) {	// L271
  l_S_h_0_h1: for (int h1 = 0; h1 < 16; h1++) {	// L272
    l_S_s_0_s1: for (int s1 = 0; s1 < 1; s1++) {	// L273
      l_S_d_0_d1: for (int d1 = 0; d1 < 48; d1++) {	// L274
        float v152 = v147[h1][s1][(d1 + 48)];	// L278
        float v153 = v152 * (float)-1.000000;	// L280
        v148[h1][s1][d1] = v153;	// L281
        float v154 = v147[h1][s1][d1];	// L282
        v148[h1][s1][(d1 + 48)] = v154;	// L283
      }
    }
  }
}

void apply_rotary_pos_emb(
  float v155[16][1][96],
  float v156[16][1][96],
  float v157[10][96],
  float v158[10][96],
  float v159[16][1][96],
  float v160[16][1][96],
  int32_t v161
) {	// L289
  float rotated_q[16][1][96];	// L292
  for (int v163 = 0; v163 < 16; v163++) {	// L293
    for (int v164 = 0; v164 < 1; v164++) {	// L293
      for (int v165 = 0; v165 < 96; v165++) {	// L293
        rotated_q[v163][v164][v165] = (float)0.000000;	// L293
      }
    }
  }
  float rotated_k[16][1][96];	// L296
  for (int v167 = 0; v167 < 16; v167++) {	// L297
    for (int v168 = 0; v168 < 1; v168++) {	// L297
      for (int v169 = 0; v169 < 96; v169++) {	// L297
        rotated_k[v167][v168][v169] = (float)0.000000;	// L297
      }
    }
  }
  rotate_half(v155, rotated_q);	// L298
  rotate_half(v156, rotated_k);	// L299
  l_S_h_0_h2: for (int h2 = 0; h2 < 16; h2++) {	// L300
    l_S_s_0_s2: for (int s2 = 0; s2 < 1; s2++) {	// L301
      l_S_d_0_d2: for (int d2 = 0; d2 < 96; d2++) {	// L302
        float v173 = v155[h2][s2][d2];	// L303
        float v174 = v157[5][d2];	// L304
        float v175 = v173 * v174;	// L305
        float v176 = rotated_q[h2][s2][d2];	// L306
        float v177 = v158[5][d2];	// L307
        float v178 = v176 * v177;	// L308
        float v179 = v175 + v178;	// L309
        v159[h2][s2][d2] = v179;	// L310
        float v180 = v156[h2][s2][d2];	// L311
        float v181 = v157[5][d2];	// L312
        float v182 = v180 * v181;	// L313
        float v183 = rotated_k[h2][s2][d2];	// L314
        float v184 = v158[5][d2];	// L315
        float v185 = v183 * v184;	// L316
        float v186 = v182 + v185;	// L317
        v160[h2][s2][d2] = v186;	// L318
      }
    }
  }
}

void cache_update(
  float v187[16][5][96],
  float v188[16][1][96],
  float v189[16][6][96]
) {	// L324
  l_S_i_0_i4: for (int i4 = 0; i4 < 16; i4++) {	// L325
    l_S_j_0_j3: for (int j3 = 0; j3 < 6; j3++) {	// L326
      ap_int<33> v192 = j3;	// L327
      bool v193 = v192 != 5;	// L330
      if (v193) {	// L331
        l_S_k_0_k1: for (int k1 = 0; k1 < 96; k1++) {	// L332
          float v195 = v187[i4][j3][k1];	// L333
          v189[i4][j3][k1] = v195;	// L334
        }
      } else {
        l_S_k_1_k2: for (int k2 = 0; k2 < 96; k2++) {	// L337
          float v197 = v188[i4][0][k2];	// L338
          v189[i4][j3][k2] = v197;	// L339
        }
      }
    }
  }
}

void transpose_last_two_dims(
  float v198[16][6][96],
  float v199[16][96][6]
) {	// L346
  l_S_h_0_h3: for (int h3 = 0; h3 < 16; h3++) {	// L347
    l_S_s_0_s3: for (int s3 = 0; s3 < 6; s3++) {	// L348
      l_S_d_0_d3: for (int d3 = 0; d3 < 96; d3++) {	// L349
        float v203 = v198[h3][s3][d3];	// L350
        v199[h3][d3][s3] = v203;	// L351
      }
    }
  }
}

void GEMM_3D_float(
  float v204[16][1][96],
  float v205[16][96][6],
  float v206[16][1][6]
) {	// L357
  l_S_h_0_h4: for (int h4 = 0; h4 < 16; h4++) {	// L358
    l_S_i_0_i5: for (int i5 = 0; i5 < 1; i5++) {	// L359
      l_S_j_0_j4: for (int j4 = 0; j4 < 6; j4++) {	// L360
        l_S_k_0_k3: for (int k3 = 0; k3 < 96; k3++) {	// L361
          float v211 = v204[h4][i5][k3];	// L362
          float v212 = v205[h4][k3][j4];	// L363
          float v213 = v211 * v212;	// L364
          float v214 = v206[h4][i5][j4];	// L365
          float v215 = v214 + v213;	// L366
          v206[h4][i5][j4] = v215;	// L367
        }
      }
    }
  }
}

void causal_mask(
  float v216[1][1]
) {	// L374
  l_S_i_0_i6: for (int i6 = 0; i6 < 1; i6++) {	// L375
    l_S_j_0_j5: for (int j5 = 0; j5 < 1; j5++) {	// L376
      v216[i6][j5] = (float)0.000000;	// L378
    }
  }
}

void softmax(
  float v219[16][1][6],
  float v220[16][1][6]
) {	// L383
  l_S_i_0_i7: for (int i7 = 0; i7 < 16; i7++) {	// L384
    l_S_j_0_j6: for (int j6 = 0; j6 < 1; j6++) {	// L385
      l_S_k_0_k4: for (int k4 = 0; k4 < 6; k4++) {	// L386
        float v224 = v219[i7][j6][k4];	// L387
        v220[i7][j6][k4] = v224;	// L388
      }
    }
  }
  l_S_i_3_i8: for (int i8 = 0; i8 < 16; i8++) {	// L392
    l_S_j_3_j7: for (int j7 = 0; j7 < 1; j7++) {	// L393
      float max_val1;	// L396
      max_val1 = (float)0.000000;	// L397
      l_S_k_3_k5: for (int k5 = 0; k5 < 6; k5++) {	// L398
        float v229 = v220[i8][j7][k5];	// L399
        float v230 = max_val1;	// L400
        bool v231 = v229 > v230;	// L401
        if (v231) {	// L402
          float v232 = v220[i8][j7][k5];	// L403
          max_val1 = v232;	// L404
        }
      }
      float sum_exp;	// L407
      sum_exp = (float)0.000000;	// L409
      l_S_k_4_k6: for (int k6 = 0; k6 < 6; k6++) {	// L410
        float v235 = v220[i8][j7][k6];	// L411
        float v236 = max_val1;	// L412
        float v237 = v235 - v236;	// L413
        float v238 = pow((float)2.718282, v237);	// L415
        v220[i8][j7][k6] = v238;	// L416
        float v239 = v220[i8][j7][k6];	// L417
        float v240 = sum_exp;	// L418
        float v241 = v240 + v239;	// L419
        sum_exp = v241;	// L420
      }
      l_S_k_5_k7: for (int k7 = 0; k7 < 6; k7++) {	// L422
        float v243 = v220[i8][j7][k7];	// L423
        float v244 = sum_exp;	// L424
        float v245 = v243 / v244;	// L425
        v220[i8][j7][k7] = v245;	// L426
      }
    }
  }
}

void GEMM_3D_float2(
  float v246[16][1][6],
  float v247[16][6][96],
  float v248[16][1][96]
) {	// L432
  l_S_h_0_h5: for (int h5 = 0; h5 < 16; h5++) {	// L433
    l_S_i_0_i9: for (int i9 = 0; i9 < 1; i9++) {	// L434
      l_S_j_0_j8: for (int j8 = 0; j8 < 96; j8++) {	// L435
        l_S_k_0_k8: for (int k8 = 0; k8 < 6; k8++) {	// L436
          float v253 = v246[h5][i9][k8];	// L437
          float v254 = v247[h5][k8][j8];	// L438
          float v255 = v253 * v254;	// L439
          float v256 = v248[h5][i9][j8];	// L440
          float v257 = v256 + v255;	// L441
          v248[h5][i9][j8] = v257;	// L442
        }
      }
    }
  }
}

void attention(
  float v258[1][1536],
  uint8_t v259[384][1536],
  float v260,
  uint8_t v261[384][1536],
  float v262,
  uint8_t v263[384][1536],
  float v264,
  uint8_t v265[384][1536],
  float v266,
  float v267[10][96],
  float v268[10][96],
  float v269[1536],
  float v270[1536],
  float v271[16][5][96],
  float v272[16][5][96],
  int32_t v273,
  float v274[1][1536]
) {	// L449
  float RMS_NORM_EPS;	// L450
  RMS_NORM_EPS = (float)0.000010;	// L452
  float rms_hidden_states[1][1536];	// L455
  for (int v277 = 0; v277 < 1; v277++) {	// L456
    for (int v278 = 0; v278 < 1536; v278++) {	// L456
      rms_hidden_states[v277][v278] = (float)0.000000;	// L456
    }
  }
  float v279 = RMS_NORM_EPS;	// L457
  rms_norm(v258, v269, v279, rms_hidden_states);	// L458
  int8_t quantized_hidden_states[1][1536];	// L461
  for (int v281 = 0; v281 < 1; v281++) {	// L462
    for (int v282 = 0; v282 < 1536; v282++) {	// L462
      quantized_hidden_states[v281][v282] = 0;	// L462
    }
  }
  float scales[1];	// L465
  for (int v284 = 0; v284 < 1; v284++) {	// L466
    scales[v284] = (float)0.000000;	// L466
  }
  quantize_activation(rms_hidden_states, 8, quantized_hidden_states, scales);	// L468
  float q_proj_re[1][1536];	// L471
  for (int v286 = 0; v286 < 1; v286++) {	// L472
    for (int v287 = 0; v287 < 1536; v287++) {	// L472
      q_proj_re[v286][v287] = (float)0.000000;	// L472
    }
  }
  float k_proj_re[1][1536];	// L475
  for (int v289 = 0; v289 < 1; v289++) {	// L476
    for (int v290 = 0; v290 < 1536; v290++) {	// L476
      k_proj_re[v289][v290] = (float)0.000000;	// L476
    }
  }
  float v_proj_re[1][1536];	// L479
  for (int v292 = 0; v292 < 1; v292++) {	// L480
    for (int v293 = 0; v293 < 1536; v293++) {	// L480
      v_proj_re[v292][v293] = (float)0.000000;	// L480
    }
  }
  linear_forward_no_mul(quantized_hidden_states, scales, v259, v260, q_proj_re);	// L481
  linear_forward_no_mul(quantized_hidden_states, scales, v261, v262, k_proj_re);	// L482
  linear_forward_no_mul(quantized_hidden_states, scales, v263, v264, v_proj_re);	// L483
  float q_proj[16][1][96];	// L486
  for (int v295 = 0; v295 < 16; v295++) {	// L487
    for (int v296 = 0; v296 < 1; v296++) {	// L487
      for (int v297 = 0; v297 < 96; v297++) {	// L487
        q_proj[v295][v296][v297] = (float)0.000000;	// L487
      }
    }
  }
  float k_proj[16][1][96];	// L490
  for (int v299 = 0; v299 < 16; v299++) {	// L491
    for (int v300 = 0; v300 < 1; v300++) {	// L491
      for (int v301 = 0; v301 < 96; v301++) {	// L491
        k_proj[v299][v300][v301] = (float)0.000000;	// L491
      }
    }
  }
  float v_proj[16][1][96];	// L494
  for (int v303 = 0; v303 < 16; v303++) {	// L495
    for (int v304 = 0; v304 < 1; v304++) {	// L495
      for (int v305 = 0; v305 < 96; v305++) {	// L495
        v_proj[v303][v304][v305] = (float)0.000000;	// L495
      }
    }
  }
  reshape_2D_to_3D(q_proj_re, q_proj);	// L496
  reshape_2D_to_3D(k_proj_re, k_proj);	// L497
  reshape_2D_to_3D(v_proj_re, v_proj);	// L498
  float q_embed[16][1][96];	// L501
  for (int v307 = 0; v307 < 16; v307++) {	// L502
    for (int v308 = 0; v308 < 1; v308++) {	// L502
      for (int v309 = 0; v309 < 96; v309++) {	// L502
        q_embed[v307][v308][v309] = (float)0.000000;	// L502
      }
    }
  }
  float k_embed[16][1][96];	// L505
  for (int v311 = 0; v311 < 16; v311++) {	// L506
    for (int v312 = 0; v312 < 1; v312++) {	// L506
      for (int v313 = 0; v313 < 96; v313++) {	// L506
        k_embed[v311][v312][v313] = (float)0.000000;	// L506
      }
    }
  }
  apply_rotary_pos_emb(q_proj, k_proj, v267, v268, q_embed, k_embed, v273);	// L507
  float updated_k_cache[16][6][96];	// L510
  for (int v315 = 0; v315 < 16; v315++) {	// L511
    for (int v316 = 0; v316 < 6; v316++) {	// L511
      for (int v317 = 0; v317 < 96; v317++) {	// L511
        updated_k_cache[v315][v316][v317] = (float)0.000000;	// L511
      }
    }
  }
  float updated_v_cache[16][6][96];	// L514
  for (int v319 = 0; v319 < 16; v319++) {	// L515
    for (int v320 = 0; v320 < 6; v320++) {	// L515
      for (int v321 = 0; v321 < 96; v321++) {	// L515
        updated_v_cache[v319][v320][v321] = (float)0.000000;	// L515
      }
    }
  }
  cache_update(v271, k_embed, updated_k_cache);	// L516
  cache_update(v272, v_proj, updated_v_cache);	// L517
  float k_proj_transposed[16][96][6];	// L520
  for (int v323 = 0; v323 < 16; v323++) {	// L521
    for (int v324 = 0; v324 < 96; v324++) {	// L521
      for (int v325 = 0; v325 < 6; v325++) {	// L521
        k_proj_transposed[v323][v324][v325] = (float)0.000000;	// L521
      }
    }
  }
  transpose_last_two_dims(updated_k_cache, k_proj_transposed);	// L522
  float attn_weights[16][1][6];	// L525
  for (int v327 = 0; v327 < 16; v327++) {	// L526
    for (int v328 = 0; v328 < 1; v328++) {	// L526
      for (int v329 = 0; v329 < 6; v329++) {	// L526
        attn_weights[v327][v328][v329] = (float)0.000000;	// L526
      }
    }
  }
  GEMM_3D_float(q_embed, k_proj_transposed, attn_weights);	// L527
  float scale_factor;	// L532
  scale_factor = (float)9.797959;	// L533
  l_S_i_0_i10: for (int i10 = 0; i10 < 16; i10++) {	// L534
    l_S_j_0_j9: for (int j9 = 0; j9 < 1; j9++) {	// L535
      l_S_k_0_k9: for (int k9 = 0; k9 < 6; k9++) {	// L536
        float v334 = attn_weights[i10][j9][k9];	// L537
        float v335 = scale_factor;	// L538
        float v336 = v334 / v335;	// L539
        attn_weights[i10][j9][k9] = v336;	// L540
      }
    }
  }
  float causal_mask_matrix[1][1];	// L546
  for (int v338 = 0; v338 < 1; v338++) {	// L547
    for (int v339 = 0; v339 < 1; v339++) {	// L547
      causal_mask_matrix[v338][v339] = (float)-340282346638528859811704183484516925440.000000;	// L547
    }
  }
  causal_mask(causal_mask_matrix);	// L548
  l_S_h_3_h6: for (int h6 = 0; h6 < 16; h6++) {	// L549
    l_S_i_3_i11: for (int i11 = 0; i11 < 1; i11++) {	// L550
      l_S_j_3_j10: for (int j10 = 0; j10 < 1; j10++) {	// L551
        float v343 = causal_mask_matrix[i11][j10];	// L552
        float v344 = attn_weights[h6][i11][j10];	// L553
        float v345 = v344 + v343;	// L554
        attn_weights[h6][i11][j10] = v345;	// L555
      }
    }
  }
  float softmax_attn_weights[16][1][6];	// L561
  for (int v347 = 0; v347 < 16; v347++) {	// L562
    for (int v348 = 0; v348 < 1; v348++) {	// L562
      for (int v349 = 0; v349 < 6; v349++) {	// L562
        softmax_attn_weights[v347][v348][v349] = (float)0.000000;	// L562
      }
    }
  }
  softmax(attn_weights, softmax_attn_weights);	// L563
  float attn_output[16][1][96];	// L566
  for (int v351 = 0; v351 < 16; v351++) {	// L567
    for (int v352 = 0; v352 < 1; v352++) {	// L567
      for (int v353 = 0; v353 < 96; v353++) {	// L567
        attn_output[v351][v352][v353] = (float)0.000000;	// L567
      }
    }
  }
  GEMM_3D_float2(softmax_attn_weights, updated_v_cache, attn_output);	// L568
  float attn_output_2D[1][1536];	// L571
  for (int v355 = 0; v355 < 1; v355++) {	// L572
    for (int v356 = 0; v356 < 1536; v356++) {	// L572
      attn_output_2D[v355][v356] = (float)0.000000;	// L572
    }
  }
  l_S_s_6_s4: for (int s4 = 0; s4 < 1; s4++) {	// L573
    l_S_h_6_h7: for (int h7 = 0; h7 < 16; h7++) {	// L574
      l_S_d_6_d4: for (int d4 = 0; d4 < 96; d4++) {	// L575
        float v360 = attn_output[h7][s4][d4];	// L576
        attn_output_2D[s4][((h7 * 96) + d4)] = v360;	// L577
      }
    }
  }
  float rms_attn_output[1][1536];	// L583
  for (int v362 = 0; v362 < 1; v362++) {	// L584
    for (int v363 = 0; v363 < 1536; v363++) {	// L584
      rms_attn_output[v362][v363] = (float)0.000000;	// L584
    }
  }
  float v364 = RMS_NORM_EPS;	// L585
  rms_norm(attn_output_2D, v270, v364, rms_attn_output);	// L586
  int8_t quantized_final_output[1][1536];	// L589
  for (int v366 = 0; v366 < 1; v366++) {	// L590
    for (int v367 = 0; v367 < 1536; v367++) {	// L590
      quantized_final_output[v366][v367] = 0;	// L590
    }
  }
  float final_scales[1];	// L593
  for (int v369 = 0; v369 < 1; v369++) {	// L594
    final_scales[v369] = (float)0.000000;	// L594
  }
  quantize_activation(rms_attn_output, 8, quantized_final_output, final_scales);	// L596
  for (int v370 = 0; v370 < 1; v370++) {	// L600
    for (int v371 = 0; v371 < 1536; v371++) {	// L600
      v274[v370][v371] = (float)0.000000;	// L600
    }
  }
  linear_forward_no_mul(quantized_final_output, final_scales, v265, v266, v274);	// L601
}

