#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameConst_7f8610(__int64);
__int64 GameHr_14a1390(__int64*, char);
__int64 GameHr_a867a0(__int64 result);
__int64 Scene_a70ec0(__int64 result, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN GameData_1a854a1;
extern _UNKNOWN GameData_1a8d20b;
extern _UNKNOWN GameData_1aa07e0;
extern _UNKNOWN GameData_1aa463c;
extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1aabf82;
extern _UNKNOWN GameData_1ab7ccb;
extern _UNKNOWN GameData_1ab7cdb;
extern _UNKNOWN GameData_1ab7ce3;
extern _UNKNOWN GameData_1abb9f5;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ac3010;
extern _UNKNOWN GameData_1ac3018;
extern _UNKNOWN GameData_1acaad8;
extern _UNKNOWN GameData_1aced07;
extern _UNKNOWN GameData_1ad28f9;
extern _UNKNOWN GameData_1ad653b;
extern _UNKNOWN GameData_1ae1d68;
extern _UNKNOWN GameData_1ae568e;
extern _UNKNOWN GameData_1ae577f;
extern _UNKNOWN GameData_1af500c;
extern __int64 (*GameData_1f9cdf8[])();
extern __int64 GameData_21d9f90;
extern __int64 GameData_21d9f98;
extern __int64 GameData_21d9fa0;
extern __int64 GameData_21d9fa8;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameConst_7f9a10(unsigned __int64*, char*);
void GameHr_a7dfc0(__int64*);
void GameHr_c25240(__int64*, unsigned __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void wld_a7e300(_QWORD*, __int64**);
unsigned __int64* game_templates_7f8160();
void game_templates_c235c0(__int64 a1);

unsigned __int64* game_templates_7f8160()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64* result;
  __int64 v10;
  struct {
    __int64 (**v11)();
    void* v12;
    char gap16_[16];
    unsigned __int64* v13;
  } v11_;
  char v14[4];

  if (GameData_21d9fa8 != 0) {
    v0 = (_QWORD*)GameData_21d9fa0;
    if (GameData_21d9fa0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v3, (__int64)v0);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21d9fa0 = 0;
    if (GameData_21d9f98 != 0) {
      v4 = GameData_21d9f98 & 7;
      if ((unsigned __int64)GameData_21d9f98 >= 8) {
        v6 = GameData_21d9f98 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(GameData_21d9f90 + 8 * v5) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v5 + 8) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v5 + 16) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v5 + 24) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v5 + 32) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v5 + 40) = 0;
          *(_QWORD*)(GameData_21d9f90 + 8 * v5 + 48) = 0;
          v7 = GameData_21d9f90 + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(GameData_21d9f90 + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21d9fa8 = 0;
  }
  v11_.v12 = &GameData_1ad28f9;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ad28f9);
  v14[0] = 1;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1aa463c;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aa463c);
  v14[0] = 2;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1ab7ccb;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ab7ccb);
  v14[0] = 3;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1a854a1;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a854a1);
  v14[0] = 4;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1ae1d68;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae1d68);
  v14[0] = 5;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1ae577f;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae577f);
  v14[0] = 6;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1aced07;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aced07);
  v14[0] = 7;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1af500c;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1af500c);
  v14[0] = 8;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1aabf6c;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aabf6c);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1abf89f;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abf89f);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1ad653b;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ad653b);
  v14[0] = 0;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1abb9f5;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1abb9f5);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1acaad8;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1acaad8);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1ac3010;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ac3010);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1aabf82;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aabf82);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1a8d20b;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a8d20b);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1ac3018;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ac3018);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1aa07e0;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aa07e0);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1ab7cdb;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ab7cdb);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1ae568e;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ae568e);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v12 = &GameData_1ab7ce3;
  v11_.v11 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ab7ce3);
  v14[0] = 9;
  GameConst_7f9a10((unsigned __int64*)&v11_.v11, v14);
  v11_.v13 = (unsigned __int64*)&v11_.v11;
  v11_.v11 = GameData_1f9cdf8;
  GameConst_7f8610((__int64)&v11_.v11);
  result = v11_.v13;
  if (v11_.v13 == (unsigned __int64*)&v11_.v11) {
    v10 = 32;
  }
  else {
    if (v11_.v13 == nullptr) {
      return result;
    }
    v10 = 40;
  }
  return (unsigned __int64*)(*(__int64 (**)(__int64))(*v11_.v13 + v10))(
      (__int64)v11_.v13);
}

void game_templates_c235c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64* v8;
  unsigned __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  atomic_ullong* v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  struct {
    __int64 v62;
    unsigned __int64* v63;
    unsigned __int64* v64;
    __int64 v65;
  } v62_;

  v1 = *(_QWORD*)(a1 + 112);
  v2 = *(_QWORD*)(a1 + 120);
  v3 = (__int64*)(a1 + 112);
  if (v2 != v1) {
    do {
      v2 -= 8;
      GameHr_a867a0(v2);
      v1 = *v3;
    } while (v2 != *v3);
  }
  *(_QWORD*)(a1 + 120) = v1;
  v5 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(a1 + 128) != v1) {
    v3[1] = 0;
    v3[2] = 0;
    *v3 = 0;
    if (v1 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v6, v1);
    }
  }
  v62_.v64 = nullptr;
  v62_.v65 = 0;
  v62_.v62 = 0;
  v62_.v63 = nullptr;
  wld_a7e300(&v62_.v62, (__int64**)(a1 + 88));
  v7 = v62_.v62;
  if (v62_.v62 != 0) {
    v8 = v62_.v63;
    v9 = v62_.v64;
    if (v62_.v63 != v62_.v64) {
      v10 = *(_QWORD*)(v62_.v62 + 48);
      if (v10 != 0) {
        v11 = std___1___shared_weak_count_lock(v10);
        if (v11 != 0) {
          v12 = *(_QWORD*)(v7 + 40);
          v13 = v11;
          if (v12 != 0) {
            do {
              v14 = *v8++;
              Scene_a70ec0(v12, v14);
            } while (v8 != v9);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak(v13);
          }
        }
      }
      v62_.v62 = 0;
      v62_.v64 = v62_.v63;
    }
  }
  GameHr_a7dfc0(&v62_.v62);
  v15 = *(_QWORD*)(a1 + 88);
  for (i = *(_QWORD*)(a1 + 96); i != v15; v15 = *(_QWORD*)(a1 + 88)) {
    i -= 8;
    GameHr_a867a0(i);
  }
  v17 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 96) = v15;
  if (v17 != v15) {
    *(_QWORD*)(a1 + 96) = 0;
    *(_QWORD*)(a1 + 104) = 0;
    *(_QWORD*)(a1 + 88) = 0;
    if (v15 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v18, v15);
    }
  }
  v20 = (__int64*)(a1 + 136);
  v19 = *(_QWORD*)(a1 + 136);
  v21 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 144) = v19;
  if (v21 != v19) {
    *(_QWORD*)(a1 + 144) = 0;
    *(_QWORD*)(a1 + 152) = 0;
    *v20 = 0;
    if (v19 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v22, v19);
    }
  }
  v23 = *(__int64**)(a1 + 200);
  v24 = *(__int64**)(a1 + 208);
  if (v23 != v24) {
    while (1) {
      v25 = *v23;
      v26 = v23[1];
      if (v26 == 0) {
        break;
      }
      v27 = (atomic_ullong*)(v26 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      v62_.v62 = v25;
      v62_.v63 = (unsigned __int64*)v26;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      GameHr_14a1390(&v62_.v62, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v27, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_35;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak(v26);
        if (atomic_fetch_add(v27, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        LABEL_35:
          v28 = v23[6];
          if (v28 == 0) {
            goto LABEL_31;
          }
          goto LABEL_41;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak(v26);
      v28 = v23[6];
      if (v28 != 0) {
        goto LABEL_41;
      }
    LABEL_31:
      v23 += 8;
      if (v23 == v24) {
        v23 = *(__int64**)(a1 + 200);
        v24 = *(__int64**)(a1 + 208);
        v20 = (__int64*)(a1 + 136);
        goto LABEL_43;
      }
    }
    v62_.v62 = *v23;
    v62_.v63 = nullptr;
    GameHr_14a1390(&v62_.v62, 1);
    v28 = v23[6];
    if (v28 == 0) {
      goto LABEL_31;
    }
  LABEL_41:
    (*(void (**)(__int64))(*(_QWORD*)v28 + 48LL))(v28);
    goto LABEL_31;
  }
LABEL_43:
  while (v24 != v23) {
    v29 = (__int64*)*(v24 - 2);
    if (v24 - 6 == v29) {
      v30 = 32;
    }
    else {
      if (v29 == nullptr) {
        goto LABEL_51;
      }
      v30 = 40;
    }
    (*(void (**)(__int64))(*v29 + v30))((__int64)v29);
  LABEL_51:
    v31 = *(v24 - 7);
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak(v31);
    }
    v24 -= 8;
  }
  *(_QWORD*)(a1 + 208) = v23;
  GameHr_c25240((__int64*)(a1 + 200), 0);
  GameHr_a867a0(a1 + 80);
  v32 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 80) = 0;
  if (v32 == 0) {
    goto LABEL_70;
  }
  v33 = *(_QWORD*)(a1 + 208);
  if (v32 == v33) {
    goto LABEL_67;
  }
  do {
    v34 = *(_QWORD**)(v33 - 16);
    if ((_QWORD*)(v33 - 48) == v34) {
      v35 = 32;
      goto LABEL_62;
    }
    if (v34 != nullptr) {
      v35 = 40;
    LABEL_62:
      (*(void (**)(__int64))(*v34 + v35))((__int64)v34);
    }
    v36 = *(_QWORD*)(v33 - 56);
    if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak(v36);
    }
    v33 -= 64;
  } while (v33 != v32);
  v37 = *(_QWORD*)(a1 + 200);
  *(_QWORD*)(a1 + 208) = v32;
  v32 = v37;
  if (v37 != 0) {
  LABEL_67:
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v38, v32);
  }
LABEL_70:
  v39 = *(_QWORD**)(a1 + 176);
  while (v39 != nullptr) {
    v41 = (__int64)v39;
    v39 = (_QWORD*)*v39;
    if ((*(_BYTE*)(v41 + 16) & 1) != 0 && *(_QWORD*)(v41 + 32) != 0) {
      v42 = v41;
      v43 = *(_QWORD*)(v41 + 32);
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v44 = 128;
      }
      else {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v44, v43);
      v41 = v42;
    }
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
      v40 = 128;
    }
    else {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v40, v41);
  }
  v45 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 160) = 0;
  if (v45 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v46, v45);
  }
  v47 = *v20;
  if (*v20 != 0) {
    v48 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 144) = v47;
    v49 = 128;
    if (*(_QWORD*)(v48 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(v48 + v49, v47);
  }
  v50 = *v3;
  if (*v3 != 0) {
    v51 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 120) = v50;
    v52 = 128;
    if (*(_QWORD*)(v51 + 200) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(v51 + v52, v50);
  }
  v53 = *(_QWORD*)(a1 + 88);
  if (v53 != 0) {
    v54 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 96) = v53;
    v55 = 128;
    if (*(_QWORD*)(v54 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(v54 + v55, v53);
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v56 = *(_QWORD*)(a1 + 72);
    if (v56 != 0) {
      v57 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v57, v56);
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v58 = *(_QWORD*)(a1 + 48);
    if (v58 != 0) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v59, v58);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v60 = *(_QWORD*)(a1 + 24);
    if (v60 != 0) {
      v61 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v61, v60);
    }
  }
}

#pragma GCC visibility pop
