#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8,
                                                     __int64* result);
__attribute__((swiftcall)) void Manager_628460(PSEUDO_X8, __int64, const char*,
                                               char, char);
__attribute__((swiftcall)) void game_103b760(PSEUDO_X8, unsigned __int8*,
                                             unsigned __int8*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a8e0(__int64, unsigned __int64, unsigned __int64,
                            const char*, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_6298c0(__int64, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool GameRoutine_eef920(_QWORD*, const char*, __int64, int);
extern _DWORD* GameData_212ef28;
extern _QWORD as_g_context_slots[16384];
extern _UNKNOWN GameData_1abcbcf;
extern __int64 (*GameData_1fdee80[])();
extern __int64* GameData_212ef30[3];
extern __int64* GameData_212f7f8[3];
extern __int64* as_g_script_manager_ptr;
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
void Manager_d9d980(_QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_d9d8b0();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a230();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_hub_d99480(_QWORD* a1, char* a2, char a3);
__attribute__((swiftcall)) void game_hub_103a620(PSEUDO_X8 x8_, __int64 a1);

void game_hub_d99480(_QWORD* a1, char* a2, char a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  char v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  _QWORD* v21;
  atomic_ullong* v22;
  __int64 v23;
  __int64* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  char v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  struct {
    char gap0_[8];
    __int64 v52;
    __int64 v53;
    unsigned __int64 v54;
    __int64 v55;
    __int64 v56;
    unsigned __int64 v57;
    char* v58;
  } f_;

  v6 = GameRoutine_1a09c70(a2);
  v7 = v6 + 11;
  if (v6 + 11 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v8 = v6;
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v7 > 0x16) {
    if ((v7 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v7 | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v12, 16, 0);
    f_.v54 = v7;
    f_.v55 = v11;
    f_.v53 = v12 | 1;
    v10 = v12 | 1;
  }
  else {
    v10 = 2 * v7;
    v11 = 0;
    f_.v54 = 0;
    f_.v55 = 0;
    f_.v53 = (unsigned __int8)(2 * v7);
  }
  if ((v10 & 1) != 0) {
    v13 = (char*)v11;
  }
  else {
    v13 = (char*)&f_.v53 + 1;
  }
  *(_QWORD*)v13 = *(_QWORD*)"Script/hub/";
  *(_DWORD*)(v13 + 7) = 794981736;
  if ((v10 & 1) != 0) {
    v14 = (char*)(v11 + 11);
  }
  else {
    v14 = (char*)&f_.v54 + 4;
  }
  if (v8 != 0) {
    GameRoutine_1a0b940((__int64)v14, (__int64)a2, v8);
  }
  v14[v8] = 0;
  v15 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v53, ".bin", 4u);
  v17 = v15[1];
  v16 = (char*)v15[2];
  f_.v56 = *v15;
  f_.v57 = v17;
  f_.v58 = v16;
  v15[1] = 0;
  v15[2] = 0;
  *v15 = 0;
  if ((f_.v53 & 1) != 0 && f_.v55 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v18, f_.v55);
  }
  if ((f_.v56 & 1) != 0) {
    v19 = f_.v58;
  }
  else {
    v19 = (char*)&f_.v56 + 1;
  }
  if ((f_.v56 & 1) != 0) {
    v20 = f_.v57;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)f_.v56 >> 1;
  }
  if ((fs_6360e0(*snd_g_fileIndex_ptr[0], (__int64)v19, v20, 1, 0) & 1) == 0) {
    goto LABEL_62;
  }
  v21 = (_QWORD*)fw_memory_HeapManager_Allocate(*v9, 48, 16, 0);
  v21[1] = 0;
  v22 = (atomic_ullong*)(v21 + 1);
  v21[2] = 0;
  v23 = (__int64)v21;
  *v21 = GameData_1fdee80;
  v24 = as_g_script_manager_ptr;
  v25 = (f_.v56 & 1) != 0 ? f_.v58 : (char*)&f_.v56 + 1;
  Manager_628460((void*)((__int64)&f_.v53), *as_g_script_manager_ptr, v25, 0,
                 1);
  v26 = f_.v53;
  v27 = (unsigned int)f_.v54;
  *(_QWORD*)(v23 + 24) = f_.v53;
  v28 = v23 + 24;
  *(_DWORD*)(v23 + 32) = v27;
  if ((_DWORD)v27 == 0x2000) {
    *(_QWORD*)(v23 + 40) = 0;
  }
  else {
    v29 = &as_g_context_slots[2 * v27];
    v30 = v29[1];
    if (v30 != 0 && *v29 != v26) {
      v30 = 0;
    }
    *(_QWORD*)(v23 + 40) = v30;
    if (v29[1] != 0 && *v29 == v26) {
      v31 = a3 & 1;
      GameRoutine_6298c0(*v24, v23 + 24, 1);
      atomic_fetch_add_explicit(v22, 1u, memory_order_relaxed);
      v32 = a1[5];
      v33 = a1[6];
      if (v32 >= v33) {
        v35 = a1[4];
        v36 = v32 - v35;
        v37 = 1 - 0x5555555555555555LL * ((__int64)(v32 - v35) >> 3);
        if (v37 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_d9d8b0();
        }
        v38 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v33 - v35) >> 3);
        if (2 * v38 > v37) {
          v37 = 2 * v38;
        }
        if (v38 >= 0x555555555555555LL) {
          v37 = 0xAAAAAAAAAAAAAAALL;
        }
        if (v37 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_60a210();
        }
        v39 = 3 * v37;
        v40 = fw_memory_HeapManager_Allocate(*v9, 24 * v37, 16, 0);
        v41 = v40 + v36;
        v42 = v40 + 8 * v39;
        *(_QWORD*)v41 = v28;
        *(_QWORD*)(v41 + 8) = v23;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                  memory_order_relaxed);
        *(_BYTE*)(v41 + 16) = v31;
        v34 = v40 + v36 + 24;
        v43 = a1[4];
        v44 = a1[5];
        v45 = v41 + v43 - v44;
        if (v43 != v44) {
          f_.v52 = v40 + 8 * v39;
          v46 = a1[4];
          v47 = v45;
          do {
            *(_QWORD*)v47 = *(_QWORD*)v46;
            *(_QWORD*)(v47 + 8) = *(_QWORD*)(v46 + 8);
            *(_QWORD*)v46 = 0;
            *(_QWORD*)(v46 + 8) = 0;
            v48 = *(_BYTE*)(v46 + 16);
            v46 += 24;
            *(_BYTE*)(v47 + 16) = v48;
            v47 += 24;
          } while (v46 != v44);
          do {
            v49 = *(_QWORD*)(v43 + 8);
            if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
              std___1___shared_weak_count___release_weak(v49);
            }
            v43 += 24;
          } while (v43 != v44);
          v43 = a1[4];
          v42 = f_.v52;
        }
        a1[4] = v45;
        a1[5] = v34;
        a1[6] = v42;
        if (v43 != 0) {
          v50 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v50, v43);
        }
      }
      else {
        *(_QWORD*)v32 = v28;
        *(_QWORD*)(v32 + 8) = v23;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                  memory_order_relaxed);
        *(_BYTE*)(v32 + 16) = v31;
        v34 = v32 + 24;
      }
      a1[5] = v34;
      Manager_d9d980(a1 + 12);
      if (atomic_fetch_add(v22, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak(v23);
      }
    }
  }
  if (atomic_fetch_add(v22, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
    if ((f_.v56 & 1) == 0) {
      return;
    }
  }
  else {
  LABEL_62:
    if ((f_.v56 & 1) == 0) {
      return;
    }
  }
  if (f_.v58 != nullptr) {
    v51 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*v9 + v51, (__int64)f_.v58);
  }
}

__attribute__((swiftcall)) void game_hub_103a620(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  _DWORD* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  unsigned __int64 v37;
  signed __int64 v38;
  char* v39;
  char* v40;
  __int64 v41;
  char* v42;
  char v43;
  char* v44;
  char* v45;
  signed __int64 v46;
  char* v47;
  signed __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  unsigned int v52;
  unsigned __int64 v53;
  char* v54;
  signed __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  unsigned __int64 v60;
  char* v61;
  char* v62;
  char* v63;
  __int64 v64;
  char* v65;
  char* v66;
  char* v67;
  __int64 v68;
  char* v69;
  __int64 v70;
  _QWORD* v71;
  __int64* v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  char* v78;
  signed __int64 v79;
  char* v80;
  signed __int64 v81;
  __int64 v82;
  char* v83;
  char* v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  char* v88;
  unsigned __int64 v89;
  char* v90;
  __int64 v91;
  _QWORD* v92;
  __int64 v93;
  _QWORD* v94;
  __int64* v95;
  __int64 v96;
  unsigned __int64 v97;
  bool v98;
  unsigned __int64 v99;
  char* v100;
  unsigned __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  char* v112;
  unsigned __int64 v113;
  __int64 v114;
  char* v115;
  unsigned __int64 v116;
  char* v117;
  unsigned __int64 v118;
  char* v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  char* v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  char v133;
  __int64 v134;
  char* v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  char* v138;
  __int64 v139;
  struct {
    _BYTE v140[16];
    __int64 v141;
    __int64 v142;
    unsigned __int64 v143;
    char* v144;
    __int128 v145;
    char* v146;
    __int64 v147;
    unsigned __int64 v148;
    char* v149;
    __int128 v150;
    char* v151;
    __int128 v152;
    _QWORD* v153;
    __int128 v154;
    char* v155;
    __int64 v156;
    unsigned __int64 v157;
    char* v158;
    unsigned __int64 v159;
    unsigned __int64 v160;
    char* v161;
  } f_;

  v4 = GameData_212ef30[0];
  v5 = (_DWORD*)GameData_212ef28;
  if (*GameData_212ef30[0] == 0) {
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        264, 16, 0);
    v9 = *v4;
    v10 = (__int64*)v8;
    if (*v4 == 0) {
      *v4 = v8;
      *(_DWORD*)v5 = 1;
      v9 = v8;
    }
    *(_QWORD*)(v8 + 104) = 0;
    *(_QWORD*)(v8 + 112) = 0;
    *(_QWORD*)(v8 + 88) = 0;
    *(_QWORD*)(v8 + 96) = 0;
    *(_QWORD*)(v8 + 72) = 0;
    *(_QWORD*)(v8 + 80) = 0;
    *(_QWORD*)(v8 + 56) = 0;
    *(_QWORD*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 40) = 0;
    *(_QWORD*)(v8 + 48) = 0;
    *(_QWORD*)(v8 + 24) = 0;
    *(_QWORD*)(v8 + 32) = 0;
    *(_QWORD*)(v8 + 16) = 0;
    *(_DWORD*)(v8 + 120) = 1065353216;
    *(_QWORD*)(v8 + 128) = 0;
    *(_QWORD*)(v8 + 136) = 0;
    *(_QWORD*)(v8 + 144) = 0;
    *(_QWORD*)(v8 + 152) = 0;
    *(_DWORD*)(v8 + 160) = 1065353216;
    *(_QWORD*)(v8 + 168) = 0;
    *(_QWORD*)(v8 + 176) = 0;
    *(_QWORD*)(v8 + 184) = 0;
    *(_QWORD*)(v8 + 192) = 0;
    *(_DWORD*)(v8 + 200) = 1065353216;
    *(_QWORD*)(v8 + 208) = 0;
    *(_QWORD*)(v8 + 216) = 0;
    *(_QWORD*)(v8 + 224) = 0;
    *(_QWORD*)(v8 + 232) = 0;
    *(_QWORD*)(v8 + 240) = 0;
    *(_QWORD*)(v8 + 248) = 0;
    *(_BYTE*)(v8 + 256) = 0;
    v11 = GameData_212f7f8[0] + 8;
    *(_QWORD*)v8 = GameData_212f7f8[0] + 2;
    *(_QWORD*)(v8 + 8) = v11;
    GameRoutine_eef920((_QWORD*)(v9 + 8), "GameData/HubProgram.bin",
                       (__int64)&GameData_1abcbcf, 1);
    v12 = *v10;
    *v4 = (__int64)v10;
    (*(void (**)(__int64))(v12 + 16))((__int64)v10);
    if ((*(_BYTE*)a1 & 1) == 0) {
      goto LABEL_3;
    }
  LABEL_7:
    fw_text_String_CopyTerminated(&f_.v147, *(_QWORD*)(a1 + 16),
                                  *(_QWORD*)(a1 + 8));
    if ((*(_BYTE*)a1 & 1) != 0) {
      v7 = *(_QWORD*)(a1 + 16);
    }
    else {
      v7 = a1 + 1;
    }
    goto LABEL_10;
  }
  ++*GameData_212ef28;
  if ((*(_BYTE*)a1 & 1) != 0) {
    goto LABEL_7;
  }
LABEL_3:
  v6 = *(_QWORD*)(a1 + 8);
  v7 = a1 + 1;
  f_.v147 = *(_QWORD*)a1;
  f_.v148 = v6;
  f_.v149 = *(char**)(a1 + 16);
LABEL_10:
  v13 = game_HashString(v7);
  v14 = (_QWORD*)*v4;
  if (v13 == 0) {
    goto LABEL_44;
  }
  v15 = v14[12];
  if (v15 == 0 | v14[14] == 0) {
    goto LABEL_30;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = v13;
    if (v13 >= v15) {
      v18 = v13 % v15;
    }
  }
  else {
    v18 = v17 & v13;
  }
  v19 = *(_QWORD**)(v14[11] + 8 * v18);
  if (v19 == nullptr || (v20 = (_QWORD*)*v19) == nullptr) {
  LABEL_30:
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    goto LABEL_45;
  }
  if ((v15 & v17) == 0) {
    while (1) {
      v26 = v20[1];
      if (v26 == v13) {
        if (v20[2] == v13) {
          goto LABEL_36;
        }
      }
      else if ((v26 & v17) != v18) {
        goto LABEL_44;
      }
      v20 = (_QWORD*)*v20;
      if (v20 == nullptr) {
        goto LABEL_44;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v13) {
      break;
    }
    if (v21 >= v15) {
      v21 %= v15;
    }
    if (v21 != v18) {
      goto LABEL_44;
    }
  LABEL_24:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      goto LABEL_44;
    }
  }
  if (v20[2] != v13) {
    goto LABEL_24;
  }
LABEL_36:
  v27 = v20[3];
  if (v27 != 0) {
    if (*(_QWORD*)(v27 + 32) != 0) {
      v28 = *(const char**)(v27 + 32);
    }
    else {
      v28 = &GameData_1a9f09e;
    }
    v29 = GameRoutine_1a09c70(v28);
    if (v29 < 0xFFFFFFFFFFFFFFF7LL) {
      v30 = v29;
      if (v29 >= 0x17) {
        v132 = (v29 | 7) == 0x17 ? 26LL : (v29 | 7) + 1;
        v31 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v132, 16, 0);
        f_.v157 = v30;
        f_.v158 = v31;
        f_.v156 = v132 | 1;
      }
      else {
        LOBYTE(f_.v156) = 2 * v29;
        v31 = (char*)&f_.v156 + 1;
        if (v29 == 0) {
          goto LABEL_354;
        }
      }
      GameRoutine_1a0b940((__int64)v31, (__int64)v28, v30);
    LABEL_354:
      v133 = f_.v147;
      v31[v30] = 0;
      if ((v133 & 1) != 0 && f_.v149 != nullptr) {
        v134 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v134 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v134, (__int64)f_.v149);
      }
      f_.v147 = f_.v156;
      f_.v148 = f_.v157;
      f_.v149 = f_.v158;
      v135 = *(_QWORD*)(v27 + 40) != 0 ? *(const char**)(v27 + 40)
                                       : &GameData_1a9f09e;
      v136 = GameRoutine_1a09c70(v135);
      if (v136 < 0xFFFFFFFFFFFFFFF7LL) {
        v137 = v136;
        if (v136 >= 0x17) {
          if ((v136 | 7) == 0x17) {
            v139 = 26;
          }
          else {
            v139 = (v136 | 7) + 1;
          }
          v138 = (char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v139, 16, 0);
          f_.v157 = v137;
          f_.v158 = v138;
          f_.v156 = v139 | 1;
        }
        else {
          LOBYTE(f_.v156) = 2 * v136;
          v138 = (char*)&f_.v156 + 1;
          if (v136 == 0) {
          LABEL_371:
            v138[v137] = 0;
            v14 = (_QWORD*)*v4;
            v23 = f_.v157;
            v22 = (__int64)f_.v158;
            v25 = (unsigned __int8)f_.v156;
            v24 = f_.v156 & 0xFFFFFFFFFFFFFF00LL;
            if (*v4 == 0) {
              goto LABEL_50;
            }
            goto LABEL_45;
          }
        }
        GameRoutine_1a0b940((__int64)v138, (__int64)v135, v137);
        goto LABEL_371;
      }
    }
  LABEL_373:
    String_60a1d0();
  }
LABEL_44:
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  if (v14 != nullptr) {
  LABEL_45:
    if ((signed __int32)(*(_DWORD*)v5)-- <= 1) {
      (*(void (**)(__int64))(*v14 + 24LL))((__int64)v14);
      if (*v4 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v4 + 8LL))(*v4);
      }
      *v4 = 0;
    }
  }
LABEL_50:
  if ((f_.v147 & 1) != 0) {
    fw_text_String_CopyTerminated(&f_.v156, (__int64)f_.v149, f_.v148);
    if ((v25 & 1) == 0) {
      goto LABEL_59;
    }
  LABEL_52:
    fw_text_String_CopyTerminated((__int64*)&f_.v159, v22, v23);
    if (v22 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v22);
    }
    if ((f_.v147 & 1) != 0) {
    LABEL_60:
      if (f_.v149 != nullptr) {
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, (__int64)f_.v149);
      }
    }
  }
  else {
    f_.v156 = f_.v147;
    f_.v157 = f_.v148;
    f_.v158 = f_.v149;
    if ((v25 & 1) != 0) {
      goto LABEL_52;
    }
  LABEL_59:
    f_.v159 = v24 | v25;
    f_.v160 = v23;
    f_.v161 = (char*)v22;
    if ((f_.v147 & 1) != 0) {
      goto LABEL_60;
    }
  }
  v35 = f_.v156;
  v37 = f_.v157;
  v36 = (__int64)f_.v158;
  v38 = (unsigned __int64)(unsigned __int8)f_.v156 >> 1;
  f_.v155 = nullptr;
  f_.v154 = (__typeof__(f_.v154)){0};
  if ((f_.v156 & 1) != 0) {
    v39 = f_.v158;
  }
  else {
    v39 = (char*)&f_.v156 + 1;
  }
  if ((f_.v156 & 1) != 0) {
    v38 = f_.v157;
  }
  if (v38 >= 4) {
    v40 = &v39[v38];
    v41 = (__int64)v39;
    while (1) {
      v42 = (char*)GameRoutine_1a09c60(v41, 66, v38 - 3);
      if (v42 == nullptr) {
        goto LABEL_79;
      }
      if (*(_DWORD*)v42 == 1600943170) {
        break;
      }
      v41 = (__int64)(v42 + 1);
      v38 = (signed __int64)&v40[-v41];
      if ((__int64)&v40[-v41] < 4) {
        goto LABEL_79;
      }
    }
    if (v42 != v40 && v42 - v39 != -1) {
      if ((v35 & 1) != 0) {
        fw_text_String_CopyTerminated(&f_.v147, v36, v37);
      }
      else {
        f_.v147 = f_.v156;
        f_.v148 = f_.v157;
        f_.v149 = f_.v158;
      }
      v52 = (unsigned __int8)f_.v147;
      v53 = f_.v148;
      v54 = (char*)&f_.v147 + 1;
      v55 = (unsigned __int64)(unsigned __int8)f_.v147 >> 1;
      if ((f_.v147 & 1) != 0) {
        v55 = f_.v148;
      }
      if (v55 >= 4) {
        if ((f_.v147 & 1) != 0) {
          v62 = f_.v149;
        }
        else {
          v62 = (char*)&f_.v147 + 1;
        }
        v63 = &v62[v55];
      LABEL_122:
        v64 = (__int64)v62;
        do {
          v65 = (char*)GameRoutine_1a09c60(v64, 68, v55 - 3);
          if (v65 == nullptr) {
            break;
          }
          if (*(_DWORD*)v65 == 1600613956) {
            if (v65 != v63 && v65 - v62 != -1) {
              GameRoutine_1a0a8e0((__int64)&f_.v147, v65 - v62, 4u,
                                  &GameData_1a9f09e, 0);
              v52 = (unsigned __int8)f_.v147;
              v53 = f_.v148;
              if ((f_.v147 & 1) != 0) {
                v62 = f_.v149;
              }
              else {
                v62 = (char*)&f_.v147 + 1;
              }
              v55 = (unsigned __int64)(unsigned __int8)f_.v147 >> 1;
              if ((f_.v147 & 1) != 0) {
                v55 = f_.v148;
              }
              v63 = &v62[v55];
              if (v55 > 3) {
                goto LABEL_122;
              }
            }
            break;
          }
          v64 = (__int64)(v65 + 1);
          v55 = (signed __int64)&v63[-v64];
        } while ((__int64)&v63[-v64] >= 4);
      }
      v56 = v52 >> 1;
      if ((v52 & 1) != 0) {
        v56 = v53;
      }
      if (v56 >= 4) {
        if ((v52 & 1) != 0) {
          v66 = f_.v149;
        }
        else {
          v66 = (char*)&f_.v147 + 1;
        }
        v67 = &v66[v56];
      LABEL_140:
        v68 = (__int64)v66;
        do {
          v69 = (char*)GameRoutine_1a09c60(v68, 72, v56 - 3);
          if (v69 == nullptr) {
            break;
          }
          if (*(_DWORD*)v69 == 1600288072) {
            if (v69 != v67 && v69 - v66 != -1) {
              GameRoutine_1a0a8e0((__int64)&f_.v147, v69 - v66, 4u,
                                  &GameData_1a9f09e, 0);
              v56 = (unsigned __int64)(unsigned __int8)f_.v147 >> 1;
              if ((f_.v147 & 1) != 0) {
                v66 = f_.v149;
              }
              else {
                v66 = (char*)&f_.v147 + 1;
              }
              if ((f_.v147 & 1) != 0) {
                v56 = f_.v148;
              }
              v67 = &v66[v56];
              if (v56 > 3) {
                goto LABEL_140;
              }
            }
            break;
          }
          v68 = (__int64)(v69 + 1);
          v56 = (__int64)&v67[-v68];
        } while ((__int64)&v67[-v68] >= 4);
      }
      LocatorDispos_db1e20((void*)(&f_.v142), &f_.v147);
      if ((f_.v147 & 1) != 0 && f_.v149 != nullptr) {
        v57 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v57 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, (__int64)f_.v149);
      }
      f_.v147 = f_.v142;
      f_.v148 = f_.v143;
      f_.v149 = f_.v144;
      if ((f_.v142 & 1) != 0) {
        v58 = f_.v143;
      }
      else {
        v58 = (unsigned __int8)f_.v142 >> 1;
      }
      if ((f_.v142 & 1) != 0) {
        v59 = f_.v144;
      }
      else {
        v59 = (char*)&f_.v147 + 1;
      }
      v60 = v58 + 8;
      if (v58 + 8 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_373;
      }
      if (v60 >= 0x17) {
        if ((v60 | 7) == 0x17) {
          v70 = 26;
        }
        else {
          v70 = (v60 | 7) + 1;
        }
        v71 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v70, 16, 0);
        *((_QWORD*)&f_.v152 + 1) = v58 + 8;
        f_.v153 = v71;
        *v71 = 0x2F6C74422F70614DLL;
        v61 = (char*)(v71 + 1);
        *(_QWORD*)&f_.v152 = v70 | 1;
      }
      else {
        *((_QWORD*)&f_.v152 + 1) = 0;
        f_.v153 = nullptr;
        *(_QWORD*)((char*)&f_.v152 + 1) = 0x2F6C74422F70614DLL;
        LOBYTE(f_.v152) = 2 * v60;
        v61 = (char*)&f_.v152 + 9;
        if (v58 == 0) {
        LABEL_159:
          v61[v58] = 0;
          v72 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v152, "/", 1u);
          v74 = v72[1];
          v73 = v72[2];
          f_.v142 = *v72;
          f_.v143 = v74;
          f_.v144 = (char*)v73;
          v72[1] = 0;
          v72[2] = 0;
          *v72 = 0;
          v75 = (unsigned __int8)f_.v147;
          v77 = f_.v148;
          v76 = (__int64)f_.v149;
          goto LABEL_214;
        }
      }
      GameRoutine_1a0b940((__int64)v61, (__int64)v59, v58);
      goto LABEL_159;
    }
  }
LABEL_79:
  LocatorDispos_db1e20((void*)(&f_.v147), &f_.v156);
  v43 = f_.v147;
  v44 = f_.v149;
  if ((f_.v147 & 1) != 0) {
    v45 = f_.v149;
  }
  else {
    v45 = (char*)&f_.v147 + 1;
  }
  if ((f_.v147 & 1) != 0) {
    v46 = f_.v148;
  }
  else {
    v46 = (unsigned __int64)(unsigned __int8)f_.v147 >> 1;
  }
  if (v46 >= 2) {
    v47 = &v45[v46];
    v48 = v46;
    v49 = (__int64)v45;
    do {
      v50 = (char*)GameRoutine_1a09c60(v49, 95, v48 - 1);
      if (v50 == nullptr) {
        break;
      }
      if (*(_WORD*)v50 == 22111) {
        if (v50 != v47) {
          v51 = v50 - v45;
          if (v50 - v45 != -1) {
            if (v51 > v46) {
              String_60a230();
            }
            if ((v43 & 1) != 0) {
              f_.v148 = v50 - v45;
            }
            else {
              v44 = (char*)&f_.v147 + 1;
              LOBYTE(f_.v147) = 2 * v51;
            }
            v44[v51] = 0;
          }
        }
        break;
      }
      v49 = (__int64)(v50 + 1);
      v48 = (signed __int64)&v47[-v49];
    } while ((__int64)&v47[-v49] >= 2);
  }
  v54 = (char*)&f_.v156 + 1;
  if ((f_.v156 & 1) != 0) {
    v78 = f_.v158;
  }
  else {
    v78 = (char*)&f_.v156 + 1;
  }
  if ((f_.v156 & 1) != 0) {
    v79 = f_.v157;
  }
  else {
    v79 = (unsigned __int64)(unsigned __int8)f_.v156 >> 1;
  }
  v80 = &v78[v79];
  if (v79 >= 4) {
    v81 = v79;
    v82 = (__int64)v78;
    while (1) {
      v83 = (char*)GameRoutine_1a09c60(v82, 68, v81 - 3);
      if (v83 == nullptr) {
        goto LABEL_185;
      }
      if (*(_DWORD*)v83 == *(_DWORD*)"Dng_") {
        break;
      }
      v82 = (__int64)(v83 + 1);
      v81 = (signed __int64)&v80[-v82];
      if ((__int64)&v80[-v82] <= 3) {
        goto LABEL_185;
      }
    }
    if (v83 != v80 && v83 - v78 != -1) {
      if ((f_.v147 & 1) != 0) {
        v84 = f_.v149;
      }
      else {
        v84 = (char*)&f_.v147 + 1;
      }
      if ((f_.v147 & 1) != 0) {
        v85 = f_.v148;
      }
      else {
        v85 = (unsigned __int64)(unsigned __int8)f_.v147 >> 1;
      }
      v86 = v85 + 8;
      if (v85 + 8 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_373;
      }
      if (v86 < 0x17) {
        *((_QWORD*)&f_.v152 + 1) = 0;
        f_.v153 = nullptr;
        LOBYTE(f_.v152) = 2 * v86;
        *(_QWORD*)((char*)&f_.v152 + 1) = 0x2F676E442F70614DLL;
        goto LABEL_202;
      }
      if ((v86 | 7) == 0x17) {
        v91 = 26;
      }
      else {
        v91 = (v86 | 7) + 1;
      }
      v92 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v91, 16, 0);
      *((_QWORD*)&f_.v152 + 1) = v85 + 8;
      f_.v153 = v92;
      *(_QWORD*)&f_.v152 = v91 | 1;
      *v92 = 0x2F676E442F70614DLL;
      v90 = (char*)(v92 + 1);
      goto LABEL_212;
    }
  }
LABEL_185:
  if (v79 >= 4) {
    v87 = (__int64)v78;
    while (1) {
      v88 = (char*)GameRoutine_1a09c60(v87, 72, v79 - 3);
      if (v88 == nullptr) {
        goto LABEL_235;
      }
      if (*(_DWORD*)v88 == *(_DWORD*)"Hub_") {
        break;
      }
      v87 = (__int64)(v88 + 1);
      v79 = (signed __int64)&v80[-v87];
      if ((__int64)&v80[-v87] < 4) {
        goto LABEL_235;
      }
    }
    if (v88 != v80 && v88 - v78 != -1) {
      if ((f_.v147 & 1) != 0) {
        v84 = f_.v149;
      }
      else {
        v84 = (char*)&f_.v147 + 1;
      }
      if ((f_.v147 & 1) != 0) {
        v85 = f_.v148;
      }
      else {
        v85 = (unsigned __int64)(unsigned __int8)f_.v147 >> 1;
      }
      v89 = v85 + 8;
      if (v85 + 8 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_373;
      }
      if (v89 >= 0x17) {
        if ((v89 | 7) == 0x17) {
          v93 = 26;
        }
        else {
          v93 = (v89 | 7) + 1;
        }
        v94 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v93, 16, 0);
        *((_QWORD*)&f_.v152 + 1) = v85 + 8;
        f_.v153 = v94;
        *v94 = 0x2F6275482F70614DLL;
        v90 = (char*)(v94 + 1);
        *(_QWORD*)&f_.v152 = v93 | 1;
        goto LABEL_212;
      }
      *((_QWORD*)&f_.v152 + 1) = 0;
      f_.v153 = nullptr;
      *(_QWORD*)((char*)&f_.v152 + 1) = 0x2F6275482F70614DLL;
      LOBYTE(f_.v152) = 2 * v89;
    LABEL_202:
      v90 = (char*)&f_.v152 + 9;
      if (v85 != 0) {
      LABEL_212:
        GameRoutine_1a0b940((__int64)v90, (__int64)v84, v85);
      }
      v90[v85] = 0;
      v95 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v152, "/", 1u);
      v97 = v95[1];
      v96 = v95[2];
      f_.v142 = *v95;
      f_.v143 = v97;
      f_.v144 = (char*)v96;
      v95[1] = 0;
      v95[2] = 0;
      *v95 = 0;
      v75 = (unsigned __int8)f_.v156;
      v77 = f_.v157;
      v76 = (__int64)f_.v158;
    LABEL_214:
      v98 = (v75 & 1) == 0;
      v99 = v75 >> 1;
      if (v98) {
        v100 = v54;
      }
      else {
        v100 = (const char*)v76;
      }
      if (v98) {
        v101 = v99;
      }
      else {
        v101 = v77;
      }
      v102 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v142, v100, v101);
      v103 = *v102;
      v104 = v102[1];
      v105 = v102[2];
      *v102 = 0;
      v102[1] = 0;
      v102[2] = 0;
      if ((f_.v154 & 1) != 0 && f_.v155 != nullptr) {
        v106 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v106 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v106, (__int64)f_.v155);
      }
      *(_QWORD*)&f_.v154 = v103;
      *((_QWORD*)&f_.v154 + 1) = v104;
      f_.v155 = (char*)v105;
      if ((f_.v142 & 1) != 0 && f_.v144 != nullptr) {
        v107 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v107 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v107, (__int64)f_.v144);
      }
      if ((f_.v152 & 1) != 0 && f_.v153 != nullptr) {
        v108 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v108 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v108, (__int64)f_.v153);
      }
    }
  }
LABEL_235:
  if ((f_.v147 & 1) != 0 && f_.v149 != nullptr) {
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v109,
                                  (__int64)f_.v149);
  }
  if ((f_.v154 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)&f_.v152, (__int64)f_.v155,
                                  *((unsigned __int64*)&f_.v154 + 1));
  }
  else {
    f_.v152 = f_.v154;
    f_.v153 = f_.v155;
  }
  LOWORD(f_.v142) = 0;
  game_103b760((void*)(&f_.v147), (unsigned __int8*)&f_.v154,
               (unsigned __int8*)&f_.v142);
  if ((f_.v142 & 1) != 0 && f_.v144 != nullptr) {
    v110 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v110 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v110,
                                  (__int64)f_.v144);
  }
  v111 = snd_g_fileIndex_ptr[0];
  if ((f_.v147 & 1) != 0) {
    v112 = f_.v149;
  }
  else {
    v112 = (char*)&f_.v147 + 1;
  }
  if ((f_.v147 & 1) != 0) {
    v113 = f_.v148;
  }
  else {
    v113 = (unsigned __int64)(unsigned __int8)f_.v147 >> 1;
  }
  if ((fs_6360e0(*snd_g_fileIndex_ptr[0], (__int64)v112, v113, 0, 0) & 1) !=
      0) {
    if ((f_.v154 & 1) != 0) {
      if ((f_.v150 & 1) != 0) {
        v117 = f_.v151;
      }
      else {
        v117 = (char*)&f_.v150 + 1;
      }
      if ((f_.v150 & 1) != 0) {
        v118 = *((_QWORD*)&f_.v150 + 1);
      }
      else {
        v118 = (unsigned __int64)(unsigned __int8)f_.v150 >> 1;
      }
      SpineModel_64dde0((__int64*)&f_.v154, (__int64)v117, v118);
    }
    else if ((f_.v150 & 1) != 0) {
      GameRoutine_64df20(&f_.v154, (__int64)f_.v151,
                         *((unsigned __int64*)&f_.v150 + 1));
    }
    else {
      f_.v154 = f_.v150;
      f_.v155 = f_.v151;
    }
    goto LABEL_298;
  }
  f_.v140[0] = 14;
  strcpy(&f_.v140[1], "Section");
  game_103b760((void*)(&f_.v142), (unsigned __int8*)&f_.v154, f_.v140);
  if ((f_.v140[0] & 1) != 0 && f_.v141 != 0) {
    v114 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v114 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v114,
                                  f_.v141);
  }
  if ((f_.v142 & 1) != 0) {
    v115 = f_.v144;
  }
  else {
    v115 = (char*)&f_.v142 + 1;
  }
  if ((f_.v142 & 1) != 0) {
    v116 = f_.v143;
  }
  else {
    v116 = (unsigned __int64)(unsigned __int8)f_.v142 >> 1;
  }
  if ((fs_6360e0(*v111, (__int64)v115, v116, 0, 0) & 1) == 0) {
    goto LABEL_288;
  }
  if ((f_.v154 & 1) != 0) {
    if ((f_.v145 & 1) != 0) {
      v119 = f_.v146;
    }
    else {
      v119 = (char*)&f_.v145 + 1;
    }
    if ((f_.v145 & 1) != 0) {
      v120 = *((_QWORD*)&f_.v145 + 1);
    }
    else {
      v120 = (unsigned __int64)(unsigned __int8)f_.v145 >> 1;
    }
    SpineModel_64dde0((__int64*)&f_.v154, (__int64)v119, v120);
  LABEL_288:
    if ((f_.v145 & 1) == 0) {
      goto LABEL_293;
    }
  LABEL_289:
    if (f_.v146 != nullptr) {
      v121 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v121 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v121, (__int64)f_.v146);
    }
    goto LABEL_293;
  }
  if ((f_.v145 & 1) != 0) {
    GameRoutine_64df20(&f_.v154, (__int64)f_.v146,
                       *((unsigned __int64*)&f_.v145 + 1));
    if ((f_.v145 & 1) == 0) {
      goto LABEL_293;
    }
    goto LABEL_289;
  }
  f_.v154 = f_.v145;
  f_.v155 = f_.v146;
LABEL_293:
  if ((f_.v142 & 1) != 0 && f_.v144 != nullptr) {
    v122 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v122 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v122,
                                  (__int64)f_.v144);
  }
LABEL_298:
  if ((f_.v150 & 1) != 0 && f_.v151 != nullptr) {
    v123 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v123 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v123,
                                  (__int64)f_.v151);
  }
  if ((f_.v147 & 1) != 0 && f_.v149 != nullptr) {
    v124 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v124 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v124,
                                  (__int64)f_.v149);
  }
  a2[4] = 0;
  a2[5] = 0;
  a2[2] = 0;
  a2[3] = 0;
  *a2 = 0;
  a2[1] = 0;
  if (a2 != (__int64*)&f_.v154) {
    if ((f_.v154 & 1) != 0) {
      GameRoutine_64df20(a2, (__int64)f_.v155,
                         *((unsigned __int64*)&f_.v154 + 1));
    }
    else {
      *(_OWORD*)a2 = f_.v154;
      a2[2] = (__int64)f_.v155;
    }
  }
  if (a2 == &f_.v156) {
  LABEL_324:
    if ((f_.v152 & 1) != 0) {
      goto LABEL_325;
    }
    goto LABEL_329;
  }
  if ((a2[3] & 1) != 0) {
    if ((f_.v159 & 1) != 0) {
      v126 = f_.v161;
    }
    else {
      v126 = (char*)&f_.v159 + 1;
    }
    if ((f_.v159 & 1) != 0) {
      v127 = f_.v160;
    }
    else {
      v127 = (unsigned __int64)(unsigned __int8)f_.v159 >> 1;
    }
    SpineModel_64dde0(a2 + 3, (__int64)v126, v127);
    goto LABEL_324;
  }
  if ((f_.v159 & 1) != 0) {
    GameRoutine_64df20(a2 + 3, (__int64)f_.v161, f_.v160);
    if ((f_.v152 & 1) == 0) {
      goto LABEL_329;
    }
  }
  else {
    v125 = f_.v160;
    a2[3] = f_.v159;
    a2[4] = v125;
    a2[5] = (__int64)f_.v161;
    if ((f_.v152 & 1) == 0) {
      goto LABEL_329;
    }
  }
LABEL_325:
  if (f_.v153 != nullptr) {
    v128 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v128 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v128,
                                  (__int64)f_.v153);
  }
LABEL_329:
  if ((f_.v154 & 1) != 0 && f_.v155 != nullptr) {
    v129 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v129 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v129,
                                  (__int64)f_.v155);
  }
  if ((f_.v159 & 1) != 0 && f_.v161 != nullptr) {
    v130 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v130 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v130,
                                  (__int64)f_.v161);
  }
  if ((f_.v156 & 1) != 0 && f_.v158 != nullptr) {
    v131 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v131 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v131,
                                  (__int64)f_.v158);
  }
}

#pragma GCC visibility pop
