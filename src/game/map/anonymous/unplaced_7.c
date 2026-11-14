#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_UnitPool_Get(_BYTE*);
__int64 GameHr_1083840(__int64 result);
__int64 GameHr_78e5d0(__int64);
__int64 GameHr_a15d40(__int64 result);
__int64 GameRoutine_a7c6a0(__int64 result, __int64);
__int64 ITarget_7730f0(__int64);
__int64 MapCombatPrediction_19f2a10(__int64, __int64, __int64*);
__int64 ProcMapSeqTargetSelect_78ece0(__int64);
__int64 VTarget_77a0c0(__int64, unsigned int, char, char);
__int64 game_Unit_EquipItem_6d8f40(__int64, unsigned int);
__int64 game_character_1084940(__int64 result, char, float);
__int64 game_map_VTarget_GetSubDataNextSelect(__int64, unsigned int, char,
                                              char);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, float, float, __int64, unsigned int,
                       unsigned int, int);
char* VTarget_778980(__int64*, __int64, int*);
char* VTarget_778d60(__int64*, int*);
char* VTarget_779520(_QWORD*, __int16, __int16);
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21d3f58;
extern __int64 GameData_21f1e08;
int* GameHr_a158e0(_QWORD*, int, int, char, char);
void BattleInfoWindow_183fa50();
void GameRoutine_18ae960(_QWORD*, char);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_map_anonymous_78ee60(__int64 a1, char a2, char a3);
bool game_map_anonymous_78f220(__int64 a1, int* a2, unsigned __int16* a3,
                               __int64 a4);
__int64 game_map_anonymous_7cdfe0(__int64 result, float a2, double a3);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(__int64);
__int64 ui_LayoutAccessor_SetAlpha(__int64 result, char);
extern __int64 (*game_map_anonymous_ItemSubMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2054bb0[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2054ae0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_209e7c8[])();
extern __int64 (*game_menu_SubMenu_vtable[])();
extern __int64 GameData_21ed0a0;
extern __int64 fw_memory_g_heap_manager_ptr;
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_map_anonymous_15c2b60(_QWORD* a1);
void game_map_anonymous_15c2c20(_QWORD* a1);

__int64 game_map_anonymous_78ee60(__int64 a1, char a2, char a3)
{
  int v3;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v19;
  int v20;
  int v21;
  int* v22;
  int v23;
  int v24;
  bool v25;
  int v26;
  int v27;
  __int64 result;
  int* v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int16 v33;
  __int16 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  char* v39;
  _QWORD v40[26];

  v3 = *(_DWORD*)(a1 + 272);
  v7 = GameData_212cff0[0];
  v8 = *GameData_212cff0[0];
  if ((*(_DWORD*)(*GameData_212cff0[0] + 48) & 0xFFF) != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(*GameData_212cff0[0] + 48) & 0xFFF));
    if (v9 == 0) {
      goto LABEL_16;
    }
    v10 = *(unsigned __int8*)(v9 + 105);
  }
  else {
    v14 = *(unsigned __int16*)(v8 + 40);
    if (*(_WORD*)(v8 + 40) == 0) {
      v14 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v14);
    v16 = *(_QWORD*)(v15 + 192);
    v17 = *(unsigned __int8*)(v15 + 72);
    if (v16 == 0 || v17 > 7) {
      goto LABEL_16;
    }
    v10 = *(unsigned __int8*)(v16 + 105);
    if (*(_BYTE*)(v16 + 105) == 0 || *(_BYTE*)(v16 + 104) == 2) {
      goto LABEL_16;
    }
  }
  if ((unsigned int)(v10 - 2) < 3) {
    v11 = *(_DWORD*)(a1 + 276);
    if ((v11 & 0x80000000) != 0) {
      return 0;
    }
    v12 = game_map_VTarget_GetSubDataNextSelect(v8 + 8, v11, a2 & 1, a3 & 1);
    if (v12 == *(_DWORD*)(a1 + 276)) {
      return 0;
    }
    v13 = v12;
    snd_Fade_Fade_10c830((__int64)v40, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Cursor_Target",
                   (__int64)"SE_SYS_Cursor_Target", 0x0.0p+0f,
                   0x1.0000000000000p+0f, (__int64)v40, 0, 0x10001u, 0);
    snd_Fade_Destroy_Fade(v40);
    *(_DWORD*)(a1 + 276) = v13;
    GameHr_78e5d0(a1);
    goto LABEL_30;
  }
LABEL_16:
  if (v3 < 0) {
    return 0;
  }
  if ((GameHr_a15d40(v8 + 8) & 1) == 0 ||
      (v19 = *v7 + 12LL * *(int*)(a1 + 272), (v20 = *(char*)(v19 + 69)) < 0) ||
      (v21 = *(char*)(v19 + 70)) < 0 ||
      ((v22 = GameHr_a158e0((_QWORD*)(a1 + 23096), v20, v21, a2 & 1, a3 & 1),
        v23 = *(char*)v22, v24 = *((char*)v22 + 1), v23 >= 1)
           ? (v25 = v24 < 1)
           : (v25 = true),
       v25)) {
  LABEL_25:
    v26 = VTarget_77a0c0(*v7 + 8, *(_DWORD*)(a1 + 272), a2 & 1, a3 & 1);
    if (v26 == *(_DWORD*)(a1 + 272)) {
      return 0;
    }
    v27 = v26;
    snd_Fade_Fade_10c830((__int64)v40, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Cursor_Target",
                   (__int64)"SE_SYS_Cursor_Target", 0x0.0p+0f,
                   0x1.0000000000000p+0f, (__int64)v40, 0, 0x10001u, 0);
    snd_Fade_Destroy_Fade(v40);
    *(_DWORD*)(a1 + 272) = v27;
    goto LABEL_27;
  }
  v29 = v22;
  v30 = VTarget_779520((_QWORD*)(*v7 + 8), v23, v24);
  if (v30[1] < 0 || v30[2] < 0) {
    v31 = *(_QWORD*)(a1 + 23096);
    v32 = *(_QWORD*)(a1 + 23104);
    if (v31 != v32) {
      v33 = *(char*)v29;
      v34 = *((char*)v29 + 1);
      while (1) {
        v35 = VTarget_779520((_QWORD*)v31, v33, v34);
        if ((v35[1] & 0x80000000) == 0 && (v35[2] & 0x80000000) == 0) {
          break;
        }
        v31 += 37096;
        if (v31 == v32) {
          goto LABEL_25;
        }
      }
      v36 = *v7;
      *(_BYTE*)(*v7 + 32) = *(_BYTE*)(v31 + 24);
      v37 = ITarget_7730f0(v31);
      v38 = v37 != 0 ? *(_DWORD*)(v36 + 48) & 0xFFFFF000 |
                           *(_WORD*)(v37 + 16) & 0xFFF
                     : *(_DWORD*)(v36 + 48) & 0xFFFFF000;
      *(_DWORD*)(v36 + 48) = v38;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)(v36 + 8) + 24LL))(v36 + 8) &
           1) != 0) {
        v39 =
            VTarget_779520((_QWORD*)(*v7 + 8), *(char*)v29, *((char*)v29 + 1));
        if ((v39[1] & 0x80000000) == 0 && (v39[2] & 0x80000000) == 0) {
          *(_DWORD*)(a1 + 272) = (unsigned __int8)*v39;
          GameHr_78e5d0(a1);
          BattleInfoWindow_183fa50();
          goto LABEL_30;
        }
      }
    }
    goto LABEL_25;
  }
  *(_DWORD*)(a1 + 272) = (unsigned __int8)*v30;
LABEL_27:
  GameHr_78e5d0(a1);
  if (GameData_21d3f58 != 0) {
    *(_BYTE*)(GameData_21d3f58 + 296) = 1;
    if (GameData_21f1e08 != 0) {
      GameRoutine_18ae960((_QWORD*)GameData_21f1e08, 0);
    }
  }
LABEL_30:
  if ((ProcMapSeqTargetSelect_78ece0(a1) & 1) != 0) {
    return 1;
  }
  *(_DWORD*)(a1 + 272) = v3;
  GameHr_78e5d0(a1);
  if (GameData_21d3f58 != 0) {
    *(_BYTE*)(GameData_21d3f58 + 296) = 1;
    result = GameData_21f1e08;
    if (GameData_21f1e08 == 0) {
      return result;
    }
    GameRoutine_18ae960((_QWORD*)GameData_21f1e08, 0);
  }
  return 0;
}

bool game_map_anonymous_78f220(__int64 a1, int* a2, unsigned __int16* a3,
                               __int64 a4)
{
  __int64* v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int16 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  bool v21;
  char v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  __int64 v31[2];
  _QWORD v32[25];

  v31[0] = (__int64)a3;
  v31[1] = a4;
  if (a3 == nullptr) {
    return a3 != nullptr;
  }
  v8 = GameData_212cfd0[0];
  v9 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8));
  v10 = *v8;
  v11 = MapCombatPrediction_19f2a10(a1 + 22920, (__int64)v9, v31);
  v12 = game_UnitPool_Get((_BYTE*)(v10 + 8));
  game_Unit_EquipItem_6d8f40((__int64)v12, v11);
  v13 = GameData_21cd0e8;
  *(_DWORD*)(GameData_21cd0e8 + 36) = v11;
  if ((v11 & 0x80000000) != 0) {
    *(_QWORD*)(v13 + 40) = 0;
    if (a4 != 0) {
      goto LABEL_7;
    }
  LABEL_10:
    v18 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3);
    v19 = *(_QWORD*)(v18 + 192);
    v20 = *(unsigned __int8*)(v18 + 72);
    v21 = v19 == 0 || v20 > 7;
    if (v21 || *(_BYTE*)(v19 + 105) == 0 || *(_BYTE*)(v19 + 104) == 2) {
      if (*(_BYTE*)(v18 + 73) != 7 &&
              ((1LL << *(_BYTE*)(v18 + 73)) & 0x7DC) == 0 ||
          v20 >= 8) {
        v24 = 3;
      }
      else {
        v24 = 4;
      }
      v25 = GameData_21cd0e8;
      *(_BYTE*)(GameData_21cd0e8 + 32) = v24;
      *(_DWORD*)(v25 + 48) &= 0xFFFFF000;
    }
    else {
      v25 = GameData_21cd0e8;
      *(_BYTE*)(GameData_21cd0e8 + 32) = 4;
      *(_DWORD*)(v25 + 48) =
          *(_DWORD*)(v25 + 48) & 0xFFFFF000 | *(_WORD*)(v19 + 16) & 0xFFF;
    }
    v17 = VTarget_778d60((__int64*)(v25 + 8), a2);
    if (v17[1] < 0) {
      goto LABEL_29;
    }
  LABEL_27:
    if ((v17[2] & 0x80000000) == 0) {
      v26 = (unsigned __int8)*v17;
      v27 = GameData_21cd0e8;
      *(_DWORD*)(a1 + 272) = v26;
      *(_QWORD*)(a1 + 23032) = v27 + 12LL * v26 + 68;
    }
    goto LABEL_29;
  }
  if (*(_BYTE*)(v13 + 16) != 0 &&
      game_UnitPool_Get((_BYTE*)(v13 + 16)) != nullptr) {
    v14 = &game_UnitPool_Get((_BYTE*)(v13 + 16))[v11];
    v15 = *((_WORD*)v14 + 414);
    *(_BYTE*)(v13 + 42) = *((_BYTE*)v14 + 830);
    *(_WORD*)(v13 + 40) = v15;
    *(_BYTE*)(v13 + 43) = *((_BYTE*)v14 + 831);
    *(_DWORD*)(v13 + 44) = *((_DWORD*)v14 + 208);
  }
  if (a4 == 0) {
    goto LABEL_10;
  }
LABEL_7:
  v16 = GameData_21cd0e8;
  *(_BYTE*)(GameData_21cd0e8 + 32) = 5;
  *(_DWORD*)(v16 + 48) =
      *(_DWORD*)(v16 + 48) & 0xFFFFF000 | *(_WORD*)(a4 + 16) & 0xFFF;
  v17 = VTarget_778980((__int64*)(v16 + 8), a4, a2);
  if ((v17[1] & 0x80000000) == 0) {
    goto LABEL_27;
  }
LABEL_29:
  v28 = GameData_21d3f58;
  if (*(unsigned __int16**)(GameData_21d3f58 + 176) != a3) {
    snd_Fade_Fade_10c830((__int64)v32, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Weapon_Change",
                   (__int64)"SE_SYS_Weapon_Change", 0x0.0p+0f,
                   0x1.0000000000000p+0f, (__int64)v32, 0, 0x10001u, 0);
    snd_Fade_Destroy_Fade(v32);
  }
  if (*(_QWORD*)(v28 + 184) != a4) {
    snd_Fade_Fade_10c830((__int64)v32, 0x0.0p+0f);
    if (a4 != 0) {
      v29 = "SE_SYS_Skill_Equip";
    }
    else {
      v29 = "SE_SYS_Skill_Remove";
    }
    snd_play_ff2d0((__int64)v29, (__int64)v29, 0x0.0p+0f, 0x1.0000000000000p+0f,
                   (__int64)v32, 0, 0x10001u, 0);
    snd_Fade_Destroy_Fade(v32);
  }
  *(_QWORD*)(v28 + 176) = a3;
  *(_QWORD*)(v28 + 184) = a4;
  *(_BYTE*)(v28 + 192) = 0;
  GameHr_78e5d0(a1);
  return a3 != nullptr;
}

__int64 game_map_anonymous_7cdfe0(__int64 result, float a2, double a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  float32x4_t* v7;
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  float32x4_t v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int128 v17;
  float v18;
  float v19;

  if (*(_QWORD*)(result + 112) != 0) {
    v3 = *(_QWORD*)(result + 120);
    v5 = result;
    if (v3 != 0) {
      v6 = *(_QWORD*)(v3 + 392);
      *(float*)(v3 + 336) = a2;
      if (v6 != 0) {
        v7 = *(float32x4_t**)(v3 + 8);
        *(float*)&a3 =
            *(float*)(v6 + 40) +
            (float)((float)(0x1.0000000000000p+0f - *(float*)(v6 + 40)) * a2);
        v8 = vdupq_lane_s32(*(int32x2_t*)&a3, 0);
        LANES128(v8).n128_u32[3] = 0;
        v9 = vsubq_f32(v7[22], v8);
        v10 = vmulq_f32(v9, v9);
        LANES128(v10).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                .n64_f32[0] != 0x0.0p+0f) {
          LANES128(v7[22]).n128_u32[0] = LODWORD(a3);
          LANES128(v7[22]).n128_u32[1] = LODWORD(a3);
          v11 = v7[22];
          LANES128(v7[18]).n128_u32[2] |= 1u;
          LANES128(v11).n128_u64[1] = LODWORD(a3);
          v7[22] = v11;
          v6 = *(_QWORD*)(v3 + 392);
        }
        v12 = *(__int64**)(v3 + 528);
        v13 = *(__int64**)(v3 + 536);
        if (v12 != v13) {
          v19 =
              *(float*)(v6 + 44) +
              (float)((float)(0x1.0000000000000p+0f - *(float*)(v6 + 44)) * a2);
          do {
            v14 = *v12++;
            v15 = *(_DWORD*)(v14 + 128);
            v16 = *(_QWORD*)v14;
            *(float*)(v14 + 112) = v19;
            *(float*)(v14 + 116) = v19;
            v17 = *(_OWORD*)(v14 + 112);
            *(_DWORD*)(v14 + 128) = v15 | 0x20;
            *((_QWORD*)&v17 + 1) = LODWORD(v19);
            *(_OWORD*)(v14 + 112) = v17;
            GameRoutine_a7c6a0(v16, v14);
          } while (v12 != v13);
        }
        GameHr_1083840(v3);
      }
      result = *(_QWORD*)(v5 + 120);
      *(float*)(v5 + 128) = a2;
      if (a2 <= 0x1.0000000000000p-1f) {
        v18 = 0x1.0000000000000p+0f - (float)(a2 + a2);
      }
      else {
        v18 = 0x0.0p+0f;
      }
      if (result != 0) {
        result = game_character_1084940(result, 0, v18);
      }
    }
    else {
      *(float*)(result + 128) = a2;
      if (a2 <= 0x1.0000000000000p-1f) {
        v18 = 0x1.0000000000000p+0f - (float)(a2 + a2);
      }
      else {
        v18 = 0x0.0p+0f;
      }
    }
    *(float*)(v5 + 140) = v18;
  }
  return result;
}

__int64 game_map_anonymous_15c2b60(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;

  *a1 = game_map_anonymous_ItemSubMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_2054ae0;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2054bb0;
  if (GameData_21ed0a0 != 0) {
    v2 = LayoutAccessor_155fbe0((__int64*)(GameData_21ed0a0 + 40), "L_KeyHelp");
    ui_LayoutAccessor_SetAlpha((__int64)v2, 255);
  }
  v3 = (_QWORD*)a1[140];
  *a1 = game_menu_SubMenu_vtable;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_209e7c8;
  if (v3 == a1 + 136) {
    v4 = 32;
    goto LABEL_7;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

void game_map_anonymous_15c2c20(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_map_anonymous_ItemSubMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_2054ae0;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2054bb0;
  if (GameData_21ed0a0 != 0) {
    v2 = LayoutAccessor_155fbe0((__int64*)(GameData_21ed0a0 + 40), "L_KeyHelp");
    ui_LayoutAccessor_SetAlpha((__int64)v2, 255);
  }
  v3 = (_QWORD*)a1[140];
  *a1 = game_menu_SubMenu_vtable;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_209e898;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_209e7c8;
  if (v3 == a1 + 136) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_8:
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                (__int64)a1);
}

#pragma GCC visibility pop
