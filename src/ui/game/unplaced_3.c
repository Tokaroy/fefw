#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);

__int64 GameHr_1562680(_QWORD, _QWORD, float);

__int64 Pane_58f8a0(_QWORD);

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 game_156c910(_QWORD, const char*, ...);

__int64 std___1___shared_weak_count___release_weak(_QWORD);

__int64 std___1___shared_weak_count_lock(_QWORD);

__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);

extern _UNKNOWN* GameData_212da30;

extern __int64* GameData_212d670[3];

extern __int64* GameData_212d678[2];

extern __int64 GameData_212d690;

__int64 ui_game_19ac9e0(__int64 a1, int a2, int a3, int a4, unsigned __int8 a5,
                        int a6);

__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 LayoutEx_579160(_QWORD, _QWORD);

__int64 Util_157e3a0(_QWORD, _QWORD, _QWORD, _QWORD);

extern _UNKNOWN* GameData_212c8a8;

extern __int64 (*GameData_21050a0[])();

extern __int64 (*GameData_21050e0[])();

extern __int64 (*GameData_21052b8[])();

extern __int64 (*GameData_21052e0[])();

extern __int64 (*InfoItemSkill_Destructor_ptr[])();

extern __int64 (
    *game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr_2105130
        [])();

extern __int64 (*game_gameui_control_InfoItemSkill_vtable[])();

__attribute__((swiftcall)) void ui_game_18b35a0(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, __int64 a3);

__attribute__((swiftcall)) void ui_game_18b35a0(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 result;

  v8 = (_QWORD*)LayoutEx_579160(1120, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_21050e0;
  GameRoutine_18b26a0(v8 + 3, a1, a2, a3);
  v10[138] = 0;
  v10[139] = 0;
  v10[3] = game_gameui_control_InfoItemSkill_vtable;
  v10[12] = InfoItemSkill_Destructor_ptr;
  v10[132] = GameData_21050a0;
  result = Util_157e3a0(v10 + 14, GameData_212c8a8, 1, 0);
  *a4 = v9;
  a4[1] = v10;
  v10[3] =
      game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr_2105130;
  v10[12] = GameData_21052b8;
  v10[132] = GameData_21052e0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
