#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CudaDriverRoutine_1085b0(__int64);
__int64 CudaDriverRoutine_114a80(__int64, __int64, int);
__int64 CudaDriverRoutine_116fa0(__int64);
__int64 CudaDriverRoutine_1197e0(__int64 result);
__int64 CudaDriverRoutine_12e340(__int64 result);
__int64 CudaDriverRoutine_12e510(__int64, __int64);
__int64 CudaDriverRoutine_8ea00(__int64, __int64);
__int64 CudaDriverRoutine_98340(__int64 result);
__int64 CudaDriverStub_107f90(__int64);
__int64 CudaDriverStub_108070(__int64);
__int64 CudaDriverStub_116790(_QWORD, _QWORD, _QWORD);
__int64 CudaDriverStub_12db70(_QWORD, _QWORD);
__int64 CudaDriverStub_12dc90(_QWORD);
__int64 CudaDriverStub_57450(_QWORD);
__int64 cuda_driver_1084c0(__int64 result);
__int64 cuda_driver_unplaced_9_1bb6a0(unsigned __int64, unsigned __int64);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
bool CudaDriverRoutine_9ac20(__int64);
extern __int128 CudaDriverData_1115690;
extern __int64 (*CudaDriverData_14324a0)(_QWORD*);
void CudaDriverStub_10fdf0();
void CudaDriverStub_111420();
__int64 nvidia_60ae0(__int64 a1, int a2, int a3);
__int64 nvidia_8e890(__int64* a1);
__int64 nvidia_bf0d0(__int64* a1, __int64 a2);
__int64 nvidia_12d6e0(__int64 a1, unsigned __int64* a2, __int64 a3);
void nvidia_1b3d20(__int64 a1, _BYTE* a2);
void nvidia_1fb7e0(__int64 a1, _QWORD* a2);

__int64 nvidia_60ae0(__int64 a1, int a2, int a3)
{
  _DWORD v7[2];
  __int64 v8;

  memset_plt(&v8, 0, 2056);
  v7[0] = a2;
  v7[1] = a3;
  return CudaDriverRoutine_8ea00(a1, (__int64)v7);
}

__int64 nvidia_8e890(__int64* a1)
{
  __int64 v5;
  __int64 v9;
  unsigned int v16;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  _BYTE v25[4];
  __int64 v26;

  v26 = -1;
  v24 = 0;
  memset_plt(&v23, 0, 2060);
  *a1 = 0;
  v21 = 5;
  v22 = 6;
  CudaDriverStub_57450(v25);
  v5 = CudaDriverRoutine_12e510(1, 4);
  if (v5 != 0) {
    v9 = v5;
    CudaDriverStub_57450(v5);
    CudaDriverStub_57450(v25);
    if ((unsigned int)CudaDriverStub_12db70(v25, &v21) != 0 ||
        (unsigned int)CudaDriverStub_12db70(v25, &v26) != 0 ||
        (CudaDriverStub_57450(v9),
         (unsigned int)CudaDriverStub_12db70(v9, &v22) != 0) ||
        (unsigned int)CudaDriverStub_12db70(v9, &v24) != 0) {
      v16 = 304;
    }
    else {
      v16 = v24;
      if ((_DWORD)v24 == 0) {
        *a1 = v9;
        CudaDriverStub_57450(v25);
        return v16;
      }
    }
    CudaDriverStub_57450(v25);
    CudaDriverStub_57450(v9);
    CudaDriverRoutine_12e340(v9);
  }
  else {
    CudaDriverStub_57450(v25);
    return 2;
  }
  return v16;
}

__int64 nvidia_bf0d0(__int64* a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int128 v16;
  __int128 v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    int v20;
    char gap772_[4];
    __int64* v21;
  } v19_;

  memset_plt(&v12, 0, 744);
  v11 = *(__int64*)((char*)a1 + 12);
  v19_.v20 = 2;
  v19_.v19[0] = 0x800000011LL;
  if (a2 != 0) {
    v4 = **(_QWORD**)(a2 + 64);
  }
  else {
    v4 = 0;
  }
  v19_.v19[1] = v4;
  v19_.v21 = &v11;
  CudaDriverData_14324a0(v19_.v19);
  result = HIDWORD(v19_.v19[0]);
  if (SHIDWORD(v19_.v19[0]) > 2) {
    if (SHIDWORD(v19_.v19[0]) <= 4) {
      if (HIDWORD(v19_.v19[0]) == 3) {
        return 219;
      }
      else {
        return 208;
      }
    }
    if (HIDWORD(v19_.v19[0]) == 5) {
      return 211;
    }
    if (HIDWORD(v19_.v19[0]) == 6) {
      return 2;
    }
    return 999;
  }
  if (HIDWORD(v19_.v19[0]) != 0) {
    if (HIDWORD(v19_.v19[0]) == 1) {
      return result;
    }
    if (HIDWORD(v19_.v19[0]) == 2) {
      return 400;
    }
    return 999;
  }
  if (v13 == 0) {
    return 205;
  }
  a1[5] = v13;
  v6 = v15;
  v7 = v18;
  *((_DWORD*)a1 + 7) = v14;
  a1[10] = v7;
  a1[13] = v6;
  v8 = v17;
  v9 = *a1;
  *((_OWORD*)a1 + 3) = v16;
  *((_OWORD*)a1 + 4) = v8;
  result = (*(__int64 (**)(__int64*, __int64))(v9 + 80))(a1, a2);
  if ((_DWORD)result != 0) {
    v10 = result;
    (*(void (**)(__int64*, __int64))(*a1 + 32))(a1, a2);
    return v10;
  }
  return result;
}

__int64 nvidia_12d6e0(__int64 a1, unsigned __int64* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;

  v6 = CudaDriverRoutine_98340(a1);
  cuda_driver_1084c0(v6 + 24);
  v7 = *(_QWORD*)(a3 + 8);
  v8 = *(_DWORD*)(a1 + 8);
  if (v8 == 1) {
  LABEL_4:
    if (*a2 != 0) {
      v12 = 0;
      do {
        CudaDriverRoutine_1197e0(*(_QWORD*)(a2[2] + 8 * v12));
        *(_QWORD*)(a2[2] + 8 * v12++) = 0;
      } while (v12 < *a2);
    }
    v13 = 0;
    *a2 = 0;
    goto LABEL_19;
  }
  while (v8 != 3) {
    v9 = CudaDriverRoutine_98340(a1);
    v10 = CudaDriverRoutine_1085b0(v9 + 24);
    CudaDriverStub_12dc90(v10);
    v11 = CudaDriverRoutine_98340(a1);
    cuda_driver_1084c0(v11 + 24);
    v8 = *(_DWORD*)(a1 + 8);
    if (v8 == 1) {
      goto LABEL_4;
    }
  }
  v23 = 0;
  v24 = 0x3C00000000LL;
  v14 = CudaDriverStub_116790(&v23, a1, &v24);
  if (v14 != 0) {
  LABEL_16:
    v13 = v14;
  LABEL_17:
    v20 = v23;
    if (v23 == 0) {
      goto LABEL_19;
    }
  LABEL_18:
    CudaDriverRoutine_116fa0(v20);
    goto LABEL_19;
  }
  if (*a2 == 0) {
  LABEL_15:
    v14 = CudaDriverRoutine_114a80(v7, v23, 1);
    goto LABEL_16;
  }
  v15 = 0;
  while (1) {
    v16 = *(_QWORD*)(a2[2] + 8 * v15);
    CudaDriverStub_107f90(v16 + 592);
    v17 = v23;
    v18 = *(_QWORD*)(v16 + 8);
    if (v18 != 0) {
      v19 = cuda_driver_unplaced_9_1bb6a0(
          *(_QWORD*)((char*)((_UNKNOWN*)0x248LL) + v23), v18);
      if (v19 != 0) {
        break;
      }
    }
    v13 = cuda_driver_unplaced_9_1bb6a0(
        *(_QWORD*)((char*)((_UNKNOWN*)0x248LL) + v17), *(_QWORD*)(v16 + 584));
    CudaDriverStub_108070(v16 + 592);
    if (v13 != 0) {
      goto LABEL_17;
    }
    if (++v15 >= *a2) {
      goto LABEL_15;
    }
  }
  v13 = v19;
  CudaDriverStub_108070(v16 + 592);
  v20 = v23;
  if (v23 != 0) {
    goto LABEL_18;
  }
LABEL_19:
  *(_DWORD*)a3 = v13;
  v21 = CudaDriverRoutine_98340(a1);
  return CudaDriverRoutine_1085b0(v21 + 24);
}

void nvidia_1b3d20(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  __int64 i;
  int32x4_t v6;
  int32x4_t v7;
  int32x4_t v8;
  int32x4_t* v9;
  int32x4_t v10;
  int32x4_t* v11;
  __int64 v12;
  int v13;
  char* v14;
  char v15;
  _DWORD v16[4];
  __int64 v17;
  _DWORD v18[4];
  __int64 v19;
  _BYTE v20[1024];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v20, 0, 1024),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v18, 0, 1024),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v16, 0, 1024),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = *(unsigned int*)(*(_QWORD*)(a1 + 64) + 3732LL);
  *a2 = 0;
  if ((*(unsigned int (**)(__int64, _BYTE*))(*(_QWORD*)(a1 + 64) + 21384LL))(
          a1, a2) != 801) {
    return;
  }
  if ((_DWORD)v4 != 0) {
    if ((unsigned int)v4 < 8) {
      for (i = 0; i != v4; ++i) {
      LABEL_8:
        v18[i] = 5264652;
        v16[i] = i;
      }
      goto LABEL_9;
    }
    LANES128(v6).n128_u64[0] = 0x400000004LL;
    LANES128(v6).n128_u64[1] = 0x400000004LL;
    LANES128(v7).n128_u64[0] = 0x800000008LL;
    LANES128(v7).n128_u64[1] = 0x800000008LL;
    i = (unsigned int)v4 & 0xFFFFFFF8;
    v8 = COERCE_AS(int32x4_t, CudaDriverData_1115690);
    v9 = (int32x4_t*)&v17;
    v10 = vdupq_n_s32(0x50550Cu);
    v11 = (int32x4_t*)&v19;
    v12 = i;
    do {
      v11[-1] = v10;
      *v11 = v10;
      v12 -= 8;
      v11 += 2;
      v9[-1] = v8;
      *v9 = vaddq_s32(v8, v6);
      v9 += 2;
      v8 = vaddq_s32(v8, v7);
    } while (v12 != 0);
    if (i != v4) {
      goto LABEL_8;
    }
  }
LABEL_9:
  CudaDriverRoutine_98340(a1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_111420(),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v13 == 0 && (_DWORD)v4 != 0) {
    v14 = v20;
    while (1) {
      v15 = *v14;
      v14 += 4;
      if ((v15 & 2) == 0) {
        break;
      }
      if (--v4 == 0) {
        return;
      }
    }
    *a2 = 1;
  }
}

void nvidia_1fb7e0(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  int v11;
  bool v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int32x2_t v20;
  unsigned int v21;
  int32x2_t v22;
  __int64 v23;
  int v24;
  int32x2_t v25;
  int v26;
  unsigned int v27;
  int v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64* v44;
  __int64 v45;
  int v46;
  unsigned __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  unsigned __int64 v57;
  __int64 v58;
  int32x4_t* v59;
  float* v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int v64;
  int32x4_t v65;
  int32x4_t v66;
  _BYTE v67[3];
  _BYTE v68[6144];
  float32x4x3_t v69;
  float32x4x3_t v70;

  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v68, 0, 6144),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  memset_plt(v67, 0, 12288),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = *(_QWORD*)(a1 + 64);
  v5 = *(_DWORD*)(v4 + 3736);
  v6 = (unsigned int)(v5 * *(_DWORD*)(v4 + 3756));
  v7 = *(_DWORD*)(v4 + 3724);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 16104);
    v9 = v8 + 24;
    if ((unsigned int)v6 < 0x41) {
      if (v7 >= 0xC &&
          (v5 == 1 ? (v12 = v7 - 1431655766 >= 0xAAAAAAAB) : (v12 = false),
           v12 && (v9 >= (unsigned __int64)&v68[12 * v7] ||
                   (unsigned __int64)v68 >=
                       v8 + 4 * (unsigned __int64)(v7 - 1) + 28))) {
        v13 = v7 & 0x7FFFFFF8;
        v59 = (int32x4_t*)(v8 + 40);
        v60 = (float*)v68;
        v14 = 3 * (v7 & 0x7FFFFFF8);
        v61 = vdupq_n_s32(0x504624u);
        v62 = vdupq_n_s32(0x504614u);
        v63 = vdupq_n_s32(0x504634u);
        v64 = v7 & 0x7FFFFFF8;
        do {
          v65 = v59[-1];
          v66 = *v59;
          v64 -= 8;
          v59 += 2;
          v69.val[2] = vaddq_s32(v65, v61);
          v69.val[1] = vaddq_s32(v65, v63);
          v69.val[0] = vaddq_s32(v65, v62);
          v70.val[2] = vaddq_s32(v66, v61);
          v70.val[1] = vaddq_s32(v66, v63);
          v70.val[0] = vaddq_s32(v66, v62);
          vst3q_f32(v60, v69);
          vst3q_f32(v60 + 12, v70);
          v60 += 24;
        } while (v64 != 0);
        if (v7 == v13) {
          goto LABEL_22;
        }
      }
      else {
        v13 = 0;
        v14 = 0;
      }
      v15 = v13 * v5;
      do {
        v16 = *(_DWORD*)(v9 + 4LL * v15);
        v17 = v14 + 1;
        v18 = v14 + 2;
        ++v13;
        v15 += v5;
        v16 += 5260820;
        *(_DWORD*)&v68[4 * v14] = v16;
        v14 += 3;
        *(_DWORD*)&v68[4 * v17] = v16 + 32;
        *(_DWORD*)&v68[4 * v18] = v16 + 16;
      } while (v13 < v7);
      goto LABEL_22;
    }
    if (v7 == 1) {
      v10 = 0;
      v11 = 0;
    }
    else {
      v19 = 0;
      v10 = 0;
      v11 = 0;
      do {
        v10 += 2;
        LANES64(v20).n64_u64[0] =
            LANES64_OF(vld1_dup_f32((const float*)(v9 + 4LL * v19))).n64_u64[0];
        *(int32x2_t*)&v68[4 * v11] =
            vadd_s32(v20, COERCE_AS(int32x2_t, 0x50463400504614LL));
        *(int32x2_t*)&v68[4 * (v11 + 2)] =
            vadd_s32(v20, COERCE_AS(int32x2_t, 0x50461C00504624LL));
        *(int32x2_t*)&v68[4 * (v11 + 4)] =
            vadd_s32(v20, COERCE_AS(int32x2_t, 0x50475000504758LL));
        v21 = v5 + v19;
        v19 += 2 * v5;
        LANES64(v22).n64_u64[0] =
            LANES64_OF(vld1_dup_f32((const float*)(v9 + 4LL * v21))).n64_u64[0];
        v23 = 4LL * (unsigned int)(v11 + 8);
        *(int32x2_t*)&v68[4 * (v11 + 6)] =
            vadd_s32(v22, COERCE_AS(int32x2_t, 0x50463400504614LL));
        v24 = v11 + 10;
        v11 += 12;
        *(int32x2_t*)&v68[v23] =
            vadd_s32(v22, COERCE_AS(int32x2_t, 0x50461C00504624LL));
        *(int32x2_t*)&v68[4 * v24] =
            vadd_s32(v22, COERCE_AS(int32x2_t, 0x50475000504758LL));
      } while ((v7 & 0xFFFFFFFE) != v10);
    }
    if ((v7 & 1) != 0) {
      LANES64(v25).n64_u64[0] =
          LANES64_OF(
              vld1_dup_f32((const float*)(v9 + 4LL * (unsigned int)(v5 * v10))))
              .n64_u64[0];
      *(int32x2_t*)&v68[4 * v11] =
          vadd_s32(v25, COERCE_AS(int32x2_t, 0x50463400504614LL));
      *(int32x2_t*)&v68[4 * (v11 + 2)] =
          vadd_s32(v25, COERCE_AS(int32x2_t, 0x50461C00504624LL));
      *(int32x2_t*)&v68[4 * (v11 + 4)] =
          vadd_s32(v25, COERCE_AS(int32x2_t, 0x50475000504758LL));
    }
  }
LABEL_22:
  CudaDriverRoutine_98340(a1),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  CudaDriverStub_10fdf0(),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v26 == 0) {
    if (*(_BYTE*)(v4 + 3744) != 0) {
      CudaDriverRoutine_9ac20(*(_QWORD*)(a1 + 64)),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (*(_DWORD*)(v4 + 3724) != 0) {
        v27 = 0;
        v28 = 0;
        do {
          if ((_DWORD)v6 != 0) {
            v29 = *(_QWORD*)&v67[8 * v28];
            v30 = 0;
            v31 = *(_QWORD*)&v67[8 * (v28 | 1)];
            v32 = *(_QWORD*)&v67[8 * (v28 + 2)];
            v33 = *(_QWORD*)&v67[8 * (v28 + 3)];
            v34 = *(_QWORD*)&v67[8 * (v28 + 4)];
            v35 = *(_QWORD*)&v67[8 * (v28 + 5)];
            do {
              while (1) {
                if (v30 > 0x3F) {
                  v39 = (unsigned int)v30 <= 0x40 ? 64 - v30 : 0;
                  v36 = v33 >> v30 << v39;
                  v37 = v34 >> v30 << v39;
                  v38 = v35 >> v30 << v39;
                }
                else {
                  v36 = v29 >> v30;
                  v37 = v31 >> v30;
                  v38 = v32 >> v30;
                }
                v40 = v36 & 1;
                v41 = v37 & 1;
                v42 = v38 & 1;
                v43 = ((v30 & 0xFFFFFFFD) + 1) >> 1;
                v44 = &a2[40 * ((v30 & 2) != 0) +
                          40 * *(_DWORD*)(v4 + 3736) * v27];
                v45 = 1LL << v43;
                if ((v30 & 0xFFFFFFFD) <= 0x7E) {
                  break;
                }
                v44[1] = v44[1] & ~v45 | (v40 << v43);
                v44[3] = v44[3] & ~v45 | (v41 << v43);
                v44[7] = v44[7] & ~v45 | (v42 << v43);
                if (v6 == ++v30) {
                  goto LABEL_38;
                }
              }
              *v44 = *v44 & ~v45 | (v40 << v43);
              v44[2] = v44[2] & ~v45 | (v41 << v43);
              v44[6] = v44[6] & ~v45 | (v42 << v43);
              ++v30;
            } while (v6 != v30);
          }
        LABEL_38:
          v46 = *(_DWORD*)(v4 + 3736);
          v47 = v46 * v27++;
          if ((unsigned int)v47 < v46 * v27) {
            v48 = &a2[40 * (unsigned int)v47 + 7];
            do {
              *(v48 - 6) = 0;
              *(v48 - 4) = 0;
              ++v47;
              *v48 = 0;
              v48 += 40;
            } while (v47 < *(_DWORD*)(v4 + 3736) * v27);
          }
          v28 += 6;
        } while (v27 < *(_DWORD*)(v4 + 3724));
      }
    }
    else if (*(_DWORD*)(v4 + 3732) != 0) {
      if ((unsigned int)v6 <= 0x40) {
        v56 = 1;
        v57 = 0;
        do {
          ++v57;
          v58 = *(_QWORD*)&v67[8 * (v56 - 1)];
          a2[2] = *(_QWORD*)&v67[8 * v56];
          *a2 = v58;
          LODWORD(v58) = v56 + 1;
          v56 += 3;
          a2[6] = *(_QWORD*)&v67[8 * (unsigned int)v58];
          a2 += 40;
        } while (v57 < *(unsigned int*)(v4 + 3732));
      }
      else {
        v49 = 0;
        v50 = 0;
        do {
          ++v49;
          v51 = *(_QWORD*)&v67[8 * (v50 + 3)];
          v52 = *(_QWORD*)&v67[8 * (v50 + 1)];
          v53 = *(_QWORD*)&v67[8 * (v50 + 2)];
          *a2 = *(_QWORD*)&v67[8 * v50];
          a2[1] = v51;
          v54 = *(_QWORD*)&v67[8 * (v50 + 4)];
          a2[2] = v52;
          a2[3] = v54;
          LODWORD(v52) = v50 + 5;
          v50 += 6;
          v55 = *(_QWORD*)&v67[8 * (unsigned int)v52];
          a2[6] = v53;
          a2[7] = v55;
          a2 += 40;
        } while (v49 < *(unsigned int*)(v4 + 3732));
      }
    }
  }
}

#pragma GCC visibility pop
