#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_1603f20(PSEUDO_X8, _QWORD*);

__int64* game_820d50(int);

__int64 Config_bc7840(__int64, __int64);

__int64 GameHr_1383a10(__int64, int);

__int64 GameHr_17cc7d0(__int64, const char*, const char*, char, const char*,
                       char);

__int64 GameRoutine_12e1980();

__int64 GameRoutine_18e4620(__int64 result, __int64);

__int64 GameRoutine_91afe0();

__int64 GmapExploreInfo_135c2e0(__int64, __int64, char);

__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);

__int64 ProcList_9bd480(__int64);

__int64 ProcMapSeqSkill_91a4d0();

__int64 ProcMapSeqSkill_91a5f0();

__int64 ProcMapSeqSkill_91a6a0();

__int64 ProcMapSeqSkill_91a780();

__int64 ProcMapSeqSkill_91a960();

__int64 ProcMapSeqSkill_91abc0();

__int64 ProcMapSeqSkill_91af10();

__int64 ProcMapSeqSkill_91aff0();

__int64 ProcMapSeqSkill_91b020(__int16, __int64);

__int64 SpotMgr_132ffa0(unsigned int*);

__int64 Troop_133ed80(__int64 result, __int64);

__int64 UnitItemList_710300(unsigned __int16*, __int64);

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);

__int64 game_11912b0(__int64, const char**, const char*, __int64);

__int64 game_GameCalendar_ProcNotifyBirthday_Notify();

__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);

__int64 game_HashString(__int64 result);

__int64 game_ProcInst_Register(__int64);

__int64 game_ProcList_Call_9bcfa0(__int64, __int64);

__int64 game_Unit_GetParam(__int64);

__int64 game_VariableManager_SetFlag(__int64 result, int);

__int64 game_map_anonymous_ProcMapSeqSkill_TryGiveSkill();

__int64 memcpy(__int64, __int64, unsigned __int64);

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);

__int64 nn_os_LockMutex(__int64);

__int64 nn_os_UnlockMutex(__int64);

__int64 std___1___shared_weak_count___release_weak(_QWORD);

char* game_GmapExploreData_GetObtainedFirstFlagName(__int64);

char* game_GmapExploreData_GetShowRareFlagName(__int64);

const char* game_HashString32(const char* result);

extern _UNKNOWN GameData_1a86d61;

extern _UNKNOWN GameData_1a8ad4c;

extern _UNKNOWN GameData_1a95031;

extern _UNKNOWN GameData_1aa5d66;

extern _UNKNOWN GameData_1aa5d8e;

extern _UNKNOWN GameData_1ab1630;

extern _UNKNOWN GameData_1ac4755;

extern _UNKNOWN GameData_1ac8613;

extern _UNKNOWN GameData_1adf7ed;

extern _UNKNOWN GameData_1ae73e9;

extern _UNKNOWN GameData_1aeb0c0;

extern _UNKNOWN GameData_1af68bb;

extern _UNKNOWN GameData_1af68df;

extern _UNKNOWN GameData_21f3fd8;

extern _UNKNOWN GameData_2240ed8;

extern _UNKNOWN game_g_random_mutex;

extern __int64 (*GameData_1fadcf0[])();

extern __int64 (*GameData_2023ae0[])();

extern __int64 (*GameData_2023b60[])();

extern __int64 (*GameData_202eba8[])();

extern __int64 (*game_GameCalendar_ProcNotifyBirthday_vtable[])();

extern __int64 (*game_map_anonymous_ProcMapSeqSkill_vtable[])();

extern __int64* GameData_212c780;

extern __int64* GameData_212c790;

extern __int64* GameData_212c880[5];

extern __int64* GameData_2130e70;

extern __int64* game_map_MapRandom_instance__ptr[3];

extern __int64 GameData_212c608[2];

extern __int64 GameData_212c6c0[2];

extern __int64 GameData_2130f48;

extern __int64 GameData_21ca000;

extern __int64 GameData_21f3d20;

extern __int64 GameData_21f3d28;

extern __int64 GameData_21f3d30;

extern __int64 GameData_21f3d40;

extern __int64 GameData_21f3d50;

extern __int64 GameData_21f3d60;

extern __int64 GameData_21f3d68;

extern __int64 GameData_21f3d70;

extern __int64 GameData_21f3d80;

extern __int64 GameData_21f3d90;

extern __int64 GameData_21f3da0;

extern __int64 GameData_21f3da8;

extern __int64 GameData_21f3db0;

extern __int64 GameData_21f3dc0;

extern __int64 GameData_21f3dd0;

extern __int64 GameData_21f3de0;

extern __int64 GameData_21f3de8;

extern __int64 GameData_21f3df0;

extern __int64 GameData_21f3e00;

extern __int64 GameData_21f3e10;

extern __int64 GameData_21f3e20;

extern __int64 GameData_21f3e28;

extern __int64 GameData_21f3e30;

extern __int64 GameData_21f3e40;

extern __int64 GameData_21f3e50;

extern __int64 GameData_21f3e60;

extern __int64 GameData_21f3e68;

extern __int64 GameData_21f3e70;

extern __int64 GameData_21f3e80;

extern __int64 GameData_21f3e90;

extern __int64 GameData_21f3ea0;

extern __int64 GameData_21f3ea8;

extern __int64 GameData_21f3eb0;

extern __int64 GameData_21f3ec0;

extern __int64 GameData_21f3ed0;

extern __int64 GameData_21f3ee0;

extern __int64 GameData_21f3ee8;

extern __int64 GameData_21f3ef0;

extern __int64 GameData_21f3f00;

extern __int64 GameData_21f3f10;

extern __int64 GameData_21f3f20;

extern __int64 GameData_21f3f28;

extern __int64 GameData_21f3f30;

extern __int64 GameData_21f3f40;

extern __int64 GameData_21f3f50;

extern __int64 GameData_21f3f60;

extern __int64 GameData_21f3f68;

extern __int64 GameData_21f3f70;

extern __int64 GameData_21f3f80;

extern __int64 GameData_21f3f90;

extern __int64 GameData_21f3fa0;

extern __int64 GameData_21f3fa8;

extern __int64 GameData_21f3fb0;

extern __int64 GameData_21f3fc0;

extern __int64 GameData_21f3fd0;

extern __int64 GameData_2240d60;

extern __int64 GameData_2240d68;

extern __int64 GameData_2240d70;

extern __int64 GameData_2240d80;

extern __int64 GameData_2240d90;

extern __int64 GameData_2240da0;

extern __int64 GameData_2240da8;

extern __int64 GameData_2240db0;

extern __int64 GameData_2240dc0;

extern __int64 GameData_2240dd0;

extern __int64 GameData_2240de0;

extern __int64 GameData_2240de8;

extern __int64 GameData_2240df0;

extern __int64 GameData_2240e00;

extern __int64 GameData_2240e10;

extern __int64 GameData_2240e20;

extern __int64 GameData_2240e28;

extern __int64 GameData_2240e30;

extern __int64 GameData_2240e40;

extern __int64 GameData_2240e50;

extern __int64 GameData_2240e60;

extern __int64 GameData_2240e68;

extern __int64 GameData_2240e70;

extern __int64 GameData_2240e80;

extern __int64 GameData_2240e90;

extern __int64 GameData_2240ea0;

extern __int64 GameData_2240ea8;

extern __int64 GameData_2240eb0;

extern __int64 GameData_2240ec0;

extern __int64 GameData_2240ed0;

extern __int64 eft_g_effectSystem;

extern __int64 fw_memory_g_heap_manager_ptr;

extern __int64 game_GameModeData_instance_;

extern __int64 game_gmap_GmapClock_instance_;

extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;

extern char GameData_21f3d18;

extern char GameData_21f3d58;

extern char GameData_21f3d98;

extern char GameData_21f3dd8;

extern char GameData_21f3e18;

extern char GameData_21f3e58;

extern char GameData_21f3e98;

extern char GameData_21f3ed8;

extern char GameData_21f3f18;

extern char GameData_21f3f58;

extern char GameData_21f3f98;

extern char GameData_2240d58;

extern char GameData_2240d98;

extern char GameData_2240dd8;

extern char GameData_2240e18;

extern char GameData_2240e58;

extern char GameData_2240e98;

extern int GameData_21f3d38;

extern int GameData_21f3d48;

extern int GameData_21f3d78;

extern int GameData_21f3d88;

extern int GameData_21f3db8;

extern int GameData_21f3dc8;

extern int GameData_21f3df8;

extern int GameData_21f3e08;

extern int GameData_21f3e38;

extern int GameData_21f3e48;

extern int GameData_21f3e78;

extern int GameData_21f3e88;

extern int GameData_21f3eb8;

extern int GameData_21f3ec8;

extern int GameData_21f3ef8;

extern int GameData_21f3f08;

extern int GameData_21f3f38;

extern int GameData_21f3f48;

extern int GameData_21f3f78;

extern int GameData_21f3f88;

extern int GameData_21f3fb8;

extern int GameData_21f3fc8;

extern int GameData_2240d78;

extern int GameData_2240d88;

extern int GameData_2240db8;

extern int GameData_2240dc8;

extern int GameData_2240df8;

extern int GameData_2240e08;

extern int GameData_2240e38;

extern int GameData_2240e48;

extern int GameData_2240e78;

extern int GameData_2240e88;

extern int GameData_2240eb8;

extern int GameData_2240ec8;

int __cxa_guard_acquire(__int64);

unsigned int* GameRoutine_714df0();

void __attribute__((noreturn)) GameRoutine_60a210();

void __attribute__((noreturn)) GameRoutine_b0ac30();

void __cxa_guard_release(__int64);

void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 llvm_libcxx_21_libcxx_include___vector_919f50(__int64 result,
                                                      __int64 a2, int* a3,
                                                      char a4);

__int64 llvm_libcxx_21_libcxx_include___vector_bcb9e0(_QWORD* a1);

void llvm_libcxx_21_libcxx_include___vector_12e06e0(__int64 a1);

__int64 llvm_libcxx_21_libcxx_include___vector_135c560(__int64 a1, char a2);

__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);

__int64 std___1___shared_weak_count___release_weak_alt1(__int64);

extern _UNKNOWN* GameData_212c730;

extern __int64 (*GameData_1fbb360[])();

extern __int64 (*GameData_1fbbb00[])();

extern __int64 (*GameData_1fbbb90[])();

extern __int64 (*GameData_1fbc178[])();

extern __int64 (*GameData_1fbc918[])();

extern __int64 (*GameData_1fbc9a8[])();

extern __int64 (*GameData_1fbca38[])();

extern __int64 (*game_anonymous_DiffMenu_DiffMenuItem_vtable[])();

extern __int64 (*game_anonymous_DiffMenu_vtable[])();

extern __int64 (*game_anonymous_ModeMenu_ModeMenuItem_vtable[])();

extern __int64 (*game_anonymous_ModeMenu_vtable[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1fbb260[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1fbb7b8[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1fbc078[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1fbc5d0[])();

extern __int64* GameData_212e008[9];

extern __int64 GameData_1fbbad8;

extern __int64 GameData_1fbc8f0;

void BasicMenuCursor_16e0c00(_QWORD*, __int64);

void __attribute__((noreturn)) GameRoutine_60a310();

__int64 llvm_libcxx_21_libcxx_include___vector_a092a0(__int64 a1);

__int64 llvm_libcxx_21_libcxx_include___vector_a096c0(__int64 a1);

__int64 llvm_libcxx_21_libcxx_include___vector_919f50(__int64 result,
                                                      __int64 a2, int* a3,
                                                      char a4)
{
  __int64 v7;
  __int64* v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  char v20;
  __int64* v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  struct {
    _QWORD v36[4];
    _QWORD* v37;
  } v36_;

  if (a2 == 0 || (*a3 & 0xFFF) == 0) {
    return result;
  }
  v7 = result;
  v8 = game_map_MapRandom_instance__ptr[0];
  v9 = *(__int16*)(a2 + 492);
  v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL));
  v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
  v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v35 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  if (v9 >= 2) {
    v13 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a3 & 0xFFF));
    if (*(_WORD*)(v13 + 256) != 0) {
      v14 = **(__int16**)(v13 + 264);
      if (v14 < 0) {
        v33 = *(unsigned __int8*)(v13 + 250);
        if (v33 == 9) {
          goto LABEL_37;
        }
        if (v33 == 10) {
          LOBYTE(v36_.v36[0]) = 0;
          v34 = game_Unit_GetParam(a2);
          if (v34 * (unsigned __int16)-(__int16)v14 != 0 &&
              v34 * (unsigned int)(unsigned __int16)-(__int16)v14 <
                  0xFFFFFF3A) {
            goto LABEL_37;
          }
          LOWORD(v9) = *(_WORD*)(a2 + 492);
        }
      }
    }
  }
  LOBYTE(v36_.v36[0]) = 0;
  if ((int)game_Unit_GetParam(a2) > (__int16)v9) {
    v15 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a3 & 0xFFF));
    if (*(_WORD*)(v15 + 256) != 0) {
      v16 = **(__int16**)(v15 + 264);
      if (v16 >= 1) {
        v17 = *(unsigned __int8*)(v15 + 250);
        if (v17 == 9) {
          goto LABEL_37;
        }
        if (v17 == 10) {
          LOBYTE(v36_.v36[0]) = 0;
          v18 = game_Unit_GetParam(a2);
          if (v18 * v16 != 0 && (unsigned int)(v18 * v16) < 0xFFFFFF3A) {
            goto LABEL_37;
          }
        }
      }
    }
  }
  v19 = *(_QWORD*)(a2 + 440);
  if (v19 != 0) {
    v20 = *(_BYTE*)(v19 + 16);
  }
  else {
    v20 = 9;
  }
  if (((1 << v20) & 0xF1) == 0) {
    v24 = *a3;
    v25 = *GameData_212c880[0];
    goto LABEL_27;
  }
  v21 = game_820d50(2);
  if (game_GameModeData_instance_ != 0 &&
      (v22 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v21)) != 0) {
    v23 = *(_DWORD*)(v22 + 32);
    v24 = *a3;
    v25 = *GameData_212c880[0];
    if (v23 != 0) {
      goto LABEL_27;
    }
  }
  else {
    v24 = *a3;
    v25 = *GameData_212c880[0];
  }
  v26 = *(_QWORD*)(*(_QWORD*)(v25 + 64) + 8LL * (v24 & 0xFFF));
  if (v26 != 0 && (unsigned int)*(unsigned __int8*)(v26 + 250) - 33 <= 1 &&
      *(_WORD*)(v26 + 256) != 0 && **(_WORD**)(v26 + 264) != 0) {
    goto LABEL_37;
  }
LABEL_27:
  v27 = *(_QWORD*)(*(_QWORD*)(v25 + 64) + 8LL * (v24 & 0xFFF));
  if (v27 != 0 && *(_BYTE*)(v27 + 250) == 35) {
    if ((UnitItemList_710300((unsigned __int16*)(a2 + 828), a2) & 0x80000000) ==
        0) {
      goto LABEL_37;
    }
    v24 = *a3;
  }
  v36_.v36[0] = GameData_1fadcf0;
  v36_.v36[1] = a2;
  v36_.v37 = v36_.v36;
  v28 = ProcMapSeqSkill_91b020(v24, (__int64)v36_.v36);
  result = (__int64)v36_.v37;
  if (v36_.v37 == v36_.v36) {
    v29 = 32;
  }
  else {
    if (v36_.v37 == nullptr) {
      goto LABEL_36;
    }
    v29 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v36_.v37 + v29))((__int64)v36_.v37);
LABEL_36:
  if ((v28 & 1) == 0) {
    v32 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a3 & 0xFFF));
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8) = v11;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 4) = v10;
    LOWORD(v32) = *(_WORD*)(v32 + 754);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8) = v12;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 12) = v35;
    if ((v32 & 0x1000) == 0) {
      return result;
    }
    goto LABEL_38;
  }
LABEL_37:
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8) = v11;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 4) = v10;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8) = v12;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 12) = v35;
LABEL_38:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f3fd8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21f3fd8) != 0) {
    GameData_21f3d20 = 0;
    GameData_21f3d28 = (__int64)ProcMapSeqSkill_91a4d0;
    GameData_21f3d18 = 13;
    GameData_21f3d58 = 13;
    GameData_21f3d98 = 13;
    GameData_21f3dd8 = 13;
    GameData_21f3e18 = 13;
    GameData_21f3e58 = 13;
    GameData_21f3e98 = 13;
    GameData_21f3ed8 = 13;
    GameData_21f3f18 = 13;
    GameData_21f3d30 = 0;
    GameData_21f3d38 = 0;
    GameData_21f3d40 = 0;
    GameData_21f3d60 = 0;
    GameData_21f3d68 = (__int64)ProcMapSeqSkill_91a5f0;
    GameData_21f3f28 = (__int64)GameRoutine_91afe0;
    GameData_21f3d48 = 0;
    GameData_21f3d50 = 0;
    GameData_21f3d70 = 0;
    GameData_21f3d78 = 0;
    GameData_21f3d80 = 0;
    GameData_21f3d88 = 0;
    GameData_21f3d90 = 0;
    GameData_21f3da0 = 0;
    GameData_21f3da8 = (__int64)ProcMapSeqSkill_91a6a0;
    GameData_21f3f58 = 15;
    GameData_21f3db0 = 0;
    GameData_21f3db8 = 0;
    GameData_21f3dc0 = 0;
    GameData_21f3dc8 = 0;
    GameData_21f3dd0 = 0;
    GameData_21f3df0 = 0;
    GameData_21f3de0 = 0;
    GameData_21f3de8 = (__int64)ProcMapSeqSkill_91a780;
    GameData_21f3df8 = 0;
    GameData_21f3e00 = 0;
    GameData_21f3e08 = 0;
    GameData_21f3e10 = 0;
    GameData_21f3e30 = 0;
    GameData_21f3e38 = 0;
    GameData_21f3e40 = 0;
    GameData_21f3e48 = 0;
    GameData_21f3e50 = 0;
    GameData_21f3e20 = 0;
    GameData_21f3e28 = (__int64)ProcMapSeqSkill_91a960;
    GameData_21f3e70 = 0;
    GameData_21f3e78 = 0;
    GameData_21f3e80 = 0;
    GameData_21f3e88 = 0;
    GameData_21f3e90 = 0;
    GameData_21f3eb0 = 0;
    GameData_21f3eb8 = 0;
    GameData_21f3ec0 = 0;
    GameData_21f3ec8 = 0;
    GameData_21f3e60 = 0;
    GameData_21f3e68 = (__int64)ProcMapSeqSkill_91abc0;
    GameData_21f3ed0 = 0;
    GameData_21f3ef0 = 0;
    GameData_21f3ef8 = 0;
    GameData_21f3f00 = 0;
    GameData_21f3f08 = 0;
    GameData_21f3f10 = 0;
    GameData_21f3f20 = 0;
    GameData_21f3f30 = 0;
    GameData_21f3f38 = 0;
    GameData_21f3ea0 = 0;
    GameData_21f3ea8 = (__int64)game_map_anonymous_ProcMapSeqSkill_TryGiveSkill;
    GameData_21f3f40 = 0;
    GameData_21f3f48 = 0;
    GameData_21f3f50 = 0;
    GameData_21f3f60 = 0;
    GameData_21f3f68 = (__int64)ProcMapSeqSkill_91aff0;
    GameData_21f3f70 = 0;
    GameData_21f3f78 = 0;
    GameData_21f3f80 = 0;
    GameData_21f3f88 = 0;
    GameData_21f3ee0 = 0;
    GameData_21f3ee8 = (__int64)ProcMapSeqSkill_91af10;
    GameData_21f3f90 = 0;
    GameData_21f3f98 = 0;
    GameData_21f3fc0 = 0;
    GameData_21f3fc8 = 0;
    GameData_21f3fd0 = 0;
    GameData_21f3fb8 = 0;
    GameData_21f3fb0 = 0;
    GameData_21f3fa8 = 0;
    GameData_21f3fa0 = 0;
    __cxa_guard_release((__int64)&GameData_21f3fd8);
  }
  v30 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       168, 16, 0);
  v31 = GameData_212c608[0];
  *(_QWORD*)(v30 + 96) = 0;
  *(_QWORD*)(v30 + 104) = 0;
  *(_QWORD*)(v30 + 112) = 0;
  *(_QWORD*)(v30 + 120) = 0;
  *(_QWORD*)(v30 + 128) = 0;
  *(_WORD*)(v30 + 136) = 0;
  *(_QWORD*)(v30 + 16) = 0;
  *(_QWORD*)(v30 + 24) = "NULL";
  *(_QWORD*)(v30 + 138) = 0;
  *(_QWORD*)(v30 + 144) = 0;
  *(_QWORD*)(v30 + 32) = 0;
  *(_QWORD*)(v30 + 40) = 0;
  *(_QWORD*)(v30 + 48) = 0;
  *(_QWORD*)(v30 + 56) = 0;
  *(_QWORD*)(v30 + 64) = 0;
  *(_QWORD*)(v30 + 72) = 0;
  *(_QWORD*)(v30 + 80) = 0;
  *(_QWORD*)(v30 + 88) = 0;
  *(_QWORD*)v30 = v31 + 16;
  *(_QWORD*)(v30 + 8) = 0;
  game_ProcInst_Register(v30);
  *(_QWORD*)(v30 + 152) = a2;
  *(_BYTE*)(v30 + 164) = a4 & 1;
  *(_QWORD*)v30 = game_map_anonymous_ProcMapSeqSkill_vtable;
  *(_DWORD*)(v30 + 160) = *a3;
  return ProcInst_657850(v30, (__int64)&GameData_21f3d18,
                         (__int64)"ProcMapSeqSkill", 1, v7);
}

__int64 llvm_libcxx_21_libcxx_include___vector_a092a0(__int64 a1)
{
  char v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  void* v8;
  _BYTE* v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 (***v20)();
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 result;
  __int64 v29;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;
  struct {
    __int64 (**v32)();
    __int64 v33;
    char gap64_[16];
    __int64 (***v34)();
  } v32_;
  __int64 v35;

  v1 = *(_BYTE*)(a1 + 153);
  v30_.v30[0] = GameData_1fbbb90;
  v30_.v30[1] = a1;
  v30_.v31 = v30_.v30;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1152, 16, 0);
  v32_.v32 = nullptr;
  v32_.v33 = 0;
  game_menu_16dcd30(v4, 0, &v32_.v32, 0);
  v5 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = v30_.v31;
  *(_QWORD*)v4 = GameData_1fbb360;
  *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_1fbb7b8;
  if (v6 != nullptr) {
    if (v6 == v30_.v30) {
      *(_QWORD*)(v4 + 1088) = v4 + 1056;
      (*(void (**)(_QWORD*))(*v6 + 24LL))(v6);
    }
    else {
      *(_QWORD*)(v4 + 1088) = (*(__int64 (**)(_QWORD*))(*v6 + 16LL))(v6);
    }
  }
  else {
    *(_QWORD*)(v4 + 1088) = 0;
  }
  *(_QWORD*)(v4 + 1136) = 0;
  *(_QWORD*)v4 = game_anonymous_DiffMenu_vtable;
  *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_1fbb260;
  v7 = *(_QWORD*)(a1 + 40);
  if (v7 != 0) {
    *(_QWORD*)(v7 + 48) = v4;
    *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v4;
  *(_QWORD*)(v4 + 24) = "DiffMenu";
  *(_QWORD*)(v4 + 32) = a1;
  *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32("DiffMenu");
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 24;
  *(_QWORD*)(v4 + 80) = 1;
  v8 = GameData_212c730;
  *(_QWORD*)(v4 + 8) = GameData_212c730;
  *(_QWORD*)(v4 + 16) = v8;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
      (*(_WORD*)(v4 + 136) & 0x100) == 0) {
    *(_WORD*)(v4 + 136) |= 0x100u;
  }
  v9 = *(_BYTE**)(v4 + 32);
  v10 = v9[138];
  if (v10 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(v4 + 32));
    v10 = v9[138];
  }
  v11 = *v3;
  v9[138] = v10 + 1;
  *(_WORD*)(v4 + 136) |= 2u;
  v12 = fw_memory_HeapManager_Allocate(v11, 88, 16, 0);
  *(_WORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)v12 = game_anonymous_DiffMenu_DiffMenuItem_vtable;
  *(_QWORD*)(v12 + 8) = 0;
  *(_DWORD*)(v12 + 80) = 65793;
  BasicMenuCursor_16e0c00((_QWORD*)v4, v12);
  v13 = fw_memory_HeapManager_Allocate(*v3, 88, 16, 0);
  *(_WORD*)(v13 + 16) = 0;
  *(_DWORD*)(v13 + 40) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_QWORD*)v13 = game_anonymous_DiffMenu_DiffMenuItem_vtable;
  *(_QWORD*)(v13 + 8) = 0;
  *(_DWORD*)(v13 + 80) = 16843009;
  BasicMenuCursor_16e0c00((_QWORD*)v4, v13);
  v15 = *(_QWORD*)(v4 + 256);
  v14 = *(_QWORD*)(v4 + 264);
  if (v14 != v15) {
    v16 = 0;
    do {
      v17 = *(_QWORD*)(v15 + 8 * v16);
      if (v17 != 0) {
        *(_DWORD*)(v17 + 40) = v16;
        v15 = *(_QWORD*)(v4 + 256);
        v14 = *(_QWORD*)(v4 + 264);
      }
      ++v16;
    } while (v16 < (v14 - v15) >> 3);
  }
  v18 = *(_QWORD**)(v4 + 232);
  v19 = *(_QWORD**)(v4 + 240);
  v20 = &v32_.v32;
  LOBYTE(v32_.v33) = v1;
  v32_.v32 = GameData_1fbbb00;
  v32_.v34 = &v32_.v32;
  if (v18 == v19) {
    v23 = 0;
  LABEL_34:
    v24 = 4;
    goto LABEL_35;
  }
  v21 = GameData_212e008[0];
  while (1) {
    if (*v18 != 0) {
      v22 = __dynamic_cast(*v18, v21, &GameData_1fbbad8, 0);
      if (v22 != 0) {
        v23 = v22;
        v35 = v22;
        if (v32_.v34 == nullptr) {
          GameRoutine_60a310();
        }
        if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v32_.v34)[6])(
                 v32_.v34, &v35) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v18 == v19) {
      v23 = 0;
      break;
    }
  }
  v20 = v32_.v34;
  if (v32_.v34 == &v32_.v32) {
    goto LABEL_34;
  }
  if (v32_.v34 != nullptr) {
    v24 = 5;
  LABEL_35:
    ((__int64 (*)(__int64))(*v20)[v24])((__int64)v20);
  }
  if (v23 == 0) {
    goto LABEL_48;
  }
  v25 = *(_QWORD*)(v4 + 336);
  if (v25 == v23) {
    goto LABEL_42;
  }
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 168LL))(v25);
  }
  *(_QWORD*)(v4 + 336) = v23;
  BasicMenu_16dea40(v4, 0, 1u, 0);
  v26 = *(_QWORD*)(v4 + 336);
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 160LL))(v26);
    v25 = *(_QWORD*)(v4 + 336);
  LABEL_42:
    v27 = 4;
    if (v25 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 120LL))(v25) & 1) != 0) {
        v27 = 4;
      }
      else {
        v27 = 0;
      }
    }
    goto LABEL_47;
  }
  v27 = 4;
LABEL_47:
  *(_DWORD*)(v4 + 356) = *(_DWORD*)(v4 + 356) & 0xFFFFFFFB | v27;
LABEL_48:
  result = (__int64)v30_.v31;
  if (v30_.v31 == v30_.v30) {
    v29 = 32;
  }
  else {
    if (v30_.v31 == nullptr) {
      return result;
    }
    v29 = 40;
  }
  return (*(__int64 (**)(__int64))(*v30_.v31 + v29))((__int64)v30_.v31);
}

__int64 llvm_libcxx_21_libcxx_include___vector_a096c0(__int64 a1)
{
  char v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  void* v9;
  _BYTE* v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 (***v21)();
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 result;
  __int64 v31;
  struct {
    _QWORD v32[4];
    _QWORD* v33;
  } v32_;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;
  struct {
    __int64 (**v36)();
    __int64 v37;
    char gap112_[16];
    __int64 (***v38)();
  } v36_;
  __int64 v39;

  v1 = *(_BYTE*)(a1 + 152);
  v34_.v34[0] = GameData_1fbc9a8;
  v34_.v34[1] = a1;
  v34_.v35 = v34_.v34;
  v32_.v32[0] = GameData_1fbca38;
  v32_.v32[1] = a1;
  v32_.v33 = v32_.v32;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1152, 16, 0);
  v36_.v36 = nullptr;
  v36_.v37 = 0;
  game_menu_16dcd30(v4, 0, &v36_.v36, 0);
  v5 = v36_.v37;
  if (v36_.v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36_.v37 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = v34_.v35;
  *(_QWORD*)v4 = GameData_1fbc178;
  *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_1fbc5d0;
  if (v6 != nullptr) {
    if (v6 != v34_.v34) {
      *(_QWORD*)(v4 + 1088) = (*(__int64 (**)(_QWORD*))(*v6 + 16LL))(v6);
      v7 = v32_.v33;
      if (v32_.v33 != nullptr) {
        goto LABEL_7;
      }
    LABEL_10:
      *(_QWORD*)(v4 + 1136) = 0;
      goto LABEL_14;
    }
    *(_QWORD*)(v4 + 1088) = v4 + 1056;
    (*(void (**)(_QWORD*))(*v6 + 24LL))(v6);
    v7 = v32_.v33;
    if (v32_.v33 == nullptr) {
      goto LABEL_10;
    }
  }
  else {
    *(_QWORD*)(v4 + 1088) = 0;
    v7 = v32_.v33;
    if (v32_.v33 == nullptr) {
      goto LABEL_10;
    }
  }
LABEL_7:
  if (v7 == v32_.v32) {
    *(_QWORD*)(v4 + 1136) = v4 + 1104;
    (*(void (**)(_QWORD*))(*v7 + 24LL))(v7);
  }
  else {
    *(_QWORD*)(v4 + 1136) = (*(__int64 (**)(_QWORD*))(*v7 + 16LL))(v7);
  }
LABEL_14:
  *(_QWORD*)v4 = game_anonymous_ModeMenu_vtable;
  *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_1fbc078;
  v8 = *(_QWORD*)(a1 + 40);
  if (v8 != 0) {
    *(_QWORD*)(v8 + 48) = v4;
    *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v4;
  *(_QWORD*)(v4 + 24) = "ModeMenu";
  *(_QWORD*)(v4 + 32) = a1;
  *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32("ModeMenu");
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 24;
  *(_QWORD*)(v4 + 80) = 1;
  v9 = GameData_212c730;
  *(_QWORD*)(v4 + 8) = GameData_212c730;
  *(_QWORD*)(v4 + 16) = v9;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
      (*(_WORD*)(v4 + 136) & 0x100) == 0) {
    *(_WORD*)(v4 + 136) |= 0x100u;
  }
  v10 = *(_BYTE**)(v4 + 32);
  v11 = v10[138];
  if (v11 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v10 + 64LL))(*(_QWORD*)(v4 + 32));
    v11 = v10[138];
  }
  v12 = *v3;
  v10[138] = v11 + 1;
  *(_WORD*)(v4 + 136) |= 2u;
  v13 = fw_memory_HeapManager_Allocate(v12, 88, 16, 0);
  *(_WORD*)(v13 + 16) = 0;
  *(_DWORD*)(v13 + 40) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_QWORD*)v13 = game_anonymous_ModeMenu_ModeMenuItem_vtable;
  *(_QWORD*)(v13 + 8) = 0;
  *(_DWORD*)(v13 + 80) = 65793;
  BasicMenuCursor_16e0c00((_QWORD*)v4, v13);
  v14 = fw_memory_HeapManager_Allocate(*v3, 88, 16, 0);
  *(_WORD*)(v14 + 16) = 0;
  *(_DWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_QWORD*)v14 = game_anonymous_ModeMenu_ModeMenuItem_vtable;
  *(_QWORD*)(v14 + 8) = 0;
  *(_DWORD*)(v14 + 80) = 16843009;
  BasicMenuCursor_16e0c00((_QWORD*)v4, v14);
  v16 = *(_QWORD*)(v4 + 256);
  v15 = *(_QWORD*)(v4 + 264);
  if (v15 != v16) {
    v17 = 0;
    do {
      v18 = *(_QWORD*)(v16 + 8 * v17);
      if (v18 != 0) {
        *(_DWORD*)(v18 + 40) = v17;
        v16 = *(_QWORD*)(v4 + 256);
        v15 = *(_QWORD*)(v4 + 264);
      }
      ++v17;
    } while (v17 < (v15 - v16) >> 3);
  }
  v19 = *(_QWORD**)(v4 + 232);
  v20 = *(_QWORD**)(v4 + 240);
  v21 = &v36_.v36;
  LOBYTE(v36_.v37) = v1;
  v36_.v36 = GameData_1fbc918;
  v36_.v38 = &v36_.v36;
  if (v19 == v20) {
    v24 = 0;
  LABEL_39:
    v25 = 4;
    goto LABEL_40;
  }
  v22 = GameData_212e008[0];
  while (1) {
    if (*v19 != 0) {
      v23 = __dynamic_cast(*v19, v22, &GameData_1fbc8f0, 0);
      if (v23 != 0) {
        v24 = v23;
        v39 = v23;
        if (v36_.v38 == nullptr) {
          GameRoutine_60a310();
        }
        if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v36_.v38)[6])(
                 v36_.v38, &v39) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v19 == v20) {
      v24 = 0;
      break;
    }
  }
  v21 = v36_.v38;
  if (v36_.v38 == &v36_.v36) {
    goto LABEL_39;
  }
  if (v36_.v38 != nullptr) {
    v25 = 5;
  LABEL_40:
    ((__int64 (*)(__int64))(*v21)[v25])((__int64)v21);
  }
  if (v24 == 0) {
    goto LABEL_53;
  }
  v26 = *(_QWORD*)(v4 + 336);
  if (v26 == v24) {
    goto LABEL_47;
  }
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 168LL))(v26);
  }
  *(_QWORD*)(v4 + 336) = v24;
  BasicMenu_16dea40(v4, 0, 1u, 0);
  v27 = *(_QWORD*)(v4 + 336);
  if (v27 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 160LL))(v27);
    v26 = *(_QWORD*)(v4 + 336);
  LABEL_47:
    v28 = 4;
    if (v26 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v26 + 120LL))(v26) & 1) != 0) {
        v28 = 4;
      }
      else {
        v28 = 0;
      }
    }
    goto LABEL_52;
  }
  v28 = 4;
LABEL_52:
  *(_DWORD*)(v4 + 356) = *(_DWORD*)(v4 + 356) & 0xFFFFFFFB | v28;
LABEL_53:
  if (v32_.v33 == v32_.v32) {
    v29 = 32;
  }
  else {
    if (v32_.v33 == nullptr) {
      goto LABEL_58;
    }
    v29 = 40;
  }
  (*(void (**)(__int64))(*v32_.v33 + v29))((__int64)v32_.v33);
LABEL_58:
  result = (__int64)v34_.v35;
  if (v34_.v35 == v34_.v34) {
    v31 = 32;
  }
  else {
    if (v34_.v35 == nullptr) {
      return result;
    }
    v31 = 40;
  }
  return (*(__int64 (**)(__int64))(*v34_.v35 + v31))((__int64)v34_.v35);
}

void llvm_libcxx_21_libcxx_include___vector_12e06e0(__int64 a1)
{
  unsigned __int8* v1;
  unsigned int v2;
  int v3;
  const char* v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _BYTE* v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;
  unsigned int* v24;
  unsigned int* v25;
  __int64 v26;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;
  struct {
    __int64 v29[2];
    const char* v30;
  } v29_;
  const char* v31;

  v1 = (unsigned __int8*)(*(_QWORD*)(a1 + 152) + 16LL * *(int*)(a1 + 176));
  v2 = *v1;
  if (v2 <= 3) {
    if (*v1 <= 1u) {
      if (*v1 != 0) {
        v3 = 2;
      }
      else {
        v3 = 0;
      }
      goto LABEL_22;
    }
    if (v2 != 2) {
      if (v2 != 3) {
        return;
      }
      v31 = "MID_Gmap_SideStory_End_Message";
      game_1603f20((void*)(v29_.v29),
                   *(_QWORD**)(***((_QWORD***)v1 + 1) + 40LL));
      v27_.v28 = nullptr;
      if ((v29_.v29[0] & 1) != 0) {
        v5 = v29_.v30;
      }
      else {
        v5 = (char*)v29_.v29 + 1;
      }
      game_11912b0(a1, &v31, v5, (__int64)v27_.v27);
      if (v27_.v28 == v27_.v27) {
        v6 = 32;
      }
      else {
        if (v27_.v28 == nullptr) {
        LABEL_41:
          if ((v29_.v29[0] & 1) != 0 && v29_.v30 != nullptr) {
            v20 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v20 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                (__int64)v29_.v30);
          }
          return;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*v27_.v28 + v6))((__int64)v27_.v28);
      goto LABEL_41;
    }
    v7 = *(_QWORD*)GameData_2130f48;
    if (*(_QWORD*)GameData_2130f48 == 0) {
      return;
    }
    v8 = "MID_Sys_InfoTelop_Regist_SideStory";
  LABEL_34:
    GameHr_17cc7d0(v7, v8, nullptr, 0, nullptr, 0);
    return;
  }
  if (*v1 <= 5u) {
    if (v2 == 4) {
      v9 = *((_QWORD*)v1 + 1);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240ed8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_2240ed8) != 0) {
        GameData_2240d78 = 0;
        GameData_2240d80 = 0;
        GameData_2240d60 = 0;
        GameData_2240d88 = 0;
        GameData_2240d90 = 0;
        GameData_2240da0 = 0;
        GameData_2240da8 = 0;
        GameData_2240d68 = (__int64)game_GameCalendar_ProcNotifyBirthday_Notify;
        GameData_2240d70 = 0;
        GameData_2240d58 = 13;
        GameData_2240e18 = 13;
        GameData_2240db0 = 0;
        GameData_2240dc0 = 0;
        GameData_2240dc8 = 0;
        GameData_2240dd0 = 0;
        GameData_2240dd8 = 2;
        GameData_2240e00 = 0;
        GameData_2240d98 = 12;
        GameData_2240e08 = 0;
        GameData_2240e10 = 0;
        GameData_2240df8 = 0;
        GameData_2240de8 = 0;
        GameData_2240df0 = 0;
        GameData_2240de0 = 0;
        GameData_2240e20 = 0;
        GameData_2240e28 = (__int64)GameRoutine_12e1980;
        GameData_2240e30 = 0;
        GameData_2240e38 = 0;
        GameData_2240e40 = 0;
        GameData_2240e48 = 0;
        GameData_2240db8 = 1;
        GameData_2240e50 = 0;
        GameData_2240e58 = 2;
        GameData_2240e60 = 0;
        GameData_2240e68 = 0;
        GameData_2240e70 = 0;
        GameData_2240e78 = 1;
        GameData_2240e80 = 0;
        GameData_2240e88 = 0;
        GameData_2240e90 = 0;
        GameData_2240e98 = 0;
        GameData_2240ec0 = 0;
        GameData_2240ec8 = 0;
        GameData_2240ed0 = 0;
        GameData_2240eb8 = 0;
        GameData_2240ea8 = 0;
        GameData_2240eb0 = 0;
        GameData_2240ea0 = 0;
        __cxa_guard_release((__int64)&GameData_2240ed8);
      }
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
      v12 = GameData_212c608[0];
      *(_QWORD*)(v11 + 88) = 0;
      *(_QWORD*)(v11 + 96) = 0;
      *(_QWORD*)(v11 + 104) = 0;
      *(_QWORD*)(v11 + 112) = 0;
      *(_QWORD*)(v11 + 120) = 0;
      *(_QWORD*)(v11 + 128) = 0;
      *(_WORD*)(v11 + 136) = 0;
      *(_QWORD*)(v11 + 16) = 0;
      *(_QWORD*)(v11 + 24) = "NULL";
      *(_QWORD*)(v11 + 32) = 0;
      v13 = (_QWORD*)(v11 + 32);
      *(_QWORD*)(v11 + 138) = 0;
      *(_QWORD*)(v11 + 144) = 0;
      *(_QWORD*)(v11 + 40) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      *(_QWORD*)(v11 + 56) = 0;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 0;
      *(_QWORD*)(v11 + 80) = 0;
      *(_QWORD*)v11 = v12 + 16;
      *(_QWORD*)(v11 + 8) = 0;
      game_ProcInst_Register(v11);
      *(_QWORD*)(v11 + 152) = v9;
      *(_QWORD*)v11 = game_GameCalendar_ProcNotifyBirthday_vtable;
      v14 = *(_QWORD*)(a1 + 40);
      if (v14 != 0) {
        *(_QWORD*)(v14 + 48) = v11;
        *(_QWORD*)(v11 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v11;
      *(_QWORD*)(v11 + 24) = "ProcNotifyBirthday";
      *(_QWORD*)(v11 + 32) = a1;
      *(_DWORD*)(v11 + 140) =
          (unsigned int)game_HashString32("ProcNotifyBirthday");
      *(_QWORD*)(v11 + 8) = &GameData_2240d58;
      *(_QWORD*)(v11 + 16) = &GameData_2240d58;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 24;
      *(_QWORD*)(v11 + 80) = 1;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 136LL))(v11) & 1) != 0 &&
          (*(_WORD*)(v11 + 136) & 0x100) == 0) {
        *(_WORD*)(v11 + 136) |= 0x100u;
      }
      v15 = (_BYTE*)*v13;
      v16 = *(_BYTE*)(*v13 + 138LL);
      if (v16 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v13);
        v16 = v15[138];
      }
      v15[138] = v16 + 1;
      *(_WORD*)(v11 + 136) |= 2u;
    }
    else if (v2 == 5) {
      v3 = 3;
    LABEL_22:
      GameHr_1383a10(a1, v3);
      return;
    }
    return;
  }
  if (v2 != 6) {
    if (v2 != 7) {
      return;
    }
    v7 = *(_QWORD*)GameData_2130f48;
    if (*(_QWORD*)GameData_2130f48 == 0) {
      return;
    }
    v8 = "MID_Sys_InfoTelop_Regist_Event";
    goto LABEL_34;
  }
  v17 = ProcList_9bd480(a1);
  if (v17 == 0) {
    return;
  }
  v18 = v17;
  v27_.v27[0] = GameData_2023ae0;
  v27_.v28 = v27_.v27;
  game_ProcList_Call_9bcfa0(v17, (__int64)v27_.v27);
  if (v27_.v28 == v27_.v27) {
    v19 = 32;
    goto LABEL_47;
  }
  if (v27_.v28 != nullptr) {
    v19 = 40;
  LABEL_47:
    (*(void (**)(__int64))(*v27_.v28 + v19))((__int64)v27_.v28);
  }
  if ((v1[8] & 1) == 0) {
    v21 = 0xD37A6F4DE9BD37A7LL *
          ((__int64)(*(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL) -
                     *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL)) >>
           4);
    v22 = v21 < 2 || (int)v21 < -1;
    if (!v22 && *GameData_212c780 != 0) {
      v27_.v27[1] = &GameData_1a95031;
      v27_.v27[0] = game_HashString((__int64)&GameData_1a95031);
      v24 = (unsigned int*)SpotMgr_132ffa0((unsigned int*)v27_.v27);
      if (v24 != GameRoutine_714df0()) {
        v25 = GameRoutine_714df0();
        if (v25 != nullptr && (*((_BYTE*)v25 + 178) & 1) == 0) {
          v27_.v27[0] = GameData_2023b60;
          v27_.v28 = v27_.v27;
          game_ProcList_Call_9bcfa0(v18, (__int64)v27_.v27);
          if (v27_.v28 == v27_.v27) {
            v26 = 32;
          }
          else {
            if (v27_.v28 == nullptr) {
              return;
            }
            v26 = 40;
          }
          (*(void (**)(__int64))(*v27_.v28 + v26))((__int64)v27_.v28);
        }
      }
    }
  }
}

__int64 llvm_libcxx_21_libcxx_include___vector_135c560(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int16* v7;
  int v8;
  int v9;
  int v10;
  __int64* v11;
  _BOOL4 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  void* v32;
  void* v33;
  __int64* v34;
  int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  signed int v40;
  bool v41;
  __int64 v42;
  unsigned __int64 v43;
  int v45;
  int v46;
  __int64* v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 (*v59)(_QWORD);
  __int64 v60;
  _QWORD* v61;
  unsigned __int64 v62;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  char* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 (*v75)(_QWORD);
  __int64 v76;
  _QWORD* v77;
  char* v78;
  __int64 (**v80)();
  __int64 v81;
  __int64 v82;
  unsigned __int8** v83;
  char* v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int8* v87;
  unsigned __int8* v88;
  int v89;
  int v90;
  unsigned int v91;
  unsigned int v92;
  int v93;
  unsigned __int8** v94;
  unsigned __int8** v95;
  int v96;
  int v97;
  unsigned __int64 v98;
  unsigned __int8** v99;
  __int64 v100;
  __int64* v101;
  char* v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64* v106;
  int v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  char* v117;
  char* v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  char v122;
  __int64 v123;
  __int64 v124;
  __int64 (*v125)(_QWORD);
  __int64 v126;
  _QWORD* v127;
  int v128;
  __int64 v129;
  unsigned __int8* v130;
  int v131;
  char* v132;
  char v133;
  char* v134;
  __int64 (**v135)();
  __int64 v136;
  char v137;
  __int64 v138;
  unsigned __int8* v139;
  int v140;
  __int64 v141;
  unsigned __int8* v142;
  int v143;
  __int64* v144;
  __int64 v145;
  __int64 v146;
  char v147;
  unsigned __int64 v148;
  __int64* v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  __int64 v157;
  unsigned __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v162;
  int v163;
  struct {
    __int64 (**v164)();
    __int64* v165;
    __int64* v166;
    char gap40_[8];
    unsigned __int64* v167;
  } v164_;
  __int64 v168;
  __int64 v169;

  v133 = COERCE_AS(__typeof__(v133),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  {
    v2 = *(_QWORD*)a1;
    __asm__ volatile("" ::"r"(v2));
  }
  if (*(_QWORD*)a1 == 0) {
    goto LABEL_16;
  }
  {
    v5 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL);
    __asm__ volatile("" ::"r"(v6));
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v7 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v5 != v6) {
    {
      v8 = *v7;
      __asm__ volatile("" ::"r"(v8));
    }
    {
      v9 = v7[1];
      __asm__ volatile("" ::"r"(v9));
    }
    {
      v10 = v7[2];
      __asm__ volatile("" ::"r"(v10));
    }
    v11 = (__int64*)&GameData_1a8ad4c;
    while (v8 != *(unsigned __int16*)(v5 + 4) ||
           v9 != *(unsigned __int8*)(v5 + 6) ||
           v10 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v6) {
        v13 = false;
        goto LABEL_18;
      }
    }
  }
  if (v5 == v6 || v5 == 0) {
    goto LABEL_16;
  }
  {
    v128 = *(unsigned __int8*)(v2 + 32);
    __asm__ volatile("" ::"r"(v128));
  }
  if (v128 == 0) {
    {
      v141 = *(unsigned __int8*)(v5 + 1);
      __asm__ volatile("" ::"r"(v141));
    }
    if (*(_BYTE*)(v5 + 1) != 0) {
      v142 = (unsigned __int8*)(v5 + 8);
      v11 = (__int64*)&GameData_1a8ad4c;
      while (1) {
        {
          v143 = *v142;
          __asm__ volatile("" ::"r"(v143));
        }
        v142 += 24;
        v13 = v143 == 9;
        if (v143 == 9) {
          goto LABEL_197;
        }
        if (--v141 == 0) {
          goto LABEL_18;
        }
      }
    }
    goto LABEL_16;
  }
  if (v128 == 1) {
    {
      v138 = *(unsigned __int8*)(v5 + 1);
      __asm__ volatile("" ::"r"(v138));
    }
    if (*(_BYTE*)(v5 + 1) != 0) {
      v139 = (unsigned __int8*)(v5 + 8);
      v11 = (__int64*)&GameData_1a8ad4c;
      while (1) {
        {
          v140 = *v139;
          __asm__ volatile("" ::"r"(v140));
        }
        v139 += 24;
        v13 = v140 == 8;
        if (v140 == 8) {
          goto LABEL_197;
        }
        if (--v138 == 0) {
          goto LABEL_18;
        }
      }
    }
  LABEL_16:
    v13 = false;
    v11 = (__int64*)&GameData_1a8ad4c;
    goto LABEL_18;
  }
  if (v128 != 2) {
    goto LABEL_16;
  }
  {
    v129 = *(unsigned __int8*)(v5 + 1);
    __asm__ volatile("" ::"r"(v129));
  }
  if (*(_BYTE*)(v5 + 1) == 0) {
    goto LABEL_16;
  }
  v130 = (unsigned __int8*)(v5 + 8);
  v11 = (__int64*)&GameData_1a8ad4c;
  while (1) {
    {
      v131 = *v130;
      __asm__ volatile("" ::"r"(v131));
    }
    v130 += 24;
    v13 = v131 == 10;
    if (v131 == 10) {
      break;
    }
    if (--v129 == 0) {
      goto LABEL_18;
    }
  }
LABEL_197:
  v11 = (__int64*)&GameData_1af68bb;
LABEL_18:
  v14 = &GameData_21ca000;
  v164_.v165 = v11;
  v15 = game_GameModeData_instance_;
  v164_.v164 = (__int64 (**)(void))game_HashString((__int64)v11),
  v133 = COERCE_AS(__typeof__(v133),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v16 = game_GameVariableTable_Find(*(_QWORD**)(v15 + 48),
                                    (unsigned __int64*)&v164_.v164),
  v133 = COERCE_AS(__typeof__(v133),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v17 = game_GameModeData_instance_;
  v18 = v16;
  if (v13) {
    v19 = (__int64*)&GameData_1aeb0c0;
  }
  else {
    v19 = (__int64*)&GameData_1ae73e9;
  }
  v164_.v165 = v19;
  if (v13) {
    v20 = (__int64*)&GameData_1aa5d66;
  }
  else {
    v20 = (__int64*)&GameData_1ac8613;
  }
  v164_.v164 = (__int64 (**)(void))game_HashString((__int64)v19),
  v133 = COERCE_AS(__typeof__(v133),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v21 = game_GameVariableTable_Find(*(_QWORD**)(v17 + 48),
                                    (unsigned __int64*)&v164_.v164),
  v133 = COERCE_AS(__typeof__(v133),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v22 = game_GameModeData_instance_;
  v169 = v21;
  v164_.v165 = v20;
  v164_.v164 = (__int64 (**)(void))game_HashString((__int64)v20),
  v133 = COERCE_AS(__typeof__(v133),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v168 = game_GameVariableTable_Find(*(_QWORD**)(v22 + 48),
                                     (unsigned __int64*)&v164_.v164),
  v133 = COERCE_AS(__typeof__(v133),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if ((a2 & 1) != 0) {
    goto LABEL_37;
  }
  {
    v23 = *(_QWORD*)(*GameData_212c790 + 8);
    __asm__ volatile("" ::"r"(v23));
  }
  {
    v24 = *(_DWORD*)(v23 + 56);
    __asm__ volatile("" ::"r"(v24));
  }
  {
    v25 = *(__int64**)(v23 + 8);
    __asm__ volatile("" ::"r"(v25));
  }
  if (v24 < 0) {
    while (1) {
      {
        v26 = *v25;
        __asm__ volatile("" ::"r"(v26));
      }
      if (*(_QWORD*)(*v25 + 96) == 0 && *(_QWORD*)(v26 + 552) == 0) {
        break;
      }
      ++v25;
    }
  }
  else {
    {
      v28 = *v25;
      __asm__ volatile("" ::"r"(v28));
    }
    v27 = v25 + 1;
    v26 = v28;
    if (*(_DWORD*)(v28 + 84) != v24) {
      do {
        {
          v29 = *v27++;
          __asm__ volatile("" ::"r"(v29));
        }
        v26 = v29;
      } while (*(_DWORD*)(v29 + 84) != v24);
    }
  }
  v164_.v164 = GameData_202eba8;
  v164_.v165 = &v169;
  v164_.v167 = (unsigned __int64*)&v164_.v164;
  v164_.v166 = &v168;
  Troop_133ed80(v26, (__int64)&v164_.v164),
      v133 = COERCE_AS(__typeof__(v133),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v164_.v167 == (unsigned __int64*)&v164_.v164) {
    v30 = 32;
    goto LABEL_36;
  }
  if (v164_.v167 != nullptr) {
    v30 = 40;
  LABEL_36:
    (*(void (**)(__int64))(*v164_.v167 + v30))((__int64)v164_.v167),
        v133 = COERCE_AS(__typeof__(v133),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
LABEL_37:
  v31 = GameData_2130e70;
  v162 = v18;
  if (*(_BYTE*)(*GameData_2130e70 + 52) != 1) {
    nn_os_LockMutex((__int64)&game_g_random_mutex),
        v133 = COERCE_AS(__typeof__(v133),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    {
      v34 = game_map_MapRandom_instance__ptr[0];
      __asm__ volatile("" ::"r"(v34));
    }
    {
      v35 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8);
      __asm__ volatile("" ::"r"(v35));
    }
    {
      v36 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
      __asm__ volatile("" ::"r"(v36));
    }
    v37 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) ^
          (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL))
           << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v34 + 4) = v35;
    v38 = (v37 >> 8) ^ (v36 >> 19) ^ v37 ^ v36;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v34 + 8) = v36;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v34 + 12) = v38;
    v39 = v38 & 0x7FFFFFFF;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex),
        v133 = COERCE_AS(__typeof__(v133),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    {
      v40 = *(_DWORD*)(v18 + 32);
      __asm__ volatile("" ::"r"(v40));
    }
    if ((int)(v39 % 0x64) < v40) {
      v32 = &GameData_1a86d61;
      v33 = &GameData_1ac4755;
      *(_DWORD*)(a1 + 80) = 0;
      goto LABEL_41;
    }
    if ((int)(v39 % 0x64) >= *(_DWORD*)(v169 + 32) + v40) {
      v33 = &GameData_1af68df;
      v41 = !v13;
      *(_DWORD*)(a1 + 80) = 2;
      *(_BYTE*)(a1 + 88) = 1;
      v32 = &GameData_1aa5d8e;
    LABEL_42:
      if (v41) {
        v42 = (__int64)v32;
      }
      else {
        v42 = (__int64)v33;
      }
      v164_.v165 = (__int64*)v42;
      v43 = game_HashString(v42),
      v133 = COERCE_AS(__typeof__(v133),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v164_.v164 = (__int64 (**)(void))v43,
      v133 = COERCE_AS(__typeof__(v133),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (game_GameModeData_instance_ == 0 ||
          (v43 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v164_.v164)) == 0) {
        v45 = 0;
        if (*(_DWORD*)(a1 + 80) == 0) {
          goto LABEL_51;
        }
      LABEL_50:
        if (*(_BYTE*)(*v31 + 52) == 1) {
          goto LABEL_51;
        }
        {
          v114 = *(__int64**)(*(_QWORD*)a1 + 24LL);
          __asm__ volatile("" ::"r"(v114));
        }
        {
          v116 = *v114;
          __asm__ volatile("" ::"r"(v116));
        }
        {
          v115 = v114[1];
          __asm__ volatile("" ::"r"(v115));
        }
        if (v115 != *v114) {
          while (1) {
            if (*(_QWORD*)v116 != 0) {
              v123 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v124 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v116),
                v133 =
                    COERCE_AS(__typeof__(v133),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v124 != 0) {
                  v125 = *(__int64 (**)(_QWORD))(v124 + 72),
                  v133 = COERCE_AS(
                      __typeof__(v133),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  {
                    v126 = *(_QWORD*)(v124 + 80);
                    __asm__ volatile("" ::"r"(v126));
                  }
                  v127 = (_QWORD*)(v124 + (v126 >> 1));
                  if ((v126 & 1) != 0) {
                    v125 = *(__int64 (**)(_QWORD))((char*)v125 + *v127),
                    v133 = COERCE_AS(
                        __typeof__(v133),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  }
                  LOBYTE(v43) = v125(v127),
                  v133 = COERCE_AS(
                      __typeof__(v133),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
                else {
                  LOBYTE(v43) = 1;
                }
              }
              if (*(_BYTE*)(v116 + 16) != ((v123 == 0) | v43 & 1)) {
                break;
              }
            }
            v116 += 24;
            if (v116 == v115) {
              goto LABEL_148;
            }
          }
          v137 = 0;
          if (v45 < 1) {
            goto LABEL_222;
          }
        LABEL_202:
          v144 = (__int64*)fw_memory_g_heap_manager_ptr;
          do {
            v146 = GmapExploreInfo_135c2e0(a1, *(unsigned __int8*)(a1 + 88),
                                           v137 & 1),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            {
              v147 = *(_BYTE*)(a1 + 88);
              __asm__ volatile("" ::"r"(v147));
            }
            if (*(_BYTE*)(v146 + 58) == 1) {
              *(_BYTE*)(a1 + 88) = 0;
            }
            {
              v149 = *(__int64**)(a1 + 40);
              __asm__ volatile("" ::"r"(v149));
            }
            {
              v148 = *(_QWORD*)(a1 + 48);
              __asm__ volatile("" ::"r"(v148));
            }
            if ((unsigned __int64)v149 < v148) {
              *v149 = v146;
              v145 = (__int64)(v149 + 1);
            }
            else {
              {
                v150 = *(_QWORD*)(a1 + 32);
                __asm__ volatile("" ::"r"(v150));
              }
              v151 = (unsigned __int64)v149 - v150;
              v152 = ((__int64)v149 - v150) >> 3;
              v153 = v152 + 1;
              if ((unsigned __int64)(v152 + 1) >> 61 != 0) {
              LABEL_223:
                GameRoutine_b0ac30(),
                    v133 = COERCE_AS(
                        __typeof__(v133),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              }
              v154 = v148 - v150;
              if (v154 >> 2 > v153) {
                v153 = v154 >> 2;
              }
              if ((unsigned __int64)v154 >= 0x7FFFFFFFFFFFFFF8LL) {
                v155 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v155 = v153;
              }
              if (v155 != 0) {
                if (v155 >> 61 != 0) {
                LABEL_224:
                  GameRoutine_60a210(),
                      v133 = COERCE_AS(
                          __typeof__(v133),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
                v156 = v146;
                v157 = fw_memory_HeapManager_Allocate(*v144, 8 * v155, 16, 0),
                v133 =
                    COERCE_AS(__typeof__(v133),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                v146 = v156;
              }
              else {
                v157 = 0;
              }
              v158 = v157 + 8 * v155;
              v159 = v157 + v151 - 8 * v152;
              *(_QWORD*)(v157 + v151) = v146;
              v145 = v157 + v151 + 8;
              memcpy(v159, v150, v151),
                  v133 = COERCE_AS(
                      __typeof__(v133),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              *(_QWORD*)(a1 + 32) = v159;
              *(_QWORD*)(a1 + 40) = v145;
              *(_QWORD*)(a1 + 48) = v158;
              if (v150 != 0) {
                v160 = 128;
                if (*(_QWORD*)(*v144 + 200) == 0) {
                  v160 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v144 + v160, v150),
                    v133 = COERCE_AS(
                        __typeof__(v133),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              }
            }
            v137 &= v147;
            --v45;
            *(_QWORD*)(a1 + 40) = v145;
          } while (v45 != 0);
          goto LABEL_222;
        }
      LABEL_148:
        {
          v117 = *(char**)(a1 + 8);
          __asm__ volatile("" ::"r"(v117));
        }
        {
          v118 = *(char**)(a1 + 16);
          __asm__ volatile("" ::"r"(v118));
        }
        if (v117 != v118) {
          v119 = v118 - v117 - 8;
          if ((~(_BYTE)v119 & 0x18) != 0) {
            v120 = ((unsigned __int8)((unsigned int)v119 >> 3) + 1) & 3;
            do {
              {
                v121 = *(_QWORD*)v117;
                __asm__ volatile("" ::"r"(v121));
              }
              v117 += 8;
              if ((*(_BYTE*)(v121 + 57) & 1) != 0) {
                goto LABEL_181;
              }
            } while (--v120 != 0);
          }
          if (v119 >= 0x18) {
            while (*(_BYTE*)(*(_QWORD*)v117 + 57LL) != 1 &&
                   (*(_BYTE*)(*((_QWORD*)v117 + 1) + 57LL) & 1) == 0 &&
                   (*(_BYTE*)(*((_QWORD*)v117 + 2) + 57LL) & 1) == 0 &&
                   (*(_BYTE*)(*((_QWORD*)v117 + 3) + 57LL) & 1) == 0) {
              v117 += 32;
              if (v117 == v118) {
                goto LABEL_154;
              }
            }
          LABEL_181:
            v132 = game_GmapExploreData_GetObtainedFirstFlagName(*(_QWORD*)a1),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v134 = v132;
            if (v132 != nullptr) {
              v164_.v165 = (__int64*)v132;
              v135 = (__int64 (**)(void))game_HashString((__int64)v132),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v133 = game_GameModeData_instance_;
              v164_.v164 = v135;
              if (game_GameModeData_instance_ != 0) {
                v136 = game_GameVariableTable_Find(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)&v164_.v164),
                v133 =
                    COERCE_AS(__typeof__(v133),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                {
                  v133 = v136 != 0 && *(_DWORD*)(v136 + 32) != 0;
                  __asm__ volatile("" ::"r"(v133));
                }
              }
            }
            LOBYTE(v118) = (v134 == nullptr) | v133 ^ 1;
            v122 = 1;
          LABEL_201:
            v137 = v122 & (unsigned __int8)v118;
            if (v45 < 1) {
              goto LABEL_222;
            }
            goto LABEL_202;
          }
        }
      LABEL_154:
        v122 = 0;
        goto LABEL_201;
      }
      {
        v45 = *(_DWORD*)(v43 + 32);
        __asm__ volatile("" ::"r"(v45));
      }
      if (*(_DWORD*)(a1 + 80) != 0) {
        goto LABEL_50;
      }
    LABEL_51:
      if (v45 >= 1) {
        v46 = 0;
        {
          v47 = game_map_MapRandom_instance__ptr[0];
          __asm__ volatile("" ::"r"(v47));
        }
        do {
          {
            v49 = *(__int64**)(*(_QWORD*)a1 + 24LL);
            __asm__ volatile("" ::"r"(v49));
          }
          {
            v51 = *v49;
            __asm__ volatile("" ::"r"(v51));
          }
          {
            v50 = v49[1];
            __asm__ volatile("" ::"r"(v50));
          }
          if (v50 != *v49) {
            do {
              if (*(_QWORD*)v51 != 0) {
                {
                  v57 = v14[342];
                  __asm__ volatile("" ::"r"(v57));
                }
                if (v57 != 0) {
                  v58 = game_GameVariableTable_Find(*(_QWORD**)(v57 + 48),
                                                    (unsigned __int64*)v51),
                  v133 = COERCE_AS(
                      __typeof__(v133),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  if (v58 != 0) {
                    v59 = *(__int64 (**)(_QWORD))(v58 + 72),
                    v133 = COERCE_AS(
                        __typeof__(v133),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    {
                      v60 = *(_QWORD*)(v58 + 80);
                      __asm__ volatile("" ::"r"(v60));
                    }
                    v61 = (_QWORD*)(v58 + (v60 >> 1));
                    if ((v60 & 1) != 0) {
                      v59 = *(__int64 (**)(_QWORD))((char*)v59 + *v61),
                      v133 = COERCE_AS(
                          __typeof__(v133),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                    }
                    LOBYTE(v43) = v59(v61),
                    v133 = COERCE_AS(
                        __typeof__(v133),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  }
                  else {
                    LOBYTE(v43) = 1;
                  }
                }
                if (*(_BYTE*)(v51 + 16) != ((v57 == 0) | v43 & 1)) {
                  goto LABEL_113;
                }
              }
              v51 += 24;
            } while (v51 != v50);
          }
          {
            v52 = *(char**)(a1 + 8);
            __asm__ volatile("" ::"r"(v52));
          }
          {
            v53 = *(char**)(a1 + 16);
            __asm__ volatile("" ::"r"(v53));
          }
          if (v52 != v53) {
            v54 = v53 - v52 - 8;
            if ((~(_BYTE)v54 & 0x18) != 0) {
              v55 = ((unsigned __int8)((unsigned int)v54 >> 3) + 1) & 3;
              while (1) {
                {
                  v56 = *(_QWORD*)v52;
                  __asm__ volatile("" ::"r"(v56));
                }
                v52 += 8;
                if ((*(_BYTE*)(v56 + 57) & 1) != 0) {
                  break;
                }
                if (--v55 == 0) {
                  goto LABEL_61;
                }
              }
            }
            else {
            LABEL_61:
              if (v54 < 0x18) {
                goto LABEL_113;
              }
              while (*(_BYTE*)(*(_QWORD*)v52 + 57LL) != 1 &&
                     (*(_BYTE*)(*((_QWORD*)v52 + 1) + 57LL) & 1) == 0 &&
                     (*(_BYTE*)(*((_QWORD*)v52 + 2) + 57LL) & 1) == 0 &&
                     (*(_BYTE*)(*((_QWORD*)v52 + 3) + 57LL) & 1) == 0) {
                v52 += 32;
                if (v52 == v53) {
                  goto LABEL_113;
                }
              }
            }
            v62 =
                (unsigned __int64)game_GmapExploreData_GetObtainedFirstFlagName(
                    *(_QWORD*)a1),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            if (v62 == 0 ||
                (v164_.v165 = (__int64*)v62, v62 = game_HashString(v62),
                 v64 = v14[342], v164_.v164 = (__int64 (**)(void))v62,
                 v64 == 0) ||
                (v62 = game_GameVariableTable_Find(
                     *(_QWORD**)(v64 + 48), (unsigned __int64*)&v164_.v164)) ==
                    0 ||
                *(_DWORD*)(v62 + 32) == 0) {
              {
                v65 = *(__int64**)(*(_QWORD*)a1 + 24LL);
                __asm__ volatile("" ::"r"(v65));
              }
              {
                v67 = *v65;
                __asm__ volatile("" ::"r"(v67));
              }
              {
                v66 = v65[1];
                __asm__ volatile("" ::"r"(v66));
              }
              if (v66 != *v65) {
                do {
                  if (*(_QWORD*)v67 != 0) {
                    {
                      v73 = v14[342];
                      __asm__ volatile("" ::"r"(v73));
                    }
                    if (v73 != 0) {
                      v74 = game_GameVariableTable_Find(*(_QWORD**)(v73 + 48),
                                                        (unsigned __int64*)v67),
                      v133 = COERCE_AS(
                          __typeof__(v133),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                      if (v74 != 0) {
                        v75 = *(__int64 (**)(_QWORD))(v74 + 72),
                        v133 = COERCE_AS(
                            __typeof__(v133),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                        {
                          v76 = *(_QWORD*)(v74 + 80);
                          __asm__ volatile("" ::"r"(v76));
                        }
                        v77 = (_QWORD*)(v74 + (v76 >> 1));
                        if ((v76 & 1) != 0) {
                          v75 = *(__int64 (**)(_QWORD))((char*)v75 + *v77),
                          v133 = COERCE_AS(
                              __typeof__(v133),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                        }
                        LOBYTE(v62) = v75(v77),
                        v133 = COERCE_AS(
                            __typeof__(v133),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                      }
                      else {
                        LOBYTE(v62) = 1;
                      }
                    }
                    if (*(_BYTE*)(v67 + 16) != ((v73 == 0) | v62 & 1)) {
                      goto LABEL_113;
                    }
                  }
                  v67 += 24;
                } while (v67 != v66);
              }
              {
                v68 = *(char**)(a1 + 8);
                __asm__ volatile("" ::"r"(v68));
              }
              {
                v69 = *(char**)(a1 + 16);
                __asm__ volatile("" ::"r"(v69));
              }
              if (v68 != v69) {
                v70 = v69 - v68 - 8;
                if ((~(_BYTE)v70 & 0x18) != 0) {
                  v71 = ((unsigned __int8)((unsigned int)v70 >> 3) + 1) & 3;
                  while (1) {
                    {
                      v72 = *(_QWORD*)v68;
                      __asm__ volatile("" ::"r"(v72));
                    }
                    v68 += 8;
                    if ((*(_BYTE*)(v72 + 57) & 1) != 0) {
                      break;
                    }
                    if (--v71 == 0) {
                      goto LABEL_87;
                    }
                  }
                }
                else {
                LABEL_87:
                  if (v70 < 0x18) {
                    goto LABEL_113;
                  }
                  while (*(_BYTE*)(*(_QWORD*)v68 + 57LL) != 1 &&
                         (*(_BYTE*)(*((_QWORD*)v68 + 1) + 57LL) & 1) == 0 &&
                         (*(_BYTE*)(*((_QWORD*)v68 + 2) + 57LL) & 1) == 0 &&
                         (*(_BYTE*)(*((_QWORD*)v68 + 3) + 57LL) & 1) == 0) {
                    v68 += 32;
                    if (v68 == v69) {
                      goto LABEL_113;
                    }
                  }
                }
                v78 =
                    game_GmapExploreData_GetObtainedFirstFlagName(*(_QWORD*)a1),
                v133 =
                    COERCE_AS(__typeof__(v133),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v78 == nullptr ||
                    (v164_.v165 = (__int64*)v78,
                     v80 = (__int64 (**)(void))game_HashString((__int64)v78),
                     v81 = v14[342], v164_.v164 = v80, v81 == 0) ||
                    (v82 = game_GameVariableTable_Find(
                         *(_QWORD**)(v81 + 48),
                         (unsigned __int64*)&v164_.v164)) == 0 ||
                    *(_DWORD*)(v82 + 32) == 0) {
                  {
                    v83 = *(unsigned __int8***)(a1 + 8);
                    __asm__ volatile("" ::"r"(v83));
                  }
                  {
                    v84 = *(char**)(a1 + 16);
                    __asm__ volatile("" ::"r"(v84));
                  }
                  if (v83 != (unsigned __int8**)v84) {
                    v85 = v84 - (char*)v83 - 8;
                    if ((~(_BYTE)v85 & 0x18) != 0) {
                      v86 = ((unsigned __int8)((unsigned int)v85 >> 3) + 1) & 3;
                      do {
                        {
                          v88 = *v83++;
                          __asm__ volatile("" ::"r"(v88));
                        }
                        v87 = v88;
                        if ((v88[57] & 1) != 0) {
                          goto LABEL_142;
                        }
                      } while (--v86 != 0);
                    }
                    if (v85 >= 0x18) {
                      while (1) {
                        {
                          v87 = *v83;
                          __asm__ volatile("" ::"r"(v87));
                        }
                        if ((*v83)[57] == 1) {
                          break;
                        }
                        {
                          v87 = v83[1];
                          __asm__ volatile("" ::"r"(v87));
                        }
                        if ((v87[57] & 1) != 0) {
                          break;
                        }
                        {
                          v87 = v83[2];
                          __asm__ volatile("" ::"r"(v87));
                        }
                        if ((v87[57] & 1) != 0) {
                          break;
                        }
                        {
                          v87 = v83[3];
                          __asm__ volatile("" ::"r"(v87));
                        }
                        if ((v87[57] & 1) != 0) {
                          break;
                        }
                        v83 += 4;
                        if (v83 == (unsigned __int8**)v84) {
                          goto LABEL_113;
                        }
                      }
                    LABEL_142:
                      v43 = (unsigned __int64)
                          game_GmapExploreData_GetObtainedFirstFlagName(
                              *(_QWORD*)a1),
                      v133 = COERCE_AS(
                          __typeof__(v133),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                      if (v43 != 0) {
                        v164_.v165 = (__int64*)v43;
                        v164_.v164 = (__int64 (**)(void))game_HashString(v43),
                        v133 = COERCE_AS(
                            __typeof__(v133),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                        LOBYTE(v43) = game_VariableManager_SetFlag(
                            (__int64)&v164_.v164, 1),
                        v133 = COERCE_AS(
                            __typeof__(v133),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                      }
                      if (v87[58] == 1) {
                        v43 = (unsigned __int64)
                            game_GmapExploreData_GetShowRareFlagName(
                                *(_QWORD*)a1),
                        v133 = COERCE_AS(
                            __typeof__(v133),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                        if (v43 != 0) {
                          v164_.v165 = (__int64*)v43;
                          v164_.v164 = (__int64 (**)(void))game_HashString(v43),
                          v133 = COERCE_AS(
                              __typeof__(v133),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                          LOBYTE(v43) = game_VariableManager_SetFlag(
                              (__int64)&v164_.v164, 1),
                          v133 = COERCE_AS(
                              __typeof__(v133),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                        }
                      }
                      goto LABEL_120;
                    }
                  }
                }
              }
            }
          }
        LABEL_113:
          {
            v89 = *(_DWORD*)(a1 + 84);
            __asm__ volatile("" ::"r"(v89));
          }
          nn_os_LockMutex((__int64)&game_g_random_mutex),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          {
            v90 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 8);
            __asm__ volatile("" ::"r"(v90));
          }
          {
            v91 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 12);
            __asm__ volatile("" ::"r"(v91));
          }
          {
            v92 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47) ^
                  (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47) << 11);
            __asm__ volatile("" ::"r"(v92));
          }
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47) =
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 4);
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 4) = v90;
          v93 = (v92 >> 8) ^ (v91 >> 19) ^ v92 ^ v91;
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 8) = v91;
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 12) = v93;
          LOBYTE(v43) = nn_os_UnlockMutex((__int64)&game_g_random_mutex),
          v133 = COERCE_AS(__typeof__(v133),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          {
            v94 = *(unsigned __int8***)(a1 + 8);
            __asm__ volatile("" ::"r"(v94));
          }
          {
            v95 = *(unsigned __int8***)(a1 + 16);
            __asm__ volatile("" ::"r"(v95));
          }
          if (v94 == v95) {
          LABEL_119:
            v87 = nullptr;
          }
          else {
            v96 = 0;
            v97 = (v93 & 0x7FFFFFFF) % v89;
            while (1) {
              {
                v87 = *v94;
                __asm__ volatile("" ::"r"(v87));
              }
              if (((*v94)[58] & 1) == 0) {
                v96 += v87[56];
                if (v97 < v96) {
                  break;
                }
              }
              if (++v94 == v95) {
                goto LABEL_119;
              }
            }
          }
        LABEL_120:
          {
            v99 = *(unsigned __int8***)(a1 + 40);
            __asm__ volatile("" ::"r"(v99));
          }
          {
            v98 = *(_QWORD*)(a1 + 48);
            __asm__ volatile("" ::"r"(v98));
          }
          if ((unsigned __int64)v99 < v98) {
            *v99 = v87;
            v48 = (__int64)(v99 + 1);
          }
          else {
            {
              v100 = *(_QWORD*)(a1 + 32);
              __asm__ volatile("" ::"r"(v100));
            }
            v163 = v46;
            v101 = v47;
            v102 = (char*)v99 - v100;
            v103 = ((__int64)v99 - v100) >> 3;
            v104 = v103 + 1;
            if ((unsigned __int64)(v103 + 1) >> 61 != 0) {
              goto LABEL_223;
            }
            v105 = v98 - v100;
            v106 = v14;
            v107 = v45;
            if (v105 >> 2 > v104) {
              v104 = v105 >> 2;
            }
            if ((unsigned __int64)v105 >= 0x7FFFFFFFFFFFFFF8LL) {
              v108 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v108 = v104;
            }
            if (v108 != 0) {
              if (v108 >> 61 != 0) {
                goto LABEL_224;
              }
              v109 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v108, 16, 0),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            else {
              v109 = 0;
            }
            v110 = v109 + 8 * v108;
            v111 = (unsigned __int64)v99 - v100;
            {
              v112 = (__int64)&v102[v109 + -8 * v103];
              __asm__ volatile("" ::"r"(v112));
            }
            *(_QWORD*)&v102[v109] = v87;
            {
              v48 = (__int64)&v102[v109 + 8];
              __asm__ volatile("" ::"r"(v48));
            }
            LOBYTE(v43) = memcpy(v112, v100, v111),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            *(_QWORD*)(a1 + 32) = v112;
            *(_QWORD*)(a1 + 40) = v48;
            *(_QWORD*)(a1 + 48) = v110;
            if (v100 != 0) {
              v113 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v113 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v113, v100),
                  v133 = COERCE_AS(
                      __typeof__(v133),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
            v47 = v101;
            v46 = v163;
            v45 = v107;
            v14 = v106;
          }
          ++v46;
          *(_QWORD*)(a1 + 40) = v48;
        } while (v46 != v45);
      }
    LABEL_222:
      game_VariableManager_SetFlag(v162, *(_DWORD*)(v162 + 28)),
          v133 = COERCE_AS(__typeof__(v133),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      game_VariableManager_SetFlag(v169, *(_DWORD*)(v169 + 28)),
          v133 = COERCE_AS(__typeof__(v133),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      return game_VariableManager_SetFlag(v168, *(_DWORD*)(v168 + 28));
    }
  }
  *(_DWORD*)(a1 + 80) = 1;
  v32 = &GameData_1ab1630;
  v33 = &GameData_1adf7ed;
LABEL_41:
  v41 = !v13;
  goto LABEL_42;
}

#pragma GCC visibility pop
