#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameManager_a34a90(__int64, const char*, _DWORD*);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_5c02b0(_QWORD, _QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 snd_a33060(__int64, int, int, unsigned __int8, const char*,
                   const char*);
extern __int64* game_sound_g_game_sound_ptr[5];
__int64 game_5de630(int* a1, _QWORD* a2, __int64 a3);
__int64 game_810fc0(__int64 a1, __int64 a2);
__int64 game_fb99e0(__int64 result);

__int64 game_5de630(int* a1, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  int* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v14;

  v3 = 0;
  if (a3 == 0 || (a1[12] & 1) == 0) {
    return v3;
  }
  v4 = &a1[108 * *a1 + 14];
  v5 = *((_QWORD*)v4 + 52);
  v6 = ((*((_QWORD*)v4 + 49) + a3 - 1) & -*((_QWORD*)v4 + 49)) + v5;
  if (v6 <= *((_QWORD*)v4 + 9)) {
    v7 = *((_QWORD*)v4 + 53);
    *((_QWORD*)v4 + 52) = v6;
    if (v7 != 0) {
      v3 = v7 + v5;
      v8 = *((_QWORD*)v4 + 50);
      v9 = *((_QWORD*)v4 + 51);
      *a2 = v8;
      a2[1] = v9;
      *a2 = v3 - *((_QWORD*)v4 + 53) + v8;
      v10 = *a1;
      v11 = *(_QWORD*)&a1[108 * (int)v10 + 112];
      *(_QWORD*)&a1[2 * v10 + 4] += (v11 + a3 - 1) & -v11;
      return v3;
    }
  }
  v14 = a3;
  GameRoutine_5c02b0(0, 2048);
  GameRoutine_5c02c0(
      "TemporaryBuffer Allocation Failed. Allocation size : %d Byte.\n", v14);
  GameRoutine_5c02c0("Current TemporaryBuffer Allocation : %d/%d.\n",
                     *(_QWORD*)&a1[2 * *a1 + 4], *((_QWORD*)a1 + 5));
  return 0;
}

__int64 game_810fc0(__int64 a1, __int64 a2)
{
  char v2;
  char v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  char v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;
  bool v16;
  __int64 v18;
  int v19;
  char v20;
  int v21;
  struct {
    int v22;
    int v23;
  } v22_;

  v2 = a1 | a2;
  if ((a1 | a2) != 0) {
    v3 = 0;
    v4 = game_sound_g_game_sound_ptr[0];
    v5 = *game_sound_g_game_sound_ptr[0];
    if (a1 != 0 && v5 != 0) {
      v6 = *(_QWORD*)(a1 + 392);
      if (v6 == 0 || (v7 = *(const char**)(v6 + 8),
                      (v8 = *(const char**)(v6 + 680)) == nullptr)) {
      LABEL_14:
        v3 = 0;
        v11 = 0;
        if (a2 == 0) {
          goto LABEL_30;
        }
        goto LABEL_18;
      }
      v9 = *(_QWORD*)(a1 + 440);
      if (v9 != 0) {
        if (*(_BYTE*)(v9 + 16) == 1 & *v8 != 0) {
          v18 = a2;
          v19 = GameManager_a34a90(*game_sound_g_game_sound_ptr[0], v8,
                                   &v22_.v22);
          v20 = snd_a33060(v5, v19, v22_.v22, 1u, v7, nullptr);
          v5 = *v4;
          a2 = v18;
          v3 = v20;
          v11 = 0;
          if (v18 == 0) {
            goto LABEL_30;
          }
          goto LABEL_18;
        }
        goto LABEL_14;
      }
      v3 = 0;
    }
    v11 = 0;
    if (a2 == 0) {
    LABEL_30:
      v2 = v3 | v11;
      return v2 & 1;
    }
  LABEL_18:
    if (v5 != 0) {
      v12 = *(_QWORD*)(a2 + 392);
      if (v12 != 0 &&
          (v13 = *(const char**)(v12 + 8),
           (v14 = *(const char**)(v12 + 680)) != nullptr) &&
          (v15 = *(_QWORD*)(a2 + 440)) != 0 &&
          (*(_BYTE*)(v15 + 16) == 1 ? (v16 = *v14 == 0) : (v16 = true), !v16)) {
        v21 = GameManager_a34a90(v5, v14, &v22_.v23);
        v11 = snd_a33060(v5, v21, v22_.v23, 1u, v13, nullptr);
      }
      else {
        v11 = 0;
      }
    }
    goto LABEL_30;
  }
  return v2 & 1;
}

__int64 game_fb99e0(__int64 result)
{
  char* v1;
  char* v2;
  __int64 v3;
  __int64 v4;
  signed __int64 v5;

  v2 = *(char**)(result + 192);
  v1 = *(char**)(result + 200);
  if (v1 == v2) {
    return result;
  }
  v3 = *(_QWORD*)(result + 8);
  v4 = result;
  if (v3 != 0) {
    while (*(_BYTE*)v3 != 2) {
      if (*(_BYTE*)v3 == 0) {
        goto LABEL_10;
      }
    LABEL_5:
      v3 += 64;
    }
    if (*(_DWORD*)(v3 + 32) != *(_DWORD*)v2) {
      goto LABEL_5;
    }
    *(_QWORD*)(result + 16) = v3;
    *(_WORD*)(result + 136) &= ~0x80u;
  }
LABEL_10:
  v5 = v1 - (v2 + 4);
  if (v1 != v2 + 4) {
    result = GameRoutine_1a0b940((__int64)v2, (__int64)(v2 + 4), v1 - (v2 + 4));
  }
  *(_QWORD*)(v4 + 200) = &v2[v5];
  return result;
}

#pragma GCC visibility pop
