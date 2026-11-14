#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 BasicMenu_16dea40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameHr_1789e40();
__int64 GameHr_178a080();
__int64 GameRoutine_15bd460(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1571860(__int64*, __int64, char, char, char, char);
__int64 UnitUtil_15df590(__int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_1572370(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);
__int64 ui_game_15740c0(__int64, __int64, char, __int64, char);
bool game_159e890(__int64, char, __int64);
extern __int64 (*GameData_2051b50[])();
extern __int64 (*GameData_205ac78[])();
extern __int64 (*GameData_20c5818[])();
extern __int64 (*GameData_20c5f10[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_209ddf8[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20c5fe0[])();
extern __int64 (*game_menu_GameMenu_vtable[])();
extern __int64 (*game_menu_ItemUnitMenu_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2050300[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20574c8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2058420[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_205bca0[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_209dd28[])();
extern __int64 (*game_menu_UnitGridSelectMenu_vtable[])();
extern __int64 (*game_menu_anonymous_ExchangeUnitMenu_vtable[])();
extern __int64 (*game_menu_anonymous_SkillUnitMenu_vtable[])();
extern __int64 (*game_menu_anonymous_UnitItemMenu_vtable_2057ef0[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
void UnitUtil_15df460(__int64);
__int64 game_menu_15b8b40(__int64 a1);
__int64 game_menu_15c66a0(__int64* a1);
__int64 game_menu_15c6a40(__int64* a1);
__int64 game_menu_15c9f40(__int64 a1);
_QWORD* game_menu_1789cf0(__int64 a1, __int64 a2);

__int64 game_menu_15b8b40(__int64 a1)
{
  __int64 v2;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD v18[4];
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];

  LayoutAccessor_1560070((void*)(&v20), (__int64*)(a1 + 200),
                         (__int64)"L_UnitInfo");
  v2 = *(_QWORD*)(a1 + 360);
  v18[0] = GameData_2051b50;
  v18[1] = a1;
  v19 = v18;
  v3 = game_159e890(v2, 0, (__int64)v18);
  if (v21 != 0) {
    v4 = std___1___shared_weak_count_lock(v21);
    if (v4 != 0) {
      v5 = v4;
      if (v20 != 0) {
        ui_game_15740c0(v20, v2, 0, 0, v3);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  if (v19 == v18) {
    v6 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_12;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v19 + v6))((__int64)v19);
LABEL_12:
  if (v21 != 0) {
    std___1___shared_weak_count___release_weak(v21);
  }
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1120, 16, 0);
  v8 = *(_BYTE*)(a1 + 376);
  v9 = *(_QWORD*)(a1 + 208);
  if (v9 != 0) {
    v10 = std___1___shared_weak_count_lock(v9);
    if (v10 != 0) {
      v11 = *(_QWORD*)(a1 + 200);
    }
    else {
      v11 = 0;
    }
  }
  else {
    v11 = 0;
    v10 = 0;
  }
  v12 = ui_LayoutAccessor_FindPartsLayout(a1 + 200, "L_EquipList");
  v13 = *(_QWORD*)(a1 + 360);
  v22[0] = v11;
  v22[1] = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_15bd460(v7, a1, v22, v12, v13);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  else {
    GameRoutine_15bd460(v7, a1, v22, v12, v13);
  }
  *(_BYTE*)(v7 + 1080) = v8;
  *(_QWORD*)(v7 + 1088) = 0;
  *(_QWORD*)(v7 + 1096) = 0;
  *(_QWORD*)(v7 + 1104) = 0;
  *(_QWORD*)(v7 + 336) = 0;
  *(_QWORD*)v7 = game_menu_anonymous_SkillUnitMenu_vtable;
  *(_QWORD*)(v7 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2050300;
  v15 = *(_QWORD**)(v7 + 256);
  v14 = *(_QWORD**)(v7 + 264);
  while (v15 != v14) {
    if (*v15 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v15 + 8LL))(*v15);
      v14 = *(_QWORD**)(v7 + 264);
    }
    ++v15;
  }
  v16 = *(_QWORD*)(v7 + 344);
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
    *(_QWORD*)(v7 + 344) = 0;
  }
  *(_QWORD*)(v7 + 264) = *(_QWORD*)(v7 + 256);
  *(_QWORD*)(v7 + 240) = *(_QWORD*)(v7 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v7 + 1024LL))(v7);
  (*(void (**)(__int64))(*(_QWORD*)v7 + 1032LL))(v7);
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  return v7;
}

__int64 game_menu_15c66a0(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64* v26;
  __int64 v27;

  LayoutAccessor_1560070((void*)(&v26), a1 + 25, (__int64)"L_UnitInfoL");
  if (v27 != 0) {
    v2 = std___1___shared_weak_count_lock(v27);
    v3 = v26;
    if (v27 != 0) {
      std___1___shared_weak_count___release_weak(v27);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        goto LABEL_23;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v5 = std___1___shared_weak_count_lock(v2);
      if (v5 != 0) {
        v6 = v5;
        ui_1572370(v3, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v7 = a1[45];
      v8 = std___1___shared_weak_count_lock(v2);
      if (v8 != 0) {
        v9 = v8;
        LayoutAccessor_1571860(v3, v7, 1, 0, 0, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock(v2);
      if (v10 != 0) {
        v11 = v10;
        LayoutAccessor_1562cf0(v3, "List00");
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
LABEL_23:
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1088, 16, 0);
  v13 = a1[26];
  if (v13 == 0) {
    v21 = ui_LayoutAccessor_FindPartsLayout(a1 + 25, "L_EquipListL");
    v18 = a1[45];
    v19 = v21;
    goto LABEL_31;
  }
  v14 = std___1___shared_weak_count_lock(v13);
  v15 = a1[25];
  v16 = v14;
  v17 = ui_LayoutAccessor_FindPartsLayout(a1 + 25, "L_EquipListL");
  v18 = a1[45];
  v19 = v17;
  if (v16 == 0) {
  LABEL_31:
    v26 = nullptr;
    v27 = 0;
    GameRoutine_15bd460(v12, a1, &v26, v19, v18);
    v16 = 0;
    *(_DWORD*)(v12 + 1080) = 0;
    v20 = 1;
    goto LABEL_32;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  v26 = (__int64*)v15;
  v27 = v16;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_15bd460(v12, a1, &v26, v17, v18);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  *(_DWORD*)(v12 + 1080) = 0;
  *(_QWORD*)v12 = game_menu_ItemUnitMenu_vtable;
  *(_QWORD*)(v12 + 176) = game_menu_MenuInput_InputUnknown00_ptr_205bca0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v20 = 0;
LABEL_32:
  *(_QWORD*)(v12 + 336) = 0;
  *(_QWORD*)v12 = game_menu_anonymous_ExchangeUnitMenu_vtable;
  *(_QWORD*)(v12 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20574c8;
  *(_BYTE*)(v12 + 1084) = 1;
  v23 = *(_QWORD**)(v12 + 256);
  v22 = *(_QWORD**)(v12 + 264);
  while (v23 != v22) {
    if (*v23 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v23 + 8LL))(*v23);
      v22 = *(_QWORD**)(v12 + 264);
    }
    ++v23;
  }
  v24 = *(_QWORD*)(v12 + 344);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(v12 + 344) = 0;
  }
  *(_QWORD*)(v12 + 264) = *(_QWORD*)(v12 + 256);
  *(_QWORD*)(v12 + 240) = *(_QWORD*)(v12 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1024LL))(v12);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1032LL))(v12);
  if ((v20 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  return v12;
}

__int64 game_menu_15c6a40(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64* v31;
  __int64 v32;

  LayoutAccessor_1560070((void*)(&v31), a1 + 25, (__int64)"L_UnitInfoR");
  if (v32 != 0) {
    v2 = std___1___shared_weak_count_lock(v32);
    v3 = v31;
    if (v32 != 0) {
      std___1___shared_weak_count___release_weak(v32);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        goto LABEL_23;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v5 = std___1___shared_weak_count_lock(v2);
      if (v5 != 0) {
        v6 = v5;
        ui_1572370(v3, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v7 = a1[46];
      v8 = std___1___shared_weak_count_lock(v2);
      if (v8 != 0) {
        v9 = v8;
        LayoutAccessor_1571860(v3, v7, 1, 0, 0, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock(v2);
      if (v10 != 0) {
        v11 = v10;
        LayoutAccessor_1562cf0(v3, "List01");
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      std___1___shared_weak_count___release_weak(v2);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
LABEL_23:
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1088, 16, 0);
  v13 = a1[26];
  if (v13 == 0) {
    v21 = ui_LayoutAccessor_FindPartsLayout(a1 + 25, "L_EquipListR");
    v18 = a1[46];
    v19 = v21;
    goto LABEL_31;
  }
  v14 = std___1___shared_weak_count_lock(v13);
  v15 = a1[25];
  v16 = v14;
  v17 = ui_LayoutAccessor_FindPartsLayout(a1 + 25, "L_EquipListR");
  v18 = a1[46];
  v19 = v17;
  if (v16 == 0) {
  LABEL_31:
    v31 = nullptr;
    v32 = 0;
    GameRoutine_15bd460(v12, a1, &v31, v19, v18);
    v16 = 0;
    *(_DWORD*)(v12 + 1080) = 0;
    v20 = 1;
    goto LABEL_32;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  v31 = (__int64*)v15;
  v32 = v16;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_15bd460(v12, a1, &v31, v17, v18);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  *(_DWORD*)(v12 + 1080) = 0;
  *(_QWORD*)v12 = game_menu_ItemUnitMenu_vtable;
  *(_QWORD*)(v12 + 176) = game_menu_MenuInput_InputUnknown00_ptr_205bca0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v20 = 0;
LABEL_32:
  *(_BYTE*)(v12 + 1084) = 0;
  *(_QWORD*)(v12 + 336) = 0;
  *(_QWORD*)v12 = game_menu_anonymous_ExchangeUnitMenu_vtable;
  *(_QWORD*)(v12 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20574c8;
  v23 = *(_QWORD**)(v12 + 256);
  v22 = *(_QWORD**)(v12 + 264);
  while (v23 != v22) {
    if (*v23 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v23 + 8LL))(*v23);
      v22 = *(_QWORD**)(v12 + 264);
    }
    ++v23;
  }
  v24 = *(_QWORD*)(v12 + 344);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(v12 + 344) = 0;
  }
  *(_QWORD*)(v12 + 264) = *(_QWORD*)(v12 + 256);
  *(_QWORD*)(v12 + 240) = *(_QWORD*)(v12 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1024LL))(v12);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 1032LL))(v12);
  v25 = *(_QWORD*)(v12 + 336);
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 168LL))(v25);
  }
  *(_QWORD*)(v12 + 336) = 0;
  BasicMenu_16dea40(v12, 1, 0, 0);
  v26 = *(_QWORD*)(v12 + 336);
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 160LL))(v26);
    game_IsVibrationEnabled(game_g_game_setting + 712);
    v27 = *(_QWORD*)(v12 + 336);
    v28 = 6;
    if (v27 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v27 + 120LL))(v27) & 1) != 0) {
        v28 = 6;
      }
      else {
        v28 = 2;
      }
    }
  }
  else {
    v28 = 6;
  }
  v29 = *(_DWORD*)(v12 + 356);
  *(_BYTE*)(v12 + 648) = 0;
  *(_DWORD*)(v12 + 356) = v28 | v29 & 0xFFFFFFF9;
  if ((v20 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  return v12;
}

__int64 game_menu_15c9f40(__int64 a1)
{
  __int64 v2;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[2];

  if (*(_BYTE*)(a1 + 388) == 1) {
    v2 = *(_QWORD*)(a1 + 360);
    v22[0] = GameData_205ac78;
    v22[1] = a1;
    v23 = v22;
    v3 = game_159e890(v2, 0, (__int64)v22);
    if (v23 == v22) {
      v4 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_8;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v23 + v4))((__int64)v23);
  }
  else {
    v3 = true;
  }
LABEL_8:
  LayoutAccessor_1560070((void*)(&v20), (__int64*)(a1 + 200),
                         (__int64)"L_UnitInfo");
  if (v21 != 0) {
    v5 = *(_QWORD*)(a1 + 360);
    v6 = std___1___shared_weak_count_lock(v21);
    if (v6 != 0) {
      v7 = v6;
      if (v20 != 0) {
        ui_game_15740c0(v20, v5, 0, 0, v3);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    if (v21 != 0) {
      std___1___shared_weak_count___release_weak(v21);
    }
  }
  v8 = *(_DWORD*)(a1 + 376) != 2;
  v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 1088, 16, 0);
  v10 = *(_QWORD*)(a1 + 208);
  if (v10 != 0) {
    v11 = std___1___shared_weak_count_lock(v10);
    if (v11 != 0) {
      v12 = *(_QWORD*)(a1 + 200);
    }
    else {
      v12 = 0;
    }
  }
  else {
    v12 = 0;
    v11 = 0;
  }
  v13 = ui_LayoutAccessor_FindPartsLayout(a1 + 200, "L_EquipList");
  v14 = *(_QWORD*)(a1 + 360);
  v15 = *(_DWORD*)(a1 + 376);
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    v24[0] = v12;
    v24[1] = v11;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_15bd460(v9, a1, v24, v13, v14);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
    *(_DWORD*)(v9 + 1080) = v8;
    *(_QWORD*)v9 = game_menu_ItemUnitMenu_vtable;
    *(_QWORD*)(v9 + 176) = game_menu_MenuInput_InputUnknown00_ptr_205bca0;
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
  else {
    v24[0] = v12;
    v24[1] = 0;
    GameRoutine_15bd460(v9, a1, v24, v13, v14);
    *(_DWORD*)(v9 + 1080) = v8;
  }
  *(_DWORD*)(v9 + 1084) = v15;
  *(_QWORD*)(v9 + 336) = 0;
  *(_QWORD*)v9 = game_menu_anonymous_UnitItemMenu_vtable_2057ef0;
  *(_QWORD*)(v9 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2058420;
  v17 = *(_QWORD**)(v9 + 256);
  v16 = *(_QWORD**)(v9 + 264);
  while (v17 != v16) {
    if (*v17 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v17 + 8LL))(*v17);
      v16 = *(_QWORD**)(v9 + 264);
    }
    ++v17;
  }
  v18 = *(_QWORD*)(v9 + 344);
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    *(_QWORD*)(v9 + 344) = 0;
  }
  *(_QWORD*)(v9 + 264) = *(_QWORD*)(v9 + 256);
  *(_QWORD*)(v9 + 240) = *(_QWORD*)(v9 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 1024LL))(v9);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 1032LL))(v9);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  return v9;
}

_QWORD* game_menu_1789cf0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v11_.v11 = 0;
  v11_.v12 = 0;
  game_menu_16dcd30(a1, a2, &v11_.v11, 0);
  v3 = v11_.v12;
  *(_QWORD*)a1 = game_menu_GameMenu_vtable;
  *(_QWORD*)(a1 + 176) = game_menu_MenuInput_InputUnknown00_ptr_209dd28;
  *(_QWORD*)(a1 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_209ddf8;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  *(_QWORD*)a1 = game_menu_UnitGridSelectMenu_vtable;
  *(_QWORD*)(a1 + 176) = GameData_20c5f10;
  *(_QWORD*)(a1 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20c5fe0;
  UnitUtil_15df460(a1 + 1072);
  *(_BYTE*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  v9_.v9[2] = 0;
  v9_.v9[3] = a1;
  v7_.v7[2] = 0;
  v7_.v7[3] = a1;
  v9_.v9[0] = GameData_20c5818;
  v9_.v9[1] = GameHr_1789e40;
  v7_.v8 = v7_.v7;
  v9_.v10 = v9_.v9;
  v7_.v7[0] = GameData_20c5818;
  v7_.v7[1] = GameHr_178a080;
  UnitUtil_15df590(a1 + 1072, (__int64)v9_.v9, (__int64)v7_.v7);
  if (v7_.v8 == v7_.v7) {
    v4 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v4))((__int64)v7_.v8);
LABEL_9:
  result = v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v6 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v9_.v10 + v6))((__int64)v9_.v10);
}

#pragma GCC visibility pop
