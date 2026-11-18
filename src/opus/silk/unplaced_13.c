#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 silk_LPC_analysis_filter(__int64, __int64, __int16*, int, int);
extern _UNKNOWN* MovieData_c09f0;
__int64 opus_silk_46260(_BYTE* a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6, __int16 a7, __int16 a8,
                        __int16 a9, __int16 a10);
__int64 opus_silk_477a0(int* a1, _DWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                        __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                        __int64 a10, __int64 a11, __int64 a12, __int64 a13,
                        unsigned int a14, __int16 a15);

__int64 opus_silk_46260(_BYTE* a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6, __int16 a7, __int16 a8,
                        __int16 a9, __int16 a10)
{
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;
  __int16 v19;
  bool v20;
  __int16 v21;
  __int16 v22;
  int v23;
  _QWORD* v24;
  __int64 v25;
  __int16 v26;
  unsigned __int64 v27;
  unsigned int v28;
  __int64 v29;
  char* v30;
  char* v31;
  unsigned int v32;
  char* v33;
  char v34;
  unsigned int v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int16 v41;
  int v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  int v57;
  int v58;
  __int16 v59;
  int v60;
  int v61;
  int v62;
  int v63;
  unsigned __int64 v64;
  _BYTE* v65;
  int v66;
  __int64 v67;
  char* v68;
  int v69;
  char* v70;
  char* v71;
  int v72;
  int v73;
  __int16 v74;
  int v75;
  int v76;
  int v77;
  int v78;
  __int16 v79;
  int v80;
  int v81;
  int v82;
  int v83;
  __int16 v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  __int64 v94;
  unsigned int v95;
  int v96;
  int v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  _QWORD* v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  bool v112;
  int v113;
  bool v114;
  int v115;
  bool v116;
  int v117;
  bool v118;
  int v119;
  bool v120;
  int v121;
  int v122;
  int v123;
  unsigned int v124;
  __int64 result;
  struct {
    char gap0_[96];
    __int64 v131;
    _QWORD v132[10];
    _QWORD v133[10];
    __int64 v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    int v138;
    __int64 v139;
    __int64 v140;
    __int64 v141;
    int v142;
    _WORD v143[8];
    _QWORD v144[8];
    __int64 v145;
    __int64 v146;
  } f_;

  v10 = a1;
  v11 = -9;
  v12 = 0;
  f_.v145 = 0;
  f_.v146 = 0;
  memset(&f_.v143[1], 0, 14);
  f_.v136 = 0;
  f_.v137 = 0;
  f_.v134 = 0;
  f_.v135 = 0;
  memset(f_.v133, 0, sizeof(f_.v133));
  memset(f_.v132, 0, sizeof(f_.v132));
  do {
    v25 = v11 - 1;
    v26 = ((_WORD)v11 - 1) << 10;
    if (v11 - 1 >= 1) {
      v13 = v26 - 102;
      v14 = v26 | 0x39A;
    }
    else {
      v13 = v26 | 0x66;
      if ((_DWORD)v11 == 1) {
        v13 = ((_WORD)v11 - 1) << 10;
        v14 = 922;
      }
      else {
        v14 = v26 | 0x466;
      }
    }
    v20 = (_DWORD)v11 == -1;
    LODWORD(f_.v132[v12]) = (a7 * v14) >> 16;
    v15 = (_WORD)v11 << 10;
    LODWORD(f_.v133[v12]) = (a7 * v13) >> 16;
    v11 += 2;
    v16 = v15 + 1024;
    v17 = v15 - 102;
    v18 = v15 | 0x39A;
    v19 = v15 | 0x66;
    if (v20) {
      v19 = -922;
    }
    else {
      v16 |= 0x66u;
    }
    v20 = v25 >= 0;
    if (v25 < 0) {
      v21 = v19;
    }
    else {
      v21 = v17;
    }
    if (v20) {
      v22 = v18;
    }
    else {
      v22 = v16;
    }
    DWORDn(f_.v133[v12], sizeof(f_.v133[v12]) / 4 - 1) = (a7 * v21) >> 16;
    v23 = v22;
    v24 = &f_.v132[v12++];
    *((_DWORD*)v24 + 1) = (a7 * v23) >> 16;
  } while (v11 != 11);
  v27 = (unsigned int)a10;
  memset(f_.v144, 0, sizeof(f_.v144));
  f_.v138 = 0;
  f_.v143[0] = 0;
  if ((int)v27 >= 1) {
    f_.v142 = 0;
    f_.v141 = 0;
    v28 = 1;
    f_.v140 = 0;
    f_.v139 = 0;
    v29 = (unsigned int)a10;
    v30 = (char*)f_.v144 + v27 - 1;
    v31 = (char*)&f_.v144[13] + v27 + 7;
    while (1) {
      v37 = v29--;
      if (v28 == 0) {
        goto LABEL_47;
      }
      v38 = 0;
      f_.v131 = v29;
      v39 = a6 + *(__int16*)(a5 + 2 * v29);
      v40 = (char*)&f_.v143[7] + 1;
      v41 = *(_WORD*)(a2 + 2 * v29);
      v42 = *(unsigned __int8*)(a4 + v29);
      v43 = *(__int16*)(a3 + 2 * v29);
      v44 = v28;
      do {
        v49 = ((__int16)f_.v143[v38] * v42) >> 8;
        v50 = ((__int16)(v41 - v49) * a8) >> 16;
        if (v50 <= -10) {
          v51 = -10;
        }
        else {
          v51 = ((__int16)(v41 - v49) * a8) >> 16;
        }
        if (v51 >= 9) {
          v52 = 9;
        }
        else {
          v52 = v51;
        }
        v40[v37] = v52;
        v53 = v49 + *((_DWORD*)f_.v133 + (unsigned int)(v52 + 10));
        v54 = *((_DWORD*)f_.v132 + (unsigned int)(v52 + 10)) + v49;
        f_.v143[v38] = v53;
        f_.v143[v44] = v54;
        if (v50 < 3) {
          if (v50 > -4) {
            v55 = v39 + v52;
            v46 = *(unsigned __int8*)(v55 + 4);
            v47 = *(unsigned __int8*)(v55 + 5);
          }
          else if (v50 == -4) {
            v47 = *(unsigned __int8*)(v39 + 5 + v52);
            v46 = 280;
          }
          else {
            v56 = -43 * v52;
            v46 = -43 * v52 + 108;
            v47 = v56 + 65;
          }
        }
        else if (v50 == 3) {
          v46 = *(unsigned __int8*)(v39 + 7);
          v47 = 280;
        }
        else {
          v45 = 43 * v52;
          v46 = 43 * v52 + 108;
          v47 = v45 + 151;
        }
        v48 = *(&f_.v138 + v38);
        v40 += 16;
        *(&f_.v138 + v38) =
            v48 + v46 * a9 + (__int16)(v41 - v53) * (__int16)(v41 - v53) * v43;
        *(&f_.v138 + v44) =
            v48 + v47 * a9 + (__int16)(v41 - v54) * (__int16)(v41 - v54) * v43;
        ++v38;
        ++v44;
      } while (v28 != v38);
      if (v28 >= 3) {
        v57 = f_.v138;
        v58 = DWORDn(f_.v140, sizeof(f_.v140) / 4 - 1);
        if (f_.v138 <= SDWORDn(f_.v140, sizeof(f_.v140) / 4 - 1)) {
          v61 = 0;
          v60 = DWORDn(f_.v140, sizeof(f_.v140) / 4 - 1);
        }
        else {
          v59 = f_.v143[4];
          f_.v138 = DWORDn(f_.v140, sizeof(f_.v140) / 4 - 1);
          v60 = v57;
          DWORDn(f_.v140, sizeof(f_.v140) / 4 - 1) = v57;
          v57 = v58;
          f_.v143[4] = f_.v143[0];
          v61 = 4;
          f_.v143[0] = v59;
        }
        v72 = f_.v139;
        v73 = f_.v141;
        LODWORD(f_.v134) = v60;
        LODWORD(f_.v136) = v57;
        LODWORD(f_.v145) = v61;
        if ((int)f_.v139 <= (int)f_.v141) {
          v75 = 1;
          v76 = f_.v141;
        }
        else {
          v74 = f_.v143[1];
          LODWORD(f_.v139) = f_.v141;
          LODWORD(f_.v141) = v72;
          f_.v143[1] = f_.v143[5];
          v75 = 5;
          f_.v143[5] = v74;
          v76 = v72;
          v72 = v73;
        }
        v77 = DWORDn(f_.v139, sizeof(f_.v139) / 4 - 1);
        v78 = DWORDn(f_.v141, sizeof(f_.v141) / 4 - 1);
        DWORDn(f_.v134, sizeof(f_.v134) / 4 - 1) = v76;
        DWORDn(f_.v136, sizeof(f_.v136) / 4 - 1) = v72;
        DWORDn(f_.v145, sizeof(f_.v145) / 4 - 1) = v75;
        if (SDWORDn(f_.v139, sizeof(f_.v139) / 4 - 1) <=
            SDWORDn(f_.v141, sizeof(f_.v141) / 4 - 1)) {
          v80 = 2;
          v81 = DWORDn(f_.v141, sizeof(f_.v141) / 4 - 1);
        }
        else {
          v79 = f_.v143[6];
          DWORDn(f_.v139, sizeof(f_.v139) / 4 - 1) =
              DWORDn(f_.v141, sizeof(f_.v141) / 4 - 1);
          DWORDn(f_.v141, sizeof(f_.v141) / 4 - 1) = v77;
          f_.v143[6] = f_.v143[2];
          v80 = 6;
          f_.v143[2] = v79;
          v81 = v77;
          v77 = v78;
        }
        v82 = f_.v140;
        v83 = f_.v142;
        LODWORD(f_.v135) = v81;
        LODWORD(f_.v137) = v77;
        LODWORD(f_.v146) = v80;
        if ((int)f_.v140 <= f_.v142) {
          v85 = 3;
          v86 = f_.v142;
        }
        else {
          v84 = f_.v143[3];
          v85 = 7;
          LODWORD(f_.v140) = f_.v142;
          f_.v142 = v82;
          f_.v143[3] = f_.v143[7];
          f_.v143[7] = v84;
          v86 = v82;
          v82 = v83;
        }
        v87 = v57 & ~(v57 >> 31);
        DWORDn(f_.v146, sizeof(f_.v146) / 4 - 1) = v85;
        DWORDn(f_.v135, sizeof(f_.v135) / 4 - 1) = v86;
        DWORDn(f_.v137, sizeof(f_.v137) / 4 - 1) = v82;
        if (v60 >= v76) {
          v88 = v76;
        }
        else {
          v88 = v60;
        }
        if (v87 <= v72) {
          v89 = v72;
        }
        else {
          v89 = v87;
        }
        if (v88 >= v81) {
          v90 = v81;
        }
        else {
          v90 = v88;
        }
        if (v89 <= v77) {
          v91 = v77;
        }
        else {
          v91 = v89;
        }
        if (v90 >= v86) {
          v92 = v86;
        }
        else {
          v92 = v90;
        }
        if (v91 <= v82) {
          v93 = v82;
        }
        else {
          v93 = v91;
        }
        if (v92 < v93) {
          do {
            v94 = v87 < v72;
            if (v89 < v77) {
              v94 = 2;
            }
            if (v91 < v82) {
              v94 = 3;
            }
            v95 = v60 > v76;
            *((_DWORD*)&f_.v136 + v94) = 0;
            if (v88 > v81) {
              v95 = 2;
            }
            if (v90 > v86) {
              v95 = 3;
            }
            v96 = *((_DWORD*)&f_.v145 + v95);
            *((_DWORD*)&f_.v134 + v95) = 0x7FFFFFFF;
            *((_DWORD*)&f_.v145 + v94) = v96 ^ 4;
            v97 = *(&f_.v138 + (v95 | 4));
            f_.v143[v94] = f_.v143[v95 | 4];
            v100 = &f_.v144[2 * v95];
            v99 = *v100;
            v98 = v100[1];
            *(&f_.v138 + v94) = v97;
            v101 = &f_.v144[2 * v94];
            v81 = f_.v135;
            v86 = DWORDn(f_.v135, sizeof(f_.v135) / 4 - 1);
            *v101 = v99;
            v101[1] = v98;
            v72 = DWORDn(f_.v136, sizeof(f_.v136) / 4 - 1);
            v60 = f_.v134;
            v76 = DWORDn(f_.v134, sizeof(f_.v134) / 4 - 1);
            v77 = f_.v137;
            v82 = DWORDn(f_.v137, sizeof(f_.v137) / 4 - 1);
            v87 = f_.v136 & ~((int)f_.v136 >> 31);
            if ((int)f_.v134 >= SDWORDn(f_.v134, sizeof(f_.v134) / 4 - 1)) {
              v88 = DWORDn(f_.v134, sizeof(f_.v134) / 4 - 1);
            }
            else {
              v88 = f_.v134;
            }
            if (v87 <= SDWORDn(f_.v136, sizeof(f_.v136) / 4 - 1)) {
              v89 = DWORDn(f_.v136, sizeof(f_.v136) / 4 - 1);
            }
            else {
              v89 = f_.v136 & ~((int)f_.v136 >> 31);
            }
            if (v88 >= v81) {
              v90 = v81;
            }
            else {
              v90 = v88;
            }
            if (v89 <= (int)f_.v137) {
              v91 = f_.v137;
            }
            else {
              v91 = v89;
            }
            if (v90 >= v86) {
              v102 = v86;
            }
            else {
              v102 = v90;
            }
            if (v91 <= SDWORDn(f_.v137, sizeof(f_.v137) / 4 - 1)) {
              v103 = DWORDn(f_.v137, sizeof(f_.v137) / 4 - 1);
            }
            else {
              v103 = v91;
            }
          } while (v102 < v103);
        }
        v29 = f_.v131;
        v32 = DWORDn(f_.v145, sizeof(f_.v145) / 4 - 1);
        v33 = (char*)f_.v144 + f_.v131;
        *v33 += (unsigned int)f_.v145 >> 2;
        v34 = *((_BYTE*)&f_.v144[2] + f_.v131) + (v32 >> 2);
        v35 = f_.v146;
        v36 = DWORDn(f_.v146, sizeof(f_.v146) / 4 - 1);
        v33[16] = v34;
        v33[32] += v35 >> 2;
        v33[48] += v36 >> 2;
        goto LABEL_20;
      }
      v29 = f_.v131;
      *((_BYTE*)&f_.v144[2 * v28] + f_.v131) = *((_BYTE*)f_.v144 + f_.v131) + 1;
      if (v28 != 1) {
        *((_BYTE*)&f_.v144[2 * v28 + 2] + f_.v131) =
            *((_BYTE*)&f_.v144[2] + f_.v131) + 1;
      }
      if (v28 != 2) {
        break;
      }
      v28 = 4;
    LABEL_20:
      --v30;
      --v31;
      if (v37 <= 1) {
        v104 = f_.v138;
        v105 = f_.v139;
        v107 = DWORDn(f_.v139, sizeof(f_.v139) / 4 - 1);
        v106 = f_.v140;
        v109 = DWORDn(f_.v140, sizeof(f_.v140) / 4 - 1);
        v108 = f_.v141;
        v110 = DWORDn(f_.v141, sizeof(f_.v141) / 4 - 1);
        v111 = f_.v142;
        v27 = (unsigned int)a10;
        v10 = a1;
        goto LABEL_116;
      }
    }
    v28 *= 2;
  LABEL_47:
    if (v28 <= 3) {
      v62 = 3;
    }
    else {
      v62 = v28;
    }
    v63 = ((_BYTE)v62 - (_BYTE)v28 + 1) & 7;
    v64 = v28;
    if ((((_BYTE)v62 - (_BYTE)v28 + 1) & 7) != 0) {
      v65 = v30;
      v64 = v28 + (unsigned __int64)(unsigned int)(v63 - 1) + 1;
      do {
        --v63;
        v65[16 * v28] = *v65;
        v65 += 16;
      } while (v63 != 0);
    }
    if (v62 - v28 >= 7) {
      v66 = v62 - v64;
      v67 = 16 * v64;
      v68 = v31;
      v69 = v66 + 1;
      do {
        v70 = &v68[v67 - 16LL * v28];
        v71 = &v68[v67];
        v69 -= 8;
        v68 += 128;
        *(v71 - 112) = *(v70 - 112);
        *(v71 - 96) = *(v70 - 96);
        *(v71 - 80) = *(v70 - 80);
        *(v71 - 64) = *(v70 - 64);
        *(v71 - 48) = *(v70 - 48);
        *(v71 - 32) = *(v70 - 32);
        *(v71 - 16) = *(v70 - 16);
        *v71 = *v70;
      } while (v69 != 0);
    }
    goto LABEL_20;
  }
  v111 = 0;
  v110 = 0;
  v108 = 0;
  v109 = 0;
  v106 = 0;
  v107 = 0;
  v105 = 0;
  v104 = 0;
LABEL_116:
  v112 = v104 <= v105;
  if (v104 >= v105) {
    v104 = v105;
  }
  v113 = !v112;
  v114 = v104 <= v107;
  if (v104 < v107) {
    v107 = v104;
  }
  if (v114) {
    v115 = v113;
  }
  else {
    v115 = 2;
  }
  v116 = v107 <= v106;
  if (v107 < v106) {
    v106 = v107;
  }
  if (v116) {
    v117 = v115;
  }
  else {
    v117 = 3;
  }
  v118 = v106 <= v109;
  if (v106 < v109) {
    v109 = v106;
  }
  if (v118) {
    v119 = v117;
  }
  else {
    v119 = 4;
  }
  v120 = v109 <= v108;
  if (v109 < v108) {
    v108 = v109;
  }
  if (v120) {
    v121 = v119;
  }
  else {
    v121 = 5;
  }
  if (v108 >= v110) {
    v122 = v110;
  }
  else {
    v122 = v108;
  }
  if (v108 <= v110) {
    v123 = v121;
  }
  else {
    v123 = 6;
  }
  if (v122 <= v111) {
    v124 = v123;
  }
  else {
    v124 = 7;
  }
  if ((int)v27 > 0) {
    memcpy_plt((__int64)v10, (__int64)&f_.v144[2 * (v124 & 3)], v27);
  }
  if (v122 >= v111) {
    result = (unsigned int)v111;
  }
  else {
    result = (unsigned int)v122;
  }
  *v10 += v124 >> 2;
  return result;
}

__int64 opus_silk_477a0(int* a1, _DWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                        __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                        __int64 a10, __int64 a11, __int64 a12, __int64 a13,
                        unsigned int a14, __int16 a15)
{
  int* v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  bool v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  int v36;
  _DWORD* v37;
  unsigned int v38;
  __int64 v39;
  __int16* v40;
  int v41;
  _QWORD* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  __int16* v54;
  int v55;
  __int64 v56;
  char v57;
  _BOOL4 v58;
  int v59;
  int v60;
  __int64 v61;
  int v62;
  int v63;
  unsigned int v64;
  char v65;
  int v66;
  char v67;
  char v68;
  int v69;
  int v70;
  unsigned int v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int16* v76;
  __int64 v77;
  _DWORD* v78;
  int v79;
  int v80;
  unsigned __int64 v81;
  int v82;
  unsigned __int64 v83;
  int v84;
  char* v85;
  __int16* v86;
  int v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  char* v94;
  __int16* v95;
  int v96;
  int v97;
  unsigned __int64 v98;
  int v99;
  unsigned __int64 v100;
  int v101;
  int v102;
  unsigned int v103;
  unsigned int v104;
  int v105;
  unsigned int v106;
  unsigned int v107;
  int v108;
  int v109;
  __int64 v110;
  int v111;
  int v112;
  char v113;
  int v114;
  unsigned int v115;
  bool v116;
  int v117;
  int v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  char* v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  int v132;
  unsigned __int64 v133;
  __int16* v134;
  int* v135;
  int v136;
  __int64 v137;
  __int64 v138;
  __int16* v139;
  int* v140;
  __int64 v141;
  int v142;
  char* v143;
  int v144;
  int v145;
  int v146;
  unsigned int v147;
  unsigned int v148;
  int v149;
  int v150;
  int v151;
  __int64 v152;
  unsigned int v153;
  unsigned int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  __int64 v160;
  int v161;
  int v162;
  int v163;
  __int64 v164;
  int v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  char* v173;
  int v174;
  int* v175;
  __int16* v176;
  unsigned __int64 v177;
  int v178;
  unsigned __int64 v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  __int64 v186;
  int v187;
  __int64 v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  unsigned int v194;
  int v195;
  int v196;
  int v197;
  struct {
    __int64 v199;
    char* v200;
    char* v201;
    __int64 v202;
    _DWORD* v203;
    char gap40_[4];
    int v204;
    __int64 v205;
    int* v206;
    __int64 v207;
    char* v208;
    __int64 v209;
    __int64 v210;
    __int64 v211;
    __int64 v212;
    _QWORD* v213;
    char* v214;
    __int64 v215;
    __int64 v216;
    __int64 v217;
    int* v218;
    __int64 v219;
    __int64 v220;
    char gap176_[4];
    unsigned int v221;
    __int64 v222;
    __int64 v223;
    char gap200_[4];
    int v224;
    int v225;
    unsigned int v226;
    int v227;
    unsigned int v228;
    int* v229;
    char gap232_[4];
    unsigned int v230;
    __int16* v231;
    char gap248_[4];
    signed int v232;
    __int64 v233;
    __int64 v234;
    int v235;
    int v236;
    _DWORD* v237;
    char gap288_[4];
    int v238;
    char* v239;
    int v240;
    int v241;
    __int64 v242;
    char* v243;
    __int64 v244;
    char gap336_[4];
    unsigned int v245;
  } v199_;

  v199_.v215 = a6;
  v199_.v244 = a5;
  v18 = a1;
  v199_.v210 = a7;
  v199_.v217 = a13;
  a2[1085] = *(char*)(a3 + 34);
  v19 = *(char*)(a3 + 30);
  LODWORD(v199_.v242) = a2[1082];
  v20 = *(char*)(a3 + 29);
  v21 = a1[1148];
  v199_.v219 = a3;
  v22 = *(unsigned __int8*)(a3 + 31);
  v23 = *((__int16*)MovieData_c09f0 + 2 * (v20 >> 1) + v19);
  v24 = a1[1146] + v21;
  v25 = 4LL * v24;
  v26 = (char*)&v199_.v199 - ((v25 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v26, 0, v25);
  v27 = 2LL * v24;
  v28 = (char*)&v199_.v199 - ((v27 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v28, 0, v27);
  v29 = 4LL * v18[1147];
  v30 = (char*)&v199_.v199 - ((v29 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v30, 0, v29);
  a2[1084] = v21;
  a2[1083] = v21;
  v31 = v18[1145];
  if ((int)v31 > 0) {
    v32 = v22 == 4;
    v33 = v30;
    v34 = 0;
    v199_.v245 = v23;
    v199_.v208 = v26 + 8;
    v35 = v18[1148];
    if (v32) {
      v36 = 3;
    }
    else {
      v36 = 1;
    }
    v37 = a2 + 320;
    v199_.v216 = a12;
    v199_.v207 = a11;
    v199_.v238 = a14;
    v199_.v239 = v33;
    v199_.v218 = v18;
    v199_.v213 = a2 + 960;
    v199_.v214 = v28;
    v199_.v243 = (char*)a2 + 2 * v35;
    v199_.v206 = a2 + 975;
    v199_.v202 = a15;
    v38 = a14 >> 1;
    v199_.v205 = a10;
    v199_.v226 = v23 - 944;
    v39 = v32;
    v199_.v211 = v39;
    v199_.v204 = v36;
    v199_.v212 = a9;
    v199_.v237 = a2 + 1056;
    v199_.v232 = v38 - 512;
    v199_.v224 = 512 - v38;
    v199_.v225 = (__int16)(944 - v23) * (__int16)a14;
    v199_.v235 = (__int16)a14;
    v199_.v236 = (__int16)a14 * v23;
    v199_.v228 = v23 + 944;
    v199_.v227 = (__int16)(v23 + 944) * (__int16)a14;
    v199_.v221 = v23 + 80;
    v199_.v230 = v23 - 80;
    v199_.v203 = v33 + 16;
    v199_.v201 = v26 + 16;
    v199_.v200 = v28 + 8;
    v199_.v209 = a8;
    v40 = (__int16*)(a8 + 4);
    v41 = v199_.v242;
    v199_.v231 = v40;
    v199_.v229 = a2 + 1058;
    do {
      v54 = (__int16*)(v199_.v215 + 32LL * ((unsigned int)v199_.v211 |
                                            ((unsigned int)v34 >> 1)));
      v55 = *(_DWORD*)(v199_.v212 + 4 * v34);
      v56 = v199_.v219;
      a2[1087] = 0;
      if (*(_BYTE*)(v56 + 29) == 2) {
        v41 = *(_DWORD*)(v199_.v217 + 4 * v34);
        if ((v199_.v204 & (unsigned int)v34) != 0) {
          v57 = 1;
          v58 = true;
        }
        else {
          v59 = v18[1160];
          v60 = v18[1148] - (v41 + v59) - 2;
          silk_LPC_analysis_filter((__int64)&v28[2 * v60],
                                   (__int64)a2 + 2 * v60 +
                                       2 * v18[1147] * (int)v34,
                                   v54, v41 + v59 + 2, v59);
          v57 = 0;
          a2[1087] = 1;
          a2[1083] = v18[1148];
          v58 = *(unsigned __int8*)(v199_.v219 + 29) == 2;
        }
      }
      else {
        v58 = false;
        v57 = 1;
      }
      v61 = (unsigned int)v18[1147];
      v62 = *(_DWORD*)(v199_.v216 + 4 * v34);
      v63 = *(_DWORD*)(v199_.v217 + 4 * v34);
      if (v62 <= 1) {
        v64 = 1;
      }
      else {
        v64 = *(_DWORD*)(v199_.v216 + 4 * v34);
      }
      v65 = __clz((unsigned int)(v64));
      v66 = ((unsigned __int64)((int)((unsigned __int64)-(
                                          __int64)((((__int64)(0x1FFFFFFF /
                                                               ((int)(v64
                                                                      << (v65 -
                                                                          1)) >>
                                                                16))
                                                     << 19) *
                                                    (int)(v64 << (v65 - 1))) &
                                                   0xFFFFFFF800000000LL) >>
                                      32) *
                                (__int64)(0x1FFFFFFF /
                                          ((int)(v64 << (v65 - 1)) >> 16))) >>
             16) +
            ((0x1FFFFFFF / ((int)(v64 << (v65 - 1)) >> 16)) << 16);
      v67 = 15 - v65;
      v68 = v65 - 15;
      v69 = (int)0x80000000 >> v68;
      v70 = v66 >> v67;
      if (v66 > (int)0x80000000 >> v68) {
        v69 = v66;
      }
      if (v66 <= (int)(0x7FFFFFFFu >> v68)) {
        v71 = v69;
      }
      else {
        v71 = 0x7FFFFFFFu >> v68;
      }
      v72 = v71 << v68;
      if (v62 >= 0x20000) {
        v72 = v70;
      }
      if ((int)v61 >= 1) {
        v73 = (__int64)((v72 >> 4) + 1) >> 1;
        if ((unsigned int)v61 < 8) {
          v74 = 0;
          v75 = v61 & 7;
          if ((v61 & 7) == 0) {
            goto LABEL_34;
          }
        LABEL_32:
          v85 = &v199_.v239[4 * v74];
          v86 = (__int16*)(a4 + 2 * v74);
          do {
            v87 = *v86++;
            --v75;
            *(_DWORD*)v85 = (unsigned __int64)(v87 * (__int64)(int)v73) >> 16;
            v85 += 4;
          } while (v75 != 0);
          goto LABEL_34;
        }
        v76 = (__int16*)(a4 + 8);
        v77 = 0;
        v78 = v199_.v203;
        do {
          v79 = *(v76 - 2);
          v77 -= 8;
          v80 = *(v76 - 1);
          v81 = (unsigned __int64)(*(v76 - 3) * (__int64)(int)v73) >> 16;
          *(v78 - 4) = (unsigned __int64)(*(v76 - 4) * (__int64)(int)v73) >> 16;
          *(v78 - 3) = v81;
          v82 = *v76;
          *(v78 - 2) = (unsigned __int64)(v79 * (__int64)(int)v73) >> 16;
          *(v78 - 1) = (unsigned __int64)(v80 * (__int64)(int)v73) >> 16;
          v83 = (unsigned __int64)(v76[1] * (__int64)(int)v73) >> 16;
          *(_DWORD*)v78 = (unsigned __int64)(v82 * (__int64)(int)v73) >> 16;
          v78[1] = v83;
          v84 = v76[2];
          LODWORD(v83) = v76[3];
          v76 += 8;
          v78[2] = (unsigned __int64)(v84 * (__int64)(int)v73) >> 16;
          v78[3] = (unsigned __int64)((int)v83 * (__int64)(int)v73) >> 16;
          v78 += 8;
        } while (-(v61 & 0x7FFFFFF8) != v77);
        v74 = -v77;
        v75 = v61 & 7;
        if ((v61 & 7) != 0) {
          goto LABEL_32;
        }
      }
    LABEL_34:
      if ((v57 & 1) == 0) {
        v88 = (int)a2[1083];
        LODWORD(v89) = v88 - v63 - 2;
        if ((int)v89 < (int)v88) {
          v90 = ((unsigned __int64)((int)v199_.v202 * (__int64)v72) >> 14) &
                0xFFFFFFFC;
          if (v34 != 0) {
            LODWORD(v90) = v72;
          }
          v91 = (int)v89;
          v92 = (v63 + 2) & 7LL;
          if (v92 == 0) {
            v89 = (int)v89;
            if ((unsigned __int64)((int)v89 - v88) > 0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_46;
            }
          LABEL_44:
            v93 = v88 - v89;
            v94 = &v199_.v201[4 * v89];
            v95 = (__int16*)&v199_.v200[2 * v89];
            do {
              v96 = *(v95 - 2);
              v93 -= 8;
              v97 = *(v95 - 1);
              v98 = (unsigned __int64)(*(v95 - 3) * (__int64)(int)v90) >> 16;
              *((_DWORD*)v94 - 4) =
                  (unsigned __int64)(*(v95 - 4) * (__int64)(int)v90) >> 16;
              *((_DWORD*)v94 - 3) = v98;
              v99 = *v95;
              *((_DWORD*)v94 - 2) =
                  (unsigned __int64)(v96 * (__int64)(int)v90) >> 16;
              *((_DWORD*)v94 - 1) =
                  (unsigned __int64)(v97 * (__int64)(int)v90) >> 16;
              v100 = (unsigned __int64)(v95[1] * (__int64)(int)v90) >> 16;
              *(_DWORD*)v94 = (unsigned __int64)(v99 * (__int64)(int)v90) >> 16;
              *((_DWORD*)v94 + 1) = v100;
              v101 = v95[2];
              LODWORD(v100) = v95[3];
              v95 += 8;
              *((_DWORD*)v94 + 2) =
                  (unsigned __int64)(v101 * (__int64)(int)v90) >> 16;
              *((_DWORD*)v94 + 3) =
                  (unsigned __int64)((int)v100 * (__int64)(int)v90) >> 16;
              v94 += 32;
            } while (v93 != 0);
            goto LABEL_46;
          }
          v89 = (int)v89;
          do {
            --v92;
            *(_DWORD*)&v26[4 * v89] =
                (unsigned __int64)(*(__int16*)&v28[2 * v89] *
                                   (__int64)(int)v90) >>
                16;
            ++v89;
          } while (v92 != 0);
          if ((unsigned __int64)(v91 - v88) <= 0xFFFFFFFFFFFFFFF8LL) {
            goto LABEL_44;
          }
        }
      }
    LABEL_46:
      v102 = a2[1086];
      v199_.v223 = v34;
      v199_.v220 = a4;
      if (v62 == v102) {
        goto LABEL_78;
      }
      if (v102 >= 0) {
        v103 = v102;
      }
      else {
        v103 = -v102;
      }
      v104 = __clz((unsigned int)(v103));
      v105 = v102 << (v104 - 1);
      if (v62 >= 0) {
        v106 = v62;
      }
      else {
        v106 = -v62;
      }
      v107 = __clz((unsigned int)(v106));
      v108 = v104 - v107;
      v109 = v62 << (v107 - 1);
      v110 = (0x1FFFFFFF / (v109 >> 16) * (__int64)v105) >> 16;
      v111 =
          ((unsigned __int64)(0x1FFFFFFF / (v109 >> 16) *
                              (__int64)(int)(v105 -
                                             (((unsigned __int64)((int)v110 *
                                                                  (__int64)
                                                                      v109) >>
                                               29) &
                                              0xFFFFFFF8))) >>
           16) +
          v110;
      if ((unsigned int)(v108 + 29) >= 0x30) {
        v112 = 0;
      }
      else {
        v112 = v111 >> (v108 + 13);
      }
      v113 = -13 - v108;
      v114 = (int)0x80000000 >> (-13 - v108);
      if (v114 <= v111) {
        v114 = v111;
      }
      if ((int)(0x7FFFFFFFu >> (-13 - v108)) >= v111) {
        v115 = v114;
      }
      else {
        v115 = 0x7FFFFFFFu >> (-13 - v108);
      }
      v116 = v108 <= -14;
      v117 = v18[1148];
      v118 = v115 << v113;
      if (!v116) {
        v118 = v112;
      }
      if (v117 >= 1) {
        v119 = a2[1084] - v117;
        do {
          v37[v119] = (unsigned __int64)((int)v37[v119] * (__int64)v118) >> 16;
          ++v119;
        } while (v119 < (int)a2[1084]);
      }
      if (v58 && a2[1087] == 0) {
        v120 = (int)a2[1083];
        LODWORD(v121) = v120 - v63 - 2;
        if ((int)v121 < (int)v120) {
          v122 = (int)v121;
          v123 = ((int)v120 - (int)v121) & 7LL;
          if (v123 != 0) {
            v121 = (int)v121;
            do {
              --v123;
              *(_DWORD*)&v26[4 * v121] =
                  (unsigned __int64)(*(int*)&v26[4 * v121] * (__int64)v118) >>
                  16;
              ++v121;
            } while (v123 != 0);
            if ((unsigned __int64)(v122 - v120) > 0xFFFFFFFFFFFFFFF8LL) {
              goto LABEL_77;
            }
          LABEL_75:
            v124 = v120 - v121;
            v125 = &v199_.v201[4 * v121];
            do {
              v124 -= 8;
              v126 =
                  (unsigned __int64)(*((int*)v125 - 3) * (__int64)v118) >> 16;
              *((_DWORD*)v125 - 4) =
                  (unsigned __int64)(*((int*)v125 - 4) * (__int64)v118) >> 16;
              *((_DWORD*)v125 - 3) = v126;
              v127 =
                  (unsigned __int64)(*((int*)v125 - 1) * (__int64)v118) >> 16;
              *((_DWORD*)v125 - 2) =
                  (unsigned __int64)(*((int*)v125 - 2) * (__int64)v118) >> 16;
              *((_DWORD*)v125 - 1) = v127;
              v128 =
                  (unsigned __int64)(*((int*)v125 + 1) * (__int64)v118) >> 16;
              *(_DWORD*)v125 =
                  (unsigned __int64)(*(int*)v125 * (__int64)v118) >> 16;
              *((_DWORD*)v125 + 1) = v128;
              v129 =
                  (unsigned __int64)(*((int*)v125 + 3) * (__int64)v118) >> 16;
              *((_DWORD*)v125 + 2) =
                  (unsigned __int64)(*((int*)v125 + 2) * (__int64)v118) >> 16;
              *((_DWORD*)v125 + 3) = v129;
              v125 += 32;
            } while (v124 != 0);
            goto LABEL_77;
          }
          v121 = (int)v121;
          if ((unsigned __int64)((int)v121 - v120) <= 0xFFFFFFFFFFFFFFF8LL) {
            goto LABEL_75;
          }
        }
      }
    LABEL_77:
      a2[1080] = (unsigned __int64)((int)a2[1080] * (__int64)v118) >> 16;
      a2[1081] = (unsigned __int64)((int)a2[1081] * (__int64)v118) >> 16;
      a2[960] = (unsigned __int64)((int)a2[960] * (__int64)v118) >> 16;
      a2[961] = (unsigned __int64)((int)a2[961] * (__int64)v118) >> 16;
      a2[962] = (unsigned __int64)((int)a2[962] * (__int64)v118) >> 16;
      a2[963] = (unsigned __int64)((int)a2[963] * (__int64)v118) >> 16;
      a2[964] = (unsigned __int64)((int)a2[964] * (__int64)v118) >> 16;
      a2[965] = (unsigned __int64)((int)a2[965] * (__int64)v118) >> 16;
      a2[966] = (unsigned __int64)((int)a2[966] * (__int64)v118) >> 16;
      a2[967] = (unsigned __int64)((int)a2[967] * (__int64)v118) >> 16;
      a2[968] = (unsigned __int64)((int)a2[968] * (__int64)v118) >> 16;
      a2[969] = (unsigned __int64)((int)a2[969] * (__int64)v118) >> 16;
      a2[970] = (unsigned __int64)((int)a2[970] * (__int64)v118) >> 16;
      a2[971] = (unsigned __int64)((int)a2[971] * (__int64)v118) >> 16;
      a2[972] = (unsigned __int64)((int)a2[972] * (__int64)v118) >> 16;
      a2[973] = (unsigned __int64)((int)a2[973] * (__int64)v118) >> 16;
      a2[974] = (unsigned __int64)((int)a2[974] * (__int64)v118) >> 16;
      a2[975] = (unsigned __int64)((int)a2[975] * (__int64)v118) >> 16;
      a2[1056] = (unsigned __int64)((int)a2[1056] * (__int64)v118) >> 16;
      a2[1057] = (unsigned __int64)((int)a2[1057] * (__int64)v118) >> 16;
      a2[1058] = (unsigned __int64)((int)a2[1058] * (__int64)v118) >> 16;
      a2[1059] = (unsigned __int64)((int)a2[1059] * (__int64)v118) >> 16;
      a2[1060] = (unsigned __int64)((int)a2[1060] * (__int64)v118) >> 16;
      a2[1061] = (unsigned __int64)((int)a2[1061] * (__int64)v118) >> 16;
      a2[1062] = (unsigned __int64)((int)a2[1062] * (__int64)v118) >> 16;
      a2[1063] = (unsigned __int64)((int)a2[1063] * (__int64)v118) >> 16;
      a2[1064] = (unsigned __int64)((int)a2[1064] * (__int64)v118) >> 16;
      a2[1065] = (unsigned __int64)((int)a2[1065] * (__int64)v118) >> 16;
      a2[1066] = (unsigned __int64)((int)a2[1066] * (__int64)v118) >> 16;
      a2[1067] = (unsigned __int64)((int)a2[1067] * (__int64)v118) >> 16;
      a2[1068] = (unsigned __int64)((int)a2[1068] * (__int64)v118) >> 16;
      a2[1069] = (unsigned __int64)((int)a2[1069] * (__int64)v118) >> 16;
      a2[1070] = (unsigned __int64)((int)a2[1070] * (__int64)v118) >> 16;
      a2[1071] = (unsigned __int64)((int)a2[1071] * (__int64)v118) >> 16;
      a2[1072] = (unsigned __int64)((int)a2[1072] * (__int64)v118) >> 16;
      a2[1073] = (unsigned __int64)((int)a2[1073] * (__int64)v118) >> 16;
      a2[1074] = (unsigned __int64)((int)a2[1074] * (__int64)v118) >> 16;
      a2[1075] = (unsigned __int64)((int)a2[1075] * (__int64)v118) >> 16;
      a2[1076] = (unsigned __int64)((int)a2[1076] * (__int64)v118) >> 16;
      a2[1077] = (unsigned __int64)((int)a2[1077] * (__int64)v118) >> 16;
      a2[1078] = (unsigned __int64)((int)a2[1078] * (__int64)v118) >> 16;
      a2[1079] = (unsigned __int64)((int)a2[1079] * (__int64)v118) >> 16;
      v62 = *(_DWORD*)(v199_.v216 + 4 * v34);
      a2[1086] = v62;
      v61 = (unsigned int)v18[1147];
    LABEL_78:
      v199_.v222 = v61;
      if ((int)v61 >= 1) {
        v130 = (__int64)v62 >> 6;
        v131 = 0;
        v132 = a2[1083] - v41;
        v133 = (unsigned int)v199_.v218[1159];
        v134 = (__int16*)(v199_.v210 + 10 * v199_.v223);
        v135 = &v37[a2[1084] - v41 + 1];
        v136 = v199_.v218[1160];
        v137 = (int)v133 - 1LL;
        v138 = (__int64)*(int*)(v199_.v207 + 4 * v199_.v223) >> 16;
        v139 = (__int16*)(v199_.v209 + 48 * v199_.v223);
        v199_.v242 = (__int16)*(_DWORD*)(v199_.v207 + 4 * v199_.v223);
        v199_.v234 = (__int16)(v55 >> 2);
        v199_.v233 = (__int64)((v55 >> 2) | (v55 << 15)) >> 16;
        v140 = v199_.v206;
        v141 = (unsigned int)v199_.v222;
        v142 = a2[1085];
        v199_.v241 = *(unsigned __int8*)(v199_.v219 + 29);
        v143 = &v199_.v208[4 * v132];
        v199_.v240 = v136 >> 1;
        v144 = *(__int16*)(v199_.v205 + 4 * v199_.v223);
        v145 = v41;
        do {
          a2[1085] = 196314165 * v142 + 907633515;
          v165 = v199_.v240 +
                 ((unsigned __int64)(*v54 * (__int64)*v140) >> 16) +
                 ((unsigned __int64)(v54[1] * (__int64)*(v140 - 1)) >> 16) +
                 ((unsigned __int64)(v54[2] * (__int64)*(v140 - 2)) >> 16) +
                 ((unsigned __int64)(v54[3] * (__int64)*(v140 - 3)) >> 16) +
                 ((unsigned __int64)(v54[4] * (__int64)*(v140 - 4)) >> 16) +
                 ((unsigned __int64)(v54[5] * (__int64)*(v140 - 5)) >> 16) +
                 ((unsigned __int64)(v54[6] * (__int64)*(v140 - 6)) >> 16) +
                 ((unsigned __int64)(v54[7] * (__int64)*(v140 - 7)) >> 16) +
                 ((unsigned __int64)(v54[8] * (__int64)*(v140 - 8)) >> 16) +
                 ((unsigned __int64)(v54[9] * (__int64)*(v140 - 9)) >> 16);
          if (v136 == 16) {
            v165 +=
                ((unsigned __int64)(v54[10] * (__int64)*(v140 - 10)) >> 16) +
                ((unsigned __int64)(v54[11] * (__int64)*(v140 - 11)) >> 16) +
                ((unsigned __int64)(v54[12] * (__int64)*(v140 - 12)) >> 16) +
                ((unsigned __int64)(v54[13] * (__int64)*(v140 - 13)) >> 16) +
                ((unsigned __int64)(v54[14] * (__int64)*(v140 - 14)) >> 16) +
                ((unsigned __int64)(v54[15] * (__int64)*(v140 - 15)) >> 16);
          }
          if (v199_.v241 == 2) {
            v166 = ((*(int*)v143 * (__int64)*v134) << 16) +
                   ((unsigned __int64)(*((int*)v143 - 1) * (__int64)v134[1]) >>
                    16 << 32);
            v167 = *((int*)v143 - 2) * (__int64)v134[2];
            v169 = *((_DWORD*)v143 - 4);
            v168 = *((_DWORD*)v143 - 3);
            v143 += 4;
            v170 = ((v166 + (v167 >> 16 << 32) +
                     ((unsigned __int64)(v168 * (__int64)v134[3]) >> 16 << 32) +
                     0x200000000LL) >>
                    32) +
                   ((unsigned __int64)(v134[4] * (__int64)v169) >> 16);
          }
          else {
            v170 = 0;
          }
          v171 = a2[1081];
          v172 = a2[1056];
          v173 = v26;
          a2[1056] = v171;
          v174 = ((int)v133 >> 1) +
                 ((unsigned __int64)(*v139 * (__int64)v171) >> 16);
          if ((int)v133 >= 3) {
            v175 = v199_.v229;
            v176 = v199_.v231;
            v177 = 2;
            do {
              v178 = *(v175 - 1);
              *(v175 - 1) = v172;
              v177 += 2LL;
              v179 = *(v176 - 1) * (__int64)v172;
              v172 = *v175;
              *v175 = v178;
              v175 += 2;
              v180 = v174 + (v179 >> 16);
              LODWORD(v179) = *v176;
              v176 += 2;
              v174 =
                  v180 + ((unsigned __int64)((int)v179 * (__int64)v178) >> 16);
            } while (v177 < v133);
          }
          v199_.v237[v137] = v172;
          v181 = v174 + ((unsigned __int64)(v139[v137] * (__int64)v172) >> 16);
          v182 = a2[1080];
          v183 = ((unsigned __int64)(v144 * (__int64)v182) >> 16) + 2 * v181;
          v184 = ((unsigned __int64)((int)v199_.v242 *
                                     (__int64)(int)v37[a2[1084] - 1]) >>
                  16) +
                 ((unsigned __int64)(v182 * (__int64)(int)v138) >> 16);
          v185 = 4 * v165 - v183 - v184;
          if (v41 < 1) {
            v189 = v185 >> 1;
          }
          else {
            v187 = *(v135 - 1);
            v186 = *v135;
            v188 = *(v135 - 2);
            ++v135;
            v189 = (int)(v170 + 2 * v185 -
                         2 * (((unsigned __int64)(v199_.v234 * (v188 + v186)) >>
                               16) +
                              ((unsigned __int64)(v187 *
                                                  (__int64)(int)v199_.v233) >>
                               16))) >>
                   2;
          }
          v190 = *(_DWORD*)&v199_.v239[4 * v131];
          v191 = v190 - ((v189 + 1) >> 1);
          if ((int)a2[1085] < 0) {
            v191 = -v191;
          }
          if (v191 <= -31744) {
            v191 = -31744;
          }
          if (v191 >= 30720) {
            v192 = 30720;
          }
          else {
            v192 = v191;
          }
          v193 = v192 - v199_.v245;
          if (v199_.v238 >= 2049) {
            v194 = v193 - v199_.v232;
            if (v193 > v199_.v232) {
              v195 = v194 >> 10;
              if (v194 >> 10 != 0) {
                goto LABEL_128;
              }
              goto LABEL_122;
            }
            if (v193 >= v199_.v224) {
              v146 = v199_.v236;
              if (v193 >= 0) {
                v147 = v199_.v245;
              }
              else {
                v147 = v199_.v226;
              }
              if (v193 >= 0) {
                v148 = v199_.v228;
              }
              else {
                v148 = v199_.v245;
              }
              if (v193 >= 0) {
                v149 = v199_.v236;
              }
              else {
                v149 = v199_.v225;
              }
              if (v193 >= 0) {
                v146 = v199_.v227;
              }
              goto LABEL_91;
            }
            v193 += v199_.v232;
          }
          v195 = v193 >> 10;
          if (v195 >= 1) {
          LABEL_128:
            v196 = v199_.v235;
            v147 = v199_.v230 + (v195 << 10);
            v148 = v147 + 1024;
            v149 = (__int16)(v199_.v230 + ((_WORD)v195 << 10)) * v199_.v235;
            v197 = (__int16)(v199_.v230 + ((_WORD)v195 << 10) + 1024);
            goto LABEL_129;
          }
        LABEL_122:
          v147 = v199_.v245;
          v146 = v199_.v227;
          v148 = v199_.v228;
          v149 = v199_.v236;
          if (v195 != 0) {
            v149 = v199_.v225;
            v147 = v199_.v226;
            v148 = v199_.v245;
            v146 = v199_.v236;
            if (v195 != -1) {
              v196 = v199_.v235;
              v147 = v199_.v221 + (v195 << 10);
              v148 = v147 + 1024;
              v149 = (__int16)-(__int16)(v199_.v221 + ((_WORD)v195 << 10)) *
                     v199_.v235;
              v197 = (__int16)(-1024 - (v199_.v221 + ((_WORD)v195 << 10)));
            LABEL_129:
              v146 = v197 * v196;
            }
          }
        LABEL_91:
          v150 = v149 + (__int16)(v192 - v147) * (__int16)(v192 - v147);
          v151 = v146 + (__int16)(v192 - v148) * (__int16)(v192 - v148);
          v41 = v145;
          v116 = v151 < v150;
          v152 = v199_.v244;
          if (v116) {
            v153 = v148;
          }
          else {
            v153 = v147;
          }
          v154 = v153 >> 9;
          v155 = 16 * v153;
          *(_BYTE*)(v199_.v244 + v131) = (v154 + 1) >> 1;
          if ((int)a2[1085] < 0) {
            v155 = -v155;
          }
          v156 = v155 + 2 * v170;
          v157 = v156 + 16 * v165;
          v158 = (((int)((unsigned __int64)((int)v130 * (__int64)v157) >> 16) >>
                   7) +
                  1) >>
                 1;
          if (v158 <= -32768) {
            v158 = -32768;
          }
          if (v158 >= 0x7FFF) {
            LOWORD(v158) = 0x7FFF;
          }
          *(_WORD*)&v199_.v243[2 * v131] = v158;
          v140[1] = v157;
          ++v140;
          v159 = v157 - 16 * v190;
          v160 = (int)a2[1084];
          a2[1081] = v159;
          v161 = v159 - 4 * v183;
          a2[1080] = v161;
          v162 = v161 - 4 * v184;
          v26 = v173;
          v37[v160] = v162;
          v163 = 2 * v156;
          v164 = (int)a2[1083];
          *(_DWORD*)&v173[4 * v164] = v163;
          ++a2[1084];
          a2[1083] = v164 + 1;
          LODWORD(v164) = *(char*)(v152 + v131++);
          v142 = a2[1085] + v164;
          a2[1085] = v142;
        } while (v131 != v141);
      }
      v42 = v199_.v213;
      v28 = v199_.v214;
      v18 = v199_.v218;
      v43 = (_QWORD*)((char*)v199_.v213 + 4 * (int)v199_.v222);
      v44 = v199_.v220;
      v34 = v199_.v223 + 1;
      v45 = *v43;
      v46 = v43[1];
      v47 = v43[3];
      v199_.v213[2] = v43[2];
      v42[3] = v47;
      *v42 = v45;
      v42[1] = v46;
      v48 = v43[4];
      v49 = v43[5];
      v51 = v43[6];
      v50 = v43[7];
      v42[6] = v51;
      v42[7] = v50;
      v42[4] = v48;
      v42[5] = v49;
      v52 = v18[1147];
      a4 = v44 + 2 * v52;
      v199_.v244 += v52;
      v53 = &v199_.v243[2 * v52];
      v31 = v18[1145];
      v199_.v243 = v53;
      v199_.v231 += 24;
    } while (v34 < v31);
  }
  a2[1082] = *(_DWORD*)(v199_.v217 + 4 * v31 - 4);
  memmove_plt((__int64)a2, (__int64)a2 + 2 * v18[1146], 2LL * v18[1148]);
  return memmove_plt((__int64)(a2 + 320), (__int64)&a2[v18[1146] + 320],
                     4LL * v18[1148]);
}

#pragma GCC visibility pop
