#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* g3d_ResFile_prepareAsyncLoading(_QWORD* result, _QWORD*);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(unsigned __int64, __int64);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a69c80(__int64 result, __int64, unsigned __int64, __int64,
                           signed __int64);
__int64 GameRoutine_ad6d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_ad8640(_QWORD);
__int64 GameRoutine_ad8980(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fc2798[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212c060;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 ResFile_ad7640(_QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a67b90();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 g3d_a661a0(__int64 a1, int a2, __int64 a3, int a4);
__attribute__((swiftcall)) void g3d_ada270(PSEUDO_X8 x8_, __int64 a1,
                                           unsigned __int64 a2, __int64 a3,
                                           unsigned __int64 a4, __int64 a5);
__int64 GameRoutine_1a09ce0_alt1(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0b940_alt1(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64);
bool GameRoutine_ad7390_alt1(_QWORD*);
unsigned __int64 GameRoutine_ad8640_alt1(unsigned __int64 result);
void GameRoutine_ad6d20_alt1(__int64, __int64, unsigned __int64);
void ResFile_ad7640_alt1(_QWORD*);
void __attribute__((noreturn)) String_60a1d0_alt1();

__int64 g3d_a661a0(__int64 a1, int a2, __int64 a3, int a4)
{
  _BYTE* v5;
  _BYTE* v6;
  __int64 v7;
  _BYTE* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64** v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  signed __int64 v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  _BYTE* v44;
  __int64 v45;
  __int64 v47;
  struct {
    char gap0_[16];
    _BYTE v49[32];
    _BYTE* v50;
    char gap56_[8];
    _BYTE v51[32];
    _BYTE* v52;
  } f_;
  _QWORD v53[4];

  if (*(_QWORD*)(a1 + 664) == *(_QWORD*)(a1 + 656)) {
    *(_QWORD*)(*(_QWORD*)(a1 + 280) + 88LL) = *(_QWORD*)(a1 + 648);
  }
  {
    v5 = *(_BYTE**)(a3 + 32);
    __asm__ volatile("" ::"r"(v5));
  }
  f_.v50 = nullptr;
  HIDWORD(v47) = a4;
  if (v5 == nullptr) {
    v6 = nullptr;
  LABEL_10:
    f_.v52 = v5;
    f_.v50 = v6;
    goto LABEL_11;
  }
  if (v5 == (_BYTE*)a3) {
    f_.v52 = f_.v51;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, f_.v51);
    v6 = f_.v52;
    v5 = f_.v50;
  }
  else {
    v6 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5);
    v5 = nullptr;
    f_.v52 = v6;
  }
  if (v6 != f_.v51) {
    if (v5 == f_.v49) {
      (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, f_.v51);
      (*(void (**)(_BYTE*))(*(_QWORD*)f_.v50 + 32LL))(f_.v50);
      v8 = f_.v52;
      f_.v52 = f_.v51;
      v5 = f_.v51;
      f_.v50 = v8;
      goto LABEL_17;
    }
    goto LABEL_10;
  }
  if (v5 == f_.v49) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*, _QWORD*))(
        *(_QWORD*)v6 + 24LL))((void*)(v6), v6, v53);
    (*(void (**)(_BYTE*))(*(_QWORD*)f_.v52 + 32LL))(f_.v52);
    f_.v52 = nullptr;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)f_.v50 + 24LL))(f_.v50, f_.v51);
    (*(void (**)(_BYTE*))(*(_QWORD*)f_.v50 + 32LL))(f_.v50);
    f_.v50 = nullptr;
    f_.v52 = f_.v51;
    (*(void (**)(_QWORD*, _BYTE*))(v53[0] + 24LL))(v53, f_.v49);
    (*(void (**)(_QWORD*))(v53[0] + 32LL))(v53);
    v5 = f_.v52;
    f_.v50 = f_.v49;
  }
  else {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*, _BYTE*))(
        *(_QWORD*)v6 + 24LL))((void*)(v6), v6, f_.v49);
    (*(void (**)(_BYTE*))(*(_QWORD*)f_.v52 + 32LL))(f_.v52);
    v5 = f_.v50;
    f_.v50 = f_.v49;
    f_.v52 = v5;
  }
LABEL_11:
  if (v5 == f_.v51) {
  LABEL_17:
    v7 = 32;
    goto LABEL_18;
  }
  if (v5 != nullptr) {
    v7 = 40;
  LABEL_18:
    (*(void (**)(_BYTE*))(*(_QWORD*)v5 + v7))(v5);
  }
  {
    v9 = *(_QWORD*)(a1 + 664);
    __asm__ volatile("" ::"r"(v9));
  }
  LODWORD(v47) = *(_DWORD*)(a1 + 640);
  {
    v10 = *(_QWORD*)(a1 + 672);
    __asm__ volatile("" ::"r"(v10));
  }
  if (v9 < v10) {
    *(_DWORD*)(v9 + 8) = a2;
    *(_QWORD*)v9 = v47;
    if (f_.v50 != nullptr) {
      if (f_.v50 == f_.v49) {
        *(_QWORD*)(v9 + 48) = v9 + 16;
        (*(void (**)(_BYTE*))(*(_QWORD*)f_.v50 + 24LL))(f_.v50);
      }
      else {
        *(_QWORD*)(v9 + 48) = (*(__int64 (**)(__int64))(*(_QWORD*)f_.v50 +
                                                        16LL))((__int64)f_.v50);
      }
      v11 = v9 + 64;
    }
    else {
      *(_QWORD*)(v9 + 48) = 0;
      v11 = v9 + 64;
    }
    goto LABEL_56;
  }
  {
    v12 = *(_QWORD*)(a1 + 656);
    __asm__ volatile("" ::"r"(v12));
  }
  v13 = v9 - v12;
  v14 = ((__int64)(v9 - v12) >> 6) + 1;
  if (v14 >> 58 != 0) {
    GameRoutine_a67b90();
  }
  v15 = v10 - v12;
  v16 = v15 >> 5;
  if (v15 >> 5 <= v14) {
    v16 = v14;
  }
  v17 = (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFC0LL;
  v18 = 0x3FFFFFFFFFFFFFFLL;
  if (!v17) {
    v18 = v16;
  }
  if (v18 >> 58 != 0) {
    GameRoutine_60a210();
  }
  v19 = v18 << 6;
  v20 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v18 << 6, 16, 0);
  v21 = v20 + v13;
  v22 = v20;
  v23 = f_.v50;
  *(_QWORD*)v21 = v47;
  *(_DWORD*)(v21 + 8) = a2;
  if (v23 != nullptr) {
    if (v23 == f_.v49) {
      *(_QWORD*)(v21 + 48) = v21 + 16;
      (*(void (**)(_BYTE*))(*(_QWORD*)v23 + 24LL))(v23);
    }
    else {
      *(_QWORD*)(v21 + 48) =
          (*(__int64 (**)(_BYTE*))(*(_QWORD*)v23 + 16LL))(v23);
    }
  }
  else {
    *(_QWORD*)(v21 + 48) = 0;
  }
  {
    v24 = *(__int64**)(a1 + 664);
    __asm__ volatile("" ::"r"(v24));
  }
  {
    v25 = *(_QWORD*)(a1 + 656);
    __asm__ volatile("" ::"r"(v25));
  }
  v26 = v22 + v19;
  v11 = v21 + 64;
  v27 = v21 - ((_QWORD)v24 - v25);
  if (v24 != (__int64*)v25) {
    v28 = v13 - (((__int64)v24 - v25) >> 6 << 6);
    {
      v29 = *(__int64**)(a1 + 656);
      __asm__ volatile("" ::"r"(v29));
    }
    v30 = (__int64**)(v28 + v22 + 48);
    do {
      v31 = (__int64*)*v29;
      *((_DWORD*)v30 - 10) = *((_DWORD*)v29 + 2);
      *(v30 - 6) = v31;
      {
        v32 = (__int64*)v29[6];
        __asm__ volatile("" ::"r"(v32));
      }
      if (v32 != nullptr) {
        if (v29 + 2 == v32) {
          *v30 = (__int64*)(v30 - 4);
          (*(void (**)(__int64))(*(_QWORD*)v29[6] + 24LL))(v29[6]);
        }
        else {
          *v30 = v32;
          v29[6] = 0;
        }
      }
      else {
        *v30 = nullptr;
      }
      v29 += 8;
      v30 += 8;
    } while (v29 != v24);
    while (1) {
      {
        v34 = *(_QWORD**)(v25 + 48);
        __asm__ volatile("" ::"r"(v34));
      }
      if ((_QWORD*)(v25 + 16) == v34) {
        v33 = 32;
      }
      else {
        if (v34 == nullptr) {
          goto LABEL_47;
        }
        v33 = 40;
      }
      (*(void (**)(__int64))(*v34 + v33))((__int64)v34);
    LABEL_47:
      v25 += 64;
      if ((__int64*)v25 == v24) {
        {
          v25 = *(_QWORD*)(a1 + 656);
          __asm__ volatile("" ::"r"(v25));
        }
        break;
      }
    }
  }
  *(_QWORD*)(a1 + 656) = v27;
  *(_QWORD*)(a1 + 664) = v11;
  *(_QWORD*)(a1 + 672) = v26;
  if (v25 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                                  v25);
  }
LABEL_56:
  {
    v36 = *(_QWORD*)(a1 + 656);
    __asm__ volatile("" ::"r"(v36));
  }
  *(_QWORD*)(a1 + 664) = v11;
  if ((v11 - v36) >> 6 < 1) {
    v40 = 0;
  LABEL_62:
    GameRoutine_a69c80(v36, v11, (v11 - v36) >> 6, 0, v40);
  }
  else {
    v37 = (v11 - v36) >> 6;
    v38 = GameData_212c060;
    while (1) {
      v39 = GameRoutine_1a09d20(v37 << 6, v38);
      if (v39 != 0) {
        break;
      }
      v40 = v37 >> 1;
      v41 = v37 > 1;
      v37 >>= 1;
      if (!v41) {
        goto LABEL_62;
      }
    }
    v42 = v39;
    GameRoutine_a69c80(v36, v11, (v11 - v36) >> 6, v39, v37);
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43,
                                  v42);
  }
  v44 = f_.v50;
  *(_BYTE*)(a1 + 504) = 1;
  ++*(_DWORD*)(a1 + 640);
  if (v44 == f_.v49) {
    v45 = 32;
    goto LABEL_70;
  }
  if (v44 != nullptr) {
    v45 = 40;
  LABEL_70:
    (*(void (**)(__int64))(*(_QWORD*)v44 + v45))((__int64)v44);
  }
  return (unsigned int)v47;
}

__attribute__((swiftcall)) void g3d_ada270(PSEUDO_X8 x8_, __int64 a1,
                                           unsigned __int64 a2, __int64 a3,
                                           unsigned __int64 a4, __int64 a5)
{
  __int64* a6 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  _QWORD* result;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64* v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  char* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  char* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  struct {
    char gap0_[16];
    _BYTE v65[32];
    _BYTE* v66;
    char gap56_[8];
    _QWORD v67[4];
    _QWORD* v68;
    char gap104_[8];
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    unsigned __int64 v76;
    char* v77;
    __int64 v78;
    unsigned __int64 v79;
    char* v80;
    __int64 v81;
    unsigned __int64 v82;
    char* v83;
  } f_;

  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       176, 16, 0);
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_DWORD*)(v13 + 72) = 0;
  *(_QWORD*)(v13 + 144) = 0;
  *(_DWORD*)(v13 + 160) = 0;
  *(_WORD*)(v13 + 164) = 0;
  *(_QWORD*)(v13 + 80) = 0;
  *(_QWORD*)(v13 + 88) = 0;
  *(_QWORD*)(v13 + 96) = 0;
  *(_QWORD*)(v13 + 104) = 0;
  *(_DWORD*)v13 = 7;
  *(_QWORD*)(v13 + 8) = 0;
  v14 = (__int64*)(v13 + 8);
  *a6 = v13;
  *(_DWORD*)(v13 + 64) = 1065353216;
  v15 = *(_QWORD*)(a5 + 32);
  if (v15 != 0) {
    if (v15 == a5) {
      f_.v66 = f_.v65;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v15 + 24LL))(v15, f_.v65);
      v17 = v13;
      v16 = f_.v66;
    }
    else {
      v16 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      f_.v66 = v16;
      v17 = v13;
    }
    v20 = (_QWORD*)fw_memory_HeapManager_Allocate(*v12, 80, 16, 0);
    v20[2] = v17;
    *v20 = GameData_1fc2798;
    if (v16 != nullptr) {
      v21 = v20;
      if (v16 == f_.v65) {
        v20[8] = v20 + 4;
        (*(void (**)(_BYTE*))(*(_QWORD*)v16 + 24LL))(v16);
        v20 = v21;
      }
      else {
        v22 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v16 + 16LL))(v16);
        v20 = v21;
        v21[8] = v22;
      }
    }
    else {
      v20[8] = 0;
    }
    v23 = *v14;
    f_.v68 = v20;
    if (v23 != 0) {
      goto LABEL_13;
    }
    g3d_ResFile_prepareAsyncLoading((_QWORD*)v13, f_.v67);
    if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_131;
    }
    if (a2 >= 0x17) {
      if ((a2 | 7) == 0x17) {
        v26 = 26;
      }
      else {
        v26 = (a2 | 7) + 1;
      }
      v25 = (char*)fw_memory_HeapManager_Allocate(*v12, v26, 16, 0);
      f_.v79 = a2;
      f_.v80 = v25;
      f_.v78 = v26 | 1;
    }
    else {
      LOBYTE(f_.v78) = 2 * a2;
      v25 = (char*)&f_.v78 + 1;
      if (a2 == 0) {
        goto LABEL_29;
      }
    }
    GameRoutine_1a0b940_alt1((__int64)v25, a1, a2);
  LABEL_29:
    v25[a2] = 0;
    v27 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&f_.v78, ".bfres", 6u);
    v29 = v27[1];
    v28 = v27[2];
    f_.v81 = *v27;
    f_.v82 = v29;
    f_.v83 = (char*)v28;
    v27[1] = 0;
    v27[2] = 0;
    *v27 = 0;
    if ((f_.v78 & 1) != 0 && f_.v80 != nullptr) {
      v30 = 128;
      if (*(_QWORD*)(*v12 + 200) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*v12 + v30, (__int64)f_.v80);
    }
    v31 = game_g_frame_clock_ptr[0];
    if ((*(_BYTE*)v13 & 4) == 0) {
      goto LABEL_106;
    }
    if (a4 < 0xFFFFFFFFFFFFFFF7LL) {
      if (a4 >= 0x17) {
        if ((a4 | 7) == 0x17) {
          v33 = 26;
        }
        else {
          v33 = (a4 | 7) + 1;
        }
        f_.v77 = (char*)fw_memory_HeapManager_Allocate(*v12, v33, 16, 0);
        v34 = v33 | 1;
        v32 = f_.v77;
        v31 = game_g_frame_clock_ptr[0];
        f_.v75 = v34;
        f_.v76 = a4;
      }
      else {
        LOBYTE(f_.v75) = 2 * a4;
        v32 = (char*)&f_.v75 + 1;
        if (a4 == 0) {
          goto LABEL_44;
        }
      }
      GameRoutine_1a0b940_alt1((__int64)v32, a3, a4);
    LABEL_44:
      v32[a4] = 0;
      v35 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&f_.v75, ".matb", 5u);
      v37 = v35[1];
      v36 = v35[2];
      f_.v78 = *v35;
      f_.v79 = v37;
      f_.v80 = (char*)v36;
      v35[1] = 0;
      v35[2] = 0;
      *v35 = 0;
      if ((f_.v75 & 1) != 0 && f_.v77 != nullptr) {
        v38 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(*v12 + v38, (__int64)f_.v77);
      }
      if ((f_.v78 & 1) != 0) {
        v39 = f_.v79;
      }
      else {
        v39 = (unsigned __int64)(unsigned __int8)f_.v78 >> 1;
      }
      if ((f_.v78 & 1) != 0) {
        v40 = f_.v80;
      }
      else {
        v40 = (char*)&f_.v78 + 1;
      }
      if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
               **(_QWORD**)(*v31 + 13432) + 96LL))(*(_QWORD*)(*v31 + 13432),
                                                   v40, v39, 1) &
           1) != 0) {
        v41 = *(_QWORD*)(*v31 + 13432);
        if ((f_.v78 & 1) != 0) {
          v42 = f_.v80;
        }
        else {
          v42 = (char*)&f_.v78 + 1;
        }
        if ((f_.v78 & 1) != 0) {
          v43 = f_.v79;
        }
        else {
          v43 = (unsigned __int64)(unsigned __int8)f_.v78 >> 1;
        }
        v44 = *(_QWORD*)(v13 + 88);
        f_.v73 = *(_QWORD*)(v13 + 80);
        f_.v74 = v44;
        if (v44 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                                    memory_order_relaxed);
        }
        *(_QWORD*)(v13 + 24) = (*(
            __int64 (**)(__int64, char*, unsigned __int64, __int64*, __int64))(
            *(_QWORD*)v41 + 16LL))(v41, v42, v43, &f_.v73, 1);
        if (f_.v74 != 0) {
          std___1___shared_weak_count___release_weak_alt1(f_.v74);
        }
      }
      if ((f_.v78 & 1) != 0 && f_.v80 != nullptr) {
        v45 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free(*v12 + v45, (__int64)f_.v80);
      }
      if (a2 >= 0x17) {
        if ((a2 | 7) == 0x17) {
          v47 = 26;
        }
        else {
          v47 = (a2 | 7) + 1;
        }
        v46 = (char*)fw_memory_HeapManager_Allocate(*v12, v47, 16, 0);
        f_.v76 = a2;
        f_.v77 = v46;
        f_.v75 = v47 | 1;
      }
      else {
        LOBYTE(f_.v75) = 2 * a2;
        v46 = (char*)&f_.v75 + 1;
        if (a2 == 0) {
        LABEL_79:
          v46[a2] = 0;
          v48 =
              (__int64*)GameRoutine_1a09ce0_alt1((__int64)&f_.v75, ".matb", 5u);
          v50 = v48[1];
          v49 = v48[2];
          f_.v78 = *v48;
          f_.v79 = v50;
          f_.v80 = (char*)v49;
          v48[1] = 0;
          v48[2] = 0;
          *v48 = 0;
          if ((f_.v75 & 1) != 0 && f_.v77 != nullptr) {
            v51 = 128;
            if (*(_QWORD*)(*v12 + 200) == 0) {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free(*v12 + v51, (__int64)f_.v77);
          }
          if ((f_.v78 & 1) != 0) {
            v52 = f_.v79;
          }
          else {
            v52 = (unsigned __int64)(unsigned __int8)f_.v78 >> 1;
          }
          if ((f_.v78 & 1) != 0) {
            v53 = f_.v80;
          }
          else {
            v53 = (char*)&f_.v78 + 1;
          }
          if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
                   **(_QWORD**)(*v31 + 13432) + 96LL))(*(_QWORD*)(*v31 + 13432),
                                                       v53, v52, 1) &
               1) != 0) {
            v54 = *(_QWORD*)(*v31 + 13432);
            if ((f_.v78 & 1) != 0) {
              v55 = f_.v80;
            }
            else {
              v55 = (char*)&f_.v78 + 1;
            }
            if ((f_.v78 & 1) != 0) {
              v56 = f_.v79;
            }
            else {
              v56 = (unsigned __int64)(unsigned __int8)f_.v78 >> 1;
            }
            v57 = *(_QWORD*)(v13 + 88);
            f_.v71 = *(_QWORD*)(v13 + 80);
            f_.v72 = v57;
            if (v57 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 16), 1u,
                                        memory_order_relaxed);
            }
            *(_QWORD*)(v13 + 16) =
                (*(__int64 (**)(__int64, char*, unsigned __int64, __int64*,
                                __int64))(*(_QWORD*)v54 + 16LL))(v54, v55, v56,
                                                                 &f_.v71, 1);
            if (f_.v72 != 0) {
              std___1___shared_weak_count___release_weak_alt1(f_.v72);
            }
          }
          if ((f_.v78 & 1) != 0 && f_.v80 != nullptr) {
            v58 = 128;
            if (*(_QWORD*)(*v12 + 200) == 0) {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free(*v12 + v58, (__int64)f_.v80);
          }
        LABEL_106:
          v59 = *(_QWORD*)(*v31 + 13432);
          if ((f_.v81 & 1) != 0) {
            v60 = f_.v83;
          }
          else {
            v60 = (char*)&f_.v81 + 1;
          }
          if ((f_.v81 & 1) != 0) {
            v61 = f_.v82;
          }
          else {
            v61 = (unsigned __int64)(unsigned __int8)f_.v81 >> 1;
          }
          v62 = *(_QWORD*)(v13 + 88);
          f_.v69 = *(_QWORD*)(v13 + 80);
          f_.v70 = v62;
          if (v62 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 16), 1u,
                                      memory_order_relaxed);
          }
          *v14 = (*(__int64 (**)(__int64, char*, unsigned __int64, __int64*))(
              *(_QWORD*)v59 + 48LL))(v59, v60, v61, &f_.v69);
          if (f_.v70 != 0) {
            std___1___shared_weak_count___release_weak_alt1(f_.v70);
          }
          if ((*(_BYTE*)(v13 + 164) & 1) == 0 &&
              GameRoutine_ad7390_alt1((_QWORD*)v13)) {
            if (*(_QWORD*)(v13 + 16) != 0) {
              ResFile_ad7640_alt1((_QWORD*)v13);
              GameRoutine_ad8640_alt1(v13);
            }
            *(_BYTE*)(v13 + 164) = 1;
            v63 = atomic_load((unsigned int*)(v13 + 160));
            if (v63 == 0) {
              GameRoutine_ad8980(v13);
            }
          }
          if ((f_.v81 & 1) != 0 && f_.v83 != nullptr) {
            v64 = 128;
            if (*(_QWORD*)(*v12 + 200) == 0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free(*v12 + v64, (__int64)f_.v83);
          }
          v20 = f_.v68;
          if (f_.v68 == f_.v67) {
            v24 = 32;
            goto LABEL_14;
          }
          if (f_.v68 == nullptr) {
          LABEL_15:
            result = f_.v66;
            if (f_.v66 != f_.v65) {
              goto LABEL_16;
            }
          LABEL_5:
            v19 = 32;
            {
              (_QWORD*)(*(__int64 (**)(__int64))(*result + v19))(
                  (__int64)result);
              return;
            }
          }
        LABEL_13:
          v24 = 40;
        LABEL_14:
          (*(void (**)(__int64))(*v20 + v24))((__int64)v20);
          goto LABEL_15;
        }
      }
      GameRoutine_1a0b940_alt1((__int64)v46, a1, a2);
      goto LABEL_79;
    }
  LABEL_131:
    String_60a1d0_alt1();
  }
  f_.v68 = nullptr;
  GameRoutine_ad6d20_alt1(v13, a1, a2);
  result = nullptr;
  if (f_.v67 == nullptr) {
    goto LABEL_5;
  }
LABEL_16:
  if (result == nullptr) {
    result;
    return;
  }
  v19 = 40;
  {
    (_QWORD*)(*(__int64 (**)(__int64))(*result + v19))((__int64)result);
    return;
  }
}

#pragma GCC visibility pop
