#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_878ea0(PSEUDO_X8, _QWORD*);
__int64 nn_time_StandardUserSystemClock_GetCurrentTime(_QWORD);
__int64 nn_time_ToCalendarTime(_QWORD, _QWORD, _QWORD);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212c790;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
unsigned __int64 GameRoutine_1a09c70(const char*);
void game_menu_anonymous_ReportInfo_SetClearState(__int64, __int64*,
                                                  unsigned int, int, char,
                                                  __int64, unsigned __int8,
                                                  __int16*);
void game_menu_anonymous_16a75e0(__int64 a1);

void game_menu_anonymous_16a75e0(__int64 a1)
{
  __int64* v2;
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  char v9;
  __int64 v10;
  __int16* v11;
  unsigned __int8 v12;
  unsigned int v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64** v17;
  __int64** v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  unsigned __int8 v22;
  __int64 v23;
  __int64 v24;
  struct __attribute__((packed)) {
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    char gap32_[4];
    __int64 v29;
    int v30;
    _BYTE v31[4];
    int v32;
    char gap56_[2];
    unsigned __int8 v33;
    unsigned __int8 v34;
    char v35;
    char gap61_[19];
    __int64 v36;
    unsigned __int8 v37;
    char gap89_[1];
    __int64 v38;
    int v39;
    char gap102_[2];
    int v40;
    char gap108_[56];
    __int64 v41;
    int v42;
    __int16 v43;
    char gap178_[6];
    char* v44[3];
  } g_;

  if (*(_BYTE*)(a1 + 216) == 1) {
    if (*(_QWORD*)(a1 + 168) != 0) {
      v2 = *(__int64**)(a1 + 168);
    }
    else {
      v2 = ui_LayoutAccessor_empty__ptr[0];
    }
    if (game_GameModeData_instance_ != 0) {
      v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v5 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v4 = 0;
      v3 = 0;
      LOBYTE(v5) = 0;
    }
    if (*GameData_212c790 != 0) {
      v15 = *(_QWORD*)(*GameData_212c790 + 8);
      v16 = *(_DWORD*)(v15 + 56);
      v17 = *(__int64***)(v15 + 8);
      v18 = *(__int64***)(v15 + 16);
      if (v16 < 0) {
        if (v17 != v18) {
          while (1) {
            v19 = *v17;
            if ((*v17)[12] == 0 && v19[69] == 0) {
              break;
            }
            if (++v17 == v18) {
              goto LABEL_24;
            }
          }
        LABEL_29:
          v21 = *v19;
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_30;
          }
          goto LABEL_25;
        }
      }
      else {
        while (v17 != v18) {
          v20 = *v17++;
          v19 = v20;
          if (*((_DWORD*)v20 + 21) == v16) {
            goto LABEL_29;
          }
        }
      }
    }
  LABEL_24:
    v21 = 0;
    if (game_GameModeData_instance_ == 0) {
    LABEL_30:
      v22 = 0;
      goto LABEL_31;
    }
  LABEL_25:
    v22 = *(_BYTE*)(game_GameModeData_instance_ + 56);
  LABEL_31:
    if (game_gmap_GmapClock_instance_ != 0) {
      v23 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v23 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v24 = *(_QWORD*)v23;
    g_.v42 = *(_DWORD*)(v23 + 8);
    g_.v41 = v24;
    if ((unsigned int)nn_time_StandardUserSystemClock_GetCurrentTime(g_.v44) ==
        0) {
      nn_time_ToCalendarTime(&g_.v43, g_.v31, g_.v44);
    }
    v11 = (__int16*)&g_.v41;
    v7 = a1;
    v14 = v2;
    v13 = v3;
    v8 = v4;
    v9 = v5;
    v10 = v21;
    v12 = v22;
  LABEL_37:
    game_menu_anonymous_ReportInfo_SetClearState(v7, v14, v13, v8, v9, v10, v12,
                                                 v11);
    return;
  }
  g_.v44[0] = game_util_Format("%s/%s", "000", "Auto");
  g_.v44[1] = (const char*)GameRoutine_1a09c70(g_.v44[0]);
  GameRoutine_878ea0((void*)((__int64)g_.v31), g_.v44);
  if (g_.v31[0] != 0 && (g_.v40 & 0x40000000) == 0) {
    v6 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = *(_DWORD*)(game_GameModeData_instance_ + 8);
    }
    if (g_.v32 == v6) {
      v7 = a1;
      v8 = g_.v34;
      v9 = g_.v35;
      v10 = g_.v36;
      v11 = (__int16*)&g_.v29;
      v12 = g_.v37;
      v13 = g_.v33;
      if (*(_QWORD*)(a1 + 168) != 0) {
        v14 = *(__int64**)(a1 + 168);
      }
      else {
        v14 = ui_LayoutAccessor_empty__ptr[0];
      }
      g_.v29 = g_.v38;
      g_.v30 = g_.v39;
      goto LABEL_37;
    }
  }
}

#pragma GCC visibility pop
