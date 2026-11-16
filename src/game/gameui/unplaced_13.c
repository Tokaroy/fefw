#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_18b2560(_QWORD* result, _QWORD*);
__int64 GameRoutine_18ac780(__int64 result);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64* GameData_212d890[2];
extern __int64* GameData_2132090[4];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_21319a0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_18b0de0();
void __attribute__((noreturn)) GameRoutine_60a210();
void game_gameui_18ae960(_QWORD*, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_gameui_18af480(_QWORD* a1, __int64* a2, __int64 a3);
__int64 game_gameui_18afc00(__int64 (****a1)(__int64));

__int64 game_gameui_18af480(_QWORD* a1, __int64* a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  _QWORD* v38;
  char* v39;
  char* v40;
  _QWORD* v41;
  char* v42;
  _QWORD* v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  struct {
    __int64 v50;
    __int64 v51;
  } v50_;
  struct {
    _QWORD v52[2];
    __int64* v53;
    char gap40_[8];
    _QWORD* v54;
  } v52_;
  struct {
    _QWORD v55[4];
    _QWORD* v56;
  } v55_;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v7 = *a2;
      v8 = result;
      if (*a2 == 0) {
        goto LABEL_84;
      }
      v9 = (__int64*)a1[24];
      v10 = (__int64*)a1[25];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                                memory_order_relaxed);
      if (v9 != v10) {
        while (1) {
          v11 = v9[1];
          if (v11 != 0) {
            v12 = std___1___shared_weak_count_lock(v11);
            if (v12 != 0) {
              v13 = *v9;
              if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v14 = v12;
                (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                std___1___shared_weak_count___release_weak(v14);
              }
              if (v7 == v13) {
                break;
              }
            }
          }
          v9 += 8;
          if (v9 == v10) {
            v9 = v10;
            break;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
      if (v9 != (__int64*)a1[25]) {
        v15 = *(_QWORD*)(a3 + 32);
        if (v15 != 0) {
          if (v15 == a3) {
            v52_.v53 = &v50_.v50;
            (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 24LL))(
                v15, (__int64)&v50_.v50);
          }
          else {
            v52_.v53 =
                (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          }
        }
        else {
          v52_.v53 = nullptr;
        }
        GameRoutine_18b2560(&v50_.v50, v9 + 2);
        result = (__int64)v52_.v53;
        if (v52_.v53 == &v50_.v50) {
          v17 = 32;
        }
        else {
          if (v52_.v53 == nullptr) {
            goto LABEL_84;
          }
          v17 = 40;
        }
        result = (*(__int64 (**)(__int64))(*v52_.v53 + v17))((__int64)v52_.v53);
      LABEL_84:
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          return std___1___shared_weak_count___release_weak(v8);
        }
        return result;
      }
      v52_.v54 = nullptr;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      v50_.v50 = v7;
      v50_.v51 = v8;
      v16 = *(_QWORD*)(a3 + 32);
      if (v16 != 0) {
        if (v16 == a3) {
          v55_.v56 = v55_.v55;
          (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 24LL))(
              v16, (__int64)v55_.v55);
        }
        else {
          v55_.v56 =
              (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        }
      }
      else {
        v55_.v56 = nullptr;
      }
      GameRoutine_18b2560(v55_.v55, v52_.v52);
      if (v55_.v56 == v55_.v55) {
        v18 = 32;
      }
      else {
        if (v55_.v56 == nullptr) {
        LABEL_36:
          v20 = (_QWORD*)a1[25];
          v19 = a1[26];
          if ((unsigned __int64)v20 < v19) {
            *v20 = v50_.v50;
            v21 = v50_.v51;
            v20[1] = v50_.v51;
            if (v21 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                        memory_order_relaxed);
            }
            if (v52_.v54 != nullptr) {
              if (v52_.v54 == v52_.v52) {
                v20[6] = v20 + 2;
                (*(void (**)(__int64, __int64))(*v52_.v54 + 24LL))(
                    (__int64)v52_.v54, (__int64)(v20 + 2));
              }
              else {
                v20[6] = (*(__int64 (**)(__int64))(*v52_.v54 + 16LL))(
                    (__int64)v52_.v54);
              }
              v22 = v20 + 8;
            }
            else {
              v20[6] = 0;
              v22 = v20 + 8;
            }
            goto LABEL_77;
          }
          v23 = a1[24];
          v24 = (char*)v20 - v23;
          v25 = (((__int64)v20 - v23) >> 6) + 1;
          if (v25 >> 58 != 0) {
            GameRoutine_18b0de0();
          }
          v26 = v19 - v23;
          v27 = v26 >> 5;
          if (v26 >> 5 <= v25) {
            v27 = v25;
          }
          v28 = (unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFC0LL;
          v29 = 0x3FFFFFFFFFFFFFFLL;
          if (!v28) {
            v29 = v27;
          }
          if (v29 >> 58 != 0) {
            GameRoutine_60a210();
          }
          v30 = v29 << 6;
          v31 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v29 << 6, 16, 0);
          v32 = v50_.v51;
          v33 = &v24[v31];
          v34 = v31;
          *(_QWORD*)v33 = v50_.v50;
          *((_QWORD*)v33 + 1) = v32;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                    memory_order_relaxed);
          v35 = v52_.v54;
          if (v52_.v54 != nullptr) {
            if (v52_.v54 == v52_.v52) {
              *((_QWORD*)v33 + 6) = v33 + 16;
              (*(void (**)(__int64, __int64))(*v35 + 24LL))(
                  (__int64)v35, (__int64)(v33 + 16));
            }
            else {
              *((_QWORD*)v33 + 6) = (*(__int64 (**)(__int64))(
                  *v52_.v54 + 16LL))((__int64)v52_.v54);
            }
          }
          else {
            *((_QWORD*)v33 + 6) = 0;
          }
          v36 = v34 + v30;
          v37 = a1[24];
          v38 = (_QWORD*)a1[25];
          v39 = (char*)(v33 - ((char*)v38 - v37));
          v22 = v33 + 64;
          if (v38 == (_QWORD*)v37) {
          LABEL_73:
            a1[24] = v39;
            a1[25] = v22;
            a1[26] = v36;
            if (v37 != 0) {
              v47 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v47 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v37);
            }
          LABEL_77:
            v48 = v52_.v54;
            a1[25] = v22;
            if (v48 == v52_.v52) {
              v49 = 32;
            }
            else {
              if (v48 == nullptr) {
                goto LABEL_82;
              }
              v49 = 40;
            }
            (*(void (**)(__int64))(*v48 + v49))((__int64)v48);
          LABEL_82:
            result = v50_.v51;
            if (v50_.v51 != 0) {
              result = std___1___shared_weak_count___release_weak(v50_.v51);
            }
            goto LABEL_84;
          }
          v40 = &v24[-64 * (((__int64)v38 - v37) >> 6)];
          v41 = (_QWORD*)a1[24];
          v42 = &v40[v34 + 48];
          do {
            *((_QWORD*)v42 - 6) = *v41;
            *((_QWORD*)v42 - 5) = v41[1];
            *v41 = 0;
            v41[1] = 0;
            v43 = (_QWORD*)v41[6];
            if (v43 != nullptr) {
              if (v41 + 2 == v43) {
                *(_QWORD*)v42 = v42 - 32;
                (*(void (**)(__int64, __int64))(*(_QWORD*)v41[6] + 24LL))(
                    v41[6], (__int64)(v42 - 32));
              }
              else {
                *(_QWORD*)v42 = v43;
                v41[6] = 0;
              }
            }
            else {
              *(_QWORD*)v42 = 0;
            }
            v41 += 8;
            v42 += 64;
          } while (v41 != v38);
          while (1) {
            v44 = *(_QWORD**)(v37 + 48);
            if ((_QWORD*)(v37 + 16) == v44) {
              break;
            }
            if (v44 != nullptr) {
              v45 = 40;
            LABEL_69:
              (*(void (**)(__int64))(*v44 + v45))((__int64)v44);
            }
            v46 = *(_QWORD*)(v37 + 8);
            if (v46 != 0) {
              std___1___shared_weak_count___release_weak(v46);
            }
            v37 += 64;
            if ((_QWORD*)v37 == v38) {
              v37 = a1[24];
              goto LABEL_73;
            }
          }
          v45 = 32;
          goto LABEL_69;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))(*v55_.v56 + v18))((__int64)v55_.v56);
      goto LABEL_36;
    }
  }
  return result;
}

__int64 game_gameui_18afc00(__int64 (****a1)(__int64))
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 (***v4)(__int64);
  __int64 (***v5)(__int64);
  void (*v6)(__int64, __int64);
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 (***v12)(__int64);
  __int64 (****v13)(__int64);
  __int64 v14;
  __int64 v15;
  __int64 v16;
  void (*v17)(__int64, __int64);
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  struct {
    __int64* v21;
    __int64 v22;
    __int64 (****v23)(__int64);
  } v21_;
  struct {
    __int64 (***v24)(__int64);
    __int64 v25;
  } v24_;

  v1 = *(_QWORD*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] == 0 || *(_QWORD*)(v1 + 152) != 0 ||
      *(int*)(v1 + 252) > 0) {
    return 0;
  }
  if ((*(_BYTE*)(v1 + 257) & 1) != 0) {
    v4 = *a1;
    v3 = (__int64)a1[1];
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v4 == nullptr) {
    LABEL_18:
      if (v3 == 0) {
        return 0;
      }
    LABEL_19:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
      return 0;
    }
  }
  else {
    game_gameui_18ae960(*(_QWORD**)GameData_212d8b0[0], *(_BYTE*)(v1 + 258));
    result = *(_QWORD*)(v1 + 224);
    *(_BYTE*)(v1 + 257) = 1;
    if (result == 0) {
      return result;
    }
    result = std___1___shared_weak_count_lock(result);
    if (result == 0) {
      return result;
    }
    v4 = *(__int64 (****)(__int64))(v1 + 216);
    v3 = result;
    if (v4 == nullptr) {
      goto LABEL_18;
    }
  }
  v5 = (__int64 (***)(__int64))__dynamic_cast(v4, GameData_21319a0,
                                              GameData_2132090[0], -2);
  if (v5 == nullptr) {
    goto LABEL_18;
  }
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    if (((**v5)((__int64)v5) & 1) != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_22;
    }
  LABEL_24:
    game_gameui_18ae960((_QWORD*)v1, 1);
    v7 = *(_QWORD*)(v1 + 224);
    v21_.v21 = nullptr;
    v21_.v22 = 0;
    if (v7 != 0 &&
        (v8 = std___1___shared_weak_count_lock(v7), v21_.v22 = v8, v8 != 0) &&
        (v9 = v8, v10 = *(__int64**)(v1 + 216), v21_.v21 = v10,
         v10 != nullptr) &&
        (v11 = v9,
         (v12 = (__int64 (***)(__int64))__dynamic_cast(
              v10, GameData_21319a0, GameData_2132090[0], -2)) != nullptr)) {
      v13 = (__int64 (****)(__int64))&v21_.v21;
      v24_.v24 = v12;
      v24_.v25 = v11;
    }
    else {
      v13 = &v24_.v24;
    }
    *v13 = nullptr;
    v13[1] = nullptr;
    v14 = v21_.v22;
    if (v21_.v22 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v21_.v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
    }
    if (v24_.v24 == nullptr || ((**v24_.v24)((__int64)v24_.v24) & 1) == 0) {
      v18 = v24_.v25;
      if (v24_.v25 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
      }
      if (v3 == 0) {
        return 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
      goto LABEL_19;
    }
    v16 = *(_QWORD*)(v1 + 216);
    v15 = *(_QWORD*)(v1 + 224);
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                memory_order_relaxed);
    }
    v19_.v19 = v16;
    v19_.v20 = v15;
    v17 = *(void (**)(__int64, __int64))(*(_QWORD*)(v1 + 8) + 16LL);
    v21_.v21 = GameData_212d890[0] + 2;
    LODWORD(v21_.v22) = 43;
    v21_.v23 = (__int64 (****)(__int64))&v19_.v19;
    v17(v1 + 8, (__int64)&v21_.v21);
    if (v19_.v20 != 0) {
      std___1___shared_weak_count___release_weak(v19_.v20);
    }
    GameRoutine_18ac780((__int64)&v24_.v24);
    goto LABEL_40;
  }
  if (((**v5)((__int64)v5) & 1) == 0) {
    goto LABEL_24;
  }
LABEL_22:
  v24_.v24 = v4;
  v24_.v25 = v3;
  v6 = *(void (**)(__int64, __int64))(*(_QWORD*)(v1 + 8) + 16LL);
  v21_.v21 = GameData_212d890[0] + 2;
  LODWORD(v21_.v22) = 43;
  v21_.v23 = &v24_.v24;
  v6(v1 + 8, (__int64)&v21_.v21);
  if (v24_.v25 != 0) {
    std___1___shared_weak_count___release_weak(v24_.v25);
  }
LABEL_40:
  if (v3 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  return 1;
}

#pragma GCC visibility pop
