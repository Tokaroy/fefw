#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_cb3290(__int64* result, __int64*, __int64*);
__int64 GameRoutine_11cf5a0(__int64, __int64, unsigned int, __int64);
__int64 GameRoutine_cb3390(__int64 result, _QWORD*, _QWORD*);
bool GameRoutine_11cc300(__int64);
__int64* game_hub_cb31f0(__int64** a1, __int64* a2, __int64* a3);
__int64 game_hub_cb3200(__int64* a1, _QWORD* a2, _QWORD* a3);
__int64 game_hub_f8baf0(__int64 a1);

__int64* game_hub_cb31f0(__int64** a1, __int64* a2, __int64* a3)
{
  return GameRoutine_cb3290(*a1, a2, a3);
}

__int64 game_hub_cb3200(__int64* a1, _QWORD* a2, _QWORD* a3)
{
  return GameRoutine_cb3390(*a1, a2, a3);
}

__int64 game_hub_f8baf0(__int64 a1)
{
  char* v2;
  bool v3;

  if (*(_DWORD*)(a1 + 196) == 2) {
    v2 = "MV40_01";
  }
  else {
    v2 = "MV40_00";
  }
  v3 = GameRoutine_11cc300((__int64)v2);
  return GameRoutine_11cf5a0(a1, (__int64)v2, v3, 0);
}

#pragma GCC visibility pop
