#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NgxRoutine_29120(__int64*, unsigned __int64);
__int64 NgxRoutine_29320(__int64*, __int64, unsigned __int64);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_baf70(__int64, __int64);
__int64 free_plt(void);
__int64 malloc_plt(_QWORD);
__int64 memcmp_plt(_QWORD, _QWORD);
unsigned __int64 NgxRoutine_e2400(unsigned __int64);
void __attribute__((noreturn)) NgxRoutine_e2320();
_QWORD* nvidia_28d20(float* a1, unsigned __int8* a2, __int64* a3);
_QWORD* nvidia_b1640(__int64 a1, unsigned __int8* a2, char* a3);
__int64 nvidia_ba400(__int64 a1, unsigned __int8* a2, __int64 a3, __int64** a4);
__int64 nvidia_ba840(__int64 a1, unsigned __int8* a2, __int64 a3, __int64** a4);
unsigned __int8* nvidia_c0ac0(_QWORD** a1, _QWORD* a2, unsigned __int8* a3,
                              unsigned __int8* a4, __int64 a5, _DWORD* a6,
                              char a7);

_QWORD* nvidia_28d20(float* a1, unsigned __int8* a2, __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v8;
  __int64 v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  unsigned __int8* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int8* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  __int64 v39;
  _QWORD* v40;
  float v42;
  _BOOL8 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;

  v4 = *a2;
  v8 = (v4 & 1) == 0;
  v9 = v4 >> 1;
  if (v8) {
    v10 = a2 + 1;
  }
  else {
    v10 = *((unsigned __int8**)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  v12 = NgxRoutine_baf70((__int64)v10, v11);
  v13 = *((_QWORD*)a1 + 1);
  v14 = v12;
  if (v13 == 0) {
    goto LABEL_54;
  }
  v15 = v13 - 1;
  if ((v13 & (v13 - 1)) != 0) {
    v3 = v12;
    if (v12 >= v13) {
      v3 = v12 % v13;
    }
    v16 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v16 == nullptr) {
      goto LABEL_54;
    }
  }
  else {
    v3 = v15 & v12;
    v16 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v15 & v12));
    if (v16 == nullptr) {
      goto LABEL_54;
    }
  }
  v17 = (_QWORD*)*v16;
  if (*v16 != 0) {
    if ((v13 & v15) == 0) {
      while (1) {
        v25 = v17[1];
        if (v25 == v14) {
          v26 = *((unsigned __int8*)v17 + 16);
          if ((v26 & 1) != 0) {
            v27 = v17[3];
          }
          else {
            v27 = v26 >> 1;
          }
          v28 = *a2;
          v29 = *((_QWORD*)a2 + 1);
          if ((v28 & 1) == 0) {
            v29 = v28 >> 1;
          }
          if (v27 == v29) {
            v30 = (v26 & 1) != 0 ? (_QWORD*)v17[4] : (_QWORD*)((char*)v17 + 17);
            v31 = (v28 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
            if ((unsigned int)memcmp_plt(v30, v31) == 0) {
              return v17;
            }
          }
        }
        else if ((v25 & v15) != v3) {
          goto LABEL_54;
        }
        v17 = (_QWORD*)*v17;
        if (v17 == nullptr) {
          goto LABEL_54;
        }
      }
    }
    do {
      v18 = v17[1];
      if (v18 == v14) {
        v19 = *((unsigned __int8*)v17 + 16);
        if ((v19 & 1) != 0) {
          v20 = v17[3];
        }
        else {
          v20 = v19 >> 1;
        }
        v21 = *a2;
        v22 = *((_QWORD*)a2 + 1);
        if ((v21 & 1) == 0) {
          v22 = v21 >> 1;
        }
        if (v20 == v22) {
          v23 = (v19 & 1) != 0 ? (_QWORD*)v17[4] : (_QWORD*)((char*)v17 + 17);
          v24 = (v21 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
          if ((unsigned int)memcmp_plt(v23, v24) == 0) {
            return v17;
          }
        }
      }
      else {
        if (v18 >= v13) {
          v18 %= v13;
        }
        if (v18 != v3) {
          break;
        }
      }
      v17 = (_QWORD*)*v17;
    } while (v17 != nullptr);
  }
LABEL_54:
  v32 = (_QWORD*)NgxRoutine_420(48);
  v33 = *a3;
  v34 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v17 = v32;
  *v32 = 0;
  v32[1] = v14;
  v32[2] = v33;
  v32[3] = v34;
  v35 = a3[2];
  v36 = a3[3];
  a3[2] = 0;
  v37 = a1[8];
  v32[4] = v35;
  v32[5] = v36;
  v38 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v13 == 0 || (float)(v37 * (float)v13) < v38) {
    v42 = v38 / v37;
    v43 = true;
    if (v13 >= 3) {
      v43 = (v13 & (v13 - 1)) != 0;
    }
    v44 = v43 | (2 * v13);
    v45 = vcvtps_u64_f32(v42);
    if (v44 <= v45) {
      v46 = v45;
    }
    else {
      v46 = v44;
    }
    if (v46 == 1) {
      v46 = 2;
    }
    else if ((v46 & (v46 - 1)) != 0) {
      v46 = NgxRoutine_e2400(v46);
    }
    v47 = *((_QWORD*)a1 + 1);
    if (v46 > v47) {
      goto LABEL_70;
    }
    if (v46 < v47) {
      v48 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v47 >= 3 && (v47 & (v47 - 1)) == 0) {
        v49 = 1LL << -(char)__clz(v48 - 1);
        if (v48 >= 2) {
          v48 = v49;
        }
        if (v46 <= v48) {
          v46 = v48;
        }
        if (v46 >= v47) {
          goto LABEL_83;
        }
      LABEL_70:
        NgxRoutine_29120((__int64*)a1, v46);
        goto LABEL_83;
      }
      v50 = NgxRoutine_e2400(v48);
      if (v46 <= v50) {
        v46 = v50;
      }
      if (v46 < v47) {
        goto LABEL_70;
      }
    }
  LABEL_83:
    v13 = *((_QWORD*)a1 + 1);
    if ((v13 & (v13 - 1)) != 0) {
      if (v14 >= v13) {
        v3 = v14 % v13;
        v39 = *(_QWORD*)a1;
        v40 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v14 % v13));
        if (v40 != nullptr) {
          goto LABEL_57;
        }
      }
      else {
        v3 = v14;
        v39 = *(_QWORD*)a1;
        v40 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v14);
        if (v40 != nullptr) {
          goto LABEL_57;
        }
      }
    }
    else {
      v3 = (v13 - 1) & v14;
      v39 = *(_QWORD*)a1;
      v40 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
      if (v40 != nullptr) {
        goto LABEL_57;
      }
    }
  LABEL_88:
    v51 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v17;
    *v17 = v51;
    *(_QWORD*)(v39 + 8 * v3) = a1 + 4;
    if (*v17 != 0) {
      v52 = *(_QWORD*)(*v17 + 8LL);
      if ((v13 & (v13 - 1)) != 0) {
        if (v52 >= v13) {
          v52 %= v13;
        }
        *(_QWORD*)(v39 + 8 * v52) = v17;
      }
      else {
        *(_QWORD*)(v39 + 8 * (v52 & (v13 - 1))) = v17;
      }
    }
    goto LABEL_58;
  }
  v39 = *(_QWORD*)a1;
  v40 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v40 == nullptr) {
    goto LABEL_88;
  }
LABEL_57:
  *v17 = *v40;
  *v40 = v17;
LABEL_58:
  ++*((_QWORD*)a1 + 3);
  return v17;
}

_QWORD* nvidia_b1640(__int64 a1, unsigned __int8* a2, char* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v8;
  __int64 v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  unsigned __int8* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int8* v31;
  _QWORD* v32;
  char v33;
  __int64 v34;
  __int64 v35;
  float v36;
  float v37;
  __int64 v38;
  _QWORD* v39;
  float v41;
  _BOOL8 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;

  v4 = *a2;
  v8 = (v4 & 1) == 0;
  v9 = v4 >> 1;
  if (v8) {
    v10 = a2 + 1;
  }
  else {
    v10 = *((unsigned __int8**)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  v12 = NgxRoutine_baf70((__int64)v10, v11);
  v13 = *(_QWORD*)(a1 + 8);
  v14 = v12;
  if (v13 == 0) {
    goto LABEL_54;
  }
  v15 = v13 - 1;
  if ((v13 & (v13 - 1)) != 0) {
    v3 = v12;
    if (v12 >= v13) {
      v3 = v12 % v13;
    }
    v16 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v16 == nullptr) {
      goto LABEL_54;
    }
  }
  else {
    v3 = v15 & v12;
    v16 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v15 & v12));
    if (v16 == nullptr) {
      goto LABEL_54;
    }
  }
  v17 = (_QWORD*)*v16;
  if (*v16 != 0) {
    if ((v13 & v15) == 0) {
      while (1) {
        v25 = v17[1];
        if (v25 == v14) {
          v26 = *((unsigned __int8*)v17 + 16);
          if ((v26 & 1) != 0) {
            v27 = v17[3];
          }
          else {
            v27 = v26 >> 1;
          }
          v28 = *a2;
          v29 = *((_QWORD*)a2 + 1);
          if ((v28 & 1) == 0) {
            v29 = v28 >> 1;
          }
          if (v27 == v29) {
            v30 = (v26 & 1) != 0 ? (_QWORD*)v17[4] : (_QWORD*)((char*)v17 + 17);
            v31 = (v28 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
            if ((unsigned int)memcmp_plt(v30, v31) == 0) {
              return v17;
            }
          }
        }
        else if ((v25 & v15) != v3) {
          goto LABEL_54;
        }
        v17 = (_QWORD*)*v17;
        if (v17 == nullptr) {
          goto LABEL_54;
        }
      }
    }
    do {
      v18 = v17[1];
      if (v18 == v14) {
        v19 = *((unsigned __int8*)v17 + 16);
        if ((v19 & 1) != 0) {
          v20 = v17[3];
        }
        else {
          v20 = v19 >> 1;
        }
        v21 = *a2;
        v22 = *((_QWORD*)a2 + 1);
        if ((v21 & 1) == 0) {
          v22 = v21 >> 1;
        }
        if (v20 == v22) {
          v23 = (v19 & 1) != 0 ? (_QWORD*)v17[4] : (_QWORD*)((char*)v17 + 17);
          v24 = (v21 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
          if ((unsigned int)memcmp_plt(v23, v24) == 0) {
            return v17;
          }
        }
      }
      else {
        if (v18 >= v13) {
          v18 %= v13;
        }
        if (v18 != v3) {
          break;
        }
      }
      v17 = (_QWORD*)*v17;
    } while (v17 != nullptr);
  }
LABEL_54:
  v32 = (_QWORD*)NgxRoutine_420(56);
  v33 = *a3;
  v17 = v32;
  *v32 = 0;
  v32[1] = v14;
  if ((v33 & 1) == 0) {
    v34 = *((_QWORD*)a3 + 1);
    v32[2] = *(_QWORD*)a3;
    v32[3] = v34;
    v32[4] = *((_QWORD*)a3 + 2);
    v35 = *((_QWORD*)a3 + 4);
    v32[5] = *((_QWORD*)a3 + 3);
    v32[6] = v35;
    if (v35 == 0) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  NgxRoutine_29320(v32 + 2, *((_QWORD*)a3 + 2), *((_QWORD*)a3 + 1));
  v35 = *((_QWORD*)a3 + 4);
  v17[5] = *((_QWORD*)a3 + 3);
  v17[6] = v35;
  if (v35 != 0) {
  LABEL_58:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_59:
  v36 = *(float*)(a1 + 32);
  v37 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v13 == 0 || (float)(v36 * (float)v13) < v37) {
    v41 = v37 / v36;
    v42 = true;
    if (v13 >= 3) {
      v42 = (v13 & (v13 - 1)) != 0;
    }
    v43 = v42 | (2 * v13);
    v44 = vcvtps_u64_f32(v41);
    if (v43 <= v44) {
      v45 = v44;
    }
    else {
      v45 = v43;
    }
    if (v45 == 1) {
      v45 = 2;
    }
    else if ((v45 & (v45 - 1)) != 0) {
      v45 = NgxRoutine_e2400(v45);
    }
    v46 = *(_QWORD*)(a1 + 8);
    if (v45 > v46) {
      goto LABEL_75;
    }
    if (v45 < v46) {
      v47 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v46 >= 3 && (v46 & (v46 - 1)) == 0) {
        v48 = 1LL << -(char)__clz(v47 - 1);
        if (v47 >= 2) {
          v47 = v48;
        }
        if (v45 <= v47) {
          v45 = v47;
        }
        if (v45 >= v46) {
          goto LABEL_88;
        }
      LABEL_75:
        NgxRoutine_29120((__int64*)a1, v45);
        goto LABEL_88;
      }
      v49 = NgxRoutine_e2400(v47);
      if (v45 <= v49) {
        v45 = v49;
      }
      if (v45 < v46) {
        goto LABEL_75;
      }
    }
  LABEL_88:
    v13 = *(_QWORD*)(a1 + 8);
    if ((v13 & (v13 - 1)) != 0) {
      if (v14 >= v13) {
        v3 = v14 % v13;
        v38 = *(_QWORD*)a1;
        v39 = *(_QWORD**)(*(_QWORD*)a1 + 8 * (v14 % v13));
        if (v39 != nullptr) {
          goto LABEL_62;
        }
      }
      else {
        v3 = v14;
        v38 = *(_QWORD*)a1;
        v39 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v14);
        if (v39 != nullptr) {
          goto LABEL_62;
        }
      }
    }
    else {
      v3 = (v13 - 1) & v14;
      v38 = *(_QWORD*)a1;
      v39 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
      if (v39 != nullptr) {
        goto LABEL_62;
      }
    }
  LABEL_93:
    v50 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v17;
    *v17 = v50;
    *(_QWORD*)(v38 + 8 * v3) = a1 + 16;
    if (*v17 != 0) {
      v51 = *(_QWORD*)(*v17 + 8LL);
      if ((v13 & (v13 - 1)) != 0) {
        if (v51 >= v13) {
          v51 %= v13;
        }
        *(_QWORD*)(v38 + 8 * v51) = v17;
      }
      else {
        *(_QWORD*)(v38 + 8 * (v51 & (v13 - 1))) = v17;
      }
    }
    goto LABEL_63;
  }
  v38 = *(_QWORD*)a1;
  v39 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v39 == nullptr) {
    goto LABEL_93;
  }
LABEL_62:
  *v17 = *v39;
  *v39 = v17;
LABEL_63:
  ++*(_QWORD*)(a1 + 24);
  return v17;
}

__int64 nvidia_ba400(__int64 a1, unsigned __int8* a2, __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int8* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int8* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float v39;
  float v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  float v45;
  _BOOL8 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;

  v5 = *a2;
  v9 = (v5 & 1) == 0;
  v10 = v5 >> 1;
  if (v9) {
    v11 = (__int64)(a2 + 1);
  }
  else {
    v11 = *((_QWORD*)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  v13 = NgxRoutine_baf70(v11, v12);
  v14 = *(_QWORD*)(a1 + 8);
  v15 = v13;
  if (v14 == 0) {
    goto LABEL_54;
  }
  v16 = v14 - 1;
  if ((v14 & (v14 - 1)) != 0) {
    v4 = v13;
    if (v13 >= v14) {
      v4 = v13 % v14;
    }
    v17 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v17 == nullptr) {
      goto LABEL_54;
    }
  }
  else {
    v4 = v16 & v13;
    v17 = *(__int64**)(*(_QWORD*)a1 + 8 * (v16 & v13));
    if (v17 == nullptr) {
      goto LABEL_54;
    }
  }
  v18 = *v17;
  if (*v17 != 0) {
    if ((v14 & v16) == 0) {
      while (1) {
        v26 = *(_QWORD*)(v18 + 8);
        if (v26 == v15) {
          v27 = *(unsigned __int8*)(v18 + 16);
          if ((v27 & 1) != 0) {
            v28 = *(_QWORD*)(v18 + 24);
          }
          else {
            v28 = v27 >> 1;
          }
          v29 = *a2;
          v30 = *((_QWORD*)a2 + 1);
          if ((v29 & 1) == 0) {
            v30 = v29 >> 1;
          }
          if (v28 == v30) {
            v31 = (v27 & 1) != 0 ? *(_QWORD*)(v18 + 32) : v18 + 17;
            v32 = (v29 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
            if ((unsigned int)memcmp_plt(v31, v32) == 0) {
              return v18;
            }
          }
        }
        else if ((v26 & v16) != v4) {
          goto LABEL_54;
        }
        v18 = *(_QWORD*)v18;
        if (v18 == 0) {
          goto LABEL_54;
        }
      }
    }
    do {
      v19 = *(_QWORD*)(v18 + 8);
      if (v19 == v15) {
        v20 = *(unsigned __int8*)(v18 + 16);
        if ((v20 & 1) != 0) {
          v21 = *(_QWORD*)(v18 + 24);
        }
        else {
          v21 = v20 >> 1;
        }
        v22 = *a2;
        v23 = *((_QWORD*)a2 + 1);
        if ((v22 & 1) == 0) {
          v23 = v22 >> 1;
        }
        if (v21 == v23) {
          v24 = (v20 & 1) != 0 ? *(_QWORD*)(v18 + 32) : v18 + 17;
          v25 = (v22 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
          if ((unsigned int)memcmp_plt(v24, v25) == 0) {
            return v18;
          }
        }
      }
      else {
        if (v19 >= v14) {
          v19 %= v14;
        }
        if (v19 != v4) {
          break;
        }
      }
      v18 = *(_QWORD*)v18;
    } while (v18 != 0);
  }
LABEL_54:
  v33 = NgxRoutine_420(48);
  v34 = *a4;
  *(_QWORD*)v33 = 0;
  *(_QWORD*)(v33 + 8) = v15;
  v18 = v33;
  if ((*(_BYTE*)v34 & 1) != 0) {
    NgxRoutine_29320((__int64*)(v33 + 16), v34[2], v34[1]);
    v41 = *(_QWORD*)(a1 + 24);
    v39 = *(float*)(a1 + 32);
    *(_DWORD*)(v18 + 40) = 0;
    v40 = (float)(unsigned __int64)(v41 + 1);
    if (v14 == 0) {
      goto LABEL_63;
    }
  }
  else {
    v35 = *v34;
    v36 = v34[1];
    v37 = v34[2];
    *(_QWORD*)(v33 + 24) = v36;
    *(_QWORD*)(v33 + 32) = v37;
    *(_QWORD*)(v33 + 16) = v35;
    v38 = *(_QWORD*)(a1 + 24);
    v39 = *(float*)(a1 + 32);
    *(_DWORD*)(v33 + 40) = 0;
    v40 = (float)(unsigned __int64)(v38 + 1);
    if (v14 == 0) {
      goto LABEL_63;
    }
  }
  if ((float)(v39 * (float)v14) >= v40) {
    v42 = *(_QWORD*)a1;
    v43 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v43 == nullptr) {
      goto LABEL_91;
    }
    goto LABEL_60;
  }
LABEL_63:
  v45 = v40 / v39;
  v46 = true;
  if (v14 >= 3) {
    v46 = (v14 & (v14 - 1)) != 0;
  }
  v47 = v46 | (2 * v14);
  v48 = vcvtps_u64_f32(v45);
  if (v47 <= v48) {
    v49 = v48;
  }
  else {
    v49 = v47;
  }
  if (v49 == 1) {
    v49 = 2;
  }
  else if ((v49 & (v49 - 1)) != 0) {
    v49 = NgxRoutine_e2400(v49);
  }
  v50 = *(_QWORD*)(a1 + 8);
  if (v49 > v50) {
    goto LABEL_73;
  }
  if (v49 < v50) {
    v51 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                         *(float*)(a1 + 32));
    if (v50 >= 3 && (v50 & (v50 - 1)) == 0) {
      v52 = 1LL << -(char)__clz(v51 - 1);
      if (v51 >= 2) {
        v51 = v52;
      }
      if (v49 <= v51) {
        v49 = v51;
      }
      if (v49 >= v50) {
        goto LABEL_86;
      }
    LABEL_73:
      NgxRoutine_29120((__int64*)a1, v49);
      goto LABEL_86;
    }
    v53 = NgxRoutine_e2400(v51);
    if (v49 <= v53) {
      v49 = v53;
    }
    if (v49 < v50) {
      goto LABEL_73;
    }
  }
LABEL_86:
  v14 = *(_QWORD*)(a1 + 8);
  if ((v14 & (v14 - 1)) != 0) {
    if (v15 >= v14) {
      v4 = v15 % v14;
      v42 = *(_QWORD*)a1;
      v43 = *(__int64**)(*(_QWORD*)a1 + 8 * (v15 % v14));
      if (v43 == nullptr) {
      LABEL_91:
        v54 = *(_QWORD*)(a1 + 16);
        *(_QWORD*)(a1 + 16) = v18;
        *(_QWORD*)v18 = v54;
        *(_QWORD*)(v42 + 8 * v4) = a1 + 16;
        if (*(_QWORD*)v18 != 0) {
          v55 = *(_QWORD*)(*(_QWORD*)v18 + 8LL);
          if ((v14 & (v14 - 1)) != 0) {
            if (v55 >= v14) {
              v55 %= v14;
            }
            *(_QWORD*)(v42 + 8 * v55) = v18;
          }
          else {
            *(_QWORD*)(v42 + 8 * (v55 & (v14 - 1))) = v18;
          }
        }
        goto LABEL_61;
      }
    }
    else {
      v4 = v15;
      v42 = *(_QWORD*)a1;
      v43 = *(__int64**)(*(_QWORD*)a1 + 8 * v15);
      if (v43 == nullptr) {
        goto LABEL_91;
      }
    }
  }
  else {
    v4 = (v14 - 1) & v15;
    v42 = *(_QWORD*)a1;
    v43 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v43 == nullptr) {
      goto LABEL_91;
    }
  }
LABEL_60:
  *(_QWORD*)v18 = *v43;
  *v43 = v18;
LABEL_61:
  ++*(_QWORD*)(a1 + 24);
  return v18;
}

__int64 nvidia_ba840(__int64 a1, unsigned __int8* a2, __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int8* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int8* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  __int64 v39;
  __int64* v40;
  float v42;
  _BOOL8 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;

  v5 = *a2;
  v9 = (v5 & 1) == 0;
  v10 = v5 >> 1;
  if (v9) {
    v11 = (__int64)(a2 + 1);
  }
  else {
    v11 = *((_QWORD*)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  v13 = NgxRoutine_baf70(v11, v12);
  v14 = *(_QWORD*)(a1 + 8);
  v15 = v13;
  if (v14 == 0) {
    goto LABEL_54;
  }
  v16 = v14 - 1;
  if ((v14 & (v14 - 1)) != 0) {
    v4 = v13;
    if (v13 >= v14) {
      v4 = v13 % v14;
    }
    v17 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v17 == nullptr) {
      goto LABEL_54;
    }
  }
  else {
    v4 = v16 & v13;
    v17 = *(__int64**)(*(_QWORD*)a1 + 8 * (v16 & v13));
    if (v17 == nullptr) {
      goto LABEL_54;
    }
  }
  v18 = *v17;
  if (*v17 != 0) {
    if ((v14 & v16) == 0) {
      while (1) {
        v26 = *(_QWORD*)(v18 + 8);
        if (v26 == v15) {
          v27 = *(unsigned __int8*)(v18 + 16);
          if ((v27 & 1) != 0) {
            v28 = *(_QWORD*)(v18 + 24);
          }
          else {
            v28 = v27 >> 1;
          }
          v29 = *a2;
          v30 = *((_QWORD*)a2 + 1);
          if ((v29 & 1) == 0) {
            v30 = v29 >> 1;
          }
          if (v28 == v30) {
            v31 = (v27 & 1) != 0 ? *(_QWORD*)(v18 + 32) : v18 + 17;
            v32 = (v29 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
            if ((unsigned int)memcmp_plt(v31, v32) == 0) {
              return v18;
            }
          }
        }
        else if ((v26 & v16) != v4) {
          goto LABEL_54;
        }
        v18 = *(_QWORD*)v18;
        if (v18 == 0) {
          goto LABEL_54;
        }
      }
    }
    do {
      v19 = *(_QWORD*)(v18 + 8);
      if (v19 == v15) {
        v20 = *(unsigned __int8*)(v18 + 16);
        if ((v20 & 1) != 0) {
          v21 = *(_QWORD*)(v18 + 24);
        }
        else {
          v21 = v20 >> 1;
        }
        v22 = *a2;
        v23 = *((_QWORD*)a2 + 1);
        if ((v22 & 1) == 0) {
          v23 = v22 >> 1;
        }
        if (v21 == v23) {
          v24 = (v20 & 1) != 0 ? *(_QWORD*)(v18 + 32) : v18 + 17;
          v25 = (v22 & 1) != 0 ? *((unsigned __int8**)a2 + 2) : a2 + 1;
          if ((unsigned int)memcmp_plt(v24, v25) == 0) {
            return v18;
          }
        }
      }
      else {
        if (v19 >= v14) {
          v19 %= v14;
        }
        if (v19 != v4) {
          break;
        }
      }
      v18 = *(_QWORD*)v18;
    } while (v18 != 0);
  }
LABEL_54:
  v33 = NgxRoutine_420(48);
  v34 = *a4;
  *(_QWORD*)v33 = 0;
  *(_QWORD*)(v33 + 8) = v15;
  v18 = v33;
  v35 = *v34;
  v36 = v34[2];
  *(_QWORD*)(v33 + 24) = v34[1];
  *(_QWORD*)(v33 + 32) = v36;
  *(_QWORD*)(v33 + 16) = v35;
  v34[1] = 0;
  v34[2] = 0;
  *v34 = 0;
  *(_DWORD*)(v33 + 40) = 0;
  v37 = *(float*)(a1 + 32);
  v38 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v14 == 0 || (float)(v37 * (float)v14) < v38) {
    v42 = v38 / v37;
    v43 = true;
    if (v14 >= 3) {
      v43 = (v14 & (v14 - 1)) != 0;
    }
    v44 = v43 | (2 * v14);
    v45 = vcvtps_u64_f32(v42);
    if (v44 <= v45) {
      v46 = v45;
    }
    else {
      v46 = v44;
    }
    if (v46 == 1) {
      v46 = 2;
    }
    else if ((v46 & (v46 - 1)) != 0) {
      v46 = NgxRoutine_e2400(v46);
    }
    v47 = *(_QWORD*)(a1 + 8);
    if (v46 > v47) {
      goto LABEL_70;
    }
    if (v46 < v47) {
      v48 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v47 >= 3 && (v47 & (v47 - 1)) == 0) {
        v49 = 1LL << -(char)__clz(v48 - 1);
        if (v48 >= 2) {
          v48 = v49;
        }
        if (v46 <= v48) {
          v46 = v48;
        }
        if (v46 >= v47) {
          goto LABEL_83;
        }
      LABEL_70:
        NgxRoutine_29120((__int64*)a1, v46);
        goto LABEL_83;
      }
      v50 = NgxRoutine_e2400(v48);
      if (v46 <= v50) {
        v46 = v50;
      }
      if (v46 < v47) {
        goto LABEL_70;
      }
    }
  LABEL_83:
    v14 = *(_QWORD*)(a1 + 8);
    if ((v14 & (v14 - 1)) != 0) {
      if (v15 >= v14) {
        v4 = v15 % v14;
        v39 = *(_QWORD*)a1;
        v40 = *(__int64**)(*(_QWORD*)a1 + 8 * (v15 % v14));
        if (v40 != nullptr) {
          goto LABEL_57;
        }
      }
      else {
        v4 = v15;
        v39 = *(_QWORD*)a1;
        v40 = *(__int64**)(*(_QWORD*)a1 + 8 * v15);
        if (v40 != nullptr) {
          goto LABEL_57;
        }
      }
    }
    else {
      v4 = (v14 - 1) & v15;
      v39 = *(_QWORD*)a1;
      v40 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
      if (v40 != nullptr) {
        goto LABEL_57;
      }
    }
  LABEL_88:
    v51 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v18;
    *(_QWORD*)v18 = v51;
    *(_QWORD*)(v39 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)v18 != 0) {
      v52 = *(_QWORD*)(*(_QWORD*)v18 + 8LL);
      if ((v14 & (v14 - 1)) != 0) {
        if (v52 >= v14) {
          v52 %= v14;
        }
        *(_QWORD*)(v39 + 8 * v52) = v18;
      }
      else {
        *(_QWORD*)(v39 + 8 * (v52 & (v14 - 1))) = v18;
      }
    }
    goto LABEL_58;
  }
  v39 = *(_QWORD*)a1;
  v40 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v40 == nullptr) {
    goto LABEL_88;
  }
LABEL_57:
  *(_QWORD*)v18 = *v40;
  *v40 = v18;
LABEL_58:
  ++*(_QWORD*)(a1 + 24);
  return v18;
}

unsigned __int8* nvidia_c0ac0(_QWORD** a1, _QWORD* a2, unsigned __int8* a3,
                              unsigned __int8* a4, __int64 a5, _DWORD* a6,
                              char a7)
{
  unsigned __int8* v10;
  signed __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  bool v22;
  __int64 v23;
  char v24;
  __int64 v25;
  _QWORD* v26;
  int v27;
  _QWORD* v28;
  int v29;
  int v30;
  unsigned __int8* v31;
  __int64 v32;
  unsigned __int8* v33;
  char* v34;
  int v35;
  char v36;
  unsigned __int8* v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  __int64 v42;
  char* v43;
  unsigned __int8* v44;
  unsigned __int64 v45;
  __int64 v46;
  _DWORD* v47;
  _BOOL4 v48;
  char* v49;
  int v50;
  _DWORD* v52;
  __int64 v53;
  _QWORD** v54;
  unsigned __int8* v55;
  char* v56;
  char v58;

  v10 = a3;
  v13 = (a4 - a3) >> 3;
  v14 = 0xAAAAAAAAAAAAAAABLL * v13;
  if (0xAAAAAAAAAAAAAAABLL * v13 < 0x65) {
    v56 = &v58;
    v52 = a6;
    v53 = 0;
    if (a3 != a4) {
      goto LABEL_4;
    }
  LABEL_17:
    v14 = 0;
    v17 = 0;
    v25 = 0;
    v54 = a1;
    v55 = v10;
    v26 = *a1;
    if (*a1 == nullptr) {
      goto LABEL_28;
    }
    goto LABEL_20;
  }
  v15 = malloc_plt(0xAAAAAAAAAAAAAAABLL * v13);
  v56 = (char*)v15;
  if (v15 == 0) {
    NgxRoutine_e2320();
  }
  v52 = a6;
  v53 = v15;
  if (v10 == a4) {
    goto LABEL_17;
  }
LABEL_4:
  v16 = v56;
  v17 = 0;
  v18 = v10;
  do {
    v19 = *v18;
    v20 = *((_QWORD*)v18 + 1);
    v18 += 24;
    if ((v19 & 1) != 0) {
      v21 = v20;
    }
    else {
      v21 = v19 >> 1;
    }
    v22 = v21 == 0;
    v23 = v21 == 0;
    if (v22) {
      v24 = 2;
    }
    else {
      v24 = 1;
    }
    if (v22) {
      ++v17;
    }
    v14 -= v23;
    *v16++ = v24;
  } while (v18 != a4);
  v25 = 0;
  v54 = a1;
  v55 = v10;
  v26 = *a1;
  if (*a1 == nullptr) {
    goto LABEL_28;
  }
LABEL_20:
  if (v26[3] == v26[4]) {
    if ((*(unsigned int (**)(_QWORD*))(*v26 + 72LL))(v26) != -1) {
      v27 = *a1 == nullptr;
      if (a2 != nullptr) {
        goto LABEL_29;
      }
      goto LABEL_25;
    }
    *a1 = nullptr;
    while (1) {
      while (1) {
      LABEL_28:
        v27 = 1;
        if (a2 == nullptr) {
          goto LABEL_25;
        }
      LABEL_29:
        if (a2[3] == a2[4]) {
          v29 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
          v30 = v29 == -1;
          if (v29 == -1) {
            a2 = nullptr;
          }
          v28 = *a1;
          if (v27 == v30) {
            goto LABEL_73;
          }
        }
        else {
          v28 = *a1;
          if (v27 == 0) {
            goto LABEL_73;
          }
        }
      LABEL_35:
        if (v14 == 0) {
          goto LABEL_73;
        }
        v31 = (unsigned __int8*)v28[3];
        if (v31 == (unsigned __int8*)v28[4]) {
          v32 = (*(unsigned int (**)(_QWORD*))(*v28 + 72LL))(v28);
        }
        else {
          v32 = *v31;
        }
        if ((a7 & 1) == 0) {
          LOBYTE(v32) =
              (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a5 + 24LL))(a5, v32);
        }
        if (v10 != a4) {
          break;
        }
      LABEL_19:
        ++v25;
        v26 = *a1;
        if (*a1 != nullptr) {
          goto LABEL_20;
        }
      }
      v33 = v10;
      v34 = v56;
      v35 = (unsigned __int8)v32;
      v36 = 0;
      do {
        if (*v34 == 1) {
          if ((*v33 & 1) != 0) {
            v37 = *((unsigned __int8**)v33 + 2);
          }
          else {
            v37 = v33 + 1;
          }
          v38 = v37[v25];
          if ((a7 & 1) == 0) {
            LOBYTE(v38) = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a5 +
                                                             24LL))(a5, v38);
          }
          if (v35 == (unsigned __int8)v38) {
            v39 = *v33;
            if ((v39 & 1) != 0) {
              v40 = *((_QWORD*)v33 + 1);
            }
            else {
              v40 = v39 >> 1;
            }
            if (v40 == v25 + 1) {
              --v14;
              ++v17;
              v36 = 1;
              *v34 = 2;
            }
            else {
              v36 = 1;
            }
          }
          else {
            --v14;
            *v34 = 0;
          }
        }
        v33 += 24;
        ++v34;
      } while (v33 != a4);
      if ((v36 & 1) != 0) {
        a1 = v54;
        v10 = v55;
        v41 = *v54;
        v42 = (*v54)[3];
        if (v42 == (*v54)[4]) {
          (*(void (**)(_QWORD*))(*v41 + 80LL))(v41);
        }
        else {
          v41[3] = v42 + 1;
        }
        if (v17 + v14 >= 2) {
          v43 = v56;
          v44 = v55;
          do {
            if (*v43 == 2) {
              v45 = *v44;
              v46 = (v45 & 1) != 0 ? *((_QWORD*)v44 + 1) : v45 >> 1;
              if (v46 != v25 + 1) {
                --v17;
                *v43 = 0;
              }
            }
            v44 += 24;
            ++v43;
          } while (v44 != a4);
        }
        goto LABEL_19;
      }
      a1 = v54;
      v10 = v55;
      ++v25;
      v26 = *v54;
      if (*v54 != nullptr) {
        goto LABEL_20;
      }
    }
  }
  v27 = 0;
  if (a2 != nullptr) {
    goto LABEL_29;
  }
LABEL_25:
  v28 = *a1;
  if (v27 != 1) {
    goto LABEL_35;
  }
LABEL_73:
  if (v28 != nullptr) {
    v47 = v52;
    if (v28[3] == v28[4]) {
      if ((*(unsigned int (**)(_QWORD*))(*v28 + 72LL))(v28) == -1) {
        v48 = true;
        *a1 = nullptr;
        if (a2 == nullptr) {
          goto LABEL_95;
        }
      }
      else {
        v48 = *a1 == nullptr;
        if (a2 == nullptr) {
          goto LABEL_95;
        }
      }
    }
    else {
      v48 = false;
      if (a2 == nullptr) {
        goto LABEL_95;
      }
    }
  LABEL_81:
    if (a2[3] == a2[4]) {
      if (((v48 ^ ((*(unsigned int (**)(_QWORD*))(*a2 + 72LL))(a2) == -1)) &
           1) != 0) {
        goto LABEL_84;
      }
    }
    else if (v48) {
      goto LABEL_84;
    }
  LABEL_83:
    *v47 |= 2u;
    goto LABEL_84;
  }
  v47 = v52;
  v48 = true;
  if (a2 != nullptr) {
    goto LABEL_81;
  }
LABEL_95:
  if (v48) {
    goto LABEL_83;
  }
LABEL_84:
  if (v10 == a4) {
  LABEL_88:
    *v47 |= 4u;
  }
  else {
    v49 = v56;
    while (1) {
      v50 = (unsigned __int8)*v49++;
      if (v50 == 2) {
        break;
      }
      v10 += 24;
      if (v10 == a4) {
        goto LABEL_88;
      }
    }
  }
  if (v53 != 0) {
    free_plt();
  }
  return v10;
}

#pragma GCC visibility pop
