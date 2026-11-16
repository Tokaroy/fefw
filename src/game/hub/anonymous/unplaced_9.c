#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_143d720(unsigned int*, __int16*);
__int64 GameRoutine_1840a20(__int64, unsigned int, __int64, unsigned __int8,
                            char);
__int64 GameRoutine_1842580(__int64, unsigned int, __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_ee3920(__int64*, __int64);
__int64 GameRoutine_fb6c60(__int64 result);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 UnitUtil_1212140(unsigned __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_ffe140(unsigned int, const char*);
char* game_util_Format(const char*, ...);
const char* GameRoutine_8a1ae0(const char* result);
extern _UNKNOWN GameData_2000158;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_225e7a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_1a9f09e;
extern int GameData_1bef1c8[3];
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_18f3d00(__int64*, __int64, __int64, unsigned __int64);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void ProcFastTravelMenu_18f4120(__int64*, __int64, __int64, unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_hub_anonymous_16995e0(_QWORD* a1, __int64 a2);

void game_hub_anonymous_16995e0(_QWORD* a1, __int64 a2)
{
  __int64* v2;
  char* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned int v27;
  unsigned int* v28;
  char* v29;
  __int64 v30;
  char v31;
  int v32;
  char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  char* v44;
  int v45;
  char* v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  char* v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  char* v69;
  char* v70;
  __int16* v71;
  char* v72;
  __int64* v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  char* v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  char* v100;
  __int64 v101;
  char* v102;
  __int64* v103;
  __int64 v104;
  char* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  char* v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  char* v112;
  __int64 v113;
  char* v114;
  __int64* v115;
  __int64 v116;
  _QWORD* v117;
  int v118;
  __int64* v119;
  struct {
    char gap0_[24];
    _QWORD v120[2];
    char* v121;
    __int64* v122;
    __int64* v123;
    unsigned __int64 v124;
    __int64 v125;
    unsigned __int64 v126;
    char* v127;
    unsigned __int64 v128;
    int v129;
    int v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    __int64 v138;
    __int64 v139;
    __int64 v140;
    __int64 v141;
    __int64 v142;
    __int64 v143;
  } f_;

  v2 = (__int64*)a2;
  LayoutAccessor_1562cf0(a2, (unsigned int*)"AreaInfo");
  v4 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  LayoutAccessor_1562060(v2, (__int64)"T_Txt", v4);
  ui_LayoutAccessor_SetPaneVisible((__int64)v2, (__int64)"T_Txt", 1);
  ui_LayoutAccessor_SetPaneVisible((__int64)v2, (__int64)"L_ReceptionTime", 0);
  f_.v131 = -1;
  f_.v132 = -1;
  f_.v133 = -1;
  f_.v134 = -1;
  v5 = *msg_MessageManager_instance__ptr[0];
  f_.v135 = -1;
  f_.v136 = -1;
  f_.v137 = -1;
  f_.v138 = -1;
  f_.v139 = -1;
  f_.v140 = -1;
  f_.v141 = -1;
  f_.v142 = -1;
  f_.v125 = (__int64)(GameData_212e348 + 2);
  f_.v126 = 0xFFFF0001FFFF0000LL;
  f_.v127 = (const char*)0xFFFF0004FFFF0002LL;
  f_.v128 = 0xFFFF0006FFFF0005LL;
  f_.v143 = 8;
  f_.v129 = -65529;
  f_.v130 = -65528;
  v6 = GameRoutine_a4dbe0(v5, "MID_Menu_Person", 0);
  if (v6 != nullptr) {
    v7 = (__int64)v6;
    v8 = ui_LayoutAccessor_FindTextBox(v2, (__int64)"L_Info/T_Title");
    if (v8 != 0) {
      GameRoutine_156c5d0(v8, v7, 0);
    }
  }
  v9 = a1[14];
  v117 = a1;
  v11 = *(__int64**)(v9 + 48);
  v10 = *(__int64**)(v9 + 56);
  if (v11 == v10) {
    v12 = 0;
    goto LABEL_52;
  }
  v12 = 0;
  do {
    if (game_gmap_GmapClock_instance_ == 0) {
      goto LABEL_8;
    }
    if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
        0) {
      goto LABEL_8;
    }
    f_.v125 = *v11;
    UnitUtil_1212140((unsigned __int64)&f_.v125);
    v13 = *v11;
    f_.v125 = *v11;
    if ((UnitUtil_1212140((unsigned __int64)&f_.v125) & 1) == 0) {
      goto LABEL_8;
    }
    if (v13 == 0) {
      goto LABEL_8;
    }
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_8;
    }
    v14 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)(*(_QWORD*)(v13 + 24) + 1512LL));
    if (v14 == 0 || *(_DWORD*)(v14 + 32) == 0) {
      goto LABEL_8;
    }
    v15 = game_util_Format("L_Unit%02d", v12);
    v16 = GameRoutine_1a09c70(v15);
    if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_232;
    }
    v17 = v16;
    if (v16 >= 0x17) {
      v19 = v12;
      if ((v16 | 7) == 0x17) {
        v20 = 26;
      }
      else {
        v20 = (v16 | 7) + 1;
      }
      v21 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v20, 16, 0);
      v22 = v20 | 1;
      v18 = (char*)v21;
      f_.v126 = v17;
      f_.v127 = (const char*)v21;
      v12 = v19;
      f_.v125 = v22;
    LABEL_24:
      GameRoutine_1a0b940((__int64)v18, (__int64)v15, v17);
      goto LABEL_25;
    }
    v18 = (char*)&f_.v125 + 1;
    LOBYTE(f_.v125) = 2 * v16;
    if (v16 != 0) {
      goto LABEL_24;
    }
  LABEL_25:
    v18[v17] = 0;
    if ((f_.v125 & 1) != 0) {
      v23 = f_.v127;
    }
    else {
      v23 = (char*)&f_.v125 + 1;
    }
    LayoutAccessor_1560070((void*)(&f_.v122), v2, v23);
    if (f_.v123 != nullptr) {
      v24 = std___1___shared_weak_count_lock((__int64)f_.v123);
      v25 = f_.v122;
      if (f_.v123 != nullptr) {
        std___1___shared_weak_count___release_weak((__int64)f_.v123);
      }
      if (v24 != 0 && v25 != nullptr) {
        v26 = ui_LayoutAccessor_FindPane(v25, (__int64)"Face");
        if (v26 != 0) {
          v26 =
              __dynamic_cast(v26, GameData_212d670[0], GameData_212d678[0], 0);
        }
        GameRoutine_1840a20(v26, 0, *v11, 6u, 1);
        v27 = GameRoutine_fb6c60(*v11) - 3;
        v28 = (unsigned int*)"TypeOther_Default";
        if (v27 < 3) {
          v28 =
              (unsigned int*)((char*)GameData_1bef1c8 + GameData_1bef1c8[v27]);
        }
        LayoutAccessor_1562cf0((__int64)v25, v28);
      LABEL_39:
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          std___1___shared_weak_count___release_weak(v24);
        }
        goto LABEL_41;
      }
      if (v24 != 0) {
        goto LABEL_39;
      }
    }
  LABEL_41:
    if ((f_.v125 & 1) != 0) {
      v29 = f_.v127;
    }
    else {
      v29 = (char*)&f_.v125 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)v2, (__int64)v29, 1);
    if ((f_.v125 & 1) != 0 && f_.v127 != nullptr) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)f_.v127);
    }
    if (v12 > 22) {
      goto LABEL_50;
    }
    ++v12;
  LABEL_8:
    v11 += 16;
  } while (v11 != v10);
  if (v12 > 23) {
  LABEL_50:
    v31 = 0;
    goto LABEL_72;
  }
LABEL_52:
  v118 = v12;
  v32 = v12;
  while (2) {
    v33 = game_util_Format("L_Unit%02d", v32);
    v34 = GameRoutine_1a09c70(v33);
    if (v34 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_232;
    }
    v35 = v34;
    if (v34 >= 0x17) {
      if ((v34 | 7) == 0x17) {
        v37 = 26;
      }
      else {
        v37 = (v34 | 7) + 1;
      }
      v36 = (const char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v37, 16, 0);
      f_.v126 = v35;
      f_.v127 = v36;
      f_.v125 = v37 | 1;
      goto LABEL_62;
    }
    v36 = (char*)&f_.v125 + 1;
    LOBYTE(f_.v125) = 2 * v34;
    if (v34 != 0) {
    LABEL_62:
      GameRoutine_1a0b940((__int64)v36, (__int64)v33, v35);
    }
    v36[v35] = 0;
    if ((f_.v125 & 1) != 0) {
      v38 = f_.v127;
    }
    else {
      v38 = (char*)&f_.v125 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible((__int64)v2, (__int64)v38, 0);
    if ((f_.v125 & 1) != 0 && f_.v127 != nullptr) {
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, (__int64)f_.v127);
    }
    if (++v32 != 24) {
      continue;
    }
    break;
  }
  v31 = v118 < 1;
LABEL_72:
  ui_LayoutAccessor_SetPaneVisible((__int64)v2, (__int64)"L_Info", 1);
  ui_LayoutAccessor_SetPaneVisible((__int64)v2, (__int64)"T_UnitEmpty", v31);
  f_.v123 = nullptr;
  f_.v124 = 0;
  f_.v122 = nullptr;
  v40 = v117[14];
  v41 = *(_QWORD*)(v40 + 24);
  v42 = *(_QWORD*)(v40 + 32);
  if (v41 == v42) {
    v45 = 0;
  LABEL_193:
    v97 = game_util_Format("L_Facility%02d", v45);
    v98 = GameRoutine_1a09c70(v97);
    if (v98 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_232:
      String_60a1d0();
    }
    v99 = v98;
    if (v98 >= 0x17) {
      if ((v98 | 7) == 0x17) {
        v101 = 26;
      }
      else {
        v101 = (v98 | 7) + 1;
      }
      v100 = (const char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v101, 16, 0);
      f_.v120[1] = v99;
      f_.v121 = v100;
      f_.v120[0] = v101 | 1;
    }
    else {
      LOBYTE(f_.v120[0]) = 2 * v98;
      v100 = (char*)f_.v120 + 1;
      if (v98 == 0) {
        goto LABEL_202;
      }
    }
    GameRoutine_1a0b940((__int64)v100, (__int64)v97, v99);
  LABEL_202:
    v100[v99] = 0;
    if ((f_.v120[0] & 1) != 0) {
      v102 = f_.v121;
    }
    else {
      v102 = (char*)f_.v120 + 1;
    }
    v103 = LayoutAccessor_155fbe0(v2, v102);
    LayoutAccessor_1562cf0((__int64)v103, (unsigned int*)"EmptyDefault");
    v104 = *msg_MessageManager_instance__ptr[0];
    f_.v131 = -1;
    f_.v132 = -1;
    f_.v133 = -1;
    f_.v134 = -1;
    f_.v135 = -1;
    f_.v136 = -1;
    f_.v137 = -1;
    f_.v138 = -1;
    f_.v139 = -1;
    f_.v140 = -1;
    f_.v141 = -1;
    f_.v142 = -1;
    f_.v125 = (__int64)(GameData_212e348 + 2);
    f_.v126 = 0xFFFF0001FFFF0000LL;
    f_.v127 = (const char*)0xFFFF0004FFFF0002LL;
    f_.v128 = 0xFFFF0006FFFF0005LL;
    f_.v143 = 8;
    f_.v129 = -65529;
    f_.v130 = -65528;
    v105 = GameRoutine_a4dbe0(v104, "MID_Sys_Empty", 0);
    if (v105 != nullptr) {
      v106 = (__int64)v105;
      v107 = ui_LayoutAccessor_FindTextBox(v103, (__int64)"T_Txt");
      if (v107 != 0) {
        GameRoutine_156c5d0(v107, v106, 0);
      }
    }
    LayoutAccessor_155e830((__int64)v103, 1);
    ++v45;
    if ((f_.v120[0] & 1) != 0 && f_.v121 != nullptr) {
      v108 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v108 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v108, (__int64)f_.v121);
    }
    while (1) {
    LABEL_215:
      v109 = game_util_Format("L_Facility%02d", v45);
      v110 = GameRoutine_1a09c70(v109);
      if (v110 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_232;
      }
      v111 = v110;
      if (v110 >= 0x17) {
        if ((v110 | 7) == 0x17) {
          v113 = 26;
        }
        else {
          v113 = (v110 | 7) + 1;
        }
        v112 = (const char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v113, 16, 0);
        f_.v126 = v111;
        f_.v127 = v112;
        f_.v125 = v113 | 1;
      }
      else {
        v112 = (char*)&f_.v125 + 1;
        LOBYTE(f_.v125) = 2 * v110;
        if (v110 == 0) {
          goto LABEL_224;
        }
      }
      GameRoutine_1a0b940((__int64)v112, (__int64)v109, v111);
    LABEL_224:
      v112[v111] = 0;
      if ((f_.v125 & 1) != 0) {
        v114 = f_.v127;
      }
      else {
        v114 = (char*)&f_.v125 + 1;
      }
      v115 = LayoutAccessor_155fbe0(v2, v114);
      LayoutAccessor_155e830((__int64)v115, 0);
      if ((f_.v125 & 1) != 0 && f_.v127 != nullptr) {
        v116 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v116 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v116, (__int64)f_.v127);
      }
      if (++v45 == 4) {
        goto LABEL_155;
      }
    }
  }
  v43 = "L_Facility%02d";
  v44 = "Icon";
  v45 = 0;
  v119 = v2;
  v46 = (char*)&f_.v125 + 1;
  while (2) {
    if (*(_DWORD*)v41 == 21) {
      goto LABEL_75;
    }
    if (*(_DWORD*)v41 == 18) {
      v47 = f_.v123;
      if ((unsigned __int64)f_.v123 >= f_.v124) {
        f_.v123 = (__int64*)GameRoutine_ee3920((__int64*)&f_.v122, v41);
      }
      else {
        *(_DWORD*)f_.v123 = 18;
        v48 = v47 + 1;
        if ((*(_BYTE*)(v41 + 8) & 1) != 0) {
          fw_text_String_CopyTerminated(v48, *(_QWORD*)(v41 + 24),
                                        *(_QWORD*)(v41 + 16));
        }
        else {
          v49 = *(_QWORD*)(v41 + 8);
          v50 = *(_QWORD*)(v41 + 24);
          v47[2] = *(_QWORD*)(v41 + 16);
          v47[3] = v50;
          *v48 = v49;
        }
        if ((*(_BYTE*)(v41 + 32) & 1) != 0) {
          fw_text_String_CopyTerminated(v47 + 4, *(_QWORD*)(v41 + 48),
                                        *(_QWORD*)(v41 + 40));
        }
        else {
          v47[5] = *(_QWORD*)(v41 + 40);
          v78 = *(_QWORD*)(v41 + 32);
          v47[6] = *(_QWORD*)(v41 + 48);
          v47[4] = v78;
        }
        v47[9] = *(_QWORD*)(v41 + 72);
        v47[8] = *(_QWORD*)(v41 + 64);
        f_.v123 = v47 + 10;
      }
      goto LABEL_75;
    }
    v51 = game_util_Format(v43, (unsigned int)v45);
    v52 = GameRoutine_1a09c70(v51);
    if (v52 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_232;
    }
    v53 = v52;
    if (v52 >= 0x17) {
      v55 = v42;
      v56 = v46;
      v57 = v44;
      v58 = v43;
      if ((v52 | 7) == 0x17) {
        v59 = 26;
      }
      else {
        v59 = (v52 | 7) + 1;
      }
      v60 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v59, 16, 0);
      v61 = v59 | 1;
      v43 = v58;
      v44 = v57;
      v46 = v56;
      v42 = v55;
      v2 = v119;
      v54 = v60;
      f_.v126 = v53;
      f_.v127 = (const char*)v60;
      f_.v125 = v61;
      goto LABEL_89;
    }
    v54 = (__int64)v46;
    LOBYTE(f_.v125) = 2 * v52;
    if (v52 != 0) {
    LABEL_89:
      GameRoutine_1a0b940(v54, (__int64)v51, v53);
    }
    *(_BYTE*)(v54 + v53) = 0;
    if ((f_.v125 & 1) != 0) {
      v62 = f_.v127;
    }
    else {
      v62 = v46;
    }
    v63 = LayoutAccessor_155fbe0(v2, v62);
    v64 = ui_LayoutAccessor_FindPane(v63, (__int64)v44);
    if (v64 != 0) {
      v64 = __dynamic_cast(v64, GameData_212d670[0], GameData_212d678[0], 0);
    }
    if ((*(_BYTE*)(v41 + 8) & 1) != 0) {
      v65 = *(_QWORD*)(v41 + 24);
    }
    else {
      v65 = v41 + 9;
    }
    GameRoutine_1842580(v64, *(_DWORD*)v41, v65);
    v66 = *(_DWORD*)v41;
    if (*(int*)v41 <= 10) {
      if (v66 != 2 && v66 != 6) {
        goto LABEL_140;
      }
    LABEL_110:
      v69 = &GameData_1a9f09e;
    LABEL_111:
      v70 = game_ffe140(v66, v69);
      goto LABEL_112;
    }
    if (v66 == 11) {
      goto LABEL_110;
    }
    if (v66 == 23) {
      if ((*(_BYTE*)(v41 + 32) & 1) != 0) {
        v67 = *(_QWORD*)(v41 + 48);
      }
      else {
        v67 = v41 + 33;
      }
      if (v67 != 0) {
        v68 = ui_LayoutAccessor_FindTextBox(v63, (__int64)"T_Txt");
        if (v68 != 0) {
          GameRoutine_156c5d0(v68, v67, 0);
        }
      }
    }
    else {
    LABEL_140:
      if ((*(_BYTE*)(v41 + 8) & 1) != 0) {
        v69 = *(const char**)(v41 + 24);
      }
      else {
        v69 = (const char*)(v41 + 9);
      }
      if (v66 <= 7) {
        if (v66 != 0) {
          if (v66 != 3) {
            goto LABEL_111;
          }
          v70 = "MID_Shop_Legion";
        }
        else {
          v70 = *((char**)&GameData_2000158 +
                  (unsigned __int8)GameRoutine_8a1ae0(v69));
        }
      }
      else if (v66 == 8) {
        v70 = "MID_HubMenu_Temple";
      }
      else {
        v70 = "MID_HubMenu_ClassExaminer";
        if (v66 != 9) {
          if (v66 != 27) {
            goto LABEL_111;
          }
          v70 = "MID_HubMenu_Procurement";
        }
      }
    LABEL_112:
      LayoutAccessor_1562060(v63, (__int64)"T_Txt", v70);
    }
    LayoutAccessor_155e830((__int64)v63, 1);
    if (game_gmap_GmapClock_instance_ != 0) {
      v71 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v71 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    if ((GameRoutine_143d720((unsigned int*)v41, v71) & 1) != 0) {
      v72 = "Default";
    }
    else {
      v72 = "Disable";
    }
    LayoutAccessor_1562cf0((__int64)v63, (unsigned int*)v72);
    v73 = f_.v123;
    if ((unsigned __int64)f_.v123 >= f_.v124) {
      v77 = (__int64*)GameRoutine_ee3920((__int64*)&f_.v122, v41);
    }
    else {
      *(_DWORD*)f_.v123 = *(_DWORD*)v41;
      v74 = v73 + 1;
      if ((*(_BYTE*)(v41 + 8) & 1) != 0) {
        fw_text_String_CopyTerminated(v74, *(_QWORD*)(v41 + 24),
                                      *(_QWORD*)(v41 + 16));
      }
      else {
        v75 = *(_QWORD*)(v41 + 8);
        v76 = *(_QWORD*)(v41 + 24);
        v73[2] = *(_QWORD*)(v41 + 16);
        v73[3] = v76;
        *v74 = v75;
      }
      if ((*(_BYTE*)(v41 + 32) & 1) != 0) {
        fw_text_String_CopyTerminated(v73 + 4, *(_QWORD*)(v41 + 48),
                                      *(_QWORD*)(v41 + 40));
      }
      else {
        v73[5] = *(_QWORD*)(v41 + 40);
        v79 = *(_QWORD*)(v41 + 32);
        v73[6] = *(_QWORD*)(v41 + 48);
        v73[4] = v79;
      }
      v77 = v73 + 10;
      v73[9] = *(_QWORD*)(v41 + 72);
      v73[8] = *(_QWORD*)(v41 + 64);
    }
    f_.v123 = v77;
    if ((f_.v125 & 1) != 0 && f_.v127 != nullptr) {
      v80 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, (__int64)f_.v127);
    }
    if (v45 <= 2) {
      ++v45;
    LABEL_75:
      v41 += 80;
      if (v41 != v42) {
        continue;
      }
      if (v45 <= 0) {
        goto LABEL_193;
      }
      if ((unsigned int)v45 <= 3) {
        goto LABEL_215;
      }
    }
    break;
  }
LABEL_155:
  v81 = ui_LayoutAccessor_FindAlignment(v2, "A_Unit");
  if (v81 != 0) {
    Alignment_56b600(v81);
    v82 = v2[1];
    if (v82 != 0) {
      v83 = std___1___shared_weak_count_lock(v82);
      if (v83 != 0) {
        v84 = v83;
        if (*v2 != 0) {
          ControlCreator_13633c0(*v2);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
          std___1___shared_weak_count___release_weak(v84);
        }
      }
    }
  }
  v85 = ui_LayoutAccessor_FindAlignment(v2, "A_AreaInfo");
  if (v85 != 0) {
    Alignment_56b600(v85);
    v86 = v2[1];
    if (v86 != 0) {
      v87 = std___1___shared_weak_count_lock(v86);
      if (v87 != 0) {
        v88 = v87;
        if (*v2 != 0) {
          ControlCreator_13633c0(*v2);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
          std___1___shared_weak_count___release_weak(v88);
        }
      }
    }
  }
  v89 = (__int64*)GameData_225e7a8;
  if ((__int64**)(GameData_225e7a8 + 728) != &f_.v122) {
    GameRoutine_18f3d00(
        (__int64*)(GameData_225e7a8 + 728), (__int64)f_.v122, (__int64)f_.v123,
        0xCCCCCCCCCCCCCCCDLL * (((char*)f_.v123 - (char*)f_.v122) >> 4));
  }
  ProcFastTravelMenu_18f4120(v89 + 94, 0, 0, 0);
  ProcFastTravelMenu_18f4120(v89 + 24, v89[94], v89[95],
                             (v89[95] - v89[94]) >> 7);
  v90 = f_.v122;
  if (f_.v122 != nullptr) {
    v91 = f_.v123;
    if (f_.v122 == f_.v123) {
      goto LABEL_188;
    }
    do {
      if ((*(_BYTE*)(v91 - 6) & 1) != 0) {
        v92 = *(v91 - 4);
        if (v92 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v93 = 128;
          }
          else {
            v93 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v93, v92);
        }
      }
      if ((*(_BYTE*)(v91 - 9) & 1) != 0) {
        v94 = *(v91 - 7);
        if (v94 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v95 = 128;
          }
          else {
            v95 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v95, v94);
        }
      }
      v91 -= 10;
    } while (v91 != v90);
    f_.v123 = v90;
    v90 = f_.v122;
    if (f_.v122 != nullptr) {
    LABEL_188:
      v96 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v96 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, (__int64)v90);
    }
  }
}

#pragma GCC visibility pop
