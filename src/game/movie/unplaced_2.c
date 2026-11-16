#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 Manager_18cfa40(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_playDirect_ff6f0(__int64, __int64, __int64, unsigned int,
                             unsigned int, int, float, float);
bool GameManager_a35ca0(__int64, unsigned __int8*);
extern __int64* GameData_212c598[2];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void game_movie_11cdbe0(__int64 a1);

void game_movie_11cdbe0(__int64 a1)
{
  __int64 v1;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;
  char* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  char v31;
  __int64 v32;
  unsigned __int64 v33;
  char* v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  char* v38;
  unsigned __int8* v39;
  unsigned __int64 v40;
  char* v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  char* v45;
  char v46;
  __int64 v47;
  char* v48;
  unsigned __int64 v49;
  char* v50;
  unsigned __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  char* v56;
  char* v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  struct {
    char gap0_[8];
    __int64 v63;
    unsigned __int64 v64;
    char* v65;
    __int64 v66;
    unsigned __int64 v67;
    char* v68;
    __int64 v69;
    unsigned __int64 v70;
    char* v71;
    __int64 v72;
    unsigned __int64 v73;
    char* v74;
    char gap104_[16];
    __int64 v75;
    unsigned __int64 v76;
    char* v77;
  } f_;

  v1 = *(_QWORD*)(a1 + 656);
  *(_DWORD*)(a1 + 744) = 0;
  v3 = *(const char**)(v1 + 32);
  if (v3 != nullptr) {
    v4 = v3;
  }
  else {
    v4 = &GameData_1a9f09e;
  }
  v5 = GameRoutine_1a09c70(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_165;
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    f_.v73 = v6;
    f_.v74 = v7;
    f_.v72 = v8 | 1;
  }
  else {
    LOBYTE(f_.v72) = 2 * v5;
    v7 = (char*)&f_.v72 + 1;
    if (v5 == 0) {
      goto LABEL_13;
    }
  }
  GameRoutine_1a0b940((__int64)v7, (__int64)v4, v6);
LABEL_13:
  v7[v6] = 0;
  if ((f_.v72 & 1) != 0) {
    v9 = f_.v74;
  }
  else {
    v9 = (char*)&f_.v72 + 1;
  }
  if ((f_.v72 & 1) != 0) {
    v10 = f_.v73;
  }
  else {
    v10 = (unsigned __int64)(unsigned __int8)f_.v72 >> 1;
  }
  if (v10 != 0) {
    v11 = v10;
    do {
      if (v11 == 0) {
        goto LABEL_42;
      }
      v12 = &v9[v11--];
    } while (*(v12 - 1) != 46);
    if (v11 != -1) {
      if (v10 >= v11) {
        v13 = v11;
      }
      else {
        v13 = v10;
      }
      if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_165;
      }
      if (v13 >= 0x17) {
        if ((v13 | 7) == 0x17) {
          v15 = 26;
        }
        else {
          v15 = (v13 | 7) + 1;
        }
        v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v15, 16, 0);
        f_.v76 = v13;
        f_.v77 = v14;
        f_.v75 = v15 | 1;
      }
      else {
        LOBYTE(f_.v75) = 2 * v13;
        v14 = (char*)&f_.v75 + 1;
        if (v11 == 0) {
        LABEL_36:
          v16 = f_.v72;
          v14[v13] = 0;
          if ((v16 & 1) != 0 && f_.v74 != nullptr) {
            v17 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)f_.v74);
          }
          f_.v72 = f_.v75;
          f_.v73 = f_.v76;
          f_.v74 = f_.v77;
          goto LABEL_42;
        }
      }
      GameRoutine_1a0b940((__int64)v14, (__int64)v9, v13);
      goto LABEL_36;
    }
  }
LABEL_42:
  if ((*(_BYTE*)(a1 + 696) & 1) != 0) {
    fw_text_String_CopyTerminated(&f_.v69, *(_QWORD*)(a1 + 712),
                                  *(_QWORD*)(a1 + 704));
  }
  else {
    v18 = *(_QWORD*)(a1 + 704);
    v19 = *(_QWORD*)(a1 + 712);
    f_.v69 = *(_QWORD*)(a1 + 696);
    f_.v70 = v18;
    f_.v71 = (char*)v19;
  }
  v20 = f_.v70;
  v21 = (__int64)f_.v71;
  v22 = f_.v69 & 1;
  v23 = (unsigned __int64)(unsigned __int8)f_.v69 >> 1;
  if (v22 != 0) {
    v24 = f_.v71;
  }
  else {
    v24 = (char*)&f_.v69 + 1;
  }
  if ((f_.v69 & 1) != 0) {
    v25 = f_.v70;
  }
  else {
    v25 = (unsigned __int64)(unsigned __int8)f_.v69 >> 1;
  }
  if (v25 != 0) {
    v26 = v25;
    do {
      if (v26 == 0) {
        goto LABEL_74;
      }
      v27 = &v24[v26--];
    } while (*(v27 - 1) != 46);
    if (v26 != -1) {
      if (v25 >= v26) {
        v28 = v26;
      }
      else {
        v28 = v25;
      }
      if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_165;
      }
      if (v28 >= 0x17) {
        if ((v28 | 7) == 0x17) {
          v30 = 26;
        }
        else {
          v30 = (v28 | 7) + 1;
        }
        v29 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v30, 16, 0);
        f_.v76 = v28;
        f_.v77 = v29;
        f_.v75 = v30 | 1;
      }
      else {
        LOBYTE(f_.v75) = 2 * v28;
        v29 = (char*)&f_.v75 + 1;
        if (v26 == 0) {
        LABEL_68:
          v31 = f_.v69;
          v29[v28] = 0;
          if ((v31 & 1) != 0 && f_.v71 != nullptr) {
            v32 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v32 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)f_.v71);
          }
          v20 = f_.v76;
          v21 = (__int64)f_.v77;
          v22 = f_.v75 & 1;
          f_.v69 = f_.v75;
          f_.v70 = f_.v76;
          v23 = (unsigned __int8)f_.v75 >> 1;
          f_.v71 = f_.v77;
          goto LABEL_74;
        }
      }
      GameRoutine_1a0b940((__int64)v29, (__int64)v24, v28);
      goto LABEL_68;
    }
  }
LABEL_74:
  if (v22 != 0) {
    v33 = v20;
  }
  else {
    v33 = v23;
  }
  if (v22 != 0) {
    v34 = (char*)v21;
  }
  else {
    v34 = (char*)&f_.v69 + 1;
  }
  v35 = v33 + 2;
  if (v33 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_165;
  }
  if (v35 >= 0x17) {
    if ((v35 | 7) == 0x17) {
      v37 = 26;
    }
    else {
      v37 = (v35 | 7) + 1;
    }
    v38 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v37,
                                                16, 0);
    f_.v67 = v33 + 2;
    f_.v68 = v38;
    f_.v66 = v37 | 1;
    *(_WORD*)v38 = 24406;
    v36 = v38 + 2;
  }
  else {
    f_.v67 = 0;
    f_.v68 = nullptr;
    f_.v66 = (unsigned __int8)(2 * v35);
    *(_WORD*)((char*)&f_.v66 + 1) = 24406;
    v36 = (char*)&f_.v66 + 3;
    if (v33 == 0) {
      goto LABEL_89;
    }
  }
  GameRoutine_1a0b940((__int64)v36, (__int64)v34, v33);
LABEL_89:
  v36[v33] = 0;
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    v39 = (f_.v66 & 1) != 0 ? (unsigned __int8*)f_.v68
                            : (unsigned __int8*)&f_.v66 + 1;
    if (GameManager_a35ca0(*game_sound_g_game_sound_ptr[0], v39)) {
      goto LABEL_115;
    }
  }
  if ((f_.v72 & 1) != 0) {
    v40 = f_.v73;
  }
  else {
    v40 = (unsigned __int64)(unsigned __int8)f_.v72 >> 1;
  }
  if ((f_.v72 & 1) != 0) {
    v41 = f_.v74;
  }
  else {
    v41 = (char*)&f_.v72 + 1;
  }
  v42 = v40 + 2;
  if (v40 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_165:
    String_60a1d0();
  }
  if (v42 >= 0x17) {
    if ((v42 | 7) == 0x17) {
      v44 = 26;
    }
    else {
      v44 = (v42 | 7) + 1;
    }
    v45 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v44,
                                                16, 0);
    f_.v76 = v40 + 2;
    f_.v77 = v45;
    f_.v75 = v44 | 1;
    *(_WORD*)v45 = 24406;
    v43 = v45 + 2;
    goto LABEL_108;
  }
  f_.v76 = 0;
  f_.v77 = nullptr;
  v43 = (char*)&f_.v75 + 3;
  f_.v75 = (unsigned __int8)(2 * v42);
  *(_WORD*)((char*)&f_.v75 + 1) = 24406;
  if (v40 != 0) {
  LABEL_108:
    GameRoutine_1a0b940((__int64)v43, (__int64)v41, v40);
  }
  v46 = f_.v66;
  v43[v40] = 0;
  if ((v46 & 1) != 0 && f_.v68 != nullptr) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  (__int64)f_.v68);
  }
  f_.v66 = f_.v75;
  f_.v67 = f_.v76;
  f_.v68 = f_.v77;
LABEL_115:
  if ((f_.v66 & 1) != 0) {
    v48 = f_.v68;
  }
  else {
    v48 = (char*)&f_.v66 + 1;
  }
  snd_Fade_Fade_10c830((__int64)&f_.v75, 0x0.0p+0f);
  snd_playDirect_ff6f0((__int64)"movie_voice", (__int64)v48, (__int64)&f_.v75,
                       0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(&f_.v75);
  if ((f_.v72 & 1) != 0) {
    v49 = f_.v73;
  }
  else {
    v49 = (unsigned __int64)(unsigned __int8)f_.v72 >> 1;
  }
  if ((f_.v72 & 1) != 0) {
    v50 = f_.v74;
  }
  else {
    v50 = (char*)&f_.v72 + 1;
  }
  v51 = v49 + 3;
  if (v49 + 3 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_165;
  }
  if (v51 > 0x16) {
    if ((v51 | 7) == 0x17) {
      v54 = 26;
    }
    else {
      v54 = (v51 | 7) + 1;
    }
    v53 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v54, 16, 0);
    f_.v64 = v49 + 3;
    f_.v65 = (char*)v53;
    f_.v63 = v54 | 1;
    v52 = v54 | 1;
  }
  else {
    v52 = 2 * v51;
    v53 = 0;
    f_.v64 = 0;
    f_.v65 = nullptr;
    f_.v63 = (unsigned __int8)(2 * v51);
  }
  v55 = (v52 & 1) == 0;
  if ((v52 & 1) != 0) {
    v56 = (char*)v53;
  }
  else {
    v56 = (char*)&f_.v63 + 1;
  }
  v56[2] = 95;
  *(_WORD*)v56 = 17747;
  if (v55) {
    v57 = (char*)&f_.v63 + 4;
  }
  else {
    v57 = (char*)(v53 + 3);
  }
  if (v49 != 0) {
    GameRoutine_1a0b940((__int64)v57, (__int64)v50, v49);
  }
  v57[v49] = 0;
  if ((f_.v63 & 1) != 0) {
    v58 = f_.v65;
  }
  else {
    v58 = (char*)&f_.v63 + 1;
  }
  snd_Fade_Fade_10c830((__int64)&f_.v75, 0x0.0p+0f);
  snd_playDirect_ff6f0((__int64)"movie_se", (__int64)v58, (__int64)&f_.v75, 0,
                       0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(&f_.v75);
  if ((*(_BYTE*)(a1 + 691) & 1) == 0) {
    Manager_18cfa40(*GameData_212c598[0], a1 + 720);
  }
  if ((f_.v63 & 1) != 0 && f_.v65 != nullptr) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v59,
                                  (__int64)f_.v65);
  }
  if ((f_.v66 & 1) != 0 && f_.v68 != nullptr) {
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v60,
                                  (__int64)f_.v68);
  }
  if ((f_.v69 & 1) != 0 && f_.v71 != nullptr) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v61,
                                  (__int64)f_.v71);
  }
  if ((f_.v72 & 1) != 0 && f_.v74 != nullptr) {
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v62,
                                  (__int64)f_.v74);
  }
}

#pragma GCC visibility pop
