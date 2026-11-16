#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_181b920(int, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* GameRoutine_60a020(char*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_207f400[35];
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
void GameRoutine_156c5d0(__int64, __int64, char);
void game_menu_1674860(__int64 a1);

void game_menu_1674860(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64* v7;
  int v8;
  char* v9;
  int v10;
  char* v11;
  char** v12;
  char* v13;
  char* v14;
  char* v15;
  char* v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;

  v2 = *(_QWORD*)(a1 + 128);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = *(__int64**)(a1 + 120);
      v5 = v3;
      if (v4 == nullptr) {
      LABEL_35:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
        return;
      }
      v6 = *(_DWORD*)(a1 + 140);
      v7 = msg_MessageManager_instance__ptr[0];
      if (v6 != 0) {
        v8 = GameRoutine_181b920(v6, 0);
        v9 = &GameData_1a9f09e;
        v10 = v8;
        if (v8 > 2) {
          switch (v8) {
          case 3:
            v9 = "MID_Sys_Hit";
            break;
          case 4:
            v9 = "MID_Sys_Critical";
            break;
          case 5:
            v9 = "MID_Sys_Attackspeed";
            break;
          default:
            break;
          }
          goto LABEL_18;
        }
        if (v8 != 0) {
          if (v8 == 1) {
            v9 = "MID_Sys_Physicalattack";
          }
          else if (v8 == 2) {
            v9 = "MID_Sys_Magicattack";
          }
        LABEL_18:
          v12 = msg_MessageManager_empty_text__ptr;
          if (*v9 != 0) {
            v13 = GameRoutine_a4dbe0(*v7, v9, 0);
          }
          else {
            v13 = *msg_MessageManager_empty_text__ptr;
          }
          if ((unsigned int)(v10 - 1) <= 4 &&
              *(v14 = GameData_207f400[v10 - 1]) != 0) {
            v15 = GameRoutine_a4dbe0(*v7, v14, 0);
          }
          else {
            v15 = *v12;
          }
          if (v13 != nullptr) {
            v16 = v13;
          }
          else {
            v16 = *v12;
          }
          GameRoutine_60a020((char*)(*v7 + 14704), v16);
          if (v15 != nullptr) {
            v17 = v15;
          }
          else {
            v17 = *v12;
          }
          GameRoutine_60a020((char*)(*v7 + 14728), v17);
          v11 = "MID_Config_Status_Split";
          goto LABEL_32;
        }
      }
      v11 = "MID_Config_Disable";
    LABEL_32:
      v18 = GameRoutine_a4dbe0(*v7, v11, 0);
      if (v18 != nullptr) {
        v19 = (__int64)v18;
        v20 = ui_LayoutAccessor_FindTextBox(v4, (__int64)"T_Txt");
        if (v20 != 0) {
          GameRoutine_156c5d0(v20, v19, 0);
        }
      }
      goto LABEL_35;
    }
  }
}

#pragma GCC visibility pop
