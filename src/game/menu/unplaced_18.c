#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, _QWORD*);
__int64* game_821090(int);
__int64 Dialog_16499c0(__int64 result);
__int64 Dialog_1649e50(__int64 result, const char*, char, char);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_8ca200(_QWORD*);
__int64 GameRoutine_975940(__int64);
__int64 GameSituation_906c90(__int64, __int64*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 ProcGmapMove_1549f60(__int64, __int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcRosterUnitSelectMenu_1605a10(__int64, __int64, int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_anonymous_RuntimeTalk_GetCondition(__int64);
__int64 game_menu_1789b80(__int64*);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
bool GameRoutine_1789b00(__int64*);
char* game_util_Format(const char*, ...);
double snd_Fade_Fade_10c830(__int64, float);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_2073988[])();
extern __int64 (*GameData_2073a08[])();
extern __int64 (*GameData_2085888[])();
extern __int64 (*GameData_2085908[])();
extern __int64 (*GameData_20acd68[])();
extern __int64 (*GameData_20b8368[])();
extern __int64 (*GameData_20b83e8[])();
extern __int64 (*GameData_20c9348[])();
extern __int64 (*GameData_20e8b38[])();
extern __int64 (*GameData_20e8cb8[])();
extern __int64 (*game_menu_ChangeNumDialog_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20acc68[])();
extern __int64 (*game_menu_anonymous_RelianceMenuItem_vtable[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212d2b8;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319e8[10];
extern __int64 GameData_20c77f8;
extern __int64 GameData_20c9638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_Footer_instance_;
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_1647b80(__int64, const char**);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* game_menu_1631660(_QWORD* result, char a2, char a3);
void game_menu_16497b0(__int64 a1, char* a2);
__int64 game_menu_16a15d0(__int64 a1);
__int64 game_menu_1711fe0(__int64 a1, char** a2);
__int64 game_menu_173cc80(__int64 (*a1)());
__int64 game_menu_178c760(_QWORD* a1);
void game_menu_17a6290();
__int64 game_menu_184c900(__int64 a1);

_QWORD* game_menu_1631660(_QWORD* result, char a2, char a3)
{
  _DWORD* v5;
  __int64 v6;
  _BYTE* v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  v5 = result;
  v17_.v18 = nullptr;
  v6 = 110;
  if (a2 == 1) {
    v6 = 89;
  }
  v7 = (_BYTE*)result[v6];
  if (a2 != 1) {
    v10 = *((_DWORD*)result + 225);
    switch (v10) {
    case 2:
      v9 = result[130];
      if (v9 == 0) {
        goto LABEL_28;
      }
      if ((_DWORD*)v9 == v5 + 252) {
        goto LABEL_18;
      }
      break;
    case 1:
      v9 = result[118];
      if (v9 == 0) {
        goto LABEL_28;
      }
      if ((_DWORD*)v9 == v5 + 228) {
        goto LABEL_18;
      }
      break;
    case 0:
      v9 = result[124];
      if (v9 == 0) {
        goto LABEL_28;
      }
      if ((_DWORD*)v9 == v5 + 240) {
        goto LABEL_18;
      }
      break;
    default:
      return result;
    }
    goto LABEL_21;
  }
  v8 = *((_DWORD*)result + 183);
  if (v8 == 2) {
    v9 = result[108];
    if (v9 == 0) {
      goto LABEL_28;
    }
    if ((_DWORD*)v9 == v5 + 208) {
      goto LABEL_18;
    }
    goto LABEL_21;
  }
  if (v8 == 1) {
    v9 = result[96];
    if (v9 == 0) {
      goto LABEL_28;
    }
    if ((_DWORD*)v9 == v5 + 184) {
    LABEL_18:
      v19_.v20 = v19_.v19;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9,
                                                            (__int64)v19_.v19);
      goto LABEL_29;
    }
  LABEL_21:
    v19_.v20 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    goto LABEL_29;
  }
  if (v8 != 0) {
    return result;
  }
  v9 = result[102];
  if (v9 != 0) {
    if ((_DWORD*)v9 == v5 + 196) {
      goto LABEL_18;
    }
    goto LABEL_21;
  }
LABEL_28:
  v19_.v20 = nullptr;
LABEL_29:
  GameRoutine_654050(v19_.v19, v17_.v17);
  if (v19_.v20 == v19_.v19) {
    v11 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      goto LABEL_34;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v19_.v20 + v11))((__int64)v19_.v20);
LABEL_34:
  result = v17_.v18;
  if (v17_.v18 == nullptr) {
    return result;
  }
  if (v5[39] != -1) {
    v7[32] = a2;
  }
  v12 = v5[43];
  if ((a3 & 1 | (v12 == -1)) != 0) {
    LOBYTE(v12) = 0;
  }
  v7[33] = v12;
  v13 = v5[41];
  if ((a3 & 1 | (v13 == -1)) != 0) {
    LOBYTE(v13) = 0;
  }
  v7[34] = v13;
  v14 = v5[40];
  if ((a3 & 1 | (v14 == -1)) != 0) {
    LOBYTE(v14) = 0;
  }
  v7[35] = v14;
  v15 = v5[42];
  if ((a3 & 1 | (v15 == -1)) != 0) {
    LOBYTE(v15) = 0;
  }
  v7[36] = v15;
  (*(void (**)(__int64))(*result + 48LL))((__int64)result);
  result = v17_.v18;
  if (v17_.v18 == v17_.v17) {
    v16 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v17_.v18 + v16))(
      (__int64)v17_.v18);
}

void game_menu_16497b0(__int64 a1, char* a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    char* v24;
  } v22_;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;

  if (a2 != nullptr) {
    v4 = GameRoutine_1a09c70(a2);
    if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v5 = v4;
    v6 = fw_memory_g_heap_manager_ptr;
    if (v4 >= 0x17) {
      if ((v4 | 7) == 0x17) {
        v9 = 26;
      }
      else {
        v9 = (v4 | 7) + 1;
      }
      v7 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
      v22_.v23 = v5;
      v22_.v24 = v7;
      v22_.v22 = v9 | 1;
    }
    else {
      LOBYTE(v22_.v22) = 2 * v4;
      v7 = (char*)&v22_.v22 + 1;
      if (v4 == 0) {
      LABEL_14:
        v7[v5] = 0;
        v10 = v22_.v22;
        if ((v22_.v22 & 1) != 0) {
          fw_text_String_CopyTerminated(&v19_.v19, (__int64)v22_.v24, v22_.v23);
        }
        else {
          v19_.v19 = v22_.v22;
          v19_.v20 = v22_.v23;
          v19_.v21 = v22_.v24;
        }
        v11 = *(_QWORD*)v6;
        v12 = v19_.v19;
        v13 = v19_.v20;
        v14 = 32;
        v15 = (__int64)v19_.v21;
        v19_.v19 = 0;
        v19_.v20 = 0;
        v19_.v21 = nullptr;
        v16 = (_QWORD*)fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
        v16[2] = v13;
        v16[3] = v15;
        v25_.v26 = v16;
        *v16 = GameData_2073988;
        v16[1] = v12;
        GameRoutine_654050(v25_.v25, (_QWORD*)(a1 + 1152));
        if (v25_.v26 != v25_.v25) {
          if (v25_.v26 == nullptr) {
            goto LABEL_21;
          }
          v14 = 40;
        }
        (*(void (**)(__int64))(*v25_.v26 + v14))((__int64)v25_.v26);
      LABEL_21:
        if ((v19_.v19 & 1) != 0 && v19_.v21 != nullptr) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v17, (__int64)v19_.v21);
        }
        if ((v10 & 1) != 0 && v22_.v24 != nullptr) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v18, (__int64)v22_.v24);
        }
        return;
      }
    }
    GameRoutine_1a0b950((__int64)v7, (__int64)a2, v5);
    goto LABEL_14;
  }
  v25_.v25[0] = GameData_2073a08;
  v25_.v26 = v25_.v25;
  GameRoutine_654050(v25_.v25, (_QWORD*)(a1 + 1152));
  if (v25_.v26 == v25_.v25) {
    v8 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      return;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v25_.v26 + v8))((__int64)v25_.v26);
}

__int64 game_menu_16a15d0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v11[4];
    __int64* v12;
    char gap40_[8];
    char* v13[4];
    char** v14;
    char gap88_[16];
    char* v15;
    _QWORD v16[4];
    _QWORD* v17;
    char gap152_[19];
    char v18;
  } f_;

  f_.v13[0] = game_util_Format("%s/%s", "000", "Auto");
  f_.v13[1] = (const char*)GameRoutine_1a09c70(f_.v13[0]);
  GameRoutine_878ea0((void*)((__int64)f_.v16), f_.v13);
  if (LOBYTE(f_.v16[0]) != 0 && (f_.v18 & 8) != 0) {
    v5 = *(_QWORD*)(a1 + 8);
    f_.v15 = "MID_Title_ContinueNewGame_Confirm";
    f_.v16[0] = GameData_2085888;
    f_.v17 = f_.v16;
    f_.v13[0] = (const char*)GameData_2085908;
    f_.v14 = f_.v13;
    f_.v11[0] = (__int64)GameData_2085908;
    f_.v12 = f_.v11;
    v6 = MapSortieMenu_871860(v5, (__int64)&f_.v15, (__int64)f_.v16,
                              (__int64)f_.v13, (__int64)f_.v11);
    if (f_.v12 == f_.v11) {
      v7 = 32;
    }
    else {
      if (f_.v12 == nullptr) {
        goto LABEL_14;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*f_.v12 + v7))((__int64)f_.v12);
  LABEL_14:
    if (f_.v14 == f_.v13) {
      v8 = 32;
    }
    else {
      if (f_.v14 == nullptr) {
        goto LABEL_19;
      }
      v8 = 40;
    }
    (*(void (**)(__int64)) & (*f_.v14)[v8])((__int64)f_.v14);
  LABEL_19:
    if (f_.v17 == f_.v16) {
      v9 = 32;
    }
    else {
      if (f_.v17 == nullptr) {
      LABEL_24:
        Dialog_1649e50(v6, "MID_Title_ContinueNewGame_Comment", 0, 0);
        Dialog_1649e50(v6, "MID_Title_ContinueNewGame_Attention", 1, 0);
        return 12;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*f_.v17 + v9))((__int64)f_.v17);
    goto LABEL_24;
  }
  v2 = *(_QWORD*)(a1 + 8);
  f_.v13[0] = "MID_Title_ContinueNewGame_Condition_Message";
  v3 = game_menu_Dialog__CreateBind_game_menu_Dialog(v2, (__int64)f_.v13);
  if (v3 != 0) {
    f_.v17 = nullptr;
    GameRoutine_6680e0(f_.v16, (_QWORD*)(v3 + 1248));
    if (f_.v17 == f_.v16) {
      v4 = 32;
      goto LABEL_11;
    }
    if (f_.v17 != nullptr) {
      v4 = 40;
    LABEL_11:
      (*(void (**)(__int64))(*f_.v17 + v4))((__int64)f_.v17);
    }
  }
  return 12;
}

__int64 game_menu_1711fe0(__int64 a1, char** a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    char* v10[4];
    char** v11;
  } v10_;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1504, 16, 0);
  v10_.v10[0] = *a2;
  GameRoutine_1647b80(v4, v10_.v10);
  *(_DWORD*)(v4 + 1492) = 0;
  *(_QWORD*)v4 = game_menu_ChangeNumDialog_vtable;
  *(_QWORD*)(v4 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20acc68;
  ProcInst_657850(v4, (__int64)GameData_212c730, (__int64)"T", 1, a1);
  v10_.v11 = v10_.v10;
  v8_.v8[0] = GameData_20acd68;
  v8_.v9 = v8_.v8;
  v10_.v10[0] = (const char*)GameData_20acd68;
  GameRoutine_654050(v10_.v10, (_QWORD*)(v4 + 1200));
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
    goto LABEL_7;
  }
  if (v10_.v11 != nullptr) {
    v5 = 40;
  LABEL_7:
    (*(void (**)(__int64)) & (*v10_.v11)[v5])((__int64)v10_.v11);
  }
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
    goto LABEL_12;
  }
  if (v8_.v9 != nullptr) {
    v6 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
  }
  return v4;
}

__int64 game_menu_173cc80(__int64 (*a1)())
{
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    __int64 (*v14[4])();
    __int64 (**v15)();
  } v14_;
  struct {
    __int64 (*v16[4])();
    __int64 (**v17)();
  } v16_;
  char* v18;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))((__int64)a1) & 1) ==
      0) {
    return 1;
  }
  v2 = *((_QWORD*)a1 + 1);
  v3 =
      (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))((__int64)a1);
  v18 = game_util_Format("%s_Confirm", v3);
  v16_.v16[0] = (__int64 (*)())GameData_20b8368;
  v16_.v16[1] = a1;
  v14_.v15 = v14_.v14;
  v12_.v13 = v12_.v12;
  v16_.v17 = v16_.v16;
  v14_.v14[0] = (__int64 (*)())GameData_20b83e8;
  v12_.v12[0] = GameData_20b83e8;
  v4 = MapSortieMenu_871860(v2, (__int64)&v18, (__int64)v16_.v16,
                            (__int64)v14_.v14, (__int64)v12_.v12);
  if (v12_.v13 == v12_.v12) {
    v5 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v5))((__int64)v12_.v13);
LABEL_8:
  if (v14_.v15 == v14_.v14) {
    v7 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_13;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*v14_.v15 + v7))((__int64)v14_.v15);
LABEL_13:
  if (v16_.v17 == v16_.v16) {
    v8 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_18;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v16_.v17 + v8))((__int64)v16_.v17);
LABEL_18:
  Dialog_16499c0(v4);
  v9 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 616LL))(
      (__int64)a1);
  if (v9 != nullptr) {
    Dialog_1649e50(v4, v9, 1, 1);
  }
  v14_.v15 = v14_.v14;
  v16_.v17 = v16_.v16;
  v14_.v14[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v14_.v14[1] = game_sound_PlayDecideLightSe_ptr[0];
  v16_.v16[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v16_.v16[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v16_.v16, (_QWORD*)(v4 + 1152));
  if (v16_.v17 == v16_.v16) {
    v10 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_25;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))((char*)*v16_.v17 + v10))((__int64)v16_.v17);
LABEL_25:
  if (v14_.v15 == v14_.v14) {
    v11 = 32;
    goto LABEL_29;
  }
  if (v14_.v15 != nullptr) {
    v11 = 40;
  LABEL_29:
    (*(void (**)(__int64))((char*)*v14_.v15 + v11))((__int64)v14_.v15);
  }
  return 12;
}

__int64 game_menu_178c760(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    __int64 v15[4];
    __int64* v16;
  } v15_;

  v2 = __dynamic_cast(a1[132], GameData_21319e8[0], &GameData_20c9638, 0);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 368LL))(v2) & 1) == 0) {
    return 0;
  }
  v3 = a1[42];
  if (v3 == 0) {
    return 1;
  }
  v4 = __dynamic_cast(v3, GameData_212e008[0], &GameData_20c77f8, 0);
  if (v4 == 0) {
    return 1;
  }
  v5 = *(_QWORD*)(v4 + 88);
  if (v5 == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(v5 + 392);
  v15_.v15[0] = *(_QWORD*)(v4 + 88);
  v15_.v15[1] = v6;
  if ((unsigned int)GameSituation_906c90(game_GameModeData_instance_ + 136,
                                         v15_.v15) != 0) {
    return 1;
  }
  v8 = *(_QWORD*)(v5 + 392);
  if (v8 == 0) {
    return 1;
  }
  v9 = *(_QWORD*)(v8 + 288);
  if (v9 == 0 || GameRoutine_975940(v9) == 0) {
    return 1;
  }
  v13_.v13[0] = GameData_20c9348;
  v13_.v14 = v13_.v13;
  v15_.v16 = v15_.v15;
  v15_.v15[0] = (__int64)GameData_20c9348;
  GameRoutine_654050(v15_.v15, a1 + 36);
  if (v15_.v16 == v15_.v15) {
    v10 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_17;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v10))((__int64)v15_.v16);
LABEL_17:
  if (v13_.v14 == v13_.v13) {
    v11 = 32;
    goto LABEL_21;
  }
  if (v13_.v14 != nullptr) {
    v11 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v13_.v14 + v11))((__int64)v13_.v14);
  }
  if (a1[19] != 0) {
    v12 = a1[19];
  }
  else {
    v12 = (__int64)a1;
  }
  ProcRosterUnitSelectMenu_1605a10(v12, v5, 5);
  return 9;
}

void game_menu_17a6290()
{
  __int64 v0;
  struct {
    _QWORD v1[4];
    _QWORD* v2;
  } v1_;

  if (game_gameui_Footer_instance_ != 0) {
    v1_.v2 = nullptr;
    GameRoutine_654050(v1_.v1, (_QWORD*)(game_gameui_Footer_instance_ + 448));
    if (v1_.v2 == v1_.v1) {
      v0 = 32;
    }
    else {
      if (v1_.v2 == nullptr) {
        return;
      }
      v0 = 40;
    }
    (*(void (**)(__int64))(*v1_.v2 + v0))((__int64)v1_.v2);
  }
}

__int64 game_menu_184c900(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  _BYTE* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  bool v16;
  __int64* v17;
  __int64 result;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    _BYTE v24[32];
    _BYTE* v25;
    char gap40_[8];
    _QWORD v26[4];
    _QWORD* v27;
    char gap88_[16];
    char* v28;
    __int64* v29;
    __int64 (*v30)();
    __int64* v31;
    char gap136_[8];
    __int64* v32;
  } f_;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0 ||
      *(__int64 (***)(void))v1 != game_menu_anonymous_RelianceMenuItem_vtable) {
    return 0;
  }
  v3 = game_821090(1);
  if (game_GameModeData_instance_ == 0 ||
      (v4 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v3)) == 0) {
    v5 = (_BYTE*)(v1 + 164);
    goto LABEL_22;
  }
  v5 = (_BYTE*)(v1 + 164);
  v6 = *(int*)(v4 + 32) >= 1 & *(_BYTE*)(v1 + 164) == 0;
  if (!v6 || (v7 = GameRoutine_8ca200((_QWORD*)(v1 + 104))) == 0 ||
      *(_BYTE*)(v7 + 64) == 4 ||
      game_GameModeData_instance_ != 0 &&
          (v8 = v7,
           v9 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)(*(_QWORD*)(v7 + 24) + 40LL)),
           v7 = v8, v9 != 0) &&
          *(_DWORD*)(v9 + 32) != 0 ||
      (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(v7) != 0) {
  LABEL_22:
    if (*(_DWORD*)(v1 + 96) == 0) {
      if ((v13 = *(_QWORD*)(v1 + 88)) != 0 && (*(_BYTE*)(v13 + 416) & 8) != 0 ||
          (v14 = game_821090(1), game_GameModeData_instance_ == 0) ||
          (v15 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v14)) == 0 ||
          (*(int*)(v15 + 32) >= 1 ? (v16 = *v5 == 0) : (v16 = false),
           !v16 ||
               (v17 = (__int64*)GameRoutine_8ca200((_QWORD*)(v1 + 104))) ==
                   nullptr ||
               *((_BYTE*)v17 + 64) == 4 ||
               (f_.v29 = v17, !GameRoutine_1789b00((__int64*)&f_.v29)))) {
        snd_Fade_Fade_10c830((__int64)&f_.v29, 0x0.0p+0f);
        snd_play_ff2d0((__int64)"SE_SYS_NG", (__int64)"SE_SYS_NG",
                       (__int64)&f_.v29, 0, 0x10001u, 0, 0x0.0p+0f,
                       0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(&f_.v29);
      }
    }
    return 0;
  }
  if (*(_DWORD*)(a1 + 1064) != 0) {
    f_.v26[0] = "MID_RelianceMenu_CantTalk_Message";
    v10 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, (__int64)f_.v26);
    if (v10 == 0) {
      return 12;
    }
    f_.v32 = nullptr;
    GameRoutine_6680e0(&f_.v29, (_QWORD*)(v10 + 1248));
    v11 = f_.v32;
    if (f_.v32 != (__int64*)&f_.v29) {
    LABEL_19:
      if (v11 != nullptr) {
        v12 = 40;
      LABEL_59:
        (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
      }
      return 12;
    }
  LABEL_58:
    v12 = 32;
    goto LABEL_59;
  }
  result = GameRoutine_8ca200((_QWORD*)(v1 + 104));
  if (result != 0) {
    if (*(_BYTE*)(result + 64) != 4) {
      v19 = (__int64*)result;
      if ((unsigned __int16)game_anonymous_RuntimeTalk_GetCondition(result) ==
          0) {
        f_.v29 = v19;
        if ((game_menu_1789b80((__int64*)&f_.v29) & 1) == 0) {
          f_.v30 = (__int64 (*)())a1;
          f_.v31 = v19;
          f_.v32 = (__int64*)&f_.v29;
          f_.v25 = nullptr;
          f_.v28 = "MID_RelianceMenu_Confirm";
          f_.v29 = (__int64*)GameData_20e8b38;
          f_.v26[0] = GameData_20e8cb8;
          f_.v27 = f_.v26;
          v20 = MapSortieMenu_871860(a1, (__int64)&f_.v28, (__int64)&f_.v29,
                                     (__int64)f_.v26, (__int64)f_.v24);
          if (f_.v25 == f_.v24) {
            v21 = 32;
          }
          else {
            if (f_.v25 == nullptr) {
              goto LABEL_47;
            }
            v21 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)f_.v25 + v21))((__int64)f_.v25);
        LABEL_47:
          if (f_.v27 == f_.v26) {
            v22 = 32;
          }
          else {
            if (f_.v27 == nullptr) {
              goto LABEL_52;
            }
            v22 = 40;
          }
          (*(void (**)(__int64))(*f_.v27 + v22))((__int64)f_.v27);
        LABEL_52:
          if (f_.v32 == (__int64*)&f_.v29) {
            v23 = 32;
          }
          else {
            if (f_.v32 == nullptr) {
              goto LABEL_57;
            }
            v23 = 40;
          }
          (*(void (**)(__int64))(*f_.v32 + v23))((__int64)f_.v32);
        LABEL_57:
          f_.v32 = (__int64*)&f_.v29;
          f_.v29 = GameData_212d2b8 + 2;
          f_.v30 = game_sound_PlayDecideLightSe_ptr[0];
          ProcGmapMove_1549f60(v20, (__int64)&f_.v29);
          v11 = f_.v32;
          if (f_.v32 != (__int64*)&f_.v29) {
            goto LABEL_19;
          }
          goto LABEL_58;
        }
      }
    }
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
