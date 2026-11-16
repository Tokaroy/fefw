#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_silk_58660(unsigned int);
__int64 silk_ana_filt_bank_1(__int64 result, int*, _WORD*, _WORD*, int);
__int64 silk_lin2log(unsigned int);
__int64 opus_silk_4cf80(__int64 a1, __int64 a2);

__int64 opus_silk_4cf80(__int64 a1, __int64 a2)
{
  int v2;
  int v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  __int16* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int16* v13;
  unsigned __int64 v14;
  __int16* v15;
  __int16 v16;
  __int16 v17;
  int v18;
  __int16 v19;
  __int16 v20;
  __int16 v21;
  __int64 v22;
  __int16 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  char v27;
  int v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  int v52;
  __int64 v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  __int64 v93;
  int v94;
  int v95;
  int v96;
  __int64 v97;
  int v98;
  int v99;
  unsigned int v100;
  int v101;
  unsigned int v102;
  int v103;
  unsigned int v104;
  int v105;
  unsigned int v106;
  int v107;
  unsigned int v108;
  int v109;
  unsigned int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  signed int v120;
  __int64 v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  signed int v129;
  __int64 v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  signed int v137;
  __int64 v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  signed int v145;
  __int64 v146;
  int v147;
  int v148;
  int v149;
  int v150;
  unsigned int v151;
  __int16 v152;
  int v153;
  unsigned __int64 v154;
  unsigned int v155;
  unsigned __int64 v156;
  unsigned int v157;
  int v158;
  unsigned int v159;
  unsigned int v160;
  bool v161;
  unsigned int v162;
  unsigned int v163;
  __int16 v164;
  unsigned __int64 v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  int v169;
  int v170;
  unsigned int v171;
  unsigned int v172;
  __int16 v173;
  unsigned __int64 v174;
  unsigned int v175;
  unsigned int v176;
  int v177;
  unsigned int v178;
  unsigned int v179;
  int v180;
  unsigned int v181;
  unsigned int v182;
  unsigned int v183;
  int v184;
  unsigned int v185;
  unsigned int v186;
  unsigned int v187;
  unsigned int v188;
  __int16 v189;
  int v190;
  unsigned __int64 v191;
  unsigned int v192;
  unsigned int v193;
  unsigned int v194;
  unsigned __int64 v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  unsigned int v202;
  unsigned int v203;
  char v204;
  unsigned int v205;
  unsigned int v206;
  unsigned int v207;
  int v208;
  int v209;
  int v210;
  char v211;
  int v212;
  unsigned int v213;
  int v214;
  int v215;
  int v216;
  unsigned int v217;
  int v218;
  int v219;
  int v220;
  unsigned int v221;
  int v222;
  int v223;
  int v224;
  unsigned int v225;
  int v226;
  struct {
    __int64 v228;
    int v229;
    int v230;
    _DWORD v231[4];
    __int64 v232;
    __int64 v233;
  } v228_;

  v2 = *(_DWORD*)(a1 + 4584);
  v228_.v232 = 0;
  v228_.v233 = 0;
  v5 = (v2 >> 3) + (v2 >> 2);
  v6 = v5 + (v2 >> 3);
  v228_.v231[0] = 0;
  v228_.v231[1] = v5;
  v7 = v6 + (v2 >> 2);
  v228_.v231[2] = v6;
  v228_.v231[3] = v7;
  v8 = 2LL * (v7 + (v2 >> 1));
  v9 = (__int16*)((char*)&v228_.v228 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt((__int64)v9, 0, v8);
  silk_ana_filt_bank_1(a2, (int*)(a1 + 36), v9, &v9[v7], v2);
  silk_ana_filt_bank_1((__int64)v9, (int*)(a1 + 44), v9, &v9[v6], v2 >> 1);
  silk_ana_filt_bank_1((__int64)v9, (int*)(a1 + 52), v9, &v9[v5], v2 >> 2);
  v10 = (unsigned int)((v2 >> 3) - 1);
  v11 = (int)v10;
  v12 = v9[v11] >> 1;
  v9[v11] >>= 1;
  if (v2 >> 3 >= 2) {
    v13 = &v9[(unsigned int)v10];
    v14 = v10 + 1;
    v17 = *v13;
    v15 = v13 - 1;
    v16 = v17;
    do {
      --v14;
      v18 = *v15 >> 1;
      v19 = v16 - (*v15 >> 1);
      *v15 >>= 1;
      v15[1] = v19;
      --v15;
      v16 = v18;
    } while (v14 > 1);
  }
  v20 = *(_WORD*)(a1 + 92);
  v21 = *v9;
  *(_WORD*)(a1 + 92) = v12;
  v22 = 0;
  v23 = v21 - v20;
  v24 = a1 + 60;
  *v9 = v23;
  do {
    v27 = 4 - v22;
    v28 = *(_DWORD*)(v24 + 4 * v22);
    if ((unsigned int)(4 - v22) >= 3) {
      v27 = 3;
    }
    v29 = *(int*)(a1 + 4584) >> v27 >> 2;
    if ((int)v29 < 1) {
      v25 = 0;
    }
    else {
      v30 = v228_.v231[v22];
      if (v29 >= 8) {
        v31 = 0;
        v32 = 0;
        do {
          v33 = v30 + v31;
          v31 += 8;
          v34 = v9[v33] >> 3;
          v35 = v32 + v34 * v34;
          v36 = v9[v33 + 1] >> 3;
          v37 = v35 + v36 * v36;
          v38 = v9[v33 + 2] >> 3;
          v39 = v37 + v38 * v38;
          v40 = v9[v33 + 3] >> 3;
          v41 = v39 + v40 * v40;
          v42 = v9[v33 + 4] >> 3;
          v43 = v41 + v42 * v42;
          v44 = v9[v33 + 5] >> 3;
          v45 = v43 + v44 * v44;
          v46 = v9[v33 + 6] >> 3;
          v47 = v9[v33 + 7] >> 3;
          v32 = v45 + v46 * v46 + v47 * v47;
        } while ((v29 & 0x7FFFFFF8) != v31);
      }
      else {
        LODWORD(v31) = 0;
        v32 = 0;
      }
      v48 = v29 & 7;
      if ((v29 & 7) != 0) {
        v49 = v30 + v31;
        v50 = v29 & 7;
        do {
          v51 = v9[v49++];
          --v50;
          v32 += (v51 >> 3) * (v51 >> 3);
        } while (v50 != 0);
      }
      v52 = v28 + v32;
      if (v52 <= -1) {
        v52 = 0x7FFFFFFF;
      }
      if (v29 >= 8) {
        v53 = 0;
        v54 = 0;
        do {
          v55 = v30 + v29 + v53;
          v53 += 8;
          v56 = v9[v55] >> 3;
          v57 = v54 + v56 * v56;
          v58 = v9[v55 + 1] >> 3;
          v59 = v57 + v58 * v58;
          v60 = v9[v55 + 2] >> 3;
          v61 = v59 + v60 * v60;
          v62 = v9[v55 + 3] >> 3;
          v63 = v61 + v62 * v62;
          v64 = v9[v55 + 4] >> 3;
          v65 = v63 + v64 * v64;
          v66 = v9[v55 + 5] >> 3;
          v67 = v65 + v66 * v66;
          v68 = v9[v55 + 6] >> 3;
          v69 = v9[v55 + 7] >> 3;
          v54 = v67 + v68 * v68 + v69 * v69;
        } while ((v29 & 0x7FFFFFF8) != v53);
      }
      else {
        LODWORD(v53) = 0;
        v54 = 0;
      }
      if ((v29 & 7) != 0) {
        v70 = v30 + v29 + v53;
        v71 = v29 & 7;
        do {
          v72 = v9[v70++];
          --v71;
          v54 += (v72 >> 3) * (v72 >> 3);
        } while (v71 != 0);
      }
      v73 = v52 + v54;
      v74 = 2 * v29;
      if (v73 <= -1) {
        v73 = 0x7FFFFFFF;
      }
      if (v29 >= 8) {
        v75 = 0;
        v76 = 0;
        do {
          v77 = v30 + v74 + v75;
          v75 += 8;
          v78 = v9[v77] >> 3;
          v79 = v76 + v78 * v78;
          v80 = v9[v77 + 1] >> 3;
          v81 = v79 + v80 * v80;
          v82 = v9[v77 + 2] >> 3;
          v83 = v81 + v82 * v82;
          v84 = v9[v77 + 3] >> 3;
          v85 = v83 + v84 * v84;
          v86 = v9[v77 + 4] >> 3;
          v87 = v85 + v86 * v86;
          v88 = v9[v77 + 5] >> 3;
          v89 = v87 + v88 * v88;
          v90 = v9[v77 + 6] >> 3;
          v91 = v9[v77 + 7] >> 3;
          v76 = v89 + v90 * v90 + v91 * v91;
        } while ((v29 & 0x7FFFFFF8) != v75);
      }
      else {
        LODWORD(v75) = 0;
        v76 = 0;
      }
      if ((v29 & 7) != 0) {
        v92 = v30 + v74 + v75;
        v93 = v29 & 7;
        do {
          v94 = v9[v92++];
          --v93;
          v76 += (v94 >> 3) * (v94 >> 3);
        } while (v93 != 0);
      }
      v95 = v73 + v76;
      v96 = 3 * v29;
      if (v95 <= -1) {
        v95 = 0x7FFFFFFF;
      }
      if (v29 >= 8) {
        v97 = 0;
        v25 = 0;
        do {
          v98 = v30 + v96 + v97;
          v97 += 8;
          v99 = v9[v98] >> 3;
          v100 = v25 + v99 * v99;
          v101 = v9[v98 + 1] >> 3;
          v102 = v100 + v101 * v101;
          v103 = v9[v98 + 2] >> 3;
          v104 = v102 + v103 * v103;
          v105 = v9[v98 + 3] >> 3;
          v106 = v104 + v105 * v105;
          v107 = v9[v98 + 4] >> 3;
          v108 = v106 + v107 * v107;
          v109 = v9[v98 + 5] >> 3;
          v110 = v108 + v109 * v109;
          v111 = v9[v98 + 6] >> 3;
          v112 = v9[v98 + 7] >> 3;
          v25 = v110 + v111 * v111 + v112 * v112;
        } while ((v29 & 0x7FFFFFF8) != v97);
      }
      else {
        LODWORD(v97) = 0;
        v25 = 0;
      }
      if ((v29 & 7) != 0) {
        v113 = v30 + v96 + v97;
        do {
          v114 = v9[v113++];
          --v48;
          v25 += (v114 >> 3) * (v114 >> 3);
        } while (v48 != 0);
      }
      v28 = v95 + (v25 >> 1);
    }
    *(_DWORD*)(v24 + 4 * v22) = v25;
    if (v28 <= -1) {
      v26 = 0x7FFFFFFF;
    }
    else {
      v26 = v28;
    }
    *((_DWORD*)&v228_.v232 + v22++) = v26;
  } while (v22 != 4);
  v115 = *(_DWORD*)(a1 + 144);
  if (v115 > 999) {
    v116 = 0;
  }
  else {
    *(_DWORD*)(a1 + 144) = v115 + 1;
    v116 = 0x7FFF / ((v115 >> 4) + 1);
  }
  v117 = *(_DWORD*)(a1 + 128);
  v118 = *(_DWORD*)(a1 + 96);
  v228_.v230 = v228_.v232;
  if (v117 + (int)v228_.v232 <= -1) {
    v119 = 0x7FFFFFFF;
  }
  else {
    v119 = v117 + v228_.v232;
  }
  v120 = 0x7FFFFFFFu / v119;
  if (v119 <= 8 * v118) {
    if (v119 >= v118) {
      v121 = (v118 * (__int64)v120) << 16 >> 37;
    }
    else {
      LODWORD(v121) = 1024;
    }
  }
  else {
    LODWORD(v121) = 128;
  }
  v122 = *(_DWORD*)(a1 + 112);
  v123 = DWORDn(v228_.v232, sizeof(v228_.v232) / 4 - 1);
  if ((int)v121 <= v116) {
    LOWORD(v121) = v116;
  }
  v228_.v229 = DWORDn(v228_.v232, sizeof(v228_.v232) / 4 - 1);
  v124 =
      v122 + ((unsigned __int64)((__int16)v121 * (__int64)(v120 - v122)) >> 16);
  v125 = *(_DWORD*)(a1 + 132);
  v126 = 0x7FFFFFFF / v124;
  *(_DWORD*)(a1 + 112) = v124;
  v127 = v125 + v123;
  if (0x7FFFFFFF / v124 >= 0xFFFFFF) {
    v126 = 0xFFFFFF;
  }
  if (v127 <= -1) {
    v127 = 0x7FFFFFFF;
  }
  *(_DWORD*)(a1 + 96) = v126;
  v128 = *(_DWORD*)(a1 + 100);
  v129 = 0x7FFFFFFFu / v127;
  if (v127 <= 8 * v128) {
    if (v127 >= v128) {
      v130 = (v128 * (__int64)v129) << 16 >> 37;
    }
    else {
      LODWORD(v130) = 1024;
    }
  }
  else {
    LODWORD(v130) = 128;
  }
  v131 = v228_.v233;
  if ((int)v130 <= v116) {
    LOWORD(v130) = v116;
  }
  v132 = *(int*)(a1 + 116) +
         ((unsigned __int64)((__int16)v130 *
                             (__int64)(v129 - *(int*)(a1 + 116))) >>
          16);
  *(_DWORD*)(a1 + 116) = v132;
  v133 = 0x7FFFFFFF / v132;
  if (v133 >= 0xFFFFFF) {
    v134 = 0xFFFFFF;
  }
  else {
    v134 = v133;
  }
  v135 = *(_DWORD*)(a1 + 104);
  *(_DWORD*)(a1 + 100) = v134;
  if ((signed __int32)(*(int*)(a1 + 136) + v131) <= -1) {
    v136 = 0x7FFFFFFF;
  }
  else {
    v136 = *(int*)(a1 + 136) + v131;
  }
  v137 = 0x7FFFFFFFu / v136;
  if (v136 <= 8 * v135) {
    if (v136 >= v135) {
      v138 = (v135 * (__int64)v137) << 16 >> 37;
    }
    else {
      LODWORD(v138) = 1024;
    }
  }
  else {
    LODWORD(v138) = 128;
  }
  v139 = DWORDn(v228_.v233, sizeof(v228_.v233) / 4 - 1);
  if ((int)v138 <= v116) {
    LOWORD(v138) = v116;
  }
  v140 = *(int*)(a1 + 120) +
         ((unsigned __int64)((__int16)v138 *
                             (__int64)(v137 - *(int*)(a1 + 120))) >>
          16);
  v141 = *(_DWORD*)(a1 + 140);
  v142 = 0x7FFFFFFF / v140;
  *(_DWORD*)(a1 + 120) = v140;
  v143 = v141 + v139;
  if (0x7FFFFFFF / v140 >= 0xFFFFFF) {
    v142 = 0xFFFFFF;
  }
  if (v143 <= -1) {
    v143 = 0x7FFFFFFF;
  }
  *(_DWORD*)(a1 + 104) = v142;
  v144 = *(_DWORD*)(a1 + 108);
  v145 = 0x7FFFFFFFu / v143;
  if (v143 <= 8 * v144) {
    if (v143 >= v144) {
      v146 = (v144 * (__int64)v145) << 16 >> 37;
    }
    else {
      LODWORD(v146) = 1024;
    }
  }
  else {
    LODWORD(v146) = 128;
  }
  if ((int)v146 > v116) {
    LOWORD(v116) = v146;
  }
  v147 = *(int*)(a1 + 124) +
         ((unsigned __int64)((__int16)v116 *
                             (__int64)(v145 - *(int*)(a1 + 124))) >>
          16);
  *(_DWORD*)(a1 + 124) = v147;
  v148 = 0x7FFFFFFF / v147;
  v149 = *(_DWORD*)(a1 + 96);
  if (v148 >= 0xFFFFFF) {
    v148 = 0xFFFFFF;
  }
  *(_DWORD*)(a1 + 108) = v148;
  v150 = v228_.v232;
  v151 = v228_.v232 - v149;
  if ((int)v228_.v232 - v149 >= 1) {
    if ((unsigned int)v228_.v232 < 0x800000) {
      v150 = (_DWORD)v228_.v232 << 8;
    }
    else {
      v149 >>= 8;
    }
    DWORDn(v228_.v228, sizeof(v228_.v228) / 4 - 1) = v150 / (v149 + 1);
    v152 = silk_lin2log(DWORDn(v228_.v228, sizeof(v228_.v228) / 4 - 1)) - 1024;
    v153 = v152 * v152;
    LOWORD(v154) = v152;
    if (v151 >> 20 == 0) {
      v155 = __clz((unsigned int)(v151));
      if (v155 != 24) {
        if (v151 > 0x7F) {
          v151 = (v151 << (v155 + 8)) + (v151 >> (24 - v155));
        }
        else {
          v151 = (v151 >> (56 - v155)) | (v151 << (v155 - 24));
        }
      }
      v161 = (v155 & 1) == 0;
      v162 = v155 >> 1;
      if (v161) {
        v163 = 46214;
      }
      else {
        v163 = 0x8000;
      }
      v154 = (unsigned __int64)(v152 * (__int64)(int)(((v163 >> v162) +
                                                       ((213 * (v163 >> v162) *
                                                         (v151 & 0x7F)) >>
                                                        16))
                                                      << 6)) >>
             16;
    }
    v156 = (unsigned __int64)(30000LL * (__int16)v154) >> 16;
    v157 = DWORDn(v228_.v232, sizeof(v228_.v232) / 4 - 1);
    v158 = *(_DWORD*)(a1 + 100);
    v159 = DWORDn(v228_.v232, sizeof(v228_.v232) / 4 - 1) - v158;
    if ((signed __int32)(DWORDn(v228_.v232, sizeof(v228_.v232) / 4 - 1) -
                         v158) >= 1) {
      goto LABEL_114;
    }
  LABEL_107:
    v160 = 256;
    goto LABEL_127;
  }
  LODWORD(v156) = 0;
  v153 = 0;
  DWORDn(v228_.v228, sizeof(v228_.v228) / 4 - 1) = 256;
  v157 = DWORDn(v228_.v232, sizeof(v228_.v232) / 4 - 1);
  v158 = *(_DWORD*)(a1 + 100);
  v159 = DWORDn(v228_.v232, sizeof(v228_.v232) / 4 - 1) - v158;
  if ((signed __int32)(DWORDn(v228_.v232, sizeof(v228_.v232) / 4 - 1) - v158) <
      1) {
    goto LABEL_107;
  }
LABEL_114:
  if (v157 < 0x800000) {
    v157 <<= 8;
  }
  else {
    v158 >>= 8;
  }
  v160 = (int)v157 / (v158 + 1);
  v164 = silk_lin2log(v160) - 1024;
  v153 += v164 * v164;
  LOWORD(v165) = v164;
  if (v159 >> 20 == 0) {
    v166 = __clz((unsigned int)(v159));
    if (v166 != 24) {
      if (v159 >= 0x80) {
        v159 = (v159 << (v166 + 8)) + (v159 >> (24 - v166));
      }
      else {
        v159 = (v159 >> (56 - v166)) | (v159 << (v166 - 24));
      }
    }
    v161 = (v166 & 1) == 0;
    v167 = v166 >> 1;
    if (v161) {
      v168 = 46214;
    }
    else {
      v168 = 0x8000;
    }
    v165 = (unsigned __int64)(v164 * (__int64)(int)(((v168 >> v167) +
                                                     ((213 * (v168 >> v167) *
                                                       (v159 & 0x7F)) >>
                                                      16))
                                                    << 6)) >>
           16;
  }
  LODWORD(v156) = v156 + ((unsigned __int64)(6000LL * (__int16)v165) >> 16);
LABEL_127:
  v169 = v228_.v233;
  v170 = *(_DWORD*)(a1 + 104);
  v171 = v228_.v233 - v170;
  if ((int)v228_.v233 - v170 < 1) {
    v172 = 256;
    v176 = DWORDn(v228_.v233, sizeof(v228_.v233) / 4 - 1);
    v177 = *(_DWORD*)(a1 + 108);
    v178 = DWORDn(v228_.v233, sizeof(v228_.v233) / 4 - 1) - v177;
    if ((signed __int32)(DWORDn(v228_.v233, sizeof(v228_.v233) / 4 - 1) -
                         v177) >= 1) {
      goto LABEL_153;
    }
  LABEL_136:
    v179 = 256;
    v180 = v153 + 3;
    if (v153 >= 0) {
      v180 = v153;
    }
    if (v153 < 4) {
      goto LABEL_168;
    }
    goto LABEL_139;
  }
  if ((unsigned int)v228_.v233 < 0x800000) {
    v169 = (_DWORD)v228_.v233 << 8;
  }
  else {
    v170 >>= 8;
  }
  v172 = v169 / (v170 + 1);
  v173 = silk_lin2log(v172) - 1024;
  v153 += v173 * v173;
  LOWORD(v174) = v173;
  if (v171 >> 20 == 0) {
    v175 = __clz((unsigned int)(v171));
    if (v175 != 24) {
      if (v171 >= 0x80) {
        v171 = (v171 << (v175 + 8)) + (v171 >> (24 - v175));
      }
      else {
        v171 = (v171 >> (56 - v175)) | (v171 << (v175 - 24));
      }
    }
    v161 = (v175 & 1) == 0;
    v187 = v175 >> 1;
    if (v161) {
      v188 = 46214;
    }
    else {
      v188 = 0x8000;
    }
    v174 = (unsigned __int64)(v173 * (__int64)(int)(((v188 >> v187) +
                                                     ((213 * (v188 >> v187) *
                                                       (v171 & 0x7F)) >>
                                                      16))
                                                    << 6)) >>
           16;
  }
  LODWORD(v156) =
      v156 + ((unsigned __int64)(0xFFFFFFFFD120LL * (__int16)v174) >> 16);
  v176 = DWORDn(v228_.v233, sizeof(v228_.v233) / 4 - 1);
  v177 = *(_DWORD*)(a1 + 108);
  v178 = DWORDn(v228_.v233, sizeof(v228_.v233) / 4 - 1) - v177;
  if ((signed __int32)(DWORDn(v228_.v233, sizeof(v228_.v233) / 4 - 1) - v177) <
      1) {
    goto LABEL_136;
  }
LABEL_153:
  if (v176 < 0x800000) {
    v176 <<= 8;
  }
  else {
    v177 >>= 8;
  }
  v179 = (int)v176 / (v177 + 1);
  v189 = silk_lin2log(v179) - 1024;
  v190 = v153 + v189 * v189;
  LOWORD(v191) = v189;
  if (v178 >> 20 == 0) {
    v192 = __clz((unsigned int)(v178));
    if (v192 != 24) {
      if (v178 >= 0x80) {
        v178 = (v178 << (v192 + 8)) + (v178 >> (24 - v192));
      }
      else {
        v178 = (v178 >> (56 - v192)) | (v178 << (v192 - 24));
      }
    }
    v161 = (v192 & 1) == 0;
    v193 = v192 >> 1;
    if (v161) {
      v194 = 46214;
    }
    else {
      v194 = 0x8000;
    }
    v191 = (unsigned __int64)(v189 * (__int64)(int)(((v194 >> v193) +
                                                     ((213 * (v194 >> v193) *
                                                       (v178 & 0x7F)) >>
                                                      16))
                                                    << 6)) >>
           16;
  }
  LODWORD(v156) =
      v156 + ((unsigned __int64)(0xFFFFFFFFD120LL * (__int16)v191) >> 16);
  v180 = v190 + 3;
  if (v190 >= 0) {
    v180 = v190;
  }
  if (v190 < 4) {
  LABEL_168:
    v186 = -128;
    goto LABEL_169;
  }
LABEL_139:
  v181 = v180 >> 2;
  v182 = __clz((unsigned int)(v180 >> 2));
  if (v182 != 24) {
    if (v181 > 0x7F) {
      v181 = (v181 << (v182 + 8)) + (v181 >> (24 - v182));
    }
    else {
      v181 = (v181 >> (56 - v182)) | (v181 << (v182 - 24));
    }
  }
  v161 = (v182 & 1) == 0;
  v183 = v182 >> 1;
  v184 = v181 & 0x7F;
  if (v161) {
    v185 = 46214;
  }
  else {
    v185 = 0x8000;
  }
  v186 = ((unsigned __int64)(45000LL *
                             (__int16)(3 * ((v185 >> v183) +
                                            ((213 * (v185 >> v183) * v184) >>
                                             16)))) >>
          16) -
         128;
LABEL_169:
  LODWORD(v195) = opus_silk_58660(v186);
  v196 = opus_silk_58660(v156);
  v197 = v228_.v229;
  v198 = v228_.v230;
  *(_DWORD*)(a1 + 4728) = 2 * v196 - 0x8000;
  v199 = *(_DWORD*)(a1 + 4576);
  v200 = *(_DWORD*)(a1 + 4584);
  v201 =
      (int)(3 * ((signed __int32)(v131 - *(int*)(a1 + 104)) >> 4) +
            (((signed __int32)(v197 - *(int*)(a1 + 100)) >> 3) & 0xFFFFFFFE) +
            ((signed __int32)(v198 - *(int*)(a1 + 96)) >> 4) +
            4 * ((signed __int32)(v139 - *(int*)(a1 + 108)) >> 4)) >>
      (v200 == 20 * v199);
  if (v201 <= 0) {
    LODWORD(v195) = (int)v195 >> 1;
  }
  else if ((unsigned int)v201 >> 14 == 0) {
    v202 = v201 << 16;
    v203 = __clz((unsigned int)(v202));
    v204 = 24 - v203;
    v161 = (v203 & 1) == 0;
    v205 = v203 >> 1;
    v206 = v202 >> v204;
    if (v161) {
      v207 = 46214;
    }
    else {
      v207 = 0x8000;
    }
    v195 = (unsigned __int64)((__int16)v195 *
                              (__int64)(int)((v207 >> v205) +
                                             ((213 * (v206 & 0x7F) *
                                               (v207 >> v205)) >>
                                              16) +
                                             0x8000)) >>
           16;
  }
  v208 = (int)v195 >> 7;
  v209 = 5 * v199;
  if ((int)v195 >> 7 >= 255) {
    v208 = 255;
  }
  v161 = v200 == 2 * v209;
  v210 = DWORDn(v228_.v228, sizeof(v228_.v228) / 4 - 1);
  *(_DWORD*)(a1 + 4532) = v208;
  v211 = v161;
  v212 = ((int)v195 * (__int16)v195) >> 20 >> v211;
  v213 = *(int*)(a1 + 76) +
         ((unsigned __int64)(v212 * (__int64)(v210 - *(int*)(a1 + 76))) >> 16);
  *(_DWORD*)(a1 + 76) = v213;
  v214 = silk_lin2log(v213);
  v215 = opus_silk_58660((3 * v214 - 5120) >> 4);
  v216 = *(_DWORD*)(a1 + 80);
  *(_DWORD*)(a1 + 4712) = v215;
  v217 = v216 + ((unsigned __int64)(v212 * (__int64)(int)(v160 - v216)) >> 16);
  *(_DWORD*)(a1 + 80) = v217;
  v218 = silk_lin2log(v217);
  v219 = opus_silk_58660((3 * v218 - 5120) >> 4);
  v220 = *(_DWORD*)(a1 + 84);
  *(_DWORD*)(a1 + 4716) = v219;
  v221 = v220 + ((unsigned __int64)(v212 * (__int64)(int)(v172 - v220)) >> 16);
  *(_DWORD*)(a1 + 84) = v221;
  v222 = silk_lin2log(v221);
  v223 = opus_silk_58660((3 * v222 - 5120) >> 4);
  v224 = *(_DWORD*)(a1 + 88);
  *(_DWORD*)(a1 + 4720) = v223;
  v225 = v224 + ((unsigned __int64)(v212 * (__int64)(int)(v179 - v224)) >> 16);
  *(_DWORD*)(a1 + 88) = v225;
  v226 = silk_lin2log(v225);
  *(_DWORD*)(a1 + 4724) = opus_silk_58660((3 * v226 - 5120) >> 4);
  return 0;
}

#pragma GCC visibility pop
