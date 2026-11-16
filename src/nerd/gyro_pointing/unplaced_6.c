#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_87a350();
__int64 SdkRoutine_87a360();
__int64 SdkRoutine_87a370(__int64, __int64);
__int64 SdkRoutine_87a380();
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nerd_VibrationDecoder_DoGenerateChunk_plt();
float math_732b60(_QWORD*, _DWORD**);
float math_733a20(_QWORD*, float);
float math_733f80(_QWORD*, float);
__int64 nerd_gyro_pointing_6d1310();
__int64 nerd_gyro_pointing_6d14c0(void* this_, unsigned int a2, unsigned int a3,
                                  unsigned int a4, unsigned int a5,
                                  __int16* a6);
void nerd_gyro_pointing_72a940(__int64 a1, __int64 a2, float* a3, __int64 a4);

__int64 nerd_gyro_pointing_6d1310()
{
  return nerd_VibrationDecoder_DoGenerateChunk_plt();
}

__int64 nerd_gyro_pointing_6d14c0(void* this_, unsigned int a2, unsigned int a3,
                                  unsigned int a4, unsigned int a5, __int16* a6)
{
  return nerd_VibrationDecoder_DoGenerateChunk_plt();
}

void nerd_gyro_pointing_72a940(__int64 a1, __int64 a2, float* a3, __int64 a4)
{
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  float* v51;
  float v52;
  float* v53;
  __int64 v54;
  unsigned __int64 v55;
  char v56;
  float* v57;
  unsigned __int64 v58;
  float v59;
  __int64 v60;
  __int64 v61;
  float* v62;
  float* v63;
  unsigned __int64 v64;
  float v65;
  float v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  unsigned __int64 v91;
  float v92;
  float v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  float v96;
  float v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  float v100;
  float v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  float v113;
  float v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  float v125;
  bool v126;
  struct {
    _QWORD v128[10];
    int v129;
  } v128_;
  struct {
    _QWORD v130[10];
    int v131;
    int v132[441];
  } v130_;
  struct {
    _DWORD* v133[9];
    __int64 v134;
    int v135;
  } v133_;
  struct {
    __int64 v136;
    __int64 v137;
    __int64 v138;
    __int64 v139;
    __int64 v140;
    __int64 v141;
    __int64 v142;
    __int64 v143;
    __int64 v144;
    __int64 v145;
    int v146;
  } v136_;
  struct {
    float v147[441];
    _BYTE v148[1764];
    __int64 v149;
    char gap5664_[1756];
    float v150[441];
    _QWORD v151[3];
    _QWORD v152[3];
    __int64 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
    int v163;
  } v147_;

  v6 = *(float*)(a1 + 12) - a3[3];
  v7 = *(float*)a1 - *a3;
  v8 = *(float*)(a1 + 4) - a3[1];
  v9 = a3[10];
  v10 = a3[11];
  v11 = a3[12];
  v12 = a3[13];
  v13 = *(float*)(a1 + 16) - a3[4];
  v14 = *(float*)(a1 + 20) - a3[5];
  v15 = *(float*)(a1 + 24) - a3[6];
  v16 = *(float*)(a1 + 28) - a3[7];
  v17 = *(float*)(a1 + 32) - a3[8];
  v18 = *(float*)(a1 + 36) - a3[9];
  v19 = a3[14];
  v20 = a3[15];
  v21 = a3[16];
  v22 = a3[17];
  v23 = a3[18];
  v24 = a3[19];
  v25 = a3[20];
  *(float*)(a1 + 8) = *(float*)(a1 + 8) - a3[2];
  *(float*)(a1 + 12) = v6;
  *(float*)a1 = v7;
  *(float*)(a1 + 4) = v8;
  v26 = *(float*)(a1 + 56);
  v27 = *(float*)(a1 + 60);
  v28 = *(float*)(a1 + 40);
  v29 = *(float*)(a1 + 44);
  *(float*)(a1 + 16) = v13;
  *(float*)(a1 + 20) = v14;
  *(float*)(a1 + 24) = v15;
  *(float*)(a1 + 28) = v16;
  *(float*)(a1 + 32) = v17;
  *(float*)(a1 + 36) = v18;
  v30 = v26 - v19;
  v31 = v27 - v20;
  v32 = *(float*)(a1 + 64);
  v33 = *(float*)(a1 + 68);
  v34 = v28 - v9;
  v35 = v29 - v10;
  v36 = *(float*)(a1 + 48);
  v37 = *(float*)(a1 + 52);
  *(float*)(a1 + 40) = v34;
  *(float*)(a1 + 44) = v35;
  v38 = *(float*)(a1 + 80);
  *(float*)(a1 + 56) = v30;
  *(float*)(a1 + 60) = v31;
  v39 = v32 - v21;
  v40 = v33 - v22;
  v41 = *(float*)(a1 + 72);
  v42 = *(float*)(a1 + 76);
  *(float*)(a1 + 48) = v36 - v11;
  *(float*)(a1 + 52) = v37 - v12;
  *(float*)(a1 + 64) = v39;
  *(float*)(a1 + 68) = v40;
  *(float*)(a1 + 80) = v38 - v25;
  *(float*)(a1 + 72) = v41 - v23;
  *(float*)(a1 + 76) = v42 - v24;
  memset_plt((__int64)v147_.v150, 0, 0x6E4u);
  memcpy_plt((__int64)&v147_.v149, a4, 0x6E4u);
  SdkRoutine_87a350();
  if (v147_.v150[0] != 0x0.0p+0f && v147_.v150[22] != 0x0.0p+0f &&
      v147_.v150[44] != 0x0.0p+0f && v147_.v150[66] != 0x0.0p+0f &&
      v147_.v150[88] != 0x0.0p+0f && v147_.v150[110] != 0x0.0p+0f &&
      v147_.v150[132] != 0x0.0p+0f && v147_.v150[154] != 0x0.0p+0f &&
      v147_.v150[176] != 0x0.0p+0f && v147_.v150[198] != 0x0.0p+0f &&
      v147_.v150[220] != 0x0.0p+0f && v147_.v150[242] != 0x0.0p+0f &&
      v147_.v150[264] != 0x0.0p+0f && v147_.v150[286] != 0x0.0p+0f &&
      v147_.v150[308] != 0x0.0p+0f && v147_.v150[330] != 0x0.0p+0f &&
      v147_.v150[352] != 0x0.0p+0f && v147_.v150[374] != 0x0.0p+0f &&
      v147_.v150[396] != 0x0.0p+0f && v147_.v150[418] != 0x0.0p+0f &&
      v147_.v150[440] != 0x0.0p+0f) {
    memcpy_plt((__int64)v147_.v147, (__int64)v147_.v150, 0x6E4u);
    v43 = 7;
    v44 = 6;
    v45 = 1;
    v46 = 5;
    v47 = 0;
    v48 = 2;
    v49 = 4;
    v50 = 3;
    v51 = v147_.v147;
    do {
      v52 = v147_.v147[22 * v47];
      if (v52 == 0x0.0p+0f) {
        v147_.v147[22 * v47] = 0x0.0p+0f;
        if (v47 != 0) {
        LABEL_28:
          v53 = v147_.v147;
          v54 = 0;
          v55 = 0;
          v56 = v47;
          v57 = v51;
          while (1) {
            v59 = 0x0.0p+0f;
            v60 = v56 & 7;
            if ((((_BYTE)v47 - (_BYTE)v55) & 7) != 0) {
              v61 = v60;
              v62 = v57;
              v63 = v53;
              v64 = v55;
              do {
                v66 = 0x0.0p+0f;
                if (v64 >= v55) {
                  v66 = *v63;
                }
                v65 = *v62++;
                ++v64;
                v63 += 21;
                --v61;
                v59 = v59 + (float)(v65 * v66);
              } while (v61 != 0);
            }
            else {
              v64 = v55;
            }
            if (v55 - v47 <= 0xFFFFFFFFFFFFFFF8LL) {
              break;
            }
          LABEL_29:
            v58 = v55 + 21 * v47;
            ++v55;
            v53 += 22;
            ++v57;
            v56 = v60 + 7;
            v54 += 4;
            v147_.v147[v58] = -(float)(v59 * v147_.v147[22 * v47]);
            if (v55 == v47) {
              goto LABEL_23;
            }
          }
          v67 = v54 + 84 * v64;
          v68 = v43 + v64;
          v69 = v44 + v64;
          v70 = v45 + v64;
          v71 = v46 + v64;
          v72 = v48 + v64;
          v73 = v49 + v64;
          v74 = v50 + v64;
          while (2) {
            v89 = 0x0.0p+0f;
            v90 = 0x0.0p+0f;
            if (v64 >= v55) {
              v90 = *(float*)((char*)v147_.v147 + v67);
              v91 = v64 + 1;
              if (v91 >= v55) {
                goto LABEL_49;
              }
            LABEL_41:
              v92 = 0x0.0p+0f;
              v93 = 0x0.0p+0f;
              v94 = v91 + 1;
              if (v94 < v55) {
                goto LABEL_42;
              }
            LABEL_50:
              v93 = *(float*)((char*)&v147_.v147[42] + v67);
              v95 = v94 + 1;
              if (v95 >= v55) {
                goto LABEL_51;
              }
            LABEL_43:
              v96 = 0x0.0p+0f;
              v97 = 0x0.0p+0f;
              v98 = v95 + 1;
              if (v98 < v55) {
                goto LABEL_44;
              }
            LABEL_52:
              v97 = *(float*)((char*)&v147_.v147[84] + v67);
              v99 = v98 + 1;
              if (v99 >= v55) {
                goto LABEL_53;
              }
            LABEL_45:
              v100 = 0x0.0p+0f;
              v101 = 0x0.0p+0f;
              v102 = v99 + 1;
              if (v102 < v55) {
                goto LABEL_46;
              }
            LABEL_54:
              v101 = *(float*)((char*)&v147_.v147[126] + v67);
              v103 = v102 + 1;
              if (v103 >= v55) {
              LABEL_55:
                v100 = *(float*)((char*)&v147_.v147[147] + v67);
              }
            }
            else {
              v91 = v64 + 1;
              if (v91 < v55) {
                goto LABEL_41;
              }
            LABEL_49:
              v89 = *(float*)((char*)&v147_.v147[21] + v67);
              v92 = 0x0.0p+0f;
              v93 = 0x0.0p+0f;
              v94 = v91 + 1;
              if (v94 >= v55) {
                goto LABEL_50;
              }
            LABEL_42:
              v95 = v94 + 1;
              if (v95 < v55) {
                goto LABEL_43;
              }
            LABEL_51:
              v92 = *(float*)((char*)&v147_.v147[63] + v67);
              v96 = 0x0.0p+0f;
              v97 = 0x0.0p+0f;
              v98 = v95 + 1;
              if (v98 >= v55) {
                goto LABEL_52;
              }
            LABEL_44:
              v99 = v98 + 1;
              if (v99 < v55) {
                goto LABEL_45;
              }
            LABEL_53:
              v96 = *(float*)((char*)&v147_.v147[105] + v67);
              v100 = 0x0.0p+0f;
              v101 = 0x0.0p+0f;
              v102 = v99 + 1;
              if (v102 >= v55) {
                goto LABEL_54;
              }
            LABEL_46:
              v103 = v102 + 1;
              if (v103 >= v55) {
                goto LABEL_55;
              }
            }
            v67 += 672;
            v64 = v103 + 1;
            v75 = v59 + (float)(*(float*)((char*)&v136_.v145 + v73 * 4) * v90);
            v76 = v147_.v147[v70];
            v70 += 8;
            v77 = v75 + (float)(v76 * v89);
            v78 = v147_.v147[v72];
            v72 += 8;
            v79 = v77 + (float)(v78 * v93);
            v80 = v147_.v147[v74];
            v74 += 8;
            v81 = v79 + (float)(v80 * v92);
            v82 = v147_.v147[v73];
            v73 += 8;
            v83 = v81 + (float)(v82 * v97);
            v84 = v147_.v147[v71];
            v71 += 8;
            v85 = v83 + (float)(v84 * v96);
            v86 = v147_.v147[v69];
            v69 += 8;
            v87 = v85 + (float)(v86 * v101);
            v88 = v147_.v147[v68];
            v68 += 8;
            v59 = v87 + (float)(v88 * v100);
            if (v64 == v47) {
              goto LABEL_29;
            }
            continue;
          }
        }
      }
      else {
        v147_.v147[22 * v47] = 0x1.0000000000000p+0f / v52;
        if (v47 != 0) {
          goto LABEL_28;
        }
      }
    LABEL_23:
      ++v47;
      v51 += 21;
      v43 += 21;
      v44 += 21;
      v45 += 21;
      v46 += 21;
      v48 += 21;
      v49 += 21;
      v50 += 21;
    } while (v47 != 21);
    memcpy_plt((__int64)v147_.v148, (__int64)v147_.v147, 0x6E4u);
    SdkRoutine_87a360();
    v104 = v147_.v162;
    v105 = v147_.v163;
    *(_QWORD*)(a1 + 64) = v147_.v161;
    *(_QWORD*)(a1 + 72) = v104;
    v106 = v147_.v157;
    v107 = v147_.v158;
    *(_DWORD*)(a1 + 80) = v105;
    *(_QWORD*)(a1 + 32) = v106;
    *(_QWORD*)(a1 + 40) = v107;
    v108 = v147_.v160;
    *(_QWORD*)(a1 + 48) = v147_.v159;
    *(_QWORD*)(a1 + 56) = v108;
    v109 = v147_.v154;
    *(_QWORD*)a1 = v147_.v153;
    *(_QWORD*)(a1 + 8) = v109;
    v110 = v147_.v156;
    *(_QWORD*)(a1 + 16) = v147_.v155;
    *(_QWORD*)(a1 + 24) = v110;
    SdkRoutine_87a370((__int64)v147_.v148, a2);
    v136_.v146 = 0;
    v136_.v145 = 0;
    v136_.v144 = 0;
    v136_.v143 = 0;
    v136_.v142 = 0;
    v136_.v141 = 0;
    v136_.v140 = 0;
    v136_.v139 = 0;
    v136_.v138 = 0;
    v136_.v137 = 0;
    v136_.v136 = 0;
    v133_.v133[0] = (_DWORD*)a1;
    v147_.v153 = (__int64)&v136_.v136;
    v147_.v154 = 1;
    v147_.v155 = 0;
    math_732b60(&v147_.v153, v133_.v133);
    v133_.v135 = 0;
    v133_.v134 = 0;
    memset(v133_.v133, 0, sizeof(v133_.v133));
    memcpy_plt((__int64)v130_.v132, a2, 0x6E4u);
    SdkRoutine_87a380();
    v111 = v136_.v137;
    v112 = v136_.v136;
    v113 = 0x1.0000000000000p+0f;
    v114 = 0x0.0p+0f;
    v115 = v136_.v140;
    v116 = v136_.v138;
    v117 = v136_.v142;
    v118 = v136_.v144;
    v119 = v136_.v145;
    *(_QWORD*)a1 = v136_.v136;
    *(_QWORD*)(a1 + 16) = v116;
    *(_QWORD*)(a1 + 32) = v115;
    *(_QWORD*)(a1 + 48) = v117;
    *(_QWORD*)(a1 + 64) = v118;
    *(_QWORD*)(a1 + 72) = v119;
    v130_.v130[8] = v118;
    v130_.v130[9] = v119;
    *(_QWORD*)(a1 + 8) = v111;
    v120 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 24) = v136_.v139;
    v130_.v130[0] = v112;
    v130_.v130[1] = v120;
    *(_QWORD*)(a1 + 40) = v136_.v141;
    v121 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 56) = v136_.v143;
    v130_.v130[4] = v115;
    v130_.v130[5] = v121;
    v122 = *(_QWORD*)(a1 + 24);
    v130_.v130[2] = v116;
    v130_.v130[3] = v122;
    v123 = v133_.v134;
    *(_DWORD*)(a1 + 80) = v136_.v146;
    v130_.v131 = *(_DWORD*)(a1 + 80);
    v124 = *(_QWORD*)(a1 + 56);
    v130_.v130[6] = v117;
    v130_.v130[7] = v124;
    qmemcpy(v128_.v128, v133_.v133, 72);
    v128_.v128[9] = v123;
    v128_.v129 = v133_.v135;
    v147_.v153 = 0x3F8000003F800000LL;
    v147_.v154 = 0x3F8000003F800000LL;
    v147_.v155 = 0x3F8000003F800000LL;
    v147_.v156 = 0x3F8000003F800000LL;
    v147_.v157 = 0x3F8000003F800000LL;
    v147_.v158 = 0x3F8000003F800000LL;
    v147_.v159 = 0x3F8000003F800000LL;
    v147_.v160 = 0x3F8000003F800000LL;
    v147_.v161 = 0x3F8000003F800000LL;
    v147_.v162 = 0x3F8000003F800000LL;
    v147_.v152[2] = v130_.v130;
    v147_.v151[2] = v130_.v130;
    v147_.v163 = 1065353216;
    v147_.v152[0] = &v147_.v153;
    v147_.v152[1] = v128_.v128;
    v147_.v151[0] = &v147_.v153;
    v147_.v151[1] = v128_.v128;
    do {
      while (1) {
        v125 = (float)(v114 + v113) * 0x1.0000000000000p-1f;
        if (math_733a20(v147_.v151, v125) > 0x0.0p+0f) {
          break;
        }
        v126 = v113 == v125;
        v113 = (float)(v114 + v113) * 0x1.0000000000000p-1f;
        if (v126) {
          goto LABEL_63;
        }
      }
      v126 = v114 == v125;
      v114 = (float)(v114 + v113) * 0x1.0000000000000p-1f;
    } while (!v126);
  LABEL_63:
    math_733f80(v147_.v152, v125);
  }
}

#pragma GCC visibility pop
