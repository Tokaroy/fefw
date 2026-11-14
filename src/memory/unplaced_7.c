#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_c18930(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CalculateAllocatedSizeHeap_5c7400(__int64, __int64, __int64*);
__int64 FloatingHelp_18ac7f0(void);
__int64 GameHr_112e290(_QWORD);
__int64 GameHr_15651c0(_QWORD);
__int64 GameHr_5ded80(__int64, __int64*, __int64, int, __int64);
__int64 GameHr_5fc7e0(__int64*, __int64);
__int64 GameRoutine_15e1350(_QWORD);
__int64 GameRoutine_1745c40(__int64, __int64);
__int64 GameRoutine_17b7d20(_QWORD);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a8e0(__int64, unsigned __int64, unsigned __int64,
                            const char*, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50_alt1(__int64, int, unsigned __int64);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c7e20(__int64);
__int64 GameRoutine_5c7ea0(__int64, __int64, __int64);
__int64 GameRoutine_5fc180(_QWORD);
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_5fcb80(__int64 result);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_a85120(__int64, unsigned __int8*);
__int64 GameRoutine_eb9120(__int64);
__int64 GaugeUtil_1750020(__int64, __int64*, __int64, char, signed int,
                          unsigned int);
__int64 LayoutArchive_13669e0(_QWORD);
__int64 ProcLoadingSeq_9b84e0(_QWORD);
__int64 RectDrawer_5fcbc0(__int64, __int64*);
__int64 RenderTask_136a130(_QWORD);
__int64 SimpleTelopImpl_17c9530(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(__int64, __int64, __int64,
                                            unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_1015e40(_QWORD*);
__int64 game_15d1d80(_QWORD);
__int64 game_1735b60(_QWORD);
__int64 game_173df20(_QWORD);
__int64 game_19ef080(_QWORD);
__int64 game_HashString(__int64 result);
__int64 game_Unit_GetJob(__int64);
__int64 game_gameui_1569ce0(_QWORD);
__int64 game_gameui_17aa8e0(void);
__int64 game_gameui_18a2660(void);
__int64 game_gameui_19aeaf0(void);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool game_HasSkill(_QWORD*, _DWORD*);
char* game_util_Format(const char*, ...);
double GameRoutine_1a09f70(double);
double GameRoutine_1a09f80(double);
extern _DWORD* GameData_212d8a0;
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_2216780;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_1fa94c8[])();
extern __int64 (*GameData_1fa9548[])();
extern __int64 (*GameData_1fa95c8[])();
extern __int64 (*GameData_1fa9648[])();
extern __int64 (*GameData_1fa96c8[])();
extern __int64 (*GameData_2001b68[])();
extern __int64* GameData_212c628;
extern __int64* GameData_212c978[152];
extern __int64* GameData_212d898;
extern __int64* GameData_212f2e0;
extern __int64* GameData_2130fa0[3];
extern __int64* GameData_21320a8;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212c638;
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_212d6e0[2];
extern __int64 GameData_212d8a8[4];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_212da38;
extern __int64 GameData_2131cf0[28];
extern __int64 GameData_2131cf8[27];
extern __int64 GameData_2136448[3];
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_2216810;
extern __int64 GameData_2258178;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
extern char GameData_2216858;
extern int* GameData_21320b0[8];
int GameRoutine_1a09d30(const char*, const char*);
struct PseudoSret TextTagProcessor_1908c60(_QWORD, _QWORD);
struct PseudoSret TextTagProcessor_1908f00(_QWORD, _QWORD);
unsigned __int64 GameRoutine_1a09c70(const char*);
void Field_1013090(_QWORD*, int8x16_t*, float, float, float);
void GameRoutine_a853b0(__int64);
void __attribute__((noreturn)) GameRoutine_1387d40();
void __attribute__((noreturn)) GameRoutine_1745c20();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_d28710();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 memory_5c65e0(__int64 result, __int64 a2);
__int64 memory_5c6e20(__int64 a1, __int64 a2, __int64* a3);
_QWORD* memory_8b4c00();
void memory_1011ca0(unsigned __int64 a1);
void memory_1756fe0(__int64 a1);

__int64 memory_5c65e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  _DWORD* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  _QWORD v32[2];

  v2 = *(unsigned int*)(a2 + 8);
  v3 = result;
  if ((_DWORD)v2 == -1) {
    *(_DWORD*)(result + 104) = 0;
  LABEL_33:
    *(_QWORD*)(result + 112) = 0;
    *(_QWORD*)(result + 120) = 0;
    return result;
  }
  v4 = (_DWORD*)(a2 + v2);
  v6 = 0;
  do {
    v7 = (unsigned int)v4[3];
    if (*v4 == 1296650832) {
      ++v6;
    }
    v4 = (_DWORD*)((char*)v4 + v7);
  } while ((_DWORD)v7 != -1);
  *(_DWORD*)(result + 104) = v6;
  if (v6 == 0) {
    goto LABEL_33;
  }
  v8 = 152LL * v6 + 32;
  v9 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(result + 1112) + 16LL))(*(_QWORD*)(result + 1112), v8, 128);
  v10 = *(_QWORD*)(v3 + 1120);
  v11 = *(_DWORD*)(v3 + 104);
  *(_QWORD*)(v3 + 112) = v9;
  *(_QWORD*)(v3 + 1120) = v10 + v8;
  ++*(_DWORD*)(v3 + 1128);
  if (v11 != 0) {
    v12 = GameData_2136448[0];
    v13 = 152LL * v11 - 152;
    v14 = v9;
    if ((~(v13 / 0x98) & 7) != 0) {
      v15 = ((unsigned __int8)(v13 / 0x98) + 1) & 7;
      v14 = v9;
      do {
        *(_QWORD*)v14 = v12 + 16;
        *(_BYTE*)(v14 + 8) = 0;
        --v15;
        *(_QWORD*)(v14 + 12) = 0;
        *(_QWORD*)(v14 + 20) = 0;
        *(_QWORD*)(v14 + 28) = 0;
        *(_QWORD*)(v14 + 36) = 0;
        *(_QWORD*)(v14 + 44) = 0;
        *(_QWORD*)(v14 + 52) = 0;
        *(_QWORD*)(v14 + 60) = 0;
        *(_QWORD*)(v14 + 68) = 0;
        *(_QWORD*)(v14 + 76) = 0;
        *(_DWORD*)(v14 + 84) = 0;
        v14 += 152;
      } while (v15 != 0);
    }
    if (v13 >= 0x428) {
      v16 = v9 + 152LL * v11;
      v17 = v12 + 16;
      do {
        *(_QWORD*)v14 = v17;
        *(_BYTE*)(v14 + 8) = 0;
        v18 = (_QWORD*)(v14 + 316);
        *(_QWORD*)(v14 + 12) = 0;
        *(_QWORD*)(v14 + 20) = 0;
        *(_QWORD*)(v14 + 28) = 0;
        *(_QWORD*)(v14 + 36) = 0;
        *(_QWORD*)(v14 + 44) = 0;
        *(_QWORD*)(v14 + 52) = 0;
        *(_QWORD*)(v14 + 60) = 0;
        *(_QWORD*)(v14 + 68) = 0;
        *(_QWORD*)(v14 + 76) = 0;
        *(_DWORD*)(v14 + 84) = 0;
        *(_QWORD*)(v14 + 152) = v17;
        *(_BYTE*)(v14 + 160) = 0;
        *(_QWORD*)(v14 + 164) = 0;
        *(_QWORD*)(v14 + 172) = 0;
        *(_QWORD*)(v14 + 180) = 0;
        *(_QWORD*)(v14 + 188) = 0;
        *(_QWORD*)(v14 + 196) = 0;
        *(_QWORD*)(v14 + 204) = 0;
        *(_QWORD*)(v14 + 212) = 0;
        *(_QWORD*)(v14 + 220) = 0;
        *(_QWORD*)(v14 + 228) = 0;
        *(_DWORD*)(v14 + 236) = 0;
        *(_QWORD*)(v14 + 304) = v17;
        *(_BYTE*)(v14 + 312) = 0;
        *(_DWORD*)(v14 + 388) = 0;
        *(_QWORD*)(v14 + 456) = v17;
        *(_BYTE*)(v14 + 464) = 0;
        *(_DWORD*)(v14 + 540) = 0;
        *(_QWORD*)(v14 + 608) = v17;
        *(_BYTE*)(v14 + 616) = 0;
        *(_DWORD*)(v14 + 692) = 0;
        *(_QWORD*)(v14 + 760) = v17;
        *(_BYTE*)(v14 + 768) = 0;
        *(_DWORD*)(v14 + 844) = 0;
        *(_QWORD*)(v14 + 912) = v17;
        *(_BYTE*)(v14 + 920) = 0;
        *(_DWORD*)(v14 + 996) = 0;
        *(_QWORD*)(v14 + 1064) = v17;
        *(_BYTE*)(v14 + 1072) = 0;
        *(_DWORD*)(v14 + 1148) = 0;
        v14 += 1216;
        *v18 = 0;
        v18[1] = 0;
        v18[2] = 0;
        v18[3] = 0;
        v18[4] = 0;
        v18[5] = 0;
        v18[6] = 0;
        v18[7] = 0;
        v18[8] = 0;
        v18[19] = 0;
        v18[20] = 0;
        v18[21] = 0;
        v18[22] = 0;
        v18[23] = 0;
        v18[24] = 0;
        v18[25] = 0;
        v18[26] = 0;
        v18[27] = 0;
        v18[38] = 0;
        v18[39] = 0;
        v18[40] = 0;
        v18[41] = 0;
        v18[42] = 0;
        v18[43] = 0;
        v18[44] = 0;
        v18[45] = 0;
        v18[46] = 0;
        v18[57] = 0;
        v18[58] = 0;
        v18[59] = 0;
        v18[60] = 0;
        v18[61] = 0;
        v18[62] = 0;
        v18[63] = 0;
        v18[64] = 0;
        v18[65] = 0;
        v18[84] = 0;
        v18[83] = 0;
        v18[82] = 0;
        v18[81] = 0;
        v18[80] = 0;
        v18[79] = 0;
        v18[78] = 0;
        v18[77] = 0;
        v18[76] = 0;
        v18[103] = 0;
        v18[102] = 0;
        v18[101] = 0;
        v18[100] = 0;
        v18[99] = 0;
        v18[98] = 0;
        v18[97] = 0;
        v18[96] = 0;
        v18[95] = 0;
      } while (v14 != v16);
    }
  }
  *(_QWORD*)(v3 + 120) = v9;
  v19 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v19 == -1) {
  LABEL_18:
    v20 = nullptr;
  }
  else {
    v20 = (_DWORD*)(a2 + v19);
    while (*v20 != 1296650832) {
      v21 = (unsigned int)v20[3];
      v20 = (_DWORD*)((char*)v20 + v21);
      if ((_DWORD)v21 == -1) {
        goto LABEL_18;
      }
    }
  }
  v22 = *(__int64**)(v3 + 16);
  v32[0] = 0;
  v32[1] = 0;
  GameRoutine_5fc180(v32);
  HIDWORD(v32[0]) = 4;
  v23 = GameHr_5fc7e0(v22, (__int64)v32);
  v24 = 0;
  if (v20 != nullptr) {
    v25 = v23 - 1;
    v26 = -v23;
    v27 = (__int64)v20;
    do {
      v24 += (v25 + GameRoutine_5c7e20(v27)) & v26;
      v28 = *(unsigned int*)(v27 + 12);
      v27 += v28;
    } while ((_DWORD)v28 != -1);
  }
  if ((GameHr_5ded80(v3 + 672, *(__int64**)(v3 + 16), v3 + 1104, 4, v24) & 1) !=
      0) {
    RectDrawer_5fcbc0(v3 + 672, (__int64*)(v3 + 1072));
  }
  *(_QWORD*)(v3 + 1088) = 0;
  *(_QWORD*)(v3 + 1096) = GameRoutine_5fcb50(v3 + 672);
  if (v20 != nullptr) {
    v29 = 0;
    v30 = 0;
    if ((GameRoutine_5c7ea0(*(_QWORD*)(v3 + 120), v3 + 672, (__int64)v20) &
         1) == 0) {
      goto LABEL_28;
    }
    while (1) {
      *(_QWORD*)(v3 + 224) += (unsigned int)v20[1];
      v31 = (unsigned int)v20[3];
      if ((_DWORD)v31 == -1) {
        break;
      }
      while (1) {
        v20 = (_DWORD*)((char*)v20 + v31);
        ++v30;
        v29 += 152;
        if ((GameRoutine_5c7ea0(*(_QWORD*)(v3 + 120) + v29, v3 + 672,
                                (__int64)v20) &
             1) != 0) {
          break;
        }
      LABEL_28:
        GameRoutine_5c02c0("Faild to initialize primitive: Index %d \n", v30);
        v31 = (unsigned int)v20[3];
        if ((_DWORD)v31 == -1) {
          goto LABEL_31;
        }
      }
    }
  }
LABEL_31:
  GameRoutine_5fcb80(v3 + 672);
  return GameRoutine_5fcb70(v3 + 672);
}

__int64 memory_5c6e20(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  _DWORD* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;

  v3 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v3 == -1) {
    v8 = 0;
  }
  else {
    v7 = (_DWORD*)(a2 + v3);
    v8 = 0;
    do {
      v9 = (unsigned int)v7[3];
      if (*v7 == 1413829445) {
        ++v8;
      }
      v7 = (_DWORD*)((char*)v7 + v9);
    } while ((_DWORD)v9 != -1);
  }
  v10 = *(_QWORD*)(a1 + 1112);
  *(_DWORD*)(a1 + 76) = v8;
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v10 + 16LL))(
      v10, 56LL * v8, 128);
  v12 = *(_QWORD*)(a1 + 1120);
  *(_QWORD*)(a1 + 88) = v11;
  *(_QWORD*)(a1 + 1120) = v12 + 56LL * v8;
  ++*(_DWORD*)(a1 + 1128);
  GameRoutine_1a0ba50(v11, 0, 56LL * *(int*)(a1 + 76));
  v16 = *(int*)(a1 + 76);
  v17 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(a1 + 1112) + 16LL))(*(_QWORD*)(a1 + 1112), 8 * v16, 128);
  v18 = *(_QWORD*)(a1 + 1120);
  *(_QWORD*)(a1 + 96) = v17;
  *(_QWORD*)(a1 + 1120) = v18 + 8 * v16;
  ++*(_DWORD*)(a1 + 1128);
  result = GameRoutine_1a0ba50(v17, 0, 8LL * *(int*)(a1 + 76));
  v23 = *(unsigned int*)(a2 + 8);
  if ((_DWORD)v23 != -1) {
    v24 = (_DWORD*)(a2 + v23);
    while (*v24 != 1413829445) {
      v25 = (unsigned int)v24[3];
      v24 = (_DWORD*)((char*)v24 + v25);
      if ((_DWORD)v25 == -1) {
        return result;
      }
    }
    v26 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)(a1 + 88) + 56LL * v26 + 8) = v24;
      result = CalculateAllocatedSizeHeap_5c7400(
          a1, *(_QWORD*)(a1 + 88) + 56LL * v26, a3);
      v27 = (unsigned int)v24[3];
      ++v26;
      v24 = (_DWORD*)((char*)v24 + v27);
    } while ((_DWORD)v27 != -1);
  }
  return result;
}

_QWORD* memory_8b4c00()
{

#pragma clang fp contract(fast)

  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* result;
  __int64 v26;
  __int64 v27;
  _QWORD v28[4];
  _QWORD* v29;
  _QWORD v30[4];
  _QWORD* v31;
  _QWORD v32[4];
  _QWORD* v33;
  _QWORD v34[4];
  _QWORD* v35;

  RenderTask_136a130(ui_Manager_instance_ + 1264);
  LayoutArchive_13669e0("Layout/Common.arc");
  LayoutArchive_13669e0("Layout/CommonMenu.arc");
  v0 = LayoutArchive_13669e0("Layout/Hub.arc");
  game_15d1d80(v0);
  v34[0] = GameData_1fa94c8;
  v35 = v34;
  *(struct PseudoSret*)(v32) =
      TextTagProcessor_1908f00(ui_Manager_instance_ + 6528, v34);
  if (v33 == v32) {
    v1 = 32;
  }
  else {
    if (v33 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v33 + v1))((__int64)v33);
LABEL_6:
  if (v35 == v34) {
    v2 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v35 + v2))((__int64)v35);
LABEL_11:
  v34[0] = GameData_1fa9548;
  v35 = v34;
  *(struct PseudoSret*)(v30) =
      TextTagProcessor_1908c60(ui_Manager_instance_ + 6528, v34);
  if (v31 == v30) {
    v3 = 32;
  }
  else {
    if (v31 == nullptr) {
      goto LABEL_16;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v31 + v3))((__int64)v31);
LABEL_16:
  if (v35 == v34) {
    v4 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_21;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v35 + v4))((__int64)v35);
LABEL_21:
  v5 = GameData_212c628;
  GameRoutine_15e1350(
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628));
  game_1735b60(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  game_173df20(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  game_gameui_1569ce0(*v5);
  GameHr_15651c0(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] == 0) {
    GameRoutine_17b7d20(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  }
  SimpleTelopImpl_17c9530(
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  v7[14] = 0;
  v7[15] = 0;
  v8 = GameData_212d898;
  if (*GameData_212d898 == 0) {
    *GameData_212d8a0 = 1;
  }
  v9 = GameData_212da38;
  v7[8] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[6] = 0;
  v7[7] = v7 + 8;
  v7[11] = 0;
  v7[12] = 0;
  v7[13] = 0;
  *((_DWORD*)v7 + 28) = 1065353216;
  v7[15] = 0;
  v7[16] = 0;
  v7[17] = 0;
  *v8 = (__int64)v7;
  *v7 = v9 + 16;
  v7[1] = v9 + 72;
  game_gameui_18a2660();
  v10 = fw_memory_HeapManager_Allocate(*v6, 128, 16, 0);
  game_gameui_17aa8e0();
  v11 = *v6;
  *(_QWORD*)GameData_212d8a8[0] = v10;
  v12 = fw_memory_HeapManager_Allocate(v11, 288, 16, 0);
  v13 = (__int64*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] == 0) {
    *GameData_21320b0[0] = 1;
  }
  v14 = GameData_21320a8;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_DWORD*)(v12 + 112) = 1065353216;
  *(_QWORD*)(v12 + 120) = 0;
  *(_QWORD*)(v12 + 128) = 0;
  *(_QWORD*)(v12 + 136) = 0;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)(v12 + 152) = 0;
  *(_QWORD*)(v12 + 160) = 0;
  *(_QWORD*)(v12 + 168) = 0;
  *(_QWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 200) = 0;
  *(_QWORD*)(v12 + 208) = 0;
  *(_QWORD*)(v12 + 216) = 0;
  *(_QWORD*)(v12 + 224) = 0;
  *(_QWORD*)(v12 + 232) = 0;
  *(_QWORD*)(v12 + 240) = 0;
  *v13 = v12;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = v12 + 64;
  *(_QWORD*)v12 = v14 + 2;
  *(_QWORD*)(v12 + 8) = v14 + 9;
  *(_QWORD*)(v12 + 248) = 0xFFFFFFFFLL;
  *(_DWORD*)(v12 + 255) = 0;
  *(_QWORD*)(v12 + 268) = 0;
  *(_QWORD*)(v12 + 276) = 0;
  *(_QWORD*)(v12 + 260) = 0;
  FloatingHelp_18ac7f0();
  v15 = fw_memory_HeapManager_Allocate(*v6, 128, 16, 0);
  game_gameui_19aeaf0();
  v16 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  *(_QWORD*)GameData_212d6e0[0] = v15;
  v17 = game_19ef080(v16);
  v18 = GameHr_112e290(v17);
  ProcLoadingSeq_9b84e0(v18);
  v19 = v28;
  v28[0] = GameData_1fa95c8;
  v29 = v28;
  if (GameData_2258178 == 0) {
    goto LABEL_36;
  }
  v34[0] = GameData_1fa95c8;
  v35 = v34;
  GameRoutine_654050(v34, GameData_2258178);
  if (v35 == v34) {
    v20 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_33;
    }
    v20 = 40;
  }
  (*(void (**)(_QWORD*))(*v35 + v20))(v35);
LABEL_33:
  v19 = v29;
  if (v29 == v28) {
  LABEL_36:
    v21 = 32;
    goto LABEL_37;
  }
  if (v29 != nullptr) {
    v21 = 40;
  LABEL_37:
    (*(void (**)(_QWORD*))(*v19 + v21))(v19);
  }
  v22 = v28;
  v28[0] = GameData_1fa9648;
  v29 = v28;
  if (GameData_2258178 == 0) {
  LABEL_47:
    v24 = 32;
    goto LABEL_48;
  }
  v34[0] = GameData_1fa9648;
  v35 = v34;
  GameRoutine_654050(v34, GameData_2258178 + 48);
  if (v35 == v34) {
    v23 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_44;
    }
    v23 = 40;
  }
  (*(void (**)(_QWORD*))(*v35 + v23))(v35);
LABEL_44:
  v22 = v29;
  if (v29 == v28) {
    goto LABEL_47;
  }
  if (v29 == nullptr) {
    goto LABEL_49;
  }
  v24 = 40;
LABEL_48:
  (*(void (**)(_QWORD*))(*v22 + v24))(v22);
LABEL_49:
  result = v28;
  v28[0] = GameData_1fa96c8;
  v29 = v28;
  if (GameData_2258178 == 0) {
  LABEL_58:
    v27 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v27))(result);
  }
  v34[0] = GameData_1fa96c8;
  v35 = v34;
  GameRoutine_654050(v34, GameData_2258178 + 96);
  if (v35 == v34) {
    v26 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_55;
    }
    v26 = 40;
  }
  (*(void (**)(_QWORD*))(*v35 + v26))(v35);
LABEL_55:
  result = v29;
  if (v29 == v28) {
    goto LABEL_58;
  }
  if (v29 == nullptr) {
    return result;
  }
  v27 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v27))(result);
}

void memory_1011ca0(unsigned __int64 a1)
{
  int v1;
  __int64 v3;
  char* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int8* v8;
  __int64 v9;
  unsigned __int8 v10;
  __int64 v11;
  signed __int64 v12;
  __int8* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int8* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int8 v30;
  __int64 v31;
  char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  char* v51;
  unsigned __int64 v52;
  char* v53;
  char* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  char* v57;
  __int64 v58;
  char v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  float32x4_t v65;
  float v66;
  __int64 v67;
  float32x4_t v68;
  float v69;
  __int64 v70;
  __int128 v71;
  float v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  unsigned __int8 v76;
  float v77;
  float v78;
  float v79;
  __int64 v80;
  float32x4_t* v81;
  unsigned __int64 v82;
  _QWORD* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int128 v87;
  char* v88;
  _QWORD* v89;
  __int128 v90;
  double v91;
  float v92;
  unsigned __int64 v93;
  float32x4_t v94;
  double v95;
  double v96;
  float32x4_t v97;
  float32x4_t v98;
  unsigned int v99;
  unsigned __int64 v100;
  unsigned int v101;
  float32x4_t v102;
  int8x16_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  int8x16_t v108;
  int8x16_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  char* v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  float32x4_t* v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  int v124;
  char v125;
  __int64 v126;
  float32x4_t v127;
  double v128;
  double v129;
  float32x4_t v130;
  float32x4_t v131;
  unsigned int v132;
  unsigned __int64 v133;
  unsigned int v134;
  float32x4_t v135;
  int8x16_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  int8x16_t v141;
  int8x16_t v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t v147;
  char* v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  float32x4_t* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  int v157;
  char v158;
  __int64 v159;
  float v160;
  float v161;
  _QWORD* v162;
  float v163;
  __int128 v164;
  double v165;
  unsigned __int64 v166;
  float v167;
  unsigned __int64 v168;
  float v169;
  int8x16_t v170;
  float32x4_t v171;
  int8x16_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  float32x4_t v176;
  struct {
    int8x16_t v177;
    __int8* v178;
  } v177_;
  struct {
    __int64 v179[3];
    int v180;
    _BOOL4 v181;
  } v179_;
  struct {
    _QWORD v182[7];
    char v183;
    char gap345_[87];
    __int64 v184;
    __int64 v185;
    __int64 v186;
    unsigned __int64 v187;
    char* v188;
    char v189;
    char v190;
    char gap474_[6];
    __int64 v191;
    char* v192;
    char gap496_[25];
    char v193;
  } v182_;
  _QWORD v194[3];
  struct {
    _QWORD v195[2];
    char* v196;
  } v195_;
  struct {
    __int64 v197;
    unsigned __int64 v198;
    char* v199;
    char gap616_[8];
    __int64* v200;
  } v197_;

  v1 = *(_DWORD*)(a1 + 16);
  *(_DWORD*)(a1 + 16) = v1 + 1;
  if (v1 != 0) {
    if (v1 > 0) {
      return;
    }
  }
  else {
    (**(void (***)(__int64))(a1 + 8))(a1 + 8);
  }
  if ((GameData_2216858 & 1) == 0) {
    goto LABEL_242;
  }
  v3 = GameRoutine_eb9120((__int64)&GameData_2216780);
  if (v3 != 0) {
    v4 = *(const char**)(v3 + 8);
    v5 = (_QWORD*)v3;
    v6 = GameRoutine_1a09c70(v4);
    if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_243;
    }
    v7 = v6;
    if (v6 >= 0x17) {
      if ((v6 | 7) == 0x17) {
        v9 = 26;
      }
      else {
        v9 = (v6 | 7) + 1;
      }
      v8 = (__int8*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
      LANES128(v177_.v177).n128_u64[1] = v7;
      v177_.v178 = v8;
      LANES128(v177_.v177).n128_u64[0] = v9 | 1;
    }
    else {
      LANES128(v177_.v177).n128_u8[0] = 2 * v6;
      v8 = &LANES128(v177_.v177).n128_i8[1];
      if (v6 == 0) {
      LABEL_16:
        v8[v7] = 0;
        v10 = LANES128(v177_.v177).n128_u8[0];
        v11 = (__int64)v177_.v178;
        v12 = (unsigned __int64)LANES128(v177_.v177).n128_u8[0] >> 1;
        if ((LANES128(v177_.v177).n128_u8[0] & 1) != 0) {
          v12 = LANES128(v177_.v177).n128_i64[1];
        }
        if (v12 >= 6) {
          if ((LANES128(v177_.v177).n128_u8[0] & 1) != 0) {
            v20 = v177_.v178;
          }
          else {
            v20 = &LANES128(v177_.v177).n128_i8[1];
          }
          v21 = &v20[v12];
        LABEL_34:
          v22 = (__int64)v20;
          do {
            v23 = GameRoutine_1a09c60(v22, 70, v12 - 5);
            if (v23 == 0) {
              break;
            }
            if (*(_DWORD*)v23 == 1818585414 && *(_WORD*)(v23 + 4) == 24420) {
              if ((char*)v23 != v21 && v23 - (_QWORD)v20 != -1) {
                GameRoutine_1a0a8e0((__int64)&v177_.v177, v23 - (_QWORD)v20, 6u,
                                    &GameData_1a9f09e, 0);
                v10 = LANES128(v177_.v177).n128_u8[0];
                v12 = LANES128(v177_.v177).n128_i64[1];
                v11 = (__int64)v177_.v178;
                if ((LANES128(v177_.v177).n128_u8[0] & 1) != 0) {
                  v20 = v177_.v178;
                }
                else {
                  v20 = &LANES128(v177_.v177).n128_i8[1];
                }
                if ((LANES128(v177_.v177).n128_u8[0] & 1) == 0) {
                  v12 = (unsigned __int64)LANES128(v177_.v177).n128_u8[0] >> 1;
                }
                v21 = &v20[v12];
                if (v12 > 5) {
                  goto LABEL_34;
                }
              }
              break;
            }
            v22 = v23 + 1;
            v12 = (signed __int64)&v21[-v22];
          } while ((__int64)&v21[-v22] >= 6);
        }
        if ((v10 & 1) != 0) {
          v13 = (__int8*)v11;
        }
        else {
          v13 = &LANES128(v177_.v177).n128_i8[1];
        }
        v14 = game_HashString((__int64)v13);
        if (v14 != 0) {
          v15 = *(_QWORD*)(*GameData_212c978[0] + 96);
          v16 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v15 != 0 & *(_QWORD*)(*GameData_212c978[0] + 112) != 0) {
            v18 = v15 - 1;
            if ((v15 & (v15 - 1)) != 0) {
              v19 = v14;
              if (v14 >= v15) {
                v19 = v14 % v15;
              }
            }
            else {
              v19 = v18 & v14;
            }
            v26 = *(_QWORD**)(*(_QWORD*)(*GameData_212c978[0] + 88) + 8 * v19);
            if (v26 != nullptr) {
              v27 = (_QWORD*)*v26;
              if (v27 != nullptr) {
                if ((v15 & v18) == 0) {
                  while (1) {
                    v29 = v27[1];
                    if (v29 == v14) {
                      if (v27[2] == v14) {
                        goto LABEL_239;
                      }
                    }
                    else if ((v29 & v18) != v19) {
                      goto LABEL_68;
                    }
                    v27 = (_QWORD*)*v27;
                    v25 = 0;
                    if (v27 == nullptr) {
                      goto LABEL_69;
                    }
                  }
                }
                do {
                  v28 = v27[1];
                  if (v28 == v14) {
                    if (v27[2] == v14) {
                    LABEL_239:
                      v25 = v27[3];
                      goto LABEL_69;
                    }
                  }
                  else {
                    if (v28 >= v15) {
                      v28 %= v15;
                    }
                    if (v28 != v19) {
                      break;
                    }
                  }
                  v27 = (_QWORD*)*v27;
                } while (v27 != nullptr);
              }
            }
          }
        LABEL_68:
          v25 = 0;
        }
        else {
          v25 = 0;
          v16 = (__int64*)fw_memory_g_heap_manager_ptr;
        }
      LABEL_69:
        v30 = LANES128(v177_.v177).n128_u8[0];
        *(_QWORD*)(a1 + 48) = v25;
        if ((v30 & 1) != 0 && v177_.v178 != nullptr) {
          v31 = 128;
          if (*(_QWORD*)(*v16 + 200) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(*v16 + v31, (__int64)v177_.v178);
        }
        v32 = (const char*)v5[4];
        if (v32 == nullptr || *v32 == 0) {
        LABEL_164:
          if ((GameData_2216858 & 1) == 0) {
            goto LABEL_242;
          }
          v64 = GameRoutine_eb9120((__int64)&GameData_2216780);
          if (v64 != 0) {
            LANES128(v65).n128_u32[0] = *(_DWORD*)(v64 + 96);
            v66 = *(float*)(v64 + 108);
            LANES128(v65).n128_u32[1] = *(_DWORD*)(v64 + 100);
            LANES128(v65).n128_u32[2] = *(_DWORD*)(v64 + 104);
          }
          else {
            v65 = (__typeof__(v65)){0};
            v66 = 0x0.0p+0f;
          }
          v176 = v65;
          if ((GameData_2216858 & 1) == 0) {
            goto LABEL_242;
          }
          v67 = GameRoutine_eb9120((__int64)&GameData_2216780);
          if (v67 != 0) {
            v69 = *(float*)(v67 + 112);
            if ((GameData_2216858 & 1) == 0) {
              goto LABEL_242;
            }
          }
          else {
            v69 = 0x1.e000000000000p+3f;
            if ((GameData_2216858 & 1) == 0) {
              goto LABEL_242;
            }
          }
          PSEUDO_LOW_LANE128(v68, n128_f32, v69 * 0x1.0000000000000p-1f);
          v174 = v68;
          v70 = GameRoutine_eb9120((__int64)&GameData_2216780);
          if (v70 != 0) {
            v72 = *(float*)(v70 + 116);
          }
          else {
            v72 = 0x1.e000000000000p+3f;
          }
          v162 = (_QWORD*)a1;
          v161 = v69;
          v160 = v72;
          v73 = v174;
          v177_.v177 = v176;
          LANES128(v73).n128_f32[2] = v72 * 0x1.0000000000000p-1f;
          v74 = vaddq_f32(v176, v73);
          LANES128(v73).n128_f32[0] = -LANES128(v174).n128_f32[0];
          LANES128(v73).n128_f32[2] = -(float)(v72 * 0x1.0000000000000p-1f);
          v75 = vaddq_f32(v176, v73);
          v76 = LANES64_OF(vmovn_s32(vcgtq_f32(v74, v75))).n64_u8[0];
          if ((v76 & 1) != 0) {
            v77 = LANES128(v75).n128_f32[0];
          }
          else {
            v77 = LANES128(v74).n128_f32[0];
          }
          if ((v76 & 1) != 0) {
            v78 = LANES128(v74).n128_f32[0];
          }
          else {
            v78 = LANES128(v75).n128_f32[0];
          }
          LANES128(v75).n128_u32[0] = LANES128(v75).n128_u32[2];
          *(float*)&v71 = v77 + 0x1.4000000000000p+1f;
          v169 = v78;
          if (LANES128(v75).n128_f32[2] >= LANES128(v74).n128_f32[2]) {
            v79 = LANES128(v75).n128_f32[2];
          }
          else {
            v79 = LANES128(v74).n128_f32[2];
          }
          if (*(float*)&v71 <= v78) {
            if (LANES128(v75).n128_f32[2] >= LANES128(v74).n128_f32[2]) {
              LANES128(v75).n128_f32[0] = LANES128(v74).n128_f32[2];
            }
            v163 = LANES128(v75).n128_f32[0] + 0x1.4000000000000p+1f;
            if ((float)(LANES128(v75).n128_f32[0] + 0x1.4000000000000p+1f) <=
                v79) {
              v90 = v71;
              v80 = 0;
              v82 = 0;
              v81 = nullptr;
              v91 = (float)(v66 * 0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1;
              v165 = v66 * 0x1.0000000000000p-1;
            LABEL_202:
              LANES128(v74).n128_u32[1] = 0;
              v164 = v90;
              v168 = (unsigned int)v90;
              LANES128(v74).n128_f32[0] = *(float*)&v90 + 0x1.4000000000000p+1f;
              v167 = *(float*)&v90 + 0x1.4000000000000p+1f;
              v166 = LANES128(v74).n128_u64[0];
              LANES128(v74).n128_f32[0] = v163;
              while (1) {
                v175 = v74;
                v92 = v79;
                v93 = LANES128(v74).n128_u32[0];
                LANES128(v94).n128_u64[0] = v168;
                LANES128(v94).n128_u64[1] = v93;
                v170 = vsubq_f32(v94, v176);
                v95 = GameRoutine_1a09f80(v91);
                v96 = GameRoutine_1a09f70(v91);
                LANES128(v97).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v170, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v98).n128_u64[0] = LANES128(v170).n128_u64[0];
                *(float*)&v99 = v95 + PSEUDO_UNFUSED(v96 * 0x0.0p+0);
                LANES128(v98).n128_u64[1] = LANES128(v97).n128_u64[0];
                *(float*)&v100 =
                    PSEUDO_UNFUSED(v96 * -0x0.0p+0) + v95 * 0x0.0p+0;
                *(float*)&v101 = v96 + PSEUDO_UNFUSED(v95 * 0x0.0p+0);
                LANES128(v102).n128_u64[0] = __PAIR64__(v101, v100);
                LANES128(v102).n128_u64[1] = __PAIR64__(v99, v100);
                v103 =
                    vmulq_f32(v102, COERCE_AS(float32x4_t, GameData_1a829d0));
                LANES128(v102).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v170, COERCE_AS(int8x8_t,
                                                         0xF0E0D0C0F0E0D0CLL)))
                        .n64_u64[0];
                LANES128(v104).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v103, COERCE_AS(int8x8_t,
                                                         0xF0E0D0C0F0E0D0CLL)))
                        .n64_u64[0];
                LANES128(v102).n128_u64[1] = LANES128(v102).n128_u64[0];
                *(int8x8_t*)&LANES128(v104).n128_i8[8] =
                    vqtbl1_s8(v103, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                LANES128(v105).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v103, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                v106 = vmlaq_f32(vmulq_f32(v102, v103),
                                 COERCE_AS(float32x4_t, GameData_1a83800),
                                 vmulq_f32(v98, v104));
                LANES128(v104).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v170, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int32x2_t*)&LANES128(v105).n128_i8[8] = vdup_lane_s32(
                    COERCE_AS(int32x2_t, LANES128(v103).n128_u64[0]), 1);
                LANES128(v97).n128_u64[1] = LANES128(v104).n128_u64[0];
                LANES128(v104).n128_u64[1] = LANES128(v170).n128_u64[0];
                v107 = vmlaq_f32(v106, COERCE_AS(float32x4_t, GameData_1a83800),
                                 vmulq_f32(v104, v105));
                LANES128(v104).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v103, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v104).n128_i8[8] =
                    vqtbl1_s8(v103, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                LANES128(v103).n128_u64[0] = __PAIR64__(v101, v100);
                DWORDn(v100, sizeof(v100) / 4 - 1) = v99;
                v108 = vmlsq_f32(v107, v104, v97);
                LANES128(v109).n128_u64[0] = __PAIR64__(v101, v100);
                LANES128(v97).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v108, COERCE_AS(int8x8_t,
                                                         0xF0E0D0C0F0E0D0CLL)))
                        .n64_u64[0];
                LANES128(v105).n128_u64[0] = __PAIR64__(v101, v100);
                LANES128(v109).n128_u64[1] = v100;
                *(int8x8_t*)&LANES128(v97).n128_i8[8] =
                    vqtbl1_s8(v108, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                LANES128(v110).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v109, COERCE_AS(int8x8_t,
                                                         0xF0E0D0C0F0E0D0CLL)))
                        .n64_u64[0];
                LANES128(v111).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v109, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v109).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v109, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v110).n128_u64[1] = LANES128(v110).n128_u64[0];
                LANES128(v105).n128_u64[1] = LANES128(v111).n128_u64[0];
                LANES128(v111).n128_u64[1] = LANES128(v109).n128_u64[0];
                LANES128(v109).n128_u64[1] = LANES128(v103).n128_u64[0];
                v112 = vmlaq_f32(vmulq_f32(v110, v108),
                                 COERCE_AS(float32x4_t, GameData_1a83800),
                                 vmulq_f32(v105, v97));
                LANES128(v97).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v108, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int32x2_t*)&LANES128(v97).n128_i8[8] = vdup_lane_s32(
                    COERCE_AS(int32x2_t, LANES128(v108).n128_u64[0]), 1);
                v113 = vmlaq_f32(v112, COERCE_AS(float32x4_t, GameData_1a83800),
                                 vmulq_f32(v109, v97));
                LANES128(v109).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v108, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v109).n128_i8[8] =
                    vqtbl1_s8(v108, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                v114 = vaddq_f32(v176, vmlsq_f32(v113, v109, v111));
                LANES128(v114).n128_u32[3] = 0;
                if ((unsigned __int64)v81 >= v82) {
                  v115 = (char*)v81 - v80;
                  v116 = ((__int64)v81 - v80) >> 5;
                  v117 = v116 + 1;
                  if ((unsigned __int64)(v116 + 1) >> 59 != 0) {
                    goto LABEL_240;
                  }
                  v171 = v114;
                  if ((__int64)(v82 - v80) >> 4 > v117) {
                    v117 = (__int64)(v82 - v80) >> 4;
                  }
                  if (v82 - v80 >= 0x7FFFFFFFFFFFFFE0LL) {
                    v117 = 0x7FFFFFFFFFFFFFFLL;
                  }
                  if (v117 >> 59 != 0) {
                    goto LABEL_241;
                  }
                  v118 = 32 * v117;
                  v119 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v117, 16, 0);
                  v120 = (float32x4_t*)&v115[v119];
                  v121 = (__int64)&v115[v119 + -32 * v116];
                  LANES128(v120[1]).n128_u32[0] = 1075838976;
                  LANES128(v120[1]).n128_u8[4] = 1;
                  *v120 = v171;
                  if ((float32x4_t*)v80 != v81) {
                    v122 = v80;
                    v123 = v121;
                    do {
                      *(_QWORD*)(v123 + 8) = *(_QWORD*)(v122 + 8);
                      *(_QWORD*)v123 = *(_QWORD*)v122;
                      v124 = *(_DWORD*)(v122 + 16);
                      v125 = *(_BYTE*)(v122 + 20);
                      v122 += 32;
                      *(_BYTE*)(v123 + 20) = v125;
                      *(_DWORD*)(v123 + 16) = v124;
                      v123 += 32;
                    } while ((float32x4_t*)v122 != v81);
                  }
                  v82 = v119 + v118;
                  v81 = v120 + 2;
                  if (v80 != 0) {
                    v126 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v126 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v126, v80);
                  }
                  v80 = v121;
                }
                else {
                  *v81 = v114;
                  LANES128(v81[1]).n128_u32[0] = 1075838976;
                  LANES128(v81[1]).n128_u8[4] = 1;
                  v81 += 2;
                }
                v79 = v92;
                if (v167 < v169) {
                  v74 = v175;
                  if ((float)(LANES128(v175).n128_f32[0] +
                              0x1.4000000000000p+1f) >= v92) {
                    goto LABEL_205;
                  }
                  LANES128(v127).n128_u64[0] = v166;
                  LANES128(v127).n128_u64[1] = COERCE_UNSIGNED_INT(
                      LANES128(v175).n128_f32[0] + 0x1.4000000000000p+1f);
                  v172 = vsubq_f32(v127, v176);
                  v128 = GameRoutine_1a09f80(v165);
                  v129 = GameRoutine_1a09f70(v165);
                  LANES128(v130).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v172,
                                    COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                          .n64_u64[0];
                  LANES128(v131).n128_u64[0] = LANES128(v172).n128_u64[0];
                  *(float*)&v132 = v128 + PSEUDO_UNFUSED(v129 * 0x0.0p+0);
                  LANES128(v131).n128_u64[1] = LANES128(v130).n128_u64[0];
                  *(float*)&v133 =
                      PSEUDO_UNFUSED(v129 * -0x0.0p+0) + v128 * 0x0.0p+0;
                  *(float*)&v134 = v129 + PSEUDO_UNFUSED(v128 * 0x0.0p+0);
                  LANES128(v135).n128_u64[0] = __PAIR64__(v134, v133);
                  LANES128(v135).n128_u64[1] = __PAIR64__(v132, v133);
                  v136 =
                      vmulq_f32(v135, COERCE_AS(float32x4_t, GameData_1a829d0));
                  LANES128(v135).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v172,
                                    COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                          .n64_u64[0];
                  LANES128(v137).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v136,
                                    COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                          .n64_u64[0];
                  LANES128(v135).n128_u64[1] = LANES128(v135).n128_u64[0];
                  *(int8x8_t*)&LANES128(v137).n128_i8[8] =
                      vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                  LANES128(v138).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v136,
                                    COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                          .n64_u64[0];
                  v139 = vmlaq_f32(vmulq_f32(v135, v136),
                                   COERCE_AS(float32x4_t, GameData_1a83800),
                                   vmulq_f32(v131, v137));
                  LANES128(v137).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v172,
                                    COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                          .n64_u64[0];
                  *(int32x2_t*)&LANES128(v138).n128_i8[8] = vdup_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v136).n128_u64[0]), 1);
                  LANES128(v130).n128_u64[1] = LANES128(v137).n128_u64[0];
                  LANES128(v137).n128_u64[1] = LANES128(v172).n128_u64[0];
                  v140 =
                      vmlaq_f32(v139, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v137, v138));
                  LANES128(v137).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v136,
                                    COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                          .n64_u64[0];
                  *(int8x8_t*)&LANES128(v137).n128_i8[8] =
                      vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                  LANES128(v136).n128_u64[0] = __PAIR64__(v134, v133);
                  DWORDn(v133, sizeof(v133) / 4 - 1) = v132;
                  v141 = vmlsq_f32(v140, v137, v130);
                  LANES128(v142).n128_u64[0] = __PAIR64__(v134, v133);
                  LANES128(v130).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v141,
                                    COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                          .n64_u64[0];
                  LANES128(v138).n128_u64[0] = __PAIR64__(v134, v133);
                  LANES128(v142).n128_u64[1] = v133;
                  *(int8x8_t*)&LANES128(v130).n128_i8[8] =
                      vqtbl1_s8(v141, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
                  LANES128(v143).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v142,
                                    COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                          .n64_u64[0];
                  LANES128(v144).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v142,
                                    COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                          .n64_u64[0];
                  LANES128(v142).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v142,
                                    COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                          .n64_u64[0];
                  LANES128(v143).n128_u64[1] = LANES128(v143).n128_u64[0];
                  LANES128(v138).n128_u64[1] = LANES128(v144).n128_u64[0];
                  LANES128(v144).n128_u64[1] = LANES128(v142).n128_u64[0];
                  LANES128(v142).n128_u64[1] = LANES128(v136).n128_u64[0];
                  v145 = vmlaq_f32(vmulq_f32(v143, v141),
                                   COERCE_AS(float32x4_t, GameData_1a83800),
                                   vmulq_f32(v138, v130));
                  LANES128(v130).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v141,
                                    COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                          .n64_u64[0];
                  *(int32x2_t*)&LANES128(v130).n128_i8[8] = vdup_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v141).n128_u64[0]), 1);
                  v146 =
                      vmlaq_f32(v145, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v142, v130));
                  LANES128(v142).n128_u64[0] =
                      LANES64_OF(
                          vqtbl1_s8(v141,
                                    COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                          .n64_u64[0];
                  *(int8x8_t*)&LANES128(v142).n128_i8[8] =
                      vqtbl1_s8(v141, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                  v147 = vaddq_f32(v176, vmlsq_f32(v146, v142, v144));
                  LANES128(v147).n128_u32[3] = 0;
                  if ((unsigned __int64)v81 < v82) {
                    v91 = (float)(v66 * 0x1.1df46a0000000p-6f) *
                          0x1.0000000000000p-1;
                    *v81 = v147;
                    LANES128(v81[1]).n128_u32[0] = 1075838976;
                    v79 = v92;
                    LANES128(v81[1]).n128_u8[4] = 1;
                    v81 += 2;
                  }
                  else {
                    v91 = (float)(v66 * 0x1.1df46a0000000p-6f) *
                          0x1.0000000000000p-1;
                    v148 = (char*)v81 - v80;
                    v149 = ((__int64)v81 - v80) >> 5;
                    v150 = v149 + 1;
                    if ((unsigned __int64)(v149 + 1) >> 59 != 0) {
                    LABEL_240:
                      GameRoutine_d28710();
                    }
                    v173 = v147;
                    if ((__int64)(v82 - v80) >> 4 > v150) {
                      v150 = (__int64)(v82 - v80) >> 4;
                    }
                    if (v82 - v80 >= 0x7FFFFFFFFFFFFFE0LL) {
                      v150 = 0x7FFFFFFFFFFFFFFLL;
                    }
                    if (v150 >> 59 != 0) {
                    LABEL_241:
                      GameRoutine_60a210();
                    }
                    v151 = 32 * v150;
                    v152 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v150, 16,
                        0);
                    v153 = (float32x4_t*)&v148[v152];
                    v154 = (__int64)&v148[v152 + -32 * v149];
                    LANES128(v153[1]).n128_u32[0] = 1075838976;
                    LANES128(v153[1]).n128_u8[4] = 1;
                    *v153 = v173;
                    if ((float32x4_t*)v80 != v81) {
                      v155 = v80;
                      v156 = v154;
                      do {
                        *(_QWORD*)(v156 + 8) = *(_QWORD*)(v155 + 8);
                        *(_QWORD*)v156 = *(_QWORD*)v155;
                        v157 = *(_DWORD*)(v155 + 16);
                        v158 = *(_BYTE*)(v155 + 20);
                        v155 += 32;
                        *(_BYTE*)(v156 + 20) = v158;
                        *(_DWORD*)(v156 + 16) = v157;
                        v156 += 32;
                      } while ((float32x4_t*)v155 != v81);
                    }
                    v82 = v152 + v151;
                    v81 = v153 + 2;
                    if (v80 != 0) {
                      v159 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v159 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v159, v80);
                    }
                    v79 = v92;
                    v80 = v154;
                  }
                }
                v74 = v175;
              LABEL_205:
                LANES128(v74).n128_f32[0] =
                    LANES128(v74).n128_f32[0] + 0x1.4000000000000p+2f;
                if (LANES128(v74).n128_f32[0] > v79) {
                  v90 = v164;
                  *(float*)&v90 = *(float*)&v164 + 0x1.4000000000000p+2f;
                  if ((float)(*(float*)&v164 + 0x1.4000000000000p+2f) > v169) {
                    goto LABEL_190;
                  }
                  goto LABEL_202;
                }
              }
            }
          }
          v80 = 0;
          v81 = nullptr;
          v82 = 0;
        LABEL_190:
          v83 = *(_QWORD**)GameData_212c7d8[0];
          v84 = *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 168LL);
          if (v84 != 0) {
            v83[22] = v84;
            v85 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v85 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v84);
          }
          v83[21] = v80;
          v83[22] = v81;
          v83[23] = v82;
          Field_1013090(v162, &v177_.v177, v66 + 0x0.0p+0f, v161, v160);
          Field_1013090(v162, &v177_.v177, v66 + 0x1.6800000000000p+6f, v160,
                        v161);
          Field_1013090(v162, &v177_.v177, v66 + 0x1.6800000000000p+7f, v161,
                        v160);
          Field_1013090(v162, &v177_.v177, v66 + 0x1.0e00000000000p+8f, v160,
                        v161);
          v86 = *GameData_212f2e0;
          *(_QWORD*)(v86 + 128) = LANES128(v176).n128_u64[0];
          *(_BYTE*)(v86 + 113) = 1;
          v87 = *(_OWORD*)(v86 + 128);
          *((_QWORD*)&v87 + 1) = LANES128(v176).n128_u32[2];
          *(_OWORD*)(v86 + 128) = v87;
          if ((GameData_2216858 & 1) != 0) {
            if (GameData_2216810 != 0) {
              v88 = *(const char**)(GameData_2216810 + 32);
              if (v88 != nullptr) {
                v89 = (_QWORD*)v162[9];
                if (GameRoutine_1a09d30(v88, "BD12_07") == 0) {
                  game_1015e40(v89);
                }
              }
            }
            return;
          }
        LABEL_242:
          GameRoutine_8123d0();
        }
        LANES128(v177_.v177).n128_u8[0] = 8;
        strcpy(&LANES128(v177_.v177).n128_i8[1], "Map/");
        v33 = GameRoutine_1a09c70(v32);
        if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_243;
        }
        v34 = v33;
        if (v33 >= 0x17) {
          if ((v33 | 7) == 0x17) {
            v36 = 26;
          }
          else {
            v36 = (v33 | 7) + 1;
          }
          v35 = (const char*)fw_memory_HeapManager_Allocate_alt1(*v16, v36, 16,
                                                                 0);
          v197_.v198 = v34;
          v197_.v199 = v35;
          v197_.v197 = v36 | 1;
        }
        else {
          LOBYTE(v197_.v197) = 2 * v33;
          v35 = (char*)&v197_.v197 + 1;
          if (v33 == 0) {
          LABEL_85:
            v35[v34] = 0;
            if ((v197_.v197 & 1) != 0) {
              v37 = v197_.v199;
            }
            else {
              v37 = (char*)&v197_.v197 + 1;
            }
            if ((v197_.v197 & 1) != 0) {
              v38 = v197_.v198;
            }
            else {
              v38 = (unsigned __int64)(unsigned __int8)v197_.v197 >> 1;
            }
            v39 = (_QWORD*)GameRoutine_1a09ce0((__int64)&v177_.v177, v37, v38);
            v41 = v39[1];
            v40 = v39[2];
            v195_.v195[0] = *v39;
            v195_.v195[1] = v41;
            v195_.v196 = (const char*)v40;
            v39[1] = 0;
            v39[2] = 0;
            *v39 = 0;
            if ((v197_.v197 & 1) != 0 && v197_.v199 != nullptr) {
              v42 = 128;
              if (*(_QWORD*)(*v16 + 200) == 0) {
                v42 = 56;
              }
              nn_mem_StandardAllocator_Free(*v16 + v42, (__int64)v197_.v199);
            }
            if ((LANES128(v177_.v177).n128_u8[0] & 1) != 0 &&
                v177_.v178 != nullptr) {
              v43 = 128;
              if (*(_QWORD*)(*v16 + 200) == 0) {
                v43 = 56;
              }
              nn_mem_StandardAllocator_Free(*v16 + v43, (__int64)v177_.v178);
            }
            if (v5[5] != 0) {
              v44 = (const char*)v5[5];
            }
            else {
              v44 = &GameData_1a9f09e;
            }
            v45 = GameRoutine_1a09c70(v44);
            if (v45 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_243;
            }
            v46 = v45;
            if (v45 >= 0x17) {
              if ((v45 | 7) == 0x17) {
                v48 = 26;
              }
              else {
                v48 = (v45 | 7) + 1;
              }
              v47 =
                  (char*)fw_memory_HeapManager_Allocate_alt1(*v16, v48, 16, 0);
              v194[1] = v46;
              v194[2] = v47;
              v194[0] = v48 | 1;
            }
            else {
              LOBYTE(v194[0]) = 2 * v45;
              v47 = (char*)v194 + 1;
              if (v45 == 0) {
              LABEL_113:
                v47[v46] = 0;
                GameRoutine_1a0ba50_alt1((__int64)&v177_.v177, 0, 0x140u);
                v182_.v190 = 0;
                v182_.v193 = 0;
                v49 = *((_QWORD*)GameData_212c540 + 1);
                v182_.v184 = *(_QWORD*)GameData_212c540;
                v182_.v185 = v49;
                if ((v195_.v195[0] & 1) != 0) {
                  v50 = v195_.v196;
                }
                else {
                  v50 = (char*)v195_.v195 + 1;
                }
                GameRoutine_60a020((__int64)&v177_.v177, v50);
                if ((v179_.v179[0] & 1) != 0) {
                  if ((v194[0] & 1) != 0) {
                    v51 = (char*)v194[2];
                  }
                  else {
                    v51 = (char*)v194 + 1;
                  }
                  if ((v194[0] & 1) != 0) {
                    v52 = v194[1];
                  }
                  else {
                    v52 = (unsigned __int64)LOBYTE(v194[0]) >> 1;
                  }
                  SpineModel_64dde0(v179_.v179, (__int64)v51, v52);
                }
                else if ((v194[0] & 1) != 0) {
                  GameRoutine_64df20(v179_.v179, v194[2], v194[1]);
                }
                else {
                  qmemcpy(v179_.v179, v194, sizeof(v179_.v179));
                }
                v179_.v180 = 1;
                if ((v182_.v183 & 1) == 0) {
                  v182_.v183 = 1;
                }
                v182_.v182[6] = 20;
                if ((v182_.v189 & 1) != 0) {
                  v182_.v191 = 6;
                  v53 = v182_.v192;
                }
                else {
                  v53 = &v182_.v190;
                  v182_.v189 = 12;
                }
                strcpy(v53, "CmdBtl");
                v179_.v181 = (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 8LL) & 8) != 0;
                if (v5[6] != 0) {
                  v54 = (const char*)v5[6];
                }
                else {
                  v54 = &GameData_1a9f09e;
                }
                v55 = GameRoutine_1a09c70(v54);
                if (v55 < 0xFFFFFFFFFFFFFFF7LL) {
                  v56 = v55;
                  if (v55 >= 0x17) {
                    if ((v55 | 7) == 0x17) {
                      v58 = 26;
                    }
                    else {
                      v58 = (v55 | 7) + 1;
                    }
                    v57 = (const char*)fw_memory_HeapManager_Allocate_alt1(
                        *v16, v58, 16, 0);
                    v197_.v198 = v56;
                    v197_.v199 = v57;
                    v197_.v197 = v58 | 1;
                  }
                  else {
                    LOBYTE(v197_.v197) = 2 * v55;
                    v57 = (char*)&v197_.v197 + 1;
                    if (v55 == 0) {
                      goto LABEL_144;
                    }
                  }
                  GameRoutine_1a0b940((__int64)v57, (__int64)v54, v56);
                LABEL_144:
                  v59 = v182_.v186;
                  v57[v56] = 0;
                  if ((v59 & 1) != 0 && v182_.v188 != nullptr) {
                    v60 = 128;
                    if (*(_QWORD*)(*v16 + 200) == 0) {
                      v60 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v16 + v60,
                                                  (__int64)v182_.v188);
                  }
                  v182_.v186 = v197_.v197;
                  v182_.v187 = v197_.v198;
                  v197_.v197 = (__int64)GameData_2001b68;
                  v197_.v198 = a1;
                  v182_.v188 = v197_.v199;
                  v197_.v200 = &v197_.v197;
                  GameRoutine_c18930(&v197_.v197, v182_.v182);
                  if (v197_.v200 == &v197_.v197) {
                    v61 = 32;
                  }
                  else {
                    if (v197_.v200 == nullptr) {
                      goto LABEL_154;
                    }
                    v61 = 40;
                  }
                  (*(void (**)(__int64))(*v197_.v200 + v61))(
                      (__int64)v197_.v200);
                LABEL_154:
                  GameRoutine_a85120(*(_QWORD*)GameData_212c638,
                                     (unsigned __int8*)&v177_.v177);
                  GameRoutine_a853b0((__int64)&v177_.v177);
                  if ((v194[0] & 1) != 0 && v194[2] != 0) {
                    v62 = 128;
                    if (*(_QWORD*)(*v16 + 200) == 0) {
                      v62 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v16 + v62, v194[2]);
                  }
                  if ((v195_.v195[0] & 1) != 0 && v195_.v196 != nullptr) {
                    v63 = 128;
                    if (*(_QWORD*)(*v16 + 200) == 0) {
                      v63 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v16 + v63,
                                                  (__int64)v195_.v196);
                  }
                  goto LABEL_164;
                }
              LABEL_243:
                String_60a1d0();
              }
            }
            GameRoutine_1a0b940((__int64)v47, (__int64)v44, v46);
            goto LABEL_113;
          }
        }
        GameRoutine_1a0b940((__int64)v35, (__int64)v32, v34);
        goto LABEL_85;
      }
    }
    GameRoutine_1a0b940((__int64)v8, (__int64)v4, v7);
    goto LABEL_16;
  }
}

void memory_1756fe0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  int v4;
  int v5;
  unsigned __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  float v12;
  float v13;
  bool v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned int v20;
  int v21;
  _BOOL4 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  float v32;
  float v33;
  float v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  char* v44;
  signed int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _QWORD* v85;
  __int64 v86;
  _QWORD* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64* v94;
  char* v95;
  __int64** v96;
  unsigned __int64 v97;
  __int64 v98;
  char* v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  signed __int64 v105;
  __int64* v106;
  __int64 v107;
  __int64** v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64* v116;
  unsigned __int64 v117;
  int v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  struct {
    __int64 v122;
    __int64 v123;
  } v122_;
  __int64* v124;
  __int64 v125;
  __int128 v126;
  __int64 v127;
  __int64 v128;
  __int16 v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143[3];

  v2 = **(_QWORD**)(a1 + 408);
  if (v2 != 0) {
    v3 = *(_DWORD*)(a1 + 424);
    v4 = *(_DWORD*)(v2 + 504);
    v5 = *(unsigned __int8*)(v2 + 498);
    v6 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    if ((int)v6 >= 99) {
      LODWORD(v6) = 99;
    }
    v7 = *(_DWORD*)(GameData_21d9968 + 4LL * (int)v6 - 4);
    *(_DWORD*)(a1 + 116) = v3;
    *(_DWORD*)(a1 + 120) = v5;
    *(float*)(a1 + 112) = (float)v3;
    *(_DWORD*)(a1 + 104) = v4;
    *(_DWORD*)(a1 + 108) = v4;
    *(float*)(a1 + 128) = (float)v4;
    if (v7 >= v3 + v4) {
      v8 = v3 + v4;
    }
    else {
      v8 = v7;
    }
    if (v3 + v4 >= 0) {
      v9 = v8;
    }
    else {
      v9 = 0;
    }
    *(_DWORD*)(a1 + 132) = v9;
    if (v4 >= v7) {
      *(_BYTE*)(a1 + 124) = 1;
      if ((v3 & 0x80000000) == 0) {
        *(_BYTE*)(a1 + 144) = 0;
      LABEL_16:
        *(_DWORD*)(a1 + 112) = 0;
      LABEL_17:
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 96) + 40LL))(a1 + 96);
        if (v10 != 0) {
          if (v3 >= 0) {
            v11 = v3;
          }
          else {
            v11 = -v3;
          }
          v12 = 0x1.8000000000000p+0f;
          v13 = (float)((float)v11 / (float)v10) * 0x1.8000000000000p+0f;
          if (v13 <= 0x1.8000000000000p+0f) {
            v12 = (float)((float)v11 / (float)v10) * 0x1.8000000000000p+0f;
          }
          v14 = v13 < 0x0.0p+0f;
          v15 = 0x0.0p+0f;
          if (!v14) {
            v15 = v12;
          }
        }
        else {
          v15 = 0x1.8000000000000p+0f;
        }
        *(float*)(a1 + 136) = v15;
        *(_WORD*)(a1 + 125) = 0;
        *(_BYTE*)(a1 + 145) = 1;
        if (*(_QWORD*)(v2 + 408) != 0) {
          goto LABEL_66;
        }
        v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 400) + 24LL) + 1104LL);
        if (v16 == 0) {
          goto LABEL_66;
        }
        v17 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 1104LL);
        if (v17 != 0) {
          v18 = *(_QWORD*)(v2 + 560);
          v19 = *(unsigned __int16*)(v17 + 16);
          if (v19 >= (*(_QWORD*)(v2 + 568) - v18) >> 1) {
            v20 = 0;
          }
          else {
            v20 = *(_WORD*)(v18 + 2 * v19) & 0x3FF;
          }
          v21 = *(_DWORD*)(a1 + 428);
          v23 = *(_QWORD*)(*(_QWORD*)(v17 + 24) + 1104LL);
          if (v23 != 0 && (v24 = *(unsigned __int16*)(v23 + 412),
                           *(_WORD*)(v23 + 412) != 0)) {
            v25 = *(_QWORD*)(v2 + 560);
            v26 = *(unsigned __int16*)(v23 + 16);
            if (v26 >= (*(_QWORD*)(v2 + 568) - v25) >> 1) {
              v27 = 0;
            }
            else {
              v27 = *(_WORD*)(v25 + 2 * v26) & 0x3FF;
            }
            v22 = v27 < v24;
          }
          else {
            v22 = true;
          }
          LODWORD(v17) = *(unsigned __int16*)(v17 + 412);
        }
        else {
          v21 = *(_DWORD*)(a1 + 428);
          v20 = 0;
          v22 = true;
        }
        *(_DWORD*)(a1 + 244) = v21;
        *(_DWORD*)(a1 + 248) = v22;
        *(_DWORD*)(a1 + 352) = v17;
        *(_DWORD*)(a1 + 232) = v20;
        *(_DWORD*)(a1 + 236) = v20;
        if ((int)v17 >= (int)(v21 + v20)) {
          v28 = v21 + v20;
        }
        else {
          v28 = v17;
        }
        *(float*)(a1 + 240) = (float)v21;
        if ((int)(v21 + v20) >= 0) {
          v29 = v28;
        }
        else {
          v29 = 0;
        }
        *(_DWORD*)(a1 + 260) = v29;
        *(float*)(a1 + 256) = (float)v20;
        if (v20 >= (unsigned int)v17) {
          *(_BYTE*)(a1 + 252) = 1;
          if ((v21 & 0x80000000) == 0) {
            *(_BYTE*)(a1 + 272) = 0;
            goto LABEL_54;
          }
        }
        else {
          *(_BYTE*)(a1 + 252) = 0;
          if ((v21 & 0x80000000) == 0) {
            *(_BYTE*)(a1 + 272) = 0;
          LABEL_55:
            v30 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 224) + 40LL))(a1 +
                                                                          224);
            if (v30 != 0) {
              if (v21 >= 0) {
                v31 = v21;
              }
              else {
                v31 = -v21;
              }
              v32 = 0x1.8000000000000p+0f;
              v33 = (float)((float)v31 / (float)v30) * 0x1.8000000000000p+0f;
              if (v33 <= 0x1.8000000000000p+0f) {
                v32 = (float)((float)v31 / (float)v30) * 0x1.8000000000000p+0f;
              }
              v14 = v33 < 0x0.0p+0f;
              v34 = 0x0.0p+0f;
              if (!v14) {
                v34 = v32;
              }
            }
            else {
              v34 = 0x1.8000000000000p+0f;
            }
            *(float*)(a1 + 264) = v34;
            *(_WORD*)(a1 + 253) = 0;
            *(_BYTE*)(a1 + 273) = 1;
          LABEL_66:
            v35 = 0;
            v36 = 0;
            v121 = v2 + 514;
            v120 = GameData_2131cf0[0] + 16;
            v115 = GameData_2131cf8[0] + 16;
            v116 = GameData_2130fa0[0] + 2;
            while (1) {
              v38 = game_Unit_GetJob(v2);
              if (v35 == 12) {
                if (*(_QWORD*)(*(_QWORD*)(v38 + 24) + 1112LL) == 0) {
                  goto LABEL_79;
                }
              }
              else if ((unsigned __int8)v35 == 10) {
                v39 = v38;
                LODWORD(v124) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x228LL) +
                               game_g_shared_system_skills_ptr + 4) &
                    0xFFF;
                if (game_HasSkill((_QWORD*)(v2 + 1744), &v124)) {
                  goto LABEL_79;
                }
                v38 = v39;
              }
              if (*(char*)(v38 + v35 + 398) < 0) {
                v40 = *(_QWORD*)(a1 + 56);
                if (v40 == 0) {
                  goto LABEL_150;
                }
                goto LABEL_147;
              }
            LABEL_79:
              v41 = *(_QWORD*)(a1 + 56);
              v125 = 0;
              *(_QWORD*)&v126 = 0;
              *(_QWORD*)((char*)&v126 + 7) = 0;
              v129 = 0;
              LOWORD(v130) = 0;
              LOWORD(v133) = 0;
              LOWORD(v136) = 0;
              v139 = 0;
              v140 = 0;
              v127 = 0;
              v128 = 1065353216;
              v124 = (__int64*)v120;
              if (v41 == 0) {
                goto LABEL_83;
              }
              v42 = std___1___shared_weak_count_lock(v41);
              if (v42 == 0) {
                goto LABEL_83;
              }
              v43 = *(__int64**)(a1 + 48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
                if (v43 != nullptr) {
                  goto LABEL_84;
                }
              LABEL_83:
                v43 = ui_LayoutAccessor_empty__ptr[0];
                goto LABEL_84;
              }
              v114 = v42;
              (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
              std___1___shared_weak_count___release_weak(v114);
              if (v43 == nullptr) {
                goto LABEL_83;
              }
            LABEL_84:
              v44 = game_util_Format("L_MasteryInfoItem%02d", v36);
              LayoutAccessor_1560070((void*)(&v122_.v122), v43, v44);
              v45 = *(unsigned __int16*)(v121 + 2 * v35);
              v46 = *(_DWORD*)(a1 + 436 + 4 * v35);
              v47 = v122_.v123;
              v143[0] = v122_.v122;
              v143[1] = v122_.v123;
              if (v122_.v123 != 0) {
                atomic_fetch_add_explicit(
                    (atomic_ullong* volatile)(v122_.v123 + 16), 1u,
                    memory_order_relaxed);
                GaugeUtil_1750020((__int64)&v124, v143, v2, v35, v45, v46);
                std___1___shared_weak_count___release_weak(v47);
                v48 = v122_.v123;
                if (v122_.v123 == 0) {
                  goto LABEL_87;
                }
              LABEL_86:
                std___1___shared_weak_count___release_weak(v48);
                goto LABEL_87;
              }
              GaugeUtil_1750020((__int64)&v124, v143, v2, v35, v45, v46);
              v48 = v122_.v123;
              if (v122_.v123 != 0) {
                goto LABEL_86;
              }
            LABEL_87:
              v50 = *(_QWORD*)(a1 + 368);
              v49 = *(_QWORD*)(a1 + 376);
              if (v50 < v49) {
                *(_QWORD*)v50 = v116;
                v51 = v126;
                *(_QWORD*)(v50 + 8) = v125;
                *(_QWORD*)(v50 + 16) = v51;
                v52 = *((_QWORD*)&v126 + 1);
                v53 = v127;
                v54 = v128;
                *(_WORD*)(v50 + 48) = v129;
                *(_QWORD*)(v50 + 32) = v53;
                *(_QWORD*)(v50 + 40) = v54;
                *(_QWORD*)(v50 + 24) = v52;
                if ((v130 & 1) != 0) {
                  fw_text_String_CopyTerminated((__int64*)(v50 + 56), v132,
                                                v131);
                  if ((v133 & 1) == 0) {
                    goto LABEL_104;
                  }
                LABEL_90:
                  fw_text_String_CopyTerminated((__int64*)(v50 + 80), v135,
                                                v134);
                  if ((v136 & 1) != 0) {
                    goto LABEL_91;
                  }
                LABEL_105:
                  v65 = v136;
                  v66 = v138;
                  *(_QWORD*)(v50 + 112) = v137;
                  *(_QWORD*)(v50 + 120) = v66;
                  *(_QWORD*)(v50 + 104) = v65;
                }
                else {
                  v55 = v130;
                  v56 = v132;
                  *(_QWORD*)(v50 + 64) = v131;
                  *(_QWORD*)(v50 + 72) = v56;
                  *(_QWORD*)(v50 + 56) = v55;
                  if ((v133 & 1) != 0) {
                    goto LABEL_90;
                  }
                LABEL_104:
                  v63 = v133;
                  v64 = v135;
                  *(_QWORD*)(v50 + 88) = v134;
                  *(_QWORD*)(v50 + 96) = v64;
                  *(_QWORD*)(v50 + 80) = v63;
                  if ((v136 & 1) == 0) {
                    goto LABEL_105;
                  }
                LABEL_91:
                  fw_text_String_CopyTerminated((__int64*)(v50 + 104), v138,
                                                v137);
                }
                *(_QWORD*)v50 = v115;
                *(_QWORD*)(v50 + 128) = v139;
                v67 = v140;
                *(_QWORD*)(v50 + 136) = v140;
                if (v67 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 16),
                                            1u, memory_order_relaxed);
                }
                v68 = v142;
                v69 = v50 + 160;
                *(_QWORD*)(v50 + 144) = v141;
                *(_QWORD*)(v50 + 152) = v68;
                *(_QWORD*)v50 = GameData_2131cf0[0] + 16;
                goto LABEL_129;
              }
              v57 = *(_QWORD*)(a1 + 360);
              v58 = v50 - v57;
              v59 = 1 - 0x3333333333333333LL * ((__int64)(v50 - v57) >> 5);
              if (v59 > 0x199999999999999LL) {
                GameRoutine_1745c20();
              }
              v60 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v49 - v57) >> 5);
              if (2 * v60 > v59) {
                v59 = 2 * v60;
              }
              if (v60 >= 0xCCCCCCCCCCCCCCLL) {
                v61 = 0x199999999999999LL;
              }
              else {
                v61 = v59;
              }
              if (v61 != 0) {
                if (v61 > 0x199999999999999LL) {
                  goto LABEL_173;
                }
                v62 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 160 * v61, 16, 0);
              }
              else {
                v62 = 0;
              }
              v119 = v62;
              v70 = v62 + v58;
              v71 = GameData_2130fa0[0];
              v72 = *((_QWORD*)&v126 + 1);
              v73 = v128;
              *(_QWORD*)(v70 + 32) = v127;
              *(_QWORD*)(v70 + 40) = v73;
              *(_WORD*)(v70 + 48) = v129;
              v74 = v125;
              v75 = v126;
              *(_QWORD*)v70 = v71 + 2;
              *(_QWORD*)(v70 + 8) = v74;
              LOBYTE(v71) = v130;
              *(_QWORD*)(v70 + 16) = v75;
              *(_QWORD*)(v70 + 24) = v72;
              if (((unsigned __int8)v71 & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)(v70 + 56), v132, v131);
                if ((v133 & 1) != 0) {
                LABEL_112:
                  fw_text_String_CopyTerminated((__int64*)(v70 + 80), v135,
                                                v134);
                  if ((v136 & 1) == 0) {
                    goto LABEL_116;
                  }
                  goto LABEL_113;
                }
              }
              else {
                v76 = v131;
                *(_QWORD*)(v70 + 56) = v130;
                *(_QWORD*)(v70 + 64) = v76;
                *(_QWORD*)(v70 + 72) = v132;
                if ((v133 & 1) != 0) {
                  goto LABEL_112;
                }
              }
              v77 = v134;
              *(_QWORD*)(v70 + 80) = v133;
              *(_QWORD*)(v70 + 88) = v77;
              *(_QWORD*)(v70 + 96) = v135;
              if ((v136 & 1) == 0) {
              LABEL_116:
                v78 = v137;
                *(_QWORD*)(v70 + 104) = v136;
                *(_QWORD*)(v70 + 112) = v78;
                *(_QWORD*)(v70 + 120) = v138;
                goto LABEL_117;
              }
            LABEL_113:
              fw_text_String_CopyTerminated((__int64*)(v70 + 104), v138, v137);
            LABEL_117:
              *(_QWORD*)v70 = GameData_2131cf8[0] + 16;
              v79 = v140;
              *(_QWORD*)(v70 + 128) = v139;
              *(_QWORD*)(v70 + 136) = v79;
              if (v79 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v79 + 16),
                                          1u, memory_order_relaxed);
              }
              v80 = v142;
              *(_QWORD*)(v70 + 144) = v141;
              *(_QWORD*)(v70 + 152) = v80;
              v82 = *(_QWORD*)(a1 + 360);
              v81 = *(_QWORD**)(a1 + 368);
              *(_QWORD*)v70 = GameData_2131cf0[0] + 16;
              v83 = v70 + v82 - (_QWORD)v81;
              if ((_QWORD*)v82 != v81) {
                v117 = v61;
                v118 = v36;
                v84 = v2;
                v85 = (_QWORD*)v82;
                v86 = v70 + v82 - (_QWORD)v81;
                do {
                  GameRoutine_1745c40(v86, v82);
                  v82 += 160;
                  v86 += 160;
                } while ((_QWORD*)v82 != v81);
                v87 = v85;
                v2 = v84;
                do {
                  v88 = *v85;
                  v85 += 20;
                  (*(void (**)(_QWORD*))(v88 + 24))(v87);
                  v87 = v85;
                } while (v85 != v81);
                v82 = *(_QWORD*)(a1 + 360);
                v36 = v118;
                v61 = v117;
              }
              v69 = v70 + 160;
              *(_QWORD*)(a1 + 360) = v83;
              *(_QWORD*)(a1 + 368) = v70 + 160;
              *(_QWORD*)(a1 + 376) = v119 + 160 * v61;
              if (v82 != 0) {
                v89 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v89 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v89, v82);
              }
            LABEL_129:
              *(_QWORD*)(a1 + 368) = v69;
              v124 = (__int64*)(GameData_2131cf8[0] + 16);
              if (v140 != 0) {
                std___1___shared_weak_count___release_weak(v140);
              }
              v124 = GameData_2130fa0[0] + 2;
              if ((v136 & 1) != 0 && v138 != 0) {
                v90 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v90 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v90, v138);
              }
              if ((v133 & 1) != 0 && v135 != 0) {
                v91 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v91 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v135);
              }
              if ((v130 & 1) != 0 && v132 != 0) {
                v92 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v92 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, v132);
              }
              ++v36;
              v40 = *(_QWORD*)(a1 + 56);
              if (v40 == 0) {
                goto LABEL_150;
              }
            LABEL_147:
              v93 = std___1___shared_weak_count_lock(v40);
              if (v93 == 0) {
                goto LABEL_150;
              }
              v94 = *(__int64**)(a1 + 48);
              if (atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
                if (v94 != nullptr) {
                  goto LABEL_151;
                }
              LABEL_150:
                v94 = ui_LayoutAccessor_empty__ptr[0];
                goto LABEL_151;
              }
              v113 = v93;
              (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93);
              std___1___shared_weak_count___release_weak(v113);
              if (v94 == nullptr) {
                goto LABEL_150;
              }
            LABEL_151:
              v95 = game_util_Format("L_MasteryInfoItem%02d", v35);
              LayoutAccessor_1560070((void*)(&v124), v94, v95);
              v96 = *(__int64***)(a1 + 392);
              v97 = *(_QWORD*)(a1 + 400);
              if ((unsigned __int64)v96 < v97) {
                v37 = (__int64)(v96 + 2);
                *v96 = v124;
                v96[1] = (__int64*)v125;
              }
              else {
                v98 = *(_QWORD*)(a1 + 384);
                v99 = (char*)v96 - v98;
                v100 = ((__int64)v96 - v98) >> 4;
                v101 = v100 + 1;
                if ((unsigned __int64)(v100 + 1) >> 60 != 0) {
                  GameRoutine_1387d40();
                }
                v102 = v97 - v98;
                if (v102 >> 3 > v101) {
                  v101 = v102 >> 3;
                }
                if ((unsigned __int64)v102 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v103 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v103 = v101;
                }
                if (v103 != 0) {
                  if (v103 >> 60 != 0) {
                  LABEL_173:
                    GameRoutine_60a210();
                  }
                  v104 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v103, 16, 0);
                  v98 = *(_QWORD*)(a1 + 384);
                  v105 = *(_QWORD*)(a1 + 392) - v98;
                  v100 = v105 >> 4;
                }
                else {
                  v104 = 0;
                  v105 = (signed __int64)v99;
                }
                v106 = v124;
                v107 = v125;
                v108 = (__int64**)&v99[v104];
                v109 = v104 + 16 * v103;
                v124 = nullptr;
                v125 = 0;
                v110 = (__int64)&v99[v104 + -16 * v100];
                v37 = (__int64)&v99[v104 + 16];
                *v108 = v106;
                v108[1] = (__int64*)v107;
                GameRoutine_1a0b950(v110, v98, v105);
                *(_QWORD*)(a1 + 384) = v110;
                *(_QWORD*)(a1 + 392) = v37;
                *(_QWORD*)(a1 + 400) = v109;
                if (v98 != 0) {
                  v111 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v111 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v111, v98);
                  v112 = v125;
                  *(_QWORD*)(a1 + 392) = v37;
                  if (v112 != 0) {
                    std___1___shared_weak_count___release_weak(v112);
                  }
                  goto LABEL_69;
                }
              }
              *(_QWORD*)(a1 + 392) = v37;
            LABEL_69:
              if (++v35 == 13) {
                goto LABEL_171;
              }
            }
          }
        }
        *(_BYTE*)(a1 + 272) = 1;
        if (v20 != 0) {
          goto LABEL_55;
        }
      LABEL_54:
        *(_DWORD*)(a1 + 240) = 0;
        goto LABEL_55;
      }
    }
    else {
      *(_BYTE*)(a1 + 124) = 0;
      if ((v3 & 0x80000000) == 0) {
        *(_BYTE*)(a1 + 144) = 0;
        goto LABEL_17;
      }
    }
    *(_BYTE*)(a1 + 144) = 1;
    if (v4 > 0) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
LABEL_171:
  *(_BYTE*)(a1 + 78) = 1;
}

#pragma GCC visibility pop
