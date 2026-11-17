#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 GameRoutine_c62110(__int64, __int128*, __n128 result);
extern __int64 GameData_212c638;
float GrassInteractionModule_Unknown6(float32x4_t* a1, long double a2);
__int64 GameRoutine_c62110_alt1(__int64 result, __int128*, float);

float GrassInteractionModule_Unknown6(float32x4_t* a1, long double a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  unsigned __int64 v10;
  int v11;
  __int128 v12;
  float32x4_t* v13;
  __int128 v14;
  float v15;
  float32x4_t v16;
  __int128 v17;
  float32x4_t v18;
  int8x16_t v19;
  float32x4_t v21;
  float32x4_t v22;

  v5 = LANES128(a1[3]).n128_u64[0];
  v4 = LANES128(a1[3]).n128_u64[1];
  v6 = LANES128(a1[4]).n128_u64[0];
  if (v5 != 0 & v4 != 0 && v6 != 0) {
    v9 = LANES128(*(a1)).n128_u64[1];
    if (*(_BYTE*)(v9 + 289) == 1 && (*(_BYTE*)(v9 + 288) & 1) != 0 &&
        (*(_BYTE*)(v9 + 300) & 0xFD) != 1) {
      v10 = LANES128(*(a1)).n128_u64[1];
      while (1) {
        v10 = *(_QWORD*)(v10 + 736);
        if (v10 == 0) {
          break;
        }
        if (*(_BYTE*)(v10 + 289) != 1 || *(_BYTE*)(v10 + 288) != 1 ||
            (*(_BYTE*)(v10 + 300) & 0xFD) == 1) {
          return *(float*)&a2;
        }
      }
      v11 = LANES128(a1[1]).n128_u8[5];
      v22 = (__typeof__(v22)){0};
      if (v11 == 1) {
        v12 = *(_OWORD*)(v5 + 48);
        v13 = a1;
        LANES128(v22).n128_u64[0] = *(_QWORD*)(v5 + 48);
        *(_QWORD*)&v14 = LANES128(v22).n128_u64[0];
        *((_QWORD*)&v14 + 1) = DWORD2(v12);
        v15 = *(float*)(v4 + 52);
        v22 = COERCE_AS(float32x4_t, v14);
        if (*(float*)(v6 + 52) < v15) {
          v15 = *(float*)(v6 + 52);
        }
        LANES128(v22).n128_f32[1] = v15 + -0x1.99999a0000000p-4f;
        GameRoutine_c62110_alt1(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                            GameData_212c638 +
                                                        32LL) -
                                             8LL) +
                                  40LL) +
                       480LL),
            (__int128*)&v22,
            *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                      GameData_212c638 +
                                                                  32LL) -
                                                       8LL) +
                                            40LL) +
                                 480LL) +
                      164LL));
        v16 = v22;
      }
      else {
        v17 = *(_OWORD*)(v9 + 304);
        LANES128(v22).n128_u64[0] = *(_QWORD*)(v9 + 304);
        LANES128(v16).n128_u64[0] = LANES128(v22).n128_u64[0];
        LANES128(v16).n128_u64[1] = DWORD2(v17);
        v18 = vsubq_f32(v16, a1[2]);
        v22 = v16;
        v19 = vmulq_f32(v18, v18);
        LANES128(v19).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                .n64_f32[0] <= 0x1.a36e2e0000000p-14f) {
        LABEL_24:
          LANES128(a1[2]).n128_u64[0] = LANES128(v16).n128_u64[0];
          a2 = *(long double*)&a1[2];
          *((_QWORD*)&a2 + 1) = LANES128(v16).n128_u32[2];
          *(long double*)&a1[2] = a2;
          return *(float*)&a2;
        }
        v13 = a1;
        v21 = v16;
        GameRoutine_c62110_alt1(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                            GameData_212c638 +
                                                        32LL) -
                                             8LL) +
                                  40LL) +
                       480LL),
            (__int128*)&v22,
            *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                      GameData_212c638 +
                                                                  32LL) -
                                                       8LL) +
                                            40LL) +
                                 480LL) +
                      164LL));
        v16 = v21;
      }
      a1 = v13;
      goto LABEL_24;
    }
  }
  return *(float*)&a2;
}

#pragma GCC visibility pop
