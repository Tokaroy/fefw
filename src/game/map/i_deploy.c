#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_map_IDeploy_FillSkill_lambda0_Invoke(__int64 result, __int64 a2);
__int64 game_map_IDeploy_FillSkill_lambda1_Invoke(__int64 result, __int64 a2);
_QWORD* GameRoutine_74d660(__int64, int, char, char);
__int64 GameRoutine_68e840(__int64, _QWORD*);
__int64 GameRoutine_748580(__int64, unsigned __int8);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
char** GameRoutine_7fb7c0(char** result, __int64, __int64, unsigned __int64);
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64 GameData_21c9bd0;
__int64 IDeploy_7480e0_alt1(__int64 a1, int a2, int a3, int* a4, __int64 a5,
                            __int64 a6) __asm__("IDeploy_7480e0");
__int64 game_map_IDeploy_FillCannon_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                   _DWORD* a3);
__int64 game_map_IDeploy_FillRegion_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                   _DWORD* a3);
__int64*
GameRoutine_7fb7c0_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_7fb7c0");
__int64 GameRoutine_74d660_alt1(__int64, int, char,
                                char) __asm__("GameRoutine_74d660");
__int64 game_map_748580(__int64, unsigned __int8);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 IDeploy_7480e0(__int64 a1, int a2, int a3, int* a4);

__int64 IDeploy_7480e0(__int64 a1, int a2, int a3, int* a4)
{
  __int64 v4;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  int v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  unsigned __int8* v36;
  int v37;
  __int64 v38;
  int v39;
  int v40;
  bool v41;
  __int64 v42;

  v4 = *(_QWORD*)(a1 + 8);
  *(_WORD*)(v4 + 4) = 9;
  *(_DWORD*)v4 = 0;
  *(_DWORD*)(v4 + 16) = 0;
  *(_DWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 8) = 0x100000000LL;
  *(_QWORD*)(v4 + 32) = *(_QWORD*)(v4 + 24);
  memset_alt1(v4 + 64, 255, 0x400u);
  memset_alt1(v4 + 1096, 0, 0x600u);
  v9 = *(_QWORD*)(v4 + 2640);
  *(_DWORD*)(v4 + 2632) = 0;
  *(_QWORD*)(v4 + 2664) = 0;
  *(_QWORD*)(v4 + 2672) = 0;
  *(_QWORD*)(v4 + 2648) = v9;
  v10 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v10 + 4) = *((_BYTE*)a4 + 4);
  v11 = *((unsigned __int8*)a4 + 5);
  *(_BYTE*)(v10 + 5) = v11;
  *(_DWORD*)(v10 + 12) = a4[3];
  *(_DWORD*)(v10 + 16) = a4[4];
  *(_DWORD*)(v10 + 8) = a4[2];
  if ((int*)v10 != a4) {
    GameRoutine_7fb7c0_alt1(
        (__int64*)(v10 + 24), *((_QWORD*)a4 + 3), *((_QWORD*)a4 + 4),
        (__int64)(*((_QWORD*)a4 + 4) - *((_QWORD*)a4 + 3)) >> 2);
    v11 = *(unsigned __int8*)(v10 + 5);
  }
  v12 = a2 + 32 * a3;
  *(_DWORD*)(v10 + 48) = a4[12];
  if (v11 != 8) {
    v14 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
    if (v12 >= 0x400) {
      v15 = 0;
    }
    else {
      v15 = a2 + 32 * a3;
    }
    v16 = *(__int16*)(v14 + 2LL * v15 + 104);
    if (v16 < 0 || (v17 = *(_QWORD*)(v14 + 8)) == 0 ||
        (v18 = v17 + 144LL * (unsigned int)v16,
         (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v18 + 40LL))(v18) != 2) ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18) & 1) == 0 ||
        (v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 224LL))(v18)) == 0) {
      v19 = **(_QWORD**)(GameData_21c9bd0 + 64);
      if (v19 == 0) {
        goto LABEL_17;
      }
    }
    v13 = GameRoutine_68e840(v19, (_QWORD*)(v10 + 24));
    if (v13 == 0) {
      goto LABEL_17;
    }
  LABEL_16:
    v20 = *(unsigned __int8*)(v13 + 75);
    goto LABEL_18;
  }
  v13 = **(_QWORD**)(GameData_21c9bd0 + 64);
  if (v13 != 0) {
    goto LABEL_16;
  }
LABEL_17:
  v20 = 0;
LABEL_18:
  v21 = *(_DWORD*)(v10 + 12);
  if (v21 > 1) {
    v20 = 0;
  }
  v22 = v20 + *(int*)(v10 + 16);
  if (v22 >= 1) {
    *(_DWORD*)(v10 + 8) = (*(int*)(v10 + 8) - v22) &
                          ~((signed __int32)(*(int*)(v10 + 8) - v22) >> 31);
  }
  GameRoutine_74d660_alt1(v10 + 2632, v21, 0, 0);
  v23 = *a4;
  *(_DWORD*)v10 = *a4;
  v24 = (v23 & 1) == 0;
  v25 = 16;
  if (v24) {
    v25 = 24;
  }
  v26 = 17;
  if (v24) {
    v26 = 25;
  }
  v27 = 18;
  if (v24) {
    v27 = 26;
  }
  v28 = 19;
  if (v24) {
    v28 = 27;
  }
  v29 = *GameData_212ce98[0];
  *(_DWORD*)(v10 + 2664) = *(unsigned __int8*)(*GameData_212ce98[0] + v25);
  *(_DWORD*)(v10 + 2668) = *(unsigned __int8*)(v29 + v26);
  *(_DWORD*)(v10 + 2672) = *(unsigned __int8*)(v29 + v27);
  *(_DWORD*)(v10 + 2676) = *(unsigned __int8*)(v29 + v28);
  v30 = *(_DWORD*)(a1 + 12852);
  if (v30 >= 1 && *(int*)(a1 + 12856) >= 1 && *(int*)(a1 + 12860) >= 1 &&
      *(int*)(a1 + 12864) >= 1) {
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 2664LL) = v30;
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 2668LL) = *(_DWORD*)(a1 + 12856);
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 2672LL) = *(_DWORD*)(a1 + 12860);
    *(_DWORD*)(*(_QWORD*)(a1 + 8) + 2676LL) = *(_DWORD*)(a1 + 12864);
  }
  *(_BYTE*)(a1 + 11808) = a2;
  *(_BYTE*)(a1 + 11809) = a3;
  if (v12 >= 0x400) {
    v31 = 0;
  }
  else {
    v31 = v12;
  }
  *(_WORD*)(a1 + 11810) = 255;
  v32 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 11814) = 0;
  *(_BYTE*)(v32 + v31 + 64) = 0;
  *(_QWORD*)(a1 + 12832) = a1 + 11808;
  *(_QWORD*)(a1 + 12840) = a1 + 10784;
  *(_DWORD*)(a1 + 12848) = 0;
  v33 = *(unsigned __int8*)(a1 + 11810);
  if (*(_BYTE*)(a1 + 11810) != 0) {
    v34 = 1;
    v35 = 0;
    v36 = (unsigned __int8*)(a1 + 11808);
    while (1) {
      LODWORD(v38) = *v36 + 32 * v36[1];
      if ((unsigned int)v38 >= 0x400) {
        v38 = 0;
      }
      else {
        v38 = (unsigned int)v38;
      }
      if (v36[3] <=
          (unsigned int)*(unsigned __int8*)(*(_QWORD*)(a1 + 8) + v38 + 64)) {
        if (v33 != 4) {
          v39 = game_map_748580(a1, 1u);
          v36 = *(unsigned __int8**)(a1 + 12832);
          v35 |= v39;
        }
        if (v36[2] != 1 && (v35 |= game_map_748580(a1, 4u),
                            *(_BYTE*)(*(_QWORD*)(a1 + 12832) + 2LL) == 8) ||
            (v40 = game_map_748580(a1, 2u),
             v36 = *(unsigned __int8**)(a1 + 12832), v35 |= v40, v36[2] != 2)) {
          v37 = game_map_748580(a1, 8u);
          v36 = *(unsigned __int8**)(a1 + 12832);
          v35 |= v37;
        }
      }
      *(_QWORD*)(a1 + 12832) = v36 + 4;
      v33 = v36[6];
      v36 += 4;
      if (v33 == 0) {
        v41 = (v34 & 1) == 0;
        v34 ^= 1u;
        v42 = v41 ? a1 + 10784 : a1 + 11808;
        *(_BYTE*)(*(_QWORD*)(a1 + 12840) + 2LL) = 0;
        v36 = (unsigned __int8*)(v41 ? a1 + 11808 : a1 + 10784);
        *(_QWORD*)(a1 + 12840) = v42;
        *(_DWORD*)(a1 + 12848) = 0;
        *(_QWORD*)(a1 + 12832) = v36;
        v33 = v36[2];
        if (v36[2] == 0) {
          break;
        }
      }
    }
  }
  else {
    LOBYTE(v35) = 0;
  }
  return v35 & 1;
}

__int64 game_map_IDeploy_FillCannon_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                   _DWORD* a3)
{
  int v3;

  v3 = (*(int*)a2 + 32 * *(int*)a3) >> 5;
  *(_DWORD*)(*(_QWORD*)(result + 8) + 4LL * v3) |= 1 << *(_DWORD*)a2;
  return result;
}

__int64 game_map_IDeploy_FillSkill_lambda0_Invoke(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(char*)(a2 + 1);
  v4 = *(_QWORD*)(v2 + 8) + 4LL * ((v3 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v4 + 2120) |= 1 << v3;
  LODWORD(v4) = *(char*)(a2 + 1);
  v5 = *(_QWORD*)(v2 + 8) + 4LL * (((int)v4 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v5 + 2376) |= 1 << v4;
  return result;
}

__int64 game_map_IDeploy_FillSkill_lambda1_Invoke(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;

  v2 = *(char*)(a2 + 1);
  v3 = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) +
       4LL * ((v2 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v3 + 2120) |= 1 << v2;
  return result;
}

__int64 game_map_IDeploy_FillRegion_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                   _DWORD* a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(result + 16);
  if ((signed __int32)*(_DWORD*)(v3 + 2672) >
          (int)(unsigned __int8)(*(int*)a2 - *(_BYTE*)(v3 + 2664)) &&
      (signed __int32)*(_DWORD*)(v3 + 2676) >
          (int)(unsigned __int8)(*(int*)a3 - *(int*)(v3 + 2668))) {
    *(_DWORD*)(*(_QWORD*)(result + 8) +
               4LL * ((*(int*)a2 + 32 * *(int*)a3) >> 5)) |= 1 << *(_DWORD*)a2;
  }
  return result;
}

#pragma GCC visibility pop
