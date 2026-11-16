#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_633980(_QWORD* result, __int64*);
__attribute__((swiftcall)) void GameRoutine_632da0(PSEUDO_X8, __int64,
                                                   unsigned int);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_631820(__int64);
__int64 GameRoutine_632cd0(__int64, __int64);
__int64 fs_635a60(__int64, __int64*, char, char, __int64, __int64);
__int64 fs_Manager_createFileAsync_fs_BntxFile(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_1fbf570[])();
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_21fdd00;
extern __int64 GameData_22416e0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
void TelopSequence_13755a0(__int64*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void memory_a48da0(__int64 a1, char* a2);
void memory_1376ce0(__int64 a1);

void memory_a48da0(__int64 a1, char* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  char v8;
  unsigned __int64 v9;
  char* v10;
  char* v11;
  int v12;
  int v13;
  __int64 v15;
  __int64 v16;
  char v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 (**v24)();
  __int64 (**v25)();
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 (**v30)();
  __int64 v31;
  __int64 v32;
  __int64 v33;
  struct {
    char gap0_[8];
    __int64 v34;
    unsigned __int64 v35;
    char* v36;
    __int64 v37[2];
    __int64 v38;
    unsigned int v39;
    char gap60_[4];
    __int64 (**v40)();
    __int64 (**v41)();
    __int64 v42;
    char gap88_[8];
    __int64* v43;
    char gap104_[8];
    __int64 v44;
    char gap120_[24];
    __int64* v45;
  } f_;
  __int64 v46;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_QWORD*)(a1 + 8) != 0) {
    *(_BYTE*)(a1 + 16) = 1;
    return;
  }
  v4 = GameRoutine_1a09c70(a2),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v37[0] = (__int64)a2;
  f_.v37[1] = v4;
  f_.v38 = GameData_21fdd00;
  f_.v39 = 2;
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v35 = v5;
    f_.v36 = v6;
    f_.v34 = v7 | 1;
    goto LABEL_11;
  }
  LOBYTE(f_.v34) = 2 * v4;
  v6 = (char*)&f_.v34 + 1;
  if (v4 != 0) {
  LABEL_11:
    GameRoutine_1a0b950((__int64)v6, (__int64)a2, v5),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v6[v5] = 0;
  v8 = f_.v34;
  v9 = f_.v35;
  if ((f_.v34 & 1) == 0) {
    v9 = (unsigned __int64)(unsigned __int8)f_.v34 >> 1;
  }
  if (v9 >= 5) {
    v10 = f_.v36;
    if ((f_.v34 & 1) == 0) {
      v10 = (char*)&f_.v34 + 1;
    }
    if (v9 != 5 &&
        (*(_DWORD*)v10 ^ 0x746E6F46 | (unsigned __int8)v10[4] ^ 0x2F) == 0) {
      v11 = &v10[v9];
      v12 = *(_DWORD*)(v11 - 6);
      v13 = *((unsigned __int16*)v11 - 1);
      if (v12 == 1717985838 & v13 == 29806) {
        f_.v39 = 1;
      }
    }
  }
  v15 = *snd_g_fileIndex_ptr[0];
  nn_os_LockMutex(*snd_g_fileIndex_ptr[0] + 4456),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v42 = v15;
  f_.v43 = (__int64*)&f_.v40;
  v46 = f_.v38;
  f_.v40 = GameData_1fbf570;
  f_.v41 = (__int64 (**)(void))&v46,
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = fs_635a60(v15, f_.v37, 1, 0, 0, (__int64)&f_.v40),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = v17;
  if (f_.v43 == (__int64*)&f_.v40) {
    v19 = 32;
  }
  else {
    if (f_.v43 == nullptr) {
      goto LABEL_30;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*f_.v43 + v19))((__int64)f_.v43),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_30:
  if ((v18 & 1) != 0) {
    v20 = v16;
  }
  else {
    v20 = 0;
  }
  nn_os_UnlockMutex(v15 + 4456),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v18 & 1) == 0) {
    goto LABEL_59;
  }
  GameRoutine_632da0((void*)((__int64*)&f_.v40), v16, f_.v39),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_633980((_QWORD*)v16, (__int64*)&f_.v40),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_632cd0(v15, v16),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_631820(v16),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_AcquireWriteLock(v16 + 696),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v16 + 656) |= 0x40u;
  nn_os_ReleaseWriteLock(v16 + 696),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = f_.v43;
  f_.v43 = nullptr;
  if (v21 != nullptr) {
    v46 = (__int64)v21;
    if (f_.v45 == nullptr) {
    LABEL_65:
      GameRoutine_60a310(),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    (*(void (**)(__int64*, __int64*))(*f_.v45 + 48))(f_.v45, &v46),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (f_.v45 == &f_.v44) {
    v22 = 32;
    goto LABEL_41;
  }
  if (f_.v45 != nullptr) {
    v22 = 40;
  LABEL_41:
    (*(void (**)(__int64))(*f_.v45 + v22))((__int64)f_.v45),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v23 = (__int64)f_.v40;
  if (f_.v40 == nullptr) {
    goto LABEL_58;
  }
  v24 = f_.v41;
  if (f_.v40 == f_.v41) {
    goto LABEL_55;
  }
  v25 = f_.v41;
  do {
    v28 = (__int64)*(v25 - 10);
    v25 -= 10;
    v27 = v28;
    *v25 = nullptr;
    if (v28 != 0) {
      v46 = v27;
      v29 = (__int64)*(v24 - 4);
      if (v29 == 0) {
        goto LABEL_65;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v29 + 48LL))(v29, &v46),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v30 = (__int64 (**)(void)) * (v24 - 4),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v24 - 8 == v30) {
      v26 = 32;
    LABEL_46:
      (*(void (**)(__int64))((char*)*v30 + v26))((__int64)v30),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_47;
    }
    if (v30 != nullptr) {
      v26 = 40;
      goto LABEL_46;
    }
  LABEL_47:
    v24 = v25;
  } while (v25 != (__int64 (**)(void))v23);
  f_.v41 = (__int64 (**)(void))v23,
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = (__int64)f_.v40;
  if (f_.v40 != nullptr) {
  LABEL_55:
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                                  v23),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_58:
  v16 = v20;
LABEL_59:
  *(_QWORD*)(a1 + 8) = v16;
  v32 = *(_QWORD*)(v16 + 8);
  nn_os_LockMutex(v32 + 4456),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_AcquireWriteLock(v16 + 696),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(v16 + 656) |= 4u;
  nn_os_ReleaseWriteLock(v16 + 696),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_UnlockMutex(v32 + 4456),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(a1 + 16) = 1;
  if ((v8 & 1) != 0 && f_.v36 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  (__int64)f_.v36),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

void memory_1376ce0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  bool v15;
  unsigned __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  int v21;
  char* v22;
  char* v23;
  __int64 v24;
  int v25;
  signed __int64 v26;
  char* v27;
  char* v28;
  signed __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v33;
  int v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  char* v40;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  struct {
    char gap0_[24];
    __int64 v49;
    __int64 v50;
    char* v51;
    __int64 v52;
    unsigned __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    int v57;
  } f_;

  TelopSequence_13755a0((__int64*)a1);
  v2 = *(_BYTE*)(a1 + 832) >> 1;
  if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 840);
  }
  if (v2 != 0) {
    v47 = a1;
    if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
      fw_text_String_CopyTerminated(&f_.v49, *(_QWORD*)(a1 + 848),
                                    *(_QWORD*)(a1 + 840));
    }
    else {
      v3 = *(_QWORD*)(a1 + 840);
      v4 = *(_QWORD*)(a1 + 848);
      f_.v49 = *(_QWORD*)(a1 + 832);
      f_.v50 = v3;
      f_.v51 = (const char*)v4;
    }
    v5 = (unsigned __int8)f_.v49;
    v7 = f_.v50;
    v6 = (__int64)f_.v51;
    v8 = (unsigned __int64)(unsigned __int8)f_.v49 >> 1;
    v48 = f_.v49 & 1;
    if (v48 != 0) {
      v9 = f_.v50;
    }
    else {
      v9 = (unsigned __int64)(unsigned __int8)f_.v49 >> 1;
    }
    if ((f_.v49 & 1) != 0) {
      v10 = f_.v51;
    }
    else {
      v10 = (char*)&f_.v49 + 1;
    }
    if (v9 < 22) {
      goto LABEL_26;
    }
    v11 = (char*)&v10[v9];
    v12 = v9;
    v13 = (__int64)v10;
    while (1) {
      v14 = (const char*)GameRoutine_1a09c60(v13, 76, v12 - 21);
      if (v14 == nullptr) {
        goto LABEL_26;
      }
      v15 = *(_QWORD*)v14 == 0x542F74756F79614CLL &&
            *((_QWORD*)v14 + 1) == 0x2F73657275747865LL;
      if (v15 && *(_QWORD*)(v14 + 14) == 0x2F6C6C6974532F73LL) {
        break;
      }
      v13 = (__int64)(v14 + 1);
      v12 = (__int64)&v11[-v13];
      if ((__int64)&v11[-v13] < 22) {
        goto LABEL_26;
      }
    }
    if (v14 == v10) {
      v25 = v48;
    }
    else {
    LABEL_26:
      v17 = v9 + 22;
      if ((unsigned __int64)(v9 + 22) >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_99;
      }
      if (v17 > 0x16) {
        if ((v17 | 7) == 0x17) {
          v20 = 26;
        }
        else {
          v20 = (v17 | 7) + 1;
        }
        v19 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20, 16,
                                             0);
        f_.v53 = v9 + 22;
        f_.v54 = v19;
        f_.v52 = v20 | 1;
        v18 = v20 | 1;
      }
      else {
        v18 = 2 * v17;
        v19 = 0;
        f_.v53 = 0;
        f_.v54 = 0;
        f_.v52 = (unsigned __int8)(2 * v17);
      }
      v21 = v48;
      if ((v18 & 1) != 0) {
        v22 = (char*)v19;
      }
      else {
        v22 = (char*)&f_.v52 + 1;
      }
      qmemcpy(v22, "Layout/Textures/Still/", 22);
      if ((v18 & 1) != 0) {
        v23 = (char*)(v19 + 22);
      }
      else {
        v23 = (char*)&f_.v54 + 7;
      }
      if (v9 != 0) {
        GameRoutine_1a0b940((__int64)v23, (__int64)v10, v9);
      }
      v23[v9] = 0;
      if (v21 != 0 && v6 != 0) {
        v24 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v6);
      }
      v7 = f_.v53;
      v6 = f_.v54;
      v5 = (unsigned __int8)f_.v52;
      v25 = f_.v52 & 1;
      v8 = (unsigned __int8)f_.v52 >> 1;
      f_.v49 = f_.v52;
      f_.v50 = f_.v53;
      f_.v51 = (const char*)f_.v54;
    }
    v48 = v25;
    if (v25 != 0) {
      v26 = v7;
    }
    else {
      v26 = v8;
    }
    if (v25 != 0) {
      v27 = (char*)v6;
    }
    else {
      v27 = (char*)&f_.v49 + 1;
    }
    if (v26 >= 5) {
      v28 = &v27[v26];
      v29 = v26;
      v30 = (__int64)v27;
      while (1) {
        v31 = GameRoutine_1a09c60(v30, 46, v29 - 4);
        if (v31 == 0) {
          goto LABEL_64;
        }
        if (*(_DWORD*)v31 == 1953391150 && *(_BYTE*)(v31 + 4) == 120) {
          break;
        }
        v30 = v31 + 1;
        v29 = (signed __int64)&v28[-v30];
        if ((__int64)&v28[-v30] < 5) {
          goto LABEL_64;
        }
      }
      if ((char*)v31 != v28 && v31 - (_QWORD)v27 != -1) {
        goto LABEL_79;
      }
    }
  LABEL_64:
    v33 = v26 + 5;
    if ((unsigned __int64)(v26 + 5) < 0xFFFFFFFFFFFFFFF7LL) {
      if (v33 >= 0x17) {
        if ((v33 | 7) == 0x17) {
          v36 = 26;
        }
        else {
          v36 = (v33 | 7) + 1;
        }
        v37 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v36, 16,
                                             0);
        v34 = v48;
        v35 = (char*)v37;
        f_.v53 = v26 + 5;
        f_.v54 = v37;
        f_.v52 = v36 | 1;
      }
      else {
        v34 = v48;
        f_.v53 = 0;
        f_.v54 = 0;
        f_.v52 = (unsigned __int8)(2 * v33);
        v35 = (char*)&f_.v52 + 1;
        if (v26 == 0) {
        LABEL_73:
          strcpy(&v35[v26], ".bntx");
          if (v34 != 0 && v6 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v6);
          }
          v7 = f_.v53;
          v6 = f_.v54;
          v5 = (unsigned __int8)f_.v52;
          f_.v49 = f_.v52;
          f_.v50 = f_.v53;
          f_.v51 = (const char*)f_.v54;
        LABEL_79:
          v39 = snd_g_fileIndex_ptr[0];
          if ((v5 & 1) != 0) {
            v40 = (char*)v6;
          }
          else {
            v40 = (char*)&f_.v49 + 1;
          }
          if ((v5 & 1) != 0) {
            v41 = v7;
          }
          else {
            v41 = v5 >> 1;
          }
          if ((fs_6360e0(*snd_g_fileIndex_ptr[0], (__int64)v40, v41, 0, 0) &
               1) != 0) {
            v42 = *v39;
            if ((f_.v49 & 1) != 0) {
              v43 = f_.v51;
            }
            else {
              v43 = (char*)&f_.v49 + 1;
            }
            v44 = GameRoutine_1a09c70(v43);
            f_.v52 = (__int64)v43;
            f_.v53 = v44;
            f_.v54 = 0;
            f_.v55 = 0;
            f_.v57 = 0;
            f_.v56 = GameData_22416e0;
            v45 = fs_Manager_createFileAsync_fs_BntxFile(v42, (__int64)&f_.v52);
            if (f_.v55 != 0) {
              std___1___shared_weak_count___release_weak(f_.v55);
            }
            *(_QWORD*)(v47 + 880) = v45;
          }
          if ((f_.v49 & 1) != 0 && f_.v51 != nullptr) {
            v46 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v46 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, (__int64)f_.v51);
          }
          return;
        }
      }
      GameRoutine_1a0b940((__int64)v35, (__int64)v27, v26);
      goto LABEL_73;
    }
  LABEL_99:
    String_60a1d0();
  }
}

#pragma GCC visibility pop
