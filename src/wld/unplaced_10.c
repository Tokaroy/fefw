#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_bd34c0(__int64, _QWORD*);
__int64* MaterialAnimModule_beb6c0(__int64*, __int64*, __int64*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameHr_14a1520(__int64*, char);
__int64 MaterialAnimModule_be6340(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
int memcmp(__int64, __int64, unsigned __int64);
void GameRoutine_be68a0(__int64);
void MaterialAnimModule_bea360(__int64);
void MaterialAnimModule_beaa40(__int64*, __int64, __int64, unsigned __int64);
void MaterialAnimModule_beb520(__int64**);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_bea7e0();
void __attribute__((noreturn)) GameRoutine_beb910();
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* wld_bd3660(_QWORD* result, __int64* a2);
void wld_be9640(__int64 a1, __int64 a2, unsigned __int64 a3,
                unsigned __int8* a4);

_QWORD* wld_bd3660(_QWORD* result, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v4 = (_QWORD*)result[3];
  v2 = (_QWORD*)result[4];
  v3 = (__int64)(result + 3);
  v5 = *a2;
  v6 = a2[1];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v4 != v2) {
    while (v4[1] != v5) {
      v4 += 16;
      if (v4 == v2) {
        v4 = v2;
        break;
      }
    }
  }
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v7 = result;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    result = v7;
  }
  if (v4 != (_QWORD*)result[4]) {
    v8 = v4[1];
    v9 = v4[2];
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      v11_.v12 = v9;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v11_.v12 = 0;
    }
    v11_.v11 = v8;
    GameHr_14a1520(&v11_.v11, 1);
    v10 = v11_.v12;
    if (v11_.v12 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v11_.v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    return GameRoutine_bd34c0(v3, v4);
  }
  return result;
}

void wld_be9640(__int64 a1, __int64 a2, unsigned __int64 a3,
                unsigned __int8* a4)
{
  unsigned __int64 v4;
  unsigned __int8* v5;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8 v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  bool v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v61;
  bool v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  bool v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  __int64* v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  __int64* v85;
  char* v86;
  char* v87;
  bool v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64* v92;
  __int64* v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  bool v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64* v103;
  __int64* v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64* v115;
  __int64* v116;
  __int64 v117;
  __int64* v118;
  __int64 v119;
  __int64 v120;
  __int64* v121;

  v5 = *(unsigned __int8**)(a1 + 24);
  v4 = *(_QWORD*)(a1 + 32);
  v10 = v5;
  if (v5 != (unsigned __int8*)v4) {
    while (1) {
      v11 = *v10;
      v12 = *((_QWORD*)v10 + 1);
      if ((v11 & 1) == 0) {
        v12 = v11 >> 1;
      }
      if (a3 == v12) {
        v13 = (v11 & 1) != 0 ? *((_QWORD*)v10 + 2) : (__int64)(v10 + 1);
        if (memcmp(a2, v13, a3) == 0) {
          break;
        }
      }
      v10 += 64;
      if (v10 == (unsigned __int8*)v4) {
        goto LABEL_16;
      }
    }
  }
  if (v10 == (unsigned __int8*)v4) {
  LABEL_16:
    v17 = *(_QWORD*)(a1 + 40);
    if (v4 >= v17) {
      v20 = v4 - (_QWORD)v5;
      v21 = (v20 >> 6) + 1;
      if (v21 >> 58 != 0) {
        GameRoutine_beb910();
      }
      v22 = v17 - (_QWORD)v5;
      v23 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v22 >> 5 > v21) {
        v21 = v22 >> 5;
      }
      if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFC0LL) {
        v24 = 0x3FFFFFFFFFFFFFFLL;
      }
      else {
        v24 = v21;
      }
      if (v24 != 0) {
        if (v24 >> 58 != 0) {
          GameRoutine_60a210();
        }
        v25 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v24 << 6, 16, 0);
      }
      else {
        v25 = 0;
      }
      v34 = v25 + v20;
      if ((*a4 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)v34, *((_QWORD*)a4 + 2),
                                      *((_QWORD*)a4 + 1));
      }
      else {
        v35 = *((_QWORD*)a4 + 1);
        *(_QWORD*)v34 = *(_QWORD*)a4;
        *(_QWORD*)(v34 + 8) = v35;
        *(_QWORD*)(v34 + 16) = *((_QWORD*)a4 + 2);
      }
      v36 = *((_QWORD*)a4 + 3);
      *(_QWORD*)(v34 + 40) = 0;
      *(_QWORD*)(v34 + 48) = 0;
      *(_QWORD*)(v34 + 56) = 0;
      *(_QWORD*)(v34 + 24) = v36;
      LOBYTE(v36) = a4[32];
      v38 = *((__int64**)a4 + 5);
      v37 = *((__int64**)a4 + 6);
      v39 = (char*)v37 - (char*)v38;
      *(_BYTE*)(v34 + 32) = v36;
      if (v37 != v38) {
        if (0xAAAAAAAAAAAAAAABLL * (v39 >> 4) > 0x555555555555555LL) {
          goto LABEL_158;
        }
        v40 = (__int64*)fw_memory_HeapManager_Allocate(
            *v23, (char*)v37 - (char*)v38, 16, 0);
        *(_QWORD*)(v34 + 40) = v40;
        *(_QWORD*)(v34 + 48) = v40;
        *(_QWORD*)(v34 + 56) = (char*)v40 + v39;
        *(_QWORD*)(v34 + 48) = MaterialAnimModule_beb6c0(v38, v37, v40);
      }
      v41 = v25 + (v24 << 6);
      v42 = *(_QWORD*)(a1 + 24);
      v43 = *(__int64**)(a1 + 32);
      v32 = v34 + 64;
      v44 = v34 + v42 - (_QWORD)v43;
      if (v43 != (__int64*)v42) {
        v45 = *(__int64**)(a1 + 24);
        v46 = v44;
        do {
          v47 = *v45;
          v48 = v45[2];
          *(_QWORD*)(v46 + 8) = v45[1];
          *(_QWORD*)(v46 + 16) = v48;
          *(_QWORD*)v46 = v47;
          v45[1] = 0;
          v45[2] = 0;
          *v45 = 0;
          v49 = v45[3];
          v50 = *((_BYTE*)v45 + 32);
          *(_QWORD*)(v46 + 40) = 0;
          *(_QWORD*)(v46 + 48) = 0;
          *(_QWORD*)(v46 + 56) = 0;
          *(_BYTE*)(v46 + 32) = v50;
          *(_QWORD*)(v46 + 24) = v49;
          *(_QWORD*)(v46 + 40) = v45[5];
          *(_QWORD*)(v46 + 48) = v45[6];
          *(_QWORD*)(v46 + 56) = v45[7];
          v45[6] = 0;
          v45[7] = 0;
          v45[5] = 0;
          v45 += 8;
          v46 += 64;
        } while (v45 != v43);
        do {
          MaterialAnimModule_bea360(v42);
          v42 += 64;
        } while ((__int64*)v42 != v43);
        v42 = *(_QWORD*)(a1 + 24);
      }
      *(_QWORD*)(a1 + 24) = v44;
      *(_QWORD*)(a1 + 32) = v32;
      *(_QWORD*)(a1 + 40) = v41;
      if (v42 != 0) {
        v51 = 128;
        if (*(_QWORD*)(*v23 + 200) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free(*v23 + v51, v42);
      }
    }
    else {
      if ((*a4 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)v4, *((_QWORD*)a4 + 2),
                                      *((_QWORD*)a4 + 1));
      }
      else {
        v18 = *(_QWORD*)a4;
        v19 = *((_QWORD*)a4 + 2);
        *(_QWORD*)(v4 + 8) = *((_QWORD*)a4 + 1);
        *(_QWORD*)(v4 + 16) = v19;
        *(_QWORD*)v4 = v18;
      }
      v26 = *((_QWORD*)a4 + 3);
      v27 = a4[32];
      *(_QWORD*)(v4 + 40) = 0;
      *(_QWORD*)(v4 + 48) = 0;
      *(_QWORD*)(v4 + 56) = 0;
      *(_BYTE*)(v4 + 32) = v27;
      *(_QWORD*)(v4 + 24) = v26;
      v28 = *((__int64**)a4 + 5);
      v29 = *((__int64**)a4 + 6);
      v30 = (char*)v29 - (char*)v28;
      if (v29 != v28) {
        if (0xAAAAAAAAAAAAAAABLL * (v30 >> 4) > 0x555555555555555LL) {
          goto LABEL_158;
        }
        v31 = (__int64*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, (char*)v29 - (char*)v28, 16,
            0);
        *(_QWORD*)(v4 + 40) = v31;
        *(_QWORD*)(v4 + 48) = v31;
        *(_QWORD*)(v4 + 56) = (char*)v31 + v30;
        *(_QWORD*)(v4 + 48) = MaterialAnimModule_beb6c0(v28, v29, v31);
      }
      v32 = v4 + 64;
    }
    v52 = *(unsigned __int8*)(a1 + 48);
    v54 = *(_QWORD*)(a1 + 56);
    v53 = *(_QWORD*)(a1 + 64);
    v55 = (v52 & 1) == 0;
    v56 = v52 >> 1;
    *(_QWORD*)(a1 + 32) = v32;
    if (v55) {
      v57 = v56;
    }
    else {
      v57 = v54;
    }
    if (v55) {
      v58 = a1 + 49;
    }
    else {
      v58 = v53;
    }
    if (v57 >= a3) {
      v59 = a3;
    }
    else {
      v59 = v57;
    }
    if (memcmp(a2, v58, v59) == 0 & a3 == v57) {
      MaterialAnimModule_be6340(a1);
    }
    else {
      v61 = *(unsigned __int8*)(a1 + 80);
      v62 = (v61 & 1) == 0;
      v63 = v61 >> 1;
      if (v62) {
        v64 = v63;
      }
      else {
        v64 = *(_QWORD*)(a1 + 88);
      }
      if (v62) {
        v65 = a1 + 81;
      }
      else {
        v65 = *(_QWORD*)(a1 + 96);
      }
      if (v64 >= a3) {
        v66 = a3;
      }
      else {
        v66 = v64;
      }
      if (memcmp(a2, v65, v66) == 0 & a3 == v64) {
        GameRoutine_be68a0(a1);
      }
    }
  }
  else {
    if (v10 == a4) {
      v33 = *((_QWORD*)a4 + 3);
      v10[32] = a4[32];
      *((_QWORD*)v10 + 3) = v33;
      return;
    }
    v14 = *a4;
    if ((*v10 & 1) != 0) {
      v68 = (v14 & 1) == 0;
      v69 = v14 >> 1;
      if (v68) {
        v70 = (__int64)(a4 + 1);
      }
      else {
        v70 = *((_QWORD*)a4 + 2);
      }
      if (v68) {
        v71 = v69;
      }
      else {
        v71 = *((_QWORD*)a4 + 1);
      }
      SpineModel_64dde0((__int64*)v10, v70, v71);
    }
    else if ((v14 & 1) != 0) {
      GameRoutine_64df20(v10, *((_QWORD*)a4 + 2), *((_QWORD*)a4 + 1));
    }
    else {
      v15 = *(_QWORD*)a4;
      v16 = *((_QWORD*)a4 + 2);
      *((_QWORD*)v10 + 1) = *((_QWORD*)a4 + 1);
      *((_QWORD*)v10 + 2) = v16;
      *(_QWORD*)v10 = v15;
    }
    v72 = *((_QWORD*)a4 + 3);
    v73 = *((_QWORD*)v10 + 5);
    v10[32] = a4[32];
    *((_QWORD*)v10 + 3) = v72;
    v74 = *((_QWORD*)v10 + 7);
    v76 = *((__int64**)a4 + 5);
    v75 = *((__int64**)a4 + 6);
    v77 = (char*)v75 - (char*)v76;
    if ((char*)v75 - (char*)v76 > (unsigned __int64)(v74 - v73)) {
      v78 = 0xAAAAAAAAAAAAAAABLL * (v77 >> 4);
      if (v73 != 0) {
        v79 = *((_QWORD*)v10 + 6);
        if (v73 == v79) {
          goto LABEL_132;
        }
        v80 = (__int64*)(v79 - 24);
        v81 = fw_memory_g_heap_manager_ptr;
        do {
          v121 = v80;
          MaterialAnimModule_beb520(&v121);
          if ((*(_BYTE*)(v80 - 3) & 1) != 0) {
            v83 = *(v80 - 1);
            if (v83 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v81 + 200LL) != 0) {
                v84 = 128;
              }
              else {
                v84 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v81 + v84, v83);
            }
          }
          v82 = v80 - 3;
          v80 -= 6;
        } while (v82 != (__int64*)v73);
        v109 = *((_QWORD*)v10 + 5);
        *((_QWORD*)v10 + 6) = v73;
        v73 = v109;
        if (v109 != 0) {
        LABEL_132:
          v110 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v110 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v110, v73);
        }
        v74 = 0;
        *((_QWORD*)v10 + 6) = 0;
        *((_QWORD*)v10 + 7) = 0;
        *((_QWORD*)v10 + 5) = 0;
      }
      if (v78 <= 0x555555555555555LL) {
        v111 = 0xAAAAAAAAAAAAAAABLL * (v74 >> 4);
        v112 = 2 * v111;
        if (2 * v111 <= v78) {
          v112 = v78;
        }
        v113 = v111 >= 0x2AAAAAAAAAAAAAALL ? 0x555555555555555LL : v112;
        if (v113 <= 0x555555555555555LL) {
          v114 = 3 * v113;
          v115 = (__int64*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v113, 16, 0);
          *((_QWORD*)v10 + 5) = v115;
          *((_QWORD*)v10 + 6) = v115;
          *((_QWORD*)v10 + 7) = &v115[2 * v114];
          *((_QWORD*)v10 + 6) = MaterialAnimModule_beb6c0(v76, v75, v115);
          return;
        }
      }
    LABEL_158:
      GameRoutine_bea7e0();
    }
    v85 = *((__int64**)v10 + 6);
    v86 = (char*)v85 - v73;
    if (v77 <= (unsigned __int64)v85 - v73) {
      if (v76 != v75) {
        v98 = 0;
        do {
          if (v76 != (__int64*)v73) {
            v103 = (__int64*)(v73 + v98 * 8);
            v104 = &v76[v98];
            v105 = LOBYTE(v76[v98]);
            if ((*(_BYTE*)(v73 + v98 * 8) & 1) != 0) {
              v99 = (v105 & 1) == 0;
              v100 = v105 >> 1;
              if (v99) {
                v101 = (__int64)&v76[v98] + 1;
              }
              else {
                v101 = v76[v98 + 2];
              }
              if (v99) {
                v102 = v100;
              }
              else {
                v102 = v76[v98 + 1];
              }
              SpineModel_64dde0(v103, v101, v102);
            }
            else if ((v105 & 1) != 0) {
              GameRoutine_64df20(v103, v76[v98 + 2], v76[v98 + 1]);
            }
            else {
              v106 = *v104;
              v107 = v104[1];
              v108 = v104[2];
              v103[1] = v107;
              v103[2] = v108;
              *v103 = v106;
            }
            MaterialAnimModule_beaa40((__int64*)(v73 + v98 * 8 + 24),
                                      v76[v98 + 3], v76[v98 + 4],
                                      (v76[v98 + 4] - v76[v98 + 3]) >> 6);
          }
          v98 += 6;
        } while (&v76[v98] != v75);
        v85 = *((__int64**)v10 + 6);
        v73 += v98 * 8;
      }
      if ((__int64*)v73 != v85) {
        v116 = v85 - 3;
        v117 = fw_memory_g_heap_manager_ptr;
        do {
          v121 = v116;
          MaterialAnimModule_beb520(&v121);
          if ((*(_BYTE*)(v116 - 3) & 1) != 0) {
            v119 = *(v116 - 1);
            if (v119 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v117 + 200LL) != 0) {
                v120 = 128;
              }
              else {
                v120 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v117 + v120, v119);
            }
          }
          v118 = v116 - 3;
          v116 -= 6;
        } while (v118 != (__int64*)v73);
      }
      *((_QWORD*)v10 + 6) = v73;
    }
    else {
      if (v85 != (__int64*)v73) {
        v87 = nullptr;
        do {
          if (v76 != (__int64*)v73) {
            v92 = (__int64*)&v87[v73];
            v93 = (__int64*)&v87[(_QWORD)v76];
            v94 = (unsigned __int8)v87[(_QWORD)v76];
            if ((v87[v73] & 1) != 0) {
              v88 = (v94 & 1) == 0;
              v89 = v94 >> 1;
              if (v88) {
                v90 = (__int64)&v87[(_QWORD)v76 + 1];
              }
              else {
                v90 = *(_QWORD*)&v87[(_QWORD)v76 + 16];
              }
              if (v88) {
                v91 = v89;
              }
              else {
                v91 = *(_QWORD*)&v87[(_QWORD)v76 + 8];
              }
              SpineModel_64dde0(v92, v90, v91);
            }
            else if ((v94 & 1) != 0) {
              GameRoutine_64df20(v92, *(_QWORD*)&v87[(_QWORD)v76 + 16],
                                 *(_QWORD*)&v87[(_QWORD)v76 + 8]);
            }
            else {
              v95 = *v93;
              v96 = v93[1];
              v97 = v93[2];
              v92[1] = v96;
              v92[2] = v97;
              *v92 = v95;
            }
            MaterialAnimModule_beaa40(
                (__int64*)&v87[v73 + 24], *(_QWORD*)&v87[(_QWORD)v76 + 24],
                *(_QWORD*)&v87[(_QWORD)v76 + 32],
                (__int64)(*(_QWORD*)&v87[(_QWORD)v76 + 32] -
                          *(_QWORD*)&v87[(_QWORD)v76 + 24]) >>
                    6);
          }
          v87 += 48;
        } while (v86 != v87);
        v85 = *((__int64**)v10 + 6);
      }
      *((_QWORD*)v10 + 6) =
          MaterialAnimModule_beb6c0((__int64*)&v86[(_QWORD)v76], v75, v85);
    }
  }
}

#pragma GCC visibility pop
