#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a7e4a0(__int64, __int64, _QWORD*, __int64, int);
_QWORD* game_menu_1789cf0(__int64, __int64);
_QWORD* kaneko_disposable_10aa900(__int64*, __int64*);
__attribute__((swiftcall)) void game_109f820(PSEUDO_X8, __int64, const char*);
__int64* GameRoutine_cf32c0(__int64* result, __int64*, __int64*);
__int64* GameRoutine_cf3470(__int64*, __int64*, __int64*, __int64*, __int64*);
__int64* game_zview_cf33a0(__int64*, __int64*, __int64*, __int64*);
__int64 CharacterAppearance_10743e0(__int64);
__int64 CharacterBuilder_10873c0(__int64, __int64, __int64);
__int64 Components_a870e0(__int64*, char);
__int64 GameRoutine_109f640(__int64, const char*);
__int64 GameRoutine_1626520(__int64, __int64);
__int64 GameRoutine_17aae80(__int64 result, __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_a8c380(__int64, _QWORD*);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_109d2e0(__int64 result, __int64, const char*, __int64, int);
__int64 game_109f1e0(__int64, const char*);
__int64 llvm_libcxx_21_libcxx_include___functional_10aa280(__int64, __int64,
                                                           __int64, float);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool GameRoutine_ad7390(_QWORD*);
bool GameRoutine_cf3580(__int64*, __int64*);
double GameRoutine_1a09f70(double);
double GameRoutine_1a09f80(double);
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN* GameData_212d4d8;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ff38;
extern _UNKNOWN* GameData_212ff48;
extern _UNKNOWN GameData_2235780;
extern __int64 (*GameData_2009cd0[])();
extern __int64 (*GameData_2009d50[])();
extern __int64 (*GameData_2009dd0[])();
extern __int64 (*GameData_20d3468[])();
extern __int64 (*GameData_20d3bd8[])();
extern __int64 (*game_combat_ThrownAxe_vtable[])();
extern __int64 (*game_combat_ThrownDiscus_vtable[])();
extern __int64 (*game_combat_ThrownObject_vtable)();
extern __int64 (*game_combat_ThrownStraight_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr_20d3538[])();
extern __int64 (*game_menu_anonymous_ProcCmdBtlEquipUnitSelectMenu_vtable[])();
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212d4d0;
extern int* GameData_212df08;
extern int* GameData_212ff30;
extern int* GameData_212ff40;
extern int GameData_223577c;
int __cxa_guard_acquire(__int64);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void GameRoutine_bd6740(__int64, __int64, _QWORD*, char);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_688200();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_98f290();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64* game_singleton_cf29e0(__int64* result, __int64* a2, __int64 a3,
                               char a4);
float32x4_t* game_singleton_10c1280(float32x4_t* result, __int64 a2);
__int64 game_singleton_17ab020(__int64 a1, int* a2, __int64 a3);

__int64* game_singleton_cf29e0(__int64* result, __int64* a2, __int64 a3,
                               char a4)
{

#pragma clang fp contract(off)
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64* v16;
  __int64 v17;
  float v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  float v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  float v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  float v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  bool v52;
  __int64 v53;
  __int64* v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  signed __int64 v61;
  signed __int64 v62;
  signed __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  bool v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  __int64* v77;
  __int64* v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64* v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64* v94;

  v7 = result;
LABEL_2:
  v8 = a2 - 1;
  v9 = v7;
  while (1) {
    v7 = v9;
    v10 = ((__int64)a2 - (__int64)v9) >> 3;
    if (v10 > 2) {
      switch (v10) {
      case 3LL:
        return GameRoutine_cf32c0(v9, v9 + 1, a2 - 1);
      case 4LL:
        return game_zview_cf33a0(v9, v9 + 1, v9 + 2, a2 - 1);
      case 5LL:
        return GameRoutine_cf3470(v9, v9 + 1, v9 + 2, v9 + 3, a2 - 1);
      default:
        break;
      }
      goto LABEL_10;
    }
    if ((unsigned __int64)v10 < 2) {
      return result;
    }
    if (v10 == 2) {
      break;
    }
  LABEL_10:
    if (v10 <= 23) {
      v50 = v9 + 1;
      v52 = v9 == a2 || v50 == a2;
      if ((a4 & 1) != 0) {
        if (v52) {
          return result;
        }
        v53 = 8;
        v54 = v9;
        while (1) {
          v56 = v50;
          v57 = v54[1];
          if ((*(_BYTE*)(v57 + 456) & 1) == 0) {
            break;
          }
          v58 = *v54;
          if ((*(_BYTE*)(v58 + 456) & 1) == 0) {
            break;
          }
          if (*(float*)(v57 + 452) < *(float*)(v58 + 452)) {
            v59 = v53;
            do {
              v60 = v59 - 8;
              *(__int64*)((char*)v9 + v59) = v58;
              if (v59 == 8) {
                v55 = v9;
                goto LABEL_98;
              }
              if ((*(_BYTE*)(v57 + 456) & 1) == 0) {
                goto LABEL_162;
              }
              v58 = *(__int64*)((char*)v9 + v59 - 16);
              if ((*(_BYTE*)(v58 + 456) & 1) == 0) {
                goto LABEL_162;
              }
              v59 -= 8;
            } while (*(float*)(v57 + 452) < *(float*)(v58 + 452));
            v55 = (__int64*)((char*)v9 + v60);
          LABEL_98:
            *v55 = v57;
          }
          v50 = v56 + 1;
          v53 += 8;
          v54 = v56;
          if (v56 + 1 == a2) {
            return result;
          }
        }
      }
      else {
        if (v52) {
          return result;
        }
        while (1) {
          v91 = v7[1];
          v92 = v50;
          if ((*(_BYTE*)(v91 + 456) & 1) == 0) {
            break;
          }
          v93 = *v7;
          if ((*(_BYTE*)(*v7 + 456) & 1) == 0) {
            break;
          }
          if (*(float*)(v91 + 452) < *(float*)(v93 + 452)) {
            v94 = v92;
            do {
              *v94 = v93;
              if ((*(_BYTE*)(v91 + 456) & 1) == 0) {
                goto LABEL_162;
              }
              v93 = *(v94 - 2);
              if ((*(_BYTE*)(v93 + 456) & 1) == 0) {
                goto LABEL_162;
              }
              --v94;
            } while (*(float*)(v91 + 452) < *(float*)(v93 + 452));
            *v94 = v91;
          }
          v50 = v92 + 1;
          v7 = v92;
          if (v92 + 1 == a2) {
            return result;
          }
        }
      }
    LABEL_162:
      GameRoutine_8123d0();
    }
    if (a3 == 0) {
      if (v9 != a2) {
        v61 = (unsigned __int64)(v10 - 2) >> 1;
        v62 = v61;
        while (1) {
          v63 = v62;
          if (v61 >= v62) {
            v64 = (2 * (v62 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v65 = &v9[v64];
            if (2 * v63 + 2 < v10) {
              if ((*(_BYTE*)(*v65 + 456) & 1) == 0) {
                goto LABEL_162;
              }
              v66 = v65[1];
              if ((*(_BYTE*)(v66 + 456) & 1) == 0) {
                goto LABEL_162;
              }
              if (*(float*)(*v65 + 452) < *(float*)(v66 + 452)) {
                ++v65;
                v64 = 2 * v63 + 2;
              }
            }
            v67 = *v65;
            if ((*(_BYTE*)(*v65 + 456) & 1) == 0) {
              goto LABEL_162;
            }
            v68 = &v9[v63];
            v69 = *v68;
            if ((*(_BYTE*)(*v68 + 456) & 1) == 0) {
              goto LABEL_162;
            }
            if (*(float*)(v67 + 452) >= *(float*)(v69 + 452)) {
              do {
                v70 = v65;
                *v68 = v67;
                if (v61 < v64) {
                  break;
                }
                v71 = 2 * v64 + 2;
                v64 = (2 * v64) | 1;
                v65 = &v9[v64];
                if (v71 < v10) {
                  if ((*(_BYTE*)(*v65 + 456) & 1) == 0) {
                    goto LABEL_162;
                  }
                  v72 = v65[1];
                  result = (__int64*)*(unsigned __int8*)(v72 + 456);
                  if (((unsigned __int8)result & 1) == 0) {
                    goto LABEL_162;
                  }
                  if (*(float*)(*v65 + 452) < *(float*)(v72 + 452)) {
                    ++v65;
                    v64 = v71;
                  }
                }
                v67 = *v65;
                if ((*(_BYTE*)(*v65 + 456) & 1) == 0 ||
                    (*(_BYTE*)(v69 + 456) & 1) == 0) {
                  goto LABEL_162;
                }
                v68 = v70;
              } while (*(float*)(v67 + 452) >= *(float*)(v69 + 452));
              *v70 = v69;
            }
          }
          v62 = v63 - 1;
          if (v63 == 0) {
            while (1) {
              v74 = *v9;
              v75 = 0;
              v76 = v9;
              do {
                v77 = &v76[v75];
                v78 = v76;
                v76 = v77 + 1;
                v79 = 2 * v75 + 2;
                v75 = (2 * v75) | 1;
                if (v79 < v10) {
                  v82 = v77[2];
                  v80 = v77 + 2;
                  v81 = v82;
                  v83 = *(v80 - 1);
                  if ((*(_BYTE*)(v83 + 456) & 1) == 0 ||
                      (*(_BYTE*)(v81 + 456) & 1) == 0) {
                    goto LABEL_162;
                  }
                  if (*(float*)(v83 + 452) < *(float*)(v81 + 452)) {
                    v76 = v80;
                    v75 = v79;
                  }
                }
                *v78 = *v76;
              } while (v75 <= (__int64)((unsigned __int64)(v10 - 2) >> 1));
              if (v76 == --a2) {
                *v76 = v74;
              }
              else {
                *v76 = *a2;
                *a2 = v74;
                v84 = ((char*)v76 - (char*)v9 + 8) >> 3;
                v73 = v84 < 2;
                v85 = v84 - 2;
                if (!v73) {
                  v86 = v85 >> 1;
                  v87 = &v9[v86];
                  v88 = *v87;
                  if ((*(_BYTE*)(*v87 + 456) & 1) == 0) {
                    goto LABEL_162;
                  }
                  v89 = *v76;
                  if ((*(_BYTE*)(*v76 + 456) & 1) == 0) {
                    goto LABEL_162;
                  }
                  if (*(float*)(v88 + 452) < *(float*)(v89 + 452)) {
                    do {
                      v90 = v87;
                      *v76 = v88;
                      if (v86 == 0) {
                        break;
                      }
                      v86 = (v86 - 1) >> 1;
                      v87 = &v9[v86];
                      v88 = *v87;
                      if ((*(_BYTE*)(*v87 + 456) & 1) == 0 ||
                          (*(_BYTE*)(v89 + 456) & 1) == 0) {
                        goto LABEL_162;
                      }
                      v76 = v90;
                    } while (*(float*)(v88 + 452) < *(float*)(v89 + 452));
                    *v90 = v89;
                  }
                }
              }
              v73 = v10-- <= 2;
              if (v73) {
                return result;
              }
            }
          }
        }
      }
      return result;
    }
    v11 = &v9[(unsigned __int64)v10 >> 1];
    if ((unsigned __int64)v10 < 0x81) {
      result = GameRoutine_cf32c0(&v7[(unsigned __int64)v10 >> 1], v7, a2 - 1);
    }
    else {
      GameRoutine_cf32c0(v7, &v7[(unsigned __int64)v10 >> 1], a2 - 1);
      GameRoutine_cf32c0(v7 + 1, v11 - 1, a2 - 2);
      GameRoutine_cf32c0(v7 + 2, v11 + 1, a2 - 3);
      result = GameRoutine_cf32c0(v11 - 1, v11, v11 + 1);
      v12 = *v7;
      *v7 = *v11;
      *v11 = v12;
    }
    v13 = *v7;
    --a3;
    if ((a4 & 1) != 0) {
      goto LABEL_19;
    }
    v14 = *(v7 - 1);
    if ((*(_BYTE*)(v14 + 456) & 1) == 0 || (*(_BYTE*)(v13 + 456) & 1) == 0) {
      goto LABEL_162;
    }
    v15 = *(float*)(v13 + 452);
    if (*(float*)(v14 + 452) < v15) {
    LABEL_19:
      v16 = v7 + 1;
      v17 = v7[1];
      if (*(_BYTE*)(v17 + 456) != 1 || *(_BYTE*)(v13 + 456) != 1) {
        goto LABEL_162;
      }
      v18 = *(float*)(v13 + 452);
      v19 = a2;
      if (*(float*)(v17 + 452) >= v18) {
        do {
          if (v16 >= v19) {
            break;
          }
          v25 = *--v19;
          v24 = v25;
          if ((*(_BYTE*)(v25 + 456) & 1) == 0) {
            goto LABEL_162;
          }
        } while (*(float*)(v24 + 452) >= v18);
        v21 = v7;
        if (v16 < v19) {
        LABEL_33:
          v26 = *v19;
          v27 = v16;
          v28 = v19;
          do {
            *v27 = v26;
            *v28 = v17;
            v29 = v27 + 1;
            v17 = v27[1];
            if (*(_BYTE*)(v17 + 456) != 1 || *(_BYTE*)(v13 + 456) != 1) {
              goto LABEL_162;
            }
            v30 = *(float*)(v13 + 452);
            if (*(float*)(v17 + 452) >= v30) {
              v21 = v27;
            }
            else {
              do {
                v31 = v29[1];
                ++v29;
                v17 = v31;
                if ((*(_BYTE*)(v31 + 456) & 1) == 0) {
                  goto LABEL_162;
                }
              } while (*(float*)(v17 + 452) < v30);
              v21 = v29 - 1;
            }
            v27 = v29;
            do {
              v32 = *--v28;
              v26 = v32;
              if ((*(_BYTE*)(v32 + 456) & 1) == 0) {
                goto LABEL_162;
              }
            } while (*(float*)(v26 + 452) >= v30);
          } while (v27 < v28);
        }
      }
      else {
        do {
          v20 = v16[1];
          ++v16;
          v17 = v20;
          if ((*(_BYTE*)(v20 + 456) & 1) == 0) {
            goto LABEL_162;
          }
        } while (*(float*)(v17 + 452) < v18);
        v21 = v16 - 1;
        v19 = a2;
        do {
          v23 = *--v19;
          v22 = v23;
          if ((*(_BYTE*)(v23 + 456) & 1) == 0) {
            goto LABEL_162;
          }
        } while (*(float*)(v22 + 452) >= v18);
        if (v16 < v19) {
          goto LABEL_33;
        }
      }
      if (v7 != v21) {
        *v7 = *v21;
      }
      *v21 = v13;
      if (v16 < v19) {
        goto LABEL_50;
      }
      v9 = v21 + 1;
      v33 = GameRoutine_cf3580(v7, v21);
      result = (__int64*)GameRoutine_cf3580(v21 + 1, a2);
      if (((unsigned __int8)result & 1) != 0) {
        a2 = v21;
        if (v33) {
          return result;
        }
        goto LABEL_2;
      }
      if (!v33) {
      LABEL_50:
        result = game_singleton_cf29e0(v7, v21, a3, a4 & 1);
        a4 = 0;
        v9 = v21 + 1;
      }
    }
    else {
      if ((*(_BYTE*)(*v8 + 456) & 1) == 0) {
        goto LABEL_162;
      }
      if (v15 < *(float*)(*v8 + 452)) {
        v9 = v7;
        while (1) {
          v35 = v9[1];
          ++v9;
          v34 = v35;
          if ((*(_BYTE*)(v35 + 456) & 1) == 0) {
            goto LABEL_162;
          }
          if (v15 < *(float*)(v34 + 452)) {
            goto LABEL_61;
          }
        }
      }
      v36 = (unsigned __int64)(v7 + 1);
      do {
        v9 = (__int64*)v36;
        if (v36 >= (unsigned __int64)a2) {
          break;
        }
        if ((*(_BYTE*)(*(_QWORD*)v36 + 456LL) & 1) == 0) {
          goto LABEL_162;
        }
        v37 = *(float*)(*(_QWORD*)v36 + 452LL);
        v36 += 8LL;
      } while (v15 >= v37);
    LABEL_61:
      v38 = a2;
      if (v9 < a2) {
        v38 = a2;
        do {
          v40 = *--v38;
          v39 = v40;
          if ((*(_BYTE*)(v40 + 456) & 1) == 0) {
            goto LABEL_162;
          }
        } while (v15 < *(float*)(v39 + 452));
      }
      if (v9 < v38) {
        v41 = *v9;
        v42 = *v38;
        do {
          *v9 = v42;
          *v38 = v41;
          if (*(_BYTE*)(v13 + 456) != 1) {
            goto LABEL_162;
          }
          v43 = v9[1];
          ++v9;
          v41 = v43;
          if (*(_BYTE*)(v43 + 456) != 1) {
            goto LABEL_162;
          }
          v44 = *(float*)(v13 + 452);
          while (v44 >= *(float*)(v41 + 452)) {
            v45 = v9[1];
            ++v9;
            v41 = v45;
            if ((*(_BYTE*)(v45 + 456) & 1) == 0) {
              goto LABEL_162;
            }
          }
          do {
            v46 = *--v38;
            v42 = v46;
            if ((*(_BYTE*)(v46 + 456) & 1) == 0) {
              goto LABEL_162;
            }
          } while (v44 < *(float*)(v42 + 452));
        } while (v9 < v38);
      }
      v47 = v9 - 1;
      if (v7 != v9 - 1) {
        *v7 = *v47;
      }
      a4 = 0;
      *v47 = v13;
    }
  }
  v48 = *(a2 - 1);
  if ((*(_BYTE*)(v48 + 456) & 1) == 0) {
    goto LABEL_162;
  }
  v49 = *v9;
  if ((*(_BYTE*)(*v9 + 456) & 1) == 0) {
    goto LABEL_162;
  }
  if (*(float*)(v48 + 452) < *(float*)(v49 + 452)) {
    *v9 = v48;
    *(a2 - 1) = v49;
  }
  return result;
}

float32x4_t* game_singleton_10c1280(float32x4_t* result, __int64 a2)
{
  float32x4_t* v2;
  float32x4_t* v4;
  unsigned __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8 explicit;
  int* v19;
  unsigned __int32 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  _BYTE* v27;
  _BYTE* v28;
  bool v29;
  unsigned __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int8 v60;
  int* v61;
  unsigned __int32 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  _BYTE* v69;
  _BYTE* v70;
  bool v71;
  unsigned __int64* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64* v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned __int8 v101;
  int* v102;
  __int64 v103;
  __int64 v104;
  int v105;
  __int64 v106;
  __int64 v107;
  unsigned __int8 v108;
  int* v109;
  __int64 v110;
  __int64 v111;
  int v112;
  __int64 v113;
  float32x4_t v114;
  float32x4_t v115;
  int8x16_t v116;
  __int128 v117;
  float32x4_t v118;
  float32x4_t v119;
  int8x16_t v120;
  __int128 v121;
  float v122;
  float v123;
  double v124;
  double v125;
  double v126;
  double v127;
  double v128;
  double v129;
  double v130;
  double v131;
  double v132;
  float v133;
  float v134;
  float v135;
  float v136;
  bool v137;
  bool v138;
  int v140;
  float32x4_t v141;
  float32x4_t v142;
  int8x16_t v143;
  __int128 v144;
  __int64 v145;
  __int64 v146;
  int v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  __int64 v154;
  int* v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  int v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  float v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  int* v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  int v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int128 v179;
  __int128 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  int v193;
  __int64 v194;
  int v195;
  __int64 v196;
  int v197;
  __int64 v198;
  __int64 v199;
  _BYTE* v200;
  _BYTE* v201;
  bool v202;
  unsigned __int64* v203;
  unsigned __int64 v204;
  __int64 v205;
  __int64 v206;
  char* v207;
  __int64 v208;
  unsigned __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  unsigned __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  __int64 v216;
  unsigned __int64* v217;
  unsigned __int64 v218;
  __int64 v219;
  __int64 v220;
  char* v221;
  __int64 v222;
  unsigned __int64 v223;
  __int64 v224;
  unsigned __int64 v225;
  __int64 v226;
  unsigned __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  __int64 v230;
  unsigned __int64 v231;
  unsigned __int64 v232;
  unsigned __int64 v233;
  float32x4_t* v234;
  _QWORD* v235;
  __int64 (**v236)();
  unsigned __int64 v237;
  __int64 (**v238)();
  __int64 (***v239)();
  unsigned __int64 v240;
  _QWORD* v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  int v246;
  struct {
    __int64 (**v247)();
    unsigned __int64 v248;
    __int64 (**v249)();
    char gap24_[8];
    __int64* v250;
  } v247_;
  struct {
    float32x4_t v251[2];
    float32x4_t* v252;
    char gap88_[16];
    float v253;
    char gap108_[4];
    char v254;
  } v251_;
  struct {
    float32x4_t v255[2];
    float32x4_t* v256;
    char gap168_[16];
    float v257;
    char gap188_[4];
    char v258;
  } v255_;

  v2 = (float32x4_t*)LANES128(result[27]).n128_u64[1];
  v4 = result;
  if (v2 != nullptr) {
    v5 = LANES128(result[24]).n128_u64[1];
    v6 = LANES128(result[25]).n128_i64[0];
    if (v6 != 0) {
      v7 = (atomic_ullong*)(v6 + 8);
      v8 = v5 + 464;
      goto LABEL_7;
    }
    v8 = v5 + 464;
  }
  else {
    v2 = (float32x4_t*)LANES128(result[27]).n128_u64[0];
    if (v2 == nullptr) {
      return result;
    }
    v9 = LANES128(result[24]).n128_u64[1];
    v6 = LANES128(result[25]).n128_i64[0];
    if (v6 != 0) {
      v7 = (atomic_ullong*)(v6 + 8);
      v8 = v9 + 392;
    LABEL_7:
      atomic_fetch_add_explicit(v7, 1u, memory_order_relaxed);
      if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
      goto LABEL_11;
    }
    v8 = v9 + 392;
  }
LABEL_11:
  v10 = GameData_212c638;
  v11 = Components_a870e0(
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                              8LL) +
                   48LL),
      0);
  v12 = *(_QWORD*)(v8 + 56);
  if (v12 != 0 && *(_BYTE*)(v12 + 165) == 1 &&
      GameRoutine_ad7390((_QWORD*)v12)) {
    v13 = *(_QWORD*)(v8 + 64);
    LANES128(v251_.v251[0]).n128_u64[0] = *(_QWORD*)(v8 + 56);
    LANES128(v251_.v251[0]).n128_u64[1] = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  else {
    v251_.v251[0] = (__typeof__(v251_.v251[0])){0};
  }
  nn_os_LockMutex((__int64)GameData_212df28);
  v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       208, 16, 0);
  v15 = v14;
  v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 32LL) - 8LL) + 40LL);
  v17 = *(_QWORD*)(v16 + 24);
  LANES128(v255_.v255[0]).n128_u64[0] = *(_QWORD*)(v16 + 16);
  LANES128(v255_.v255[0]).n128_u64[1] = v17;
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_a7e4a0(v14, v11, v255_.v255, (__int64)v251_.v251, 0);
    std___1___shared_weak_count___release_weak(v17);
  }
  else {
    GameRoutine_a7e4a0(v14, v11, v255_.v255, (__int64)v251_.v251, 0);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v19 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
    *v19 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release((__int64)GameData_212df10);
  }
  v20 = *v19;
  v21 = *(_QWORD*)(v11 + 504);
  v22 = *(_QWORD*)(v11 + 512);
  v23 = v22;
  LANES128(v255_.v255[0]).n128_u32[0] = v20;
  LANES128(v255_.v255[0]).n128_u64[1] = v15;
  while (v23 != v21) {
    v24 = *(_DWORD*)(v23 - 16);
    v23 -= 16;
    if (v24 == v20) {
      if ((*(_BYTE*)(v15 + 16) & 1) != 0) {
        goto LABEL_39;
      }
      goto LABEL_33;
    }
  }
  if (v21 == v22 && (unsigned __int64)(*(_QWORD*)(v11 + 520) - v21) <= 0x6F) {
    v25 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         112, 16, 0);
    *(_QWORD*)(v11 + 504) = v25;
    *(_QWORD*)(v11 + 512) = v25;
    *(_QWORD*)(v11 + 520) = v25 + 112;
    if (v22 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v21);
    }
  }
  GameRoutine_98f140((__int64*)(v11 + 504), v255_.v255);
  if ((*(_BYTE*)(v15 + 16) & 1) == 0) {
  LABEL_33:
    *(_BYTE*)(v15 + 16) = 1;
    *(_BYTE*)(v15 + 17) &= ~2u;
    *(_BYTE*)(v15 + 18) &= ~2u;
    *(_BYTE*)(v15 + 19) &= ~2u;
    *(_BYTE*)(v15 + 20) &= ~2u;
    v27 = *(_BYTE**)(v15 + 8);
    v27[632] = 0;
    v27[664] = 0;
    v27[696] = 0;
    v27[728] = 0;
    (*(void (**)(unsigned __int64))(*(_QWORD*)v15 + 64LL))(v15);
    v28 = *(_BYTE**)(v15 + 8);
    v29 = v28[300] == 3 && v28[301] == 3;
    if (v29 || v28[302] == 1) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v15 + 72LL))(v15);
    }
  }
LABEL_39:
  v30 = *(unsigned __int64**)(v11 + 536);
  v31 = *(_QWORD*)(v11 + 544);
  if ((unsigned __int64)v30 >= v31) {
    v33 = *(_QWORD*)(v11 + 528);
    v34 = (char*)v30 - v33;
    v35 = ((__int64)v30 - v33) >> 3;
    v36 = v35 + 1;
    if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
      goto LABEL_293;
    }
    v37 = v31 - v33;
    if (v37 >> 2 > v36) {
      v36 = v37 >> 2;
    }
    if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
      v38 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v38 = v36;
    }
    if (v38 != 0) {
      if (v38 >> 61 != 0) {
        goto LABEL_294;
      }
      v39 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v38, 16, 0);
    }
    else {
      v39 = 0;
    }
    v40 = v39 + 8 * v38;
    v41 = (unsigned __int64)v30 - v33;
    v42 = (__int64)&v34[v39 + -8 * v35];
    *(_QWORD*)&v34[v39] = v15;
    v32 = (__int64)&v34[v39 + 8];
    GameRoutine_1a0b950(v42, v33, v41);
    *(_QWORD*)(v11 + 528) = v42;
    *(_QWORD*)(v11 + 536) = v32;
    *(_QWORD*)(v11 + 544) = v40;
    if (v33 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v33);
    }
  }
  else {
    *v30 = v15;
    v32 = (__int64)(v30 + 1);
  }
  *(_QWORD*)(v11 + 536) = v32;
  v44 = *(unsigned __int64**)(v11 + 560);
  v45 = *(_QWORD*)(v11 + 568);
  if ((unsigned __int64)v44 >= v45) {
    v47 = *(_QWORD*)(v11 + 552);
    v48 = (char*)v44 - v47;
    v49 = ((__int64)v44 - v47) >> 3;
    v50 = v49 + 1;
    if ((unsigned __int64)(v49 + 1) >> 61 != 0) {
      goto LABEL_293;
    }
    v51 = v45 - v47;
    if (v51 >> 2 > v50) {
      v50 = v51 >> 2;
    }
    if ((unsigned __int64)v51 >= 0x7FFFFFFFFFFFFFF8LL) {
      v52 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v52 = v50;
    }
    if (v52 != 0) {
      if (v52 >> 61 != 0) {
        goto LABEL_294;
      }
      v53 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v52, 16, 0);
    }
    else {
      v53 = 0;
    }
    v54 = v53 + 8 * v52;
    v55 = (unsigned __int64)v44 - v47;
    v56 = (__int64)&v48[v53 + -8 * v49];
    *(_QWORD*)&v48[v53] = v15;
    v46 = (__int64)&v48[v53 + 8];
    GameRoutine_1a0b950(v56, v47, v55);
    *(_QWORD*)(v11 + 552) = v56;
    *(_QWORD*)(v11 + 560) = v46;
    *(_QWORD*)(v11 + 568) = v54;
    if (v47 != 0) {
      v57 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v47);
    }
  }
  else {
    *v44 = v15;
    v46 = (__int64)(v44 + 1);
  }
  *(_QWORD*)(v11 + 560) = v46;
  GameRoutine_a8c0c0(v11);
  *(_BYTE*)(v11 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  v58 = LANES128(v251_.v251[0]).n128_i64[1];
  if (LANES128(v251_.v251[0]).n128_u64[1] != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(LANES128(v251_.v251[0]).n128_u64[1] + 8),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
    std___1___shared_weak_count___release_weak(v58);
  }
  *(_DWORD*)(v11 + 284) = 8;
  nn_os_LockMutex((__int64)GameData_212df28);
  v59 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       288, 16, 0);
  GameRoutine_bd6740(v59, v11, v4, 1);
  v60 = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                             memory_order_acquire);
  v61 = GameData_212d4d0;
  if ((v60 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212d4d8) != 0) {
    *v61 = wld_Crc32(0, "CharacterMaterial", 0x11u);
    __cxa_guard_release((__int64)GameData_212d4d8);
  }
  v62 = *v61;
  v63 = *(_QWORD*)(v11 + 504);
  v64 = *(_QWORD*)(v11 + 512);
  v65 = v64;
  LANES128(v255_.v255[0]).n128_u32[0] = v62;
  LANES128(v255_.v255[0]).n128_u64[1] = v59;
  while (v65 != v63) {
    v66 = *(_DWORD*)(v65 - 16);
    v65 -= 16;
    if (v66 == v62) {
      if ((*(_BYTE*)(v59 + 16) & 1) != 0) {
        goto LABEL_93;
      }
      goto LABEL_87;
    }
  }
  if (v63 == v64 && (unsigned __int64)(*(_QWORD*)(v11 + 520) - v63) <= 0x6F) {
    v67 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         112, 16, 0);
    *(_QWORD*)(v11 + 504) = v67;
    *(_QWORD*)(v11 + 512) = v67;
    *(_QWORD*)(v11 + 520) = v67 + 112;
    if (v64 != 0) {
      v68 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v63);
    }
  }
  GameRoutine_98f140((__int64*)(v11 + 504), v255_.v255);
  if ((*(_BYTE*)(v59 + 16) & 1) == 0) {
  LABEL_87:
    *(_BYTE*)(v59 + 16) = 1;
    *(_BYTE*)(v59 + 17) &= ~2u;
    *(_BYTE*)(v59 + 18) &= ~2u;
    *(_BYTE*)(v59 + 19) &= ~2u;
    *(_BYTE*)(v59 + 20) &= ~2u;
    v69 = *(_BYTE**)(v59 + 8);
    v69[632] = 0;
    v69[664] = 0;
    v69[696] = 0;
    v69[728] = 0;
    (*(void (**)(unsigned __int64))(*(_QWORD*)v59 + 64LL))(v59);
    v70 = *(_BYTE**)(v59 + 8);
    v71 = v70[300] == 3 && v70[301] == 3;
    if (v71 || v70[302] == 1) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v59 + 72LL))(v59);
    }
  }
LABEL_93:
  v72 = *(unsigned __int64**)(v11 + 536);
  v73 = *(_QWORD*)(v11 + 544);
  if ((unsigned __int64)v72 >= v73) {
    v75 = *(_QWORD*)(v11 + 528);
    v76 = (char*)v72 - v75;
    v77 = ((__int64)v72 - v75) >> 3;
    v78 = v77 + 1;
    if ((unsigned __int64)(v77 + 1) >> 61 != 0) {
      goto LABEL_293;
    }
    v79 = v73 - v75;
    if (v79 >> 2 > v78) {
      v78 = v79 >> 2;
    }
    if ((unsigned __int64)v79 >= 0x7FFFFFFFFFFFFFF8LL) {
      v80 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v80 = v78;
    }
    if (v80 != 0) {
      if (v80 >> 61 != 0) {
        goto LABEL_294;
      }
      v81 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v80, 16, 0);
    }
    else {
      v81 = 0;
    }
    v82 = v81 + 8 * v80;
    v83 = (unsigned __int64)v72 - v75;
    v84 = (__int64)&v76[v81 + -8 * v77];
    *(_QWORD*)&v76[v81] = v59;
    v74 = (__int64)&v76[v81 + 8];
    GameRoutine_1a0b950(v84, v75, v83);
    *(_QWORD*)(v11 + 528) = v84;
    *(_QWORD*)(v11 + 536) = v74;
    *(_QWORD*)(v11 + 544) = v82;
    if (v75 != 0) {
      v85 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v85 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v75);
    }
  }
  else {
    *v72 = v59;
    v74 = (__int64)(v72 + 1);
  }
  *(_QWORD*)(v11 + 536) = v74;
  v86 = *(unsigned __int64**)(v11 + 560);
  v87 = *(_QWORD*)(v11 + 568);
  if ((unsigned __int64)v86 >= v87) {
    v89 = *(_QWORD*)(v11 + 552);
    v90 = (char*)v86 - v89;
    v91 = ((__int64)v86 - v89) >> 3;
    v92 = v91 + 1;
    if ((unsigned __int64)(v91 + 1) >> 61 != 0) {
      goto LABEL_293;
    }
    v93 = v87 - v89;
    if (v93 >> 2 > v92) {
      v92 = v93 >> 2;
    }
    if ((unsigned __int64)v93 >= 0x7FFFFFFFFFFFFFF8LL) {
      v94 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v94 = v92;
    }
    if (v94 != 0) {
      if (v94 >> 61 != 0) {
        goto LABEL_294;
      }
      v95 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v94, 16, 0);
    }
    else {
      v95 = 0;
    }
    v96 = v95 + 8 * v94;
    v97 = (unsigned __int64)v86 - v89;
    v98 = (__int64)&v90[v95 + -8 * v91];
    *(_QWORD*)&v90[v95] = v59;
    v88 = (__int64)&v90[v95 + 8];
    GameRoutine_1a0b950(v98, v89, v97);
    *(_QWORD*)(v11 + 552) = v98;
    *(_QWORD*)(v11 + 560) = v88;
    *(_QWORD*)(v11 + 568) = v96;
    if (v89 != 0) {
      v99 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v99 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v99, v89);
    }
  }
  else {
    *v86 = v59;
    v88 = (__int64)(v86 + 1);
  }
  *(_QWORD*)(v11 + 560) = v88;
  GameRoutine_a8c0c0(v11);
  *(_BYTE*)(v11 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  v100 = LANES128(v4[25]).n128_i64[1];
  v101 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff38,
                              memory_order_acquire);
  v102 = GameData_212ff30;
  if ((v101 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212ff38) != 0) {
    *v102 = wld_Crc32(0, "ClothColliderModule", 0x13u);
    __cxa_guard_release((__int64)GameData_212ff38);
  }
  v103 = *(_QWORD*)(v100 + 512);
  v104 = v103;
  while (v104 != *(_QWORD*)(v100 + 504)) {
    v105 = *(_DWORD*)(v104 - 16);
    v104 -= 16;
    v103 -= 16;
    if (v105 == *v102) {
      if (*(_QWORD*)(v100 + 512) != v103) {
        v106 = *(_QWORD*)(v103 + 8);
        goto LABEL_132;
      }
      break;
    }
  }
  v106 = 0;
LABEL_132:
  v107 = LANES128(v4[25]).n128_i64[1];
  v108 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff48,
                              memory_order_acquire);
  v109 = GameData_212ff40;
  if ((v108 & 1) == 0) {
    v245 = v106;
    v246 = __cxa_guard_acquire((__int64)GameData_212ff48);
    v106 = v245;
    if (v246 != 0) {
      *v109 = wld_Crc32(0, "ClothWindModule", 0xFu);
      __cxa_guard_release((__int64)GameData_212ff48);
      v106 = v245;
    }
  }
  v110 = *(_QWORD*)(v107 + 512);
  v111 = v110;
  while (v111 != *(_QWORD*)(v107 + 504)) {
    v112 = *(_DWORD*)(v111 - 16);
    v111 -= 16;
    v110 -= 16;
    if (v112 == *v109) {
      if (*(_QWORD*)(v107 + 512) != v110 && v106 != 0) {
        v113 = *(_QWORD*)(v110 + 8);
        if (v113 != 0) {
          CharacterBuilder_10873c0(v11, v106, v113);
        }
      }
      break;
    }
  }
  v114 = v2[19];
  v115 = vsubq_f32(*(float32x4_t*)(v11 + 304), v114);
  v116 = vmulq_f32(v115, v115);
  LANES128(v116).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v116, v116, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v116).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v116).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v116).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    *(_DWORD*)(v11 + 304) = LANES128(v114).n128_u32[0];
    *(_DWORD*)(v11 + 308) = LANES128(v2[19]).n128_u32[1];
    v117 = *(_OWORD*)(v11 + 304);
    DWORD2(v117) = LANES128(v2[19]).n128_u32[2];
    *(_DWORD*)(v11 + 296) |= 1u;
    *((_QWORD*)&v117 + 1) = DWORD2(v117);
    *(_OWORD*)(v11 + 304) = v117;
  }
  v118 = v2[20];
  v119 = vsubq_f32(*(float32x4_t*)(v11 + 320), v118);
  v120 = vmulq_f32(v119, v119);
  LANES128(v120).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v120, v120, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    *(_DWORD*)(v11 + 320) = LANES128(v118).n128_u32[0];
    *(_DWORD*)(v11 + 324) = LANES128(v2[20]).n128_u32[1];
    v121 = *(_OWORD*)(v11 + 320);
    *((_QWORD*)&v121 + 1) = LANES128(v2[20]).n128_u32[2];
    *(_OWORD*)(v11 + 320) = v121;
    v122 = LANES128(v2[20]).n128_f32[1];
    v123 = LANES128(v2[20]).n128_f32[0];
    v124 = LANES128(v2[20]).n128_f32[2] * 0x1.0000000000000p-1;
    v125 = GameRoutine_1a09f80(v124);
    v126 = GameRoutine_1a09f70(v124);
    v127 = v123 * 0x1.0000000000000p-1;
    v128 = GameRoutine_1a09f80(v127);
    v129 = GameRoutine_1a09f70(v127);
    v130 = v122 * 0x1.0000000000000p-1;
    v131 = GameRoutine_1a09f80(v130);
    v132 = GameRoutine_1a09f70(v130);
    v133 = v125 * v129 * v131 - PSEUDO_UNFUSED(v132 * (v126 * v128));
    v134 =
        PSEUDO_UNFUSED(v126 * v129 * v131) + PSEUDO_UNFUSED(v125 * v128) * v132;
    v135 =
        PSEUDO_UNFUSED(v126 * v129 * v132) + PSEUDO_UNFUSED(v125 * v128) * v131;
    v136 = v126 * v128 * v131 - PSEUDO_UNFUSED(v132 * (v125 * v129));
    v137 = COERCE_FLOAT(*(_OWORD*)(v11 + 336)) == v133 &&
           COERCE_FLOAT(HIDWORD(*(_QWORD*)(v11 + 336))) == v134;
    v138 = v137 && COERCE_FLOAT(*(_QWORD*)(v11 + 344)) == v136;
    if (!v138 || COERCE_FLOAT(HIDWORD(*(_OWORD*)(v11 + 336))) != v135) {
      v140 = *(_DWORD*)(v11 + 296);
      *(float*)(v11 + 336) = v133;
      *(float*)(v11 + 340) = v134;
      *(float*)(v11 + 344) = v136;
      *(float*)(v11 + 348) = v135;
      *(_DWORD*)(v11 + 296) = v140 | 1;
    }
  }
  v141 = v2[22];
  v142 = vsubq_f32(*(float32x4_t*)(v11 + 352), v141);
  v143 = vmulq_f32(v142, v142);
  LANES128(v143).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v143, v143, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    *(_DWORD*)(v11 + 352) = LANES128(v141).n128_u32[0];
    *(_DWORD*)(v11 + 356) = LANES128(v2[22]).n128_u32[1];
    v144 = *(_OWORD*)(v11 + 352);
    DWORD2(v144) = LANES128(v2[22]).n128_u32[2];
    *(_DWORD*)(v11 + 296) |= 1u;
    *((_QWORD*)&v144 + 1) = DWORD2(v144);
    *(_OWORD*)(v11 + 352) = v144;
  }
  GameRoutine_a8c380(v11, (_QWORD*)LANES128(v4[25]).n128_u64[1]);
  *(_BYTE*)(v11 + 22) = 0;
  *(_WORD*)(v11 + 20) = -19821;
  *(_DWORD*)(v11 + 16) = -426407194;
  *(_QWORD*)(v11 + 272) = 6;
  v145 = LANES128(v4[24]).n128_i64[1];
  v146 = LANES128(v4[25]).n128_i64[0];
  if (v146 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v146 + 8), 1u,
                              memory_order_relaxed);
    v147 = CharacterAppearance_10743e0(v145);
    if (atomic_fetch_add((atomic_ullong* volatile)(v146 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v146 + 16LL))(v146);
      std___1___shared_weak_count___release_weak(v146);
    }
  }
  else {
    v147 = CharacterAppearance_10743e0(v145);
  }
  nn_os_LockMutex((__int64)GameData_212df28);
  v148 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v147 == 5) {
    v166 = fw_memory_HeapManager_Allocate(v148, 224, 16, 0);
    v167 = LANES128(v4[38]).n128_i64[0];
    v168 = LANES128(v4[38]).n128_i64[1];
    v152 = v166;
    *(_BYTE*)(v166 + 16) = 0;
    *(_DWORD*)(v166 + 17) = 33686018;
    *(_QWORD*)v166 = &game_combat_ThrownObject_vtable;
    *(_QWORD*)(v166 + 8) = v11;
    *(_QWORD*)(v166 + 24) = v167;
    *(_QWORD*)(v166 + 32) = v168;
    if (v168 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v168 + 16), 1u,
                                memory_order_relaxed);
    }
    v169 = *(_QWORD*)(a2 + 960);
    *(_QWORD*)(v166 + 40) = LANES128(v4[39]).n128_u64[0];
    *(_QWORD*)(v166 + 48) = v169;
    v170 = *(_QWORD*)(a2 + 968);
    *(_QWORD*)(v166 + 56) = v170;
    v171 = GameData_212df08;
    if (v170 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v170 + 16), 1u,
                                memory_order_relaxed);
    }
    v172 = *(_QWORD*)(a2 + 976);
    *(_BYTE*)(v166 + 80) = 0;
    *(_QWORD*)(v166 + 96) = 0;
    *(_QWORD*)(v166 + 104) = 0;
    *(_QWORD*)(v166 + 112) = 0;
    *(_QWORD*)(v166 + 120) = 0;
    *(_QWORD*)(v166 + 136) = 0;
    *(_QWORD*)(v166 + 144) = 0;
    *(_QWORD*)(v166 + 152) = 0;
    *(_QWORD*)(v166 + 64) = v172;
    *(_QWORD*)(v166 + 72) = 0;
    *(_DWORD*)(v166 + 128) = 2139095039;
    if ((*(_DWORD*)(a2 + 232) & 0xFFFFFFFE) == 2) {
      *(_BYTE*)(v166 + 80) = 1;
    }
    *(_QWORD*)(v166 + 72) = game_109f1e0(v11, "Loc_TrailTip");
    *(_QWORD*)(v152 + 168) = 0;
    *(_QWORD*)(v152 + 176) = 0;
    *(_QWORD*)(v152 + 184) = 0;
    *(_QWORD*)(v152 + 192) = 0;
    *(_QWORD*)(v152 + 200) = 0;
    *(_DWORD*)(v152 + 208) = 0;
    *(_QWORD*)v152 = game_combat_ThrownDiscus_vtable;
    *(_DWORD*)(v152 + 160) = -1;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
      *v171 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
    }
    v173 = *(_QWORD*)(v11 + 512);
    v174 = v173;
    while (v174 != *(_QWORD*)(v11 + 504)) {
      v175 = *(_DWORD*)(v174 - 16);
      v174 -= 16;
      v173 -= 16;
      if (v175 == *v171) {
        if (*(_QWORD*)(v11 + 512) != v173) {
          v176 = *(_QWORD*)(v173 + 8);
          if (v176 != 0) {
            v177 = *(_QWORD*)(v176 + 24);
            if (v177 != 0) {
              v178 = GameRoutine_109f640(v11, "Loc_Center");
              if (v178 != 0) {
                v179 = *(_OWORD*)(v178 + 80);
                *(_QWORD*)(v152 + 192) = v179;
                v180 = *(_OWORD*)(v152 + 192);
                *((_QWORD*)&v180 + 1) = DWORD2(v179);
                *(_OWORD*)(v152 + 192) = v180;
              }
              v181 = *(_QWORD*)(**(_QWORD**)(v177 + 168) + 8LL);
              if (v181 != 0) {
                v182 = *(_QWORD*)(v181 + 32);
                LANES128(v255_.v255[0]).n128_u64[0] =
                    (unsigned __int64)GameData_2009dd0;
                LANES128(v255_.v255[0]).n128_u64[1] = v152;
                v255_.v256 = v255_.v255;
                game_109d2e0(v152 + 160, v11, (const char*)(v182 + 2),
                             (__int64)v255_.v255, 0);
                if (v255_.v256 == v255_.v255) {
                  v183 = 32;
                }
                else {
                  if (v255_.v256 == nullptr) {
                    break;
                  }
                  v183 = 40;
                }
                (*(void (**)(void))(LANES128(*(v255_.v256)).n128_u64[0] +
                                    v183))();
              }
            }
          }
        }
        break;
      }
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235780,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2235780) != 0) {
      GameData_223577c = wld_Crc32(0, "ThrownObject", 0xCu);
      __cxa_guard_release((__int64)&GameData_2235780);
    }
    v190 = *(_QWORD*)(v11 + 504);
    v191 = *(_QWORD*)(v11 + 512);
    v196 = v191;
    LANES128(v255_.v255[0]).n128_u32[0] = GameData_223577c;
    LANES128(v255_.v255[0]).n128_u64[1] = v152;
    while (v196 != v190) {
      v197 = *(_DWORD*)(v196 - 16);
      v196 -= 16;
      if (v197 == GameData_223577c) {
      LABEL_225:
        if ((*(_BYTE*)(v152 + 16) & 1) != 0) {
          goto LABEL_240;
        }
        goto LABEL_234;
      }
    }
  }
  else if (v147 == 3) {
    v149 = fw_memory_HeapManager_Allocate(v148, 208, 16, 0);
    v150 = LANES128(v4[38]).n128_i64[0];
    v151 = LANES128(v4[38]).n128_i64[1];
    v152 = v149;
    *(_BYTE*)(v149 + 16) = 0;
    *(_DWORD*)(v149 + 17) = 33686018;
    *(_QWORD*)v149 = &game_combat_ThrownObject_vtable;
    *(_QWORD*)(v149 + 8) = v11;
    *(_QWORD*)(v149 + 24) = v150;
    *(_QWORD*)(v149 + 32) = v151;
    if (v151 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v151 + 16), 1u,
                                memory_order_relaxed);
    }
    v153 = *(_QWORD*)(a2 + 960);
    *(_QWORD*)(v149 + 40) = LANES128(v4[39]).n128_u64[0];
    *(_QWORD*)(v149 + 48) = v153;
    v154 = *(_QWORD*)(a2 + 968);
    *(_QWORD*)(v149 + 56) = v154;
    v155 = GameData_212df08;
    if (v154 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v154 + 16), 1u,
                                memory_order_relaxed);
    }
    v156 = *(_QWORD*)(a2 + 976);
    *(_BYTE*)(v149 + 80) = 0;
    *(_QWORD*)(v149 + 96) = 0;
    *(_QWORD*)(v149 + 104) = 0;
    *(_QWORD*)(v149 + 112) = 0;
    *(_QWORD*)(v149 + 120) = 0;
    *(_QWORD*)(v149 + 136) = 0;
    *(_QWORD*)(v149 + 144) = 0;
    *(_QWORD*)(v149 + 152) = 0;
    *(_QWORD*)(v149 + 64) = v156;
    *(_QWORD*)(v149 + 72) = 0;
    *(_DWORD*)(v149 + 128) = 2139095039;
    if ((*(_DWORD*)(a2 + 232) & 0xFFFFFFFE) == 2) {
      *(_BYTE*)(v149 + 80) = 1;
    }
    *(_QWORD*)(v149 + 72) = game_109f1e0(v11, "Loc_TrailTip");
    *(_QWORD*)(v152 + 168) = 0;
    *(_QWORD*)(v152 + 176) = 0;
    *(_QWORD*)(v152 + 184) = 0;
    *(_QWORD*)(v152 + 192) = 0;
    *(_DWORD*)(v152 + 200) = 0;
    *(_QWORD*)v152 = game_combat_ThrownAxe_vtable;
    *(_DWORD*)(v152 + 160) = -1;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
      *v155 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
    }
    v157 = *(_QWORD*)(v11 + 512);
    v158 = v157;
    while (v158 != *(_QWORD*)(v11 + 504)) {
      v159 = *(_DWORD*)(v158 - 16);
      v158 -= 16;
      v157 -= 16;
      if (v159 == *v155) {
        if (*(_QWORD*)(v11 + 512) != v157) {
          v160 = *(_QWORD*)(v157 + 8);
          if (v160 != 0) {
            v161 = *(_QWORD*)(v160 + 24);
            if (v161 != 0) {
              v162 = *(_QWORD*)(**(_QWORD**)(v161 + 168) + 8LL);
              if (v162 != 0) {
                v163 = *(_QWORD*)(v162 + 32);
                game_109f820((void*)(v255_.v255), v161, "Loc_TrailRoot");
                game_109f820((void*)(v251_.v251), v161,
                             (const char*)(v163 + 2));
                v164 = -0x1.99999a0000000p-2f;
                if (v255_.v258 == 1 && (v251_.v254 & 1) != 0) {
                  v164 = -vabds_f32(v255_.v257, v251_.v253);
                }
                *(float*)(v152 + 192) = v164;
                v247_.v247 = GameData_2009d50;
                v247_.v248 = v152;
                v247_.v250 = (__int64*)&v247_.v247;
                game_109d2e0(v152 + 160, v11, (const char*)(v163 + 2),
                             (__int64)&v247_.v247, 0);
                if (v247_.v250 == (__int64*)&v247_.v247) {
                  v165 = 32;
                }
                else {
                  if (v247_.v250 == nullptr) {
                    break;
                  }
                  v165 = 40;
                }
                (*(void (**)(__int64))(*v247_.v250 + v165))(
                    (__int64)v247_.v250);
              }
            }
          }
        }
        break;
      }
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235780,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2235780) != 0) {
      GameData_223577c = wld_Crc32(0, "ThrownObject", 0xCu);
      __cxa_guard_release((__int64)&GameData_2235780);
    }
    v190 = *(_QWORD*)(v11 + 504);
    v191 = *(_QWORD*)(v11 + 512);
    v194 = v191;
    LANES128(v255_.v255[0]).n128_u32[0] = GameData_223577c;
    LANES128(v255_.v255[0]).n128_u64[1] = v152;
    while (v194 != v190) {
      v195 = *(_DWORD*)(v194 - 16);
      v194 -= 16;
      if (v195 == GameData_223577c) {
        goto LABEL_225;
      }
    }
  }
  else {
    v184 = fw_memory_HeapManager_Allocate(v148, 160, 16, 0);
    v185 = LANES128(v4[38]).n128_i64[0];
    v186 = LANES128(v4[38]).n128_i64[1];
    v152 = v184;
    *(_BYTE*)(v184 + 16) = 0;
    *(_DWORD*)(v184 + 17) = 33686018;
    *(_QWORD*)v184 = &game_combat_ThrownObject_vtable;
    *(_QWORD*)(v184 + 8) = v11;
    *(_QWORD*)(v184 + 24) = v185;
    *(_QWORD*)(v184 + 32) = v186;
    if (v186 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v186 + 16), 1u,
                                memory_order_relaxed);
    }
    v187 = *(_QWORD*)(a2 + 960);
    *(_QWORD*)(v184 + 40) = LANES128(v4[39]).n128_u64[0];
    *(_QWORD*)(v184 + 48) = v187;
    v188 = *(_QWORD*)(a2 + 968);
    *(_QWORD*)(v184 + 56) = v188;
    if (v188 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v188 + 16), 1u,
                                memory_order_relaxed);
    }
    v189 = *(_QWORD*)(a2 + 976);
    *(_BYTE*)(v184 + 80) = 0;
    *(_QWORD*)(v184 + 96) = 0;
    *(_QWORD*)(v184 + 104) = 0;
    *(_QWORD*)(v184 + 112) = 0;
    *(_QWORD*)(v184 + 120) = 0;
    *(_QWORD*)(v184 + 136) = 0;
    *(_QWORD*)(v184 + 144) = 0;
    *(_QWORD*)(v184 + 152) = 0;
    *(_QWORD*)(v184 + 64) = v189;
    *(_QWORD*)(v184 + 72) = 0;
    *(_DWORD*)(v184 + 128) = 2139095039;
    if ((*(_DWORD*)(a2 + 232) & 0xFFFFFFFE) == 2) {
      *(_BYTE*)(v184 + 80) = 1;
    }
    *(_QWORD*)(v184 + 72) = game_109f1e0(v11, "Loc_TrailTip");
    *(_QWORD*)v152 = game_combat_ThrownStraight_vtable;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235780,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2235780) != 0) {
      GameData_223577c = wld_Crc32(0, "ThrownObject", 0xCu);
      __cxa_guard_release((__int64)&GameData_2235780);
    }
    v190 = *(_QWORD*)(v11 + 504);
    v191 = *(_QWORD*)(v11 + 512);
    v192 = v191;
    LANES128(v255_.v255[0]).n128_u32[0] = GameData_223577c;
    LANES128(v255_.v255[0]).n128_u64[1] = v152;
    while (v192 != v190) {
      v193 = *(_DWORD*)(v192 - 16);
      v192 -= 16;
      if (v193 == GameData_223577c) {
        goto LABEL_225;
      }
    }
  }
  if (v190 == v191 &&
      (unsigned __int64)(*(_QWORD*)(v11 + 520) - v190) <= 0x6F) {
    v198 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    *(_QWORD*)(v11 + 504) = v198;
    *(_QWORD*)(v11 + 512) = v198;
    *(_QWORD*)(v11 + 520) = v198 + 112;
    if (v191 != 0) {
      v199 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v199 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v199, v190);
    }
  }
  GameRoutine_98f140((__int64*)(v11 + 504), v255_.v255);
  if ((*(_BYTE*)(v152 + 16) & 1) == 0) {
  LABEL_234:
    *(_BYTE*)(v152 + 16) = 1;
    *(_BYTE*)(v152 + 17) &= ~2u;
    *(_BYTE*)(v152 + 18) &= ~2u;
    *(_BYTE*)(v152 + 19) &= ~2u;
    *(_BYTE*)(v152 + 20) &= ~2u;
    v200 = *(_BYTE**)(v152 + 8);
    v200[632] = 0;
    v200[664] = 0;
    v200[696] = 0;
    v200[728] = 0;
    (*(void (**)(unsigned __int64))(*(_QWORD*)v152 + 64LL))(v152);
    v201 = *(_BYTE**)(v152 + 8);
    v202 = v201[300] == 3 && v201[301] == 3;
    if (v202 || v201[302] == 1) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v152 + 72LL))(v152);
    }
  }
LABEL_240:
  v203 = *(unsigned __int64**)(v11 + 536);
  v204 = *(_QWORD*)(v11 + 544);
  if ((unsigned __int64)v203 >= v204) {
    v206 = *(_QWORD*)(v11 + 528);
    v207 = (char*)v203 - v206;
    v208 = ((__int64)v203 - v206) >> 3;
    v209 = v208 + 1;
    if ((unsigned __int64)(v208 + 1) >> 61 != 0) {
      goto LABEL_293;
    }
    v210 = v204 - v206;
    if (v210 >> 2 > v209) {
      v209 = v210 >> 2;
    }
    if ((unsigned __int64)v210 >= 0x7FFFFFFFFFFFFFF8LL) {
      v211 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v211 = v209;
    }
    if (v211 != 0) {
      if (v211 >> 61 != 0) {
        goto LABEL_294;
      }
      v212 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v211, 16, 0);
    }
    else {
      v212 = 0;
    }
    v213 = v212 + 8 * v211;
    v214 = (unsigned __int64)v203 - v206;
    v215 = (__int64)&v207[v212 + -8 * v208];
    *(_QWORD*)&v207[v212] = v152;
    v205 = (__int64)&v207[v212 + 8];
    GameRoutine_1a0b950(v215, v206, v214);
    *(_QWORD*)(v11 + 528) = v215;
    *(_QWORD*)(v11 + 536) = v205;
    *(_QWORD*)(v11 + 544) = v213;
    if (v206 != 0) {
      v216 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v216 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v216, v206);
    }
  }
  else {
    *v203 = v152;
    v205 = (__int64)(v203 + 1);
  }
  *(_QWORD*)(v11 + 536) = v205;
  v217 = *(unsigned __int64**)(v11 + 560);
  v218 = *(_QWORD*)(v11 + 568);
  if ((unsigned __int64)v217 < v218) {
    *v217 = v152;
    v219 = (__int64)(v217 + 1);
    goto LABEL_272;
  }
  v220 = *(_QWORD*)(v11 + 552);
  v221 = (char*)v217 - v220;
  v222 = ((__int64)v217 - v220) >> 3;
  v223 = v222 + 1;
  if ((unsigned __int64)(v222 + 1) >> 61 != 0) {
  LABEL_293:
    GameRoutine_98f290();
  }
  v224 = v218 - v220;
  if (v224 >> 2 > v223) {
    v223 = v224 >> 2;
  }
  if ((unsigned __int64)v224 >= 0x7FFFFFFFFFFFFFF8LL) {
    v225 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v225 = v223;
  }
  if (v225 != 0) {
    if (v225 >> 61 == 0) {
      v226 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v225, 16, 0);
      goto LABEL_268;
    }
  LABEL_294:
    GameRoutine_60a210();
  }
  v226 = 0;
LABEL_268:
  v227 = v226 + 8 * v225;
  v228 = (unsigned __int64)v217 - v220;
  v229 = (__int64)&v221[v226 + -8 * v222];
  *(_QWORD*)&v221[v226] = v152;
  v219 = (__int64)&v221[v226 + 8];
  GameRoutine_1a0b950(v229, v220, v228);
  *(_QWORD*)(v11 + 552) = v229;
  *(_QWORD*)(v11 + 560) = v219;
  *(_QWORD*)(v11 + 568) = v227;
  if (v220 != 0) {
    v230 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v230 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v230,
                                  v220);
  }
LABEL_272:
  *(_QWORD*)(v11 + 560) = v219;
  GameRoutine_a8c0c0(v11);
  *(_BYTE*)(v11 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  if (LANES128(v2[18]).n128_u8[0] != 0) {
    LANES128(v2[18]).n128_u8[0] = 0;
  }
  v231 = LANES128(v4[38]).n128_u64[0];
  v232 = LANES128(v4[38]).n128_u64[1];
  v255_.v256 = nullptr;
  if (v232 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v232 + 16), 1u,
                              memory_order_relaxed);
  }
  v233 = LANES128(v4[39]).n128_u64[0];
  v234 = (float32x4_t*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  LANES128(v234[1]).n128_u64[0] = v231;
  LANES128(v234[1]).n128_u64[1] = v232;
  LANES128(v234[2]).n128_u64[0] = v233;
  v251_.v252 = v234;
  LANES128(*(v234)).n128_u64[0] = (unsigned __int64)GameData_2009cd0;
  LANES128(*(v234)).n128_u64[1] = (unsigned __int64)v2;
  v235 = (_QWORD*)llvm_libcxx_21_libcxx_include___functional_10aa280(
      0, (__int64)v255_.v255, (__int64)v251_.v251, 0x1.99999a0000000p-2f);
  v236 = (__int64 (**)(void))v235[21];
  v237 = v235[22];
  v247_.v247 = v236;
  v247_.v248 = v237;
  if (v237 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v237 + 16), 1u,
                              memory_order_relaxed);
  }
  v238 = (__int64 (**)(void))v235[23];
  v239 = *(__int64 (****)())(v152 + 144);
  v240 = *(_QWORD*)(v152 + 152);
  v247_.v249 = v238;
  if ((unsigned __int64)v239 >= v240) {
    v241 = kaneko_disposable_10aa900((__int64*)(v152 + 136),
                                     (__int64*)&v247_.v247);
    v242 = v247_.v248;
    *(_QWORD*)(v152 + 144) = v241;
    if (v242 != 0) {
      std___1___shared_weak_count___release_weak(v242);
    }
  }
  else {
    *v239 = v236;
    v239[1] = (__int64 (**)(void))v237;
    v239[2] = v238;
    *(_QWORD*)(v152 + 144) = v239 + 3;
  }
  if (v251_.v252 == v251_.v251) {
    v243 = 32;
  }
  else {
    if (v251_.v252 == nullptr) {
      goto LABEL_287;
    }
    v243 = 40;
  }
  (*(void (**)(float32x4_t*))(LANES128(*(v251_.v252)).n128_u64[0] + v243))(
      v251_.v252);
LABEL_287:
  result = v255_.v256;
  if (v255_.v256 == v255_.v255) {
    v244 = 32;
  }
  else {
    if (v255_.v256 == nullptr) {
      return result;
    }
    v244 = 40;
  }
  return (float32x4_t*)(*(__int64 (**)(float32x4_t*))(
      LANES128(*(v255_.v256)).n128_u64[0] + v244))(v255_.v256);
}

__int64 game_singleton_17ab020(__int64 a1, int* a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1440, 16, 0);
  game_menu_1789cf0(v7, (__int64)"EquipUnitSelectMenu");
  *(_DWORD*)(v7 + 1184) = 0;
  *(_DWORD*)(v7 + 1208) = 0;
  *(_QWORD*)(v7 + 1216) = 0;
  *(_QWORD*)(v7 + 1224) = 0;
  *(_QWORD*)(v7 + 1232) = 0;
  *(_QWORD*)(v7 + 1280) = 0;
  *(_QWORD*)(v7 + 1296) = 0;
  *(_QWORD*)(v7 + 1304) = 0;
  *(_BYTE*)(v7 + 1312) = 0;
  *(_QWORD*)(v7 + 1328) = 0;
  *(_QWORD*)(v7 + 1336) = 0;
  *(_QWORD*)(v7 + 1200) = 0xFFFFFFFFLL;
  *(_QWORD*)(v7 + 1344) = 0;
  *(_QWORD*)(v7 + 1352) = 0;
  *(_QWORD*)(v7 + 1360) = 0;
  *(_QWORD*)(v7 + 1368) = 0;
  *(_QWORD*)(v7 + 1376) = 0;
  *(_QWORD*)(v7 + 1384) = 0;
  *(_BYTE*)(v7 + 1392) = 0;
  *(_QWORD*)(v7 + 1408) = 0;
  *(_QWORD*)(v7 + 1416) = 0;
  *(_QWORD*)(v7 + 1424) = 0;
  *(_DWORD*)(v7 + 1240) = 2;
  *(_QWORD*)v7 = game_menu_anonymous_ProcCmdBtlEquipUnitSelectMenu_vtable;
  *(_QWORD*)(v7 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr_20d3538;
  v8 = *a2;
  *(_QWORD*)(v7 + 176) = GameData_20d3468;
  *(_DWORD*)(v7 + 1400) = v8;
  v10 = *((_QWORD*)a2 + 1);
  v9 = *((_QWORD*)a2 + 2);
  v11 = v9 - v10;
  if (v9 != v10) {
    if ((v11 & 0x8000000000000000LL) != 0) {
      GameRoutine_688200();
    }
    v12 = fw_memory_HeapManager_Allocate(*v6, v9 - v10, 16, 0);
    v13 = v12 + v11;
    *(_QWORD*)(v7 + 1408) = v12;
    *(_QWORD*)(v7 + 1416) = v12;
    *(_QWORD*)(v7 + 1424) = v12 + v11;
    GameRoutine_1a0b950(v12, v10, v11);
    *(_QWORD*)(v7 + 1416) = v13;
  }
  ProcInst_657850(v7, (__int64)GameData_212c730,
                  "ProcCmdBtlEquipUnitSelectMenu", 1, a1);
  v15 = *(_QWORD**)(v7 + 256);
  v14 = *(_QWORD**)(v7 + 264);
  *(_QWORD*)(v7 + 336) = 0;
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
  v19_.v19[0] = GameData_20d3bd8;
  v19_.v20 = v19_.v19;
  GameRoutine_1626520(v7, (__int64)v19_.v19);
  if (v19_.v20 == v19_.v19) {
    v17 = 32;
    goto LABEL_15;
  }
  if (v19_.v20 != nullptr) {
    v17 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v19_.v20 + v17))((__int64)v19_.v20);
  }
  return GameRoutine_17aae80(v7, a3);
}

#pragma GCC visibility pop
