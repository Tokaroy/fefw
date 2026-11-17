#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a837f0;
float GameRoutine_1a0a550(float, float);
float nn_g3d_5f7910(int8x16_t* result, unsigned int, float32x4_t, float);
void nn_g3d_5f2520(__int64* a1, __int64 a2, float a3);

void nn_g3d_5f2520(__int64* a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  unsigned __int32 v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  float32x4_t* v18;
  float32x4_t v19;
  unsigned __int32 v20;
  float32x4_t v21;
  float v22;
  float v23;
  float32x4_t v24;
  float v25;
  float v26;

  if (*(_WORD*)(a2 + 100) != 0) {
    v3 = a3;
    v4 = *(_QWORD*)(a2 + 72);
    v5 = *a1;
    v8 = 0;
    v9 = 0;
    v10 = 48LL * *(unsigned __int16*)(a2 + 100);
    LANES128(v11).n128_u64[1] = 1065353216;
    do {
      if ((*(_DWORD*)(*(_QWORD*)(a2 + 88) + v8) & 0x80000000) == 0) {
        v16 = *(_DWORD*)(*(_QWORD*)(a2 + 88) + v8) & 0x7FFF;
        if (v16 != 0x7FFF) {
          v17 = v4 + v9;
          LANES128(v11).n128_u64[0] = *(_QWORD*)(v4 + v9 + 32);
          v18 = (float32x4_t*)(v5 + 80LL * v16);
          nn_g3d_5f7910(v18, *(_DWORD*)(v4 + v9 + 40), v11, v3);
          if ((*((_BYTE*)a1 + 12) & 1) != 0) {
            v26 = GameRoutine_1a0a550(*(float*)(v17 + 4), a3);
            v25 = GameRoutine_1a0a550(*(float*)(v17 + 8), a3);
            v22 = GameRoutine_1a0a550(*(float*)(v17 + 12), a3);
            v23 = LANES128(v18[4]).n128_f32[1];
            v24 = COERCE_AS(float32x4_t, GameData_1a837f0);
            if (fabsf(v23) >= 0x1.0624de0000000p-10f) {
              v24 = *v18;
            }
            LANES128(v12).n128_u64[0] = __PAIR64__(LODWORD(v25), LODWORD(v26));
            v3 = a3;
            LANES128(v12).n128_u64[1] = LODWORD(v22);
            *v18 = vmulq_f32(v12, v24);
            LANES128(v13).n128_u64[0] = *(_QWORD*)(v4 + v9 + 16);
            v14 = LANES128(v18[4]).n128_u32[0];
            LANES128(v13).n128_u64[1] = *(unsigned int*)(v4 + v9 + 24);
            v11 = vaddq_f32(v18[1], vmulq_n_f32(v13, a3));
            v18[1] = v11;
            v15 = *(_DWORD*)(v4 + v9);
            LANES128(v18[4]).n128_f32[1] = a3 + v23;
            LANES128(v18[4]).n128_u32[0] = v14 | ~v15;
          }
          else {
            LANES128(v19).n128_u64[0] = *(_QWORD*)(v17 + 4);
            v20 = LANES128(v18[4]).n128_u32[0];
            LANES128(v19).n128_u64[1] = *(unsigned int*)(v17 + 12);
            v21 = v18[1];
            *v18 = vaddq_f32(*v18, vmulq_n_f32(v19, a3));
            LANES128(v19).n128_u64[0] = *(_QWORD*)(v17 + 16);
            LANES128(v19).n128_u64[1] = *(unsigned int*)(v17 + 24);
            v3 = a3;
            v11 = vaddq_f32(v21, vmulq_n_f32(v19, a3));
            v18[1] = v11;
            LANES128(v11).n128_f32[0] = a3 + LANES128(v18[4]).n128_f32[1];
            LANES128(v18[4]).n128_u32[0] = v20 | ~*(_DWORD*)v17;
            LANES128(v18[4]).n128_u32[1] = LANES128(v11).n128_u32[0];
          }
        }
      }
      v9 += 48;
      v8 += 4;
    } while (v10 != v9);
  }
}

#pragma GCC visibility pop
