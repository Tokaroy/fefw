#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);

__int64 BasicMenu_16dea40(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameHr_1789e40();

__int64 GameHr_178a080();

__int64 GameRoutine_15bd460(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);

__int64 LayoutAccessor_1571860(__int64*, __int64, char, char, char, char);

__int64 UnitUtil_15df590(__int64, __int64, __int64);

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 game_IsVibrationEnabled(_QWORD);

__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);

__int64 std___1___shared_weak_count___release_weak(_QWORD);

__int64 std___1___shared_weak_count___release_weak_alt1(__int64);

__int64 std___1___shared_weak_count_lock(_QWORD);

__int64 ui_1572370(_QWORD, _QWORD);

__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);

__int64 ui_game_15740c0(__int64, __int64, char, __int64, char);

bool game_159e890(__int64, char, __int64);

extern __int64 (*GameData_2051b50[])();

extern __int64 (*GameData_205ac78[])();

extern __int64 (*GameData_20c5818[])();

extern __int64 (*GameData_20c5f10[])();

extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_209ddf8[])();

extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20c5fe0[])();

extern __int64 (*game_menu_GameMenu_vtable[])();

extern __int64 (*game_menu_ItemUnitMenu_vtable[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2050300[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20574c8[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2058420[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_205bca0[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_209dd28[])();

extern __int64 (*game_menu_UnitGridSelectMenu_vtable[])();

extern __int64 (*game_menu_anonymous_ExchangeUnitMenu_vtable[])();

extern __int64 (*game_menu_anonymous_SkillUnitMenu_vtable[])();

extern __int64 (*game_menu_anonymous_UnitItemMenu_vtable_2057ef0[])();

extern __int64 fw_memory_g_heap_manager;

extern __int64 fw_memory_g_heap_manager_ptr;

extern __int64 game_g_game_setting;

void UnitUtil_15df460(__int64);

__int64 game_menu_15b8b40(__int64 a1);

__int64 game_menu_15c66a0(__int64* a1);

__int64 game_menu_15c6a40(__int64* a1);

__int64 game_menu_15c9f40(__int64 a1);

_QWORD* game_menu_1789cf0(__int64 a1, __int64 a2);

_QWORD* game_menu_1789cf0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v11_.v11 = 0;
  v11_.v12 = 0;
  game_menu_16dcd30(a1, a2, &v11_.v11, 0);
  v3 = v11_.v12;
  *(_QWORD*)a1 = game_menu_GameMenu_vtable;
  *(_QWORD*)(a1 + 176) = game_menu_MenuInput_InputUnknown00_ptr_209dd28;
  *(_QWORD*)(a1 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_209ddf8;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  *(_QWORD*)a1 = game_menu_UnitGridSelectMenu_vtable;
  *(_QWORD*)(a1 + 176) = GameData_20c5f10;
  *(_QWORD*)(a1 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c5fe0;
  UnitUtil_15df460(a1 + 1072);
  *(_BYTE*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  v9_.v9[2] = 0;
  v9_.v9[3] = a1;
  v7_.v7[2] = 0;
  v7_.v7[3] = a1;
  v9_.v9[0] = GameData_20c5818;
  v9_.v9[1] = GameHr_1789e40;
  v7_.v8 = v7_.v7;
  v9_.v10 = v9_.v9;
  v7_.v7[0] = GameData_20c5818;
  v7_.v7[1] = GameHr_178a080;
  UnitUtil_15df590(a1 + 1072, (__int64)v9_.v9, (__int64)v7_.v7);
  if (v7_.v8 == v7_.v7) {
    v4 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v4))((__int64)v7_.v8);
LABEL_9:
  result = v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v6 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v9_.v10 + v6))((__int64)v9_.v10);
}

#pragma GCC visibility pop
