#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 GameRoutine_1268b60(__int64 result, __int64*, int*, __int64, __int64*,
                            __int64);
__int64 GameRoutine_1a09d20(unsigned __int64, __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_59d3b0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(unsigned __int64);
extern _UNKNOWN* GameData_2130ea8;
extern __int64* GameData_212cb58[92];
extern __int64* GameData_2130ea0;
extern __int64 GameData_212c060;
extern __int64 fw_memory_g_heap_manager_ptr;
float TextBox_59d3c0(__int64 result, __int64);
float TextBox_59d550(__int64, __int64);
float ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
int __cxa_guard_acquire(__int64);
void GameRoutine_1256480(__int64*, unsigned int*);
void GameRoutine_1269a20(__int64*, unsigned __int64);
void GameRoutine_1269cc0(__int64, unsigned __int64*, __int64*, __int64*);
void __attribute__((noreturn)) GameRoutine_1265540();
void __attribute__((noreturn)) GameRoutine_60a210();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_1258820(__int64 a1);
void game_1368580(float* a1, __int64** a2);

void game_1258820(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 primeEm;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  _BYTE* v33;
  _BOOL8 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int8 v38;
  __int64 v39;
  _DWORD* v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  unsigned __int8* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _DWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 i;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  unsigned __int8* v59;
  int v60;
  unsigned int v61;
  int v62;
  bool v63;
  _BOOL8 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64** v67;
  __int64 v68;
  signed __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64** v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64** v93;
  __int64 v94;
  __int64 v95;
  char* v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64** v107;
  __int64 v108;
  char* v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64* v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64* v129;
  __int64 v130;
  bool v131;
  struct {
    char gap0_[8];
    __int64* v132;
    __int64 v133;
    _QWORD v134[2];
    _QWORD v135[2];
    _QWORD v136[2];
    _QWORD v137[2];
    _QWORD v138[2];
    _QWORD v139[2];
    _QWORD v140[2];
    _QWORD v141[2];
    _QWORD v142[2];
    _QWORD v143[2];
  } f_;
  __int64 v144[65];

  f_.v143[0] = 0;
  f_.v143[1] = 0;
  f_.v142[0] = 0;
  f_.v142[1] = 0;
  f_.v141[0] = 0;
  f_.v141[1] = 0;
  f_.v140[0] = 0;
  f_.v140[1] = 0;
  v2 = *GameData_212cb58[0];
  v3 = *(_QWORD*)(a1 + 1432);
  f_.v139[0] = 0;
  f_.v139[1] = 0;
  f_.v138[0] = 0;
  f_.v138[1] = 0;
  f_.v137[0] = 0;
  f_.v137[1] = 0;
  f_.v136[0] = 0;
  f_.v136[1] = 0;
  f_.v135[0] = 0;
  f_.v135[1] = 0;
  f_.v134[0] = 0;
  f_.v134[1] = 0;
  *(_QWORD*)(a1 + 1440) = v3;
  v4 = *(__int64**)(v2 + 64);
  v5 = *(__int64**)(v2 + 72);
  if (v4 == v5) {
    v6 = 0;
  }
  else {
    v6 = 0;
    do {
      v7 = *v4++;
      if (*(_BYTE*)(v7 + 216) != 0) {
        ++v6;
      }
      else {
        v6 += 10;
      }
    } while (v4 != v5);
  }
  v8 = fw_memory_g_heap_manager_ptr;
  if (*(_DWORD*)(a1 + 24) != v6) {
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        16LL * v6, 16, 0);
    if (v6 != 0) {
      v10 = v6 & 7;
      v11 = v9;
      if (v10 != 0) {
        v11 = v9;
        do {
          *(_DWORD*)(v11 + 8) = 0;
          *(_QWORD*)v11 = 0;
          v11 += 16;
          --v10;
        } while (v10 != 0);
      }
      if (((v6 - 1LL) & 0xFFFFFFFFFFFFFFFuLL) >= 7) {
        do {
          *(_DWORD*)(v11 + 8) = 0;
          *(_QWORD*)v11 = 0;
          *(_QWORD*)(v11 + 16) = 0;
          *(_DWORD*)(v11 + 24) = 0;
          *(_QWORD*)(v11 + 32) = 0;
          *(_DWORD*)(v11 + 40) = 0;
          *(_QWORD*)(v11 + 48) = 0;
          *(_DWORD*)(v11 + 56) = 0;
          *(_QWORD*)(v11 + 64) = 0;
          *(_DWORD*)(v11 + 72) = 0;
          *(_QWORD*)(v11 + 80) = 0;
          *(_DWORD*)(v11 + 88) = 0;
          *(_QWORD*)(v11 + 96) = 0;
          *(_DWORD*)(v11 + 104) = 0;
          *(_DWORD*)(v11 + 120) = 0;
          *(_QWORD*)(v11 + 112) = 0;
          v11 += 128;
        } while (v11 != v9 + 16LL * v6);
      }
    }
    v12 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v9;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v12);
    }
    *(_DWORD*)(a1 + 24) = v6;
  }
  if (*(_QWORD*)(a1 + 56) != 0) {
    v14 = *(_QWORD**)(a1 + 48);
    if (v14 != nullptr) {
      do {
        v15 = (_QWORD*)*v14;
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v16, (__int64)v14);
        v14 = v15;
      } while (v15 != nullptr);
    }
    v17 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 48) = 0;
    if (v17 != 0) {
      v18 = v17 & 7;
      if (v17 >= 8) {
        v20 = v17 & 0xFFFFFFFFFFFFFFF8LL;
        v19 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v19) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v19 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v19 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v19 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v19 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v19 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v19 + 48) = 0;
          v21 = *(_QWORD*)(a1 + 32) + 8 * v19;
          v19 += 8;
          *(_QWORD*)(v21 + 56) = 0;
        } while (v20 != v19);
      }
      else {
        v19 = 0;
      }
      if (v18 != 0) {
        v22 = 8 * v19;
        do {
          --v18;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + v22) = 0;
          v22 += 8;
        } while (v18 != 0);
      }
    }
    v6 = *(_DWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 56) = 0;
  }
  primeEm = vcvtps_u64_f32((float)v6 / *(float*)(a1 + 64));
  if (primeEm == 1) {
    primeEm = 2;
  }
  else if ((primeEm & (primeEm - 1)) != 0) {
    primeEm = std___1___next_prime(primeEm);
  }
  v24 = *(_QWORD*)(a1 + 40);
  if (primeEm > v24) {
    goto LABEL_41;
  }
  if (primeEm < v24) {
    v25 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 56) /
                         *(float*)(a1 + 64));
    if (v24 < 3 || (v24 & (v24 - 1)) != 0) {
      v25 = std___1___next_prime(v25);
    }
    else {
      v26 = 1LL << ((-(char)__clz((unsigned long long)(v25 - 1))) & 63);
      if (v25 >= 2) {
        v25 = v26;
      }
    }
    if (primeEm <= v25) {
      primeEm = v25;
    }
    if (primeEm < v24) {
    LABEL_41:
      GameRoutine_1269a20((__int64*)(a1 + 32), primeEm);
    }
  }
  v27 = *(__int64**)(v2 + 64);
  v28 = *(__int64**)(v2 + 72);
  if (v27 != v28) {
    v29 = 0;
    while (1) {
      v30 = *v27;
      v31 = 2;
      v32 = *(unsigned __int8*)(*v27 + 216);
      v33 = *(_BYTE**)(*v27 + 24);
      v34 = *(_WORD*)(*v27 + 288) != 0;
      if (*(_WORD*)(*v27 + 288) != 0) {
        v31 = 3;
      }
      if (*v33 == 1) {
        v34 = v31;
      }
      v35 = *(unsigned __int8*)(v30 + 280) <= 1u ? v34 : v34 | 4;
      if (*(_BYTE*)(*v27 + 216) == 0) {
        break;
      }
      nn_util_SNPrintf(v144, 512, "%s_%d", *(_QWORD*)(v30 + 8));
      v36 = game_HashString((__int64)v144);
      v37 = *(_QWORD*)(a1 + 16);
      v38 = *(_BYTE*)(v30 + 216);
      v144[0] = v36;
      v39 = v37 + 16LL * v29;
      f_.v133 = v39;
      *(_QWORD*)v39 = v30;
      *(_WORD*)(v39 + 8) = v38;
      *(_BYTE*)(v39 + 11) = 0;
      GameRoutine_1269cc0(a1 + 32, (unsigned __int64*)v144, v144, &f_.v133);
      v40 = &f_.v134[2 * v32];
      ++*(_DWORD*)v40;
      if ((v35 & 1) != 0) {
        ++v40[1];
        if ((v35 & 2) != 0) {
        LABEL_87:
          ++v40[2];
          if (v35 < 4) {
            goto LABEL_54;
          }
          goto LABEL_88;
        }
      }
      else if ((v35 & 2) != 0) {
        goto LABEL_87;
      }
      if (v35 >= 4) {
      LABEL_88:
        ++v40[3];
      }
    LABEL_54:
      ++v29;
    LABEL_55:
      if (++v27 == v28) {
        goto LABEL_89;
      }
    }
    v41 = 1;
    v42 = (unsigned __int8)v33[1] - 1;
    while (1) {
      v43 = *(unsigned __int16*)(v30 + 224);
      if (*(_WORD*)(v30 + 224) != 0) {
        v44 = *(unsigned __int8**)(v30 + 232);
        do {
          v45 = *v44++;
          if (v45 == (unsigned __int8)v41) {
            goto LABEL_70;
          }
        } while (--v43 != 0);
      }
      if (v42 > 1) {
        if (v41 != 9) {
          goto LABEL_70;
        }
      }
      else if (v41 == 9) {
        goto LABEL_55;
      }
      nn_util_SNPrintf(v144, 512, "%s_%d", *(_QWORD*)(v30 + 8));
      v46 = game_HashString((__int64)v144);
      v47 = *(_QWORD*)(a1 + 16);
      v144[0] = v46;
      v48 = v47 + 16LL * v29;
      f_.v133 = v48;
      *(_QWORD*)v48 = v30;
      *(_BYTE*)(v48 + 8) = v41;
      *(_BYTE*)(v48 + 9) = 0;
      *(_BYTE*)(v48 + 11) = 0;
      GameRoutine_1269cc0(a1 + 32, (unsigned __int64*)v144, v144, &f_.v133);
      v49 = &f_.v134[2 * v41];
      ++*(_DWORD*)v49;
      if ((v35 & 1) != 0) {
        ++v49[1];
        if ((v35 & 2) == 0) {
        LABEL_81:
          if (v35 >= 4) {
            goto LABEL_85;
          }
          goto LABEL_69;
        }
      }
      else if ((v35 & 2) == 0) {
        goto LABEL_81;
      }
      ++v49[2];
      if (v35 >= 4) {
      LABEL_85:
        ++v49[3];
      }
    LABEL_69:
      ++v29;
    LABEL_70:
      if (++v41 == 10) {
        goto LABEL_55;
      }
    }
  }
LABEL_89:
  v50 = a1 + 72;
  GameRoutine_1256480((__int64*)(a1 + 72), (unsigned int*)f_.v134);
  GameRoutine_1256480((__int64*)(a1 + 208), (unsigned int*)f_.v135);
  GameRoutine_1256480((__int64*)(a1 + 344), (unsigned int*)f_.v136);
  GameRoutine_1256480((__int64*)(a1 + 480), (unsigned int*)f_.v137);
  GameRoutine_1256480((__int64*)(a1 + 616), (unsigned int*)f_.v138);
  GameRoutine_1256480((__int64*)(a1 + 752), (unsigned int*)f_.v139);
  GameRoutine_1256480((__int64*)(a1 + 888), (unsigned int*)f_.v140);
  GameRoutine_1256480((__int64*)(a1 + 1024), (unsigned int*)f_.v141);
  GameRoutine_1256480((__int64*)(a1 + 1160), (unsigned int*)f_.v142);
  GameRoutine_1256480((__int64*)(a1 + 1296), (unsigned int*)f_.v143);
  v51 = *(unsigned int*)(a1 + 24);
  if ((_DWORD)v51 != 0) {
    v52 = 0;
    for (i = 0; i < v51; ++i) {
      v55 = (__int64*)(*(_QWORD*)(a1 + 16) + v52);
      v56 = *v55;
      if (*v55 == 0) {
        goto LABEL_94;
      }
      v57 = 2;
      f_.v132 = (__int64*)(*(_QWORD*)(a1 + 16) + v52);
      v58 = (__int64*)(v50 + 136LL * *((unsigned __int8*)v55 + 8));
      v59 = *(unsigned __int8**)(v56 + 24);
      v60 = *(unsigned __int16*)(v56 + 288);
      v61 = *(unsigned __int8*)(v56 + 280);
      v62 = *v59;
      v63 = v60 == 0;
      v64 = v60 != 0;
      if (!v63) {
        v57 = 3;
      }
      if (v62 == 1) {
        v64 = v57;
      }
      if (v61 <= 1) {
        v65 = v64;
      }
      else {
        v65 = v64 | 4;
      }
      v67 = (__int64**)v58[1];
      v66 = v58[2];
      if ((unsigned __int64)v67 >= v66) {
        v68 = *v58;
        v69 = (signed __int64)v67 - *v58;
        v70 = (v69 >> 3) + 1;
        if (v70 >> 61 != 0) {
          goto LABEL_187;
        }
        v71 = v66 - v68;
        if (v71 >> 2 > v70) {
          v70 = v71 >> 2;
        }
        if ((unsigned __int64)v71 >= 0x7FFFFFFFFFFFFFF8LL) {
          v72 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v72 = v70;
        }
        if (v72 != 0) {
          if (v72 >> 61 != 0) {
            goto LABEL_188;
          }
          v73 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v72, 16, 0);
          v55 = f_.v132;
        }
        else {
          v73 = 0;
        }
        v74 = v73 + 8 * v72;
        v75 = v73 + v69 - 8 * (v69 >> 3);
        *(_QWORD*)(v73 + v69) = v55;
        v76 = v73 + v69 + 8;
        GameRoutine_1a0b950(v75, v68, v69);
        *v58 = v75;
        v58[1] = v76;
        v58[2] = v74;
        if (v68 != 0) {
          v77 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v77 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v68);
        }
        v55 = f_.v132;
        v58[1] = v76;
        if ((v65 & 1) == 0) {
        LABEL_105:
          if ((v65 & 2) == 0) {
            goto LABEL_106;
          }
          goto LABEL_141;
        }
      }
      else {
        *v67 = v55;
        v58[1] = (__int64)(v67 + 1);
        if ((v65 & 1) == 0) {
          goto LABEL_105;
        }
      }
      v79 = (__int64**)v58[4];
      v78 = v58[5];
      if ((unsigned __int64)v79 >= v78) {
        v81 = v58[3];
        v82 = (char*)v79 - v81;
        v83 = ((__int64)v79 - v81) >> 3;
        v84 = v83 + 1;
        if ((unsigned __int64)(v83 + 1) >> 61 != 0) {
          goto LABEL_187;
        }
        v85 = v78 - v81;
        if (v85 >> 2 > v84) {
          v84 = v85 >> 2;
        }
        if ((unsigned __int64)v85 >= 0x7FFFFFFFFFFFFFF8LL) {
          v86 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v86 = v84;
        }
        if (v86 != 0) {
          if (v86 >> 61 != 0) {
            goto LABEL_188;
          }
          v87 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v86, 16, 0);
          v55 = f_.v132;
        }
        else {
          v87 = 0;
        }
        v88 = v87 + 8 * v86;
        v89 = (unsigned __int64)v79 - v81;
        v90 = (__int64)&v82[v87 + -8 * v83];
        *(_QWORD*)&v82[v87] = v55;
        v80 = (__int64)&v82[v87 + 8];
        GameRoutine_1a0b950(v90, v81, v89);
        v58[3] = v90;
        v58[4] = v80;
        v58[5] = v88;
        if (v81 != 0) {
          v91 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v91 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v81);
        }
        v55 = f_.v132;
      }
      else {
        *v79 = v55;
        v80 = (__int64)(v79 + 1);
      }
      v58[4] = v80;
      if ((v65 & 2) == 0) {
      LABEL_106:
        if (v65 >= 4) {
          goto LABEL_159;
        }
        goto LABEL_93;
      }
    LABEL_141:
      v93 = (__int64**)v58[7];
      v92 = v58[8];
      if ((unsigned __int64)v93 >= v92) {
        v95 = v58[6];
        v96 = (char*)v93 - v95;
        v97 = ((__int64)v93 - v95) >> 3;
        v98 = v97 + 1;
        if ((unsigned __int64)(v97 + 1) >> 61 != 0) {
          goto LABEL_187;
        }
        v99 = v92 - v95;
        if (v99 >> 2 > v98) {
          v98 = v99 >> 2;
        }
        if ((unsigned __int64)v99 >= 0x7FFFFFFFFFFFFFF8LL) {
          v100 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v100 = v98;
        }
        if (v100 != 0) {
          if (v100 >> 61 != 0) {
            goto LABEL_188;
          }
          v101 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v100, 16, 0);
          v55 = f_.v132;
        }
        else {
          v101 = 0;
        }
        v102 = v101 + 8 * v100;
        v103 = (unsigned __int64)v93 - v95;
        v104 = (__int64)&v96[v101 + -8 * v97];
        *(_QWORD*)&v96[v101] = v55;
        v94 = (__int64)&v96[v101 + 8];
        GameRoutine_1a0b950(v104, v95, v103);
        v58[6] = v104;
        v58[7] = v94;
        v58[8] = v102;
        if (v95 != 0) {
          v105 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v105 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v105, v95);
        }
        v55 = f_.v132;
      }
      else {
        *v93 = v55;
        v94 = (__int64)(v93 + 1);
      }
      v58[7] = v94;
      if (v65 >= 4) {
      LABEL_159:
        v107 = (__int64**)v58[10];
        v106 = v58[11];
        if ((unsigned __int64)v107 < v106) {
          *v107 = v55;
          v54 = (__int64)(v107 + 1);
        }
        else {
          v108 = v58[9];
          v109 = (char*)v107 - v108;
          v110 = ((__int64)v107 - v108) >> 3;
          v111 = v110 + 1;
          if ((unsigned __int64)(v110 + 1) >> 61 != 0) {
          LABEL_187:
            GameRoutine_1265540();
          }
          v112 = v106 - v108;
          if (v112 >> 2 > v111) {
            v111 = v112 >> 2;
          }
          if ((unsigned __int64)v112 >= 0x7FFFFFFFFFFFFFF8LL) {
            v113 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v113 = v111;
          }
          if (v113 != 0) {
            if (v113 >> 61 != 0) {
            LABEL_188:
              GameRoutine_60a210();
            }
            v114 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v113, 16, 0);
            v55 = f_.v132;
          }
          else {
            v114 = 0;
          }
          v115 = v114 + 8 * v113;
          v116 = (unsigned __int64)v107 - v108;
          v117 = (__int64)&v109[v114 + -8 * v110];
          *(_QWORD*)&v109[v114] = v55;
          v54 = (__int64)&v109[v114 + 8];
          GameRoutine_1a0b950(v117, v108, v116);
          v58[9] = v117;
          v58[10] = v54;
          v58[11] = v115;
          if (v108 != 0) {
            v118 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v118 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v118, v108);
          }
        }
        v58[10] = v54;
      }
    LABEL_93:
      v51 = *(unsigned int*)(a1 + 24);
      v50 = a1 + 72;
    LABEL_94:
      v52 += 16;
    }
  }
  v119 = 0;
  v120 = GameData_212c060;
  do {
    v123 = (__int64*)(v50 + 136 * v119);
    LODWORD(v144[0]) = v119;
    v124 = *v123;
    v125 = (__int64*)v123[1];
    v126 = (__int64)v125 - *v123;
    v127 = v126 >> 3;
    if (v126 >> 3 < 129) {
      v130 = 0;
    LABEL_185:
      GameRoutine_1268b60(v124, v125, (int*)v144, v127, nullptr, v130);
    }
    else {
      v128 = v126 >> 3;
      while (1) {
        v129 = (__int64*)GameRoutine_1a09d20(8 * v128, v120);
        if (v129 != nullptr) {
          break;
        }
        v130 = v128 >> 1;
        v131 = v128 > 1;
        v128 >>= 1;
        if (!v131) {
          goto LABEL_185;
        }
      }
      v121 = (__int64)v129;
      GameRoutine_1268b60(v124, v125, (int*)v144, v127, v129, v128);
      v122 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v122 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v122, v121);
    }
    ++v119;
  } while (v119 != 10);
}

void game_1368580(float* a1, __int64** a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float* i;
  unsigned __int8 explicit;
  __int64* v7;
  __int64* v8;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v27;
  float v28;
  __int16 v29;
  struct {
    __int64 v30[2];
    __int64 v31;
    __int64 v32;
    __int64 v33;
    char gap40_[4];
    float v34;
    char v35[8];
  } f_;
  float v36;

  if (a1 != nullptr) {
    v2 = *((_QWORD*)a1 + 5);
    for (i = a1 + 8; (float*)v2 != i; v2 = *(_QWORD*)(v2 + 8)) {
      game_1368580((float*)(v2 - 8), a2);
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                    memory_order_acquire);
    v7 = GameData_2130ea0;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_2130ea8) != 0) {
      *v7 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release((__int64)GameData_2130ea8);
    }
    v8 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))((__int64)a1);
    if (v8 == v7) {
      goto LABEL_43;
    }
    do {
      v8 = (__int64*)*v8;
    } while (v8 != v7 & v8 != nullptr);
    if (v8 != nullptr) {
    LABEL_43:
      v10 = GameRoutine_59d3b0(a1);
      if (v10 != 0) {
        v11 = *a2;
        v12 = a2[1];
        if (*a2 != v12) {
          v13 = v10;
          v14 = fw_memory_g_heap_manager_ptr;
          while (1) {
            if ((*(_BYTE*)v11 & 1) != 0) {
              fw_text_String_CopyTerminated(f_.v30, v11[2], v11[1]);
            }
            else {
              v15 = *v11;
              v16 = v11[2];
              f_.v30[1] = v11[1];
              f_.v31 = v16;
              f_.v30[0] = v15;
            }
            v17 = v11[4];
            f_.v32 = v11[3];
            f_.v33 = v17;
            v18 = f_.v32;
            if ((f_.v30[0] & 1) != 0 && f_.v31 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
                v19 = 128;
              }
              else {
                v19 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19, f_.v31);
            }
            if (v13 == v18) {
              break;
            }
            v11 += 5;
            if (v11 == v12) {
              v11 = v12;
              break;
            }
          }
          v12 = a2[1];
        }
        if (v11 != v12) {
          v20 = v11[4];
          if (v20 != 0) {
            TextBox_59d3c0((__int64)a1, v20);
            v21 = ui_text_190a0c0(&v36, (__int64)f_.v35, &f_.v34, a1,
                                  *((_QWORD*)a1 + 27));
            v22 = a1[62];
            v23 = a1[63];
            f_.v30[0] = __PAIR64__(LODWORD(v24), LODWORD(v21));
            v25 = vabds_f32(v24, v23);
            if (vabds_f32(v21, v22) > 0x1.0000000000000p-23f |
                v25 > 0x1.0000000000000p-23f) {
              TextBox_59d550((__int64)a1, (__int64)f_.v30);
              v27 = f_.v34;
              v28 = a1[65];
              v29 = *(_WORD*)&a1[69] & 4;
              if (v28 != f_.v34) {
                v29 = 4;
              }
              *((_WORD*)a1 + 138) = v29 | *(_WORD*)&a1[69] & 0xFFFB;
              if (v28 != v27) {
                a1[65] = v27;
              }
            }
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
