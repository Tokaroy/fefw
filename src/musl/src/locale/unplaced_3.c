#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __errno_location_plt();
__int64 __getlocale_addr_plt();
__int64 find_charmap(const char*);
__int64 mbrtowc_plt(__int64, __int64, __int64, __int64);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 uni_to_jis(unsigned int);
__int64 wctomb_plt(_QWORD);
extern _UNKNOWN* SdkData_e7dba0;
extern _UNKNOWN SdkData_bc0923;
extern _UNKNOWN SdkData_cb8c54;
extern _UNKNOWN SdkData_cb8c5e;
extern _UNKNOWN SdkData_cd1a9e;
extern _UNKNOWN SdkData_cd1aa0;
extern _UNKNOWN SdkData_cd1b5c;
extern _UNKNOWN SdkData_cd1c18;
extern _UNKNOWN SdkData_cd5eea;
extern char SdkData_cb7940[5];
extern unsigned __int16 SdkData_cc475c[5172];
extern unsigned __int16 SdkData_cc6fc4[7896];
extern unsigned __int16 SdkData_ccad74[13973];
extern unsigned __int16 SdkData_cd63b2[6879];
__int64 musl_src_locale_799320(_QWORD* a1, unsigned __int8** a2,
                               unsigned __int64* a3, __int64* a4,
                               unsigned __int64* a5);

__int64 musl_src_locale_799320(_QWORD* a1, unsigned __int8** a2,
                               unsigned __int64* a3, __int64* a4,
                               unsigned __int64* a5)
{
  _QWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned int v12;
  _QWORD* v13;
  unsigned __int8* v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  char* v18;
  __int64* v19;
  unsigned int v20;
  __int64 result;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned __int16* v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  _BOOL8 v30;
  int v31;
  __int64 v32;
  int v33;
  unsigned int v34;
  int v35;
  unsigned int v37;
  int v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  unsigned __int16 v45;
  __int64 v46;
  __int64 v47;
  signed __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  char* v55;
  int v56;
  unsigned int v57;
  bool v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  char v63;
  char* v64;
  unsigned int v65;
  int v67;
  int v68;
  int v69;
  _QWORD* v70;
  int v71;
  unsigned int v72;
  unsigned __int64 v73;
  __int16 v74;
  bool v75;
  __int64 v76;
  __int64 v77;
  __int16 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  _BOOL8 v82;
  __int64 v83;
  _BYTE* v84;
  _DWORD* v85;
  unsigned __int64 v86;
  int v87;
  __int64 v88;
  __int64* v89;
  unsigned __int64* v90;
  __int64 v91;
  char v92;
  __int64 v93;
  __int64 v94;
  unsigned int v95;
  __int64 v96;
  int v97;
  int v98;
  int v99;
  __int64 v100;
  int v101;
  int v102;
  unsigned int v103;
  __int64 v104;
  unsigned __int64 v105;
  int v106;
  int v107;
  unsigned int v108;
  unsigned int v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  unsigned int v114;
  unsigned __int16* v115;
  __int64 v116;
  int v117;
  __int64 v118;
  unsigned __int16* v119;
  bool v120;
  int v121;
  unsigned int v122;
  unsigned __int16* v123;
  unsigned int v124;
  unsigned int v125;
  int v126;
  unsigned int v127;
  unsigned int v128;
  unsigned int v129;
  unsigned __int16* v130;
  int v131;
  int v132;
  int v133;
  unsigned int v134;
  int v135;
  unsigned int v136;
  int v137;
  int v138;
  unsigned __int64 v139;
  __int64 v140;
  _BYTE* v141;
  unsigned __int16* v142;
  unsigned __int16* v143;
  int v144;
  int v145;
  unsigned int v146;
  __int64 v147;
  int v148;
  __int64 v149;
  __int64 v150;
  __int16 v151;
  unsigned int v152;
  __int64 v153;
  unsigned int v154;
  unsigned int v155;
  unsigned int v156;
  int v157;
  int v158;
  __int64 v159;
  int v160;
  int v161;
  unsigned int v162;
  unsigned __int16* v163;
  unsigned int v164;
  __int64 v165;
  int v166;
  unsigned __int16* v167;
  unsigned __int16* v168;
  __int64 v169;
  unsigned __int16* v170;
  int v171;
  int v172;
  __int64 v173;
  unsigned __int16* v174;
  int v175;
  int v176;
  __int64 v177;
  unsigned __int16* v178;
  int v179;
  int v180;
  __int64 v181;
  unsigned int v182;
  __int64 v183;
  char* v184;
  char v185;
  char* v186;
  unsigned int v187;
  int v188;
  int v189;
  unsigned int v190;
  unsigned int v191;
  unsigned int v192;
  unsigned int v193;
  char v194;
  int v195;
  char* v196;
  unsigned __int8 v197;
  unsigned int v198;
  char v199;
  char* v200;
  int v201;
  unsigned int v202;
  unsigned int v203;
  char v204;
  char* v205;
  int v206;
  unsigned int v207;
  unsigned int v208;
  char* v209;
  unsigned int v210;
  _BYTE* v211;
  __int64 v212;
  int v213;
  int v214;
  int v215;
  int v216;
  unsigned int v217;
  unsigned int v218;
  __int64 v219;
  int v220;
  int v221;
  unsigned int v222;
  int v223;
  int v224;
  _QWORD* v225;
  char v226;
  char* v227;
  __int64 v228;
  _QWORD* v229;
  char* v231;
  __int64 v233;
  __int64 v236;
  unsigned __int64 v237;
  unsigned __int8* v238;
  struct {
    char* v239;
    char gap176_[4];
    char v240[8];
    unsigned int v241;
  } v239_;
  __int64 v242;

  v5 = a1;
  if (((unsigned __int8)a1 & 1) != 0) {
    v6 = (unsigned __int64)a1;
    v5 = nullptr;
  }
  else {
    {
      v6 = *a1;
      __asm__ volatile("" ::"r"(v6));
    }
  }
  v7 = (unsigned __int16)v6 >> 1;
  v242 = 0;
  {
    v8 = &SdkData_cb7940[(unsigned int)(v6 >> 16)];
    __asm__ volatile("" ::"r"(v8));
  }
  LODWORD(v9) = (unsigned __int8)SdkData_cb7940[v7];
  v12 = (unsigned __int8)*v8;
  v10 = v8 + 1;
  v11 = v12;
  {
    v231 = &SdkData_cb7940[v7 + 1];
    __asm__ volatile("" ::"r"(v231));
  }
  v13 = (_QWORD*)__getlocale_addr_plt();
  if (a2 == nullptr) {
    return 0;
  }
  {
    v14 = *a2;
    __asm__ volatile("" ::"r"(v14));
  }
  if (*a2 == nullptr) {
    return 0;
  }
  v227 = v10;
  {
    v15 = *a3;
    __asm__ volatile("" ::"r"(v15));
  }
  if (*a3 == 0) {
    return 0;
  }
  v16 = v13;
  {
    v17 = *v13;
    __asm__ volatile("" ::"r"(v17));
  }
  v19 = a4;
  {
    v18 = &SdkData_cb7940[v7 + 1];
    __asm__ volatile("" ::"r"(v18));
  }
  v20 = 4 * v9;
  result = 0;
  v222 = 4 * v11;
  v22 = -4 * v9;
  v226 = -8 * v9;
  v219 = (2 * v7) | 1;
  v23 = 3 - 4 * v9;
  v24 = 2 - 4 * v9;
  v25 = 1 - 4 * v9;
  v228 = v17;
  v229 = v5;
  v26 = (unsigned __int16*)&SdkData_cd5eea;
  *v16 = &SdkData_e7dba0;
LABEL_13:
  {
    v29 = *v14;
    __asm__ volatile("" ::"r"(v29));
  }
  switch ((int)v11) {
  case 192:
  case 195:
    if (v15 < 4) {
      goto LABEL_357;
    }
    v32 = v11 & 3;
    {
      v33 = v14[v32 ^ 2];
      __asm__ volatile("" ::"r"(v33));
    }
    {
      v29 = (v14[v32] << 24) | (v14[v32 ^ 1] << 16) | (v33 << 8) | v14[v32 ^ 3];
      __asm__ volatile("" ::"r"(v29));
    }
    {
      v34 = ((v14[v32] << 24) | (v14[v32 ^ 1] << 16) |
             (unsigned int)(v33 << 8)) >>
            16;
      __asm__ volatile("" ::"r"(v34));
    }
    {
      v35 = (v14[v32] << 24) | (v14[v32 ^ 1] << 16) | (v33 << 8) & 0x1F800;
      __asm__ volatile("" ::"r"(v35));
    }
    if (v34 <= 0x10 && v35 != 55296) {
      goto LABEL_80;
    }
    goto LABEL_356;
  case 193:
  case 194:
  case 196:
  case 197:
    if (v15 == 1) {
      goto LABEL_357;
    }
    v233 = v11;
    v30 = !(v11 & 1);
    {
      v29 = v14[v30] | (v14[v11 & 1] << 8);
      __asm__ volatile("" ::"r"(v29));
    }
    {
      v31 = (v14[v11 & 1] << 8) & 0xFC00;
      __asm__ volatile("" ::"r"(v31));
    }
    if (v31 != 55296) {
      if (v31 == 56320) {
        goto LABEL_356;
      }
      goto LABEL_17;
    }
    if ((v11 & 0xFE) == 0xC4) {
      goto LABEL_356;
    }
    if (v15 < 4) {
      goto LABEL_357;
    }
    {
      v37 = (v14[v30 + 2] | (v14[(v11 & 1) + 2] << 8)) - 56320;
      __asm__ volatile("" ::"r"(v37));
    }
    if (v37 > 0x3FF) {
      goto LABEL_356;
    }
    v28 = 4;
    v29 = v37 + (v29 << 10) - 56557568;
    break;
  case 198:
    if (v15 < 4) {
      goto LABEL_357;
    }
    {
      v29 = *(_DWORD*)v14;
      __asm__ volatile("" ::"r"(v29));
    }
    if (HIWORD(*(_DWORD*)v14) > 0x10u ||
        (*(_DWORD*)v14 & 0xFFFFF800) == 55296) {
      goto LABEL_356;
    }
  LABEL_80:
    v233 = v11;
    v28 = 4;
    break;
  case 199:
    if ((v29 & 0x80) != 0) {
      goto LABEL_356;
    }
    goto LABEL_97;
  case 200:
    v233 = v11;
    if ((v29 & 0x80) == 0) {
      goto LABEL_98;
    }
    v95 = v20;
    v96 = result;
    v224 = v25;
    v97 = v24;
    v98 = v23;
    v225 = v16;
    v99 = v22;
    v100 = mbrtowc_plt((__int64)&v239_.v241, (__int64)v14, v15, (__int64)&v242);
    if (v100 == -2) {
      v39 = 22;
      goto LABEL_363;
    }
    v18 = v231;
    v28 = v100;
    if (v100 == -1) {
      goto LABEL_360;
    }
    v29 = v239_.v241;
    v19 = a4;
    v22 = v99;
    v16 = v225;
    v23 = v98;
    v24 = v97;
    result = v96;
    v20 = v95;
    v26 = (unsigned __int16*)&SdkData_cd5eea;
    v25 = v224;
    break;
  case 202:
  case 204: {
    v27 = *((_DWORD*)v229 + 2);
    __asm__ volatile("" ::"r"(v27));
  }
    if (v27 != 0) {
      goto LABEL_10;
    }
    if (v15 == 1) {
      goto LABEL_357;
    }
    {
      v101 = v14[1] | (v29 << 8);
      __asm__ volatile("" ::"r"(v101));
    }
    if (v101 == 65534) {
      v27 = 197;
    }
    else {
      v27 = 196;
    }
    if (v101 == 65534) {
      v102 = 193;
    }
    else {
      v102 = 194;
    }
    if ((_DWORD)v11 != 204) {
      v27 = v102;
    }
    v58 = v101 == 65279 || v101 == 65534;
    *((_DWORD*)v229 + 2) = v27;
    v59 = 2;
    goto LABEL_154;
  case 203: {
    v27 = *((_DWORD*)v229 + 2);
    __asm__ volatile("" ::"r"(v27));
  }
    if (v27 != 0) {
    LABEL_10:
      v28 = 0;
    }
    else {
      if (v15 < 4) {
      LABEL_357:
        v39 = 22;
        goto LABEL_358;
      }
      v57 = __builtin_bswap32((unsigned int)(*(_DWORD*)v14));
      if (v57 == -131072) {
        v27 = 195;
      }
      else {
        v27 = 192;
      }
      v58 = v57 == 65279 || v57 == -131072;
      *((_DWORD*)v229 + 2) = v27;
      v59 = 4;
    LABEL_154:
      if (v58) {
        v28 = v59;
      }
      else {
        v28 = 0;
      }
    }
    v233 = (unsigned __int8)v27;
    goto LABEL_12;
  case 208:
    v233 = v11;
    if ((v29 & 0x80) == 0) {
      goto LABEL_98;
    }
    if (v15 == 1) {
      goto LABEL_357;
    }
    {
      v56 = v14[1];
      __asm__ volatile("" ::"r"(v56));
    }
    if (v29 != 142) {
      v39 = 84;
      if (v29 - 161 > 0x53) {
        goto LABEL_358;
      }
      v129 = v56 - 161;
      if (v129 > 0x5D) {
        goto LABEL_358;
      }
      {
        v130 = &SdkData_cc6fc4[94 * v29 - 15134];
        __asm__ volatile("" ::"r"(v130));
      }
      {
        v29 = v130[v129];
        __asm__ volatile("" ::"r"(v29));
      }
      if (v130[v129] == 0) {
        goto LABEL_358;
      }
      goto LABEL_249;
    }
    if ((unsigned int)(v56 - 224) < 0xFFFFFFC1) {
      goto LABEL_356;
    }
    v28 = 2;
    v29 = v56 + 65216;
    break;
  case 209:
    v233 = v11;
    if ((v29 & 0x80) == 0) {
      goto LABEL_98;
    }
    if (v29 - 161 <= 0x3E) {
      v29 += 65216;
      goto LABEL_98;
    }
    if (v15 == 1) {
      goto LABEL_357;
    }
    {
      v124 = v14[1];
      __asm__ volatile("" ::"r"(v124));
    }
    v125 = v29 - 129;
    if (v29 - 129 >= 0x1F) {
      if ((v29 & 0xF0) != 0xE0) {
        goto LABEL_356;
      }
      v125 = v29 - 193;
    }
    v126 = 2 * v125;
    if (v124 - 64 > 0x5E) {
      if (v124 - 159 < 0x5E) {
        ++v126;
        v124 -= 159;
      }
    }
    else {
      if (v124 == 127) {
        goto LABEL_356;
      }
      v124 = v124 + ((char)v124 >> 7) - 64;
    }
    {
      v142 = &SdkData_cc6fc4[94 * v126];
      __asm__ volatile("" ::"r"(v142));
    }
    {
      v29 = v142[v124];
      __asm__ volatile("" ::"r"(v29));
    }
    if (v142[v124] == 0) {
    LABEL_356:
      v39 = 84;
      goto LABEL_358;
    }
  LABEL_17:
    v28 = 2;
    break;
  case 210:
    if ((v29 & 0x80) != 0) {
      goto LABEL_356;
    }
    if (v29 == 27) {
      if (v15 < 3) {
        goto LABEL_357;
      }
      {
        v67 = v14[1];
        __asm__ volatile("" ::"r"(v67));
      }
      if (v67 != 40 && v67 != 36) {
        goto LABEL_356;
      }
      v39 = 84;
      if (v67 == 36) {
        v68 = 128;
      }
      else {
        v68 = 0;
      }
      {
        v69 = v68 + v14[2];
        __asm__ volatile("" ::"r"(v69));
      }
      if (v69 > 73) {
        switch (v69) {
        case 74:
          v70 = v229;
          v71 = 1;
          break;
        case 192:
          v70 = v229;
          v71 = 2;
          break;
        case 194:
          v70 = v229;
          v71 = 3;
          break;
        default:
          goto LABEL_358;
        }
        goto LABEL_272;
      }
      if (v69 == 66) {
        *((_DWORD*)v229 + 2) = 0;
      }
      else {
        if (v69 != 73) {
          goto LABEL_358;
        }
        v70 = v229;
        v71 = 4;
      LABEL_272:
        *((_DWORD*)v70 + 2) = v71;
      }
      v28 = 3;
      v233 = 210;
      goto LABEL_12;
    }
    v233 = v11;
    {
      v106 = *((_DWORD*)v229 + 2);
      __asm__ volatile("" ::"r"(v106));
    }
    if ((unsigned int)(v106 - 2) < 2) {
      if (v15 == 1) {
        goto LABEL_357;
      }
      v39 = 84;
      if (v29 - 33 > 0x53) {
        goto LABEL_358;
      }
      {
        v122 = v14[1] - 33;
        __asm__ volatile("" ::"r"(v122));
      }
      if (v122 > 0x5D) {
        goto LABEL_358;
      }
      {
        v123 = &SdkData_cc6fc4[94 * v29 - 3102];
        __asm__ volatile("" ::"r"(v123));
      }
      {
        v29 = v123[v122];
        __asm__ volatile("" ::"r"(v29));
      }
      if (v123[v122] == 0) {
        goto LABEL_358;
      }
      goto LABEL_249;
    }
    if (v106 == 4) {
      if (v29 - 96 < 0x1F) {
        goto LABEL_356;
      }
      if (v29 - 33 < 0x5E) {
        v29 += 65344;
      }
    }
    else if (v106 == 1) {
      if (v29 == 92) {
        v107 = 165;
      }
      else {
        v107 = *v14;
        __asm__ volatile("" ::"r"(v107));
      }
      if (v107 == 126) {
        v29 = 8254;
      }
      else {
        v29 = v107;
      }
    }
  LABEL_98:
    v28 = 1;
    break;
  case 216:
  case 217:
    if ((v29 & 0x80) != 0) {
      goto LABEL_170;
    }
    goto LABEL_97;
  case 218:
    if ((v29 & 0x80) == 0) {
    LABEL_97:
      v233 = v11;
      goto LABEL_98;
    }
    if (v29 < 0xA1) {
      goto LABEL_356;
    }
  LABEL_170:
    v108 = v29 - 129;
    if (v29 - 129 > 0x7D) {
      goto LABEL_356;
    }
    if (v15 == 1) {
      goto LABEL_357;
    }
    {
      v109 = v14[1];
      __asm__ volatile("" ::"r"(v109));
    }
    if (v109 <= 0xA0 && (_DWORD)v11 == 218) {
      goto LABEL_356;
    }
    v233 = v11;
    if (v109 == 127 || (v110 = v109 - 64, v109 - 64 >= 0xBF)) {
      v39 = 84;
      if (v109 - 58 < 0xFFFFFFF6 || (_DWORD)v11 != 216) {
        goto LABEL_358;
      }
      if (v15 < 4) {
        goto LABEL_357;
      }
      {
        v112 = v14[2] - 129;
        __asm__ volatile("" ::"r"(v112));
      }
      if (v112 > 0x7E) {
        goto LABEL_358;
      }
      if ((unsigned int)v14[3] - 48 > 9) {
        goto LABEL_356;
      }
      v113 = 0;
      {
        v29 = 10 * v112 + 1260 * (v109 + 10 * v108) + v14[3] - 60400;
        __asm__ volatile("" ::"r"(v29));
      }
      do {
        v114 = v29 - v113;
        v115 = (unsigned __int16*)&SdkData_cb8c5e;
        v116 = 0;
        v117 = 0;
        do {
          v118 = 190;
          v119 = v115;
          do {
            if (*(v119 - 5) - v113 <= v114) {
              ++v117;
            }
            if (*(v119 - 4) - v113 <= v114) {
              ++v117;
            }
            if (*(v119 - 3) - v113 <= v114) {
              ++v117;
            }
            if (*(v119 - 2) - v113 <= v114) {
              ++v117;
            }
            if (*(v119 - 1) - v113 <= v114) {
              ++v117;
            }
            if (*v119 - v113 <= v114) {
              ++v117;
            }
            if (v119[1] - v113 <= v114) {
              ++v117;
            }
            if (v119[2] - v113 <= v114) {
              ++v117;
            }
            {
              v120 = v119[3] - v113 > v114;
              __asm__ volatile("" ::"r"(v120));
            }
            {
              v121 = v119[4];
              __asm__ volatile("" ::"r"(v121));
            }
            v119 += 10;
            if (!v120) {
              ++v117;
            }
            if (v121 - v113 <= v114) {
              ++v117;
            }
            v118 -= 10;
          } while (v118 != 0);
          ++v116;
          v115 += 190;
        } while (v116 != 126);
        v113 = v29 + 1;
        v29 += v117;
        v28 = 4;
      } while (v113 <= v29);
    }
    else {
      v111 = v109 - 65;
      v28 = 2;
      if (v110 > 0x3F) {
        v110 = v111;
      }
      {
        v29 = *((unsigned __int16*)&SdkData_cb8c54 + 190 * v108 + v110);
        __asm__ volatile("" ::"r"(v29));
      }
    }
    break;
  case 224:
    v233 = v11;
    if ((v29 & 0x80) == 0) {
      goto LABEL_98;
    }
    if (v15 == 1) {
      goto LABEL_357;
    }
    {
      v38 = v14[1];
      __asm__ volatile("" ::"r"(v38));
    }
    v39 = 84;
    if ((unsigned int)(v38 - 127) < 0x22) {
      goto LABEL_358;
    }
    v40 = v38 - 64;
    if ((unsigned int)(v38 - 64) > 0xBE) {
      goto LABEL_358;
    }
    v41 = v38 - 98;
    if (v40 <= 0x3E) {
      v41 = v40;
    }
    if (v29 - 161 < 0x59) {
      if (v41 == 66) {
        v131 = 0x20000;
      }
      else {
        v131 = 0;
      }
      {
        v132 = SdkData_ccad74[157 * v29 - 25277 + v41];
        __asm__ volatile("" ::"r"(v132));
      }
      if (v41 == 60) {
        v131 = 0x20000;
      }
      if (v41 == 58) {
        v133 = 0x20000;
      }
      else {
        v133 = v131;
      }
      if (v29 != 200) {
        v133 = 0;
      }
      v29 = v133 | v132;
      if ((v133 | v132) == 0) {
        goto LABEL_358;
      }
    LABEL_249:
      v28 = 2;
    }
    else {
      v42 = v29 - 135;
      if (v29 - 135 > 0x77) {
        goto LABEL_358;
      }
      v43 = result;
      if (v29 >= 0xA1) {
        v42 = v29 - 224;
      }
      v44 = v41 + 157 * v42;
      {
        v45 = SdkData_cc475c[v44];
        __asm__ volatile("" ::"r"(v45));
      }
      {
        v29 = v45 |
              (((SdkData_cc475c[(v44 >> 4) + 4867] >> (v44 & 0xF)) & 1) << 17);
        __asm__ volatile("" ::"r"(v29));
      }
      if ((v45 & 0xFF00 |
           (((SdkData_cc475c[(v44 >> 4) + 4867] >> (v44 & 0xF)) & 1) << 17)) ==
          0xDC00) {
        v213 = v23;
        v215 = v22;
        v217 = v20;
        v225 = v16;
        v239_.v239 = v239_.v240;
        v46 = find_charmap("utf8");
        v236 = 8;
        v237 = 4;
        v238 = (unsigned __int8*)&SdkData_bc0923 + (unsigned __int8)v45;
        v47 = musl_src_locale_799320((_QWORD*)(v219 | (v46 << 16)), &v238,
                                     &v237, (__int64*)&v239_.v239, &v236);
        v48 = v239_.v239 - v239_.v240;
        {
          v49 = *a5 - (v239_.v239 - v239_.v240);
          __asm__ volatile("" ::"r"(v49));
        }
        if (*a5 < v239_.v239 - v239_.v240) {
          goto LABEL_361;
        }
        v223 = v25;
        if (v47 != 0) {
          ++v43;
        }
        {
          v50 = *a4;
          __asm__ volatile("" ::"r"(v50));
        }
        memcpy_plt(*a4, (__int64)v239_.v240, v239_.v239 - v239_.v240);
        v51 = v50 + v48;
        v25 = v223;
        v18 = v231;
        v19 = a4;
        result = v43;
        v28 = 2;
        v23 = v213;
        v22 = v215;
        v20 = v217;
        v26 = (unsigned __int16*)&SdkData_cd5eea;
        *a4 = v51;
        v233 = 224;
        *a5 = v49;
        v16 = v225;
        goto LABEL_12;
      }
      if (v29 == 0) {
        goto LABEL_356;
      }
      v28 = 2;
    }
    break;
  case 232:
    v233 = v11;
    if ((v29 & 0x80) == 0) {
      goto LABEL_98;
    }
    if (v15 == 1) {
      goto LABEL_357;
    }
    {
      v52 = v14[1];
      __asm__ volatile("" ::"r"(v52));
    }
    v53 = v29 - 161;
    if (v29 - 161 <= 0x5C) {
      v54 = v52 - 161;
      if (v52 - 161 < 0x5E) {
        v55 = (char*)&SdkData_cd1a9e + 188 * v53;
        {
          v29 = *(unsigned __int16*)&v55[2 * v54];
          __asm__ volatile("" ::"r"(v29));
        }
        if (*(_WORD*)&v55[2 * v54] == 0) {
          goto LABEL_356;
        }
        goto LABEL_17;
      }
    }
    v127 = v29 - 129;
    if (v29 - 129 > 0x45 || v29 == 198 && v52 > 0x52) {
      goto LABEL_356;
    }
    v128 = v52 - 65;
    if (v52 - 65 >= 0x1A) {
      if (v52 - 97 > 0x19) {
        if (v52 - 129 > 0x7D) {
          goto LABEL_356;
        }
        v128 = v52 - 77;
      }
      else {
        v128 = v52 - 71;
      }
    }
    v160 = 178 * v127;
    v161 = 84 * v53 + 5696;
    if (v127 >= 0x20) {
      v160 = v161;
    }
    v162 = 44032;
    v29 = v160 + v128 + 44032;
    do {
      v163 = (unsigned __int16*)&SdkData_cd1aa0;
      v164 = v29 - v162;
      v165 = 0;
      v166 = 0;
      v167 = (unsigned __int16*)&SdkData_cd1b5c;
      v168 = (unsigned __int16*)&SdkData_cd1c18;
      do {
        v169 = 94;
        v170 = v163;
        do {
          {
            v120 = *(v170 - 1) - v162 > v164;
            __asm__ volatile("" ::"r"(v120));
          }
          {
            v172 = *v170;
            __asm__ volatile("" ::"r"(v172));
          }
          v170 += 2;
          v171 = v172;
          if (!v120) {
            ++v166;
          }
          if (v171 - v162 <= v164) {
            ++v166;
          }
          v169 -= 2;
        } while (v169 != 0);
        v173 = 94;
        v174 = v167;
        do {
          {
            v120 = *(v174 - 1) - v162 > v164;
            __asm__ volatile("" ::"r"(v120));
          }
          {
            v176 = *v174;
            __asm__ volatile("" ::"r"(v176));
          }
          v174 += 2;
          v175 = v176;
          if (!v120) {
            ++v166;
          }
          if (v175 - v162 <= v164) {
            ++v166;
          }
          v173 -= 2;
        } while (v173 != 0);
        v177 = 94;
        v178 = v168;
        do {
          {
            v120 = *(v178 - 1) - v162 > v164;
            __asm__ volatile("" ::"r"(v120));
          }
          {
            v180 = *v178;
            __asm__ volatile("" ::"r"(v180));
          }
          v178 += 2;
          v179 = v180;
          if (!v120) {
            ++v166;
          }
          if (v179 - v162 <= v164) {
            ++v166;
          }
          v177 -= 2;
        } while (v177 != 0);
        v165 += 3;
        v163 += 282;
        v167 += 282;
        v168 += 282;
      } while (v165 != 93);
      v162 = v29 + 1;
      v29 += v166;
      v28 = 2;
    } while (v162 <= v29);
    break;
  default:
    v233 = v11;
    if (*v14 != 0) {
      v60 = v29 - v222;
      if (v29 >= v222) {
        v61 = (unsigned int)v60 >> 2;
        {
          v62 = &v227[v60];
          __asm__ volatile("" ::"r"(v62));
        }
        v63 = 2 * ((v29 - v222) & 3);
        {
          v64 = &v62[v61];
          __asm__ volatile("" ::"r"(v64));
        }
        LODWORD(v62) = (unsigned __int8)*v64 >> v63;
        {
          v65 = ((unsigned __int8)v64[1] << (8 - v63)) & 0x3FC;
          __asm__ volatile("" ::"r"(v65));
        }
        v29 = v65 | (unsigned int)v62;
        if (v65 >= 0x100) {
          v29 = v26[v29 - 256];
          __asm__ volatile("" ::"r"(v29));
        }
      }
      if (v29 == 0) {
        goto LABEL_356;
      }
    }
    goto LABEL_98;
  }
  switch ((char)v9) {
  case -64:
  case -61:
    goto LABEL_131;
  case -63:
  case -62:
  case -60:
  case -59:
  case -54:
    v72 = HIWORD(v29);
    if (HIWORD(v29) == 0) {
      goto LABEL_101;
    }
    goto LABEL_106;
  case -58: {
    v79 = *a5 - 4;
    __asm__ volatile("" ::"r"(v79));
  }
    if (*a5 < 4) {
      goto LABEL_355;
    }
    v85 = (_DWORD*)*v19;
    LOBYTE(v9) = -58;
    *(_DWORD*)v85 = v29;
    v84 = v85 + 1;
    goto LABEL_320;
  case -57:
    if (v29 >= 0x80) {
      goto LABEL_322;
    }
    goto LABEL_323;
  case -56:
    v225 = v16;
    v214 = v23;
    v216 = v22;
    {
      v86 = *a5;
      __asm__ volatile("" ::"r"(v86));
    }
    v218 = v20;
    v212 = result;
    v220 = v24;
    if (*a5 > 3) {
      {
        v9 = *v19;
        __asm__ volatile("" ::"r"(v9));
      }
      v103 = wctomb_plt(*v19);
      if (v103 <= 4) {
        v90 = a5;
        v89 = a4;
        v88 = v103;
        goto LABEL_159;
      }
    LABEL_360:
      v39 = 84;
    }
    else {
      v87 = wctomb_plt(v239_.v240);
      v88 = v87;
      if (v86 >= v87) {
        v89 = a4;
        v90 = a5;
        {
          v9 = *a4;
          __asm__ volatile("" ::"r"(v9));
        }
        memcpy_plt(*a4, (__int64)v239_.v240, v87);
      LABEL_159:
        v104 = v9 + v88;
        v22 = v216;
        v20 = v218;
        v23 = v214;
        v19 = v89;
        LOBYTE(v9) = -56;
        v26 = (unsigned __int16*)&SdkData_cd5eea;
        result = v212;
        v18 = v231;
        *v89 = v104;
        v105 = v86 - v88;
        v16 = v225;
        v24 = v220;
        *v90 = v105;
        goto LABEL_12;
      }
    LABEL_361:
      v39 = 7;
    }
  LABEL_363:
    v16 = v225;
    goto LABEL_358;
  case -53:
    LOBYTE(v9) = -64;
  LABEL_131:
    {
      v79 = *a5 - 4;
      __asm__ volatile("" ::"r"(v79));
    }
    if (*a5 < 4) {
      goto LABEL_355;
    }
    {
      v93 = *v19;
      __asm__ volatile("" ::"r"(v93));
    }
    v94 = v9 & 3;
    *(_BYTE*)(v93 + v94) = HIBYTE(v29);
    *(_BYTE*)(v93 + (v94 ^ 1)) = BYTE2(v29);
    *(_BYTE*)(v93 + (v94 ^ 2)) = BYTE1(v29);
    *(_BYTE*)(v93 + (v94 ^ 3)) = v29;
    v84 = (_BYTE*)(v93 + 4);
    goto LABEL_320;
  case -52:
    LOBYTE(v9) = -60;
    v72 = HIWORD(v29);
    if (HIWORD(v29) != 0) {
    LABEL_106:
      {
        v73 = *a5;
        __asm__ volatile("" ::"r"(v73));
      }
      if ((v9 & 0xFE) != 0xC4) {
        v79 = v73 - 4;
        if (v73 < 4) {
          goto LABEL_355;
        }
        {
          v80 = *v19;
          __asm__ volatile("" ::"r"(v80));
        }
        v81 = v9 & 1;
        *(_BYTE*)(v80 + v81) = ((v29 - 0x10000) >> 18) | 0xD8;
        v82 = !(v9 & 1);
        *(_BYTE*)(v80 + v82) = (v29 - 0x10000) >> 10;
        v83 = v80 + 2;
        *(_BYTE*)(v83 + v81) = BYTE1(v29) & 3 | 0xDC;
        *(_BYTE*)(v83 + v82) = v29;
        v84 = (_BYTE*)(v80 + 4);
        goto LABEL_320;
      }
    }
    else {
    LABEL_101:
      {
        v73 = *a5;
        __asm__ volatile("" ::"r"(v73));
      }
    }
    v75 = v73 >= 2;
    v76 = v73 - 2;
    if (!v75) {
      goto LABEL_355;
    }
    {
      v77 = *v19;
      __asm__ volatile("" ::"r"(v77));
    }
    if (v72 != 0) {
      v78 = -3;
    }
    else {
      v78 = v29;
    }
    *(_BYTE*)(v77 + (v9 & 1)) = HIBYTE(v78);
    *(_BYTE*)(v77 + !(v9 & 1)) = v78;
    *v19 = v77 + 2;
    *a5 = v76;
    goto LABEL_12;
  case -48:
    if (v29 < 0x80) {
      goto LABEL_353;
    }
    if (v29 - 65377 <= 0x3E) {
      v74 = v29 + 3776;
      goto LABEL_263;
    }
    if (v29 == 28711) {
      v74 = 17005;
      goto LABEL_263;
    }
    v134 = 6879;
    v135 = 3439;
    v136 = 28711;
    v137 = 3439;
    v138 = 0;
    break;
  case -47:
    if (v29 < 0x80) {
      goto LABEL_353;
    }
    if (v29 == 8254) {
      ++result;
      LOBYTE(v29) = 126;
      goto LABEL_353;
    }
    if (v29 == 165) {
      ++result;
      LOBYTE(v29) = 92;
      goto LABEL_353;
    }
    if (v29 - 65377 <= 0x3E) {
      LOBYTE(v29) = v29 + 64;
      goto LABEL_353;
    }
    v143 = v26;
    v221 = v24;
    v144 = v23;
    v225 = v16;
    v145 = v22;
    v146 = v20;
    v147 = result;
    v152 = uni_to_jis(v29);
    if (v152 == 0) {
    LABEL_290:
      v19 = a4;
      v18 = v231;
      v22 = v145;
      v16 = v225;
      v23 = v144;
      result = v147;
      v20 = v146;
      v26 = v143;
      v24 = v221;
      goto LABEL_322;
    }
    v19 = a4;
    v18 = v231;
    {
      v153 = *a5 - 2;
      __asm__ volatile("" ::"r"(v153));
    }
    if (*a5 < 2) {
      goto LABEL_361;
    }
    v154 = v152;
    v155 = v152 >> 8;
    result = v147;
    v20 = v146;
    v22 = v145;
    v23 = v144;
    v26 = v143;
    v156 = v155 + 1;
    if (v155 >= 0x5F) {
      v157 = 176;
    }
    else {
      v157 = 112;
    }
    v158 = v157 + (v156 >> 1);
    {
      v159 = *a4;
      __asm__ volatile("" ::"r"(v159));
    }
    *(_BYTE*)*a4 = v158;
    if ((v154 & 0x100) != 0) {
      v154 += (unsigned __int8)v154 / 0x60u + 31;
    }
    else {
      LOBYTE(v154) = v154 + 126;
    }
    *(_BYTE*)(v159 + 1) = v154;
    v16 = v225;
    v24 = v221;
    *a4 = v159 + 2;
    *a5 = v153;
    LOBYTE(v9) = -47;
    goto LABEL_12;
  case -46:
    if (v29 < 0x80) {
      goto LABEL_353;
    }
    if (v29 - 65377 < 0x3F || v29 == 8254 || v29 == 165) {
      {
        v79 = *a5 - 7;
        __asm__ volatile("" ::"r"(v79));
      }
      if (*a5 < 7) {
        goto LABEL_355;
      }
      {
        v91 = *v19;
        __asm__ volatile("" ::"r"(v91));
      }
      *(_WORD*)*v19 = 10267;
      if (v29 == 8254) {
        *(_BYTE*)(v91 + 2) = 74;
        v92 = 126;
      }
      else if (v29 == 165) {
        *(_BYTE*)(v91 + 2) = 74;
        v92 = 92;
      }
      else {
        *(_BYTE*)(v91 + 2) = 73;
        v92 = v29 - 64;
      }
      *(_BYTE*)(v91 + 3) = v92;
      LOBYTE(v9) = -46;
      *(_WORD*)(v91 + 4) = 10267;
      *v19 = v91 + 7;
      *(_BYTE*)(v91 + 6) = 66;
      goto LABEL_321;
    }
    v143 = v26;
    v221 = v24;
    v144 = v23;
    v225 = v16;
    v145 = v22;
    v146 = v20;
    v147 = result;
    v148 = uni_to_jis(v29);
    if (v148 == 0) {
      goto LABEL_290;
    }
    v19 = a4;
    v18 = v231;
    {
      v149 = *a5 - 8;
      __asm__ volatile("" ::"r"(v149));
    }
    if (*a5 < 8) {
      goto LABEL_361;
    }
    {
      v150 = *a4;
      __asm__ volatile("" ::"r"(v150));
    }
    v151 = v148;
    v22 = v145;
    v23 = v144;
    v16 = v225;
    v24 = v221;
    v26 = v143;
    LOBYTE(v9) = -46;
    result = v147;
    v20 = v146;
    *(_WORD*)v150 = 9243;
    *(_BYTE*)(v150 + 4) = v151;
    *(_BYTE*)(v150 + 2) = 66;
    *(_BYTE*)(v150 + 7) = 66;
    *(_WORD*)(v150 + 5) = 10267;
    *(_BYTE*)(v150 + 3) = HIBYTE(v151);
    *a4 = v150 + 8;
    *a5 = v149;
    goto LABEL_12;
  default:
    goto LABEL_323;
  }
  do {
    if (v134 == 1) {
      do {
      LABEL_322:
        ++result;
        v29 = 42;
      LABEL_323:
        if (*a5 == 0) {
          goto LABEL_355;
        }
        if (v29 <= 0xFF) {
          v181 = v29 - v20;
          v182 = v29;
          if (v29 >= v20) {
            v183 = (unsigned int)v181 >> 2;
            {
              v184 = &v18[v181];
              __asm__ volatile("" ::"r"(v184));
            }
            v185 = 2 * ((v29 - v20) & 3);
            {
              v186 = &v184[v183];
              __asm__ volatile("" ::"r"(v186));
            }
            LODWORD(v184) = (unsigned __int8)*v186 >> v185;
            {
              v187 = ((unsigned __int8)v186[1] << (8 - v185)) & 0x3FC;
              __asm__ volatile("" ::"r"(v187));
            }
            v182 = v187 | (unsigned int)v184;
            if (v187 >= 0x100) {
              v182 = v26[v182 - 256];
              __asm__ volatile("" ::"r"(v182));
            }
          }
          if (v29 == v182) {
            goto LABEL_353;
          }
        }
      } while ((unsigned __int8)v9 > 0x3Fu);
      v188 = 4 * (v9 & 0x3F);
      v189 = 0;
      v190 = v23 + v188;
      v191 = v22 + v188;
      v192 = v24 + v188;
      v193 = v25 + v188;
      v194 = v226 + 8 * (v9 & 0x3F);
      while (1) {
        v195 = v188 + v189;
        if (v188 + v189 >= v20) {
          {
            v196 = &v18[v195 + v22 + (v191 >> 2)];
            __asm__ volatile("" ::"r"(v196));
          }
          {
            v197 = *v196;
            __asm__ volatile("" ::"r"(v197));
          }
          LOBYTE(v196) = v196[1];
          v195 = v197 | (((unsigned __int8)v196 & 3) << 8);
          if (((unsigned __int8)v196 & 3) << 8 != 0) {
            v195 = v26[v195 - 256];
            __asm__ volatile("" ::"r"(v195));
          }
        }
        if (v29 == v195) {
          LOBYTE(v29) = v188 + v189;
          goto LABEL_353;
        }
        v198 = v188 + v189 + 1;
        if (v198 >= v20) {
          v199 = (v194 + 2) & 6;
          {
            v200 = &v18[v188 + v189 + v25 + (v193 >> 2)];
            __asm__ volatile("" ::"r"(v200));
          }
          v201 = (unsigned __int8)*v200 >> v199;
          {
            v202 = ((unsigned __int8)v200[1] << (8 - v199)) & 0x3FC;
            __asm__ volatile("" ::"r"(v202));
          }
          v198 = v202 | v201;
          if (v202 >= 0x100) {
            v198 = v26[v198 - 256];
            __asm__ volatile("" ::"r"(v198));
          }
        }
        if (v29 == v198) {
          LOBYTE(v29) = v188 + v189 + 1;
          goto LABEL_353;
        }
        v203 = v188 + v189 + 2;
        if (v203 >= v20) {
          v204 = (v194 + 4) & 6;
          {
            v205 = &v18[v188 + v189 + v24 + (v192 >> 2)];
            __asm__ volatile("" ::"r"(v205));
          }
          v206 = (unsigned __int8)*v205 >> v204;
          {
            v207 = ((unsigned __int8)v205[1] << (8 - v204)) & 0x3FC;
            __asm__ volatile("" ::"r"(v207));
          }
          v203 = v207 | v206;
          if (v207 >= 0x100) {
            v203 = v26[v203 - 256];
            __asm__ volatile("" ::"r"(v203));
          }
        }
        if (v29 == v203) {
          LOBYTE(v29) = v188 + v189 + 2;
          goto LABEL_353;
        }
        v208 = v188 + v189 + 3;
        if (v208 >= v20) {
          {
            v209 = &v18[v188 + v189 + v23 + (v190 >> 2)];
            __asm__ volatile("" ::"r"(v209));
          }
          {
            v210 = (unsigned __int8)v209[1];
            __asm__ volatile("" ::"r"(v210));
          }
          v208 = ((unsigned __int8)*v209 >> 6) | (4 * v210);
          if (v210 >= 0x40) {
            v208 = v26[v208 - 256];
            __asm__ volatile("" ::"r"(v208));
          }
        }
        if (v29 == v208) {
          break;
        }
        v189 += 4;
        v190 += 4;
        v194 += 8;
        v192 += 4;
        v193 += 4;
        v191 += 4;
        if (v188 + v189 == 256) {
          goto LABEL_322;
        }
      }
      LOBYTE(v29) = v188 + v189 + 3;
    LABEL_353:
      if (*a5 == 0) {
        goto LABEL_355;
      }
      v211 = (_BYTE*)*v19;
      {
        v79 = *a5 - 1;
        __asm__ volatile("" ::"r"(v79));
      }
      *v211 = v29;
      v84 = v211 + 1;
    LABEL_320:
      *v19 = (__int64)v84;
    LABEL_321:
      *a5 = v79;
    LABEL_12:
      v14 += v28;
      v15 -= v28;
      *a2 = v14;
      v11 = v233;
      *a3 = v15;
      if (v15 == 0) {
        goto LABEL_359;
      }
      goto LABEL_13;
    }
    v134 -= v137;
    if (v29 >= v136) {
      v138 = v135;
    }
    else {
      v134 = v137;
    }
    v137 = v134 >> 1;
    v135 = (v134 >> 1) + v138;
    {
      v139 = SdkData_cd63b2[v135];
      __asm__ volatile("" ::"r"(v139));
    }
    {
      v136 = SdkData_cc6fc4[94 * (unsigned int)(v139 >> 8) +
                            (unsigned __int8)v139];
      __asm__ volatile("" ::"r"(v136));
    }
  } while (v29 != v136);
  v74 = v139 + 8481;
LABEL_263:
  {
    v140 = *a5 - 2;
    __asm__ volatile("" ::"r"(v140));
  }
  if (*a5 >= 2) {
    v141 = (_BYTE*)*v19;
    LOBYTE(v9) = -48;
    v141[1] = v74 ^ 0x80;
    *v141 = HIBYTE(v74) ^ 0x80;
    *v19 = (__int64)(v141 + 2);
    *a5 = v140;
    goto LABEL_12;
  }
LABEL_355:
  v39 = 7;
LABEL_358:
  *(_DWORD*)__errno_location_plt() = v39;
  result = -1;
LABEL_359:
  *v16 = v228;
  return result;
}

#pragma GCC visibility pop
