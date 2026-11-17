#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* DiningSceneDiff_1413d00(float*, unsigned __int8*, __int64, __int64**,
                                __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_143e800();
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_203a100[])();
extern __int64 (*GameData_203a180[])();
extern __int64 (*GameData_203a200[])();
extern __int64 (*GameData_203a280[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_928e50();
void __attribute__((noreturn)) String_60a1d0();
__n128 game_facility_141cb00(unsigned __int64 a1, __int64 a2);

__n128 game_facility_141cb00(unsigned __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __n128 result;
  __int64 v50;
  struct {
    __int64 (**v51)();
    unsigned __int64 v52;
    char* v53;
    char gap24_[8];
    __int64 (***v54)();
  } v51_;
  __int128 v55;
  char* v56;
  __int64 (***v57)();
  __int128* v58;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 96) = a2;
  v4 = GameRoutine_143e800(),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = **(_QWORD**)(v4 + 40);
  v6 = *(unsigned __int8*)(*(_QWORD*)(a2 + 40) + 82LL);
  if (v6 >= (*(_QWORD*)(*(_QWORD*)(v4 + 40) + 8LL) - v5) >> 3) {
    GameRoutine_928e50(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v7 = *(_QWORD*)(v5 + 8 * v6);
  if (v7 != 0) {
    v8 = *(char**)(v7 + 32);
  }
  else {
  LABEL_5:
    v8 = &GameData_1a9f09e;
  }
  v9 = GameRoutine_1a09c70(v8),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_127:
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v10 = v9;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v51_.v52 = v10;
    v51_.v53 = v12;
    v51_.v51 = (__int64 (**)(void))(v13 | 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_14;
  }
  LOBYTE(v51_.v51) = 2 * v9;
  v12 = (char*)&v51_.v51 + 1;
  if (v9 != 0) {
  LABEL_14:
    GameRoutine_1a0b940(v12, v8, v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v12[v10] = 0;
  v14 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)a1 + 32LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v15 = GameRoutine_1a09c70(v14),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_127;
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(*v11, v18, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *((_QWORD*)&v55 + 1) = v16;
    v56 = v17;
    *(_QWORD*)&v55 = v18 | 1;
    goto LABEL_23;
  }
  LOBYTE(v55) = 2 * v15;
  v17 = (char*)&v55 + 1;
  if (v15 != 0) {
  LABEL_23:
    GameRoutine_1a0b940(v17, v14, v16),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v19 = (__int64*)(a1 + 8);
  v17[v16] = 0;
  if ((__int64 (***)(void))(a1 + 8) != &v51_.v51) {
    if ((*(_BYTE*)v19 & 1) != 0) {
      if (((unsigned __int8)v51_.v51 & 1) != 0) {
        v21 = v51_.v53;
      }
      else {
        v21 = (char*)&v51_.v51 + 1;
      }
      if (((unsigned __int8)v51_.v51 & 1) != 0) {
        v22 = v51_.v52;
      }
      else {
        v22 = (unsigned __int64)(unsigned __int8)v51_.v51 >> 1;
      }
      SpineModel_64dde0(v19, (__int64)v21, v22),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if (((unsigned __int8)v51_.v51 & 1) != 0) {
      GameRoutine_64df20(v19, (__int64)v51_.v53, v51_.v52),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v20 = v51_.v52;
      *v19 = (__int64)v51_.v51;
      *(_QWORD*)(a1 + 16) = v20;
      *(_QWORD*)(a1 + 24) = v51_.v53;
    }
  }
  v23 = (__int64*)(a1 + 32);
  if ((__int128*)(a1 + 32) == &v55) {
  LABEL_48:
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_75;
    }
    goto LABEL_49;
  }
  if ((*(_BYTE*)v23 & 1) != 0) {
    if ((v55 & 1) != 0) {
      v25 = v56;
    }
    else {
      v25 = (char*)&v55 + 1;
    }
    if ((v55 & 1) != 0) {
      v26 = *((_QWORD*)&v55 + 1);
    }
    else {
      v26 = (unsigned __int64)(unsigned __int8)v55 >> 1;
    }
    SpineModel_64dde0(v23, (__int64)v25, v26),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_48;
  }
  if ((v55 & 1) != 0) {
    GameRoutine_64df20(v23, (__int64)v56, *((unsigned __int64*)&v55 + 1)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_75;
    }
  }
  else {
    v24 = *((_QWORD*)&v55 + 1);
    *v23 = v55;
    *(_QWORD*)(a1 + 40) = v24;
    *(_QWORD*)(a1 + 48) = v56;
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_75;
    }
  }
LABEL_49:
  v27 = *(_QWORD**)(a1 + 72);
  while (v27 != nullptr) {
    v29 = v27;
    v27 = (_QWORD*)*v27;
    v30 = (_QWORD*)v29[10];
    if (v30 == v29 + 6) {
      v31 = 32;
    }
    else {
      if (v30 == nullptr) {
        goto LABEL_60;
      }
      v31 = 40;
    }
    (*(void (**)(__int64))(*v30 + v31))((__int64)v30),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_60:
    if ((v29[2] & 1) != 0 && v29[4] != 0) {
      if (*(_QWORD*)(*v11 + 200) != 0) {
        v32 = 128;
      }
      else {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v32),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (*(_QWORD*)(*v11 + 200) != 0) {
      v28 = 128;
    }
    else {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v28),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v33 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 72) = 0;
  if (v33 != 0) {
    v34 = v33 & 7;
    if (v33 >= 8) {
      v36 = v33 & 0xFFFFFFFFFFFFFFF8LL;
      v35 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v35) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v35 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v35 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v35 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v35 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v35 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v35 + 48) = 0;
        v37 = *(_QWORD*)(a1 + 56) + 8 * v35;
        v35 += 8;
        *(_QWORD*)(v37 + 56) = 0;
      } while (v36 != v35);
    }
    else {
      v35 = 0;
    }
    if (v34 != 0) {
      v38 = 8 * v35;
      do {
        --v34;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + v38) = 0;
        v38 += 8;
      } while (v34 != 0);
    }
  }
  *(_QWORD*)(a1 + 80) = 0;
LABEL_75:
  if ((v55 & 1) != 0 && v56 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v39),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (((unsigned __int8)v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  LOBYTE(v55) = 18;
  v51_.v54 = &v51_.v51;
  *(_QWORD*)((char*)&v55 + 1) = 0x83E3BC83E3AD83E3LL;
  *(_WORD*)((char*)&v55 + 9) = 137;
  v51_.v51 = GameData_203a100;
  v51_.v52 = a1;
  v57 = &v51_.v51;
  v58 = &v55;
  DiningSceneDiff_1413d00((float*)(a1 + 56), (unsigned __int8*)&v55,
                          (__int64)std___1_piecewise_construct_ptr,
                          (__int64**)&v58, (__int64*)&v57),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v51_.v54 == &v51_.v51) {
    v41 = 4;
    goto LABEL_89;
  }
  if (v51_.v54 != nullptr) {
    v41 = 5;
  LABEL_89:
    ((__int64 (*)(__int64))(*v51_.v54)[v41])((__int64)v51_.v54),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v55 & 1) != 0 && v56 != nullptr) {
    v42 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v42),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  LOBYTE(v55) = 18;
  v51_.v54 = &v51_.v51;
  *(_QWORD*)((char*)&v55 + 1) = 0x89E58BA7E58B96E9LL;
  *(_WORD*)((char*)&v55 + 9) = 141;
  v51_.v51 = GameData_203a180;
  v51_.v52 = a1;
  v57 = &v51_.v51;
  v58 = &v55;
  DiningSceneDiff_1413d00((float*)(a1 + 56), (unsigned __int8*)&v55,
                          (__int64)std___1_piecewise_construct_ptr,
                          (__int64**)&v58, (__int64*)&v57),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v51_.v54 == &v51_.v51) {
    v43 = 4;
    goto LABEL_99;
  }
  if (v51_.v54 != nullptr) {
    v43 = 5;
  LABEL_99:
    ((__int64 (*)(__int64))(*v51_.v54)[v43])((__int64)v51_.v54),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v55 & 1) != 0 && v56 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v44),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  LOBYTE(v56) = 0;
  LOBYTE(v55) = 30;
  v51_.v54 = &v51_.v51;
  *(_QWORD*)((char*)&v55 + 1) = 0x83E3B682E3AA83E3LL;
  *((_QWORD*)&v55 + 1) = 0x8D89E58883E3AB83LL;
  v51_.v51 = GameData_203a200;
  v51_.v52 = a1;
  v57 = &v51_.v51;
  v58 = &v55;
  DiningSceneDiff_1413d00((float*)(a1 + 56), (unsigned __int8*)&v55,
                          (__int64)std___1_piecewise_construct_ptr,
                          (__int64**)&v58, (__int64*)&v57),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v51_.v54 == &v51_.v51) {
    v45 = 4;
    goto LABEL_109;
  }
  if (v51_.v54 != nullptr) {
    v45 = 5;
  LABEL_109:
    ((__int64 (*)(__int64))(*v51_.v54)[v45])((__int64)v51_.v54),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v55 & 1) != 0 && v56 != nullptr) {
    v46 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v46),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v47 = 4;
  v48 = fw_memory_HeapManager_Allocate(*v11, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(v48 + 24) = 0;
  *(_QWORD*)&v55 = 33;
  *((_QWORD*)&v55 + 1) = 24;
  v56 = (char*)v48;
  v51_.v54 = &v51_.v51;
  *(_QWORD*)(v48 + 16) = 0x86BAE48CAEE59982LL;
  *(_QWORD*)v48 = 0x83E3B682E3AA83E3LL;
  *(_QWORD*)(v48 + 8) = 0xE596BAE68883E3ABLL;
  v51_.v51 = GameData_203a280;
  v51_.v52 = a1;
  v57 = &v51_.v51;
  v58 = &v55;
  DiningSceneDiff_1413d00((float*)(a1 + 56), (unsigned __int8*)&v55,
                          (__int64)std___1_piecewise_construct_ptr,
                          (__int64**)&v58, (__int64*)&v57),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v51_.v54 == &v51_.v51) {
    goto LABEL_118;
  }
  if (v51_.v54 != nullptr) {
    v47 = 5;
  LABEL_118:
    ((__int64 (*)(__int64))(*v51_.v54)[v47])((__int64)v51_.v54),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v55 & 1) != 0 && v56 != nullptr) {
    v50 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v50 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v11 + v50);
  }
  return result;
}

#pragma GCC visibility pop
