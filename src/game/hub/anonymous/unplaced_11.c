#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_143d720(unsigned int*, __int16*);
__int64 GameRoutine_143e1c0(unsigned int*);
__int64 GameRoutine_1586d80(__int64, _DWORD*, _DWORD*, __int64, char, char,
                            char, __int64);
__int64 GameRoutine_1840a20(__int64, unsigned int, __int64, unsigned __int8,
                            char);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_96de20(__int64);
__int64 GameRoutine_975940(__int64);
__int64 GameRoutine_ee34c0(__int64*, __int64);
__int64 GameRoutine_ee3920(__int64*, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 LayoutAccessor_1571860(__int64*, __int64, char, char, char, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_gameui_157b310(__int64*, unsigned __int16*, __int64);
__int64 game_gameui_15957c0(__int64*, unsigned int, int, char, char);
__int64 game_gameui_1597cc0(__int64*, __int64, int, int);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool GameRoutine_143dac0(unsigned int*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_ffe140(unsigned int, const char*);
char* game_ffe4c0(unsigned int, const char*);
char* game_util_Format(const char*, ...);
extern __int64 (*GameData_204d688[])();
extern __int64 (*GameData_204e798[])();
extern __int64 (*GameData_2083310[])();
extern __int64 (*GameData_2083390[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212d2b8;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_225e7a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
extern int GameData_2260670[];
int* game_145d990(int* result);
unsigned __int64 GameRoutine_1a09c70(const char*);
void* GameRoutine_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_18f3d00(__int64*, __int64, __int64, unsigned __int64);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void ProcFastTravelMenu_18f4120(__int64*, __int64, __int64, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void game_156c5d0(__int64, __int64, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* game_hub_anonymous_169a430(__int64 a1, char* a2);
void game_hub_anonymous_169b9e0(__int64 a1, __int64* a2);
void game_hub_anonymous_169d700(_QWORD* a1, __int64* a2);

_QWORD* game_hub_anonymous_169a430(__int64 a1, char* a2)
{
  int v2;
  char v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
    char gap40_[8];
    __int64 (*v20[4])();
    __int64 (**v21)();
    char gap88_[16];
    _QWORD v22[2];
    char* v23;
    __int64 (*v24[4])();
    __int64 (**v25)();
  } f_;

  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v2 = (unsigned __int8)a2[16];
    if (v2 == 1) {
      v3 = *a2;
      f_.v22[0] = *(_QWORD*)(a2 + 1);
      *(_QWORD*)((char*)f_.v22 + 7) = *((_QWORD*)a2 + 1);
    }
    else {
      v3 = 0;
    }
    v8 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(v8 + 152) != 0) {
      v10 = *(_QWORD*)(v8 + 152);
    }
    else {
      v10 = *(_QWORD*)(a1 + 8);
    }
    f_.v23 = "MID_FastTravelMenu_Confirm";
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         64, 16, 0);
    *(_QWORD*)(v11 + 16) = a1;
    *(_BYTE*)(v11 + 32) = 0;
    *(_BYTE*)(v11 + 48) = 0;
    *(_QWORD*)v11 = GameData_2083310;
    if (v2 != 0) {
      v12 = f_.v22[0];
      *(_BYTE*)(v11 + 32) = v3;
      *(_QWORD*)(v11 + 33) = v12;
      *(_QWORD*)(v11 + 40) = *(_QWORD*)((char*)f_.v22 + 7);
      *(_BYTE*)(v11 + 48) = 1;
    }
    f_.v25 = (__int64 (**)(void))v11;
    f_.v20[0] = (__int64 (*)())GameData_2083390;
    f_.v21 = f_.v20;
    f_.v18[0] = GameData_2083390;
    f_.v19 = f_.v18;
    v13 = MapSortieMenu_871860(v10, (__int64)&f_.v23, (__int64)f_.v24,
                               (__int64)f_.v20, (__int64)f_.v18);
    if (f_.v19 == f_.v18) {
      v14 = 32;
    }
    else {
      if (f_.v19 == nullptr) {
        goto LABEL_21;
      }
      v14 = 40;
    }
    (*(void (**)(__int64))(*f_.v19 + v14))((__int64)f_.v19);
  LABEL_21:
    if (f_.v21 == f_.v20) {
      v15 = 32;
    }
    else {
      if (f_.v21 == nullptr) {
        goto LABEL_26;
      }
      v15 = 40;
    }
    (*(void (**)(__int64))((char*)*f_.v21 + v15))((__int64)f_.v21);
  LABEL_26:
    if (f_.v25 == f_.v24) {
      v16 = 32;
    }
    else {
      if (f_.v25 == nullptr) {
        goto LABEL_31;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))((char*)*f_.v25 + v16))((__int64)f_.v25);
  LABEL_31:
    f_.v21 = f_.v20;
    f_.v25 = f_.v24;
    f_.v20[0] = (__int64 (*)())(GameData_212d2b8 + 2);
    f_.v20[1] = game_sound_PlayDecideLightSe_ptr[0];
    f_.v24[0] = (__int64 (*)())(GameData_212d2b8 + 2);
    f_.v24[1] = game_sound_PlayDecideLightSe_ptr[0];
    GameRoutine_654050(f_.v24, (_QWORD*)(v13 + 1152));
    if (f_.v25 == f_.v24) {
      v17 = 32;
    }
    else {
      if (f_.v25 == nullptr) {
        goto LABEL_36;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))((char*)*f_.v25 + v17))((__int64)f_.v25);
  LABEL_36:
    result = f_.v21;
    if (f_.v21 != f_.v20) {
      goto LABEL_37;
    }
    goto LABEL_9;
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
  }
  f_.v20[0] = (__int64 (*)()) "MID_FastTravelMenu_NotMove_Message";
  result = (_QWORD*)game_menu_Dialog__CreateBind_game_menu_Dialog(
      v5, (__int64)f_.v20);
  if (result != nullptr) {
    f_.v25 = nullptr;
    GameRoutine_6680e0(f_.v24, result + 156);
    result = f_.v25;
    if (f_.v25 != f_.v24) {
    LABEL_37:
      if (result == nullptr) {
        return result;
      }
      v7 = 40;
      return (_QWORD*)(*(__int64 (**)(__int64))(*result + v7))((__int64)result);
    }
  LABEL_9:
    v7 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v7))((__int64)result);
  }
  return result;
}

void game_hub_anonymous_169b9e0(__int64 a1, __int64* a2)
{
  __int64* v4;
  __int64 v5;
  __int64* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  char* v12;
  unsigned int v13;
  char* v14;
  char* v15;
  char* v16;
  char* v17;
  __int16* v18;
  char v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  char v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  char v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  char v45;
  __int64 v46;
  char v47;
  char v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  unsigned __int8 v53;
  __int64 v54;
  unsigned __int8 v55;
  char v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int16* v62;
  unsigned __int8 v63;
  int v64;
  unsigned __int8 v65;
  char v66;
  char* v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  char* v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  __int64* v76;
  char* v77;
  char* v78;
  __int64 v79;
  __int64* v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64* v83;
  __int64 v84;
  char* v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  char* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  __int64* v93;
  __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  char* v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  char* v106;
  __int64* v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64* v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  struct {
    int* v125;
    __int64 v126;
    char gap16_[12];
    int v127;
    __int64* v128;
    __int64 v129;
    unsigned __int64 v130;
    unsigned __int64 v131;
    __int64* v132;
    unsigned __int64 v133;
    char* v134;
    __int64 v135;
    unsigned __int64 v136;
    unsigned __int64 v137;
    __int64 v138;
    __int64 v139;
    __int64 v140;
    __int64 v141;
    __int64 v142;
    __int64 v143;
    __int64 v144;
    __int64 v145;
    __int64 v146;
    __int64 v147;
    __int64 v148;
    __int64 v149;
  } f_;

  LayoutAccessor_1562cf0((__int64)a2, (unsigned int*)"FacilityInfo");
  v4 = msg_MessageManager_instance__ptr[0];
  f_.v137 = -1;
  f_.v138 = -1;
  f_.v139 = -1;
  f_.v140 = -1;
  v5 = *msg_MessageManager_instance__ptr[0];
  v6 = GameData_212e348;
  f_.v141 = -1;
  f_.v142 = -1;
  f_.v143 = -1;
  f_.v144 = -1;
  f_.v145 = -1;
  f_.v146 = -1;
  f_.v147 = -1;
  f_.v148 = -1;
  f_.v132 = GameData_212e348 + 2;
  f_.v133 = 0xFFFF0001FFFF0000LL;
  f_.v134 = (const char*)0xFFFF0004FFFF0002LL;
  f_.v135 = 0xFFFF0006FFFF0005LL;
  f_.v149 = 8;
  f_.v136 = 0xFFFF0008FFFF0007LL;
  v7 = GameRoutine_a4dbe0(v5, "MID_FastTravelMenu_Action", 0);
  if (v7 != nullptr) {
    v8 = (__int64)v7;
    v9 = ui_LayoutAccessor_FindTextBox(a2, (__int64)"L_Info/T_Title");
    if (v9 != 0) {
      game_156c5d0(v9, v8, 0);
    }
  }
  v10 = *(_QWORD*)(a1 + 112);
  v11 = *(_BYTE*)(v10 + 40);
  v12 = *(const char**)(v10 + 56);
  v13 = *(_DWORD*)(v10 + 32);
  v14 = (const char*)(v10 + 41);
  if ((v11 & 1) != 0) {
    v15 = v12;
  }
  else {
    v15 = v14;
  }
  v16 = game_ffe140(v13, v15);
  LayoutAccessor_1562060(a2, (__int64)"T_Txt", v16);
  v17 = game_ffe4c0(v13, v15);
  LayoutAccessor_1562060(a2, (__int64)"T_FacilityHelp", v17);
  if (game_gmap_GmapClock_instance_ != 0) {
    v18 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v18 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v19 = GameRoutine_143d720((unsigned int*)(*(_QWORD*)(a1 + 112) + 32LL), v18);
  f_.v128 = a2;
  v20 = LayoutAccessor_155fbe0(a2, "L_ReceptionTime");
  if (GameRoutine_143dac0((unsigned int*)(*(_QWORD*)(a1 + 112) + 32LL))) {
    LayoutAccessor_155e830((__int64)v20, 0);
  }
  else {
    LayoutAccessor_155e830((__int64)v20, 1);
    v21 = GameRoutine_143e1c0((unsigned int*)(*(_QWORD*)(a1 + 112) + 32LL));
    game_gameui_15957c0(v20, v21, SDWORDn(v21, sizeof(v21) / 4 - 1), 0,
                        (v19 & 1) == 0);
  }
  v22 = ui_LayoutAccessor_FindAlignment(a2, (__int64)"A_ReceptionTime");
  if (v22 != 0) {
    Alignment_56b600(v22);
    v23 = a2[1];
    if (v23 != 0) {
      v24 = std___1___shared_weak_count_lock(v23);
      if (v24 != 0) {
        v25 = v24;
        if (*a2 != 0) {
          ControlCreator_13633c0(*a2);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          std___1___shared_weak_count___release_weak(v25);
        }
      }
    }
  }
  v26 = *(_QWORD*)(a1 + 112);
  v27 = &GameData_2260670[16 * (__int64)*(int*)(v26 + 32)];
  game_145d990((int*)(v26 + 32));
  f_.v126 = a1;
  if (*v27 < 1) {
    v30 = 0;
  LABEL_70:
    v80 = f_.v128;
    v85 = game_util_Format("L_Command%02d", v30);
    v86 = GameRoutine_1a09c70(v85);
    if (v86 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_153:
      String_60a1d0();
    }
    v87 = v86;
    if (v86 >= 0x17) {
      if ((v86 | 7) == 0x17) {
        v89 = 26;
      }
      else {
        v89 = (v86 | 7) + 1;
      }
      v90 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v89, 16, 0);
      v91 = v89 | 1;
      v80 = f_.v128;
      v88 = (char*)v90;
      f_.v130 = v87;
      f_.v131 = v90;
      f_.v129 = v91;
    }
    else {
      LOBYTE(f_.v129) = 2 * v86;
      v88 = (char*)&f_.v129 + 1;
      if (v86 == 0) {
        goto LABEL_79;
      }
    }
    GameRoutine_1a0b940((__int64)v88, (__int64)v85, v87);
  LABEL_79:
    v88[v87] = 0;
    if ((f_.v129 & 1) != 0) {
      v92 = (const char*)f_.v131;
    }
    else {
      v92 = (char*)&f_.v129 + 1;
    }
    v93 = LayoutAccessor_155fbe0(v80, v92);
    LayoutAccessor_1562cf0((__int64)v93, (unsigned int*)"EmptyDefault");
    LayoutAccessor_1562cf0((__int64)v93, (unsigned int*)"StatusNone");
    v94 = *v4;
    f_.v137 = -1;
    f_.v138 = -1;
    f_.v139 = -1;
    f_.v140 = -1;
    f_.v141 = -1;
    f_.v142 = -1;
    f_.v143 = -1;
    f_.v144 = -1;
    f_.v145 = -1;
    f_.v146 = -1;
    f_.v147 = -1;
    f_.v148 = -1;
    f_.v132 = v6 + 2;
    f_.v133 = 0xFFFF0001FFFF0000LL;
    f_.v134 = (const char*)0xFFFF0004FFFF0002LL;
    f_.v135 = 0xFFFF0006FFFF0005LL;
    f_.v149 = 8;
    f_.v136 = 0xFFFF0008FFFF0007LL;
    v95 = GameRoutine_a4dbe0(v94, "MID_Sys_Empty", 0);
    if (v95 != nullptr) {
      v96 = (__int64)v95;
      v97 = ui_LayoutAccessor_FindTextBox(v93, (__int64)"T_Txt");
      if (v97 != 0) {
        game_156c5d0(v97, v96, 0);
      }
    }
    LayoutAccessor_155e830((__int64)v93, 1);
    ++v30;
    if ((f_.v129 & 1) != 0 && f_.v131 != 0) {
      v98 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v98 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v98, f_.v131);
    }
    while (1) {
    LABEL_92:
      v99 = game_util_Format("L_Command%02d", v30);
      v100 = GameRoutine_1a09c70(v99);
      if (v100 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_153;
      }
      v101 = v100;
      if (v100 >= 0x17) {
        if ((v100 | 7) == 0x17) {
          v103 = 26;
        }
        else {
          v103 = (v100 | 7) + 1;
        }
        v104 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v103, 16, 0);
        v105 = v103 | 1;
        v80 = f_.v128;
        v102 = (char*)v104;
        f_.v133 = v101;
        f_.v134 = (const char*)v104;
        f_.v132 = (__int64*)v105;
      }
      else {
        v102 = (char*)&f_.v132 + 1;
        LOBYTE(f_.v132) = 2 * v100;
        if (v100 == 0) {
          goto LABEL_101;
        }
      }
      GameRoutine_1a0b940((__int64)v102, (__int64)v99, v101);
    LABEL_101:
      v102[v101] = 0;
      if (((unsigned __int8)f_.v132 & 1) != 0) {
        v106 = f_.v134;
      }
      else {
        v106 = (char*)&f_.v132 + 1;
      }
      v107 = LayoutAccessor_155fbe0(v80, v106);
      LayoutAccessor_155e830((__int64)v107, 0);
      if (((unsigned __int8)f_.v132 & 1) != 0 && f_.v134 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v108 = 128;
        }
        else {
          v108 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v108, (__int64)f_.v134);
      }
      if (++v30 == 6) {
        goto LABEL_65;
      }
    }
  }
  v28 = 0;
  v29 = 0;
  v30 = 0;
  f_.v125 = v27;
  do {
    v31 = *(_QWORD*)(a1 + 112);
    v32 = *(_BYTE*)(v31 + 40);
    v33 = *(__int64**)(v31 + 56);
    v34 = (__int64*)(v31 + 41);
    v35 = *((_QWORD*)v27 + 1) + v28;
    if ((v32 & 1) != 0) {
      v34 = v33;
    }
    f_.v132 = v34;
    v36 = *(_QWORD*)(v35 + 32);
    if (v36 == 0) {
      goto LABEL_152;
    }
    v37 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v36 + 48LL))(
        v36, (__int64)&f_.v132);
    v38 = *(_QWORD*)(a1 + 112);
    v39 = (const char*)v37;
    v40 = *(_BYTE*)(v38 + 40);
    v41 = *(__int64**)(v38 + 56);
    v42 = (__int64*)(v38 + 41);
    v43 = *((_QWORD*)v27 + 1) + v28;
    if ((v40 & 1) != 0) {
      v42 = v41;
    }
    f_.v132 = v42;
    v44 = *(_QWORD*)(v43 + 80);
    if (v44 == 0) {
      goto LABEL_152;
    }
    v45 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v44 + 48LL))(
        v44, (__int64)&f_.v132);
    v46 = *(_QWORD*)(a1 + 112);
    v47 = v45;
    v48 = *(_BYTE*)(v46 + 40);
    v49 = *(__int64**)(v46 + 56);
    v50 = (__int64*)(v46 + 41);
    v51 = *((_QWORD*)v27 + 1) + v28;
    if ((v48 & 1) != 0) {
      v50 = v49;
    }
    f_.v132 = v50;
    v52 = *(_QWORD*)(v51 + 128);
    if (v52 == 0) {
      goto LABEL_152;
    }
    v53 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v52 + 48LL))(
        v52, (__int64)&f_.v132);
    v54 = *(_QWORD*)(a1 + 112);
    v55 = v53;
    v56 = *(_BYTE*)(v54 + 40);
    v57 = *(__int64**)(v54 + 56);
    v58 = (__int64*)(v54 + 41);
    v59 = *((_QWORD*)v27 + 1) + v28;
    if ((v56 & 1) != 0) {
      v58 = v57;
    }
    f_.v132 = v58;
    v60 = *(_QWORD*)(v59 + 176);
    if (v60 == 0) {
    LABEL_152:
      GameRoutine_60a310();
    }
    v61 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v60 + 48LL))(
        v60, (__int64)&f_.v132);
    if (game_gmap_GmapClock_instance_ != 0) {
      v62 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v62 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v63 =
        GameRoutine_143d720((unsigned int*)(*(_QWORD*)(a1 + 112) + 32LL), v62);
    if ((v47 & 1) != 0) {
      v64 = v30;
      v65 = v63;
      v66 = v61;
      f_.v127 = v64;
      v67 = game_util_Format("L_Command%02d", v64);
      v68 = GameRoutine_1a09c70(v67);
      if (v68 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_153;
      }
      v69 = v68;
      if (v68 >= 0x17) {
        if ((v68 | 7) == 0x17) {
          v72 = 26;
        }
        else {
          v72 = (v68 | 7) + 1;
        }
        v73 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v72, 16, 0);
        v74 = v72 | 1;
        v71 = f_.v128;
        v70 = (char*)v73;
        f_.v133 = v69;
        f_.v134 = (const char*)v73;
        f_.v132 = (__int64*)v74;
      }
      else {
        v70 = (char*)&f_.v132 + 1;
        v71 = f_.v128;
        LOBYTE(f_.v132) = 2 * v68;
        if (v68 == 0) {
          goto LABEL_49;
        }
      }
      GameRoutine_1a0b940((__int64)v70, (__int64)v67, v69);
    LABEL_49:
      v70[v69] = 0;
      if (((unsigned __int8)f_.v132 & 1) != 0) {
        v75 = f_.v134;
      }
      else {
        v75 = (char*)&f_.v132 + 1;
      }
      v76 = LayoutAccessor_155fbe0(v71, v75);
      LayoutAccessor_1562060(v76, (__int64)"T_Txt", v39);
      if ((v55 & v65 & 1) != 0) {
        v77 = "Default";
      }
      else {
        v77 = "Disable";
      }
      LayoutAccessor_1562cf0((__int64)v76, (unsigned int*)v77);
      if ((v66 & 1) != 0) {
        v78 = "StatusTurn";
      }
      else {
        v78 = "StatusNone";
      }
      LayoutAccessor_1562cf0((__int64)v76, (unsigned int*)v78);
      LayoutAccessor_155e830((__int64)v76, 1);
      if (((unsigned __int8)f_.v132 & 1) != 0 && f_.v134 != nullptr) {
        v79 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v79 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, (__int64)f_.v134);
      }
      v27 = f_.v125;
      a1 = f_.v126;
      v30 = f_.v127 + 1;
    }
    ++v29;
    v28 += 192;
  } while (v29 < *v27);
  v4 = msg_MessageManager_instance__ptr[0];
  v6 = GameData_212e348;
  if (v30 < 1) {
    goto LABEL_70;
  }
  v80 = f_.v128;
  if ((unsigned int)v30 <= 5) {
    goto LABEL_92;
  }
LABEL_65:
  f_.v130 = 0;
  f_.v131 = 0;
  f_.v129 = 0;
  v81 = GameRoutine_ee3920(&f_.v129, *(_QWORD*)(f_.v126 + 112) + 32LL);
  v82 = *(_QWORD*)(f_.v126 + 112);
  f_.v130 = v81;
  if (*(_DWORD*)(v82 + 32) == 8) {
    f_.v140 = 0;
    f_.v141 = 0;
    f_.v133 = 0;
    f_.v134 = nullptr;
    LODWORD(f_.v132) = 18;
    v83 = (unsigned __int64*)(v82 + 40);
    f_.v135 = 0;
    f_.v136 = 0;
    f_.v137 = 0;
    f_.v138 = 0;
    if (&f_.v133 != (unsigned __int64*)(v82 + 40)) {
      if ((*(_BYTE*)v83 & 1) != 0) {
        GameRoutine_64df20(&f_.v133, *(_QWORD*)(v82 + 56),
                           *(_QWORD*)(v82 + 48));
        v81 = f_.v130;
      }
      else {
        v84 = *(_QWORD*)(v82 + 48);
        f_.v133 = *v83;
        f_.v134 = (const char*)v84;
        f_.v135 = *(_QWORD*)(v82 + 56);
      }
    }
    if (v81 >= f_.v131) {
      v112 = GameRoutine_ee3920(&f_.v129, (__int64)&f_.v132);
    }
    else {
      *(_DWORD*)v81 = (_DWORD)f_.v132;
      if ((f_.v133 & 1) != 0) {
        v113 = v81;
        fw_text_String_CopyTerminated((__int64*)(v81 + 8), f_.v135,
                                      (unsigned __int64)f_.v134);
        v81 = v113;
        if ((f_.v136 & 1) == 0) {
          goto LABEL_117;
        }
      LABEL_114:
        v111 = v81;
        fw_text_String_CopyTerminated((__int64*)(v81 + 32), f_.v138, f_.v137);
        v81 = v111;
      }
      else {
        v109 = f_.v133;
        v110 = f_.v135;
        *(_QWORD*)(v81 + 16) = f_.v134;
        *(_QWORD*)(v81 + 24) = v110;
        *(_QWORD*)(v81 + 8) = v109;
        if ((f_.v136 & 1) != 0) {
          goto LABEL_114;
        }
      LABEL_117:
        *(_QWORD*)(v81 + 40) = f_.v137;
        v114 = f_.v136;
        *(_QWORD*)(v81 + 48) = f_.v138;
        *(_QWORD*)(v81 + 32) = v114;
      }
      *(_QWORD*)(v81 + 72) = f_.v141;
      *(_QWORD*)(v81 + 64) = f_.v140;
      v112 = v81 + 80;
    }
    f_.v130 = v112;
    if ((f_.v136 & 1) != 0 && f_.v138 != 0) {
      v115 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v115 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v115, f_.v138);
    }
    if ((f_.v133 & 1) != 0 && f_.v135 != 0) {
      v116 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v116 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v116, f_.v135);
    }
  }
  v117 = (__int64*)GameData_225e7a8;
  if ((__int64*)(GameData_225e7a8 + 728) != &f_.v129) {
    GameRoutine_18f3d00((__int64*)(GameData_225e7a8 + 728), f_.v129, f_.v130,
                        0xCCCCCCCCCCCCCCCDLL *
                            ((__int64)(f_.v130 - f_.v129) >> 4));
  }
  ProcFastTravelMenu_18f4120(v117 + 94, 0, 0, 0);
  ProcFastTravelMenu_18f4120(v117 + 24, v117[94], v117[95],
                             (v117[95] - v117[94]) >> 7);
  v118 = f_.v129;
  if (f_.v129 != 0) {
    v119 = f_.v130;
    if (f_.v129 == f_.v130) {
      goto LABEL_148;
    }
    do {
      if ((*(_BYTE*)(v119 - 48) & 1) != 0) {
        v120 = *(_QWORD*)(v119 - 32);
        if (v120 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v121 = 128;
          }
          else {
            v121 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v121, v120);
        }
      }
      if ((*(_BYTE*)(v119 - 72) & 1) != 0) {
        v122 = *(_QWORD*)(v119 - 56);
        if (v122 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v123 = 128;
          }
          else {
            v123 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v123, v122);
        }
      }
      v119 -= 80;
    } while (v119 != v118);
    f_.v130 = v118;
    v118 = f_.v129;
    if (f_.v129 != 0) {
    LABEL_148:
      v124 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v124 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, v118);
    }
  }
}

void game_hub_anonymous_169d700(_QWORD* a1, __int64* a2)
{
  char* v4;
  unsigned int* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  void* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _BYTE* v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  void* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64 (**v66)();
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  struct {
    char gap0_[40];
    __int64* v73;
    __int64 v74;
    __int64 v75;
    __int64 (**v76)();
    char* v77;
    unsigned __int64 v78;
    unsigned __int64 v79;
    __int64* v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
  } f_;

  LayoutAccessor_1562cf0((__int64)a2, (unsigned int*)"UnitInfo");
  ui_LayoutAccessor_SetPaneVisible((__int64)a2, (__int64)"L_ReceptionTime", 0);
  if (a1[15] != 0) {
    v4 = "UnitScout";
  }
  else {
    v4 = "UnitOther";
  }
  if (a1[14] != 0) {
    v5 = (unsigned int*)"UnitPlayer";
  }
  else {
    v5 = (unsigned int*)v4;
  }
  LayoutAccessor_1562cf0((__int64)a2, v5);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = msg_MessageManager_instance__ptr[0];
  v8 = GameData_212e348;
  if (a1[14] != 0) {
    v9 = a1[14];
  }
  else {
    v9 = a1[15];
  }
  if (v9 != 0) {
    LayoutAccessor_1571860(a2, v9, 1, 0, 0, 0);
    v10 = fw_memory_HeapManager_Allocate(*v6, 16, 16, 0);
    f_.v80 = (__int64*)&f_.v76;
    *(_QWORD*)v10 = 0xA00000000LL;
    *(_QWORD*)(v10 + 8) = 0x100000000FLL;
    f_.v75 = v9;
    f_.v76 = GameData_204e798;
    f_.v77 = (char*)&f_.v75;
    GameRoutine_1586d80((__int64)a2, (_DWORD*)v10, (_DWORD*)(v10 + 16),
                        (__int64)&f_.v76, 1, 0, 0, v9);
    if (f_.v80 == (__int64*)&f_.v76) {
      v11 = 32;
    }
    else {
      if (f_.v80 == nullptr) {
        goto LABEL_25;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*f_.v80 + v11))((__int64)f_.v80);
  LABEL_25:
    LayoutAccessor_1560070((void*)(&f_.v73), a2, "L_ItemIcon");
    if (*(_WORD*)(v9 + 1952) != 0) {
      v22 = *(_QWORD*)(v9 + 1952);
    }
    else {
      v22 = 0;
    }
    f_.v75 = v22;
    if (f_.v74 == 0) {
      goto LABEL_72;
    }
    v23 = std___1___shared_weak_count_lock(f_.v74);
    if (v23 == 0) {
    LABEL_70:
      if (f_.v74 != 0) {
        std___1___shared_weak_count___release_weak(f_.v74);
      }
    LABEL_72:
      v47 = *v7;
      if (a1[15] != 0) {
        f_.v81 = -1;
        f_.v82 = -1;
        f_.v83 = -1;
        f_.v84 = -1;
        f_.v85 = -1;
        f_.v86 = -1;
        f_.v87 = -1;
        f_.v88 = -1;
        f_.v89 = -1;
        f_.v90 = -1;
        f_.v91 = -1;
        f_.v92 = -1;
        f_.v76 = (__int64 (**)(void))(v8 + 2);
        f_.v77 = (char*)0xFFFF0001FFFF0000LL;
        f_.v78 = 0xFFFF0004FFFF0002LL;
        f_.v79 = 0xFFFF0006FFFF0005LL;
        f_.v93 = 8;
        f_.v80 = (__int64*)0xFFFF0008FFFF0007LL;
        v48 = GameRoutine_a4dbe0(v47, "MID_FastTravelMenu_ScoutCondition", 0);
        if (v48 != nullptr) {
          v49 = (__int64)v48;
          v50 = ui_LayoutAccessor_FindTextBox(a2, (__int64)"L_Info/T_Title");
          if (v50 != 0) {
            game_156c5d0(v50, v49, 0);
          }
        }
        game_gameui_1597cc0(a2, *(_QWORD*)(a1[15] + 392LL), 1, 1);
      }
      else {
        f_.v81 = -1;
        f_.v82 = -1;
        f_.v83 = -1;
        f_.v84 = -1;
        f_.v85 = -1;
        f_.v86 = -1;
        f_.v87 = -1;
        f_.v88 = -1;
        f_.v89 = -1;
        f_.v90 = -1;
        f_.v91 = -1;
        f_.v92 = -1;
        f_.v76 = (__int64 (**)(void))(v8 + 2);
        f_.v77 = (char*)0xFFFF0001FFFF0000LL;
        f_.v78 = 0xFFFF0004FFFF0002LL;
        f_.v79 = 0xFFFF0006FFFF0005LL;
        f_.v93 = 8;
        f_.v80 = (__int64*)0xFFFF0008FFFF0007LL;
        v51 = GameRoutine_a4dbe0(v47, "MID_ScoutInfo_Profile", 0);
        if (v51 != nullptr) {
          v52 = (__int64)v51;
          v53 = ui_LayoutAccessor_FindTextBox(a2, (__int64)"L_Info/T_Title");
          if (v53 != 0) {
            game_156c5d0(v53, v52, 0);
          }
        }
        v54 = *(_QWORD*)(a1[14] + 392LL);
        if (v54 != 0) {
          v55 = *(_QWORD*)(v54 + 288);
          if (v55 != 0 && (v56 = GameRoutine_975940(v55)) != 0 &&
              (v57 = *(const char**)(v56 + 96)) != nullptr) {
            v58 = *v7;
            f_.v81 = -1;
            f_.v82 = -1;
            f_.v83 = -1;
            f_.v84 = -1;
            f_.v85 = -1;
            f_.v86 = -1;
            f_.v87 = -1;
            f_.v88 = -1;
            f_.v89 = -1;
            f_.v90 = -1;
            f_.v91 = -1;
            f_.v92 = -1;
            f_.v76 = (__int64 (**)(void))(v8 + 2);
            f_.v77 = (char*)0xFFFF0001FFFF0000LL;
            f_.v78 = 0xFFFF0004FFFF0002LL;
            f_.v79 = 0xFFFF0006FFFF0005LL;
            f_.v93 = 8;
            f_.v80 = (__int64*)0xFFFF0008FFFF0007LL;
            v59 = GameRoutine_a4dbe0(v58, v57, 0);
            if (v59 == nullptr) {
              goto LABEL_90;
            }
          }
          else {
            v59 = &GameData_1a9f09e;
          }
        }
        else {
          v59 = &GameData_1a9f09e;
        }
        v60 = ui_LayoutAccessor_FindTextBox(a2, (__int64)"T_Profile");
        if (v60 != 0) {
          game_156c5d0(v60, (__int64)v59, 0);
        }
      }
    LABEL_90:
      if (*(_BYTE*)(v9 + 2136) != 0) {
        v61 = game_97b2f0(v9 + 2104);
        if (v61 == nullptr) {
          goto LABEL_96;
        }
      }
      else {
        v61 = GameRoutine_67ed20(*(_QWORD**)(v9 + 392));
        if (v61 == nullptr) {
        LABEL_96:
          v63 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v63 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v63, v10);
          goto LABEL_99;
        }
      }
      v62 = ui_LayoutAccessor_FindTextBox(a2, (__int64)"T_Txt");
      if (v62 != 0) {
        game_156c5d0(v62, (__int64)v61, 0);
      }
      goto LABEL_96;
    }
    v24 = v23;
    if (f_.v73 != nullptr) {
      f_.v76 = GameData_204d688;
      f_.v80 = (__int64*)&f_.v76;
      game_gameui_157b310(f_.v73, (unsigned __int16*)&f_.v75, (__int64)&f_.v76);
      if (f_.v80 == (__int64*)&f_.v76) {
        v25 = 32;
      }
      else {
        if (f_.v80 == nullptr) {
          goto LABEL_68;
        }
        v25 = 40;
      }
      (*(void (**)(__int64))(*f_.v80 + v25))((__int64)f_.v80);
    }
  LABEL_68:
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak(v24);
    }
    goto LABEL_70;
  }
  v12 = *(_QWORD**)(a1[17] + 32LL);
  v13 = GameRoutine_67ed20(v12);
  if (v13 != nullptr) {
    v14 = (__int64)v13;
    v15 = ui_LayoutAccessor_FindTextBox(a2, (__int64)"T_Txt");
    if (v15 != 0) {
      game_156c5d0(v15, v14, 0);
    }
  }
  v16 = ui_LayoutAccessor_FindPane(a2, (__int64)"Face");
  if (v16 != 0) {
    v16 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
  }
  v17 = GameRoutine_1840a20(v16, 0, (__int64)v12, 6u, 1);
  ui_LayoutAccessor_SetPaneVisible((__int64)a2, (__int64)"Face", v17 & 1);
  v18 = v12[42];
  if (v18 != 0) {
    GameRoutine_96de20(v18);
    v19 = ui_LayoutAccessor_FindPane(a2, (__int64)"IconClan");
    if (v19 != 0) {
      v20 = __dynamic_cast(v19, GameData_212d670[0], GameData_212d678[0], 0);
      v21 = v12[42];
      if (v21 == 0) {
        goto LABEL_41;
      }
    LABEL_36:
      v26 = GameRoutine_96de20(v21);
      if (v20 != 0) {
        v27 = *(_BYTE**)(v26 + 48);
        if (v27 != nullptr && *v27 != 0) {
          v28 = v26;
          if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v27) & 1) !=
              0) {
            Manager_136a920(ui_Manager_instance_ + 1264, v20, 0, 5u,
                            *(_BYTE**)(v28 + 48));
          }
        }
      }
      goto LABEL_41;
    }
    v20 = 0;
    v21 = v12[42];
    if (v21 != 0) {
      goto LABEL_36;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible((__int64)a2, (__int64)"IconClan", 0);
  }
LABEL_41:
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_51;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3 && a1[16] != 0) {
    v29 = "MID_FastTravelMenu_CanJoin";
    goto LABEL_52;
  }
  v30 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)(v12[3] + 1072LL));
  if (v30 != 0 && *(_DWORD*)(v30 + 32) != 0 &&
      game_GameModeData_instance_ != 0 &&
      (v31 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)(v12[3] + 1192LL))) != 0 &&
      *(_DWORD*)(v31 + 32) != 0) {
    v29 = "MID_Menu_Cause_DeadAlive";
  }
  else {
  LABEL_51:
    v29 = "MID_FastTravelMenu_CannotScout";
  }
LABEL_52:
  v32 = *v7;
  f_.v81 = -1;
  f_.v82 = -1;
  f_.v83 = -1;
  f_.v84 = -1;
  f_.v85 = -1;
  f_.v86 = -1;
  f_.v87 = -1;
  f_.v88 = -1;
  f_.v89 = -1;
  f_.v90 = -1;
  f_.v91 = -1;
  f_.v92 = -1;
  f_.v93 = 8;
  f_.v80 = (__int64*)0xFFFF0008FFFF0007LL;
  f_.v76 = (__int64 (**)(void))(v8 + 2);
  f_.v77 = (char*)0xFFFF0001FFFF0000LL;
  f_.v78 = 0xFFFF0004FFFF0002LL;
  f_.v79 = 0xFFFF0006FFFF0005LL;
  v33 = GameRoutine_a4dbe0(v32, v29, 0);
  if (v33 != nullptr) {
    v34 = (__int64)v33;
    v35 = ui_LayoutAccessor_FindTextBox(a2, (__int64)"T_Scout");
    if (v35 != 0) {
      game_156c5d0(v35, v34, 0);
    }
  }
  f_.v81 = -1;
  f_.v82 = -1;
  f_.v83 = -1;
  f_.v84 = -1;
  f_.v85 = -1;
  f_.v86 = -1;
  f_.v87 = -1;
  f_.v88 = -1;
  v36 = *msg_MessageManager_instance__ptr[0];
  f_.v89 = -1;
  f_.v90 = -1;
  f_.v91 = -1;
  f_.v92 = -1;
  f_.v76 = (__int64 (**)(void))(v8 + 2);
  f_.v77 = (char*)0xFFFF0001FFFF0000LL;
  f_.v78 = 0xFFFF0004FFFF0002LL;
  f_.v79 = 0xFFFF0006FFFF0005LL;
  f_.v80 = (__int64*)0xFFFF0008FFFF0007LL;
  f_.v93 = 8;
  v37 = GameRoutine_a4dbe0(v36, "MID_ScoutInfo_Profile", 0);
  if (v37 != nullptr) {
    v38 = (__int64)v37;
    v39 = ui_LayoutAccessor_FindTextBox(a2, (__int64)"L_Info/T_Title");
    if (v39 != 0) {
      game_156c5d0(v39, v38, 0);
    }
  }
  v40 = v12[36];
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v41 = GameData_212e348;
  if (v40 != 0 && (v42 = GameRoutine_975940(v40)) != 0 &&
      (v43 = *(const char**)(v42 + 96)) != nullptr) {
    f_.v81 = -1;
    f_.v82 = -1;
    f_.v83 = -1;
    f_.v84 = -1;
    f_.v85 = -1;
    f_.v86 = -1;
    f_.v87 = -1;
    f_.v88 = -1;
    v44 = *msg_MessageManager_instance__ptr[0];
    f_.v89 = -1;
    f_.v90 = -1;
    f_.v91 = -1;
    f_.v92 = -1;
    f_.v76 = (__int64 (**)(void))(v41 + 2);
    f_.v77 = (char*)0xFFFF0001FFFF0000LL;
    f_.v78 = 0xFFFF0004FFFF0002LL;
    f_.v79 = 0xFFFF0006FFFF0005LL;
    f_.v93 = 8;
    f_.v80 = (__int64*)0xFFFF0008FFFF0007LL;
    v45 = GameRoutine_a4dbe0(v44, v43, 0);
    if (v45 == nullptr) {
      goto LABEL_99;
    }
  }
  else {
    v45 = &GameData_1a9f09e;
  }
  v46 = ui_LayoutAccessor_FindTextBox(a2, (__int64)"T_Profile");
  if (v46 != 0) {
    game_156c5d0(v46, (__int64)v45, 0);
  }
LABEL_99:
  v64 = a1[17];
  f_.v77 = nullptr;
  f_.v78 = 0;
  f_.v76 = nullptr;
  f_.v77 = (char*)GameRoutine_ee34c0((__int64*)&f_.v76, v64 + 32);
  v65 = (__int64*)GameData_225e7a8;
  GameRoutine_18f3d00((__int64*)(GameData_225e7a8 + 728), 0, 0, 0);
  if (v65 + 94 != (__int64*)&f_.v76) {
    ProcFastTravelMenu_18f4120(v65 + 94, (__int64)f_.v76, (__int64)f_.v77,
                               (f_.v77 - (char*)f_.v76) >> 7);
  }
  ProcFastTravelMenu_18f4120(v65 + 24, v65[94], v65[95],
                             (v65[95] - v65[94]) >> 7);
  v66 = f_.v76;
  if (f_.v76 != nullptr) {
    v67 = (__int64)f_.v77;
    if (f_.v76 == (__int64 (**)(void))f_.v77) {
      goto LABEL_119;
    }
    do {
      if (*(_BYTE*)(v67 - 16) == 1) {
        if ((*(_BYTE*)(v67 - 64) & 1) != 0) {
          v68 = *(_QWORD*)(v67 - 48);
          if (v68 != 0) {
            if (*(_QWORD*)(*v6 + 200) != 0) {
              v69 = 128;
            }
            else {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v69, v68);
          }
        }
        if ((*(_BYTE*)(v67 - 88) & 1) != 0) {
          v70 = *(_QWORD*)(v67 - 72);
          if (v70 != 0) {
            if (*(_QWORD*)(*v6 + 200) != 0) {
              v71 = 128;
            }
            else {
              v71 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v71, v70);
          }
        }
      }
      v67 -= 128;
    } while ((__int64 (**)(void))v67 != v66);
    f_.v77 = (char*)v66;
    v66 = f_.v76;
    if (f_.v76 != nullptr) {
    LABEL_119:
      v72 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v72 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v72, (__int64)v66);
    }
  }
}

#pragma GCC visibility pop
