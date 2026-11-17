#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1269740(_QWORD* result, _QWORD*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_21ed530;
extern __int64 (*GameData_201de78[])();
extern __int64 (*GameData_201df08[])();
extern __int64 game_GameModeData_instance_;
extern int GameData_21ed528;
int __cxa_guard_acquire(__int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __cxa_guard_release(__int64);
__int64 game_12571e0(__int64* a1);

__int64 game_12571e0(__int64* a1)
{
  int v1;
  __int64 v3;
  char v4;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (**v12)();
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  int v17;
  __int64 v18;
  struct {
    char gap0_[8];
    _DWORD* v19;
    _QWORD v20[4];
    _QWORD* v21;
    char gap56_[8];
    __int64 (**v22)();
    _DWORD* v23;
    char gap80_[16];
    unsigned __int64* v24;
    char gap104_[16];
    _BYTE v25[4];
    _BYTE v26[4];
  } f_;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (*(_BYTE*)(*a1 + 112) != 1) {
    goto LABEL_7;
  }
  v1 = *(_DWORD*)(*a1 + 392);
  f_.v21 = nullptr;
  if (v1 == 1) {
    f_.v22 = GameData_201df08;
    f_.v24 = (unsigned __int64*)&f_.v22;
    GameRoutine_1269740(&f_.v22, f_.v20),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (f_.v24 == (unsigned __int64*)&f_.v22) {
      v6 = 32;
    }
    else {
      if (f_.v24 == nullptr) {
        goto LABEL_18;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*f_.v24 + v6))((__int64)f_.v24),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  LABEL_18:
    v4 = 1;
    v7 = f_.v21;
    if (f_.v21 == nullptr) {
      return v4 & 1;
    }
    goto LABEL_19;
  }
  if (v1 != 0) {
  LABEL_7:
    v4 = 0;
    return v4 & 1;
  }
  f_.v22 = GameData_201de78;
  f_.v24 = (unsigned __int64*)&f_.v22;
  GameRoutine_1269740(&f_.v22, f_.v20),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (f_.v24 == (unsigned __int64*)&f_.v22) {
    v3 = 32;
  }
  else {
    if (f_.v24 == nullptr) {
      goto LABEL_14;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*f_.v24 + v3))((__int64)f_.v24),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
LABEL_14:
  v4 = 0;
  v7 = f_.v21;
  if (f_.v21 == nullptr) {
    return v4 & 1;
  }
LABEL_19:
  v8 = *a1;
  if (*(_WORD*)(*a1 + 376) != 0) {
    v9 = 0;
    do {
      v10 = *(_QWORD*)(v8 + 384);
      v11 = *(_QWORD*)(v10 + 8 * v9);
      if (v11 != 0) {
        f_.v23 = *(_DWORD**)(v10 + 8 * v9);
        v12 = (__int64 (**)(void))game_HashString(v11),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v14 = game_GameModeData_instance_;
        f_.v22 = v12;
        if (game_GameModeData_instance_ != 0) {
          v13 = f_.v23;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                                    memory_order_acquire) &
               1) == 0) {
            f_.v19 = v13;
            v17 = __cxa_guard_acquire((__int64)&GameData_21ed530),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v13 = f_.v19;
            if (v17 != 0) {
              GameData_21ed528 = 1598310733;
              __cxa_guard_release((__int64)&GameData_21ed530),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              v13 = f_.v19;
            }
          }
          if (v13 != nullptr) {
            LOBYTE(v13) =
                *(_DWORD*)v13 == GameData_21ed528 &&
                (v15 = game_GameVariableTable_Find(
                     *(_QWORD**)(v14 + 48), (unsigned __int64*)&f_.v22)) != 0 &&
                *(_DWORD*)(v15 + 32) != 0,
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
        }
        f_.v26[0] = v4 & 1;
        f_.v25[0] = (v14 != 0) & (unsigned __int8)v13;
        if (f_.v21 == nullptr) {
          GameRoutine_60a310(),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        v16 = (*(__int64 (**)(__int64, __int64, __int64))(*f_.v21 + 48LL))(
            (__int64)f_.v21, (__int64)f_.v26, (__int64)f_.v25),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v8 = *a1;
        v4 = v16;
      }
      ++v9;
    } while (v9 < *(unsigned __int16*)(v8 + 376));
    v7 = f_.v21;
  }
  if (v7 == f_.v20) {
    v18 = 32;
    goto LABEL_39;
  }
  if (v7 != nullptr) {
    v18 = 40;
  LABEL_39:
    (*(void (**)(__int64))(*v7 + v18))((__int64)v7),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  return v4 & 1;
}

#pragma GCC visibility pop
