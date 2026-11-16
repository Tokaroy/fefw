#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(__int64 result);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_2104130;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21c9988;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_21043e8[14];
extern char GameData_1a9f09e;
extern const char GameData_1ad7b01[];
int GameRoutine_1a09d30(const char*, const char*);
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void InfoTitle_18b7a00(__int64, unsigned int);
void InfoTitle_18b7f20(__int64, const char*);
void InfoTitle_18b83a0(__int64, const char*, char);
void InfoTitle_18b8760(__int64, const char*);
void InfoTitle_18b8a60(__int64);
void InfoTitle_18b8be0(__int64);
void __attribute__((noreturn)) String_60a1d0();
void game_gameui_control_18a5bc0(__int64);
void game_gameui_control_18a7110(__int64*, _DWORD*, __int64, const char*,
                                 unsigned __int8*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void game_gameui_control_18a6760(__int64 a1, _QWORD* a2, _QWORD* a3, char a4,
                                 char a5);
void game_gameui_control_18b9ca0(__int64 a1, unsigned int a2);

void game_gameui_control_18a6760(__int64 a1, _QWORD* a2, _QWORD* a3, char a4,
                                 char a5)
{

#pragma clang fp contract(off)
  char v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  int v21;
  char* v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  int v30;
  int v31;
  char v32;
  __int64 v33;
  char v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  unsigned __int64 v38;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  unsigned __int8 v48;
  char* v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  _DWORD* v54;
  _DWORD* v55;
  int v56;
  char* v57;
  char* v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  char* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _DWORD* v65;
  char** v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  int v71;
  char* v72;
  char* v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  char* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  _DWORD* v82;
  _DWORD* v83;
  __int64 v84;
  __int64 v85;
  struct {
    char gap0_[56];
    _QWORD v86[2];
    char* v87;
    _QWORD v88[2];
    char* v89;
    _QWORD v90[2];
    unsigned __int64 v91;
    unsigned __int64 v92;
    int v93;
    int v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    char gap248_[4];
    float v108;
  } f_;
  _DWORD v109[4];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  if ((a4 & 1) == 0) {
    LayoutAccessor_1562cf0(a1 + 88, (unsigned int*)"InfoTitleOff");
    goto LABEL_16;
  }
  LayoutAccessor_1562cf0(a1 + 88, (unsigned int*)"InfoTitleOn");
  LayoutAccessor_1562cf0(a1 + 88, (unsigned int*)"NumNone");
  LayoutAccessor_1562cf0(a1 + 88, (unsigned int*)"Icon");
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"Icon", 0);
  if ((a5 & 1) != 0) {
    f_.v95 = -1;
    f_.v96 = -1;
    f_.v97 = -1;
    f_.v98 = -1;
    v11 = *msg_MessageManager_instance__ptr[0];
    f_.v99 = -1;
    f_.v100 = -1;
    f_.v101 = -1;
    f_.v102 = -1;
    f_.v103 = -1;
    f_.v104 = -1;
    f_.v105 = -1;
    f_.v106 = -1;
    f_.v90[0] = GameData_212e348 + 2;
    f_.v90[1] = 0xFFFF0001FFFF0000LL;
    f_.v91 = 0xFFFF0004FFFF0002LL;
    f_.v92 = 0xFFFF0006FFFF0005LL;
    f_.v107 = 8;
    f_.v93 = -65529;
    f_.v94 = -65528;
    v12 = GameRoutine_a4dbe0(v11, "MID_Sys_Unknown", 0);
    if (v12 == nullptr) {
      goto LABEL_16;
    }
    v13 = v12;
  }
  else {
    if (a3 != nullptr && a2 == (_QWORD*)GameData_21c9988) {
      v14 = a3[49];
      v15 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1784LL);
      if (v15 != 0) {
        v10 = *(_BYTE*)(v15 + 52);
      }
      v47 = *(_BYTE*)(v14 + 52);
      if (v15 != 0) {
        v47 = v10;
      }
      v48 = v47 - 1;
      if (v48 <= 2u) {
        v49 = GameData_21043e8[v48];
        f_.v95 = -1;
        f_.v96 = -1;
        f_.v97 = -1;
        f_.v98 = -1;
        f_.v99 = -1;
        f_.v100 = -1;
        v50 = *msg_MessageManager_instance__ptr[0];
        f_.v101 = -1;
        f_.v102 = -1;
        f_.v103 = -1;
        f_.v104 = -1;
        f_.v105 = -1;
        f_.v106 = -1;
        f_.v90[0] = GameData_212e348 + 2;
        f_.v90[1] = 0xFFFF0001FFFF0000LL;
        f_.v91 = 0xFFFF0004FFFF0002LL;
        f_.v92 = 0xFFFF0006FFFF0005LL;
        f_.v107 = 8;
        f_.v93 = -65529;
        f_.v94 = -65528;
        v51 = GameRoutine_a4dbe0(v50, v49, 0);
        if (v51 != nullptr) {
          v52 = (__int64)v51;
          v53 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                              (__int64)"T_Txt");
          if (v53 != 0) {
            GameRoutine_156c5d0(v53, v52, 0);
          }
        }
      }
      goto LABEL_17;
    }
    v16 = (const char*)a2[4];
    if (v16 != nullptr) {
      f_.v95 = -1;
      f_.v96 = -1;
      f_.v97 = -1;
      f_.v98 = -1;
      v17 = *msg_MessageManager_instance__ptr[0];
      f_.v99 = -1;
      f_.v100 = -1;
      f_.v101 = -1;
      f_.v102 = -1;
      f_.v103 = -1;
      f_.v104 = -1;
      f_.v105 = -1;
      f_.v106 = -1;
      f_.v90[0] = GameData_212e348 + 2;
      f_.v90[1] = 0xFFFF0001FFFF0000LL;
      f_.v91 = 0xFFFF0004FFFF0002LL;
      f_.v92 = 0xFFFF0006FFFF0005LL;
      f_.v107 = 8;
      f_.v93 = -65529;
      f_.v94 = -65528;
      v13 = GameRoutine_a4dbe0(v17, v16, 0);
      if (v13 == nullptr) {
        goto LABEL_16;
      }
    }
    else {
      v13 = &GameData_1a9f09e;
    }
  }
  v18 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88), (__int64)"T_Txt");
  if (v18 != 0) {
    GameRoutine_156c5d0(v18, (__int64)v13, 0);
  }
LABEL_16:
  if (a3 == nullptr) {
    v20 = 1;
    goto LABEL_26;
  }
LABEL_17:
  v19 = a3[49];
  v20 = 0;
  if (v19 != 0 && a2 == (_QWORD*)GameData_21c9988) {
    v20 = 0;
    if (*(_QWORD*)(*(_QWORD*)(v19 + 24) + 1784LL) != 0) {
      v19 = *(_QWORD*)(*(_QWORD*)(v19 + 24) + 1784LL);
    }
    v21 = *(unsigned __int8*)(v19 + 52);
    switch (v21) {
    case 1:
      v22 = "MJID_H_Commoner";
      goto LABEL_27;
    case 3:
      v22 = "MJID_H_God";
      v20 = 0;
      goto LABEL_27;
    case 2:
      v20 = 0;
      v22 = "MJID_H_Aristocrat";
    LABEL_27:
      f_.v95 = -1;
      f_.v96 = -1;
      f_.v97 = -1;
      f_.v98 = -1;
      v23 = *msg_MessageManager_instance__ptr[0];
      f_.v99 = -1;
      f_.v100 = -1;
      f_.v101 = -1;
      f_.v102 = -1;
      f_.v103 = -1;
      f_.v104 = -1;
      f_.v105 = -1;
      f_.v106 = -1;
      f_.v90[0] = GameData_212e348 + 2;
      f_.v90[1] = 0xFFFF0001FFFF0000LL;
      f_.v91 = 0xFFFF0004FFFF0002LL;
      f_.v92 = 0xFFFF0006FFFF0005LL;
      f_.v107 = 8;
      f_.v93 = -65529;
      f_.v94 = -65528;
      v24 = GameRoutine_a4dbe0(v23, v22, 0);
      if (v24 != nullptr) {
        v25 = (__int64)v24;
        v26 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                            (__int64)"L_InfoTxt/T_Txt");
        if (v26 != 0) {
          GameRoutine_156c5d0(v26, v25, 0);
        }
      }
      goto LABEL_30;
    default:
      break;
    }
  }
LABEL_26:
  v22 = (const char*)a2[5];
  if (v22 != nullptr) {
    goto LABEL_27;
  }
LABEL_30:
  v27 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v27 != 0) {
    v28 = v27;
    v29 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v29 != nullptr) {
      ui_text_190a0c0((float*)f_.v90, (__int64)v109, &f_.v108, v29, v29[27]);
      v30 = v109[0];
      v31 = v109[1];
    }
    else {
      v30 = 0;
      v31 = 0;
    }
    v32 = *(_BYTE*)(v28 + 88);
    *(_DWORD*)(v28 + 80) = v30;
    *(_DWORD*)(v28 + 84) = v31;
    *(_BYTE*)(v28 + 88) = v32 | 0x10;
  }
  v81 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       168, 16, 0);
  GameRoutine_1a0b950(v81, (__int64)&GameData_2104130, 0xA8u);
  v109[0] = 0;
  if ((v20 & 1) != 0) {
    v33 = a2[3] + 576LL;
  }
  else {
    LODWORD(f_.v90[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x228LL) +
                                    game_g_shared_system_skills_ptr + 4) &
                         0xFFF;
    v34 = game_HasSkill(a3 + 218, (unsigned int*)f_.v90);
    v35 = 576;
    if ((v34 & 1) != 0) {
      v35 = 672;
    }
    v33 = a2[3] + v35;
  }
  v36 = game_HashString((__int64)GameData_1ad7b01);
  v37 = GameData_212c880[0];
  if (v36 == 0) {
    goto LABEL_64;
  }
  v38 = *(_QWORD*)(*GameData_212c880[0] + 96);
  if (v38 == 0 | *(_QWORD*)(*GameData_212c880[0] + 112) == 0) {
    goto LABEL_64;
  }
  v40 = v38 - 1;
  if ((v38 & (v38 - 1)) != 0) {
    v41 = v36;
    if (v36 >= v38) {
      v41 = v36 % v38;
    }
  }
  else {
    v41 = v40 & v36;
  }
  v42 = *(_QWORD**)(*(_QWORD*)(*GameData_212c880[0] + 88) + 8 * v41);
  if (v42 != nullptr && (v43 = (_QWORD*)*v42) != nullptr) {
    if ((v38 & v40) == 0) {
      while (1) {
        v46 = v43[1];
        if (v46 == v36) {
          if (v43[2] == v36) {
            goto LABEL_95;
          }
        }
        else if ((v46 & v40) != v41) {
          goto LABEL_64;
        }
        v43 = (_QWORD*)*v43;
        v45 = 0;
        if (v43 == nullptr) {
          goto LABEL_75;
        }
      }
    }
    do {
      v44 = v43[1];
      if (v44 == v36) {
        if (v43[2] == v36) {
        LABEL_95:
          v45 = v43[3];
          v85 = a1;
          if ((v20 & 1) == 0) {
            goto LABEL_76;
          }
          goto LABEL_96;
        }
      }
      else {
        if (v44 >= v38) {
          v44 %= v38;
        }
        if (v44 != v41) {
          goto LABEL_64;
        }
      }
      v43 = (_QWORD*)*v43;
    } while (v43 != nullptr);
    v45 = 0;
  LABEL_75:
    v85 = a1;
    if ((v20 & 1) == 0) {
    LABEL_76:
      v54 = (_DWORD*)a3[222];
      v55 = (_DWORD*)a3[223];
      if (v54 != v55) {
        v56 = 0;
        while (*(_QWORD*)(*(_QWORD*)(*v37 + 64) +
                          8LL * (*(_DWORD*)v54 & 0xFFF)) != v45) {
        LABEL_79:
          if (++v54 == v55) {
            goto LABEL_97;
          }
        }
        v57 = *(const char**)(v81 + 152);
        v58 = *(const char**)(v81 + 160);
        v59 = GameRoutine_1a09c70(v58);
        if (v59 >= 0xFFFFFFFFFFFFFFF7LL) {
        LABEL_123:
          String_60a1d0();
        }
        v60 = v59;
        if (v59 >= 0x17) {
          if ((v59 | 7) == 0x17) {
            v62 = 26;
          }
          else {
            v62 = (v59 | 7) + 1;
          }
          f_.v89 = (char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v62, 16, 0);
          v63 = v62 | 1;
          v61 = f_.v89;
          v37 = GameData_212c880[0];
          f_.v88[0] = v63;
          f_.v88[1] = v60;
        }
        else {
          v61 = (char*)f_.v88 + 1;
          LOBYTE(f_.v88[0]) = 2 * v59;
          if (v59 == 0) {
          LABEL_90:
            v61[v60] = 0;
            game_gameui_control_18a7110((__int64*)(v85 + 88), v109, v45, v57,
                                        (unsigned __int8*)f_.v88);
            if ((f_.v88[0] & 1) != 0 && f_.v89 != nullptr) {
              v64 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v64 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v64,
                  (__int64)f_.v89);
            }
            v56 = 1;
            goto LABEL_79;
          }
        }
        GameRoutine_1a0b940((__int64)v61, (__int64)v58, v60);
        goto LABEL_90;
      }
    }
  }
  else {
  LABEL_64:
    v45 = 0;
    v85 = a1;
    if ((v20 & 1) == 0) {
      goto LABEL_76;
    }
  }
LABEL_96:
  v56 = 0;
LABEL_97:
  v65 = *(_DWORD**)(v33 + 32);
  v82 = *(_DWORD**)(v33 + 40);
  if (v65 == v82) {
    goto LABEL_118;
  }
  while (2) {
    v66 = (const char**)(v81 + 16);
    v67 = 168;
    v83 = v65;
    v68 = *(_DWORD*)v65 & 0xFFFLL;
    do {
      v69 = *(_QWORD*)(*(_QWORD*)(*v37 + 64) + 8 * v68);
      v70 = *(const char**)(v69 + 8);
      if (GameRoutine_1a09d30(v70, *(v66 - 2)) != 0 ||
          ((GameRoutine_1a09d30(v70, GameData_1ad7b01) == 0) &
           (unsigned __int8)v56) != 0) {
        goto LABEL_101;
      }
      v71 = v56;
      v72 = *(v66 - 1);
      v73 = *v66;
      v74 = GameRoutine_1a09c70(*v66);
      if (v74 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_123;
      }
      v75 = v74;
      if (v74 >= 0x17) {
        if ((v74 | 7) == 0x17) {
          v77 = 26;
        }
        else {
          v77 = (v74 | 7) + 1;
        }
        v84 = v77;
        v76 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v77, 16, 0);
        f_.v86[1] = v75;
        f_.v87 = v76;
        f_.v86[0] = v84 | 1;
      }
      else {
        v76 = (char*)f_.v86 + 1;
        LOBYTE(f_.v86[0]) = 2 * v74;
        if (v74 == 0) {
          goto LABEL_113;
        }
      }
      GameRoutine_1a0b940((__int64)v76, (__int64)v73, v75);
    LABEL_113:
      v76[v75] = 0;
      game_gameui_control_18a7110((__int64*)(v85 + 88), v109, v69, v72,
                                  (unsigned __int8*)f_.v86);
      v56 = v71;
      v37 = GameData_212c880[0];
      if ((f_.v86[0] & 1) != 0 && f_.v87 != nullptr) {
        v78 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v78 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, (__int64)f_.v87);
      }
    LABEL_101:
      v67 -= 24;
      v66 += 3;
    } while (v67 != 0);
    v65 = v83 + 1;
    if (v83 + 1 != v82) {
      continue;
    }
    break;
  }
LABEL_118:
  LayoutAccessor_1562cf0(v85 + 88, (unsigned int*)"StatusDetailOff");
  LayoutAccessor_1562cf0(v85 + 88, (unsigned int*)"StatusOff");
  LayoutAccessor_1562cf0(v85 + 88, (unsigned int*)"Wdw_TitleOff_Status02");
  v79 = ui_LayoutAccessor_FindAlignment((__int64*)(v85 + 88), "A_InfoDetail");
  if (v79 != 0) {
    Alignment_56b600(v79);
  }
  game_gameui_control_18a5bc0(v85);
  v80 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v80 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v80,
                                v81);
}

void game_gameui_control_18b9ca0(__int64 a1, unsigned int a2)
{
  char* v4;
  char* v5;

  InfoTitle_18b7f20(a1, "MID_Sys_ValueEmptyLong");
  if ((unsigned __int8)a2 <= 4u) {
    if ((unsigned __int8)a2 == 2) {
      v5 = "MID_BtlMenu_WeaponCost";
    }
    else {
      if ((unsigned __int8)a2 != 3) {
      LABEL_10:
        v4 = &GameData_1a9f09e;
        goto LABEL_11;
      }
      v5 = "MID_BtlMenu_ConsumeHp";
    }
    InfoTitle_18b8760(a1, v5);
    InfoTitle_18b83a0(a1, "MID_Sys_ValueEmptyLong", 1);
    InfoTitle_18b7a00(a1, a2);
    InfoTitle_18b8a60(a1);
    return;
  }
  v4 = "MID_Sys_Remaining";
  if ((unsigned int)(unsigned __int8)a2 - 5 >= 2 && (unsigned __int8)a2 != 9) {
    goto LABEL_10;
  }
LABEL_11:
  InfoTitle_18b8760(a1, v4);
  InfoTitle_18b83a0(a1, "MID_Sys_ValueEmptyLong", 1);
  InfoTitle_18b7a00(a1, a2);
  if ((unsigned __int8)a2 <= 9u && ((1 << a2) & 0x260) != 0) {
    InfoTitle_18b8be0(a1);
  }
}

#pragma GCC visibility pop
