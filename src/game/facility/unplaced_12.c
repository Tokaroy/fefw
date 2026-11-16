#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_c18930(_QWORD* result, _QWORD*);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__attribute__((swiftcall)) void game_103a420(PSEUDO_X8);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 BasicMenuCursor_16de1f0(__int64*, int, int);
__int64 BasicMenu_16dd8b0(__int64, int, int);
__int64 GameRoutine_1499720(__int64 result);
__int64 GameRoutine_15b59e0(__int64);
__int64 GameRoutine_15b5f20(__int64);
__int64 GameRoutine_195a5c0();
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_8a29c0(__int64 result, __int64);
__int64 GameRoutine_a85120(__int64, unsigned __int8*);
__int64 ObjectTransparent_f38dc0(__int64 result);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 SceneManager_138ea40(__int64*, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_menu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPartsLayout(__int64*, __int64);
bool game_Unit_IsUnlocked(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_2032e88[])();
extern __int64 (*GameData_2032f08[])();
extern __int64 (*GameData_20a5a28[])();
extern __int64 (*GameData_20a5b18[])();
extern __int64 (*GameData_2130fd8)();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcJobIntro_vtable[])();
extern __int64 (*game_facility_FacilitySeq_Unknown00_ptr_1fbd160)();
extern __int64 (
    *game_facility_anonymous_CmdBtlUnitSelectMenuItem_vtable_20a80c0[])();
extern __int64 (*game_facility_anonymous_DecideMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_IndividualDecideMenu_vtable[])();
extern __int64 (*game_facility_anonymous_IndividualMultiMenu_vtable[])();
extern __int64 (*game_facility_anonymous_ProcMaterialItemSelectMenu_vtable[])();
extern __int64 (*game_facility_anonymous_RelianceMemoryChildMenu_vtable[])();
extern __int64 (*game_facility_anonymous_UnitSelectMenuItem_vtable_20a7dc8[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_2124910[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20a5958[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_20c54c8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2117468[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2117de8[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr_2124840[])();
extern __int64 (*game_menu_MultiMenu_vtable)();
extern __int64* GameData_212d2b8;
extern __int64* GameData_212d6a8;
extern __int64 GameData_212c610;
extern __int64 GameData_212c638;
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2131908[20];
extern __int64 GameData_2131910[19];
extern __int64 GameData_2131c18[55];
extern __int64 GameData_2131c90[40];
extern __int64 GameData_2132040[2];
extern __int64 GameData_21f61c0;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern int GameData_21f61c8;
long double GameRoutine_138b340(__int64, __int64, __int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void GameRoutine_1015560(__int64);
void GameRoutine_1499b60();
void GameRoutine_658c00(__int64*);
void GameRoutine_a853b0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) String_60a1d0();
void game_menu_BasicMenu_Destroy_BasicMenu(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_facility_a0f9b0(__int64 a1);
void game_facility_a0fa70(__int64 a1);
void game_facility_138b860(__int64 a1, __int64 a2);
__int64 game_facility_1700e60(__int64 a1, __int64 a2, char a3, __int64 a4);
void game_facility_17018c0(_QWORD* a1);
__int64 game_facility_17078c0(__int64 a1, __int64 a2);
__int64 game_facility_1934710(__int64 a1);
void game_facility_19e97b0(_QWORD* a1);
void game_facility_19e9950(_QWORD* a1);

void game_facility_a0f9b0(__int64 a1)
{
  __int64 v2;
  int v3;

  *(_QWORD*)a1 = game_anonymous_ProcJobIntro_vtable;
  *(_QWORD*)(a1 + 152) = &game_facility_FacilitySeq_Unknown00_ptr_1fbd160;
  GameRoutine_195a5c0();
  v2 = GameData_2241720;
  if (GameData_2241720 != 0) {
    v3 = *(_DWORD*)(GameData_2241720 + 1736) - 1;
    *(_DWORD*)(GameData_2241720 + 1736) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 1728) + 8LL))(v2 + 1728);
    }
  }
  if (--GameData_21f61c8 == 0) {
    (*(void (**)(__int64))(GameData_21f61c0 + 8))((__int64)&GameData_21f61c0);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

void game_facility_a0fa70(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  *(_QWORD*)a1 = game_anonymous_ProcJobIntro_vtable;
  *(_QWORD*)(a1 + 152) = &game_facility_FacilitySeq_Unknown00_ptr_1fbd160;
  GameRoutine_195a5c0();
  v2 = GameData_2241720;
  if (GameData_2241720 != 0) {
    v3 = *(_DWORD*)(GameData_2241720 + 1736) - 1;
    *(_DWORD*)(GameData_2241720 + 1736) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 1728) + 8LL))(v2 + 1728);
    }
  }
  if (--GameData_21f61c8 == 0) {
    (*(void (**)(__int64))(GameData_21f61c0 + 8))((__int64)&GameData_21f61c0);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                a1);
}

void game_facility_138b860(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char v17;
  __int64 v18;
  _BYTE* v19;
  char* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  long double v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  struct {
    __int64 (**v48)();
    __int64 (*v49)();
    _BYTE* v50;
    char v51;
    char gap25_[7];
    __int64 (***v52)();
    __int64 v53;
    char gap48_[8];
    unsigned __int64 v54[3];
    __int64 v55;
    __int64 v56;
    char gap96_[8];
    char v57;
    char gap105_[7];
    _QWORD v58[2];
    _BYTE* v59;
    __int64 (**v60)();
    __int64 (*v61)();
    _BYTE* v62;
    int v63;
    int v64;
    char gap168_[8];
    _QWORD v65[7];
    char v66;
    char gap233_[87];
    __int64 v67;
    __int64 v68;
    char gap336_[24];
    __int64 v69[6];
    char gap408_[1];
    char v70;
  } f_;

  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_1499720(*(_QWORD*)(a2 + 64)),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_1a0ba50((__int64)f_.v58, 0, 0x140u),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v70 = 0;
  v4 = *((_QWORD*)GameData_212c540 + 1);
  f_.v67 = *(_QWORD*)GameData_212c540;
  f_.v68 = v4;
  if (*(_QWORD*)(*(_QWORD*)(a2 + 64) + 112LL) != 0) {
    v5 = *(const char**)(*(_QWORD*)(a2 + 64) + 112LL);
  }
  else {
    v5 = &GameData_1a9f09e;
  }
  v6 = GameRoutine_1a09c70(v5),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_125;
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v49 = (__int64 (*)())v7,
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v50 = v8;
    f_.v48 = (__int64 (**)(void))(v9 | 1),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    LOBYTE(f_.v48) = 2 * v6;
    v8 = (char*)&f_.v48 + 1;
    if (v6 == 0) {
      goto LABEL_13;
    }
  }
  GameRoutine_1a0b940((__int64)v8, (__int64)v5, v7),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_13:
  v10 = f_.v58[0];
  v8[v7] = 0;
  if ((v10 & 1) != 0 && f_.v59 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)f_.v59),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  f_.v58[0] = f_.v48;
  f_.v58[1] = f_.v49;
  f_.v59 = f_.v50;
  if (*(_QWORD*)(*(_QWORD*)(a2 + 64) + 120LL) != 0) {
    v12 = *(const char**)(*(_QWORD*)(a2 + 64) + 120LL);
  }
  else {
    v12 = &GameData_1a9f09e;
  }
  v13 = GameRoutine_1a09c70(v12),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_125:
    String_60a1d0(),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v16, 16, 0),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v49 = (__int64 (*)())v14,
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v50 = v15;
    f_.v48 = (__int64 (**)(void))(v16 | 1),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    LOBYTE(f_.v48) = 2 * v13;
    v15 = (char*)&f_.v48 + 1;
    if (v13 == 0) {
      goto LABEL_30;
    }
  }
  GameRoutine_1a0b940((__int64)v15, (__int64)v12, v14),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_30:
  v17 = (char)f_.v60;
  v15[v14] = 0;
  if ((v17 & 1) != 0 && f_.v62 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  (__int64)f_.v62),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  f_.v60 = f_.v48;
  f_.v61 = f_.v49;
  f_.v62 = f_.v50;
  if (*(_BYTE*)(a2 + 72) == 1 && *(_BYTE*)(*(_QWORD*)(a2 + 64) + 138LL) != 0) {
    if (((unsigned __int8)f_.v60 & 1) != 0) {
      v19 = f_.v62;
      f_.v61 = nullptr;
    }
    else {
      v19 = (char*)&f_.v60 + 1;
      LOBYTE(f_.v60) = 0;
    }
    *v19 = 0;
  }
  game_103a420((void*)((__int64)&f_.v48)),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (f_.v57 == 1) {
    if ((f_.v69[0] & 1) != 0) {
      if ((f_.v54[0] & 1) != 0) {
        v20 = (char*)f_.v54[2];
      }
      else {
        v20 = (char*)f_.v54 + 1;
      }
      if ((f_.v54[0] & 1) != 0) {
        v21 = f_.v54[1];
      }
      else {
        v21 = (unsigned __int64)LOBYTE(f_.v54[0]) >> 1;
      }
      SpineModel_64dde0(f_.v69, (__int64)v20, v21),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if ((f_.v54[0] & 1) != 0) {
      GameRoutine_64df20(f_.v69, f_.v54[2], f_.v54[1]),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      qmemcpy(f_.v69, f_.v54, 24);
    }
  }
  if (f_.v57 == 1) {
    v22 = f_.v55;
    if (f_.v55 != 0) {
      v23 = f_.v56;
      if (f_.v55 == f_.v56) {
        goto LABEL_65;
      }
      v24 = f_.v56;
      v25 = fw_memory_g_heap_manager_ptr;
      do {
        v26 = *(_BYTE*)(v24 - 24);
        v24 -= 24;
        if ((v26 & 1) != 0) {
          v27 = *(_QWORD*)(v23 - 8);
          if (v27 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
              v28 = 128;
            }
            else {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v28, v27),
                v39 =
                    COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v44 =
                    COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v23 = v24;
      } while (v24 != v22);
      f_.v56 = v22;
      v22 = f_.v55;
      if (f_.v55 != 0) {
      LABEL_65:
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v22),
            v39 = COERCE_AS(__typeof__(v39),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v44 = COERCE_AS(__typeof__(v44),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    if ((f_.v54[0] & 1) != 0 && f_.v54[2] != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, f_.v54[2]),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((f_.v51 & 1) != 0 && f_.v53 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, f_.v53),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (((unsigned __int8)f_.v48 & 1) != 0 && f_.v50 != nullptr) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)f_.v50),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if (*(_BYTE*)(a2 + 8) == 1) {
    f_.v64 = 1;
  }
  f_.v63 = 1;
  if ((f_.v66 & 1) == 0) {
    f_.v66 = 1;
  }
  f_.v65[6] = 22;
  f_.v48 = GameData_2032e88;
  f_.v49 = (__int64 (*)())a1,
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v52 = &f_.v48;
  GameRoutine_c18930(&f_.v48, f_.v65),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (f_.v52 == &f_.v48) {
    v33 = 4;
  }
  else {
    if (f_.v52 == nullptr) {
      goto LABEL_92;
    }
    v33 = 5;
  }
  ((__int64 (*)(__int64))(*f_.v52)[v33])((__int64)f_.v52),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_92:
  GameRoutine_a85120(*(_QWORD*)GameData_212c638, (unsigned __int8*)f_.v58),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = GameRoutine_138b340(a1, (__int64)f_.v58, 0),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v35 = *(_QWORD*)(a2 + 48);
  if (v35 != 0) {
    if (*(_BYTE*)(a1 + 132) == 1) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v35 + 48LL))(v35, v34),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v36 = *(_QWORD*)(a1 + 144);
      v37 = a2 + 16;
      if (v36 >= *(_QWORD*)(a1 + 152)) {
        v38 = SceneManager_138ea40((__int64*)(a1 + 136), v37),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        if (v35 == v37) {
          *(_QWORD*)(v36 + 32) = v36;
          (*(void (**)(_QWORD, unsigned __int64, long double))(
              **(_QWORD**)(a2 + 48) + 24LL))(*(_QWORD*)(a2 + 48), v36, v34),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          *(_QWORD*)(v36 + 32) = (*(__int64 (**)(__int64, long double))(
              *(_QWORD*)v35 + 16LL))(v35, v34),
                           v39 = COERCE_AS(
                               __typeof__(v39),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                           v44 = COERCE_AS(
                               __typeof__(v44),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v38 = v36 + 48;
      }
      *(_QWORD*)(a1 + 144) = v38;
    }
  }
  f_.v48 = (__int64 (**)(void))(GameData_212d2b8 + 2),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v49 = GameData_2130fd8;
  f_.v52 = &f_.v48;
  if (*(_BYTE*)(a1 + 132) == 1) {
    GameRoutine_1499b60(),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v40 = *(_QWORD*)(a1 + 144);
    if (v40 >= *(_QWORD*)(a1 + 152)) {
      v41 = SceneManager_138ea40((__int64*)(a1 + 136), (__int64)&f_.v48),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      *(_QWORD*)(v40 + 32) = v40;
      ((void (*)(__int64 (***)(void), unsigned __int64, long double))(
          *f_.v52)[3])(f_.v52, v40, v34),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v41 = v40 + 48;
    }
    *(_QWORD*)(a1 + 144) = v41;
  }
  if (f_.v52 == &f_.v48) {
    v42 = 4;
  }
  else {
    if (f_.v52 == nullptr) {
      goto LABEL_113;
    }
    v42 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*f_.v52)[v42])(f_.v52, v39),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_113:
  f_.v48 = GameData_2032f08;
  v43 = *(unsigned __int8*)(a1 + 132);
  f_.v52 = &f_.v48;
  if (v43 == 1) {
    ObjectTransparent_f38dc0(*(_QWORD*)GameData_212c7d8[0]),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v45 = *(_QWORD*)(a1 + 144);
    if (v45 >= *(_QWORD*)(a1 + 152)) {
      v46 = SceneManager_138ea40((__int64*)(a1 + 136), (__int64)&f_.v48),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      *(_QWORD*)(v45 + 32) = v45;
      ((void (*)(__int64 (***)(void), unsigned __int64))(*f_.v52)[3])(f_.v52,
                                                                      v45),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v46 = v45 + 48;
    }
    *(_QWORD*)(a1 + 144) = v46;
  }
  if (f_.v52 == &f_.v48) {
    v47 = 4;
    goto LABEL_123;
  }
  if (f_.v52 != nullptr) {
    v47 = 5;
  LABEL_123:
    ((void (*)(__int64 (***)(void), __int64))(*f_.v52)[v47])(f_.v52, v44),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_a853b0((__int64)f_.v58),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

__int64 game_facility_1700e60(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5;
  _BYTE* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _DWORD* v15;
  unsigned __int64 v16;
  _DWORD* v17;
  __int64 v18;
  signed __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  signed __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  _DWORD* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  signed __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  _DWORD* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  signed __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  _DWORD* v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  signed __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  _DWORD* v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  signed __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  _BYTE* v87;
  __int64 v88;
  _QWORD* v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  struct {
    _BYTE v94[32];
    _BYTE* v95;
  } v94_;
  struct {
    _BYTE v96[32];
    _BYTE* v97;
  } v96_;
  struct {
    __int64 (**v98)();
    int* v99;
    char gap112_[16];
    __int64 (***v100)();
  } v98_;
  struct {
    int v101;
    __int16 v102;
  } v101_;

  v5 = *(_QWORD*)(a4 + 32);
  if (v5 != 0) {
    if (v5 == a4) {
      v94_.v95 = v94_.v94;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v94_.v94);
      v8 = v94_.v95;
    }
    else {
      v8 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      v94_.v95 = v8;
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1184, 16, 0);
    if (v8 != nullptr) {
      if (v8 == v94_.v94) {
        v96_.v97 = v96_.v96;
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v8 + 24LL))(v8, v96_.v96);
      }
      else {
        v96_.v97 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v8 + 16LL))(v8);
      }
    }
    else {
      v96_.v97 = nullptr;
    }
  }
  else {
    v94_.v95 = nullptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1184, 16, 0);
    v96_.v97 = nullptr;
  }
  v98_.v98 = nullptr;
  v98_.v99 = nullptr;
  game_menu_16dcd30(v9, (__int64)"MaterialItemSelectMenu", &v98_.v98, 0);
  v10 = GameData_212d6a8;
  v11 = (__int64)v98_.v99;
  *(_QWORD*)v9 = GameData_212d6a8 + 2;
  *(_QWORD*)(v9 + 176) = v10 + 143;
  *(_QWORD*)(v9 + 1056) = v10 + 169;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = GameData_2132040[0];
  *(_QWORD*)(v9 + 1064) = a2;
  *(_QWORD*)(v9 + 1072) = 0;
  *(_QWORD*)(v9 + 1080) = 0;
  *(_QWORD*)(v9 + 1088) = 0;
  v101_.v102 = 0;
  v101_.v101 = 0;
  v98_.v100 = &v98_.v98;
  *(_QWORD*)v9 = v12 + 16;
  *(_QWORD*)(v9 + 176) = v12 + 1184;
  *(_QWORD*)(v9 + 1056) = v12 + 1392;
  v98_.v98 = GameData_20a5b18;
  v98_.v99 = &v101_.v101;
  GameRoutine_8a29c0(a2, (__int64)&v98_.v98);
  if (v98_.v100 == &v98_.v98) {
    v13 = 4;
  }
  else {
    if (v98_.v100 == nullptr) {
      goto LABEL_19;
    }
    v13 = 5;
  }
  ((__int64 (*)(__int64))(*v98_.v100)[v13])((__int64)v98_.v100);
LABEL_19:
  v14 = (__int64*)(v9 + 1072);
  if ((unsigned __int8)(BYTE2(v101_.v101) + BYTE1(v101_.v101) +
                        HIBYTE(v101_.v101) + v101_.v102 + HIBYTE(v101_.v102)) <
      2u) {
    if (BYTE1(v101_.v101) == 0) {
      goto LABEL_56;
    }
    v17 = *(_DWORD**)(v9 + 1080);
  }
  else {
    v15 = *(_DWORD**)(v9 + 1080);
    v16 = *(_QWORD*)(v9 + 1088);
    if ((unsigned __int64)v15 >= v16) {
      v18 = *v14;
      v19 = (signed __int64)v15 - *v14;
      v20 = (v19 >> 2) + 1;
      if (v20 >> 62 != 0) {
        goto LABEL_151;
      }
      v21 = v16 - v18;
      if (v21 >> 1 > v20) {
        v20 = v21 >> 1;
      }
      if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFFCLL) {
        v22 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v22 = v20;
      }
      if (v22 != 0) {
        if (v22 >> 62 != 0) {
          goto LABEL_152;
        }
        v23 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v22, 16, 0);
      }
      else {
        v23 = 0;
      }
      v24 = v23 + 4 * v22;
      v25 = v23 + v19 - 4 * (v19 >> 2);
      *(_DWORD*)(v23 + v19) = 0;
      v17 = (_DWORD*)(v23 + v19 + 4);
      GameRoutine_1a0b950(v25, v18, v19);
      *(_QWORD*)(v9 + 1072) = v25;
      *(_QWORD*)(v9 + 1080) = v17;
      *(_QWORD*)(v9 + 1088) = v24;
      if (v18 != 0) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v18);
      }
    }
    else {
      *v15 = 0;
      v17 = v15 + 1;
    }
    v27 = BYTE1(v101_.v101);
    *(_QWORD*)(v9 + 1080) = v17;
    if ((v27 & 1) == 0) {
      goto LABEL_56;
    }
  }
  v28 = *(_QWORD*)(v9 + 1088);
  if ((unsigned __int64)v17 >= v28) {
    v30 = *v14;
    v31 = (signed __int64)v17 - *v14;
    v32 = (v31 >> 2) + 1;
    if (v32 >> 62 != 0) {
      goto LABEL_151;
    }
    v33 = v28 - v30;
    if (v33 >> 1 > v32) {
      v32 = v33 >> 1;
    }
    if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFFCLL) {
      v34 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v34 = v32;
    }
    if (v34 != 0) {
      if (v34 >> 62 != 0) {
        goto LABEL_152;
      }
      v35 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v34, 16, 0);
    }
    else {
      v35 = 0;
    }
    v36 = v35 + 4 * v34;
    v37 = v35 + v31 - 4 * (v31 >> 2);
    *(_DWORD*)(v35 + v31) = 1;
    v29 = v35 + v31 + 4;
    GameRoutine_1a0b950(v37, v30, v31);
    *(_QWORD*)(v9 + 1072) = v37;
    *(_QWORD*)(v9 + 1080) = v29;
    *(_QWORD*)(v9 + 1088) = v36;
    if (v30 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v30);
    }
  }
  else {
    *v17 = 1;
    v29 = (__int64)(v17 + 1);
  }
  *(_QWORD*)(v9 + 1080) = v29;
LABEL_56:
  if ((v101_.v101 & 0x10000) != 0) {
    v39 = *(_DWORD**)(v9 + 1080);
    v40 = *(_QWORD*)(v9 + 1088);
    if ((unsigned __int64)v39 >= v40) {
      v42 = *v14;
      v43 = (signed __int64)v39 - *v14;
      v44 = (v43 >> 2) + 1;
      if (v44 >> 62 != 0) {
        goto LABEL_151;
      }
      v45 = v40 - v42;
      if (v45 >> 1 > v44) {
        v44 = v45 >> 1;
      }
      if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFFCLL) {
        v46 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v46 = v44;
      }
      if (v46 != 0) {
        if (v46 >> 62 != 0) {
          goto LABEL_152;
        }
        v47 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v46, 16, 0);
      }
      else {
        v47 = 0;
      }
      v48 = v47 + 4 * v46;
      v49 = v47 + v43 - 4 * (v43 >> 2);
      *(_DWORD*)(v47 + v43) = 2;
      v41 = v47 + v43 + 4;
      GameRoutine_1a0b950(v49, v42, v43);
      *(_QWORD*)(v9 + 1072) = v49;
      *(_QWORD*)(v9 + 1080) = v41;
      *(_QWORD*)(v9 + 1088) = v48;
      if (v42 != 0) {
        v50 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v42);
      }
    }
    else {
      *v39 = 2;
      v41 = (__int64)(v39 + 1);
    }
    *(_QWORD*)(v9 + 1080) = v41;
  }
  if (HIBYTE(v101_.v101) == 1) {
    v51 = *(_DWORD**)(v9 + 1080);
    v52 = *(_QWORD*)(v9 + 1088);
    if ((unsigned __int64)v51 >= v52) {
      v54 = *v14;
      v55 = (signed __int64)v51 - *v14;
      v56 = (v55 >> 2) + 1;
      if (v56 >> 62 != 0) {
        goto LABEL_151;
      }
      v57 = v52 - v54;
      if (v57 >> 1 > v56) {
        v56 = v57 >> 1;
      }
      if ((unsigned __int64)v57 >= 0x7FFFFFFFFFFFFFFCLL) {
        v58 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v58 = v56;
      }
      if (v58 != 0) {
        if (v58 >> 62 != 0) {
          goto LABEL_152;
        }
        v59 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v58, 16, 0);
      }
      else {
        v59 = 0;
      }
      v60 = v59 + 4 * v58;
      v61 = v59 + v55 - 4 * (v55 >> 2);
      *(_DWORD*)(v59 + v55) = 3;
      v53 = v59 + v55 + 4;
      GameRoutine_1a0b950(v61, v54, v55);
      *(_QWORD*)(v9 + 1072) = v61;
      *(_QWORD*)(v9 + 1080) = v53;
      *(_QWORD*)(v9 + 1088) = v60;
      if (v54 != 0) {
        v62 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v62 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v54);
      }
    }
    else {
      *v51 = 3;
      v53 = (__int64)(v51 + 1);
    }
    *(_QWORD*)(v9 + 1080) = v53;
  }
  if ((v101_.v102 & 1) != 0) {
    v63 = *(_DWORD**)(v9 + 1080);
    v64 = *(_QWORD*)(v9 + 1088);
    if ((unsigned __int64)v63 >= v64) {
      v66 = *v14;
      v67 = (signed __int64)v63 - *v14;
      v68 = (v67 >> 2) + 1;
      if (v68 >> 62 != 0) {
        goto LABEL_151;
      }
      v69 = v64 - v66;
      if (v69 >> 1 > v68) {
        v68 = v69 >> 1;
      }
      if ((unsigned __int64)v69 >= 0x7FFFFFFFFFFFFFFCLL) {
        v70 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v70 = v68;
      }
      if (v70 != 0) {
        if (v70 >> 62 != 0) {
          goto LABEL_152;
        }
        v71 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v70, 16, 0);
      }
      else {
        v71 = 0;
      }
      v72 = v71 + 4 * v70;
      v73 = v71 + v67 - 4 * (v67 >> 2);
      *(_DWORD*)(v71 + v67) = 4;
      v65 = v71 + v67 + 4;
      GameRoutine_1a0b950(v73, v66, v67);
      *(_QWORD*)(v9 + 1072) = v73;
      *(_QWORD*)(v9 + 1080) = v65;
      *(_QWORD*)(v9 + 1088) = v72;
      if (v66 != 0) {
        v74 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v74 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v66);
      }
    }
    else {
      *v63 = 4;
      v65 = (__int64)(v63 + 1);
    }
    *(_QWORD*)(v9 + 1080) = v65;
  }
  if (HIBYTE(v101_.v102) != 1) {
    goto LABEL_128;
  }
  v75 = *(_DWORD**)(v9 + 1080);
  v76 = *(_QWORD*)(v9 + 1088);
  if ((unsigned __int64)v75 >= v76) {
    v78 = *v14;
    v79 = (signed __int64)v75 - *v14;
    v80 = (v79 >> 2) + 1;
    if (v80 >> 62 == 0) {
      v81 = v76 - v78;
      if (v81 >> 1 > v80) {
        v80 = v81 >> 1;
      }
      if ((unsigned __int64)v81 >= 0x7FFFFFFFFFFFFFFCLL) {
        v82 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v82 = v80;
      }
      if (v82 == 0) {
        v83 = 0;
      LABEL_123:
        v84 = v83 + 4 * v82;
        v85 = v83 + v79 - 4 * (v79 >> 2);
        *(_DWORD*)(v83 + v79) = 5;
        v77 = v83 + v79 + 4;
        GameRoutine_1a0b950(v85, v78, v79);
        *(_QWORD*)(v9 + 1072) = v85;
        *(_QWORD*)(v9 + 1080) = v77;
        *(_QWORD*)(v9 + 1088) = v84;
        if (v78 != 0) {
          v86 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, v78);
        }
        goto LABEL_127;
      }
      if (v82 >> 62 == 0) {
        v83 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v82, 16, 0);
        goto LABEL_123;
      }
    LABEL_152:
      GameRoutine_60a210();
    }
  LABEL_151:
    GameRoutine_6e5a20();
  }
  *v75 = 5;
  v77 = (__int64)(v75 + 1);
LABEL_127:
  *(_QWORD*)(v9 + 1080) = v77;
LABEL_128:
  v87 = v96_.v97;
  *(_QWORD*)(v9 + 1096) = v9;
  *(_QWORD*)(v9 + 1104) = 0;
  *(_QWORD*)v9 = game_facility_anonymous_ProcMaterialItemSelectMenu_vtable;
  *(_QWORD*)(v9 + 1112) = 0;
  *(_QWORD*)(v9 + 1120) = 0;
  *(_BYTE*)(v9 + 1128) = a3 & 1;
  *(_QWORD*)(v9 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20a5958;
  *(_QWORD*)(v9 + 1056) = GameData_20a5a28;
  if (v87 != nullptr) {
    if (v87 == v96_.v96) {
      *(_QWORD*)(v9 + 1168) = v9 + 1136;
      (*(void (**)(_BYTE*))(*(_QWORD*)v87 + 24LL))(v87);
    }
    else {
      *(_QWORD*)(v9 + 1168) =
          (*(__int64 (**)(_BYTE*))(*(_QWORD*)v87 + 16LL))(v87);
    }
  }
  else {
    *(_QWORD*)(v9 + 1168) = 0;
  }
  BasicMenu_16dd8b0(v9, (*(_QWORD*)(v9 + 1080) - *(_QWORD*)(v9 + 1072)) >> 2,
                    0);
  ProcInst_657850(v9, (__int64)GameData_212c730, "ProcMaterialItemSelectMenu",
                  1, a1);
  if (v96_.v97 == v96_.v96) {
    v88 = 32;
    goto LABEL_137;
  }
  if (v96_.v97 != nullptr) {
    v88 = 40;
  LABEL_137:
    (*(void (**)(__int64))(*(_QWORD*)v96_.v97 + v88))((__int64)v96_.v97);
  }
  v90 = *(_QWORD**)(v9 + 256);
  v89 = *(_QWORD**)(v9 + 264);
  *(_QWORD*)(v9 + 336) = 0;
  while (v90 != v89) {
    if (*v90 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v90 + 8LL))(*v90);
      v89 = *(_QWORD**)(v9 + 264);
    }
    ++v90;
  }
  v91 = *(_QWORD*)(v9 + 344);
  if (v91 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v91 + 8LL))(v91);
    *(_QWORD*)(v9 + 344) = 0;
  }
  *(_QWORD*)(v9 + 264) = *(_QWORD*)(v9 + 256);
  *(_QWORD*)(v9 + 240) = *(_QWORD*)(v9 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 1024LL))(v9);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 1032LL))(v9);
  if (v94_.v95 == v94_.v94) {
    v92 = 32;
    goto LABEL_149;
  }
  if (v94_.v95 != nullptr) {
    v92 = 40;
  LABEL_149:
    (*(void (**)(__int64))(*(_QWORD*)v94_.v95 + v92))((__int64)v94_.v95);
  }
  return v9;
}

void game_facility_17018c0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  *a1 = game_facility_anonymous_ProcMaterialItemSelectMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_20a5958;
  a1[132] = GameData_20a5a28;
  v2 = a1 + 142;
  v3 = (_QWORD*)a1[146];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = a1[138];
  a1[139] = v5;
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v5);
  }
  v8 = a1[134];
  if (v8 != 0) {
    v9 = *(_QWORD*)v6;
    a1[135] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v11, (__int64)a1);
}

__int64 game_facility_17078c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  bool v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v28[4];
    __int64* v29;
  } v28_;
  __int64 v30;

  v30 = 0;
  v28_.v29 = v28_.v28;
  v28_.v28[0] = GameData_2131910[0] + 16;
  v28_.v28[1] = (__int64)&v30;
  GameRoutine_15b5f20((__int64)v28_.v28);
  if (v28_.v29 == v28_.v28) {
    v4 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v28_.v29 + v4))((__int64)v28_.v29);
LABEL_6:
  if (v30 == 0) {
    v15 = *(_QWORD*)GameData_212dbb8[0];
    if (*(_QWORD*)GameData_212dbb8[0] == 0 || *(_BYTE*)(v15 + 9) != 1 ||
        *(_DWORD*)(v15 + 136) != 1) {
      goto LABEL_41;
    }
    v30 = 0;
    v28_.v29 = v28_.v28;
    v28_.v28[0] = GameData_2131908[0] + 16;
    v28_.v28[1] = (__int64)&v30;
    GameRoutine_15b59e0((__int64)v28_.v28);
    if (v28_.v29 == v28_.v28) {
      v16 = 32;
    }
    else {
      if (v28_.v29 == nullptr) {
        goto LABEL_40;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v28_.v29 + v16))((__int64)v28_.v29);
  LABEL_40:
    if (v30 == 0) {
      goto LABEL_41;
    }
  }
  v5 = *(_QWORD*)(a1 + 1400);
  if (v5 != 0) {
  LABEL_8:
    v6 = v5;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        112, 16, 0);
    if (a2 == 0 ||
        (v8 = *(_QWORD*)(v6 + 1088), v9 = *(_QWORD*)(v6 + 1096), v8 == v9)) {
      v13 = false;
    }
    else {
      v10 = v8 + 8;
      do {
        v11 = *(_QWORD*)(v10 - 8);
        LODWORD(v30) = 16;
        v28_.v28[0] = v11;
        v12 = game_UnitPool_Find_6ead60(v28_.v28, &v30);
        v13 = a2 == (_QWORD)v12;
        v14 = (_QWORD*)a2 == v12 || v10 == v9;
        v10 += 8;
      } while (!v14);
    }
    *(_QWORD*)(v7 + 8) = 0;
    *(_WORD*)(v7 + 16) = 0;
    *(_DWORD*)(v7 + 40) = 0;
    *(_QWORD*)(v7 + 48) = 0;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_QWORD*)(v7 + 88) = a2;
    *(_WORD*)(v7 + 80) = 257;
    *(_BYTE*)(v7 + 82) = 1;
    if (a2 != 0) {
      *(_BYTE*)(v7 + 82) = game_Unit_IsUnlocked(a2);
    }
    v17 = game_facility_anonymous_CmdBtlUnitSelectMenuItem_vtable_20a80c0;
    *(_QWORD*)(v7 + 96) = 0;
    *(_BYTE*)(v7 + 104) = v13;
    goto LABEL_44;
  }
  v18 = *(_QWORD*)(a1 + 152);
  if (v18 == 0) {
    v18 = a1;
  }
  v19 = *(_QWORD*)(v18 + 32);
  if (v19 != 0) {
    v20 = __dynamic_cast(v19, GameData_212c610, GameData_2131c18[0], 0);
    if (v20 != 0) {
      v21 = v20;
      v22 = GameData_2131c18[0];
      v23 = GameData_2131c90[0];
      v24 = GameData_212c610;
      while (1) {
        v5 = __dynamic_cast(v21, v22, v23, 0);
        *(_QWORD*)(a1 + 1400) = v5;
        if (v5 != 0) {
          goto LABEL_8;
        }
        v25 = *(_QWORD*)(v21 + 152);
        if (v25 == 0) {
          v25 = v21;
        }
        v26 = *(_QWORD*)(v25 + 32);
        if (v26 != 0) {
          v21 = __dynamic_cast(v26, v24, v22, 0);
          if (v21 != 0) {
            continue;
          }
        }
        break;
      }
    }
  }
LABEL_41:
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  *(_QWORD*)(v7 + 8) = 0;
  *(_WORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 88) = a2;
  *(_WORD*)(v7 + 80) = 257;
  *(_BYTE*)(v7 + 82) = 1;
  if (a2 != 0) {
    *(_BYTE*)(v7 + 82) = game_Unit_IsUnlocked(a2);
  }
  v17 = game_facility_anonymous_UnitSelectMenuItem_vtable_20a7dc8;
  *(_QWORD*)(v7 + 96) = 0;
LABEL_44:
  *(_QWORD*)v7 = v17;
  return v7;
}

__int64 game_facility_1934710(__int64 a1)
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
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0);
  v4 = *(_QWORD*)(a1 + 208);
  if (v4 != 0 && (v5 = std___1___shared_weak_count_lock(v4)) != 0) {
    v6 = *(_QWORD*)(a1 + 200);
    v7 = v5;
    v8 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                           (__int64)"L_Decide");
    v9 = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v14_.v14 = v6;
    v14_.v15 = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v8 = ui_LayoutAccessor_FindPartsLayout((__int64*)(a1 + 200),
                                           (__int64)"L_Decide");
    v7 = 0;
    v14_.v14 = 0;
    v14_.v15 = 0;
    v9 = 1;
  }
  game_menu_16dcd30(v3, (__int64)"IndividualDecideMenu", &v14_.v14, v8);
  v10 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  *(_QWORD*)(v3 + 1056) = a1;
  *(_DWORD*)(v3 + 1064) = 0;
  *(_QWORD*)v3 = &game_menu_MultiMenu_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_20c54c8;
  if ((v9 & 1) != 0) {
    *(_QWORD*)v3 = game_facility_anonymous_IndividualMultiMenu_vtable;
    *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2117468;
    BasicMenuCursor_16de1f0((__int64*)v3, 3, 0);
  }
  else {
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    *(_QWORD*)v3 = game_facility_anonymous_IndividualMultiMenu_vtable;
    *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2117468;
    BasicMenuCursor_16de1f0((__int64*)v3, 3, 0);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  v11 = *v2;
  *(_QWORD*)v3 = game_facility_anonymous_IndividualDecideMenu_vtable;
  *(_QWORD*)(v3 + 176) = game_menu_MenuInput_InputUnknown00_ptr_2117de8;
  v12 = fw_memory_HeapManager_Allocate(v11, 88, 16, 0);
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_BYTE*)(v12 + 17) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_WORD*)(v12 + 80) = 257;
  *(_BYTE*)(v12 + 82) = 1;
  *(_QWORD*)v12 = game_facility_anonymous_DecideMenuItem_vtable;
  *(_QWORD*)(v12 + 8) = 0;
  BasicMenuCursor_16e0c00((_QWORD*)v3, v12);
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v3;
}

void game_facility_19e97b0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
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

  *a1 = game_facility_anonymous_RelianceMemoryChildMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_2124840;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2124910;
  v2 = a1[153];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = (_QWORD*)a1[150];
  if (v3 == a1 + 146) {
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
  v5 = a1[142];
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[143] = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v5);
  }
  v9 = a1[137];
  a1[137] = 0;
  if (v9 != 0) {
    GameRoutine_1015560(v9);
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v10, v9);
    v11 = a1[137];
    a1[137] = 0;
    if (v11 != 0) {
      GameRoutine_1015560(v11);
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v12, v11);
    }
  }
  v13 = a1[136];
  a1[136] = 0;
  if (v13 != 0) {
    GameRoutine_1015560(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v14, v13);
    v15 = a1[136];
    a1[136] = 0;
    if (v15 != 0) {
      GameRoutine_1015560(v15);
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v16, v15);
    }
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
}

void game_facility_19e9950(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
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

  *a1 = game_facility_anonymous_RelianceMemoryChildMenu_vtable;
  a1[22] = game_menu_MenuInput_InputUnknown00_ptr_2124840;
  a1[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr_2124910;
  v2 = a1[153];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = (_QWORD*)a1[150];
  if (v3 == a1 + 146) {
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
  v5 = a1[142];
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[143] = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v5);
  }
  v9 = a1[137];
  a1[137] = 0;
  if (v9 != 0) {
    GameRoutine_1015560(v9);
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v10, v9);
    v11 = a1[137];
    a1[137] = 0;
    if (v11 != 0) {
      GameRoutine_1015560(v11);
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v12, v11);
    }
  }
  v13 = a1[136];
  a1[136] = 0;
  if (v13 != 0) {
    GameRoutine_1015560(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v14, v13);
    v15 = a1[136];
    a1[136] = 0;
    if (v15 != 0) {
      GameRoutine_1015560(v15);
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v16, v15);
    }
  }
  game_menu_BasicMenu_Destroy_BasicMenu((__int64)a1);
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v17, (__int64)a1);
}

#pragma GCC visibility pop
