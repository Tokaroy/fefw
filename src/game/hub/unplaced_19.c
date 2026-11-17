#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82960;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83460;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d310;
__attribute__((swiftcall)) void game_hub_e00100(PSEUDO_X8 x8_,
                                                __int64 unused_int0,
                                                float32x4_t* a1,
                                                float32x4_t* a2, float a4);

__attribute__((swiftcall)) void game_hub_e00100(PSEUDO_X8 x8_,
                                                __int64 unused_int0,
                                                float32x4_t* a1,
                                                float32x4_t* a2, float a4)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  float32x4_t v6;
  int8x16_t v7;
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  int8x16_t v11;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float32x4_t v24;
  float32x4_t* result;
  int8x16_t v26;
  int8x16_t v27;
  float v28;
  bool v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  __int64* v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  float v52;
  int v53;
  unsigned int v54;
  unsigned int v55;
  int v56;
  unsigned int v57;
  __int128 v58;
  __int64 v59;
  __int64 v60;
  int8x16_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  int8x16_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  unsigned __int64 v77;
  float32x4_t v78;
  float32x4_t v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  float32x4_t v82;
  float v83;
  float32x4_t v84;
  float32x4_t v85;
  int8x16_t v86;
  float32x4_t v87;
  float32x4_t v88;
  struct {
    _QWORD v89[10];
    char v90;
  } v89_;

  if (a4 != 0x0.0p+0f) {
    v6 = *a2;
    LANES128(v6).n128_u32[1] = 0;
    v7 = vmulq_f32(v6, v6);
    LANES128(v7).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
            .n64_u64[0];
    LANES128(v7).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
            .n64_u64[0];
    LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
    v8 = vrsqrteq_f32(v7);
    v9 = vmulq_f32(v8, vrsqrtsq_f32(v8, vmulq_f32(v7, v8)));
    v10 = vbicq_s8(
        vmulq_f32(v6, vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v7, v9)))),
        vceqzq_f32(v7));
    v11 = vmulq_f32(v10, v10);
    LANES128(v11).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_u64[0];
    if (!(LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
              .n64_f32[0] <= 0x0.0p+0f)) {
      if (LANES128(v10).n128_f32[2] != 0x0.0p+0f ||
          (v13 = 0x0.0p+0f, LANES128(v10).n128_f32[0] != 0x0.0p+0f)) {
        if (!(LANES128(v10).n128_f32[2] >= 0x0.0p+0f)) {
          if (LANES128(v10).n128_f32[0] >= 0x0.0p+0f) {
            v36 = -LANES128(v10).n128_f32[2];
            v37 = *(float*)GameData_212c2f0;
            v38 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                            (_QWORD)GameData_212c2f0);
            v39 = *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0);
            v40 = *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0 + 8);
            if (LANES128(v10).n128_f32[0] <=
                (float)-LANES128(v10).n128_f32[2]) {
              v44 = LANES128(v10).n128_f32[0] / v36;
              v23 = 0x1.921fb60000000p+1f;
              v45 =
                  v44 * (float)((float)((float)((float)((float)(v40 + (float)((float)((float)((float)(v39 + (float)((float)((float)((float)(v38 + (float)((float)((float)(v37 * (float)(v44 * v44)) - *((float*)GameData_212c2f0 + 1)) * (float)(v44 * v44))) * (float)(v44 * v44)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v44 *
                                                                                                                                                                                                                                                                                                                                                                      v44))) *
                                                                                              (float)(v44 *
                                                                                                      v44)) -
                                                                                      *(float*)((char*)((
                                                                                                    __int128*)0x10LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c2f0 +
                                                                                                4)) *
                                                                              (float)(v44 *
                                                                                      v44))) *
                                                        (float)(v44 * v44)) -
                                                *(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c2f0 +
                                                          12)) *
                                        (float)(v44 * v44)) +
                                0x1.0000000000000p+0f);
            LABEL_24:
              v13 = v23 - v45;
              goto LABEL_26;
            }
            v41 = v36 / LANES128(v10).n128_f32[0];
            v34 = 0x1.921fb60000000p+0f;
            v42 = v41 * (float)((float)((float)((float)((float)(v40 + (float)((float)((float)((float)(v39 + (float)((float)((float)((float)(v38 + (float)((float)((float)(v37 * (float)(v41 * v41)) - *((float*)GameData_212c2f0 + 1)) * (float)(v41 * v41))) * (float)(v41 * v41)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v41 *
                                                                                                                                                                                                                                                                                                                                                                      v41))) *
                                                                                              (float)(v41 *
                                                                                                      v41)) -
                                                                                      *(float*)((char*)((
                                                                                                    __int128*)0x10LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c2f0 +
                                                                                                4)) *
                                                                              (float)(v41 *
                                                                                      v41))) *
                                                        (float)(v41 * v41)) -
                                                *(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c2f0 +
                                                          12)) *
                                        (float)(v41 * v41)) +
                                0x1.0000000000000p+0f);
          LABEL_23:
            v13 = v42 + v34;
            goto LABEL_26;
          }
          v14 = *(float*)GameData_212c2f0;
          v15 = -*((float*)GameData_212c2f0 + 1);
          v16 =
              *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
          v17 = -*(float*)((char*)((_UNKNOWN**)0x8LL) +
                           (_QWORD)GameData_212c2f0 + 4);
          v18 =
              *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
          v19 = -*(float*)((char*)((__int128*)0x10LL) +
                           (_QWORD)GameData_212c2f0 + 4);
          v20 = *(float*)((char*)((__int128*)0x10LL) +
                          (_QWORD)GameData_212c2f0 + 8);
          v21 = -*(float*)((char*)((__int128*)0x10LL) +
                           (_QWORD)GameData_212c2f0 + 12);
          if (!(LANES128(v10).n128_f32[2] <= LANES128(v10).n128_f32[0])) {
            v22 = LANES128(v10).n128_f32[2] / LANES128(v10).n128_f32[0];
            v23 = -0x1.921fb60000000p+0f;
          LABEL_20:
            v45 =
                v22 *
                (float)((float)((float)(v21 +
                                        (float)((float)(v20 +
                                                        (float)((float)(v19 +
                                                                        (float)((float)(v18 +
                                                                                        (float)((float)(v17 +
                                                                                                        (float)((float)(v16 +
                                                                                                                        (float)((float)(v15 +
                                                                                                                                        (float)(v14 *
                                                                                                                                                (float)(v22 *
                                                                                                                                                        v22))) *
                                                                                                                                (float)(v22 *
                                                                                                                                        v22))) *
                                                                                                                (float)(v22 *
                                                                                                                        v22))) *
                                                                                                (float)(v22 *
                                                                                                        v22))) *
                                                                                (float)(v22 *
                                                                                        v22))) *
                                                                (float)(v22 *
                                                                        v22))) *
                                                (float)(v22 * v22))) *
                                (float)(v22 * v22)) +
                        0x1.0000000000000p+0f);
            goto LABEL_24;
          }
          v33 = LANES128(v10).n128_f32[0] / LANES128(v10).n128_f32[2];
          v34 = -0x1.921fb60000000p+1f;
          v35 =
              (float)((
                          float)((float)((float)(v20 +
                                                 (float)((float)((float)((float)(v18 + (float)((
                                                                                                   float)((
                                                                                                              float)((float)(v16 + (float)((float)((float)(v14 * (float)(v33 * v33)) - *((float*)GameData_212c2f0 + 1)) * (float)(v33 *
                                                                                                                                                                                                                                  v33))) *
                                                                                                                     (float)(v33 *
                                                                                                                             v33)) -
                                                                                                          *(float*)((char*)((
                                                                                                                        _UNKNOWN**)0x8LL) +
                                                                                                                    (_QWORD)
                                                                                                                        GameData_212c2f0 +
                                                                                                                    4)) *
                                                                                               (float)(v33 *
                                                                                                       v33))) *
                                                                         (float)(v33 *
                                                                                 v33)) -
                                                                 *(float*)((char*)((
                                                                               __int128*)0x10LL) +
                                                                           (_QWORD)
                                                                               GameData_212c2f0 +
                                                                           4)) *
                                                         (float)(v33 * v33))) *
                                         (float)(v33 * v33)) -
                                 *(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c2f0 + 12)) *
                      (float)(v33 * v33)) +
              0x1.0000000000000p+0f;
        LABEL_22:
          v42 = v33 * v35;
          goto LABEL_23;
        }
        if (!(LANES128(v10).n128_f32[0] >= 0x0.0p+0f)) {
          v28 = -LANES128(v10).n128_f32[0];
          v29 = LANES128(v10).n128_f32[2] < (float)-LANES128(v10).n128_f32[0];
          v30 = *(float*)GameData_212c2f0;
          v31 =
              *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
          v32 =
              *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
          LANES128(v10).n128_u32[0] = *(_DWORD*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c2f0 + 8);
          if (!v29) {
            v43 = v28 / LANES128(v10).n128_f32[2];
            v13 = -(
                float)(v43 * (float)((
                                         float)((float)((float)((float)(LANES128(
                                                                            v10)
                                                                            .n128_f32
                                                                                [0] +
                                                                        (float)((float)((float)((float)(v32 + (float)((float)((float)((float)(v31 + (float)((float)((float)(v30 * (float)(v43 * v43)) - *((float*)GameData_212c2f0 + 1)) * (float)(v43 * v43))) * (float)(v43 * v43)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v43 *
                                                                                                                                                                                                                                                                                                                                                                        v43))) *
                                                                                                (float)(v43 *
                                                                                                        v43)) -
                                                                                        *(float*)((char*)((
                                                                                                      __int128*)0x10LL) +
                                                                                                  (_QWORD)
                                                                                                      GameData_212c2f0 +
                                                                                                  4)) *
                                                                                (float)(v43 *
                                                                                        v43))) *
                                                                (float)(v43 *
                                                                        v43)) -
                                                        *(float*)((char*)((
                                                                      __int128*)0x10LL) +
                                                                  (_QWORD)
                                                                      GameData_212c2f0 +
                                                                  12)) *
                                                (float)(v43 * v43)) +
                                     0x1.0000000000000p+0f));
            goto LABEL_26;
          }
          v33 = LANES128(v10).n128_f32[2] / v28;
          v34 = -0x1.921fb60000000p+0f;
          v35 =
              (float)((
                          float)((float)((float)(LANES128(v10).n128_f32[0] +
                                                 (float)((float)((float)((float)(v32 + (float)((
                                                                                                   float)((
                                                                                                              float)((float)(v31 + (float)((float)((float)(v30 * (float)(v33 * v33)) - *((float*)GameData_212c2f0 + 1)) * (float)(v33 *
                                                                                                                                                                                                                                  v33))) *
                                                                                                                     (float)(v33 *
                                                                                                                             v33)) -
                                                                                                          *(float*)((char*)((
                                                                                                                        _UNKNOWN**)0x8LL) +
                                                                                                                    (_QWORD)
                                                                                                                        GameData_212c2f0 +
                                                                                                                    4)) *
                                                                                               (float)(v33 *
                                                                                                       v33))) *
                                                                         (float)(v33 *
                                                                                 v33)) -
                                                                 *(float*)((char*)((
                                                                               __int128*)0x10LL) +
                                                                           (_QWORD)
                                                                               GameData_212c2f0 +
                                                                           4)) *
                                                         (float)(v33 * v33))) *
                                         (float)(v33 * v33)) -
                                 *(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c2f0 + 12)) *
                      (float)(v33 * v33)) +
              0x1.0000000000000p+0f;
          goto LABEL_22;
        }
        v14 = *(float*)GameData_212c2f0;
        v15 = -*((float*)GameData_212c2f0 + 1);
        v16 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v17 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                         4);
        v18 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v19 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                         4);
        v20 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        v21 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                         12);
        if (!(LANES128(v10).n128_f32[2] >= LANES128(v10).n128_f32[0])) {
          v22 = LANES128(v10).n128_f32[2] / LANES128(v10).n128_f32[0];
          v23 = 0x1.921fb60000000p+0f;
          goto LABEL_20;
        }
        v46 = LANES128(v10).n128_f32[0] / LANES128(v10).n128_f32[2];
        v13 =
            v46 * (float)((
                              float)((
                                         float)((float)((float)(v20 + (float)((float)((float)((float)(v18 + (float)((float)((float)((float)(v16 + (float)((float)((float)(v14 * (float)(v46 * v46)) - *((float*)GameData_212c2f0 + 1)) * (float)(v46 * v46))) * (float)(v46 * v46)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v46 *
                                                                                                                                                                                                                                                                                                                                                                      v46))) *
                                                                                              (float)(v46 *
                                                                                                      v46)) -
                                                                                      *(float*)((char*)((
                                                                                                    __int128*)0x10LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c2f0 +
                                                                                                4)) *
                                                                              (float)(v46 *
                                                                                      v46))) *
                                                        (float)(v46 * v46)) -
                                                *(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c2f0 +
                                                          12)) *
                                     (float)(v46 * v46)) +
                          0x1.0000000000000p+0f);
      }
    LABEL_26:
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v47 = game_map_MapRandom_instance__ptr[0];
      v48 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v49 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v50 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v47 + 1) = v48;
      v51 = (v50 >> 8) ^ (v49 >> 19) ^ v50 ^ v49;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47) = v49;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47 + 4) = v51;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v52 = v13 + (float)((float)((float)((float)((float)(unsigned __int16)v51 /
                                                  0x1.fffe000000000p+15f) +
                                          (float)((float)(unsigned __int16)v51 /
                                                  0x1.fffe000000000p+15f)) +
                                  -0x1.0000000000000p+0f) *
                          0x1.41b2f80000000p-3f);
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v53 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47);
      v54 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47 + 4);
      v55 = *(_DWORD*)v47 ^ (*(_DWORD*)v47 << 11);
      *(_DWORD*)v47 = *((_DWORD*)v47 + 1);
      *((_DWORD*)v47 + 1) = v53;
      v56 = (v55 >> 8) ^ (v54 >> 19) ^ v55 ^ v54;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47) = v54;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v47 + 4) = v56;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v57 = 0;
      v83 =
          (float)(PSEUDO_UNFUSED(a4 * 0x1.8000000000000p-1f)) +
          (float)(fminf(fmaxf((float)(unsigned __int16)v56 /
                                  0x1.fffe000000000p+15f,
                              0x0.0p+0f),
                        0x1.0000000000000p+0f) *
                  (float)(a4 -
                          (float)(PSEUDO_UNFUSED(a4 * 0x1.8000000000000p-1f))));
      *(int8x8_t*)&v58 = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                   COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL));
      *((_QWORD*)&v58 + 1) = v58;
      v82 = COERCE_AS(float32x4_t, v58);
      *(int8x8_t*)&v58 = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL));
      v81 = v58;
      *((int8x8_t*)&v58 + 1) =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                    COERCE_AS(int8x8_t, 0xB0A090807060504LL));
      v79 = COERCE_AS(float32x4_t, v58);
      v80 = *((_QWORD*)&v58 + 1);
      v59 = GameData_212d310;
      while (1) {
        math_Quat_FromYawPitchRoll(
            (void*)(&v86),
            v52 + (float)(PSEUDO_UNFUSED(
                      (float)((float)(PSEUDO_UNFUSED((float)v57 *
                                                     0x1.921fb60000000p+1f)) +
                              (float)(PSEUDO_UNFUSED((float)v57 *
                                                     0x1.921fb60000000p+1f))) *
                      0x1.0000000000000p-3f)),
            0x0.0p+0f, 0x0.0p+0f);
        if (*(_QWORD*)v59 != 0 && *(_DWORD*)(*(_QWORD*)v59 + 8LL) == 1) {
          v60 = 2048;
        }
        else {
          v60 = 0x11000000000000LL;
        }
        v61 = vmulq_f32(v86, COERCE_AS(float32x4_t, GameData_1a829d0));
        LANES128(v62).n128_u64[0] = LANES128(v86).n128_u64[0];
        LANES128(v63).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v63).n128_u64[1] = v81;
        LANES128(v64).n128_u64[0] = 0;
        *(int8x8_t*)&LANES128(v64).n128_i8[8] =
            vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v65 = vmulq_f32(v64, v63);
        LANES128(v64).n128_u64[0] = v80;
        v66 = vmlaq_f32(vmulq_f32(v61, v82),
                        COERCE_AS(float32x4_t, GameData_1a83800), v65);
        LANES128(v65).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v64).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v61).n128_u64[0]), 1);
        v67 = vmlaq_f32(v66, COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v64, v65));
        LANES128(v65).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v65).n128_i8[8] =
            vqtbl1_s8(v61, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v68 = vmlsq_f32(v67, v65, v79);
        LANES128(v61).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v65).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v69).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v61).n128_u64[1] = LANES128(v61).n128_u64[0];
        LANES128(v62).n128_u64[1] = LANES128(v65).n128_u64[0];
        *(int8x8_t*)&LANES128(v69).n128_i8[8] =
            vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v64).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v70 = vmlaq_f32(vmulq_f32(v61, v68),
                        COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v62, v69));
        LANES128(v69).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v64).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v68).n128_u64[0]), 1);
        LANES128(v65).n128_u64[1] = LANES128(v69).n128_u64[0];
        LANES128(v69).n128_u64[1] = LANES128(v86).n128_u64[0];
        LANES128(v71).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v71).n128_i8[8] =
            vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v72 = vmlsq_f32(vmlaq_f32(v70, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v69, v64)),
                        v71, v65);
        LANES128(v72).n128_u32[3] = 0;
        v73 = vmulq_f32(v72, v72);
        LANES128(v73).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v73, v73, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
                .n64_u64[0];
        LANES128(v73).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
                .n64_u64[0];
        LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
        v74 = vrsqrteq_f32(v73);
        v75 = vmulq_f32(v74, vrsqrtsq_f32(v74, vmulq_f32(v73, v74)));
        v76 = vaddq_f32(
            *a1,
            vmulq_n_f32(
                vbicq_s8(
                    vmulq_f32(
                        vmulq_f32(v75, vrsqrtsq_f32(v75, vmulq_f32(v73, v75))),
                        v72),
                    vceqzq_f32(v73)),
                v83));
        v88 = vaddq_f32(*a1, COERCE_AS(float32x4_t, GameData_1a83460));
        v84 = v76;
        v87 = vaddq_f32(v76, COERCE_AS(float32x4_t, GameData_1a83460));
        result =
            X8CALL_X0(float32x4_t*, collision_670c60((void*)((__int64)v89_.v89),
                                                     &v88, &v87, v60));
        if ((v89_.v90 & 1) == 0) {
          v78 = vaddq_f32(v84, COERCE_AS(float32x4_t, GameData_1a83610));
          v88 = v78;
          v85 = vaddq_f32(v84, COERCE_AS(float32x4_t, GameData_1a82960));
          v87 = v85;
          result = X8CALL_X0(
              float32x4_t*,
              collision_670c60((void*)((__int64)v89_.v89), &v88, &v87, v60));
          if ((v89_.v90 & 1) == 0) {
            v88 = v78;
            v87 = v85;
            result = X8CALL_X0(
                float32x4_t*,
                collision_670c60((void*)((__int64)v89_.v89), &v88, &v87, 1));
            if ((v89_.v90 & 1) != 0) {
              goto LABEL_10;
            }
          }
        }
        if (++v57 == 8) {
          goto LABEL_36;
        }
      }
    }
  }
  v24 = *a1;
  v88 = vaddq_f32(*a1, COERCE_AS(float32x4_t, GameData_1a83610));
  v87 = vaddq_f32(v24, COERCE_AS(float32x4_t, GameData_1a82960));
  result = X8CALL_X0(float32x4_t*, collision_670c60((void*)((__int64)v89_.v89),
                                                    &v88, &v87, 1));
  if (v89_.v90 == 1) {
  LABEL_10:
    v26 = *(int8x16_t*)v89_.v89;
    *(_WORD*)(a3 + 13) = 0;
    *(_BYTE*)a3 = LANES128(v26).n128_u8[0];
    LANES128(v26).n128_u32[3] = 0;
    v27 = vextq_s8(v26, v26, 1u);
    *(_BYTE*)(a3 + 15) = 0;
    *(_QWORD*)(a3 + 1) = LANES128(v27).n128_u64[0];
    *(_DWORD*)(a3 + 9) = LANES128(v27).n128_u32[2];
    {
      result;
      return;
    }
  }
LABEL_36:
  v77 = LANES128(*(a1)).n128_u64[1];
  *(_QWORD*)a3 = LANES128(*(a1)).n128_u64[0];
  *(_QWORD*)(a3 + 8) = v77;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
