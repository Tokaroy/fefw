#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* TumbleHorse_Unknown5(__int64, long double, long double, long double);
__attribute__((swiftcall)) void GameRoutine_15b7080(PSEUDO_X8, __int64*,
                                                    __int64);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD);
__attribute__((swiftcall)) void game_1603b10(PSEUDO_X8,
                                             unsigned __int64 result);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 EmitterSet_5b66c0(_QWORD, _QWORD);
__int64 GameRoutine_10bc1a0(__int64, long double, long double, long double,
                            long double, double);
__int64 GameRoutine_14a5020(_QWORD, _QWORD);
__int64 GameRoutine_156ddc0(unsigned int, __int64);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a550();
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 __cxa_guard_acquire(_QWORD, long double, long double, long double,
                            long double);
__int64 __cxa_guard_acquire_alt1(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 eft_EmitterSetHandle_Get_5b6700(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_templates_14a51c0(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 wld_a78840(__int64 result, __int64, __int64, int);
__n128 KeyIcon_17aa380(__int64, __int64, unsigned int);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern __int64 GameData_21f8020;
extern __int64 GameData_224b6b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void Registration_a5aca0(__int64);
void __attribute__((noreturn)) GameRoutine_14a3c30(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void game_156c5d0(__int64, __int64, char, __n128);
int8x8_t* game_d39b90(int8x8_t* result, _QWORD* a2, float a3);
_QWORD* game_10bce10(__int64 a1, long double a2, long double a3, long double a4,
                     long double a5, double a6);
__int64 game_14a3260(__int64 result, char a2);
__n128 game_159da00(__int64** a1, unsigned int a2, unsigned int a3,
                    long double a4);

int8x8_t* game_d39b90(int8x8_t* result, _QWORD* a2, float a3)
{
  int8x8_t* v4;
  float v5;
  float v6;
  char v7;
  float v8;
  float32x2_t v9;
  float32x2_t v10;
  float v11;
  float v12;
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
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  bool v32;
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
  float v47;
  float v48;
  float v49;
  float v50;
  int8x8_t v51;
  float v52;
  int8x8_t v53;

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = result;
  v5 = (float)((float)(-0x1.d6e1480000000p+4f * COERCE_FLOAT(*a2)) *
               COERCE_FLOAT(*a2)) /
       (float)(a3 * (float)(a3 + a3));
  v6 = COERCE_FLOAT(*a2) / v5;
  if ((float)((float)((float)-(float)(v5 - COERCE_FLOAT(HIDWORD(*a2))) / v5) +
              (float)((float)(v6 * v6) * 0x1.0000000000000p-2f)) < 0x0.0p+0f) {
    v7 = 0;
    LANES64(*(result)).n64_u8[0] = 0;
    goto LABEL_34;
  }
  result = (int8x8_t*)GameRoutine_1a0a550(),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  v11 = v8 - (float)(v6 * 0x1.0000000000000p-1f);
  if (v11 >= 0x0.0p+0f) {
    if (v11 > 0x1.0000000000000p+0f) {
      v22 = 0x1.0000000000000p+0f / v11;
      v13 = *(float*)GameData_212c2f0;
      v14 = *((float*)GameData_212c2f0 + 1);
      v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v16 =
          *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
      v17 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v18 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
      v19 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      v20 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12);
      v21 =
          0x1.921fb60000000p+0f -
          (float)(PSEUDO_UNFUSED(
              v22 *
              (float)((float)((float)-(
                                  float)(v20 -
                                         (float)((float)(v19 +
                                                         (float)((float)-(
                                                                     float)(v18 -
                                                                            (float)((
                                                                                        float)(v17 + (float)((float)-(
                                                                                                                 float)(v16 - (float)((
                                                                                                                                          float)(v15 + (float)((
                                                                                                                                                                   float)-(float)(v14 - (float)(*(float*)GameData_212c2f0 * (float)(v22 *
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
                      0x1.0000000000000p+0f)));
      goto LABEL_9;
    }
  }
  else if (v11 < -0x1.0000000000000p+0f) {
    v12 = -0x1.0000000000000p+0f / v11;
    v13 = *(float*)GameData_212c2f0;
    v14 = *((float*)GameData_212c2f0 + 1);
    v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v16 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
    v17 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v18 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
    v19 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    v20 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12);
    v21 =
        (float)(PSEUDO_UNFUSED(
            v12 *
            (float)((float)((float)-(
                                float)(v20 -
                                       (float)((float)(v19 +
                                                       (float)((float)-(
                                                                   float)(v18 -
                                                                          (float)((float)(v17 +
                                                                                          (float)((float)-(float)(v16 - (float)((float)(v15 + (float)((float)-(float)(v14 - (float)(*(float*)GameData_212c2f0 * (float)(v12 * v12))) *
                                                                                                                                                      (float)(v12 *
                                                                                                                                                              v12))) *
                                                                                                                                (float)(v12 *
                                                                                                                                        v12))) *
                                                                                                  (float)(v12 *
                                                                                                          v12))) *
                                                                                  (float)(v12 *
                                                                                          v12))) *
                                                               (float)(v12 *
                                                                       v12))) *
                                               (float)(v12 * v12))) *
                            (float)(v12 * v12)) +
                    0x1.0000000000000p+0f))) +
        -0x1.921fb60000000p+0f;
    goto LABEL_9;
  }
  v13 = *(float*)GameData_212c2f0;
  v14 = *((float*)GameData_212c2f0 + 1);
  v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
  v16 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
  v17 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
  v18 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
  v19 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
  v20 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12);
  v21 =
      v11 *
      (float)((
                  float)((float)-(
                             float)(v20 -
                                    (float)((float)(v19 +
                                                    (float)((float)-(
                                                                float)(v18 -
                                                                       (float)((float)(v17 + (float)((float)-(float)(v16 - (float)((float)(v15 + (float)((float)-(float)(v14 - (float)(*(float*)GameData_212c2f0 * (float)(v11 * v11))) *
                                                                                                                                                         (float)(v11 *
                                                                                                                                                                 v11))) *
                                                                                                                                   (float)(v11 *
                                                                                                                                           v11))) *
                                                                                                     (float)(v11 *
                                                                                                             v11))) *
                                                                               (float)(v11 *
                                                                                       v11))) *
                                                            (float)(v11 *
                                                                    v11))) *
                                            (float)(v11 * v11))) *
                         (float)(v11 * v11)) +
              0x1.0000000000000p+0f);
LABEL_9:
  v23 = -(float)(v8 - (float)((float)-v6 * 0x1.0000000000000p-1f));
  if (v23 >= 0x0.0p+0f) {
    if (v23 > 0x1.0000000000000p+0f) {
      v26 = 0x1.0000000000000p+0f / v23;
      v25 =
          0x1.921fb60000000p+0f -
          (float)(PSEUDO_UNFUSED(
              v26 *
              (float)((
                          float)((float)-(
                                     float)(v20 -
                                            (float)((float)(v19 +
                                                            (float)((float)-(
                                                                        float)(v18 - (float)((
                                                                                                 float)(v17 + (float)((float)-(float)(v16 - (float)((
                                                                                                                                                        float)(v15 + (float)((
                                                                                                                                                                                 float)-(float)(v14 - (float)(v13 * (float)(v26 *
                                                                                                                                                                                                                            v26))) *
                                                                                                                                                                             (float)(v26 *
                                                                                                                                                                                     v26))) *
                                                                                                                                                    (float)(v26 *
                                                                                                                                                            v26))) *
                                                                                                                      (float)(v26 *
                                                                                                                              v26))) *
                                                                                             (float)(v26 *
                                                                                                     v26))) *
                                                                    (float)(v26 *
                                                                            v26))) *
                                                    (float)(v26 * v26))) *
                                 (float)(v26 * v26)) +
                      0x1.0000000000000p+0f)));
      goto LABEL_17;
    }
    v27 =
        (float)((float)-(
                    float)(v20 -
                           (float)((float)(v19 +
                                           (float)((float)-(
                                                       float)(v18 -
                                                              (float)((float)(v17 +
                                                                              (float)((float)-(
                                                                                          float)(v16 -
                                                                                                 (float)((float)(v15 +
                                                                                                                 (float)((float)-(
                                                                                                                             float)(v14 -
                                                                                                                                    (float)(v13 *
                                                                                                                                            (float)(v23 *
                                                                                                                                                    v23))) *
                                                                                                                         (float)(v23 *
                                                                                                                                 v23))) *
                                                                                                         (float)(v23 *
                                                                                                                 v23))) *
                                                                                      (float)(v23 *
                                                                                              v23))) *
                                                                      (float)(v23 *
                                                                              v23))) *
                                                   (float)(v23 * v23))) *
                                   (float)(v23 * v23))) *
                (float)(v23 * v23)) +
        0x1.0000000000000p+0f;
  LABEL_16:
    v25 = v23 * v27;
    goto LABEL_17;
  }
  if (v23 >= -0x1.0000000000000p+0f) {
    v27 =
        (float)((float)-(
                    float)(v20 -
                           (float)((float)(v19 +
                                           (float)((float)-(
                                                       float)(v18 -
                                                              (float)((float)(v17 +
                                                                              (float)((float)-(
                                                                                          float)(v16 -
                                                                                                 (float)((float)(v15 +
                                                                                                                 (float)((float)-(
                                                                                                                             float)(v14 -
                                                                                                                                    (float)(v13 *
                                                                                                                                            (float)(v23 *
                                                                                                                                                    v23))) *
                                                                                                                         (float)(v23 *
                                                                                                                                 v23))) *
                                                                                                         (float)(v23 *
                                                                                                                 v23))) *
                                                                                      (float)(v23 *
                                                                                              v23))) *
                                                                      (float)(v23 *
                                                                              v23))) *
                                                   (float)(v23 * v23))) *
                                   (float)(v23 * v23))) *
                (float)(v23 * v23)) +
        0x1.0000000000000p+0f;
    goto LABEL_16;
  }
  v24 = -0x1.0000000000000p+0f / v23;
  v25 = (float)(PSEUDO_UNFUSED(
            v24 *
            (float)((float)((float)-(
                                float)(v20 -
                                       (float)((float)(v19 +
                                                       (float)((float)-(float)(v18 - (float)((
                                                                                                 float)(v17 + (float)((float)-(float)(v16 - (float)((
                                                                                                                                                        float)(v15 + (float)((
                                                                                                                                                                                 float)-(float)(v14 - (float)(v13 * (float)(v24 *
                                                                                                                                                                                                                            v24))) *
                                                                                                                                                                             (float)(v24 *
                                                                                                                                                                                     v24))) *
                                                                                                                                                    (float)(v24 *
                                                                                                                                                            v24))) *
                                                                                                                      (float)(v24 *
                                                                                                                              v24))) *
                                                                                             (float)(v24 *
                                                                                                     v24))) *
                                                               (float)(v24 *
                                                                       v24))) *
                                               (float)(v24 * v24))) *
                            (float)(v24 * v24)) +
                    0x1.0000000000000p+0f))) +
        -0x1.921fb60000000p+0f;
LABEL_17:
  v28 = v21 +
        (float)(roundf(v21 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v29 = -0x1.921fb60000000p+1f - v28;
  v30 = -0x1.0000000000000p+0f;
  if (v28 < -0x1.921fb60000000p+0f) {
    v31 = -0x1.0000000000000p+0f;
  }
  else {
    v31 = 0x1.0000000000000p+0f;
  }
  if (v28 >= -0x1.921fb60000000p+0f) {
    v29 = v28;
  }
  v32 = v28 <= 0x1.921fb60000000p+0f;
  if (v28 > 0x1.921fb60000000p+0f) {
    v33 = 0x1.921fb60000000p+1f - v28;
  }
  else {
    v33 = v29;
  }
  v35 = *(float*)GameData_212c190;
  v34 = *((float*)GameData_212c190 + 1);
  v36 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  if (v32) {
    v37 = v31;
  }
  else {
    v37 = -0x1.0000000000000p+0f;
  }
  v38 = v33 * v33;
  v39 = -v35;
  v40 = v34 - (float)(v35 * (float)(v33 * v33));
  v42 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v41 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v43 = -v42;
  v44 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v45 = v41 + (float)((float)-(float)(v42 - (float)(v40 * (float)(v33 * v33))) *
                      (float)(v33 * v33));
  v46 = -v36;
  v47 =
      v33 *
      (float)((float)((float)-(float)(v36 - (float)(v45 * (float)(v33 * v33))) *
                      (float)(v33 * v33)) +
              0x1.0000000000000p+0f);
  v48 = *((float*)GameData_212c188 + 1);
  v50 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v49 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  LANES64(v51).n64_f32[0] =
      a3 *
      (float)(v37 *
              (float)((float)((float)-(
                                  float)(v44 -
                                         (float)((float)(v49 +
                                                         (float)((float)-(
                                                                     float)(v50 -
                                                                            (float)((float)(v48 -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c188 *
                                                                                                    v38)) *
                                                                                    v38)) *
                                                                 v38)) *
                                                 v38)) *
                              v38) +
                      0x1.0000000000000p+0f));
  LANES64(v9).n64_f32[0] = v25 + (float)(roundf(v25 * 0x1.45f3060000000p-3f) *
                                         -0x1.921fb60000000p+2f);
  if (LANES64(v9).n64_f32[0] <= 0x1.921fb60000000p+0f) {
    if (LANES64(v9).n64_f32[0] >= -0x1.921fb60000000p+0f) {
      v30 = 0x1.0000000000000p+0f;
    }
    else {
      LANES64(v9).n64_f32[0] = -0x1.921fb60000000p+1f - LANES64(v9).n64_f32[0];
      v30 = -0x1.0000000000000p+0f;
    }
  }
  else {
    LANES64(v9).n64_f32[0] = 0x1.921fb60000000p+1f - LANES64(v9).n64_f32[0];
  }
  v52 = LANES64(v9).n64_f32[0] * LANES64(v9).n64_f32[0];
  v7 = 1;
  LANES64(v9).n64_f32[0] =
      a3 *
      (float)(LANES64(v9).n64_f32[0] *
              (float)((float)((float)(v46 +
                                      (float)((float)(v41 +
                                                      (float)((float)(v43 +
                                                                      (float)((float)(v34 +
                                                                                      (float)(v39 *
                                                                                              (float)(LANES64(
                                                                                                          v9)
                                                                                                          .n64_f32
                                                                                                              [0] *
                                                                                                      LANES64(
                                                                                                          v9)
                                                                                                          .n64_f32
                                                                                                              [0]))) *
                                                                              (float)(LANES64(
                                                                                          v9)
                                                                                          .n64_f32
                                                                                              [0] *
                                                                                      LANES64(
                                                                                          v9)
                                                                                          .n64_f32
                                                                                              [0]))) *
                                                              (float)(LANES64(
                                                                          v9)
                                                                          .n64_f32
                                                                              [0] *
                                                                      LANES64(
                                                                          v9)
                                                                          .n64_f32
                                                                              [0]))) *
                                              (float)(LANES64(v9).n64_f32[0] *
                                                      LANES64(v9)
                                                          .n64_f32[0]))) *
                              (float)(LANES64(v9).n64_f32[0] *
                                      LANES64(v9).n64_f32[0])) +
                      0x1.0000000000000p+0f));
  LANES64(v53).n64_f32[0] =
      a3 *
      (float)(v30 *
              (float)((float)((float)((float)((float)(v49 +
                                                      (float)((float)((float)((float)(v48 +
                                                                                      (float)((float)-*(
                                                                                                  float*)
                                                                                                  GameData_212c188 *
                                                                                              v52)) *
                                                                              v52) -
                                                                      v50) *
                                                              v52)) *
                                              v52) -
                                      v44) *
                              v52) +
                      0x1.0000000000000p+0f));
  LANES64(v53).n64_u32[1] = LANES64(v9).n64_u32[0];
  LANES64(v51).n64_f32[1] = a3 * v47;
  LANES64(v10).n64_f32[0] = a3 * v47;
  LANES64(*(v4)).n64_u64[0] =
      LANES64_OF(vbsl_s8(vdup_lane_s32(vcgt_f32(v9, v10), 0), v51, v53))
          .n64_u64[0];
LABEL_34:
  LANES64(v4[1]).n64_u8[0] = v7;
  return result;
}

_QWORD* game_10bce10(__int64 a1, long double a2, long double a3, long double a4,
                     long double a5, double a6)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float32x4_t* v16;
  __int64 v17;
  long double v18;
  float32x4_t v19;
  long double v20;
  long double v21;
  _QWORD* result;
  float32x4_t* v24;
  float32x4_t v25;
  float32x4_t* v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  int32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  long double v35;
  long double v36;
  unsigned int v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  long double v44;
  long double v45;
  struct {
    __int64 v46;
    char gap40_[72];
    char v47;
  } v46_;

  v7 = GameRoutine_10bc1a0(a1, a2, a3, a4, a5, a6);
  v10 = *(_QWORD*)(v7 + 72);
  v11 = v7;
  if (*(_BYTE*)(v10 + 158) != 0) {
    v12 = *(_QWORD*)(v10 + 96);
    if (v12 != 0) {
      v14 = *(_QWORD*)(v12 + 24);
      v13 = v12 + 24;
      v15 = *(_QWORD*)(v10 + 104);
      wld_a78840(v14, (__int64)"Loc_C_Trans", 11, 7);
      *(_BYTE*)(*(_QWORD*)v13 + 232LL) = 1;
      *(_DWORD*)(*(_QWORD*)v13 + 236LL) = 1065353216;
      if (v15 != 0) {
        wld_a78840(*(_QWORD*)(v15 + 24), (__int64)"Loc_C_Trans", 11, 7);
        v13 = v15 + 24;
        *(_BYTE*)(*(_QWORD*)v13 + 232LL) = 1;
        *(_DWORD*)(*(_QWORD*)v13 + 236LL) = 1065353216;
      }
      *(_QWORD*)(*(_QWORD*)v13 + 304LL) = *(_QWORD*)(v10 + 8);
    }
  }
  v16 = *(float32x4_t**)(a1 + 8);
  v17 = *(_QWORD*)(v11 + 8);
  v18 = *(long double*)(v17 + 304);
  v19 = vsubq_f32(v16[19], *(float32x4_t*)&v18);
  v21 = COERCE_LONG_DOUBLE(vmulq_f32(v19, v19));
  v20 = COERCE_LONG_DOUBLE(vextq_s8(*(int8x16_t*)&v21, *(int8x16_t*)&v21, 8u));
  *(float32x2_t*)&v21 = vadd_f32(*(float32x2_t*)&v20, *(float32x2_t*)&v21);
  *(float32x2_t*)&v21 = vpadd_f32(*(float32x2_t*)&v21, *(float32x2_t*)&v21);
  if (*(float*)&v21 != 0x0.0p+0f) {
    LANES128(v16[19]).n128_u32[0] = LODWORD(v18);
    LANES128(v16[19]).n128_u32[1] = *(_DWORD*)(v17 + 308);
    v18 = *(long double*)&v16[19];
    DWORD2(v18) = *(_DWORD*)(v17 + 312);
    LANES128(v16[18]).n128_u32[2] |= 1u;
    *((_QWORD*)&v18 + 1) = DWORD2(v18);
    *(long double*)&v16[19] = v18;
  }
  result = TumbleHorse_Unknown5(a1, v18, v21, v20);
  *(_BYTE*)(a1 + 100) = 1;
  if (*(_BYTE*)(a1 + 196) == 1) {
    *(_BYTE*)(a1 + 196) = 0;
  }
  v24 = *(float32x4_t**)(v11 + 448);
  if (v24 != nullptr) {
    v25 = v24[29];
    v26 = v24 + 19;
    LANES128(v25).n128_u32[1] = 0;
    v27 = vmulq_f32(v25, v25);
    LANES128(v27).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
            .n64_u64[0];
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
            .n64_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
    v28 = vrsqrteq_f32(v27);
    v29 = vmulq_f32(v28, vrsqrtsq_f32(v28, vmulq_f32(v27, v28)));
    v30 = vmulq_f32(v27, v29);
    v34 = vceqzq_f32(v27);
    v33 = vrsqrtsq_f32(v29, v30);
    v31 = vmulq_f32(v25, vmulq_f32(v29, v33));
    LANES128(v29).n128_u64[0] = 0x4090000040900000LL;
    LANES128(v29).n128_u64[1] = 0x4090000040900000LL;
    v32 = vbicq_s8(vmulq_f32(v31, v29), v34);
    LANES128(v34).n128_u64[0] =
        LANES64(vld2_f32((const float*)&v24[19]).val[0]).n64_u64[0];
    LANES128(v33).n128_u64[0] = LANES64_OF(vdup_laneq_s32(v32, 2)).n64_u64[0];
    LODWORD(v36) =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
            .n64_u32[0];
    LANES128(v33).n128_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
            .n64_u64[0];
    *(_QWORD*)&v35 = LODWORD(v36) | 0x4348000000000000LL;
    LANES128(v34).n128_u64[0] = LANES128(v33).n128_u32[1];
    *((_QWORD*)&v35 + 1) = LANES128(v33).n128_u32[1];
    v45 = v35;
    LODWORD(v35) = -1027080192;
    DWORD1(v36) = -1027080192;
    *((_QWORD*)&v36 + 1) = LANES128(v33).n128_u32[1];
    v44 = v36;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21fde98, v36,
                                          *(long double*)&v34, v35,
                                          *(long double*)&v33) != 0) {
      Registration_a5aca0((__int64)&GameData_21fdd90);
      v26 = v24 + 19;
      GameRoutine_2b0();
      __cxa_guard_release(&GameData_21fde98);
    }
    result =
        X8CALL_X0(void*, collision_670c60((void*)(&v46_.v46), &v45, &v44, 3));
    if ((v46_.v47 & 1) != 0) {
      DWORD1(v44) = HIDWORD(v46_.v46);
    }
    v37 = DWORD2(v44);
    v38 = *(float32x4_t*)&v44;
    LANES128(v38).n128_u32[3] = 0;
    v39 = vsubq_f32(*v26, v38);
    v40 = vmulq_f32(v39, v39);
    LANES128(v40).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v24[19]).n128_u64[0] = *(_QWORD*)&v44;
      v41 = v24[19];
      LANES128(v24[18]).n128_u32[2] |= 1u;
      LANES128(v41).n128_u64[1] = v37;
      v24[19] = v41;
    }
  }
  return result;
}

__int64 game_14a3260(__int64 result, char a2)
{

#pragma clang fp contract(fast)

  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  _QWORD v56[2];

  v2 = *(_QWORD*)result;
  v3 = *(_QWORD*)(*(_QWORD*)result + 24LL);
  v4 = *(_QWORD*)(v3 + 8);
  v5 = *(_QWORD*)(v3 + 24);
  if (v4 == 0 && v5 != 0) {
    return result;
  }
  v7 = result;
  if (*(int*)(v2 + 36) < 1) {
    v8 = 0;
    v9 = (*(_QWORD*)0x1D8LL);
    if ((*(_QWORD*)0x1D8LL) == 0) {
      return result;
    }
  }
  else {
    v8 = *(_QWORD*)(v2 + 40);
    if (*(_DWORD*)(v8 + 420) != 0) {
      v8 = 0;
    }
    v9 = *(_QWORD*)(v8 + 472);
    if (v9 == 0) {
      return result;
    }
  }
  if (*(_DWORD*)(v8 + 480) != *(_DWORD*)(v9 + 44)) {
    return result;
  }
  v11 = eft_EmitterSetHandle_Get_5b6700(v8 + 472);
  v12 = **(_DWORD**)(v11 + 568);
  if (v12 < 1) {
  LABEL_17:
    v16 = 0;
    if ((a2 & 1) == 0) {
    LABEL_34:
      v55 = 0;
      v26 = 0;
      v27 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v53 = 0;
      v54 = 0;
      if (v16 == 0) {
      LABEL_71:
        v49 = *(_QWORD*)v7;
        if (*(_QWORD*)v7 != 0 && *(_DWORD*)(v49 + 16) == *(_DWORD*)(v7 + 8)) {
          v50 = **(char***)(v49 + 24);
        }
        else {
          v50 = &GameData_1a9f09e;
        }
        v56[0] = v50;
        v56[1] = GameRoutine_1a09c70(v50);
        result = GameRoutine_14a5020(&GameData_224b6b0, v56);
        if (result == 0) {
          result = game_templates_14a51c0(&GameData_224b6b0, v56, &v53);
          v26 = v53;
        }
        if (v26 != 0) {
          v51 = *v27;
          v54 = v26;
          v52 = 128;
          if (*(_QWORD*)(v51 + 200) == 0) {
            v52 = 56;
          }
          return nn_mem_StandardAllocator_Free(v51 + v52);
        }
        return result;
      }
      v28 = 0;
      while (1) {
        v31 = *(float*)(v7 + 88);
        if (v31 >= 0.0f) {
          v32 = *(_QWORD*)(*(_QWORD*)(v16 + 568) + 16LL);
          if (v31 < (float)*(unsigned int*)(v32 + 1900)) {
            break;
          }
        }
      LABEL_40:
        v16 = *(_QWORD*)(v16 + 128);
        if (v16 == 0) {
          goto LABEL_71;
        }
      }
      v33 = *(_QWORD*)(v16 + 160);
      v34 = GameRoutine_1a09c70(v33 + 16);
      v29 = std___1___hash_memory(v33 + 16, v34);
      v35 = v28;
      while (v35 != v26) {
        v36 = *(_QWORD*)(v35 - 16);
        v35 -= 16LL;
        if (v36 == v29) {
          goto LABEL_39;
        }
      }
      v37 = v55 - v26;
      if (v26 == v28 && (unsigned __int64)v37 <= 0x6F) {
        v38 = v29;
        v28 = fw_memory_HeapManager_Allocate(*v27, 112, 16, 0);
        v53 = v28;
        v55 = v28 + 112;
        if (v26 != 0) {
          if (*(_QWORD*)(*v27 + 200LL) != 0) {
            v39 = 128;
          }
          else {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(*v27 + v39);
        }
        v29 = v38;
      }
      else if (v28 >= v55) {
        v40 = v28 - v26;
        v41 = (__int64)(v28 - v26) >> 4;
        v42 = v41 + 1;
        if ((unsigned __int64)(v41 + 1) >> 60 != 0) {
          GameRoutine_14a3c30(v29);
        }
        if (v37 >> 3 > v42) {
          v42 = v37 >> 3;
        }
        if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF0LL) {
          v43 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v43 = v42;
        }
        if (v43 != 0) {
          if (v43 >> 60 != 0) {
            GameRoutine_60a210(v29);
          }
          v44 = v29;
          v45 = fw_memory_HeapManager_Allocate(*v27, 16 * v43, 16, 0);
          v29 = v44;
        }
        else {
          v45 = 0;
        }
        v46 = v45 + v40;
        v47 = v45 + 16 * v43;
        *(_QWORD*)v46 = v29;
        v30 = v45 + v40 - 16 * v41;
        v28 = v45 + v40 + 16;
        *(_DWORD*)(v46 + 8) = *(_DWORD*)(v32 + 1900);
        GameRoutine_1a0b950(v30, v26, v40);
        v53 = v30;
        v55 = v47;
        if (v26 != 0) {
          if (*(_QWORD*)(*v27 + 200LL) != 0) {
            v48 = 128;
          }
          else {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(*v27 + v48);
        }
      LABEL_38:
        v54 = v28;
        v26 = v30;
      LABEL_39:
        *(_DWORD*)(v32 + 1900) = 0;
        goto LABEL_40;
      }
      *(_QWORD*)v28 = v29;
      v30 = v53;
      *(_DWORD*)(v28 + 8) = *(_DWORD*)(v32 + 1900);
      v28 += 16LL;
      goto LABEL_38;
    }
  }
  else {
    v13 = v11;
    v14 = 0;
    while (1) {
      v15 = EmitterSet_5b66c0(v13, v14);
      if (v15 != 0) {
        break;
      }
      if (v12 == ++v14) {
        goto LABEL_17;
      }
    }
    v16 = v15;
    if ((a2 & 1) == 0) {
      goto LABEL_34;
    }
  }
  v17 = *(_QWORD*)v7;
  if (*(_QWORD*)v7 != 0 && *(_DWORD*)(v17 + 16) == *(_DWORD*)(v7 + 8)) {
    v18 = **(char***)(v17 + 24);
  }
  else {
    v18 = &GameData_1a9f09e;
  }
  v53 = (__int64)v18;
  v54 = GameRoutine_1a09c70(v18);
  result = GameRoutine_14a5020(&GameData_224b6b0, &v53);
  if (v16 != 0) {
    v19 = result;
    if (result != 0) {
      do {
        v20 = *(_QWORD*)(*(_QWORD*)(v16 + 568) + 16LL);
        if (v20 != 0 && *(float*)(v16 + 116) == 1.0f) {
          v21 = *(_QWORD*)(v16 + 160);
          v22 = GameRoutine_1a09c70(v21 + 16);
          result = std___1___hash_memory(v21 + 16, v22);
          v23 = *(_QWORD*)(v19 + 48);
          v24 = v23;
          while (v24 != *(_QWORD*)(v19 + 40)) {
            v25 = *(_QWORD*)(v24 - 16);
            v24 -= 16;
            v23 -= 16;
            if (v25 == result) {
              if (*(_QWORD*)(v19 + 48) != v23) {
                *(_DWORD*)(v20 + 1900) = *(_DWORD*)(v23 + 8);
              }
              break;
            }
          }
        }
        v16 = *(_QWORD*)(v16 + 128);
      } while (v16 != 0);
    }
  }
  return result;
}

__n128 game_159da00(__int64** a1, unsigned int a2, unsigned int a3,
                    long double a4)
{

#pragma clang fp contract(off)
  int v4;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __n128 result;
  unsigned __int64 v25;
  int v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    __int64 v31;
    char* v32;
  } v30_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a1[2] == nullptr) {
    goto LABEL_18;
  }
  v8 = (__int64)a1[1];
  if (v8 == 0) {
    goto LABEL_18;
  }
  v9 = std___1___shared_weak_count_lock(v8),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v9 == 0) {
  LABEL_11:
    v13 = (__int64)a1[1];
    if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  v10 = *a1;
  if (*a1 != nullptr) {
    v4 = *((unsigned __int8*)v10 + 24);
    v11 = v10 + 19;
    if (v4 == 0) {
      v11 = nullptr;
    }
    v12 = v11 != a1[2];
  }
  else {
    v12 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v12) {
      goto LABEL_11;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v12) {
      goto LABEL_11;
    }
  }
  if ((v4 & 1) == 0) {
  LABEL_18:
    v15 = 0;
    goto LABEL_19;
  }
LABEL_16:
  v14 = (__int64)a1[2];
  if (v14 == 0) {
    goto LABEL_18;
  }
  v15 = *(_QWORD*)(v14 + 24);
LABEL_19:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8028,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt1(&GameData_21f8028) != 0) {
    GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    __cxa_guard_release(&GameData_21f8028),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v15 == 0) {
    goto LABEL_28;
  }
  v16 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v16 != &GameData_21f8020) {
    do {
      v16 = (__int64*)*v16;
    } while (v16 != &GameData_21f8020 && v16 != nullptr);
    if (v16 == nullptr) {
    LABEL_28:
      v15 = 0;
    }
  }
  v18 = (__int64)a1[1];
  if (v18 == 0) {
    goto LABEL_43;
  }
  v19 = std___1___shared_weak_count_lock(v18),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v19 == 0) {
    goto LABEL_43;
  }
  v20 = *a1;
  v21 = v19;
  if (*a1 != nullptr) {
    GameRoutine_15b7080((void*)(&v30_.v30), *a1, v15),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v20 == nullptr) {
      goto LABEL_43;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v20 == nullptr) {
    LABEL_43:
      v22 = 0;
      goto LABEL_44;
    }
  }
  if (v30_.v31 == 0) {
    goto LABEL_43;
  }
  v22 = std___1___shared_weak_count_lock(v30_.v31),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v23 = v30_.v30;
  if (v30_.v31 != 0) {
    std___1___shared_weak_count___release_weak(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v22 != 0 && v23 != 0) {
    *(_DWORD*)(v23 + 1036) = a2;
    *(_DWORD*)(v23 + 1028) = a3;
    result = KeyIcon_17aa380(v23, (__int64)"TextKey", a3);
  LABEL_56:
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v22 + 16LL))(
          v22, *(long double*)&result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return std___1___shared_weak_count___release_weak();
    }
    return result;
  }
LABEL_44:
  v25 = GameRoutine_156ddc0(a2, a3),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_1603b10((void*)((__int64)&v30_.v30), v25),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v26 = v30_.v30 & 1;
  if ((v30_.v30 & 1) != 0) {
    v27 = v30_.v32;
  }
  else {
    v27 = (char*)&v30_.v30 + 1;
  }
  if (v27 != nullptr) {
    v28 = ui_LayoutAccessor_FindTextBox((__int64*)a1, (__int64)"T_Key"),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v28 != 0) {
      game_156c5d0(v28, (__int64)v27, 0, result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v26 = v30_.v30 & 1;
    }
  }
  if (v26 != 0 && v30_.v32 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
  if (v22 != 0) {
    goto LABEL_56;
  }
  return result;
}

#pragma GCC visibility pop
