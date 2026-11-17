#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_167f6d0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_1adebe5;
extern __int64 (*GameData_1fd64e0[])();
extern __int64 (*GameData_1fd6560[])();
extern __int64 (*GameData_20838d0[])();
extern __int64 (*GameData_2083950[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212d2b8;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dc30[8];
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
void BasicMenu_16e1f40(_QWORD*, __int64, __int64);
__int64 game_hub_anonymous_ce10d0(__int64 a1);
_QWORD* game_hub_anonymous_1697e30(__int64 a1);

__int64 game_hub_anonymous_ce10d0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  bool v5;
  bool v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
    char gap40_[8];
    __int64 (*v18[4])();
    __int64 (**v19)();
    char gap88_[16];
    char* v20;
    __int64* v21;
    __int64 (*v22)();
    char gap128_[16];
    unsigned __int64* v23;
  } f_;

  if (*(_QWORD*)GameData_212dc30[0] == 0) {
    return 1;
  }
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) == 1) {
    if (game_gmap_GmapClock_instance_ != 0 &&
            *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                    *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                    *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                0 ||
        (v1 = a1, f_.v22 = (__int64 (*)())&GameData_1adebe5,
         f_.v21 = (__int64*)game_HashString((__int64)&GameData_1adebe5),
         game_GameModeData_instance_ != 0) &&
            (v2 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)&f_.v21)) != 0 &&
            (v3 = *(_DWORD*)(v2 + 32), a1 = v1, v3 != 0)) {
      if (game_GameModeData_instance_ == 0 ||
          ((v4 = *(_DWORD*)(game_GameModeData_instance_ + 60)) == 1
               ? (v5 = *(_BYTE*)(game_GameModeData_instance_ + 15) == 5)
               : (v5 = false),
           !v5 ? (v6 = v4 == 2) : (v6 = true), !v6)) {
        v8 = *(_QWORD*)(a1 + 8);
        f_.v20 = "MID_SysMenu_Map_Confirm";
        f_.v21 = (__int64*)GameData_1fd64e0;
        f_.v17 = f_.v16;
        if (*(_QWORD*)(v8 + 152) != 0) {
          v9 = *(_QWORD*)(v8 + 152);
        }
        else {
          v9 = v8;
        }
        f_.v23 = (unsigned __int64*)&f_.v21;
        f_.v19 = f_.v18;
        f_.v18[0] = (__int64 (*)())GameData_1fd6560;
        f_.v16[0] = GameData_1fd6560;
        v10 = MapSortieMenu_871860(v9, (__int64)&f_.v20, (__int64)&f_.v21,
                                   (__int64)f_.v18, (__int64)f_.v16);
        if (f_.v17 == f_.v16) {
          v11 = 32;
        }
        else {
          if (f_.v17 == nullptr) {
            goto LABEL_28;
          }
          v11 = 40;
        }
        (*(void (**)(__int64))(*f_.v17 + v11))((__int64)f_.v17);
      LABEL_28:
        if (f_.v19 == f_.v18) {
          v12 = 32;
        }
        else {
          if (f_.v19 == nullptr) {
            goto LABEL_33;
          }
          v12 = 40;
        }
        (*(void (**)(__int64))((char*)*f_.v19 + v12))((__int64)f_.v19);
      LABEL_33:
        if (f_.v23 == (unsigned __int64*)&f_.v21) {
          v13 = 32;
        }
        else {
          if (f_.v23 == nullptr) {
            goto LABEL_38;
          }
          v13 = 40;
        }
        (*(void (**)(__int64))(*f_.v23 + v13))((__int64)f_.v23);
      LABEL_38:
        f_.v19 = f_.v18;
        f_.v23 = (unsigned __int64*)&f_.v21;
        f_.v18[0] = (__int64 (*)())(GameData_212d2b8 + 2);
        f_.v18[1] = game_sound_PlayDecideLightSe_ptr[0];
        f_.v21 = GameData_212d2b8 + 2;
        f_.v22 = game_sound_PlayDecideLightSe_ptr[0];
        GameRoutine_654050(&f_.v21, (_QWORD*)(v10 + 1152));
        if (f_.v23 == (unsigned __int64*)&f_.v21) {
          v14 = 32;
        }
        else {
          if (f_.v23 == nullptr) {
            goto LABEL_43;
          }
          v14 = 40;
        }
        (*(void (**)(__int64))(*f_.v23 + v14))((__int64)f_.v23);
      LABEL_43:
        if (f_.v19 == f_.v18) {
          v15 = 32;
        }
        else {
          if (f_.v19 == nullptr) {
            return 12;
          }
          v15 = 40;
        }
        (*(void (**)(__int64))((char*)*f_.v19 + v15))((__int64)f_.v19);
        return 12;
      }
    }
  }
  return 1;
}

_QWORD* game_hub_anonymous_1697e30(__int64 a1)
{
  int v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    __int64 (**v11)();
    int v12;
    char gap60_[20];
    __int64 (***v13)();
  } v11_;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 <
      (unsigned __int64)((signed __int64)(*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v9_.v10 = nullptr;
  if (v1 == 2) {
    v3 = *(_DWORD*)(a1 + 200);
    v4 = a1;
    v11_.v11 = GameData_20838d0;
    v11_.v13 = &v11_.v11;
    LOBYTE(v11_.v12) = v3;
    GameRoutine_167f6d0(&v11_.v11, v9_.v9);
    if (v11_.v13 == &v11_.v11) {
      v5 = 4;
    }
    else {
      if (v11_.v13 == nullptr) {
      LABEL_9:
        a1 = v4;
        goto LABEL_10;
      }
      v5 = 5;
    }
    ((void (*)(__int64))(*v11_.v13)[v5])((__int64)v11_.v13);
    goto LABEL_9;
  }
LABEL_10:
  v11_.v12 = v1;
  v11_.v11 = GameData_2083950;
  v11_.v13 = &v11_.v11;
  BasicMenu_16e1f40((_QWORD*)a1, (__int64)&v11_.v11, (__int64)v9_.v9);
  if (v11_.v13 == &v11_.v11) {
    v6 = 4;
  }
  else {
    if (v11_.v13 == nullptr) {
      goto LABEL_15;
    }
    v6 = 5;
  }
  ((void (*)(__int64))(*v11_.v13)[v6])((__int64)v11_.v13);
LABEL_15:
  result = v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
}

#pragma GCC visibility pop
