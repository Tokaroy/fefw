#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_820d50(int);
__int64 GameHr_1013a50(__int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool GameRoutine_1013eb0(__int64, __int64, int);
extern _DWORD* GameData_212f4f8;
extern _UNKNOWN GameData_1a9c715;
extern _UNKNOWN GameData_1af1205;
extern __int64 (*GameData_2001ac8[])();
extern __int64 (*GameData_2001b18[])();
extern __int64 (*game_cmdbtl_Field_vtable[])();
extern __int64* GameData_212d2f0;
extern __int64* GameData_212fc88[5];
extern __int64* GameData_212fce8[5];
extern __int64 GameData_212f500[8];
extern __int64 GameData_2216818;
extern __int64 GameData_2216820;
extern __int64 GameData_2233740;
extern __int64 GameData_2233750;
extern __int64 GameData_2233760;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_2216858;
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void GameRoutine_1013ad0(__int64);
void __attribute__((noreturn)) GameRoutine_8123d0();
void game_1013d60(__int64, char, __int64, __int64, __int64, __int64, __int64,
                  __int64, __int64, __int64, unsigned __int64, char*);
void game_cmdbtl_1011740(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10, unsigned __int64 a11,
                         char* a12);

void game_cmdbtl_1011740(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                         __int64 a9, __int64 a10, unsigned __int64 a11,
                         char* a12)
{
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  _QWORD* v18;
  __int64* v19;
  __int64 v20;
  unsigned int* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (*(_QWORD*)GameData_212f500[0] == 0) {
    *(_QWORD*)GameData_212f500[0] = a1;
    *GameData_212f4f8 = 1;
  }
  v13 = GameData_212d2f0;
  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)a1 = game_cmdbtl_Field_vtable;
  *(_QWORD*)(a1 + 8) = v13 + 2;
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       40, 16, 0),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)v15 = GameData_2001ac8;
  v16 = GameData_212fc88[0];
  v17 = *(_QWORD*)(a1 + 64);
  *(_DWORD*)(v15 + 32) = 0;
  *(_QWORD*)(a1 + 64) = v15;
  *(_QWORD*)(v15 + 24) = v16 + 2;
  *(_QWORD*)(a1 + 56) = v15 + 24;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    std___1___shared_weak_count___release_weak(v17),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v18 = (_QWORD*)fw_memory_HeapManager_Allocate(*v14, 56, 16, 0),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v18[1] = 0;
  v18[2] = 0;
  *v18 = GameData_2001b18;
  v19 = GameData_212fce8[0];
  v20 = *(_QWORD*)(a1 + 80);
  v18[4] = 0;
  v18[5] = 0;
  v18[6] = 0;
  *(_QWORD*)(a1 + 80) = v18;
  v18[3] = v19 + 2;
  *(_QWORD*)(a1 + 72) = v18 + 3;
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    std___1___shared_weak_count___release_weak(v20),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0(),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v21 = (unsigned int*)GameData_2216818;
  if (GameData_2216818 != 0) {
    v21 = game_gmap_SpotMgr_FindSpot((unsigned int*)GameData_2216818),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((GameData_2216820 & 0x400000) == 0 || v21 == nullptr ||
      *(_QWORD*)(a1 + 48) == 0) {
    if ((GameData_2216820 & 0x200) == 0) {
      return;
    }
  LABEL_24:
    v26 = *(_QWORD*)(a1 + 56);
    *(_DWORD*)(v26 + 8) |= 8u;
    game_VariableManager_SetFlag((__int64)&GameData_2233760, 1),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    game_VariableManager_SetFlag((__int64)&GameData_2233740,
                                 (*(_DWORD*)(v26 + 8) & 4) != 0),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    game_VariableManager_SetFlag((__int64)&GameData_2233750,
                                 (*(_DWORD*)(v26 + 8) & 2) != 0),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    GameRoutine_1013ad0(v26),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    return;
  }
  if ((GameData_2216820 & 0x200) != 0) {
    goto LABEL_24;
  }
  v22 = (__int64)v21;
  v23 = game_820d50(19),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if (game_GameModeData_instance_ != 0 &&
          (v24 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v23)) != 0 &&
          *(_DWORD*)(v24 + 32) != 0 ||
      (game_HashString((__int64)&GameData_1a9c715),
       *(_BYTE*)((v25 = *(_QWORD*)(a1 + 48)) + 188) == 0) ||
      !GameRoutine_1013eb0(*(_QWORD*)(a1 + 56), v22,
                           *(unsigned __int8*)(v25 + 188))) {
    v27 = game_820d50(18),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v32 = COERCE_AS(__typeof__(v32),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (game_GameModeData_instance_ == 0 ||
        (v28 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v27)) == 0 ||
        *(_DWORD*)(v28 + 32) == 0) {
      game_HashString((__int64)&GameData_1af1205),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v32 = COERCE_AS(__typeof__(v32),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
          v35 = COERCE_AS(__typeof__(v35),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v29 = *(_QWORD*)(a1 + 48);
      if (*(_BYTE*)(v29 + 189) != 0 &&
          GameRoutine_1013eb0(*(_QWORD*)(a1 + 56), v22,
                              *(unsigned __int8*)(v29 + 189))) {
        game_1013d60(*(_QWORD*)(a1 + 56), 1, v30, v31, v32, v33, v34, v35, a9,
                     a10, a11, a12),
            v30 = COERCE_AS(__typeof__(v30),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v32 = COERCE_AS(__typeof__(v32),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
            v35 = COERCE_AS(__typeof__(v35),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
    }
  }
  else {
    GameHr_1013a50(*(_QWORD*)(a1 + 56), 1),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v32 = COERCE_AS(__typeof__(v32),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
}

#pragma GCC visibility pop
