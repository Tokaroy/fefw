#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* FloatingHelp_18b18a0(_QWORD*, _QWORD**, unsigned __int64);
__int64 BattleInfo_7905d0(__int64, __int64, int);
__int64 Element_1885f00(__int64 result, __int64);
__int64 FloatingHelp_18acc00(__int64, _QWORD*);
__int64 FloatingHelp_18aed20(__int64 result, __int64);
__int64 GameRoutine_1586d80(__int64, _DWORD*, _DWORD*, __int64, char, char,
                            char, __int64, char, char, char);
__int64 GameRoutine_790080(__int64);
__int64 GameRoutine_7992e0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__n128 BattleArea_8b9d00(__int64);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_204e618[])();
extern __int64 (*GameData_2104890[])();
extern __int64 (*GameData_2104910[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
extern __int64* GameData_2131a70[10];
extern __int64* GameData_2132090[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d238[2];
extern __int64 GameData_21319a0;
extern __int64 fw_memory_g_heap_manager_ptr;
void BattleSide_Destructor(_QWORD*);
void game_map_790ba0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_gameui_158e7e0(__int64 a1, unsigned int* a2, __int64 a3, char a4);
void game_gameui_18ae960(_QWORD* a1, char a2);

void game_gameui_158e7e0(__int64 a1, unsigned int* a2, __int64 a3, char a4)
{
  unsigned int v4;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  bool v17;
  int v18;
  int v19;
  int v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  _DWORD* v33;
  __int64 v34;
  char v35;
  char v36;
  _QWORD* v37;
  __int64 v38;
  struct {
    char gap0_[32];
    _BYTE v39[32];
    _QWORD* v40;
    char gap72_[11312];
    __int64* v51;
    __int64 v52;
    bool v53;
    char gap11401_[3];
    int v54;
    int v55;
    char v56;
  } f_;
  _QWORD v41[2];
  _QWORD v42[5];
  __int64 v43;
  __int64 v44;
  _QWORD v45[95];
  _QWORD v46[95];
  _QWORD v47[1120];
  int v48;
  __int16 v49;
  _QWORD v50[2];
  __int64 v57;

  v57 = a3;
  v4 = *a2;
  f_.v56 = a4;
  v9 = GameData_212c880[0];
  v10 = v4 & 0xFFF;
  v11 = ((v4 >> 19) & 0x1F) + 1;
  v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v10);
  v13 = v11 * *(__int16*)(v12 + 330);
  v14 = v11 * *(__int16*)(v12 + 332);
  v15 = v14 | v13;
  f_.v54 = v14;
  f_.v55 = v13;
  f_.v53 = (v14 | v13) != 0;
  if ((a4 & 1) != 0) {
    v16 = 0;
  }
  else {
    v16 = 4;
  }
  if (v14 < 0) {
    v14 = -v14;
  }
  if (v13 < 0) {
    v13 = -v13;
  }
  v17 = v14 > (unsigned int)v13;
  if (v14 <= (unsigned int)v13) {
    v18 = 1;
  }
  else {
    v18 = 2;
  }
  if (v17) {
    v19 = 6;
  }
  else {
    v19 = 5;
  }
  if ((a4 & 1) == 0) {
    v18 = v19;
  }
  if (v15 != 0) {
    v20 = v18;
  }
  else {
    v20 = v16;
  }
  GameRoutine_790080((__int64)v41);
  if ((a4 & 1) != 0) {
    BattleInfo_7905d0((__int64)v41, a3, -1);
    v22 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (*a2 & 0xFFF));
    if (HIBYTE(v49) != 0) {
      GameRoutine_7992e0((__int64)v42);
      GameRoutine_7992e0((__int64)v45);
      GameRoutine_7992e0((__int64)v46);
      GameRoutine_7992e0((__int64)v47);
      v48 = 0;
      v49 = 0;
      v50[0] = 0;
      *(_QWORD*)((char*)v50 + 6) = 0;
      BattleArea_8b9d00((__int64)&f_.v51);
    }
    v44 = v22;
    if (v22 != 0) {
      v23 = *(_QWORD*)(v22 + 576);
      if (v23 != 0) {
        v43 = 0;
        v24 = *(unsigned __int16*)(v23 + 16);
        DWORDn(v43, sizeof(v43) / 4 - 1) = 1;
        LOWORD(v43) = v24;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v24) +
                      73LL) == 17) {
          nn_os_LockMutex((__int64)&game_g_random_mutex);
          v25 = game_map_MapRandom_instance__ptr[0];
          v26 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v28 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v25 + 1) = v26;
          v29 = (v28 >> 8) ^ (v27 >> 19) ^ v28 ^ v27;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v25) = v27;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v25 + 4) = v29;
          nn_os_UnlockMutex((__int64)&game_g_random_mutex);
          DWORDn(v43, sizeof(v43) / 4 - 1) =
              DWORDn(v43, sizeof(v43) / 4 - 1) & 0xFFFFC00F |
              (16 *
               (((16 * (v29 - 1000 * ((v29 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
    }
    LODWORD(v50[0]) |= 1u;
    game_map_790ba0((__int64)v41);
    HIBYTE(v49) |= 1u;
  }
  v30 = (__int64*)fw_memory_g_heap_manager_ptr;
  v31 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24, 16, 0);
  v32 = *v9;
  *(_DWORD*)v31 = v20;
  *(_DWORD*)(v31 + 20) = 24;
  v33 = (_DWORD*)v31;
  *(_QWORD*)(v31 + 4) = 0xD0000000ALL;
  *(_QWORD*)(v31 + 12) = 0x1400000011LL;
  v34 = *(_QWORD*)(*(_QWORD*)(v32 + 64) + 8LL * (*a2 & 0xFFF));
  if (*(_BYTE*)(v34 + 105) == 4 && *(_QWORD*)(v34 + 608) != 0) {
    v35 = 1;
    v36 = *(_BYTE*)(v34 + 632) == 0;
  }
  else {
    v35 = 0;
    v36 = 0;
  }
  v37 = (_QWORD*)fw_memory_HeapManager_Allocate(*v30, 64, 16, 0);
  f_.v40 = v37;
  *v37 = GameData_204e618;
  v37[1] = v42;
  v37[2] = &f_.v55;
  v37[3] = &f_.v54;
  v37[4] = &f_.v53;
  v37[5] = &f_.v56;
  v37[6] = a2;
  v37[7] = &v57;
  GameRoutine_1586d80(a1, v33, v33 + 6, (__int64)f_.v39, 0, 0, 0, 0, 0, v35,
                      v36);
  (*(void (**)(_QWORD*))(*v37 + 40LL))(v37);
  v38 = 128;
  if (*(_QWORD*)(*v30 + 200) == 0) {
    v38 = 56;
  }
  nn_mem_StandardAllocator_Free(*v30 + v38, (__int64)v33);
  v41[0] = GameData_212d238[0] + 16;
  f_.v51 = GameData_212da50[0] + 2;
  if (f_.v52 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)f_.v52 + 8LL))(f_.v52);
    f_.v52 = 0;
  }
  v41[1] = GameData_212d258[0] + 2;
  BattleSide_Destructor(v47);
  BattleSide_Destructor(v46);
  BattleSide_Destructor(v45);
  BattleSide_Destructor(v42);
}

void game_gameui_18ae960(_QWORD* a1, char a2)
{
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  _QWORD** v20;
  __int64 v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 (***v27)(_QWORD);
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  _QWORD** v32;
  __int64 v33;
  __int64 v34;
  struct {
    _QWORD v35[4];
    _QWORD* v36;
    char gap40_[20];
    char v37;
    char gap61_[3];
    _QWORD v38[4];
    _QWORD* v39;
    char gap104_[16];
    _QWORD* v40;
    _QWORD** v41;
    unsigned __int64 v42;
  } f_;

  v3 = (__int64*)a1[21];
  v2 = (__int64*)a1[22];
  v4 = &f_.v40;
  f_.v42 = 0;
  f_.v40 = &f_.v40;
  f_.v41 = &f_.v40;
  if (v3 == v2) {
    v18 = 0;
    goto LABEL_30;
  }
  do {
    v7 = v3[1];
    if (v7 == 0) {
      v8 = 0;
    LABEL_11:
      v11 = (__int64*)a1[22];
      v12 = v3 + 2;
      if (v3 + 2 == v11) {
        v13 = v3;
        if (v3 == v11) {
          goto LABEL_18;
        }
      }
      else {
        do {
          v15 = *v12;
          v14 = v12[1];
          v16 = *(v12 - 1);
          *v12 = 0;
          v12[1] = 0;
          *(v12 - 2) = v15;
          *(v12 - 1) = v14;
          if (v16 != 0) {
            std___1___shared_weak_count___release_weak(v16);
          }
          v12 += 2;
        } while (v12 != v11);
        v11 = (__int64*)a1[22];
        v13 = v12 - 2;
        if (v13 == v11) {
        LABEL_18:
          a1[22] = v13;
          if (v8 == 0) {
            continue;
          }
          goto LABEL_26;
        }
      }
      do {
        v17 = *(v11 - 1);
        if (v17 != 0) {
          std___1___shared_weak_count___release_weak(v17);
        }
        v11 -= 2;
      } while (v11 != v13);
      goto LABEL_18;
    }
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 == 0) {
      goto LABEL_11;
    }
    v9 = *v3;
    if (*v3 == 0) {
      goto LABEL_11;
    }
    f_.v38[0] = GameData_2104890;
    f_.v38[1] = &f_.v40;
    f_.v39 = f_.v38;
    FloatingHelp_18aed20(v9, (__int64)f_.v38);
    if (f_.v39 == f_.v38) {
      v10 = 32;
      goto LABEL_24;
    }
    if (f_.v39 != nullptr) {
      v10 = 40;
    LABEL_24:
      (*(void (**)(__int64))(*f_.v39 + v10))((__int64)f_.v39);
    }
    v3 += 2;
  LABEL_26:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  } while (v3 != (__int64*)a1[22]);
  v4 = f_.v41;
  v18 = f_.v42;
LABEL_30:
  FloatingHelp_18b18a0(v4, &f_.v40, v18);
  if ((a2 & 1) != 0) {
    v19 = a1[28];
    a1[27] = 0;
    a1[28] = 0;
    if (v19 != 0) {
      std___1___shared_weak_count___release_weak(v19);
    }
    v20 = f_.v41;
    if (f_.v41 != &f_.v40) {
      v21 = GameData_21319a0;
      v22 = GameData_2131a70[0];
      while (1) {
        v23 = v20[2];
        f_.v37 = 0;
        if (v23 != nullptr) {
          v24 = __dynamic_cast(v23, v21, v22, 0);
          if (v24 != 0) {
            v25 = (__int64)v20[3];
            if (v25 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                        memory_order_relaxed);
            }
            f_.v35[0] = GameData_2104910;
            f_.v35[1] = a1;
            f_.v36 = f_.v35;
            f_.v35[2] = &f_.v37;
            Element_1885f00(v24, (__int64)f_.v35);
            if (f_.v36 == f_.v35) {
              v26 = 32;
            LABEL_48:
              (*(void (**)(__int64))(*f_.v36 + v26))((__int64)f_.v36);
            }
            else if (f_.v36 != nullptr) {
              v26 = 40;
              goto LABEL_48;
            }
          LABEL_49:
            if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
              std___1___shared_weak_count___release_weak(v25);
            }
            goto LABEL_52;
          }
          v27 = (__int64 (***)(_QWORD))__dynamic_cast(v23, v21,
                                                      GameData_2132090[0], -2);
          if (v27 != nullptr) {
            v25 = (__int64)v20[3];
            if (v25 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                        memory_order_relaxed);
            }
            if (((**v27)(v27) & 1) != 0) {
              FloatingHelp_18acc00((__int64)a1, v20 + 2);
              f_.v37 = 1;
            }
            goto LABEL_49;
          }
        }
      LABEL_52:
        if ((f_.v37 & 1) == 0) {
          v20 = (_QWORD**)v20[1];
          if (v20 != &f_.v40) {
            continue;
          }
        }
        break;
      }
    }
  }
  if (f_.v42 != 0) {
    v28 = (__int64)f_.v41;
    v29 = (_QWORD*)f_.v40[1];
    (*f_.v41)[1] = v29;
    *v29 = *(_QWORD*)v28;
    f_.v42 = 0;
    if ((_QWORD**)v28 != &f_.v40) {
      v30 = fw_memory_g_heap_manager_ptr;
      do {
        v32 = *(_QWORD***)(v28 + 8);
        v33 = *(_QWORD*)(v28 + 24);
        if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v34 = v28;
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          std___1___shared_weak_count___release_weak(v33);
          v28 = v34;
        }
        if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v30 + v31, v28);
        v28 = (__int64)v32;
      } while (v32 != &f_.v40);
    }
  }
}

#pragma GCC visibility pop
