#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_633980(_QWORD* result, __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_632da0(PSEUDO_X8, __int64,
                                                   unsigned int);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_631820(__int64);
__int64 GameRoutine_632cd0(__int64, __int64);
__int64 fs_635a60(__int64, __int64*, char, char, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_20da560[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void AreaGaya_ff9140(_QWORD*, __int128*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_ff9cb0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void llvm_libcxx_21_libcxx_include___functional_ff9980(__int64 a1, __int64* a2,
                                                       double a3, double a4);
__int64 llvm_libcxx_21_libcxx_include___functional_17e18e0(__int64 a1,
                                                           __int64 a2);

void llvm_libcxx_21_libcxx_include___functional_ff9980(__int64 a1, __int64* a2,
                                                       double a3, double a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  signed __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  int v23;
  float32x4_t v24;
  float32x4_t v25;
  __int128 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int128 v34;
    _OWORD* v35;
    _OWORD* v36;
    _OWORD* v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } f_;

  v5 = *a2;
  v4 = a2[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (*(_BYTE*)(v5 + 1736) == 1) {
    v6 = *(_QWORD**)(a1 + 16);
    if (*(_BYTE*)(v5 + 1728) == 1) {
      v7 = *(__int64**)(a1 + 8);
      v9 = (_QWORD*)v7[1];
      v8 = v7[2];
      if ((unsigned __int64)v9 >= v8) {
        v11 = *v7;
        v12 = (signed __int64)v9 - *v7;
        v13 = (v12 >> 3) + 1;
        if (v13 >> 61 != 0) {
          GameRoutine_ff9cb0();
        }
        v14 = v8 - v11;
        if (v14 >> 2 > v13) {
          v13 = v14 >> 2;
        }
        if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
          v15 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v15 = v13;
        }
        if (v15 != 0) {
          if (v15 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v16 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
        }
        else {
          v16 = 0;
        }
        v17 = v16 + 8 * v15;
        v18 = v16 + v12 - 8 * (v12 >> 3);
        *(_QWORD*)(v16 + v12) = v5;
        v10 = v16 + v12 + 8;
        GameRoutine_1a0b950(v18, v11, v12);
        *v7 = v18;
        v7[1] = v10;
        v7[2] = v17;
        if (v11 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v11);
        }
      }
      else {
        *v9 = v5;
        v10 = (__int64)(v9 + 1);
      }
      v7[1] = v10;
    }
    v20 = *(unsigned __int8*)(v5 + 1704);
    if ((v20 & 1) != 0) {
      v21 = *(_QWORD*)(v5 + 1712);
    }
    else {
      v21 = v20 >> 1;
    }
    if (v21 != 0) {
      f_.v43 = 0;
      f_.v44 = 0;
      v22 = (__int64*)(v5 + 1704);
      f_.v41 = 0;
      f_.v42 = 0;
      v23 = *(unsigned __int8*)(v5 + 80);
      f_.v39 = 0;
      f_.v40 = 0;
      f_.v37 = nullptr;
      f_.v38 = 0;
      f_.v35 = nullptr;
      f_.v36 = nullptr;
      f_.v34 = (__typeof__(f_.v34)){0};
      if (v23 == 1) {
        v24 = *(float32x4_t*)(v5 + 64);
      }
      else {
        {
          __typeof__(a4) z_ = (__typeof__(a4)){0};
          LODWORD(z_) = *(_DWORD*)(v5 + 268);
          a4 = z_;
        }
        LANES128(v25).n128_u64[0] = *(_QWORD*)(v5 + 260);
        LANES128(v25).n128_f64[1] = a4;
        v24 = vaddq_f32(*(float32x4_t*)(v5 + 16), v25);
      }
      *(_QWORD*)&v26 = LANES128(v24).n128_u64[0];
      *((_QWORD*)&v26 + 1) = LANES128(v24).n128_u32[2];
      f_.v34 = v26;
      v27 = fw_memory_g_heap_manager_ptr;
      f_.v35 = (_OWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
      f_.v36 = f_.v35 + 1;
      f_.v37 = f_.v35 + 1;
      *f_.v35 = f_.v34;
      if (&f_.v38 != v22) {
        if ((*(_BYTE*)v22 & 1) != 0) {
          GameRoutine_64df20(&f_.v38, *(_QWORD*)(v5 + 1720),
                             *(_QWORD*)(v5 + 1712));
        }
        else {
          v28 = *(_QWORD*)(v5 + 1712);
          f_.v38 = *v22;
          f_.v39 = v28;
          f_.v40 = *(_QWORD*)(v5 + 1720);
        }
      }
      AreaGaya_ff9140(v6, &f_.v34);
      if (f_.v42 != 0) {
        v29 = *(_QWORD*)v27;
        f_.v43 = f_.v42;
        v30 = 128;
        if (*(_QWORD*)(v29 + 200) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(v29 + v30, f_.v42);
      }
      if ((f_.v38 & 1) != 0 && f_.v40 != 0) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v31, f_.v40);
      }
      if (f_.v35 != nullptr) {
        v32 = *(_QWORD*)v27;
        f_.v36 = f_.v35;
        v33 = 128;
        if (*(_QWORD*)(v32 + 200) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(v32 + v33, (__int64)f_.v35);
      }
    }
  }
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_17e18e0(__int64 a1,
                                                           __int64 a2)
{
  __int64* v4;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 (**v14)();
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  struct {
    __int64 (**v22)();
    __int64 (**v23)();
    __int64 v24;
    char gap24_[8];
    __int64* v25;
    char gap40_[8];
    __int64 v26;
    char gap56_[24];
    __int64* v27;
  } f_;
  __int64* v28;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex(a1 + 4456),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(__int64**)(a2 + 16);
  f_.v24 = a1;
  f_.v25 = (__int64*)&f_.v22;
  v28 = v4;
  f_.v22 = GameData_20da560;
  f_.v23 = (__int64 (**)(void))&v28,
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = fs_635a60(a1, (__int64*)a2, 1, 0, 0, (__int64)&f_.v22),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = v6;
  if (f_.v25 == (__int64*)&f_.v22) {
    v8 = 32;
  }
  else {
    if (f_.v25 == nullptr) {
      goto LABEL_6;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*f_.v25 + v8))((__int64)f_.v25),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_6:
  if ((v7 & 1) != 0) {
    v9 = v5;
  }
  else {
    v9 = 0;
  }
  nn_os_UnlockMutex(a1 + 4456),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v7 & 1) == 0) {
    return v5;
  }
  GameRoutine_632da0((void*)((__int64*)&f_.v22), v5, *(_DWORD*)(a2 + 24)),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_633980((_QWORD*)v5, (__int64*)&f_.v22),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_632cd0(a1, v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_631820(v5),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_AcquireWriteLock(v5 + 696),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v5 + 656) |= 0x40u;
  nn_os_ReleaseWriteLock(v5 + 696),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = f_.v25;
  f_.v25 = nullptr;
  if (v10 != nullptr) {
    v28 = v10;
    if (f_.v27 == nullptr) {
    LABEL_36:
      GameRoutine_60a310(),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(__int64*, __int64**))(*f_.v27 + 48))(f_.v27, &v28),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (f_.v27 == &f_.v26) {
    v11 = 32;
    goto LABEL_17;
  }
  if (f_.v27 != nullptr) {
    v11 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*f_.v27 + v11))((__int64)f_.v27),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = (__int64)f_.v22;
  if (f_.v22 == nullptr) {
    return v9;
  }
  v13 = f_.v23;
  if (f_.v22 == f_.v23) {
    goto LABEL_31;
  }
  v14 = f_.v23;
  do {
    v17 = (__int64*)*(v14 - 10);
    v14 -= 10;
    v16 = v17;
    *v14 = nullptr;
    if (v17 != nullptr) {
      v28 = v16;
      v18 = (__int64)*(v13 - 4);
      if (v18 == 0) {
        goto LABEL_36;
      }
      (*(void (**)(__int64, __int64**))(*(_QWORD*)v18 + 48LL))(v18, &v28),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v19 = (__int64 (**)(void)) * (v13 - 4),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v13 - 8 == v19) {
      v15 = 32;
    LABEL_22:
      (*(void (**)(__int64))((char*)*v19 + v15))((__int64)v19),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_23;
    }
    if (v19 != nullptr) {
      v15 = 40;
      goto LABEL_22;
    }
  LABEL_23:
    v13 = v14;
  } while (v14 != (__int64 (**)(void))v12);
  f_.v23 = (__int64 (**)(void))v12,
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (__int64)f_.v22;
  if (f_.v22 != nullptr) {
  LABEL_31:
    v20 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v20, v12),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v9;
}

#pragma GCC visibility pop
