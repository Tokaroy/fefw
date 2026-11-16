#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* nn_util_a7120(_DWORD* result, unsigned int, int);
__int64 memmove_plt(__int64, __int64, unsigned __int64);
__int64 nn_util_detail_ConvertToExponentStyleStringWithPoint_plt(_QWORD, _QWORD,
                                                                 _QWORD,
                                                                 double);
double __trunctfdf2();
__int64 nn_util_a68a0(__int64 a1, int* a2, __int64 a3);

__int64 nn_util_a68a0(__int64 a1, int* a2, __int64 a3)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  int v5;
  __int64 v8;
  double v9;
  double* v10;
  char v11;
  int v12;
  int v13;
  int v14;
  char* v15;
  int v16;
  int v17;
  __int64 v18;
  void (*v19)(__int64, __int64, __int64);
  __int64 v20;
  __int64 i;
  __int64 v22;
  void (*v23)(__int64, __int64, __int64);
  int j;
  __int64 v25;
  void (*v26)(__int64, __int64, __int64);
  __int64 v27;
  void (*v28)(__int64, __int64, __int64);
  unsigned int v29;
  __int64 v30;
  void (*v31)(__int64, __int64, __int64);
  __int64 v32;
  void (*v33)(__int64, __int64, __int64);
  __int64 v34;
  void (*v35)(__int64, __int64, __int64);
  double v36;
  int v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  double v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  unsigned __int8* v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  bool v53;
  int v54;
  int v55;
  unsigned int v56;
  __int64 v57;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  __int64 v65;
  void (*v66)(__int64, __int64, __int64);
  __int64 v67;
  __int64 k;
  __int64 v69;
  void (*v70)(__int64, __int64, __int64);
  int m;
  __int64 v72;
  void (*v73)(__int64, __int64, __int64);
  __int64 v74;
  void (*v75)(__int64, __int64, __int64);
  __int64 v76;
  void (*v77)(__int64, __int64, __int64);
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  void (*v82)(__int64, __int64, __int64);
  __int64 v83;
  void (*v84)(__int64, __int64, __int64);
  char v85;
  __int64 v86;
  void (*v87)(__int64, __int64, __int64);
  int v88;
  __int64 v89;
  void (*v90)(__int64, __int64, __int64);
  char v91;
  int v92;
  __int64 v93;
  void (*v94)(__int64, __int64, __int64);
  __int64 v95;
  void (*v96)(__int64, __int64, __int64);
  __int64 v97;
  void (*v98)(__int64, __int64, __int64);
  __int64 v99;
  void (*v100)(__int64, __int64, __int64);
  int v101;
  _DWORD* v102;
  unsigned int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  unsigned __int8* v108;
  int v109;
  int v110;
  int v111;
  int v112;
  struct {
    __int16 v114;
    char v115;
    char gap27_[1];
    _BYTE v116[4];
  } v114_;

  v3 = *a2;
  v4 = a2[1];
  v5 = *((unsigned __int8*)a2 + 12);
  *(_DWORD*)(a1 + 60) = *a2;
  *(_DWORD*)(a1 + 64) = a2[2];
  if ((unsigned int)(v5 - 69) <= 2) {
    v5 |= 0x20u;
    *(_DWORD*)(a1 + 60) = v3 | 0x400;
  }
  v8 = *(int*)(a3 + 28);
  if ((*((_BYTE*)a2 + 1) & 8) != 0) {
    if ((v8 & 0x80000000) == 0 ||
        (*(_DWORD*)(a3 + 28) = v8 + 16, (unsigned int)v8 > 0xFFFFFFF0)) {
      *(_QWORD*)a3 = ((*(_QWORD*)a3 + 15LL) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    v9 = __trunctfdf2();
    if ((*(_QWORD*)&v9 & 0x8000000000000000LL) != 0) {
      goto LABEL_12;
    }
  }
  else if ((v8 & 0x80000000) != 0 &&
           (*(_DWORD*)(a3 + 28) = v8 + 16, (unsigned int)v8 <= 0xFFFFFFF0)) {
    v9 = *(double*)(*(_QWORD*)(a3 + 16) + v8);
    if ((*(_QWORD*)&v9 & 0x8000000000000000LL) != 0) {
      goto LABEL_12;
    }
  }
  else {
    v10 = *(double**)a3;
    *(_QWORD*)a3 += 8LL;
    v9 = *v10;
    if ((*(_QWORD*)v10 & 0x8000000000000000LL) != 0) {
    LABEL_12:
      v11 = 45;
      goto LABEL_20;
    }
  }
  v12 = *(_DWORD*)(a1 + 60);
  if ((v12 & 2) != 0) {
    v11 = 43;
  }
  else {
    if ((v12 & 1) == 0) {
      v13 = 0;
      goto LABEL_21;
    }
    v11 = 32;
  }
LABEL_20:
  *(_BYTE*)(a1 + 50) = v11;
  v13 = 1;
LABEL_21:
  *(_DWORD*)(a1 + 52) = v13;
  if (fabs(v9) == __builtin_inff()) {
    v14 = *(_DWORD*)(a1 + 60);
    if ((v14 & 0x400) != 0) {
      v15 = "INF";
    }
    else {
      v15 = "inf";
    }
    *(_DWORD*)(a1 + 60) = v14 & 0xFFFFFFEF;
    v16 = *(int*)(a1 + 64) - v13 - 3;
    if ((v14 & 8) == 0 && v16 >= 1) {
      v17 = *(int*)(a1 + 64) - v13 - 3;
      do {
        v19 = *(void (**)(__int64, __int64, __int64))a1;
        v18 = *(_QWORD*)(a1 + 8);
        LOBYTE(v114_.v114) = 32;
        v19(v18, (__int64)&v114_.v114, 1);
        --v17;
      } while (v17 != 0);
      v13 = *(_DWORD*)(a1 + 52);
    }
    if (v13 >= 1) {
      v20 = 50;
      for (i = (unsigned int)v13; i != 0; --i) {
        v23 = *(void (**)(__int64, __int64, __int64))a1;
        v22 = *(_QWORD*)(a1 + 8);
        LOBYTE(v114_.v114) = *(_BYTE*)(a1 + v20);
        v23(v22, (__int64)&v114_.v114, 1);
        ++v20;
      }
    }
    if (v16 >= 1 && (*(_DWORD*)(a1 + 60) & 0x18) == 0x10) {
      for (j = v16; j != 0; --j) {
        v26 = *(void (**)(__int64, __int64, __int64))a1;
        v25 = *(_QWORD*)(a1 + 8);
        LOBYTE(v114_.v114) = 48;
        v26(v25, (__int64)&v114_.v114, 1);
      }
    }
    v28 = *(void (**)(__int64, __int64, __int64))a1;
    v27 = *(_QWORD*)(a1 + 8);
    v29 = 1;
    LOBYTE(v114_.v114) = *v15;
    v28(v27, (__int64)&v114_.v114, 1);
    v31 = *(void (**)(__int64, __int64, __int64))a1;
    v30 = *(_QWORD*)(a1 + 8);
    LOBYTE(v114_.v114) = v15[1];
    v31(v30, (__int64)&v114_.v114, 1);
    v33 = *(void (**)(__int64, __int64, __int64))a1;
    v32 = *(_QWORD*)(a1 + 8);
    LOBYTE(v114_.v114) = v15[2];
    v33(v32, (__int64)&v114_.v114, 1);
    if (v16 >= 1 && (*(_DWORD*)(a1 + 60) & 8) != 0) {
      do {
        v35 = *(void (**)(__int64, __int64, __int64))a1;
        v34 = *(_QWORD*)(a1 + 8);
        LOBYTE(v114_.v114) = 32;
        v29 = 1;
        v35(v34, (__int64)&v114_.v114, 1);
        --v16;
      } while (v16 != 0);
    }
    return v29;
  }
  v36 = fabs(v9);
  if (v4 >= 17) {
    v37 = 17;
  }
  else {
    v37 = v4;
  }
  if (v4 == -1) {
    v38 = 6;
  }
  else {
    v38 = v37;
  }
  if (v5 != 101) {
    if (v5 == 102) {
      if (v38 < 0) {
        v42 = 0x1.4000000000000p+2;
      }
      else {
        v41 = (v38 + 1) & 7;
        if ((unsigned int)v38 >= 7) {
          v42 = 0x1.4000000000000p+2;
          v106 = (v38 + 1) & 0x7FFFFFF8;
          do {
            v106 -= 8;
            v42 = v42 * 0x1.999999999999ap-4 * 0x1.999999999999ap-4 *
                  0x1.999999999999ap-4 * 0x1.999999999999ap-4 *
                  0x1.999999999999ap-4 * 0x1.999999999999ap-4 *
                  0x1.999999999999ap-4 * 0x1.999999999999ap-4;
          } while (v106 != 0);
        }
        else {
          v42 = 0x1.4000000000000p+2;
        }
        for (; v41 != 0; --v41) {
          v42 = v42 * 0x1.999999999999ap-4;
        }
      }
      nn_util_detail_ConvertToExponentStyleStringWithPoint_plt(a1 + 24, 25, 16,
                                                               v36 + v42);
      v107 = *(unsigned __int8*)(a1 + 44);
      *(_QWORD*)(a1 + 25) = *(_QWORD*)(a1 + 26);
      *(_QWORD*)(a1 + 33) = *(_QWORD*)(a1 + 34);
      if ((unsigned int)(v107 - 48) > 9) {
        v109 = 0;
      }
      else {
        v108 = (unsigned __int8*)(a1 + 45);
        v109 = 0;
        do {
          v110 = v107 + 10 * v109;
          v111 = *v108++;
          v107 = v111;
          v109 = v110 - 48;
        } while ((unsigned int)(v111 - 48) < 0xA);
      }
      v103 = 17;
      v102 = (_DWORD*)a1;
      v105 = v38;
      if (*(_BYTE*)(a1 + 43) == 45) {
        v112 = -v109;
      }
      else {
        v112 = v109;
      }
      *(_DWORD*)(a1 + 56) = v112;
      goto LABEL_148;
    }
    if (v5 != 103) {
      return 0;
    }
    v38 -= v38 > 0;
  }
  nn_util_detail_ConvertToExponentStyleStringWithPoint_plt(
      a1 + 24, 25, (unsigned int)v38, v36);
  v39 = a1 + 26;
  if (v38 >= 1) {
    memmove_plt(a1 + 25, v39, (unsigned int)v38);
    v39 = a1 + (unsigned int)v38 + 26;
  LABEL_53:
    v40 = v38;
    while (*(_BYTE*)(a1 + 24 + (unsigned int)v40) == 48) {
      v53 = v40-- <= 0;
      if (v53) {
        goto LABEL_65;
      }
    }
    v43 = v40 + 1;
    v44 = *(unsigned __int8*)(v39 + 2);
    v45 = *(unsigned __int8*)(v39 + 1);
    if ((unsigned int)(v44 - 48) > 9) {
      goto LABEL_63;
    }
  LABEL_66:
    v47 = (unsigned __int8*)(v39 + 3);
    v46 = 0;
    do {
      v48 = v44 + 10 * v46;
      v49 = *v47++;
      v44 = v49;
      v46 = v48 - 48;
    } while ((unsigned int)(v49 - 48) < 0xA);
    goto LABEL_68;
  }
  if (v38 == 0) {
    goto LABEL_53;
  }
LABEL_65:
  v43 = 0;
  v44 = *(unsigned __int8*)(v39 + 2);
  v45 = *(unsigned __int8*)(v39 + 1);
  if ((unsigned int)(v44 - 48) <= 9) {
    goto LABEL_66;
  }
LABEL_63:
  v46 = 0;
LABEL_68:
  if (v45 == 45) {
    v50 = -v46;
  }
  else {
    v50 = v46;
  }
  if (v43 <= 1) {
    v51 = 1;
  }
  else {
    v51 = v43;
  }
  *(_DWORD*)(a1 + 56) = v50;
  if (v5 == 103) {
    v52 = *a2;
    v53 = v50 < -4 | v38 < v50;
    if (!v53) {
      v101 = v38 - v50;
      v102 = (_DWORD*)a1;
      v103 = v51;
      v104 = v51 + ~v50;
      if ((v52 & 4) != 0) {
        v105 = v101;
      }
      else {
        v105 = v104;
      }
    LABEL_148:
      nn_util_a7120(v102, v103, v105);
      return 1;
    }
    if ((v52 & 4) == 0) {
      v38 = v51 - 1;
    }
  }
  v54 = *(_DWORD*)(a1 + 60);
  v56 = v50 + 99;
  if ((unsigned int)(v50 + 99) < 0xC7) {
    v57 = 2;
  }
  else {
    v57 = 3;
  }
  if ((v54 & 4) == 0 & v38 < 1) {
    v59 = 0;
  }
  else {
    v59 = v38 + 1;
  }
  v60 = v57 + v59 + 3;
  if (v38 <= v60) {
    v61 = v60;
  }
  else {
    v61 = v38;
  }
  v62 = *(_DWORD*)(a1 + 52);
  v55 = *(_DWORD*)(a1 + 64);
  v63 = v55 - v62 - v61;
  if ((v54 & 0x18) == 0 && v63 >= 1) {
    v64 = v55 - v62 - v61;
    do {
      v66 = *(void (**)(__int64, __int64, __int64))a1;
      v65 = *(_QWORD*)(a1 + 8);
      LOBYTE(v114_.v114) = 32;
      v66(v65, (__int64)&v114_.v114, 1);
      --v64;
    } while (v64 != 0);
    v62 = *(_DWORD*)(a1 + 52);
  }
  if (v62 >= 1) {
    v67 = 50;
    for (k = (unsigned int)v62; k != 0; --k) {
      v70 = *(void (**)(__int64, __int64, __int64))a1;
      v69 = *(_QWORD*)(a1 + 8);
      LOBYTE(v114_.v114) = *(_BYTE*)(a1 + v67);
      v70(v69, (__int64)&v114_.v114, 1);
      ++v67;
    }
  }
  if (v63 >= 1 && (*(_DWORD*)(a1 + 60) & 0x18) == 0x10) {
    for (m = v63; m != 0; --m) {
      v73 = *(void (**)(__int64, __int64, __int64))a1;
      v72 = *(_QWORD*)(a1 + 8);
      LOBYTE(v114_.v114) = 48;
      v73(v72, (__int64)&v114_.v114, 1);
    }
  }
  v75 = *(void (**)(__int64, __int64, __int64))a1;
  v74 = *(_QWORD*)(a1 + 8);
  LOBYTE(v114_.v114) = *(_BYTE*)(a1 + 24);
  v75(v74, (__int64)&v114_.v114, 1);
  if (v38 > 0 || (*(_BYTE*)(a1 + 60) & 4) != 0) {
    v77 = *(void (**)(__int64, __int64, __int64))a1;
    v76 = *(_QWORD*)(a1 + 8);
    LOBYTE(v114_.v114) = 46;
    v77(v76, (__int64)&v114_.v114, 1);
    if (v38 >= 1) {
      if (v38 >= (unsigned int)(v51 - 1)) {
        v78 = (unsigned int)(v51 - 1);
      }
      else {
        v78 = (unsigned int)v38;
      }
      v79 = v38 - v78;
      if (v43 >= 2) {
        v80 = 25;
        do {
          v82 = *(void (**)(__int64, __int64, __int64))a1;
          v81 = *(_QWORD*)(a1 + 8);
          LOBYTE(v114_.v114) = *(_BYTE*)(a1 + v80);
          v82(v81, (__int64)&v114_.v114, 1);
          --v78;
          ++v80;
        } while (v78 != 0);
      }
      if (v79 >= 1) {
        do {
          v84 = *(void (**)(__int64, __int64, __int64))a1;
          v83 = *(_QWORD*)(a1 + 8);
          LOBYTE(v114_.v114) = 48;
          v84(v83, (__int64)&v114_.v114, 1);
          --v79;
        } while (v79 != 0);
      }
    }
  }
  if ((*(_DWORD*)(a1 + 60) & 0x400) != 0) {
    v85 = 69;
  }
  else {
    v85 = 101;
  }
  v87 = *(void (**)(__int64, __int64, __int64))a1;
  v86 = *(_QWORD*)(a1 + 8);
  LOBYTE(v114_.v114) = v85;
  v87(v86, (__int64)&v114_.v114, 1);
  v88 = *(_DWORD*)(a1 + 56);
  if (v88 < 0) {
    v91 = 45;
    *(_DWORD*)(a1 + 56) = -v88;
    v90 = *(void (**)(__int64, __int64, __int64))a1;
    v89 = *(_QWORD*)(a1 + 8);
  }
  else {
    v90 = *(void (**)(__int64, __int64, __int64))a1;
    v89 = *(_QWORD*)(a1 + 8);
    v91 = 43;
  }
  LOBYTE(v114_.v114) = v91;
  v90(v89, (__int64)&v114_.v114, 1);
  v92 = *(_DWORD*)(a1 + 56);
  v114_.v115 = 0;
  v114_.v114 = 0;
  *((_BYTE*)&v114_.v114 + v57 - 1) = v92 % 10 + 48;
  *((_BYTE*)&v114_.v114 + v57 - 2) = v92 / 10 - 10 * (v92 / 100) + 48;
  if ((unsigned __int64)(v57 - 1) > 1) {
    *((_BYTE*)&v114_.v114 + v57 - 3) = v92 / 100 - 10 * (v92 / 1000) + 48;
  }
  v94 = *(void (**)(__int64, __int64, __int64))a1;
  v93 = *(_QWORD*)(a1 + 8);
  v114_.v116[0] = v114_.v114;
  v94(v93, (__int64)v114_.v116, 1);
  v96 = *(void (**)(__int64, __int64, __int64))a1;
  v95 = *(_QWORD*)(a1 + 8);
  v114_.v116[0] = HIBYTE(v114_.v114);
  v96(v95, (__int64)v114_.v116, 1);
  if (v56 >= 0xC7) {
    v98 = *(void (**)(__int64, __int64, __int64))a1;
    v97 = *(_QWORD*)(a1 + 8);
    v114_.v116[0] = v114_.v115;
    v98(v97, (__int64)v114_.v116, 1);
  }
  v29 = 1;
  if (v63 >= 1 && (*(_DWORD*)(a1 + 60) & 8) != 0) {
    do {
      v100 = *(void (**)(__int64, __int64, __int64))a1;
      v99 = *(_QWORD*)(a1 + 8);
      LOBYTE(v114_.v114) = 32;
      v29 = 1;
      v100(v99, (__int64)&v114_.v114, 1);
      --v63;
    } while (v63 != 0);
  }
  return v29;
}

#pragma GCC visibility pop
