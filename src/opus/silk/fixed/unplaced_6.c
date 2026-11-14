#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_silk_fixed_30d080(__int64 a1, unsigned int* a2, int a3);

__int64 opus_silk_fixed_30d080(__int64 a1, unsigned int* a2, int a3)
{
  unsigned int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  __int64 v12;
  __int64 v13;
  int* v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  int* v24;
  _DWORD* v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int* v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  unsigned __int64 v42;
  unsigned int* v43;
  _DWORD* v44;
  int v45;
  _DWORD* v46;
  __int64 v47;
  __int64 v48;
  _DWORD* v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  unsigned __int64 v59;
  unsigned int* v60;
  _DWORD* v61;
  int v62;
  unsigned __int64 v63;
  __int64 v64;
  int v65;
  _QWORD* v66;
  unsigned __int64 v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  __int64 v76;
  _DWORD* v77;
  _QWORD* v78;
  int v79;
  int v80;
  int v81;
  int v82;
  unsigned __int64 v83;
  int v84;
  int v85;
  int* v86;
  __int64 v87;
  _DWORD* v88;
  int v89;
  unsigned __int64 v90;
  __int16 v92;
  _QWORD v93[2];
  _QWORD v94[2];
  _QWORD v95[21];

  v3 = *a2;
  v94[1] = 0;
  memset(v95, 0, sizeof(v95));
  v93[1] = 0;
  v94[0] = 0;
  v93[0] = 0;
  if (v3 >> 30 == 0) {
    v7 = __clz(v3) - 2;
    if (v7 != 0) {
      v27 = (a3 & ~(a3 >> 31)) + 1;
      v28 = v27 & 7;
      if (a3 >= 7) {
        v46 = a2 + 4;
        v47 = 0;
        v48 = -(__int64)(v27 & 0xFFFFFFF8);
        v49 = v95;
        do {
          v50 = *(v46 - 3);
          v47 -= 8;
          v51 = *(v46 - 4) << v7;
          *(v49 - 8) = v51;
          *(v49 - 7) = v51;
          *(v49 - 6) = v50 << v7;
          *(v49 - 5) = v50 << v7;
          v52 = *(v46 - 2) << v7;
          v53 = *(v46 - 1) << v7;
          *(v49 - 4) = v52;
          *(v49 - 3) = v52;
          *(v49 - 2) = v53;
          *(v49 - 1) = v53;
          v54 = *v46 << v7;
          v55 = v46[1] << v7;
          *v49 = v54;
          v49[1] = v54;
          v49[2] = v55;
          v49[3] = v55;
          v56 = v46[2];
          v57 = v46[3];
          v46 += 8;
          v58 = v56 << v7;
          v49[4] = v58;
          v49[5] = v58;
          v49[6] = v57 << v7;
          v49[7] = v57 << v7;
          v49 += 16;
        } while (v48 != v47);
        v29 = -v47;
        if (v28 == 0) {
          goto LABEL_29;
        }
      }
      else {
        v29 = 0;
        if (v28 == 0) {
          goto LABEL_29;
        }
      }
      v59 = (unsigned __int64)&v93[v29];
      v60 = &a2[v29];
      v61 = (_DWORD*)(v59 | 4);
      do {
        v62 = *v60++;
        --v28;
        *(v61 - 1) = v62 << v7;
        *v61 = v62 << v7;
        v61 += 2;
      } while (v28 != 0);
      goto LABEL_29;
    }
    v8 = (a3 & ~(a3 >> 31)) + 1;
    v9 = v8 & 7;
    if (a3 >= 7) {
      v30 = (int*)(a2 + 4);
      v31 = 0;
      v32 = -(__int64)(v8 & 0xFFFFFFF8);
      v33 = (int*)v95;
      do {
        v34 = *(v30 - 4);
        v35 = *(v30 - 3);
        v31 -= 8;
        *(v33 - 8) = v34;
        *(v33 - 7) = v34;
        *(v33 - 6) = v35;
        *(v33 - 5) = v35;
        v36 = *(v30 - 2);
        v37 = *(v30 - 1);
        *(v33 - 4) = v36;
        *(v33 - 3) = v36;
        *(v33 - 2) = v37;
        *(v33 - 1) = v37;
        v38 = *v30;
        v39 = v30[1];
        *v33 = *v30;
        v33[1] = v38;
        v33[2] = v39;
        v33[3] = v39;
        v40 = v30[2];
        v41 = v30[3];
        v30 += 8;
        v33[4] = v40;
        v33[5] = v40;
        v33[6] = v41;
        v33[7] = v41;
        v33 += 16;
      } while (v32 != v31);
      v10 = -v31;
      if (v9 == 0) {
        goto LABEL_29;
      }
    }
    else {
      v10 = 0;
      if (v9 == 0) {
        goto LABEL_29;
      }
    }
    v42 = (unsigned __int64)&v93[v10];
    v43 = &a2[v10];
    v44 = (_DWORD*)(v42 | 4);
    do {
      v45 = *v43++;
      --v9;
      *(v44 - 1) = v45;
      *v44 = v45;
      v44 += 2;
    } while (v9 != 0);
    goto LABEL_29;
  }
  v4 = (a3 & ~(a3 >> 31)) + 1;
  v5 = v4 & 7;
  if (a3 >= 7) {
    v11 = (int*)(a2 + 4);
    v12 = 0;
    v13 = -(__int64)(v4 & 0xFFFFFFF8);
    v14 = (int*)v95;
    do {
      v15 = *(v11 - 3);
      v12 -= 8;
      v16 = *(v11 - 4) >> 1;
      *(v14 - 8) = v16;
      *(v14 - 7) = v16;
      *(v14 - 6) = v15 >> 1;
      *(v14 - 5) = v15 >> 1;
      v17 = *(v11 - 2) >> 1;
      v18 = *(v11 - 1) >> 1;
      *(v14 - 4) = v17;
      *(v14 - 3) = v17;
      *(v14 - 2) = v18;
      *(v14 - 1) = v18;
      v19 = *v11 >> 1;
      v20 = v11[1] >> 1;
      *v14 = v19;
      v14[1] = v19;
      v14[2] = v20;
      v14[3] = v20;
      v21 = v11[2];
      v22 = v11[3];
      v11 += 8;
      v21 >>= 1;
      v14[4] = v21;
      v14[5] = v21;
      v14[6] = v22 >> 1;
      v14[7] = v22 >> 1;
      v14 += 16;
    } while (v13 != v12);
    v6 = -v12;
    if (v5 == 0) {
      goto LABEL_29;
    }
    goto LABEL_12;
  }
  v6 = 0;
  if (v5 != 0) {
  LABEL_12:
    v23 = (unsigned __int64)&v93[v6];
    v24 = (int*)&a2[v6];
    v25 = (_DWORD*)(v23 | 4);
    do {
      v26 = *v24++;
      --v5;
      *(v25 - 1) = v26 >> 1;
      *v25 = v26 >> 1;
      v25 += 2;
    } while (v5 != 0);
  }
LABEL_29:
  if (a3 < 1) {
    goto LABEL_55;
  }
  v63 = 0;
  v64 = 1;
  v65 = a3;
  v66 = v94;
  while (1) {
    v67 = v63++;
    v68 = v93[v63];
    v69 = v68 >= 0 ? LODWORD(v93[v63]) : -v68;
    if (v69 >= SHIDWORD(v93[0])) {
      break;
    }
    v70 = HIDWORD(v93[0]) >> 15;
    v71 = v65;
    if (HIDWORD(v93[0]) >> 15 <= 1) {
      v70 = 1;
    }
    v72 = v68 / v70;
    if (-v72 < -32768 || v72 == 0x8000) {
      v73 = -32768;
    }
    else {
      v73 = -v72;
    }
    if (v73 >= 0x7FFF) {
      v73 = 0x7FFF;
    }
    *(_WORD*)(a1 + 2 * v67) = v73;
    if (v67 >= (unsigned int)a3) {
      goto LABEL_31;
    }
    v74 = v73;
    if ((unsigned int)(v65 - 1) >= 3) {
      v76 = 0;
      v77 = v66;
      v78 = v95;
      do {
        v79 = *((_DWORD*)v78 - 7);
        v80 = *(v77 - 2);
        v76 -= 4;
        *(v77 - 2) = v80 + ((unsigned __int64)(v74 * (__int64)(2 * v79)) >> 16);
        v81 = v79 + ((unsigned __int64)(v74 * (__int64)(2 * v80)) >> 16);
        v82 = *((_DWORD*)v78 - 5);
        *((_DWORD*)v78 - 7) = v81;
        v83 = v74 * (__int64)(2 * *v77);
        *v77 += (unsigned __int64)(v74 * (__int64)(2 * v82)) >> 16;
        LODWORD(v83) = v82 + (v83 >> 16);
        v84 = *((_DWORD*)v78 - 3);
        *((_DWORD*)v78 - 5) = v83;
        LODWORD(v83) = v77[2];
        v77[2] = v83 + ((unsigned __int64)(v74 * (__int64)(2 * v84)) >> 16);
        LODWORD(v83) =
            v84 + ((unsigned __int64)(v74 * (__int64)(2 * (int)v83)) >> 16);
        v85 = *((_DWORD*)v78 - 1);
        *((_DWORD*)v78 - 3) = v83;
        LODWORD(v83) = v77[4];
        v77[4] = v83 + ((unsigned __int64)(v74 * (__int64)(2 * v85)) >> 16);
        v77 += 8;
        *((_DWORD*)v78 - 1) =
            v85 + ((unsigned __int64)(v74 * (__int64)(2 * (int)v83)) >> 16);
        v78 += 4;
      } while (-(__int64)(v65 & 0xFFFFFFFC) != v76);
      v75 = -v76;
      if ((v65 & 3) == 0) {
        goto LABEL_31;
      }
    LABEL_50:
      v86 = (int*)&v93[v75] + 1;
      v87 = v65 & 3;
      v88 = &v93[v75 + v64];
      do {
        v89 = *v86;
        --v87;
        v90 = v74 * (__int64)(2 * *v88);
        *v88 += (unsigned __int64)(v74 * (__int64)(2 * *v86)) >> 16;
        v88 += 2;
        *v86 = v89 + (v90 >> 16);
        v86 += 2;
      } while (v87 != 0);
      goto LABEL_31;
    }
    v75 = 0;
    if ((v65 & 3) != 0) {
      goto LABEL_50;
    }
  LABEL_31:
    v65 = v71 - 1;
    ++v66;
    ++v64;
    if (v63 == a3) {
      goto LABEL_55;
    }
  }
  if (v68 > 0) {
    v92 = -32440;
  }
  else {
    v92 = 32440;
  }
  *(_WORD*)(a1 + 2LL * (unsigned int)v67) = v92;
  if ((int)v63 < a3) {
    memset_plt(a1 + 2LL * (unsigned int)v63, 0,
               2LL * (unsigned int)(a3 + ~(_DWORD)v63) + 2);
  }
LABEL_55:
  if (SHIDWORD(v93[0]) <= 1) {
    return 1;
  }
  else {
    return HIDWORD(v93[0]);
  }
}

#pragma GCC visibility pop
