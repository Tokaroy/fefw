#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 LayoutAccessor_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern char* GameData_21088f8[3];
extern char GameData_1a9f09e;
float LayoutAccessor_15638b0(__int64*, char*, char);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_bef610();
void nn_mem_StandardAllocator_Free(__int64, __int64);
_BYTE* game_beefc0(char** a1, __int64 a2, __int64 a3, __int64 a4,
                   unsigned int a5, unsigned int a6, __int64 a7);
void game_18c9f10(__int64 a1, char a2, int a3, int a4, char a5);

_BYTE* game_beefc0(char** a1, __int64 a2, __int64 a3, __int64 a4,
                   unsigned int a5, unsigned int a6, __int64 a7)
{
  __int64 v8;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  char* v21;
  _BYTE* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  _QWORD* v32;
  char* v33;
  __int64 v34;
  _BYTE* v35;
  char* v36;
  __int64 v37;
  char* v38;
  char* v39;
  char* v40;
  __int64 v41;
  char* v42;
  char* v43;
  char* v44;
  char* v45;
  char* v46;
  char* v47;
  char* v48;
  char* v49;
  char* v50;
  char* v51;
  char* v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  _BYTE* v60;
  __int64 v61;
  __int64 v62;
  _BYTE* result;
  __int64 v64;
  struct {
    _BYTE v65[32];
    _BYTE* v66;
  } v65_;
  struct {
    _BYTE v67[32];
    _BYTE* v68;
  } v67_;
  struct {
    _BYTE v69[32];
    _BYTE* v70;
    char gap136_[8];
    unsigned __int64 v71;
    __int64 v72;
  } v69_;

  v8 = *(_QWORD*)(a2 + 32);
  v67_.v68 = nullptr;
  v69_.v70 = nullptr;
  v69_.v71 = 0;
  v69_.v72 = 0;
  if (v8 == 0) {
    v65_.v66 = nullptr;
  LABEL_5:
    v13 = *(_QWORD*)(a3 + 32);
    if (v13 != 0) {
      goto LABEL_6;
    }
  LABEL_15:
    v67_.v68 = nullptr;
    goto LABEL_16;
  }
  if (v8 != a2) {
    v65_.v66 = (_BYTE*)v8;
    *(_QWORD*)(a2 + 32) = 0;
    goto LABEL_5;
  }
  v14 = a3;
  v65_.v66 = v65_.v65;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 24LL))(v8, (__int64)v65_.v65);
  v15 = v67_.v68;
  v67_.v68 = nullptr;
  if (v15 == v67_.v67) {
    v16 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_14;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + v16))((__int64)v15);
LABEL_14:
  a3 = v14;
  v13 = *(_QWORD*)(v14 + 32);
  if (v13 == 0) {
    goto LABEL_15;
  }
LABEL_6:
  if (v13 == a3) {
    v67_.v68 = v67_.v67;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13,
                                                           (__int64)v67_.v67);
  }
  else {
    v67_.v68 = (_BYTE*)v13;
    *(_QWORD*)(a3 + 32) = 0;
  }
LABEL_16:
  v17 = v69_.v70;
  v69_.v70 = nullptr;
  if (v17 == v69_.v69) {
    v18 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_21;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v17 + v18))((__int64)v17);
LABEL_21:
  v19 = *(_QWORD*)(a4 + 32);
  if (v19 != 0) {
    if (v19 == a4) {
      v69_.v70 = v69_.v69;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19,
                                                             (__int64)v69_.v69);
    }
    else {
      v69_.v70 = *(_BYTE**)(a4 + 32);
      *(_QWORD*)(a4 + 32) = 0;
    }
  }
  else {
    v69_.v70 = nullptr;
  }
  v69_.v72 = a7;
  v21 = a1[1];
  v20 = a1[2];
  v69_.v71 = __PAIR64__(a5, a6);
  if (v21 < v20) {
    if (v65_.v66 != nullptr) {
      if (v65_.v66 == v65_.v65) {
        *((_QWORD*)v21 + 4) = v21;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v65_.v66 + 24LL))(
            (__int64)v65_.v66, (__int64)v21);
        v22 = v67_.v68;
        if (v67_.v68 == nullptr) {
          goto LABEL_50;
        }
      }
      else {
        *((_QWORD*)v21 + 4) = v65_.v66;
        v65_.v66 = nullptr;
        v22 = v67_.v68;
        if (v67_.v68 == nullptr) {
        LABEL_50:
          *((_QWORD*)v21 + 10) = 0;
          v30 = v69_.v70;
          if (v69_.v70 != nullptr) {
            goto LABEL_51;
          }
          goto LABEL_54;
        }
      }
    }
    else {
      *((_QWORD*)v21 + 4) = 0;
      v22 = v67_.v68;
      if (v67_.v68 == nullptr) {
        goto LABEL_50;
      }
    }
    if (v22 == v67_.v67) {
      *((_QWORD*)v21 + 10) = v21 + 48;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v67_.v68 + 24LL))(
          (__int64)v67_.v68, (__int64)(v21 + 48));
      v30 = v69_.v70;
      if (v69_.v70 != nullptr) {
      LABEL_51:
        if (v30 == v69_.v69) {
          *((_QWORD*)v21 + 16) = v21 + 96;
          (*(void (**)(__int64, __int64))(*(_QWORD*)v69_.v70 + 24LL))(
              (__int64)v69_.v70, (__int64)(v21 + 96));
        }
        else {
          *((_QWORD*)v21 + 16) = v30;
          v69_.v70 = nullptr;
        }
        goto LABEL_56;
      }
    }
    else {
      *((_QWORD*)v21 + 10) = v22;
      v67_.v68 = nullptr;
      v30 = v69_.v70;
      if (v69_.v70 != nullptr) {
        goto LABEL_51;
      }
    }
  LABEL_54:
    *((_QWORD*)v21 + 16) = 0;
  LABEL_56:
    *((_QWORD*)v21 + 19) = v69_.v72;
    v33 = v21 + 160;
    *((_QWORD*)v21 + 18) = v69_.v71;
    goto LABEL_107;
  }
  v23 = v21 - *a1;
  v24 = 1 - 0x3333333333333333LL * (v23 >> 5);
  if (v24 > 0x199999999999999LL) {
    GameRoutine_bef610();
  }
  v25 = fw_memory_g_heap_manager_ptr;
  v26 = 0xCCCCCCCCCCCCCCCDLL * ((v20 - *a1) >> 5);
  v27 = 2 * v26;
  if (2 * v26 <= v24) {
    v27 = 1 - 0x3333333333333333LL * (v23 >> 5);
  }
  if (v26 >= 0xCCCCCCCCCCCCCCLL) {
    v28 = 0x199999999999999LL;
  }
  else {
    v28 = v27;
  }
  if (v28 != 0) {
    if (v28 > 0x199999999999999LL) {
      GameRoutine_60a210();
    }
    v29 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         160 * v28, 16, 0);
  }
  else {
    v29 = 0;
  }
  v31 = (__int64)v65_.v66;
  v32 = (_QWORD*)(v29 + v23);
  if (v65_.v66 != nullptr) {
    if (v65_.v66 == v65_.v65) {
      v32[4] = v32;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v31 + 24LL))(v31, (__int64)v32);
    }
    else {
      v32[4] = v65_.v66;
      v65_.v66 = nullptr;
    }
  }
  else {
    v32[4] = 0;
  }
  v34 = (__int64)v67_.v68;
  if (v67_.v68 == nullptr) {
    v32[10] = 0;
    v35 = v69_.v70;
    if (v69_.v70 != nullptr) {
      goto LABEL_63;
    }
    goto LABEL_66;
  }
  if (v67_.v68 == v67_.v67) {
    v32[10] = v32 + 6;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v34 + 24LL))(v34,
                                                           (__int64)(v32 + 6));
    v35 = v69_.v70;
    if (v69_.v70 != nullptr) {
      goto LABEL_63;
    }
  LABEL_66:
    v32[16] = 0;
    goto LABEL_68;
  }
  v32[10] = v67_.v68;
  v67_.v68 = nullptr;
  v35 = v69_.v70;
  if (v69_.v70 == nullptr) {
    goto LABEL_66;
  }
LABEL_63:
  if (v35 == v69_.v69) {
    v32[16] = v32 + 12;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v35 + 24LL))((__int64)v35,
                                                           (__int64)(v32 + 12));
  }
  else {
    v32[16] = v35;
    v69_.v70 = nullptr;
  }
LABEL_68:
  v36 = (char*)(v29 + 160 * v28);
  v37 = v69_.v72;
  v38 = *a1;
  v39 = a1[1];
  v33 = (char*)(v32 + 20);
  v32[18] = v69_.v71;
  v32[19] = v37;
  v40 = (char*)v32 + ((char*)v38 - (char*)v39);
  if (v38 != v39) {
    v41 = 0;
    do {
      v44 = &v38[v41];
      v45 = &v40[v41];
      v46 = *(char**)&v38[v41 + 32];
      if (v46 != nullptr) {
        if (v44 == v46) {
          *((_QWORD*)v45 + 4) = v45;
          (*(void (**)(__int64))(**((_QWORD**)v44 + 4) + 24LL))(
              *((_QWORD*)v44 + 4));
        }
        else {
          *((_QWORD*)v45 + 4) = v46;
          *((_QWORD*)v44 + 4) = 0;
        }
      }
      else {
        *((_QWORD*)v45 + 4) = 0;
      }
      v47 = &v38[v41];
      v48 = &v40[v41];
      v49 = *(char**)&v38[v41 + 80];
      if (v49 != nullptr) {
        if (v47 + 48 == v49) {
          *((_QWORD*)v48 + 10) = v48 + 48;
          (*(void (**)(__int64, __int64))(**((_QWORD**)v47 + 10) + 24LL))(
              *((_QWORD*)v47 + 10), (__int64)(v48 + 48));
        }
        else {
          *((_QWORD*)v48 + 10) = v49;
          *((_QWORD*)v47 + 10) = 0;
        }
      }
      else {
        *((_QWORD*)v48 + 10) = 0;
      }
      v50 = &v38[v41];
      v51 = &v40[v41];
      v52 = *(char**)&v38[v41 + 128];
      if (v52 != nullptr) {
        if (v50 + 96 == v52) {
          *((_QWORD*)v51 + 16) = v51 + 96;
          (*(void (**)(__int64, __int64))(**((_QWORD**)v50 + 16) + 24LL))(
              *((_QWORD*)v50 + 16), (__int64)(v51 + 96));
        }
        else {
          *((_QWORD*)v51 + 16) = v52;
          *((_QWORD*)v50 + 16) = 0;
        }
      }
      else {
        *((_QWORD*)v51 + 16) = 0;
      }
      v42 = &v38[v41];
      v43 = &v40[v41];
      v41 += 160;
      *((_QWORD*)v43 + 19) = *((_QWORD*)v42 + 19);
      *((_QWORD*)v43 + 18) = *((_QWORD*)v42 + 18);
    } while (&v38[v41] != v39);
    while (1) {
      v54 = *((char**)v38 + 16);
      if (v38 + 96 == v54) {
        v55 = 32;
      }
      else {
        if (v54 == nullptr) {
          goto LABEL_94;
        }
        v55 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v54 + v55))((__int64)v54);
    LABEL_94:
      v56 = *((char**)v38 + 10);
      if (v38 + 48 == v56) {
        v57 = 32;
      }
      else {
        if (v56 == nullptr) {
          goto LABEL_99;
        }
        v57 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v56 + v57))((__int64)v56);
    LABEL_99:
      v58 = *((char**)v38 + 4);
      if (v38 == v58) {
        v53 = 32;
      }
      else {
        if (v58 == nullptr) {
          goto LABEL_88;
        }
        v53 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v58 + v53))((__int64)v58);
    LABEL_88:
      v38 += 160;
      if (v38 == v39) {
        v38 = *a1;
        break;
      }
    }
  }
  *a1 = v40;
  a1[1] = v33;
  a1[2] = v36;
  if (v38 != nullptr) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v59, (__int64)v38);
  }
LABEL_107:
  v60 = v69_.v70;
  a1[1] = v33;
  if (v60 == v69_.v69) {
    v61 = 32;
  }
  else {
    if (v60 == nullptr) {
      goto LABEL_112;
    }
    v61 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v60 + v61))((__int64)v60);
LABEL_112:
  if (v67_.v68 == v67_.v67) {
    v62 = 32;
  }
  else {
    if (v67_.v68 == nullptr) {
      goto LABEL_117;
    }
    v62 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v67_.v68 + v62))((__int64)v67_.v68);
LABEL_117:
  result = v65_.v66;
  if (v65_.v66 == v65_.v65) {
    v64 = 32;
  }
  else {
    if (v65_.v66 == nullptr) {
      return result;
    }
    v64 = 40;
  }
  return (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v65_.v66 + v64))(
      (__int64)v65_.v66);
}

void game_18c9f10(__int64 a1, char a2, int a3, int a4, char a5)
{

#pragma clang fp contract(off)
  int v8;
  char v9;
  char* v10;
  char* v11;
  __int64* v12;
  unsigned int v13;
  float v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  float v21;
  char* v22;
  float v23;
  float v24;
  char v25;
  __int64 v26;
  __int128 v27;
  char* v28;

  v28 = nullptr;
  v27 = (__typeof__(v27)){0};
  switch (a2) {
  case 3:
    BYTE13(v27) = 0;
    LOBYTE(v27) = 24;
    *(_DWORD*)((char*)&v27 + 9) = 1953393007;
    v11 = "MachinePoint";
    goto LABEL_10;
  case 2:
    LOBYTE(v27) = 22;
    strcpy((char*)&v27 + 8, "oint");
    v11 = "HeavenPoint";
  LABEL_10:
    *(_QWORD*)((char*)&v27 + 1) = *(_QWORD*)v11;
    break;
  case 1:
    v8 = a4;
    v9 = a5;
    if ((a5 & 1) != 0) {
      v10 = "HellPoint_Sub";
    }
    else {
      v10 = "HellPoint_Main";
    }
    GameRoutine_60a020((__int64)&v27, v10);
    a5 = v9;
    a4 = v8;
    break;
  default:
    break;
  }
  v12 = (__int64*)(a1 + 1120);
  *(_DWORD*)(a1 + 1104) = 0;
  *(_DWORD*)(a1 + 1148) = a3;
  *(_BYTE*)(a1 + 1145) = a5 & 1;
  if ((a5 & 1) != 0) {
    v13 = 6;
  }
  else {
    v13 = 12;
  }
  *(_DWORD*)(a1 + 1152) = a4 - a3;
  v14 = fabsf((float)(a4 - a3)) * 0x1.0000000000000p+2f;
  *(float*)(a1 + 1108) = v14;
  *(float*)(a1 + 1112) =
      (float)(v14 + 0x1.4000000000000p+3f) + 0x1.4000000000000p+3f;
  if (v12 != (__int64*)&v27) {
    if ((*(_BYTE*)v12 & 1) != 0) {
      if ((v27 & 1) != 0) {
        v16 = v28;
      }
      else {
        v16 = (char*)&v27 + 1;
      }
      if ((v27 & 1) != 0) {
        v17 = *((_QWORD*)&v27 + 1);
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v27 >> 1;
      }
      SpineModel_64dde0(v12, (__int64)v16, v17);
    }
    else if ((v27 & 1) != 0) {
      GameRoutine_64df20(v12, (__int64)v28, *((unsigned __int64*)&v27 + 1));
    }
    else {
      v15 = *((_QWORD*)&v27 + 1);
      *v12 = v27;
      *(_QWORD*)(a1 + 1128) = v15;
      *(_QWORD*)(a1 + 1136) = v28;
    }
  }
  v18 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)"Icon");
  if (v18 != 0) {
    v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0], 0);
    if (v19 != 0) {
      if ((unsigned __int8)(a2 - 1) > 2u) {
        v20 = &GameData_1a9f09e;
      }
      else {
        v20 = GameData_21088f8[(unsigned __int8)(a2 - 1)];
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v19, 0, 7u, v20);
    }
  }
  if ((int)v13 >= a3) {
    v21 = (float)a3 / (float)v13;
  }
  else {
    v21 = 0x1.0000000000000p+0f;
  }
  if ((v27 & 1) != 0) {
    v22 = v28;
  }
  else {
    v22 = (char*)&v27 + 1;
  }
  if (*v22 != 0) {
    LayoutAccessor_1562680(a1 + 88, v22, 0x0.0p+0f);
    v23 = LayoutAccessor_15638b0((__int64*)(a1 + 88), v22, 1);
    if (v21 <= 0x1.0000000000000p+0f) {
      v24 = v21;
    }
    else {
      v24 = 0x1.0000000000000p+0f;
    }
    if (v21 < 0x0.0p+0f) {
      v24 = 0x0.0p+0f;
    }
    LayoutAccessor_15636c0(a1 + 88, (__int64)v22, 1, v24 * v23);
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  v25 = v27;
  *(_BYTE*)(a1 + 1144) = 1;
  if ((v25 & 1) != 0 && v28 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  (__int64)v28);
  }
}

#pragma GCC visibility pop
