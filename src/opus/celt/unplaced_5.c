#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _celt_autocorr(__int64, signed int*, __int64, int, int, int,
                       unsigned int);
__int64 opus_celt_2de540(__int64, int*, int);
__int64 opus_celt_2e37c0(__int64 a1, _WORD* a2, int a3, int a4,
                         unsigned int a5);

__int64 opus_celt_2e37c0(__int64 a1, _WORD* a2, int a3, int a4, unsigned int a5)
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
  result = opus_celt_2de540((__int64)&v105, (int*)&v106_.v106, 4);
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

#pragma GCC visibility pop
