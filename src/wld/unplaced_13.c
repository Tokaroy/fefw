#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_bf2be0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_bf2ee0(_QWORD* result, _QWORD*);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212df10;
extern __int64 (*GameData_1fd0cf8[])();
extern __int64 (*GameData_1fd0d88[])();
extern __int64 (*GameData_1fd0e08[])();
extern __int64 (*GameData_1fd0e88[])();
extern __int64 (*game_character_CharacterSelfShadow_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212df08;
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
void CharacterSelfShadow_bf80a0(__int64, __int64, __int64, __int64, char);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 wld_bf25c0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, char a5);
__attribute__((swiftcall)) void wld_c09c40(PSEUDO_X8 x8_, __int64 a1);

__int64 wld_bf25c0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, char a5)
{

#pragma clang fp contract(off)
  unsigned __int8 explicit;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64** v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 result;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  struct {
    _QWORD v44[4];
    _QWORD* v45;
    char gap40_[8];
    _QWORD v46[2];
    __int64 v47;
    __int64 v48;
    _QWORD* v49;
  } f_;

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = a4;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = game_character_CharacterSelfShadow_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v9 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v42 = a2;
    v43 = __cxa_guard_acquire((__int64)GameData_212df10);
    a2 = v42;
    if (v43 != 0) {
      *v9 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
      a2 = v42;
    }
  }
  v10 = *(_QWORD*)(a2 + 512);
  v11 = v10;
  do {
    v12 = *(_DWORD*)(v11 - 16);
    v11 -= 16;
    v10 -= 16;
  } while (v12 != *v9);
  v13 = *(_QWORD*)(v10 + 8);
  v14 = *(_QWORD**)(v13 + 24);
  v15 = (__int64*)v14[39];
  v16 = (__int64*)v14[40];
  while (v15 != v16) {
    v17 = *v15;
    v15 += 2;
    (*(void (**)(__int64, const char*, __int64, float))(*(_QWORD*)v17 + 16LL))(
        v17, "SelfShadowEnabled", 17, 0x1.0000000000000p+0f);
  }
  *(_QWORD*)(a1 + 24) = a3;
  v18 = 80;
  if (*(_QWORD*)(v13 + 32) == 0) {
    v18 = 72;
  }
  CharacterSelfShadow_bf80a0(*(_QWORD*)(a1 + 40), (__int64)a3, (__int64)v14,
                             *(_QWORD*)(v13 + v18), a5 & 1);
  v19 = *(_QWORD**)(a1 + 40);
  v20 = v19[5];
  if (v20 != 0 & v19[7] != 0) {
    v22 = *(_QWORD*)(a1 + 24);
    v23 = v20 - 1;
    if ((v20 & (v20 - 1)) != 0) {
      v24 = *(_QWORD*)(a1 + 24);
      if (v22 >= v20) {
        v24 = v22 % v20;
      }
    }
    else {
      v24 = v23 & v22;
    }
    v25 = *(__int64***)(v19[4] + 8 * v24);
    if (v25 != nullptr) {
      v26 = *v25;
      if (*v25 != nullptr) {
        if ((v20 & v23) == 0) {
          while (1) {
            v28 = v26[1];
            if (v28 == v22) {
              if (v26[2] == v22) {
                goto LABEL_42;
              }
            }
            else if ((v28 & v23) != v24) {
              goto LABEL_31;
            }
            v26 = (__int64*)*v26;
            if (v26 == nullptr) {
              goto LABEL_31;
            }
          }
        }
        do {
          v27 = v26[1];
          if (v27 == v22) {
            if (v26[2] == v22) {
            LABEL_42:
              v32 = a3[76];
              v33 = a3[77];
              if (v33 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16),
                                          1u, memory_order_relaxed);
                v34 = a3[78];
                if (v26[16] != 0) {
                  if (v26[22] == 0) {
                    v35 = v26 + 18;
                    goto LABEL_57;
                  }
                  goto LABEL_63;
                }
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16),
                                          1u, memory_order_relaxed);
              LABEL_50:
                f_.v47 = v33;
                f_.v48 = v34;
                f_.v46[0] = GameData_1fd0cf8;
                f_.v46[1] = v32;
                f_.v49 = f_.v46;
                GameRoutine_bf2ee0(f_.v46, v26 + 12);
                if (f_.v49 == f_.v46) {
                  v36 = 32;
                LABEL_54:
                  (*(void (**)(__int64))(*f_.v49 + v36))((__int64)f_.v49);
                }
                else if (f_.v49 != nullptr) {
                  v36 = 40;
                  goto LABEL_54;
                }
                if (v26[22] != 0) {
                  goto LABEL_63;
                }
                v35 = v26 + 18;
                if (v33 != 0) {
                LABEL_57:
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16),
                                            1u, memory_order_relaxed);
                }
              }
              else {
                v34 = a3[78];
                if (v26[16] == 0) {
                  goto LABEL_50;
                }
                if (v26[22] != 0) {
                  goto LABEL_63;
                }
                v35 = v26 + 18;
              }
              f_.v47 = v33;
              f_.v48 = v34;
              f_.v46[0] = GameData_1fd0d88;
              f_.v46[1] = v32;
              f_.v49 = f_.v46;
              GameRoutine_bf2ee0(f_.v46, v35);
              if (f_.v49 == f_.v46) {
                v37 = 32;
              }
              else {
                if (f_.v49 == nullptr) {
                  goto LABEL_63;
                }
                v37 = 40;
              }
              (*(void (**)(__int64))(*f_.v49 + v37))((__int64)f_.v49);
            LABEL_63:
              f_.v44[0] = GameData_1fd0e08;
              f_.v44[1] = a1;
              f_.v45 = f_.v44;
              f_.v49 = f_.v46;
              f_.v46[0] = GameData_1fd0e08;
              f_.v46[1] = a1;
              GameRoutine_bf2be0(f_.v46, v14 + 66);
              if (f_.v49 == f_.v46) {
                v38 = 32;
              LABEL_67:
                (*(void (**)(__int64))(*f_.v49 + v38))((__int64)f_.v49);
              }
              else if (f_.v49 != nullptr) {
                v38 = 40;
                goto LABEL_67;
              }
              result = (__int64)f_.v45;
              if (f_.v45 == f_.v44) {
                v39 = 32;
              LABEL_72:
                result =
                    (*(__int64 (**)(__int64))(*f_.v45 + v39))((__int64)f_.v45);
              }
              else if (f_.v45 != nullptr) {
                v39 = 40;
                goto LABEL_72;
              }
              *(_BYTE*)(a1 + 32) = 1;
              v40 = a3[49];
              v41 = a3[50];
              if (v41 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8),
                                          1u, memory_order_relaxed);
                *((_DWORD*)v26 + 50) = *(_DWORD*)(v40 + 11800);
                if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
                  result = std___1___shared_weak_count___release_weak(v41);
                }
              }
              else {
                *((_DWORD*)v26 + 50) = *(_DWORD*)(v40 + 11800);
              }
              if (v33 != 0) {
                return std___1___shared_weak_count___release_weak(v33);
              }
              return result;
            }
          }
          else {
            if (v27 >= v20) {
              v27 %= v20;
            }
            if (v27 != v24) {
              break;
            }
          }
          v26 = (__int64*)*v26;
        } while (v26 != nullptr);
      }
    }
  }
LABEL_31:
  f_.v44[0] = GameData_1fd0e88;
  f_.v44[1] = a1;
  f_.v45 = f_.v44;
  f_.v49 = f_.v46;
  f_.v46[0] = GameData_1fd0e88;
  f_.v46[1] = a1;
  GameRoutine_bf2be0(f_.v46, v14 + 66);
  if (f_.v49 == f_.v46) {
    v29 = 32;
    goto LABEL_35;
  }
  if (f_.v49 != nullptr) {
    v29 = 40;
  LABEL_35:
    (*(void (**)(__int64))(*f_.v49 + v29))((__int64)f_.v49);
  }
  result = (__int64)f_.v45;
  if (f_.v45 == f_.v44) {
    v31 = 32;
  }
  else {
    if (f_.v45 == nullptr) {
      return result;
    }
    v31 = 40;
  }
  return (*(__int64 (**)(__int64))(*f_.v45 + v31))((__int64)f_.v45);
}

__attribute__((swiftcall)) void wld_c09c40(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  unsigned __int64 v11;
  char* v12;
  signed __int64 v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  char v21;
  __int64 v22;
  unsigned __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 v29;
    unsigned __int64 v30;
    __int64 v31;
    __int64 v32;
    unsigned __int64 v33;
    char* v34;
  } f_;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = GameRoutine_1a09c70((const char*)(v2 + 16));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_63;
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
                                               0);
    f_.v33 = v5;
    f_.v34 = v6;
    f_.v32 = v7 | 1;
  }
  else {
    LOBYTE(f_.v32) = 2 * v4;
    v6 = (char*)&f_.v32 + 1;
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  GameRoutine_1a0b940((__int64)v6, v2 + 16, v5);
LABEL_10:
  v6[v5] = 0;
  v9 = f_.v33;
  v8 = (__int64)f_.v34;
  v10 = f_.v32 & 1;
  v11 = (unsigned __int64)(unsigned __int8)f_.v32 >> 1;
  if (v10 != 0) {
    v12 = f_.v34;
  }
  else {
    v12 = (char*)&f_.v32 + 1;
  }
  if ((f_.v32 & 1) != 0) {
    v13 = f_.v33;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)f_.v32 >> 1;
  }
  if (v13 >= 1) {
    v14 = &v12[v13];
    v15 = v13;
    v16 = (__int64)v12;
    while (1) {
      v17 = (char*)GameRoutine_1a09c60(v16, 46, v15);
      if (v17 == nullptr) {
        goto LABEL_42;
      }
      if (*v17 == 46) {
        break;
      }
      v16 = (__int64)(v17 + 1);
      v15 = (unsigned __int64)&v14[-v16];
      if ((__int64)&v14[-v16] < 1) {
        goto LABEL_42;
      }
    }
    if (v17 != v14 && v17 - v12 != -1) {
      if (v13 >= (unsigned __int64)(v17 - v12)) {
        v18 = v17 - v12;
      }
      else {
        v18 = v13;
      }
      if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_63:
        String_60a1d0();
      }
      if (v18 >= 0x17) {
        if ((v18 | 7) == 0x17) {
          v20 = 26;
        }
        else {
          v20 = (v18 | 7) + 1;
        }
        v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v20, 16, 0);
        f_.v30 = v18;
        f_.v31 = (__int64)v19;
        f_.v29 = v20 | 1;
      }
      else {
        LOBYTE(f_.v29) = 2 * v18;
        v19 = (char*)&f_.v29 + 1;
        if (v17 == v12) {
        LABEL_36:
          v21 = f_.v32;
          v19[v18] = 0;
          if ((v21 & 1) != 0 && f_.v34 != nullptr) {
            v22 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v22 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)f_.v34);
          }
          v9 = f_.v30;
          v8 = f_.v31;
          v10 = f_.v29 & 1;
          v11 = (unsigned __int8)f_.v29 >> 1;
          f_.v32 = f_.v29;
          f_.v33 = f_.v30;
          f_.v34 = (char*)f_.v31;
          goto LABEL_42;
        }
      }
      GameRoutine_1a0b940((__int64)v19, (__int64)v12, v18);
      goto LABEL_36;
    }
  }
LABEL_42:
  if (v10 != 0) {
    v23 = v9;
  }
  else {
    v23 = v11;
  }
  if (v10 != 0) {
    v24 = (char*)v8;
  }
  else {
    v24 = (char*)&f_.v32 + 1;
  }
  v25 = v23 + 9;
  if (v23 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_63;
  }
  if (v25 >= 0x17) {
    if ((v25 | 7) == 0x17) {
      v27 = 26;
    }
    else {
      v27 = (v25 | 7) + 1;
    }
    v26 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v27, 16, 0);
    a2[1] = v25;
    a2[2] = v26;
    *a2 = v27 | 1;
  }
  else {
    v26 = (__int64)a2 + 1;
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    *(_BYTE*)a2 = 2 * v25;
    if (v23 == 0) {
      goto LABEL_57;
    }
  }
  GameRoutine_1a0b940(v26, (__int64)v24, v23);
LABEL_57:
  strcpy((char*)(v26 + v23), ".matanimb");
  if (v10 != 0 && v8 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v8);
  }
}

#pragma GCC visibility pop
