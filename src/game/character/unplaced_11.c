#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_character_1076700(PSEUDO_X8, const char*,
                                                       unsigned __int64);
__int64 GameRoutine_1a09c90(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a690(const char*, int);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_109ecc0(_BYTE*, unsigned __int64, char*, char*);
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
int GameRoutine_1a0a780(const char*);
unsigned __int64 GameRoutine_10763d0(__int64, unsigned __int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
void CharacterAppearance_1075a00(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_character_1073980(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void game_character_1076d60(PSEUDO_X8 x8_,
                                                       __int64* a1, char a2);

__int64 game_character_1073980(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64* v14;
  char* v15;
  unsigned __int64 v16;
  _BYTE* v17;
  bool v18;
  __int64 v19;
  unsigned __int64 v20;
  _BYTE* v21;
  _BYTE* v22;
  char* v23;
  unsigned int v24;
  bool v25;
  _BYTE* v26;
  _BYTE* v27;
  int* v28;
  unsigned __int64 v29;
  char* v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  char* v56;
  unsigned __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  char* v70;
  unsigned __int64 v71;
  char* v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  char* v76;
  unsigned __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  char* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  char* v90;
  unsigned __int64 v91;
  char* v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  char* v96;
  unsigned __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  __int64 v103;
  char* v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  struct {
    char gap0_[8];
    __int64 v112;
    unsigned __int64 v113;
    char* v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    _QWORD v118[2];
    char* v119;
    __int64 v120;
    unsigned __int64 v121;
    char* v122;
    unsigned __int8 v123;
    char v124[3];
    int v125;
    unsigned __int64 v126;
    _BYTE* v127;
  } f_;

  v2 = *a2;
  v3 = *((_QWORD*)a2 + 1);
  if ((v2 & 1) == 0) {
    v3 = v2 >> 1;
  }
  if (v3 == 0) {
    return 0;
  }
  v5 = 0;
  if ((v2 & 1) != 0) {
    v6 = *((_QWORD*)a2 + 2);
  }
  else {
    v6 = (__int64)(a2 + 1);
  }
  v7 = v6;
  while (v3 != v5) {
    v8 = v7 + v3;
    ++v5;
    --v7;
    if (*(_BYTE*)(v8 - 1) == 47) {
      if (v3 + 1 != v5) {
        if (v3 < v5) {
          String_60a250("string_view::substr");
        }
        v6 = v7 + v3 + 1;
        v3 = v5 - 1;
      }
      break;
    }
  }
  if (v3 >= 6) {
    v9 = 6;
  }
  else {
    v9 = v3;
  }
  f_.v123 = 2 * v9;
  if (v3 != 0) {
    GameRoutine_1a0b940((__int64)f_.v124, v6, v9);
  }
  f_.v124[v9] = 0;
  LOBYTE(f_.v118[0]) = 26;
  strcpy((char*)f_.v118 + 1, "Animation/AW/");
  v10 = (__int64*)GameRoutine_1a09ce0((__int64)f_.v118, f_.v124, v9);
  v12 = v10[1];
  v11 = v10[2];
  f_.v120 = *v10;
  f_.v121 = v12;
  f_.v122 = (char*)v11;
  v10[1] = 0;
  v10[2] = 0;
  *v10 = 0;
  if ((f_.v118[0] & 1) != 0 && f_.v119 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)f_.v119);
  }
  v14 = snd_g_fileIndex_ptr[0];
  if ((f_.v120 & 1) != 0) {
    v15 = f_.v122;
  }
  else {
    v15 = (char*)&f_.v120 + 1;
  }
  if ((f_.v120 & 1) != 0) {
    v16 = f_.v121;
  }
  else {
    v16 = (unsigned __int64)(unsigned __int8)f_.v120 >> 1;
  }
  if ((fs_6360e0(*snd_g_fileIndex_ptr[0], (__int64)v15, v16, 0, 2) & 1) == 0) {
    v17 = (char*)&f_.v122 + 3;
    v18 = (f_.v120 & 1) == 0;
    v19 = *v14;
    if ((f_.v120 & 1) != 0) {
      v17 = f_.v122 + 18;
      v20 = f_.v121;
    }
    else {
      v20 = (unsigned __int64)(unsigned __int8)f_.v120 >> 1;
    }
    *v17 = 48;
    v21 = f_.v122 + 17;
    if (v18) {
      v21 = (char*)&f_.v122 + 2;
    }
    *v21 = 48;
    v22 = f_.v122 + 16;
    if (v18) {
      v22 = (char*)&f_.v122 + 1;
    }
    *v22 = 48;
    if (v18) {
      v23 = (char*)&f_.v120 + 1;
    }
    else {
      v23 = f_.v122;
    }
    v24 = 0;
    if ((fs_6360e0(v19, (__int64)v23, v20, 0, 2) & 1) == 0) {
      goto LABEL_219;
    }
    v25 = (f_.v123 & 1) == 0;
    if ((f_.v123 & 1) != 0) {
      v26 = f_.v127 + 5;
    }
    else {
      v26 = (char*)&f_.v125 + 2;
    }
    *v26 = 48;
    v27 = f_.v127 + 4;
    if (v25) {
      v27 = (char*)&f_.v125 + 1;
    }
    *v27 = 48;
    v28 = (int*)(f_.v127 + 3);
    if (v25) {
      v28 = &f_.v125;
    }
    *(_BYTE*)v28 = 48;
  }
  if ((f_.v120 & 1) != 0) {
    v29 = f_.v121;
  }
  else {
    v29 = (unsigned __int64)(unsigned __int8)f_.v120 >> 1;
  }
  if ((f_.v120 & 1) != 0) {
    v30 = f_.v122;
  }
  else {
    v30 = (char*)&f_.v120 + 1;
  }
  v31 = v29 + 4;
  if (v29 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_230:
    String_60a1d0();
  }
  if (v31 >= 0x17) {
    if ((v31 | 7) == 0x17) {
      v33 = 26;
    }
    else {
      v33 = (v31 | 7) + 1;
    }
    v32 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v33,
                                                16, 0);
    f_.v113 = v29 + 4;
    f_.v114 = v32;
    f_.v112 = v33 | 1;
    goto LABEL_64;
  }
  f_.v113 = 0;
  f_.v114 = nullptr;
  f_.v112 = (unsigned __int8)(2 * v31);
  v32 = (char*)&f_.v112 + 1;
  if (v29 != 0) {
  LABEL_64:
    GameRoutine_1a0b940((__int64)v32, (__int64)v30, v29);
  }
  v35 = f_.v126;
  v34 = (__int64)f_.v127;
  strcpy(&v32[v29], "/AW_");
  if ((f_.v123 & 1) != 0) {
    v36 = (const char*)v34;
  }
  else {
    v36 = f_.v124;
  }
  if ((f_.v123 & 1) != 0) {
    v37 = v35;
  }
  else {
    v37 = (unsigned __int64)f_.v123 >> 1;
  }
  v38 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v112, v36, v37);
  v40 = v38[1];
  v39 = v38[2];
  f_.v115 = *v38;
  f_.v116 = v40;
  f_.v117 = v39;
  v38[1] = 0;
  v38[2] = 0;
  *v38 = 0;
  v41 = (_QWORD*)GameRoutine_1a09ce0((__int64)&f_.v115, "_Idle", 5u);
  v43 = v41[1];
  v42 = v41[2];
  f_.v118[0] = *v41;
  f_.v118[1] = v43;
  f_.v119 = (char*)v42;
  v41[1] = 0;
  v41[2] = 0;
  *v41 = 0;
  if ((f_.v118[0] & 1) != 0) {
    v44 = f_.v119;
  }
  else {
    v44 = (char*)f_.v118 + 1;
  }
  if ((f_.v118[0] & 1) != 0) {
    v45 = f_.v118[1];
  }
  else {
    v45 = (unsigned __int64)LOBYTE(f_.v118[0]) >> 1;
  }
  CharacterAppearance_1075a00(a1 + 1040, (__int64)v44, v45);
  if ((f_.v118[0] & 1) != 0 && f_.v119 != nullptr) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v46,
                                  (__int64)f_.v119);
  }
  if ((f_.v115 & 1) != 0 && f_.v117 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  f_.v117);
  }
  if ((f_.v112 & 1) != 0 && f_.v114 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  (__int64)f_.v114);
  }
  if ((f_.v120 & 1) != 0) {
    v49 = f_.v121;
  }
  else {
    v49 = (unsigned __int64)(unsigned __int8)f_.v120 >> 1;
  }
  if ((f_.v120 & 1) != 0) {
    v50 = f_.v122;
  }
  else {
    v50 = (char*)&f_.v120 + 1;
  }
  v51 = v49 + 4;
  if (v49 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_230;
  }
  if (v51 >= 0x17) {
    if ((v51 | 7) == 0x17) {
      v53 = 26;
    }
    else {
      v53 = (v51 | 7) + 1;
    }
    v52 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v53,
                                                16, 0);
    f_.v113 = v49 + 4;
    f_.v114 = v52;
    f_.v112 = v53 | 1;
    goto LABEL_106;
  }
  f_.v113 = 0;
  f_.v114 = nullptr;
  f_.v112 = (unsigned __int8)(2 * v51);
  v52 = (char*)&f_.v112 + 1;
  if (v49 != 0) {
  LABEL_106:
    GameRoutine_1a0b940((__int64)v52, (__int64)v50, v49);
  }
  v55 = f_.v126;
  v54 = (__int64)f_.v127;
  strcpy(&v52[v49], "/AW_");
  if ((f_.v123 & 1) != 0) {
    v56 = (const char*)v54;
  }
  else {
    v56 = f_.v124;
  }
  if ((f_.v123 & 1) != 0) {
    v57 = v55;
  }
  else {
    v57 = (unsigned __int64)f_.v123 >> 1;
  }
  v58 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v112, v56, v57);
  v60 = v58[1];
  v59 = v58[2];
  f_.v115 = *v58;
  f_.v116 = v60;
  f_.v117 = v59;
  v58[1] = 0;
  v58[2] = 0;
  *v58 = 0;
  v61 = (_QWORD*)GameRoutine_1a09ce0((__int64)&f_.v115, "_Start", 6u);
  v63 = v61[1];
  v62 = v61[2];
  f_.v118[0] = *v61;
  f_.v118[1] = v63;
  f_.v119 = (char*)v62;
  v61[1] = 0;
  v61[2] = 0;
  *v61 = 0;
  if ((f_.v118[0] & 1) != 0) {
    v64 = f_.v119;
  }
  else {
    v64 = (char*)f_.v118 + 1;
  }
  if ((f_.v118[0] & 1) != 0) {
    v65 = f_.v118[1];
  }
  else {
    v65 = (unsigned __int64)LOBYTE(f_.v118[0]) >> 1;
  }
  CharacterAppearance_1075a00(a1 + 1112, (__int64)v64, v65);
  if ((f_.v118[0] & 1) != 0 && f_.v119 != nullptr) {
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v66,
                                  (__int64)f_.v119);
  }
  if ((f_.v115 & 1) != 0 && f_.v117 != 0) {
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v67,
                                  f_.v117);
  }
  if ((f_.v112 & 1) != 0 && f_.v114 != nullptr) {
    v68 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v68 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v68,
                                  (__int64)f_.v114);
  }
  if ((f_.v120 & 1) != 0) {
    v69 = f_.v121;
  }
  else {
    v69 = (unsigned __int64)(unsigned __int8)f_.v120 >> 1;
  }
  if ((f_.v120 & 1) != 0) {
    v70 = f_.v122;
  }
  else {
    v70 = (char*)&f_.v120 + 1;
  }
  v71 = v69 + 4;
  if (v69 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_230;
  }
  if (v71 >= 0x17) {
    if ((v71 | 7) == 0x17) {
      v73 = 26;
    }
    else {
      v73 = (v71 | 7) + 1;
    }
    v72 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v73,
                                                16, 0);
    f_.v113 = v69 + 4;
    f_.v114 = v72;
    f_.v112 = v73 | 1;
    goto LABEL_148;
  }
  f_.v113 = 0;
  f_.v114 = nullptr;
  f_.v112 = (unsigned __int8)(2 * v71);
  v72 = (char*)&f_.v112 + 1;
  if (v69 != 0) {
  LABEL_148:
    GameRoutine_1a0b940((__int64)v72, (__int64)v70, v69);
  }
  v75 = f_.v126;
  v74 = (__int64)f_.v127;
  strcpy(&v72[v69], "/AW_");
  if ((f_.v123 & 1) != 0) {
    v76 = (const char*)v74;
  }
  else {
    v76 = f_.v124;
  }
  if ((f_.v123 & 1) != 0) {
    v77 = v75;
  }
  else {
    v77 = (unsigned __int64)f_.v123 >> 1;
  }
  v78 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v112, v76, v77);
  v80 = v78[1];
  v79 = v78[2];
  f_.v115 = *v78;
  f_.v116 = v80;
  f_.v117 = v79;
  v78[1] = 0;
  v78[2] = 0;
  *v78 = 0;
  v81 = (_QWORD*)GameRoutine_1a09ce0((__int64)&f_.v115, "_End", 4u);
  v83 = v81[1];
  v82 = v81[2];
  f_.v118[0] = *v81;
  f_.v118[1] = v83;
  f_.v119 = (char*)v82;
  v81[1] = 0;
  v81[2] = 0;
  *v81 = 0;
  if ((f_.v118[0] & 1) != 0) {
    v84 = f_.v119;
  }
  else {
    v84 = (char*)f_.v118 + 1;
  }
  if ((f_.v118[0] & 1) != 0) {
    v85 = f_.v118[1];
  }
  else {
    v85 = (unsigned __int64)LOBYTE(f_.v118[0]) >> 1;
  }
  CharacterAppearance_1075a00(a1 + 1184, (__int64)v84, v85);
  if ((f_.v118[0] & 1) != 0 && f_.v119 != nullptr) {
    v86 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v86,
                                  (__int64)f_.v119);
  }
  if ((f_.v115 & 1) != 0 && f_.v117 != 0) {
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v87 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v87,
                                  f_.v117);
  }
  if ((f_.v112 & 1) != 0 && f_.v114 != nullptr) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v88,
                                  (__int64)f_.v114);
  }
  if ((f_.v120 & 1) != 0) {
    v89 = f_.v121;
  }
  else {
    v89 = (unsigned __int64)(unsigned __int8)f_.v120 >> 1;
  }
  if ((f_.v120 & 1) != 0) {
    v90 = f_.v122;
  }
  else {
    v90 = (char*)&f_.v120 + 1;
  }
  v91 = v89 + 4;
  if (v89 + 4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_230;
  }
  if (v91 >= 0x17) {
    if ((v91 | 7) == 0x17) {
      v93 = 26;
    }
    else {
      v93 = (v91 | 7) + 1;
    }
    v92 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v93,
                                                16, 0);
    f_.v113 = v89 + 4;
    f_.v114 = v92;
    f_.v112 = v93 | 1;
  }
  else {
    f_.v113 = 0;
    f_.v114 = nullptr;
    f_.v112 = (unsigned __int8)(2 * v91);
    v92 = (char*)&f_.v112 + 1;
    if (v89 == 0) {
      goto LABEL_191;
    }
  }
  GameRoutine_1a0b940((__int64)v92, (__int64)v90, v89);
LABEL_191:
  v95 = f_.v126;
  v94 = (__int64)f_.v127;
  strcpy(&v92[v89], "/AW_");
  if ((f_.v123 & 1) != 0) {
    v96 = (const char*)v94;
  }
  else {
    v96 = f_.v124;
  }
  if ((f_.v123 & 1) != 0) {
    v97 = v95;
  }
  else {
    v97 = (unsigned __int64)f_.v123 >> 1;
  }
  v98 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v112, v96, v97);
  v100 = v98[1];
  v99 = v98[2];
  f_.v115 = *v98;
  f_.v116 = v100;
  f_.v117 = v99;
  v98[1] = 0;
  v98[2] = 0;
  *v98 = 0;
  v101 = (_QWORD*)GameRoutine_1a09ce0((__int64)&f_.v115, "_Act1", 5u);
  v103 = v101[1];
  v102 = v101[2];
  f_.v118[0] = *v101;
  f_.v118[1] = v103;
  f_.v119 = (char*)v102;
  v101[1] = 0;
  v101[2] = 0;
  *v101 = 0;
  if ((f_.v118[0] & 1) != 0) {
    v104 = f_.v119;
  }
  else {
    v104 = (char*)f_.v118 + 1;
  }
  if ((f_.v118[0] & 1) != 0) {
    v105 = f_.v118[1];
  }
  else {
    v105 = (unsigned __int64)LOBYTE(f_.v118[0]) >> 1;
  }
  CharacterAppearance_1075a00(a1 + 1256, (__int64)v104, v105);
  if ((f_.v118[0] & 1) != 0 && f_.v119 != nullptr) {
    v106 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v106 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v106,
                                  (__int64)f_.v119);
  }
  if ((f_.v115 & 1) != 0 && f_.v117 != 0) {
    v107 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v107 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v107,
                                  f_.v117);
  }
  if ((f_.v112 & 1) != 0 && f_.v114 != nullptr) {
    v108 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v108 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v108,
                                  (__int64)f_.v114);
  }
  v24 = 1;
LABEL_219:
  if ((f_.v120 & 1) != 0 && f_.v122 != nullptr) {
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v109,
                                  (__int64)f_.v122);
  }
  if ((f_.v123 & 1) != 0 && f_.v127 != nullptr) {
    v110 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v110 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v110,
                                  (__int64)f_.v127);
  }
  return v24;
}

__attribute__((swiftcall)) void game_character_1076d60(PSEUDO_X8 x8_,
                                                       __int64* a1, char a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  _BYTE* v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  char v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  bool v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  bool v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  int v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  char* v61;
  char v62;
  __int64 v63;
  __int64 v64;
  _BYTE* v65;
  char* v66;
  __int64* v67;
  __int64 v68;
  unsigned __int64 v69;
  char* v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  struct {
    char gap0_[8];
    __int64 v76;
    unsigned __int64 v77;
    __int64 v78;
    __int64 v79;
    unsigned __int64 v80;
    char* v81;
    char gap56_[39];
    char v82;
    __int64 v83;
    unsigned __int64 v84;
    char* v85;
    _QWORD v86[2];
    char* v87;
  } f_;

  v3 = a1[1];
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v7 = *(_BYTE**)(v3 - 8);
  if (v7 == nullptr || *v7 == 0 || v7[1] != 68) {
  LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  v8 = 0;
  if ((*v7 & 0xFE) == 0x42 && v7[2] == 95) {
    v9 = (unsigned __int8)v7[3];
    if (v9 == 73) {
      v8 = v7[6] == 70;
      goto LABEL_13;
    }
    if ((unsigned int)(v9 - 48) <= 9) {
      v10 = (unsigned __int8)v7[4];
      if ((unsigned int)(v10 - 48) <= 9) {
        v11 = (unsigned __int8)v7[5];
        if ((unsigned int)(v11 - 48) <= 9) {
          LOBYTE(f_.v79) = v9;
          BYTE1(f_.v79) = v10;
          WORD1(f_.v79) = (unsigned __int8)v11;
          v12 = GameRoutine_1a0a780((const char*)&f_.v79);
          v8 = (unsigned __int8)v12 & ((unsigned int)(v12 - 300) < 0xC8);
          goto LABEL_13;
        }
      }
    }
    goto LABEL_12;
  }
LABEL_13:
  v13 = *a1;
  f_.v86[1] = 0;
  f_.v87 = nullptr;
  f_.v85 = nullptr;
  f_.v86[0] = 0;
  f_.v83 = 0;
  f_.v84 = 0;
  if (v3 != v13) {
    if (v8 != 0) {
      v14 = 98;
    }
    else {
      v14 = 97;
    }
    while (1) {
      if ((f_.v83 & 1) != 0) {
        *f_.v85 = 0;
        f_.v84 = 0;
      }
      else {
        LOWORD(f_.v83) = 0;
      }
      v18 = *(char**)(v3 - 8);
      v3 -= 8;
      v17 = v18;
      v19 = GameRoutine_1a09c70(v18);
      if ((game_109ecc0(v18, v19, (char*)f_.v86, (char*)&f_.v83) & 1) != 0) {
        if ((f_.v86[0] & 1) != 0) {
          v17 = f_.v87;
        }
        else {
          v17 = (char*)f_.v86 + 1;
        }
      }
      v20 = GameRoutine_1a0a690(v17, 35);
      if (v20 == 0) {
        v54 = GameRoutine_1a09c70(v17);
        game_character_1076700((void*)((__int64)&f_.v79), v17, v54);
        if ((*(_BYTE*)a3 & 1) != 0) {
          v55 = a3[2];
          if (v55 != 0) {
            v56 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v56 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v55);
          }
        }
        v57 = f_.v80;
        *a3 = f_.v79;
        a3[1] = v57;
        v16 = (__int64)f_.v81;
        goto LABEL_18;
      }
      v21 = v20;
      GameRoutine_1a09c90((__int64)&f_.v79, v17, 0x3Fu);
      v22 = v21 - (_QWORD)v17;
      f_.v82 = 0;
      *((_BYTE*)&f_.v79 + v22) = a2;
      v23 = GameRoutine_1a09c70((const char*)&f_.v79);
      game_character_1076700((void*)((__int64)&f_.v76), (const char*)&f_.v79,
                             v23);
      if ((*(_BYTE*)a3 & 1) != 0) {
        v24 = a3[2];
        if (v24 != 0) {
          v25 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
        }
      }
      v26 = f_.v77;
      *a3 = f_.v76;
      a3[1] = v26;
      a3[2] = f_.v78;
      v27 = *(unsigned __int8*)a3;
      v28 = (v27 & 1) == 0;
      v29 = v27 >> 1;
      if (v28) {
        v30 = (__int64)a3 + 1;
      }
      else {
        v30 = a3[2];
      }
      if (v28) {
        v31 = v29;
      }
      else {
        v31 = a3[1];
      }
      if ((GameRoutine_10763d0(v30, v31) & 1) != 0) {
        goto LABEL_78;
      }
      v32 = 100;
      if (a2 == 99 || a2 == 102) {
        goto LABEL_43;
      }
      if (a2 == 103) {
        break;
      }
    LABEL_55:
      *((_BYTE*)&f_.v79 + v22) = v14;
      v42 = GameRoutine_1a09c70((const char*)&f_.v79);
      game_character_1076700((void*)((__int64)&f_.v76), (const char*)&f_.v79,
                             v42);
      if ((*(_BYTE*)a3 & 1) != 0) {
        v43 = a3[2];
        if (v43 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v43);
        }
      }
      v45 = f_.v77;
      *a3 = f_.v76;
      a3[1] = v45;
      a3[2] = f_.v78;
      v46 = *(unsigned __int8*)a3;
      v47 = (v46 & 1) == 0;
      v48 = v46 >> 1;
      if (v47) {
        v49 = (__int64)a3 + 1;
      }
      else {
        v49 = a3[2];
      }
      if (v47) {
        v50 = v48;
      }
      else {
        v50 = a3[1];
      }
      if ((GameRoutine_10763d0(v49, v50) & 1) != 0) {
        goto LABEL_78;
      }
      *((_BYTE*)&f_.v79 + v22) = 0;
      v51 = GameRoutine_1a09c70((const char*)&f_.v79);
      game_character_1076700((void*)((__int64)&f_.v76), (const char*)&f_.v79,
                             v51);
      if ((*(_BYTE*)a3 & 1) != 0) {
        v52 = a3[2];
        if (v52 != 0) {
          v53 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v52);
        }
      }
      v15 = f_.v77;
      *a3 = f_.v76;
      a3[1] = v15;
      v16 = f_.v78;
    LABEL_18:
      a3[2] = v16;
      if (v3 == *a1) {
        goto LABEL_78;
      }
    }
    v32 = 98;
  LABEL_43:
    *((_BYTE*)&f_.v79 + v22) = v32;
    v33 = GameRoutine_1a09c70((const char*)&f_.v79);
    game_character_1076700((void*)((__int64)&f_.v76), (const char*)&f_.v79,
                           v33);
    if ((*(_BYTE*)a3 & 1) != 0) {
      v34 = a3[2];
      if (v34 != 0) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v34);
      }
    }
    v36 = f_.v77;
    *a3 = f_.v76;
    a3[1] = v36;
    a3[2] = f_.v78;
    v37 = *(unsigned __int8*)a3;
    v38 = (v37 & 1) == 0;
    v39 = v37 >> 1;
    if (v38) {
      v40 = (__int64)a3 + 1;
    }
    else {
      v40 = a3[2];
    }
    if (v38) {
      v41 = v39;
    }
    else {
      v41 = a3[1];
    }
    if ((GameRoutine_10763d0(v40, v41) & 1) != 0) {
      goto LABEL_78;
    }
    goto LABEL_55;
  }
LABEL_78:
  v58 = f_.v83 & 1;
  if (v58 != 0) {
    v59 = f_.v84;
  }
  else {
    v59 = (unsigned __int64)(unsigned __int8)f_.v83 >> 1;
  }
  if (v59 != 0) {
    v60 = v59 + 1;
    if (v58 != 0) {
      v61 = f_.v85;
    }
    else {
      v61 = (char*)&f_.v83 + 1;
    }
    if (v60 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v60 > 0x16) {
      if ((v60 | 7) == 0x17) {
        v64 = 26;
      }
      else {
        v64 = (v60 | 7) + 1;
      }
      v63 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v64, 16, 0);
      f_.v77 = v59 + 1;
      f_.v78 = v63;
      f_.v76 = v64 | 1;
      v62 = v64 | 1;
    }
    else {
      v62 = 2 * v60;
      v63 = 0;
      f_.v77 = 0;
      f_.v78 = 0;
      f_.v76 = (unsigned __int8)(2 * v60);
    }
    if ((v62 & 1) != 0) {
      v65 = (_BYTE*)v63;
    }
    else {
      v65 = (char*)&f_.v76 + 1;
    }
    if ((v62 & 1) != 0) {
      v66 = (char*)(v63 + 1);
    }
    else {
      v66 = (char*)&f_.v76 + 2;
    }
    *v65 = 40;
    GameRoutine_1a0b940((__int64)v66, (__int64)v61, v59);
    v66[v59] = 0;
    v67 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v76, ")", 1u);
    v69 = v67[1];
    v68 = v67[2];
    f_.v79 = *v67;
    f_.v80 = v69;
    f_.v81 = (const char*)v68;
    v67[1] = 0;
    v67[2] = 0;
    *v67 = 0;
    if ((f_.v79 & 1) != 0) {
      v70 = f_.v81;
    }
    else {
      v70 = (char*)&f_.v79 + 1;
    }
    if ((f_.v79 & 1) != 0) {
      v71 = f_.v80;
    }
    else {
      v71 = (unsigned __int64)(unsigned __int8)f_.v79 >> 1;
    }
    GameRoutine_1a09ce0((__int64)a3, v70, v71);
    if ((f_.v79 & 1) != 0 && f_.v81 != nullptr) {
      v72 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v72 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, (__int64)f_.v81);
    }
    if ((f_.v76 & 1) != 0 && f_.v78 != 0) {
      v73 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v73 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, f_.v78);
    }
    v58 = f_.v83 & 1;
  }
  if (v58 != 0 && f_.v85 != nullptr) {
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v74,
                                  (__int64)f_.v85);
  }
  if ((f_.v86[0] & 1) != 0 && f_.v87 != nullptr) {
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v75,
                                  (__int64)f_.v87);
  }
}

#pragma GCC visibility pop
