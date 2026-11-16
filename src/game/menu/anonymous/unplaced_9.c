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
  __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  float v20;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
    char gap40_[8];
    __int64 (**v24)();
    __int64 v25;
    char gap64_[16];
    __int64 (***v26)();
  } f_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((a2 & 1) == 0) {
    snd_Fade_Fade_10c830((__int64)&f_.v24, 0x0.0p+0f),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_play_ff2d0((__int64)"SE_SYS_MouseMenu_Open",
                   (__int64)"SE_SYS_MouseMenu_Open", (__int64)&f_.v24, 0,
                   0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_Fade_Destroy_Fade(&f_.v24),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = a2 & 1;
  f_.v24 = nullptr;
  f_.v25 = 0;
  game_menu_16dcd30(v6, 0, &f_.v24, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = f_.v25;
  if (f_.v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(f_.v25 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v8),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
  LODWORD(f_.v24) = 0;
  *(_DWORD*)(v6 + 656) = 2;
  *(_QWORD*)(v6 + 792) = *(_QWORD*)(v6 + 784);
  *(_QWORD*)(v6 + 816) = *(_QWORD*)(v6 + 808);
  GameRoutine_6e5a40((__int64*)(v6 + 784), 3u, &f_.v24),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = *(_QWORD*)(v6 + 816);
  v12 = *(_QWORD*)(v6 + 808);
  LODWORD(f_.v24) = 0;
  v13 = v11 - v12;
  v14 = (v11 - v12) >> 2;
  if (v14 > 2) {
    if (v13 != 12) {
      *(_QWORD*)(v6 + 816) = v12 + 12;
    }
  }
  else {
    GameRoutine_6e5a40((__int64*)(v6 + 808), 3 - v14, &f_.v24),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v15 = f_.v22;
  f_.v22[0] = GameData_20d0d60;
  f_.v22[1] = v6;
  f_.v23 = f_.v22;
  if (game_gameui_Footer_instance_ == 0) {
    goto LABEL_33;
  }
  f_.v24 = GameData_20d0d60;
  f_.v25 = v6;
  f_.v26 = &f_.v24;
  GameRoutine_654050(&f_.v24, (_QWORD*)(game_gameui_Footer_instance_ + 448)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (f_.v26 == &f_.v24) {
    v16 = 4;
  }
  else {
    if (f_.v26 == nullptr) {
      goto LABEL_30;
    }
    v16 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*f_.v26)[v16])(f_.v26, v10),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_30:
  v15 = f_.v23;
  if (f_.v23 == f_.v22) {
  LABEL_33:
    v17 = 32;
    goto LABEL_34;
  }
  if (f_.v23 != nullptr) {
    v17 = 40;
  LABEL_34:
    (*(void (**)(_QWORD*, __int64))(*v15 + v17))(v15, v10),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_8679c0(),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v19 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v19 & 0x10) == 0) {
      v20 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v19 & 0xFFFFFFE2 | 1;
      if (v20 > 0x0.0p+0f) {
        *(_DWORD*)(v18 + 224) = 0;
      }
    }
  }
  return ProcInst_657850(v6, (__int64)GameData_212c730, "ProcMouseGuide", 1,
                         a1);
}

#pragma GCC visibility pop
