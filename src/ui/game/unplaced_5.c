#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CmdBtlWindow_17c8620(_QWORD* result, __int64*, char, char);

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);

__int64 GameHr_1562680(_QWORD, _QWORD, float);

__int64 GameRoutine_17c1720(__int64);

__int64 GameRoutine_17c55b0(__int64);

__int64 GameRoutine_17c89c0(__int64*);

__int64 Pane_58f8a0(_QWORD);

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);

__int64 game_156c910(_QWORD, const char*, ...);

__int64 std___1___shared_weak_count___release_weak(_QWORD);

__int64 std___1___shared_weak_count_lock(_QWORD);

__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);

extern _UNKNOWN* GameData_212da30;

extern __int64 (*CmdBtlWindow_17c87e0_ptr[])();

extern __int64 (*GameData_20d8f58[])();

extern __int64 (*game_cmdbtl_CmdBtlWindow_vtable[])();

extern __int64* GameData_212d670[3];

extern __int64* GameData_212d678[2];

extern __int64* GameData_212f628[9];

extern __int64 GameData_212d690;

extern __int64 GameData_212f538;

extern __int64 GameData_212f5c0[3];

extern __int64 fw_memory_g_heap_manager_ptr;

extern int GameData_2265770;

_QWORD* ui_game_17c7dc0(__int64 a1);

__int64 ui_game_19ac9e0(__int64 a1, int a2, int a3, int a4, unsigned __int8 a5,
                        int a6);

_QWORD* ui_game_17c7dc0(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  v1 = (__int64*)GameData_212f538;
  if (*(_QWORD*)GameData_212f538 == 0) {
    *(_QWORD*)GameData_212f538 = a1;
    GameData_2265770 = 1;
  }
  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 32) = 1;
  *(_QWORD*)a1 = game_cmdbtl_CmdBtlWindow_vtable;
  *(_QWORD*)(a1 + 8) = CmdBtlWindow_17c87e0_ptr;
  *(_QWORD*)(a1 + 24) = GameData_20d8f58;
  *(_DWORD*)(a1 + 36) = 2;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 117) = 0;
  v3 = fw_memory_HeapManager_Allocate(*v2, 288, 16, 0);
  GameRoutine_17c55b0(v3);
  *GameData_212f628[0] = v3;
  (*(void (**)(__int64))(*(_QWORD*)(v3 + 240) + 16LL))(v3 + 240);
  v4 = fw_memory_HeapManager_Allocate(*v2, 368, 16, 0);
  GameRoutine_17c1720(v4);
  *(_QWORD*)GameData_212f5c0[0] = v4;
  result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)(v4 + 240) + 16LL))(
      v4 + 240);
  v6 = *v1;
  if (*v1 != 0) {
    v7 = *(_QWORD*)(v6 + 48);
    v8 = *(_QWORD*)(v6 + 56);
    v9 = ((v8 - v7) << 7) - 1;
    if (v8 == v7) {
      v9 = 0;
    }
    v10 = *(_QWORD*)(v6 + 80) + *(_QWORD*)(v6 + 72);
    if (v9 == v10) {
      GameRoutine_17c89c0((__int64*)(v6 + 40));
      v7 = *(_QWORD*)(v6 + 48);
      v10 = *(_QWORD*)(v6 + 80) + *(_QWORD*)(v6 + 72);
    }
    v11 = 0;
    *(_DWORD*)(*(_QWORD*)(v7 + 8 * (v10 >> 10)) + 4 * (v10 & 0x3FF)) =
        *(_DWORD*)(v6 + 88);
    ++*(_QWORD*)(v6 + 80);
    result = CmdBtlWindow_17c8620((_QWORD*)v6, &v11, 0, 0);
    *(_DWORD*)(v6 + 88) = 1;
  }
  return result;
}

#pragma GCC visibility pop
