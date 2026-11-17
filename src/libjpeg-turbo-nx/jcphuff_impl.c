#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 emit_bits(_QWORD, _QWORD, _QWORD);
__int64 emit_eobrun(_QWORD);
__int64 emit_restart_34cc0(_QWORD, _QWORD);
extern __int64 SdkData_e868f0;
__int64 jcphuff_335a0(__int64 a1, __int64 a2);
__int64 jcphuff_337a0(__int64 a1, _QWORD* a2);
__int64 jcphuff_33be0(__int64 a1, __int64 a2);
__int64 jcphuff_33ce0(__int64 a1, _QWORD* a2);
__int64 emit_bits_alt1(__int64 result, unsigned int, int);
__int64 emit_eobrun_alt1(__int64 result);
__int64 emit_restart_34cc0_alt1(__int64, char);

__int64 jcphuff_335a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  bool v15;
  __int64 v16;
  int v17;
  int v18;

  v2 = *(_QWORD*)(a1 + 568);
  v3 = *(_DWORD*)(a1 + 480);
  *(_QWORD*)(v2 + 32) = **(_QWORD**)(a1 + 48);
  *(_QWORD*)(v2 + 40) = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL);
  if (*(_DWORD*)(a1 + 324) != 0 && *(_DWORD*)(v2 + 112) == 0) {
    emit_restart_34cc0(v2, *(unsigned int*)(v2 + 116));
  }
  if (*(int*)(a1 + 424) >= 1) {
    v5 = v2 + 72;
    v6 = 0;
    while (1) {
      v7 = *(int*)(a1 + 428 + 4 * v6);
      v8 = *(_DWORD*)(v5 + 4 * v7);
      v9 = *(_QWORD*)(a1 + 384 + 8 * v7);
      v10 = **(__int16**)(a2 + 8 * v6) >> v3;
      v11 = v10 - v8;
      *(_DWORD*)(v5 + 4 * v7) = v10;
      if (v10 == v8) {
        v12 = 0;
      }
      else {
        v13 = -1;
        if (v11 >= 0) {
          v14 = v11;
        }
        else {
          v14 = -v11;
        }
        do {
          ++v13;
          v15 = v14 > 1;
          v14 >>= 1;
        } while (v15);
        v12 = v13 + 1;
        if (v13 >= 0xB) {
          *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 6;
          (**(void (***)(__int64))a1)(a1);
        }
      }
      v16 = *(int*)(v9 + 20);
      if (*(_DWORD*)(v2 + 24) != 0) {
        break;
      }
      emit_bits(
          v2, *(unsigned int*)(*(_QWORD*)(v2 + 120 + 8 * v16) + 4LL * v12),
          *(unsigned __int8*)(*(_QWORD*)(v2 + 120 + 8 * v16) + v12 + 1024LL));
      if (v12 != 0) {
        goto LABEL_19;
      }
    LABEL_6:
      if (++v6 >= *(int*)(a1 + 424)) {
        goto LABEL_20;
      }
    }
    ++*(_QWORD*)(*(_QWORD*)(v2 + 152 + 8 * v16) + 8LL * v12);
    if (v12 == 0) {
      goto LABEL_6;
    }
  LABEL_19:
    emit_bits(v2, (unsigned int)(v11 + (v11 >> 31)), v12);
    goto LABEL_6;
  }
LABEL_20:
  **(_QWORD**)(a1 + 48) = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = *(_QWORD*)(v2 + 40);
  v17 = *(_DWORD*)(a1 + 324);
  if (v17 != 0) {
    v18 = *(_DWORD*)(v2 + 112);
    if (v18 == 0) {
      *(_DWORD*)(v2 + 116) = ((unsigned __int8)*(_DWORD*)(v2 + 116) + 1) & 7;
      v18 = v17;
    }
    *(_DWORD*)(v2 + 112) = v18 - 1;
  }
  return 1;
}

__int64 jcphuff_337a0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  bool v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  _BYTE* v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  _QWORD* v38;
  int v39;
  int v40;
  __int64 v43;
  int v44;
  unsigned int v45;

  v2 = *(_QWORD*)(a1 + 568);
  v3 = *(_DWORD*)(a1 + 472);
  v44 = *(_DWORD*)(a1 + 480);
  *(_QWORD*)(v2 + 32) = **(_QWORD**)(a1 + 48);
  *(_QWORD*)(v2 + 40) = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL);
  if (*(_DWORD*)(a1 + 324) != 0 && *(_DWORD*)(v2 + 112) == 0) {
    v38 = a2;
    emit_restart_34cc0(v2, *(unsigned int*)(v2 + 116));
    a2 = v38;
    v4 = *(int*)(a1 + 468);
    if ((int)v4 > v3) {
      goto LABEL_52;
    }
  }
  else {
    v4 = *(int*)(a1 + 468);
    if ((int)v4 > v3) {
      goto LABEL_52;
    }
  }
  v5 = *a2;
  v6 = v2 + 152;
  v7 = v2 + 120;
  v8 = v3 + 1;
  v9 = 0;
  v10 = SdkData_e868f0;
  v43 = *a2;
  do {
    while (1) {
      v11 = v9;
      v12 = *(__int16*)(v5 + 2LL * *(int*)(v10 + 4 * v4));
      if (*(_WORD*)(v5 + 2LL * *(int*)(v10 + 4 * v4)) == 0) {
        break;
      }
      v13 = v12 < 0;
      v14 = (unsigned int)-v12 >> v44;
      v15 = (unsigned int)v12 >> v44;
      v16 = v12 < 0 ? ~v14 : (unsigned int)v12 >> v44;
      v17 = v13 ? v14 : v15;
      if (v17 == 0) {
        break;
      }
      v45 = v16;
      if (*(_DWORD*)(v2 + 92) != 0) {
        emit_eobrun(v2);
      }
      if (v11 >= 16) {
        do {
          v19 = *(int*)(v2 + 88);
          if (*(_DWORD*)(v2 + 24) != 0) {
            ++*(_QWORD*)(*(_QWORD*)(v6 + 8 * v19) + 1920LL);
          }
          else {
            v20 = *(_QWORD*)(v7 + 8 * v19);
            v21 = *(_DWORD*)(v2 + 56);
            v22 = *(_DWORD*)(v20 + 960);
            v23 = *(unsigned __int8*)(v20 + 1264);
            if (*(_BYTE*)(v20 + 1264) != 0 ||
                (*(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 41,
                 (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64)),
                 *(_DWORD*)(v2 + 24) == 0)) {
              v24 = ~(-1 << v23) & v22;
              v25 = v21 + v23;
              v26 =
                  *(_QWORD*)(v2 + 48) |
                  (v24 << (24 - ((unsigned __int8)v21 + (unsigned __int8)v23)));
              if (v25 < 8) {
                v27 = v25;
              LABEL_25:
                *(_QWORD*)(v2 + 48) = v26;
                *(_DWORD*)(v2 + 56) = v27;
                goto LABEL_20;
              }
              while (2) {
                v28 = *(_BYTE**)(v2 + 32);
                *(_QWORD*)(v2 + 32) = v28 + 1;
                *v28 = BYTE2(v26);
                v29 = *(_QWORD*)(v2 + 40) - 1LL;
                *(_QWORD*)(v2 + 40) = v29;
                if (v29 != 0) {
                  if ((~(_DWORD)v26 & 0xFF0000) == 0) {
                    goto LABEL_34;
                  }
                }
                else {
                  v30 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
                  if ((*(unsigned int (**)(void*))(v30 + 24))(
                          (void*)*(_QWORD*)(v2 + 64)) == 0) {
                    *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                    (***(void (****)(_QWORD))(v2 + 64))(*(_QWORD*)(v2 + 64));
                  }
                  *(_QWORD*)(v2 + 32) = *(_QWORD*)v30;
                  *(_QWORD*)(v2 + 40) = *(_QWORD*)(v30 + 8);
                  if ((~(_DWORD)v26 & 0xFF0000) == 0) {
                  LABEL_34:
                    v31 = *(_BYTE**)(v2 + 32);
                    *(_QWORD*)(v2 + 32) = v31 + 1;
                    *v31 = 0;
                    v32 = *(_QWORD*)(v2 + 40) - 1LL;
                    *(_QWORD*)(v2 + 40) = v32;
                    if (v32 == 0) {
                      v33 = *(_QWORD*)(*(_QWORD*)(v2 + 64) + 48LL);
                      if ((*(unsigned int (**)(void*))(v33 + 24))(
                              (void*)*(_QWORD*)(v2 + 64)) == 0) {
                        *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                        (***(void (****)(_QWORD))(v2 + 64))(
                            *(_QWORD*)(v2 + 64));
                      }
                      *(_QWORD*)(v2 + 32) = *(_QWORD*)v33;
                      *(_QWORD*)(v2 + 40) = *(_QWORD*)(v33 + 8);
                    }
                  }
                }
                v26 <<= 8;
                v27 = v25 - 8;
                v18 = v25 <= 15;
                v25 -= 8;
                if (v18) {
                  goto LABEL_25;
                }
                continue;
              }
            }
          }
        LABEL_20:
          v18 = v11 <= 31;
          v11 -= 16;
        } while (!v18);
      }
      if (v17 == 1) {
        v5 = v43;
        v8 = v3 + 1;
        v10 = SdkData_e868f0;
      }
      else {
        v5 = v43;
        v8 = v3 + 1;
        v34 = 0;
        v10 = SdkData_e868f0;
        do {
          ++v34;
          v18 = v17 > 3;
          v17 >>= 1;
        } while (v18);
        v17 = v34 + 1;
        if (v34 >= 0xA) {
          *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 6;
          (**(void (***)(__int64))a1)(a1);
        }
      }
      v35 = *(int*)(v2 + 88);
      v36 = (int)(v17 + 16 * v11);
      if (*(_DWORD*)(v2 + 24) != 0) {
        ++*(_QWORD*)(*(_QWORD*)(v6 + 8 * v35) + 8 * v36);
      }
      else {
        emit_bits(v2, *(unsigned int*)(*(_QWORD*)(v7 + 8 * v35) + 4 * v36),
                  *(unsigned __int8*)(*(_QWORD*)(v7 + 8 * v35) + v36 + 1024));
      }
      emit_bits(v2, v45, v17);
      ++v4;
      v9 = 0;
      if (v8 == (_DWORD)v4) {
        goto LABEL_52;
      }
    }
    v9 = v11 + 1;
    ++v4;
  } while (v8 != (_DWORD)v4);
  if ((v11 & 0x80000000) == 0) {
    v37 = *(_DWORD*)(v2 + 92) + 1;
    *(_DWORD*)(v2 + 92) = v37;
    if (v37 == 0x7FFF) {
      emit_eobrun(v2);
    }
  }
LABEL_52:
  **(_QWORD**)(a1 + 48) = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = *(_QWORD*)(v2 + 40);
  v39 = *(_DWORD*)(a1 + 324);
  if (v39 != 0) {
    v40 = *(_DWORD*)(v2 + 112);
    if (v40 == 0) {
      *(_DWORD*)(v2 + 116) = ((unsigned __int8)*(_DWORD*)(v2 + 116) + 1) & 7;
      v40 = v39;
    }
    *(_DWORD*)(v2 + 112) = v40 - 1;
  }
  return 1;
}

__int64 jcphuff_33be0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v6;
  int v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 568);
  v3 = *(_DWORD*)(a1 + 480);
  *(_QWORD*)(v2 + 32) = **(_QWORD**)(a1 + 48);
  *(_QWORD*)(v2 + 40) = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL);
  if (*(_DWORD*)(a1 + 324) != 0 && *(_DWORD*)(v2 + 112) == 0) {
    emit_restart_34cc0(v2, *(unsigned int*)(v2 + 116));
  }
  if (*(int*)(a1 + 424) >= 1) {
    v6 = 0;
    do {
      emit_bits(v2, (unsigned int)(**(__int16**)(a2 + 8 * v6++) >> v3), 1);
    } while (v6 < *(int*)(a1 + 424));
  }
  **(_QWORD**)(a1 + 48) = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL) = *(_QWORD*)(v2 + 40);
  v7 = *(_DWORD*)(a1 + 324);
  if (v7 != 0) {
    v8 = *(_DWORD*)(v2 + 112);
    if (v8 == 0) {
      *(_DWORD*)(v2 + 116) = ((unsigned __int8)*(_DWORD*)(v2 + 116) + 1) & 7;
      v8 = v7;
    }
    *(_DWORD*)(v2 + 112) = v8 - 1;
  }
  return 1;
}

__int64 jcphuff_33ce0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int* v18;
  int* v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  _BYTE* v35;
  int v36;
  int v37;
  int v38;
  bool v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  int v49;
  int v50;
  unsigned __int64 v51;
  int v52;
  int v53;
  _BYTE* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _BYTE* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  unsigned __int64 v63;
  _BYTE* v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _BYTE* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  _BYTE* v74;
  int v75;
  int v76;
  unsigned __int64 v77;
  int v78;
  _BYTE* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _BYTE* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  unsigned int v90;
  int v91;
  __int64 v92;
  int v93;
  unsigned __int64 v94;
  int v95;
  _BYTE* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  _BYTE* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  int v104;
  unsigned __int64 v105;
  int v106;
  _BYTE* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  _BYTE* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  int v118;
  unsigned __int64 v119;
  int v120;
  _BYTE* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  _BYTE* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  int v129;
  char v130;
  int v131;
  unsigned int v132;
  int v133;
  int v134;
  __int64 v136;
  __int64 v137;
  int v138;
  int v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  _QWORD v143[33];

  v2 = *(_QWORD*)(a1 + 568);
  v3 = *(_DWORD*)(a1 + 472);
  v4 = a1;
  v5 = *(_DWORD*)(a1 + 480);
  *(_QWORD*)(v2 + 32) = **(_QWORD**)(a1 + 48);
  *(_QWORD*)(v2 + 40) = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL);
  if (*(_DWORD*)(a1 + 324) != 0 && *(_DWORD*)(v2 + 112) == 0) {
    v8 = a2;
    emit_restart_34cc0_alt1(v2, *(_DWORD*)(v2 + 116));
    a2 = v8;
    v6 = *(int*)(v4 + 468);
    if (v3 < (int)v6) {
      goto LABEL_4;
    }
  }
  else {
    v6 = *(int*)(a1 + 468);
    if (v3 < (int)v6) {
    LABEL_4:
      v7 = 0;
      goto LABEL_178;
    }
  }
  v9 = *a2;
  v10 = v3 - v6 + 1;
  v11 = v10 & 3;
  v12 = SdkData_e868f0;
  memset(v143, 0, 256);
  if ((unsigned int)(v3 - v6) >= 3) {
    v16 = v10 & 0xFFFFFFFC;
    v17 = 0;
    v13 = 0;
    v18 = (unsigned int*)&v143[1] + v6;
    v19 = (int*)(SdkData_e868f0 + 4 * v6 + 8);
    do {
      v20 = *(__int16*)(v9 + 2LL * *(v19 - 2));
      v21 = *(__int16*)(v9 + 2LL * *(v19 - 1));
      if (v20 < 0) {
        v20 = -v20;
      }
      v22 = (unsigned int)v20 >> v5;
      if (v22 == 1) {
        v13 = v6 + v17;
      }
      if (v21 < 0) {
        v21 = -v21;
      }
      v23 = (unsigned int)v21 >> v5;
      *(v18 - 2) = v22;
      *(v18 - 1) = v23;
      if (v23 == 1) {
        v13 = v6 + v17 + 1;
      }
      v24 = *v19;
      v25 = v19[1];
      v19 += 4;
      v26 = *(__int16*)(v9 + 2 * v24);
      v27 = *(__int16*)(v9 + 2 * v25);
      if (v26 < 0) {
        v26 = -v26;
      }
      v28 = (unsigned int)v26 >> v5;
      if (v28 == 1) {
        v13 = v6 + v17 + 2;
      }
      if (v27 < 0) {
        v27 = -v27;
      }
      v29 = (unsigned int)v27 >> v5;
      *v18 = v28;
      v18[1] = v29;
      v18 += 4;
      v30 = v6 + v17;
      v17 += 4;
      v31 = v30 + 3;
      if (v29 == 1) {
        v13 = v31;
      }
    } while (v16 != (_DWORD)v17);
    v15 = v6 + v17;
    v14 = v6;
    v136 = v4;
    if (v11 == 0) {
      goto LABEL_33;
    }
    goto LABEL_28;
  }
  v13 = 0;
  v14 = v6;
  v15 = v6;
  v136 = v4;
  if ((v10 & 3) != 0) {
    do {
    LABEL_28:
      v32 = *(__int16*)(v9 + 2LL * *(int*)(v12 + 4 * v15));
      if (v32 < 0) {
        v32 = -v32;
      }
      v33 = (unsigned int)v32 >> v5;
      *((_DWORD*)v143 + v15) = v33;
      if (v33 == 1) {
        v13 = v15;
      }
      ++v15;
      --v11;
    } while (v11 != 0);
  }
LABEL_33:
  v34 = 0;
  v7 = 0;
  v137 = v13;
  v35 = (_BYTE*)(*(_QWORD*)(v2 + 104) + *(unsigned int*)(v2 + 96));
  v141 = v2 + 120;
  v142 = v2 + 152;
  v138 = v3 + 1;
  do {
    while (1) {
      while (1) {
        v36 = *((_DWORD*)v143 + v14);
        if (v36 != 0) {
          break;
        }
        ++v34;
        if (v138 == (_DWORD)++v14) {
          goto LABEL_174;
        }
      }
      v139 = *((_DWORD*)v143 + v14);
      v140 = v14;
      if (v34 < 16) {
        break;
      }
      v37 = v7;
      v38 = v34;
      if (v14 <= v137) {
        while (1) {
          v40 = *(_DWORD*)(v2 + 92);
          if (v40 == 0) {
            goto LABEL_109;
          }
          if (v40 == 1) {
            v41 = 0;
          }
          else {
            v42 = -1;
            do {
              v40 >>= 1;
              ++v42;
            } while ((unsigned int)v40 > 1);
            v41 = v42 + 1;
            if (v42 >= 0xE) {
              *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 41;
              (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
            }
          }
          v43 = *(int*)(v2 + 88);
          v44 = (int)(16 * v41);
          if (*(_DWORD*)(v2 + 24) != 0) {
            ++*(_QWORD*)(*(_QWORD*)(v142 + 8 * v43) + 8 * v44);
          LABEL_55:
            v53 = *(_DWORD*)(v2 + 24);
            goto LABEL_56;
          }
          v45 = *(_DWORD*)(v2 + 56);
          v46 = *(_QWORD*)(v141 + 8 * v43);
          v47 = *(_DWORD*)(v46 + 4 * v44);
          v48 = v46 + v44;
          v49 = *(unsigned __int8*)(v48 + 1024);
          if (*(_BYTE*)(v48 + 1024) != 0) {
            break;
          }
          *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 41;
          (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
          v53 = *(_DWORD*)(v2 + 24);
          if (v53 == 0) {
            break;
          }
        LABEL_56:
          if (v41 == 0) {
            goto LABEL_87;
          }
          if (v53 == 0) {
            v62 = *(int*)(v2 + 56) + v41;
            v63 =
                ((*(unsigned int*)(v2 + 92) & (unsigned __int64)~(-1LL << v41))
                 << (24 - (*(_BYTE*)(v2 + 56) + (unsigned __int8)v41))) |
                *(_QWORD*)(v2 + 48);
            if (v62 < 8) {
              v53 = 0;
              goto LABEL_86;
            }
            while (1) {
              v64 = *(_BYTE**)(v2 + 32);
              v65 = v62;
              *(_QWORD*)(v2 + 32) = v64 + 1;
              *v64 = BYTE2(v63);
              v66 = *(_QWORD*)(v2 + 40) - 1LL;
              *(_QWORD*)(v2 + 40) = v66;
              if (v66 == 0) {
                break;
              }
              if ((~(_DWORD)v63 & 0xFF0000) == 0) {
                goto LABEL_80;
              }
            LABEL_73:
              v63 <<= 8;
              v62 = v65 - 8;
              if (v65 <= 15) {
                v53 = *(_DWORD*)(v2 + 24);
              LABEL_86:
                *(_QWORD*)(v2 + 48) = v63;
                *(_DWORD*)(v2 + 56) = v62;
              LABEL_87:
                v73 = *(_DWORD*)(v2 + 96);
                *(_DWORD*)(v2 + 92) = 0;
                if (v73 == 0 || v53 != 0) {
                  goto LABEL_108;
                }
                v74 = *(_BYTE**)(v2 + 104);
                while (2) {
                  if (*(_DWORD*)(v2 + 24) == 0) {
                    v76 = *(_DWORD*)(v2 + 56);
                    v77 = ((unsigned __int64)(*v74 & 1)
                           << (23 - (unsigned __int8)v76)) |
                          *(_QWORD*)(v2 + 48);
                    if (v76 >= 7) {
                      v78 = v76 + 9;
                      while (1) {
                        v79 = *(_BYTE**)(v2 + 32);
                        *(_QWORD*)(v2 + 32) = v79 + 1;
                        *v79 = BYTE2(v77);
                        v80 = *(_QWORD*)(v2 + 40) - 1LL;
                        *(_QWORD*)(v2 + 40) = v80;
                        if (v80 == 0) {
                          break;
                        }
                        if ((~(_DWORD)v77 & 0xFF0000) == 0) {
                          goto LABEL_104;
                        }
                      LABEL_97:
                        v77 <<= 8;
                        v78 -= 8;
                        if (v78 <= 15) {
                          v75 = v78 - 8;
                          goto LABEL_91;
                        }
                      }
                      v81 = *(_QWORD*)(v2 + 64);
                      v82 = *(_QWORD*)(v81 + 48);
                      if ((*(unsigned int (**)(__int64))(v82 + 24))(v81) == 0) {
                        *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                        (***(void (****)(__int64))(v2 + 64))(
                            *(_QWORD*)(v2 + 64));
                      }
                      *(_QWORD*)(v2 + 32) = *(_QWORD*)v82;
                      *(_QWORD*)(v2 + 40) = *(_QWORD*)(v82 + 8);
                      if ((~(_DWORD)v77 & 0xFF0000) != 0) {
                        goto LABEL_97;
                      }
                    LABEL_104:
                      v83 = *(_BYTE**)(v2 + 32);
                      *(_QWORD*)(v2 + 32) = v83 + 1;
                      *v83 = 0;
                      v84 = *(_QWORD*)(v2 + 40) - 1LL;
                      *(_QWORD*)(v2 + 40) = v84;
                      if (v84 == 0) {
                        v85 = *(_QWORD*)(v2 + 64);
                        v86 = *(_QWORD*)(v85 + 48);
                        if ((*(unsigned int (**)(__int64))(v86 + 24))(v85) ==
                            0) {
                          *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                          (***(void (****)(__int64))(v2 + 64))(
                              *(_QWORD*)(v2 + 64));
                        }
                        *(_QWORD*)(v2 + 32) = *(_QWORD*)v86;
                        *(_QWORD*)(v2 + 40) = *(_QWORD*)(v86 + 8);
                      }
                      goto LABEL_97;
                    }
                    v75 = v76 + 1;
                  LABEL_91:
                    *(_QWORD*)(v2 + 48) = v77;
                    *(_DWORD*)(v2 + 56) = v75;
                  }
                  ++v74;
                  if (--v73 == 0) {
                    goto LABEL_108;
                  }
                  continue;
                }
              }
            }
            v67 = *(_QWORD*)(v2 + 64);
            v68 = *(_QWORD*)(v67 + 48);
            if ((*(unsigned int (**)(__int64))(v68 + 24))(v67) == 0) {
              *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
              (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
            }
            *(_QWORD*)(v2 + 32) = *(_QWORD*)v68;
            *(_QWORD*)(v2 + 40) = *(_QWORD*)(v68 + 8);
            if ((~(_DWORD)v63 & 0xFF0000) != 0) {
              goto LABEL_73;
            }
          LABEL_80:
            v69 = *(_BYTE**)(v2 + 32);
            *(_QWORD*)(v2 + 32) = v69 + 1;
            *v69 = 0;
            v70 = *(_QWORD*)(v2 + 40) - 1LL;
            *(_QWORD*)(v2 + 40) = v70;
            if (v70 == 0) {
              v71 = *(_QWORD*)(v2 + 64);
              v72 = *(_QWORD*)(v71 + 48);
              if ((*(unsigned int (**)(__int64))(v72 + 24))(v71) == 0) {
                *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
              }
              *(_QWORD*)(v2 + 32) = *(_QWORD*)v72;
              *(_QWORD*)(v2 + 40) = *(_QWORD*)(v72 + 8);
            }
            goto LABEL_73;
          }
          *(_DWORD*)(v2 + 92) = 0;
        LABEL_108:
          *(_DWORD*)(v2 + 96) = 0;
        LABEL_109:
          v87 = *(int*)(v2 + 88);
          if (*(_DWORD*)(v2 + 24) != 0) {
            ++*(_QWORD*)(*(_QWORD*)(v142 + 8 * v87) + 1920LL);
            goto LABEL_127;
          }
          v88 = *(_DWORD*)(v2 + 56);
          v89 = *(_QWORD*)(v141 + 8 * v87);
          v90 = *(_DWORD*)(v89 + 960);
          v91 = *(unsigned __int8*)(v89 + 1264);
          if (*(_BYTE*)(v89 + 1264) != 0 ||
              (*(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 41,
               (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64)),
               *(_DWORD*)(v2 + 24) == 0)) {
            v92 = -1LL << v91;
            v93 = v88 + v91;
            v94 = *(_QWORD*)(v2 + 48) | ((unsigned __int64)(~(_DWORD)v92 & v90)
                                         << (24 - (unsigned __int8)v93));
            if (v93 < 8) {
              v95 = v93;
            LABEL_114:
              *(_QWORD*)(v2 + 48) = v94;
              *(_DWORD*)(v2 + 56) = v95;
              goto LABEL_127;
            }
            while (1) {
              v96 = *(_BYTE**)(v2 + 32);
              *(_QWORD*)(v2 + 32) = v96 + 1;
              *v96 = BYTE2(v94);
              v97 = *(_QWORD*)(v2 + 40) - 1LL;
              *(_QWORD*)(v2 + 40) = v97;
              if (v97 == 0) {
                break;
              }
              if ((~(_DWORD)v94 & 0xFF0000) == 0) {
                goto LABEL_123;
              }
            LABEL_116:
              v94 <<= 8;
              v95 = v93 - 8;
              v39 = v93 <= 15;
              v93 -= 8;
              if (v39) {
                goto LABEL_114;
              }
            }
            v98 = *(_QWORD*)(v2 + 64);
            v99 = *(_QWORD*)(v98 + 48);
            if ((*(unsigned int (**)(__int64))(v99 + 24))(v98) == 0) {
              *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
              (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
            }
            *(_QWORD*)(v2 + 32) = *(_QWORD*)v99;
            *(_QWORD*)(v2 + 40) = *(_QWORD*)(v99 + 8);
            if ((~(_DWORD)v94 & 0xFF0000) != 0) {
              goto LABEL_116;
            }
          LABEL_123:
            v100 = *(_BYTE**)(v2 + 32);
            *(_QWORD*)(v2 + 32) = v100 + 1;
            *v100 = 0;
            v101 = *(_QWORD*)(v2 + 40) - 1LL;
            *(_QWORD*)(v2 + 40) = v101;
            if (v101 == 0) {
              v102 = *(_QWORD*)(v2 + 64);
              v103 = *(_QWORD*)(v102 + 48);
              if ((*(unsigned int (**)(__int64))(v103 + 24))(v102) == 0) {
                *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
              }
              *(_QWORD*)(v2 + 32) = *(_QWORD*)v103;
              *(_QWORD*)(v2 + 40) = *(_QWORD*)(v103 + 8);
            }
            goto LABEL_116;
          }
        LABEL_127:
          if (v7 != 0 && *(_DWORD*)(v2 + 24) == 0) {
          LABEL_129:
            v104 = *(_DWORD*)(v2 + 56);
            v105 =
                ((unsigned __int64)(*v35 & 1) << (23 - (unsigned __int8)v104)) |
                *(_QWORD*)(v2 + 48);
            if (v104 >= 7) {
              v106 = v104 + 9;
              while (1) {
                v107 = *(_BYTE**)(v2 + 32);
                *(_QWORD*)(v2 + 32) = v107 + 1;
                *v107 = BYTE2(v105);
                v108 = *(_QWORD*)(v2 + 40) - 1LL;
                *(_QWORD*)(v2 + 40) = v108;
                if (v108 == 0) {
                  break;
                }
                if ((~(_DWORD)v105 & 0xFF0000) == 0) {
                  goto LABEL_139;
                }
              LABEL_132:
                v105 <<= 8;
                v106 -= 8;
                if (v106 <= 15) {
                  v115 = v106 - 8;
                  goto LABEL_144;
                }
              }
              v109 = *(_QWORD*)(v2 + 64);
              v110 = *(_QWORD*)(v109 + 48);
              if ((*(unsigned int (**)(__int64))(v110 + 24))(v109) == 0) {
                *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
              }
              *(_QWORD*)(v2 + 32) = *(_QWORD*)v110;
              *(_QWORD*)(v2 + 40) = *(_QWORD*)(v110 + 8);
              if ((~(_DWORD)v105 & 0xFF0000) != 0) {
                goto LABEL_132;
              }
            LABEL_139:
              v111 = *(_BYTE**)(v2 + 32);
              *(_QWORD*)(v2 + 32) = v111 + 1;
              *v111 = 0;
              v112 = *(_QWORD*)(v2 + 40) - 1LL;
              *(_QWORD*)(v2 + 40) = v112;
              if (v112 == 0) {
                v113 = *(_QWORD*)(v2 + 64);
                v114 = *(_QWORD*)(v113 + 48);
                if ((*(unsigned int (**)(__int64))(v114 + 24))(v113) == 0) {
                  *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
                  (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
                }
                *(_QWORD*)(v2 + 32) = *(_QWORD*)v114;
                *(_QWORD*)(v2 + 40) = *(_QWORD*)(v114 + 8);
              }
              goto LABEL_132;
            }
            v115 = v104 + 1;
          LABEL_144:
            *(_QWORD*)(v2 + 48) = v105;
            *(_DWORD*)(v2 + 56) = v115;
            while (--v7 != 0) {
              ++v35;
              if (*(_DWORD*)(v2 + 24) == 0) {
                goto LABEL_129;
              }
            }
          }
          v35 = *(_BYTE**)(v2 + 104);
          v38 = v34 - 16;
          v7 = 0;
          v37 = 0;
          v39 = v34 <= 31;
          v34 -= 16;
          if (v39) {
            goto LABEL_38;
          }
        }
        v50 = v45 + v49;
        v51 = *(_QWORD*)(v2 + 48) | ((unsigned __int64)(~(-1 << v49) & v47)
                                     << (24 - (unsigned __int8)v50));
        if (v50 < 8) {
          v52 = v50;
        LABEL_54:
          *(_QWORD*)(v2 + 48) = v51;
          *(_DWORD*)(v2 + 56) = v52;
          goto LABEL_55;
        }
        while (1) {
          v54 = *(_BYTE**)(v2 + 32);
          *(_QWORD*)(v2 + 32) = v54 + 1;
          *v54 = BYTE2(v51);
          v55 = *(_QWORD*)(v2 + 40) - 1LL;
          *(_QWORD*)(v2 + 40) = v55;
          if (v55 == 0) {
            break;
          }
          if ((~(_DWORD)v51 & 0xFF0000) == 0) {
            goto LABEL_67;
          }
        LABEL_60:
          v51 <<= 8;
          v52 = v50 - 8;
          v39 = v50 <= 15;
          v50 -= 8;
          if (v39) {
            goto LABEL_54;
          }
        }
        v56 = *(_QWORD*)(v2 + 64);
        v57 = *(_QWORD*)(v56 + 48);
        if ((*(unsigned int (**)(__int64))(v57 + 24))(v56) == 0) {
          *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
          (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
        }
        *(_QWORD*)(v2 + 32) = *(_QWORD*)v57;
        *(_QWORD*)(v2 + 40) = *(_QWORD*)(v57 + 8);
        if ((~(_DWORD)v51 & 0xFF0000) != 0) {
          goto LABEL_60;
        }
      LABEL_67:
        v58 = *(_BYTE**)(v2 + 32);
        *(_QWORD*)(v2 + 32) = v58 + 1;
        *v58 = 0;
        v59 = *(_QWORD*)(v2 + 40) - 1LL;
        *(_QWORD*)(v2 + 40) = v59;
        if (v59 == 0) {
          v60 = *(_QWORD*)(v2 + 64);
          v61 = *(_QWORD*)(v60 + 48);
          if ((*(unsigned int (**)(__int64))(v61 + 24))(v60) == 0) {
            *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
            (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
          }
          *(_QWORD*)(v2 + 32) = *(_QWORD*)v61;
          *(_QWORD*)(v2 + 40) = *(_QWORD*)(v61 + 8);
        }
        goto LABEL_60;
      }
    LABEL_38:
      LOBYTE(v36) = v139;
      if (v139 >= 2) {
        goto LABEL_39;
      }
    LABEL_149:
      emit_eobrun_alt1(v2);
      v116 = *(int*)(v2 + 88);
      v117 = (16 * v38) | 1LL;
      if (*(_DWORD*)(v2 + 24) != 0) {
        ++*(_QWORD*)(*(_QWORD*)(v142 + 8 * v116) + 8 * v117);
      }
      else {
        emit_bits_alt1(
            v2, *(_DWORD*)(*(_QWORD*)(v141 + 8 * v116) + 4 * v117),
            *(unsigned __int8*)(*(_QWORD*)(v141 + 8 * v116) + v117 + 1024));
      }
      emit_bits_alt1(v2,
                     (*(unsigned __int16*)(v9 + 2LL * *(int*)(SdkData_e868f0 +
                                                              4 * v140)) >>
                      15) ^
                         1,
                     1);
      if (v37 != 0 && *(_DWORD*)(v2 + 24) == 0) {
      LABEL_154:
        v118 = *(_DWORD*)(v2 + 56);
        v119 = ((unsigned __int64)(*v35 & 1) << (23 - (unsigned __int8)v118)) |
               *(_QWORD*)(v2 + 48);
        if (v118 >= 7) {
          v120 = v118 + 9;
          while (1) {
            v121 = *(_BYTE**)(v2 + 32);
            *(_QWORD*)(v2 + 32) = v121 + 1;
            *v121 = BYTE2(v119);
            v122 = *(_QWORD*)(v2 + 40) - 1LL;
            *(_QWORD*)(v2 + 40) = v122;
            if (v122 == 0) {
              break;
            }
            if ((~(_DWORD)v119 & 0xFF0000) == 0) {
              goto LABEL_164;
            }
          LABEL_157:
            v119 <<= 8;
            v120 -= 8;
            if (v120 <= 15) {
              v129 = v120 - 8;
              goto LABEL_169;
            }
          }
          v123 = *(_QWORD*)(v2 + 64);
          v124 = *(_QWORD*)(v123 + 48);
          if ((*(unsigned int (**)(__int64))(v124 + 24))(v123) == 0) {
            *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
            (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
          }
          *(_QWORD*)(v2 + 32) = *(_QWORD*)v124;
          *(_QWORD*)(v2 + 40) = *(_QWORD*)(v124 + 8);
          if ((~(_DWORD)v119 & 0xFF0000) != 0) {
            goto LABEL_157;
          }
        LABEL_164:
          v125 = *(_BYTE**)(v2 + 32);
          *(_QWORD*)(v2 + 32) = v125 + 1;
          *v125 = 0;
          v126 = *(_QWORD*)(v2 + 40) - 1LL;
          *(_QWORD*)(v2 + 40) = v126;
          if (v126 == 0) {
            v127 = *(_QWORD*)(v2 + 64);
            v128 = *(_QWORD*)(v127 + 48);
            if ((*(unsigned int (**)(__int64))(v128 + 24))(v127) == 0) {
              *(_DWORD*)(**(_QWORD**)(v2 + 64) + 40LL) = 25;
              (***(void (****)(__int64))(v2 + 64))(*(_QWORD*)(v2 + 64));
            }
            *(_QWORD*)(v2 + 32) = *(_QWORD*)v128;
            *(_QWORD*)(v2 + 40) = *(_QWORD*)(v128 + 8);
          }
          goto LABEL_157;
        }
        v129 = v118 + 1;
      LABEL_169:
        *(_QWORD*)(v2 + 48) = v119;
        *(_DWORD*)(v2 + 56) = v129;
        while (--v37 != 0) {
          ++v35;
          if (*(_DWORD*)(v2 + 24) == 0) {
            goto LABEL_154;
          }
        }
      }
      v35 = *(_BYTE**)(v2 + 104);
      v7 = 0;
      v34 = 0;
      v14 = v140 + 1;
      if (v138 == (int)v140 + 1) {
        goto LABEL_174;
      }
    }
    v37 = v7;
    v38 = v34;
    if (v36 < 2) {
      goto LABEL_149;
    }
  LABEL_39:
    v7 = v37 + 1;
    v34 = v38;
    v35[v37] = v36 & 1;
    v14 = v140 + 1;
  } while (v138 != (int)v140 + 1);
LABEL_174:
  v39 = v34 <= 0;
  v4 = v136;
  v130 = !v39;
  if ((v130 & 1) == 0) {
  LABEL_178:
    if (v7 == 0) {
      goto LABEL_182;
    }
  }
  v131 = *(int*)(v2 + 92) + 1;
  v132 = *(int*)(v2 + 96) + v7;
  *(_DWORD*)(v2 + 92) = v131;
  *(_DWORD*)(v2 + 96) = v132;
  if (v131 == 0x7FFF || v132 >= 0x3AA) {
    emit_eobrun_alt1(v2);
  }
LABEL_182:
  **(_QWORD**)(v4 + 48) = *(_QWORD*)(v2 + 32);
  *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8LL) = *(_QWORD*)(v2 + 40);
  v133 = *(_DWORD*)(v4 + 324);
  if (v133 != 0) {
    v134 = *(_DWORD*)(v2 + 112);
    if (v134 == 0) {
      *(_DWORD*)(v2 + 116) = ((unsigned __int8)*(int*)(v2 + 116) + 1) & 7;
      v134 = v133;
    }
    *(_DWORD*)(v2 + 112) = v134 - 1;
  }
  return 1;
}

#pragma GCC visibility pop
