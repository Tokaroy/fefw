#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_dbc1e0(_QWORD*, __int64);

__attribute__((swiftcall)) void SpotMgr_13306e0(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD);

__int64* GameRoutine_1328d60(__int64);

__int64 GameHr_14a1390(__int64*, char);

__int64 GameHr_14a1520(__int64*, char);

__int64 GameHr_14a7290(__int64*);

__int64 GameRoutine_133e110(void);

__int64 GameRoutine_1545120(_QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 Impl_13261c0(__int64);

__int64 RuntimeBuffer_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);

__int64 SpotMgr_13304c0(_QWORD);

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 game_HashString(_QWORD, _QWORD);

__int64 game_gmap_13402f0(void);

__int64 game_gmap_1347b30(_QWORD, _QWORD);

__int64 game_gmap_1347cc0(_QWORD);

__int64 game_gmap_SpotMgr_FindSpot(void);

__int64 game_gmap_SpotMgr_GetCurrentSpot(void);

__int64 game_gmap_TroopMgr_CountTroop_134e600(_QWORD, _QWORD);

__int64 game_gmap_Troop_OnEndPhase(__int64 result);

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);

__int64 std___1___shared_weak_count___release_weak(_QWORD);

extern __int128* GameData_212c670;

extern __int64 (*GameData_1fa69a0[])();

extern __int64* GameData_212c780;

extern __int64* GameData_212d718;

extern __int64 GameData_212c6a0[3];

extern __int64 GameData_212c7a0[13];

extern __int64 GameData_21c96e8;

extern __int64 GameData_21c9700;

extern __int64 GameData_21c99c8;

extern __int64 GameData_21c9f00;

extern __int64 GameData_21ca090;

extern __int64 GameData_21f1660;

extern __int64 GameData_22416b0;

extern __int64 fw_memory_g_heap_manager_ptr;

float std___1_stof(_QWORD, _QWORD);

unsigned __int64 game_gmap_8808c0(unsigned __int64 result, int32x4_t a2);

__int64 game_gmap_13339e0();

__int64* game_gmap_1333b20();

__int64 game_gmap_1337000();

__int64 game_gmap_14a9e00();

__int64 game_gmap_14aa080();

__int64* game_gmap_14c6e20();

__int64 game_gmap_14ca660();

__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);

__int64 GameRoutine_1326a40(__int64);

__int64 GameRoutine_1a0a690(const char*, int);

__int64 Troop_133ed80(__int64 result, __int64);

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 fw_memory_HeapManager_Allocate_alt1(__int64, __int64, __int64,
                                            unsigned int);

__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);

__int64 game_HashString_alt1(__int64 result);

__int64 game_IsVibrationEnabled(_BYTE*);

__int64 game_gmap_1536e70(int);

__int64 game_menu_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 game_menu_16dcd30_alt1(__int64, __int64, _QWORD*, __int64);

__int64 std___1___shared_weak_count___release_weak_alt2(__int64);

__int64 std___1___shared_weak_count_lock(__int64);

__int64 ui_LayoutAccessor_FindPartsLayout(__int64*, __int64);

__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD);

char* game_util_Format(const char*, ...);

extern __int64 (*GameData_202c698[])();

extern __int64 (*GameData_207fd10[])();

extern __int64 (*GameData_20b4128[])();

extern __int64 (*GameData_210f050[])();

extern __int64 (*game_gameui_ImageLoader_vtable[])();

extern __int64 (*game_gmap_GmapSpotInfoSetterForList_vtable[])();

extern __int64 (*game_gmap_GmapSpotInfoSetter_vtable)();

extern __int64 (*game_gmap_GmapSpotList_vtable[])();

extern __int64 (*game_gmap_anonymous_CorpsDecide_vtable[])();

extern __int64 (*game_gmap_anonymous_CorpsMenuBase_vtable)();

extern __int64 (*game_gmap_anonymous_CorpsUserMenu_vtable[])();

extern __int64 (*game_gmap_anonymous_DecideMenuItem_vtable[])();

extern __int64 (*game_gmap_anonymous_ProcGmapShopGuideMenu_vtable[])();

extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_209ddf8[])();

extern __int64 (*game_menu_GameMenu_vtable[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_207fc40[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_209dd28[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20b3a18[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20b4058[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20b5a08[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20c54c8[])();

extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_210ef80[])();

extern __int64 (*game_menu_MultiMenu_vtable)();

extern __int64 (*nn_ui2d_PlacementTextureInfo_vtable[])();

extern __int64* GameData_212c790;

extern __int64* GameData_212c890[3];

extern __int64* GameData_2130e60;

extern __int64* GameData_2130e70;

extern __int64* GameData_21319e8[10];

extern __int64* GameData_2131ae8;

extern __int64 GameData_1a8d218;

extern __int64 GameData_20b3420;

extern __int64 GameData_212c7b0[11];

extern __int64 GameData_2131d70[12];

extern __int64 fw_memory_g_heap_manager;

extern __int64 game_GameModeData_instance_;

extern __int64 game_g_game_setting_ptr;

extern __int64 game_gmap_GmapClock_instance_;

extern const char GameData_1afaabd[];

void BasicMenuCursor_16e0c00(_QWORD*, __int64);

void GameRoutine_6e5a40(__int64*, unsigned __int64, _DWORD*);

void GameSubquestData_125b340(__int64, __int64*, __int64);

void game_menu_BasicMenu_Destroy_BasicMenu(__int64);

void nn_mem_StandardAllocator_Free_alt1(__int64, __int64);

__int64 game_gmap_14da280();

_QWORD* game_gmap_167b0c0(__int64 a1, __int64 a2, char a3);

__int64 game_gmap_1729620(__int64 a1);

__int64 game_gmap_1729d80(__int64 a1);

void game_gmap_1902530(_QWORD* a1);

void game_gmap_1902610(_QWORD* a1);

__int64 game_gmap_14da280()
{
  __int64* v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  char v14;
  int v15;
  int v16;
  int v19;
  int v21;
  __int64 v22;
  int v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  int v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  const char* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  int v61;
  __int64 v62;
  __int64 v63;
  int v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64** v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  _BOOL4 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  unsigned int v79;
  struct {
    __int64 v81;
    __int64 v82;
    __int64 v83;
  } v81_;
  struct {
    __int64 (**v84)();
    char* v85;
    __int64 v86;
    char gap56_[8];
    unsigned __int64* v87;
  } v84_;
  char v88;

  v81_.v82 = 0;
  v81_.v83 = 0;
  v81_.v81 = 0;
  v0 = GameData_212c790;
  v1 = *(_QWORD*)(*GameData_212c790 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  v4 = *(_DWORD*)(v1 + 56);
  if ((v4 & 0x80000000) == 0) {
    while (v2 != v3) {
      v6 = *v2++;
      v5 = v6;
      if (*(_DWORD*)(v6 + 84) == v4) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v5 = *v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v7 = *(_DWORD*)(v5 + 540);
  v8 = __OFSUB__(v7, 1);
  v9 = (unsigned int)(v7 - 1);
  if (((v9 & 0x80000000) != 0LL) == v8) {
    v10 = *(_QWORD*)(v5 + 24);
    v11 = *(_QWORD*)(v5 + 32) - v10;
    v12 = v10 + 8LL * (unsigned int)v9;
    if (v9 < v11 >> 3) {
      v5 = v12;
    }
  }
  GameSubquestData_125b340(*(_QWORD*)GameData_212c7b0[0], &v81_.v81,
                           *(_QWORD*)v5);
  if (v81_.v82 == v81_.v81) {
    v13 = 16392;
  }
  else {
    v13 = 0;
  }
  v14 = game_gmap_1536e70(6);
  v15 = game_gmap_GmapClock_instance_;
  v16 = v13 | 0x4001;
  if ((v14 & 1) != 0) {
    v16 = v13;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v15 = *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
          *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
          *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
  }
  v19 = *(unsigned __int8*)(*GameData_2130e70 + 52);
  if (v19 == 11) {
    v15 = 1;
  }
  if (v15 == 0) {
    v16 |= 0x4002u;
  }
  if (*(_BYTE*)(*GameData_2130e70 + 52) == 0 || v19 == 11) {
    v21 = v16;
  }
  else {
    v21 = v16 | 0x4004;
  }
  v22 = *(_QWORD*)(*v0 + 8);
  v23 = *(_DWORD*)(v22 + 56);
  v24 = *(__int64**)(v22 + 8);
  v25 = *(__int64**)(v22 + 16);
  if (v23 < 0) {
    for (; v24 != v25; ++v24) {
      v26 = *v24;
      if (*(_QWORD*)(*v24 + 96) == 0 && *(_QWORD*)(v26 + 552) == 0) {
        goto LABEL_47;
      }
    }
  }
  else {
    while (v24 != v25) {
      v27 = *v24++;
      v26 = v27;
      if (*(_DWORD*)(v27 + 84) == v23) {
        goto LABEL_47;
      }
    }
  }
  v26 = 0;
LABEL_47:
  v28 = game_HashString_alt1((__int64)&GameData_1a8d218);
  if (v28 == 0) {
    goto LABEL_75;
  }
  v29 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v29 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_75;
  }
  v31 = v29 - 1;
  if ((v29 & (v29 - 1)) != 0) {
    v32 = v28;
    if (v28 >= v29) {
      v32 = v28 % v29;
    }
  }
  else {
    v32 = v31 & v28;
  }
  v33 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v32);
  if (v33 == nullptr || (v34 = (_QWORD*)*v33) == nullptr) {
  LABEL_75:
    v36 = 0;
    goto LABEL_76;
  }
  if ((v29 & v31) == 0) {
    while (1) {
      v37 = v34[1];
      if (v37 == v28) {
        if (v34[2] == v28) {
          goto LABEL_146;
        }
      }
      else if ((v37 & v31) != v32) {
        goto LABEL_75;
      }
      v34 = (_QWORD*)*v34;
      v36 = 0;
      if (v34 == nullptr) {
        goto LABEL_76;
      }
    }
  }
  while (1) {
    v35 = v34[1];
    if (v35 == v28) {
      break;
    }
    if (v35 >= v29) {
      v35 %= v29;
    }
    if (v35 != v32) {
      goto LABEL_75;
    }
  LABEL_65:
    v34 = (_QWORD*)*v34;
    if (v34 == nullptr) {
      goto LABEL_75;
    }
  }
  if (v34[2] != v28) {
    goto LABEL_65;
  }
LABEL_146:
  v36 = v34[3];
LABEL_76:
  v88 = 0;
  v84_.v86 = v36;
  v84_.v84 = GameData_202c698;
  v84_.v85 = &v88;
  v84_.v87 = (unsigned __int64*)&v84_.v84;
  Troop_133ed80(v26, (__int64)&v84_.v84);
  if (v84_.v87 == (unsigned __int64*)&v84_.v84) {
    v38 = 32;
  LABEL_80:
    (*(void (**)(__int64))(*v84_.v87 + v38))((__int64)v84_.v87);
  }
  else if (v84_.v87 != nullptr) {
    v38 = 40;
    goto LABEL_80;
  }
  if (v88 != 0) {
    v39 = v21;
  }
  else {
    v39 = v21 | 0x4200;
  }
  v40 = *(_QWORD*)(*v0 + 8);
  v41 = *(_DWORD*)(v40 + 56);
  v42 = *(__int64**)(v40 + 8);
  v43 = *(__int64**)(v40 + 16);
  if ((v41 & 0x80000000) == 0) {
    while (v42 != v43) {
      v45 = *v42++;
      v44 = v45;
      if (*(_DWORD*)(v45 + 84) == v41) {
        goto LABEL_91;
      }
    }
  LABEL_90:
    v44 = 0;
    goto LABEL_91;
  }
  if (v42 == v43) {
    goto LABEL_90;
  }
  while (1) {
    v44 = *v42;
    if (*(_QWORD*)(*v42 + 96) == 0 && *(_QWORD*)(v44 + 552) == 0) {
      break;
    }
    if (++v42 == v43) {
      goto LABEL_90;
    }
  }
LABEL_91:
  v46 = *(_DWORD*)(v44 + 540);
  v8 = __OFSUB__(v46, 1);
  v47 = (unsigned int)(v46 - 1);
  if (((v47 & 0x80000000) != 0LL) == v8) {
    v48 = *(_QWORD*)(v44 + 24);
    v49 = *(_QWORD*)(v44 + 32) - v48;
    v50 = v48 + 8LL * (unsigned int)v47;
    if (v47 < v49 >> 3) {
      v44 = v50;
    }
  }
  v51 = *(_QWORD*)v44;
  v52 = GameRoutine_1326a40(*(_QWORD*)v44);
  v53 = game_GameModeData_instance_;
  if (v52 == 0) {
    goto LABEL_108;
  }
  if (game_GameModeData_instance_ != 0) {
    v54 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v55 = *(const char**)(v52 + 8);
    if (v55 == nullptr) {
      goto LABEL_105;
    }
  LABEL_103:
    v56 = GameRoutine_1a0a690(v55, 95);
    if (v56 != 0) {
      v55 = (const char*)(v56 + 1);
    }
  }
  else {
    v54 = 0;
    v55 = *(const char**)(v52 + 8);
    if (v55 != nullptr) {
      goto LABEL_103;
    }
  }
LABEL_105:
  v84_.v85 = game_util_Format(GameData_1afaabd, v54, v55);
  v84_.v84 = (__int64 (**)(void))game_HashString_alt1((__int64)v84_.v85);
  v57 = game_GameVariableTable_Find(*(_QWORD**)(v53 + 48),
                                    (unsigned __int64*)&v84_.v84);
  if (v57 != 0 && *(_DWORD*)(v57 + 32) != 0) {
    v53 = game_GameModeData_instance_;
    goto LABEL_108;
  }
  v58 = *(_QWORD*)(*v0 + 8);
  v59 = *(__int64**)(v58 + 8);
  v60 = *(__int64**)(v58 + 16);
  v61 = *(_DWORD*)(v58 + 56);
  if ((v61 & 0x80000000) == 0) {
    while (v59 != v60) {
      v63 = *v59++;
      v62 = v63;
      if (*(_DWORD*)(v63 + 84) == v61) {
        goto LABEL_116;
      }
    }
  LABEL_115:
    v62 = 0;
    goto LABEL_116;
  }
  if (v59 == v60) {
    goto LABEL_115;
  }
  while (1) {
    v62 = *v59;
    if (*(_QWORD*)(*v59 + 96) == 0 && *(_QWORD*)(v62 + 552) == 0) {
      break;
    }
    if (++v59 == v60) {
      goto LABEL_115;
    }
  }
LABEL_116:
  v64 = *(_DWORD*)(v62 + 540);
  v8 = __OFSUB__(v64, 1);
  v65 = (unsigned int)(v64 - 1);
  if (((v65 & 0x80000000) != 0LL) == v8) {
    v66 = *(_QWORD*)(v62 + 24);
    v67 = *(_QWORD*)(v62 + 32) - v66;
    v68 = v66 + 8LL * (unsigned int)v65;
    if (v65 < v67 >> 3) {
      v62 = v68;
    }
  }
  v53 = game_GameModeData_instance_;
  if ((*(_BYTE*)(*(_QWORD*)v62 + 178LL) & 4) != 0) {
    if (game_GameModeData_instance_ == 0) {
    LABEL_144:
      v75 = false;
      v76 = 0;
      v77 = v81_.v81;
      if (v81_.v81 != 0) {
        goto LABEL_133;
      }
      goto LABEL_136;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
      goto LABEL_121;
    }
  LABEL_108:
    v39 |= 0x4008u;
  }
  if (v53 == 0) {
    goto LABEL_144;
  }
LABEL_121:
  v69 = *(_DWORD*)(v53 + 60);
  if (v69 != 3 || (v70 = *(__int64***)(*GameData_2130e60 + 8), v71 = *v70,
                   v72 = v70[1], v71 == v72)) {
    v75 = false;
  }
  else {
    while (1) {
      v74 = *v71++;
      v73 = v74;
      if (*(_QWORD*)(*(_QWORD*)(v74 + 112) + 48LL) == *(_QWORD*)(v51 + 120)) {
        break;
      }
      if (v71 == v72) {
        v73 = 0;
        break;
      }
    }
    v75 = v73 != 0;
  }
  v76 = *(unsigned __int8*)(v51 + 178);
  // The flag byte is read whatever the mode.
  __asm__ volatile("" : "+r"(v76));
  v76 = (v69 == 3) & (v76 >> 2);
  v77 = v81_.v81;
  if (v81_.v81 != 0) {
  LABEL_133:
    v81_.v82 = v77;
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, v77);
  }
LABEL_136:
  v79 = v39 | 0x4010;
  if (!v75) {
    v79 = v39;
  }
  if (v76 != 0) {
    return v79 | 0x4020;
  }
  else {
    return v79;
  }
}

_QWORD* game_gmap_167b0c0(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(fast)

  __int64 v6;
  _QWORD* result;
  __int64* v8;
  __int64 v9;
  __int64 v10;

  v9 = 0;
  v10 = 0;
  game_menu_16dcd30(a1, "GmapSpotList", &v9, 0);
  v6 = v10;
  *(_QWORD*)a1 = game_menu_GameMenu_vtable;
  *(_QWORD*)(a1 + 176) = game_menu_MenuInput_InputUnknown00_ptr_209dd28;
  *(_QWORD*)(a1 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_209ddf8;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)a1 = game_gmap_GmapSpotList_vtable;
  *(_QWORD*)(a1 + 176) = game_menu_MenuInput_InputUnknown00_ptr_207fc40;
  *(_QWORD*)(a1 + 1056) = GameData_207fd10;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_QWORD*)(a1 + 1112) = 0;
  *(_DWORD*)(a1 + 1120) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1088) = &game_gmap_GmapSpotInfoSetter_vtable;
  *(_DWORD*)(a1 + 1152) = 0;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 72,
                                                   16, 0);
  v8 = GameData_2131ae8;
  result[4] = -1;
  result[5] = 0;
  *result = v8 + 2;
  result[1] = game_gameui_ImageLoader_vtable;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  *(_QWORD*)(a1 + 1160) = result;
  result[2] = 0;
  result[3] = nn_ui2d_PlacementTextureInfo_vtable;
  *(_BYTE*)(a1 + 1168) = 0;
  *(_BYTE*)(a1 + 1176) = a3 & 1;
  *(_QWORD*)(a1 + 1184) = a2;
  *(_BYTE*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1088) = game_gmap_GmapSpotInfoSetterForList_vtable;
  return result;
}

__int64 game_gmap_1729620(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 (**v5)();
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  struct {
    __int64 (**v35)();
    int* v36;
    __int64 v37;
    char gap24_[8];
    __int64 (***v38)();
  } v35_;
  int v39;

  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
  v3 = *(_QWORD*)(a1 + 208);
  if (v3 != 0 && (v4 = std___1___shared_weak_count_lock(v3)) != 0) {
    v5 = *(__int64 (***)(void))(a1 + 200);
    v6 = v4;
    v7 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                           (__int64)"L_UnitListL");
    v8 = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v35_.v35 = v5;
    v35_.v36 = (int*)v6;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v7 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                           (__int64)"L_UnitListL");
    v6 = 0;
    v35_.v35 = nullptr;
    v35_.v36 = nullptr;
    v8 = 1;
  }
  game_menu_16dcd30_alt1(v2, (__int64)"GmapCorpsSideMenu", &v35_.v35, v7);
  v9 = (__int64)v35_.v36;
  if (v35_.v36 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 2),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt2(v9);
  }
  v10 = GameData_2131d70[0];
  *(_QWORD*)(v2 + 1056) = a1;
  *(_DWORD*)(v2 + 1064) = 0;
  *(_QWORD*)v2 = v10 + 16;
  *(_QWORD*)(v2 + 176) = v10 + 1320;
  if ((v8 & 1) != 0) {
    *(_DWORD*)(v2 + 1068) = -1;
  }
  else {
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt2(v6);
    }
    *(_QWORD*)v2 = &game_gmap_anonymous_CorpsMenuBase_vtable;
    *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20b4058;
    *(_DWORD*)(v2 + 1068) = -1;
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt2(v6);
    }
  }
  *(_QWORD*)(v2 + 656) = 0;
  *(_DWORD*)(v2 + 664) = 0;
  LODWORD(v35_.v35) = 0;
  *(_QWORD*)v2 = game_gmap_anonymous_CorpsUserMenu_vtable;
  *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20b3a18;
  *(_QWORD*)(v2 + 792) = *(_QWORD*)(v2 + 784);
  *(_QWORD*)(v2 + 816) = *(_QWORD*)(v2 + 808);
  GameRoutine_6e5a40((__int64*)(v2 + 784), 1u, &v35_.v35);
  v11 = *(_QWORD*)(v2 + 816);
  v12 = *(_QWORD*)(v2 + 808);
  LODWORD(v35_.v35) = 0;
  v14 = v11 - v12;
  v13 = v14 == 0;
  v15 = v14 >> 2;
  if (v13) {
    GameRoutine_6e5a40((__int64*)(v2 + 808), 1 - v15, &v35_.v35);
  }
  else if (v15 >= 2) {
    *(_QWORD*)(v2 + 816) = v12 + 4;
  }
  v17 = *(_QWORD**)(v2 + 256);
  v16 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v17 != v16) {
    if (*v17 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v17 + 8LL))(*v17);
      v16 = *(_QWORD**)(v2 + 264);
    }
    ++v17;
  }
  v18 = *(_QWORD*)(v2 + 344);
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
  v39 = *(_DWORD*)(__dynamic_cast(*(_QWORD*)(v2 + 1056), GameData_21319e8[0],
                                  &GameData_20b3420, 0) +
                   376);
  v19 = *(_QWORD*)(*GameData_212c790 + 8);
  v20 = *(_DWORD*)(v19 + 56);
  v21 = *(__int64**)(v19 + 8);
  if (v20 < 0) {
    while (1) {
      v22 = *v21;
      if (*(_QWORD*)(*v21 + 96) == 0 && *(_QWORD*)(v22 + 552) == 0) {
        break;
      }
      ++v21;
    }
  }
  else {
    v24 = *v21;
    v23 = v21 + 1;
    v22 = v24;
    if (*(_DWORD*)(v24 + 84) != v20) {
      do {
        v25 = *v23++;
        v22 = v25;
      } while (*(_DWORD*)(v25 + 84) != v20);
    }
  }
  v35_.v37 = v2;
  v35_.v35 = GameData_20b4128;
  v35_.v36 = &v39;
  v35_.v38 = &v35_.v35;
  Troop_133ed80(v22, (__int64)&v35_.v35);
  if (v35_.v38 == &v35_.v35) {
    v26 = 4;
  }
  else {
    if (v35_.v38 == nullptr) {
      goto LABEL_37;
    }
    v26 = 5;
  }
  ((__int64 (*)(__int64))(*v35_.v38)[v26])((__int64)v35_.v38);
LABEL_37:
  v27 = *(__int64**)(v2 + 232);
  v28 = *(__int64**)(v2 + 240);
  if (v27 == v28) {
  LABEL_40:
    v29 = 0;
  }
  else {
    while (1) {
      v30 = *v27++;
      v29 = v30;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v30 + 48LL))(v30) & 1) != 0) {
        break;
      }
      if (v27 == v28) {
        goto LABEL_40;
      }
    }
  }
  v31 = *(_QWORD*)(v2 + 336);
  if (v31 != v29) {
    if (v31 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 168LL))(v31);
    }
    *(_QWORD*)(v2 + 336) = v29;
    BasicMenu_16dea40(v2, 0, 1u, 0);
    v32 = *(_QWORD*)(v2 + 336);
    if (v32 == 0) {
      v33 = 4;
      goto LABEL_51;
    }
    (*(void (**)(__int64))(*(_QWORD*)v32 + 160LL))(v32);
    game_IsVibrationEnabled(
        (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
    v31 = *(_QWORD*)(v2 + 336);
  }
  v33 = 4;
  if (v31 != 0) {
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v31 + 120LL))(v31) & 1) != 0) {
      v33 = 4;
    }
    else {
      v33 = 0;
    }
  }
LABEL_51:
  *(_DWORD*)(v2 + 356) = *(_DWORD*)(v2 + 356) & 0xFFFFFFFB | v33;
  if ((v8 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  return v2;
}

__int64 game_gmap_1729d80(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
  v4 = *(_QWORD*)(a1 + 208);
  if (v4 == 0) {
    v8 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                           (__int64)"L_Decide");
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  v6 = *(_QWORD*)(a1 + 200);
  v7 = v5;
  v8 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                         (__int64)"L_Decide");
  if (v7 == 0) {
  LABEL_5:
    v7 = 0;
    v14_.v14 = 0;
    v14_.v15 = 0;
    v9 = 1;
    goto LABEL_6;
  }
  v9 = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  v14_.v14 = v6;
  v14_.v15 = v7;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
LABEL_6:
  game_menu_16dcd30_alt1(v3, (__int64)"CorpsDecide", &v14_.v14, v8);
  v10 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt2(v10);
  }
  *(_QWORD*)(v3 + 1056) = a1;
  *(_DWORD*)(v3 + 1064) = 0;
  *(_QWORD*)v3 = &game_menu_MultiMenu_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20c54c8;
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v7);
  }
  v11 = *v2;
  *(_QWORD*)v3 = game_gmap_anonymous_CorpsDecide_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20b5a08;
  v12 = fw_memory_HeapManager_Allocate_alt1(v11, 96, 16, 0);
  *(_WORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 88) = a1;
  *(_BYTE*)(v12 + 82) = 0;
  *(_WORD*)(v12 + 80) = 257;
  *(_QWORD*)v12 = game_gmap_anonymous_DecideMenuItem_vtable;
  *(_QWORD*)(v12 + 8) = 0;
  BasicMenuCursor_16e0c00((_QWORD*)v3, v12);
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v7);
  }
  return v3;
}

void game_gmap_1902530(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[152];
  *a1 = game_gmap_anonymous_ProcGmapShopGuideMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_210ef80;
  a1[132] = GameData_210f050;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[153] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1[147];
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  v7 = (_QWORD*)a1[144];
  if (v7 == a1 + 140) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[136];
  if (v9 != 0) {
    v10 = *v3;
    a1[137] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v10 + v11, v9);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

void game_gmap_1902610(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[152];
  *a1 = game_gmap_anonymous_ProcGmapShopGuideMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_210ef80;
  a1[132] = GameData_210f050;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[153] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1[147];
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  v7 = (_QWORD*)a1[144];
  if (v7 == a1 + 140) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_12:
  v9 = a1[136];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[137] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v10 + v11, v9);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, (__int64)a1);
}

#pragma GCC visibility pop
