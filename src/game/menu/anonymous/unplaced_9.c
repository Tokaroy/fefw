#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_20d0d60[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20d0cb0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20d0be0[])();
extern __int64 (*game_menu_anonymous_ProcMouseGuide_vtable[])();
extern __int64* GameData_2131a88[7];
extern __int64* GameData_2131a90[6];
extern __int64 GameData_212d750;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212f510[6];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_script_map_effect_g_sequence;
void GameRoutine_6e5a40(__int64*, unsigned __int64, _DWORD*);
void GameRoutine_8679c0();
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_menu_anonymous_17a5a00(__int64 a1, char a2, int a3);
__int64 BasicMenu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char, __int64);

__int64 game_menu_anonymous_17a5a00(__int64 a1, char a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  float v19;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  struct {
    __int64 (**v23)();
    __int64 v24;
    char gap64_[16];
    __int64 (***v25)();
  } v23_;

  if ((a2 & 1) == 0) {
    snd_Fade_Fade_10c830((__int64)&v23_.v23, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_MouseMenu_Open",
                   (__int64)"SE_SYS_MouseMenu_Open", (__int64)&v23_.v23, 0,
                   0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(&v23_.v23);
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0);
  v7 = a2 & 1;
  v23_.v23 = nullptr;
  v23_.v24 = 0;
  BasicMenu_16dcd30(v6, 0, &v23_.v23, 0);
  v8 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  *(_BYTE*)(v6 + 1064) = 0;
  *(_BYTE*)(v6 + 1065) = v7;
  *(_QWORD*)v6 = game_menu_anonymous_ProcMouseGuide_vtable;
  *(_QWORD*)(v6 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20d0be0;
  *(_QWORD*)(v6 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20d0cb0;
  if (*(_QWORD*)GameData_212f510[0] != 0) {
    *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 12LL) = 1;
  }
  if (*GameData_2131a88[0] != 0) {
    *(_BYTE*)(*GameData_2131a90[0] + 216) = 0;
  }
  *(_BYTE*)(v6 + 361) = 1;
  if (a3 == 3) {
    if (game_script_map_effect_g_sequence != 0) {
      a3 = 0;
    }
    else {
      v9 = *(_QWORD*)GameData_212dbb8[0];
      if (*(_QWORD*)GameData_212dbb8[0] != 0 && *(_BYTE*)(v9 + 9) == 1 &&
          *(_DWORD*)(v9 + 136) < 2u) {
        a3 = 2;
      }
      else if (*(_QWORD*)GameData_212d750 != 0) {
        a3 = 1;
      }
      else {
        a3 = 2;
      }
    }
  }
  *(_DWORD*)(v6 + 660) = a3;
  *(_DWORD*)(v6 + 664) = a3;
  LODWORD(v23_.v23) = 0;
  *(_DWORD*)(v6 + 656) = 2;
  *(_QWORD*)(v6 + 792) = *(_QWORD*)(v6 + 784);
  *(_QWORD*)(v6 + 816) = *(_QWORD*)(v6 + 808);
  GameRoutine_6e5a40((__int64*)(v6 + 784), 3u, &v23_.v23);
  v10 = *(_QWORD*)(v6 + 816);
  v11 = *(_QWORD*)(v6 + 808);
  LODWORD(v23_.v23) = 0;
  v12 = v10 - v11;
  v13 = (v10 - v11) >> 2;
  if (v13 > 2) {
    if (v12 != 12) {
      *(_QWORD*)(v6 + 816) = v11 + 12;
    }
  }
  else {
    GameRoutine_6e5a40((__int64*)(v6 + 808), 3 - v13, &v23_.v23);
  }
  v14 = v21_.v21;
  v21_.v21[0] = GameData_20d0d60;
  v21_.v21[1] = v6;
  v21_.v22 = v21_.v21;
  if (game_gameui_Footer_instance_ == 0) {
    goto LABEL_33;
  }
  v23_.v23 = GameData_20d0d60;
  v23_.v24 = v6;
  v23_.v25 = &v23_.v23;
  GameRoutine_654050(&v23_.v23, (_QWORD*)(game_gameui_Footer_instance_ + 448));
  if (v23_.v25 == &v23_.v23) {
    v15 = 4;
  }
  else {
    if (v23_.v25 == nullptr) {
      goto LABEL_30;
    }
    v15 = 5;
  }
  ((void (*)(__int64))(*v23_.v25)[v15])((__int64)v23_.v25);
LABEL_30:
  v14 = v21_.v22;
  if (v21_.v22 == v21_.v21) {
  LABEL_33:
    v16 = 32;
    goto LABEL_34;
  }
  if (v21_.v22 != nullptr) {
    v16 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*v14 + v16))((__int64)v14);
  }
  GameRoutine_8679c0();
  v17 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v18 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v18 & 0x10) == 0) {
      v19 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v18 & 0xFFFFFFE2 | 1;
      if (v19 > 0x0.0p+0f) {
        *(_DWORD*)(v17 + 224) = 0;
      }
    }
  }
  return ProcInst_657850_alt1(v6, (__int64)GameData_212c730,
                              (__int64)"ProcMouseGuide", 1, a1);
}

#pragma GCC visibility pop
