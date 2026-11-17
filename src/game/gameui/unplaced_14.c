#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 LayoutAccessor_1562680(__int64 result, const char*, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
__int64 game_gameui_17ba660();
__int64 game_gameui_17bb120();

__int64 game_gameui_17ba660()
{
  __int64* v0;
  __int64 v1;
  __int64 v3;

  v0 = LayoutAccessor_155fbe0(
      (__int64*)(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] + 168LL),
      "L_Clock");
  LayoutAccessor_1562680((__int64)v0, "SkipIn", 0x1.0000000000000p+0f);
  v1 = std___1___shared_weak_count_lock(v0[1]);
  if (v1 != 0) {
    // An expired weak owner is read again before the call, the load is dead.
    __int64 v4 = *v0;
    int v5 =
        v4 != 0 ? (*(unsigned char*)(v4 + 24) != 0 ? v4 + 152 : 0) != v0[2] : 1;
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v3 = v1;
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v3);
    }
    if (v5 == 0) {
      goto LABEL_TAIL;
    }
  }
  (void)*(volatile __int64*)(v0[1] + 8);
LABEL_TAIL:
  return (*(__int64 (**)(__int64))(*(_QWORD*)v0[2] + 72LL))(v0[2]);
}

__int64 game_gameui_17bb120()
{
  __int64* v0;
  __int64 v1;
  __int64 v3;

  v0 = LayoutAccessor_155fbe0(
      (__int64*)(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] + 168LL),
      "L_Clock");
  LayoutAccessor_1562680((__int64)v0, "Skip_ShortIn", 0x1.0000000000000p+0f);
  v1 = std___1___shared_weak_count_lock(v0[1]);
  if (v1 != 0) {
    // An expired weak owner is read again before the call, the load is dead.
    __int64 v4 = *v0;
    int v5 =
        v4 != 0 ? (*(unsigned char*)(v4 + 24) != 0 ? v4 + 152 : 0) != v0[2] : 1;
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v3 = v1;
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v3);
    }
    if (v5 == 0) {
      goto LABEL_TAIL;
    }
  }
  (void)*(volatile __int64*)(v0[1] + 8);
LABEL_TAIL:
  return (*(__int64 (**)(__int64))(*(_QWORD*)v0[2] + 72LL))(v0[2]);
}

#pragma GCC visibility pop
