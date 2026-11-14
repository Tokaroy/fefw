#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterObservable_10cd4e0(_QWORD* result);
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
game_gmap_TroopMgr_GetEncountEnemyList(PSEUDO_X8, __int64(__fastcall*)());
__int64 CorpsManager_972290(__int64 result);
__int64 GameHr_14a1520(__int64*, char);
__int64 GameRoutine_ae4560(__int64 result);
__int64 GmapCorpsMenu_172b6e0(__int64);
__int64 MultiMenuSequence_17871c0(__int64 result, unsigned int, int);
__int64 ProcTroopAction_14b4920(__int64);
__int64 TroopMgr_13460a0(__int64);
__int64 TroopMgr_1349320(__int64*);
__int64 TroopMgr_134c680();
__int64 TroopMgr_134d2e0(__int64);
__int64 Troop_1342210(_QWORD);
__int64 Troop_1342e60(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 UnitActor_81ab40(__int64, float, float);
__int64 UnitActor_81cda0(__int64, __int128*, float);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_14a3920(__int64 result);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_gmap_1341ed0(__int64 result);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool GameHr_995200(__int64);
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ad0522;
extern _UNKNOWN GameData_1ade186;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83090;
extern __int64 (*GameData_202cfb8[])();
extern __int64 (*GameData_202ddc8[])();
extern __int64 (*GameData_20b6768[])();
extern __int64 (*GameData_20b67e8[])();
extern __int64 (*game_gmap_anonymous_CorpsPoolMenu_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsUserMenu_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212cb08[102];
extern __int64* GameData_212e008[9];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_20b33d8;
extern __int64 GameData_212d750;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
float GameRoutine_135bea0();
float cosf(float);
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
float sinf(float);
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void GameHr_133cc40(__int64);
void GameRoutine_1728e00();
void TroopMgr_134e920();
void __attribute__((noreturn)) GameRoutine_132ba50();
void __attribute__((noreturn)) GameRoutine_13549e0();
void __attribute__((noreturn)) GameRoutine_14b6540();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_888610();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_gmap_1326c80(float32x4_t* a1, int a2);
__int64 game_gmap_13412c0(float32x4_t* a1, __int64 a2, float a3);
void game_gmap_134fb00();
void game_gmap_14b59c0(_QWORD* a1, float32x4_t*** a2);
__int64 game_gmap_172a580(__int64 a1, int a2);

__int64 game_gmap_1326c80(float32x4_t* a1, int a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float32x4_t* v16;
  float32x4_t v17;
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
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  __int64 v43;
  __int64 v44;
  float v46;
  float v48;
  float v50;
  __int64 v52;
  float v54;
  float v59;
  float v63;

  v2 = LANES128(a1[3]).n128_u64[0];
  v3 = LANES128(a1[3]).n128_u64[1];
  if (v2 == v3) {
    v6 = 0;
  LABEL_54:
    v43 = 0;
    if (v6 != 0) {
      goto LABEL_55;
    }
    return v43;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = -*((float*)GameData_212c2f0 + 1);
  v10 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
  v63 = *(float*)GameData_212c2f0;
  v11 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
  v12 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
  v13 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
  v14 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
  v15 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12);
  do {
    v16 = *(float32x4_t**)(*(_QWORD*)v2 + 8LL);
    if (LANES128(v16[11]).n128_u8[0] == 1) {
      goto LABEL_4;
    }
    v17 = vsubq_f32(v16[2], a1[2]);
    if (LANES128(v17).n128_f32[2] != 0x0.0p+0f ||
        (v18 = 0x0.0p+0f, LANES128(v17).n128_f32[0] != 0x0.0p+0f)) {
      v19 = -LANES128(v17).n128_f32[2];
      if (LANES128(v17).n128_f32[2] > 0x0.0p+0f) {
        if (LANES128(v17).n128_f32[0] >= 0x0.0p+0f) {
          if (LANES128(v17).n128_f32[0] <= LANES128(v17).n128_f32[2]) {
            v20 = LANES128(v17).n128_f32[0] / LANES128(v17).n128_f32[2];
            v21 = v63;
            v22 = 0x1.0000000000000p+0f;
            v23 = 0x1.921fb60000000p+1f;
            goto LABEL_23;
          }
          v24 = LANES128(v17).n128_f32[2] / LANES128(v17).n128_f32[0];
          v25 = v63;
          v26 = 0x1.0000000000000p+0f;
          v27 = 0x1.921fb60000000p+0f;
        }
        else {
          if (LANES128(v17).n128_f32[0] < v19) {
            v20 = v19 / LANES128(v17).n128_f32[0];
            v21 = v63;
            v22 = 0x1.0000000000000p+0f;
            v23 = -0x1.921fb60000000p+0f;
          LABEL_23:
            v18 =
                v23 -
                (float)(PSEUDO_UNFUSED(v20 * (float)(v22 + (float)((float)(v15 + (float)((
                                                                                             float)(v14 + (float)((
                                                                                                                      float)(v13 + (float)((
                                                                                                                                               float)(v12 + (float)((
                                                                                                                                                                        float)(v11 + (float)((
                                                                                                                                                                                                 float)(v10 + (float)((
                                                                                                                                                                                                                          float)(v9 +
                                                                                                                                                                                                                                 (float)(v21 *
                                                                                                                                                                                                                                         (float)(v20 *
                                                                                                                                                                                                                                                 v20))) *
                                                                                                                                                                                                                      (float)(v20 *
                                                                                                                                                                                                                              v20))) *
                                                                                                                                                                                             (float)(v20 *
                                                                                                                                                                                                     v20))) *
                                                                                                                                                                    (float)(v20 *
                                                                                                                                                                            v20))) *
                                                                                                                                           (float)(v20 *
                                                                                                                                                   v20))) *
                                                                                                                  (float)(v20 *
                                                                                                                          v20))) *
                                                                                         (float)(v20 *
                                                                                                 v20))) *
                                                                   (float)(v20 *
                                                                           v20)))));
            goto LABEL_25;
          }
          v24 = LANES128(v17).n128_f32[0] / v19;
          v25 = v63;
          v26 = 0x1.0000000000000p+0f;
          v27 = -0x1.921fb60000000p+1f;
        }
      LABEL_20:
        v18 =
            (float)(PSEUDO_UNFUSED(
                v24 *
                (float)(v26 +
                        (float)((float)(v15 +
                                        (float)((float)(v14 +
                                                        (float)((float)(v13 +
                                                                        (float)((float)(v12 +
                                                                                        (float)((float)(v11 +
                                                                                                        (float)((float)(v10 +
                                                                                                                        (float)((float)(v9 +
                                                                                                                                        (float)(v25 *
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
                                                                (float)(v24 *
                                                                        v24))) *
                                                (float)(v24 * v24))) *
                                (float)(v24 * v24))))) +
            v27;
        goto LABEL_25;
      }
      if (LANES128(v17).n128_f32[0] < 0x0.0p+0f) {
        if (LANES128(v17).n128_f32[2] <= LANES128(v17).n128_f32[0]) {
          v28 = LANES128(v17).n128_f32[0] / LANES128(v17).n128_f32[2];
          v18 =
              -(float)(v28 *
                       (float)((
                                   float)((float)(v15 +
                                                  (float)((float)(v14 + (float)((
                                                                                    float)(v13 + (float)((
                                                                                                             float)(v12 + (float)((
                                                                                                                                      float)(v11 + (float)((
                                                                                                                                                               float)(v10 + (float)((
                                                                                                                                                                                        float)(v9 + (float)(v63 *
                                                                                                                                                                                                            (float)(v28 * v28))) *
                                                                                                                                                                                    (float)(v28 *
                                                                                                                                                                                            v28))) *
                                                                                                                                                           (float)(v28 *
                                                                                                                                                                   v28))) *
                                                                                                                                  (float)(v28 *
                                                                                                                                          v28))) *
                                                                                                         (float)(v28 *
                                                                                                                 v28))) *
                                                                                (float)(v28 *
                                                                                        v28))) *
                                                          (float)(v28 * v28))) *
                                          (float)(v28 * v28)) +
                               0x1.0000000000000p+0f));
          goto LABEL_25;
        }
        v24 = LANES128(v17).n128_f32[2] / LANES128(v17).n128_f32[0];
        v25 = v63;
        v26 = 0x1.0000000000000p+0f;
        v27 = -0x1.921fb60000000p+0f;
        goto LABEL_20;
      }
      if (LANES128(v17).n128_f32[0] > v19) {
        v20 = v19 / LANES128(v17).n128_f32[0];
        v21 = v63;
        v22 = 0x1.0000000000000p+0f;
        v23 = 0x1.921fb60000000p+0f;
        goto LABEL_23;
      }
      v29 = LANES128(v17).n128_f32[0] / v19;
      v18 =
          v29 *
          (float)((float)((float)(v15 +
                                  (float)((float)(v14 +
                                                  (float)((float)(v13 +
                                                                  (float)((float)(v12 +
                                                                                  (float)((float)(v11 +
                                                                                                  (float)((float)(v10 +
                                                                                                                  (float)((float)(v9 +
                                                                                                                                  (float)(v63 *
                                                                                                                                          (float)(v29 *
                                                                                                                                                  v29))) *
                                                                                                                          (float)(v29 *
                                                                                                                                  v29))) *
                                                                                                          (float)(v29 *
                                                                                                                  v29))) *
                                                                                          (float)(v29 *
                                                                                                  v29))) *
                                                                          (float)(v29 *
                                                                                  v29))) *
                                                          (float)(v29 * v29))) *
                                          (float)(v29 * v29))) *
                          (float)(v29 * v29)) +
                  0x1.0000000000000p+0f);
    }
  LABEL_25:
    v30 = v18 * 0x1.ca5dc00000000p+5f;
    if (v7 < v8) {
      *(_QWORD*)v7 = v16;
      *(float*)(v7 + 8) = v30;
      v7 += 16LL;
    }
    else {
      v31 = v7 - v6;
      v32 = (__int64)(v7 - v6) >> 4;
      v33 = v32 + 1;
      if ((unsigned __int64)(v32 + 1) >> 60 != 0) {
        GameRoutine_132ba50();
      }
      if ((__int64)(v8 - v6) >> 3 > v33) {
        v33 = (__int64)(v8 - v6) >> 3;
      }
      if (v8 - v6 >= 0x7FFFFFFFFFFFFFF0LL) {
        v34 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v34 = v33;
      }
      if (v34 != 0) {
        if (v34 >> 60 != 0) {
          GameRoutine_60a210();
        }
        v35 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v34, 16, 0);
      }
      else {
        v35 = 0;
      }
      v36 = v35 + v31;
      v8 = v35 + 16 * v34;
      v37 = v7 - v6;
      *(_QWORD*)v36 = v16;
      v38 = v35 + v31 - 16 * v32;
      *(float*)(v36 + 8) = v30;
      v7 = v35 + v31 + 16;
      memcpy(v38, v6, v37);
      if (v6 != 0) {
        v39 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v6);
      }
      v6 = v38;
    }
  LABEL_4:
    v2 += 8LL;
  } while (v2 != v3);
  if (v6 == v7) {
    goto LABEL_54;
  }
  if (a2 > 2) {
    if (a2 == 3) {
      v40 = v6;
      while (1) {
        v50 = *(float*)(v40 + 8);
        if (v50 > -0x1.0e00000000000p+7f & v50 <= -0x1.6800000000000p+5f) {
          break;
        }
        v40 += 16;
        if (v40 == v7) {
          goto LABEL_84;
        }
      }
    }
    else {
      if (a2 != 4) {
        goto LABEL_84;
      }
      v40 = v6;
      while (1) {
        v46 = *(float*)(v40 + 8);
        if (v46 > 0x1.6800000000000p+5f & v46 <= 0x1.0e00000000000p+7f) {
          break;
        }
        v40 += 16;
        if (v40 == v7) {
          goto LABEL_84;
        }
      }
    }
  LABEL_111:
    v43 = *(_QWORD*)v40;
    if (v6 != 0) {
      goto LABEL_55;
    }
    return v43;
  }
  if (a2 == 1) {
    v40 = v6;
    while (1) {
      v48 = *(float*)(v40 + 8);
      if (v48 > -0x1.6800000000000p+5f & v48 <= 0x1.6800000000000p+5f) {
        goto LABEL_111;
      }
      v40 += 16;
      if (v40 == v7) {
        goto LABEL_84;
      }
    }
  }
  if (a2 == 2) {
    v40 = v6;
    do {
      v41 = *(float*)(v40 + 8);
      if (v41 <= -0x1.0e00000000000p+7f | v41 > 0x1.0e00000000000p+7f) {
        goto LABEL_111;
      }
      v40 += 16;
    } while (v40 != v7);
  }
LABEL_84:
  v52 = v6;
  while (2) {
    v54 = *(float*)(v52 + 8);
    if (a2 <= 2) {
      if (a2 == 1) {
        if (v54 > -0x1.0e00000000000p+6f & v54 <= 0x1.0e00000000000p+6f) {
          break;
        }
      }
      else if (a2 == 2 &&
               (v54 <= -0x1.c200000000000p+6f | v54 > 0x1.c200000000000p+6f)) {
        break;
      }
      goto LABEL_90;
    }
    if (a2 != 3) {
      if (a2 == 4 &&
          v54 > 0x1.6800000000000p+4f & v54 <= 0x1.3b00000000000p+7f) {
        break;
      }
      goto LABEL_90;
    }
    if (v54 <= -0x1.3b00000000000p+7f | v54 > -0x1.6800000000000p+4f) {
    LABEL_90:
      v52 += 16;
      if (v52 == v7) {
        v52 = v6;
        while (1) {
          v59 = *(float*)(v52 + 8);
          if (a2 > 2) {
            if (a2 == 3) {
              if (v59 > -0x1.5400000000000p+7f &
                  v59 <= -0x1.4000000000000p+3f) {
                goto LABEL_139;
              }
            }
            else if (a2 == 4 && v59 > 0x1.4000000000000p+3f &
                                    v59 <= 0x1.5400000000000p+7f) {
              goto LABEL_139;
            }
          }
          else if (a2 == 1) {
            if (v59 > -0x1.4000000000000p+6f & v59 <= 0x1.4000000000000p+6f) {
              goto LABEL_139;
            }
          }
          else if (a2 == 2 && (v59 <= -0x1.9000000000000p+6f |
                               v59 > 0x1.9000000000000p+6f)) {
            goto LABEL_139;
          }
          v52 += 16;
          if (v52 == v7) {
            goto LABEL_54;
          }
        }
      }
      continue;
    }
    break;
  }
LABEL_139:
  v43 = *(_QWORD*)v52;
  if (v6 == 0) {
    return v43;
  }
LABEL_55:
  v44 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v44 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                                v6);
  return v43;
}

__int64 game_gmap_13412c0(float32x4_t* a1, __int64 a2, float a3)
{
  float v6;
  __int64 v7;
  float v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  char v16;
  char v17;
  float v18;
  __int64 result;
  __int128 v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  unsigned __int32* v30;
  unsigned __int32 v31;
  float32x4_t* v32;
  float32x4_t v33;
  _DWORD* v34;
  int v35;
  int v36;
  _QWORD* v38;
  __int64 v39;
  unsigned int v40;
  float32x4_t v41;
  unsigned int i;
  float32x4_t* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  float32x4_t v46;
  __int128 v47;

  *((_QWORD*)&v47 + 1) = &GameData_1ad0522;
  v6 = 0x0.0p+0f;
  *(_QWORD*)&v47 = game_HashString((__int64)&GameData_1ad0522);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)&v47);
    if (v7 != 0) {
      v6 = (float)*(int*)(v7 + 32);
    }
  }
  v8 = GameRoutine_135bea0();
  v9 = LANES128(a1[23]).n128_u64[1];
  if (v9 != 0) {
    *(float*)(*(_QWORD*)(v9 + 304) + 12LL) =
        a3 * (float)((float)(v6 * v8) / 0x1.9000000000000p+6f);
  }
  if (LANES128(a1[8]).n128_u32[0] != -1080537169 &&
      (UnitActor_81a540((__int64)&a1[7], 0xBF984FAF,
                        (__int64)GameData_212ceb8) &
       1) != 0) {
    v10 = LANES128(a1[23]).n128_u64[1];
    if (v10 != 0) {
      v11 = *(_QWORD*)(v10 + 392);
      v12 = *(_QWORD*)(v10 + 400);
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
      }
      v13 = *(unsigned int*)(v11 + 11784);
      v14 = v13 > 0x21;
      v15 = 0x17FEFFFCFuLL >> v13;
      v16 = v14;
      v17 = v16 | v15;
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
      if ((v17 & 1) != 0) {
        CharacterObservable_10cd4e0(
            *(_QWORD**)(LANES128(a1[23]).n128_u64[1] + 120));
      }
    }
  }
  v18 = 0x0.0p+0f;
  result = UnitActor_81cda0((__int64)&a1[7], (__int128*)a2, 0x0.0p+0f);
  v20 = *(_OWORD*)a2;
  v21 = vsubq_f32(*(float32x4_t*)a2, a1[3]);
  if ((float)(vmuls_lane_f32(LANES128(v21).n128_f32[2], v21, 2) +
              (float)(LANES128(v21).n128_f32[0] * LANES128(v21).n128_f32[0])) >=
      0x1.0000000000000p-4f) {
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                             COERCE_AS(float32x2_t, 1065353216LL)))
            .n64_f32[0] > 0x0.0p+0f) {
      LANES128(v22).n128_u64[0] = LANES128(v21).n128_u32[0];
      LANES128(v22).n128_u64[1] = LANES128(v21).n128_u32[2];
      v23 = vmulq_f32(v22, v22);
      LANES128(v23).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
              .n64_f32[0] > 0x0.0p+0f) {
        v46 = v22;
        v44 = LANES128(v21).n128_u32[2];
        v45 = LANES128(v21).n128_u32[0];
        v47 = GameData_1a83090;
        v24 = math_Vec3_Angle((float32x4_t*)&v47, &v46);
        LANES128(v25).n128_u64[0] = v45;
        LANES128(v25).n128_u64[1] = v44;
        LANES128(v26).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v27).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v28).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v26).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v29).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v28).n128_i8[8] =
            vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v27).n128_i8[8] =
            vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        *(int8x8_t*)&LANES128(v29).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        if (LANES128_OF(vmlsq_f32(vmulq_f32(v26, v27), v28, v29)).n128_f32[1] <
            0x0.0p+0f) {
          v24 = -v24;
        }
        v18 = v24 * 0x1.ca5dc00000000p+5f;
      }
    }
    result = UnitActor_81ab40((__int64)&a1[7], v18, 0x1.99999a0000000p-4f);
    v20 = *(_OWORD*)a2;
  }
  LANES128(a1[3]).n128_u32[0] = v20;
  v30 = (unsigned __int32*)(a2 + 8);
  v31 = *(_DWORD*)(a2 + 4);
  v32 = a1 + 41;
  LANES128(a1[3]).n128_u32[1] = v31;
  v33 = a1[3];
  LANES128(v33).n128_u32[2] = *v30;
  v34 = (_DWORD*)LANES128(a1[41]).n128_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v33).n128_u32[2];
  a1[3] = v33;
  if (*(_QWORD*)v34 == 0) {
  LABEL_32:
    result = GameHr_14a1520((__int64*)&a1[41], 1);
    LANES128(a1[40]).n128_u8[12] = 0;
    return result;
  }
  v35 = *(_DWORD*)(*(_QWORD*)v34 + 16LL);
  v36 = v34[2];
  if (v35 != v36 | LANES128(a1[40]).n128_u8[12] != 5) {
    if (v35 == v36) {
      return result;
    }
    goto LABEL_32;
  }
  UnitActor_81d430((void*)((float32x4_t*)&v47), (__int64)&a1[7]);
  v38 = (_QWORD*)LANES128(*(v32)).n128_u64[0];
  v39 = *(_QWORD*)LANES128(*(v32)).n128_u64[0];
  if (v39 != 0 && *(_DWORD*)(v39 + 16) == *((_DWORD*)v38 + 2)) {
    v40 = *(_DWORD*)(v39 + 36);
    if (v40 != 0) {
      v41 = COERCE_AS(float32x4_t, v47);
      for (i = 0; i < v40; ++i) {
        if ((int)v40 > (int)i) {
          v43 = *(float32x4_t**)(v39 + 40 + 8LL * (int)i);
          if (v43 != nullptr) {
            v43[1] = v41;
            LANES128(v43[8]).n128_u8[0] = 1;
            v40 = *(_DWORD*)(v39 + 36);
          }
        }
      }
    }
  }
  return game_14a3920((__int64)v38);
}

void game_gmap_134fb00()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 (*v4)();
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned int* v65;
  __int64* v66;
  __int64* v67;
  __int64 v68;
  unsigned int*** v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 (*v77)(_QWORD);
  __int64 v78;
  _QWORD* v79;
  unsigned int* v80;
  __int64 v81;
  unsigned int*** v82;
  unsigned int*** v83;
  unsigned int** v84;
  char* v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  _QWORD* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  struct {
    _QWORD* v109;
    _QWORD* v110;
    __int64 v111;
  } v109_;
  struct {
    _QWORD* v112;
    _QWORD* v113;
    __int64 v114;
  } v112_;
  struct {
    __int64 (**v115)();
    __int64 (*v116)();
    _QWORD* v117;
    char gap72_[8];
    __int64 (**v118)();
  } v115_;

  v115_.v116 = (__int64 (*)())&GameData_1abbb2b;
  v115_.v115 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abbb2b);
  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v115_.v115);
    if (v0 != 0 && *(_DWORD*)(v0 + 32) != 0) {
      TroopMgr_134e920();
    }
  }
  v1 = GameData_212c790;
  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
    v4 = (__int64 (*)())TroopMgr_134c680();
    TroopMgr_134b820((void*)(&v115_.v115), (__int64)v4);
    ProcTroopAction_14b4920((__int64)&v115_.v115);
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v115_.v115 != nullptr) {
      v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v115_.v116 = (__int64 (*)())v115_.v115;
      v7 = 128;
      if (*(_QWORD*)(v6 + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(v6 + v7, (__int64)v115_.v115);
    }
    game_gmap_TroopMgr_GetEncountEnemyList(
        (void*)((__int64 (**)(void))&v115_.v115), v4);
    ProcTroopAction_14b4920((__int64)&v115_.v115);
    if (v115_.v115 != nullptr) {
      v8 = *v5;
      v115_.v116 = (__int64 (*)())v115_.v115;
      v9 = 128;
      if (*(_QWORD*)(v8 + 200) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(v8 + v9, (__int64)v115_.v115);
    }
    TroopMgr_134b820((void*)(&v115_.v115), (__int64)v4);
    v10 = (__int64*)v115_.v115;
    v11 = (__int64*)v115_.v116;
    if (v115_.v115 == (__int64 (**)(void))v115_.v116) {
      if (v115_.v115 == nullptr) {
        goto LABEL_66;
      }
    }
    else {
      do {
        if ((*(_DWORD*)(*v10 + 84) & 0x80000000) == 0) {
          game_gmap_1341ed0(*v10);
        }
        ++v10;
      } while (v10 != v11);
      v10 = (__int64*)v115_.v115;
      if (v115_.v115 == nullptr) {
        goto LABEL_66;
      }
    }
    v12 = *v5;
    v115_.v116 = (__int64 (*)())v10;
    v13 = (__int64)v10;
  LABEL_63:
    v33 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v33, v13);
    goto LABEL_66;
  }
  v115_.v116 = (__int64 (*)())&GameData_1ade186;
  v115_.v115 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ade186);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_66;
  }
  v2 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&v115_.v115);
  if (v2 == 0 || *(int*)(v2 + 32) < 1) {
    goto LABEL_66;
  }
  v112_.v113 = nullptr;
  v112_.v114 = 0;
  v109_.v111 = 0;
  v112_.v112 = nullptr;
  v109_.v109 = nullptr;
  v109_.v110 = nullptr;
  v115_.v115 = GameData_202ddc8;
  v115_.v116 = (__int64 (*)())&v112_.v112;
  v115_.v118 = (__int64 (**)(void))&v115_.v115;
  v115_.v117 = &v109_.v109;
  TroopMgr_13460a0((__int64)&v115_.v115);
  if (v115_.v118 == (__int64 (**)(void))&v115_.v115) {
    v3 = 32;
    goto LABEL_30;
  }
  if (v115_.v118 != nullptr) {
    v3 = 40;
  LABEL_30:
    (*(void (**)(__int64))((char*)*v115_.v118 + v3))((__int64)v115_.v118);
  }
  v14 = v112_.v112;
  v15 = v112_.v113;
  if (v112_.v112 != v112_.v113) {
    v16 = *v1;
    if (*v1 != 0) {
      v17 = fw_memory_g_heap_manager_ptr;
    LABEL_35:
      v18 = *(_QWORD*)(v16 + 8);
      v20 = *(_QWORD*)(v18 + 8);
      v19 = *(_QWORD*)(v18 + 16);
      if (v19 == v20) {
        goto LABEL_50;
      }
      v21 = (v19 - v20) >> 3;
      v22 = 0;
      while (*(_QWORD*)(v20 + 8 * v22) != *v14) {
        if (v21 == ++v22) {
          goto LABEL_50;
        }
      }
      if (v22 < 0) {
        goto LABEL_50;
      }
      v23 = (unsigned int)v22;
      if ((unsigned int)v22 >= v21) {
        goto LABEL_185;
      }
      v24 = *(_QWORD*)(v20 + 8LL * (unsigned int)v22);
      if (v24 != 0) {
        GameHr_133cc40(*(_QWORD*)(v20 + 8LL * (unsigned int)v22));
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v25, v24);
        v20 = *(_QWORD*)(v18 + 8);
        v19 = *(_QWORD*)(v18 + 16);
      }
      v26 = v20 + 8 * v23;
      v27 = v19 - (v26 + 8);
      if (v19 != v26 + 8) {
        memmove(v26, v26 + 8, v19 - (v26 + 8));
      }
      *(_QWORD*)(v18 + 16) = v26 + v27;
    LABEL_50:
      while (++v14 != v15) {
        v16 = *v1;
        if (*v1 != 0) {
          goto LABEL_35;
        }
      }
    }
  }
  CorpsManager_972290(0);
  CorpsManager_972290(1);
  CorpsManager_972290(2);
  CorpsManager_972290(3);
  CorpsManager_972290(4);
  CorpsManager_972290(5);
  CorpsManager_972290(6);
  CorpsManager_972290(7);
  CorpsManager_972290(8);
  v28 = v109_.v109;
  v29 = v109_.v110;
  if (v109_.v109 != v109_.v110) {
    v30 = (__int64*)GameData_212d750;
    v31 = *(_QWORD*)GameData_212d750;
    do {
      if (v31 != 0) {
        GameHr_995200(*v28 + 112LL);
        v31 = *v30;
      }
      ++v28;
    } while (v28 != v29);
    v28 = v109_.v109;
  }
  if (v28 != nullptr) {
    v109_.v110 = v28;
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32,
                                  (__int64)v28);
  }
  v13 = (__int64)v112_.v112;
  if (v112_.v112 != nullptr) {
    v112_.v113 = v112_.v112;
    v12 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    goto LABEL_63;
  }
LABEL_66:
  TroopMgr_134d2e0(*(_QWORD*)(*v1 + 8));
  v34 = *(_QWORD*)(*v1 + 8);
  v35 = *(__int64**)(v34 + 8);
  v36 = *(__int64**)(v34 + 16);
  if (v35 != v36) {
    do {
      v37 = *v35++;
      Troop_1342210(v37);
    } while (v35 != v36);
    v38 = *(_QWORD*)(*GameData_212c790 + 8);
    v35 = *(__int64**)(v38 + 8);
    v36 = *(__int64**)(v38 + 16);
  }
  if (v35 != v36) {
    v39 = 0;
    v40 = nullptr;
    v41 = 0;
    do {
      v42 = *v35;
      if ((Troop_1342e60(*v35) & 1) != 0) {
        if ((unsigned __int64)v40 < v41) {
          *v40++ = v42;
        }
        else {
          v43 = (char*)v40 - v39;
          v44 = ((__int64)v40 - v39) >> 3;
          v45 = v44 + 1;
          if ((unsigned __int64)(v44 + 1) >> 61 != 0) {
          LABEL_183:
            GameRoutine_888610();
          }
          if ((__int64)(v41 - v39) >> 2 > v45) {
            v45 = (__int64)(v41 - v39) >> 2;
          }
          if (v41 - v39 >= 0x7FFFFFFFFFFFFFF8LL) {
            v46 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v46 = v45;
          }
          if (v46 != 0) {
            if (v46 >> 61 != 0) {
            LABEL_184:
              GameRoutine_60a210();
            }
            v47 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v46, 16, 0);
          }
          else {
            v47 = 0;
          }
          v41 = v47 + 8 * v46;
          v48 = (unsigned __int64)v40 - v39;
          v49 = (__int64)&v43[v47 + -8 * v44];
          *(_QWORD*)&v43[v47] = v42;
          v40 = (__int64*)&v43[v47 + 8];
          memcpy(v49, v39, v48);
          if (v39 != 0) {
            v50 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v50 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v39);
          }
          v39 = v49;
        }
      }
      ++v35;
    } while (v35 != v36);
    v51 = GameData_212c790;
    if ((__int64*)v39 != v40) {
      v52 = *GameData_212c790;
      if (*GameData_212c790 != 0) {
        v53 = (_QWORD*)v39;
      LABEL_94:
        v54 = *(_QWORD*)(v52 + 8);
        v56 = *(_QWORD*)(v54 + 8);
        v55 = *(_QWORD*)(v54 + 16);
        if (v55 == v56) {
          goto LABEL_109;
        }
        v57 = (v55 - v56) >> 3;
        v58 = 0;
        while (*(_QWORD*)(v56 + 8 * v58) != *v53) {
          if (v57 == ++v58) {
            goto LABEL_109;
          }
        }
        if (v58 < 0) {
          goto LABEL_109;
        }
        v59 = (unsigned int)v58;
        if ((unsigned int)v58 >= v57) {
          goto LABEL_185;
        }
        v60 = *(_QWORD*)(v56 + 8LL * (unsigned int)v58);
        if (v60 != 0) {
          GameHr_133cc40(*(_QWORD*)(v56 + 8LL * (unsigned int)v58));
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v61 = 128;
          }
          else {
            v61 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v60);
          v56 = *(_QWORD*)(v54 + 8);
          v55 = *(_QWORD*)(v54 + 16);
        }
        v62 = v56 + 8 * v59;
        v63 = v55 - (v62 + 8);
        if (v55 != v62 + 8) {
          memmove(v62, v62 + 8, v55 - (v62 + 8));
        }
        *(_QWORD*)(v54 + 16) = v62 + v63;
      LABEL_109:
        while (++v53 != v40) {
          v52 = *v51;
          if (*v51 != 0) {
            goto LABEL_94;
          }
        }
      }
    }
    if (v39 != 0) {
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v39);
    }
  }
  LOBYTE(v65) = TroopMgr_1349320(nullptr);
  v66 = *(__int64**)(*GameData_212cb08[0] + 64);
  v67 = *(__int64**)(*GameData_212cb08[0] + 72);
  if (v66 == v67) {
    v68 = 0;
    goto LABEL_173;
  }
  v68 = 0;
  v69 = nullptr;
  v70 = 0;
  do {
    v71 = *v66;
    v72 = *(__int64**)(*v66 + 24);
    v73 = *v72;
    v74 = v72[1];
    if (v74 != *v72) {
      while (1) {
        if (*(_QWORD*)v73 != 0) {
          v75 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v76 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v73);
            if (v76 != 0) {
              v77 = *(__int64 (**)(_QWORD))(v76 + 72);
              v78 = *(_QWORD*)(v76 + 80);
              v79 = (_QWORD*)(v76 + (v78 >> 1));
              if ((v78 & 1) != 0) {
                v77 = *(__int64 (**)(_QWORD))((char*)v77 + *v79);
              }
              LOBYTE(v65) = v77(v79);
            }
            else {
              LOBYTE(v65) = 1;
            }
          }
          if (*(_BYTE*)(v73 + 16) != ((v75 == 0) | (unsigned __int8)v65 & 1)) {
            break;
          }
        }
        v73 += 24;
        if (v73 == v74) {
          goto LABEL_118;
        }
      }
      v65 = game_gmap_SpotMgr_FindSpot(*(unsigned int**)(v71 + 48));
      if (v65 != nullptr) {
        v80 = *(unsigned int**)(v71 + 64);
        if (v80 != nullptr) {
          v81 = *(_QWORD*)(*GameData_212c790 + 8);
          v82 = *(unsigned int****)(v81 + 8);
          v83 = *(unsigned int****)(v81 + 16);
          while (1) {
            if (v82 == v83) {
              goto LABEL_118;
            }
            v84 = *v82;
            if (**v82 == v65 && v84[69] == v80) {
              break;
            }
            ++v82;
          }
          if ((unsigned __int64)v69 < v70) {
            *v69++ = v84;
          }
          else {
            v85 = (char*)v69 - v68;
            v86 = ((__int64)v69 - v68) >> 3;
            v87 = v86 + 1;
            if ((unsigned __int64)(v86 + 1) >> 61 != 0) {
              goto LABEL_183;
            }
            if ((__int64)(v70 - v68) >> 2 > v87) {
              v87 = (__int64)(v70 - v68) >> 2;
            }
            if (v70 - v68 >= 0x7FFFFFFFFFFFFFF8LL) {
              v88 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v88 = v87;
            }
            if (v88 != 0) {
              if (v88 >> 61 != 0) {
                goto LABEL_184;
              }
              v89 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v88, 16, 0);
            }
            else {
              v89 = 0;
            }
            v70 = v89 + 8 * v88;
            v90 = (unsigned __int64)v69 - v68;
            v91 = (__int64)&v85[v89 + -8 * v86];
            *(_QWORD*)&v85[v89] = v84;
            v69 = (unsigned int***)&v85[v89 + 8];
            LOBYTE(v65) = memcpy(v91, v68, v90);
            if (v68 != 0) {
              v92 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v92 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, v68);
            }
            v68 = v91;
          }
        }
      }
    }
  LABEL_118:
    ++v66;
  } while (v66 != v67);
  if ((unsigned int***)v68 != v69) {
    v93 = GameData_212c790;
    v94 = *GameData_212c790;
    if (*GameData_212c790 != 0) {
      v95 = (_QWORD*)v68;
      v96 = fw_memory_g_heap_manager_ptr;
    LABEL_157:
      v97 = *(_QWORD*)(v94 + 8);
      v99 = *(_QWORD*)(v97 + 8);
      v98 = *(_QWORD*)(v97 + 16);
      if (v98 == v99) {
        goto LABEL_172;
      }
      v100 = (v98 - v99) >> 3;
      v101 = 0;
      while (*(_QWORD*)(v99 + 8 * v101) != *v95) {
        if (v100 == ++v101) {
          goto LABEL_172;
        }
      }
      if (v101 < 0) {
        goto LABEL_172;
      }
      v102 = (unsigned int)v101;
      if ((unsigned int)v101 < v100) {
        v103 = *(_QWORD*)(v99 + 8LL * (unsigned int)v101);
        if (v103 != 0) {
          GameHr_133cc40(*(_QWORD*)(v99 + 8LL * (unsigned int)v101));
          if (*(_QWORD*)(*(_QWORD*)v96 + 200LL) != 0) {
            v104 = 128;
          }
          else {
            v104 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v96 + v104, v103);
          v99 = *(_QWORD*)(v97 + 8);
          v98 = *(_QWORD*)(v97 + 16);
        }
        v105 = v99 + 8 * v102;
        v106 = v98 - (v105 + 8);
        if (v98 != v105 + 8) {
          memmove(v105, v105 + 8, v98 - (v105 + 8));
        }
        *(_QWORD*)(v97 + 16) = v105 + v106;
      LABEL_172:
        while (1) {
          if (++v95 == v69) {
            goto LABEL_173;
          }
          v94 = *v93;
          if (*v93 != 0) {
            goto LABEL_157;
          }
        }
      }
    LABEL_185:
      GameRoutine_13549e0();
    }
  }
LABEL_173:
  v115_.v115 = GameData_202cfb8;
  v115_.v118 = (__int64 (**)(void))&v115_.v115;
  GameRoutine_ae4560((__int64)&v115_.v115);
  if (v115_.v118 == (__int64 (**)(void))&v115_.v115) {
    v107 = 32;
  }
  else {
    if (v115_.v118 == nullptr) {
      goto LABEL_178;
    }
    v107 = 40;
  }
  (*(void (**)(__int64))((char*)*v115_.v118 + v107))((__int64)v115_.v118);
LABEL_178:
  if (v68 != 0) {
    v108 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v108 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v108,
                                  v68);
  }
}

void game_gmap_14b59c0(_QWORD* a1, float32x4_t*** a2)
{

#pragma clang fp contract(off)
  float32x4_t** v2;
  float32x4_t** v3;
  float32x4_t v4;
  __int64* v6;
  float32x4_t* v7;
  float32x4_t* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  float v13;
  unsigned __int64 v14;
  float32x4_t* v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x4_t v25;
  __int64 v26;
  float32x4_t* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  float32x4_t v31;
  float v32;
  float32x4_t v33;

  v2 = *a2;
  v3 = a2[1];
  if (*a2 != v3) {
    LANES128(v4).n128_u64[0] = 0x4120000041200000LL;
    LANES128(v4).n128_u64[1] = 0x4120000041200000LL;
    v6 = game_map_MapRandom_instance__ptr[0];
    v31 = v4;
    do {
      v8 = *v2;
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v9 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
      v10 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4);
      v11 = *(_DWORD*)v6 ^ (*(_DWORD*)v6 << 11);
      *(_DWORD*)v6 = *((_DWORD*)v6 + 1);
      *((_DWORD*)v6 + 1) = v9;
      v12 = (v11 >> 8) ^ (v10 >> 19) ^ v11 ^ v10;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) = v10;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 4) = v12;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v32 = cosf((float)((float)(v12 & 7) * 0x1.921fb60000000p+2f) *
                 0x1.0000000000000p-3f);
      v13 = sinf((float)((float)(v12 & 7) * 0x1.921fb60000000p+2f) *
                 0x1.0000000000000p-3f);
      v15 = (float32x4_t*)a1[21];
      v14 = a1[22];
      LANES128(v16).n128_u64[0] = LODWORD(v32);
      LANES128(v16).n128_u64[1] = LODWORD(v13);
      v17 = v8[3];
      v18 = vaddq_f32(v17, vmulq_f32(v16, v31));
      if ((unsigned __int64)v15 < v14) {
        LANES128(*(v15)).n128_u64[0] = (unsigned __int64)v8;
        v7 = v15 + 3;
        v15[1] = v17;
        v15[2] = v18;
      }
      else {
        v19 = a1[20];
        v20 = 1 - 0x5555555555555555LL * (((__int64)v15 - v19) >> 4);
        if (v20 > 0x555555555555555LL) {
          GameRoutine_14b6540();
        }
        v33 = v18;
        v21 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v14 - v19) >> 4);
        if (2 * v21 > v20) {
          v20 = 2 * v21;
        }
        if (v21 >= 0x2AAAAAAAAAAAAAALL) {
          v22 = 0x555555555555555LL;
        }
        else {
          v22 = v20;
        }
        if (v22 > 0x555555555555555LL) {
          GameRoutine_60a210();
        }
        v23 = 3 * v22;
        v24 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v22, 16, 0);
        v25 = v8[3];
        v26 = (__int64)v15 + v24 - v19;
        *(_QWORD*)v26 = v8;
        *(float32x4_t*)(v26 + 16) = v25;
        *(float32x4_t*)(v26 + 32) = v33;
        if ((float32x4_t*)v19 != v15) {
          v27 = (float32x4_t*)v19;
          v28 = (_QWORD*)v24;
          do {
            *v28 = LANES128(*(v27)).n128_u64[0];
            v28[3] = LANES128(v27[1]).n128_u64[1];
            v28[2] = LANES128(v27[1]).n128_u64[0];
            v28[5] = LANES128(v27[2]).n128_u64[1];
            v29 = LANES128(v27[2]).n128_i64[0];
            v27 += 3;
            v28[4] = v29;
            v28 += 6;
          } while (v27 != v15);
        }
        v7 = (float32x4_t*)(v26 + 48);
        a1[20] = v24;
        a1[21] = v26 + 48;
        a1[22] = v24 + 16 * v23;
        if (v19 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v19);
        }
      }
      ++v2;
      a1[21] = v7;
    } while (v2 != v3);
  }
}

__int64 game_gmap_172a580(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  unsigned __int64 v21;
  _DWORD* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    _QWORD v31[2];
    int* v32;
    char gap24_[8];
    _QWORD* v33;
  } v31_;
  struct {
    __int64 v34;
    char gap56_[4];
    int v35;
  } v34_;
  __int64 v36;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(a1 + 304);
  v34_.v35 = a2;
  if (v2 == 0 ||
      *(__int64 (***)(void))v2 != game_gmap_anonymous_CorpsUserMenu_vtable) {
    v2 = 0;
  }
  v4 = *(_QWORD*)(a1 + 312);
  if (v4 == 0 ||
      *(__int64 (***)(void))v4 != game_gmap_anonymous_CorpsPoolMenu_vtable) {
    v4 = 0;
  }
  v5 = *(_DWORD*)(v4 + 656);
  v34_.v34 = v4;
  if (v5 < 1) {
    v8 = *(_DWORD**)(v4 + 1072);
  }
  else {
    v6 = *(_QWORD*)(v4 + 672);
    v7 = *(int*)(v4 + 660);
    if (v7 < (signed __int64)(*(_QWORD*)(v4 + 680) - v6) >> 2) {
      v7 = *(int*)(v6 + 4 * v7);
    }
    v8 = (_DWORD*)(*(_QWORD*)(v4 + 1072) + 4 * v7);
  }
  if (*(_DWORD*)v8 == -1 &&
      (((__int64 (*)(__int64))GameRoutine_1728e00)(v4) & 1) != 0) {
    v12 = *(_QWORD*)(v4 + 232);
    v11 = *(_QWORD*)(v4 + 240);
    v13 = v31_.v31;
    v31_.v31[0] = GameData_20b6768;
    v31_.v31[1] = &v34_.v34;
    v31_.v33 = v31_.v31;
    v31_.v32 = &v34_.v35;
    if (v11 != v12) {
      v14 = 0;
      v15 = GameData_212e008[0];
      while (1) {
        v16 = *(_QWORD*)(v12 + 8 * v14);
        if (v16 != 0) {
          v17 = __dynamic_cast(v16, v15, &GameData_20b33d8, 0),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v17 != 0) {
            v36 = v17;
            if (v31_.v33 == nullptr) {
              goto LABEL_45;
            }
            if (((*(__int64 (**)(_QWORD*, __int64*))(*v31_.v33 + 48LL))(
                     v31_.v33, &v36) &
                 1) != 0) {
              goto LABEL_39;
            }
            v12 = *(_QWORD*)(v4 + 232);
            v11 = *(_QWORD*)(v4 + 240);
          }
        }
        if (++v14 >= (unsigned __int64)((v11 - v12) >> 3)) {
          goto LABEL_39;
        }
      }
    }
  LABEL_42:
    v29 = 32;
  LABEL_43:
    (*(void (**)(_QWORD*, __int64, __int64))(*v13 + v29))(v13, v9, v10),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return MultiMenuSequence_17871c0(a1, 1u, v34_.v35);
  }
  v18 = __dynamic_cast(*(_QWORD*)(v2 + 336), GameData_212e008[0],
                       &GameData_20b33d8, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 560LL))(v18) == 0) {
    return MultiMenuSequence_17871c0(a1, 1u, v34_.v35);
  }
  if (*(int*)(v4 + 656) < 1) {
    v22 = *(_DWORD**)(v4 + 1072);
  }
  else {
    v20 = *(_QWORD*)(v4 + 672);
    v21 = *(int*)(v4 + 660);
    if (v21 < (signed __int64)(*(_QWORD*)(v4 + 680) - v20) >> 2) {
      v21 = *(int*)(v20 + 4 * v21);
    }
    v22 = (_DWORD*)(*(_QWORD*)(v4 + 1072) + 4 * v21);
  }
  if (*(_DWORD*)v22 == -1 || (int)GmapCorpsMenu_172b6e0(v4) < 1 ||
      (*(_BYTE*)(a1 + 356) & 1) == 0) {
    return MultiMenuSequence_17871c0(a1, 1u, v34_.v35);
  }
  v24 = *(_QWORD*)(v4 + 232);
  v23 = *(_QWORD*)(v4 + 240);
  v13 = v31_.v31;
  v31_.v31[0] = GameData_20b67e8;
  v31_.v31[1] = &v34_.v34;
  v31_.v33 = v31_.v31;
  v31_.v32 = &v34_.v35;
  if (v23 == v24) {
    goto LABEL_42;
  }
  v25 = 0;
  v26 = GameData_212e008[0];
  do {
    v27 = *(_QWORD*)(v24 + 8 * v25);
    if (v27 != 0) {
      v28 = __dynamic_cast(v27, v26, &GameData_20b33d8, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v28 == 0) {
        goto LABEL_33;
      }
      v36 = v28;
      if (v31_.v33 == nullptr) {
      LABEL_45:
        GameRoutine_60a310(),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v31_.v33 + 48LL))(v31_.v33,
                                                                  &v36) &
           1) != 0) {
        break;
      }
      v24 = *(_QWORD*)(v4 + 232);
      v23 = *(_QWORD*)(v4 + 240);
    }
  LABEL_33:
    ++v25;
  } while (v25 < (v23 - v24) >> 3);
LABEL_39:
  v13 = v31_.v33;
  if (v31_.v33 == v31_.v31) {
    goto LABEL_42;
  }
  if (v31_.v33 != nullptr) {
    v29 = 40;
    goto LABEL_43;
  }
  return MultiMenuSequence_17871c0(a1, 1u, v34_.v35);
}

#pragma GCC visibility pop
