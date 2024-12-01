
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
  int8_t v24[1][384][4],
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
    l_S_j_1_j1: for (int j1 = 0; j1 < 384; j1++) {	// L85
      l_S_l_1_l: for (int l = 0; l < 4; l++) {	// L86
        ap_fixed<32, 20> v59 = v22[i2][((j1 * 4) + l)];	// L87
        ap_fixed<32, 20> v60 = scale;	// L88
        ap_fixed<32, 20> v61 = v59 * v60;	// L89
        bool v62 = v61 > (ap_fixed<32, 20>)0.000000;	// L90
        ap_fixed<32, 20> v63 = v61 + (ap_fixed<32, 20>)0.500000;	// L92
        ap_fixed<32, 20> v64 = v61 - (ap_fixed<32, 20>)0.500000;	// L93
        ap_fixed<32, 20> v65 = v62 ? (ap_fixed<32, 20>)v63 : (ap_fixed<32, 20>)v64;	// L94
        int32_t v66 = v65;	// L95
        int32_t quantized_value;	// L96
        quantized_value = v66;	// L97
        int32_t v68 = Qn;	// L98
        int32_t v69 = quantized_value;	// L99
        bool v70 = v69 < v68;	// L100
        int32_t v71 = Qp;	// L101
        bool v72 = v69 > v71;	// L102
        int32_t v73 = v72 ? (int32_t)v71 : (int32_t)v69;	// L103
        int32_t v74 = v70 ? (int32_t)v68 : (int32_t)v73;	// L104
        int8_t v75 = v74;	// L105
        int8_t quantized_value_clamped;	// L106
        quantized_value_clamped = v75;	// L107
        int8_t v77 = quantized_value_clamped;	// L108
        v24[i2][j1][l] = v77;	// L109
      }
    }
  }
}

void linear_forward_no_mul(
  int8_t v78[1][384][4],
  ap_fixed<32, 20> v79[1],
  uint8_t v80[384][1536],
  ap_fixed<32, 20> v81,
  ap_fixed<32, 20> v82[1][1536]
) {	// L115
#pragma HLS ARRAY_PARTITION variable=v78 complete dim=3
#pragma HLS ARRAY_PARTITION variable=v78 cyclic dim=2 factor=24
#pragma HLS ARRAY_PARTITION variable=v80 cyclic dim=1 factor=24
  l_S_i_0_i3: for (int i3 = 0; i3 < 1; i3++) {	// L116
    l_S_j_0_j2: for (int j2 = 0; j2 < 1536; j2++) {	// L117
      ap_fixed<32, 20> local_acum;	// L120
      local_acum = (ap_fixed<32, 20>)0.000000;	// L121
      l_S_k0_0_k0: for (int k0 = 0; k0 < 16; k0++) {	// L122
      #pragma HLS pipeline II=1
        l_S_k1_0_k1: for (int k1 = 0; k1 < 24; k1++) {	// L123
        #pragma HLS unroll
          int64_t v88 = k0;	// L124
          int64_t v89 = v88 * 8;	// L127
          ap_int<65> v90 = v89;	// L128
          ap_int<65> v91 = k1;	// L129
          ap_int<65> v92 = v90 + v91;	// L130
          int v93 = v92;	// L131
          int k;	// L132
          k = v93;	// L133
          int v95 = k;	// L134
          int8_t v96 = v80[v95][j2];	// L135
          int8_t packed_value;	// L136
          packed_value = v96;	// L137
          ap_fixed<32, 20> temp;	// L138
          temp = (ap_fixed<32, 20>)0.000000;	// L139
          l_S_l_0_l1: for (int l1 = 0; l1 < 4; l1++) {	// L140
          #pragma HLS unroll
            int v100 = k;	// L143
            int64_t v101 = v100;	// L144
            int64_t v102 = v101 * 4;	// L145
            ap_int<65> v103 = l1;	// L146
            ap_int<65> v104 = v102;	// L147
            ap_int<65> v105 = v103 + v104;	// L148
            bool v106 = v105 < 1536;	// L151
            if (v106) {	// L152
              int64_t v107 = l1;	// L155
              int64_t v108 = v107 * 2;	// L156
              int8_t v109 = v108;	// L157
              int8_t v110 = packed_value;	// L158
              int8_t v111 = v110 >> v109;	// L159
              int32_t v112 = v111;	// L160
              int32_t v113 = v112 & 3;	// L162
              int8_t v114 = v113;	// L163
              int8_t value;	// L164
              value = v114;	// L165
              int8_t weight_value;	// L167
              weight_value = 0;	// L168
              int8_t v117 = value;	// L169
              int32_t v118 = v117;	// L170
              bool v119 = v118 == 1;	// L172
              if (v119) {	// L173
                weight_value = 1;	// L175
              } else {
                int8_t v120 = value;	// L177
                int32_t v121 = v120;	// L178
                bool v122 = v121 == 2;	// L179
                if (v122) {	// L180
                  weight_value = -1;	// L183
                }
              }
              int v123 = k;	// L186
              int8_t v124 = v78[i3][v123][l1];	// L187
              int16_t v125 = v124;	// L188
              int8_t v126 = weight_value;	// L189
              int16_t v127 = v126;	// L190
              int16_t v128 = v125 * v127;	// L191
              ap_fixed<32, 20> v129 = v128;	// L192
              ap_fixed<32, 20> v130 = temp;	// L193
              ap_fixed<32, 20> v131 = v130 + v129;	// L194
              temp = v131;	// L195
            }
          }
          ap_fixed<32, 20> v132 = local_acum;	// L198
          ap_fixed<32, 20> v133 = temp;	// L199
          ap_fixed<32, 20> v134 = v132 + v133;	// L200
          local_acum = v134;	// L201
        }
      }
      ap_fixed<32, 20> v135 = v79[i3];	// L204
      ap_fixed<32, 20> v136 = v135 * v81;	// L205
      ap_fixed<32, 20> v137 = local_acum;	// L206
      ap_fixed<32, 20> v138 = v137 / v136;	// L207
      v82[i3][j2] = v138;	// L208
    }
  }
}

void reshape_2D_to_3D(
  ap_fixed<32, 20> v139[1][1536],
  ap_fixed<32, 20> v140[16][1][96]
) {	// L213
  l_S_s_0_s: for (int s = 0; s < 1; s++) {	// L214
    l_S_h_0_h: for (int h = 0; h < 16; h++) {	// L215
      l_S_d_0_d: for (int d = 0; d < 96; d++) {	// L216
        ap_fixed<32, 20> v144 = v139[s][((h * 96) + d)];	// L217
        v140[h][s][d] = v144;	// L218
      }
    }
  }
}

void rotate_half(
  ap_fixed<32, 20> v145[16][1][96],
  ap_fixed<32, 20> v146[16][1][96]
) {	// L224
  l_S_h_0_h1: for (int h1 = 0; h1 < 16; h1++) {	// L225
    l_S_s_0_s1: for (int s1 = 0; s1 < 1; s1++) {	// L226
      l_S_d_0_d1: for (int d1 = 0; d1 < 48; d1++) {	// L227
        ap_fixed<32, 20> v150 = v145[h1][s1][(d1 + 48)];	// L231
        ap_fixed<32, 20> v151 = v150 * (ap_fixed<32, 20>)-1.000000;	// L233
        v146[h1][s1][d1] = v151;	// L234
        ap_fixed<32, 20> v152 = v145[h1][s1][d1];	// L235
        v146[h1][s1][(d1 + 48)] = v152;	// L236
      }
    }
  }
}

void apply_rotary_pos_emb(
  ap_fixed<32, 20> v153[16][1][96],
  ap_fixed<32, 20> v154[16][1][96],
  ap_fixed<32, 20> v155[10][96],
  ap_fixed<32, 20> v156[10][96],
  ap_fixed<32, 20> v157[16][1][96],
  ap_fixed<32, 20> v158[16][1][96],
  int32_t v159
) {	// L242
  ap_fixed<32, 20> rotated_q[16][1][96];	// L245
  for (int v161 = 0; v161 < 16; v161++) {	// L246
    for (int v162 = 0; v162 < 1; v162++) {	// L246
      for (int v163 = 0; v163 < 96; v163++) {	// L246
        rotated_q[v161][v162][v163] = (ap_fixed<32, 20>)0.000000;	// L246
      }
    }
  }
  ap_fixed<32, 20> rotated_k[16][1][96];	// L247
  for (int v165 = 0; v165 < 16; v165++) {	// L248
    for (int v166 = 0; v166 < 1; v166++) {	// L248
      for (int v167 = 0; v167 < 96; v167++) {	// L248
        rotated_k[v165][v166][v167] = (ap_fixed<32, 20>)0.000000;	// L248
      }
    }
  }
  rotate_half(v153, rotated_q);	// L249
  rotate_half(v154, rotated_k);	// L250
  l_S_h_0_h2: for (int h2 = 0; h2 < 16; h2++) {	// L251
    l_S_s_0_s2: for (int s2 = 0; s2 < 1; s2++) {	// L252
      l_S_d_0_d2: for (int d2 = 0; d2 < 96; d2++) {	// L253
        ap_fixed<32, 20> v171 = v153[h2][s2][d2];	// L254
        ap_fixed<32, 20> v172 = v155[5][d2];	// L255
        ap_fixed<32, 20> v173 = v171 * v172;	// L256
        ap_fixed<32, 20> v174 = rotated_q[h2][s2][d2];	// L257
        ap_fixed<32, 20> v175 = v156[5][d2];	// L258
        ap_fixed<32, 20> v176 = v174 * v175;	// L259
        ap_fixed<32, 20> v177 = v173 + v176;	// L260
        v157[h2][s2][d2] = v177;	// L261
        ap_fixed<32, 20> v178 = v154[h2][s2][d2];	// L262
        ap_fixed<32, 20> v179 = v155[5][d2];	// L263
        ap_fixed<32, 20> v180 = v178 * v179;	// L264
        ap_fixed<32, 20> v181 = rotated_k[h2][s2][d2];	// L265
        ap_fixed<32, 20> v182 = v156[5][d2];	// L266
        ap_fixed<32, 20> v183 = v181 * v182;	// L267
        ap_fixed<32, 20> v184 = v180 + v183;	// L268
        v158[h2][s2][d2] = v184;	// L269
      }
    }
  }
}

void cache_update(
  ap_fixed<32, 20> v185[16][5][96],
  ap_fixed<32, 20> v186[16][1][96],
  ap_fixed<32, 20> v187[16][6][96]
) {	// L275
  l_S_i_0_i4: for (int i4 = 0; i4 < 16; i4++) {	// L276
    l_S_j_0_j3: for (int j3 = 0; j3 < 6; j3++) {	// L277
      ap_int<33> v190 = j3;	// L278
      bool v191 = v190 != 5;	// L281
      if (v191) {	// L282
        l_S_k_0_k1: for (int k1 = 0; k1 < 96; k1++) {	// L283
          ap_fixed<32, 20> v193 = v185[i4][j3][k1];	// L284
          v187[i4][j3][k1] = v193;	// L285
        }
      } else {
        l_S_k_1_k2: for (int k2 = 0; k2 < 96; k2++) {	// L288
          ap_fixed<32, 20> v195 = v186[i4][0][k2];	// L289
          v187[i4][j3][k2] = v195;	// L290
        }
      }
    }
  }
}

void transpose_last_two_dims(
  ap_fixed<32, 20> v196[16][6][96],
  ap_fixed<32, 20> v197[16][96][6]
) {	// L297
  l_S_h_0_h3: for (int h3 = 0; h3 < 16; h3++) {	// L298
    l_S_s_0_s3: for (int s3 = 0; s3 < 6; s3++) {	// L299
      l_S_d_0_d3: for (int d3 = 0; d3 < 96; d3++) {	// L300
        ap_fixed<32, 20> v201 = v196[h3][s3][d3];	// L301
        v197[h3][d3][s3] = v201;	// L302
      }
    }
  }
}

void GEMM_3D_float(
  ap_fixed<32, 20> v202[16][1][96],
  ap_fixed<32, 20> v203[16][96][6],
  ap_fixed<32, 20> v204[16][1][6]
) {	// L308
  l_S_h_0_h4: for (int h4 = 0; h4 < 16; h4++) {	// L309
    l_S_i_0_i5: for (int i5 = 0; i5 < 1; i5++) {	// L310
      l_S_j_0_j4: for (int j4 = 0; j4 < 6; j4++) {	// L311
        l_S_k_0_k3: for (int k3 = 0; k3 < 96; k3++) {	// L312
          ap_fixed<32, 20> v209 = v202[h4][i5][k3];	// L313
          ap_fixed<32, 20> v210 = v203[h4][k3][j4];	// L314
          ap_fixed<32, 20> v211 = v209 * v210;	// L315
          ap_fixed<32, 20> v212 = v204[h4][i5][j4];	// L316
          ap_fixed<32, 20> v213 = v212 + v211;	// L317
          v204[h4][i5][j4] = v213;	// L318
        }
      }
    }
  }
}

void causal_mask(
  ap_fixed<32, 20> v214[1][1]
) {	// L325
  l_S_i_0_i6: for (int i6 = 0; i6 < 1; i6++) {	// L326
    l_S_j_0_j5: for (int j5 = 0; j5 < 1; j5++) {	// L327
      v214[i6][j5] = (ap_fixed<32, 20>)0.000000;	// L329
    }
  }
}

void softmax(
  ap_fixed<32, 20> v217[16][1][6],
  ap_fixed<32, 20> v218[16][1][6]
) {	// L334
  l_S_i_0_i7: for (int i7 = 0; i7 < 16; i7++) {	// L335
    l_S_j_0_j6: for (int j6 = 0; j6 < 1; j6++) {	// L336
      l_S_k_0_k4: for (int k4 = 0; k4 < 6; k4++) {	// L337
        ap_fixed<32, 20> v222 = v217[i7][j6][k4];	// L338
        v218[i7][j6][k4] = v222;	// L339
      }
    }
  }
  l_S_i_3_i8: for (int i8 = 0; i8 < 16; i8++) {	// L343
    l_S_j_3_j7: for (int j7 = 0; j7 < 1; j7++) {	// L344
      ap_fixed<32, 20> max_val1;	// L347
      max_val1 = (ap_fixed<32, 20>)0.000000;	// L348
      l_S_k_3_k5: for (int k5 = 0; k5 < 6; k5++) {	// L349
        ap_fixed<32, 20> v227 = v218[i8][j7][k5];	// L350
        ap_fixed<32, 20> v228 = max_val1;	// L351
        bool v229 = v227 > v228;	// L352
        if (v229) {	// L353
          ap_fixed<32, 20> v230 = v218[i8][j7][k5];	// L354
          max_val1 = v230;	// L355
        }
      }
      ap_fixed<32, 20> sum_exp;	// L358
      sum_exp = (ap_fixed<32, 20>)0.000000;	// L360
      l_S_k_4_k6: for (int k6 = 0; k6 < 6; k6++) {	// L361
        ap_fixed<32, 20> v233 = v218[i8][j7][k6];	// L362
        ap_fixed<32, 20> v234 = max_val1;	// L363
        ap_fixed<32, 20> v235 = v233 - v234;	// L364
        ap_fixed<32, 20> v236 = hls::pow((ap_fixed<32, 20>)2.718282, v235);	// L366
        v218[i8][j7][k6] = v236;	// L367
        ap_fixed<32, 20> v237 = v218[i8][j7][k6];	// L368
        ap_fixed<32, 20> v238 = sum_exp;	// L369
        ap_fixed<32, 20> v239 = v238 + v237;	// L370
        sum_exp = v239;	// L371
      }
      l_S_k_5_k7: for (int k7 = 0; k7 < 6; k7++) {	// L373
        ap_fixed<32, 20> v241 = v218[i8][j7][k7];	// L374
        ap_fixed<32, 20> v242 = sum_exp;	// L375
        ap_fixed<32, 20> v243 = v241 / v242;	// L376
        v218[i8][j7][k7] = v243;	// L377
      }
    }
  }
}

void GEMM_3D_float2(
  ap_fixed<32, 20> v244[16][1][6],
  ap_fixed<32, 20> v245[16][6][96],
  ap_fixed<32, 20> v246[16][1][96]
) {	// L383
  l_S_h_0_h5: for (int h5 = 0; h5 < 16; h5++) {	// L384
    l_S_i_0_i9: for (int i9 = 0; i9 < 1; i9++) {	// L385
      l_S_j_0_j8: for (int j8 = 0; j8 < 96; j8++) {	// L386
        l_S_k_0_k8: for (int k8 = 0; k8 < 6; k8++) {	// L387
          ap_fixed<32, 20> v251 = v244[h5][i9][k8];	// L388
          ap_fixed<32, 20> v252 = v245[h5][k8][j8];	// L389
          ap_fixed<32, 20> v253 = v251 * v252;	// L390
          ap_fixed<32, 20> v254 = v246[h5][i9][j8];	// L391
          ap_fixed<32, 20> v255 = v254 + v253;	// L392
          v246[h5][i9][j8] = v255;	// L393
        }
      }
    }
  }
}

void attention(
  ap_fixed<32, 20> v256[1][1536],
  uint8_t v257[384][1536],
  ap_fixed<32, 20> v258,
  uint8_t v259[384][1536],
  ap_fixed<32, 20> v260,
  uint8_t v261[384][1536],
  ap_fixed<32, 20> v262,
  uint8_t v263[384][1536],
  ap_fixed<32, 20> v264,
  ap_fixed<32, 20> v265[10][96],
  ap_fixed<32, 20> v266[10][96],
  ap_fixed<32, 20> v267[1536],
  ap_fixed<32, 20> v268[1536],
  ap_fixed<32, 20> v269[16][5][96],
  ap_fixed<32, 20> v270[16][5][96],
  int32_t v271,
  ap_fixed<32, 20> v272[1][1536]
) {	// L400
  ap_fixed<32, 20> RMS_NORM_EPS;	// L401
  RMS_NORM_EPS = (ap_fixed<32, 20>)0.000010;	// L403
  ap_fixed<32, 20> rms_hidden_states[1][1536];	// L406
  for (int v275 = 0; v275 < 1; v275++) {	// L407
    for (int v276 = 0; v276 < 1536; v276++) {	// L407
      rms_hidden_states[v275][v276] = (ap_fixed<32, 20>)0.000000;	// L407
    }
  }
  ap_fixed<32, 20> v277 = RMS_NORM_EPS;	// L408
  rms_norm(v256, v267, v277, rms_hidden_states);	// L409
  int8_t quantized_hidden_states[1][384][4];	// L411
  for (int v279 = 0; v279 < 1; v279++) {	// L412
    for (int v280 = 0; v280 < 384; v280++) {	// L412
      for (int v281 = 0; v281 < 4; v281++) {	// L412
        quantized_hidden_states[v279][v280][v281] = 0;	// L412
      }
    }
  }
  ap_fixed<32, 20> scales[1];	// L413
  for (int v283 = 0; v283 < 1; v283++) {	// L414
    scales[v283] = (ap_fixed<32, 20>)0.000000;	// L414
  }
  quantize_activation(rms_hidden_states, 8, quantized_hidden_states, scales);	// L416
  ap_fixed<32, 20> q_proj_re[1][1536];	// L417
  for (int v285 = 0; v285 < 1; v285++) {	// L418
    for (int v286 = 0; v286 < 1536; v286++) {	// L418
      q_proj_re[v285][v286] = (ap_fixed<32, 20>)0.000000;	// L418
    }
  }
  ap_fixed<32, 20> k_proj_re[1][1536];	// L419
  for (int v288 = 0; v288 < 1; v288++) {	// L420
    for (int v289 = 0; v289 < 1536; v289++) {	// L420
      k_proj_re[v288][v289] = (ap_fixed<32, 20>)0.000000;	// L420
    }
  }
  ap_fixed<32, 20> v_proj_re[1][1536];	// L421
  for (int v291 = 0; v291 < 1; v291++) {	// L422
    for (int v292 = 0; v292 < 1536; v292++) {	// L422
      v_proj_re[v291][v292] = (ap_fixed<32, 20>)0.000000;	// L422
    }
  }
  linear_forward_no_mul(quantized_hidden_states, scales, v257, v258, q_proj_re);	// L423
  linear_forward_no_mul(quantized_hidden_states, scales, v259, v260, k_proj_re);	// L424
  linear_forward_no_mul(quantized_hidden_states, scales, v261, v262, v_proj_re);	// L425
  ap_fixed<32, 20> q_proj[16][1][96];	// L426
  for (int v294 = 0; v294 < 16; v294++) {	// L427
    for (int v295 = 0; v295 < 1; v295++) {	// L427
      for (int v296 = 0; v296 < 96; v296++) {	// L427
        q_proj[v294][v295][v296] = (ap_fixed<32, 20>)0.000000;	// L427
      }
    }
  }
  ap_fixed<32, 20> k_proj[16][1][96];	// L428
  for (int v298 = 0; v298 < 16; v298++) {	// L429
    for (int v299 = 0; v299 < 1; v299++) {	// L429
      for (int v300 = 0; v300 < 96; v300++) {	// L429
        k_proj[v298][v299][v300] = (ap_fixed<32, 20>)0.000000;	// L429
      }
    }
  }
  ap_fixed<32, 20> v_proj[16][1][96];	// L430
  for (int v302 = 0; v302 < 16; v302++) {	// L431
    for (int v303 = 0; v303 < 1; v303++) {	// L431
      for (int v304 = 0; v304 < 96; v304++) {	// L431
        v_proj[v302][v303][v304] = (ap_fixed<32, 20>)0.000000;	// L431
      }
    }
  }
  reshape_2D_to_3D(q_proj_re, q_proj);	// L432
  reshape_2D_to_3D(k_proj_re, k_proj);	// L433
  reshape_2D_to_3D(v_proj_re, v_proj);	// L434
  ap_fixed<32, 20> q_embed[16][1][96];	// L435
  for (int v306 = 0; v306 < 16; v306++) {	// L436
    for (int v307 = 0; v307 < 1; v307++) {	// L436
      for (int v308 = 0; v308 < 96; v308++) {	// L436
        q_embed[v306][v307][v308] = (ap_fixed<32, 20>)0.000000;	// L436
      }
    }
  }
  ap_fixed<32, 20> k_embed[16][1][96];	// L437
  for (int v310 = 0; v310 < 16; v310++) {	// L438
    for (int v311 = 0; v311 < 1; v311++) {	// L438
      for (int v312 = 0; v312 < 96; v312++) {	// L438
        k_embed[v310][v311][v312] = (ap_fixed<32, 20>)0.000000;	// L438
      }
    }
  }
  apply_rotary_pos_emb(q_proj, k_proj, v265, v266, q_embed, k_embed, v271);	// L439
  ap_fixed<32, 20> updated_k_cache[16][6][96];	// L440
  for (int v314 = 0; v314 < 16; v314++) {	// L441
    for (int v315 = 0; v315 < 6; v315++) {	// L441
      for (int v316 = 0; v316 < 96; v316++) {	// L441
        updated_k_cache[v314][v315][v316] = (ap_fixed<32, 20>)0.000000;	// L441
      }
    }
  }
  ap_fixed<32, 20> updated_v_cache[16][6][96];	// L442
  for (int v318 = 0; v318 < 16; v318++) {	// L443
    for (int v319 = 0; v319 < 6; v319++) {	// L443
      for (int v320 = 0; v320 < 96; v320++) {	// L443
        updated_v_cache[v318][v319][v320] = (ap_fixed<32, 20>)0.000000;	// L443
      }
    }
  }
  cache_update(v269, k_embed, updated_k_cache);	// L444
  cache_update(v270, v_proj, updated_v_cache);	// L445
  ap_fixed<32, 20> k_proj_transposed[16][96][6];	// L446
  for (int v322 = 0; v322 < 16; v322++) {	// L447
    for (int v323 = 0; v323 < 96; v323++) {	// L447
      for (int v324 = 0; v324 < 6; v324++) {	// L447
        k_proj_transposed[v322][v323][v324] = (ap_fixed<32, 20>)0.000000;	// L447
      }
    }
  }
  transpose_last_two_dims(updated_k_cache, k_proj_transposed);	// L448
  ap_fixed<32, 20> attn_weights[16][1][6];	// L449
  for (int v326 = 0; v326 < 16; v326++) {	// L450
    for (int v327 = 0; v327 < 1; v327++) {	// L450
      for (int v328 = 0; v328 < 6; v328++) {	// L450
        attn_weights[v326][v327][v328] = (ap_fixed<32, 20>)0.000000;	// L450
      }
    }
  }
  GEMM_3D_float(q_embed, k_proj_transposed, attn_weights);	// L451
  ap_fixed<32, 20> scale_factor;	// L456
  scale_factor = (ap_fixed<32, 20>)9.797959;	// L457
  l_S_i_0_i10: for (int i10 = 0; i10 < 16; i10++) {	// L458
    l_S_j_0_j9: for (int j9 = 0; j9 < 1; j9++) {	// L459
      l_S_k_0_k9: for (int k9 = 0; k9 < 6; k9++) {	// L460
        ap_fixed<32, 20> v333 = attn_weights[i10][j9][k9];	// L461
        ap_fixed<32, 20> v334 = scale_factor;	// L462
        ap_fixed<32, 20> v335 = v333 / v334;	// L463
        attn_weights[i10][j9][k9] = v335;	// L464
      }
    }
  }
  ap_fixed<32, 20> causal_mask_matrix[1][1];	// L470
  for (int v337 = 0; v337 < 1; v337++) {	// L471
    for (int v338 = 0; v338 < 1; v338++) {	// L471
      causal_mask_matrix[v337][v338] = (ap_fixed<32, 20>)-340282346638528859811704183484516925440.000000;	// L471
    }
  }
  causal_mask(causal_mask_matrix);	// L472
  l_S_h_3_h6: for (int h6 = 0; h6 < 16; h6++) {	// L473
    l_S_i_3_i11: for (int i11 = 0; i11 < 1; i11++) {	// L474
      l_S_j_3_j10: for (int j10 = 0; j10 < 1; j10++) {	// L475
        ap_fixed<32, 20> v342 = causal_mask_matrix[i11][j10];	// L476
        ap_fixed<32, 20> v343 = attn_weights[h6][i11][j10];	// L477
        ap_fixed<32, 20> v344 = v343 + v342;	// L478
        attn_weights[h6][i11][j10] = v344;	// L479
      }
    }
  }
  ap_fixed<32, 20> softmax_attn_weights[16][1][6];	// L483
  for (int v346 = 0; v346 < 16; v346++) {	// L484
    for (int v347 = 0; v347 < 1; v347++) {	// L484
      for (int v348 = 0; v348 < 6; v348++) {	// L484
        softmax_attn_weights[v346][v347][v348] = (ap_fixed<32, 20>)0.000000;	// L484
      }
    }
  }
  softmax(attn_weights, softmax_attn_weights);	// L485
  ap_fixed<32, 20> attn_output[16][1][96];	// L486
  for (int v350 = 0; v350 < 16; v350++) {	// L487
    for (int v351 = 0; v351 < 1; v351++) {	// L487
      for (int v352 = 0; v352 < 96; v352++) {	// L487
        attn_output[v350][v351][v352] = (ap_fixed<32, 20>)0.000000;	// L487
      }
    }
  }
  GEMM_3D_float2(softmax_attn_weights, updated_v_cache, attn_output);	// L488
  ap_fixed<32, 20> attn_output_2D[1][1536];	// L489
  for (int v354 = 0; v354 < 1; v354++) {	// L490
    for (int v355 = 0; v355 < 1536; v355++) {	// L490
      attn_output_2D[v354][v355] = (ap_fixed<32, 20>)0.000000;	// L490
    }
  }
  l_S_s_6_s4: for (int s4 = 0; s4 < 1; s4++) {	// L491
    l_S_h_6_h7: for (int h7 = 0; h7 < 16; h7++) {	// L492
      l_S_d_6_d4: for (int d4 = 0; d4 < 96; d4++) {	// L493
        ap_fixed<32, 20> v359 = attn_output[h7][s4][d4];	// L494
        attn_output_2D[s4][((h7 * 96) + d4)] = v359;	// L495
      }
    }
  }
  ap_fixed<32, 20> rms_attn_output[1][1536];	// L499
  for (int v361 = 0; v361 < 1; v361++) {	// L500
    for (int v362 = 0; v362 < 1536; v362++) {	// L500
      rms_attn_output[v361][v362] = (ap_fixed<32, 20>)0.000000;	// L500
    }
  }
  ap_fixed<32, 20> v363 = RMS_NORM_EPS;	// L501
  rms_norm(attn_output_2D, v268, v363, rms_attn_output);	// L502
  int8_t quantized_final_output[1][384][4];	// L503
  for (int v365 = 0; v365 < 1; v365++) {	// L504
    for (int v366 = 0; v366 < 384; v366++) {	// L504
      for (int v367 = 0; v367 < 4; v367++) {	// L504
        quantized_final_output[v365][v366][v367] = 0;	// L504
      }
    }
  }
  ap_fixed<32, 20> final_scales[1];	// L505
  for (int v369 = 0; v369 < 1; v369++) {	// L506
    final_scales[v369] = (ap_fixed<32, 20>)0.000000;	// L506
  }
  quantize_activation(rms_attn_output, 8, quantized_final_output, final_scales);	// L507
  for (int v370 = 0; v370 < 1; v370++) {	// L509
    for (int v371 = 0; v371 < 1536; v371++) {	// L509
      v272[v370][v371] = (ap_fixed<32, 20>)0.000000;	// L509
    }
  }
  linear_forward_no_mul(quantized_final_output, final_scales, v263, v264, v272);	// L510
}

