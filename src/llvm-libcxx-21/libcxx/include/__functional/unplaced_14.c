#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool nn_g3d_5eb5c0(__int64, float32x4_t*);
extern __int64* GameData_212f878;
extern __int64 GameData_212d020[5];
bool llvm_libcxx_21_libcxx_include___functional_f52c40(__int64 a1,
                                                       float32x4_t** a2);

bool llvm_libcxx_21_libcxx_include___functional_f52c40(__int64 a1,
                                                       float32x4_t** a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  float32x4_t* v4;
  _BOOL8 result;
  float32x4_t* v7;
  float32x4_t* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  bool v28;
  float32x4_t v29;
  float32x4_t v30;
  float v31;
  float32x4_t v32;
  float32x4_t v33;
  struct {
    float32x4_t v34;
    unsigned __int32 v35;
  } v34_;

  v3 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v34_.v34 = vaddq_f32((*a2)[9], *(float32x4_t*)(*(_QWORD*)(v3 + 16) +
                                                 112LL * (_QWORD)a2[1] + 80));
  v34_.v35 = LANES128(v4[10]).n128_u32[1];
  result = nn_g3d_5eb5c0(v2, &v34_.v34);
  *((_BYTE*)a2 + 24) = !result;
  if (result) {
    v8 = *a2;
    v7 = a2[1];
    v9 = *(_QWORD*)(v3 + 16) + 112LL * (_QWORD)v7;
    a2[2] = nullptr;
    v10 = 16 * vcvtas_u64_f32(
                   fabsf(LANES128(v8[10]).n128_f32[0] + 0x1.9000000000000p+6f) *
                   0x1.4000000000000p+3f);
    a2[2] = (float32x4_t*)v10;
    if ((*(_BYTE*)(v9 + 96) & 1) == 0) {
      v10 += 150LL;
      a2[2] = (float32x4_t*)v10;
    }
    a2[2] = (float32x4_t*)(*(int*)(v9 + 68) + 16 * v10);
    v11 = *(_QWORD*)(v3 + 16);
    v12 = v11 + 112LL * (_QWORD)v7;
    v13 = *(_DWORD*)(v12 + 72);
    v14 = GameData_212f878;
    v15 = GameData_212d020[0];
    if (v13 == 0) {
      goto LABEL_16;
    }
    if (*GameData_212f878 != 0) {
      v16 = 1456;
      if ((unsigned int)(v13 - 2) < 3) {
        v16 = 4LL * (unsigned int)(v13 - 2) + 1460;
      }
      v17 = *(float*)(*GameData_212f878 + v16);
    }
    else {
      v17 = 0x1.0000000000000p+0f;
    }
    v18 = *(float*)(*(_QWORD*)GameData_212d020[0] + 4404LL);
    if (v17 < v18 & v18 > 0x0.0p+0f) {
      v17 = *(float*)(*(_QWORD*)GameData_212d020[0] + 4404LL);
    }
    if (fabsf(*(float*)(v12 + 44) * (float)(LANES128(v8[13]).n128_f32[3] *
                                            v17)) < 0x1.0000000000000p-23f) {
    LABEL_16:
      *((_DWORD*)a2 + 7) = -1;
      v11 = *(_QWORD*)(v3 + 16);
      v13 = *(_DWORD*)(v11 + 112LL * (_QWORD)v7 + 72);
    }
    if (v13 == 0) {
      goto LABEL_35;
    }
    v20 = *v14;
    if (v20 != 0) {
      v21 = v13 - 2;
      v22 = 4LL * v21;
      v23 = v21 >= 3;
      v24 = 1456;
      v25 = v22 + 1460;
      if (!v23) {
        v24 = v25;
      }
      v26 = *(float*)(v20 + v24);
    }
    else {
      v26 = 0x1.0000000000000p+0f;
    }
    v27 = *(float*)(*(_QWORD*)v15 + 4404LL);
    v28 = v26 >= v27 | v27 <= 0x0.0p+0f;
    v29 = *(float32x4_t*)(v11 + 112LL * (_QWORD)v7 + 48);
    if (!v28) {
      v26 = *(float*)(*(_QWORD*)v15 + 4404LL);
    }
    v30 = v8[13];
    if (fabsf(vmuls_lane_f32(vmuls_lane_f32(v26, v30, 3), v29, 3)) <
            0x1.0000000000000p-23f ||
        (!(LODWORD(v31) =
               DWORDn(*(_OWORD*)&v8[13], sizeof(*(_OWORD*)&v8[13]) / 4 - 1),
           v32 = vmulq_f32(v30, v29), LANES128(v32).n128_f32[0] < 0x0.0p+0f)) &&
            !(LANES128(v32).n128_f32[0] > 0x0.0p+0f) &&
            !(LANES128(v32).n128_f32[1] < 0x0.0p+0f) &&
            !(LANES128(v32).n128_f32[1] > 0x0.0p+0f) &&
            !(LANES128(v32).n128_f32[2] < 0x0.0p+0f) &&
            !(LANES128(v32).n128_f32[2] > 0x0.0p+0f)) {
    LABEL_35:
      *((_DWORD*)a2 + 8) = -1;
      v31 = LANES128(v8[13]).n128_f32[3];
      v11 = *(_QWORD*)(v3 + 16);
    }
    if (fabsf(v31 * *(float*)(v11 + 112LL * (_QWORD)v7 + 44)) <
        0x1.0000000000000p-23f) {
      *((_DWORD*)a2 + 9) = -1;
      v11 = *(_QWORD*)(v3 + 16);
    }
    v33 = vmulq_f32(v8[13], *(float32x4_t*)(v11 + 112LL * (_QWORD)v7 + 48));
    if (fabsf(LANES128(v33).n128_f32[3]) < 0x1.0000000000000p-23f ||
        !(LANES128(v33).n128_f32[0] < 0x0.0p+0f) &&
            !(LANES128(v33).n128_f32[0] > 0x0.0p+0f) &&
            !(LANES128(v33).n128_f32[1] < 0x0.0p+0f) &&
            !(LANES128(v33).n128_f32[1] > 0x0.0p+0f) &&
            !(LANES128(v33).n128_f32[2] < 0x0.0p+0f) &&
            !(LANES128(v33).n128_f32[2] > 0x0.0p+0f)) {
      *((_DWORD*)a2 + 10) = -1;
    }
  }
  return result;
}

#pragma GCC visibility pop
