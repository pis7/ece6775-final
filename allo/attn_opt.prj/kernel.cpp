
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
  ap_fixed<32, 20> v0[1][1536],
  ap_fixed<32, 20> v1[1536],
  ap_fixed<32, 20> v2,
  ap_fixed<32, 20> v3[1][1536]
) {	// L2
  l_S_index_0_index: for (int index = 0; index < 1; index++) {	// L3
    ap_fixed<32, 20> variance;	// L4
    variance = (ap_fixed<32, 20>)0.000000;	// L6
    l_S_i_0_i: for (int i = 0; i < 1536; i++) {	// L7
      ap_fixed<32, 20> v7 = v0[index][i];	// L8
      ap_fixed<32, 20> v8 = v7 * v7;	// L9
      ap_fixed<32, 20> v9 = variance;	// L10
      ap_fixed<32, 20> v10 = v9 + v8;	// L11
      variance = v10;	// L12
    }
    ap_fixed<32, 20> v11 = variance;	// L16
    ap_fixed<32, 20> v12 = v11 / (ap_fixed<32, 20>)1536.000000;	// L17
    ap_fixed<32, 20> v13 = v12 + v2;	// L18
    ap_fixed<32, 20> v14 = hls::pow(v13, (ap_fixed<32, 20>)0.500000);	// L20
    ap_fixed<32, 20> v15 = (ap_fixed<32, 20>)1.000000 / v14;	// L22
    variance = v15;	// L23
    l_S_i_1_i1: for (int i1 = 0; i1 < 1536; i1++) {	// L24
      ap_fixed<32, 20> v17 = v0[index][i1];	// L25
      ap_fixed<32, 20> v18 = v1[i1];	// L26
      ap_fixed<32, 20> v19 = v17 * v18;	// L27
      ap_fixed<32, 20> v20 = variance;	// L28
      ap_fixed<32, 20> v21 = v19 * v20;	// L29
      v3[index][i1] = v21;	// L30
    }
  }
}

void quantize_activation(
  ap_fixed<32, 20> v22[1][1536],
  int32_t v23,
  int8_t v24[1][1536],
  ap_fixed<32, 20> v25[1]
) {	// L35
  ap_int<33> v26 = v23;	// L36
  ap_int<33> v27 = v26 - 1;	// L39
  int32_t v28 = v27;	// L40
  int32_t v29 = 1 << v28;	// L41
  int32_t v30 = 0 - v29;	// L43
  int32_t Qn;	// L44
  Qn = v30;	// L45
  ap_int<33> v32 = v29;	// L46
  ap_int<33> v33 = v32 - 1;	// L47
  int32_t v34 = v33;	// L48
  int32_t Qp;	// L49
  Qp = v34;	// L50
  l_S_i_0_i2: for (int i2 = 0; i2 < 1; i2++) {	// L51
    ap_fixed<32, 20> max_val;	// L53
    max_val = (ap_fixed<32, 20>)0.000000;	// L54
    l_S_j_0_j: for (int j = 0; j < 1536; j++) {	// L55
      ap_fixed<32, 20> v39 = v22[i2][j];	// L56
      bool v40 = v39 > (ap_fixed<32, 20>)0.000000;	// L57
      ap_fixed<32, 20> v41 = v39 * (ap_fixed<32, 20>)-1.000000;	// L60
      ap_fixed<32, 20> v42 = v40 ? (ap_fixed<32, 20>)v39 : (ap_fixed<32, 20>)v41;	// L61
      ap_fixed<32, 20> input_abs;	// L62
      input_abs = v42;	// L63
      ap_fixed<32, 20> v44 = input_abs;	// L64
      ap_fixed<32, 20> v45 = max_val;	// L65
      bool v46 = v45 < v44;	// L66
      if (v46) {	// L67
        ap_fixed<32, 20> v47 = input_abs;	// L68
        max_val = v47;	// L69
      }
    }
    ap_fixed<32, 20> v48 = max_val;	// L72
    ap_fixed<32, 20> v49 = max(v48, (ap_fixed<32, 20>)0.000010);	// L74
    ap_fixed<32, 20> max_v;	// L75
    max_v = v49;	// L76
    int32_t v51 = Qp;	// L77
    ap_fixed<32, 20> v52 = v51;	// L78
    ap_fixed<32, 20> v53 = max_v;	// L79
    ap_fixed<32, 20> v54 = v52 / v53;	// L80
    ap_fixed<32, 20> scale;	// L81
    scale = v54;	// L82
    ap_fixed<32, 20> v56 = scale;	// L83
    v25[i2] = v56;	// L84
    l_S_j_1_j1: for (int j1 = 0; j1 < 1536; j1++) {	// L85
      ap_fixed<32, 20> v58 = v22[i2][j1];	// L86
      ap_fixed<32, 20> v59 = scale;	// L87
      ap_fixed<32, 20> v60 = v58 * v59;	// L88
      bool v61 = v60 > (ap_fixed<32, 20>)0.000000;	// L89
      ap_fixed<32, 20> v62 = v60 + (ap_fixed<32, 20>)0.500000;	// L91
      ap_fixed<32, 20> v63 = v60 - (ap_fixed<32, 20>)0.500000;	// L92
      ap_fixed<32, 20> v64 = v61 ? (ap_fixed<32, 20>)v62 : (ap_fixed<32, 20>)v63;	// L93
      int32_t v65 = v64;	// L94
      int32_t quantized_value;	// L95
      quantized_value = v65;	// L96
      int32_t v67 = Qn;	// L97
      int32_t v68 = quantized_value;	// L98
      bool v69 = v68 < v67;	// L99
      int32_t v70 = Qp;	// L100
      bool v71 = v68 > v70;	// L101
      int32_t v72 = v71 ? (int32_t)v70 : (int32_t)v68;	// L102
      int32_t v73 = v69 ? (int32_t)v67 : (int32_t)v72;	// L103
      int8_t v74 = v73;	// L104
      int8_t quantized_value_clamped;	// L105
      quantized_value_clamped = v74;	// L106
      int8_t v76 = quantized_value_clamped;	// L107
      v24[i2][j1] = v76;	// L108
    }
  }
}

void linear_forward_no_mul(
  int8_t v77[1][1536],
  ap_fixed<32, 20> v78[1],
  uint8_t v79[384][1536],
  ap_fixed<32, 20> v80,
  ap_fixed<32, 20> v81[1][1536]
) {	// L113
  #pragma HLS array_partition variable=v77 cyclic factor=4 dim=2

  l_S_i_0_i3: for (int i3 = 0; i3 < 1; i3++) {	// L114
    l_S_j_0_j2: for (int j2 = 0; j2 < 1536; j2++) {	// L115
      ap_fixed<32, 20> local_acum;	// L118
      local_acum = (ap_fixed<32, 20>)0.000000;	// L119
      l_S_k_0_k: for (int k = 0; k < 384; k++) {	// L120
        #pragma HLS pipeline II=1
        int8_t v86 = v79[k][j2];	// L121
        int8_t packed_value;	// L122
        packed_value = v86;	// L123
        ap_fixed<32, 20> temp;	// L124
        temp = (ap_fixed<32, 20>)0.000000;	// L125
        l_S_l_0_l: for (int l = 0; l < 4; l++) {	// L126
          int64_t v90 = k;	// L129
          int64_t v91 = v90 * 4;	// L130
          ap_int<65> v92 = v91;	// L131
          ap_int<65> v93 = l;	// L132
          ap_int<65> v94 = v92 + v93;	// L133
          int32_t v95 = v94;	// L134
          int32_t col_index;	// L135
          col_index = v95;	// L136
          int32_t v97 = col_index;	// L138
          bool v98 = v97 < 1536;	// L139
          if (v98) {	// L140
            int64_t v99 = l;	// L143
            int64_t v100 = v99 * 2;	// L144
            int32_t v101 = v100;	// L145
            int32_t shift;	// L146
            shift = v101;	// L147
            int32_t v103 = shift;	// L148
            int8_t v104 = v103;	// L149
            int8_t v105 = packed_value;	// L150
            int8_t v106 = v105 >> v104;	// L151
            int32_t v107 = v106;	// L152
            int32_t v108 = v107 & 3;	// L154
            int8_t v109 = v108;	// L155
            int8_t value;	// L156
            value = v109;	// L157
            int8_t weight_value;	// L159
            weight_value = 0;	// L160
            int8_t v112 = value;	// L161
            int32_t v113 = v112;	// L162
            bool v114 = v113 == 1;	// L164
            if (v114) {	// L165
              weight_value = 1;	// L167
            } else {
              int8_t v115 = value;	// L169
              int32_t v116 = v115;	// L170
              bool v117 = v116 == 2;	// L171
              if (v117) {	// L172
                weight_value = -1;	// L175
              }
            }
            int32_t v118 = col_index;	// L178
            int v119 = v118;	// L179
            int8_t v120 = v77[i3][v119];	// L180
            int16_t v121 = v120;	// L181
            int8_t v122 = weight_value;	// L182
            int16_t v123 = v122;	// L183
            int16_t v124 = v121 * v123;	// L184
            ap_fixed<32, 20> v125 = v124;	// L185
            ap_fixed<32, 20> v126 = temp;	// L186
            ap_fixed<32, 20> v127 = v126 + v125;	// L187
            temp = v127;	// L188
          }
        }
        ap_fixed<32, 20> v128 = local_acum;	// L191
        ap_fixed<32, 20> v129 = temp;	// L192
        ap_fixed<32, 20> v130 = v128 + v129;	// L193
        local_acum = v130;	// L194
      }
      ap_fixed<32, 20> v131 = v78[i3];	// L196
      ap_fixed<32, 20> v132 = v131 * v80;	// L197
      ap_fixed<32, 20> v133 = local_acum;	// L198
      ap_fixed<32, 20> v134 = v133 / v132;	// L199
      v81[i3][j2] = v134;	// L200
    }
  }
}

void reshape_2D_to_3D(
  ap_fixed<32, 20> v135[1][1536],
  ap_fixed<32, 20> v136[16][1][96]
) {	// L205
  l_S_s_0_s: for (int s = 0; s < 1; s++) {	// L206
    l_S_h_0_h: for (int h = 0; h < 16; h++) {	// L207
      l_S_d_0_d: for (int d = 0; d < 96; d++) {	// L208
        ap_fixed<32, 20> v140 = v135[s][((h * 96) + d)];	// L209
        v136[h][s][d] = v140;	// L210
      }
    }
  }
}

void rotate_half(
  ap_fixed<32, 20> v141[16][1][96],
  ap_fixed<32, 20> v142[16][1][96]
) {	// L216
  l_S_h_0_h1: for (int h1 = 0; h1 < 16; h1++) {	// L217
    l_S_s_0_s1: for (int s1 = 0; s1 < 1; s1++) {	// L218
      l_S_d_0_d1: for (int d1 = 0; d1 < 48; d1++) {	// L219
        ap_fixed<32, 20> v146 = v141[h1][s1][(d1 + 48)];	// L223
        ap_fixed<32, 20> v147 = v146 * (ap_fixed<32, 20>)-1.000000;	// L225
        v142[h1][s1][d1] = v147;	// L226
        ap_fixed<32, 20> v148 = v141[h1][s1][d1];	// L227
        v142[h1][s1][(d1 + 48)] = v148;	// L228
      }
    }
  }
}

void apply_rotary_pos_emb(
  ap_fixed<32, 20> v149[16][1][96],
  ap_fixed<32, 20> v150[16][1][96],
  ap_fixed<32, 20> v151[10][96],
  ap_fixed<32, 20> v152[10][96],
  ap_fixed<32, 20> v153[16][1][96],
  ap_fixed<32, 20> v154[16][1][96],
  int32_t v155
) {	// L234
  ap_fixed<32, 20> rotated_q[16][1][96];	// L237
  for (int v157 = 0; v157 < 16; v157++) {	// L238
    for (int v158 = 0; v158 < 1; v158++) {	// L238
      for (int v159 = 0; v159 < 96; v159++) {	// L238
        rotated_q[v157][v158][v159] = (ap_fixed<32, 20>)0.000000;	// L238
      }
    }
  }
  ap_fixed<32, 20> rotated_k[16][1][96];	// L239
  for (int v161 = 0; v161 < 16; v161++) {	// L240
    for (int v162 = 0; v162 < 1; v162++) {	// L240
      for (int v163 = 0; v163 < 96; v163++) {	// L240
        rotated_k[v161][v162][v163] = (ap_fixed<32, 20>)0.000000;	// L240
      }
    }
  }
  rotate_half(v149, rotated_q);	// L241
  rotate_half(v150, rotated_k);	// L242
  l_S_h_0_h2: for (int h2 = 0; h2 < 16; h2++) {	// L243
    l_S_s_0_s2: for (int s2 = 0; s2 < 1; s2++) {	// L244
      l_S_d_0_d2: for (int d2 = 0; d2 < 96; d2++) {	// L245
        ap_fixed<32, 20> v167 = v149[h2][s2][d2];	// L246
        ap_fixed<32, 20> v168 = v151[5][d2];	// L247
        ap_fixed<32, 20> v169 = v167 * v168;	// L248
        ap_fixed<32, 20> v170 = rotated_q[h2][s2][d2];	// L249
        ap_fixed<32, 20> v171 = v152[5][d2];	// L250
        ap_fixed<32, 20> v172 = v170 * v171;	// L251
        ap_fixed<32, 20> v173 = v169 + v172;	// L252
        v153[h2][s2][d2] = v173;	// L253
        ap_fixed<32, 20> v174 = v150[h2][s2][d2];	// L254
        ap_fixed<32, 20> v175 = v151[5][d2];	// L255
        ap_fixed<32, 20> v176 = v174 * v175;	// L256
        ap_fixed<32, 20> v177 = rotated_k[h2][s2][d2];	// L257
        ap_fixed<32, 20> v178 = v152[5][d2];	// L258
        ap_fixed<32, 20> v179 = v177 * v178;	// L259
        ap_fixed<32, 20> v180 = v176 + v179;	// L260
        v154[h2][s2][d2] = v180;	// L261
      }
    }
  }
}

void cache_update(
  ap_fixed<32, 20> v181[16][5][96],
  ap_fixed<32, 20> v182[16][1][96],
  ap_fixed<32, 20> v183[16][6][96]
) {	// L267
  l_S_i_0_i4: for (int i4 = 0; i4 < 16; i4++) {	// L268
    l_S_j_0_j3: for (int j3 = 0; j3 < 6; j3++) {	// L269
      ap_int<33> v186 = j3;	// L270
      bool v187 = v186 != 5;	// L273
      if (v187) {	// L274
        l_S_k_0_k1: for (int k1 = 0; k1 < 96; k1++) {	// L275
          ap_fixed<32, 20> v189 = v181[i4][j3][k1];	// L276
          v183[i4][j3][k1] = v189;	// L277
        }
      } else {
        l_S_k_1_k2: for (int k2 = 0; k2 < 96; k2++) {	// L280
          ap_fixed<32, 20> v191 = v182[i4][0][k2];	// L281
          v183[i4][j3][k2] = v191;	// L282
        }
      }
    }
  }
}

void transpose_last_two_dims(
  ap_fixed<32, 20> v192[16][6][96],
  ap_fixed<32, 20> v193[16][96][6]
) {	// L289
  l_S_h_0_h3: for (int h3 = 0; h3 < 16; h3++) {	// L290
    l_S_s_0_s3: for (int s3 = 0; s3 < 6; s3++) {	// L291
      l_S_d_0_d3: for (int d3 = 0; d3 < 96; d3++) {	// L292
        ap_fixed<32, 20> v197 = v192[h3][s3][d3];	// L293
        v193[h3][d3][s3] = v197;	// L294
      }
    }
  }
}

void GEMM_3D_float(
  ap_fixed<32, 20> v198[16][1][96],
  ap_fixed<32, 20> v199[16][96][6],
  ap_fixed<32, 20> v200[16][1][6]
) {	// L300
  l_S_h_0_h4: for (int h4 = 0; h4 < 16; h4++) {	// L301
    l_S_i_0_i5: for (int i5 = 0; i5 < 1; i5++) {	// L302
      l_S_j_0_j4: for (int j4 = 0; j4 < 6; j4++) {	// L303
        l_S_k_0_k3: for (int k3 = 0; k3 < 96; k3++) {	// L304
          ap_fixed<32, 20> v205 = v198[h4][i5][k3];	// L305
          ap_fixed<32, 20> v206 = v199[h4][k3][j4];	// L306
          ap_fixed<32, 20> v207 = v205 * v206;	// L307
          ap_fixed<32, 20> v208 = v200[h4][i5][j4];	// L308
          ap_fixed<32, 20> v209 = v208 + v207;	// L309
          v200[h4][i5][j4] = v209;	// L310
        }
      }
    }
  }
}

void causal_mask(
  ap_fixed<32, 20> v210[1][1]
) {	// L317
  l_S_i_0_i6: for (int i6 = 0; i6 < 1; i6++) {	// L318
    l_S_j_0_j5: for (int j5 = 0; j5 < 1; j5++) {	// L319
      v210[i6][j5] = (ap_fixed<32, 20>)0.000000;	// L321
    }
  }
}

void softmax(
  ap_fixed<32, 20> v213[16][1][6],
  ap_fixed<32, 20> v214[16][1][6]
) {	// L326
  l_S_i_0_i7: for (int i7 = 0; i7 < 16; i7++) {	// L327
    l_S_j_0_j6: for (int j6 = 0; j6 < 1; j6++) {	// L328
      l_S_k_0_k4: for (int k4 = 0; k4 < 6; k4++) {	// L329
        ap_fixed<32, 20> v218 = v213[i7][j6][k4];	// L330
        v214[i7][j6][k4] = v218;	// L331
      }
    }
  }
  l_S_i_3_i8: for (int i8 = 0; i8 < 16; i8++) {	// L335
    l_S_j_3_j7: for (int j7 = 0; j7 < 1; j7++) {	// L336
      ap_fixed<32, 20> max_val1;	// L339
      max_val1 = (ap_fixed<32, 20>)0.000000;	// L340
      l_S_k_3_k5: for (int k5 = 0; k5 < 6; k5++) {	// L341
        ap_fixed<32, 20> v223 = v214[i8][j7][k5];	// L342
        ap_fixed<32, 20> v224 = max_val1;	// L343
        bool v225 = v223 > v224;	// L344
        if (v225) {	// L345
          ap_fixed<32, 20> v226 = v214[i8][j7][k5];	// L346
          max_val1 = v226;	// L347
        }
      }
      ap_fixed<32, 20> sum_exp;	// L350
      sum_exp = (ap_fixed<32, 20>)0.000000;	// L352
      l_S_k_4_k6: for (int k6 = 0; k6 < 6; k6++) {	// L353
        ap_fixed<32, 20> v229 = v214[i8][j7][k6];	// L354
        ap_fixed<32, 20> v230 = max_val1;	// L355
        ap_fixed<32, 20> v231 = v229 - v230;	// L356
        ap_fixed<32, 20> v232 = hls::pow((ap_fixed<32, 20>)2.718282, v231);	// L358
        v214[i8][j7][k6] = v232;	// L359
        ap_fixed<32, 20> v233 = v214[i8][j7][k6];	// L360
        ap_fixed<32, 20> v234 = sum_exp;	// L361
        ap_fixed<32, 20> v235 = v234 + v233;	// L362
        sum_exp = v235;	// L363
      }
      l_S_k_5_k7: for (int k7 = 0; k7 < 6; k7++) {	// L365
        ap_fixed<32, 20> v237 = v214[i8][j7][k7];	// L366
        ap_fixed<32, 20> v238 = sum_exp;	// L367
        ap_fixed<32, 20> v239 = v237 / v238;	// L368
        v214[i8][j7][k7] = v239;	// L369
      }
    }
  }
}

void GEMM_3D_float2(
  ap_fixed<32, 20> v240[16][1][6],
  ap_fixed<32, 20> v241[16][6][96],
  ap_fixed<32, 20> v242[16][1][96]
) {	// L375
  l_S_h_0_h5: for (int h5 = 0; h5 < 16; h5++) {	// L376
    l_S_i_0_i9: for (int i9 = 0; i9 < 1; i9++) {	// L377
      l_S_j_0_j8: for (int j8 = 0; j8 < 96; j8++) {	// L378
        l_S_k_0_k8: for (int k8 = 0; k8 < 6; k8++) {	// L379
          ap_fixed<32, 20> v247 = v240[h5][i9][k8];	// L380
          ap_fixed<32, 20> v248 = v241[h5][k8][j8];	// L381
          ap_fixed<32, 20> v249 = v247 * v248;	// L382
          ap_fixed<32, 20> v250 = v242[h5][i9][j8];	// L383
          ap_fixed<32, 20> v251 = v250 + v249;	// L384
          v242[h5][i9][j8] = v251;	// L385
        }
      }
    }
  }
}

void attention(
  ap_fixed<32, 20> v252[1][1536],
  uint8_t v253[384][1536],
  ap_fixed<32, 20> v254,
  uint8_t v255[384][1536],
  ap_fixed<32, 20> v256,
  uint8_t v257[384][1536],
  ap_fixed<32, 20> v258,
  uint8_t v259[384][1536],
  ap_fixed<32, 20> v260,
  ap_fixed<32, 20> v261[10][96],
  ap_fixed<32, 20> v262[10][96],
  ap_fixed<32, 20> v263[1536],
  ap_fixed<32, 20> v264[1536],
  ap_fixed<32, 20> v265[16][5][96],
  ap_fixed<32, 20> v266[16][5][96],
  int32_t v267,
  ap_fixed<32, 20> v268[1][1536]
) {	// L392
  ap_fixed<32, 20> RMS_NORM_EPS;	// L393
  RMS_NORM_EPS = (ap_fixed<32, 20>)0.000010;	// L395
  ap_fixed<32, 20> rms_hidden_states[1][1536];	// L398
  for (int v271 = 0; v271 < 1; v271++) {	// L399
    for (int v272 = 0; v272 < 1536; v272++) {	// L399
      rms_hidden_states[v271][v272] = (ap_fixed<32, 20>)0.000000;	// L399
    }
  }
  ap_fixed<32, 20> v273 = RMS_NORM_EPS;	// L400
  rms_norm(v252, v263, v273, rms_hidden_states);	// L401
  int8_t quantized_hidden_states[1][1536];	// L403
  for (int v275 = 0; v275 < 1; v275++) {	// L404
    for (int v276 = 0; v276 < 1536; v276++) {	// L404
      quantized_hidden_states[v275][v276] = 0;	// L404
    }
  }
  ap_fixed<32, 20> scales[1];	// L405
  for (int v278 = 0; v278 < 1; v278++) {	// L406
    scales[v278] = (ap_fixed<32, 20>)0.000000;	// L406
  }
  quantize_activation(rms_hidden_states, 8, quantized_hidden_states, scales);	// L408
  ap_fixed<32, 20> q_proj_re[1][1536];	// L409
  for (int v280 = 0; v280 < 1; v280++) {	// L410
    for (int v281 = 0; v281 < 1536; v281++) {	// L410
      q_proj_re[v280][v281] = (ap_fixed<32, 20>)0.000000;	// L410
    }
  }
  ap_fixed<32, 20> k_proj_re[1][1536];	// L411
  for (int v283 = 0; v283 < 1; v283++) {	// L412
    for (int v284 = 0; v284 < 1536; v284++) {	// L412
      k_proj_re[v283][v284] = (ap_fixed<32, 20>)0.000000;	// L412
    }
  }
  ap_fixed<32, 20> v_proj_re[1][1536];	// L413
  for (int v286 = 0; v286 < 1; v286++) {	// L414
    for (int v287 = 0; v287 < 1536; v287++) {	// L414
      v_proj_re[v286][v287] = (ap_fixed<32, 20>)0.000000;	// L414
    }
  }
  linear_forward_no_mul(quantized_hidden_states, scales, v253, v254, q_proj_re);	// L415
  linear_forward_no_mul(quantized_hidden_states, scales, v255, v256, k_proj_re);	// L416
  linear_forward_no_mul(quantized_hidden_states, scales, v257, v258, v_proj_re);	// L417
  ap_fixed<32, 20> q_proj[16][1][96];	// L418
  for (int v289 = 0; v289 < 16; v289++) {	// L419
    for (int v290 = 0; v290 < 1; v290++) {	// L419
      for (int v291 = 0; v291 < 96; v291++) {	// L419
        q_proj[v289][v290][v291] = (ap_fixed<32, 20>)0.000000;	// L419
      }
    }
  }
  ap_fixed<32, 20> k_proj[16][1][96];	// L420
  for (int v293 = 0; v293 < 16; v293++) {	// L421
    for (int v294 = 0; v294 < 1; v294++) {	// L421
      for (int v295 = 0; v295 < 96; v295++) {	// L421
        k_proj[v293][v294][v295] = (ap_fixed<32, 20>)0.000000;	// L421
      }
    }
  }
  ap_fixed<32, 20> v_proj[16][1][96];	// L422
  for (int v297 = 0; v297 < 16; v297++) {	// L423
    for (int v298 = 0; v298 < 1; v298++) {	// L423
      for (int v299 = 0; v299 < 96; v299++) {	// L423
        v_proj[v297][v298][v299] = (ap_fixed<32, 20>)0.000000;	// L423
      }
    }
  }
  reshape_2D_to_3D(q_proj_re, q_proj);	// L424
  reshape_2D_to_3D(k_proj_re, k_proj);	// L425
  reshape_2D_to_3D(v_proj_re, v_proj);	// L426
  ap_fixed<32, 20> q_embed[16][1][96];	// L427
  for (int v301 = 0; v301 < 16; v301++) {	// L428
    for (int v302 = 0; v302 < 1; v302++) {	// L428
      for (int v303 = 0; v303 < 96; v303++) {	// L428
        q_embed[v301][v302][v303] = (ap_fixed<32, 20>)0.000000;	// L428
      }
    }
  }
  ap_fixed<32, 20> k_embed[16][1][96];	// L429
  for (int v305 = 0; v305 < 16; v305++) {	// L430
    for (int v306 = 0; v306 < 1; v306++) {	// L430
      for (int v307 = 0; v307 < 96; v307++) {	// L430
        k_embed[v305][v306][v307] = (ap_fixed<32, 20>)0.000000;	// L430
      }
    }
  }
  apply_rotary_pos_emb(q_proj, k_proj, v261, v262, q_embed, k_embed, v267);	// L431
  ap_fixed<32, 20> updated_k_cache[16][6][96];	// L432
  for (int v309 = 0; v309 < 16; v309++) {	// L433
    for (int v310 = 0; v310 < 6; v310++) {	// L433
      for (int v311 = 0; v311 < 96; v311++) {	// L433
        updated_k_cache[v309][v310][v311] = (ap_fixed<32, 20>)0.000000;	// L433
      }
    }
  }
  ap_fixed<32, 20> updated_v_cache[16][6][96];	// L434
  for (int v313 = 0; v313 < 16; v313++) {	// L435
    for (int v314 = 0; v314 < 6; v314++) {	// L435
      for (int v315 = 0; v315 < 96; v315++) {	// L435
        updated_v_cache[v313][v314][v315] = (ap_fixed<32, 20>)0.000000;	// L435
      }
    }
  }
  cache_update(v265, k_embed, updated_k_cache);	// L436
  cache_update(v266, v_proj, updated_v_cache);	// L437
  ap_fixed<32, 20> k_proj_transposed[16][96][6];	// L438
  for (int v317 = 0; v317 < 16; v317++) {	// L439
    for (int v318 = 0; v318 < 96; v318++) {	// L439
      for (int v319 = 0; v319 < 6; v319++) {	// L439
        k_proj_transposed[v317][v318][v319] = (ap_fixed<32, 20>)0.000000;	// L439
      }
    }
  }
  transpose_last_two_dims(updated_k_cache, k_proj_transposed);	// L440
  ap_fixed<32, 20> attn_weights[16][1][6];	// L441
  for (int v321 = 0; v321 < 16; v321++) {	// L442
    for (int v322 = 0; v322 < 1; v322++) {	// L442
      for (int v323 = 0; v323 < 6; v323++) {	// L442
        attn_weights[v321][v322][v323] = (ap_fixed<32, 20>)0.000000;	// L442
      }
    }
  }
  GEMM_3D_float(q_embed, k_proj_transposed, attn_weights);	// L443
  ap_fixed<32, 20> scale_factor;	// L448
  scale_factor = (ap_fixed<32, 20>)9.797959;	// L449
  l_S_i_0_i10: for (int i10 = 0; i10 < 16; i10++) {	// L450
    l_S_j_0_j9: for (int j9 = 0; j9 < 1; j9++) {	// L451
      l_S_k_0_k9: for (int k9 = 0; k9 < 6; k9++) {	// L452
        ap_fixed<32, 20> v328 = attn_weights[i10][j9][k9];	// L453
        ap_fixed<32, 20> v329 = scale_factor;	// L454
        ap_fixed<32, 20> v330 = v328 / v329;	// L455
        attn_weights[i10][j9][k9] = v330;	// L456
      }
    }
  }
  ap_fixed<32, 20> causal_mask_matrix[1][1];	// L462
  for (int v332 = 0; v332 < 1; v332++) {	// L463
    for (int v333 = 0; v333 < 1; v333++) {	// L463
      causal_mask_matrix[v332][v333] = (ap_fixed<32, 20>)-340282346638528859811704183484516925440.000000;	// L463
    }
  }
  causal_mask(causal_mask_matrix);	// L464
  l_S_h_3_h6: for (int h6 = 0; h6 < 16; h6++) {	// L465
    l_S_i_3_i11: for (int i11 = 0; i11 < 1; i11++) {	// L466
      l_S_j_3_j10: for (int j10 = 0; j10 < 1; j10++) {	// L467
        ap_fixed<32, 20> v337 = causal_mask_matrix[i11][j10];	// L468
        ap_fixed<32, 20> v338 = attn_weights[h6][i11][j10];	// L469
        ap_fixed<32, 20> v339 = v338 + v337;	// L470
        attn_weights[h6][i11][j10] = v339;	// L471
      }
    }
  }
  ap_fixed<32, 20> softmax_attn_weights[16][1][6];	// L475
  for (int v341 = 0; v341 < 16; v341++) {	// L476
    for (int v342 = 0; v342 < 1; v342++) {	// L476
      for (int v343 = 0; v343 < 6; v343++) {	// L476
        softmax_attn_weights[v341][v342][v343] = (ap_fixed<32, 20>)0.000000;	// L476
      }
    }
  }
  softmax(attn_weights, softmax_attn_weights);	// L477
  ap_fixed<32, 20> attn_output[16][1][96];	// L478
  for (int v345 = 0; v345 < 16; v345++) {	// L479
    for (int v346 = 0; v346 < 1; v346++) {	// L479
      for (int v347 = 0; v347 < 96; v347++) {	// L479
        attn_output[v345][v346][v347] = (ap_fixed<32, 20>)0.000000;	// L479
      }
    }
  }
  GEMM_3D_float2(softmax_attn_weights, updated_v_cache, attn_output);	// L480
  ap_fixed<32, 20> attn_output_2D[1][1536];	// L481
  for (int v349 = 0; v349 < 1; v349++) {	// L482
    for (int v350 = 0; v350 < 1536; v350++) {	// L482
      attn_output_2D[v349][v350] = (ap_fixed<32, 20>)0.000000;	// L482
    }
  }
  l_S_s_6_s4: for (int s4 = 0; s4 < 1; s4++) {	// L483
    l_S_h_6_h7: for (int h7 = 0; h7 < 16; h7++) {	// L484
      l_S_d_6_d4: for (int d4 = 0; d4 < 96; d4++) {	// L485
        ap_fixed<32, 20> v354 = attn_output[h7][s4][d4];	// L486
        attn_output_2D[s4][((h7 * 96) + d4)] = v354;	// L487
      }
    }
  }
  ap_fixed<32, 20> rms_attn_output[1][1536];	// L491
  for (int v356 = 0; v356 < 1; v356++) {	// L492
    for (int v357 = 0; v357 < 1536; v357++) {	// L492
      rms_attn_output[v356][v357] = (ap_fixed<32, 20>)0.000000;	// L492
    }
  }
  ap_fixed<32, 20> v358 = RMS_NORM_EPS;	// L493
  rms_norm(attn_output_2D, v264, v358, rms_attn_output);	// L494
  int8_t quantized_final_output[1][1536];	// L495
  for (int v360 = 0; v360 < 1; v360++) {	// L496
    for (int v361 = 0; v361 < 1536; v361++) {	// L496
      quantized_final_output[v360][v361] = 0;	// L496
    }
  }
  ap_fixed<32, 20> final_scales[1];	// L497
  for (int v363 = 0; v363 < 1; v363++) {	// L498
    final_scales[v363] = (ap_fixed<32, 20>)0.000000;	// L498
  }
  quantize_activation(rms_attn_output, 8, quantized_final_output, final_scales);	// L499
  for (int v364 = 0; v364 < 1; v364++) {	// L501
    for (int v365 = 0; v365 < 1536; v365++) {	// L501
      v268[v364][v365] = (ap_fixed<32, 20>)0.000000;	// L501
    }
  }
  linear_forward_no_mul(quantized_final_output, final_scales, v259, v260, v268);	// L502
}

