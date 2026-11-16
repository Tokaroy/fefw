#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_633980(_QWORD* result, __int64*);
__attribute__((swiftcall)) void GameRoutine_632da0(PSEUDO_X8, __int64,
                                                   unsigned int);
__int64 GameRoutine_631820(__int64);
__int64 GameRoutine_632cd0(__int64, __int64);
__int64 fs_635a60(__int64, __int64*, char, char, __int64, __int64);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
extern __int64 (*GameData_20da4e0[])();
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 app_17e0e20(__int64 a1, __int64 a2, __int64 a3);

__int64 app_17e0e20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 (**v18)();
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 (**v23)();
  __int64 v24;
  struct {
    __int64 v26[3];
    unsigned int v27;
    char gap28_[4];
    __int64 (**v28)();
    __int64 (**v29)();
    __int64 v30;
    char gap56_[8];
    __int64* v31;
    char gap72_[8];
    __int64 v32;
    char gap88_[24];
    __int64* v33;
  } f_;
  __int64* v34;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v3 = *(_QWORD*)(a1 + 8);
  v4 = (__int64*)(a1 + 56);
  f_.v26[0] = a2;
  f_.v26[1] = a3;
  f_.v26[2] = a1 + 56;
  f_.v27 = 1;
  nn_os_LockMutex(v3 + 4456),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v34 = v4;
  f_.v30 = v3;
  f_.v28 = GameData_20da4e0;
  f_.v29 = (__int64 (**)(void))&v34,
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  f_.v31 = (__int64*)&f_.v28;
  v8 = fs_635a60(v3, f_.v26, 1, 0, 0, (__int64)&f_.v28),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v9 = v5;
  if (f_.v31 == (__int64*)&f_.v28) {
    v10 = 32;
  }
  else {
    if (f_.v31 == nullptr) {
      goto LABEL_6;
    }
    v10 = 40;
  }
  (*(void (**)(__int64*, __int64, __int64, __int64))(*f_.v31 + v10))(f_.v31, v5,
                                                                     v6, v7),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
LABEL_6:
  if ((v9 & 1) != 0) {
    v11 = v8;
  }
  else {
    v11 = 0;
  }
  nn_os_UnlockMutex(v3 + 4456),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((v9 & 1) == 0) {
    return v8;
  }
  GameRoutine_632da0((void*)((__int64*)&f_.v28), v8, f_.v27),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  GameRoutine_633980((_QWORD*)v8, (__int64*)&f_.v28),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  GameRoutine_632cd0(v3, v8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  GameRoutine_631820(v8),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  nn_os_AcquireWriteLock(v8 + 696),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  *(_DWORD*)(v8 + 656) |= 0x40u;
  nn_os_ReleaseWriteLock(v8 + 696),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v14 = f_.v31;
  f_.v31 = nullptr;
  if (v14 != nullptr) {
    v34 = v14;
    if (f_.v33 == nullptr) {
    LABEL_36:
      GameRoutine_60a310(),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    (*(void (**)(__int64*, __int64**))(*f_.v33 + 48))(f_.v33, &v34),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  if (f_.v33 == &f_.v32) {
    v15 = 32;
    goto LABEL_17;
  }
  if (f_.v33 != nullptr) {
    v15 = 40;
  LABEL_17:
    (*(void (**)(__int64*, __int64, __int64))(*f_.v33 + v15))(f_.v33, v12, v13),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v16 = (__int64)f_.v28;
  if (f_.v28 == nullptr) {
    return v11;
  }
  v17 = f_.v29;
  if (f_.v28 == f_.v29) {
    goto LABEL_31;
  }
  v18 = f_.v29;
  do {
    v21 = (__int64*)*(v18 - 10);
    v18 -= 10;
    v20 = v21;
    *v18 = nullptr;
    if (v21 != nullptr) {
      v34 = v20;
      v22 = (__int64)*(v17 - 4);
      if (v22 == 0) {
        goto LABEL_36;
      }
      (*(void (**)(__int64, __int64**))(*(_QWORD*)v22 + 48LL))(v22, &v34),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    v23 = (__int64 (**)(void)) * (v17 - 4),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (v17 - 8 == v23) {
      v19 = 32;
    LABEL_22:
      (*(void (**)(__int64 (**)(void), __int64, __int64))((char*)*v23 + v19))(
          v23, v12, v13),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      goto LABEL_23;
    }
    if (v23 != nullptr) {
      v19 = 40;
      goto LABEL_22;
    }
  LABEL_23:
    v17 = v18;
  } while (v18 != (__int64 (**)(void))v16);
  f_.v29 = (__int64 (**)(void))v16,
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v16 = (__int64)f_.v28;
  if (f_.v28 != nullptr) {
  LABEL_31:
    v24 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v24, v16),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  return v11;
}

#pragma GCC visibility pop
