#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5c02d0(_QWORD, _QWORD);
__int64 GameRoutine_5df100(_QWORD, _QWORD);
__int64 GameRoutine_5df110(_QWORD, long double, long double);
__int64 SuperStripeSystem_5d0320(float, __int64, __int64, __int64, __int64,
                                 __int64);
extern __int64* GameData_21364f0[4];
long double nn_vfx_5cfd20(long double result, __int64, __int64, __int64,
                          __int64, __int64);
void nn_vfx_5d0a40(__int64 a1, __int64 a2);

void nn_vfx_5d0a40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  long double v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;
  long double v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  float32x4_t* v19;
  int v20;
  float v21;
  float32x4_t v22;
  float32x4_t* v23;
  int v24;
  float v25;
  float v26;
  __int64 v27;
  __int64 v28;
  float v29;
  float v30;

  v2 = *(_QWORD*)(a2 + 1048);
  v3 = *(_QWORD*)(v2 + 24);
  if (v3 != 0 && *(_BYTE*)(v2 + 16) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(a2 + 568) + 824LL);
    v30 = *(float*)(a2 + 76);
    v6 = GameRoutine_5df100(a2 + 1960, *(unsigned int*)(v2 + 56));
    v8 = v30;
    v9 = v6;
    v10 = 0;
    v11 = GameData_21364f0[0];
    do {
      while (1) {
        v15 = v3;
        v16 = *(_DWORD*)(v3 + 124);
        v17 = *(_DWORD*)(v2 + 32);
        v3 = *(_QWORD*)(v3 + 104);
        v18 = *(_DWORD*)(v15 + 112);
        if (v18 >= 1) {
          v19 = *(float32x4_t**)(v15 + 88);
          v20 = 0;
          v21 = *(float*)(v5 + 52) +
                (float)((float)(1.0 - *(float*)(v5 + 52)) * (float)(1.0 - v30));
          do {
            LANES128(v22).n128_u64[0] = *(_QWORD*)(v5 + 56);
            v19 = (float32x4_t*)LANES128(v19[5]).n128_u64[1];
            ++v20;
            LANES128(v22).n128_u64[1] = *(unsigned int*)(v5 + 64);
            v19[1] = vmulq_n_f32(vaddq_f32(v19[1], vmulq_n_f32(v22, v8)), v21);
            v18 = *(_DWORD*)(v15 + 112);
          } while (v20 < v18);
          if (v18 >= 1) {
            v23 = *(float32x4_t**)(v15 + 88);
            v24 = 0;
            do {
              v23 = (float32x4_t*)LANES128(v23[5]).n128_u64[1];
              ++v24;
              v7 = COERCE_LONG_DOUBLE(vaddq_f32(*v23, vmulq_n_f32(v23[1], v8)));
              *(long double*)v23 = v7;
              v18 = *(_DWORD*)(v15 + 112);
            } while (v24 < v18);
          }
        }
        v25 = *(float*)(a2 + 76) + *(float*)(v15 + 128);
        v26 = *(float*)(v15 + 136);
        *(float*)(v15 + 128) = v25;
        *(float*)(v15 + 136) = v25;
        if (v18 <= 1) {
          break;
        }
        if (floorf(v25) > floorf(v26)) {
          *(_DWORD*)(v15 + 112) = --v18;
        }
        v12 = v9 + 80LL * v17 * v16;
        *(float*)&v7 = (float)(*(_DWORD*)(v15 + 116) - v18);
        v13 = *(_DWORD*)(v5 + 40);
        if (v13 != 0) {
          v6 = SuperStripeSystem_5d0320(*(float*)&v7 * (float)(v13 + 1), v6,
                                        v12, v15, a2, v5);
          v10 = v15;
          v8 = v30;
          if (v3 == 0) {
            goto LABEL_21;
          }
        }
        else {
          v7 = nn_vfx_5cfd20(v7, v6, v12, v15, a2, v5);
          v10 = v15;
          v8 = v30;
          if (v3 == 0) {
            goto LABEL_21;
          }
        }
      }
      if (v10 != 0) {
        *(_QWORD*)(v10 + 104) = v3;
      }
      else {
        *(_QWORD*)(v2 + 24) = v3;
      }
      v27 = *(_QWORD*)(v15 + 80);
      v28 = *v11;
      v29 = *(float*)(*(_QWORD*)(*(_QWORD*)(a2 + 568) + 824LL) + 24LL);
      --*(_DWORD*)(a2 + 2104);
      *(_QWORD*)(a2 + 2096) -=
          (112LL * (unsigned int)v29 + 255) & 0xFFFFFFFF00LL;
      v6 = GameRoutine_5c02d0(v27, 1);
      *(_QWORD*)(v15 + 80) = 0;
      *(_BYTE*)(v15 + 144) = 0;
      --*(_DWORD*)(v28 + 44);
      v8 = v30;
    } while (v3 != 0);
  LABEL_21:
    GameRoutine_5df110(a2 + 1960, v7, v14);
  }
}

#pragma GCC visibility pop
