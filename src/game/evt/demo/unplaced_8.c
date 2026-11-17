#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_f2d940(_QWORD* result, _QWORD*);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_a85860(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64 (*GameData_2016a50[])();
extern __int64 (*GameData_2016ad0[])();
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9d80;
extern __int64 GameData_21c9da0;
extern __int64 GameData_22336e0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_evt_demo_11c9d00_alt1(__int64 a1, const char* a2, __int64 a3,
                                __int64 a4);
void game_evt_demo_11c9d00(__int64 a1, char* a2, __int64 a3, __int64 a4);

void game_evt_demo_11c9d00(__int64 a1, char* a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  _DWORD* v31;
  int v32;
  unsigned int v33;
  __int128 v34;
  char* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  struct {
    __int64 v53;
    unsigned __int64 v54;
    char* v55;
  } v53_;
  struct {
    __int16 v56[8];
    __int64 v57;
    int v58;
  } v56_;
  struct {
    _QWORD v59[4];
    _QWORD* v60;
  } v59_;
  struct {
    _QWORD v61[4];
    _QWORD* v62;
    char gap152_[8];
    char v63;
    char gap161_[7];
    char v64;
    char gap169_[7];
    __int16 v65;
    char gap178_[14];
    __int64 v66;
    char gap200_[8];
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int16 v73;
  } v61_;
  struct {
    __int64 v74;
    unsigned __int64 v75;
    char* v76;
  } v74_;
  struct {
    _QWORD v77[4];
    _QWORD* v78;
  } v77_;

  v8 = GameRoutine_1a09c70(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_128;
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16, 0);
    *(_QWORD*)(a1 + 8) = v9;
    *(_QWORD*)(a1 + 16) = v10;
    *(_QWORD*)a1 = v11 | 1;
  }
  else {
    *(_BYTE*)a1 = 2 * v8;
    v10 = a1 + 1;
    if (v8 == 0) {
      goto LABEL_10;
    }
  }
  GameRoutine_1a0b940(v10, (__int64)a2, v9);
LABEL_10:
  *(_BYTE*)(v10 + v9) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 80) = 0x3F80000000000000LL;
  if (*(_DWORD*)(GameData_22336e0 + 272) != 1) {
    return;
  }
  v12 = game_HashString(a3);
  if (v12 == 0) {
    return;
  }
  v13 = *(_QWORD*)(GameData_21c9da0 + 96);
  if (v13 == 0 | *(_QWORD*)(GameData_21c9da0 + 112) == 0) {
    return;
  }
  v15 = v13 - 1;
  if ((v13 & (v13 - 1)) != 0) {
    v16 = v12;
    if (v12 >= v13) {
      v16 = v12 % v13;
    }
  }
  else {
    v16 = v15 & v12;
  }
  v17 = *(_QWORD**)(*(_QWORD*)(GameData_21c9da0 + 88) + 8 * v16);
  if (v17 == nullptr) {
    return;
  }
  v18 = (_QWORD*)*v17;
  if (v18 == nullptr) {
    return;
  }
  if ((v13 & v15) == 0) {
    while (1) {
      v20 = v18[1];
      if (v20 == v12) {
        if (v18[2] == v12) {
          goto LABEL_36;
        }
      }
      else if ((v20 & v15) != v16) {
        return;
      }
      v18 = (_QWORD*)*v18;
      if (v18 == nullptr) {
        return;
      }
    }
  }
  while (1) {
    v19 = v18[1];
    if (v19 == v12) {
      break;
    }
    if (v19 >= v13) {
      v19 %= v13;
    }
    if (v19 != v16) {
      return;
    }
  LABEL_25:
    v18 = (_QWORD*)*v18;
    if (v18 == nullptr) {
      return;
    }
  }
  if (v18[2] != v12) {
    goto LABEL_25;
  }
LABEL_36:
  v21 = v18[3];
  if (v21 == 0) {
    return;
  }
  v22 = game_HashString(a4);
  if (v22 == 0) {
    return;
  }
  v23 = *(_QWORD*)(GameData_21c9d80 + 96);
  if (v23 == 0 | *(_QWORD*)(GameData_21c9d80 + 112) == 0) {
    return;
  }
  v25 = v23 - 1;
  if ((v23 & (v23 - 1)) != 0) {
    v26 = v22;
    if (v22 >= v23) {
      v26 = v22 % v23;
    }
  }
  else {
    v26 = v25 & v22;
  }
  v27 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d80 + 88) + 8 * v26);
  if (v27 == nullptr) {
    return;
  }
  v28 = (_QWORD*)*v27;
  if (v28 == nullptr) {
    return;
  }
  if ((v23 & v25) == 0) {
    while (1) {
      v30 = v28[1];
      if (v30 == v22) {
        if (v28[2] == v22) {
          goto LABEL_62;
        }
      }
      else if ((v30 & v25) != v26) {
        return;
      }
      v28 = (_QWORD*)*v28;
      if (v28 == nullptr) {
        return;
      }
    }
  }
  while (2) {
    v29 = v28[1];
    if (v29 != v22) {
      if (v29 >= v23) {
        v29 %= v23;
      }
      if (v29 != v26) {
        return;
      }
    }
    else if (v28[2] == v22) {
      break;
    }
    v28 = (_QWORD*)*v28;
    if (v28 == nullptr) {
      return;
    }
    continue;
  }
LABEL_62:
  v31 = (_DWORD*)v28[3];
  if (v31 == nullptr) {
    return;
  }
  *(_QWORD*)(a1 + 24) = v21;
  v32 = v31[9];
  v33 = v31[10];
  *(_DWORD*)(a1 + 64) = v31[8];
  *(_DWORD*)(a1 + 68) = v32;
  v34 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v34 + 1) = v33;
  *(_OWORD*)(a1 + 64) = v34;
  *(_DWORD*)(a1 + 80) = v31[11];
  *(_DWORD*)(a1 + 84) = *(_DWORD*)(v21 + 40);
  if (*(_QWORD*)(v21 + 32) != 0) {
    v35 = *(const char**)(v21 + 32);
  }
  else {
    v35 = &GameData_1a9f09e;
  }
  v36 = GameRoutine_1a09c70(v35);
  if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_128:
    String_60a1d0();
  }
  v37 = v36;
  if (v36 >= 0x17) {
    if ((v36 | 7) == 0x17) {
      v39 = 26;
    }
    else {
      v39 = (v36 | 7) + 1;
    }
    v38 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v39,
                                                16, 0);
    v74_.v75 = v37;
    v74_.v76 = v38;
    v74_.v74 = v39 | 1;
    goto LABEL_74;
  }
  LOBYTE(v74_.v74) = 2 * v36;
  v38 = (char*)&v74_.v74 + 1;
  if (v36 != 0) {
  LABEL_74:
    GameRoutine_1a0b940((__int64)v38, (__int64)v35, v37);
  }
  v38[v37] = 0;
  v56_.v58 = 0;
  v59_.v60 = nullptr;
  v61_.v62 = nullptr;
  v61_.v63 = 0;
  v61_.v64 = 0;
  v61_.v65 = 0;
  v53_.v53 = 0;
  v53_.v54 = 0;
  v53_.v55 = nullptr;
  v56_.v56[0] = 0;
  v40 = *((_QWORD*)GameData_212c540 + 1);
  v61_.v67 = *(_QWORD*)GameData_212c540;
  v61_.v68 = v40;
  v61_.v69 = v61_.v67;
  v61_.v70 = v40;
  v41 = *((_QWORD*)GameData_212c548 + 1);
  v61_.v71 = *(_QWORD*)GameData_212c548;
  v61_.v72 = v41;
  v61_.v73 = 1;
  GameRoutine_60a020((__int64)v56_.v56, a2);
  if ((v74_.v74 & 1) != 0) {
    GameRoutine_64df20(&v53_.v53, (__int64)v74_.v76, v74_.v75);
  }
  else {
    v53_.v53 = v74_.v74;
    v53_.v54 = v74_.v75;
    v53_.v55 = v74_.v76;
  }
  if ((v74_.v74 & 1) != 0) {
    v42 = v74_.v75;
  }
  else {
    v42 = (unsigned __int64)(unsigned __int8)v74_.v74 >> 1;
  }
  if ((v74_.v74 & 1) != 0) {
    v43 = v74_.v76;
  }
  else {
    v43 = (char*)&v74_.v74 + 1;
  }
  v44 = GameRoutine_1a09c60((__int64)v43, 47, v42);
  if (v44 != 0 && v44 - (_QWORD)v43 != -1) {
    HIBYTE(v61_.v73) = 1;
  }
  v77_.v78 = v77_.v77;
  v77_.v77[0] = GameData_2016a50;
  v77_.v77[1] = a1;
  GameRoutine_f2d940(v77_.v77, v59_.v59);
  if (v77_.v78 == v77_.v77) {
    v45 = 32;
  LABEL_91:
    (*(void (**)(__int64))(*v77_.v78 + v45))((__int64)v77_.v78);
  }
  else if (v77_.v78 != nullptr) {
    v45 = 40;
    goto LABEL_91;
  }
  v77_.v78 = v77_.v77;
  v77_.v77[0] = GameData_2016ad0;
  v77_.v77[1] = a1;
  GameRoutine_654050(v77_.v77, v61_.v61);
  if (v77_.v78 == v77_.v77) {
    v46 = 32;
  LABEL_96:
    (*(void (**)(__int64))(*v77_.v78 + v46))((__int64)v77_.v78);
  }
  else if (v77_.v78 != nullptr) {
    v46 = 40;
    goto LABEL_96;
  }
  *(_BYTE*)(a1 + 88) = 1;
  GameRoutine_a85860(GameData_21c6978, (__int64)&v53_.v53);
  if ((v61_.v65 & 1) != 0 && v61_.v66 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  v61_.v66);
  }
  if (v61_.v62 == v61_.v61) {
    v48 = 32;
  LABEL_106:
    (*(void (**)(__int64))(*v61_.v62 + v48))((__int64)v61_.v62);
  }
  else if (v61_.v62 != nullptr) {
    v48 = 40;
    goto LABEL_106;
  }
  if (v59_.v60 == v59_.v59) {
    v49 = 32;
  LABEL_111:
    (*(void (**)(__int64))(*v59_.v60 + v49))((__int64)v59_.v60);
  }
  else if (v59_.v60 != nullptr) {
    v49 = 40;
    goto LABEL_111;
  }
  if ((v56_.v56[0] & 1) != 0 && v56_.v57 != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v50,
                                  v56_.v57);
  }
  if ((v53_.v53 & 1) != 0 && v53_.v55 != nullptr) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v51,
                                  (__int64)v53_.v55);
  }
  if ((v74_.v74 & 1) != 0 && v74_.v76 != nullptr) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v52,
                                  (__int64)v74_.v76);
  }
}

#pragma GCC visibility pop
