#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 (***game_gmap_SpotMgr_OnProgressCycle(int))();
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, unsigned int);
__int64 GameRoutine_efbb60(__int64, __int64*, char);
__int64 ScheduleNatives_869ec0();
__int64 Unit_6cfa20(__int64);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN GameData_1aa0a93;
extern __int64 (*GameData_1faf3d8[])();
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_21f3cc8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f61c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
void GmapSituation_14dc380();
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_facility_947f80(int a1);

void game_facility_947f80(int a1)
{
  __int64 (***v2)();
  __int64*** v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64* i;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  struct {
    __int64* v17;
    __int64 v18;
    __int64 v19;
  } v17_;
  struct {
    __int64 (**v20)();
    __int64* v21;
    char gap48_[16];
    __int64* v22;
  } v20_;
  __int64 v23;

  v2 = &v20_.v20;
  v3 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v17_.v17 = nullptr;
  v17_.v18 = 0;
  v17_.v19 = 0;
  v20_.v20 = GameData_1faf3d8;
  v20_.v21 = (__int64*)&v17_.v17;
  v20_.v22 = (__int64*)&v20_.v20;
  v4 = *v3;
  v5 = v3[1];
  if (*v3 == v5) {
    goto LABEL_19;
  }
  do {
    v6 = *v4;
    v7 = (__int64)v4[1];
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v6 != nullptr) {
      v8 = (v6[6] & 0x3F) == 0;
      if (v7 == 0) {
        goto LABEL_11;
      }
    }
    else {
      v8 = false;
      if (v7 == 0) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
      if (!v8) {
        goto LABEL_3;
      }
      goto LABEL_12;
    }
  LABEL_11:
    if (v8) {
    LABEL_12:
      v23 = **v4;
      if (v20_.v22 == nullptr) {
        GameRoutine_60a310();
      }
      (*(void (**)(__int64, __int64))(*v20_.v22 + 48))((__int64)v20_.v22,
                                                       (__int64)&v23);
    }
  LABEL_3:
    v4 += 2;
  } while (v4 != v5);
  v2 = (__int64 (***)(void))v20_.v22;
  if (v20_.v22 != (__int64*)&v20_.v20) {
    if (v20_.v22 != nullptr) {
      v9 = 5;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
LABEL_19:
  v9 = 4;
LABEL_20:
  ((void (*)(__int64))(*v2)[v9])((__int64)v2);
LABEL_21:
  if (game_GameModeData_instance_ != 0) {
    v10 = (*(int*)(game_GameModeData_instance_ + 72) - a1) &
          ~((signed __int32)(*(int*)(game_GameModeData_instance_ + 72) - a1) >>
            31);
    if (v10 >= 9999999) {
      v10 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v10;
  }
  v11 = v17_.v17;
  for (i = (__int64*)v17_.v18; v11 != i; *(_BYTE*)(v13 + 2090) = 3) {
    v13 = *v11++;
    Unit_6cfa20(v13);
  }
  v20_.v21 = (__int64*)&GameData_1aa0a93;
  v20_.v20 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aa0a93);
  GameRoutine_9b11a0(&GameData_21f61c0, (unsigned __int64*)&v20_.v20, 1u);
  GmapSituation_14dc380();
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v14 = GameData_21f3cc8;
    if (GameData_21f3cc8 != 0) {
      *(_BYTE*)(GameData_21f3cc8 + 25) = 0;
      *(_DWORD*)(v14 + 8) = 1;
      if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
        *(_BYTE*)(GameData_21f3d10 + 11) = 1;
        v20_.v20 = nullptr;
        v20_.v21 = nullptr;
        GameRoutine_efbb60(*(_QWORD*)GameData_212dbf0[0], (__int64*)&v20_.v20,
                           0);
        if (game_script_hub_talk_g_select_menu != 0) {
          *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
        }
      }
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
      }
    }
  }
  else {
    v15 = ScheduleNatives_869ec0();
    game_gmap_SpotMgr_OnProgressCycle(v15 & 1);
  }
  if (v17_.v17 != nullptr) {
    v17_.v18 = (__int64)v17_.v17;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  (__int64)v17_.v17);
  }
}

#pragma GCC visibility pop
