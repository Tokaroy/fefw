#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_1627860(__int64 result);
__int64 GameRoutine_162ac40(__int64 result);
__int64 GameRoutine_1841dc0(__int64 result, unsigned int, unsigned int);
__int64 GameSubquestData_125b8e0(_QWORD*, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1561f50(__int64*, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_1841f10(__int64 result, int, char);
__int64 game_ffc660(unsigned int, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* game_1603a50(float);
char* game_util_Format(const char*, ...);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, __int64);
double ui_LayoutAccessor_GetTranslate(__int64*);
extern _UNKNOWN GameData_1ac6c8b;
extern __int64 GameData_21c9718;
extern __int64 GameData_225c928;
extern __int64 GameData_225c930;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
float ui_LayoutAccessor_SetPaneTranslate(__int64*, __int64, __int64);
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
void GameRoutine_162ab20(__int64*, _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_LayoutAccessor_SetTextBoxString(__int64*, __int64, __int64);
void game_cmdbtl_anonymous_1625bc0(__int64* a1);

void game_cmdbtl_anonymous_1625bc0(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  int* v10;
  int v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  float* v15;
  float v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int64* v20;
  int v21;
  int v22;
  char* v23;
  int v24;
  int* v25;
  int v26;
  unsigned __int64 v27;
  __int64 v28;
  int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  int v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  struct {
    unsigned __int64 v46;
    __int64 v47;
    char* v48;
  } v46_;
  struct {
    __int64 v49;
    __int64 v50;
    char gap48_[4];
    _DWORD v51[3];
  } v49_;
  _QWORD v52[2];

  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
  v1 = GameData_225ca88;
  if (GameData_225ca88 != 0 && *(int*)(GameData_225ca88 + 1904) <= 9) {
    v2 = *((_DWORD*)a1 + 4);
    if (v2 == 0) {
      if (*((_BYTE*)a1 + 24) != 1) {
        return;
      }
      v10 = (int*)GameData_225c928;
      if (GameData_225c928 == GameData_225c930) {
        return;
      }
      v11 = *((_DWORD*)a1 + 5);
      v12 = GameData_225c930 - GameData_225c928 - 4;
      if ((~(_BYTE)v12 & 0xC) != 0) {
        v13 = ((unsigned __int8)((unsigned int)v12 >> 2) + 1) & 3;
        while (1) {
          v14 = *v10++;
          if (v11 == v14) {
            break;
          }
          if (--v13 == 0) {
            goto LABEL_19;
          }
        }
      }
      else {
      LABEL_19:
        if (v12 < 0xC) {
          return;
        }
        while (v11 != *v10 && v11 != v10[1] && v11 != v10[2] && v11 != v10[3]) {
          v10 += 4;
          if (v10 == (int*)GameData_225c930) {
            return;
          }
        }
      }
    }
    if (*((float*)a1 + 12) >= 0x1.4000000000000p+2f &&
        ((v2 & 0x20) == 0 || (*(_BYTE*)(GameData_225ca88 + 1908) & 1) != 0) &&
        *(_QWORD*)(GameData_225ca88 + 1896) != 0) {
      v4 =
          std___1___shared_weak_count_lock(*(_QWORD*)(GameData_225ca88 + 1896)),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v4 != 0) {
        v5 = v4;
        v6 = *(__int64**)(v1 + 1888);
        if (v6 == nullptr) {
          goto LABEL_108;
        }
        v7 = game_util_Format("L_Destination%02d", *(_DWORD*)(v1 + 1904)),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
        LayoutAccessor_1560070((void*)(&v46_.v46), v6, v7),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
        v52[0] = 0;
        if (v46_.v47 == 0) {
          goto LABEL_107;
        }
        v8 = std___1___shared_weak_count_lock(v46_.v47),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
        v52[1] = v8;
        if (v8 != 0) {
          v9 = (__int64*)v46_.v46;
          v52[0] = v46_.v46;
        }
        else {
          v9 = nullptr;
        }
        v15 = (float*)a1;
        if (v46_.v47 != 0) {
          std___1___shared_weak_count___release_weak(v46_.v47),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v15 = (float*)a1;
        }
        if (v9 == nullptr) {
          goto LABEL_104;
        }
        if (((_BYTE)v15[14] & 1) != 0) {
          GameRoutine_1627860((__int64)v52),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          goto LABEL_108;
        }
        v16 = v15[13] * -0x1.faaaaa0000000p+2f;
        if (fabsf(v16) > 0x1.bd00000000000p+8f) {
          ui_LayoutAccessor_SetPaneVisible((__int64)v9, (__int64)"T_Txt", 0),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v17 = LayoutAccessor_1561f50(v9, (__int64)&GameData_1ac6c8b),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
          if (v17 != 0) {
            *(_BYTE*)(v17 + 88) &= ~1u;
          }
          v18 = *((_DWORD*)a1 + 4);
          if ((v18 & 0x1E) != 0 ||
              *((_BYTE*)a1 + 24) == 1 && *((_DWORD*)a1 + 5) == 11 ||
              (v18 & 0xC0) != 0 && (v18 & 0x100) != 0) {
            v19 = 48;
            if (v16 <= 0x0.0p+0f) {
              v20 = (unsigned __int64*)&v49_.v49;
            }
            else {
              v19 = 24;
              v20 = &v46_.v46;
            }
            *v20 = (unsigned __int64)v9;
            GameRoutine_162ab20((__int64*)(v1 + 1888 + v19), v20),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v36 = COERCE_AS(__typeof__(v36),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          }
        }
        LayoutAccessor_155e830((__int64)v9, 1),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
        ui_LayoutAccessor_GetTranslate(v9),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
        v21 = *((_DWORD*)a1 + 12);
        *(float*)v49_.v51 = v16;
        v49_.v51[1] = v22;
        v49_.v51[2] = v21;
        ui_LayoutAccessor_SetTranslate(v9, (__int64)v49_.v51),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
        v23 = game_1603a50(*((float*)a1 + 12)),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
        ui_LayoutAccessor_SetTextBoxString(v9, (__int64)"T_Txt", (__int64)v23),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
        v24 = *((_DWORD*)a1 + 4);
        if ((v24 & 2) != 0) {
          LayoutAccessor_1562cf0((__int64)v9, (unsigned int*)"Type_Quest"),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          if ((v24 & 0x400) == 0) {
            v30 = 0;
          LABEL_103:
            v43 = LayoutAccessor_1561f50(v9, (__int64)"Icon"),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
            GameRoutine_1841dc0(v43, v30, 1u),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v36 = COERCE_AS(__typeof__(v36),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            goto LABEL_104;
          }
        }
        else {
          if ((v24 & 4) == 0) {
            if ((v24 & 8) == 0) {
              if ((v24 & 0x10) == 0) {
                if ((v24 & 0x20) != 0) {
                  ui_LayoutAccessor_GetPaneTranslate(v6, (__int64)"Start_Bg"),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v35 = COERCE_AS(__typeof__(v35),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v36 = COERCE_AS(__typeof__(v36),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  LODWORD(v46_.v47) = v35;
                  v46_.v46 = __PAIR64__(v36, LODWORD(v16));
                  ui_LayoutAccessor_SetPaneTranslate(v6, (__int64)"Start_Bg",
                                                     (__int64)&v46_.v46),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v35 = COERCE_AS(__typeof__(v35),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v36 = COERCE_AS(__typeof__(v36),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  ui_LayoutAccessor_SetPaneVisible((__int64)v6,
                                                   (__int64)"T_Start", 1),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v35 = COERCE_AS(__typeof__(v35),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v36 = COERCE_AS(__typeof__(v36),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  v37 = LayoutAccessor_1561f50(v6, (__int64)"Start_Bg"),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(float, "s2", "=w")),
                  v36 = COERCE_AS(__typeof__(v36),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
                  if (v37 != 0) {
                    *(_BYTE*)(v37 + 88) |= 1u;
                  }
                  v38 = 2;
                }
                else if ((v24 & 0x40) != 0) {
                  ui_LayoutAccessor_SetPaneVisible((__int64)v9,
                                                   (__int64)"IconPosStatus",
                                                   (a1[2] & 0x100) != 0),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v35 = COERCE_AS(__typeof__(v35),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v36 = COERCE_AS(__typeof__(v36),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  v38 = 0;
                }
                else if ((v24 & 0x80) != 0) {
                  ui_LayoutAccessor_SetPaneVisible((__int64)v9,
                                                   (__int64)"IconPosStatus",
                                                   (a1[2] & 0x100) != 0),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v35 = COERCE_AS(__typeof__(v35),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v36 = COERCE_AS(__typeof__(v36),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  v38 = 1;
                }
                else {
                  if ((v24 & 0x200) == 0) {
                    if (*((_BYTE*)a1 + 24) == 1) {
                      v25 = (int*)GameData_225c928;
                      if (GameData_225c928 != GameData_225c930) {
                        v26 = *((_DWORD*)a1 + 5);
                        v27 = GameData_225c930 - GameData_225c928 - 4;
                        if ((~(_BYTE)v27 & 0xC) != 0) {
                          v28 =
                              ((unsigned __int8)((unsigned int)v27 >> 2) + 1) &
                              3;
                          do {
                            v29 = *v25++;
                            if (v26 == v29) {
                              goto LABEL_113;
                            }
                          } while (--v28 != 0);
                        }
                        if (v27 >= 0xC) {
                          while (v26 != *v25 && v26 != v25[1] &&
                                 v26 != v25[2] && v26 != v25[3]) {
                            v25 += 4;
                            if (v25 == (int*)GameData_225c930) {
                              goto LABEL_104;
                            }
                          }
                        LABEL_113:
                          if (v26 != 11) {
                            LayoutAccessor_155e830((__int64)v9, 0),
                                v22 = COERCE_AS(
                                    __typeof__(v22),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                                v35 = COERCE_AS(
                                    __typeof__(v35),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                                v36 = COERCE_AS(
                                    __typeof__(v36),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                            goto LABEL_104;
                          }
                          v45 = game_ffc660(0xBu, nullptr),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v35 = COERCE_AS(__typeof__(v35),
                                          PSEUDO_REGISTER(float, "s2", "=w")),
                          v36 = COERCE_AS(__typeof__(v36),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                          ui_LayoutAccessor_SetPaneVisible(
                              (__int64)v9, (__int64)"IconPosStatus", v45 & 1),
                              v22 =
                                  COERCE_AS(__typeof__(v22),
                                            PSEUDO_REGISTER(float, "s1", "=w")),
                              v35 =
                                  COERCE_AS(__typeof__(v35),
                                            PSEUDO_REGISTER(float, "s2", "=w")),
                              v36 =
                                  COERCE_AS(__typeof__(v36),
                                            PSEUDO_REGISTER(float, "s1", "=w"));
                          v38 = 4;
                          goto LABEL_112;
                        }
                      }
                    }
                  LABEL_104:
                    if (v8 != 0 &&
                        atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v35 = COERCE_AS(__typeof__(v35),
                                          PSEUDO_REGISTER(float, "s2", "=w")),
                          v36 = COERCE_AS(__typeof__(v36),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      std___1___shared_weak_count___release_weak(v8),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v35 = COERCE_AS(__typeof__(v35),
                                          PSEUDO_REGISTER(float, "s2", "=w")),
                          v36 = COERCE_AS(__typeof__(v36),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                  LABEL_107:
                    ++*(_DWORD*)(v1 + 1904);
                  LABEL_108:
                    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v35 = COERCE_AS(__typeof__(v35),
                                          PSEUDO_REGISTER(float, "s2", "=w")),
                          v36 = COERCE_AS(__typeof__(v36),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                      std___1___shared_weak_count___release_weak(v5),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v35 = COERCE_AS(__typeof__(v35),
                                          PSEUDO_REGISTER(float, "s2", "=w")),
                          v36 = COERCE_AS(__typeof__(v36),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    return;
                  }
                  v38 = 3;
                }
              LABEL_112:
                v44 = LayoutAccessor_1561f50(v9, (__int64)"Icon"),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v36 = COERCE_AS(__typeof__(v36),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                game_1841f10(v44, v38, 0),
                    v22 = COERCE_AS(__typeof__(v22),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v35 = COERCE_AS(__typeof__(v35),
                                    PSEUDO_REGISTER(float, "s2", "=w")),
                    v36 = COERCE_AS(__typeof__(v36),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                goto LABEL_104;
              }
              v30 = 9;
              goto LABEL_102;
            }
            v32 = a1[1];
            v49_.v49 = 0;
            v49_.v50 = 0;
            if (v32 != 0) {
              v49_.v50 = std___1___shared_weak_count_lock(v32),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s1", "=w"));
              if (v49_.v50 != 0) {
                v33 = *a1;
                v49_.v49 = v33;
                if (v33 != 0 && *(_BYTE*)(v33 + 160) == 1) {
                  if ((*(_BYTE*)(v33 + 136) & 1) != 0) {
                    fw_text_String_CopyTerminated((__int64*)&v46_.v46,
                                                  *(_QWORD*)(v33 + 152),
                                                  *(_QWORD*)(v33 + 144)),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v35 = COERCE_AS(__typeof__(v35),
                                        PSEUDO_REGISTER(float, "s2", "=w")),
                        v36 = COERCE_AS(__typeof__(v36),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                  else {
                    v34 = *(_QWORD*)(v33 + 144);
                    v46_.v46 = *(_QWORD*)(v33 + 136);
                    v46_.v47 = v34;
                    v46_.v48 = *(char**)(v33 + 152);
                  }
                  if ((v46_.v46 & 1) != 0) {
                    v39 = v46_.v48;
                  }
                  else {
                    v39 = (char*)&v46_.v46 + 1;
                  }
                  v40 = GameSubquestData_125b8e0((_QWORD*)GameData_21c9718,
                                                 (__int64)v39),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(float, "s2", "=w")),
                  v36 = COERCE_AS(__typeof__(v36),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
                  if (v40 != 0) {
                    v30 = *(unsigned __int8*)(*(_QWORD*)v40 + 112LL);
                    if ((v46_.v46 & 1) != 0 && v46_.v48 != nullptr) {
                      v41 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v41 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                          (__int64)v46_.v48),
                          v22 = COERCE_AS(__typeof__(v22),
                                          PSEUDO_REGISTER(float, "s1", "=w")),
                          v35 = COERCE_AS(__typeof__(v35),
                                          PSEUDO_REGISTER(float, "s2", "=w")),
                          v36 = COERCE_AS(__typeof__(v36),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
                    }
                    GameRoutine_162ac40((__int64)&v49_.v49),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v35 = COERCE_AS(__typeof__(v35),
                                        PSEUDO_REGISTER(float, "s2", "=w")),
                        v36 = COERCE_AS(__typeof__(v36),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    if (v30 == 5) {
                      goto LABEL_102;
                    }
                    goto LABEL_101;
                  }
                  if ((v46_.v46 & 1) != 0 && v46_.v48 != nullptr) {
                    v42 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v42 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                        (__int64)v46_.v48),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v35 = COERCE_AS(__typeof__(v35),
                                        PSEUDO_REGISTER(float, "s2", "=w")),
                        v36 = COERCE_AS(__typeof__(v36),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                }
              }
            }
            GameRoutine_162ac40((__int64)&v49_.v49),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v36 = COERCE_AS(__typeof__(v36),
                                PSEUDO_REGISTER(float, "s1", "=w"));
          LABEL_101:
            v30 = 4;
          LABEL_102:
            LayoutAccessor_1562cf0((__int64)v9, (unsigned int*)"Type_Quest"),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v36 = COERCE_AS(__typeof__(v36),
                                PSEUDO_REGISTER(float, "s1", "=w"));
            goto LABEL_103;
          }
          LayoutAccessor_1562cf0((__int64)v9, (unsigned int*)"Type_Quest"),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          if ((v24 & 0x400) == 0) {
            v30 = 1;
            goto LABEL_103;
          }
        }
        v31 = LayoutAccessor_1561f50(v9, (__int64)"Icon"),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s2", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v31 != 0) {
          Manager_136a920(ui_Manager_instance_ + 1264, v31, 0, 7u,
                          "IconQuest_Main_Layover"),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        goto LABEL_104;
      }
    }
  }
}

#pragma GCC visibility pop
