#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_7fb7c0(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64 GameRoutine_1840740(__int64, unsigned int, __int64, unsigned __int8,
                            char);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_67ed20(_QWORD*);
__int64 UnitSkillList_84d980(__int64*, unsigned int*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_67ef00(__int64 result, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* game_util_Format(const char*, ...);
extern __int64 (*GameData_20bc368[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 fw_memory_g_heap_manager_ptr;
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_6e3e20();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_telop_anonymous_175a380(__int64 a1);

__int64 game_telop_anonymous_175a380(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int* v38;
  unsigned int* v39;
  char v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int* v52;
  __int64 v53;
  int v54;
  char v55;
  __int64 v56;
  char v57;
  int v58;
  int v59;
  __int64 v60;
  char v61;
  char v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 j;
  unsigned __int64 v80;
  __int64* v81;
  char* v82;
  __int64* v83;
  char* v84;
  struct {
    _QWORD v85[4];
    _QWORD* v86;
  } v85_;
  struct {
    __int64 v87;
    __int64 v88;
    __int64 v89;
    int v90;
    char gap76_[4];
    __int64 v91;
    __int64 v92;
    unsigned __int64 v93;
    __int64 v94;
    __int64 v95;
    unsigned __int64 v96;
    __int64 v97;
    __int64 v98;
  } v87_;
  struct {
    __int64 v99;
    __int64 v100;
    __int64 v101;
    int v102;
    char gap172_[4];
    unsigned int* v103;
    __int64 v104;
    unsigned __int64 v105;
    __int64 v106;
    __int64 v107;
    unsigned __int64 v108;
    __int64 v109;
    __int64 v110;
  } v99_;
  struct {
    __int64* v111;
    __int64 v112;
  } v111_;

  result = *(_QWORD*)(a1 + 56);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  v111_.v112 = result;
  if (result == 0) {
    return result;
  }
  v3 = *(__int64**)(a1 + 48);
  v4 = result;
  v111_.v111 = v3;
  if (v3 == nullptr) {
    goto LABEL_86;
  }
  result = ui_LayoutAccessor_FindPane(v3, (__int64)"N_GetSkill");
  if (result != 0) {
    for (i = *(_QWORD*)(result + 40); i != result + 32; i = *(_QWORD*)(i + 8)) {
      *(_BYTE*)(i + 80) &= ~1u;
    }
  }
  v6 = **(_QWORD**)(a1 + 96);
  if (v6 == 0) {
  LABEL_86:
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak(v4);
    }
    return result;
  }
  v7 = ui_LayoutAccessor_FindPane(v3, (__int64)"Face");
  if (v7 != 0) {
    v7 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
  }
  v8 = GameRoutine_1840740(v7, 0, v6, 6u, 1);
  ui_LayoutAccessor_SetPaneVisible((__int64)v3, (__int64)"Face", v8 & 1);
  if (*(_BYTE*)(v6 + 2136) != 0) {
    v9 = (__int64)game_97b2f0(v6 + 2104);
    if (v9 == 0) {
      goto LABEL_16;
    }
  }
  else {
    v9 = GameRoutine_67ed20(*(_QWORD**)(v6 + 392));
    if (v9 == 0) {
      goto LABEL_16;
    }
  }
  v10 = ui_LayoutAccessor_FindTextBox(v3, (__int64)"T_Txt");
  if (v10 != 0) {
    GameRoutine_156c5d0(v10, v9, 0);
  }
LABEL_16:
  v11 = *(_QWORD*)(a1 + 104);
  v99_.v99 = 0;
  v99_.v100 = 0;
  v99_.v101 = 0;
  v99_.v102 = 0;
  if (&v99_.v99 != (__int64*)(v11 + 1072)) {
    GameRoutine_7fb7c0(
        &v99_.v99, *(_QWORD*)(v11 + 1072), *(_QWORD*)(v11 + 1080),
        (__int64)(*(_QWORD*)(v11 + 1080) - *(_QWORD*)(v11 + 1072)) >> 2);
  }
  v12 = *(_DWORD*)(v11 + 1096);
  v99_.v103 = nullptr;
  v99_.v104 = 0;
  v99_.v105 = 0;
  v13 = *(_QWORD*)(v11 + 1104);
  v99_.v102 = v12;
  v14 = *(_QWORD*)(v11 + 1112);
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  v16 = v14 - v13;
  if (v14 != v13) {
    if ((v16 & 0x8000000000000000LL) != 0) {
      goto LABEL_89;
    }
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v14 - v13, 16, 0);
    v18 = v17 + v16;
    v99_.v103 = (unsigned int*)v17;
    v99_.v104 = v17;
    v99_.v105 = v17 + v16;
    GameRoutine_1a0b950(v17, v13, v16);
    v99_.v104 = v18;
  }
  v19 = *(_QWORD*)(v11 + 1128);
  v20 = *(_QWORD*)(v11 + 1136);
  v99_.v107 = 0;
  v99_.v108 = 0;
  v21 = v20 - v19;
  v99_.v106 = 0;
  if (v20 != v19) {
    if ((v21 & 0x8000000000000000LL) != 0) {
      goto LABEL_89;
    }
    v22 = fw_memory_HeapManager_Allocate(*v15, v20 - v19, 16, 0);
    v23 = v22 + v21;
    v99_.v106 = v22;
    v99_.v107 = v22;
    v99_.v108 = v22 + v21;
    GameRoutine_1a0b950(v22, v19, v21);
    v99_.v107 = v23;
  }
  v24 = *(_QWORD*)(v11 + 1152);
  v25 = *(_QWORD*)(v11 + 1160);
  v87_.v90 = 0;
  v87_.v88 = 0;
  v87_.v89 = 0;
  v87_.v87 = 0;
  v99_.v109 = v24;
  v99_.v110 = v25;
  if (&v87_.v87 != (__int64*)(v6 + 1072)) {
    GameRoutine_7fb7c0(
        &v87_.v87, *(_QWORD*)(v6 + 1072), *(_QWORD*)(v6 + 1080),
        (__int64)(*(_QWORD*)(v6 + 1080) - *(_QWORD*)(v6 + 1072)) >> 2);
  }
  v26 = *(_DWORD*)(v6 + 1096);
  v27 = *(_QWORD*)(v6 + 1104);
  v87_.v91 = 0;
  v87_.v92 = 0;
  v87_.v93 = 0;
  v87_.v90 = v26;
  v28 = *(_QWORD*)(v6 + 1112);
  v29 = v28 - v27;
  if (v28 != v27) {
    if ((v29 & 0x8000000000000000LL) != 0) {
      goto LABEL_89;
    }
    v30 = fw_memory_HeapManager_Allocate(*v15, v28 - v27, 16, 0);
    v31 = v30 + v29;
    v87_.v91 = v30;
    v87_.v92 = v30;
    v87_.v93 = v30 + v29;
    GameRoutine_1a0b950(v30, v27, v29);
    v87_.v92 = v31;
  }
  v32 = *(_QWORD*)(v6 + 1128);
  v33 = *(_QWORD*)(v6 + 1136);
  v87_.v95 = 0;
  v87_.v96 = 0;
  v34 = v33 - v32;
  v87_.v94 = 0;
  if (v33 != v32) {
    if ((v34 & 0x8000000000000000LL) != 0) {
    LABEL_89:
      GameRoutine_6e3e20();
    }
    v35 = fw_memory_HeapManager_Allocate(*v15, v33 - v32, 16, 0);
    v36 = v35 + v34;
    v87_.v94 = v35;
    v87_.v95 = v35;
    v87_.v96 = v35 + v34;
    GameRoutine_1a0b950(v35, v32, v34);
    v87_.v95 = v36;
  }
  v37 = *(_QWORD*)(v6 + 1160);
  v38 = v99_.v103;
  v39 = (unsigned int*)v99_.v104;
  v87_.v97 = *(_QWORD*)(v6 + 1152);
  v87_.v98 = v37;
  if (v99_.v103 == (unsigned int*)v99_.v104) {
    v42 = v87_.v91;
    v43 = v87_.v92;
  }
  else {
    v40 = 0;
    do {
      v41 = UnitSkillList_84d980(&v87_.v87, v38++);
      v40 |= v41;
    } while (v38 != v39);
    v42 = v87_.v91;
    v43 = v87_.v92;
    if ((v40 & 1) != 0) {
      v87_.v97 = 0;
      v87_.v98 = 0;
      if ((int)((unsigned __int64)(v87_.v92 - v87_.v91) >> 2) >= 1) {
        v44 = (int)((v87_.v92 - v87_.v91) >> 2);
        v45 = v44 <= 1 ? 1LL : (int)((v87_.v92 - v87_.v91) >> 2);
        v46 = *GameData_212c880[0];
        if (v44 >= 2) {
          v52 = (int*)(v87_.v91 + 4);
          v47 = 0;
          v48 = 0;
          v49 = 0;
          v50 = 0;
          v51 = 0;
          do {
            v51 += 2;
            v53 = *(_QWORD*)(*(_QWORD*)(v46 + 64) + 8LL * (*(v52 - 1) & 0xFFF));
            v54 = v50 | (1 << *(_BYTE*)(v53 + 104));
            v55 = *(_BYTE*)(v53 + 250);
            LOWORD(v87_.v97) = v54;
            v56 = (1LL << v55) | v49;
            v57 = *(_BYTE*)(v53 + 115);
            v87_.v98 = v56;
            HIDWORD(v87_.v97) = (1 << v57) | v48;
            v58 = *(unsigned __int16*)(*(_QWORD*)(v53 + 24) + 1064LL) | v47;
            WORD1(v87_.v97) = v58;
            v59 = *v52;
            v52 += 2;
            v60 = *(_QWORD*)(*(_QWORD*)(v46 + 64) + 8LL * (v59 & 0xFFF));
            v50 = v54 | (1 << *(_BYTE*)(v60 + 104));
            v61 = *(_BYTE*)(v60 + 250);
            LOWORD(v87_.v97) = v50;
            v49 = (1LL << v61) | v56;
            v62 = *(_BYTE*)(v60 + 115);
            v87_.v98 = v49;
            v48 = (1 << v62) | HIDWORD(v87_.v97);
            HIDWORD(v87_.v97) = v48;
            v47 = *(unsigned __int16*)(*(_QWORD*)(v60 + 24) + 1064LL) | v58;
            WORD1(v87_.v97) = v47;
          } while ((v45 & 0x7FFFFFFFFFFFFFFELL) != v51);
        }
        else {
          LOWORD(v47) = 0;
          v48 = 0;
          v49 = 0;
          LOWORD(v50) = 0;
          v51 = 0;
        }
        if ((v45 & 1) != 0) {
          v63 = *(_QWORD*)(*(_QWORD*)(v46 + 64) +
                           8LL * (*(_DWORD*)(v87_.v91 + 4 * v51) & 0xFFF));
          LOWORD(v87_.v97) = v50 | (1 << *(_BYTE*)(v63 + 104));
          v87_.v98 = (1LL << *(_BYTE*)(v63 + 250)) | v49;
          HIDWORD(v87_.v97) = (1 << *(_BYTE*)(v63 + 115)) | v48;
          WORD1(v87_.v97) = *(_WORD*)(*(_QWORD*)(v63 + 24) + 1064LL) | v47;
        }
      }
    }
  }
  for (; v42 != v43; v42 += 4) {
    v65 = *(_QWORD*)(v6 + 392);
    v85_.v85[0] = GameData_20bc368;
    v85_.v85[1] = v42;
    v85_.v85[2] = a1;
    v85_.v85[3] = &v111_.v111;
    v85_.v86 = v85_.v85;
    game_67ef00(v65, v6, (__int64)v85_.v85);
    if (v85_.v86 == v85_.v85) {
      v64 = 32;
    }
    else {
      if (v85_.v86 == nullptr) {
        continue;
      }
      v64 = 40;
    }
    (*(void (**)(__int64))(*v85_.v86 + v64))((__int64)v85_.v86);
  }
  if (v87_.v94 != 0) {
    v66 = *v15;
    v87_.v95 = v87_.v94;
    v67 = 128;
    if (*(_QWORD*)(v66 + 200) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(v66 + v67, v87_.v94);
  }
  if (v87_.v91 != 0) {
    v68 = *v15;
    v87_.v92 = v87_.v91;
    v69 = 128;
    if (*(_QWORD*)(v68 + 200) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free(v68 + v69, v87_.v91);
  }
  if (v87_.v87 != 0) {
    v70 = *v15;
    v87_.v88 = v87_.v87;
    v71 = 128;
    if (*(_QWORD*)(v70 + 200) == 0) {
      v71 = 56;
    }
    nn_mem_StandardAllocator_Free(v70 + v71, v87_.v87);
  }
  if (v99_.v106 != 0) {
    v72 = *v15;
    v99_.v107 = v99_.v106;
    v73 = 128;
    if (*(_QWORD*)(v72 + 200) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free(v72 + v73, v99_.v106);
  }
  if (v99_.v103 != nullptr) {
    v74 = *v15;
    v99_.v104 = (__int64)v99_.v103;
    v75 = 128;
    if (*(_QWORD*)(v74 + 200) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(v74 + v75, (__int64)v99_.v103);
  }
  if (v99_.v99 != 0) {
    v76 = *v15;
    v99_.v100 = v99_.v99;
    v77 = 128;
    if (*(_QWORD*)(v76 + 200) == 0) {
      v77 = 56;
    }
    nn_mem_StandardAllocator_Free(v76 + v77, v99_.v99);
  }
  v78 = ui_LayoutAccessor_FindPane(v111_.v111, (__int64)"N_MasteryInfo");
  if (v78 != 0) {
    for (j = *(_QWORD*)(v78 + 40); j != v78 + 32; j = *(_QWORD*)(j + 8)) {
      *(_BYTE*)(j + 80) &= ~1u;
    }
  }
  if (*(_QWORD*)(a1 + 120) != *(_QWORD*)(a1 + 112)) {
    v80 = 0;
    do {
      v81 = v111_.v111;
      v82 = game_util_Format("L_Mastery%02d", v80);
      ui_LayoutAccessor_SetPaneVisible((__int64)v81, (__int64)v82, 1);
      v83 = v111_.v111;
      v84 = game_util_Format("L_LvUP_%02d", v80);
      ui_LayoutAccessor_SetPaneVisible((__int64)v83, (__int64)v84, 1);
      ++v80;
    } while (*(_QWORD*)(a1 + 120) - *(_QWORD*)(a1 + 112) > v80);
  }
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 568LL))(a1, 1);
  v4 = v111_.v112;
  if (v111_.v112 != 0) {
    goto LABEL_86;
  }
  return result;
}

#pragma GCC visibility pop
