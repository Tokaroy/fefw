#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_c18930(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void game_103a420(PSEUDO_X8);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameHr_138ea40(__int64*, __int64);
__int64 GameHr_1499720(__int64 result);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_a85120(__int64, unsigned __int8*);
__int64 ObjectTransparent_f38dc0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern _UNKNOWN* GameData_212c540;
extern __int64 (*GameData_2032e88[])();
extern __int64 (*GameData_2032f08[])();
extern __int64 (*GameData_2130fd8)();
extern __int64* GameData_212d2b8;
extern __int64 GameData_212c638;
extern __int64 GameData_212c7d8[6];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
long double GameRoutine_138b340(__int64, __int64, __int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_1499b60();
void GameRoutine_a853b0(__int64);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_facility_138b860(__int64 a1, __int64 a2);

void game_facility_138b860(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  const char* v12;
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
  } v48_;
  struct {
    unsigned __int64 v54[3];
    __int64 v55;
    __int64 v56;
    char gap96_[8];
    char v57;
  } v54_;
  struct {
    _QWORD v58[2];
    _BYTE* v59;
  } v58_;
  struct {
    __int64 (**v60)();
    __int64 (*v61)();
    _BYTE* v62;
    int v63;
    int v64;
  } v60_;
  struct {
    _QWORD v65[7];
    char v66;
    char gap233_[87];
    __int64 v67;
    __int64 v68;
  } v65_;
  struct {
    __int64 v69[6];
    char gap408_[1];
    char v70;
  } v69_;

  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_1499720(*(_QWORD*)(a2 + 64)),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_1a0ba50((__int64)v58_.v58, 0, 0x140u),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v69_.v70 = 0;
  v4 = *((_QWORD*)GameData_212c540 + 1);
  v65_.v67 = *(_QWORD*)GameData_212c540;
  v65_.v68 = v4;
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
    v48_.v49 = (__int64 (*)())v7,
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v48_.v50 = v8;
    v48_.v48 = (__int64 (**)(void))(v9 | 1),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    LOBYTE(v48_.v48) = 2 * v6;
    v8 = (char*)&v48_.v48 + 1;
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
  v10 = v58_.v58[0];
  v8[v7] = 0;
  if ((v10 & 1) != 0 && v58_.v59 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v58_.v59),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v58_.v58[0] = v48_.v48;
  v58_.v58[1] = v48_.v49;
  v58_.v59 = v48_.v50;
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
    v48_.v49 = (__int64 (*)())v14,
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v48_.v50 = v15;
    v48_.v48 = (__int64 (**)(void))(v16 | 1),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v44 = COERCE_AS(__typeof__(v44),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    LOBYTE(v48_.v48) = 2 * v13;
    v15 = (char*)&v48_.v48 + 1;
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
  v17 = (char)v60_.v60;
  v15[v14] = 0;
  if ((v17 & 1) != 0 && v60_.v62 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  (__int64)v60_.v62),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v60_.v60 = v48_.v48;
  v60_.v61 = v48_.v49;
  v60_.v62 = v48_.v50;
  if (*(_BYTE*)(a2 + 72) == 1 && *(_BYTE*)(*(_QWORD*)(a2 + 64) + 138LL) != 0) {
    if (((unsigned __int8)v60_.v60 & 1) != 0) {
      v19 = v60_.v62;
      v60_.v61 = nullptr;
    }
    else {
      v19 = (char*)&v60_.v60 + 1;
      LOBYTE(v60_.v60) = 0;
    }
    *v19 = 0;
  }
  game_103a420((void*)((__int64)&v48_.v48)),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v54_.v57 == 1) {
    if ((v69_.v69[0] & 1) != 0) {
      if ((v54_.v54[0] & 1) != 0) {
        v20 = (char*)v54_.v54[2];
      }
      else {
        v20 = (char*)v54_.v54 + 1;
      }
      if ((v54_.v54[0] & 1) != 0) {
        v21 = v54_.v54[1];
      }
      else {
        v21 = (unsigned __int64)LOBYTE(v54_.v54[0]) >> 1;
      }
      SpineModel_64dde0(v69_.v69, (__int64)v20, v21),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if ((v54_.v54[0] & 1) != 0) {
      GameRoutine_64df20(v69_.v69, v54_.v54[2], v54_.v54[1]),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      qmemcpy(v69_.v69, v54_.v54, 24);
    }
  }
  if (v54_.v57 == 1) {
    v22 = v54_.v55;
    if (v54_.v55 != 0) {
      v23 = v54_.v56;
      if (v54_.v55 == v54_.v56) {
        goto LABEL_65;
      }
      v24 = v54_.v56;
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
      v54_.v56 = v22;
      v22 = v54_.v55;
      if (v54_.v55 != 0) {
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
    if ((v54_.v54[0] & 1) != 0 && v54_.v54[2] != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v54_.v54[2]),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((v48_.v51 & 1) != 0 && v48_.v53 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v48_.v53),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (((unsigned __int8)v48_.v48 & 1) != 0 && v48_.v50 != nullptr) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v48_.v50),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if (*(_BYTE*)(a2 + 8) == 1) {
    v60_.v64 = 1;
  }
  v60_.v63 = 1;
  if ((v65_.v66 & 1) == 0) {
    v65_.v66 = 1;
  }
  v65_.v65[6] = 22;
  v48_.v48 = GameData_2032e88;
  v48_.v49 = (__int64 (*)())a1,
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48_.v52 = &v48_.v48;
  GameRoutine_c18930(&v48_.v48, v65_.v65),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v48_.v52 == &v48_.v48) {
    v33 = 4;
  }
  else {
    if (v48_.v52 == nullptr) {
      goto LABEL_92;
    }
    v33 = 5;
  }
  ((__int64 (*)(__int64))(*v48_.v52)[v33])((__int64)v48_.v52),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_92:
  GameRoutine_a85120(*(_QWORD*)GameData_212c638, (unsigned __int8*)v58_.v58),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = GameRoutine_138b340(a1, (__int64)v58_.v58, 0),
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
        v38 = GameHr_138ea40((__int64*)(a1 + 136), v37),
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
  v48_.v48 = (__int64 (**)(void))(GameData_212d2b8 + 2),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v44 = COERCE_AS(__typeof__(v44),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48_.v49 = GameData_2130fd8;
  v48_.v52 = &v48_.v48;
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
      v41 = GameHr_138ea40((__int64*)(a1 + 136), (__int64)&v48_.v48),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      *(_QWORD*)(v40 + 32) = v40;
      ((void (*)(__int64 (***)(void), unsigned __int64, long double))(
          *v48_.v52)[3])(v48_.v52, v40, v34),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v41 = v40 + 48;
    }
    *(_QWORD*)(a1 + 144) = v41;
  }
  if (v48_.v52 == &v48_.v48) {
    v42 = 4;
  }
  else {
    if (v48_.v52 == nullptr) {
      goto LABEL_113;
    }
    v42 = 5;
  }
  ((void (*)(__int64 (***)(void), __int64))(*v48_.v52)[v42])(v48_.v52, v39),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_113:
  v48_.v48 = GameData_2032f08;
  v43 = *(unsigned __int8*)(a1 + 132);
  v48_.v52 = &v48_.v48;
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
      v46 = GameHr_138ea40((__int64*)(a1 + 136), (__int64)&v48_.v48),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      *(_QWORD*)(v45 + 32) = v45;
      ((void (*)(__int64 (***)(void), unsigned __int64))(*v48_.v52)[3])(
          v48_.v52, v45),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v44 = COERCE_AS(__typeof__(v44),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v46 = v45 + 48;
    }
    *(_QWORD*)(a1 + 144) = v46;
  }
  if (v48_.v52 == &v48_.v48) {
    v47 = 4;
    goto LABEL_123;
  }
  if (v48_.v52 != nullptr) {
    v47 = 5;
  LABEL_123:
    ((void (*)(__int64 (***)(void), __int64))(*v48_.v52)[v47])(v48_.v52, v44),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v44 = COERCE_AS(__typeof__(v44),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_a853b0((__int64)v58_.v58),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v44 = COERCE_AS(__typeof__(v44),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
}

#pragma GCC visibility pop
