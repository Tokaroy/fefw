#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 GameHr_d85ce0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 GameData_212dbb8[9];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
void HubNatives_ccbf80(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_cdcc10();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_hub_ee2760(__int64 a1, _QWORD* a2, __int128* a3);

__int64 game_hub_ee2760(__int64 a1, _QWORD* a2, __int128* a3)
{
  __int64 result;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int128 v16;
  _QWORD* v17;
  _QWORD* v18;
  char* v19;
  char* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  signed __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  _OWORD* v31;
  __int64 v32;
  char* v33;
  char* v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int128 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int128 v48;
  __int128 v49;
  __int128 v50;
  _QWORD v51[3];
  struct {
    _BYTE v52[592];
    char v53;
    char gap657_[15];
    __int128 v54;
    int v55;
    char gap692_[12];
    char v56;
    char gap705_[15];
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v52_;
  struct {
    __int64 v61;
    __int64 v62;
    __int64 v63;
    char gap776_[8];
    __int128 v64;
    unsigned __int8 v65;
    char gap801_[15];
    char v66;
  } v61_;

  if (game_gmap_GmapClock_instance_ == 0) {
    return 0;
  }
  result = 0;
  if (a2 != nullptr &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v5 = a2[3];
    if (v5 != 0 && (v7 = std___1___shared_weak_count_lock(v5)) != 0) {
      v8 = a2[2] + 24LL;
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    else {
      v8 = 24;
    }
    *(_QWORD*)&v10 = *(_QWORD*)(v8 + 136);
    v11 = *(_DWORD*)(v8 + 144);
    v12 = *(_DWORD*)(v8 + 148);
    v52_.v52[0] = 0;
    *((_QWORD*)&v10 + 1) = v11;
    v52_.v53 = 0;
    v61_.v66 = 0;
    v52_.v56 = 1;
    v52_.v55 = v12;
    v52_.v54 = v10;
    v13 = *(_QWORD*)GameData_212dbb8[0];
    v14 = std___1___shared_weak_count_lock(a2[3]);
    LocatorDispos_db2180((void*)(v51), (unsigned __int8*)(v13 + 40),
                         (unsigned __int8*)(a2[2] + 616LL));
    v15 = v51[0];
    LOBYTE(v61_.v61) = 0;
    v52_.v60 = 0;
    LOWORD(v51[0]) = 0;
    v52_.v57 = v15;
    v52_.v58 = v51[1];
    v52_.v59 = v51[2];
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
    }
    v52_.v60 = 0x1E00000000LL;
    if (*((_BYTE*)a3 + 16) != 0) {
      v16 = *a3;
      v17 = (_QWORD*)a2[10];
      v18 = (_QWORD*)a2[11];
      v48 = *a3;
      if (v17 == v18) {
        v19 = nullptr;
        v20 = nullptr;
        v38 = 1;
      }
      else {
        v19 = nullptr;
        v20 = nullptr;
        v21 = 0;
        do {
          v22 = v17[1];
          if (v22 != 0 && (v23 = std___1___shared_weak_count_lock(v22)) != 0) {
            *(_QWORD*)&v24 = *(_QWORD*)(*v17 + 160LL);
            {
              __typeof__(v16) z_ = (__typeof__(v16)){0};
              LODWORD(z_) = *(_DWORD*)(*v17 + 168LL);
              v16 = z_;
            }
            *((_QWORD*)&v24 + 1) = v16;
            if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v25 = v23;
              v49 = v24;
              (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
              std___1___shared_weak_count___release_weak(v25);
              v24 = v49;
            }
          }
          else {
            *(_QWORD*)&v24 = (*(_QWORD*)0xA0LL);
            {
              __typeof__(v16) z_ = (__typeof__(v16)){0};
              LODWORD(z_) = *(((_DWORD*)0xA4LL) + 1);
              v16 = z_;
            }
            *((_QWORD*)&v24 + 1) = v16;
          }
          if ((unsigned __int64)v19 < v21) {
            *(_OWORD*)v19 = v24;
            v19 += 16;
          }
          else {
            v26 = v19 - v20;
            v27 = (v19 - v20) >> 4;
            v28 = v27 + 1;
            if ((unsigned __int64)(v27 + 1) >> 60 != 0) {
              goto LABEL_73;
            }
            v50 = v24;
            if ((__int64)(v21 - (_QWORD)v20) >> 3 > v28) {
              v28 = (__int64)(v21 - (_QWORD)v20) >> 3;
            }
            if (v21 - (unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF0LL) {
              v29 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v29 = v28;
            }
            if (v29 >> 60 != 0) {
              GameRoutine_60a210();
            }
            v30 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v29, 16, 0);
            DWORD1(v16) = DWORD1(v50);
            v31 = (_OWORD*)(v30 + v26);
            v32 = v30 + v26 - 16 * v27;
            *v31 = v50;
            v33 = (char*)(v31 + 1);
            if (v20 != v19) {
              v34 = v20;
              v35 = (_QWORD*)v32;
              do {
                v35[1] = *((_QWORD*)v34 + 1);
                v36 = *(_QWORD*)v34;
                v34 += 16;
                *v35 = v36;
                v35 += 2;
              } while (v34 != v19);
            }
            v21 = v30 + 16 * v29;
            if (v20 != nullptr) {
              v37 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v37 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, (__int64)v20);
            }
            v20 = (char*)v32;
            v19 = v33;
          }
          v17 += 2;
        } while (v17 != v18);
        v38 = 1;
      }
    }
    else {
      v19 = nullptr;
      v38 = 0;
      v20 = nullptr;
      v48 = (__typeof__(v48)){0};
    }
    if (v61_.v66 != 1) {
      v40 = v19 - v20;
      v61_.v62 = 0;
      v61_.v63 = 0;
      v61_.v61 = 0;
      if (v40 != 0) {
        if (v40 < 0) {
        LABEL_73:
          GameRoutine_cdcc10();
        }
        v41 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v40, 16, 0);
        v42 = v41 + v40;
        v43 = v40 & 0x7FFFFFFFFFFFFFF0LL;
        v44 = v41;
        v61_.v61 = v41;
        v61_.v63 = v42;
        memcpy(v41, (__int64)v20, v43);
        v61_.v62 = v44 + v43;
      }
      LOBYTE(v61_.v64) = 0;
      v61_.v65 = 0;
      if (v38 != 0) {
        v61_.v65 = 1;
        v61_.v64 = v48;
      }
      v61_.v66 = 1;
      goto LABEL_55;
    }
    CharacterController_d42d20((__int64)&v61_.v61, v20, v19, (v19 - v20) >> 4);
    if (v61_.v65 == v38) {
      if (v61_.v65 != 0) {
        *(_QWORD*)&v61_.v64 = v48;
        *(_QWORD*)&v39 = v48;
        *((_QWORD*)&v39 + 1) = DWORD2(v48);
      LABEL_54:
        v61_.v64 = v39;
      }
    }
    else {
      if (v61_.v65 == 0) {
        v39 = v48;
        v61_.v65 = 1;
        goto LABEL_54;
      }
      v61_.v65 = 0;
    }
  LABEL_55:
    GameHr_d85ce0((__int64)v52_.v52);
    if (v20 != nullptr) {
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, (__int64)v20);
    }
    if (v61_.v66 == 1 && v61_.v61 != 0) {
      v61_.v62 = v61_.v61;
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v61_.v61);
    }
    if ((v52_.v57 & 1) != 0 && v52_.v59 != 0) {
      v47 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v52_.v59);
    }
    if (v52_.v53 == 1) {
      HubNatives_ccbf80((__int64)v52_.v52);
    }
    return 1;
  }
  return result;
}

#pragma GCC visibility pop
