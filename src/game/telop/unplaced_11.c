#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameRoutine_1745960(__int64*, __int64);
__int64 GameRoutine_1840740(__int64, unsigned int, __int64, unsigned __int8,
                            char);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_9a58b0(_QWORD*);
__int64 GaugeUtil_1750020(__int64, __int64*, __int64, char, signed int,
                          unsigned int);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_Unit_GetJob(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_67ed20(_QWORD*);
char* game_util_Format(const char*, ...);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2130fa0[3];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_2131cf0[28];
extern __int64 GameData_2131cf8[27];
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char** GameData_212e998;
int GameRoutine_1a09bf0(__int64, const char*, ...);
int GameRoutine_1a09d30(const char*, const char*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void TelopBattleExp_1743280(__int64);
void __attribute__((noreturn)) GameRoutine_1745d60();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void nn_vfx_bc6f60(__int64, __int64);
void game_telop_1742640(__int64 a1);

void game_telop_1742640(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  float v14;
  float v15;
  bool v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  signed int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _BYTE* v45;
  unsigned __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned int v74;
  _BOOL4 v75;
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  int v83;
  unsigned int v84;
  float v85;
  float v86;
  float v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned int v98;
  __int64 v99;
  unsigned int v100;
  bool v101;
  __int64 v102;
  int v103;
  unsigned __int64 v104;
  signed int v105;
  int v106;
  int v107;
  int v108;
  unsigned int v109;
  int v110;
  __int64 v111;
  unsigned int v112;
  __int64 v113;
  unsigned int v114;
  bool v115;
  __int64 v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  float v122;
  unsigned int v123;
  float v124;
  float v125;
  float v126;
  void* v127;
  __int64 v128;
  __int64 v129;
  char v130;
  __int64* v131;
  __int64* v132;
  __int64* v133;
  __int64* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  unsigned int v138;
  __int64 v139;
  unsigned int v140;
  char** v141;
  unsigned int v142;
  char** v143;
  int v144;
  unsigned int v145;
  struct {
    char gap0_[8];
    __int64 v146;
    __int64 v147;
    __int64 v148;
    __int64* v149;
    char gap40_[4];
    int v150;
    __int64* v151;
    __int64 v152;
    __int64 v153;
    __int64* v154;
    __int64 v155;
    __int128 v156;
    __int64 v157;
    __int64 v158;
    __int16 v159;
    char gap122_[6];
    __int64 v160;
    unsigned __int64 v161;
    __int64 v162;
    __int64 v163;
    unsigned __int64 v164;
    __int64 v165;
    __int64 v166;
    unsigned __int64 v167;
    __int64 v168;
    __int64 v169;
    __int64 v170;
    __int64 v171;
    __int64 v172;
  } f_;
  __int64 v173[3];

  v1 = *(_QWORD*)(a1 + 824);
  v2 = a1;
  v3 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
  if ((int)v3 >= 99) {
    LODWORD(v3) = 99;
  }
  v4 = GameData_21d9968 + 4LL * (int)v3;
  if ((signed __int32)*(_DWORD*)(a1 + 840) >=
      (signed __int32)(*(int*)(v4 - 4) - *(int*)(v1 + 504))) {
    v5 = *(int*)(v4 - 4) - *(int*)(v1 + 504);
  }
  else {
    v5 = *(_DWORD*)(a1 + 840);
  }
  *(_DWORD*)(a1 + 840) = v5;
  v6 = a1 + 936;
  v7 = *(_DWORD*)(v1 + 504);
  v8 = *(unsigned __int8*)(v1 + 498);
  v9 = *(_DWORD*)(v4 - 4);
  *(_DWORD*)(v2 + 956) = v5;
  *(float*)(v2 + 952) = (float)v5;
  *(_DWORD*)(v2 + 960) = v8;
  *(_DWORD*)(v2 + 948) = v7;
  *(_DWORD*)(v2 + 944) = v7;
  if (v9 >= v7 + v5) {
    v10 = v7 + v5;
  }
  else {
    v10 = v9;
  }
  if (v7 + v5 >= 0) {
    v11 = v10;
  }
  else {
    v11 = 0;
  }
  *(float*)(v2 + 968) = (float)v7;
  *(_DWORD*)(v2 + 972) = v11;
  if (v7 >= v9) {
    *(_BYTE*)(v2 + 964) = 1;
    if ((v5 & 0x80000000) == 0) {
      *(_BYTE*)(v2 + 984) = 0;
      goto LABEL_18;
    }
  LABEL_17:
    *(_BYTE*)(v2 + 984) = 1;
    if (v7 > 0) {
      goto LABEL_19;
    }
  LABEL_18:
    *(_DWORD*)(v2 + 952) = 0;
    goto LABEL_19;
  }
  *(_BYTE*)(v2 + 964) = 0;
  if (v5 < 0) {
    goto LABEL_17;
  }
  *(_BYTE*)(v2 + 984) = 0;
LABEL_19:
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6);
  if (v12 != 0) {
    if (v5 >= 0) {
      v13 = v5;
    }
    else {
      v13 = -v5;
    }
    v14 = 0x1.8000000000000p+0f;
    v15 = (float)((float)v13 / (float)v12) * 0x1.8000000000000p+0f;
    if (v15 <= 0x1.8000000000000p+0f) {
      v14 = (float)((float)v13 / (float)v12) * 0x1.8000000000000p+0f;
    }
    v16 = v15 < 0x0.0p+0f;
    v17 = 0x0.0p+0f;
    if (!v16) {
      v17 = v14;
    }
  }
  else {
    v17 = 0x1.8000000000000p+0f;
  }
  v18 = *(_QWORD*)(v2 + 824);
  *(float*)(v2 + 976) = v17;
  f_.v146 = v1;
  v19 = v2 + 852;
  v20 = 0;
  v21 = 0;
  v22 = GameData_2131cf0[0];
  *(_WORD*)(v2 + 965) = 0;
  *(_BYTE*)(v2 + 985) = 1;
  v23 = v1 + 540;
  v24 = -26;
  f_.v151 = (__int64*)(v22 + 16);
  *(_DWORD*)(v2 + 1356) = *(unsigned __int8*)(v18 + 498);
  f_.v149 = GameData_2130fa0[0] + 2;
  f_.v147 = v1 + 540;
  f_.v148 = GameData_2131cf8[0] + 16;
  do {
    if (*(int*)(v19 + 4 * v20) < 1) {
      goto LABEL_31;
    }
    f_.v155 = 0;
    *(_QWORD*)&f_.v156 = 0;
    *(_QWORD*)((char*)&f_.v156 + 7) = 0;
    f_.v159 = 0;
    LOWORD(f_.v160) = 0;
    LOWORD(f_.v163) = 0;
    LOWORD(f_.v166) = 0;
    f_.v169 = 0;
    f_.v170 = 0;
    f_.v157 = 0;
    f_.v158 = 1065353216;
    f_.v154 = f_.v151;
    v25 = game_util_Format("L_IconMastery_Gauge_%02d", v21);
    LayoutAccessor_1560070((void*)(&f_.v152), (__int64*)(v2 + 168), v25);
    v26 = *(_QWORD*)(v2 + 824);
    v27 = *(unsigned __int16*)(v23 + v24);
    v28 = *(_DWORD*)(v19 + 4 * v20);
    v29 = f_.v153;
    v173[0] = f_.v152;
    v173[1] = f_.v153;
    if (f_.v153 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(f_.v153 + 16), 1u,
                                memory_order_relaxed);
      GaugeUtil_1750020((__int64)&f_.v154, v173, v26, v20, v27, v28);
      std___1___shared_weak_count___release_weak(v29);
      v30 = f_.v153;
      if (f_.v153 == 0) {
        goto LABEL_36;
      }
    LABEL_35:
      std___1___shared_weak_count___release_weak(v30);
      goto LABEL_36;
    }
    GaugeUtil_1750020((__int64)&f_.v154, v173, v26, v20, v27, v28);
    v30 = f_.v153;
    if (f_.v153 != 0) {
      goto LABEL_35;
    }
  LABEL_36:
    v31 = *(_QWORD*)(v2 + 1336);
    if (v31 < *(_QWORD*)(v2 + 1344)) {
      *(_QWORD*)v31 = f_.v149;
      v32 = f_.v156;
      *(_QWORD*)(v31 + 8) = f_.v155;
      *(_QWORD*)(v31 + 16) = v32;
      v33 = *((_QWORD*)&f_.v156 + 1);
      v34 = f_.v157;
      v35 = f_.v158;
      *(_WORD*)(v31 + 48) = f_.v159;
      *(_QWORD*)(v31 + 32) = v34;
      *(_QWORD*)(v31 + 40) = v35;
      *(_QWORD*)(v31 + 24) = v33;
      if ((f_.v160 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)(v31 + 56), f_.v162, f_.v161);
        if ((f_.v163 & 1) != 0) {
        LABEL_39:
          fw_text_String_CopyTerminated((__int64*)(v31 + 80), f_.v165, f_.v164);
          if ((f_.v166 & 1) != 0) {
          LABEL_40:
            fw_text_String_CopyTerminated((__int64*)(v31 + 104), f_.v168,
                                          f_.v167);
          LABEL_47:
            *(_QWORD*)v31 = f_.v148;
            *(_QWORD*)(v31 + 128) = f_.v169;
            v43 = f_.v170;
            *(_QWORD*)(v31 + 136) = f_.v170;
            if (v43 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                                        memory_order_relaxed);
            }
            v44 = f_.v172;
            v38 = v31 + 160;
            *(_QWORD*)(v31 + 144) = f_.v171;
            *(_QWORD*)(v31 + 152) = v44;
            *(_QWORD*)v31 = GameData_2131cf0[0] + 16;
            goto LABEL_50;
          }
        LABEL_46:
          v41 = f_.v166;
          v42 = f_.v168;
          *(_QWORD*)(v31 + 112) = f_.v167;
          *(_QWORD*)(v31 + 120) = v42;
          *(_QWORD*)(v31 + 104) = v41;
          goto LABEL_47;
        }
      }
      else {
        v36 = f_.v160;
        v37 = f_.v162;
        *(_QWORD*)(v31 + 64) = f_.v161;
        *(_QWORD*)(v31 + 72) = v37;
        *(_QWORD*)(v31 + 56) = v36;
        if ((f_.v163 & 1) != 0) {
          goto LABEL_39;
        }
      }
      v39 = f_.v163;
      v40 = f_.v165;
      *(_QWORD*)(v31 + 88) = f_.v164;
      *(_QWORD*)(v31 + 96) = v40;
      *(_QWORD*)(v31 + 80) = v39;
      if ((f_.v166 & 1) != 0) {
        goto LABEL_40;
      }
      goto LABEL_46;
    }
    v38 = GameRoutine_1745960((__int64*)(v2 + 1328), (__int64)&f_.v154);
  LABEL_50:
    *(_QWORD*)(v2 + 1336) = v38;
    v45 = *(_BYTE**)(v2 + 1368);
    v46 = *(_QWORD*)(v2 + 1376);
    v47 = *(_BYTE*)(v23 + v20);
    if ((unsigned __int64)v45 >= v46) {
      v49 = *(_QWORD*)(v2 + 1360);
      v50 = &v45[-v49];
      v51 = (__int64)&v45[-v49 + 1];
      if (v51 < 0) {
        GameRoutine_1745d60();
      }
      v52 = v46 - v49;
      f_.v150 = v21;
      v53 = v19;
      v54 = (_QWORD*)v2;
      if (2 * v52 > v51) {
        v51 = 2 * v52;
      }
      if (v52 >= 0x3FFFFFFFFFFFFFFFLL) {
        v55 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v55 = v51;
      }
      if (v55 != 0) {
        v56 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v55, 16, 0);
      }
      else {
        v56 = 0;
      }
      v57 = v56 + v55;
      v58 = (unsigned __int64)&v45[-v49];
      v50[v56] = v47;
      v48 = (__int64)&v50[v56 + 1];
      GameRoutine_1a0b950(v56, v49, v58);
      v54[170] = v56;
      v2 = (__int64)v54;
      v54[171] = v48;
      v54[172] = v57;
      if (v49 != 0) {
        v59 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v49);
      }
      v21 = f_.v150;
      v19 = v53;
      v23 = f_.v147;
    }
    else {
      *v45 = v47;
      v48 = (__int64)(v45 + 1);
    }
    *(_QWORD*)(v2 + 1368) = v48;
    f_.v154 = (__int64*)(GameData_2131cf8[0] + 16);
    if (f_.v170 != 0) {
      std___1___shared_weak_count___release_weak(f_.v170);
    }
    f_.v154 = GameData_2130fa0[0] + 2;
    if ((f_.v166 & 1) != 0 && f_.v168 != 0) {
      v60 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v60 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, f_.v168);
    }
    if ((f_.v163 & 1) != 0 && f_.v165 != 0) {
      v61 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, f_.v165);
    }
    if ((f_.v160 & 1) != 0 && f_.v162 != 0) {
      v62 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v62 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, f_.v162);
    }
    ++v21;
  LABEL_31:
    ++v20;
    v24 += 2;
  } while (v24 != 0);
  v63 = *(_QWORD*)(v2 + 824);
  if (*(_QWORD*)(v63 + 408) == 0) {
    v64 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v63 + 400) + 24LL) + 1104LL);
    if (v64 != 0) {
      v65 = *(_QWORD*)(*(_QWORD*)(v64 + 24) + 1104LL);
      if (v65 != 0) {
        v66 = f_.v146;
        v67 = *(unsigned __int16*)(v65 + 412);
        v65 = *(unsigned __int16*)(v65 + 16);
        v68 = *(_QWORD*)(f_.v146 + 560);
        if (v65 >= (signed __int64)(*(_QWORD*)(f_.v146 + 568) - v68) >> 1) {
          LODWORD(v65) = 0;
        }
        else {
          LODWORD(v65) = *(_WORD*)(v68 + 2 * v65) & 0x3FF;
        }
      }
      else {
        v66 = f_.v146;
        v67 = 0;
      }
      v69 = v67 - v65;
      if ((signed __int32)*(_DWORD*)(v2 + 844) >= v69) {
        v70 = v69;
      }
      else {
        v70 = *(_DWORD*)(v2 + 844);
      }
      *(_DWORD*)(v2 + 844) = v70;
      v71 = *(_QWORD*)(*(_QWORD*)(v64 + 24) + 1104LL);
      if (v71 != 0) {
        v72 = *(_QWORD*)(v66 + 560);
        v73 = *(unsigned __int16*)(v71 + 16);
        if (v73 >= (signed __int64)(*(_QWORD*)(v66 + 568) - v72) >> 1) {
          v74 = 0;
        }
        else {
          v74 = *(_WORD*)(v72 + 2 * v73) & 0x3FF;
        }
        v76 = *(_QWORD*)(*(_QWORD*)(v71 + 24) + 1104LL);
        if (v76 != 0 && (v77 = *(unsigned __int16*)(v76 + 412),
                         *(_WORD*)(v76 + 412) != 0)) {
          v78 = *(_QWORD*)(v66 + 560);
          v79 = *(unsigned __int16*)(v76 + 16);
          if (v79 >= (signed __int64)(*(_QWORD*)(v66 + 568) - v78) >> 1) {
            v80 = 0;
          }
          else {
            v80 = *(_WORD*)(v78 + 2 * v79) & 0x3FF;
          }
          v75 = v80 < v77;
        }
        else {
          v75 = true;
        }
        LODWORD(v71) = *(unsigned __int16*)(v71 + 412);
      }
      else {
        v74 = 0;
        v75 = true;
      }
      *(_DWORD*)(v2 + 1088) = v75;
      *(_DWORD*)(v2 + 1192) = v71;
      *(_DWORD*)(v2 + 1076) = v74;
      *(_DWORD*)(v2 + 1072) = v74;
      if ((int)v71 >= (int)(v70 + v74)) {
        v81 = v70 + v74;
      }
      else {
        v81 = v71;
      }
      *(_DWORD*)(v2 + 1084) = v70;
      *(float*)(v2 + 1080) = (float)v70;
      if ((int)(v70 + v74) >= 0) {
        v82 = v81;
      }
      else {
        v82 = 0;
      }
      *(_DWORD*)(v2 + 1100) = v82;
      *(float*)(v2 + 1096) = (float)v74;
      if (v74 >= (unsigned int)v71) {
        *(_BYTE*)(v2 + 1092) = 1;
        if (v70 < 0) {
          goto LABEL_117;
        }
        *(_BYTE*)(v2 + 1112) = 0;
      LABEL_118:
        *(_DWORD*)(v2 + 1080) = 0;
      }
      else {
        *(_BYTE*)(v2 + 1092) = 0;
        if ((v70 & 0x80000000) == 0) {
          *(_BYTE*)(v2 + 1112) = 0;
          goto LABEL_119;
        }
      LABEL_117:
        *(_BYTE*)(v2 + 1112) = 1;
        if (v74 == 0) {
          goto LABEL_118;
        }
      }
    LABEL_119:
      v83 = (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 1064) + 40LL))(v2 + 1064);
      if (v83 != 0) {
        if (v70 >= 0) {
          v84 = v70;
        }
        else {
          v84 = -v70;
        }
        v85 = 0x1.8000000000000p+0f;
        v86 = (float)((float)v84 / (float)v83) * 0x1.8000000000000p+0f;
        if (v86 <= 0x1.8000000000000p+0f) {
          v85 = (float)((float)v84 / (float)v83) * 0x1.8000000000000p+0f;
        }
        v16 = v86 < 0x0.0p+0f;
        v87 = 0x0.0p+0f;
        if (!v16) {
          v87 = v85;
        }
      }
      else {
        v87 = 0x1.8000000000000p+0f;
      }
      *(float*)(v2 + 1104) = v87;
      *(_WORD*)(v2 + 1093) = 0;
      *(_BYTE*)(v2 + 1113) = 1;
      v88 = *(_QWORD*)(*(_QWORD*)(v64 + 24) + 1104LL);
      if (v88 != 0) {
        v89 = *(_QWORD*)(*(_QWORD*)(v88 + 24) + 1104LL);
        if (v89 != 0) {
          LODWORD(v88) = *(unsigned __int16*)(v89 + 412);
          if (*(_WORD*)(v89 + 412) != 0) {
            v90 = *(_QWORD*)(v66 + 560);
            v91 = *(unsigned __int16*)(v89 + 16);
            if (v91 >= (signed __int64)(*(_QWORD*)(v66 + 568) - v90) >> 1) {
              v92 = 0;
            }
            else {
              v92 = *(_WORD*)(v90 + 2 * v91) & 0x3FF;
            }
            LOBYTE(v88) = v92 >= (unsigned int)v88;
          }
        }
        else {
          LOBYTE(v88) = 0;
        }
      }
      v63 = *(_QWORD*)(v2 + 824);
      *(_BYTE*)(v2 + 929) = v88;
    }
  }
  if (*(_BYTE*)(v63 + 1880) != 0) {
    v93 = game_Unit_GetJob(v63);
    v94 = *(_QWORD*)(v2 + 824);
    v95 = *(_QWORD*)(*(_QWORD*)(v94 + 400) + 88LL);
    *(_BYTE*)(v2 + 928) = v93 != v95;
    if (v93 == v95) {
      v63 = v94;
    }
    else {
      v96 = *(_QWORD*)(v94 + 392);
      if (v96 == 0) {
        goto LABEL_152;
      }
      v97 = *(_QWORD*)(v63 + 1904);
      if (v97 == 0) {
        goto LABEL_152;
      }
      v98 = *(unsigned __int8*)(v96 + 48);
      v99 = v63 + 1904;
      do {
        v100 = *(unsigned __int8*)(v97 + 26);
        v101 = v100 >= v98;
        if (v100 >= v98) {
          v102 = 0;
        }
        else {
          v102 = 8;
        }
        if (v101) {
          v99 = v97;
        }
        v97 = *(_QWORD*)(v97 + v102);
      } while (v97 != 0);
      if (v99 != v63 + 1904 && v98 >= *(unsigned __int8*)(v99 + 26)) {
        v103 = *(_WORD*)(v99 + 28) & 0xFFF;
      }
      else {
      LABEL_152:
        v103 = 0;
      }
      v104 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
      if ((int)v104 < 1) {
        v105 = 0;
        if (v96 != 0) {
          goto LABEL_172;
        }
      }
      else {
        v105 = 0;
        v106 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v104 - 1));
        if (v106 >= v103) {
          v106 = v103;
        }
        if (v103 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
          v107 = v106;
        }
        else {
          v107 = *(_DWORD*)GameData_21d9988;
        }
        v108 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
        while (1) {
          v109 = (unsigned int)(v105 + v108) >> 1;
          v110 = *(_DWORD*)(GameData_21d9988 + 4LL * v109);
          if (v107 == v110) {
            break;
          }
          if (v107 < v110) {
            v108 = (unsigned int)(v105 + v108) >> 1;
          }
          else {
            v105 = v109 + 1;
          }
          if (v105 >= v108) {
            if (v96 != 0) {
              goto LABEL_172;
            }
            goto LABEL_184;
          }
        }
        v105 = v109 + 1;
        if (v96 == 0) {
          goto LABEL_184;
        }
      LABEL_172:
        v111 = *(_QWORD*)(v63 + 1904);
        if (v111 == 0) {
          goto LABEL_183;
        }
        v112 = *(unsigned __int8*)(v96 + 48);
        v113 = v63 + 1904;
        do {
          v114 = *(unsigned __int8*)(v111 + 26);
          v115 = v114 >= v112;
          if (v114 >= v112) {
            v116 = 0;
          }
          else {
            v116 = 8;
          }
          if (v115) {
            v113 = v111;
          }
          v111 = *(_QWORD*)(v111 + v116);
        } while (v111 != 0);
        if (v113 != v63 + 1904 && v112 >= *(unsigned __int8*)(v113 + 26)) {
          LODWORD(v96) = *(_WORD*)(v113 + 28) & 0xFFF;
        }
        else {
        LABEL_183:
          LODWORD(v96) = 0;
        }
      }
    LABEL_184:
      v117 = *(_DWORD*)(v2 + 848);
      if ((int)v104 >= 5) {
        LODWORD(v104) = 5;
      }
      v118 = *(_DWORD*)(GameData_21d9988 + 4LL * (int)v104 - 4);
      *(_DWORD*)(v2 + 1212) = v96;
      *(_DWORD*)(v2 + 1208) = v96;
      *(_DWORD*)(v2 + 1220) = v117;
      *(_DWORD*)(v2 + 1224) = v105;
      *(float*)(v2 + 1216) = (float)v117;
      if (v118 >= v117 + (int)v96) {
        v119 = v117 + v96;
      }
      else {
        v119 = v118;
      }
      if (v117 + (int)v96 >= 0) {
        v120 = v119;
      }
      else {
        v120 = 0;
      }
      *(float*)(v2 + 1232) = (float)(unsigned int)v96;
      *(_DWORD*)(v2 + 1236) = v120;
      if ((int)v96 >= v118) {
        *(_BYTE*)(v2 + 1228) = 1;
        if (v117 < 0) {
          goto LABEL_197;
        }
        *(_BYTE*)(v2 + 1248) = 0;
      LABEL_198:
        *(_DWORD*)(v2 + 1216) = 0;
      }
      else {
        *(_BYTE*)(v2 + 1228) = 0;
        if ((v117 & 0x80000000) == 0) {
          *(_BYTE*)(v2 + 1248) = 0;
          goto LABEL_199;
        }
      LABEL_197:
        *(_BYTE*)(v2 + 1248) = 1;
        if ((_DWORD)v96 == 0) {
          goto LABEL_198;
        }
      }
    LABEL_199:
      v121 =
          (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 1200) + 40LL))(v2 + 1200);
      v122 = 0x1.8000000000000p+0f;
      *(_DWORD*)(v2 + 1384) = v105;
      if (v117 >= 0) {
        v123 = v117;
      }
      else {
        v123 = -v117;
      }
      v63 = *(_QWORD*)(v2 + 824);
      *(_WORD*)(v2 + 1229) = 0;
      *(_BYTE*)(v2 + 1249) = 1;
      v124 = (float)((float)v123 / (float)v121) * 0x1.8000000000000p+0f;
      if (v124 <= 0x1.8000000000000p+0f) {
        v125 = (float)((float)v123 / (float)v121) * 0x1.8000000000000p+0f;
      }
      else {
        v125 = 0x1.8000000000000p+0f;
      }
      v16 = v124 < 0x0.0p+0f;
      v126 = 0x0.0p+0f;
      if (!v16) {
        v126 = v125;
      }
      if (v121 != 0) {
        v122 = v126;
      }
      *(float*)(v2 + 1240) = v122;
    }
  }
  else {
    *(_BYTE*)(v2 + 928) = 0;
  }
  *(_BYTE*)(v2 + 920) = 1;
  if (*(_BYTE*)(v63 + 2136) != 0) {
    v127 = game_97b2f0(v63 + 2104);
    if (v127 == nullptr) {
      goto LABEL_216;
    }
  }
  else {
    v127 = GameRoutine_67ed20(*(_QWORD**)(v63 + 392));
    if (v127 == nullptr) {
      goto LABEL_216;
    }
  }
  v128 =
      ui_LayoutAccessor_FindTextBox((__int64*)(v2 + 168), (__int64)"T_Lv_Name");
  if (v128 != 0) {
    GameRoutine_156c5d0(v128, (__int64)v127, 0);
  }
LABEL_216:
  v129 = ui_LayoutAccessor_FindPane((__int64*)(v2 + 168), (__int64)"IconFace");
  if (v129 != 0) {
    v129 = __dynamic_cast(v129, GameData_212d670[0], GameData_212d678[0], 0);
  }
  v130 = GameRoutine_1840740(v129, 0, *(_QWORD*)(v2 + 824), 6u, 1);
  ui_LayoutAccessor_SetPaneVisible(v2 + 168, (__int64)"IconFace", v130 & 1);
  GameRoutine_1a09bf0((__int64)&f_.v154, "L_MasteryLv%02d", 0);
  v131 = LayoutAccessor_155fbe0((__int64*)(v2 + 168), (const char*)&f_.v154);
  LayoutAccessor_155e830((__int64)v131, 0);
  GameRoutine_1a09bf0((__int64)&f_.v154, "L_MasteryLv%02d", 1);
  v132 = LayoutAccessor_155fbe0((__int64*)(v2 + 168), (const char*)&f_.v154);
  LayoutAccessor_155e830((__int64)v132, 0);
  GameRoutine_1a09bf0((__int64)&f_.v154, "L_MasteryLv%02d", 2);
  v133 = LayoutAccessor_155fbe0((__int64*)(v2 + 168), (const char*)&f_.v154);
  LayoutAccessor_155e830((__int64)v133, 0);
  GameRoutine_1a09bf0((__int64)&f_.v154, "L_MasteryLv%02d", 3);
  v134 = LayoutAccessor_155fbe0((__int64*)(v2 + 168), (const char*)&f_.v154);
  LayoutAccessor_155e830((__int64)v134, 0);
  ui_LayoutAccessor_SetPaneVisible(v2 + 168, (__int64)"N_Animal_IO",
                                   *(_BYTE*)(v2 + 928));
  v135 = *eft_g_effectSystem_ptr[0];
  v136 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 112);
  v137 = *(_QWORD*)(v136 + 24);
  if (v137 != 0 && (v138 = *(_DWORD*)(v136 + 32)) != 0) {
    v139 = v2;
    v140 = 0;
    v141 = GameData_212e998;
    while (1) {
      v142 = (v138 + v140) >> 1;
      v143 = (const char**)(v137 + 336LL * v142);
      v144 = GameRoutine_1a09d30(*v143, "UI_Deco_StatusUP");
      if (v144 == 0) {
        break;
      }
      if (v144 < 0) {
        v140 = v142 + 1;
      }
      else {
        v138 = (v138 + v140) >> 1;
      }
      if (v140 == v138) {
        v143 = (const char**)v141;
        break;
      }
    }
    v2 = v139;
  }
  else {
    v143 = (const char**)GameData_212e998;
  }
  v145 = GameRoutine_9a58b0(v143);
  nn_vfx_bc6f60(v135, v145);
  TelopBattleExp_1743280(v2);
}

#pragma GCC visibility pop
