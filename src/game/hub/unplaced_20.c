#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* fw_world_SwapCallables(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void game_edf510(PSEUDO_X8, __int64);
__int64 DungeonRouteReport_f608a0(__int64);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_world_JobContext_Drain(unsigned int*);
__int64 fw_world_JobContext_Wait(__int64 result, unsigned int);
__int64 fw_world_JobQueue_Submit(__int64, int);
__int64 game_14a1b00(__int64*, float);
__int64 game_14a3920(__int64 result);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
bool GameRoutine_d8d3a0(__int64, int);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1adb75f;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff6538[])();
extern __int64* GameData_212d458[7];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbc8[7];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_1a0a550(float, float);
float GameRoutine_1a0a6a0(float, float);
unsigned __int64 DungeonRouteReport_f61900(unsigned __int64 result, __int64*,
                                           __int64, char);
void __attribute__((noreturn)) GameRoutine_f618c0();
void snd_Fade_Fade_10c830(__int64, float);
void game_hub_f60f80(__int64 a1);

void game_hub_f60f80(__int64 a1)
{
  __int64 v2;
  long double v3;
  __int64* v4;
  __int128 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v10;
  __int128 v11;
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
  __int64 v25;
  float v26;
  float v27;
  __int64 v28;
  __int64 v29;
  float v30;
  __int64 v31;
  __int64 v32;
  float v33;
  float v34;
  __int64 v35;
  _BOOL4 v36;
  bool v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  const char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  void* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64* v56;
  __int64 v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64** v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  __int128 v77;
  unsigned int i;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  int v84;
  int v85;
  unsigned int v86;
  int v87;
  unsigned int j;
  __int64 v89;
  __int64*** v90;
  __int64*** v91;
  __int64** v92;
  __int64* v93;
  __int64 v94;
  unsigned int v95;
  int v96;
  unsigned int k;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int128 v101;
  __int128 v102;
  struct {
    __int64 (**v103)();
    void* v104;
    __int64 v105;
    bool v106;
    char gap57_[7];
    unsigned __int64* v107;
  } v103_;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  DungeonRouteReport_f608a0(a1),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = GameData_212dc38[0];
  game_edf510((void*)((__int64)&v103_.v103),
              *(_QWORD*)GameData_212dc38[0] + 16LL),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1a0b950(a1 + 112, &v103_.v103, 240),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v100 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v100;
    __cxa_guard_release(&GameData_21a6130),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v4 = GameData_212d458[0];
  if (*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 32LL) != 0) {
    v5 = *(_OWORD*)(*(_QWORD*)v2 + 32LL);
    goto LABEL_17;
  }
  v5 = GameData_21a6120;
  v6 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v6 != 0) {
    v101 = GameData_21a6120;
    v7 = *(_QWORD*)(*GameData_212d458[0] + 72);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v6),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(__n128*)&v3 = std___1___shared_weak_count___release_weak(v6),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v8 != 0 && v7 != 0) {
      v5 = *(_OWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) + 560LL);
      HIDWORD(v5) = 0;
    LABEL_15:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v102 = v5;
        (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(v8, v3),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(v8),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v5 = v102;
      }
      goto LABEL_17;
    }
    v5 = v101;
  }
  else {
    v8 = 0;
  }
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) == 1) {
    v5 = *(_OWORD*)(*(_QWORD*)GameData_212c6a0[0] + 128LL);
    HIDWORD(v5) = 0;
  }
  if (v8 != 0) {
    goto LABEL_15;
  }
LABEL_17:
  *(_QWORD*)(a1 + 352) = v5;
  v10 = 0x0.0p+0f;
  v11 = *(_OWORD*)(a1 + 352);
  *((_QWORD*)&v11 + 1) = DWORD2(v5);
  *(_OWORD*)(a1 + 352) = v11;
  v12 = *(float*)(a1 + 100);
  v13 = *(float*)(a1 + 104) +
        (float)((float)(*(float*)(*(_QWORD*)
                                      game_script_hub_g_frame_counter_ptr[0] +
                                  160LL) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f);
  *(float*)(a1 + 104) = v13;
  if ((float)(v12 + v12) != 0x0.0p+0f) {
    v14 = GameRoutine_1a0a6a0(v13, v12 + v12),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v14 >= 0x0.0p+0f) {
      v10 = v14 + 0x0.0p+0f;
    }
    else {
      v10 = (float)(v12 + v12) + (float)(v14 + 0x0.0p+0f);
    }
  }
  v15 = GameRoutine_1a0a6a0(v10, v12 + v12),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v16 = GameRoutine_1a0a6a0(v10, v12),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v15 >= v12) {
    v16 = v12 - v16;
  }
  v17 = (float)(PSEUDO_UNFUSED((float)((float)(v16 + 0x0.0p+0f) / v12) *
                               0x1.921fb60000000p+1f)) +
        (float)(roundf((float)((float)((float)(v16 + 0x0.0p+0f) / v12) *
                               0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v17 <= 0x1.921fb60000000p+0f) {
    v19 = 0x1.0000000000000p+0f;
    if (v17 >= -0x1.921fb60000000p+0f) {
      goto LABEL_28;
    }
    v18 = -0x1.921fb60000000p+1f;
  }
  else {
    v18 = 0x1.921fb60000000p+1f;
  }
  v17 = v18 - v17;
  v19 = -0x1.0000000000000p+0f;
LABEL_28:
  v20 = v17 * v17;
  v21 =
      v19 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v20)) *
                                                                            v20)) *
                                                         v20)) *
                                         v20)) *
                      v20) +
              0x1.0000000000000p+0f);
  v22 = GameRoutine_1a0a550(fabsf(v21), 0x1.0000000000000p-1f),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v23 = -0x1.0000000000000p+0f;
  v24 = v22 * 0x1.0000000000000p-1f;
  v25 = *v4;
  if (v21 < 0x0.0p+0f) {
    v23 = 0x1.0000000000000p+0f;
  }
  v26 = (float)(v24 * v23) + 0x1.0000000000000p-1f;
  v27 = 0x0.0p+0f;
  *(float*)(a1 + 108) =
      *(float*)(a1 + 92) +
      (float)(fminf(fmaxf(v26, 0x0.0p+0f), 0x1.0000000000000p+0f) *
              (float)(*(float*)(a1 + 96) - *(float*)(a1 + 92)));
  v28 = *(_QWORD*)(v25 + 88);
  v29 = *(_QWORD*)(v28 + 16);
  if (v29 != *(_QWORD*)(v28 + 8)) {
    v27 = *(float*)(v29 - 12);
  }
  *(float*)(a1 + 60) = v27;
  v30 = v27;
  if (*(_BYTE*)(v28 + 64) == 1) {
    v30 = *(float*)(v28 + 52);
  }
  *(float*)(a1 + 64) = v30;
  v32 = v28 + 8;
  v31 = *(_QWORD*)(v28 + 8);
  v33 = v27 - *(float*)(a1 + 68);
  if (*(_QWORD*)(v32 + 8) == v31) {
    v34 = 0x0.0p+0f;
  }
  else {
    v34 = *(float*)(v31 + 20);
  }
  v103_.v104 = &GameData_1adb75f;
  if (v33 < v34) {
    v33 = v34;
  }
  *(float*)(a1 + 56) = v33;
  v103_.v103 = (__int64 (**)(void))game_HashString((__int64)&GameData_1adb75f),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v36 = game_GameModeData_instance_ != 0 &&
        (v35 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v103_.v103)) != 0 &&
        *(_DWORD*)(v35 + 32) > 0,
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v37 = GameRoutine_d8d3a0(*(_QWORD*)GameData_212dbc8[0], 4),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v38 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v37) {
    v103_.v104 = &GameData_1adb75f;
    v103_.v103 =
        (__int64 (**)(void))game_HashString((__int64)&GameData_1adb75f),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    game_VariableManager_SetFlag((__int64)&v103_.v103, !v36),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v39 = fw_memory_HeapManager_Allocate(*v38, 32, 16, 0),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v40 = v39;
    if (v36) {
      strcpy((char*)(v39 + 24), "_Off");
      v41 = "SE_SYS_Dungeon_FootPrint_Off";
    }
    else {
      strcpy((char*)(v39 + 23), "t_On");
      v41 = "SE_SYS_Dungeon_FootPrint_On";
    }
    v42 = *(_QWORD*)v41;
    v43 = *((_QWORD*)v41 + 1);
    v44 = *((_QWORD*)v41 + 2);
    *(_QWORD*)v39 = v42;
    *(_QWORD*)(v39 + 8) = v43;
    *(_QWORD*)(v39 + 16) = v44;
    snd_Fade_Fade_10c830((__int64)&v103_.v103, 0x0.0p+0f),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    snd_play_ff2d0(v40, v40, (__int64)&v103_.v103, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    snd_Fade_Destroy_Fade(&v103_.v103),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LOBYTE(v36) = !v36;
    v45 = 128;
    if (*(_QWORD*)(*v38 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*v38 + v45),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v47 = *(void**)(a1 + 8);
  v46 = *(_QWORD*)(a1 + 16);
  v48 = (__int64*)GameData_21323e8[0];
  fw_world_JobContext_Drain(*(unsigned int**)GameData_21323e8[0]),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v49 = *v48;
  v50 = *v48 + 32;
  do {
    v51 = *(_DWORD*)(v49 + 8);
    v52 = (v51 + 1) & 0xFFFFFF;
    if (v51 + 1 <= 0) {
      v52 = -(-(v51 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v49 + 8) = v52;
    v53 = atomic_load((unsigned __int64*)(v50 + 32LL * (v51 & 0x3F)));
    if (v53 != 0) {
      v51 = -1;
    }
  } while (v51 < 0);
  v54 = v46 - (_QWORD)v47;
  v55 = v51 | 0xC0000000;
  v56 = (unsigned __int64*)(v50 + 32LL * (v51 & 0x3F));
  v57 = v54 >> 3;
  nn_os_ClearLightEvent(v56 + 1),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v58 = (_QWORD*)fw_memory_HeapManager_Allocate(*v38, 80, 16, 0),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v58[2] = 0;
  v59 = v58;
  v60 = GameData_212e368[0];
  v58[8] = 0;
  *v58 = v60 + 16;
  v58[1] = 0;
  v61 = v56[3];
  v56[3] = (unsigned __int64)v59;
  if (v61 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v61 + 8LL))(v61),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  atomic_store(v55, v56);
  v103_.v106 = v36;
  v59[1] = v49;
  *((_DWORD*)v59 + 4) = v55;
  v103_.v104 = v47;
  v103_.v105 = v57;
  v103_.v103 = GameData_1ff6538;
  v103_.v107 = (unsigned __int64*)&v103_.v103;
  fw_world_SwapCallables(&v103_.v103, v59 + 4),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v103_.v107 == (unsigned __int64*)&v103_.v103) {
    v62 = 32;
    goto LABEL_62;
  }
  if (v103_.v107 != nullptr) {
    v62 = 40;
  LABEL_62:
    (*(void (**)(__int64))(*v103_.v107 + v62))((__int64)v103_.v107),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  fw_world_JobQueue_Submit(*(_QWORD*)(v49 + 16), v55),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  fw_world_JobContext_Wait(*v48, v55),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v64 = *(_QWORD*)(a1 + 8);
  v63 = *(_QWORD*)(a1 + 16);
  v65 = v63 - v64;
  if (v63 == v64) {
    return;
  }
  if ((v65 & 0x8000000000000000LL) != 0) {
    GameRoutine_f618c0(),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v66 = fw_memory_HeapManager_Allocate(*v38, v63 - v64, 16, 0),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1a0b950(v66, v64, v65),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v67 = v65 >> 3;
  DungeonRouteReport_f61900(v66, (__int64*)(v66 + v65),
                            (2 * __clz(v65 >> 3)) ^ 0x7E, 1),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v68 = 0;
  v69 = 0;
  do {
    v71 = *(_QWORD*)(v66 + 8 * v68);
    if (*(_BYTE*)(v71 + 72) == 1) {
      v72 = *(_QWORD*)(v71 + 24);
      if (v69 < *(_DWORD*)(v72 + 88)) {
        v73 = *(__int64***)(v71 + 80);
        if (v73 == nullptr) {
          v91 = *(__int64****)(v72 + 32);
          v90 = *(__int64****)(v72 + 40);
          if (v91 != v90) {
            while (*(_BYTE*)*v91 == 1) {
              v91 += 2;
              if (v91 == v90) {
                goto LABEL_104;
              }
            }
          }
          if (v91 == v90) {
          LABEL_104:
            *(_QWORD*)(v71 + 80) = 0;
            LODWORD(v70) = 1;
            goto LABEL_68;
          }
          v92 = *v91;
          v93 = (*v91)[1];
          *(_BYTE*)*v91 = 1;
          v94 = *v93;
          if (*v93 != 0 && *(_DWORD*)(v94 + 16) == *((_DWORD*)v93 + 2)) {
            *(_BYTE*)(v94 + 33) = 1;
            if (*(_BYTE*)v92 == 0) {
              game_14a1b00(v92[1], 0x0.0p+0f),
                  v3 = COERCE_AS(__typeof__(v3),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
          v73 = *v91;
          *(_QWORD*)(v71 + 80) = v73;
          if (v73 == nullptr) {
            goto LABEL_116;
          }
        }
        v74 = (__int64)v73[1];
        v75 = *(_QWORD*)v74;
        if (*(_QWORD*)v74 != 0 && *(_DWORD*)(v75 + 16) == *(_DWORD*)(v74 + 8)) {
          v76 = *(_DWORD*)(v75 + 36);
          if (v76 != 0) {
            v77 = *(_OWORD*)(v71 + 32);
            for (i = 0; i < v76; ++i) {
              if ((int)v76 > (int)i) {
                v79 = *(_QWORD*)(v75 + 40 + 8LL * (int)i);
                if (v79 != 0) {
                  *(_OWORD*)(v79 + 16) = v77;
                  *(_BYTE*)(v79 + 128) = 1;
                  v76 = *(_DWORD*)(v75 + 36);
                }
              }
            }
          }
        }
        game_14a3920(v74),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v82 = v73[1];
        v83 = *v82;
        if (*v82 != 0) {
          v84 = *(_DWORD*)(v83 + 16);
          v85 = *((_DWORD*)v82 + 2);
          if (v84 == v85) {
            v86 = *(_DWORD*)(v83 + 36);
            if (v86 == 0) {
              goto LABEL_108;
            }
            v87 = *(_DWORD*)(v71 + 52);
            for (j = 0; j < v86; ++j) {
              if ((int)v86 > (int)j) {
                v89 = *(_QWORD*)(v83 + 40 + 8LL * (int)j);
                if (v89 != 0) {
                  *(_DWORD*)(v89 + 48) = v87;
                  *(_BYTE*)(v89 + 128) = 1;
                  v86 = *(_DWORD*)(v83 + 36);
                }
              }
            }
            v82 = v73[1];
            v83 = *v82;
            if (*v82 == 0) {
              goto LABEL_115;
            }
            v84 = *(_DWORD*)(v83 + 16);
            v85 = *((_DWORD*)v82 + 2);
          }
          if (v84 == v85) {
          LABEL_108:
            v95 = *(_DWORD*)(v83 + 36);
            if (v95 != 0) {
              v96 = *(_DWORD*)(v71 + 48);
              for (k = 0; k < v95; ++k) {
                if ((int)v95 > (int)k) {
                  v98 = *(_QWORD*)(v83 + 40 + 8LL * (int)k);
                  if (v98 != 0) {
                    *(_DWORD*)(v98 + 52) = v96;
                    *(_BYTE*)(v98 + 128) = 1;
                    v95 = *(_DWORD*)(v83 + 36);
                  }
                }
              }
              v82 = v73[1];
            }
          }
        }
      LABEL_115:
        game_14a1b00(v82, *(float*)(v71 + 56) *
                              *(float*)(*(_QWORD*)(v71 + 24) + 108LL)),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_116:
        LODWORD(v70) = 1;
        goto LABEL_68;
      }
    }
    v70 = *(_QWORD*)(v71 + 80);
    if (v70 != 0) {
      v80 = *(_QWORD*)(v70 + 8);
      *(_BYTE*)v70 = 0;
      v81 = *(_QWORD*)v80;
      if (*(_QWORD*)v80 != 0 && *(_DWORD*)(v81 + 16) == *(_DWORD*)(v80 + 8)) {
        *(_BYTE*)(v81 + 33) = 0;
        if (*(_BYTE*)v70 == 0) {
          v80 = *(_QWORD*)(v70 + 8);
          goto LABEL_66;
        }
      }
      else {
      LABEL_66:
        game_14a1b00((__int64*)v80, 0x0.0p+0f),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      LODWORD(v70) = 0;
      *(_QWORD*)(v71 + 80) = 0;
    }
  LABEL_68:
    v69 += v70;
    ++v68;
  } while (v68 != v67);
  v99 = 128;
  if (*(_QWORD*)(*v38 + 200) == 0) {
    v99 = 56;
  }
  nn_mem_StandardAllocator_Free(*v38 + v99),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
}

#pragma GCC visibility pop
