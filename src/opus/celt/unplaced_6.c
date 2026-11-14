#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_35700(__int64, signed int*, int);
__int64 _celt_autocorr(__int64, signed int*, __int64, int, int, int,
                       unsigned int);
__int64 celt_rsqrt_norm(__int16);
__int64 frac_div32(int, unsigned int);
__int64 memset_plt(__int64, int, unsigned __int64);
extern _DWORD MovieData_a5bb4[16];
__int64 opus_celt_3aa60(__int64 a1, _WORD* a2, int a3, int a4, unsigned int a5);
__int64 opus_celt_3c380(__int64 a1, int a2, unsigned int a3, int a4, _DWORD* a5,
                        unsigned int a6, int a7);

__int64 opus_celt_3aa60(__int64 a1, _WORD* a2, int a3, int a4, unsigned int a5)
{
  _DWORD* v5;
  __int64 v7;
  __int64 v8;
  signed int v9;
  signed int v10;
  unsigned int v11;
  signed int v12;
  signed int v13;
  signed int* v14;
  __int64 v15;
  signed int v16;
  signed int v17;
  signed int v18;
  signed int v19;
  signed int v20;
  signed int v21;
  signed int v22;
  signed int* v23;
  __int64 v24;
  signed int v25;
  signed int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  signed int* v30;
  __int64 v31;
  signed int v32;
  signed int v33;
  signed int v34;
  signed int v35;
  signed int v36;
  signed int v37;
  signed int v38;
  signed int* v39;
  signed int v40;
  signed int v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  bool v46;
  char v47;
  char v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  _WORD* v52;
  _DWORD* v53;
  int v54;
  int v55;
  int v56;
  _WORD* v57;
  int* v58;
  int v59;
  int v60;
  int v61;
  int v62;
  _DWORD* v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  _WORD* v67;
  _DWORD* v68;
  int v69;
  int v70;
  int v71;
  _WORD* v72;
  int* v73;
  int v74;
  int v75;
  int v76;
  __int64 result;
  int v78;
  int v79;
  int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  __int16 v84;
  int v85;
  int v86;
  int v87;
  __int16 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  __int64 v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  __int16* v103;
  int v104;
  __int64 v105;
  struct {
    __int64 v106;
    __int64 v107;
    int v108;
  } v106_;

  {
    v5 = *(_DWORD**)a1;
    __asm__ volatile("" ::"r"(v5));
  }
  v106_.v108 = 0;
  v106_.v106 = 0;
  v106_.v107 = 0;
  v105 = 0;
  if (a3 >= 1) {
    v7 = a3 & 7;
    if ((unsigned int)a3 >= 8) {
      v14 = v5 + 4;
      v15 = 0;
      v9 = 0;
      v10 = 0;
      do {
        {
          v16 = *(v14 - 4);
          __asm__ volatile("" ::"r"(v16));
        }
        {
          v17 = *(v14 - 3);
          __asm__ volatile("" ::"r"(v17));
        }
        v15 -= 8;
        if (v10 <= v16) {
          v10 = *(v14 - 4);
          __asm__ volatile("" ::"r"(v10));
        }
        if (v9 >= v16) {
          v9 = *(v14 - 4);
          __asm__ volatile("" ::"r"(v9));
        }
        if (v10 <= v17) {
          v10 = *(v14 - 3);
          __asm__ volatile("" ::"r"(v10));
        }
        if (v9 >= v17) {
          v9 = *(v14 - 3);
          __asm__ volatile("" ::"r"(v9));
        }
        {
          v18 = *(v14 - 2);
          __asm__ volatile("" ::"r"(v18));
        }
        {
          v19 = *(v14 - 1);
          __asm__ volatile("" ::"r"(v19));
        }
        if (v10 <= v18) {
          v10 = *(v14 - 2);
          __asm__ volatile("" ::"r"(v10));
        }
        if (v9 >= v18) {
          v9 = *(v14 - 2);
          __asm__ volatile("" ::"r"(v9));
        }
        if (v10 <= v19) {
          v10 = *(v14 - 1);
          __asm__ volatile("" ::"r"(v10));
        }
        if (v9 >= v19) {
          v9 = *(v14 - 1);
          __asm__ volatile("" ::"r"(v9));
        }
        {
          v20 = v14[1];
          __asm__ volatile("" ::"r"(v20));
        }
        if (v10 <= *v14) {
          v10 = *v14;
          __asm__ volatile("" ::"r"(v10));
        }
        if (v9 >= *v14) {
          v9 = *v14;
          __asm__ volatile("" ::"r"(v9));
        }
        if (v10 <= v20) {
          v10 = v14[1];
          __asm__ volatile("" ::"r"(v10));
        }
        if (v9 >= v20) {
          v9 = v14[1];
          __asm__ volatile("" ::"r"(v9));
        }
        {
          v21 = v14[2];
          __asm__ volatile("" ::"r"(v21));
        }
        {
          v22 = v14[3];
          __asm__ volatile("" ::"r"(v22));
        }
        v14 += 8;
        if (v10 <= v21) {
          v10 = v21;
        }
        if (v9 >= v21) {
          v9 = v21;
        }
        if (v10 <= v22) {
          v10 = v22;
        }
        if (v9 >= v22) {
          v9 = v22;
        }
      } while (-(__int64)(a3 & 0x7FFFFFF8) != v15);
      v8 = -v15;
      if ((a3 & 7) == 0) {
      LABEL_48:
        if ((v10 + v9 < 0) ^ __OFADD__(v10, v9) | (v10 + v9 == 0)) {
          v11 = -v9;
        }
        else {
          v11 = v10;
        }
        if (a4 != 2) {
          v29 = 0;
          goto LABEL_103;
        }
        {
          v27 = *(_QWORD*)(a1 + 8);
          __asm__ volatile("" ::"r"(v27));
        }
        if ((unsigned int)a3 >= 8) {
          v30 = (signed int*)(v27 + 16);
          v31 = 0;
          v13 = 0;
          v12 = 0;
          do {
            {
              v33 = *(v30 - 4);
              __asm__ volatile("" ::"r"(v33));
            }
            {
              v32 = *(v30 - 3);
              __asm__ volatile("" ::"r"(v32));
            }
            v31 -= 8;
            if (v12 <= v33) {
              v12 = *(v30 - 4);
              __asm__ volatile("" ::"r"(v12));
            }
            if (v13 >= v33) {
              v13 = *(v30 - 4);
              __asm__ volatile("" ::"r"(v13));
            }
            if (v12 <= v32) {
              v12 = *(v30 - 3);
              __asm__ volatile("" ::"r"(v12));
            }
            if (v13 >= v32) {
              v13 = *(v30 - 3);
              __asm__ volatile("" ::"r"(v13));
            }
            {
              v35 = *(v30 - 2);
              __asm__ volatile("" ::"r"(v35));
            }
            {
              v34 = *(v30 - 1);
              __asm__ volatile("" ::"r"(v34));
            }
            if (v12 <= v35) {
              v12 = *(v30 - 2);
              __asm__ volatile("" ::"r"(v12));
            }
            if (v13 >= v35) {
              v13 = *(v30 - 2);
              __asm__ volatile("" ::"r"(v13));
            }
            if (v12 <= v34) {
              v12 = *(v30 - 1);
              __asm__ volatile("" ::"r"(v12));
            }
            if (v13 >= v34) {
              v13 = *(v30 - 1);
              __asm__ volatile("" ::"r"(v13));
            }
            {
              v36 = v30[1];
              __asm__ volatile("" ::"r"(v36));
            }
            if (v12 <= *v30) {
              v12 = *v30;
              __asm__ volatile("" ::"r"(v12));
            }
            if (v13 >= *v30) {
              v13 = *v30;
              __asm__ volatile("" ::"r"(v13));
            }
            if (v12 <= v36) {
              v12 = v30[1];
              __asm__ volatile("" ::"r"(v12));
            }
            if (v13 >= v36) {
              v13 = v30[1];
              __asm__ volatile("" ::"r"(v13));
            }
            {
              v38 = v30[2];
              __asm__ volatile("" ::"r"(v38));
            }
            {
              v37 = v30[3];
              __asm__ volatile("" ::"r"(v37));
            }
            v30 += 8;
            if (v12 <= v38) {
              v12 = v38;
            }
            if (v13 >= v38) {
              v13 = v38;
            }
            if (v12 <= v37) {
              v12 = v37;
            }
            if (v13 >= v37) {
              v13 = v37;
            }
          } while (-(__int64)(a3 & 0x7FFFFFF8) != v31);
          v28 = -v31;
          if ((a3 & 7) == 0) {
            goto LABEL_98;
          }
        }
        else {
          v28 = 0;
          v13 = 0;
          v12 = 0;
          if ((a3 & 7) == 0) {
            goto LABEL_98;
          }
        }
        v39 = (signed int*)(v27 + 4 * v28);
        do {
          {
            v41 = *v39++;
            __asm__ volatile("" ::"r"(v41));
          }
          v40 = v41;
          if (v12 <= v41) {
            v12 = v40;
          }
          if (v13 >= v40) {
            v13 = v40;
          }
          --v7;
        } while (v7 != 0);
        goto LABEL_98;
      }
    }
    else {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      if ((a3 & 7) == 0) {
        goto LABEL_48;
      }
    }
    {
      v23 = &v5[v8];
      __asm__ volatile("" ::"r"(v23));
    }
    v24 = a3 & 7;
    do {
      {
        v26 = *v23++;
        __asm__ volatile("" ::"r"(v26));
      }
      v25 = v26;
      if (v10 <= v26) {
        v10 = v25;
      }
      if (v9 >= v25) {
        v9 = v25;
      }
      --v24;
    } while (v24 != 0);
    goto LABEL_48;
  }
  if (a4 != 2) {
    v29 = 0;
    v11 = 0;
    goto LABEL_103;
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
LABEL_98:
  v29 = 1;
  if ((v12 + v13 < 0) ^ __OFADD__(v12, v13) | (v12 + v13 == 0)) {
    v42 = -v13;
  }
  else {
    v42 = v12;
  }
  if (v11 <= v42) {
    v11 = v42;
  }
LABEL_103:
  v43 = (unsigned int)(a3 >> 1);
  if (v11 <= 1) {
    v44 = 1;
  }
  else {
    v44 = v11;
  }
  v45 = __clz((unsigned int)(v44)) ^ 0x1F;
  v46 = v45 >= 0xA;
  v47 = v45 - 10;
  if (!v46) {
    v47 = 0;
  }
  v48 = v47 + v29;
  if ((int)v43 >= 2) {
    v49 = (v43 - 1) & 3;
    if ((unsigned int)(v43 - 2) >= 3) {
      v51 = (v43 - 1) & 0xFFFFFFFFFFFFFFFCLL;
      v52 = a2 + 4;
      v53 = v5 + 5;
      v50 = v51 | 1;
      do {
        v51 -= 4LL;
        *(v52 - 3) =
            (signed __int32)(*(v53 - 3) +
                             ((signed __int32)(*(v53 - 2) + *(v53 - 4)) >>
                              1)) >>
            1 >> v48;
        *(v52 - 2) =
            (signed __int32)(*(v53 - 1) +
                             ((signed __int32)(*(int*)v53 + *(v53 - 2)) >>
                              1)) >>
            1 >> v48;
        *(v52 - 1) =
            (signed __int32)(v53[1] +
                             ((signed __int32)(v53[2] + *(int*)v53) >> 1)) >>
            1 >> v48;
        {
          v55 = v53[3];
          __asm__ volatile("" ::"r"(v55));
        }
        {
          v54 = v53[4];
          __asm__ volatile("" ::"r"(v54));
        }
        {
          v56 = v53[2];
          __asm__ volatile("" ::"r"(v56));
        }
        v53 += 8;
        *v52 = (v55 + ((v54 + v56) >> 1)) >> 1 >> v48;
        v52 += 4;
      } while (v51 != 0);
    }
    else {
      v50 = 1;
    }
    if (v49 != 0) {
      {
        v57 = &a2[v50];
        __asm__ volatile("" ::"r"(v57));
      }
      {
        v58 = &v5[2 * v50];
        __asm__ volatile("" ::"r"(v58));
      }
      do {
        {
          v59 = *(v58 - 1);
          __asm__ volatile("" ::"r"(v59));
        }
        {
          v60 = *v58;
          __asm__ volatile("" ::"r"(v60));
        }
        {
          v61 = v58[1];
          __asm__ volatile("" ::"r"(v61));
        }
        --v49;
        v58 += 2;
        *v57++ = (v60 + ((v61 + v59) >> 1)) >> 1 >> v48;
      } while (v49 != 0);
    }
  }
  {
    v62 = (signed __int32)(*(int*)v5 + ((int)v5[1] >> 1)) >> 1 >> v48;
    __asm__ volatile("" ::"r"(v62));
  }
  *a2 = v62;
  if (v29 != 0) {
    {
      v63 = *(_DWORD**)(a1 + 8);
      __asm__ volatile("" ::"r"(v63));
    }
    if ((int)v43 >= 2) {
      v64 = (v43 - 1) & 3;
      if ((unsigned int)(v43 - 2) >= 3) {
        v66 = (v43 - 1) & 0xFFFFFFFFFFFFFFFCLL;
        v67 = a2 + 4;
        v68 = v63 + 5;
        v65 = v66 | 1;
        do {
          v66 -= 4LL;
          *(v67 - 3) +=
              (signed __int32)(*(v68 - 3) +
                               ((signed __int32)(*(v68 - 2) + *(v68 - 4)) >>
                                1)) >>
              1 >> v48;
          *(v67 - 2) +=
              (signed __int32)(*(v68 - 1) +
                               ((signed __int32)(*(int*)v68 + *(v68 - 2)) >>
                                1)) >>
              1 >> v48;
          *(v67 - 1) +=
              (signed __int32)(v68[1] +
                               ((signed __int32)(v68[2] + *(int*)v68) >> 1)) >>
              1 >> v48;
          {
            v70 = v68[3];
            __asm__ volatile("" ::"r"(v70));
          }
          {
            v69 = v68[4];
            __asm__ volatile("" ::"r"(v69));
          }
          {
            v71 = v68[2];
            __asm__ volatile("" ::"r"(v71));
          }
          v68 += 8;
          *v67 += (v70 + ((v69 + v71) >> 1)) >> 1 >> v48;
          v67 += 4;
        } while (v66 != 0);
      }
      else {
        v65 = 1;
      }
      if (v64 != 0) {
        {
          v72 = &a2[v65];
          __asm__ volatile("" ::"r"(v72));
        }
        {
          v73 = &v63[2 * v65];
          __asm__ volatile("" ::"r"(v73));
        }
        do {
          {
            v74 = *(v73 - 1);
            __asm__ volatile("" ::"r"(v74));
          }
          {
            v75 = *v73;
            __asm__ volatile("" ::"r"(v75));
          }
          {
            v76 = v73[1];
            __asm__ volatile("" ::"r"(v76));
          }
          --v64;
          v73 += 2;
          *v72++ += (v75 + ((v76 + v74) >> 1)) >> 1 >> v48;
        } while (v64 != 0);
      }
    }
    *a2 = ((signed __int32)(*(int*)v63 + ((int)v63[1] >> 1)) >> 1 >> v48) + v62;
  }
  _celt_autocorr((__int64)a2, (signed int*)&v106_.v106, 0, 0, 4, v43, a5);
  LODWORD(v106_.v106) = v106_.v106 + ((int)v106_.v106 >> 13);
  HIDWORD(v106_.v106) -= SHIDWORD(v106_.v106) >> 14;
  LODWORD(v106_.v107) = v106_.v107 - ((int)v106_.v107 >> 12);
  HIDWORD(v106_.v107) -= (unsigned __int64)(9LL * SHIDWORD(v106_.v107)) >> 14;
  v106_.v108 -= v106_.v108 >> 10;
  result = MovieRoutine_35700((__int64)&v105, (signed int*)&v106_.v106, 4);
  if ((int)v43 >= 1) {
    v78 = 21496 * SHIWORD(v105);
    v79 = 23885 * SWORD2(v105);
    v80 = 26540 * SWORD1(v105);
    v81 = 29490 * (__int16)v105;
    v82 = (unsigned int)v80 >> 15;
    v83 = ((unsigned int)v78 >> 15) +
          ((unsigned int)(26214 * (__int16)(v79 >> 15)) >> 15);
    v84 = ((unsigned int)v79 >> 15) +
          ((unsigned int)(26214 * (__int16)(v80 >> 15)) >> 15);
    v85 = (52428 * (__int16)(v78 >> 15)) >> 16;
    v86 = v84;
    v87 = (__int16)v83;
    v88 = v82 + ((unsigned int)(26214 * (__int16)(v81 >> 15)) >> 15);
    v89 = v43 & 3;
    v90 = (__int16)(((unsigned int)v81 >> 15) + 3277);
    if ((unsigned int)v43 < 4) {
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v96 = 0;
      if ((v43 & 3) == 0) {
        return result;
      }
      goto LABEL_133;
    }
    result = (__int64)(a2 + 2);
    v97 = 0;
    v98 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v96 = 0;
    do {
      v92 = v96;
      v97 -= 4;
      v99 = v93 * v87 + v98 * v85;
      v100 = v94 * v87 + v93 * v85;
      {
        v93 = *(__int16*)(result - 4);
        __asm__ volatile("" ::"r"(v93));
      }
      *(_WORD*)(result - 4) +=
          (unsigned int)(v99 + v94 * v86 + v95 * v88 + v92 * v90 + 2048) >> 12;
      v101 = v95 * v87 + v94 * v85;
      {
        v94 = *(__int16*)(result - 2);
        __asm__ volatile("" ::"r"(v94));
      }
      *(_WORD*)(result - 2) +=
          (unsigned int)(v100 + v95 * v86 + v92 * v88 + v90 * v93 + 2048) >> 12;
      v102 = v92 * v87 + v95 * v85;
      {
        v95 = *(__int16*)result;
        __asm__ volatile("" ::"r"(v95));
      }
      *(_WORD*)result +=
          (unsigned int)(v101 + v92 * v86 + v88 * v93 + v90 * v94 + 2048) >> 12;
      {
        v96 = *(__int16*)(result + 2);
        __asm__ volatile("" ::"r"(v96));
      }
      *(_WORD*)(result + 2) +=
          (unsigned int)(v102 + v86 * v93 + v88 * v94 + v90 * v95 + 2048) >> 12;
      result += 8;
      v98 = v92;
    } while (-(v43 & 0x7FFFFFFC) != v97);
    v91 = -v97;
    if ((v43 & 3) != 0) {
    LABEL_133:
      {
        v103 = &a2[v91];
        __asm__ volatile("" ::"r"(v103));
      }
      do {
        --v89;
        v104 = v93 * v87 + v92 * v85 + v94 * v86 + v95 * v88 + v96 * v90;
        v92 = v93;
        v93 = v94;
        v94 = v95;
        v95 = v96;
        {
          v96 = *v103;
          __asm__ volatile("" ::"r"(v96));
        }
        result = v96 + ((unsigned int)(v104 + 2048) >> 12);
        *v103++ = result;
      } while (v89 != 0);
    }
  }
  return result;
}

__int64 opus_celt_3c380(__int64 a1, int a2, unsigned int a3, int a4, _DWORD* a5,
                        unsigned int a6, int a7)
{
  int v7;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  signed int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int16* v25;
  __int16* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
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
  __int16* v47;
  int v48;
  int v49;
  int v50;
  signed int* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  int* v59;
  __int64 v60;
  __int16* v61;
  __int16* v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int* v72;
  __int16* v73;
  int v74;
  int v75;
  signed int v76;
  int v77;
  unsigned int v78;
  int v79;
  char v80;
  unsigned int v81;
  unsigned int v82;
  signed int v83;
  char v84;
  signed int v85;
  int v86;
  int v87;
  int v88;
  unsigned int v89;
  __int16 v90;
  int v91;
  unsigned int v92;
  int v93;
  __int16 v94;
  int v95;
  __int16 v96;
  unsigned __int64 v97;
  int v98;
  int v99;
  int v100;
  bool v101;
  int v102;
  int v103;
  unsigned __int64 v104;
  int v105;
  int v106;
  int v107;
  int v108;
  __int64 v109;
  unsigned int v110;
  __int16 v111;
  __int64 v112;
  signed int v113;
  signed int v114;
  unsigned __int64 v115;
  int v116;
  __int64 v117;
  int v118;
  int v119;
  __int16* v120;
  __int64 v121;
  int v122;
  int v123;
  __int16* v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  __int16* v146;
  __int64 v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  signed int v153;
  unsigned int v155;
  int v156;
  int v157;
  __int64 v158;
  int v159;
  char v160;
  signed int v161;
  int v162;
  int v163;
  signed int v164;
  __int64 v165;
  int v166;
  signed int v167;
  int v168;
  int v169;
  int v170;
  unsigned int v171;
  int v172;
  __int16 v173;
  int v174;
  __int16 v175;
  unsigned __int64 v176;
  int v177;
  int v178;
  unsigned int v179;
  __int16 v180;
  int v181;
  int v182;
  int v183;
  unsigned int v184;
  unsigned int v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  int v189;
  int v190;
  int v191;
  __int64 v192;
  __int64 v193;
  __int16* v194;
  int v195;
  int v196;
  int v197;
  __int64 v198;
  __int16* v199;
  int v200;
  int v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int16* v206;
  int v207;
  int v208;
  int v209;
  __int64 v210;
  __int16* v211;
  int v212;
  int v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int16* v218;
  int v219;
  int v220;
  int v221;
  __int64 v222;
  __int16* v223;
  int v224;
  int v225;
  int v226;
  __int64 result;
  int v228;
  struct {
    __int64 v229;
    char gap8_[4];
    int v230;
    _DWORD* v231;
    __int64 v232;
    __int16* v233;
    char gap40_[4];
    int v234;
    __int64 v235;
    int v236;
    int v237;
    unsigned int v238;
    signed int v239;
    __int64 v240;
    char gap80_[4];
    int v241;
    unsigned __int64 v242;
    signed int* v243;
    __int64 v244;
    char gap112_[4];
    int v245;
    __int64 v246;
    __int64 v247;
    int v248;
    int v249;
    unsigned __int64 v250;
    int v251;
    int v252;
    int v253;
    signed int v254;
  } v229_;

  {
    v7 = *(_DWORD*)a5;
    __asm__ volatile("" ::"r"(v7));
  }
  v229_.v252 = a7;
  v13 = a2 / 2;
  v14 = (__int64)(int)(a2 + ((unsigned int)a2 >> 31)) >> 1;
  v15 = a4 / 2;
  v16 = v7 / 2;
  if (v16 >= v13 - 1) {
    v17 = (unsigned int)(v13 - 1);
  }
  else {
    v17 = (unsigned int)v16;
  }
  v18 = 4LL * v13;
  *(_DWORD*)a5 = v17;
  v19 = (int)v17;
  v20 = 0;
  v21 = 0;
  v229_.v247 = v17;
  v229_.v253 = a4;
  if (a4 >= 2) {
    v22 = v15 & 7;
    if ((unsigned int)(v15 - 1) < 7) {
      v23 = 0;
      v21 = 0;
      v20 = 0;
      if ((v15 & 7) == 0) {
        goto LABEL_13;
      }
      goto LABEL_11;
    }
    v24 = 0;
    v21 = 0;
    v20 = 0;
    v25 = (__int16*)(a1 + 2 * v14 + 14);
    do {
      {
        v26 = &v25[-(int)v17];
        __asm__ volatile("" ::"r"(v26));
      }
      {
        v27 = *(v25 - 7);
        __asm__ volatile("" ::"r"(v27));
      }
      v24 -= 8;
      {
        v28 = *(v25 - 6);
        __asm__ volatile("" ::"r"(v28));
      }
      v29 = v20 + v27 * v27 + v28 * v28;
      {
        v30 = v21 + *(v26 - 7) * v27 + *(v26 - 6) * v28;
        __asm__ volatile("" ::"r"(v30));
      }
      {
        v31 = *(v25 - 5);
        __asm__ volatile("" ::"r"(v31));
      }
      v32 = v29 + v31 * v31;
      {
        v33 = v30 + *(v26 - 5) * v31;
        __asm__ volatile("" ::"r"(v33));
      }
      {
        v34 = *(v25 - 4);
        __asm__ volatile("" ::"r"(v34));
      }
      v35 = v32 + v34 * v34;
      {
        v36 = v33 + *(v26 - 4) * v34;
        __asm__ volatile("" ::"r"(v36));
      }
      {
        v37 = *(v25 - 3);
        __asm__ volatile("" ::"r"(v37));
      }
      v38 = v35 + v37 * v37;
      {
        v39 = v36 + *(v26 - 3) * v37;
        __asm__ volatile("" ::"r"(v39));
      }
      {
        v40 = *(v25 - 2);
        __asm__ volatile("" ::"r"(v40));
      }
      v41 = v38 + v40 * v40;
      {
        v42 = v39 + *(v26 - 2) * v40;
        __asm__ volatile("" ::"r"(v42));
      }
      {
        v43 = *(v25 - 1);
        __asm__ volatile("" ::"r"(v43));
      }
      v44 = v41 + v43 * v43;
      {
        v45 = v42 + *(v26 - 1) * v43;
        __asm__ volatile("" ::"r"(v45));
      }
      {
        v46 = *v25;
        __asm__ volatile("" ::"r"(v46));
      }
      v25 += 8;
      v20 = v44 + v46 * v46;
      v21 = v45 + *v26 * v46;
    } while (-(__int64)(v15 & 0x3FFFFFF8) != v24);
    v23 = -v24;
    if ((v15 & 7) != 0) {
    LABEL_11:
      v47 = (__int16*)(a1 + 2 * v23 + 2 * v14);
      do {
        {
          v48 = *v47;
          __asm__ volatile("" ::"r"(v48));
        }
        {
          v49 = v47[-v19];
          __asm__ volatile("" ::"r"(v49));
        }
        ++v47;
        --v22;
        v20 += v48 * v48;
        v21 += v49 * v48;
      } while (v22 != 0);
    }
  }
LABEL_13:
  v229_.v245 = v21;
  v229_.v232 = (unsigned int)(a4 / 2);
  v50 = a3 + (a3 >> 31);
  v229_.v243 =
      (signed int*)((char*)&v229_.v229 - ((v18 + 19) & 0xFFFFFFFFFFFFFFF0LL));
  v229_.v244 = v14;
  memset_plt((__int64)v229_.v243, 0, v18 + 4);
  v51 = v229_.v243;
  v52 = v229_.v244;
  *v229_.v243 = v20;
  if (a2 >= 2) {
    v53 = v52 & 3;
    v54 = (int)v229_.v232;
    if ((unsigned int)(v52 - 1) >= 3) {
      v57 = v52 & 0x3FFFFFFC;
      v58 = a1 + 2 * v52;
      v59 = v51 + 4;
      v60 = v58 + 2LL * (int)v229_.v232;
      v61 = (__int16*)(v58 - 4);
      v55 = 1;
      v62 = (__int16*)(v60 - 8);
      v56 = v20;
      do {
        v55 += 4;
        v57 -= 4;
        {
          v63 = v56 + v61[1] * v61[1] - v62[3] * v62[3];
          __asm__ volatile("" ::"r"(v63));
        }
        v64 = v63 & ~(v63 >> 31);
        {
          v65 = v63 + *v61 * *v61 - v62[2] * v62[2];
          __asm__ volatile("" ::"r"(v65));
        }
        *(v59 - 3) = v64;
        *(v59 - 2) = v65 & ~(v65 >> 31);
        {
          v66 = *(v61 - 1);
          __asm__ volatile("" ::"r"(v66));
        }
        {
          v67 = *(v61 - 2);
          __asm__ volatile("" ::"r"(v67));
        }
        v61 -= 4;
        {
          v68 = v65 + v66 * v66 - v62[1] * v62[1];
          __asm__ volatile("" ::"r"(v68));
        }
        v69 = v68 & ~(v68 >> 31);
        v70 = v68 + v67 * v67;
        {
          v71 = *v62;
          __asm__ volatile("" ::"r"(v71));
        }
        v62 -= 4;
        v56 = v70 - v71 * v71;
        *(v59 - 1) = v69;
        *v59 = v56 & ~(v56 >> 31);
        v59 += 4;
      } while (v57 != 0);
    }
    else {
      v55 = 1;
      v56 = v20;
    }
    if ((v52 & 3) != 0) {
      {
        v72 = &v51[v55];
        __asm__ volatile("" ::"r"(v72));
      }
      v73 = (__int16*)(a1 - 2 * v55 + 2 * v52);
      do {
        --v53;
        v74 = v56 + *v73 * *v73;
        {
          v75 = v73[v54];
          __asm__ volatile("" ::"r"(v75));
        }
        --v73;
        v56 = v74 - v75 * v75;
        *v72++ = v56 & ~(v56 >> 31);
      } while (v53 != 0);
    }
  }
  {
    v76 = v51[v19];
    __asm__ volatile("" ::"r"(v76));
  }
  v77 = a6 + (a6 >> 31);
  v78 = __clz((unsigned int)(v20));
  v79 = v50 >> 1;
  v229_.v231 = a5;
  v229_.v230 = a3;
  v229_.v239 = v76;
  v80 = v78 - 17;
  v81 = (unsigned int)v20 >> 15;
  v229_.v237 = v50 >> 1;
  v229_.v238 = 17 - v78;
  if (v20 != 0 && v229_.v245 != 0 && v76 != 0) {
    v82 = __clz((unsigned int)(v76));
    v83 = v20 << v80;
    v84 = v82 - 17;
    v82 = 17 - v82;
    v85 = v76 << v84;
    v86 = v82 + v229_.v238;
    v87 = v20 >> v229_.v238;
    v88 = v76 >> v82;
    v89 = (unsigned int)v76 >> 15;
    if (v81 != 0) {
      v90 = v20 >> v229_.v238;
    }
    else {
      v90 = v20 << v80;
    }
    if (v89 == 0) {
      LOWORD(v88) = v85;
    }
    v91 = ((__int16)v88 * v90) >> 14;
    v92 = (unsigned int)v91 >> 1;
    if (v91 >= 0x8000) {
      v93 = v86 + 1;
    }
    else {
      LOWORD(v92) = 2 * v91;
      v93 = v86 - 1;
    }
    if ((v86 & 1) != 0) {
      v94 = v92;
    }
    else {
      v94 = v91;
    }
    if ((v86 & 1) != 0) {
      v95 = v93;
    }
    else {
      v95 = v86;
    }
    v96 = celt_rsqrt_norm(v94);
    v51 = v229_.v243;
    v52 = v229_.v244;
    v97 = v96 * (__int64)v229_.v245;
    v79 = v229_.v237;
    v97 >>= 15;
    v98 = (int)v97 >> ((v95 >> 1) - 1);
    v99 = (_DWORD)v97 << (1 - (v95 >> 1));
    if (v95 >> 1 > 1) {
      v99 = v98;
    }
    if (v99 >= 0x7FFF) {
      v100 = 0x7FFF;
    }
    else {
      v100 = v99;
    }
  }
  else {
    v100 = 0;
    v83 = v20 << v80;
    v87 = v20 >> v229_.v238;
  }
  v229_.v241 = v100;
  v101 = v81 == 0;
  v102 = -(v77 >> 1);
  v229_.v229 = a1;
  v103 = 3 * v79;
  v104 = 4;
  v105 = 2;
  v106 = (27853 * (__int16)v100) >> 15;
  v107 = (22938 * (__int16)v100) >> 15;
  v108 = 2 * v229_.v247;
  v229_.v240 = v229_.v247;
  v109 = -(v229_.v232 & 0x3FFFFFF8);
  v110 = 2 * v229_.v247 + 2;
  v229_.v234 = (__int16)v229_.v252 >> 1;
  v229_.v235 = a1 + 2 * v52;
  v229_.v242 = v229_.v232 - 1;
  v229_.v233 = (__int16*)(v229_.v235 + 14);
  v229_.v246 = v229_.v232 & 7;
  if (v101) {
    v111 = v83;
  }
  else {
    v111 = v87;
  }
  v112 = 2;
  v229_.v236 = v111;
  do {
    v113 = (v105 + v108) / (unsigned int)(2 * v112);
    if (v113 < v79) {
      break;
    }
    if (v112 == 2) {
      v114 = v113 + v229_.v247;
      if (v113 + (int)v229_.v247 > (int)v52) {
        v114 = v229_.v247;
      }
      v115 = v110;
      if (v229_.v253 < 2) {
      LABEL_54:
        v116 = 0;
        goto LABEL_65;
      }
    }
    else {
      {
        v114 = ((int)v112 + v108 * MovieData_a5bb4[v112]) /
               (unsigned int)(2 * v112);
        __asm__ volatile("" ::"r"(v114));
      }
      v115 = v110;
      if (v229_.v253 < 2) {
        goto LABEL_54;
      }
    }
    if (v229_.v242 >= 7) {
      v120 = v229_.v233;
      v121 = 0;
      v118 = 0;
      v119 = 0;
      do {
        {
          v122 = *(v120 - 7);
          __asm__ volatile("" ::"r"(v122));
        }
        v121 -= 8;
        {
          v123 = v119 + v120[-(v115 / v104) - 7] * v122;
          __asm__ volatile("" ::"r"(v123));
        }
        {
          v124 = &v120[-v114];
          __asm__ volatile("" ::"r"(v124));
        }
        {
          v125 = v118 + *(v124 - 7) * v122;
          __asm__ volatile("" ::"r"(v125));
        }
        {
          v126 = *(v120 - 6);
          __asm__ volatile("" ::"r"(v126));
        }
        {
          v127 = v123 + v120[-(v115 / v104) - 6] * v126;
          __asm__ volatile("" ::"r"(v127));
        }
        {
          v128 = v125 + *(v124 - 6) * v126;
          __asm__ volatile("" ::"r"(v128));
        }
        {
          v129 = *(v120 - 5);
          __asm__ volatile("" ::"r"(v129));
        }
        {
          v130 = v127 + v120[-(v115 / v104) - 5] * v129;
          __asm__ volatile("" ::"r"(v130));
        }
        {
          v131 = v128 + *(v124 - 5) * v129;
          __asm__ volatile("" ::"r"(v131));
        }
        {
          v132 = *(v120 - 4);
          __asm__ volatile("" ::"r"(v132));
        }
        {
          v133 = v130 + v120[-(v115 / v104) - 4] * v132;
          __asm__ volatile("" ::"r"(v133));
        }
        {
          v134 = v131 + *(v124 - 4) * v132;
          __asm__ volatile("" ::"r"(v134));
        }
        {
          v135 = *(v120 - 3);
          __asm__ volatile("" ::"r"(v135));
        }
        {
          v136 = v133 + v120[-(v115 / v104) - 3] * v135;
          __asm__ volatile("" ::"r"(v136));
        }
        {
          v137 = v134 + *(v124 - 3) * v135;
          __asm__ volatile("" ::"r"(v137));
        }
        {
          v138 = *(v120 - 2);
          __asm__ volatile("" ::"r"(v138));
        }
        {
          v139 = v136 + v120[-(v115 / v104) - 2] * v138;
          __asm__ volatile("" ::"r"(v139));
        }
        {
          v140 = v137 + *(v124 - 2) * v138;
          __asm__ volatile("" ::"r"(v140));
        }
        {
          v141 = *(v120 - 1);
          __asm__ volatile("" ::"r"(v141));
        }
        {
          v142 = v139 + v120[-(v115 / v104) - 1] * v141;
          __asm__ volatile("" ::"r"(v142));
        }
        {
          v143 = v140 + *(v124 - 1) * v141;
          __asm__ volatile("" ::"r"(v143));
        }
        {
          v144 = *v120;
          __asm__ volatile("" ::"r"(v144));
        }
        {
          v145 = v120[-(v115 / v104)];
          __asm__ volatile("" ::"r"(v145));
        }
        v120 += 8;
        v119 = v142 + v145 * v144;
        v118 = v143 + *v124 * v144;
      } while (v109 != v121);
      v117 = -v121;
      if (v229_.v246 == 0) {
        goto LABEL_64;
      }
    LABEL_62:
      v146 = (__int16*)(v229_.v235 + 2 * v117);
      v147 = v229_.v246;
      do {
        {
          v148 = *v146;
          __asm__ volatile("" ::"r"(v148));
        }
        --v147;
        v119 += v146[-(v115 / v104)] * v148;
        {
          v149 = v146[-v114];
          __asm__ volatile("" ::"r"(v149));
        }
        ++v146;
        v118 += v149 * v148;
      } while (v147 != 0);
      goto LABEL_64;
    }
    v117 = 0;
    v118 = 0;
    v119 = 0;
    if (v229_.v246 != 0) {
      goto LABEL_62;
    }
  LABEL_64:
    v116 = v118 + v119;
  LABEL_65:
    v150 = v116 >> 1;
    v151 = 0;
    {
      v152 = v51[v114] + v51[v113];
      __asm__ volatile("" ::"r"(v152));
    }
    v153 = v152 >> 1;
    if (v20 != 0 && (unsigned int)v116 >= 2 & (unsigned int)v152 >= 2) {
      v155 = __clz((unsigned int)(v153));
      v229_.v254 = v153;
      v229_.v249 = v116 >> 1;
      v156 = v102;
      v157 = v103;
      v158 = v109;
      v159 = v107;
      v160 = v155 - 17;
      v155 = 17 - v155;
      v229_.v251 = v105;
      v229_.v250 = v104;
      v161 = v20;
      v162 = v108;
      v163 = v115;
      v164 = v113;
      v165 = v112;
      v166 = v106;
      v167 = v153 << v160;
      v168 = v155 + v229_.v238;
      v169 = v153 >> v155;
      if ((unsigned int)v153 >> 15 == 0) {
        LOWORD(v169) = v167;
      }
      v170 = ((__int16)v169 * v229_.v236) >> 14;
      v171 = (unsigned int)v170 >> 1;
      if (v170 >= 0x8000) {
        v172 = v168 + 1;
      }
      else {
        LOWORD(v171) = 2 * v170;
        v172 = v168 - 1;
      }
      if ((v168 & 1) != 0) {
        v173 = v171;
      }
      else {
        v173 = v170;
      }
      if ((v168 & 1) != 0) {
        v174 = v172;
      }
      else {
        v174 = v168;
      }
      v229_.v248 = v174;
      v175 = celt_rsqrt_norm(v173);
      v150 = v229_.v249;
      v106 = v166;
      v112 = v165;
      v113 = v164;
      LODWORD(v115) = v163;
      v108 = v162;
      v20 = v161;
      v104 = v229_.v250;
      v107 = v159;
      v105 = v229_.v251;
      v51 = v229_.v243;
      v52 = v229_.v244;
      v109 = v158;
      v102 = v156;
      v103 = v157;
      v176 = v175 * (__int64)v229_.v249;
      v79 = v229_.v237;
      v153 = v229_.v254;
      v176 >>= 15;
      v177 = (int)v176 >> ((v229_.v248 >> 1) - 1);
      v178 = (_DWORD)v176 << (1 - (v229_.v248 >> 1));
      if (v229_.v248 >> 1 > 1) {
        v178 = v177;
      }
      if (v178 >= 0x7FFF) {
        v151 = 0x7FFF;
      }
      else {
        v151 = v178;
      }
    }
    if (v113 + v102 >= 0) {
      v179 = v113 + v102;
    }
    else {
      v179 = -(v113 + v102);
    }
    v180 = v229_.v252;
    if (v179 >= 2) {
      if (v179 == 2) {
        v180 = v229_.v234;
        if (5 * v105 * (int)v112 >= (int)v229_.v247) {
          v180 = 0;
        }
      }
      else {
        v180 = 0;
      }
    }
    v181 = v107 - v180;
    v182 = v106 - v180;
    if (v181 <= 9830) {
      LOWORD(v181) = 9830;
    }
    if (v182 <= 13107) {
      LOWORD(v182) = 13107;
    }
    if (v113 >= v103) {
      LOWORD(v182) = v181;
    }
    if ((__int16)v182 < (__int16)v151) {
      v229_.v240 = (unsigned int)v113;
      v229_.v241 = v151;
      v229_.v245 = v150;
      v229_.v239 = v153;
    }
    ++v112;
    ++v105;
    v110 = v115 + 1;
    v104 += 2LL;
  } while (v112 != 16);
  v183 = v229_.v245 & ~(v229_.v245 >> 31);
  if (v229_.v239 <= v183) {
    LOWORD(v185) = 0x7FFF;
  }
  else {
    v184 = frac_div32(v183, v229_.v239 + 1);
    v52 = v229_.v244;
    v185 = HIWORD(v184);
  }
  if (v229_.v253 < 2) {
    v189 = 0;
    v190 = 0;
    v191 = 0;
    goto LABEL_132;
  }
  v186 = v229_.v232 & 7;
  v187 = (int)v229_.v240 - 1;
  if (v229_.v242 >= 7) {
    v193 = 0;
    v189 = 0;
    v194 = (__int16*)(v229_.v229 + 2 * v52 + 14);
    do {
      v193 -= 8;
      {
        v195 = v194[-v187];
        __asm__ volatile("" ::"r"(v195));
      }
      v192 = -1 * v187;
      v196 = v189 + v194[v192 - 7] * *(v194 - 7) +
             v194[v192 - 6] * *(v194 - 6) + v194[v192 - 5] * *(v194 - 5) +
             v194[v192 - 4] * *(v194 - 4) + v194[v192 - 3] * *(v194 - 3) +
             v194[v192 - 2] * *(v194 - 2) + v194[v192 - 1] * *(v194 - 1);
      {
        v197 = *v194;
        __asm__ volatile("" ::"r"(v197));
      }
      v194 += 8;
      v189 = v196 + v195 * v197;
    } while (-(v229_.v232 & 0x3FFFFFF8) != v193);
    v188 = -v193;
    if ((v229_.v232 & 7) != 0) {
      goto LABEL_114;
    }
  }
  else {
    v188 = 0;
    v189 = 0;
    if ((v229_.v232 & 7) == 0) {
      goto LABEL_116;
    }
  LABEL_114:
    v198 = -1 * v187;
    v199 = (__int16*)(v229_.v229 + 2 * v188 + 2 * v52);
    do {
      {
        v200 = *v199;
        __asm__ volatile("" ::"r"(v200));
      }
      {
        v201 = v199[v198];
        __asm__ volatile("" ::"r"(v201));
      }
      ++v199;
      --v186;
      v189 += v201 * v200;
    } while (v186 != 0);
  }
LABEL_116:
  v202 = v229_.v232 & 7;
  if (v229_.v242 >= 7) {
    v205 = 0;
    v190 = 0;
    v206 = (__int16*)(v229_.v229 + 2 * v52 + 14);
    do {
      v205 -= 8;
      {
        v207 = v206[-(int)v229_.v240];
        __asm__ volatile("" ::"r"(v207));
      }
      v204 = 0x7FFFFFFFFFFFFFFFLL * (int)v229_.v240;
      v208 = v190 + v206[v204 - 7] * *(v206 - 7) +
             v206[v204 - 6] * *(v206 - 6) + v206[v204 - 5] * *(v206 - 5) +
             v206[v204 - 4] * *(v206 - 4) + v206[v204 - 3] * *(v206 - 3) +
             v206[v204 - 2] * *(v206 - 2) + v206[v204 - 1] * *(v206 - 1);
      {
        v209 = *v206;
        __asm__ volatile("" ::"r"(v209));
      }
      v206 += 8;
      v190 = v208 + v207 * v209;
    } while (-(v229_.v232 & 0x3FFFFFF8) != v205);
    v203 = -v205;
    if ((v229_.v232 & 7) != 0) {
      goto LABEL_122;
    }
  }
  else {
    v203 = 0;
    v190 = 0;
    if ((v229_.v232 & 7) == 0) {
      goto LABEL_124;
    }
  LABEL_122:
    v210 = v229_.v232 & 7;
    v211 = (__int16*)(v229_.v229 + 2 * v203 + 2 * v52);
    do {
      {
        v212 = *v211;
        __asm__ volatile("" ::"r"(v212));
      }
      {
        v213 = v211[-(int)v229_.v240];
        __asm__ volatile("" ::"r"(v213));
      }
      ++v211;
      --v210;
      v190 += v213 * v212;
    } while (v210 != 0);
  }
LABEL_124:
  v214 = (int)v229_.v240 + 1;
  if (v229_.v242 >= 7) {
    v217 = 0;
    v191 = 0;
    v218 = (__int16*)(v229_.v229 + 2 * v52 + 14);
    do {
      v217 -= 8;
      {
        v219 = v218[-v214];
        __asm__ volatile("" ::"r"(v219));
      }
      v216 = -1 * v214;
      v220 = v191 + v218[v216 - 7] * *(v218 - 7) +
             v218[v216 - 6] * *(v218 - 6) + v218[v216 - 5] * *(v218 - 5) +
             v218[v216 - 4] * *(v218 - 4) + v218[v216 - 3] * *(v218 - 3) +
             v218[v216 - 2] * *(v218 - 2) + v218[v216 - 1] * *(v218 - 1);
      {
        v221 = *v218;
        __asm__ volatile("" ::"r"(v221));
      }
      v218 += 8;
      v191 = v220 + v219 * v221;
    } while (-(v229_.v232 & 0x3FFFFFF8) != v217);
    v215 = -v217;
    if ((v229_.v232 & 7) == 0) {
      goto LABEL_132;
    }
    goto LABEL_130;
  }
  v215 = 0;
  v191 = 0;
  if ((v229_.v232 & 7) != 0) {
  LABEL_130:
    v222 = -1 * v214;
    v223 = (__int16*)(v229_.v229 + 2 * v215 + 2 * v52);
    do {
      {
        v224 = *v223;
        __asm__ volatile("" ::"r"(v224));
      }
      {
        v225 = v223[v222];
        __asm__ volatile("" ::"r"(v225));
      }
      ++v223;
      --v202;
      v191 += v225 * v224;
    } while (v202 != 0);
  }
LABEL_132:
  if (v191 - v189 <= (int)((unsigned __int64)(22938LL * (v190 - v189)) >> 15)) {
    if (v189 - v191 <=
        (int)((unsigned __int64)(22938LL * (v190 - v191)) >> 15)) {
      v226 = 0;
    }
    else {
      v226 = -1;
    }
  }
  else {
    v226 = 1;
  }
  if ((__int16)v185 >= (__int16)v229_.v241) {
    result = (unsigned int)(__int16)v229_.v241;
  }
  else {
    result = (unsigned int)(__int16)v185;
  }
  v228 = v226 + 2 * v229_.v240;
  if (v228 <= v229_.v230) {
    v228 = v229_.v230;
  }
  *v229_.v231 = v228;
  return result;
}

#pragma GCC visibility pop
