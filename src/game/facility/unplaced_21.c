#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicMenuCursor_16ddbe0(_QWORD* result);
_QWORD* GameRoutine_167f6d0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_87dcb0(_QWORD* result, _QWORD*);
_QWORD* game_menu_ChangeNumDialog_CreateBindYesNo(__int64, int, int, int,
                                                  const char**, const char**,
                                                  const char**, __int64);
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result, __int64);
__attribute__((swiftcall)) void game_95eea0(PSEUDO_X8, __int64 result, __int64);
__int64 Dialog_16499c0(__int64 result);
__int64 Dialog_1649e50(__int64 result, const char*, char, char);
__int64 GameRoutine_14689a0(char);
__int64 GameRoutine_16477d0(__int64, const char*, __int64, __int64);
__int64 GameRoutine_17b9400(__int64 result);
__int64 GameRoutine_19577f0(__int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_869d10();
__int64 HubTalkNatives_e14270(__int64, const char**);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 ProcClassTrialSeq_8b8140(__int64, __int64, __int64, __int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ScoutBaseProc_f6c060(__int64, __int64*, const char*, __int64, __int64,
                             __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_11912b0(__int64, const char**, const char*, __int64);
__int64 game_menu_BasicMenu_Unknown16de4d0(__int64);
__int64 game_menu_BasicMenu_Unknown96(__int64 result);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
double snd_Fade_Fade_10c830(__int64, float);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_2040c88[])();
extern __int64 (*GameData_2040d08[])();
extern __int64 (*GameData_20638a8[])();
extern __int64 (*GameData_2063928[])();
extern __int64 (*GameData_2077460[])();
extern __int64 (*GameData_20774e0[])();
extern __int64 (*GameData_207a1c8[])();
extern __int64 (*GameData_207a248[])();
extern __int64 (*GameData_208a2e8[])();
extern __int64 (*GameData_208a368[])();
extern __int64 (*GameData_208db18[])();
extern __int64 (*GameData_208dbb8[])();
extern __int64 (*GameData_208de98[])();
extern __int64 (*GameData_2090aa8[])();
extern __int64 (*GameData_2090b28[])();
extern __int64 (*GameData_209a608[])();
extern __int64 (*GameData_20e1ec8[])();
extern __int64 (*GameData_20f76c0[])();
extern __int64 (*GameData_20f7740[])();
extern __int64 (*GameData_2118228[])();
extern __int64 (*GameData_21182a8[])();
extern __int64 (*GameData_2118428[])();
extern __int64 (*GameData_211af20[])();
extern __int64 (*GameData_211afa0[])();
extern __int64 (*GameData_21314a8)();
extern __int64 (*GameData_2131540[4])();
extern __int64 (*GameData_2131548[3])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64 (*game_sound_PlayDecideSe_ptr[7])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212c868;
extern __int64* GameData_212d2b8;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* GameData_2131ab0[2];
extern __int64* GameData_2131b80;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_20e1d88;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_21f3ff8;
extern __int64 GameData_226b870;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char* GameData_207a2b8[3];
extern char* msg_MessageManager_empty_text_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a92aa6[];
extern char GameData_1abd90b[];
extern char GameData_1aef206[];
extern char GameData_1afe93a[];
extern int GameData_226b86c;
extern int GameData_226b878;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void BasicMenu_16e1f40(_QWORD*, __int64, __int64);
void GameRoutine_1647b80(__int64, const char**);
void GameRoutine_1957ca0(int, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_15f67f0(_QWORD* a1);
__int64 game_facility_16643a0(__int64 a1);
__int64 game_facility_1668700(__int64 a1);
__int64 game_facility_16acca0(__int64 a1);
__int64 game_facility_16bca00(__int64 a1);
__int64 game_facility_16bd230(__int64 a1);
__int64 game_facility_16c16b0(__int64 a1);
__int64 game_facility_16d8990(__int64 a1, char** a2);
__int64 game_facility_18235f0(__int64 a1);
_QWORD* game_facility_1874140(_QWORD* a1);
__int64 game_facility_19350e0(__int64 a1);
__int64 game_facility_1969c90(_QWORD* a1);

__int64 game_facility_15f67f0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
    char gap40_[8];
    __int64 (*v12[4])();
    __int64 (**v13)();
    char gap88_[16];
    char* v14;
    __int64 (*v15[4])();
    __int64 (**v16)();
  } f_;

  if (((*(__int64 (**)(__int64))(*a1 + 464LL))((__int64)a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  f_.v14 = "MID_WatchingMenu_Confirm";
  f_.v15[0] = (__int64 (*)())GameData_20638a8;
  f_.v16 = f_.v15;
  f_.v12[0] = (__int64 (*)())GameData_2063928;
  f_.v13 = f_.v12;
  f_.v10[0] = GameData_2063928;
  f_.v11 = f_.v10;
  v3 = MapSortieMenu_871860(v2, (__int64)&f_.v14, (__int64)f_.v15,
                            (__int64)f_.v12, (__int64)f_.v10);
  if (f_.v11 == f_.v10) {
    v4 = 32;
  }
  else {
    if (f_.v11 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*f_.v11 + v4))((__int64)f_.v11);
LABEL_8:
  if (f_.v13 == f_.v12) {
    v6 = 32;
  }
  else {
    if (f_.v13 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v13 + v6))((__int64)f_.v13);
LABEL_13:
  if (f_.v16 == f_.v15) {
    v7 = 32;
  }
  else {
    if (f_.v16 == nullptr) {
      goto LABEL_18;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v16 + v7))((__int64)f_.v16);
LABEL_18:
  f_.v13 = f_.v12;
  f_.v16 = f_.v15;
  f_.v12[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v12[1] = game_sound_PlayDecideLightSe_ptr[0];
  f_.v15[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v15[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(f_.v15, (_QWORD*)(v3 + 1152));
  if (f_.v16 == f_.v15) {
    v8 = 32;
  }
  else {
    if (f_.v16 == nullptr) {
      goto LABEL_23;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v16 + v8))((__int64)f_.v16);
LABEL_23:
  if (f_.v13 == f_.v12) {
    v9 = 32;
    goto LABEL_27;
  }
  if (f_.v13 != nullptr) {
    v9 = 40;
  LABEL_27:
    (*(void (**)(__int64))((char*)*f_.v13 + v9))((__int64)f_.v13);
  }
  return 12;
}

__int64 game_facility_16643a0(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  char* v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
    char gap40_[8];
    _QWORD v19[4];
    _QWORD* v20;
    char gap88_[16];
    char* v21;
    _QWORD v22[4];
    _QWORD* v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
  } f_;

  snd_Fade_Fade_10c830((__int64)f_.v22, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_Decide_L", (__int64)"SE_SYS_Decide_L",
                 (__int64)f_.v22, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(f_.v22);
  v2 = *(_DWORD*)(a1 + 92);
  v3 = *(_QWORD*)(a1 + 8);
  f_.v21 = "MID_HeroMenu_Continue_Confirm";
  v4 = *(_DWORD*)(a1 + 84);
  if (v4 == 0 & v2 == 3) {
    v9 = "MCID_chapter_Ex01";
    if (GameData_1a92aa6[0] != 0) {
      goto LABEL_18;
    }
  }
  else {
    if (v2 != 13 | v4 != 1 || *(_BYTE*)(a1 + 83) != 7) {
      if (v4 >= 3) {
        v8 = game_util_Format("MCID_chapter_Sect%02d");
      }
      else {
        v8 = game_util_Format("MCID_chapter_%02d");
      }
      v9 = v8;
      if (*v8 == 0) {
        goto LABEL_20;
      }
    LABEL_18:
      f_.v24 = -1;
      f_.v25 = -1;
      f_.v26 = -1;
      f_.v27 = -1;
      v10 = *msg_MessageManager_instance__ptr[0];
      f_.v28 = -1;
      f_.v29 = -1;
      f_.v30 = -1;
      f_.v31 = -1;
      f_.v32 = -1;
      f_.v33 = -1;
      f_.v34 = -1;
      f_.v35 = -1;
      f_.v22[0] = msg_TagSelector_vtable;
      f_.v22[1] = 0xFFFF0001FFFF0000LL;
      f_.v22[2] = 0xFFFF0004FFFF0002LL;
      f_.v22[3] = 0xFFFF0006FFFF0005LL;
      f_.v36 = 8;
      f_.v23 = (_QWORD*)0xFFFF0008FFFF0007LL;
      v11 = GameRoutine_a4dbe0(v10, v9, 0);
      goto LABEL_21;
    }
    v9 = "MCID_chapter_Ex02";
    if (GameData_1afe93a[0] != 0) {
      goto LABEL_18;
    }
  }
LABEL_20:
  v11 = msg_MessageManager_empty_text_;
LABEL_21:
  f_.v22[0] = GameData_2077460;
  f_.v22[1] = a1;
  f_.v20 = f_.v19;
  f_.v18 = f_.v17;
  f_.v23 = f_.v22;
  f_.v19[0] = GameData_20774e0;
  f_.v17[0] = GameData_20774e0;
  v12 = ScoutBaseProc_f6c060(v3, (__int64*)&f_.v21, v11, (__int64)f_.v22,
                             (__int64)f_.v19, (__int64)f_.v17);
  if (f_.v18 == f_.v17) {
    v13 = 32;
  }
  else {
    if (f_.v18 == nullptr) {
      goto LABEL_26;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*f_.v18 + v13))((__int64)f_.v18);
LABEL_26:
  if (f_.v20 == f_.v19) {
    v14 = 32;
  }
  else {
    if (f_.v20 == nullptr) {
      goto LABEL_31;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*f_.v20 + v14))((__int64)f_.v20);
LABEL_31:
  if (f_.v23 == f_.v22) {
    v15 = 32;
    goto LABEL_35;
  }
  if (f_.v23 != nullptr) {
    v15 = 40;
  LABEL_35:
    (*(void (**)(__int64))(*f_.v23 + v15))((__int64)f_.v23);
  }
  return v12;
}

__int64 game_facility_1668700(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  char** v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  char* v21;
  char* v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    _QWORD v36[4];
    _QWORD* v37;
  } v36_;
  struct {
    _QWORD v38[4];
    _QWORD* v39;
  } v38_;
  struct {
    char* v40[4];
    char** v41;
  } v40_;
  struct {
    char* v42[2];
    unsigned __int64 v43;
    unsigned __int64 v44;
    char** v45;
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
  } v42_;

  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 13);
    if (*(_BYTE*)(game_GameModeData_instance_ + 13) != 0) {
      v2 = *(_QWORD*)(a1 + 8);
      v3 = msg_MessageManager_empty_text__ptr;
      v4 = msg_MessageManager_instance__ptr[0];
      v5 = GameData_212e348;
      if (*(_QWORD*)(v2 + 152) != 0) {
        v6 = *(_QWORD*)(v2 + 152);
      }
      else {
        v6 = *(_QWORD*)(a1 + 8);
      }
      v7 = (const char*)(unsigned __int8)(v1 - 1);
      if (v1 == 1) {
        v8 = "MID_Difficulty_Hard";
        if (GameData_1abd90b[0] != 0) {
        LABEL_9:
          v9 = *msg_MessageManager_instance__ptr[0];
          v10 = a1;
          v42_.v46 = -1;
          v42_.v47 = -1;
          v42_.v48 = -1;
          v42_.v49 = -1;
          v42_.v50 = -1;
          v42_.v51 = -1;
          v42_.v52 = -1;
          v42_.v53 = -1;
          v42_.v54 = -1;
          v42_.v55 = -1;
          v42_.v56 = -1;
          v42_.v57 = -1;
          v42_.v42[0] = (const char*)(GameData_212e348 + 2);
          v42_.v42[1] = (const char*)0xFFFF0001FFFF0000LL;
          v42_.v43 = 0xFFFF0004FFFF0002LL;
          v42_.v44 = 0xFFFF0006FFFF0005LL;
          v42_.v58 = 8;
          v42_.v45 = (const char**)0xFFFF0008FFFF0007LL;
          v11 = GameRoutine_a4dbe0(v9, v8, 0);
          a1 = v10;
        LABEL_20:
          v17 = GameData_207a2b8[(unsigned __int8)(v1 - 1)];
          if (*v17 != 0) {
            v18 = *v4;
            v19 = a1;
            v42_.v46 = -1;
            v42_.v47 = -1;
            v42_.v48 = -1;
            v42_.v49 = -1;
            v42_.v50 = -1;
            v42_.v51 = -1;
            v42_.v52 = -1;
            v42_.v53 = -1;
            v42_.v54 = -1;
            v42_.v55 = -1;
            v42_.v56 = -1;
            v42_.v57 = -1;
            v42_.v42[0] = (const char*)(v5 + 2);
            v42_.v42[1] = (const char*)0xFFFF0001FFFF0000LL;
            v42_.v43 = 0xFFFF0004FFFF0002LL;
            v42_.v44 = 0xFFFF0006FFFF0005LL;
            v42_.v58 = 8;
            v42_.v45 = (const char**)0xFFFF0008FFFF0007LL;
            v20 = GameRoutine_a4dbe0(v18, v17, 0);
            a1 = v19;
            goto LABEL_23;
          }
        LABEL_22:
          v20 = *v3;
        LABEL_23:
          v21 = *v3;
          v40_.v40[2] = v7;
          v40_.v40[0] = (const char*)GameData_207a1c8;
          v40_.v40[1] = (const char*)a1;
          v38_.v38[0] = GameData_207a248;
          v36_.v36[0] = GameData_207a248;
          if (v11 != nullptr) {
            v22 = v11;
          }
          else {
            v22 = v21;
          }
          v40_.v41 = v40_.v40;
          v38_.v39 = v38_.v38;
          v23 = *v4;
          v36_.v37 = v36_.v36;
          GameRoutine_60a020(v23 + 14704, v22);
          if (v20 != nullptr) {
            v24 = v20;
          }
          else {
            v24 = *v3;
          }
          GameRoutine_60a020(*v4 + 14728, v24);
          v25 = *v4;
          v42_.v46 = -1;
          v42_.v47 = -1;
          v42_.v48 = -1;
          v42_.v49 = -1;
          v42_.v50 = -1;
          v42_.v51 = -1;
          v42_.v52 = -1;
          v42_.v53 = -1;
          v42_.v54 = -1;
          v42_.v55 = -1;
          v42_.v56 = -1;
          v42_.v57 = -1;
          v42_.v42[0] = (const char*)(v5 + 2);
          v42_.v42[1] = (const char*)0xFFFF0001FFFF0000LL;
          v42_.v43 = 0xFFFF0004FFFF0002LL;
          v42_.v44 = 0xFFFF0006FFFF0005LL;
          v42_.v58 = 8;
          v42_.v45 = (const char**)0xFFFF0008FFFF0007LL;
          v42_.v42[0] =
              GameRoutine_a4dbe0(v25, "MID_DownDifficulty_Confirm", 0);
          v26 = (_QWORD*)HubTalkNatives_e14270(v6, v42_.v42);
          if (v26 != nullptr) {
            v27 = (__int64*)fw_memory_g_heap_manager_ptr;
            v28 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
            GameRoutine_16477d0(v28, "MID_Sys_Yes", (__int64)v40_.v40,
                                (__int64)v36_.v36);
            BasicMenuCursor_16e0c00(v26, v28);
            v29 = fw_memory_HeapManager_Allocate(*v27, 192, 16, 0);
            GameRoutine_16477d0(v29, "MID_Sys_No", (__int64)v38_.v38,
                                (__int64)v36_.v36);
            BasicMenuCursor_16e0c00(v26, v29);
          }
          if (v36_.v37 == v36_.v36) {
            v30 = 32;
          }
          else {
            if (v36_.v37 == nullptr) {
              goto LABEL_36;
            }
            v30 = 40;
          }
          (*(void (**)(__int64))(*v36_.v37 + v30))((__int64)v36_.v37);
        LABEL_36:
          if (v38_.v39 == v38_.v38) {
            v31 = 32;
          }
          else {
            if (v38_.v39 == nullptr) {
              goto LABEL_41;
            }
            v31 = 40;
          }
          (*(void (**)(__int64))(*v38_.v39 + v31))((__int64)v38_.v39);
        LABEL_41:
          if (v40_.v41 == v40_.v40) {
            v32 = 32;
          }
          else {
            if (v40_.v41 == nullptr) {
              goto LABEL_46;
            }
            v32 = 40;
          }
          (*(void (**)(__int64)) & (*v40_.v41)[v32])((__int64)v40_.v41);
        LABEL_46:
          Dialog_1649e50((__int64)v26, "MID_DownDifficulty_Annotation", 1, 0);
          v40_.v41 = v40_.v40;
          v42_.v45 = v42_.v42;
          v40_.v40[0] = (const char*)(GameData_212d2b8 + 2);
          v40_.v40[1] = (const char*)game_sound_PlayDecideSe_ptr[0];
          v42_.v42[0] = (const char*)(GameData_212d2b8 + 2);
          v42_.v42[1] = (const char*)game_sound_PlayDecideSe_ptr[0];
          GameRoutine_654050(v42_.v42, v26 + 144);
          if (v42_.v45 == v42_.v42) {
            v33 = 32;
          }
          else {
            if (v42_.v45 == nullptr) {
              goto LABEL_51;
            }
            v33 = 40;
          }
          (*(void (**)(__int64)) & (*v42_.v45)[v33])((__int64)v42_.v45);
        LABEL_51:
          if (v40_.v41 == v40_.v40) {
            v34 = 32;
          }
          else {
            if (v40_.v41 == nullptr) {
            LABEL_56:
              Dialog_16499c0((__int64)v26);
              return 12;
            }
            v34 = 40;
          }
          (*(void (**)(__int64)) & (*v40_.v41)[v34])((__int64)v40_.v41);
          goto LABEL_56;
        }
      }
      else if (v1 == 2) {
        v8 = "MID_Difficulty_Lunatic";
        if (GameData_1aef206[0] != 0) {
          goto LABEL_9;
        }
      }
      v11 = *msg_MessageManager_empty_text__ptr;
      if (v1 > 3) {
        goto LABEL_22;
      }
      goto LABEL_20;
    }
  }
  v12 = *(_QWORD*)(a1 + 8);
  v42_.v46 = -1;
  v42_.v47 = -1;
  v42_.v48 = -1;
  v42_.v49 = -1;
  v42_.v50 = -1;
  v42_.v51 = -1;
  v42_.v52 = -1;
  v42_.v53 = -1;
  v42_.v54 = -1;
  v42_.v55 = -1;
  v42_.v56 = -1;
  v42_.v57 = -1;
  v40_.v40[0] = "MID_DownDifficulty_Lowest_Message";
  v13 = *msg_MessageManager_instance__ptr[0];
  if (*(_QWORD*)(v12 + 152) != 0) {
    v14 = *(_QWORD*)(v12 + 152);
  }
  else {
    v14 = v12;
  }
  v42_.v42[0] = (const char*)(GameData_212e348 + 2);
  v42_.v42[1] = (const char*)0xFFFF0001FFFF0000LL;
  v42_.v43 = 0xFFFF0004FFFF0002LL;
  v42_.v44 = 0xFFFF0006FFFF0005LL;
  v42_.v58 = 8;
  v15 = GameRoutine_a4dbe0(v13, "MID_Difficulty_Normal", 0);
  v42_.v45 = nullptr;
  game_11912b0(v14, v40_.v40, v15, (__int64)v42_.v42);
  if (v42_.v45 == v42_.v42) {
    v16 = 32;
    goto LABEL_17;
  }
  if (v42_.v45 != nullptr) {
    v16 = 40;
  LABEL_17:
    (*(void (**)(__int64)) & (*v42_.v45)[v16])((__int64)v42_.v45);
  }
  return 12;
}

__int64 game_facility_16acca0(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
    char gap40_[8];
    __int64 (*v11[4])();
    __int64 (**v12)();
    char gap88_[16];
    char* v13;
    __int64 (*v14[4])();
    __int64 (**v15)();
  } f_;

  game_cmdbtl_CmdBtlUnitSelectMenu_SetupCmdBtlForce(a1);
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 328LL) & 4) == 0 &&
      *(int*)(*(_QWORD*)GameData_212c6a0[0] + 308LL) < 1) {
    return 1;
  }
  f_.v13 = "MID_TrialMenu_Confirm";
  f_.v14[0] = (__int64 (*)())GameData_208a2e8;
  f_.v10 = f_.v9;
  f_.v15 = f_.v14;
  f_.v12 = f_.v11;
  f_.v11[0] = (__int64 (*)())GameData_208a368;
  f_.v9[0] = GameData_208a368;
  v3 = MapSortieMenu_871860(a1, (__int64)&f_.v13, (__int64)f_.v14,
                            (__int64)f_.v11, (__int64)f_.v9);
  if (f_.v10 == f_.v9) {
    v4 = 32;
  }
  else {
    if (f_.v10 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*f_.v10 + v4))((__int64)f_.v10);
LABEL_9:
  if (f_.v12 == f_.v11) {
    v5 = 32;
  }
  else {
    if (f_.v12 == nullptr) {
      goto LABEL_14;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v12 + v5))((__int64)f_.v12);
LABEL_14:
  if (f_.v15 == f_.v14) {
    v6 = 32;
  }
  else {
    if (f_.v15 == nullptr) {
      goto LABEL_19;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v15 + v6))((__int64)f_.v15);
LABEL_19:
  f_.v12 = f_.v11;
  f_.v15 = f_.v14;
  f_.v11[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v11[1] = game_sound_PlayDecideSe_ptr[0];
  f_.v14[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v14[1] = game_sound_PlayDecideSe_ptr[0];
  GameRoutine_654050(f_.v14, (_QWORD*)(v3 + 1152));
  if (f_.v15 == f_.v14) {
    v7 = 32;
  }
  else {
    if (f_.v15 == nullptr) {
      goto LABEL_24;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v15 + v7))((__int64)f_.v15);
LABEL_24:
  if (f_.v12 == f_.v11) {
    v8 = 32;
    goto LABEL_28;
  }
  if (f_.v12 != nullptr) {
    v8 = 40;
  LABEL_28:
    (*(void (**)(__int64))((char*)*f_.v12 + v8))((__int64)f_.v12);
  }
  return 12;
}

__int64 game_facility_16bca00(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v10_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  if (*GameData_212dcd0 != 0) {
    *(_DWORD*)(*GameData_212dcd0 + 16) = *(unsigned __int8*)(a1 + 96);
  }
  v10_.v13 = 0;
  v10_.v14 = 0;
  v10_.v11 = nullptr;
  v10_.v12 = 0;
  memset(v10_.v10, 0, sizeof(v10_.v10));
  v15_.v16 = v15_.v15;
  v15_.v15[0] = GameData_208db18;
  v15_.v15[1] = GameData_21314a8;
  GameRoutine_87dcb0(v15_.v15, v10_.v10);
  if (v15_.v16 == v15_.v15) {
    v2 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v2))((__int64)v15_.v16);
LABEL_10:
  LOBYTE(v10_.v13) = GameRoutine_14689a0(0) & 1;
  v4 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_19577f0(v5, (__int64)v10_.v10);
  v15_.v16 = v15_.v15;
  v15_.v15[0] = GameData_2040c88;
  GameRoutine_1957ca0(2, (__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v6 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_18;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v6))((__int64)v15_.v16);
LABEL_18:
  v15_.v16 = v15_.v15;
  v15_.v15[0] = GameData_2040d08;
  GameRoutine_1957ca0(3, (__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v7 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_23;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v7))((__int64)v15_.v16);
LABEL_23:
  v15_.v15[0] = GameData_208dbb8;
  v15_.v15[1] = a1;
  v15_.v16 = v15_.v15;
  GameRoutine_1957ca0(2, (__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v8 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_28;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v8))((__int64)v15_.v16);
LABEL_28:
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
    goto LABEL_32;
  }
  if (v10_.v11 != nullptr) {
    v9 = 40;
  LABEL_32:
    (*(void (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
  }
  return 9;
}

__int64 game_facility_16bd230(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v10_;
  struct {
    __int64 (*v15[4])();
    __int64 (**v16)();
  } v15_;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  if (*GameData_212dcd0 != 0) {
    *(_DWORD*)(*GameData_212dcd0 + 16) = *(unsigned __int8*)(a1 + 96);
  }
  v10_.v13 = 0;
  v10_.v14 = 0;
  v10_.v11 = nullptr;
  v10_.v12 = 0;
  memset(v10_.v10, 0, sizeof(v10_.v10));
  v15_.v16 = v15_.v15;
  v15_.v15[0] = (__int64 (*)())GameData_208db18;
  v15_.v15[1] = GameData_2131540[0];
  GameRoutine_87dcb0(v15_.v15, v10_.v10);
  if (v15_.v16 == v15_.v15) {
    v2 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))((char*)*v15_.v16 + v2))((__int64)v15_.v16);
LABEL_10:
  LOBYTE(v10_.v13) = 1;
  v4 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_19577f0(v5, (__int64)v10_.v10);
  v15_.v16 = v15_.v15;
  v15_.v15[0] = (__int64 (*)())GameData_2040c88;
  GameRoutine_1957ca0(2, (__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v6 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_18;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))((char*)*v15_.v16 + v6))((__int64)v15_.v16);
LABEL_18:
  v15_.v16 = v15_.v15;
  v15_.v15[0] = (__int64 (*)())GameData_2040d08;
  GameRoutine_1957ca0(3, (__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v7 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_23;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*v15_.v16 + v7))((__int64)v15_.v16);
LABEL_23:
  v15_.v15[0] = (__int64 (*)())GameData_208de98;
  v15_.v15[1] = (__int64 (*)())a1;
  v15_.v16 = v15_.v15;
  GameRoutine_1957ca0(2, (__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v8 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_28;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v15_.v16 + v8))((__int64)v15_.v16);
LABEL_28:
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
    goto LABEL_32;
  }
  if (v10_.v11 != nullptr) {
    v9 = 40;
  LABEL_32:
    (*(void (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
  }
  return 9;
}

__int64 game_facility_16c16b0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v19_;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (_QWORD*)GameData_21f3ff8;
  *(_DWORD*)(GameData_21f3ff8 + 16) = *(_DWORD*)(a1 + 40);
  v3 = *(_QWORD*)(a1 + 96);
  if (v3 != 0) {
    v4 = (_QWORD*)v2[6];
    v5 = v2[8];
    v2[7] = v4;
    if ((unsigned __int64)v4 >= v5) {
      v8 = v5 - (_QWORD)v4;
      v9 = v8 >> 2;
      if ((unsigned __int64)(v8 >> 2) <= 1) {
        v9 = 1;
      }
      if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL) {
        v10 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v10 = v9;
      }
      if (v10 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v11 = fw_memory_g_heap_manager_ptr;
      v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
      *v12 = v3;
      v6 = v12 + 1;
      v2[6] = v12;
      v2[7] = v12 + 1;
      v2[8] = &v12[v10];
      if (v4 != nullptr) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v13, (__int64)v4);
      }
    }
    else {
      *v4 = v3;
      v6 = v4 + 1;
    }
    v2[7] = v6;
  }
  v19_.v22 = 0;
  v19_.v23 = 0;
  v19_.v20 = nullptr;
  v19_.v21 = 0;
  memset(v19_.v19, 0, sizeof(v19_.v19));
  v24_.v24[0] = GameData_2090aa8;
  v24_.v25 = v24_.v24;
  GameRoutine_87dcb0(v24_.v24, v19_.v19);
  if (v24_.v25 == v24_.v24) {
    v14 = 32;
  }
  else {
    if (v24_.v25 == nullptr) {
      goto LABEL_22;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v24_.v25 + v14))((__int64)v24_.v25);
LABEL_22:
  v15 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v15 + 152) != 0) {
    v16 = *(_QWORD*)(v15 + 152);
  }
  else {
    v16 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_19577f0(v16, (__int64)v19_.v19);
  v24_.v24[0] = GameData_2090b28;
  v24_.v24[1] = a1;
  v24_.v25 = v24_.v24;
  GameRoutine_1957ca0(2, (__int64)v24_.v24);
  if (v24_.v25 == v24_.v24) {
    v17 = 32;
  }
  else {
    if (v24_.v25 == nullptr) {
      goto LABEL_30;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v24_.v25 + v17))((__int64)v24_.v25);
LABEL_30:
  if (v19_.v20 == v19_.v19) {
    v18 = 32;
    goto LABEL_34;
  }
  if (v19_.v20 != nullptr) {
    v18 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*v19_.v20 + v18))((__int64)v19_.v20);
  }
  return 9;
}

__int64 game_facility_16d8990(__int64 a1, char** a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    char* v11[4];
    char** v12;
  } v11_;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1584, 16, 0);
  v11_.v11[0] = *a2;
  GameRoutine_1647b80(v4, v11_.v11);
  *(_WORD*)(v4 + 1496) = 0;
  *(_QWORD*)(v4 + 1520) = 0;
  *(_QWORD*)(v4 + 1528) = 0;
  *(_QWORD*)(v4 + 1536) = 0;
  *(_QWORD*)(v4 + 1544) = 0;
  *(_QWORD*)(v4 + 1552) = 0;
  *(_QWORD*)(v4 + 1560) = 0;
  *(_BYTE*)(v4 + 1568) = 0;
  v5 = GameData_2131ab0[0] + 141;
  *(_QWORD*)v4 = GameData_2131ab0[0] + 2;
  *(_QWORD*)(v4 + 176) = v5;
  ProcInst_657850(v4, (__int64)GameData_212c730, (__int64)"T", 1, a1);
  v11_.v12 = v11_.v11;
  v9_.v9[0] = GameData_209a608;
  v9_.v10 = v9_.v9;
  v11_.v11[0] = (const char*)GameData_209a608;
  GameRoutine_654050(v11_.v11, (_QWORD*)(v4 + 1200));
  if (v11_.v12 == v11_.v11) {
    v6 = 32;
    goto LABEL_7;
  }
  if (v11_.v12 != nullptr) {
    v6 = 40;
  LABEL_7:
    (*(void (**)(__int64)) & (*v11_.v12)[v6])((__int64)v11_.v12);
  }
  if (v9_.v10 == v9_.v9) {
    v7 = 32;
    goto LABEL_12;
  }
  if (v9_.v10 != nullptr) {
    v7 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v9_.v10 + v7))((__int64)v9_.v10);
  }
  return v4;
}

__int64 game_facility_18235f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v20_;
  struct {
    __int64 (*v25[4])();
    __int64 (**v26)();
  } v25_;

  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  if (*(_BYTE*)(a1 + 1064) != 1) {
    goto LABEL_29;
  }
  BasicMenuCursor_16ddbe0((_QWORD*)a1);
  v20_.v23 = 0;
  v20_.v24 = 0;
  v20_.v21 = nullptr;
  v20_.v22 = 0;
  memset(v20_.v20, 0, sizeof(v20_.v20));
  v25_.v26 = v25_.v25;
  v25_.v25[0] = (__int64 (*)())(GameData_2131b80 + 2);
  v25_.v25[1] = GameData_2131548[0];
  GameRoutine_87dcb0(v25_.v25, v20_.v20);
  if (v25_.v26 == v25_.v25) {
    v2 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_9;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))((char*)*v25_.v26 + v2))((__int64)v25_.v26);
LABEL_9:
  LOBYTE(v20_.v23) = GameRoutine_14689a0(2) & 1;
  GameRoutine_19577f0(a1, (__int64)v20_.v20);
  v25_.v26 = v25_.v25;
  v25_.v25[0] = (__int64 (*)())GameData_2040c88;
  GameRoutine_1957ca0(2, (__int64)v25_.v25);
  if (v25_.v26 == v25_.v25) {
    v3 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_14;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))((char*)*v25_.v26 + v3))((__int64)v25_.v26);
LABEL_14:
  v25_.v26 = v25_.v25;
  v25_.v25[0] = (__int64 (*)())GameData_2040d08;
  GameRoutine_1957ca0(3, (__int64)v25_.v25);
  if (v25_.v26 == v25_.v25) {
    v4 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_19;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))((char*)*v25_.v26 + v4))((__int64)v25_.v26);
LABEL_19:
  v25_.v26 = v25_.v25;
  v25_.v25[0] = (__int64 (*)())GameData_20e1ec8;
  v25_.v25[1] = (__int64 (*)())a1;
  GameRoutine_1957ca0(2, (__int64)v25_.v25);
  if (v25_.v26 == v25_.v25) {
    v5 = 32;
    goto LABEL_23;
  }
  if (v25_.v26 != nullptr) {
    v5 = 40;
  LABEL_23:
    (*(void (**)(__int64))((char*)*v25_.v26 + v5))((__int64)v25_.v26);
  }
  v6 = v20_.v21;
  *(_BYTE*)(a1 + 1064) = 0;
  if (v6 == v20_.v20) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_29;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_29:
  if (*(_BYTE*)(a1 + 1065) == 1) {
    v8 = *GameData_212dcd0;
    if (*GameData_212dcd0 != 0) {
      v9 = *(__int64**)(v8 + 48);
      if (*(__int64**)(v8 + 56) != v9) {
        v10 = *v9;
        if (*v9 != 0) {
          v11 = *(unsigned int*)(v8 + 36);
          if ((v11 & 0x80000000) == 0) {
            v12 = *(_QWORD*)(*GameData_212c868 + 64);
            if ((int)v11 <
                (int)((unsigned __int64)(*(_QWORD*)(*GameData_212c868 + 72) -
                                         v12) >>
                      3)) {
              v13 = *(_QWORD*)(v12 + 8 * v11);
              if (v13 != 0) {
                ProcClassTrialSeq_8b8140(a1, v10, v13, 0);
              }
            }
          }
          v14 = *(_QWORD*)(a1 + 336);
          if (v14 != 0) {
            v15 =
                __dynamic_cast(v14, GameData_212e008[0], &GameData_20e1d88, 0);
            if (v15 != 0) {
              *(_QWORD*)(v15 + 88) = 0;
            }
          }
        }
      }
    }
    *(_BYTE*)(a1 + 1065) = 0;
  }
  v16 = *(_QWORD*)(a1 + 336);
  if (v16 != 0) {
    v17 = __dynamic_cast(v16, GameData_212e008[0], &GameData_20e1d88, 0);
    if (v17 != 0) {
      v18 = v17;
      game_95eea0((void*)((__int16*)v20_.v20), *(_QWORD*)(v17 + 88),
                  *(_QWORD*)(v17 + 96));
      if ((v20_.v20[0] & 0x800) == 0) {
        *(_QWORD*)(v18 + 88) = 0;
      }
    }
  }
  return game_menu_BasicMenu_Unknown16de4d0(a1);
}

_QWORD* game_facility_1874140(_QWORD* a1)
{
  unsigned __int8 v2;
  unsigned __int8 v3;
  char v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int16 v8;
  __int64 v9;
  _QWORD* result;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  v2 = (*(__int64 (**)(__int64))(*a1 + 1240LL))((__int64)a1);
  if (v2 >= 7u) {
    v3 = 14;
  }
  else {
    v3 = 0xD040302010010uLL >> (8 * v2);
  }
  v4 = (*(__int64 (**)(__int64))(*a1 + 1200LL))((__int64)a1);
  v5 = *a1;
  v6 = v4;
  v12_.v13 = nullptr;
  if (((*(__int64 (**)(__int64))(v5 + 1216))((__int64)a1) & 1) != 0) {
    v14_.v14[0] = GameData_20f76c0;
    v14_.v14[1] = a1;
    v14_.v15 = v14_.v14;
    GameRoutine_167f6d0(v14_.v14, v12_.v12);
    if (v14_.v15 == v14_.v14) {
      v7 = 32;
    }
    else {
      if (v14_.v15 == nullptr) {
        goto LABEL_10;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v14_.v15 + v7))((__int64)v14_.v15);
  }
LABEL_10:
  v14_.v14[0] = GameData_20f7740;
  if ((v6 & 1) != 0) {
    v8 = 256;
  }
  else {
    v8 = 0;
  }
  v14_.v15 = v14_.v14;
  LOWORD(v14_.v14[1]) = v8 & 0xFF00 | v3;
  BasicMenu_16e1f40(a1, (__int64)v14_.v14, (__int64)v12_.v12);
  if (v14_.v15 == v14_.v14) {
    v9 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_18;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v9))((__int64)v14_.v15);
LABEL_18:
  result = v12_.v13;
  if (v12_.v13 == v12_.v12) {
    v11 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v12_.v13 + v11))(
      (__int64)v12_.v13);
}

__int64 game_facility_19350e0(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  struct {
    char gap0_[48];
    _QWORD v17[4];
    _QWORD* v18;
    char gap88_[8];
    _QWORD v19[4];
    _QWORD* v20;
    char gap136_[8];
    _QWORD v21[4];
    _QWORD* v22;
    char gap184_[16];
    char* v23;
    char* v24;
    char* v25;
    __int64* v26;
    __int64 (*v27)();
    char gap240_[16];
    __int64** v28;
  } f_;

  v2 = GameRoutine_869d10();
  f_.v24 = "MID_IndividualMenu_Reminder_Yes";
  f_.v25 = "MID_IndividualMenu_Confirm";
  f_.v23 = "MID_IndividualMenu_Reminder_No";
  f_.v28 = &f_.v26;
  f_.v21[0] = GameData_21182a8;
  f_.v26 = (__int64*)GameData_2118228;
  f_.v19[0] = GameData_2118428;
  f_.v20 = f_.v19;
  f_.v17[0] = GameData_2118428;
  f_.v18 = f_.v17;
  if (GameData_226b86c <= 0) {
    v3 = v2;
  }
  else {
    v3 = GameData_226b86c;
  }
  if (GameData_226b86c <= 0) {
    v4 = 1;
  }
  else {
    v4 = GameData_226b86c;
  }
  f_.v22 = f_.v21;
  v5 = game_menu_ChangeNumDialog_CreateBindYesNo(
      a1, v4, v4, v3, &f_.v25, &f_.v24, &f_.v23, (__int64)&f_.v26);
  if (f_.v18 == f_.v17) {
    v6 = 32;
  }
  else {
    if (f_.v18 == nullptr) {
      goto LABEL_12;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*f_.v18 + v6))((__int64)f_.v18);
LABEL_12:
  if (f_.v20 == f_.v19) {
    v7 = 32;
  }
  else {
    if (f_.v20 == nullptr) {
      goto LABEL_17;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*f_.v20 + v7))((__int64)f_.v20);
LABEL_17:
  if (f_.v22 == f_.v21) {
    v8 = 32;
  }
  else {
    if (f_.v22 == nullptr) {
      goto LABEL_22;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*f_.v22 + v8))((__int64)f_.v22);
LABEL_22:
  if (f_.v28 == &f_.v26) {
    v9 = 4;
  }
  else {
    if (f_.v28 == nullptr) {
      goto LABEL_27;
    }
    v9 = 5;
  }
  ((void (*)(__int64))(*f_.v28)[v9])((__int64)f_.v28);
LABEL_27:
  f_.v22 = f_.v21;
  f_.v28 = &f_.v26;
  f_.v21[0] = GameData_212d2b8 + 2;
  f_.v21[1] = game_sound_PlayDecideLightSe_ptr[0];
  f_.v26 = GameData_212d2b8 + 2;
  f_.v27 = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(&f_.v26, v5 + 144);
  if (f_.v28 == &f_.v26) {
    v10 = 4;
  }
  else {
    if (f_.v28 == nullptr) {
      goto LABEL_32;
    }
    v10 = 5;
  }
  ((void (*)(__int64))(*f_.v28)[v10])((__int64)f_.v28);
LABEL_32:
  if (f_.v22 == f_.v21) {
    v11 = 32;
  }
  else {
    if (f_.v22 == nullptr) {
      goto LABEL_37;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*f_.v22 + v11))((__int64)f_.v22);
LABEL_37:
  v12 = game_gmap_GmapClock_instance_ + 8;
  if (game_gmap_GmapClock_instance_ != 0) {
    v13 = game_gmap_GmapClock_instance_ + 20;
  }
  else {
    v12 = game_gmap_GmapClock_kDefaultTime_ptr;
    v13 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v14 = *(_QWORD*)v12;
  v15 = *(_DWORD*)(v12 + 8);
  f_.v21[0] = v14;
  LODWORD(f_.v21[1]) = v15;
  do {
    Dir_70ea50((void*)((__int64)&f_.v26), (__int16*)f_.v21, v13);
    --v4;
    f_.v21[0] = f_.v26;
    LODWORD(f_.v21[1]) = (_DWORD)f_.v27;
  } while (v4 != 0);
  if (SWORD1(GameData_226b870) * (__int16)GameData_226b870 *
          SWORD2(GameData_226b870) !=
      0) {
    f_.v21[0] = GameData_226b870;
    LODWORD(f_.v21[1]) = GameData_226b878;
  }
  return GameRoutine_17b9400((__int64)f_.v21);
}

__int64 game_facility_1969c90(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
    char gap40_[8];
    __int64 (*v12[4])();
    __int64 (**v13)();
    char gap88_[16];
    char* v14;
    __int64 (*v15[4])();
    __int64 (**v16)();
  } f_;

  if (((*(__int64 (**)(__int64))(*a1 + 464LL))((__int64)a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  f_.v14 = "MID_DivinationMenu_Divination_Confirm";
  f_.v15[0] = (__int64 (*)())GameData_211af20;
  f_.v16 = f_.v15;
  f_.v12[0] = (__int64 (*)())GameData_211afa0;
  f_.v13 = f_.v12;
  f_.v10[0] = GameData_211afa0;
  f_.v11 = f_.v10;
  v3 = MapSortieMenu_871860(v2, (__int64)&f_.v14, (__int64)f_.v15,
                            (__int64)f_.v12, (__int64)f_.v10);
  if (f_.v11 == f_.v10) {
    v4 = 32;
  }
  else {
    if (f_.v11 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*f_.v11 + v4))((__int64)f_.v11);
LABEL_8:
  if (f_.v13 == f_.v12) {
    v6 = 32;
  }
  else {
    if (f_.v13 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v13 + v6))((__int64)f_.v13);
LABEL_13:
  if (f_.v16 == f_.v15) {
    v7 = 32;
  }
  else {
    if (f_.v16 == nullptr) {
      goto LABEL_18;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v16 + v7))((__int64)f_.v16);
LABEL_18:
  f_.v13 = f_.v12;
  f_.v16 = f_.v15;
  f_.v12[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v12[1] = game_sound_PlayDecideLightSe_ptr[0];
  f_.v15[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  f_.v15[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(f_.v15, (_QWORD*)(v3 + 1152));
  if (f_.v16 == f_.v15) {
    v8 = 32;
  }
  else {
    if (f_.v16 == nullptr) {
      goto LABEL_23;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*f_.v16 + v8))((__int64)f_.v16);
LABEL_23:
  if (f_.v13 == f_.v12) {
    v9 = 32;
    goto LABEL_27;
  }
  if (f_.v13 != nullptr) {
    v9 = 40;
  LABEL_27:
    (*(void (**)(__int64))((char*)*f_.v13 + v9))((__int64)f_.v13);
  }
  return 12;
}

#pragma GCC visibility pop
