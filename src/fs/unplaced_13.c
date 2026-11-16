#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_633980(_QWORD* result, __int64*);
__attribute__((swiftcall)) void GameRoutine_632da0(PSEUDO_X8, __int64,
                                                   unsigned int);
__int64 GameRoutine_17d4db0(__int64, __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_631500(__int64 result, _QWORD*);
__int64 GameRoutine_631820(__int64);
__int64 GameRoutine_632cd0(__int64, __int64);
__int64 fs_635a60(__int64, __int64*, char, char, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 llvm_libcxx_21_libcxx_include___functional_a53bc0(__int64, __int64);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
const char* Manager_a4aea0(__int64);
extern __int64 (***GameData_212c3c8)();
extern __int64 (*GameData_1fbf968[])();
extern __int64 (*GameData_1fbfa50[])();
extern __int64 (*GameData_1fbfad0[])();
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_21759e0;
extern __int64 fw_memory_g_heap_manager_ptr;
int GameRoutine_1a09d30(const char*, const char*);
int GameRoutine_1a0a6b0(__int64, unsigned __int64, const char*, ...);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
void GameRoutine_a51b80();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void fs_a4c1e0(_QWORD* a1, char* a2, char a3);
__int64 fs_a52b40(__int64 a1, __int64 a2);

void fs_a4c1e0(_QWORD* a1, char* a2, char a3)
{
  char* v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64* i;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char* v16;
  char* v17;
  char* v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 (***v23)();
  unsigned __int64 v24;
  __int64 v25;
  __int64 (**v26)();
  __int64 v27;
  char v28;
  char v29;
  __int64 v30;
  char v31;
  char v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 (***v41)();
  __int64 v42;
  __int64 (**v43)();
  __int64 (**v44)();
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  bool v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  struct {
    char gap0_[8];
    char* v61;
    unsigned __int64 v62;
    __int64 (***v63)();
    __int64 v64;
    __int64 (***v65)();
    int v66;
    char gap52_[260];
    __int64 (**v68)();
    __int64 v69;
    char gap328_[8];
    __int64 (**v71)();
    __int64 (***v72)();
    __int64 v73;
    __int64 (***v74)();
    __int64* v75;
    char gap376_[8];
    __int64 v76;
    char gap392_[24];
    __int64* v77;
  } f_;
  char v67[256];
  __int64 (***v70)();

  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = Manager_a4aea0(GameData_21759e0),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_1a0a6b0((__int64)v67, 0x100u, "Msg/%s/%s.msbt", v6, a2),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = snd_g_fileIndex_ptr[0];
  v8 = *snd_g_fileIndex_ptr[0];
  v9 = GameRoutine_1a09c70(v67),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((fs_6360e0(v8, (__int64)v67, v9, 0, 1) & 1) == 0) {
    return;
  }
  v10 = (_QWORD*)a1[3];
  for (i = (__int64*)fw_memory_g_heap_manager_ptr; v10 != nullptr;
       v10 = (_QWORD*)*v10) {
    if ((v10[2] & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)&f_.v71, v10[4], v10[3]),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v12 = v10[3];
      v13 = v10[4];
      f_.v71 = (__int64 (**)(void))v10[2],
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v72 = (__int64 (***)(void))v12,
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v73 = v13;
    }
    v14 = v10[5];
    v15 = *(_BYTE*)(v14 + 808);
    v16 = *(const char**)(v14 + 824);
    f_.v74 = (__int64 (***)(void))v14,
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v17 = (const char*)(v14 + 809);
    if ((v15 & 1) != 0) {
      v18 = v16;
    }
    else {
      v18 = v17;
    }
    v19 = GameRoutine_1a09d30(v18, a2),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (((unsigned __int8)f_.v71 & 1) != 0 && f_.v73 != 0) {
      v20 = v19;
      if (*(_QWORD*)(*i + 200) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*i + v21, f_.v73),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v19 = v20;
    }
    if (v19 == 0) {
      ++*(_DWORD*)(v10[5] + 832LL);
      return;
    }
  }
  v22 = *v7;
  v23 = GameData_212c3c8;
  if ((a3 & 1) != 0) {
    f_.v61 = v67;
    v24 = GameRoutine_1a09c70(v67),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v26 = (__int64 (**)(void))a1[11],
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v25 = a1[12];
    f_.v62 = v24;
    f_.v63 = (__int64 (***)(void))v26,
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v64 = v25;
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                memory_order_relaxed);
    }
    f_.v65 = v23;
    f_.v66 = 1;
    nn_os_LockMutex(v22 + 4456),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v69 = v25;
    v70 = v23;
    f_.v68 = v26;
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                memory_order_relaxed);
    }
    f_.v71 = GameData_1fbf968;
    f_.v72 = (__int64 (***)(void))&v70,
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v75 = (__int64*)&f_.v71;
    f_.v73 = v22;
    f_.v74 = &f_.v68;
    v27 = fs_635a60(v22, (__int64*)&f_.v61, 0, 0, 0, (__int64)&f_.v71),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v29 = v28;
    if (f_.v75 == (__int64*)&f_.v71) {
      v30 = 32;
    }
    else {
      if (f_.v75 == nullptr) {
        goto LABEL_31;
      }
      v30 = 40;
    }
    (*(void (**)(__int64))(*f_.v75 + v30))((__int64)f_.v75),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_31:
    if ((v29 & 1) != 0) {
      v34 = f_.v66;
      v35 = fw_memory_HeapManager_Allocate(*i, 16, 16, 0),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)v35 = v27;
      *(_DWORD*)(v35 + 8) = v34;
      GameRoutine_17d4db0(v22 + 3536, v35),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      if (f_.v69 == 0) {
      LABEL_39:
        nn_os_UnlockMutex(v22 + 4456),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (f_.v64 != 0) {
          std___1___shared_weak_count___release_weak(f_.v64),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_73;
      }
      if (*(_QWORD*)(f_.v69 + 8) != -1) {
        f_.v71 = f_.v68;
        f_.v72 = (__int64 (***)(void))f_.v69,
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        atomic_fetch_add_explicit((atomic_ullong* volatile)(f_.v69 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_631500(v27, &f_.v71),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (f_.v72 != nullptr) {
          std___1___shared_weak_count___release_weak((__int64)f_.v72),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
    if (f_.v69 != 0) {
      std___1___shared_weak_count___release_weak(f_.v69),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    goto LABEL_39;
  }
  f_.v61 = v67;
  f_.v62 = GameRoutine_1a09c70(v67),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v63 = v23;
  LODWORD(f_.v64) = 1;
  nn_os_LockMutex(v22 + 4456),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v73 = v22;
  f_.v75 = (__int64*)&f_.v71;
  f_.v68 = (__int64 (**)(void))v23,
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v71 = GameData_1fbfa50;
  f_.v72 = &f_.v68;
  v27 = fs_635a60(v22, (__int64*)&f_.v61, 1, 0, 0, (__int64)&f_.v71),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = v31;
  if (f_.v75 == (__int64*)&f_.v71) {
    v33 = 32;
  }
  else {
    if (f_.v75 == nullptr) {
      goto LABEL_43;
    }
    v33 = 40;
  }
  (*(void (**)(__int64))(*f_.v75 + v33))((__int64)f_.v75),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_43:
  if ((v32 & 1) != 0) {
    v36 = v27;
  }
  else {
    v36 = 0;
  }
  nn_os_UnlockMutex(v22 + 4456),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v32 & 1) == 0) {
    goto LABEL_72;
  }
  GameRoutine_632da0((void*)(&f_.v71), v27, f_.v64),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_633980((_QWORD*)v27, (__int64*)&f_.v71),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_632cd0(v22, v27),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_631820(v27),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_AcquireWriteLock(v27 + 696),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v27 + 656) |= 0x40u;
  nn_os_ReleaseWriteLock(v27 + 696),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = f_.v75;
  f_.v75 = nullptr;
  if (v37 != nullptr) {
    f_.v68 = (__int64 (**)(void))v37,
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (f_.v77 == nullptr) {
    LABEL_99:
      GameRoutine_60a310(),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(__int64*, __int64 (***)(void)))(*f_.v77 + 48))(f_.v77,
                                                                &f_.v68),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (f_.v77 == &f_.v76) {
    v38 = 32;
    goto LABEL_54;
  }
  if (f_.v77 != nullptr) {
    v38 = 40;
  LABEL_54:
    (*(void (**)(__int64))(*f_.v77 + v38))((__int64)f_.v77),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v39 = (__int64)f_.v71;
  if (f_.v71 == nullptr) {
    goto LABEL_71;
  }
  v40 = (__int64)f_.v72;
  if (f_.v71 == (__int64 (**)(void))f_.v72) {
    goto LABEL_68;
  }
  v41 = f_.v72;
  do {
    v44 = *(v41 - 10);
    v41 -= 10;
    v43 = v44;
    *v41 = nullptr;
    if (v44 != nullptr) {
      f_.v68 = v43;
      v45 = *(_QWORD*)(v40 - 32);
      if (v45 == 0) {
        goto LABEL_99;
      }
      (*(void (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v45 + 48LL))(
          v45, &f_.v68),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v46 = *(_QWORD**)(v40 - 32);
    if ((_QWORD*)(v40 - 64) == v46) {
      v42 = 32;
    LABEL_59:
      (*(void (**)(__int64))(*v46 + v42))((__int64)v46),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_60;
    }
    if (v46 != nullptr) {
      v42 = 40;
      goto LABEL_59;
    }
  LABEL_60:
    v40 = (__int64)v41;
  } while (v41 != (__int64 (***)(void))v39);
  f_.v72 = (__int64 (***)(void))v39,
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v39 = (__int64)f_.v71;
  if (f_.v71 != nullptr) {
  LABEL_68:
    v47 = 128;
    if (*(_QWORD*)(*i + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*i + v47, v39),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_71:
  v27 = v36;
LABEL_72:
  ((void (*)(_QWORD*, __int64))GameRoutine_a51b80)(a1, v27),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_73:
  v48 = (_QWORD*)fw_memory_HeapManager_Allocate(*i, 48, 16, 0),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *v48 = 0;
  v48[1] = 0;
  v49 = GameRoutine_1a09c70(a2),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v49 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v50 = v49;
  if (v49 >= 0x17) {
    if ((v49 | 7) == 0x17) {
      v52 = 26;
    }
    else {
      v52 = (v49 | 7) + 1;
    }
    v51 = fw_memory_HeapManager_Allocate(*i, v52, 16, 0),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v48[3] = v50;
    v48[4] = v51;
    v48[2] = v52 | 1;
    goto LABEL_81;
  }
  v51 = (__int64)v48 + 17;
  *((_BYTE*)v48 + 16) = 2 * v49;
  if (v49 != 0) {
  LABEL_81:
    GameRoutine_1a0b950(v51, (__int64)a2, v50),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_BYTE*)(v51 + v50) = 0;
  v48[5] = v27;
  v53 = *((unsigned __int8*)v48 + 16);
  v54 = (v53 & 1) == 0;
  v55 = v53 >> 1;
  if (v54) {
    v56 = (__int64)v48 + 17;
  }
  else {
    v56 = v48[4];
  }
  if (v54) {
    v57 = v55;
  }
  else {
    v57 = v48[3];
  }
  v48[1] = std___1___hash_memory(v56, v57),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((llvm_libcxx_21_libcxx_include___functional_a53bc0((__int64)(a1 + 1),
                                                         (__int64)v48) &
       1) == 0) {
    if ((v48[2] & 1) != 0) {
      v58 = v48[4];
      if (v58 != 0) {
        v59 = 128;
        if (*(_QWORD*)(*i + 200) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free(*i + v59, v58),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v60 = 128;
    if (*(_QWORD*)(*i + 200) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free(*i + v60, (__int64)v48),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_DWORD*)(v27 + 832) = 1;
}

__int64 fs_a52b40(__int64 a1, __int64 a2)
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
  f_.v22 = GameData_1fbfad0;
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
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v12),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return v9;
}

#pragma GCC visibility pop
