#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16de1f0(_QWORD, _QWORD, _QWORD);
__int64 BasicMenu_16dd8b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_20();
__int64 GameRoutine_717660(_QWORD);
__int64 GameRoutine_7209e0(_QWORD);
__int64 Impl_717b40(_QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_21227f8[])();
extern __int64 (
    *game_facility_anonymous_ProcObeliskDepositoryRideMenu_vtable[])();
extern __int64 (*game_gmap_GmapTalkMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb76d0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_1fb7600[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2122728[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d6a8;
extern __int64* GameData_2132018;
extern __int64 GameData_212cf88[4];
extern __int64 GameData_212cfa0;
extern __int64 GameData_21f42d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 game_data_9cf4a0(__int64 a1);
__int64 game_data_9cf710(_QWORD* a1);
__int64 game_data_9cf800(_QWORD* a1);
__int64 game_data_19e13c0(__int64 a1);

__int64 game_data_9cf4a0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1088, 16, 0);
  v19 = 0;
  v20 = 0;
  game_menu_16dcd30(v2, "DeployPoolMenu", &v19, 0);
  v3 = GameData_212d6a8;
  v4 = v20;
  *(_QWORD*)v2 = GameData_212d6a8 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 143;
  *(_QWORD*)(v2 + 1056) = v3 + 169;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = GameData_2132018;
  *(_QWORD*)(v2 + 1064) = 0;
  *(_QWORD*)v2 = v5 + 2;
  *(_QWORD*)(v2 + 1056) = v5 + 178;
  *(_QWORD*)(v2 + 176) = v5 + 152;
  *(_BYTE*)(v2 + 1078) = 1;
  BasicMenuCursor_16de1f0(v2, 8, 0);
  v6 = BasicMenu_16dd8b0(v2, 6, 0);
  *(_QWORD*)v2 = game_facility_anonymous_ProcObeliskDepositoryRideMenu_vtable;
  *(_QWORD*)(v2 + 176) = game_menu_MenuInput_InputUnknown00_ptr_1fb7600;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb76d0;
  GameRoutine_717660(v6);
  v7 = GameData_212cfa0;
  v8 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cfa0);
  v9 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cfa0 + 8);
  v10 = ((v9 - v8) << 6) - 1;
  if (v9 == v8) {
    v10 = 0;
  }
  v11 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  v12 = (_QWORD*)GameData_212cf88[0];
  v13 = *(_QWORD*)GameData_212cf88[0];
  v14 = *(_QWORD*)((char*)GameRoutine_20 + GameData_212cfa0 + 8) +
        *(_QWORD*)((char*)GameRoutine_20 + GameData_212cfa0);
  if (v10 == v14) {
    GameRoutine_7209e0(GameData_212cfa0);
    v8 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v7);
    v14 = *(_QWORD*)((char*)GameRoutine_20 + v7 + 8) +
          *(_QWORD*)((char*)GameRoutine_20 + v7);
  }
  *(_QWORD*)(*(_QWORD*)(v8 + 8 * (v14 >> 9)) + 8 * (v14 & 0x1FF)) = v13;
  *v12 = v11 + 2480;
  ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v7);
  BasicMenuCursor_16de1f0(v2, 2, 0);
  ProcInst_657850(v2, GameData_212c730, "ProcObeliskDepositoryRideMenu", 1, a1);
  v16 = *(_QWORD**)(v2 + 256);
  v15 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v16 != v15) {
    if (*v16 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v16 + 8LL))(*v16);
      v15 = *(_QWORD**)(v2 + 264);
    }
    ++v16;
  }
  v17 = *(_QWORD*)(v2 + 344);
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
}

__int64 game_data_9cf710(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = a1;
  *a1 = game_facility_anonymous_ProcObeliskDepositoryRideMenu_vtable;
  v2 = GameData_212cfa0;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_1fb7600;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb76d0;
  v4 = *(_QWORD*)((char*)GameRoutine_20 + v2);
  v3 = *(_QWORD*)((char*)GameRoutine_20 + v2 + 8);
  v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v2);
  v5 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v2 + 8);
  v7 = v3 - 1;
  v8 = v5 == v6;
  v9 = v3 + v4;
  v10 = ((v5 - v6) << 6) - 1;
  v11 = *(_QWORD*)(v6 + 8 * ((unsigned __int64)(v7 + v4) >> 9));
  if (v8) {
    v10 = 0;
  }
  v12 = *(_QWORD*)(v11 + 8 * ((v7 + v4) & 0x1FF));
  *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v2) = v7;
  GameData_21f42d0 = v12;
  if ((unsigned __int64)(v10 - v9 + 1) >= 0x400) {
    v13 = *(_QWORD*)(v5 - 8);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      a1 = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
      v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + v2);
    }
    *(_QWORD*)((char*)((__int128*)0x10LL) + v2) = v5 - 8;
  }
  Impl_717b40(a1);
  return game_menu_BasicMenu_Destroy_BasicMenu(v1);
}

__int64 game_data_9cf800(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = a1;
  *a1 = game_facility_anonymous_ProcObeliskDepositoryRideMenu_vtable;
  v2 = GameData_212cfa0;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_1fb7600;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_1fb76d0;
  v4 = *(_QWORD*)((char*)GameRoutine_20 + v2);
  v3 = *(_QWORD*)((char*)GameRoutine_20 + v2 + 8);
  v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v2);
  v5 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v2 + 8);
  v7 = v3 - 1;
  v8 = v5 == v6;
  v9 = v3 + v4;
  v10 = ((v5 - v6) << 6) - 1;
  v11 = *(_QWORD*)(v6 + 8 * ((unsigned __int64)(v7 + v4) >> 9));
  if (v8) {
    v10 = 0;
  }
  v12 = *(_QWORD*)(v11 + 8 * ((v7 + v4) & 0x1FF));
  v13 = (_QWORD*)GameData_212cf88[0];
  *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v2) = v7;
  *v13 = v12;
  v14 = fw_memory_g_heap_manager_ptr;
  if ((unsigned __int64)(v10 - v9 + 1) >= 0x400) {
    v15 = *(_QWORD*)(v5 - 8);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      a1 = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
      v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + v2);
    }
    *(_QWORD*)((char*)((__int128*)0x10LL) + v2) = v5 - 8;
  }
  Impl_717b40(a1);
  game_menu_BasicMenu_Destroy_BasicMenu(v1);
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
    v17 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v17, v1);
}

__int64 game_data_19e13c0(__int64 a1)
{

#pragma clang fp contract(on)

  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = (__int64*)*v4++;
      v6 = v7;
      if (*((_DWORD*)v7 + 21) == v3) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = nullptr;
    goto LABEL_8;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v6 = (__int64*)*v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && v6[69] == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v8 = *((_DWORD*)v6 + 135);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = v6[3];
    v12 = v6[4] - v11;
    v13 = (__int64*)(v11 + 8LL * (unsigned int)v10);
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  v14 = *v6;
  if (*v6 == 0) {
    return 0;
  }
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1200, 16, 0);
  v22 = 0;
  v23 = 0;
  game_menu_16dcd30(v15, "BelongingMenu", &v22, 0);
  v16 = GameData_212d6a8;
  v17 = v23;
  *(_QWORD*)v15 = GameData_212d6a8 + 2;
  *(_QWORD*)(v15 + 176) = v16 + 143;
  *(_QWORD*)(v15 + 1056) = v16 + 169;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  *(_QWORD*)(v15 + 1104) = 0;
  *(_QWORD*)(v15 + 1096) = 0;
  *(_QWORD*)(v15 + 1064) = 0;
  *(_QWORD*)(v15 + 1072) = 0;
  *(_QWORD*)(v15 + 1080) = 0;
  *(_QWORD*)(v15 + 1088) = v15 + 1096;
  *(_QWORD*)(v15 + 1112) = 0;
  *(_QWORD*)(v15 + 1120) = 0;
  *(_QWORD*)(v15 + 1128) = 0;
  *(_QWORD*)(v15 + 1136) = 0;
  *(_QWORD*)(v15 + 1152) = 0;
  *(_QWORD*)(v15 + 1160) = 0;
  *(_QWORD*)(v15 + 1168) = 0;
  *(_QWORD*)(v15 + 1184) = v14;
  *(_DWORD*)(v15 + 1144) = 1065353216;
  *(_QWORD*)(v15 + 1176) = "MID_GmapMenu_Talk";
  *(_QWORD*)v15 = game_gmap_GmapTalkMenu_vtable;
  *(_QWORD*)(v15 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2122728;
  *(_QWORD*)(v15 + 1056) = GameData_21227f8;
  ProcInst_657850(v15, GameData_212c730, "GmapTalkMenu", 1, a1);
  v19 = *(_QWORD**)(v15 + 256);
  v18 = *(_QWORD**)(v15 + 264);
  *(_QWORD*)(v15 + 336) = 0;
  while (v19 != v18) {
    if (*v19 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v19 + 8LL))(*v19);
      v18 = *(_QWORD**)(v15 + 264);
    }
    ++v19;
  }
  v20 = *(_QWORD*)(v15 + 344);
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
    *(_QWORD*)(v15 + 344) = 0;
  }
  *(_QWORD*)(v15 + 264) = *(_QWORD*)(v15 + 256);
  *(_QWORD*)(v15 + 240) = *(_QWORD*)(v15 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v15 + 1024LL))(v15);
  (*(void (**)(__int64))(*(_QWORD*)v15 + 1032LL))(v15);
  return v15;
}

#pragma GCC visibility pop
