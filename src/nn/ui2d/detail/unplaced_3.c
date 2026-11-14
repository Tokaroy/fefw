#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0a820(double);
extern _UNKNOWN* GameData_2135448;
__int64 nn_ui2d_detail_5aa5a0(__int64 a1, __int64 a2, _DWORD** a3, __int64 a4,
                              __int64* a5, float32x2_t* a6, char a7);

__int64 nn_ui2d_detail_5aa5a0(__int64 a1, __int64 a2, _DWORD** a3, __int64 a4,
                              __int64* a5, float32x2_t* a6, char a7)
{
  int v12;
  int v13;
  float v14;
  int v15;
  float32x2_t v16;
  float32x2_t v17;
  __int64 result;
  float v19;
  float32x2_t v20;
  int v21;
  char* v22;
  float v23;
  unsigned __int64 v24;
  float v25;
  float* v26;
  float v27;
  float v28;
  __int64 v29;
  int v30;

  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w"));
  *(*a3)++ = *(_DWORD*)(a1 + 232) - 1;
  v12 = *(_DWORD*)(a1 + 232);
  ++*(_DWORD*)(a1 + 236);
  *(*a3)++ = v12;
  v13 = *(_DWORD*)(a1 + 232);
  ++*(_DWORD*)(a1 + 236);
  v14 = *(float*)a4;
  v15 = *(_DWORD*)(a4 + 4);
  **(_DWORD**)a2 = *a5;
  *(_DWORD*)(*(_QWORD*)a2 + 4LL) = *((_DWORD*)a5 + 1);
  *(_QWORD*)a2 += 8LL;
  ++*(_DWORD*)(a1 + 232);
  PSEUDO_LOW_LANE64(v16, n64_u64, LANES64(*(a6)).n64_u64[0]);
  LANES64(v17).n64_u64[0] =
      LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, LANES64(*(a6)).n64_u64[0]),
                          COERCE_AS(float32x2_t, 1065353216LL)))
          .n64_u64[0];
  result = GameRoutine_1a0a820(LANES64_OF(vpadd_f32(v17, v17)).n64_f64[0]),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((v15 & 0x80000000) == 0) {
    LANES64(v20).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(v16, COERCE_AS(float32x2_t,
                                                    0x3F80000000000000LL)),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    v21 = v15 + 1;
    v22 = (char*)GameData_2135448;
    if (LANES64_OF(vpadd_f32(v20, v20)).n64_f32[0] < 0x0.0p+0f) {
      v19 = (float)(0x1.921fb60000000p+1f - v19) + 0x1.921fb60000000p+1f;
    }
    do {
      v23 = v19 * 0x1.45f3060000000p+29f;
      v19 = (float)(0x1.921fb60000000p+1f / (float)v15) + v19;
      --v21;
      v24 = (unsigned __int64)(__int64)v23 >> 24;
      v25 = vcvts_n_f32_u32((__int64)v23 & 0xFFFFFF, 0x18u);
      v26 = (float*)&v22[16 * (unsigned __int8)v24];
      v27 = v26[1] + (float)(v26[3] * v25);
      v28 = *v26 + (float)(v26[2] * v25);
      v29 = *a5;
      *(*a3)++ = v13;
      LODWORD(v24) = *(_DWORD*)(a1 + 232);
      ++*(_DWORD*)(a1 + 236);
      *(*a3)++ = v24;
      ++*(_DWORD*)(a1 + 236);
      **(float**)a2 = *(float*)&v29 + (float)(v28 * v14);
      *(float*)(*(_QWORD*)a2 + 4LL) = *((float*)&v29 + 1) - (float)(v27 * v14);
      *(_QWORD*)a2 += 8LL;
      ++*(_DWORD*)(a1 + 232);
    } while (v21 != 0);
  }
  if ((a7 & 1) != 0) {
    *(*a3)++ = *(_DWORD*)(a1 + 232) - 1;
    v30 = *(_DWORD*)(a1 + 232);
    ++*(_DWORD*)(a1 + 236);
    *(*a3)++ = v30;
    ++*(_DWORD*)(a1 + 236);
  }
  return result;
}

#pragma GCC visibility pop
