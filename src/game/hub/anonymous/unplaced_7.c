#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21ec7c0;
extern __int64 GameData_220d630;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float powf(float, float);
void BattleUtil_7a96a0(float);
void GameHr_da5c00(__int64*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_hub_anonymous_da7150(__int64 a1);

void game_hub_anonymous_da7150(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  __int64* v8;
  float* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  float32x4_t v16;
  __int128 v17;
  __int64 v18;
  float v19;
  __int64 v20[3];

  if (*(_BYTE*)(a1 + 194) != 1) {
    return;
  }
  if ((*(_BYTE*)(GameData_220d630 + 64) & 1) == 0) {
    GameRoutine_8123d0();
  }
  v1 = *(_DWORD*)(GameData_220d630 + 16);
  if (v1 == 1) {
    v2 = 0x1.3333340000000p-3f;
  }
  else {
    v2 = 0x1.0000000000000p-2f;
  }
  if (v1 == 1) {
    v3 = -0x1.0000000000000p+3f;
  }
  else {
    v3 = 0x1.4000000000000p+3f;
  }
  v4 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(a1 + 193) == 0) {
    v4 = 0x0.0p+0f;
  }
  v5 = *(float*)(a1 + 196);
  v6 = fabsf(
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                104LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) +
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                104LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f));
  if (v5 > v4) {
    v5 = v5 - v6;
    if (v5 >= v4) {
      goto LABEL_17;
    }
  LABEL_16:
    v5 = v4;
    goto LABEL_17;
  }
  if (v5 < v4) {
    v5 = v5 + v6;
    if (v5 > v4) {
      goto LABEL_16;
    }
  }
LABEL_17:
  *(float*)(a1 + 196) = v5;
  v7 = powf(v5, 0x1.0000000000000p-1f);
  v8 = (__int64*)GameData_212dc38[0];
  v19 = v7;
  v9 = *(float**)GameData_212dc38[0];
  v9[253] = v3 * v7;
  v9[252] = (float)((float)(v3 * v7) + 0x0.0p+0f) + v9[254];
  BattleUtil_7a96a0(v2 * v7);
  if (v1 != 1) {
    return;
  }
  GameHr_da5c00(v20);
  v10 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v10 == 0) {
    goto LABEL_30;
  }
  v11 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v12 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  v13 = std___1___shared_weak_count_lock(v12);
  std___1___shared_weak_count___release_weak(v10);
  if (v13 != 0 && v11 != 0) {
    if (v20[1] != v20[0]) {
      v15 = *v8;
      v16 = vmulq_f32(
          vmulq_n_f32(
              vsubq_f32(
                  *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v20[0] +
                                                        24LL) +
                                             16LL) +
                                  560LL),
                  *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 16LL) +
                                  560LL)),
              v19),
          vdupq_n_s32(0x3F4CCCCDu));
      *(_QWORD*)(v15 + 1072) = LANES128(v16).n128_u64[0];
      v17 = *(_OWORD*)(v15 + 1072);
      *((_QWORD*)&v17 + 1) = LANES128(v16).n128_u32[2];
      *(_OWORD*)(v15 + 1072) = v17;
    }
    goto LABEL_28;
  }
  if (v13 != 0) {
  LABEL_28:
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  }
LABEL_30:
  if (v20[0] != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  v20[0]);
  }
}

#pragma GCC visibility pop
