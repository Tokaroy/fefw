#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 WayPointBase_d964b0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212ce38;
extern __int64 (*GameData_1fdea98[])();
extern __int64 (*game_zview_SmoothPathWayPoint_vtable[])();
extern __int64* GameData_212ce30;
extern __int64* GameData_212f038[3];
extern __int64* GameData_212f040[2];
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, __int64*);
void GameRoutine_6b4ef0(__int64*, __int64);
void GameRoutine_6b50a0(__int64*);
void GameRoutine_6b71e0(__int64*);
void GameRoutine_c47a00(_QWORD*, __int64*);
void GfxLoader_c48320(_QWORD*, __int64*);
void SmoothPath_d92a40(__int64);
void SmoothPath_d930a0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_d95550();
void game_zview_d95860(__int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_zview_d93d00(__int64 a1, __int64 a2);

void game_zview_d93d00(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned int* v8;
  unsigned int* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 i;
  unsigned __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned int* v46;
  unsigned int* v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  unsigned int* v55;
  unsigned int v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 j;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  __int64* v87;
  float v88;
  float v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  _QWORD* v93;
  __int64 v94;
  float v95;
  float v96;
  float v97;
  bool v100;
  bool v101;
  __int64 v103;
  __int64** v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64** v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64* v123;
  __int64* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129[2];
  struct {
    __int64 v130;
    __int64 v131;
    __int64 v132;
    char gap176_[8];
    __int64 v133;
    __int64 v134;
  } v130_;
  struct {
    _QWORD v135[7];
    __int16 v136;
    char gap258_[2];
    int v137;
    __int64 v138;
    __int64 v139;
  } v135_;
  struct {
    __int16 v140;
    char gap282_[6];
    __int64 v141;
    unsigned __int64 v142;
    __int64 v143;
  } v140_;
  struct {
    __int64 v144;
    __int64 v145;
    __int64 v146;
    char* v147;
  } v144_;
  __int64 v148[3];

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v140_.v140 = 0;
  v2 = *(_QWORD*)(a2 + 592);
  v3 = *(_QWORD*)(a2 + 576);
  v135_.v136 = 257;
  v135_.v138 = v2;
  v135_.v139 = v3;
  v140_.v141 = 0;
  v140_.v142 = 0;
  v140_.v143 = 0;
  v135_.v135[5] = 0;
  v135_.v135[6] = 0;
  v135_.v137 = 0;
  v135_.v135[4] = -1;
  v135_.v135[0] = GameData_212ce30 + 2;
  __builtin_memset(&v135_.v135[1], 0, 24);
  GameRoutine_6b4ef0(v129, (__int64)v135_.v135),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_QWORD*)(*(_QWORD*)(v130_.v131 +
                            8 * ((unsigned __int64)(v130_.v134 + v130_.v133 -
                                                    1) >>
                                 9)) +
                 8 * ((v130_.v134 + v130_.v133 - 1) & 0x1FF)) == 0) {
    goto LABEL_101;
  }
  v144_.v144 = 0x706F6F4C73690CLL;
  v144_.v147 = (char*)&v140_.v140;
  GfxLoader_c48320(v129, &v144_.v144),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v144_.v144 & 1) != 0 && v144_.v146 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v144_.v146),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v144_.v147 = (char*)&v140_.v140 + 1;
  v144_.v144 = 0x5265646F4D736914LL;
  v144_.v145 = 7105647;
  GfxLoader_c48320(v129, &v144_.v144),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v144_.v144 & 1) != 0 && v144_.v146 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  v144_.v146),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v130_.v131 +
                             8 * ((unsigned __int64)(v130_.v134 + v130_.v133 -
                                                     1) >>
                                  9)) +
                  8 * ((v130_.v134 + v130_.v133 - 1) & 0x1FF));
  if (v6 == 0) {
    goto LABEL_101;
  }
  v144_.v144 = 0x6E696F7079617712LL;
  v144_.v145 = 29556;
  if ((*(_BYTE*)v6 & 0x7F) == 8 &&
      (v7 = strlen((const char*)&v144_.v144 + 1),
       v8 = *(unsigned int**)(v6 + 1), v148[0] = (__int64)&v144_.v144 + 1,
       v148[1] = v7, v9 = game_6b7f00(v8, 0, v8, v8[1], v148), v10 != v8[1])) {
    v12 = *v9;
    if (v10 >= v12) {
      v14 = v10 - v12;
      v15 = __clz((unsigned int)(v14 + 16));
      v13 =
          *(_QWORD*)(*((_QWORD*)v9 + 2) + 8 * (27 - v15) + 8) +
          32LL * (unsigned int)(v14 - *((_DWORD*)GameData_212ce38 + 28 - v15));
    }
    else {
      v13 = *((_QWORD*)v9 + 1) + 32 * v10;
    }
    v11 = v13 + 16;
    if ((v144_.v144 & 1) == 0) {
      goto LABEL_25;
    }
  }
  else {
    v11 = 0;
    if ((v144_.v144 & 1) == 0) {
      goto LABEL_25;
    }
  }
  if (v144_.v146 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v144_.v146),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_25:
  if (v11 == 0 || (*(_BYTE*)v11 & 0x7F) != 7) {
    goto LABEL_101;
  }
  v17 = *(unsigned int**)(v11 + 1);
  v18 = v140_.v141;
  v19 = v140_.v142;
  v20 = v17[1];
  v21 = v140_.v142 - v140_.v141;
  v22 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v140_.v142 - v140_.v141) >> 3);
  v23 = v20 - v22;
  if (v20 <= v22) {
    if (v20 >= v22) {
      goto LABEL_42;
    }
    v32 = v140_.v141 + 24LL * (unsigned int)v20;
    goto LABEL_41;
  }
  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v140_.v143 - v140_.v142) >> 3) >= v23) {
    memset(v140_.v142, 0,
           24 * ((24 * (unsigned __int64)(unsigned int)v23 - 24) / 0x18) + 24),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v32 = v19 + 24 * ((24 * (unsigned __int64)(unsigned int)v23 - 24) / 0x18) +
          24;
  LABEL_41:
    v140_.v142 = v32;
    goto LABEL_42;
  }
  if (0x5555555555555556LL * ((v140_.v143 - v140_.v141) >> 3) > v20) {
    v20 = 0x5555555555555556LL * ((v140_.v143 - v140_.v141) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((v140_.v143 - v140_.v141) >> 3) >=
      0x555555555555555LL) {
    v20 = 0xAAAAAAAAAAAAAAALL;
  }
  if (v20 > 0xAAAAAAAAAAAAAAALL) {
  LABEL_170:
    GameRoutine_60a210(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v24 = 3 * v20;
  v25 = fw_memory_g_heap_manager_ptr;
  v26 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24 * v20, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = v26 + v21;
  v28 = v26;
  v29 = v26 + 8 * v24;
  v30 = 24 * ((24 * (unsigned __int64)(unsigned int)v23 - 24) / 0x18) + 24;
  memset(v26 + v21, 0, v30),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memcpy(v28, v18, v21),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v140_.v141 = v28;
  v140_.v142 = v27 + v30;
  v140_.v143 = v29;
  if (v18 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v31, v18),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_42:
  v127 = v17[1];
  if ((_DWORD)v127 != 0) {
    v33 = 0;
    for (i = 0; i != v127; ++i) {
      v35 = *v17;
      if (i >= v35) {
        v37 = i - v35;
        v38 = __clz((unsigned int)(v37 + 16));
        v36 = *(_QWORD*)(*((_QWORD*)v17 + 2) + 8 * (27 - v38) + 8) +
              16LL *
                  (unsigned int)(v37 - *((_DWORD*)GameData_212ce38 + 28 - v38));
      }
      else {
        v36 = *((_QWORD*)v17 + 1) + 16 * i;
      }
      v39 = v130_.v131;
      v40 = ((v130_.v132 - v130_.v131) << 6) - 1;
      if (v130_.v132 == v130_.v131) {
        v40 = 0;
      }
      v41 = v130_.v134 + v130_.v133;
      if (v40 == v130_.v134 + v130_.v133) {
        GameRoutine_6b71e0(&v130_.v130),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v39 = v130_.v131;
        v41 = v130_.v134 + v130_.v133;
      }
      *(_QWORD*)(*(_QWORD*)(v39 + 8 * (v41 >> 9)) + 8 * (v41 & 0x1FF)) = v36;
      v42 = v130_.v134++;
      v43 = *(
          _QWORD*)(*(_QWORD*)(v130_.v131 +
                              8 * ((unsigned __int64)(v130_.v133 + v42) >> 9)) +
                   8 * ((v130_.v133 + v42) & 0x1FF));
      if (v43 == 0) {
        goto LABEL_94;
      }
      v44 = v140_.v141;
      v144_.v144 = 0x65756C61760ALL;
      if ((*(_BYTE*)v43 & 0x7F) == 8 &&
          (v45 = strlen((const char*)&v144_.v144 + 1),
           v46 = *(unsigned int**)(v43 + 1), v148[0] = (__int64)&v144_.v144 + 1,
           v148[1] = v45, v47 = game_6b7f00(v46, 0, v46, v46[1], v148),
           v48 != v46[1])) {
        v50 = *v47;
        if (v48 >= v50) {
          v52 = v48 - v50;
          v53 = __clz((unsigned int)(v52 + 16));
          v51 = *(_QWORD*)(*((_QWORD*)v47 + 2) + 8 * (27 - v53) + 8) +
                32LL * (unsigned int)(v52 -
                                      *((_DWORD*)GameData_212ce38 + 28 - v53));
        }
        else {
          v51 = *((_QWORD*)v47 + 1) + 32 * v48;
        }
        v49 = v51 + 16;
        if ((v144_.v144 & 1) != 0) {
        LABEL_62:
          if (v144_.v146 != 0) {
            v54 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v54 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v144_.v146),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v48 =
                    COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      else {
        v49 = 0;
        if ((v144_.v144 & 1) != 0) {
          goto LABEL_62;
        }
      }
      if (v49 != 0 && (*(_BYTE*)v49 & 0x7F) == 7) {
        v55 = *(unsigned int**)(v49 + 1);
        v56 = v55[1];
        v57 = v56 >= 6 ? 6LL : v56;
        if (v56 != 0) {
          v58 = 16 * v57;
          v59 = (char*)(v44 + v33);
          v60 = 0;
          v61 = 0;
          do {
            v62 = *v55;
            if (v61 >= v62) {
              v64 = v61 - v62;
              v65 = __clz((unsigned int)(v64 + 16));
              v63 = *(_QWORD*)(*((_QWORD*)v55 + 2) + 8 * (27 - v65) + 8) +
                    16LL * (unsigned int)(v64 - *((_DWORD*)GameData_212ce38 +
                                                  28 - v65));
            }
            else {
              v63 = *((_QWORD*)v55 + 1) + v60;
            }
            v66 = v130_.v131;
            v67 = ((v130_.v132 - v130_.v131) << 6) - 1;
            if (v130_.v132 == v130_.v131) {
              v67 = 0;
            }
            v68 = v130_.v134 + v130_.v133;
            if (v67 == v130_.v134 + v130_.v133) {
              GameRoutine_6b71e0(&v130_.v130),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v48 = COERCE_AS(
                      __typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v66 = v130_.v131;
              v68 = v130_.v134 + v130_.v133;
            }
            *(_QWORD*)(*(_QWORD*)(v66 + 8 * (v68 >> 9)) + 8 * (v68 & 0x1FF)) =
                v63;
            LOWORD(v144_.v144) = 0;
            v144_.v147 = v59;
            ++v130_.v134;
            GameRoutine_c47a00(v129, &v144_.v144),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v48 =
                    COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((v144_.v144 & 1) != 0 && v144_.v146 != 0) {
              v69 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v69 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v144_.v146),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v48 = COERCE_AS(
                      __typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v70 = v130_.v132;
            v71 = v130_.v134;
            v72 = ((v130_.v132 - v130_.v131) << 6) - 1;
            if (v130_.v132 == v130_.v131) {
              v72 = 0;
            }
            --v130_.v134;
            if ((unsigned __int64)(v72 - (v71 + v130_.v133) + 1) >= 0x400) {
              v73 = *(_QWORD*)(v130_.v132 - 8);
              if (v73 != 0) {
                v74 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v74 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v73),
                    v10 = COERCE_AS(
                        __typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v48 = COERCE_AS(
                        __typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v70 = v130_.v132;
              }
              v130_.v132 = v70 - 8;
            }
            ++v61;
            v60 += 16;
            v59 += 4;
          } while (v58 != v60);
        }
      }
    LABEL_94:
      v75 = v130_.v132;
      v76 = v130_.v134;
      v77 = ((v130_.v132 - v130_.v131) << 6) - 1;
      if (v130_.v132 == v130_.v131) {
        v77 = 0;
      }
      --v130_.v134;
      if ((unsigned __int64)(v77 - (v76 + v130_.v133) + 1) >= 0x400) {
        v78 = *(_QWORD*)(v130_.v132 - 8);
        if (v78 != 0) {
          v79 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v78),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v75 = v130_.v132;
        }
        v130_.v132 = v75 - 8;
      }
      v33 += 24;
    }
  }
LABEL_101:
  if (*(unsigned __int8*)(a1 + 12) != (unsigned __int8)v140_.v140) {
    *(_BYTE*)(a1 + 12) = v140_.v140;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (*(unsigned __int8*)(a1 + 13) != HIBYTE(v140_.v140)) {
    *(_BYTE*)(a1 + 13) = HIBYTE(v140_.v140);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v80 = *(_QWORD*)(a1 + 56);
  for (j = *(_QWORD*)(a1 + 64); j != v80; j -= 16) {
    v82 = *(_QWORD*)(j - 8);
    if (v82 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v82),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v83 = a1;
  v84 = v140_.v141;
  v85 = v140_.v142;
  *(_QWORD*)(a1 + 64) = v80;
  if (v84 != v85) {
    v86 = (__int64*)fw_memory_g_heap_manager_ptr;
    v87 = GameData_212f038[0] + 2;
    v123 = GameData_212f038[0] + 2;
    v125 = GameData_212f040[0] + 2;
    do {
      v88 = *(float*)(v84 + 8);
      v89 = *(float*)(v84 + 20);
      v128 = *(_QWORD*)v84;
      v126 = *(_QWORD*)(v84 + 12);
      v90 = fw_memory_HeapManager_Allocate(*v86, 136, 16, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(v90 + 16) = 0;
      *(_QWORD*)v90 = GameData_1fdea98;
      *(_QWORD*)(v90 + 72) = 0;
      *(_QWORD*)(v90 + 80) = 0;
      *(_QWORD*)(v90 + 48) = 0;
      *(_QWORD*)(v90 + 56) = 0;
      *(_DWORD*)(v90 + 64) = 0;
      v91 = *v86;
      *(_QWORD*)(v90 + 8) = 0;
      *(_QWORD*)(v90 + 24) = v87;
      v92 = (__int64*)(v90 + 24);
      *(_QWORD*)(v90 + 32) = v83;
      *(_QWORD*)(v90 + 40) = 0;
      v93 = (_QWORD*)fw_memory_HeapManager_Allocate(v91, 32, 16, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v94 = *(_QWORD*)(v90 + 80);
      v93[1] = 0;
      v93[2] = 0;
      *v93 = v125;
      *(_QWORD*)(v90 + 72) = v93 + 3;
      *(_QWORD*)(v90 + 80) = v93;
      if (v94 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v94),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v95 = *(float*)(v90 + 40);
      v96 = *(float*)(v90 + 44);
      v97 = *(float*)(v90 + 48);
      *(_QWORD*)(v90 + 24) = game_zview_SmoothPathWayPoint_vtable;
      *(_QWORD*)(v90 + 88) = 0;
      *(_QWORD*)(v90 + 96) = 0;
      *(_QWORD*)(v90 + 104) = 0;
      *(_QWORD*)(v90 + 112) = 0;
      *(_QWORD*)(v90 + 120) = 0;
      *(_QWORD*)(v90 + 128) = 0;
      if (v95 != *(float*)&v128 | v96 != *((float*)&v128 + 1) || v97 != v88) {
        *(_QWORD*)(v90 + 40) = v128;
        *(float*)(v90 + 48) = v88;
        WayPointBase_d964b0((__int64)v92),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (*(_BYTE*)(v83 + 13) == 1) {
        if (*(_BYTE*)(*(_QWORD*)(v90 + 32) + 13LL) != 0) {
          if (*(float*)(v90 + 52) != 0x0.0p+0f ||
              (*(float*)(v90 + 56) == 0x0.0p+0f
                   ? (v100 = *(float*)(v90 + 60) == v89)
                   : (v100 = false),
               !v100)) {
            *(_QWORD*)(v90 + 52) = 0;
          LABEL_142:
            v103 = *v92;
            *(float*)(v90 + 60) = v89;
            (*(void (**)(__int64*))(v103 + 24))(v92),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v48 =
                    COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      else if ((*(_BYTE*)(*(_QWORD*)(v90 + 32) + 13LL) & 1) == 0) {
        v101 = *(float*)(v90 + 52) == *(float*)&v126 &
               *(float*)(v90 + 56) == *((float*)&v126 + 1);
        if (!v101 | *(float*)(v90 + 60) != v89) {
          *(_QWORD*)(v90 + 52) = v126;
          goto LABEL_142;
        }
      }
      v104 = *(__int64***)(v83 + 64);
      v105 = *(_QWORD*)(v83 + 72);
      if ((unsigned __int64)v104 >= v105) {
        v107 = *(_QWORD*)(v83 + 56);
        v108 = (unsigned __int64)v104 - v107;
        v109 = ((__int64)v104 - v107) >> 4;
        v110 = v109 + 1;
        if ((unsigned __int64)(v109 + 1) >> 60 != 0) {
          GameRoutine_d95550(),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v111 = v105 - v107;
        if (v111 >> 3 > v110) {
          v110 = v111 >> 3;
        }
        if ((unsigned __int64)v111 >= 0x7FFFFFFFFFFFFFF0LL) {
          v112 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v112 = v110;
        }
        if (v112 >> 60 != 0) {
          goto LABEL_170;
        }
        v113 = fw_memory_HeapManager_Allocate(*v86, 16 * v112, 16, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v114 = (__int64**)(v113 + v108);
        v115 = v113 + 16 * v112;
        *v114 = v92;
        v114[1] = (__int64*)v90;
        v116 = v113 + v108 - 16 * v109;
        v106 = v113 + v108 + 16;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 8), 1u,
                                  memory_order_relaxed);
        memcpy(v116, v107, v108),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v83 = a1;
        *(_QWORD*)(a1 + 56) = v116;
        *(_QWORD*)(a1 + 64) = v106;
        *(_QWORD*)(a1 + 72) = v115;
        v86 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v107 != 0) {
          v117 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v117 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v117, v107),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v87 = v123;
      }
      else {
        *v104 = v92;
        v104[1] = (__int64*)v90;
        v106 = (__int64)(v104 + 2);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 8), 1u,
                                  memory_order_relaxed);
      }
      *(_QWORD*)(v83 + 64) = v106;
      if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v90),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v84 += 24;
    } while (v84 != v85);
  }
  if (*(_BYTE*)(v83 + 12) == 1) {
    SmoothPath_d92a40(v83),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    SmoothPath_d930a0(v83),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v118 = *(_QWORD*)(v83 + 56);
  if (*(_QWORD*)(v83 + 64) != v118) {
    v119 = 0;
    v120 = 0;
    do {
      v121 = *(_QWORD*)(v118 + v119);
      v119 += 16;
      *(_DWORD*)(v121 + 40) = v120++;
      v118 = *(_QWORD*)(v83 + 56);
    } while (v120 < (signed __int64)(*(_QWORD*)(v83 + 64) - v118) >> 4);
  }
  game_zview_d95860((__int64*)v83),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_6b50a0(v129),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*))(v135_.v135[0] + 24LL))(v135_.v135),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v140_.v141 != 0) {
    v140_.v142 = v140_.v141;
    v122 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v122 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v122,
                                  v140_.v141),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

#pragma GCC visibility pop
