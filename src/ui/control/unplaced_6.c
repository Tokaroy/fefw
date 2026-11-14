#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_89b900(_QWORD);
__int64 GameHr_95f500(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_89aac0(_QWORD, _QWORD);
__int64 GameRoutine_95e0e0(_QWORD, _QWORD);
__int64 GameRoutine_95f930(_QWORD, _QWORD, _QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 game_149e9e0(_QWORD);
__int64 game_UnitItemList_Find_70f780(_QWORD);
__int64 game_Unit_RemoveItem(_QWORD, _QWORD);
__int64 game_Unit_RollPercent(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212dcd0;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 ui_control_8b7900(__int64 a1);

__int64 ui_control_8b7900(__int64 a1)
{
  __int64* v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  __int64 result;
  char v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int16 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v2 = GameData_212dcd0;
  if (*GameData_212dcd0 != 0) {
    *(_DWORD*)(*GameData_212dcd0 + 32) = -1;
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 160) + 480LL) != 0) {
    v3 = game_UnitItemList_Find_70f780(*(_QWORD*)(a1 + 152) + 828LL);
    if ((v3 & 0x80000000) != 0) {
      v12 = *(_QWORD*)(a1 + 160);
      v33 = 0;
      v13 = *(_QWORD*)(v12 + 480);
      v14 = GameData_212c878[0];
      if (v13 != 0) {
        v15 = *(unsigned __int16*)(v13 + 16);
        HIDWORD(v33) = 1;
        v16 = *GameData_212c878[0];
        LOWORD(v33) = v15;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v16 + 64) + 8 * v15) + 73LL) ==
            17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v17 = game_map_MapRandom_instance__ptr[0];
          v18 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v19 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v20 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v17 + 1) = v18;
          v21 = (v20 >> 8) ^ (v19 >> 19) ^ v20 ^ v19;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) = v19;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17 + 4) = v21;
          nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v33) =
              (16 * ((_WORD)v21 -
                     1000 * (unsigned __int16)((v21 & 0x7FFFFFFFu) / 0x3E8)) +
               16) &
                  0x3FF0 |
              1;
        }
      }
      v22 = game_TransporterConst_List_instance__ptr[0];
      v23 = GameRoutine_89aac0(
          *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                     8LL),
          &v33);
      if ((v23 & 0x80000000) == 0) {
        v24 = v23;
        v25 = *(_QWORD*)(*(_QWORD*)v22 + 8LL);
        v26 = *(_QWORD*)(v25 + 8) + 12LL * v24;
        if (*(_WORD*)(v26 + 4) != 0) {
          v27 = *(unsigned __int16*)(v26 + 2);
          v28 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) +
                           8LL * *(unsigned __int16*)(v26 + 4));
          if ((((0x10000000000LL << *(_BYTE*)(v28 + 72)) |
                (1LL << *(_BYTE*)(v28 + 73))) &
               0xFFBFFFFFFFA39FFFLL) != 0) {
            v29 = 1;
          }
          else {
            v29 = 999;
          }
          if (v29 >= v27 - 1) {
            LOWORD(v29) = v27 - 1;
          }
          if (*(_WORD*)(v26 + 2) != 0) {
            v30 = v29;
          }
          else {
            v30 = 0;
          }
          *(_WORD*)(v26 + 2) = v30;
          if (v30 == 0) {
            v31 = *(_QWORD*)(v25 + 8) + 12LL * v24;
            v32 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) +
                             8LL * *(unsigned __int16*)(v31 + 4));
            if ((((0x10000000000LL << *(_BYTE*)(v32 + 72)) |
                  (1LL << *(_BYTE*)(v32 + 73))) &
                 0xFFBFFFFFFFA39FFFLL) != 0) {
              *(_QWORD*)(v31 + 4) = 0;
            }
            *(_WORD*)(v31 + 2) = 0;
            GameHr_89b900(v25);
          }
        }
      }
    }
    else {
      game_Unit_RemoveItem(*(_QWORD*)(a1 + 152), v3);
    }
  }
  v4 = game_149e9e0(3);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48), v4, 1);
  }
  v5 = GameRoutine_95e0e0(*(_QWORD*)(a1 + 152), *(_QWORD*)(a1 + 160));
  result = game_Unit_RollPercent(*(_QWORD*)(a1 + 152), v5);
  v7 = result;
  if ((result & 1) == 0) {
    v8 = 1;
    v9 = *v2;
    if (*v2 == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  GameHr_95f500(0, *(_QWORD*)(a1 + 168), *(_QWORD*)(a1 + 152),
                *(_QWORD*)(a1 + 160));
  result = GameRoutine_95f930(0, *(_QWORD*)(a1 + 152), *(_QWORD*)(a1 + 160));
  v8 = 0;
  v9 = *v2;
  if (*v2 != 0) {
  LABEL_12:
    *(_DWORD*)(v9 + 32) = v7 & 1;
  }
LABEL_13:
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == v8) {
          v11 = *(_WORD*)(a1 + 136);
          *(_QWORD*)(a1 + 16) = v10;
          *(_WORD*)(a1 + 136) = v11 & 0xFF7F;
          return result;
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        return result;
      }
      v10 += 64;
    }
  }
  return result;
}

#pragma GCC visibility pop
