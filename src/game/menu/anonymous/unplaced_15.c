#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
_QWORD* ProcGmapPhaseSeq_14cb560(__int64, __int64, const char**, const char**,
                                 const char**, __int64, __int64, __int64);
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 BasicMenu_16e2460(_QWORD*, char, char);
__int64 Dialog_16499c0(__int64 result);
__int64 Dialog_1649e50(__int64 result, const char*, char, char);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 Registration_a4da40(__int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_156c910(__int64 result, const char*, int, ...);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_IsVibrationEnabled(_BYTE*);
__int64 game_menu_BasicMenu_Unknown16dd9a0(__int64 result);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
bool GameRoutine_1613a00(__int64, __int64, __int64);
bool GameRoutine_1613dd0(__int64*, __int64*, __int64*, __int64*, __int64*);
bool GameRoutine_1613f30(__int64*, __int64*, __int64*, __int64*, __int64*,
                         __int64*);
bool ProcEquipUnitSelectMenu_17ae020(__int64, __int64, char);
char* game_util_Format(const char*, ...);
double snd_Fade_Fade_10c830(__int64, float);
extern _UNKNOWN GameData_1ae5940;
extern __int64 (*GameData_20b7928[])();
extern __int64 (*GameData_20b79a8[])();
extern __int64 (*GameData_20b7a28[])();
extern __int64 (*GameData_20b7d30[])();
extern __int64 (*GameData_20b7db0[])();
extern __int64 (*GameData_20d2428[])();
extern __int64 (*GameData_20d24a8[])();
extern __int64 (*GameData_20d2528[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212cc70[57];
extern __int64* GameData_212d2b8;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e008[9];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_20403f0;
extern __int64 GameData_20d2170;
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting_ptr;
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_menu_anonymous_1463660(__int64 a1);
bool game_menu_anonymous_1614020(__int64* a1, __int64* a2, __int64* a3);
__int64 game_menu_anonymous_173b260(__int64 (*a1)());
__int64 game_menu_anonymous_173c130(__int64 (*a1)());
__int64 game_menu_anonymous_17ab880(__int64 a1);

__int64 game_menu_anonymous_1463660(__int64 a1)
{
  __int64 v2;
  char* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  _BYTE* v21;
  __int64 v22;
  __int64 v23;
  char v24;
  int v25;
  char v26;
  char* v27;
  char v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  unsigned __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    char* v37;
    _QWORD v38[2];
    char* v39;
    _QWORD v40[4];
    _QWORD* v41;
  } f_;

  if (*(_BYTE*)(a1 + 1064) == 1) {
    v2 = fw_memory_g_heap_manager_ptr;
    v3 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    f_.v38[0] = 41;
    f_.v38[1] = 36;
    f_.v39 = v3;
    strcpy(v3, "MID_MiracleEquipMenu_Invalid_Message");
    v4 = game_HashString((__int64)&GameData_1ae5940);
    if (v4 != 0) {
      v5 = *(_QWORD*)(*GameData_212cc70[0] + 96);
      if (v5 != 0 & *(_QWORD*)(*GameData_212cc70[0] + 112) != 0) {
        v7 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v8 = v4;
          if (v4 >= v5) {
            v8 = v4 % v5;
          }
        }
        else {
          v8 = v7 & v4;
        }
        v17 = *(_QWORD**)(*(_QWORD*)(*GameData_212cc70[0] + 88) + 8 * v8);
        if (v17 != nullptr) {
          v18 = (_QWORD*)*v17;
          if (v18 != nullptr) {
            if ((v5 & v7) == 0) {
              while (1) {
                v20 = v18[1];
                if (v20 == v4) {
                  if (v18[2] == v4) {
                    goto LABEL_48;
                  }
                }
                else if ((v20 & v7) != v8) {
                  goto LABEL_55;
                }
                v18 = (_QWORD*)*v18;
                if (v18 == nullptr) {
                  goto LABEL_55;
                }
              }
            }
            do {
              v19 = v18[1];
              if (v19 == v4) {
                if (v18[2] == v4) {
                LABEL_48:
                  v32 = (unsigned __int64*)v18[3];
                  if (v32 != nullptr && game_GameModeData_instance_ != 0) {
                    v33 = game_GameVariableTable_Find(
                        *(_QWORD**)(game_GameModeData_instance_ + 48), v32);
                    if (v33 != 0 && *(_BYTE*)(v33 + 32) != 0) {
                      GameRoutine_60a020(
                          (__int64)f_.v38,
                          "MID_MiracleEquipMenu_NotTemple_Message");
                      if ((f_.v38[0] & 1) != 0) {
                        v3 = f_.v39;
                      }
                      else {
                        v3 = (char*)f_.v38 + 1;
                      }
                    }
                  }
                  break;
                }
              }
              else {
                if (v19 >= v5) {
                  v19 %= v5;
                }
                if (v19 != v8) {
                  break;
                }
              }
              v18 = (_QWORD*)*v18;
            } while (v18 != nullptr);
          }
        }
      }
    }
  LABEL_55:
    f_.v37 = v3;
    v34 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, (__int64)&f_.v37);
    if (v34 != 0) {
      f_.v41 = nullptr;
      GameRoutine_6680e0(f_.v40, (_QWORD*)(v34 + 1248));
      if (f_.v41 == f_.v40) {
        v35 = 32;
      }
      else {
        if (f_.v41 == nullptr) {
          goto LABEL_61;
        }
        v35 = 40;
      }
      (*(void (**)(__int64))(*f_.v41 + v35))((__int64)f_.v41);
    }
  LABEL_61:
    if ((f_.v38[0] & 1) != 0 && f_.v39 != nullptr) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v36, (__int64)f_.v39);
    }
    return 11;
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20403f0, 0);
    if (result != 0) {
      v10 = result;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 464LL))(result) & 1) !=
          0) {
        *(_BYTE*)(*(_QWORD*)(v10 + 96) + 8LL) ^= 1u;
        game_menu_BasicMenu_Unknown16dd9a0(a1);
        v11 = *(_QWORD*)(game_GameModeData_instance_ + 160);
        v12 = *(_QWORD*)(v11 + 8);
        v13 = *(_QWORD*)(v11 + 16) - v12;
        if ((int)(v13 >> 5) < 1) {
          v16 = 0;
        }
        else {
          v14 = (unsigned __int8)v13 >> 5;
          if (((v13 >> 5) & 0x7FFFFFFF) - 1 >= 7) {
            v21 = (_BYTE*)(v12 + 136);
            v22 = 0;
            v16 = 0;
            v23 = -8LL * ((v13 >> 8) & 0xFFFFFFF);
            do {
              v22 -= 8;
              v24 = v21[96];
              v25 = v16 + (*(v21 - 128) & 1) + (*(v21 - 96) & 1) +
                    (*(v21 - 64) & 1) + (*(v21 - 32) & 1) + (*v21 & 1) +
                    (v21[32] & 1);
              v26 = v21[64];
              v21 += 256;
              v16 = v25 + (v26 & 1) + (v24 & 1);
            } while (v23 != v22);
            v15 = -v22;
          }
          else {
            v15 = 0;
            v16 = 0;
          }
          if (v14 != 0) {
            v27 = (char*)(v12 + 32 * v15 + 8);
            do {
              v28 = *v27;
              v27 += 32;
              --v14;
              v16 += v28 & 1;
            } while (v14 != 0);
          }
        }
        v29 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 848),
                                         (__int64)"L_Num/T_Num");
        if (v29 != 0) {
          v30 = __dynamic_cast(v29, GameData_212d670[0], GameData_212d690, 0);
          if (v30 != 0) {
            game_156c910(v30, "%d", 1, v16);
          }
        }
        if ((*(_BYTE*)(*(_QWORD*)(v10 + 96) + 8LL) & 1) != 0) {
          snd_Fade_Fade_10c830((__int64)f_.v40, 0x0.0p+0f);
          v31 = "SE_SYS_Miracle_Equip";
        }
        else {
          snd_Fade_Fade_10c830((__int64)f_.v40, 0x0.0p+0f);
          v31 = "SE_SYS_Miracle_Remove";
        }
        snd_play_ff2d0((__int64)v31, (__int64)v31, (__int64)f_.v40, 0, 0x10001u,
                       0, 0x0.0p+0f, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(f_.v40);
        return 0;
      }
      else {
        return 1;
      }
    }
  }
  return result;
}

bool game_menu_anonymous_1614020(__int64* a1, __int64* a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  bool v8;
  bool v9;
  __int64 v10;
  bool v11;
  __int64* v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  int v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  char* v31;

  v6 = a2 - a1;
  if (v6 > 2) {
    switch (v6) {
    case 3LL:
      v8 = GameRoutine_1613a00(*a3, a1[1], *a1);
      v9 = GameRoutine_1613a00(*a3, *(a2 - 1), a1[1]);
      if (v8) {
        v10 = *a1;
        if (v9) {
          *a1 = *(a2 - 1);
          *(a2 - 1) = v10;
        }
        else {
          *a1 = a1[1];
          a1[1] = v10;
          if (GameRoutine_1613a00(*a3, *(a2 - 1), v10)) {
            v22 = a1[1];
            a1[1] = *(a2 - 1);
            *(a2 - 1) = v22;
          }
        }
      }
      else if (v9) {
        v16 = a1[1];
        a1[1] = *(a2 - 1);
        *(a2 - 1) = v16;
        if (GameRoutine_1613a00(*a3, a1[1], *a1)) {
          v17 = *a1;
          *a1 = a1[1];
          a1[1] = v17;
        }
      }
      return true;
    case 4LL:
      GameRoutine_1613dd0(a1, a1 + 1, a1 + 2, a2 - 1, a3);
      break;
    case 5LL:
      GameRoutine_1613f30(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3);
      break;
    default:
      goto LABEL_13;
    }
    return true;
  }
  if ((unsigned __int64)v6 < 2) {
    return true;
  }
  if (v6 == 2) {
    if (GameRoutine_1613a00(*a3, *(a2 - 1), *a1)) {
      v7 = *a1;
      *a1 = *(a2 - 1);
      *(a2 - 1) = v7;
    }
    return true;
  }
LABEL_13:
  v11 = GameRoutine_1613a00(*a3, a1[1], *a1);
  v12 = a1 + 2;
  v13 = GameRoutine_1613a00(*a3, a1[2], a1[1]);
  if (v11) {
    v14 = *a1;
    if (v13) {
      v15 = a1[2];
      a1[2] = v14;
      *a1 = v15;
    }
    else {
      v23 = a1[2];
      *a1 = a1[1];
      a1[1] = v14;
      if (GameRoutine_1613a00(*a3, v23, v14)) {
        v24 = a1[1];
        a1[1] = a1[2];
        a1[2] = v24;
      }
    }
  }
  else if (v13) {
    v19 = a1[1];
    v18 = a1[2];
    v20 = *a1;
    a1[1] = v18;
    a1[2] = v19;
    if (GameRoutine_1613a00(*a3, v18, v20)) {
      v21 = *a1;
      *a1 = a1[1];
      a1[1] = v21;
    }
  }
  v25 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v26 = 0;
  v27 = 0;
  while (1) {
    if (GameRoutine_1613a00(*a3, *v25, *v12)) {
      v29 = *v25;
      v30 = v26;
      do {
        v31 = (char*)a1 + v30;
        *(__int64*)((char*)a1 + v30 + 24) = *(__int64*)((char*)a1 + v30 + 16);
        if (v30 == -16) {
          v28 = a1;
          goto LABEL_30;
        }
        v30 -= 8;
      } while (GameRoutine_1613a00(*a3, v29, *((_QWORD*)v31 + 1)));
      v28 = (__int64*)((char*)a1 + v30 + 24);
    LABEL_30:
      ++v27;
      *v28 = v29;
      if (v27 == 8) {
        return v25 + 1 == a2;
      }
    }
    v12 = v25++;
    v26 += 8;
    if (v25 == a2) {
      return true;
    }
  }
}

__int64 game_menu_anonymous_173b260(__int64 (*a1)())
{
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  char* v9;
  char* v10;
  char v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  char* v23;
  char* v24;
  struct {
    char gap0_[16];
    _QWORD v25[4];
    _QWORD* v26;
    char gap56_[8];
    _QWORD v27[4];
    _QWORD* v28;
    char gap104_[8];
    __int64 (*v29[4])();
    __int64 (**v30)();
    char gap152_[8];
    char* v31;
    char* v32;
    char* v33;
    char* v34;
    __int64 (*v35[4])();
    __int64 (**v36)();
  } f_;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))((__int64)a1) & 1) ==
      0) {
    return 1;
  }
  if (*((_BYTE*)a1 + 148) != 1 ||
      ((*((_DWORD*)a1 + 36) - 6) & 0xFFFFFFFD) != 0) {
    v2 = *((_QWORD*)a1 + 1);
    v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(
        (__int64)a1);
    f_.v25[0] = game_util_Format("%s_Confirm", v3);
    f_.v35[0] = (__int64 (*)())GameData_20b79a8;
    f_.v35[1] = a1;
    f_.v30 = f_.v29;
    f_.v28 = f_.v27;
    f_.v36 = f_.v35;
    f_.v29[0] = (__int64 (*)())GameData_20b7a28;
    f_.v27[0] = GameData_20b7a28;
    v4 = MapSortieMenu_871860(v2, (__int64)f_.v25, (__int64)f_.v35,
                              (__int64)f_.v29, (__int64)f_.v27);
    if (f_.v28 == f_.v27) {
      v5 = 32;
    }
    else {
      if (f_.v28 == nullptr) {
        goto LABEL_10;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*f_.v28 + v5))((__int64)f_.v28);
  LABEL_10:
    if (f_.v30 == f_.v29) {
      v7 = 32;
    }
    else {
      if (f_.v30 == nullptr) {
        goto LABEL_15;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))((char*)*f_.v30 + v7))((__int64)f_.v30);
  LABEL_15:
    if (f_.v36 == f_.v35) {
      v8 = 32;
    }
    else {
      if (f_.v36 == nullptr) {
      LABEL_20:
        Dialog_16499c0(v4);
        v9 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(
            (__int64)a1);
        v10 = game_util_Format("%s_Annotation", v9);
        v11 = 1;
        v12 = v10;
        v13 = v4;
        goto LABEL_21;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))((char*)*f_.v36 + v8))((__int64)f_.v36);
    goto LABEL_20;
  }
  v16 = *((_QWORD*)a1 + 1);
  v17 =
      (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))((__int64)a1);
  f_.v33 = "MID_Restart_Battle_Yes_Exp";
  f_.v34 = game_util_Format("%s_Confirm", v17);
  f_.v26 = f_.v25;
  f_.v31 = "MID_Sys_No";
  f_.v32 = "MID_Restart_Battle_Yes";
  f_.v35[0] = (__int64 (*)())GameData_20b7928;
  f_.v35[1] = a1;
  f_.v36 = f_.v35;
  f_.v29[0] = (__int64 (*)())GameData_20b79a8;
  f_.v29[1] = a1;
  f_.v28 = f_.v27;
  f_.v30 = f_.v29;
  f_.v27[0] = GameData_20b7a28;
  f_.v25[0] = GameData_20b7a28;
  v4 = (__int64)ProcGmapPhaseSeq_14cb560(v16, (__int64)&f_.v34, &f_.v33,
                                         &f_.v32, &f_.v31, (__int64)f_.v35,
                                         (__int64)f_.v29, (__int64)f_.v27);
  if (f_.v26 == f_.v25) {
    v18 = 32;
  }
  else {
    if (f_.v26 == nullptr) {
      goto LABEL_38;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*f_.v26 + v18))((__int64)f_.v26);
LABEL_38:
  if (f_.v28 == f_.v27) {
    v19 = 32;
  }
  else {
    if (f_.v28 == nullptr) {
      goto LABEL_43;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*f_.v28 + v19))((__int64)f_.v28);
LABEL_43:
  if (f_.v30 == f_.v29) {
    v20 = 32;
  }
  else {
    if (f_.v30 == nullptr) {
      goto LABEL_48;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v30 + v20))((__int64)f_.v30);
LABEL_48:
  if (f_.v36 == f_.v35) {
    v21 = 32;
    goto LABEL_52;
  }
  if (f_.v36 != nullptr) {
    v21 = 40;
  LABEL_52:
    (*(void (**)(__int64))((char*)*f_.v36 + v21))((__int64)f_.v36);
  }
  Dialog_16499c0(v4);
  v22 =
      (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))((__int64)a1);
  v23 = game_util_Format("%s_Annotation", v22);
  Dialog_1649e50(v4, v23, 1, 0);
  v24 =
      (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))((__int64)a1);
  v12 = game_util_Format("%s_Comment", v24);
  v13 = v4;
  v11 = 0;
LABEL_21:
  Dialog_1649e50(v13, v12, v11, 0);
  f_.v30 = f_.v29;
  f_.v36 = f_.v35;
  f_.v29[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v29[1] = game_sound_PlayDecideLightSe_ptr[0];
  f_.v35[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v35[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(f_.v35, (_QWORD*)(v4 + 1152));
  if (f_.v36 == f_.v35) {
    v14 = 32;
  }
  else {
    if (f_.v36 == nullptr) {
      goto LABEL_26;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v36 + v14))((__int64)f_.v36);
LABEL_26:
  if (f_.v30 == f_.v29) {
    v15 = 32;
    goto LABEL_30;
  }
  if (f_.v30 != nullptr) {
    v15 = 40;
  LABEL_30:
    (*(void (**)(__int64))((char*)*f_.v30 + v15))((__int64)f_.v30);
  }
  return 12;
}

__int64 game_menu_anonymous_173c130(__int64 (*a1)())
{
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    __int64 (*v16[4])();
    __int64 (**v17)();
  } v16_;
  struct {
    __int64 (*v18[4])();
    __int64 (**v19)();
  } v18_;
  char* v20;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))((__int64)a1) & 1) ==
      0) {
    return 1;
  }
  v2 = *((_QWORD*)a1 + 1);
  v3 =
      (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))((__int64)a1);
  v20 = game_util_Format("%s_Confirm", v3);
  v18_.v18[0] = (__int64 (*)())GameData_20b7d30;
  v18_.v18[1] = a1;
  v16_.v17 = v16_.v16;
  v14_.v15 = v14_.v14;
  v18_.v19 = v18_.v18;
  v16_.v16[0] = (__int64 (*)())GameData_20b7db0;
  v14_.v14[0] = GameData_20b7db0;
  v4 = MapSortieMenu_871860(v2, (__int64)&v20, (__int64)v18_.v18,
                            (__int64)v16_.v16, (__int64)v14_.v14);
  if (v14_.v15 == v14_.v14) {
    v5 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v5))((__int64)v14_.v15);
LABEL_8:
  if (v16_.v17 == v16_.v16) {
    v7 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_13;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*v16_.v17 + v7))((__int64)v16_.v17);
LABEL_13:
  if (v18_.v19 == v18_.v18) {
    v8 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_18;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v18_.v19 + v8))((__int64)v18_.v19);
LABEL_18:
  Dialog_16499c0(v4);
  v16_.v17 = v16_.v16;
  v18_.v19 = v18_.v18;
  v16_.v16[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v16_.v16[1] = game_sound_PlayDecideLightSe_ptr[0];
  v18_.v18[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v18_.v18[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v18_.v18, (_QWORD*)(v4 + 1152));
  if (v18_.v19 == v18_.v18) {
    v9 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_23;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))((char*)*v18_.v19 + v9))((__int64)v18_.v19);
LABEL_23:
  if (v16_.v17 == v16_.v16) {
    v10 = 32;
    goto LABEL_27;
  }
  if (v16_.v17 != nullptr) {
    v10 = 40;
  LABEL_27:
    (*(void (**)(__int64))((char*)*v16_.v17 + v10))((__int64)v16_.v17);
  }
  v11 =
      (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))((__int64)a1);
  v12 = game_util_Format("%s_Annotation", v11);
  if (*v12 != 0) {
    v13 = v12;
    if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0],
                             (__int64)v12) &
         1) != 0) {
      Dialog_1649e50(v4, v13, 1, 0);
    }
  }
  return 12;
}

__int64 game_menu_anonymous_17ab880(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  char v24;
  __int64 v25;
  char v26;
  __int64 v27;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;

  if (*(_DWORD*)(a1 + 1184) != 1) {
    return 3;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1);
  if (*(_QWORD*)(a1 + 1384) == 0) {
    v7 = 0;
    goto LABEL_32;
  }
  v2 = *(_QWORD**)(a1 + 232);
  v3 = *(_QWORD**)(a1 + 240);
  v4 = v30_.v30;
  v30_.v30[0] = GameData_20d2428;
  v30_.v30[1] = a1;
  v30_.v31 = v30_.v30;
  if (v2 == v3) {
    v7 = 0;
  LABEL_18:
    v9 = 32;
    goto LABEL_19;
  }
  v5 = GameData_212e008[0];
  while (1) {
    if (*v2 != 0) {
      v6 = __dynamic_cast(*v2, v5, &GameData_20d2170, 0);
      if (v6 != 0) {
        v7 = v6;
        v28_.v28[0] = v6;
        if (v30_.v31 == nullptr) {
        LABEL_64:
          GameRoutine_60a310();
        }
        if (((*(__int64 (**)(__int64, __int64))(*v30_.v31 + 48LL))(
                 (__int64)v30_.v31, (__int64)v28_.v28) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v2 == v3) {
      v7 = 0;
      break;
    }
  }
  v4 = v30_.v31;
  if (v30_.v31 == v30_.v30) {
    goto LABEL_18;
  }
  if (v30_.v31 != nullptr) {
    v9 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v4 + v9))((__int64)v4);
  }
  if (v7 != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 56LL))(v7, 0);
    v10 = *(_QWORD*)(a1 + 336);
    if (v10 != v7) {
      if (v10 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 168LL))(v10);
      }
      *(_QWORD*)(a1 + 336) = v7;
      BasicMenu_16dea40(a1, 0, 1u, 0);
      v11 = *(_QWORD*)(a1 + 336);
      if (v11 == 0) {
        v12 = 4;
      LABEL_31:
        *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v12;
        goto LABEL_32;
      }
      (*(void (**)(__int64))(*(_QWORD*)v11 + 160LL))(v11);
      game_IsVibrationEnabled(
          (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
      v10 = *(_QWORD*)(a1 + 336);
    }
    v12 = 4;
    if (v10 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 120LL))(v10) & 1) != 0) {
        v12 = 4;
      }
      else {
        v12 = 0;
      }
    }
    goto LABEL_31;
  }
LABEL_32:
  v14 = *(_QWORD*)(a1 + 232);
  v13 = *(_QWORD*)(a1 + 240);
  v15 = v30_.v30;
  v30_.v30[0] = GameData_20d24a8;
  v30_.v31 = v30_.v30;
  if (v13 == v14) {
    goto LABEL_43;
  }
  v16 = 0;
  v17 = GameData_212e008[0];
  do {
    v18 = *(_QWORD*)(v14 + 8 * v16);
    if (v18 != 0) {
      v19 = __dynamic_cast(v18, v17, &GameData_20d2170, 0);
      if (v19 == 0) {
        goto LABEL_34;
      }
      v28_.v28[0] = v19;
      if (v30_.v31 == nullptr) {
        goto LABEL_64;
      }
      if (((*(__int64 (**)(__int64, __int64))(*v30_.v31 + 48LL))(
               (__int64)v30_.v31, (__int64)v28_.v28) &
           1) != 0) {
        break;
      }
      v14 = *(_QWORD*)(a1 + 232);
      v13 = *(_QWORD*)(a1 + 240);
    }
  LABEL_34:
    ++v16;
  } while (v16 < (v13 - v14) >> 3);
  v15 = v30_.v31;
  if (v30_.v31 != v30_.v30) {
    if (v30_.v31 != nullptr) {
      v20 = 40;
      goto LABEL_44;
    }
    goto LABEL_45;
  }
LABEL_43:
  v20 = 32;
LABEL_44:
  (*(void (**)(__int64))(*v15 + v20))((__int64)v15);
LABEL_45:
  v21 = *(_QWORD*)(a1 + 176);
  *(_DWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1384) = 0;
  v22 = (*(__int64 (**)(__int64))(v21 + 16))(a1 + 176);
  *(_DWORD*)(a1 + 192) =
      (int)BasicMenu_16e2460(*(_QWORD**)(a1 + 184), 1, 0) % v22;
  if (ProcEquipUnitSelectMenu_17ae020(a1, v7, 1)) {
    v28_.v28[0] = GameData_20d2528;
    v28_.v29 = v28_.v28;
    v30_.v31 = v30_.v30;
    v30_.v30[0] = GameData_20d2528;
    GameRoutine_654050(v30_.v30, (_QWORD*)(a1 + 288));
    if (v30_.v31 == v30_.v30) {
      v23 = 32;
    LABEL_56:
      (*(void (**)(__int64))(*v30_.v31 + v23))((__int64)v30_.v31);
    }
    else if (v30_.v31 != nullptr) {
      v23 = 40;
      goto LABEL_56;
    }
    if (v28_.v29 == v28_.v28) {
      v27 = 32;
    LABEL_61:
      (*(void (**)(__int64))(*v28_.v29 + v27))((__int64)v28_.v29);
    }
    else if (v28_.v29 != nullptr) {
      v27 = 40;
      goto LABEL_61;
    }
    return 10;
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
    v24 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1);
    v25 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 848),
                                     (__int64)"L_UnitInfoDetail/A_KeyHelp");
    if (v25 != 0) {
      if ((v24 & 1) != 0) {
        v26 = -1;
      }
      else {
        v26 = 40;
      }
      *(_BYTE*)(v25 + 89) = v26;
    }
    return 13;
  }
}

#pragma GCC visibility pop
