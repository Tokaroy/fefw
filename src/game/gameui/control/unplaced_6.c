#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8, _QWORD* result);

__int64 FloatingHelp_18ae4d0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 FloatingHelp_18ae4d0_alt1(__int64, _QWORD**,
                                  unsigned int) __asm__("FloatingHelp_18ae4d0");

__int64 MenuItem_188b880(_QWORD, _QWORD);

__int64 std___1___shared_weak_count___release_weak(_QWORD);

__int64 std___1___shared_weak_count_lock(_QWORD);

extern __int64 (*ui_Event_vtable[])();

extern __int64 GameData_21f1e08;

__int64 game_gameui_control_1895490(_QWORD* a1, char a2);

__int64 game_gameui_control_18955b0(_QWORD* a1, char a2);

__int64 game_gameui_control_18956d0(_QWORD* a1, char a2, int a3);

__int64 game_gameui_control_18957f0(_QWORD* a1, char a2, int a3);

__int64 game_gameui_control_189fd50(_QWORD* a1, char a2);

__int64 game_gameui_control_189fe70(_QWORD* a1, char a2);

__int64 game_gameui_control_189ff90(_QWORD* a1, char a2, int a3);

__int64 game_gameui_control_18a00b0(_QWORD* a1, char a2, int a3);

__int64 game_gameui_control_18b2d50(_QWORD* a1);

__int64 game_gameui_control_18b2e10(_QWORD* a1);

__int64 game_gameui_control_18b2ed0(_QWORD* a1);

__int64 game_gameui_control_18b2f90(_QWORD* a1);

__int64 Element_18850d0(_QWORD, _QWORD, _QWORD);

__int64 LayoutEx_579160(_QWORD, _QWORD);

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);

extern __int64 (*GameData_20c9fa0[])();

extern __int64 (*GameData_20c9fe0[])();

extern __int64 (*GameData_20ca198[])();

extern __int64 (
    *game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr_20ca030[])();

extern __int64 (*game_gameui_control_KeySort_vtable[])();

extern __int64 GameData_2131d90[8];

extern __int64 fw_memory_g_heap_manager_ptr;

extern __int64 ui_Manager_instance_;

__attribute__((swiftcall)) void
game_gameui_control_1797100(PSEUDO_X8 x8_, __int64 a1, __int64 a2);

__attribute__((swiftcall)) void

game_gameui_control_1797100(PSEUDO_X8 x8_, __int64 a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* result;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v6 = (_QWORD*)LayoutEx_579160(1072, 8);
  v7 = v6 + 3;
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_20c9fe0;
  result = (_QWORD*)Element_18850d0(v6 + 3, a1, a2);
  v10 = GameData_2131d90[0] + 376;
  v8[3] = GameData_2131d90[0] + 16;
  v8[12] = v10;
  v11 = v8 + 12;
  *((_DWORD*)v8 + 263) = *(_DWORD*)(a1 + 1028);
  LODWORD(v10) = *(_DWORD*)(a1 + 1032);
  *((_DWORD*)v8 + 265) = 0;
  *((_DWORD*)v8 + 264) = v10;
  *((_BYTE*)v8 + 1064) = *(_BYTE*)(a1 + 1040);
  v12 = ui_Manager_instance_;
  v13 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v14 = ui_Manager_instance_ + 1240;
  if (v13 == ui_Manager_instance_ + 1240) {
    goto LABEL_4;
  }
  while (*(_QWORD**)(v13 + 16) != v11) {
    v13 = *(_QWORD*)(v13 + 8);
    if (v13 == v14) {
      goto LABEL_4;
    }
  }
  if (v13 == v14) {
  LABEL_4:
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    result[1] = v14;
    result[2] = v11;
    v15 = *(_QWORD*)(v12 + 1240);
    *result = v15;
    *(_QWORD*)(v15 + 8) = result;
    *(_QWORD*)(v12 + 1240) = result;
    ++*(_QWORD*)(v12 + 1256);
  }
  *a3 = v7;
  a3[1] = v8;
  v8[3] = game_gameui_control_KeySort_vtable;
  v8[12] = GameData_20c9fa0;
  *(_BYTE*)(*(_QWORD*)(v8[4] + 24LL) + 88LL) &= ~1u;
  v8[3] = game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr_20ca030;
  v8[12] = GameData_20ca198;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
