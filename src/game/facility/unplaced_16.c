#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_13fa790(__int64, const char**, __int64, __int64, __int64);
_QWORD* GameRoutine_16ae640(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
char* GameRoutine_60a020(char*, const char*);
char* GameRoutine_67ed20(_QWORD*);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20e1f48[])();
extern __int64 (*GameData_20e1fc8[])();
extern __int64 (*GameData_20e2048[])();
extern __int64 (*GameData_20e20c8[])();
extern __int64 (*GameData_20e2148[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d2b8;
extern __int64* GameData_212e008[9];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_20e1d88;
extern __int64 GameData_21c9988;
void* game_97b2f0(__int64);
void game_16ad210(__int64, __int64, char, const char*);
__int64 game_facility_18238c0(__int64 a1);

__int64 game_facility_18238c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  char v27;
  char* v28;
  char* v29;
  __int64 v30;
  __int64 (***v31)();
  __int64 v32;
  __int64 v33;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
    char gap40_[8];
    _QWORD v36[4];
    __int64 (***v37)();
    char gap88_[24];
    __int64 (**v39)();
    __int64 (*v40)();
    __int64 v41;
    char gap136_[8];
    __int64 (***v42)();
  } f_;
  char* v38;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = __dynamic_cast(v2, GameData_212e008[0], &GameData_20e1d88, 0);
  if (v4 == 0) {
    return 1;
  }
  v5 = (_QWORD*)v4;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4) & 1) == 0) {
    return 1;
  }
  v7 = v5[11];
  v6 = v5[12];
  v8 = v7 == 0 | v6 == 0;
  if (!v8 && *(_BYTE*)(v6 + 505) != 0) {
    if (*(_QWORD*)(v7 + 408) != 0) {
      if (v6 != 0) {
        goto LABEL_19;
      }
    }
    else if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 400) + 24LL) + 1104LL) !=
             v6) {
      goto LABEL_19;
    }
    if (GameData_21c9988 != 0) {
      f_.v40 = (__int64 (*)())v3;
      v38 = "MID_ClassRecycleMenu_JobChange_Confirm";
      f_.v39 = GameData_20e1f48;
      f_.v35 = f_.v34;
      f_.v42 = &f_.v39;
      f_.v37 = (__int64 (***)(void))f_.v36;
      f_.v36[0] = GameData_20e1fc8;
      f_.v34[0] = GameData_20e1fc8;
      MapSortieMenu_871860(v3, (__int64)&v38, (__int64)&f_.v39, (__int64)f_.v36,
                           (__int64)f_.v34);
      if (f_.v35 == f_.v34) {
        v10 = 32;
      }
      else {
        if (f_.v35 == nullptr) {
          goto LABEL_69;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*f_.v35 + v10))((__int64)f_.v35);
    LABEL_69:
      if (f_.v37 == f_.v36) {
        v33 = 4;
      }
      else {
        if (f_.v37 == nullptr) {
          goto LABEL_74;
        }
        v33 = 5;
      }
      ((__int64 (*)(__int64))(*f_.v37)[v33])((__int64)f_.v37);
    LABEL_74:
      v31 = f_.v42;
      if (f_.v42 == &f_.v39) {
        goto LABEL_75;
      }
      goto LABEL_65;
    }
  }
LABEL_19:
  f_.v40 = (__int64 (*)())v3;
  v38 = "MID_ClassRecycleMenu_Confirm";
  f_.v39 = GameData_20e2048;
  f_.v35 = f_.v34;
  f_.v42 = &f_.v39;
  f_.v37 = (__int64 (***)(void))f_.v36;
  f_.v36[0] = GameData_20e20c8;
  f_.v34[0] = GameData_20e20c8;
  v11 = GameRoutine_13fa790(v3, &v38, (__int64)&f_.v39, (__int64)f_.v36,
                            (__int64)f_.v34);
  if (f_.v35 == f_.v34) {
    v12 = 32;
  }
  else {
    if (f_.v35 == nullptr) {
      goto LABEL_24;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*f_.v35 + v12))((__int64)f_.v35);
LABEL_24:
  if (f_.v37 == f_.v36) {
    v13 = 4;
  }
  else {
    if (f_.v37 == nullptr) {
      goto LABEL_29;
    }
    v13 = 5;
  }
  ((__int64 (*)(__int64))(*f_.v37)[v13])((__int64)f_.v37);
LABEL_29:
  if (f_.v42 == &f_.v39) {
    v14 = 4;
  }
  else {
    if (f_.v42 == nullptr) {
      goto LABEL_34;
    }
    v14 = 5;
  }
  ((__int64 (*)(__int64))(*f_.v42)[v14])((__int64)f_.v42);
LABEL_34:
  f_.v37 = (__int64 (***)(void))f_.v36;
  f_.v42 = &f_.v39;
  f_.v36[0] = GameData_212d2b8 + 2;
  f_.v36[1] = game_sound_PlayDecideLightSe_ptr[0];
  f_.v39 = (__int64 (**)(void))(GameData_212d2b8 + 2);
  f_.v40 = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(&f_.v39, v11 + 144);
  if (f_.v42 == &f_.v39) {
    v15 = 4;
  }
  else {
    if (f_.v42 == nullptr) {
      goto LABEL_39;
    }
    v15 = 5;
  }
  ((__int64 (*)(__int64))(*f_.v42)[v15])((__int64)f_.v42);
LABEL_39:
  if (f_.v37 == f_.v36) {
    v16 = 4;
  }
  else {
    if (f_.v37 == nullptr) {
      goto LABEL_44;
    }
    v16 = 5;
  }
  ((__int64 (*)(__int64))(*f_.v37)[v16])((__int64)f_.v37);
LABEL_44:
  v18 = v5[11];
  v17 = v5[12];
  if (v18 != 0) {
    if (*(_BYTE*)(v18 + 2136) != 0) {
      v19 = (const char*)game_97b2f0(v18 + 2104);
    }
    else {
      v19 = GameRoutine_67ed20(*(_QWORD**)(v18 + 392));
    }
    game_16ad210((__int64)v11, *(_QWORD*)(v18 + 392), 6, v19);
  }
  v20 = *(_QWORD*)(v17 + 480);
  if (v20 != 0) {
    v21 = *(unsigned __int16*)(v20 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v21) +
                  73LL) == 17) {
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v22 = game_map_MapRandom_instance__ptr[0];
      v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v25 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v22 + 1) = v23;
      v26 = (v25 >> 8) ^ (v24 >> 19) ^ v25 ^ v24;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22) = v24;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22 + 4) = v26;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      LODWORD(v20) =
          (16 * ((_WORD)v26 -
                 1000 * (unsigned __int16)((v26 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    else {
      LODWORD(v20) = 1;
    }
  }
  else {
    LOWORD(v21) = 0;
  }
  v27 = *((_BYTE*)v11 + 1592);
  *((_WORD*)v11 + 790) = v21;
  *((_WORD*)v11 + 791) = 0;
  *((_DWORD*)v11 + 396) = v20;
  if ((v27 & 1) != 0) {
    v11[200] = 19;
    v28 = (char*)v11[201];
  }
  else {
    *((_BYTE*)v11 + 1592) = 38;
    v28 = (char*)v11 + 1593;
  }
  strcpy(v28, "MID_Shop_Aquisition");
  v29 = (const char*)(*(__int64 (**)(_QWORD*))(*v5 + 24LL))(v5);
  if (v29 != nullptr) {
    GameRoutine_60a020((char*)v11 + 1496, v29);
  }
  f_.v36[2] = v17;
  f_.v41 = v17;
  f_.v36[0] = GameData_20e2148;
  f_.v36[1] = v18;
  f_.v37 = (__int64 (***)(void))f_.v36;
  f_.v39 = GameData_20e2148;
  f_.v40 = (__int64 (*)())v18;
  f_.v42 = &f_.v39;
  GameRoutine_16ae640(&f_.v39, v11 + 190);
  if (f_.v42 == &f_.v39) {
    v30 = 4;
  }
  else {
    if (f_.v42 == nullptr) {
      goto LABEL_64;
    }
    v30 = 5;
  }
  ((__int64 (*)(__int64))(*f_.v42)[v30])((__int64)f_.v42);
LABEL_64:
  v31 = f_.v37;
  if (f_.v37 == f_.v36) {
  LABEL_75:
    v32 = 4;
    goto LABEL_76;
  }
LABEL_65:
  if (v31 != nullptr) {
    v32 = 5;
  LABEL_76:
    ((__int64 (*)(__int64))(*v31)[v32])((__int64)v31);
  }
  return 12;
}

#pragma GCC visibility pop
