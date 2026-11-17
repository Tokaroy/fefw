#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_159d0c0(__int64 result, char, char);
__int64 LayoutAccessor_1562680(__int64 result, const char*, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool GameRoutine_90c9e0(__int64);
extern __int64 ui_LayoutAccessor_empty_;
unsigned __int8 game_menu_anonymous_1464830(__int64 result);

unsigned __int8 game_menu_anonymous_1464830(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_ullong* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;

  if ((*(_BYTE*)(*(_QWORD*)(result + 96) + 8LL) & 1) == 0) {
    return result;
  }
  v1 = (_QWORD*)result;
  v2 = *(_QWORD*)(result + 56);
  if (v2 == 0) {
    goto LABEL_6;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_6;
  }
  v4 = (__int64*)v1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v15);
    if (v4 != nullptr) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  if (v4 == nullptr) {
  LABEL_6:
    v4 = &ui_LayoutAccessor_empty_;
  }
LABEL_7:
  if (GameRoutine_90c9e0(v1[12])) {
    v5 = "FixedDefault";
  }
  else {
    v5 = "Decide";
  }
  LayoutAccessor_1562680((__int64)v4, v5, 0x1.0000000000000p+0f);
  result = ((__int64 (*)(__int64))GameRoutine_90c9e0)(v1[12]);
  if ((result & 1) != 0) {
    v6 = v1[7];
    if (v6 == 0) {
      goto LABEL_16;
    }
    v7 = std___1___shared_weak_count_lock(v6);
    if (v7 == 0) {
      goto LABEL_16;
    }
    v8 = v7;
    v9 = (atomic_ullong*)(v7 + 8);
    v10 = (__int64*)v1[6];
    if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v10;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
      v10 = v11;
    }
    if (v10 == nullptr) {
    LABEL_16:
      v10 = &ui_LayoutAccessor_empty_;
    }
    LayoutAccessor_1560070((void*)(&v17_.v17), v10, "L_MiracleLV");
    result = v17_.v18;
    if (v17_.v18 != 0) {
      v12 = std___1___shared_weak_count_lock(v17_.v18);
      v13 = v17_.v17;
      result = v17_.v18;
      if (v17_.v18 != 0) {
        result = std___1___shared_weak_count___release_weak(v17_.v18);
      }
      if (v12 != 0 && v13 != 0) {
        ui_LayoutAccessor_SetPaneVisible(v13, (__int64)"N_MiracleLv", 0);
        v14 = std___1___shared_weak_count_lock(*(_QWORD*)(v13 + 8));
        if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v16 = v14;
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v16);
        }
        result = GameRoutine_159d0c0(
            *(_QWORD*)(*(_QWORD*)(v13 + 16) + 24LL) + 32LL, 0, 1);
      }
      else if (v12 == 0) {
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        return std___1___shared_weak_count___release_weak(v12);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
