#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
__int64 GameRoutine_62c840(__int64 result, char);
__int64 GameRoutine_e8160(__int64 result, __int64);
__int64 Seq_114f000(__int64 result);
__int64 game_809dc0(__int64, _QWORD*, __n128);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
double snd_Fade_Fade_10c830(__int64, float);
extern _UNKNOWN* GameData_212c960;
extern __int64* as_g_script_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_sound_g_game_sound;
__int64 game_evt_demo_11500e0(__int64 a1, __n128 a2);

__int64 game_evt_demo_11500e0(__int64 a1, __n128 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 result;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _BOOL4 v12;
  _QWORD v13[26];

  v3 = *(_QWORD*)(a1 + 40);
  if (v3 != 0 && (*(_WORD*)(v3 + 136) & 1) == 0) {
    ProcInst_657a50(v3, 1);
  }
  v4 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v5 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v5 + 172) == *(float*)(v5 + 168) &&
        (v6 = v5 + 160,
         (*(void (**)(__int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160),
         LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0f)) {
      if (*(float*)(v6 + 12) == *(float*)(v6 + 8)) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      }
      else {
        a2 = *(__n128*)(v6 + 48);
      }
      *(__n128*)v13 = a2;
      LANES128(a2).n128_u64[0] = 0;
      v7 = v13;
    }
    else {
      LANES128(a2).n128_u64[0] = 0;
      v7 = GameData_212c960;
    }
    game_809dc0(v4, v7, a2);
  }
  Seq_114f000(a1);
  v8 = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    snd_Fade_Fade_10c830((__int64)v13, 0x0.0p+0f);
    GameRoutine_e8160(v8, (__int64)v13);
    snd_Fade_Destroy_Fade(v13);
  }
  result = GameRoutine_62c840(*as_g_script_manager_ptr, 0);
  v10 = *(_QWORD*)(a1 + 8);
  v11 = *(_QWORD*)(a1 + 16);
  if (v10 > v11) {
  LABEL_18:
    v12 = true;
    if (v10 == 0) {
      return result;
    }
  }
  else {
    while (*(_BYTE*)v11 != 2) {
      v11 -= 64LL;
      if (v10 > v11) {
        goto LABEL_18;
      }
    }
    v12 = *(_DWORD*)(v11 + 32) != 1;
    if (v10 == 0) {
      return result;
    }
  }
  if (v12) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == 1) {
          *(_QWORD*)(a1 + 16) = v10;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        return result;
      }
      v10 += 64LL;
    }
  }
  return result;
}

#pragma GCC visibility pop
