#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_773420(__int64, __int64, long double);
__int64 GameRoutine_775580(__int64 (**)(), __int64, _QWORD*, long double);
__int64 GameRoutine_777700(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7807a0(__int64, _WORD*, int, int, __int64);
__int64 GameRoutine_844d10(_QWORD, _QWORD, _QWORD);
__int64 MapUtil_753570(int, int);
__int64 MapUtil_756080(__int64, __int64, unsigned int, unsigned int, _BYTE*);
__int64 Unit_6c9cf0(_QWORD, _QWORD);
__int64 Unit_6cbdc0(_QWORD*, _DWORD*, unsigned __int16*, int);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_Get_alt1(_QWORD,
                               long double) __asm__("game_UnitPool_Get");
__int64 game_Unit_GetJob(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
bool GameRoutine_7536a0(_BOOL8 result);
extern _UNKNOWN* GameData_212cf50;
extern __int64 (*GameData_1f97a90[])();
extern __int64 (*GameData_1f97b10[])();
extern __int64 (*GameData_1f97b90[])();
extern __int64 (*GameData_1f97c10[])();
extern __int64 (*GameData_1f97d10[])();
extern __int64 (*GameData_1f97d90[])();
extern __int64 (*GameData_1f97f00[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(void);
__int64 ITarget_772f60(__int64 a1, __int64 a2);
__int64 ITarget_7730f0(__int64 a1);
_QWORD* ITarget_773300(__int64 a1, long double a2);
__int64 game_map_ITarget_Enumerate(__int64 a1, long double a2);
__int64 ITarget_776720_alt1(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                            _DWORD* a5, __int64 a6) __asm__("ITarget_776720");
__int64 game_map_ITarget_EachSelectable_alt1(
    __int64 a1, __int64 a2, __int64 a3,
    __int64 a4) __asm__("game_map_ITarget_EachSelectable");
_QWORD* game_map_ITarget_EnumerateSubTarget_lambda0_Clone(_QWORD* a1);
__int64 game_map_ITarget_EnumerateSubTarget_lambda0_CloneInto(_QWORD* a1,
                                                              _QWORD* a2);
_QWORD* game_map_ITarget_EnumerateSubTarget_lambda1_Clone(_QWORD* a1);
__int64 game_map_ITarget_EnumerateSubTarget_lambda1_CloneInto(_QWORD* a1,
                                                              _QWORD* a2);
_QWORD* game_map_ITarget_EnumerateSubTarget_lambda2_Clone(_QWORD* a1);
__int64 game_map_ITarget_EnumerateSubTarget_lambda2_CloneInto(_QWORD* a1,
                                                              _QWORD* a2);
__int64 game_map_ITarget_EnumerateSubTarget_lambda2_Invoke(__int64 a1, int* a2,
                                                           int* a3);
__int64 game_map_ITarget_EachSelectable_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_map_ITarget_EachSelectable_lambda1_Invoke(__int64 a1, __int64 a2);
__int64 game_map_ITarget_EachTarget_lambda0_Invoke(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4);
__int64 game_map_ITarget_EachTarget_lambda1_Invoke_7820b0(__int64 a1,
                                                          __int64 a2,
                                                          long double a3);
__int64 game_map_ITarget_EachTarget_lambda1_Invoke_782210(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3,
                                                          __int64 a4);
__int64* game_UnitPool_Get_alt2(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_757f60(__int64 result, _DWORD*, unsigned int, unsigned int,
                           __int64);
__int64 MapUtil_753570_alt1(_QWORD, _QWORD) __asm__("MapUtil_753570");
__int64 MapUtil_753920(_QWORD, _QWORD, _QWORD);
__int64 MapUtil_753bb0(__int64 result);
__int64 MapUtil_756c20(_QWORD, _QWORD);
__int64 TargetEnumerator_77c150(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TargetEnumerator_77c150_alt1(__int64 result, __int64*, int,
                                     int) __asm__("TargetEnumerator_77c150");
__int64 TargetEnumerator_77cc80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TargetEnumerator_77e300(__int64, _DWORD*, __int64*);
__int64 TargetEnumerator_77f800(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TargetEnumerator_77fb20(_QWORD, _QWORD, _QWORD);
__int64 UnitItemList_70f9f0(_QWORD, _QWORD);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 Unit_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Unit_6c9cf0_alt1(__int64, __int64) __asm__("Unit_6c9cf0");
__int64 game_UnitSkillList_GetRangeAddImpl(_QWORD, _QWORD);
__int64 game_Unit_HasSkill(_QWORD, _QWORD);
__int64 game_Unit_IsUnlocked(_QWORD);
__int64 game_Unit_Unknown6c90c0(_QWORD);
__int64 game_map_7ca370(_QWORD, _QWORD, _QWORD, _QWORD);
bool MapUtil_7536a0(_BOOL8 result);
bool UnitItem_6e8e50(unsigned __int16*, __int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f959d8[])();
extern __int64 (*GameData_1f97380[])();
extern __int64 (*GameData_1f97400[])();
extern __int64 (*GameData_1f97490[])();
extern __int64 (*GameData_1f97510[])();
extern __int64 (*GameData_1f97890[])();
extern __int64 (*GameData_1f97910[])();
extern __int64 (*GameData_1f97990[])();
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
__int64 ITarget_773180(__int64 a1);
__int64 ITarget_773420_alt1(__int64 a1, __int64 a2, long double a3);
__int64 game_map_ITarget_EnumerateSubTarget_lambda0_Invoke(__int64 a1, int* a2,
                                                           int* a3);
__int64 game_map_ITarget_EnumerateSubTarget_lambda1_Invoke(__int64 a1, int* a2,
                                                           int* a3);
__int64 GameHr_777700(__int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_74e1f0_alt1() __asm__("GameRoutine_74e1f0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ITarget_776720(__int64 a1, char a2, char a3, unsigned __int8 a4,
                    _DWORD* a5, __int64 a6);
__int64 game_map_ITarget_EachSelectable(__int64 a1, __int64 a2, __int64 a3);
__int64* game_UnitPool_Get_alt3(_BYTE*);
__int64 TargetEnumerator_77c150_alt2(__int64 result, __int64*, int, int);
__int64 TargetEnumerator_77e300_alt1(__int64, _WORD*, __int64);
void __attribute__((noreturn)) GameRoutine_60a310_alt3();
__int64 MapUtil_753920_alt1(__int64 result, unsigned __int16*, __int64);
__int64 MapUtil_756c20_alt1(__int64, __int64);
__int64 TargetEnumerator_77cc80_alt1(__int64, int*, unsigned int, unsigned int,
                                     __int64);
__int64 TargetEnumerator_77f800_alt1(__int64, unsigned __int8, __int64, char);
__int64 TargetEnumerator_77fb20_alt1(__int64, int, __int64);
__int64 UnitItemList_70f9f0_alt1(unsigned __int16*, unsigned __int8);
__int64 Unit_6c8a80_alt1(__int64 result, int, int, __int64);
__int64 Unit_6c9cf0_alt2(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate_alt2(__int64, __int64, __int64,
                                            unsigned int);
__int64 game_UnitSkillList_GetRangeAddImpl_alt1(__int64, __int64);
__int64 game_Unit_HasSkill_alt1(__int64, unsigned int*);
__int64 game_Unit_Unknown6c90c0_alt1(__int64);
__int64 game_map_7ca370_alt1(__int64, int, int, __int64);
bool UnitItem_6e8bc0_alt1(unsigned __int16*, __int64);
bool game_Unit_IsUnlocked_alt1(__int64);
void GameRoutine_757f60_alt1(__int64, _DWORD*, unsigned int, unsigned int,
                             __int64);
__int64 ITarget_773420(__int64* a1, __int64 a2);

__int64 ITarget_772f60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  int v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  int v18;

  *(_BYTE*)(a1 + 8) = 0;
  v2 = a1 + 8;
  *(_DWORD*)(a1 + 28) = -1;
  *(_QWORD*)(a1 + 32) = 0;
  v4 = a1 + 32;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (a2 == 0) {
    return a1;
  }
  if (*(_BYTE*)(a2 + 8) == 0 || (v6 = game_UnitPool_Get(a2 + 8)) == 0) {
    *(_BYTE*)(a1 + 8) = 0;
    *(_BYTE*)(a1 + 24) = *(_BYTE*)(a2 + 20);
    v12 = *(_DWORD*)(a2 + 40);
    *(_DWORD*)(a1 + 28) = v12;
    if ((v12 & 0x80000000) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v7 = *(unsigned __int8*)(v6 + 2088);
  *(_BYTE*)(a1 + 8) = v7;
  *(_DWORD*)(a1 + 20) = *(_DWORD*)(v6 + 592);
  v8 = *(char*)(v6 + 585);
  *(_DWORD*)(a1 + 12) = *(char*)(v6 + 584);
  *(_DWORD*)(a1 + 16) = v8;
  *(_BYTE*)(a1 + 24) = *(_BYTE*)(a2 + 20);
  v9 = *(unsigned int*)(a2 + 40);
  *(_DWORD*)(a1 + 28) = v9;
  if ((v9 & 0x80000000) != 0) {
  LABEL_9:
    *(_QWORD*)v4 = 0;
    goto LABEL_10;
  }
  if (v7 != 0 && game_UnitPool_Get(v2) != 0) {
    v10 = game_UnitPool_Get(v2) + 8 * v9;
    v11 = *(_WORD*)(v10 + 828);
    *(_BYTE*)(v4 + 2) = *(_BYTE*)(v10 + 830);
    *(_WORD*)v4 = v11;
    *(_BYTE*)(a1 + 35) = *(_BYTE*)(v10 + 831);
    *(_DWORD*)(a1 + 36) = *(_DWORD*)(v10 + 832);
  }
LABEL_10:
  if ((*(_DWORD*)(a2 + 56) & 0xFFF) != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(a2 + 56) & 0xFFF));
    v14 = *(_DWORD*)(a1 + 40);
    if (v13 != 0) {
      v15 = v14 & 0xFFFFF000 | *(_WORD*)(v13 + 16) & 0xFFF;
      goto LABEL_15;
    }
  }
  else {
    v14 = *(_DWORD*)(a1 + 40);
  }
  v15 = v14 & 0xFFFFF000;
LABEL_15:
  *(_DWORD*)(a1 + 40) = v15;
  v16 = *(_DWORD*)(a2 + 60);
  if ((v16 & 0x80000000) != 0 ||
      (v17 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL)) == 0) {
    v18 = -1;
  }
  else {
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)(v17 + 144LL * v16) + 32LL))(
        v17 + 144LL * v16);
  }
  *(_DWORD*)(a1 + 44) = v18;
  return a1;
}

__int64 ITarget_7730f0(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  bool v6;

  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    return *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                      8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
  }
  v2 = *(unsigned __int16*)(a1 + 32);
  if (*(_WORD*)(a1 + 32) == 0) {
    v2 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v2);
  v4 = *(_QWORD*)(v3 + 192);
  v5 = *(unsigned __int8*)(v3 + 72);
  v6 = v4 == 0 || v5 > 7;
  if (v6 || *(_BYTE*)(v4 + 105) == 0) {
    return 0;
  }
  if (*(_BYTE*)(v4 + 104) == 2) {
    return 0;
  }
  return v4;
}

__int64 ITarget_773180(__int64 a1)
{
  _BYTE* v2;
  int v3;
  __int64* v4;
  _BYTE* v5;
  __int64* v6;
  int v7;
  _BOOL4 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  bool v19;

  v3 = *(unsigned __int8*)(a1 + 8);
  v2 = (_BYTE*)(a1 + 8);
  if (v3 == 0) {
    return 0;
  }
  v4 = game_UnitPool_Get_alt2(v2);
  if (v4 == nullptr) {
    return 0;
  }
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v5 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    v7 = *(unsigned __int16*)(a1 + 32);
    v6 = (__int64*)(a1 + 32);
    v8 = v7 == 0;
    if (v5 != nullptr) {
      goto LABEL_5;
    }
    v16 = *(unsigned __int16*)game_g_empty_item_ptr;
    goto LABEL_24;
  }
  v15 = *(unsigned __int16*)(a1 + 32);
  v6 = (__int64*)(a1 + 32);
  v14 = v15;
  v16 = *(unsigned __int16*)game_g_empty_item_ptr;
  v8 = v15 == 0;
  if (v15 == 0) {
    v14 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v17 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v14);
  v5 = *(_BYTE**)(v17 + 192);
  v18 = *(unsigned __int8*)(v17 + 72);
  v19 = v5 == nullptr || v18 > 7;
  if (v19 || v5[105] == 0 || v5[104] == 2) {
  LABEL_24:
    if (v16 != 0) {
      v8 = false;
    }
    return !v8;
  }
LABEL_5:
  if (v5[274] == 0) {
    return 0;
  }
  v9 = v8 ? game_g_empty_item_ptr : v6;
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *(unsigned __int16*)v9) +
                          72LL) <= 7u) {
    v10 = v4[218];
    v11 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                           game_g_shared_system_skills_ptr);
    if (((v11 >> 5) & 0x7F) + 1 <= (v4[219] - v10) >> 2 &&
        ((*(_DWORD*)(v10 + 4 * ((v11 >> 5) & 0x7F)) >> v11) & 1) != 0) {
      return 0;
    }
  }
  v12 = v4[55];
  if (v12 != 0) {
    v13 = *(_BYTE*)(v12 + 16);
  }
  else {
    v13 = 9;
  }
  if (((1 << v13) & 6) != 0) {
    return 0;
  }
  else {
    return (unsigned __int8)v5[274];
  }
}

_QWORD* ITarget_773300(__int64 a1, long double a2)
{
  __int64 v3;
  int v4;
  _QWORD* result;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;

  v4 = *(unsigned __int8*)(a1 + 8);
  v3 = a1 + 8;
  if (v4 == 0) {
    return nullptr;
  }
  result = (_QWORD*)game_UnitPool_Get_alt1(v3, a2);
  if (result == nullptr) {
    return result;
  }
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v6 != 0) {
    LABEL_5:
      v13 = *(_WORD*)(v6 + 16) & 0xFFF;
      return (_QWORD*)Unit_6cbdc0(result, &v13,
                                  (unsigned __int16*)game_g_empty_item_ptr, 0);
    }
    v7 = *(unsigned __int16*)(a1 + 32);
    v8 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  else {
    v7 = *(unsigned __int16*)(a1 + 32);
    v8 = *(unsigned __int16*)game_g_empty_item_ptr;
    if (*(_WORD*)(a1 + 32) != 0) {
      v9 = *(unsigned __int16*)(a1 + 32);
    }
    else {
      v9 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v9);
    v6 = *(_QWORD*)(v10 + 192);
    v11 = *(unsigned __int8*)(v10 + 72);
    v12 = v6 == 0 || v11 > 7;
    if (!v12 && *(_BYTE*)(v6 + 105) != 0 && *(_BYTE*)(v6 + 104) != 2) {
      goto LABEL_5;
    }
  }
  if (v7 == 0) {
    v7 = v8;
  }
  if (v7 != 0) {
    return (_QWORD*)*(
        unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * v7) +
                          90LL);
  }
  else {
    return nullptr;
  }
}

__int64 ITarget_773420(__int64* a1, __int64 a2)
{

#pragma clang fp contract(on)

  unsigned __int8* v2;
  __int64* v3;
  __int64 v4;
  __int64 v6;
  char v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  int v11;
  int v12;
  unsigned __int8* v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  __int64* v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  char v53;
  __int64 v54;
  int v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  unsigned __int8* v60;
  unsigned int v61;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  _BYTE* v73;
  bool v74;
  __int64* v75;
  int v76;
  int v77;
  unsigned __int8* v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  char v89;
  __int64 v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  unsigned int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  unsigned int v102;
  int v103;
  int v104;
  __int64 v105;
  unsigned int v106;
  __int64 v107;
  __int64 v108;
  __int64* v110;
  __int64 v111;
  char v112;
  __int64* v113;
  __int64 v114;
  __int64* v115;
  unsigned __int16* v116;
  __int64 v117;
  __int64 i;
  __int64 v119;
  __int64 v120;
  __int64* v121;
  char* v122;
  __int64 v123;
  __int64 v124;
  int v125;
  __int64 v126;
  __int64 v127;
  _BYTE* v128;
  bool v129;
  __int64* v130;
  __int64* v132;
  __int64* v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned int v137;
  __int64 v138;
  __int64 v139;
  __int64* v140;
  int v141;
  unsigned __int8 v142;
  __int64 v143;
  int v144;
  int v145;
  __int64* v146;
  unsigned int v147;
  __int64 v148;
  __int64 v149;
  unsigned int v150;
  bool v151;
  unsigned __int8* v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  bool v158;
  __int64 v159;
  bool v160;
  unsigned __int8* v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  bool v167;
  __int64 v168;
  bool v169;
  __int64 v170;
  int v171;
  int v172;
  int v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  _QWORD* v179;
  unsigned __int8* v180;
  int v181;
  unsigned __int8* v182;
  int v183;
  __int64* v184;
  char* v185;
  char* v186;
  __int64* v187;
  int v188;
  __int64 v189;
  _BYTE* v190;
  unsigned __int8* v191;
  __int64 v192;
  unsigned __int8* v193;
  int v194;
  __int64 v195;
  int v196;
  __int64 v197;
  bool v198;
  int v199;
  int v200;
  unsigned __int8* v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  int v212;
  int v213;
  int v214;
  int v215;
  int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  unsigned int v221;
  int v222;
  int v223;
  __int64* v225;
  __int64 v226;
  __int64 (***v227)();
  __int64* v228;
  __int64 v229;
  char* v230;
  char* v231;
  int v232;
  int v233;
  char v234;
  int v235;
  __int64 v236;
  __int64 v237;
  __int64 (***v238)();
  __int64* v239;
  __int64 v240;
  char* v241;
  char* v242;
  int v243;
  int v244;
  char v245;
  int v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  int v250;
  __int64* v251;
  __int64 v252;
  char* v253;
  char* v254;
  __int64* v255;
  int v256;
  _BYTE* v257;
  unsigned __int8* v258;
  __int64 v259;
  unsigned __int8* v260;
  int v261;
  __int64 v262;
  int v263;
  __int64 v264;
  bool v265;
  __int64* v266;
  int v267;
  int v268;
  unsigned __int8* v269;
  signed int v270;
  signed int v271;
  signed int v272;
  signed int v273;
  int v274;
  signed int v275;
  signed int v276;
  int v277;
  __int64* v278;
  char v279;
  char* v280;
  char* v281;
  __int64* v282;
  __int64 v283;
  char v284;
  int v285;
  char* v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  int v291;
  __int64 v292;
  __int64 v293;
  _BYTE* v294;
  unsigned int v296;
  unsigned int v297;
  __int64 v298;
  unsigned __int8* v299;
  unsigned __int8* v300;
  __int64 v301;
  unsigned __int8* v302;
  int v303;
  __int64 v304;
  _QWORD* v305;
  __int64 v306;
  __int64 (***v307)();
  char v308;
  __int64 v309;
  unsigned int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int v315;
  int v316;
  int v317;
  int v318;
  int v319;
  int v320;
  unsigned int v321;
  int v322;
  int v323;
  __int64 v325;
  __int64 v326;
  bool v327;
  bool v328;
  __int64* v329;
  __int64 v330;
  char v331;
  __int64* v332;
  __int64 v333;
  int v334;
  int v335;
  __int64 v336;
  __int64* v337;
  unsigned __int16* v338;
  char v339;
  __int64* v340;
  int v341;
  int v342;
  __int64 v343;
  __int64 v344;
  _BYTE* v345;
  int v347;
  __int64 v348;
  unsigned __int8* v349;
  unsigned __int8* v350;
  __int64 v351;
  __int64* v352;
  __int64 v353;
  unsigned __int8* v354;
  int v355;
  int v356;
  int v357;
  int v358;
  int v359;
  int v360;
  int v361;
  int v362;
  int v363;
  unsigned int v364;
  int v365;
  int v366;
  __int64 v368;
  char v369;
  __int64 v370;
  __int64 v371;
  char v372;
  __int64 v373;
  __int64 v374;
  __int64 (***v375)();
  __int64 (***v376)();
  __int64 (**v377)();
  __int64 v378;
  __int64 v379;
  __int64* v381;
  __int64 v382;
  unsigned int v383;
  unsigned int v384;
  __int64 v385;
  unsigned int v386;
  bool v387;
  int v388;
  __int64 v389;
  __int64 v390;
  unsigned int v391;
  int v392;
  int v393;
  int v394;
  signed int v395;
  signed int v396;
  char v397;
  int v398;
  __int64 v399;
  int v400;
  int v401;
  signed int v402;
  __int64 v404;
  int v405;
  int v406;
  int v407;
  int v408;
  int v409;
  __int64 v410;
  char* v411;
  int v412;
  int v413;
  int v414;
  char v415;
  int v416;
  int v417;
  int v418;
  int v419;
  __int64 v420;
  unsigned __int8* v421;
  __int64* v422;
  struct {
    int v423;
    char gap112_[1];
    char v424;
    __int16 v425;
    int v426;
  } v423_;
  struct {
    int v427;
    char v428;
    _BYTE v429[31];
    int v430;
  } v427_;
  __int128 v431;
  struct {
    _QWORD v432[2];
    __int128* v433;
    char gap200_[8];
    _QWORD* v434;
    char gap216_[8];
    __int64 (**v435)();
    __int64 (**v436)();
  } v432_;
  struct {
    __int64 (**v437)();
    int* v438;
    char gap256_[16];
    __int64 (***v439)();
    char gap280_[24];
    __int64 vars0;
    __int64 vars8;
    char gap320_[16];
    __int64 vars20;
    __int64 vars28;
    __int64 vars30;
  } v437_;
  __int64 vars38;

  v2 = (unsigned __int8*)(a1 + 1);
  if (*((_BYTE*)a1 + 8) == 0) {
    goto LABEL_383;
  }
  v3 = a1;
  LOBYTE(v4) = 0;
  v421 = (unsigned __int8*)(a1 + 1);
  switch (*((_BYTE*)a1 + 24)) {
  case 2:
    v75 = GameData_212ce98[0];
    v76 = *((_DWORD*)a1 + 3);
    v77 = *((_DWORD*)a1 + 4);
    v78 = (unsigned __int8*)*GameData_212ce98[0];
    if (v76 - 1 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v79 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v79 = v76 - 1;
    }
    if (v77 - 1 <= v78[29]) {
      v80 = v78[29];
    }
    else {
      v80 = v77 - 1;
    }
    v81 = v78[30];
    v82 = v78[31];
    v83 = *((_DWORD*)a1 + 5) + 1;
    v84 = v83 + v76;
    if (v84 >= v81) {
      v85 = v81;
    }
    else {
      v85 = v84;
    }
    if (v83 + v77 < v82) {
      v82 = v83 + v77;
    }
    v417 = v82;
    if (v80 > v82 || v79 > v85) {
      goto LABEL_383;
    }
    v413 = v79;
    LODWORD(v4) = 0;
    while (1) {
      v86 = v4;
      v87 = v413;
      v88 = 32 * v80;
      do {
        v92 = *((_DWORD*)v3 + 5);
        v94 = *((_DWORD*)v3 + 3);
        v93 = *((_DWORD*)v3 + 4);
        if ((unsigned int)(v92 * v92) < 2) {
          v103 = v87 - v94;
          if (v103 < 0) {
            v103 = -v103;
          }
          v104 = v80 - v93;
          if (v104 < 0) {
            v104 = -v104;
          }
          if (v104 + v103 != 1) {
            goto LABEL_151;
          }
        }
        else {
          if (v92 < 1) {
            goto LABEL_151;
          }
          v95 = v92 + v93;
          v96 = v92 + v94;
          v97 = 10000;
          do {
            v98 = v80 - v93;
            v99 = v87 - v94;
            v100 = *((_DWORD*)v3 + 3);
            if (v80 - v93 < 0) {
              v98 = v93 - v80;
            }
            do {
              ++v100;
              if (v99 >= 0) {
                v101 = v99;
              }
              else {
                v101 = -v99;
              }
              --v99;
              v102 = v101 + v98;
              if (v102 < v97) {
                v97 = v102;
              }
            } while (v100 < v96);
            ++v93;
          } while (v93 < v95);
          if (v97 != 1) {
            goto LABEL_151;
          }
        }
        LODWORD(v105) = v87 + v88;
        if ((unsigned int)(v87 + v88) >= 0x400) {
          v105 = 0;
        }
        else {
          v105 = (unsigned int)v105;
        }
        v106 = *(unsigned __int8*)(*(_QWORD*)(*v75 + 96) + v105 + 8);
        if (*(_BYTE*)(*(_QWORD*)(*v75 + 96) + v105 + 8) == 0) {
          goto LABEL_185;
        }
        v107 = *(_QWORD*)(GameData_21ca310 + 56) +
               2224LL * *(unsigned __int8*)(*(_QWORD*)(*v75 + 96) + v105 + 8);
        v108 = v107 - 2224;
        if (v106 > 0xFA | v107 == 2224) {
          goto LABEL_185;
        }
        if (*(_QWORD*)(v107 - 1832) == 0) {
          goto LABEL_185;
        }
        if (*v2 == 0) {
          goto LABEL_185;
        }
        v110 = game_UnitPool_Get_alt3(v2);
        if (v110 == nullptr) {
          goto LABEL_185;
        }
        v111 = (__int64)v110;
        if (((*(__int64 (**)(__int64))(*v3 + 16))((__int64)v3) & 1) != 0) {
          v112 = Unit_6c9cf0_alt2(v111, v108);
          v2 = v421;
          if ((v112 & 1) == 0) {
          LABEL_185:
            v108 = 0;
          }
          if (*v2 != 0) {
            goto LABEL_187;
          }
          goto LABEL_189;
        }
        v2 = v421;
        if (*v421 != 0) {
        LABEL_187:
          v113 = game_UnitPool_Get_alt3(v2);
          goto LABEL_190;
        }
      LABEL_189:
        v113 = nullptr;
      LABEL_190:
        if ((MapUtil_756c20_alt1((__int64)v113, v108) & 1) != 0) {
          LOBYTE(v431) = 0;
          *(_QWORD*)((char*)&v431 + 4) = 4294901760LL;
          if (v108 != 0) {
            v90 = a2;
            BYTE5(v431) = *(_BYTE*)(v108 + 2088);
            v114 = *(_QWORD*)(v108 + 440);
            if (v114 != 0) {
              v89 = *(_BYTE*)(v114 + 16);
            }
            else {
              v89 = 9;
            }
          }
          else {
            v89 = 9;
            v90 = a2;
          }
          v91 = *(_QWORD*)(v90 + 32);
          BYTE3(v431) = v89;
          BYTE1(v431) = v87;
          BYTE2(v431) = v80;
          if (v91 == 0) {
            goto LABEL_716;
          }
          (*(void (**)(__int64, __int64))(*(_QWORD*)v91 + 48LL))(
              v91, (__int64)&v431);
          v86 = 1;
        }
      LABEL_151:
        v74 = v87++ < v85;
      } while (v74);
      LODWORD(v4) = v86;
      v74 = v80++ < v417;
      if (!v74) {
        return v4 & 1;
      }
    }
  case 3:
    v427_.v430 = 0;
    v56 = game_UnitPool_Get_alt3((_BYTE*)a1 + 8);
    v57 = 0;
    v58 = 0;
    v59 = GameData_212c878[0];
    while (1) {
      if (WORD2(v56[v57 + 103]) != 0) {
        v60 = *(unsigned __int8**)(*(_QWORD*)(*v59 + 64) +
                                   8LL * WORD2(v56[v57 + 103]));
        v61 = v60[72];
        if (v61 <= 7 & v60[73] == 1) {
          if (v61 - 5 > 1) {
            if ((v56[v57 + 103] & 0x2000000000000000LL) == 0) {
              goto LABEL_114;
            }
          }
          else if ((v56[v57 + 104] & 0xF) * (unsigned int)v60[87] - 1 >=
                       BYTE6(v56[v57 + 103]) &&
                   (v56[v57 + 103] & 0x2000000000000000LL) == 0 &&
                   (game_Unit_Unknown6c90c0_alt1((__int64)v56) & 1) != 0) {
          LABEL_114:
            if (UnitItem_6e8bc0_alt1((unsigned __int16*)&v56[v57 + 103] + 2,
                                     (__int64)v56)) {
              v63 = v427_.v430++;
              v427_.v429[v63 - 1] = v58;
            }
          }
        }
      }
      ++v58;
      ++v57;
      if (v58 == 30) {
        v64 = (unsigned int)v427_.v430;
        if (v427_.v430 < 1) {
          goto LABEL_383;
        }
        v410 = (unsigned int)v427_.v430;
        if (*v421 == 0) {
          v66 = a2;
          v145 = 0;
          v70 = 255;
          goto LABEL_370;
        }
        v65 = game_UnitPool_Get_alt3(v421);
        v66 = a2;
        if (v65 != nullptr) {
          v67 = *v59;
          v68 = (char*)v65 + 828;
          if ((_DWORD)v64 == 1) {
            v69 = 0;
            v70 = 255;
          }
          else {
            v70 = 255;
            v69 = 0;
            v152 = v427_.v429;
            do {
              v155 = *(unsigned __int16*)&v68[8 * *(v152 - 1)];
              if (*(_WORD*)&v68[8 * *(v152 - 1)] != 0) {
                v156 = *(_QWORD*)(*(_QWORD*)(v67 + 64) + 8 * v155);
                v157 = *(_QWORD*)(v156 + 192);
                v158 = v157 == 0 | *(unsigned __int8*)(v156 + 72) > 7u;
                if (v158 || *(_BYTE*)(v157 + 105) == 0) {
                  v157 = 0;
                }
                else if (*(_BYTE*)(v157 + 104) == 2) {
                  v157 = 0;
                }
                v155 = v156 + 92;
                if (v157 != 0) {
                  v155 = v157 + 278;
                }
                LODWORD(v155) = *(unsigned __int8*)v155;
              }
              if ((int)v155 >= v70) {
                LODWORD(v155) = v70;
              }
              v154 = *(unsigned __int16*)&v68[8 * *v152];
              if (*(_WORD*)&v68[8 * *v152] != 0) {
                v159 = *(_QWORD*)(*(_QWORD*)(v67 + 64) + 8 * v154);
                v153 = *(_QWORD*)(v159 + 192);
                v160 = v153 == 0 | *(unsigned __int8*)(v159 + 72) > 7u;
                if (v160 || *(_BYTE*)(v153 + 105) == 0) {
                  v153 = 0;
                }
                else if (*(_BYTE*)(v153 + 104) == 2) {
                  v153 = 0;
                }
                v154 = v159 + 92;
                if (v153 != 0) {
                  v154 = v153 + 278;
                }
                LODWORD(v154) = *(unsigned __int8*)v154;
              }
              v69 += 2;
              v152 += 2;
              if ((int)v154 >= (int)v155) {
                v70 = v155;
              }
              else {
                v70 = v154;
              }
            } while ((v64 & 0x7FFFFFFE) != v69);
          }
          if ((v64 & 1) != 0) {
            v71 =
                *(unsigned __int16*)&v68[8 *
                                         (unsigned __int8)v427_.v429[v69 - 1]];
            if (v71 != 0) {
              v72 = *(_QWORD*)(*(_QWORD*)(v67 + 64) + 8 * v71);
              v73 = *(_BYTE**)(v72 + 192);
              v74 = v73 == nullptr | *(unsigned __int8*)(v72 + 72) > 7u;
              if (v74 || v73[105] == 0) {
                v73 = nullptr;
              }
              else if (v73[104] == 2) {
                v73 = nullptr;
              }
              v180 = (unsigned __int8*)(v72 + 92);
              if (v73 != nullptr) {
                v180 = v73 + 278;
              }
              v181 = *v180;
            }
            else {
              v181 = 0;
            }
            if (v181 < v70) {
              v70 = v181;
            }
          }
        }
        else {
          v70 = 255;
        }
        if (*v421 != 0) {
          v184 = game_UnitPool_Get_alt3(v421);
          if (v184 != nullptr) {
            v185 = (char*)v184 + 828;
            v186 = &v427_.v428;
            v187 = v184;
            v188 = v70;
            v145 = 0;
            v189 = v64;
            do {
              v196 = (unsigned __int8)*v186++;
              v195 = *(unsigned __int16*)&v185[8 * v196];
              if (*(_WORD*)&v185[8 * v196] != 0) {
                v197 = *(_QWORD*)(*(_QWORD*)(*v59 + 64) + 8 * v195);
                v190 = *(_BYTE**)(v197 + 192);
                v198 = v190 == nullptr | *(unsigned __int8*)(v197 + 72) > 7u;
                if (v198 || v190[105] == 0) {
                  v190 = nullptr;
                }
                else if (v190[104] == 2) {
                  v190 = nullptr;
                }
                v191 = (unsigned __int8*)(v197 + 93);
                v192 = *(_QWORD*)(v197 + 24);
                if (v190 != nullptr) {
                  v193 = v190 + 279;
                }
                else {
                  v193 = v191;
                }
                v194 = *v193;
                LODWORD(v195) = game_UnitSkillList_GetRangeAddImpl_alt1(
                                    (__int64)(v187 + 218), v192 + 8) +
                                v194;
              }
              if (v145 <= (int)v195) {
                v145 = v195;
              }
              --v189;
            } while (v189 != 0);
            v66 = a2;
            v70 = v188;
          LABEL_370:
            v199 = *((_DWORD*)v3 + 3);
            v200 = *((_DWORD*)v3 + 4);
            v201 = (unsigned __int8*)*GameData_212ce98[0];
            if (v199 - v145 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
              v202 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
            }
            else {
              v202 = v199 - v145;
            }
            if (v200 - v145 <= v201[29]) {
              v203 = v201[29];
            }
            else {
              v203 = v200 - v145;
            }
            v204 = v201[30];
            v205 = v201[31];
            v206 = *((_DWORD*)v3 + 5) + v145;
            v207 = v206 + v199;
            if (v207 >= v204) {
              v208 = v204;
            }
            else {
              v208 = v207;
            }
            if (v206 + v200 < v205) {
              v205 = v206 + v200;
            }
            v414 = v205;
            if (v203 > v205 || v202 > v208) {
            LABEL_383:
              LOBYTE(v4) = 0;
              return v4 & 1;
            }
            LODWORD(v4) = 0;
            v405 = v202;
            v407 = v70;
            while (2) {
              v209 = v202;
            LABEL_393:
              v211 = *((_DWORD*)v3 + 5);
              v213 = *((_DWORD*)v3 + 3);
              v212 = *((_DWORD*)v3 + 4);
              if ((unsigned int)(v211 * v211) < 2) {
                v222 = v209 - v213;
                if (v222 < 0) {
                  v222 = -v222;
                }
                v223 = v203 - v212;
                if (v223 < 0) {
                  v223 = -v223;
                }
                v216 = v223 + v222;
              }
              else if (v211 < 1) {
                v216 = 10000;
              }
              else {
                v214 = v211 + v212;
                v215 = v211 + v213;
                v216 = 10000;
                do {
                  v217 = v203 - v212;
                  v218 = v209 - v213;
                  v219 = *((_DWORD*)v3 + 3);
                  if (v203 - v212 < 0) {
                    v217 = v212 - v203;
                  }
                  do {
                    ++v219;
                    if (v218 >= 0) {
                      v220 = v218;
                    }
                    else {
                      v220 = -v218;
                    }
                    --v218;
                    v221 = v220 + v217;
                    if (v221 < v216) {
                      v216 = v221;
                    }
                  } while (v219 < v215);
                  ++v212;
                } while (v212 < v214);
              }
              if (v216<v70 | v216> v145) {
              LABEL_391:
                v74 = v209++ < v208;
                if (!v74) {
                  v74 = v203++ < v414;
                  if (!v74) {
                    return v4 & 1;
                  }
                  continue;
                }
                goto LABEL_393;
              }
              break;
            }
            TargetEnumerator_77c150_alt2((__int64)&v423_.v423, v3, v209, v203);
            if ((MapUtil_753570(SBYTE1(v423_.v423), SBYTE2(v423_.v423)) & 1) !=
                    0 &&
                (v423_.v424 != 0 &&
                     (v225 = game_UnitPool_Get_alt3(&v423_.v424)) != nullptr &&
                     v225[49] != 0 ||
                 (v423_.v425 & 0x8000000000000000LL) == 0 &&
                     (v226 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) +
                                        8LL)) != 0 &&
                     ((*(__int64 (**)(__int64))(
                          *(_QWORD*)(v226 + 144LL * v423_.v425) + 272LL))(
                          v226 + 144LL * v423_.v425) &
                      1) != 0)) {
              if (v423_.v424 != 0 &&
                  game_UnitPool_Get_alt3(&v423_.v424) != nullptr) {
                v227 = &v437_.v437;
                v432_.v432[0] = v3;
                *(_QWORD*)&v431 = GameData_1f97380;
                *((_QWORD*)&v431 + 1) = &v423_.v423;
                v437_.v439 = &v437_.v437;
                v432_.v433 = &v431;
                v437_.v437 = GameData_1f97400;
                v437_.v438 = &v423_.v423;
                if (*((_BYTE*)v3 + 8) != 0) {
                  v418 = v4;
                  v228 = game_UnitPool_Get_alt3(v421);
                  if (v228 != nullptr) {
                    v229 = v410;
                    v230 = (char*)v228 + 828;
                    v231 = &v427_.v428;
                    v232 = 0;
                    do {
                      if (v432_.v433 == nullptr) {
                        goto LABEL_716;
                      }
                      v233 = (unsigned __int8)*v231++;
                      v234 = (*(__int64 (**)(__int64, __int64))(
                          *(_QWORD*)v432_.v433 + 48LL))(
                          (__int64)v432_.v433, (__int64)&v230[8 * v233]);
                      v235 = 1 << v233;
                      if ((v234 & 1) == 0) {
                        v235 = 0;
                      }
                      --v229;
                      v232 |= v235;
                    } while (v229 != 0);
                    v66 = a2;
                    v202 = v405;
                    v70 = v407;
                    if (v232 != 0) {
                      v427_.v427 = v232;
                      if (v437_.v439 == nullptr) {
                        goto LABEL_716;
                      }
                      ((void (*)(__int64, __int64))(*v437_.v439)[6])(
                          (__int64)v437_.v439, (__int64)&v427_.v427);
                    }
                  }
                  v227 = v437_.v439;
                  if (v437_.v439 != &v437_.v437) {
                    LODWORD(v4) = v418;
                    if (v437_.v439 != nullptr) {
                      v236 = 5;
                      goto LABEL_441;
                    }
                    goto LABEL_442;
                  }
                  LODWORD(v4) = v418;
                }
                v236 = 4;
              LABEL_441:
                ((void (*)(__int64))(*v227)[v236])((__int64)v227);
              LABEL_442:
                if (v432_.v433 == &v431) {
                  v237 = 32;
                LABEL_446:
                  (*(void (**)(__int64))(*(_QWORD*)v432_.v433 + v237))(
                      (__int64)v432_.v433);
                }
                else if (v432_.v433 != nullptr) {
                  v237 = 40;
                  goto LABEL_446;
                }
              }
              if ((v423_.v425 & 0x80000000) == 0 &&
                  *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) !=
                      0) {
                v238 = &v437_.v437;
                v432_.v432[0] = v3;
                *(_QWORD*)&v431 = GameData_1f97490;
                *((_QWORD*)&v431 + 1) = &v423_.v423;
                v437_.v439 = &v437_.v437;
                v432_.v433 = &v431;
                v437_.v437 = GameData_1f97510;
                v437_.v438 = &v423_.v423;
                if (*((_BYTE*)v3 + 8) != 0) {
                  v419 = v4;
                  v239 = game_UnitPool_Get_alt3(v421);
                  if (v239 != nullptr) {
                    v240 = v410;
                    v241 = (char*)v239 + 828;
                    v242 = &v427_.v428;
                    v243 = 0;
                    do {
                      if (v432_.v433 == nullptr) {
                        goto LABEL_716;
                      }
                      v244 = (unsigned __int8)*v242++;
                      v245 = (*(__int64 (**)(__int64, __int64))(
                          *(_QWORD*)v432_.v433 + 48LL))(
                          (__int64)v432_.v433, (__int64)&v241[8 * v244]);
                      v246 = 1 << v244;
                      if ((v245 & 1) == 0) {
                        v246 = 0;
                      }
                      --v240;
                      v243 |= v246;
                    } while (v240 != 0);
                    v66 = a2;
                    v202 = v405;
                    v70 = v407;
                    if (v243 != 0) {
                      v427_.v427 = v243;
                      if (v437_.v439 == nullptr) {
                        goto LABEL_716;
                      }
                      ((void (*)(__int64, __int64))(*v437_.v439)[6])(
                          (__int64)v437_.v439, (__int64)&v427_.v427);
                    }
                  }
                  v238 = v437_.v439;
                  if (v437_.v439 != &v437_.v437) {
                    LODWORD(v4) = v419;
                    if (v437_.v439 != nullptr) {
                      v247 = 5;
                      goto LABEL_464;
                    }
                    goto LABEL_465;
                  }
                  LODWORD(v4) = v419;
                }
                v247 = 4;
              LABEL_464:
                ((void (*)(__int64))(*v238)[v247])((__int64)v238);
              LABEL_465:
                if (v432_.v433 == &v431) {
                  v248 = 32;
                LABEL_469:
                  (*(void (**)(__int64))(*(_QWORD*)v432_.v433 + v248))(
                      (__int64)v432_.v433);
                }
                else if (v432_.v433 != nullptr) {
                  v248 = 40;
                  goto LABEL_469;
                }
              }
              v210 = v423_.v426;
              if (v423_.v426 != 0) {
                v249 = *(_QWORD*)(v66 + 32);
                if (v249 == 0) {
                  goto LABEL_716;
                }
                (*(void (**)(__int64, __int64))(*(_QWORD*)v249 + 48LL))(
                    v249, (__int64)&v423_.v423);
                v210 = 1;
              }
            }
            else {
              v210 = 0;
            }
            LODWORD(v4) = v4 | v210;
            goto LABEL_391;
          }
          v66 = a2;
        }
        v145 = 0;
        goto LABEL_370;
      }
    }
  case 4:
    v427_.v430 = 0;
    v115 = game_UnitPool_Get_alt3((_BYTE*)a1 + 8);
    v116 = (unsigned __int16*)v115 + 414;
    v117 = (__int64)v115;
    for (i = 0; i != 30; ++i) {
      if (UnitItem_6e8e50(v116, v117)) {
        v119 = v427_.v430++;
        v427_.v429[v119 - 1] = i;
      }
      v116 += 4;
    }
    v120 = (unsigned int)v427_.v430;
    if (v427_.v430 < 1) {
      goto LABEL_383;
    }
    v404 = (unsigned int)v427_.v430;
    if (*v2 != 0) {
      v121 = game_UnitPool_Get_alt3(v2);
      if (v121 != nullptr) {
        v122 = (char*)v121 + 828;
        v123 = *GameData_212c878[0];
        if ((_DWORD)v120 == 1) {
          v124 = 0;
          v125 = 255;
        }
        else {
          v125 = 255;
          v124 = 0;
          v161 = v427_.v429;
          do {
            v164 = *(unsigned __int16*)&v122[8 * *(v161 - 1)];
            if (*(_WORD*)&v122[8 * *(v161 - 1)] != 0) {
              v165 = *(_QWORD*)(*(_QWORD*)(v123 + 64) + 8 * v164);
              v166 = *(_QWORD*)(v165 + 192);
              v167 = v166 == 0 | *(unsigned __int8*)(v165 + 72) > 7u;
              if (v167 || *(_BYTE*)(v166 + 105) == 0) {
                v166 = 0;
              }
              else if (*(_BYTE*)(v166 + 104) == 2) {
                v166 = 0;
              }
              v164 = v165 + 92;
              if (v166 != 0) {
                v164 = v166 + 278;
              }
              LODWORD(v164) = *(unsigned __int8*)v164;
            }
            if ((int)v164 >= v125) {
              LODWORD(v164) = v125;
            }
            v163 = *(unsigned __int16*)&v122[8 * *v161];
            if (*(_WORD*)&v122[8 * *v161] != 0) {
              v168 = *(_QWORD*)(*(_QWORD*)(v123 + 64) + 8 * v163);
              v162 = *(_QWORD*)(v168 + 192);
              v169 = v162 == 0 | *(unsigned __int8*)(v168 + 72) > 7u;
              if (v169 || *(_BYTE*)(v162 + 105) == 0) {
                v162 = 0;
              }
              else if (*(_BYTE*)(v162 + 104) == 2) {
                v162 = 0;
              }
              v163 = v168 + 92;
              if (v162 != 0) {
                v163 = v162 + 278;
              }
              LODWORD(v163) = *(unsigned __int8*)v163;
            }
            v124 += 2;
            v161 += 2;
            if ((int)v163 >= (int)v164) {
              v125 = v164;
            }
            else {
              v125 = v163;
            }
          } while ((v120 & 0x7FFFFFFE) != v124);
        }
        if ((v120 & 1) != 0) {
          v126 =
              *(unsigned __int16*)&v122[8 *
                                        (unsigned __int8)v427_.v429[v124 - 1]];
          if (v126 != 0) {
            v127 = *(_QWORD*)(*(_QWORD*)(v123 + 64) + 8 * v126);
            v128 = *(_BYTE**)(v127 + 192);
            v129 = v128 == nullptr | *(unsigned __int8*)(v127 + 72) > 7u;
            if (v129 || v128[105] == 0) {
              v128 = nullptr;
            }
            else if (v128[104] == 2) {
              v128 = nullptr;
            }
            v182 = (unsigned __int8*)(v127 + 92);
            if (v128 != nullptr) {
              v182 = v128 + 278;
            }
            v183 = *v182;
          }
          else {
            v183 = 0;
          }
          if (v183 < v125) {
            v125 = v183;
          }
        }
      }
      else {
        v125 = 255;
      }
      if (*v2 != 0) {
        v250 = v125;
        v146 = game_UnitPool_Get_alt3(v2);
        if (v146 != nullptr) {
          v251 = v146;
          v252 = v120;
          v253 = (char*)v146 + 828;
          v254 = &v427_.v428;
          LODWORD(v146) = 0;
          v255 = GameData_212c878[0];
          do {
            v263 = (unsigned __int8)*v254++;
            v262 = *(unsigned __int16*)&v253[8 * v263];
            if (*(_WORD*)&v253[8 * v263] != 0) {
              v264 = *(_QWORD*)(*(_QWORD*)(*v255 + 64) + 8 * v262);
              v257 = *(_BYTE**)(v264 + 192);
              v265 = v257 == nullptr | *(unsigned __int8*)(v264 + 72) > 7u;
              if (v265 || v257[105] == 0) {
                v256 = (int)v146;
                v257 = nullptr;
              }
              else {
                v256 = (int)v146;
                if (v257[104] == 2) {
                  v257 = nullptr;
                }
              }
              v258 = (unsigned __int8*)(v264 + 93);
              v259 = *(_QWORD*)(v264 + 24);
              if (v257 != nullptr) {
                v260 = v257 + 279;
              }
              else {
                v260 = v258;
              }
              v261 = *v260;
              LODWORD(v262) = game_UnitSkillList_GetRangeAddImpl_alt1(
                                  (__int64)(v251 + 218), v259 + 8) +
                              v261;
              v125 = v250;
              LODWORD(v146) = v256;
            }
            if ((int)v146 <= (int)v262) {
              LODWORD(v146) = v262;
            }
            --v252;
          } while (v252 != 0);
          v2 = v421;
          v120 = v404;
        }
      }
      else {
        LODWORD(v146) = 0;
      }
    }
    else {
      LODWORD(v146) = 0;
      v125 = 255;
    }
    v266 = GameData_212ce98[0];
    v267 = *((_DWORD*)v3 + 3);
    v268 = *((_DWORD*)v3 + 4);
    v269 = (unsigned __int8*)*GameData_212ce98[0];
    if (v267 - (int)v146 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v270 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v270 = v267 - (int)v146;
    }
    if (v268 - (int)v146 <= v269[29]) {
      v271 = v269[29];
    }
    else {
      v271 = v268 - (int)v146;
    }
    v272 = v269[30];
    v273 = v269[31];
    v274 = *((_DWORD*)v3 + 5) + (int)v146;
    v275 = v274 + v267;
    if (v275 >= v272) {
      v276 = v272;
    }
    else {
      v276 = v275;
    }
    if (v274 + v268 < v273) {
      v273 = v274 + v268;
    }
    v396 = v273;
    if (v271 > v273 || v270 > v276) {
      LOBYTE(v277) = 0;
      goto LABEL_512;
    }
    v277 = 0;
    v400 = (int)v146;
    v401 = v125;
    v395 = v270;
    v402 = v276;
    while (1) {
      v408 = 32 * v271;
      do {
        v311 = *((_DWORD*)v3 + 5);
        v313 = *((_DWORD*)v3 + 3);
        v312 = *((_DWORD*)v3 + 4);
        if ((unsigned int)(v311 * v311) < 2) {
          v322 = v270 - v313;
          if (v322 < 0) {
            v322 = -v322;
          }
          v323 = v271 - v312;
          if (v323 < 0) {
            v323 = -v323;
          }
          v316 = v323 + v322;
        }
        else if (v311 < 1) {
          v316 = 10000;
        }
        else {
          v314 = v311 + v312;
          v315 = v311 + v313;
          v316 = 10000;
          do {
            v317 = v271 - v312;
            v318 = v270 - v313;
            v319 = *((_DWORD*)v3 + 3);
            if (v271 - v312 < 0) {
              v317 = v312 - v271;
            }
            do {
              ++v319;
              if (v318 >= 0) {
                v320 = v318;
              }
              else {
                v320 = -v318;
              }
              --v318;
              v321 = v320 + v317;
              if (v321 < v316) {
                v316 = v321;
              }
            } while (v319 < v315);
            ++v312;
          } while (v312 < v314);
        }
        if (v316<v125 | v316>(int) v146) {
          goto LABEL_577;
        }
        LODWORD(v325) = v270 + v408;
        if ((unsigned int)(v270 + v408) >= 0x400) {
          v325 = 0;
        }
        else {
          v325 = (unsigned int)v325;
        }
        v310 = *(unsigned __int8*)(*(_QWORD*)(*v266 + 96) + v325 + 8);
        if (*(_BYTE*)(*(_QWORD*)(*v266 + 96) + v325 + 8) == 0) {
          goto LABEL_576;
        }
        v326 = *(_QWORD*)(GameData_21ca310 + 56) +
               2224LL * *(unsigned __int8*)(*(_QWORD*)(*v266 + 96) + v325 + 8);
        v327 = v310 > 0xFA | v326 == 2224;
        v420 = v326 - 2224;
        if (v327 ||
            (*(_QWORD*)(v326 - 1832) != 0 ? (v328 = *v2 == 0) : (v328 = true),
             v328)) {
          v310 = 0;
          goto LABEL_576;
        }
        v329 = game_UnitPool_Get_alt3(v2);
        if (v329 == nullptr) {
          goto LABEL_691;
        }
        v399 = v326;
        v330 = (__int64)v329;
        if (((*(__int64 (**)(__int64))(*v3 + 16))((__int64)v3) & 1) != 0) {
          v331 = Unit_6c9cf0_alt2(v330, v420);
          v310 = 0;
          if ((v331 & 1) == 0) {
            goto LABEL_698;
          }
          LODWORD(v146) = v400;
          v125 = v401;
          if (*v2 == 0) {
            goto LABEL_576;
          }
        }
        else {
          v310 = *v2;
          LODWORD(v146) = v400;
          v125 = v401;
          if (*v2 == 0) {
            goto LABEL_576;
          }
        }
        v332 = game_UnitPool_Get_alt3(v2);
        if (v332 == nullptr) {
        LABEL_691:
          v310 = 0;
          goto LABEL_698;
        }
        v398 = v277;
        v333 = 0;
        v334 = 0;
        v411 = (char*)v332 + 828;
        do {
          v336 = (unsigned __int8)v427_.v429[v333 - 1];
          if (*v2 != 0) {
            v337 = game_UnitPool_Get_alt3(v2);
          }
          else {
            v337 = nullptr;
          }
          v415 = v336;
          v338 = (unsigned __int16*)&v411[8 * v336];
          v339 = MapUtil_753920_alt1((__int64)v337, v338, v420);
          v335 = 0;
          if ((v339 & 1) != 0 && *v2 != 0) {
            v340 = game_UnitPool_Get_alt3(v2);
            if (v340 == nullptr) {
              goto LABEL_623;
            }
            v341 = *((_DWORD*)v3 + 3);
            v342 = *((_DWORD*)v3 + 4);
            v343 = *v338;
            if (*v338 != 0) {
              v344 =
                  *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v343);
              v345 = *(_BYTE**)(v344 + 192);
              if (v345 == nullptr | *(unsigned __int8*)(v344 + 72) > 7u) {
                v345 = nullptr;
                v406 = *(unsigned __int8*)(v344 + 92);
              }
              else {
                if (v345[105] != 0) {
                  if (v345[104] == 2) {
                    v348 = 0;
                  }
                  else {
                    v348 = *(_QWORD*)(v344 + 192);
                  }
                }
                else {
                  v348 = 0;
                }
                if (v348 != 0) {
                  v349 = (unsigned __int8*)(v348 + 278);
                }
                else {
                  v349 = (unsigned __int8*)(v344 + 92);
                }
                v406 = *v349;
                if (v345[105] != 0) {
                  if (v345[104] == 2) {
                    v345 = nullptr;
                  }
                }
                else {
                  v345 = nullptr;
                }
              }
              v350 = (unsigned __int8*)(v344 + 93);
              v351 = *(_QWORD*)(v344 + 24);
              v352 = v340;
              v353 = (__int64)(v340 + 218);
              if (v345 != nullptr) {
                v354 = v345 + 279;
              }
              else {
                v354 = v350;
              }
              v355 = *v354;
              LODWORD(v343) =
                  game_UnitSkillList_GetRangeAddImpl_alt1(v353, v351 + 8) +
                  v355;
              v120 = v404;
              v347 = v406;
              v340 = v352;
            }
            else {
              v347 = 0;
            }
            v356 = *((_DWORD*)v340 + 148);
            if ((unsigned int)(v356 * v356) < 2) {
              v365 = v270 - v341;
              if (v270 - v341 < 0) {
                v365 = v341 - v270;
              }
              v366 = v271 - v342;
              if (v271 - v342 < 0) {
                v366 = v342 - v271;
              }
              v359 = v366 + v365;
            }
            else {
              if (v356 >= 1) {
                v2 = v421;
                v357 = v356 + v342;
                v358 = v356 + v341;
                v359 = 10000;
                do {
                  v360 = v271 - v342;
                  v361 = v270 - v341;
                  v362 = v341;
                  if (v271 - v342 < 0) {
                    v360 = v342 - v271;
                  }
                  do {
                    ++v362;
                    if (v361 >= 0) {
                      v363 = v361;
                    }
                    else {
                      v363 = -v361;
                    }
                    --v361;
                    v364 = v363 + v360;
                    if (v364 < v359) {
                      v359 = v364;
                    }
                  } while (v362 < v358);
                  ++v342;
                } while (v342 < v357);
              LABEL_676:
                if (v347 > v359 | v359 > (int)v343) {
                  v335 = 0;
                  v266 = GameData_212ce98[0];
                  v276 = v402;
                  goto LABEL_624;
                }
                v368 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                  8LL * *v338);
                v266 = GameData_212ce98[0];
                v276 = v402;
                v369 = v415;
                if (*(_BYTE*)(v368 + 73) == 10) {
                  v370 = *(_QWORD*)(v368 + 192);
                  if (v370 != 0) {
                    LODWORD(v370) = *(_WORD*)(v370 + 16) & 0xFFF;
                  }
                  v423_.v423 = v370;
                  LODWORD(v437_.v437) = 0;
                  *(_QWORD*)&v431 = GameData_1f959d8;
                  *((_QWORD*)&v431 + 1) = &v437_.v437;
                  v432_.v433 = &v431;
                  GameRoutine_757f60_alt1((__int64)v340, &v423_.v423, v270,
                                          v271, (__int64)&v431);
                  if (v432_.v433 == &v431) {
                    v369 = v415;
                    v371 = 32;
                  LABEL_688:
                    (*(void (**)(__int64))(*(_QWORD*)v432_.v433 + v371))(
                        (__int64)v432_.v433);
                  }
                  else {
                    v369 = v415;
                    if (v432_.v433 != nullptr) {
                      v371 = 40;
                      goto LABEL_688;
                    }
                  }
                  if ((int)v437_.v437 < 1) {
                  LABEL_623:
                    v335 = 0;
                    goto LABEL_624;
                  }
                }
                v335 = 1 << v369;
                goto LABEL_624;
              }
              v359 = 10000;
            }
            v2 = v421;
            goto LABEL_676;
          }
        LABEL_624:
          ++v333;
          v334 |= v335;
        } while (v333 != v120);
        v277 = v398;
        if (v334 != 0) {
          DWORD2(v431) = 0;
          BYTE5(v431) = 0;
          LOWORD(v431) = -256;
          BYTE2(v431) = -1;
          WORD3(v431) = -1;
          v372 = 9;
          *(_WORD*)((char*)&v431 + 3) = 9;
          BYTE5(v431) = *(_BYTE*)(v399 - 136);
          *(_WORD*)((char*)&v431 + 1) = *(_WORD*)(v399 - 1640);
          v373 = *(_QWORD*)(v399 - 1784);
          if (v373 != 0) {
            v372 = *(_BYTE*)(v373 + 16);
          }
          BYTE3(v431) = v372;
          BYTE1(v431) = v270;
          v374 = *(_QWORD*)(a2 + 32);
          BYTE2(v431) = v271;
          DWORD2(v431) = v334;
          if (v374 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v374 + 48LL))(
                v374, (__int64)&v431);
            v310 = 1;
            goto LABEL_698;
          }
        LABEL_716:
          GameRoutine_60a310_alt3();
        }
        v310 = 0;
      LABEL_698:
        LODWORD(v146) = v400;
        v125 = v401;
      LABEL_576:
        v277 |= v310;
      LABEL_577:
        v74 = v270++ < v276;
      } while (v74);
      v270 = v395;
      v74 = v271++ < v396;
      if (!v74) {
      LABEL_512:
        v397 = v277;
        if (*v2 != 0) {
          v278 = game_UnitPool_Get_alt3(v2);
          v279 = 0;
          if (v278 != nullptr) {
            v422 = v278;
            v280 = (char*)v278 + 828;
            v281 = &v427_.v428;
            v282 = GameData_212c878[0];
            while (2) {
              v285 = (unsigned __int8)*v281++;
              v284 = v285;
              v286 = &v280[8 * v285];
              v287 = *(_QWORD*)(*v282 + 64);
              v288 = *(_QWORD*)(v287 + 8LL * *(unsigned __int16*)v286);
              v289 = *(_QWORD*)(v288 + 192);
              if (v289 == 0 | *(unsigned __int8*)(v288 + 72) > 7u) {
                goto LABEL_520;
              }
              if (*(_BYTE*)(v289 + 105) == 0) {
                goto LABEL_520;
              }
              if (*(_BYTE*)(v289 + 104) == 2) {
                goto LABEL_520;
              }
              v291 = (*((_DWORD*)v286 + 1) & 0xF) *
                         *(unsigned __int8*)(v288 + 87) -
                     (unsigned __int8)v286[2];
              if ((v291 & (unsigned int)~(v291 >> 31)) <
                  *(unsigned __int8*)(v289 + 274)) {
                goto LABEL_520;
              }
              v423_.v423 = *(_WORD*)(v289 + 16) & 0xFFF;
              v292 = *(unsigned __int16*)v286;
              if (v292 == 0) {
                v296 = 0;
                v297 = 0;
                goto LABEL_553;
              }
              v293 = *(_QWORD*)(v287 + 8 * v292);
              v294 = *(_BYTE**)(v293 + 192);
              if (v294 == nullptr | *(unsigned __int8*)(v293 + 72) > 7u) {
                v296 = *(unsigned __int8*)(v293 + 92);
              }
              else {
                if (v294[105] != 0) {
                  if (v294[104] == 2) {
                    v298 = 0;
                  }
                  else {
                    v298 = *(_QWORD*)(v293 + 192);
                  }
                }
                else {
                  v298 = 0;
                }
                if (v298 != 0) {
                  v299 = (unsigned __int8*)(v298 + 278);
                }
                else {
                  v299 = (unsigned __int8*)(v293 + 92);
                }
                v296 = *v299;
                if (v294[105] != 0) {
                  if (v294[104] == 2) {
                    v294 = nullptr;
                  }
                LABEL_549:
                  v300 = (unsigned __int8*)(v293 + 93);
                  v301 = *(_QWORD*)(v293 + 24);
                  if (v294 != nullptr) {
                    v302 = v294 + 279;
                  }
                  else {
                    v302 = v300;
                  }
                  v303 = *v302;
                  v297 = game_UnitSkillList_GetRangeAddImpl_alt1(
                             (__int64)(v422 + 218), v301 + 8) +
                         v303;
                LABEL_553:
                  LOBYTE(v431) = v284;
                  v304 = *(_QWORD*)(a2 + 32);
                  if (v304 != 0) {
                    if (v304 == a2) {
                      v432_.v434 = v432_.v432;
                      (*(void (**)(__int64, __int64))(*(_QWORD*)v304 + 24LL))(
                          v304, (__int64)v432_.v432);
                      v305 = v432_.v434;
                    }
                    else {
                      v305 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v304 +
                                                                16LL))(v304);
                      v432_.v434 = v305;
                    }
                  }
                  else {
                    v305 = nullptr;
                    v432_.v434 = nullptr;
                  }
                  v437_.v439 = nullptr;
                  v306 = fw_memory_HeapManager_Allocate_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
                  v307 = (__int64 (***)(void))v306;
                  *(_QWORD*)v306 = GameData_1f97890;
                  *(_BYTE*)(v306 + 16) = v431;
                  if (v305 != nullptr) {
                    if (v305 == v432_.v432) {
                      *(_QWORD*)(v306 + 64) = v306 + 32;
                      (*(void (**)(__int64, __int64))(*v305 + 24LL))(
                          (__int64)v305, v306 + 32);
                    }
                    else {
                      *(_QWORD*)(v306 + 64) = (*(__int64 (**)(__int64))(
                          *v305 + 16LL))((__int64)v305);
                    }
                  }
                  else {
                    *(_QWORD*)(v306 + 64) = 0;
                  }
                  v437_.v439 = v307;
                  v308 = TargetEnumerator_77cc80_alt1((__int64)v3, &v423_.v423,
                                                      v296, v297,
                                                      (__int64)&v437_.v437);
                  if (v437_.v439 == &v437_.v437) {
                    v309 = 4;
                  LABEL_567:
                    ((void (*)(__int64))(*v437_.v439)[v309])(
                        (__int64)v437_.v439);
                  }
                  else if (v437_.v439 != nullptr) {
                    v309 = 5;
                    goto LABEL_567;
                  }
                  if (v432_.v434 != v432_.v432) {
                    if (v432_.v434 != nullptr) {
                      v283 = 40;
                    LABEL_518:
                      (*(void (**)(__int64))(*v432_.v434 + v283))(
                          (__int64)v432_.v434);
                    }
                    v279 |= v308;
                  LABEL_520:
                    if (--v404 == 0) {
                      goto LABEL_516;
                    }
                    continue;
                  }
                  v283 = 32;
                  goto LABEL_518;
                }
              }
              break;
            }
            v294 = nullptr;
            goto LABEL_549;
          }
        }
        else {
          v279 = 0;
        }
      LABEL_516:
        LOBYTE(v4) = v397 | v279;
        return v4 & 1;
      }
    }
  case 5:
  case 6:
  case 8:
  case 9:
  case 0x10:
  case 0x12:
  case 0x13:
    v437_.vars20 = v437_.vars0;
    v437_.vars28 = v437_.vars8;
    v437_.vars30 = vars38;
    v381 = GameData_212c880[0];
    if ((a1[5] & 0xFFF) != 0) {
      v382 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                        8 * (a1[5] & 0xFFF));
      if (v382 != 0) {
      LABEL_719:
        v383 = *(_WORD*)(v382 + 16) & 0xFFF;
        goto LABEL_729;
      }
    }
    else {
      v384 = *((unsigned __int16*)a1 + 16);
      if (*((_WORD*)a1 + 16) == 0) {
        v384 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v385 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v384);
      v382 = *(_QWORD*)(v385 + 192);
      v386 = *(unsigned __int8*)(v385 + 72);
      v387 = v382 == 0 | v386 > 7;
      if (!v387 && *(_BYTE*)(v382 + 105) != 0 && *(_BYTE*)(v382 + 104) != 2) {
        goto LABEL_719;
      }
    }
    v383 = 0;
  LABEL_729:
    v388 = *((unsigned __int8*)a1 + 8);
    DWORDn(vars38, sizeof(vars38) / 4 - 1) = v383;
    if (v388 != 0 && (v389 = (__int64)a1, (a1 = game_UnitPool_Get_alt3(
                                               (_BYTE*)a1 + 8)) != nullptr)) {
      v390 = *(_QWORD*)(*(_QWORD*)(*v381 + 64) + 8LL * v383);
      v391 = *(unsigned __int8*)(v390 + 278);
      v392 = *(unsigned __int8*)(v390 + 279);
      if (v383 != 0) {
        v393 = game_UnitSkillList_GetRangeAddImpl_alt1(
            (__int64)(a1 + 218), *(_QWORD*)(v390 + 24) + 224LL);
      }
      else {
        v393 = 0;
      }
      LODWORD(a1) = TargetEnumerator_77cc80_alt1(v389, (int*)&vars38 + 1, v391,
                                                 v393 + v392, a2);
      v394 = 1;
    }
    else {
      v394 = 0;
    }
    return v394 & (unsigned int)a1;
  case 0xA:
    v10 = GameData_212ce98[0];
    v11 = *((_DWORD*)a1 + 3);
    v12 = *((_DWORD*)a1 + 4);
    v13 = (unsigned __int8*)*GameData_212ce98[0];
    if (v11 - 1 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v14 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v14 = v11 - 1;
    }
    if (v12 - 1 <= v13[29]) {
      v15 = v13[29];
    }
    else {
      v15 = v12 - 1;
    }
    v16 = v13[30];
    v17 = v13[31];
    v18 = *((_DWORD*)a1 + 5) + 1;
    v19 = v18 + v11;
    if (v19 >= v16) {
      v20 = v16;
    }
    else {
      v20 = v19;
    }
    if (v18 + v12 < v17) {
      v17 = v18 + v12;
    }
    v412 = v17;
    if (v15 > v17 || v14 > v20) {
      goto LABEL_383;
    }
    LODWORD(v4) = 0;
    v409 = v14;
    break;
  case 0x15:
    v55 = 10;
    return TargetEnumerator_77fb20_alt1((__int64)a1, v55, a2);
  case 0x16:
    if ((TargetEnumerator_77fb20_alt1((__int64)a1, 11, a2) & 1) != 0) {
      LOBYTE(v4) = 1;
      return v4 & 1;
    }
    a1 = v3;
    v55 = 12;
    return TargetEnumerator_77fb20_alt1((__int64)a1, v55, a2);
  case 0x17:
    v8 = game_UnitPool_Get_alt3((_BYTE*)a1 + 8);
    v4 = (__int64)v8;
    if (v8 == nullptr) {
      return v4 & 1;
    }
    LODWORD(v431) = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
    if ((game_Unit_HasSkill_alt1((__int64)v8, (unsigned int*)&v431) & 1) != 0) {
      v9 = a2;
    }
    else {
      v141 = UnitItemList_70f9f0_alt1((unsigned __int16*)(v4 + 828), 0xBu);
      v9 = a2;
      if (v141 < 0) {
        goto LABEL_383;
      }
    }
    v142 = 4;
    v143 = (__int64)v3;
    goto LABEL_234;
  case 0x18:
    v130 = game_UnitPool_Get_alt3((_BYTE*)a1 + 8);
    v4 = (__int64)v130;
    if (v130 == nullptr) {
      return v4 & 1;
    }
    LODWORD(v431) = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
    if ((game_Unit_HasSkill_alt1((__int64)v130, (unsigned int*)&v431) & 1) !=
        0) {
      v9 = a2;
    }
    else {
      v144 = UnitItemList_70f9f0_alt1((unsigned __int16*)(v4 + 828), 0xCu);
      v9 = a2;
      if (v144 < 0) {
        goto LABEL_383;
      }
    }
    v143 = (__int64)v3;
    v142 = 5;
  LABEL_234:
    LOBYTE(v4) = TargetEnumerator_77f800_alt1(v143, v142, v9, 1);
    return v4 & 1;
  case 0x1A:
    v7 = 1;
    v6 = a2;
    return TargetEnumerator_77f800_alt1((__int64)a1, 3u, v6, v7);
  case 0x1B:
    v137 = *((_DWORD*)a1 + 11);
    v427_.v428 = 0;
    if ((v137 & 0x80000000) != 0) {
      goto LABEL_383;
    }
    v138 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL);
    if (v138 == 0) {
      goto LABEL_383;
    }
    v139 = v138 + 144LL * v137;
    if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v139 + 40LL))(v139) != 6) {
      goto LABEL_383;
    }
    if (*v2 != 0) {
      v140 = game_UnitPool_Get_alt3(v2);
    }
    else {
      v140 = nullptr;
    }
    v178 = *(_QWORD*)(a2 + 32);
    *(_QWORD*)&v431 = v3;
    if (v178 != 0) {
      if (v178 == a2) {
        v432_.v434 = v432_.v432;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v178 + 24LL))(
            v178, (__int64)v432_.v432);
        v3 = (__int64*)v431;
        v179 = v432_.v434;
      }
      else {
        v179 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v178 + 16LL))(v178);
        v432_.v434 = v179;
      }
    }
    else {
      v179 = nullptr;
      v432_.v434 = nullptr;
    }
    v432_.v435 = (__int64 (**)(void))v139;
    v432_.v436 = (__int64 (**)(void))&v427_.v428;
    v375 = (__int64 (***)(void))fw_memory_HeapManager_Allocate_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v376 = v375;
    v375[2] = (__int64 (**)(void))v3;
    *v375 = GameData_1f97910;
    if (v179 != nullptr) {
      if (v179 == v432_.v432) {
        v375[8] = (__int64 (**)(void))(v375 + 4);
        (*(void (**)(__int64, __int64))(*v179 + 24LL))((__int64)v179,
                                                       (__int64)(v375 + 4));
      }
      else {
        v375[8] = (__int64 (**)(void))(*(__int64 (**)(__int64))(*v179 + 16LL))(
            (__int64)v179);
      }
    }
    else {
      v375[8] = nullptr;
    }
    v377 = v432_.v436;
    v437_.v439 = v376;
    v376[10] = v432_.v435;
    v376[11] = v377;
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v139 + 760LL))(
        v139, (__int64)v140, (__int64)&v437_.v437);
    if (v437_.v439 == &v437_.v437) {
      v378 = 4;
    }
    else {
      if (v437_.v439 == nullptr) {
        goto LABEL_710;
      }
      v378 = 5;
    }
    ((void (*)(__int64))(*v437_.v439)[v378])((__int64)v437_.v439);
  LABEL_710:
    if (v432_.v434 == v432_.v432) {
      v379 = 32;
    }
    else {
      if (v432_.v434 == nullptr) {
        goto LABEL_715;
      }
      v379 = 40;
    }
    (*(void (**)(__int64))(*v432_.v434 + v379))((__int64)v432_.v434);
  LABEL_715:
    LOBYTE(v4) = v427_.v428;
    return v4 & 1;
  case 0x1C:
    v132 = game_UnitPool_Get_alt3((_BYTE*)a1 + 8);
    if (v132 == nullptr) {
      goto LABEL_383;
    }
    v133 = GameData_212cfb8[0];
    v134 = game_map_7ca370_alt1(*GameData_212cfb8[0], *((_DWORD*)v3 + 3),
                                *((_DWORD*)v3 + 4), (__int64)v132);
    if (v134 == 0) {
      goto LABEL_383;
    }
    if ((v3[5] & 0xFFF) != 0) {
      v135 = a2;
      v136 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                        8 * (v3[5] & 0xFFF));
    }
    else {
      v147 = *((unsigned __int16*)v3 + 16);
      if (*((_WORD*)v3 + 16) == 0) {
        v147 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v135 = a2;
      v148 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v147);
      v149 = *(_QWORD*)(v148 + 192);
      v150 = *(unsigned __int8*)(v148 + 72);
      v151 = v149 == 0 | v150 > 7;
      if (v151 || *(_BYTE*)(v149 + 105) == 0) {
        v136 = 0;
      }
      else if (*(_BYTE*)(v149 + 104) == 2) {
        v136 = 0;
      }
      else {
        v136 = v149;
      }
    }
    v170 = v134;
    v171 = (*(__int64 (**)(__int64))(*(_QWORD*)v134 + 328LL))(v134);
    v172 = (*(__int64 (**)(__int64))(*(_QWORD*)v170 + 336LL))(v170);
    if (*v421 != 0) {
      v4 = (__int64)game_UnitPool_Get_alt3(v421);
    }
    else {
      v4 = 0;
    }
    if (v136 != 0) {
      v173 = *(_WORD*)(v136 + 16) & 0xFFF;
    }
    else {
      v173 = 0;
    }
    if (v4 == 0) {
      return v4 & 1;
    }
    LOBYTE(v437_.v437) = 1;
    v174 = fw_memory_HeapManager_Allocate_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    *(_QWORD*)(v174 + 16) = v4;
    *(_DWORD*)(v174 + 24) = v173;
    v432_.v433 = (__int128*)v174;
    *(_QWORD*)v174 = GameData_1f97990;
    *(_QWORD*)(v174 + 8) = v3;
    *(_QWORD*)(v174 + 32) = &v437_.v437;
    Unit_6c8a80_alt1(v4, v171, v172, (__int64)&v431);
    (*(void (**)(__int64))(*(_QWORD*)v174 + 40LL))(v174);
    if ((unsigned __int8)v437_.v437 != 1) {
      goto LABEL_383;
    }
    LODWORD(v175) = v171 + 32 * v172;
    v175 = (unsigned int)v175 >= 0x400 ? 0LL : (unsigned int)v175;
    v176 = *(_QWORD*)(*v133 + 16);
    if ((*(__int16*)(v176 + 2LL * (unsigned int)v175 + 14440) & 0x80000000) ==
            0 ||
        (*(__int16*)(v176 + 2 * v175 + 12392) & 0x80000000) == 0) {
      goto LABEL_383;
    }
    v177 = *(_QWORD*)(v135 + 32);
    LOBYTE(v431) = 0;
    DWORD2(v431) = 0;
    BYTE5(v431) = 0;
    BYTE1(v431) = v171;
    BYTE2(v431) = v172;
    WORD3(v431) = -1;
    *(_WORD*)((char*)&v431 + 3) = 9;
    if (v177 == 0) {
      goto LABEL_716;
    }
    (*(void (**)(__int64, __int64))(*(_QWORD*)v177 + 48LL))(v177,
                                                            (__int64)&v431);
    LOBYTE(v4) = 1;
    return v4 & 1;
  case 0x1E:
    v6 = a2;
    v7 = 0;
    return TargetEnumerator_77f800_alt1((__int64)a1, 3u, v6, v7);
  default:
    return v4 & 1;
  }
LABEL_23:
  v21 = 32 * v15;
  v416 = v4;
  while (1) {
    v22 = *((_DWORD*)v3 + 5);
    v24 = *((_DWORD*)v3 + 3);
    v23 = *((_DWORD*)v3 + 4);
    if ((unsigned int)(v22 * v22) < 2) {
      v33 = v14 - v24;
      if (v33 < 0) {
        v33 = -v33;
      }
      v34 = v15 - v23;
      if (v34 < 0) {
        v34 = -v34;
      }
      if (v34 + v33 == 1) {
      LABEL_45:
        LODWORD(v35) = v14 + v21;
        if ((unsigned int)(v14 + v21) >= 0x400) {
          v35 = 0;
        }
        else {
          v35 = (unsigned int)v35;
        }
        if (*(_BYTE*)(*(_QWORD*)(*v10 + 96) + v35 + 8) != 0) {
          v36 = *(_QWORD*)(GameData_21ca310 + 56) +
                2224LL * *(unsigned __int8*)(*(_QWORD*)(*v10 + 96) + v35 + 8);
          v37 = *(unsigned __int8*)(*(_QWORD*)(*v10 + 96) + v35 + 8) > 0xFAu ||
                v36 == 2224;
          if (!v37 && *(_QWORD*)(v36 - 1832) != 0 & *v2 != 0) {
            v39 = game_UnitPool_Get_alt3(v2);
            if (v39 != nullptr) {
              v40 = (__int64)v39;
              if ((((*(__int64 (**)(__int64))(*v3 + 16))((__int64)v3) & 1) ==
                       0 ||
                   (Unit_6c9cf0_alt2(v40, v36 - 2224) & 1) != 0) &&
                  *v421 != 0) {
                v41 = game_UnitPool_Get_alt3(v421);
                if (v41 != nullptr && v41 != (__int64*)(v36 - 2224)) {
                  v42 = v41;
                  if (game_Unit_IsUnlocked_alt1((__int64)v41) &&
                      game_Unit_IsUnlocked_alt1(v36 - 2224)) {
                    v43 = v42[55];
                    v44 = v42;
                    v45 = v43 != 0 ? *(unsigned __int8*)(v43 + 16) : 9;
                    v46 = v36 - 1784;
                    v47 = *(_QWORD*)(v36 - 1784);
                    v48 = v47 != 0 ? *(unsigned __int8*)(v47 + 16) : 9;
                    if (v45 == v48) {
                      if (*((_WORD*)v44 + 414) != 0) {
                        v49 = (*((_WORD*)v44 + 418) != 0) + 1;
                      }
                      else {
                        v49 = *((_WORD*)v44 + 418) != 0;
                      }
                      if (*((_WORD*)v44 + 422) != 0) {
                        ++v49;
                      }
                      v37 = *((unsigned __int16*)v44 + 426) == 0;
                      v50 = *((unsigned __int16*)v44 + 430);
                      v51 = *((unsigned __int16*)v44 + 434);
                      if (!v37) {
                        ++v49;
                      }
                      if (v50 != 0) {
                        ++v49;
                      }
                      if ((v49 | (v51 != 0)) != 0) {
                        goto LABEL_92;
                      }
                      if (*(_WORD*)(v36 - 1396) != 0) {
                        v52 = (*(_WORD*)(v36 - 1388) != 0) + 1;
                      }
                      else {
                        v52 = *(_WORD*)(v36 - 1388) != 0;
                      }
                      if (*(_WORD*)(v36 - 1380) != 0) {
                        ++v52;
                      }
                      if (*(_WORD*)(v36 - 1372) != 0) {
                        ++v52;
                      }
                      if (*(_WORD*)(v36 - 1364) != 0) {
                        ++v52;
                      }
                      if ((v52 | (*(_WORD*)(v36 - 1356) != 0)) != 0) {
                      LABEL_92:
                        if (MapUtil_7536a0(v36 - 2224)) {
                          DWORD2(v431) = 0;
                          BYTE5(v431) = 0;
                          LOWORD(v431) = -256;
                          BYTE2(v431) = -1;
                          WORD3(v431) = -1;
                          v53 = 9;
                          *(_WORD*)((char*)&v431 + 3) = 9;
                          BYTE5(v431) = *(_BYTE*)(v36 - 136);
                          *(_WORD*)((char*)&v431 + 1) = *(_WORD*)(v36 - 1640);
                          if (*(_QWORD*)v46 != 0) {
                            v53 = *(_BYTE*)(*(_QWORD*)v46 + 16LL);
                          }
                          v54 = *(_QWORD*)(a2 + 32);
                          BYTE3(v431) = v53;
                          BYTE1(v431) = v14;
                          BYTE2(v431) = v15;
                          if (v54 == 0) {
                            goto LABEL_716;
                          }
                          (*(void (**)(__int64, __int64))(
                              *(_QWORD*)v54 + 48LL))(v54, (__int64)&v431);
                          v416 = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (v22 >= 1) {
      v25 = v22 + v23;
      v26 = v22 + v24;
      v27 = 10000;
      do {
        v28 = v15 - v23;
        v29 = v14 - v24;
        v30 = *((_DWORD*)v3 + 3);
        if (v15 - v23 < 0) {
          v28 = v23 - v15;
        }
        do {
          ++v30;
          if (v29 >= 0) {
            v31 = v29;
          }
          else {
            v31 = -v29;
          }
          --v29;
          v32 = v31 + v28;
          if (v32 < v27) {
            v27 = v32;
          }
        } while (v30 < v26);
        ++v23;
      } while (v23 < v25);
      if (v27 == 1) {
        goto LABEL_45;
      }
    }
    v2 = v421;
    v74 = v14++ < v20;
    if (!v74) {
      LODWORD(v4) = v416;
      v14 = v409;
      v74 = v15++ < v412;
      if (!v74) {
        return v4 & 1;
      }
      goto LABEL_23;
    }
  }
}

__int64 game_map_ITarget_Enumerate(__int64 a1, long double a2)
{
  char v2;
  __int64 v3;
  _QWORD v5[4];
  _QWORD* v6;

  v5[0] = GameData_1f97a90;
  v6 = v5;
  v2 = GameRoutine_773420(a1, (__int64)v5, a2);
  if (v6 == v5) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v6 != nullptr) {
    v3 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v6 + v3))((__int64)v6);
  }
  return v2 & 1;
}

void ITarget_776720(__int64 a1, char a2, char a3, unsigned __int8 a4,
                    _DWORD* a5, __int64 a6)
{
  int v6;
  _BYTE* v7;
  int v8;
  __int64 v9;
  unsigned __int8 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char* v14;
  int v15;
  __int64* v16;
  __int64* v17;
  int v18;
  unsigned __int64 v19;
  char v20;
  char v21;
  char v22;
  char v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _BYTE* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  _BYTE* v35;
  _BYTE* v36;
  char v37;
  __int64 v38;
  char* v39;
  int v40;
  int v41;
  _BYTE* v42;
  __int64* v43;
  unsigned int v44;
  __int64 v45;
  unsigned int v46;
  bool v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  unsigned int v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  char v65;
  _BYTE* v66;
  unsigned int v67;
  __int64 v68;
  unsigned int v69;
  bool v70;
  char* v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  __int64* v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  int v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  int v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  int v95;
  __int64 v96;
  unsigned int v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  int v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  int v106;
  int v107;
  __int64 v108;
  char v109;
  char v110;
  char v111;
  char v112;
  char v113;
  char v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  _BYTE* v121;
  _BYTE* v122;
  char v123;
  __int64 v124;
  char* v125;
  __int64 v126;
  unsigned int v127;
  __int64 v128;
  __int64* v131;
  __int64 v132;
  __int64* v133;
  __int64 v134;
  int v135;
  int v136;
  int v137;
  int v138;
  unsigned __int64 v139;
  char v140;
  char v141;
  char v142;
  char v143;
  char v144;
  char v145;
  unsigned __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  _BYTE* v153;
  _BYTE* v154;
  char v155;
  __int64 v156;
  char* v157;
  int v158;
  __int64 v159;
  __int64 v160;
  int v161;
  int v162;
  _BYTE* v163;
  _BYTE* v164;
  char v166;
  char v167;
  int v171;
  int v172;
  int v173;
  int v174;
  char v175;
  char v176;
  char v177[4];
  int v178;
  int v179;

  if ((*a5 & 0xFFF) == 0 ||
      *(unsigned __int8*)(*GameData_212ce98[0] + 26) <=
          (unsigned int)(unsigned __int8)(a2 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         24)) ||
      *(unsigned __int8*)(*GameData_212ce98[0] + 27) <=
          (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         25))) {
    return;
  }
  v6 = *(_DWORD*)(a1 + 20);
  v7 = (_BYTE*)a1;
  v8 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                      8LL * (*a5 & 0xFFF)) +
                           279LL);
  v174 = v6;
  if (v6 != 0) {
    if (v6 < 0) {
    LABEL_262:
      GameRoutine_74e1f0_alt1();
    }
    v9 = 4LL * v6;
    v10 = a4;
    v11 = v6;
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
    v13 = v12 + 4 * v11;
    memset_alt1(v12, 0, v9);
    a4 = v10;
  }
  else {
    v13 = 0;
    v12 = 0;
  }
  v14 = (char*)GameData_212cf50 + a4;
  v166 = v14[1284];
  v167 = v14[1280];
  v175 = (a4 - 1) & 0xFD;
  v176 = a4 & 0xFD;
  v15 = v174;
  if (v8 == 0) {
    v173 = 0;
    goto LABEL_156;
  }
  v173 = 0;
  v16 = GameData_212c930;
  v17 = GameData_212cfb8[0];
  v163 = v7;
  v161 = v8;
  while (2) {
    if (v15 == 0) {
      v65 = 1;
      v19 = v12;
      goto LABEL_85;
    }
    v18 = 0;
    v19 = v12;
    do {
      if (v176 != 0) {
        v20 = 0;
      }
      else {
        v20 = v18;
      }
      v21 = a2 + v173 * v167 + v20;
      if (v175 != 0) {
        v22 = 0;
      }
      else {
        v22 = v18;
      }
      v23 = a3 + v173 * v166 + v22;
      if (v19 < v13) {
        *(_BYTE*)v19 = v21;
        *(_BYTE*)(v19 + 1) = v23;
        *(_WORD*)(v19 + 2) = 0;
        v19 += 4LL;
      }
      else {
        v24 = v19 - v12;
        v25 = v13;
        v26 = (_BYTE*)v19;
        v27 = (__int64)(v19 - v12) >> 2;
        v28 = v27 + 1;
        if ((unsigned __int64)(v27 + 1) >> 62 != 0) {
          goto LABEL_262;
        }
        v29 = v25 - v12;
        v30 = (__int64)(v25 - v12) >> 1;
        if (v30 > v28) {
          v28 = v30;
        }
        if (v29 >= 0x7FFFFFFFFFFFFFFCLL) {
          v31 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v28;
        }
        if (v31 >> 62 != 0) {
        LABEL_263:
          GameRoutine_60a210_alt1();
        }
        v32 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v31, 16, 0);
        v33 = v32 + v24;
        *(_BYTE*)(v33 + 1) = v23;
        v34 = v32 + v24 - 4 * v27;
        *(_BYTE*)v33 = v21;
        *(_WORD*)(v33 + 2) = 0;
        if ((_BYTE*)v12 != v26) {
          v35 = (_BYTE*)v12;
          v36 = (_BYTE*)(v32 + v24 - 4 * v27);
          do {
            *v36 = *v35;
            v36[1] = v35[1];
            v36[2] = v35[2];
            v37 = v35[3];
            v35 += 4;
            v36[3] = v37;
            v36 += 4;
          } while (v35 != v26);
        }
        v13 = v32 + 4 * v31;
        v19 = v33 + 4;
        if (v12 != 0) {
          v38 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v12);
        }
        v15 = v174;
        v12 = v34;
      }
      ++v18;
    } while (v18 != v15);
    if (v12 == v19) {
      v7 = v163;
      v65 = 1;
      v16 = GameData_212c930;
      v17 = GameData_212cfb8[0];
      goto LABEL_85;
    }
    v7 = v163;
    v39 = (char*)v12;
    v16 = GameData_212c930;
    v17 = GameData_212cfb8[0];
    do {
      LOBYTE(v40) = *v39;
      if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) <=
          (unsigned int)(unsigned __int8)(*v39 -
                                          *(_BYTE*)(*GameData_212ce98[0] +
                                                    24))) {
        goto LABEL_156;
      }
      LOBYTE(v41) = v39[1];
      if (*(unsigned __int8*)(*GameData_212ce98[0] + 27) <=
          (unsigned int)(unsigned __int8)(v41 - *(_BYTE*)(*GameData_212ce98[0] +
                                                          25))) {
        goto LABEL_156;
      }
      if ((*((_DWORD*)v163 + 10) & 0xFFF) != 0) {
        v42 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                         8LL * (*((_DWORD*)v163 + 10) & 0xFFF));
        if (v42 == nullptr) {
          goto LABEL_38;
        }
      }
      else {
        v44 = *((unsigned __int16*)v163 + 16);
        if (*((_WORD*)v163 + 16) == 0) {
          v44 = *(unsigned __int16*)game_g_empty_item_ptr;
        }
        v45 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v44);
        v42 = *(_BYTE**)(v45 + 192);
        v46 = *(unsigned __int8*)(v45 + 72);
        v47 = v42 == nullptr || v46 > 7;
        if (v47 || v42[105] == 0 || v42[104] == 2) {
          goto LABEL_38;
        }
      }
      if (v42[250] == 16) {
        if (v163[8] != 0) {
          v43 = game_UnitPool_Get_alt2(v163 + 8);
          LOBYTE(v40) = *v39;
          LOBYTE(v41) = v39[1];
        }
        else {
          v43 = nullptr;
        }
        v40 = (char)v40;
        v41 = (char)v41;
        if (*GameData_212ce90[0] != 0 &&
            (*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) != 0) {
          v48 = v43[55];
          v49 = v48 != 0 ? *(unsigned __int8*)(v48 + 16) : 9LL;
          v50 = *GameData_212ce98[0];
          if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) <=
                  (unsigned int)(unsigned __int8)(v40 -
                                                  *(_BYTE*)(*GameData_212ce98
                                                                [0] +
                                                            16)) ||
              *(unsigned __int8*)(v50 + 19) <=
                  (unsigned int)(unsigned __int8)(v41 - *(_BYTE*)(v50 + 17)) ||
              ((*(_DWORD*)(*(_QWORD*)(v50 + 160) + (v49 << 7) +
                           4LL * (((char)v40 + 32 * (char)v41) >> 5) + 8) >>
                v40) &
               1) == 0) {
            goto LABEL_156;
          }
        }
        if (v163[8] != 0) {
          v51 = game_UnitPool_Get_alt2(v163 + 8);
          v40 = *v39;
          v41 = v39[1];
          v52 = (__int64)v51;
        }
        else {
          v52 = 0;
        }
        v53 = v40 + 32 * v41;
        v54 = v53 >= 0x400 ? 0LL : v53;
        v55 = *(_QWORD*)(*v17 + 16);
        v56 = *(__int16*)(v55 + 2LL * (unsigned int)v54 + 2152);
        if (v56 < 0 || (v57 = *(_QWORD*)(v55 + 8)) == 0 ||
            ((*(__int64 (**)(__int64))(*(_QWORD*)(v57 + 144LL * (int)v56) +
                                       272LL))(v57 + 144LL * (int)v56) &
             1) == 0 ||
            v52 == 0 ||
            (v58 = *(
                 _QWORD*)(*(_QWORD*)(*v16 + 64) +
                          8LL *
                              *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98
                                                                  [0] +
                                                              32) +
                                                   2 * v54 + 8))) == 0 ||
            (v59 = game_Unit_GetJob_alt1(v52)) == 0 ||
            *(_BYTE*)(v59 + 48) == 0 ||
            *(unsigned __int8*)(*(_QWORD*)(v58 + 48) +
                                *(unsigned __int8*)(v59 + 48) + 32LL) == 255) {
          if (v163[8] == 0) {
            goto LABEL_156;
          }
          v60 = game_UnitPool_Get_alt2(v163 + 8);
          v61 = *v39;
          v62 = v39[1];
          v177[0] = 1;
          if (v60 == nullptr) {
            goto LABEL_156;
          }
          v63 = (__int64)v60;
          v64 = game_Unit_GetJob_alt1((__int64)v60);
          if ((MapUtil_756080(v63, v64, v61, v62, v177) & 1) == 0) {
            goto LABEL_156;
          }
        }
      }
    LABEL_38:
      v39 += 4;
    } while (v39 != (char*)v19);
    v65 = 0;
  LABEL_85:
    ++v173;
    if ((*((_DWORD*)v7 + 10) & 0xFFF) == 0) {
      v67 = *((unsigned __int16*)v7 + 16);
      if (*((_WORD*)v7 + 16) == 0) {
        v67 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v68 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v67);
      v66 = *(_BYTE**)(v68 + 192);
      v69 = *(unsigned __int8*)(v68 + 72);
      v70 = v66 == nullptr || v69 > 7;
      if (v70 || v66[105] == 0 || v66[104] == 2) {
        goto LABEL_97;
      }
    LABEL_87:
      if (v66[250] != 16) {
        goto LABEL_97;
      }
    LABEL_98:
      v15 = v174;
      if (v173 == v161) {
        v173 = v161;
        goto LABEL_156;
      }
      continue;
    }
    break;
  }
  v66 = *(_BYTE**)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (*((_DWORD*)v7 + 10) & 0xFFF));
  if (v66 != nullptr) {
    goto LABEL_87;
  }
LABEL_97:
  v71 = (char*)v12;
  if ((v65 & 1) != 0) {
    goto LABEL_98;
  }
  while (1) {
    LODWORD(v72) = *v71 + 32 * v71[1];
    if ((unsigned int)v72 >= 0x400) {
      v72 = 0;
    }
    else {
      v72 = (unsigned int)v72;
    }
    v73 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v72 + 8);
    if (v73 != 0) {
      v74 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v73;
      if (v73 <= 0xFA && v74 != 2224 && *(_QWORD*)(v74 - 1832) != 0 &&
          v7[8] != 0) {
        v77 = game_UnitPool_Get_alt2(v7 + 8);
        if (v77 != nullptr) {
          v78 = (__int64)v77;
          if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)v7 + 16LL))(v7) & 1) == 0 ||
              (Unit_6c9cf0_alt1(v78, v74 - 2224) & 1) != 0) {
            if (v7[8] == 0) {
              break;
            }
            v79 = game_UnitPool_Get_alt2(v7 + 8);
            if (v79 == nullptr) {
              break;
            }
            v80 = v79[55];
            if (v80 != 0) {
              v81 = *(unsigned __int8*)(v80 + 16);
            }
            else {
              v81 = 9;
            }
            v82 = *(unsigned __int8*)(*(_QWORD*)(v74 - 1784) + 16LL);
            if (v82 != v81) {
              if (*(_BYTE*)(*(_QWORD*)(v74 - 1784) + 16LL) != 0) {
                if (v81 != 0 || v82 != 3) {
                  break;
                }
              }
              else if (v81 != 3) {
                break;
              }
            }
          }
        }
      }
    }
    LODWORD(v83) = *v71 + 32 * v71[1];
    v83 = (unsigned int)v83 >= 0x400 ? 0LL : (unsigned int)v83;
    v84 =
        *(_QWORD*)(*(_QWORD*)(*v16 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              2LL * (unsigned int)v83 + 8));
    if ((*(unsigned __int8*)(v84 + 62) | *(unsigned __int8*)(v84 + 63)) != 0 ||
        *(unsigned __int8*)(*(_QWORD*)(v84 + 48) + 40LL) == 255) {
      break;
    }
    v85 = *(_QWORD*)(*v17 + 16);
    v86 = *(__int16*)(v85 + 2 * v83 + 104);
    if (v86 < 0 || (v87 = *(_QWORD*)(v85 + 8)) == 0 ||
        (v88 = v87 + 144LL * (unsigned int)v86,
         (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v88 + 40LL))(v88) != 2) ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88) & 1) == 0 ||
        (v89 = (*(__int64 (**)(__int64))(*(_QWORD*)v88 + 224LL))(v88)) == 0) {
      v89 = **(_QWORD**)(*v16 + 64);
    }
    if ((*(unsigned __int8*)(v89 + 62) | *(unsigned __int8*)(v89 + 63)) != 0 ||
        *(unsigned __int8*)(*(_QWORD*)(v89 + 48) + 40LL) == 255) {
      break;
    }
    v90 = *v71;
    v91 = v71[1];
    v92 = *v17;
    if (v7[8] != 0 && (v93 = game_UnitPool_Get_alt2(v7 + 8)) != nullptr &&
        (v94 = v93[55]) != 0) {
      v95 = *(unsigned __int8*)(v94 + 16);
    }
    else {
      v95 = 9;
    }
    v96 = *(_QWORD*)(v92 + 16);
    v97 = v90 + 32 * v91;
    if (v97 >= 0x400) {
      v97 = 0;
    }
    v98 = *(__int16*)(v96 + 2LL * v97 + 12392);
    v16 = GameData_212c930;
    if (v98 < 0 || (v99 = *(_QWORD*)(v96 + 8)) == 0 ||
        (v100 = v99 + 144LL * (unsigned int)v98,
         ((*(__int64 (**)(__int64))(*(_QWORD*)v100 + 16LL))(v100) & 1) == 0) ||
        v95 ==
            (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v100 + 168LL))(v100) ||
        (v101 = (*(__int64 (**)(__int64))(*(_QWORD*)v100 + 224LL))(v100)) ==
            0) {
      v101 = **(_QWORD**)(*v16 + 64);
    }
    v17 = GameData_212cfb8[0];
    if (*(_BYTE*)(v101 + 57) == 14) {
      break;
    }
    v71 += 4;
    if (v71 == (char*)v19) {
      goto LABEL_98;
    }
  }
LABEL_156:
  v102 =
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a5 & 0xFFF));
  if (v102 != 0) {
    v103 = v174;
    if (*(_BYTE*)(v102 + 250) == 16) {
      if (v173 < 1 || v174 < 1) {
        goto LABEL_256;
      }
      v164 = v7;
    LABEL_161:
      v104 = v13;
      v105 = v12;
      v106 = v173 - v103;
      v162 = v173--;
      do {
        v171 = v106;
        if ((v106 & 0x80000000) == 0) {
          v107 = 0;
          v108 = v12;
          v109 = a2 + v106 * v167;
          v110 = a3 + v106 * v166;
          do {
            if (v176 != 0) {
              v111 = 0;
            }
            else {
              v111 = v107;
            }
            v112 = v109 + v111;
            if (v175 != 0) {
              v113 = 0;
            }
            else {
              v113 = v107;
            }
            v114 = v110 + v113;
            if (v105 < v104) {
              *(_BYTE*)v105 = v112;
              *(_BYTE*)(v105 + 1) = v114;
              v12 = v108;
              *(_WORD*)(v105 + 2) = 0;
              v105 += 4LL;
            }
            else {
              v115 = v105 - v108;
              v116 = (__int64)(v105 - v108) >> 2;
              v117 = v116 + 1;
              if ((unsigned __int64)(v116 + 1) >> 62 != 0) {
                goto LABEL_262;
              }
              if ((__int64)(v104 - v108) >> 1 > v117) {
                v117 = (__int64)(v104 - v108) >> 1;
              }
              if (v104 - v108 >= 0x7FFFFFFFFFFFFFFCLL) {
                v118 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v118 = v117;
              }
              if (v118 >> 62 != 0) {
                goto LABEL_263;
              }
              v119 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v118, 16, 0);
              v120 = v119 + v115;
              *(_BYTE*)(v120 + 1) = v114;
              v12 = v119 + v115 - 4 * v116;
              *(_BYTE*)v120 = v112;
              *(_WORD*)(v120 + 2) = 0;
              if (v108 != v105) {
                v121 = (_BYTE*)v108;
                v122 = (_BYTE*)(v119 + v115 - 4 * v116);
                do {
                  *v122 = *v121;
                  v122[1] = v121[1];
                  v122[2] = v121[2];
                  v123 = v121[3];
                  v121 += 4;
                  v122[3] = v123;
                  v122 += 4;
                } while (v121 != (_BYTE*)v105);
              }
              v104 = v119 + 4 * v118;
              v105 = v120 + 4;
              if (v108 != 0) {
                v124 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v124 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, v108);
              }
              v103 = v174;
            }
            ++v107;
            v108 = v12;
          } while (v107 != v103);
        }
        v106 = v171 + 1;
      } while (v171 != v173);
      if (v12 != v105) {
        v125 = (char*)v12;
        v13 = v104;
        while (1) {
          LODWORD(v126) = *v125 + 32 * v125[1];
          if ((unsigned int)v126 >= 0x400) {
            v126 = 0;
          }
          else {
            v126 = (unsigned int)v126;
          }
          v127 = *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                     v126 + 8);
          if (v127 != 0) {
            v128 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v127;
            if (v127 <= 0xFA && v128 != 2224 && *(_QWORD*)(v128 - 1832) != 0 &&
                v164[8] != 0) {
              v131 = game_UnitPool_Get_alt2(v164 + 8);
              if (v131 != nullptr) {
                v132 = (__int64)v131;
                if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)v164 + 16LL))(v164) &
                     1) == 0 ||
                    (Unit_6c9cf0_alt1(v132, v128 - 2224) & 1) != 0) {
                  if (*(int*)(v128 - 1632) > 1) {
                    goto LABEL_219;
                  }
                  if (v164[8] != 0) {
                    v133 = game_UnitPool_Get_alt2(v164 + 8);
                    if (v133 != nullptr) {
                      v134 = v133[55];
                      if (v134 != 0) {
                        v135 = *(unsigned __int8*)(v134 + 16);
                      }
                      else {
                        v135 = 9;
                      }
                      v136 =
                          *(unsigned __int8*)(*(_QWORD*)(v128 - 1784) + 16LL);
                      if (v136 == v135) {
                      LABEL_219:
                        v103 = v174;
                        if (v162 <= 1) {
                          goto LABEL_256;
                        }
                        goto LABEL_161;
                      }
                      if (*(_BYTE*)(*(_QWORD*)(v128 - 1784) + 16LL) != 0) {
                        if (v135 == 0 && v136 == 3) {
                          goto LABEL_219;
                        }
                      }
                      else if (v135 == 3) {
                        goto LABEL_219;
                      }
                    }
                  }
                  if (!MapUtil_7536a0(v128 - 2224)) {
                    goto LABEL_219;
                  }
                }
              }
            }
          }
          v125 += 4;
          if (v125 == (char*)v105) {
            v173 = v162;
            goto LABEL_222;
          }
        }
      }
      v13 = v104;
      v173 = v162;
    }
  }
  else {
  LABEL_222:
    v103 = v174;
  }
  if (v173 >= 1 && v103 >= 1) {
    v137 = 0;
    do {
      v138 = 0;
      v139 = v12;
      v140 = a2 + v137 * v167;
      v172 = v137;
      v141 = a3 + v137 * v166;
      do {
        if (v176 != 0) {
          v142 = 0;
        }
        else {
          v142 = v138;
        }
        v143 = v140 + v142;
        if (v175 != 0) {
          v144 = 0;
        }
        else {
          v144 = v138;
        }
        v145 = v141 + v144;
        if (v139 < v13) {
          *(_BYTE*)v139 = v143;
          *(_BYTE*)(v139 + 1) = v145;
          *(_WORD*)(v139 + 2) = 0;
          v139 += 4LL;
        }
        else {
          v146 = v139 - v12;
          v147 = (__int64)(v139 - v12) >> 2;
          v148 = v147 + 1;
          if ((unsigned __int64)(v147 + 1) >> 62 != 0) {
            goto LABEL_262;
          }
          if ((__int64)(v13 - v12) >> 1 > v148) {
            v148 = (__int64)(v13 - v12) >> 1;
          }
          if (v13 - v12 >= 0x7FFFFFFFFFFFFFFCLL) {
            v149 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v149 = v148;
          }
          if (v149 >> 62 != 0) {
            goto LABEL_263;
          }
          v150 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v149, 16, 0);
          v151 = v150 + v146;
          *(_BYTE*)v151 = v143;
          v152 = v150 + v146 - 4 * v147;
          *(_BYTE*)(v151 + 1) = v145;
          *(_WORD*)(v151 + 2) = 0;
          if (v12 != v139) {
            v153 = (_BYTE*)v12;
            v154 = (_BYTE*)(v150 + v146 - 4 * v147);
            do {
              *v154 = *v153;
              v154[1] = v153[1];
              v154[2] = v153[2];
              v155 = v153[3];
              v153 += 4;
              v154[3] = v155;
              v154 += 4;
            } while (v153 != (_BYTE*)v139);
          }
          v13 = v150 + 4 * v149;
          v139 = v151 + 4;
          if (v12 != 0) {
            v156 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v156 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v156, v12);
          }
          v103 = v174;
          v12 = v152;
        }
        ++v138;
      } while (v138 != v103);
      v157 = (char*)v12;
      if (v12 != v139) {
        do {
          v158 = *v157;
          v159 = *(_QWORD*)(a6 + 32);
          v178 = v157[1];
          v179 = v158;
          if (v159 == 0) {
            GameRoutine_60a310_alt2();
          }
          (*(void (**)(__int64, int*, int*))(*(_QWORD*)v159 + 48LL))(
              v159, &v179, &v178);
          v157 += 4;
        } while (v157 != (char*)v139);
      }
      v103 = v174;
      v137 = v172 + 1;
    } while (v172 + 1 != v173);
  }
LABEL_256:
  if (v12 != 0) {
    v160 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v160 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v160, v12);
  }
}

__int64 game_map_ITarget_EachSelectable(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  __int64 v15;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((*(_DWORD*)(a1 + 40) & 0xFFF) != 0) {
    v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)(a1 + 40) & 0xFFF));
    if (v15 != 0) {
    LABEL_3:
      v13_.v13[2] = a2;
      v13_.v13[3] = a1;
      v13_.v13[0] = GameData_1f97d10;
      v13_.v13[1] = &v15;
      goto LABEL_13;
    }
  }
  else {
    v3 = *(unsigned __int16*)(a1 + 32);
    if (*(_WORD*)(a1 + 32) == 0) {
      v3 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v4 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v3);
    v5 = *(_QWORD*)(v4 + 192);
    v6 = *(unsigned __int8*)(v4 + 72);
    v7 = v5 == 0 || v6 > 7;
    if (!v7 && *(_BYTE*)(v5 + 105) != 0 && *(_BYTE*)(v5 + 104) != 2) {
      v15 = v5;
      goto LABEL_3;
    }
  }
  v13_.v13[0] = GameData_1f97d90;
  v13_.v13[1] = a2;
LABEL_13:
  v13_.v14 = v13_.v13;
  GameHr_777700(a1, (__int64)v13_.v13, a3),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  result = (__int64)v13_.v14;
  if (v13_.v14 == v13_.v13) {
    v12 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      return result;
    }
    v12 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(*v13_.v14 + v12))(
      v13_.v14, v8, v9, v10);
}

_QWORD* game_map_ITarget_EnumerateSubTarget_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *result = GameData_1f97b10;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    v5 = result;
    if (v4 == a1 + 4) {
      result[8] = result + 4;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
      result = v5;
    }
    else {
      v6 = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v4 + 16LL))((void*)v4, a1[8]));
      result = v5;
      v5[8] = v6;
    }
  }
  else {
    result[8] = 0;
  }
  v7 = a1[11];
  result[10] = a1[10];
  result[11] = v7;
  result[12] = a1[12];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda0_CloneInto(_QWORD* a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;

  *a2 = GameData_1f97b10;
  v4 = a1[3];
  a2[2] = a1[2];
  a2[3] = v4;
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[11] = a1[11];
  v6 = a1[10];
  a2[12] = a1[12];
  a2[10] = v6;
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda0_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v8;
  char v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  int v18;
  __int64* v19;
  __int64 v20;
  int v21;
  __int64 v23;
  unsigned int v24;
  int v25;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 result;
  int v32;
  char v33;
  char v34;
  char v35;
  __int16 v36;
  char v37;
  __int16 v38;
  int v39;
  struct {
    char gap0_[20];
    _BYTE v40[4];
    char v41;
    char v42;
    __int16 v43;
  } f_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *a2;
  v4 = *a3;
  v6 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  if (v5 != 0) {
    LODWORD(v5) = *(_WORD*)(v5 + 16) & 0xFFF;
  }
  v32 = v5;
  TargetEnumerator_77c150_alt1((__int64)f_.v40, (__int64*)v6, v3, v4),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (f_.v42 != 0) {
    v8 = game_UnitPool_Get_alt2(&f_.v42),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v8 = nullptr;
  }
  if ((TargetEnumerator_77e300(v6, &v32, v8) & 1) != 0) {
    v9 = f_.v41 | 4;
  LABEL_8:
    f_.v41 = v9;
    goto LABEL_9;
  }
  if ((f_.v43 & 0x8000000000000000LL) != 0) {
    goto LABEL_41;
  }
  v12 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL);
  if (v12 == 0) {
    goto LABEL_41;
  }
  v13 = v12 + 144LL * f_.v43;
  if ((MapUtil_753bb0(v13) & 1) == 0) {
    goto LABEL_41;
  }
  v14 = GameData_212c880[0];
  v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v32 & 0xFFF));
  if (v15 != 0) {
    v16 = *(unsigned __int8*)(v15 + 250);
    if ((unsigned int)v16 > 0x25) {
      goto LABEL_41;
    }
    if (((1LL << v16) & 0x6018181) == 0) {
      if (v16 != 37 ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 272LL))(v13) & 1) == 0) {
        goto LABEL_41;
      }
      goto LABEL_36;
    }
  }
  v18 = *(unsigned __int8*)(v6 + 8);
  v17 = (_BYTE*)(v6 + 8);
  if (v18 != 0) {
    v19 = game_UnitPool_Get_alt2(v17),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v19 = nullptr;
  }
  if (((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v13 + 280LL))(v13, v19) &
       1) == 0 ||
      (v20 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8LL * (v32 & 0xFFF)),
       (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v20 + 104)) & 1) ==
           0)) {
  LABEL_35:
    if (((*(__int64 (**)(__int64, int*))(*(_QWORD*)v13 + 296LL))(v13, &v32) &
         1) != 0) {
      goto LABEL_36;
    }
  LABEL_41:
    v30 = *(__int64**)(a1 + 64);
    v33 = 0;
    v39 = 0;
    v37 = 0;
    v34 = v3;
    v35 = v4;
    v38 = -1;
    v36 = 1033;
    if (v30 != nullptr) {
      v11 = *v30;
      goto LABEL_43;
    }
  LABEL_44:
    GameRoutine_60a310_alt2(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v21 = *(unsigned __int8*)(v20 + 106);
  if (*(_BYTE*)(v20 + 106) == 0 || v21 == 6) {
    v23 = *(_QWORD*)(v20 + 576);
    if (v23 == 0) {
      goto LABEL_35;
    }
  }
  else {
    if (v21 != 1) {
      goto LABEL_35;
    }
    v23 = *(_QWORD*)(v20 + 576);
    if (v23 == 0) {
      goto LABEL_36;
    }
  }
  v24 = *(unsigned __int8*)(v23 + 72);
  v25 = *(unsigned __int8*)(v23 + 73);
  if (v24 > 7 || v25 != 1) {
    goto LABEL_35;
  }
LABEL_36:
  v27 = f_.v41;
  v28 = *(_QWORD*)(*v14 + 64);
  f_.v41 |= 4u;
  v29 = *(_QWORD*)(v28 + 8LL * (v32 & 0xFFF));
  if (v29 != 0 && (unsigned int)*(unsigned __int8*)(v29 + 250) - 15 <= 1) {
    v9 = v27 | 5;
    goto LABEL_8;
  }
LABEL_9:
  v10 = *(__int64**)(a1 + 64);
  if (v10 == nullptr) {
    goto LABEL_44;
  }
  v11 = *v10;
LABEL_43:
  result = (*(__int64 (**)(__int64))(v11 + 48))((__int64)v10),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  **(_DWORD**)(a1 + 80) = v3;
  **(_DWORD**)(a1 + 88) = v4;
  **(_BYTE**)(a1 + 96) = 1;
  return result;
}

_QWORD* game_map_ITarget_EnumerateSubTarget_lambda1_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_1f97b90;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    v5 = result;
    if (v4 == a1 + 4) {
      result[8] = result + 4;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
      result = v5;
    }
    else {
      v6 = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v4 + 16LL))((void*)v4, a1[8]));
      result = v5;
      v5[8] = v6;
    }
  }
  else {
    result[8] = 0;
  }
  result[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda1_CloneInto(_QWORD* a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  *a2 = GameData_1f97b90;
  v4 = a1[3];
  a2[2] = a1[2];
  a2[3] = v4;
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda1_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{

#pragma clang fp contract(on)

  int v3;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64* v8;
  char v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 result;
  struct {
    _BYTE v14[4];
    char v15;
    _BYTE v16[7];
    char gap32_[28];
    int v17;
  } v14_;

  v3 = *a2;
  v4 = *a3;
  v6 = *(__int64**)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  if (v5 != 0) {
    LODWORD(v5) = *(_WORD*)(v5 + 16) & 0xFFF;
  }
  v14_.v17 = v5;
  TargetEnumerator_77c150_alt2((__int64)v14_.v14, v6, v3, v4);
  if (v14_.v16[0] != 0) {
    v8 = game_UnitPool_Get_alt3(v14_.v16);
  }
  else {
    v8 = nullptr;
  }
  if ((TargetEnumerator_77e300_alt1((__int64)v6, &v14_.v17, (__int64)v8) & 1) ==
      0) {
    v11 = *(__int64**)(a1 + 64);
    if (v11 != nullptr) {
      v12 = *v11;
      goto LABEL_14;
    }
  LABEL_15:
    GameRoutine_60a310_alt3();
  }
  v9 = v14_.v15;
  v14_.v15 |= 8u;
  v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                   8LL * (v14_.v17 & 0xFFF));
  if (v10 != 0 && (unsigned int)*(unsigned __int8*)(v10 + 250) - 15 <= 1) {
    v14_.v15 = v9 | 9;
  }
  v11 = *(__int64**)(a1 + 64);
  if (v11 == nullptr) {
    goto LABEL_15;
  }
  v12 = *v11;
LABEL_14:
  result = (*(__int64 (**)(__int64))(v12 + 48))((__int64)v11);
  **(_BYTE**)(a1 + 80) = 1;
  return result;
}

_QWORD* game_map_ITarget_EnumerateSubTarget_lambda2_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_1f97c10;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    v5 = result;
    if (v4 == a1 + 4) {
      result[8] = result + 4;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
      result = v5;
    }
    else {
      v6 = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v4 + 16LL))((void*)v4, a1[8]));
      result = v5;
      v5[8] = v6;
    }
  }
  else {
    result[8] = 0;
  }
  result[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda2_CloneInto(_QWORD* a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  *a2 = GameData_1f97c10;
  v4 = a1[3];
  a2[2] = a1[2];
  a2[3] = v4;
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[10] = a1[10];
  return result;
}

__int64 game_map_ITarget_EnumerateSubTarget_lambda2_Invoke(__int64 a1, int* a2,
                                                           int* a3)
{
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  int v10;

  v5 = *a2;
  v6 = *a3;
  v7 = *(_QWORD*)(a1 + 16);
  v8 = *(_QWORD*)(a1 + 24);
  if (v8 != 0) {
    LODWORD(v8) = *(_WORD*)(v8 + 16) & 0xFFF;
  }
  v10 = v8;
  result = GameRoutine_7807a0(v7, &v10, v5, v6, a1 + 32);
  **(_BYTE**)(a1 + 80) |= result & 1;
  return result;
}

__int64 game_map_ITarget_EachSelectable_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;

  v4 = **(_QWORD**)(a1 + 8);
  if (*(_BYTE*)(v4 + 106) == 3) {
    result = MapUtil_753570(*(char*)(a2 + 1), *(char*)(a2 + 2));
    if ((result & 1) == 0) {
      return result;
    }
    goto LABEL_3;
  }
  v10 = *(_QWORD*)(a1 + 24);
  v12 = *(unsigned __int8*)(v10 + 8);
  v11 = v10 + 8;
  if (v12 != 0) {
    v13 = game_UnitPool_Get(v11);
    v4 = **(_QWORD**)(a1 + 8);
  }
  else {
    v13 = 0;
  }
  result = GameRoutine_844d10(a2, v13, v4);
  if ((result & 1) != 0) {
  LABEL_3:
    v9 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
    if (v9 == 0) {
      GameRoutine_60a310(0, v6, v7, v8);
    }
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v9 + 48LL))(v9, a2);
  }
  return result;
}

__int64 game_map_ITarget_EachSelectable_lambda1_Invoke(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  result = MapUtil_753570(*(char*)(a2 + 1), *(char*)(a2 + 2));
  if ((result & 1) != 0) {
    if ((result = a2 + 5, *(_BYTE*)(a2 + 5) != 0) &&
            (result = (__int64)game_UnitPool_Get_alt2((_BYTE*)result)) != 0 &&
            *(_QWORD*)(result + 392) != 0 ||
        (*(__int16*)(a2 + 6) & 0x8000000000000000LL) == 0 &&
            (v5 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL)) != 0 &&
            ((v6 = v5 + 144LL * *(__int16*)(a2 + 6),
              ((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 272LL))(v6) & 1) !=
                  0) ||
             ((result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 288LL))(v6)) &
              1) != 0)) {
      v7 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
      if (v7 == 0) {
        GameRoutine_60a310_alt2();
      }
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v7 + 48LL))(v7, a2);
    }
  }
  return result;
}

__int64 game_map_ITarget_EachTarget_lambda0_Invoke(__int64 a1, __int64 a2,
                                                   __int64 a3, __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v4 == 0) {
    GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
}

__int64 game_map_ITarget_EachTarget_lambda1_Invoke_7820b0(__int64 a1,
                                                          __int64 a2,
                                                          long double a3)
{
  __int64 (**v3)();
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v3 = *(__int64 (***)())(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v8 = v7;
  v7[0] = GameData_1f97f00;
  v7[1] = v4;
  GameRoutine_775580(v3, a2, v7, a3);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

__int64 game_map_ITarget_EachTarget_lambda1_Invoke_782210(__int64 a1,
                                                          __int64 a2,
                                                          __int64 a3,
                                                          __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v4 == 0) {
    GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
}

#pragma GCC visibility pop
