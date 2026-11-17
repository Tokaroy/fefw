#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
extern __int64 (*GameData_20c4c88[])();
extern __int64 (*GameData_20c4d08[])();
extern __int64 (*game_sound_PlayDecideSe_ptr[7])();
extern __int64* GameData_212d2b8;
__int64 game_map_anonymous_17859d0(__int64 a1, char a2, __int64 a3);

__int64 game_map_anonymous_17859d0(__int64 a1, char a2, __int64 a3)
{
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
    char gap40_[8];
    __int64 (*v16[4])();
    __int64 (**v17)();
    char gap88_[16];
    char* v18;
    __int64 (*v19[4])();
    __int64 (**v20)();
  } f_;

  if (a2 != 0) {
    if (a2 != 1) {
      return 0;
    }
    v3 = "MID_Menu_StartExplore_Confirm";
  }
  else {
    v3 = "MID_Menu_StartBattle_Confirm";
  }
  f_.v18 = v3;
  v4 = *(_QWORD*)(a3 + 32);
  if (v4 != 0) {
    v5 = a1;
    if (v4 == a3) {
      v7 = *(_QWORD*)(a3 + 32);
      f_.v20 = f_.v19;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 24LL))(v7,
                                                            (__int64)f_.v19);
    }
    else {
      f_.v20 = (__int64 (**)(void))(
          *(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(*(_QWORD*)(a3 + 32));
    }
    a1 = v5;
  }
  else {
    f_.v19[0] = (__int64 (*)())GameData_20c4c88;
    f_.v20 = f_.v19;
  }
  f_.v16[0] = (__int64 (*)())GameData_20c4d08;
  f_.v17 = f_.v16;
  f_.v14[0] = GameData_20c4d08;
  f_.v15 = f_.v14;
  v6 = MapSortieMenu_871860(a1, (__int64)&f_.v18, (__int64)f_.v19,
                            (__int64)f_.v16, (__int64)f_.v14);
  if (f_.v15 == f_.v14) {
    v8 = 32;
  }
  else {
    if (f_.v15 == nullptr) {
      goto LABEL_17;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*f_.v15 + v8))((__int64)f_.v15);
LABEL_17:
  if (f_.v17 == f_.v16) {
    v9 = 32;
  }
  else {
    if (f_.v17 == nullptr) {
      goto LABEL_22;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v17 + v9))((__int64)f_.v17);
LABEL_22:
  if (f_.v20 == f_.v19) {
    v10 = 32;
  }
  else {
    if (f_.v20 == nullptr) {
      goto LABEL_27;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v20 + v10))((__int64)f_.v20);
LABEL_27:
  f_.v17 = f_.v16;
  f_.v20 = f_.v19;
  f_.v16[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v16[1] = game_sound_PlayDecideSe_ptr[0];
  f_.v19[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v19[1] = game_sound_PlayDecideSe_ptr[0];
  GameRoutine_654050(f_.v19, (_QWORD*)(v6 + 1152));
  if (f_.v20 == f_.v19) {
    v11 = 32;
    goto LABEL_31;
  }
  if (f_.v20 != nullptr) {
    v11 = 40;
  LABEL_31:
    (*(void (**)(__int64))((char*)*f_.v20 + v11))((__int64)f_.v20);
  }
  if (f_.v17 == f_.v16) {
    v12 = 32;
    goto LABEL_36;
  }
  if (f_.v17 != nullptr) {
    v12 = 40;
  LABEL_36:
    (*(void (**)(__int64))((char*)*f_.v17 + v12))((__int64)f_.v17);
  }
  return v6;
}

#pragma GCC visibility pop
