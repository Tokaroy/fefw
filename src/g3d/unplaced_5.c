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
    _BYTE v49[32];
    _BYTE* v50;
  } v49_;
  struct {
    _BYTE v51[32];
    _BYTE* v52;
  } v51_;
  _QWORD v53[4];

  if (*(_QWORD*)(a1 + 664) == *(_QWORD*)(a1 + 656)) {
    *(_QWORD*)(*(_QWORD*)(a1 + 280) + 88LL) = *(_QWORD*)(a1 + 648);
  }
  {
    v5 = *(_BYTE**)(a3 + 32);
    __asm__ volatile("" ::"r"(v5));
  }
  v49_.v50 = nullptr;
  HIDWORD(v47) = a4;
  if (v5 == nullptr) {
    v6 = nullptr;
  LABEL_10:
    v51_.v52 = v5;
    v49_.v50 = v6;
    goto LABEL_11;
  }
  if (v5 == (_BYTE*)a3) {
    v51_.v52 = v51_.v51;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v51_.v51);
    v6 = v51_.v52;
    v5 = v49_.v50;
  }
  else {
    v6 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5);
    v5 = nullptr;
    v51_.v52 = v6;
  }
  if (v6 != v51_.v51) {
    if (v5 == v49_.v49) {
      (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v51_.v51);
      (*(void (**)(_BYTE*))(*(_QWORD*)v49_.v50 + 32LL))(v49_.v50);
      v8 = v51_.v52;
      v51_.v52 = v51_.v51;
      v5 = v51_.v51;
      v49_.v50 = v8;
      goto LABEL_17;
    }
    goto LABEL_10;
  }
  if (v5 == v49_.v49) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*, _QWORD*))(
        *(_QWORD*)v6 + 24LL))((void*)(v6), v6, v53);
    (*(void (**)(_BYTE*))(*(_QWORD*)v51_.v52 + 32LL))(v51_.v52);
    v51_.v52 = nullptr;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v49_.v50 + 24LL))(v49_.v50,
                                                              v51_.v51);
    (*(void (**)(_BYTE*))(*(_QWORD*)v49_.v50 + 32LL))(v49_.v50);
    v49_.v50 = nullptr;
    v51_.v52 = v51_.v51;
    (*(void (**)(_QWORD*, _BYTE*))(v53[0] + 24LL))(v53, v49_.v49);
    (*(void (**)(_QWORD*))(v53[0] + 32LL))(v53);
    v5 = v51_.v52;
    v49_.v50 = v49_.v49;
  }
  else {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*, _BYTE*))(
        *(_QWORD*)v6 + 24LL))((void*)(v6), v6, v49_.v49);
    (*(void (**)(_BYTE*))(*(_QWORD*)v51_.v52 + 32LL))(v51_.v52);
    v5 = v49_.v50;
    v49_.v50 = v49_.v49;
    v51_.v52 = v5;
  }
LABEL_11:
  if (v5 == v51_.v51) {
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
    if (v49_.v50 != nullptr) {
      if (v49_.v50 == v49_.v49) {
        *(_QWORD*)(v9 + 48) = v9 + 16;
        (*(void (**)(_BYTE*))(*(_QWORD*)v49_.v50 + 24LL))(v49_.v50);
      }
      else {
        *(_QWORD*)(v9 + 48) = (*(__int64 (**)(__int64))(
            *(_QWORD*)v49_.v50 + 16LL))((__int64)v49_.v50);
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
  v23 = v49_.v50;
  *(_QWORD*)v21 = v47;
  *(_DWORD*)(v21 + 8) = a2;
  if (v23 != nullptr) {
    if (v23 == v49_.v49) {
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
  v44 = v49_.v50;
  *(_BYTE*)(a1 + 504) = 1;
  ++*(_DWORD*)(a1 + 640);
  if (v44 == v49_.v49) {
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
  _QWORD* v12;
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
  __int64* v25;
  char* v26;
  __int64 v27;
  long double v28;
  char* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  long double v37;
  char* v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  long double v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  __int64* v51;
  long double v52;
  char* v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  char* v57;
  long double v58;
  __int64 v59;
  char* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  char* v65;
  unsigned __int64 v66;
  __int64 v67;
  long double v68;
  unsigned int v69;
  __int64 v70;
  _BYTE v71[32];
  _BYTE* v72;
  _QWORD v73[4];
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  char* v86;
  __int64 v87;
  unsigned __int64 v88;
  char* v89;

  v12 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v13 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
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
      v72 = v71;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v15 + 24LL))(v15, v71);
      v17 = v13;
      v16 = v72;
    }
    else {
      v16 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      v72 = v16;
      v17 = v13;
    }
    v20 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v12, 80, 16, 0);
    v20[2] = v17;
    *v20 = GameData_1fc2798;
    if (v16 != nullptr) {
      v21 = v20;
      if (v16 == v71) {
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
    v74 = v20;
    if (v23 != 0) {
      goto LABEL_13;
    }
    v25 = g3d_ResFile_prepareAsyncLoading((_QWORD*)v13, v73);
    if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_131;
    }
    if (a2 >= 0x17) {
      if ((a2 | 7) == 0x17) {
        v27 = 26;
      }
      else {
        v27 = (a2 | 7) + 1;
      }
      v26 = (char*)fw_memory_HeapManager_Allocate_alt1(*v12, v27, 16, 0);
      v85 = a2;
      v86 = v26;
      v84 = v27 | 1;
    }
    else {
      LOBYTE(v84) = 2 * a2;
      v26 = (char*)&v84 + 1;
      if (a2 == 0) {
        goto LABEL_29;
      }
    }
    GameRoutine_1a0b940(v26, a1, a2);
  LABEL_29:
    v26[a2] = 0;
    v25 = (__int64*)GameRoutine_1a09ce0(&v84, ".bfres", 6);
    v30 = v25[1];
    v29 = (char*)v25[2];
    v87 = *v25;
    v88 = v30;
    v89 = v29;
    v25[1] = 0;
    v25[2] = 0;
    *v25 = 0;
    if ((v84 & 1) != 0 && v86 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*v12 + 200LL) == 0) {
        v31 = 56;
      }
      v25 = (__int64*)nn_mem_StandardAllocator_Free_alt1(*v12 + v31, v28);
    }
    v32 = game_g_frame_clock_ptr[0];
    if ((*(_BYTE*)v13 & 4) == 0) {
      goto LABEL_106;
    }
    if (a4 < 0xFFFFFFFFFFFFFFF7LL) {
      if (a4 >= 0x17) {
        if ((a4 | 7) == 0x17) {
          v34 = 26;
        }
        else {
          v34 = (a4 | 7) + 1;
        }
        v83 = fw_memory_HeapManager_Allocate_alt1(*v12, v34, 16, 0);
        v35 = v34 | 1;
        v33 = (char*)v83;
        v32 = game_g_frame_clock_ptr[0];
        v81 = v35;
        v82 = a4;
      }
      else {
        LOBYTE(v81) = 2 * a4;
        v33 = (char*)&v81 + 1;
        if (a4 == 0) {
          goto LABEL_44;
        }
      }
      GameRoutine_1a0b940(v33, a3, a4);
    LABEL_44:
      v33[a4] = 0;
      v36 = (__int64*)GameRoutine_1a09ce0(&v81, ".matb", 5);
      v39 = v36[1];
      v38 = (char*)v36[2];
      v84 = *v36;
      v85 = v39;
      v86 = v38;
      v36[1] = 0;
      v36[2] = 0;
      *v36 = 0;
      if ((v81 & 1) != 0 && v83 != 0) {
        v40 = 128;
        if (*(_QWORD*)(*v12 + 200LL) == 0) {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v40, v37);
      }
      if ((v84 & 1) != 0) {
        v41 = v85;
      }
      else {
        v41 = (unsigned __int64)(unsigned __int8)v84 >> 1;
      }
      if ((v84 & 1) != 0) {
        v42 = v86;
      }
      else {
        v42 = (char*)&v84 + 1;
      }
      if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
               **(_QWORD**)(*v32 + 13432) + 96LL))(*(_QWORD*)(*v32 + 13432),
                                                   v42, v41, 1) &
           1) != 0) {
        v44 = *(_QWORD*)(*v32 + 13432);
        if ((v84 & 1) != 0) {
          v45 = v86;
        }
        else {
          v45 = (char*)&v84 + 1;
        }
        if ((v84 & 1) != 0) {
          v46 = v85;
        }
        else {
          v46 = (unsigned __int64)(unsigned __int8)v84 >> 1;
        }
        v47 = *(_QWORD*)(v13 + 88);
        v79 = *(_QWORD*)(v13 + 80);
        v80 = v47;
        if (v47 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 16), 1u,
                                    memory_order_relaxed);
        }
        *(_QWORD*)(v13 + 24) = (*(
            __int64 (**)(__int64, char*, unsigned __int64, __int64*, __int64))(
            *(_QWORD*)v44 + 16LL))(v44, v45, v46, &v79, 1);
        if (v80 != 0) {
          std___1___shared_weak_count___release_weak(v80);
        }
      }
      if ((v84 & 1) != 0 && v86 != nullptr) {
        v48 = 128;
        if (*(_QWORD*)(*v12 + 200LL) == 0) {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v48, v43);
      }
      if (a2 >= 0x17) {
        if ((a2 | 7) == 0x17) {
          v50 = 26;
        }
        else {
          v50 = (a2 | 7) + 1;
        }
        v49 = (char*)fw_memory_HeapManager_Allocate_alt1(*v12, v50, 16, 0);
        v82 = a2;
        v83 = (__int64)v49;
        v81 = v50 | 1;
      }
      else {
        LOBYTE(v81) = 2 * a2;
        v49 = (char*)&v81 + 1;
        if (a2 == 0) {
        LABEL_79:
          v49[a2] = 0;
          v51 = (__int64*)GameRoutine_1a09ce0(&v81, ".matb", 5);
          v54 = v51[1];
          v53 = (char*)v51[2];
          v84 = *v51;
          v85 = v54;
          v86 = v53;
          v51[1] = 0;
          v51[2] = 0;
          *v51 = 0;
          if ((v81 & 1) != 0 && v83 != 0) {
            v55 = 128;
            if (*(_QWORD*)(*v12 + 200LL) == 0) {
              v55 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v12 + v55, v52);
          }
          if ((v84 & 1) != 0) {
            v56 = v85;
          }
          else {
            v56 = (unsigned __int64)(unsigned __int8)v84 >> 1;
          }
          if ((v84 & 1) != 0) {
            v57 = v86;
          }
          else {
            v57 = (char*)&v84 + 1;
          }
          if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
                   **(_QWORD**)(*v32 + 13432) + 96LL))(*(_QWORD*)(*v32 + 13432),
                                                       v57, v56, 1) &
               1) != 0) {
            v59 = *(_QWORD*)(*v32 + 13432);
            if ((v84 & 1) != 0) {
              v60 = v86;
            }
            else {
              v60 = (char*)&v84 + 1;
            }
            if ((v84 & 1) != 0) {
              v61 = v85;
            }
            else {
              v61 = (unsigned __int64)(unsigned __int8)v84 >> 1;
            }
            v62 = *(_QWORD*)(v13 + 88);
            v77 = *(_QWORD*)(v13 + 80);
            v78 = v62;
            if (v62 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 16), 1u,
                                        memory_order_relaxed);
            }
            *(_QWORD*)(v13 + 16) =
                (*(__int64 (**)(__int64, char*, unsigned __int64, __int64*,
                                __int64))(*(_QWORD*)v59 + 16LL))(v59, v60, v61,
                                                                 &v77, 1);
            if (v78 != 0) {
              std___1___shared_weak_count___release_weak(v78);
            }
          }
          if ((v84 & 1) != 0 && v86 != nullptr) {
            v63 = 128;
            if (*(_QWORD*)(*v12 + 200LL) == 0) {
              v63 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v12 + v63, v58);
          }
        LABEL_106:
          v64 = *(_QWORD*)(*v32 + 13432);
          if ((v87 & 1) != 0) {
            v65 = v89;
          }
          else {
            v65 = (char*)&v87 + 1;
          }
          if ((v87 & 1) != 0) {
            v66 = v88;
          }
          else {
            v66 = (unsigned __int64)(unsigned __int8)v87 >> 1;
          }
          v67 = *(_QWORD*)(v13 + 88);
          v75 = *(_QWORD*)(v13 + 80);
          v76 = v67;
          if (v67 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 16), 1u,
                                      memory_order_relaxed);
          }
          *v14 = (*(__int64 (**)(__int64, char*, unsigned __int64, __int64*))(
              *(_QWORD*)v64 + 48LL))(v64, v65, v66, &v75);
          if (v76 != 0) {
            std___1___shared_weak_count___release_weak(v76);
          }
          if ((*(_BYTE*)(v13 + 164) & 1) == 0 &&
              (GameRoutine_ad7390(v13) & 1) != 0) {
            if (*(_QWORD*)(v13 + 16) != 0) {
              ResFile_ad7640((_QWORD*)v13);
              GameRoutine_ad8640(v13);
            }
            *(_BYTE*)(v13 + 164) = 1;
            v69 = atomic_load((unsigned int*)(v13 + 160));
            if (v69 == 0) {
              GameRoutine_ad8980(v13);
            }
          }
          if ((v87 & 1) != 0 && v89 != nullptr) {
            v70 = 128;
            if (*(_QWORD*)(*v12 + 200LL) == 0) {
              v70 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v12 + v70, v68);
          }
          v20 = v74;
          if (v74 == v73) {
            v24 = 32;
            goto LABEL_14;
          }
          if (v74 == nullptr) {
          LABEL_15:
            result = v72;
            if (v72 != v71) {
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
      GameRoutine_1a0b940(v49, a1, a2);
      goto LABEL_79;
    }
  LABEL_131:
    String_60a1d0(v25);
  }
  v74 = nullptr;
  GameRoutine_ad6d20(v13, a1, a2, v73);
  result = v74;
  if (v74 == v73) {
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
