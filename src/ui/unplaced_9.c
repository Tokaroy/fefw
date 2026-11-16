#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 LayoutEx_57cfc0(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ui_155e4a0(__int64 a1, __int64 a2, char* a3);
__int64 ui_155f760(__int64 a1, __int64 a2, char* a3);

__int64 ui_155e4a0(__int64 a1, __int64 a2, char* a3)
{
  __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  bool v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  char* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    char gap0_[8];
    _QWORD v38[2];
    char* v39;
    _QWORD v40[2];
    char* v41;
    __int64 v42;
    unsigned __int64 v43;
    char* v44;
  } f_;

  result = 0;
  if (a2 == 0 || a3 == nullptr) {
    return result;
  }
  v7 = GameRoutine_1a09c70(a3);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_76;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    f_.v43 = v8;
    f_.v44 = v9;
    f_.v42 = v10 | 1;
  }
  else {
    LOBYTE(f_.v42) = 2 * v7;
    v9 = (char*)&f_.v42 + 1;
    if (v7 == 0) {
      goto LABEL_12;
    }
  }
  GameRoutine_1a0b950((__int64)v9, (__int64)a3, v8);
LABEL_12:
  v9[v8] = 0;
  if ((f_.v42 & 1) != 0) {
    v11 = f_.v44;
  }
  else {
    v11 = (char*)&f_.v42 + 1;
  }
  if ((f_.v42 & 1) != 0) {
    v12 = f_.v43;
  }
  else {
    v12 = (unsigned __int64)(unsigned __int8)f_.v42 >> 1;
  }
  if (v12 >= 1) {
    v13 = &v11[v12];
    v14 = (__int64)v11;
    while (1) {
      v15 = GameRoutine_1a09c60(v14, 47, v12);
      if (v15 == 0) {
        goto LABEL_30;
      }
      if (*(_BYTE*)v15 == 47) {
        break;
      }
      v14 = v15 + 1;
      v12 = (__int64)&v13[-v14];
      if ((__int64)&v13[-v14] < 1) {
        goto LABEL_30;
      }
    }
    if ((char*)v15 != v13) {
      v16 = v15 - (_QWORD)v11;
      if (v15 - (_QWORD)v11 != -1) {
        v17 = v15;
        v18 = GameRoutine_1a09c70((const char*)(v15 + 1));
        if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_76;
        }
        v19 = v18;
        if (v18 >= 0x17) {
          if ((v18 | 7) == 0x17) {
            v23 = 26;
          }
          else {
            v23 = (v18 | 7) + 1;
          }
          v20 = (const char*)fw_memory_HeapManager_Allocate(
              fw_memory_g_heap_manager, v23, 16, 0);
          f_.v40[1] = v19;
          f_.v41 = v20;
          f_.v40[0] = v23 | 1;
        }
        else {
          LOBYTE(f_.v40[0]) = 2 * v18;
          v20 = (char*)f_.v40 + 1;
          if (v18 == 0) {
          LABEL_43:
            v24 = (unsigned __int8)f_.v42;
            v20[v19] = 0;
            v25 = v24 >> 1;
            v26 = (v24 & 1) == 0;
            v27 = f_.v43;
            if (v26) {
              v27 = v25;
              v28 = (char*)&f_.v42 + 1;
            }
            else {
              v28 = f_.v44;
            }
            if (v27 >= v16) {
              v29 = v16;
            }
            else {
              v29 = v27;
            }
            if (v29 < 0xFFFFFFFFFFFFFFF7LL) {
              if (v29 >= 0x17) {
                if ((v29 | 7) == 0x17) {
                  v31 = 26;
                }
                else {
                  v31 = (v29 | 7) + 1;
                }
                v30 = (char*)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v31, 16, 0);
                f_.v38[1] = v29;
                f_.v39 = v30;
                f_.v38[0] = v31 | 1;
              }
              else {
                LOBYTE(f_.v38[0]) = 2 * v29;
                v30 = (char*)f_.v38 + 1;
                if (v29 == 0) {
                  goto LABEL_58;
                }
              }
              GameRoutine_1a0b940((__int64)v30, (__int64)v28, v29);
            LABEL_58:
              v30[v29] = 0;
              if ((f_.v38[0] & 1) != 0) {
                v32 = f_.v39;
              }
              else {
                v32 = (char*)f_.v38 + 1;
              }
              result = LayoutEx_57cfc0(a2, (__int64)v32);
              if (result != 0) {
                if ((f_.v40[0] & 1) != 0) {
                  v33 = f_.v41;
                }
                else {
                  v33 = (char*)f_.v40 + 1;
                }
                result = ui_155e4a0(a1, *(_QWORD*)(result + 232), v33);
              }
              if ((f_.v38[0] & 1) != 0 && f_.v39 != nullptr) {
                v34 = result;
                v35 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v35 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                    (__int64)f_.v39);
                result = v34;
              }
              if ((f_.v40[0] & 1) != 0 && f_.v41 != nullptr) {
                v36 = result;
                v37 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v37 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                    (__int64)f_.v41);
                result = v36;
              }
              goto LABEL_32;
            }
          LABEL_76:
            String_60a1d0();
          }
        }
        GameRoutine_1a0b940((__int64)v20, v17 + 1, v19);
        goto LABEL_43;
      }
    }
  }
LABEL_30:
  result = LayoutEx_57cfc0(a2, (__int64)a3);
  if (result != 0) {
    result = *(_QWORD*)(result + 232);
  }
LABEL_32:
  if ((f_.v42 & 1) != 0 && f_.v44 != nullptr) {
    v21 = result;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (__int64)f_.v44);
    return v21;
  }
  return result;
}

__int64 ui_155f760(__int64 a1, __int64 a2, char* a3)
{
  __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  bool v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  char* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    char gap0_[8];
    _QWORD v38[2];
    char* v39;
    _QWORD v40[2];
    char* v41;
    __int64 v42;
    unsigned __int64 v43;
    char* v44;
  } f_;

  result = 0;
  if (a2 == 0 || a3 == nullptr) {
    return result;
  }
  v7 = GameRoutine_1a09c70(a3);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    f_.v43 = v8;
    f_.v44 = v9;
    f_.v42 = v10 | 1;
  }
  else {
    LOBYTE(f_.v42) = 2 * v7;
    v9 = (char*)&f_.v42 + 1;
    if (v7 == 0) {
      goto LABEL_12;
    }
  }
  GameRoutine_1a0b950((__int64)v9, (__int64)a3, v8);
LABEL_12:
  v9[v8] = 0;
  if ((f_.v42 & 1) != 0) {
    v11 = f_.v44;
  }
  else {
    v11 = (char*)&f_.v42 + 1;
  }
  if ((f_.v42 & 1) != 0) {
    v12 = f_.v43;
  }
  else {
    v12 = (unsigned __int64)(unsigned __int8)f_.v42 >> 1;
  }
  if (v12 >= 1) {
    v13 = &v11[v12];
    v14 = (__int64)v11;
    while (1) {
      v15 = GameRoutine_1a09c60(v14, 47, v12);
      if (v15 == 0) {
        goto LABEL_30;
      }
      if (*(_BYTE*)v15 == 47) {
        break;
      }
      v14 = v15 + 1;
      v12 = (__int64)&v13[-v14];
      if ((__int64)&v13[-v14] < 1) {
        goto LABEL_30;
      }
    }
    if ((char*)v15 != v13) {
      v16 = v15 - (_QWORD)v11;
      if (v15 - (_QWORD)v11 != -1) {
        v17 = v15;
        v18 = GameRoutine_1a09c70((const char*)(v15 + 1));
        if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_75;
        }
        v19 = v18;
        if (v18 >= 0x17) {
          if ((v18 | 7) == 0x17) {
            v23 = 26;
          }
          else {
            v23 = (v18 | 7) + 1;
          }
          v20 = (const char*)fw_memory_HeapManager_Allocate(
              fw_memory_g_heap_manager, v23, 16, 0);
          f_.v40[1] = v19;
          f_.v41 = v20;
          f_.v40[0] = v23 | 1;
        }
        else {
          LOBYTE(f_.v40[0]) = 2 * v18;
          v20 = (char*)f_.v40 + 1;
          if (v18 == 0) {
          LABEL_42:
            v24 = (unsigned __int8)f_.v42;
            v20[v19] = 0;
            v25 = v24 >> 1;
            v26 = (v24 & 1) == 0;
            v27 = f_.v43;
            if (v26) {
              v27 = v25;
              v28 = (char*)&f_.v42 + 1;
            }
            else {
              v28 = f_.v44;
            }
            if (v27 >= v16) {
              v29 = v16;
            }
            else {
              v29 = v27;
            }
            if (v29 < 0xFFFFFFFFFFFFFFF7LL) {
              if (v29 >= 0x17) {
                if ((v29 | 7) == 0x17) {
                  v31 = 26;
                }
                else {
                  v31 = (v29 | 7) + 1;
                }
                v30 = (char*)fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v31, 16, 0);
                f_.v38[1] = v29;
                f_.v39 = v30;
                f_.v38[0] = v31 | 1;
              }
              else {
                LOBYTE(f_.v38[0]) = 2 * v29;
                v30 = (char*)f_.v38 + 1;
                if (v29 == 0) {
                  goto LABEL_57;
                }
              }
              GameRoutine_1a0b940((__int64)v30, (__int64)v28, v29);
            LABEL_57:
              v30[v29] = 0;
              if ((f_.v38[0] & 1) != 0) {
                v32 = f_.v39;
              }
              else {
                v32 = (char*)f_.v38 + 1;
              }
              result = LayoutEx_57cfc0(a2, (__int64)v32);
              if (result != 0) {
                if ((f_.v40[0] & 1) != 0) {
                  v33 = f_.v41;
                }
                else {
                  v33 = (char*)f_.v40 + 1;
                }
                result = ui_155f760(a1, *(_QWORD*)(result + 232), v33);
              }
              if ((f_.v38[0] & 1) != 0 && f_.v39 != nullptr) {
                v34 = result;
                v35 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v35 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                    (__int64)f_.v39);
                result = v34;
              }
              if ((f_.v40[0] & 1) != 0 && f_.v41 != nullptr) {
                v36 = result;
                v37 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v37 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                    (__int64)f_.v41);
                result = v36;
              }
              goto LABEL_31;
            }
          LABEL_75:
            String_60a1d0();
          }
        }
        GameRoutine_1a0b940((__int64)v20, v17 + 1, v19);
        goto LABEL_42;
      }
    }
  }
LABEL_30:
  result = (*(__int64 (**)(_QWORD, const char*, __int64))(
      **(_QWORD**)(a2 + 24) + 120LL))(*(_QWORD*)(a2 + 24), a3, 1);
LABEL_31:
  if ((f_.v42 & 1) != 0 && f_.v44 != nullptr) {
    v21 = result;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (__int64)f_.v44);
    return v21;
  }
  return result;
}

#pragma GCC visibility pop
