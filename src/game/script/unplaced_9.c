#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdbtlPartyNatives_e73d00(__int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_Unit_GetParam(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 GameData_21f4cc0;
extern __int64 fw_memory_g_heap_manager_ptr;
void CmdBtlParty_e734e0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_e77e10();
void game_script_e73e20(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_script_e74040(__int64 a1, _QWORD* a2);

void game_script_e74040(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  signed __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BOOL4 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BOOL4 v37;
  int v38;
  int v39;
  char v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  int v50;
  __int64 v51;

  v2 = *(_QWORD**)(a1 + 48);
  v3 = *(_QWORD*)(a1 + 56);
  if ((unsigned __int64)v2 >= v3) {
    v8 = *(_QWORD*)(a1 + 40);
    v9 = (signed __int64)v2 - v8;
    v10 = ((__int64)v2 - v8) >> 4;
    v11 = v10 + 1;
    if ((unsigned __int64)(v10 + 1) >> 60 != 0) {
      GameRoutine_e77e10();
    }
    v12 = v3 - v8;
    if (v12 >> 3 > v11) {
      v11 = v12 >> 3;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
      v13 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v11;
    }
    if (v13 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v13, 16, 0);
    v16 = a2[1];
    v17 = (_QWORD*)(v15 + v9);
    v18 = v15 + 16 * v13;
    *v17 = *a2;
    v17[1] = v16;
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
      v8 = *(_QWORD*)(a1 + 40);
      v9 = *(_QWORD*)(a1 + 48) - v8;
      v10 = v9 >> 4;
    }
    v19 = (__int64)&v17[-2 * v10];
    v7 = v17 + 2;
    GameRoutine_1a0b950(v19, v8, v9);
    *(_QWORD*)(a1 + 40) = v19;
    *(_QWORD*)(a1 + 48) = v7;
    *(_QWORD*)(a1 + 56) = v18;
    if (v8 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20, v8);
    }
  }
  else {
    *v2 = *a2;
    v6 = a2[1];
    v2[1] = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v2 + 2;
  }
  v21 = *(_QWORD**)(a1 + 40);
  *(_QWORD*)(a1 + 48) = v7;
  if (v21 != v7) {
    v22 = 0;
    while (1) {
      v24 = *v21;
      v25 = *(_QWORD*)(*v21 + 320LL);
      if (v25 != 0) {
        v26 = std___1___shared_weak_count_lock(v25);
        if (v26 != 0) {
          v27 = *(_QWORD*)(v24 + 312);
          v28 = v27 == 0 || (*(_BYTE*)(*(_QWORD*)v27 + 76LL) & 8) == 0;
          if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (!v28) {
              goto LABEL_31;
            }
          }
          else {
            v29 = v26;
            (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
            std___1___shared_weak_count___release_weak(v29);
            if (!v28) {
            LABEL_31:
              v23 = 0;
              goto LABEL_21;
            }
          }
        }
      }
      v23 = game_Unit_GetParam(*(_QWORD*)(v24 + 16));
    LABEL_21:
      v22 += v23;
      v21 += 2;
      if (v21 == v7) {
        goto LABEL_33;
      }
    }
  }
  v22 = 0;
LABEL_33:
  if (v22 <= 1) {
    v30 = 1;
  }
  else {
    v30 = v22;
  }
  v31 = *(_DWORD*)(a1 + 12);
  v32 = *(int*)(a1 + 20) + v30;
  if (v32 <= 1) {
    v32 = 1;
  }
  if (v32 >= (unsigned int)v31) {
    v32 = *(_DWORD*)(a1 + 12);
  }
  if (v31 < 0) {
    v32 = 0;
  }
  *(_DWORD*)(a1 + 12) = v32;
  *(_DWORD*)(a1 + 16) = v30;
  if (v32 != v31) {
    CmdBtlParty_e734e0(a1);
    v31 = *(_DWORD*)(a1 + 12);
  }
  v33 = *a2;
  v34 = *(_QWORD*)(*a2 + 320LL);
  if (v34 == 0) {
    goto LABEL_51;
  }
  v35 = std___1___shared_weak_count_lock(v34);
  if (v35 == 0) {
    goto LABEL_51;
  }
  v36 = *(_QWORD*)(v33 + 312);
  v37 = v36 == 0 || (*(_BYTE*)(*(_QWORD*)v36 + 76LL) & 8) == 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v37) {
    LABEL_51:
      v38 = *(__int16*)(*(_QWORD*)(v33 + 16) + 492LL);
      goto LABEL_52;
    }
  }
  else {
    v51 = v35;
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
    std___1___shared_weak_count___release_weak(v51);
    if (v37) {
      goto LABEL_51;
    }
  }
  v38 = 0;
LABEL_52:
  v39 = v38 + v31;
  v40 = CmdbtlPartyNatives_e73d00(a1);
  v41 = *(int*)(a1 + 20) + *(int*)(a1 + 16);
  v42 = *(_DWORD*)(a1 + 12);
  if (v41 <= 1) {
    v41 = 1;
  }
  v43 = v40 & 1 | (*(_DWORD*)(a1 + 36) == 1);
  if (v41 >= v39) {
    v44 = v39;
  }
  else {
    v44 = v41;
  }
  if (v39 >= v43) {
    v43 = v44;
  }
  if (v41 >= (unsigned int)v43) {
    v41 = v43;
  }
  if (v43 >= 0) {
    v45 = v41;
  }
  else {
    v45 = 0;
  }
  *(_DWORD*)(a1 + 12) = v45;
  if (v45 != v42) {
    CmdBtlParty_e734e0(a1);
  }
  v46 = *(_QWORD*)(*a2 + 16LL);
  v47 = *(unsigned __int8*)(v46 + 497);
  v48 = *(unsigned __int8*)(v46 + 496);
  if ((signed __int32)*(_DWORD*)(a1 + 28) < (signed int)v47) {
    if (GameData_21f4cc0 != 0 && (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0) {
      v49 = 0;
    }
    else if (*(_DWORD*)(a1 + 8) == 1) {
      v49 = 3;
    }
    else {
      v49 = 0;
    }
    if (v49 < v47) {
      v47 = v49;
    }
    *(_DWORD*)(a1 + 28) = v47;
    game_script_e73e20(a1);
  }
  if ((signed __int32)*(_DWORD*)(a1 + 24) < v48) {
    v50 = *(_DWORD*)(a1 + 28);
    if (v50 >= v48) {
      v50 = v48;
    }
    *(_DWORD*)(a1 + 24) = v50;
    game_script_e73e20(a1);
  }
  game_script_e73e20(a1);
}

#pragma GCC visibility pop
