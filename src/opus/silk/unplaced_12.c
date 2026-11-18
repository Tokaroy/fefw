#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_silk_2f67c0(__int64 result, int, int);
__int64 silk_LPC_analysis_filter(__int64, __int64, __int16*, int, int);
__int64 silk_PLC_energy(__int64, __int64, __int64, __int64, __int64, int*, int,
                        int);
extern _UNKNOWN SdkData_c1d942;
extern _UNKNOWN SdkData_c1d946;
extern _UNKNOWN SdkData_c1d94e;
unsigned __int64 silk_LPC_inverse_pred_gain_neon(int16x8_t*, int);
__int64 opus_silk_2f4420(__int64 a1, int* a2, __int64 a3, int a4);

__int64 opus_silk_2f4420(__int64 a1, int* a2, __int64 a3, int a4)
{
  __int64 v4;
  int v5;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  __int64 v19;
  char* v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  int v29;
  __int16 v30;
  __int16 v31;
  __int16 v32;
  int v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  char v42;
  unsigned int v43;
  int v44;
  char v45;
  char v46;
  int v47;
  int v48;
  unsigned int v49;
  int v50;
  int v51;
  __int64 result;
  __int64 v53;
  int v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  __int16* v60;
  int v61;
  int v62;
  unsigned __int64 v63;
  int v64;
  unsigned __int64 v65;
  int v66;
  int v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  char* v74;
  int v75;
  int v76;
  int v77;
  unsigned int v78;
  int v79;
  unsigned int v80;
  int v81;
  signed int v82;
  signed int v83;
  signed int v84;
  signed int v85;
  signed int v86;
  __int64 v87;
  char* v88;
  __int64 v89;
  int v90;
  char* v91;
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  int v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  int v100;
  int v101;
  _QWORD* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  char* v108;
  char* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  int v115;
  char* v116;
  int v117;
  __int64 v118;
  int v119;
  int v120;
  char* v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  __int64 v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int* v133;
  __int64 v134;
  int v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int16* v139;
  __int64 v140;
  int* v141;
  int v142;
  unsigned __int64 v143;
  int v144;
  int v145;
  unsigned __int64 v146;
  __int64 v147;
  __int16* v148;
  char* v149;
  int v150;
  int v151;
  int v152;
  char* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  int* v159;
  struct {
    __int64 v160;
    __int64 v161;
    int* v162;
    __int64 v163;
    char gap32_[4];
    int v164;
    int v165;
    int v166;
    char* v167;
    int v168;
    int v169;
    unsigned __int64 v170;
    char gap72_[4];
    int v171;
    _QWORD* v172;
    char* v173;
    __int64 v174;
    int v175[2];
    __int64 v176;
    __int64 v177;
    __int64 v178;
    __int64 v179;
    __int64 v180;
  } f_;
  __int64 v181;

  v4 = *(int*)(a1 + 2336);
  v5 = *(_DWORD*)(a1 + 2328);
  LODWORD(f_.v173) = a4;
  f_.v163 = a3;
  v8 = 4LL * (v5 + (int)v4);
  v9 = (char*)&f_.v160 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = 2 * v4;
  v11 = (char*)&f_.v160 - ((2 * v4 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = (unsigned int)(*(int*)(a1 + 4272) >> 6);
  f_.v175[0] = *(int*)(a1 + 4268) >> 6;
  f_.v175[1] = v12;
  LODWORD(v4) = *(_DWORD*)(a1 + 2376);
  f_.v174 = v12;
  if ((_DWORD)v4 != 0) {
    *(_QWORD*)(a1 + 4226) = 0;
    *(_QWORD*)(a1 + 4234) = 0;
    *(_QWORD*)(a1 + 4210) = 0;
    *(_QWORD*)(a1 + 4218) = 0;
  }
  f_.v180 = 0;
  v181 = 0;
  f_.v176 = 0;
  f_.v177 = 0;
  f_.v178 = 0;
  f_.v179 = 0;
  memset_plt((__int64)v11, 0, v10);
  silk_PLC_energy((__int64)&f_.v180 + 4, (__int64)&v181 + 4, (__int64)&f_.v180,
                  (__int64)&v181, a1 + 4, f_.v175, *(_DWORD*)(a1 + 2332),
                  *(_DWORD*)(a1 + 2324));
  f_.v162 = a2;
  f_.v172 = (_QWORD*)(a1 + 4);
  v13 = *(_DWORD*)(a1 + 4280);
  if (SDWORDn(f_.v180, sizeof(f_.v180) / 4 - 1) >> v181 >= (int)f_.v180 >>
      SBYTE4(v181)) {
    v14 = *(int*)(a1 + 4284) * v13;
  }
  else {
    v14 = (v13 - 1) * *(int*)(a1 + 4284);
  }
  v15 = *(_DWORD*)(a1 + 2340);
  LOWORD(v16) = *(_WORD*)(a1 + 4252);
  if (v14 <= 128) {
    v17 = 128;
  }
  else {
    v17 = v14;
  }
  v18 = *(_DWORD*)(a1 + 4184);
  if (v18 >= 1) {
    v18 = 1;
  }
  v19 = 2LL * v18;
  f_.v165 = *(__int16*)((char*)&SdkData_c1d94e + v19);
  if (*(_DWORD*)(a1 + 4188) == 2) {
    v20 = (char*)&SdkData_c1d946;
  }
  else {
    v20 = (char*)&SdkData_c1d942;
  }
  v21 = *(__int16*)&v20[v19];
  v22 = *(unsigned __int16*)&v20[v19];
  opus_silk_2f67c0(a1 + 4210, v15, 64881);
  v23 = *(int*)(a1 + 2340);
  memcpy_plt((__int64)&f_.v176, a1 + 4210, 2 * v23);
  v29 = *(_DWORD*)(a1 + 4184);
  f_.v171 = v17;
  if (v29 != 0) {
    f_.v170 = v22;
  }
  else if (*(_DWORD*)(a1 + 4188) == 2) {
    v30 = *(_WORD*)(a1 + 4206);
    v31 = *(_WORD*)(a1 + 4200) + *(_WORD*)(a1 + 4202);
    v32 = *(_WORD*)(a1 + 4204);
    f_.v170 = v22;
    v33 = (__int16)(0x4000 - *(_WORD*)(a1 + 4208) - (v31 + v32 + v30));
    if (v33 <= 3277) {
      v33 = 3277;
    }
    v16 = (unsigned int)(*(__int16*)(a1 + 4264) * v33) >> 14;
  }
  else {
    v34 = silk_LPC_inverse_pred_gain_neon((int16x8_t*)(a1 + 4210), v23);
    LODWORD(v23) = *(_DWORD*)(a1 + 2340);
    LOWORD(v16) = 0x4000;
    if (v34 <= 0x400000) {
      v35 = 0x400000;
    }
    else {
      v35 = v34;
    }
    if (v35 >= 0x8000000) {
      v35 = 0x8000000;
    }
    f_.v170 = (unsigned __int64)(8 * v35 * (__int64)v21) >> 30;
  }
  v36 = *(_DWORD*)(a1 + 2336);
  v37 = *(_DWORD*)(a1 + 4248);
  v38 = ((*(int*)(a1 + 4196) >> 7) + 1) >> 1;
  v39 = v36 - v23 - v38 - 2;
  silk_LPC_analysis_filter((__int64)&v11[2 * v39], a1 + 2LL * v39 + 1348,
                           (__int16*)&f_.v176, 2 - (-(int)v23 - v38), v23);
  v40 = *(_DWORD*)(a1 + 4272);
  if (v40 >= 0) {
    v41 = *(_DWORD*)(a1 + 4272);
  }
  else {
    v41 = -v40;
  }
  v42 = __clz((unsigned int)(v41));
  v43 = HIWORD(v41);
  v44 = ((unsigned __int64)((int)((unsigned __int64)-(
                                      __int64)((((__int64)(0x1FFFFFFF /
                                                           (v40 << (v42 - 1) >>
                                                            16))
                                                 << 19) *
                                                (v40 << (v42 - 1))) &
                                               0xFFFFFFF800000000LL) >>
                                  32) *
                            (__int64)(0x1FFFFFFF / (v40 << (v42 - 1) >> 16))) >>
         16) +
        ((0x1FFFFFFF / (v40 << (v42 - 1) >> 16)) << 16);
  v45 = 16 - v42;
  v46 = v42 - 16;
  v47 = (int)0x80000000 >> v46;
  v48 = v44 >> v45;
  if (v44 > (int)0x80000000 >> v46) {
    v47 = v44;
  }
  if (v44 <= (int)(0x7FFFFFFFu >> v46)) {
    v49 = v47;
  }
  else {
    v49 = 0x7FFFFFFFu >> v46;
  }
  v50 = v49 << v46;
  if (v43 != 0) {
    v51 = v48;
  }
  else {
    v51 = v50;
  }
  result =
      memset_plt((__int64)&f_.v160 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL), 0, v8);
  v53 = *(int*)(a1 + 2336);
  v54 = f_.v165;
  v55 = *(int*)(a1 + 2340) + (__int64)v39;
  if ((int)v55 < (int)v53) {
    if (v51 >= 0x3FFFFFFF) {
      v56 = 0x3FFFFFFF;
    }
    else {
      v56 = v51;
    }
    v57 = ((_BYTE)v53 - ((unsigned __int8)*(int*)(a1 + 2340) + (_BYTE)v39)) & 7;
    if ((((_BYTE)v53 - ((unsigned __int8)*(int*)(a1 + 2340) + (_BYTE)v39)) &
         7) != 0) {
      v58 = *(int*)(a1 + 2340) + (__int64)v39;
      do {
        --v57;
        *(_DWORD*)&v9[4 * v58] =
            (unsigned __int64)(*(__int16*)&v11[2 * v58] * (__int64)v56) >> 16;
        ++v58;
      } while (v57 != 0);
      if ((unsigned __int64)(v55 - v53) > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_49;
      }
    }
    else {
      v58 = *(int*)(a1 + 2340) + (__int64)v39;
      if ((unsigned __int64)(v55 - v53) > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_49;
      }
    }
    v59 = &v9[4 * v58 + 16];
    v60 = (__int16*)&v11[2 * v58 + 8];
    do {
      v61 = *(v60 - 2);
      v58 += 8;
      v62 = *(v60 - 1);
      v63 = (unsigned __int64)(*(v60 - 3) * (__int64)v56) >> 16;
      *((_DWORD*)v59 - 4) = (unsigned __int64)(*(v60 - 4) * (__int64)v56) >> 16;
      *((_DWORD*)v59 - 3) = v63;
      v64 = *v60;
      *((_DWORD*)v59 - 2) = (unsigned __int64)(v61 * (__int64)v56) >> 16;
      *((_DWORD*)v59 - 1) = (unsigned __int64)(v62 * (__int64)v56) >> 16;
      v65 = (unsigned __int64)(v60[1] * (__int64)v56) >> 16;
      *(_DWORD*)v59 = (unsigned __int64)(v64 * (__int64)v56) >> 16;
      *((_DWORD*)v59 + 1) = v65;
      v66 = v60[2];
      LODWORD(v65) = v60[3];
      v60 += 8;
      *((_DWORD*)v59 + 2) = (unsigned __int64)(v66 * (__int64)v56) >> 16;
      *((_DWORD*)v59 + 3) = (unsigned __int64)((int)v65 * (__int64)v56) >> 16;
      v59 += 32;
    } while (v58 < v53);
  }
LABEL_49:
  v67 = *(_DWORD*)(a1 + 2324);
  f_.v161 = v53;
  LODWORD(f_.v173) = v67;
  if (v67 >= 1) {
    LODWORD(result) = *(_DWORD*)(a1 + 4196);
    v68 = 0;
    v69 = *(unsigned __int16*)(a1 + 4200);
    v70 = *(unsigned __int16*)(a1 + 4202);
    v71 = *(unsigned __int16*)(a1 + 4204);
    v72 = *(unsigned __int16*)(a1 + 4206);
    v73 = *(unsigned __int16*)(a1 + 4208);
    v74 = (char*)f_.v172 + 4 * (unsigned int)(f_.v171 - 128);
    v75 = *(_DWORD*)(a1 + 2332);
    f_.v167 = v9 + 8;
    v76 = *(unsigned __int8*)(a1 + 2789);
    f_.v166 = v75;
    f_.v171 = v76;
    LODWORD(f_.v170) = (__int16)f_.v170;
    f_.v169 = 4608 * *(__int16*)(a1 + 2316);
    LODWORD(f_.v172) = v75 & 3;
    f_.v164 = v75 & 0x7FFFFFFC;
    while (1) {
      if (v75 >= 1) {
        v82 = v69 << 16;
        v83 = v70 << 16;
        v84 = v71 << 16;
        v85 = v72 << 16;
        v86 = v73 << 16;
        v87 = v36;
        if ((unsigned int)v75 >= 4) {
          break;
        }
        v88 = &f_.v167[4 * (v36 - v38)];
        if ((_DWORD)f_.v172 != 0) {
          goto LABEL_65;
        }
      LABEL_51:
        v75 = f_.v166;
        v36 = v87;
      }
      v77 = f_.v170;
      ++v68;
      v69 = (unsigned int)((__int16)v69 * v54) >> 15;
      *(_WORD*)(a1 + 4200) = v69;
      v70 = (unsigned int)((__int16)v70 * v54) >> 15;
      *(_WORD*)(a1 + 4202) = v70;
      v71 = (unsigned int)((__int16)v71 * v54) >> 15;
      *(_WORD*)(a1 + 4204) = v71;
      v72 = (unsigned int)((__int16)v72 * v54) >> 15;
      *(_WORD*)(a1 + 4206) = v72;
      v73 = (unsigned int)((__int16)v73 * v54) >> 15;
      v78 = (__int16)v16 * v77;
      v79 = f_.v171;
      *(_WORD*)(a1 + 4208) = v73;
      v80 = v78 >> 15;
      if (v79 != 0) {
        LOWORD(v16) = v80;
      }
      v81 = result + ((unsigned __int64)(655LL * (int)result) >> 16);
      if (v81 >= f_.v169) {
        result = (unsigned int)f_.v169;
      }
      else {
        result = (unsigned int)v81;
      }
      *(_DWORD*)(a1 + 4196) = result;
      v38 = (((int)result >> 7) + 1) >> 1;
      if (v68 == (_DWORD)f_.v173) {
        goto LABEL_68;
      }
    }
    v89 = -4LL * v38;
    v90 = f_.v164;
    f_.v168 = v38;
    v91 = &f_.v167[4 * v36];
    do {
      v87 += 4;
      v90 -= 4;
      v92 = 196314165 * v37 + 907633515;
      v93 = v92 >> 25;
      v94 = 196314165 * v92 + 907633515;
      *((_DWORD*)v91 - 2) =
          4 *
          (((((v83 * (__int64)*(int*)&v91[v89 - 4]) & 0xFFFFFFFF00000000LL) +
             v82 * (__int64)*(int*)&v91[v89] +
             ((v84 * (__int64)*(int*)&v91[v89 - 8]) & 0xFFFFFFFF00000000LL) +
             ((v85 * (__int64)*(int*)&v91[v89 - 12]) & 0xFFFFFFFF00000000LL) +
             ((v86 * (__int64)*(int*)&v91[v89 - 16]) & 0x3FFFFFFF00000000LL) +
             0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v74[4 * v93] * (__int64)(__int16)v16) >>
            16));
      v95 = v94 >> 25;
      v96 = 196314165 * v94 + 907633515;
      *((_DWORD*)v91 - 1) =
          4 *
          (((((v83 * (__int64)*(int*)&v91[v89]) & 0xFFFFFFFF00000000LL) +
             v82 * (__int64)*(int*)&v91[v89 + 4] +
             ((v84 * (__int64)*(int*)&v91[v89 - 4]) & 0xFFFFFFFF00000000LL) +
             ((v85 * (__int64)*(int*)&v91[v89 - 8]) & 0xFFFFFFFF00000000LL) +
             ((v86 * (__int64)*(int*)&v91[v89 - 12]) & 0x3FFFFFFF00000000LL) +
             0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v74[4 * v95] * (__int64)(__int16)v16) >>
            16));
      *(_DWORD*)v91 =
          4 *
          (((((v83 * (__int64)*(int*)&v91[v89 + 4]) & 0xFFFFFFFF00000000LL) +
             v82 * (__int64)*(int*)&v91[v89 + 8] +
             ((v84 * (__int64)*(int*)&v91[v89]) & 0xFFFFFFFF00000000LL) +
             ((v85 * (__int64)*(int*)&v91[v89 - 4]) & 0xFFFFFFFF00000000LL) +
             ((v86 * (__int64)*(int*)&v91[v89 - 8]) & 0x3FFFFFFF00000000LL) +
             0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v74[4 * (v96 >> 25)] *
                               (__int64)(__int16)v16) >>
            16));
      v37 = 196314165 * v96 + 907633515;
      *((_DWORD*)v91 + 1) =
          4 *
          (((((v83 * (__int64)*(int*)&v91[v89 + 8]) & 0xFFFFFFFF00000000LL) +
             v82 * (__int64)*(int*)&v91[v89 + 12] +
             ((v84 * (__int64)*(int*)&v91[v89 + 4]) & 0xFFFFFFFF00000000LL) +
             ((v85 * (__int64)*(int*)&v91[v89]) & 0xFFFFFFFF00000000LL) +
             ((v86 * (__int64)*(int*)&v91[v89 - 4]) & 0x3FFFFFFF00000000LL) +
             0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v74[4 * (v37 >> 25)] *
                               (__int64)(__int16)v16) >>
            16));
      v91 += 16;
    } while (v90 != 0);
    v54 = f_.v165;
    v88 = &v91[-4 * f_.v168];
    if ((_DWORD)f_.v172 == 0) {
      goto LABEL_51;
    }
  LABEL_65:
    v97 = (int)f_.v172;
    do {
      v37 = 196314165 * v37 + 907633515;
      --v97;
      v98 = (v84 * (__int64)*((int*)v88 - 2)) & 0xFFFFFFFF00000000LL;
      v99 = ((v83 * (__int64)*((int*)v88 - 1)) & 0xFFFFFFFF00000000LL) +
            v82 * (__int64)*(int*)v88;
      v100 = *((_DWORD*)v88 - 4);
      v101 = *((_DWORD*)v88 - 3);
      v88 += 4;
      *(_DWORD*)&v9[4 * v87++] =
          4 *
          (((v99 + v98 + ((v85 * (__int64)v101) & 0xFFFFFFFF00000000LL) +
             ((v86 * (__int64)v100) & 0x3FFFFFFF00000000LL) + 0x200000000LL) >>
            32) +
           ((unsigned __int64)(*(int*)&v74[4 * (v37 >> 25)] *
                               (__int64)(__int16)v16) >>
            16));
    } while (v97 != 0);
    goto LABEL_51;
  }
LABEL_68:
  v102 = (_QWORD*)(a1 + 1284);
  v103 = f_.v161;
  v104 = *(int*)(a1 + 2328);
  v105 = *(_QWORD*)(a1 + 1292);
  v106 = *(_QWORD*)(a1 + 1316);
  v107 = *(_QWORD*)(a1 + 1324);
  v108 = &v9[4 * f_.v161];
  *((_QWORD*)v108 - 8) = *(_QWORD*)(a1 + 1284);
  v109 = v108 - 64;
  v110 = *(_QWORD*)(a1 + 1332);
  v111 = *(_QWORD*)(a1 + 1340);
  *((_QWORD*)v108 - 3) = v107;
  *((_QWORD*)v108 - 2) = v110;
  v112 = *(_QWORD*)(a1 + 1300);
  v113 = *(_QWORD*)(a1 + 1308);
  *((_QWORD*)v108 - 1) = v111;
  *((_QWORD*)v108 - 7) = v105;
  *((_QWORD*)v108 - 6) = v112;
  *((_QWORD*)v108 - 5) = v113;
  *((_QWORD*)v108 - 4) = v106;
  if ((int)v104 > 0) {
    f_.v172 = (_QWORD*)(a1 + 1284);
    v114 = (__int16)f_.v176;
    v115 = SWORD1(f_.v176);
    v116 = &v9[4 * v103];
    v117 = SWORD2(f_.v176);
    v118 = 0;
    result = (__int64)(v116 - 72);
    v119 = SHIWORD(f_.v176);
    v120 = (__int16)f_.v177;
    v121 = v116 - 4;
    v122 = SWORD1(f_.v177);
    v123 = SWORD2(f_.v177);
    v124 = SHIWORD(f_.v177);
    v125 = (__int16)f_.v178;
    v126 = SWORD1(f_.v178);
    v127 = f_.v163;
    f_.v168 = v38;
    f_.v173 = (char*)&f_.v180 + 2;
    while (1) {
      v133 = (int*)&v109[4 * v118];
      v134 = *(unsigned int*)(a1 + 2340);
      v135 = ((unsigned __int64)(v114 * (__int64)v133[15]) >> 16) +
             ((int)v134 >> 1) +
             ((unsigned __int64)(v115 * (__int64)v133[14]) >> 16) +
             ((unsigned __int64)(v117 * (__int64)v133[13]) >> 16) +
             ((unsigned __int64)(v119 * (__int64)v133[12]) >> 16) +
             ((unsigned __int64)(v120 * (__int64)v133[11]) >> 16) +
             ((unsigned __int64)(v122 * (__int64)v133[10]) >> 16) +
             ((unsigned __int64)(v123 * (__int64)v133[9]) >> 16) +
             ((unsigned __int64)(v124 * (__int64)v133[8]) >> 16) +
             ((unsigned __int64)(v125 * (__int64)v133[7]) >> 16) +
             ((unsigned __int64)(v126 * (__int64)v133[6]) >> 16);
      if ((int)v134 < 11) {
        goto LABEL_70;
      }
      v136 = v134 - 10;
      if ((unsigned int)(v134 - 11) < 7) {
        break;
      }
      v139 = (__int16*)f_.v173;
      v140 = 10;
      v141 = (int*)result;
      do {
        v142 =
            v135 + ((unsigned __int64)(*(v139 - 7) * (__int64)v141[7]) >> 16) +
            ((unsigned __int64)(*(v139 - 6) *
                                (__int64)*(
                                    int*)&v108[4 * v118 +
                                               4 * (v140 ^
                                                    0x3FFFFFFFFFFFFFFELL)]) >>
             16) +
            ((unsigned __int64)(*(v139 - 5) * (__int64)v141[5]) >> 16) +
            ((unsigned __int64)(*(v139 - 4) * (__int64)v141[4]) >> 16) +
            ((unsigned __int64)(*(v139 - 3) * (__int64)v141[3]) >> 16);
        v143 = *(v139 - 2) * (__int64)v141[2];
        v145 = *v141;
        v144 = v141[1];
        v141 -= 8;
        v146 = *(v139 - 1) * (__int64)v144;
        v137 = v140 + 8;
        LODWORD(v143) = (v143 >> 16) + (v146 >> 16);
        LODWORD(v146) = *v139;
        v139 += 8;
        v135 =
            v142 + v143 + ((unsigned __int64)((int)v146 * (__int64)v145) >> 16);
        v147 = v140 - 2;
        v140 += 8;
      } while (v147 != (v136 & 0xFFFFFFFFFFFFFFF8LL));
      v127 = f_.v163;
      v138 = v136 & 7;
      if ((v136 & 7) != 0) {
        goto LABEL_87;
      }
    LABEL_70:
      result += 4;
      v121 += 4;
      if (v135 <= -134217728) {
        v128 = -134217728;
      }
      else {
        v128 = v135;
      }
      if (v128 >= 0x7FFFFFF) {
        v128 = 0x7FFFFFF;
      }
      v129 = 16 * v128;
      v130 = f_.v174;
      v131 = vqadds_s32(*(_DWORD*)&v108[4 * v118], v129);
      *(_DWORD*)&v108[4 * v118] = v131;
      v132 =
          (((int)((unsigned __int64)(v130 * (__int64)v131) >> 16) >> 7) + 1) >>
          1;
      if (v132 <= -32768) {
        v132 = -32768;
      }
      if (v132 >= 0x7FFF) {
        LOWORD(v132) = 0x7FFF;
      }
      *(_WORD*)(v127 + 2 * v118++) = v132;
      v104 = *(int*)(a1 + 2328);
      if (v118 >= v104) {
        v38 = f_.v168;
        v102 = f_.v172;
        goto LABEL_91;
      }
    }
    v137 = 10;
    v138 = v136 & 7;
    if ((v136 & 7) == 0) {
      goto LABEL_70;
    }
  LABEL_87:
    v148 = (__int16*)&f_.v176 + v137;
    v149 = &v121[-4 * v137];
    do {
      v151 = *(_DWORD*)v149;
      v149 -= 4;
      v150 = v151;
      v152 = *v148++;
      --v138;
      v135 += (unsigned __int64)(v152 * (__int64)v150) >> 16;
    } while (v138 != 0);
    goto LABEL_70;
  }
LABEL_91:
  v153 = &v109[4 * v104];
  *(_DWORD*)(a1 + 4248) = v37;
  *(_WORD*)(a1 + 4252) = v16;
  v154 = *((_QWORD*)v153 + 5);
  v102[4] = *((_QWORD*)v153 + 4);
  v102[5] = v154;
  v155 = *((_QWORD*)v153 + 7);
  v102[6] = *((_QWORD*)v153 + 6);
  v102[7] = v155;
  v156 = *((_QWORD*)v153 + 1);
  *v102 = *(_QWORD*)v153;
  v102[1] = v156;
  v158 = *((_QWORD*)v153 + 2);
  v157 = *((_QWORD*)v153 + 3);
  v102[2] = v158;
  v102[3] = v157;
  v159 = f_.v162;
  *f_.v162 = v38;
  v159[1] = v38;
  v159[2] = v38;
  v159[3] = v38;
  return result;
}

#pragma GCC visibility pop
