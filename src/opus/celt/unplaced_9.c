#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
extern _DWORD MovieData_a2290[30];
__int64 opus_celt_23220(__int64 a1, int a2, int a3, int a4);
bool opus_celt_30f00(__int64 a1, _WORD* a2, int a3, int a4, int a5);

__int64 opus_celt_23220(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  _WORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  _WORD* v17;
  __int16* v18;
  __int16 v19;
  __int16* v20;
  __int16 v21;
  __int16* v22;
  __int16 v23;
  __int16* v24;
  __int16 v25;
  __int16* v26;
  __int16 v27;
  __int16* v28;
  __int16 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int16 v35;
  char* v36;
  __int64 v37;
  char* v38;
  _WORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  _WORD* v45;
  __int16* v46;
  __int16 v47;
  __int16* v48;
  __int16 v49;
  __int16* v50;
  __int16 v51;
  __int16* v52;
  __int16 v53;
  __int16* v54;
  __int16 v55;
  __int16* v56;
  __int16 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int16 v61;
  _QWORD vars0[2];

  v8 = 2LL * a3 * a2;
  v9 = (char*)vars0 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt((__int64)v9, 0, v8);
  if (a4 == 0) {
    if (a3 < 1 || a2 < 1) {
      return memcpy_plt(a1, (__int64)v9, v8);
    }
    v36 = v9 + 8;
    v37 = 0;
    v38 = (char*)vars0 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    v39 = (_WORD*)a1;
    v40 = 2LL * (unsigned int)a2;
    v41 = 2LL * (unsigned int)a3;
    while ((unsigned int)a2 < 8) {
      v42 = 0;
      if ((a2 & 7) != 0) {
        goto LABEL_25;
      }
    LABEL_18:
      ++v37;
      ++v39;
      v36 += v40;
      v38 += v40;
      if (v37 == a3) {
        return memcpy_plt(a1, (__int64)v9, v8);
      }
    }
    v43 = 0;
    v44 = v36;
    v45 = v39;
    do {
      v43 -= 8;
      *((_WORD*)v44 - 4) = *v45;
      v46 = &v45[a3];
      v45 += 8 * (unsigned int)a3;
      v47 = *v46;
      v48 = &v46[(unsigned __int64)v41 / 2];
      *((_WORD*)v44 - 3) = v47;
      v49 = *v48;
      v50 = &v48[(unsigned __int64)v41 / 2];
      *((_WORD*)v44 - 2) = v49;
      v51 = *v50;
      v52 = &v50[(unsigned __int64)v41 / 2];
      *((_WORD*)v44 - 1) = v51;
      v53 = *v52;
      v54 = &v52[(unsigned __int64)v41 / 2];
      *(_WORD*)v44 = v53;
      v55 = *v54;
      v56 = &v54[(unsigned __int64)v41 / 2];
      *((_WORD*)v44 + 1) = v55;
      v57 = *v56;
      LOWORD(v56) = v56[a3];
      *((_WORD*)v44 + 2) = v57;
      *((_WORD*)v44 + 3) = (_WORD)v56;
      v44 += 16;
    } while (-(__int64)(a2 & 0x7FFFFFF8) != v43);
    v42 = -v43;
    if ((a2 & 7) == 0) {
      goto LABEL_18;
    }
  LABEL_25:
    v58 = &v38[2 * v42];
    v59 = v41 * v42;
    v60 = a2 & 7;
    do {
      v61 = *(_WORD*)((char*)v39 + v59);
      v59 += v41;
      --v60;
      *(_WORD*)v58 = v61;
      v58 += 2;
    } while (v60 != 0);
    goto LABEL_18;
  }
  if (a3 >= 1 && a2 >= 1) {
    v10 = 0;
    v11 = (_WORD*)a1;
    v12 = 2LL * a3;
    while (1) {
      v13 = MovieData_a2290[a3 - 2 + v10] * a2;
      if ((unsigned int)a2 >= 8) {
        break;
      }
      v14 = 0;
      if ((a2 & 7) != 0) {
        goto LABEL_12;
      }
    LABEL_5:
      ++v10;
      ++v11;
      if (v10 == a3) {
        return memcpy_plt(a1, (__int64)v9, v8);
      }
    }
    v15 = &v9[2 * v13 + 8];
    v16 = 0;
    v17 = v11;
    do {
      v16 -= 8;
      *((_WORD*)v15 - 4) = *v17;
      v18 = &v17[a3];
      v17 += 8 * a3;
      v19 = *v18;
      v20 = &v18[(unsigned __int64)v12 / 2];
      *((_WORD*)v15 - 3) = v19;
      v21 = *v20;
      v22 = &v20[(unsigned __int64)v12 / 2];
      *((_WORD*)v15 - 2) = v21;
      v23 = *v22;
      v24 = &v22[(unsigned __int64)v12 / 2];
      *((_WORD*)v15 - 1) = v23;
      v25 = *v24;
      v26 = &v24[(unsigned __int64)v12 / 2];
      *(_WORD*)v15 = v25;
      v27 = *v26;
      v28 = &v26[(unsigned __int64)v12 / 2];
      *((_WORD*)v15 + 1) = v27;
      v29 = *v28;
      LOWORD(v28) = v28[a3];
      *((_WORD*)v15 + 2) = v29;
      *((_WORD*)v15 + 3) = (_WORD)v28;
      v15 += 16;
    } while (-(__int64)(a2 & 0x7FFFFFF8) != v16);
    v14 = -v16;
    if ((a2 & 7) == 0) {
      goto LABEL_5;
    }
  LABEL_12:
    v30 = 2 * v14;
    v31 = v12 * v14;
    v32 = v30 + 2 * v13;
    v33 = a2 & 7;
    v34 = &v9[v32];
    do {
      v35 = *(_WORD*)((char*)v11 + v31);
      v31 += v12;
      --v33;
      *(_WORD*)v34 = v35;
      v34 += 2;
    } while (v33 != 0);
    goto LABEL_5;
  }
  return memcpy_plt(a1, (__int64)v9, v8);
}

bool opus_celt_30f00(__int64 a1, _WORD* a2, int a3, int a4, int a5)
{
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int16* v12;
  _WORD* v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  _WORD* v28;
  __int16* v29;
  __int16 v30;
  int v31;
  __int16* v32;
  unsigned __int64 v33;
  __int64* v34;
  __int16* v35;
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
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  _WORD* v54;
  __int16* v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int16* v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  __int16* v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int16* v86;
  __int16* v87;
  unsigned __int64 v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  __int16* v104;
  __int16* v105;
  __int64 v106;
  int v107;
  int v108;
  int v109;
  struct {
    __int64 v111;
    __int64 v112;
    _QWORD v113[4];
    int v114;
  } v111_;

  LOWORD(v5) = *a2;
  v111_.v114 = 0;
  memset(v111_.v113, 0, sizeof(v111_.v113));
  v111_.v111 = 0;
  v111_.v112 = 0;
  if (a5 == 1) {
    LOWORD(v111_.v111) = v5;
    if (a4 >= 2) {
      v6 = ((_BYTE)a4 - 1) & 7;
      if ((unsigned int)(a4 - 2) >= 7) {
        v11 = ((unsigned int)a4 - 1LL) & 0xFFFFFFFFFFFFFFF8LL;
        v12 = a2 + 8;
        v13 = v111_.v113;
        v7 = 1;
        do {
          v7 += 8;
          v14 = (__int16)v5 - 1024;
          if (v14 <= *(v12 - 7)) {
            LOWORD(v14) = *(v12 - 7);
          }
          v15 = *(v12 - 6);
          *(v13 - 7) = v14;
          v16 = (__int16)v14 - 1024;
          if (v16 <= v15) {
            LOWORD(v16) = v15;
          }
          v17 = *(v12 - 5);
          *(v13 - 6) = v16;
          v18 = (__int16)v16 - 1024;
          if (v18 <= v17) {
            LOWORD(v18) = v17;
          }
          v19 = *(v12 - 4);
          *(v13 - 5) = v18;
          v20 = (__int16)v18 - 1024;
          if (v20 <= v19) {
            LOWORD(v20) = v19;
          }
          v21 = *(v12 - 3);
          *(v13 - 4) = v20;
          v22 = (__int16)v20 - 1024;
          if (v22 <= v21) {
            LOWORD(v22) = v21;
          }
          v23 = *(v12 - 2);
          *(v13 - 3) = v22;
          v24 = (__int16)v22 - 1024;
          if (v24 <= v23) {
            LOWORD(v24) = v23;
          }
          v25 = *(v12 - 1);
          *(v13 - 2) = v24;
          v26 = (__int16)v24 - 1024;
          if (v26 <= v25) {
            LOWORD(v26) = v25;
          }
          v27 = *v12;
          v12 += 8;
          *(v13 - 1) = v26;
          v5 = (__int16)v26 - 1024;
          if (v5 <= v27) {
            LOWORD(v5) = v27;
          }
          v11 -= 8LL;
          *v13 = v5;
          v13 += 8;
        } while (v11 != 0);
      }
      else {
        v7 = 1;
      }
      if ((((_BYTE)a4 - 1) & 7) != 0) {
        v28 = (_WORD*)&v111_.v111 + v7;
        v29 = &a2[v7];
        do {
          v31 = *v29++;
          v30 = v31;
          v5 = (__int16)v5 - 1024;
          if (v5 <= v31) {
            LOWORD(v5) = v30;
          }
          --v6;
          *v28++ = v5;
        } while (v6 != 0);
      }
      goto LABEL_60;
    }
  LABEL_98:
    v82 = 0;
    return v82 / (a5 * (a4 - 3)) > 1024;
  }
  if ((__int16)v5 <= (__int16)a2[a3]) {
    v8 = (__int16)a2[a3];
  }
  else {
    v8 = (__int16)v5;
  }
  LOWORD(v111_.v111) = v8;
  if (a4 < 2) {
    goto LABEL_98;
  }
  v9 = ((_BYTE)a4 - 1) & 3;
  if ((unsigned int)(a4 - 2) >= 3) {
    v32 = a2 + 4;
    v33 = ((unsigned int)a4 - 1LL) & 0xFFFFFFFFFFFFFFFCLL;
    v34 = &v111_.v112;
    v35 = &a2[a3 + 4];
    v10 = 1;
    do {
      v36 = *(v32 - 3);
      v37 = (__int16)v8;
      v38 = v8 - 1024;
      v10 += 4;
      v39 = v37 - 1024;
      if (v36 <= *(v35 - 3)) {
        v36 = *(v35 - 3);
      }
      v40 = *(v35 - 2);
      if (v39 <= v36) {
        v38 = v36;
      }
      v41 = *(v32 - 2);
      v42 = (__int16)v38;
      *((_WORD*)v34 - 3) = v38;
      v43 = v38 - 1024;
      v44 = v42 - 1024;
      if (v41 <= v40) {
        v41 = v40;
      }
      v45 = *(v35 - 1);
      if (v44 <= v41) {
        v43 = v41;
      }
      v46 = *(v32 - 1);
      v47 = (__int16)v43;
      *((_WORD*)v34 - 2) = v43;
      v48 = v43 - 1024;
      v49 = v47 - 1024;
      if (v46 <= v45) {
        v46 = v45;
      }
      v50 = *v35;
      v35 += 4;
      if (v49 <= v46) {
        v48 = v46;
      }
      v51 = *v32;
      v32 += 4;
      v52 = (__int16)v48;
      *((_WORD*)v34 - 1) = v48;
      v8 = v48 - 1024;
      v53 = v52 - 1024;
      if (v51 <= v50) {
        v51 = v50;
      }
      if (v53 <= v51) {
        v8 = v51;
      }
      v33 -= 4LL;
      *(_WORD*)v34++ = v8;
    } while (v33 != 0);
  }
  else {
    v10 = 1;
  }
  if ((((_BYTE)a4 - 1) & 3) != 0) {
    v54 = (_WORD*)&v111_.v111 + v10;
    v55 = &a2[v10];
    do {
      v56 = *v55;
      v57 = v55[a3];
      v58 = (__int16)v8;
      LOWORD(v8) = v8 - 1024;
      ++v55;
      v59 = v58 - 1024;
      if (v56 <= v57) {
        v56 = v57;
      }
      if (v59 <= v56) {
        LOWORD(v8) = v56;
      }
      --v9;
      *v54++ = v8;
    } while (v9 != 0);
  }
LABEL_60:
  LOWORD(v60) = *((_WORD*)&v111_.v111 + (unsigned int)(a4 - 2) + 1);
  if ((~((_BYTE)a4 - 2) & 7) != 0) {
    v62 = ((_BYTE)a4 - 1) & 7;
    v61 = (unsigned int)(a4 - 2);
    do {
      v63 = 2 * v61--;
      v60 = (__int16)v60 - 1024;
      if (v60 <= *(__int16*)((char*)&v111_.v111 + v63)) {
        LOWORD(v60) = *(_WORD*)((char*)&v111_.v111 + v63);
      }
      --v62;
      *(_WORD*)((char*)&v111_.v111 + v63) = v60;
    } while (v62 != 0);
  }
  else {
    v61 = (unsigned int)(a4 - 2);
  }
  if ((unsigned int)(a4 - 2) >= 7) {
    v64 = v61 + 1;
    v65 = (__int16*)&v111_.v111 + v61 - 3;
    do {
      v64 -= 8;
      v66 = (__int16)v60 - 1024;
      if (v66 <= v65[3]) {
        LOWORD(v66) = v65[3];
      }
      v67 = v65[2];
      v65[3] = v66;
      v68 = (__int16)v66 - 1024;
      if (v68 <= v67) {
        LOWORD(v68) = v67;
      }
      v69 = v65[1];
      v65[2] = v68;
      v70 = (__int16)v68 - 1024;
      if (v70 <= v69) {
        LOWORD(v70) = v69;
      }
      v71 = *v65;
      v65[1] = v70;
      v72 = (__int16)v70 - 1024;
      if (v72 <= v71) {
        LOWORD(v72) = v71;
      }
      v73 = *(v65 - 1);
      *v65 = v72;
      v74 = (__int16)v72 - 1024;
      if (v74 <= v73) {
        LOWORD(v74) = v73;
      }
      v75 = *(v65 - 2);
      *(v65 - 1) = v74;
      v76 = (__int16)v74 - 1024;
      if (v76 <= v75) {
        LOWORD(v76) = v75;
      }
      v77 = *(v65 - 3);
      *(v65 - 2) = v76;
      v78 = (__int16)v76 - 1024;
      if (v78 <= v77) {
        LOWORD(v78) = v77;
      }
      v79 = *(v65 - 4);
      *(v65 - 3) = v78;
      v60 = (__int16)v78 - 1024;
      if (v60 <= v79) {
        LOWORD(v60) = v79;
      }
      *(v65 - 4) = v60;
      v65 -= 8;
    } while (v64 != 0);
  }
  if ((unsigned int)a4 < 4) {
    goto LABEL_98;
  }
  v80 = (__int16*)(a1 + 10);
  v81 = 0;
  v82 = 0;
  v83 = 2LL * a3;
  if (a5 <= 1) {
    v84 = 1;
  }
  else {
    v84 = (unsigned int)a5;
  }
  do {
    if ((unsigned int)(a4 - 4) >= 7) {
      v85 = 2;
      v86 = (__int16*)&v111_.v112 + 1;
      v87 = v80;
      v88 = ((unsigned int)(a4 - 1) - 2LL) & 0xFFFFFFFFFFFFFFF8LL;
      do {
        v85 += 8;
        v88 -= 8LL;
        v89 = (*(v87 - 3) & ~(*(v87 - 3) >> 31)) -
              (*(v86 - 3) & ~(*(v86 - 3) >> 31));
        v90 = (v89 & ~(v89 >> 31)) + v82;
        v91 = (*(v87 - 2) & ~(*(v87 - 2) >> 31)) -
              (*(v86 - 2) & ~(*(v86 - 2) >> 31));
        v92 = v91 & ~(v91 >> 31);
        v93 = (*(v87 - 1) & ~(*(v87 - 1) >> 31)) -
              (*(v86 - 1) & ~(*(v86 - 1) >> 31));
        v94 = (v93 & ~(v93 >> 31)) + v92 + v90;
        v95 = (*v87 & ~(*v87 >> 31)) - (*v86 & ~(*v86 >> 31));
        v96 = (v87[1] & ~(v87[1] >> 31)) - (v86[1] & ~(v86[1] >> 31));
        v97 = (v87[2] & ~(v87[2] >> 31)) - (v86[2] & ~(v86[2] >> 31));
        v98 =
            (v97 & ~(v97 >> 31)) + (v96 & ~(v96 >> 31)) + (v95 & ~(v95 >> 31));
        v99 = v87[3];
        v100 = v98 + v94;
        v101 = v87[4];
        v87 += 8;
        v102 = (v99 & ~(v99 >> 31)) - (v86[3] & ~(v86[3] >> 31));
        v103 = v86[4];
        v86 += 8;
        v82 = (((v101 & ~(v101 >> 31)) - (v103 & ~(v103 >> 31))) &
               ~(((v101 & ~(v101 >> 31)) - (v103 & ~(v103 >> 31))) >> 31)) +
              (v102 & ~(v102 >> 31)) + v100;
      } while (v88 != 0);
    }
    else {
      v85 = 2;
    }
    if ((((_BYTE)a4 - 3) & 7) != 0) {
      v104 = (__int16*)&v111_.v111 + v85;
      v105 = (__int16*)(a1 + 2 * v85);
      v106 = ((_BYTE)a4 - 3) & 7;
      do {
        v108 = *v105++;
        v107 = v108;
        v109 = *v104++;
        --v106;
        v82 += ((v107 & ~(v107 >> 31)) - (v109 & ~(v109 >> 31))) &
               ~(((v107 & ~(v107 >> 31)) - (v109 & ~(v109 >> 31))) >> 31);
      } while (v106 != 0);
    }
    ++v81;
    v80 = (__int16*)((char*)v80 + v83);
    a1 += v83;
  } while (v81 != v84);
  return v82 / (a5 * (a4 - 3)) > 1024;
}

#pragma GCC visibility pop
