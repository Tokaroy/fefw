#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16de1f0(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_20();
__int64 GameRoutine_6e5a40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_720280(_QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*ProcObeliskDepositoryLegionMenu_Destructor_ptr[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_211df10[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_211de40[])();
extern __int64* GameData_212d6a8;
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf98[2];
extern __int64 GameData_2132038[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 task_199a900(__int64 a1);

__int64 task_199a900(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  long double v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0);
  v23 = 0;
  v24 = 0;
  *(_QWORD*)v2 = ProcObeliskDepositoryLegionMenu_Destructor_ptr;
  *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr_211de40;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_211df10;
  game_menu_16dcd30(v2, "ShopSelectMenu", &v23, 0);
  v3 = GameData_212d6a8;
  v4 = v24;
  *(_QWORD*)v2 = GameData_212d6a8 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 143;
  *(_QWORD*)(v2 + 1056) = v3 + 169;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = GameData_2132038[0];
  *(_QWORD*)(v2 + 1064) = 0;
  *(_DWORD*)(v2 + 664) = 0;
  LODWORD(v23) = 0;
  *(_QWORD*)v2 = v5 + 16;
  *(_QWORD*)(v2 + 1056) = v5 + 1464;
  *(_QWORD*)(v2 + 176) = v5 + 1256;
  *(_QWORD*)(v2 + 656) = 4;
  *(_QWORD*)(v2 + 792) = *(_QWORD*)(v2 + 784);
  *(_QWORD*)(v2 + 816) = *(_QWORD*)(v2 + 808);
  GameRoutine_6e5a40(v2 + 784, 5, &v23);
  v7 = *(_QWORD*)(v2 + 816);
  v8 = *(_QWORD*)(v2 + 808);
  LODWORD(v23) = 0;
  v9 = v7 - v8;
  v10 = (v7 - v8) >> 2;
  if (v10 > 4) {
    if (v9 != 20) {
      *(_QWORD*)(v2 + 816) = v8 + 20;
    }
  }
  else {
    GameRoutine_6e5a40(v2 + 808, 5 - v10, &v23);
  }
  v11 = GameData_212cf98[0];
  *(_QWORD*)v2 = ProcObeliskDepositoryLegionMenu_Destructor_ptr;
  v12 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v11);
  v13 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v11 + 8);
  *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr_211de40;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_211df10;
  v14 = ((v13 - v12) << 6) - 1;
  if (v13 == v12) {
    v14 = 0;
  }
  v15 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  v16 = (_QWORD*)GameData_212cf80[0];
  v17 = *(_QWORD*)GameData_212cf80[0];
  v18 = *(_QWORD*)((char*)GameRoutine_20 + v11 + 8) +
        *(_QWORD*)((char*)GameRoutine_20 + v11);
  if (v14 == v18) {
    GameRoutine_720280(v11);
    v12 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v11);
    v18 = *(_QWORD*)((char*)GameRoutine_20 + v11 + 8) +
          *(_QWORD*)((char*)GameRoutine_20 + v11);
  }
  *(_QWORD*)(*(_QWORD*)(v12 + 8 * (v18 >> 9)) + 8 * (v18 & 0x1FF)) = v17;
  *v16 = v15 + 2496;
  ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v11);
  BasicMenuCursor_16de1f0(v2, 11, 0, v6);
  ProcInst_657850(v2, GameData_212c730, "ProcObeliskDepositoryLegionMenu", 1,
                  a1);
  v20 = *(_QWORD**)(v2 + 256);
  v19 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v20 != v19) {
    if (*v20 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v20 + 8LL))(*v20);
      v19 = *(_QWORD**)(v2 + 264);
    }
    ++v20;
  }
  v21 = *(_QWORD*)(v2 + 344);
  if (v21 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
}

#pragma GCC visibility pop
