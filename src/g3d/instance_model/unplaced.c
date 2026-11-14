#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_5d610(_QWORD* result, _QWORD*);
_QWORD* gxc_GpuMemory_Destroy_GpuMemory(_QWORD* result);
_QWORD* gxc_GpuMemory_GpuMemory_5d4d0(_QWORD* result);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_5eb740(int*);
__int64 GameRoutine_5ec0b0(__int64, __int64);
__int64 GameRoutine_5ec100(__int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
bool GameRoutine_5ebbe0(__int64*, __int64*, __int64, unsigned __int64);
bool GameRoutine_5ecce0(__int64, __int64, __int64, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212c2a0;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_211d528[])();
extern __int64 (*g3d_InstanceModel_EntryMemory_vtable[])();
extern __int64 (*g3d_InstanceModel_vtable[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
void AnimLayerCtrlModule_ce4320(__int64*, unsigned __int64, char);
void InstanceModel_19859a0(__int64, int, unsigned int);
void __attribute__((noreturn)) GameRoutine_1988010();
void __attribute__((noreturn)) GameRoutine_1988030();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void llvm_libcxx_21_libcxx_include___vector_a67360(__int64*, unsigned __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* g3d_instance_model_19850c0(__int64* a1, __int64 a2, unsigned int* a3);

_QWORD* g3d_instance_model_19850c0(__int64* a1, __int64 a2, unsigned int* a3)
{
  __int64* v3;
  char v5;
  char v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64 v11;
  char v12;
  _QWORD* result;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  _QWORD* v21;
  char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64* v42;
  char* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64* v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  int v84;
  __int64 v85;
  unsigned __int64 v86;
  int v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  int v91;
  __int64 v92;
  __int64* v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  int v99;
  char v100;
  char v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  struct {
    __int64 v109[2];
    char v110;
    char v111;
    char gap74_[6];
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    __int64 v138;
    __int64 v139;
    __int64 v140;
    __int64 v141;
    __int64 v142;
    __int64 v143;
    __int64 v144;
    __int64 v145;
    __int64 v146;
  } v109_;
  __int64 v147;
  unsigned __int64 v148;

  a1[2] = 0;
  a1[3] = 0;
  *((_DWORD*)a1 + 9) = 0;
  v3 = a1;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  *((_BYTE*)a1 + 32) = 1;
  a1[12] = 0;
  a1[13] = 0;
  *a1 = (__int64)g3d_InstanceModel_vtable;
  a1[1] = 0;
  v5 = *((_BYTE*)a3 + 4);
  if ((int)*a3 <= 3) {
    v5 = 0;
  }
  *((_BYTE*)a1 + 112) = v5;
  *((_BYTE*)a1 + 113) = *((_BYTE*)a3 + 5);
  v6 = *((_BYTE*)a3 + 6);
  *(_WORD*)((char*)a1 + 115) = 0;
  a1[16] = a2;
  *((_BYTE*)a1 + 114) = v6;
  a1[17] = *a3;
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  v9 = *a3;
  v3[20] = 0;
  v10 = v3 + 20;
  *(_QWORD*)(v8 + 16) = 0;
  *(_QWORD*)v8 = GameData_211d528;
  *(_QWORD*)(v8 + 8) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  v3[19] = v8;
  v3[21] = 0;
  v3[22] = 0;
  *((_DWORD*)v3 + 52) = 0;
  v3[27] = 0;
  *((_DWORD*)v3 + 60) = 0;
  v3[28] = 0;
  v3[29] = 0;
  v3[31] = 0;
  v3[32] = 0;
  v3[33] = 0;
  *((_DWORD*)v3 + 68) = 0;
  v3[35] = 0;
  v3[36] = 0;
  v3[37] = 0;
  *((_DWORD*)v3 + 76) = 0;
  v3[39] = 0;
  v3[40] = 0;
  v3[41] = 0;
  *((_DWORD*)v3 + 84) = 0;
  *((_DWORD*)v3 + 86) = 0;
  v3[50] = 0;
  v3[51] = 0;
  v3[48] = 0;
  v3[49] = 0;
  v3[46] = 0;
  v3[47] = 0;
  v3[44] = 0;
  v3[45] = 0;
  *((_BYTE*)v3 + 418) = 1;
  v3[58] = 0;
  v3[59] = 0;
  v3[56] = 0;
  v3[57] = 0;
  v3[54] = 0;
  v3[55] = 0;
  v3[53] = 0;
  *(_DWORD*)(v8 + 32) = v9;
  v11 = v3[16];
  *(_QWORD*)(v8 + 24) = g3d_InstanceModel_EntryMemory_vtable;
  v12 = *((_BYTE*)v3 + 114);
  v3[18] = v8 + 24;
  v3[24] = v11;
  LODWORD(v11) = *((_DWORD*)v3 + 34);
  *((_BYTE*)v3 + 204) = v12;
  *((_WORD*)v3 + 208) = 257;
  *((_DWORD*)v3 + 50) = v11;
  result = gxc_GpuMemory_GpuMemory_5d4d0(v3 + 60);
  v14 = v3[16];
  v15 = *((int*)v3 + 34);
  v16 = *(unsigned __int16*)(v14 + 164);
  v108 = game_g_frame_clock;
  v105 = *(_QWORD*)(v14 + 136);
  v3[13] |= 2uLL;
  if ((_DWORD)v15 != 0) {
    v17 = v3[10];
    v18 = (v3[11] - v17) >> 5;
    if (v15 <= v18) {
      v19 = v15;
      if (v15 < v18) {
        v19 = v15;
        v3[11] = v17 + 32 * v15;
      }
    }
    else {
      llvm_libcxx_21_libcxx_include___vector_a67360(v3 + 10, v15 - v18);
      v19 = *((int*)v3 + 34);
    }
    v20 = v3[53];
    v21 = (_QWORD*)v3[54];
    v103 = (__int64)(v3 + 27);
    v22 = (char*)v21 - v20;
    v23 = ((__int64)v21 - v20) >> 6;
    v24 = v19 - v23;
    if (v19 <= v23) {
      if (v19 < v23) {
        v3[54] = v20 + (v19 << 6);
      }
    }
    else {
      v25 = v3[55];
      if (v24 <= (v25 - (__int64)v21) >> 6) {
        v45 = v24 << 6;
        v46 = (__int64*)GameData_212c2a0;
        v47 = &v21[8 * v24];
        do {
          v48 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v46);
          v45 -= 64LL;
          v21[5] = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v46);
          v21[7] = v48;
          v49 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v46 + 8);
          v21[1] = *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v46);
          v21[3] = v49;
          v50 = *v46;
          v21[2] = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v46);
          *v21 = v50;
          v51 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v46);
          v21[6] =
              *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v46);
          v21[4] = v51;
          v21 += 8;
        } while (v45 != 0);
        v19 = *((int*)v3 + 34);
        v3[54] = (__int64)v47;
      }
      else {
        if (v19 >> 58 != 0) {
          GameRoutine_1988010();
        }
        v26 = v25 - v20;
        v27 = v26 >> 5;
        if (v26 >> 5 <= v19) {
          v27 = v19;
        }
        if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFC0LL) {
          v28 = 0x3FFFFFFFFFFFFFFLL;
        }
        else {
          v28 = v27;
        }
        if (v28 >> 58 != 0) {
          goto LABEL_84;
        }
        v29 = fw_memory_HeapManager_Allocate(*v7, v28 << 6, 16, 0);
        v30 = &v22[v29];
        v31 = v24 << 6;
        v32 = GameData_212c2a0;
        v33 = (unsigned __int64)&v22[64 * v24 + v29];
        v34 = &v22[v29];
        do {
          v35 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v32 + 8);
          v31 -= 64LL;
          *((_QWORD*)v34 + 4) =
              *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v32);
          *((_QWORD*)v34 + 5) = v35;
          v36 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v32);
          *((_QWORD*)v34 + 6) =
              *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v32);
          *((_QWORD*)v34 + 7) = v36;
          v37 = v32[1];
          *(_QWORD*)v34 = *v32;
          *((_QWORD*)v34 + 1) = v37;
          v38 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v32 + 8);
          *((_QWORD*)v34 + 2) =
              *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v32);
          *((_QWORD*)v34 + 3) = v38;
          v34 += 64;
        } while (v31 != 0);
        v39 = v3[53];
        v40 = v29 + (v28 << 6);
        v41 = (unsigned __int64)v21 - v39;
        v42 = v3;
        v43 = &v30[-v41];
        GameRoutine_1a0b950((__int64)&v30[-v41], v39, v41);
        v42[53] = (__int64)v43;
        v42[54] = v33;
        v3 = v42;
        v42[55] = v40;
        if (v39 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*v7 + 200) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(*v7 + v44, v39);
        }
        v19 = *((int*)v42 + 34);
      }
    }
    v53 = v3[56];
    v52 = v3[57];
    v54 = v52 - v53;
    v55 = 0xAAAAAAAAAAAAAAABLL * ((v52 - v53) >> 4);
    v56 = v19 - v55;
    if (v19 <= v55) {
      if (v19 < v55) {
        v3[57] = v53 + 48LL * (int)v19;
      }
      goto LABEL_50;
    }
    v57 = v3[58];
    if (0xAAAAAAAAAAAAAAABLL * ((v57 - v52) >> 4) >= v56) {
      v71 = v52 + 48 * v56;
      do {
        *(_QWORD*)(v52 + 16) = 0;
        *(_QWORD*)(v52 + 24) = 0;
        *(_QWORD*)v52 = 0;
        *(_QWORD*)(v52 + 8) = 0;
        *(_OWORD*)(v52 + 32) = GameData_1a837f0;
        v52 += 48;
      } while (v52 != v71);
      v19 = *((int*)v3 + 34);
      v3[57] = v71;
    LABEL_50:
      v72 = (int)v15 * (__int64)(int)v16;
      AnimLayerCtrlModule_ce4320(v10, v19, 1);
      if ((sizeof((v72) * (0x70u)) > 4
               ? ((unsigned __int128)(unsigned long long)(v72) *
                  (unsigned long long)(0x70u)) >>
                         64 ==
                     0
               : ((unsigned long long)(unsigned int)(v72) *
                  (unsigned int)(0x70u)) >>
                         32 ==
                     0)) {
        v73 = 112 * v72;
      }
      else {
        v73 = -1;
      }
      v74 = fw_memory_HeapManager_Allocate(*v7, v73, 16, 0);
      v75 = v74;
      if ((_DWORD)v16 != 0) {
        GameRoutine_1a0ba50(v74, 0,
                            112 * ((((112 * v72 - 112) >> 4) *
                                    (unsigned __int128)0x2492492492492493uLL) >>
                                   64) +
                                112);
      }
      v76 = v3[59];
      v3[59] = v75;
      if (v76 != 0) {
        v77 = 128;
        if (*(_QWORD*)(*v7 + 200) == 0) {
          v77 = 56;
        }
        nn_mem_StandardAllocator_Free(*v7 + v77, v76);
        v75 = v3[59];
      }
      v3[44] = v75;
      v3[45] = v72;
      if ((_DWORD)v16 != 0) {
        v78 = 0;
        v79 = 0;
        v80 = 0;
        do {
          v81 = *(_QWORD*)(v14 + 176);
          v82 = GameRoutine_5ec0b0(v81 + v78, v108 + 568);
          v79 = ((v79 + v82 - 1) & -v82) +
                GameRoutine_5ec100((__int64*)(v81 + v78), v108 + 568);
          v83 = GameRoutine_5ec0b0(v81 + v78, v108 + 568);
          v78 += 112;
          if (v80 <= v83) {
            v80 = v83;
          }
        } while (112LL * (unsigned int)v16 != v78);
        if (v79 != 0) {
          (*(__attribute__((swiftcall)) void (**)(
              PSEUDO_X8, _QWORD, unsigned __int64, unsigned __int64))(
              **(_QWORD**)(game_g_frame_clock + 312) + 48LL))(
              (void*)(v109_.v109), *(_QWORD*)(game_g_frame_clock + 312),
              ((v79 + v80 - 1) & -(__int64)v80) * *((int*)v3 + 34), v80);
          GameRoutine_5d610(v10 + 40, v109_.v109);
          gxc_GpuMemory_Destroy_GpuMemory(v109_.v109);
          v84 = *((_DWORD*)v3 + 34);
          if (v84 >= 1) {
            v85 = 0;
            v86 = 0;
            v104 = v16;
            v106 = v3[62];
            v107 = *game_g_frame_clock_ptr[0];
            do {
              if (v84 >= 1) {
                v87 = 0;
                v88 = *(_QWORD*)(v105 + 40) + 96 * v85;
                do {
                  v109_.v110 = 0;
                  v109_.v116 = 8;
                  v109_.v117 = 0;
                  v109_.v118 = -1;
                  v109_.v119 = 0;
                  v109_.v120 = 8;
                  v109_.v121 = 0;
                  v109_.v122 = -1;
                  v109_.v123 = 0;
                  v109_.v124 = 8;
                  v109_.v125 = 0;
                  v109_.v126 = -1;
                  v109_.v127 = 0;
                  v109_.v128 = 8;
                  v109_.v129 = 0;
                  v109_.v130 = -1;
                  v109_.v131 = 0;
                  v109_.v132 = 8;
                  v109_.v133 = 0;
                  v109_.v113 = 0;
                  v109_.v114 = 0;
                  v109_.v134 = -1;
                  v109_.v135 = 0;
                  v109_.v136 = 8;
                  v109_.v137 = 0;
                  v109_.v138 = -1;
                  v109_.v139 = 0;
                  v109_.v140 = 8;
                  v109_.v141 = 0;
                  v109_.v142 = -1;
                  v109_.v143 = 0;
                  v109_.v144 = 8;
                  v109_.v145 = 0;
                  v109_.v146 = -1;
                  v109_.v115 = 0;
                  v109_.v109[0] = v88;
                  v109_.v109[1] = 0x100000002LL;
                  v109_.v111 = 1;
                  v109_.v112 = 192;
                  GameRoutine_5eb740((int*)v109_.v109);
                  v89 = v3[44];
                  v90 = (v109_.v113 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                  v91 = *((_DWORD*)v3 + 34);
                  v147 = 16;
                  v148 = v90;
                  v92 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 32);
                  if (v92 == 0) {
                    GameRoutine_60a310();
                  }
                  v93 = v3;
                  v94 = (__int64*)(v89 + 112LL * (v87 + (int)v85 * v91));
                  v95 = (*(__int64 (**)(__int64, unsigned __int64*, __int64*))(
                      *(_QWORD*)v92 + 48LL))(v92, &v148, &v147);
                  GameRoutine_5ebbe0(v94, v109_.v109, v95, v90);
                  v96 = GameRoutine_5ec0b0((__int64)v94, v108 + 568);
                  v97 = (v86 + v96 - 1) & -v96;
                  v98 = GameRoutine_5ec100(v94, v108 + 568);
                  GameRoutine_5ecce0((__int64)v94, v108 + 568, v107 + 12880,
                                     v97 + v106, v98);
                  v84 = *((_DWORD*)v93 + 34);
                  v86 = v97 + v98;
                  ++v87;
                  v3 = v93;
                } while (v87 < v84);
                v16 = v104;
              }
              ++v85;
            } while (v85 != v16);
          }
        }
      }
      if (*((_BYTE*)v3 + 112) == 1) {
        v99 = *((unsigned __int8*)v3 + 113);
        InstanceModel_19859a0(v103, v16, *((_DWORD*)v3 + 34));
        if (*((_BYTE*)v3 + 114) == 1) {
          InstanceModel_19859a0((__int64)(v10 + 15), v16, *((_DWORD*)v3 + 34));
        }
        if (v99 != 0) {
          InstanceModel_19859a0((__int64)(v3 + 31), v16, *((_DWORD*)v3 + 34));
          if (*((_BYTE*)v3 + 114) == 1) {
            InstanceModel_19859a0((__int64)(v3 + 39), v16, *((_DWORD*)v3 + 34));
          }
        }
        v100 = *((_BYTE*)v3 + 112);
      }
      else {
        v100 = 0;
      }
      v101 = v100 & ~*((_BYTE*)v3 + 115) & 1;
      v102 = *v3;
      *((_BYTE*)v3 + 140) = v101;
      result = (_QWORD*)(*(__int64 (**)(__int64*, const char*))(v102 + 40))(
          v3, "co_instance");
      *((_BYTE*)v3 + 417) = 1;
      return result;
    }
    if (v19 > 0x555555555555555LL) {
      GameRoutine_1988030();
    }
    v58 = 0xAAAAAAAAAAAAAAABLL * ((v57 - v53) >> 4);
    v59 = 2 * v58;
    if (2 * v58 <= v19) {
      v59 = v19;
    }
    if (v58 >= 0x2AAAAAAAAAAAAAALL) {
      v60 = 0x555555555555555LL;
    }
    else {
      v60 = v59;
    }
    if (v60 <= 0x555555555555555LL) {
      v61 = fw_memory_HeapManager_Allocate(*v7, 48 * v60, 16, 0);
      v62 = v61 + v54;
      v63 = v61 + v54 + 48 * v56;
      v64 = v61 + v54;
      do {
        *(_QWORD*)(v64 + 16) = 0;
        *(_QWORD*)(v64 + 24) = 0;
        *(_QWORD*)v64 = 0;
        *(_QWORD*)(v64 + 8) = 0;
        *(_OWORD*)(v64 + 32) = GameData_1a837f0;
        v64 += 48;
      } while (v64 != v63);
      v65 = v61 + 48 * v60;
      v66 = v3[56];
      v67 = v3;
      v68 = v3[57] - v66;
      v69 = v62 - v68;
      GameRoutine_1a0b950(v62 - v68, v66, v68);
      v67[56] = v69;
      v67[57] = v63;
      v3 = v67;
      v67[58] = v65;
      if (v66 != 0) {
        v70 = 128;
        if (*(_QWORD*)(*v7 + 200) == 0) {
          v70 = 56;
        }
        nn_mem_StandardAllocator_Free(*v7 + v70, v66);
      }
      v19 = *((int*)v67 + 34);
      goto LABEL_50;
    }
  LABEL_84:
    GameRoutine_60a210();
  }
  return result;
}

#pragma GCC visibility pop
