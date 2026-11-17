#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* AnimTransformBasic_570de0(_QWORD* result, __int64);
_QWORD* GameRoutine_9bea80(_QWORD*, __int64*);
__int64 AnimTransformBasic_570f40(__int64);
__int64 AnimTransformBasic_570f60(__int64);
__int64 Layout_57b830(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
char* ui_15623e0(__int64* a1, char* a2);

char* ui_15623e0(__int64* a1, char* a2)
{
  char* v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  struct {
    char* v15;
    unsigned __int64 v16;
  } v15_;

  if (a2 != nullptr) {
    v3 = (char*)a1[11];
    if (v3 != nullptr) {
      v15_.v15 = a2;
      v15_.v16 = GameRoutine_1a09c70(a2);
      if (v15_.v16 != 0 &&
          (v4 = GameRoutine_9bea80(v3, (__int64*)&v15_.v15)) != nullptr) {
        v3 = (char*)v4[5];
        if (v4[6] != 0) {
          return v3;
        }
      }
      else {
        v3 = nullptr;
      }
    }
    v10 = std___1___shared_weak_count_lock(a1[1]);
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v13 = v10;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v13);
    }
    v11 = Layout_57b830(a1[2]);
    if (v11 != 0) {
      AnimTransformBasic_570de0(&v15_.v15, v11);
      if ((unsigned __int16)AnimTransformBasic_570f40((__int64)&v15_.v15) !=
          0) {
        v12 = (const char*)AnimTransformBasic_570f60((__int64)&v15_.v15);
        v3 = (char*)v12;
      LABEL_26:
        GameRoutine_1a09c70(v12);
      }
    }
  }
  else {
    v5 = (__int64*)a1[3];
    if (v5 != a1 + 4) {
      while (1) {
        v6 = *(_QWORD*)v5[7];
        if (v6 != 0) {
          break;
        }
        v7 = (__int64*)v5[1];
        if (v7 != nullptr) {
          do {
            v8 = v7;
            v7 = (__int64*)*v7;
          } while (v7 != nullptr);
        }
        else {
          do {
            v8 = (__int64*)v5[2];
            v9 = v5 == (__int64*)*v8;
            v5 = v8;
          } while (!v9);
        }
        v5 = v8;
        if (v8 == a1 + 4) {
          return nullptr;
        }
      }
      v3 = *(char**)(*(_QWORD*)(v6 + 72) + 40LL);
      v12 = v3;
      goto LABEL_26;
    }
    return nullptr;
  }
  return v3;
}

#pragma GCC visibility pop
