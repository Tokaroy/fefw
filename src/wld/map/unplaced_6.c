#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
Layout_c1d100(PSEUDO_X8, __int64, unsigned __int64, __int64, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 wld_map_c1ea10(__int64 a1, unsigned __int64 a2, __int64 a3,
                       unsigned __int64 a4, __int64 a5, unsigned __int64 a6,
                       __int64 a7, unsigned __int64 a8, __int64 a9, char a10);

__int64 wld_map_c1ea10(__int64 a1, unsigned __int64 a2, __int64 a3,
                       unsigned __int64 a4, __int64 a5, unsigned __int64 a6,
                       __int64 a7, unsigned __int64 a8, __int64 a9, char a10)
{
  char* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  char* v41;
  unsigned __int64 v42;
  __int64* v43;
  __int64 v44;
  unsigned __int64 v45;
  char* v46;
  unsigned __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  unsigned __int64 v62;
  char* v63;
  char v64;
  __int64 v65;
  char* v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  __int64 v71;
  char* v72;
  unsigned __int64 v73;
  __int64* v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64* v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  unsigned __int64 v85;
  char* v86;
  unsigned __int64 v87;
  char* v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  char* v92;
  unsigned __int64 v93;
  __int64* v94;
  __int64 v95;
  unsigned __int64 v96;
  char* v97;
  unsigned __int64 v98;
  _QWORD* v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  char* v113;
  __int64 v114;
  char v115;
  __int64 v116;
  __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  struct {
    __int64 v122;
    __int64 v123;
  } v122_;
  struct {
    __int64 v124;
    __int64 v125;
  } v124_;
  struct {
    __int64 v126;
    unsigned __int64 v127;
    char* v128;
  } v126_;
  struct {
    __int64 v129;
    unsigned __int64 v130;
    char* v131;
  } v129_;
  struct {
    __int64 v132;
    unsigned __int64 v133;
    char* v134;
  } v132_;
  struct {
    __int64 v135;
    unsigned __int64 v136;
    char* v137;
  } v135_;
  struct {
    _QWORD v138[2];
    __int64 v139;
  } v138_;
  struct {
    __int64 v140;
    unsigned __int64 v141;
    char* v142;
  } v140_;
  struct {
    __int64 v143;
    unsigned __int64 v144;
    char* v145;
  } v143_;

  LOBYTE(v138_.v138[0]) = 20;
  strcpy((char*)v138_.v138 + 1, "Contents:/");
  if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_232;
  }
  if (a2 >= 0x17) {
    if ((a2 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (a2 | 7) + 1;
    }
    v17 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v18, 16, 0);
    v135_.v136 = a2;
    v135_.v137 = v17;
    v135_.v135 = v18 | 1;
    goto LABEL_9;
  }
  LOBYTE(v135_.v135) = 2 * a2;
  v17 = (char*)&v135_.v135 + 1;
  if (a2 != 0) {
  LABEL_9:
    GameRoutine_1a0b940((__int64)v17, a1, a2);
  }
  v17[a2] = 0;
  if ((v135_.v135 & 1) != 0) {
    v19 = v135_.v137;
  }
  else {
    v19 = (char*)&v135_.v135 + 1;
  }
  if ((v135_.v135 & 1) != 0) {
    v20 = v135_.v136;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v135_.v135 >> 1;
  }
  v21 = (__int64*)GameRoutine_1a09ce0((__int64)v138_.v138, v19, v20);
  v23 = v21[1];
  v22 = v21[2];
  v140_.v140 = *v21;
  v140_.v141 = v23;
  v140_.v142 = (const char*)v22;
  v21[1] = 0;
  v21[2] = 0;
  *v21 = 0;
  v24 = (__int64*)GameRoutine_1a09ce0((__int64)&v140_.v140, "/Lighting", 9u);
  v25 = *v24;
  v26 = v24[1];
  *v24 = 0;
  v24[1] = 0;
  v143_.v143 = v25;
  v143_.v144 = v26;
  v27 = v24[2];
  v24[2] = 0;
  v143_.v145 = (char*)v27;
  if ((v140_.v140 & 1) != 0 && v140_.v142 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  (__int64)v140_.v142);
  }
  if ((v135_.v135 & 1) != 0 && v135_.v137 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  (__int64)v135_.v137);
  }
  if ((v138_.v138[0] & 1) != 0 && v138_.v139 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  v138_.v139);
  }
  v118 = a5;
  v119 = a6;
  v120 = a7;
  v31 = a7;
  v32 = a8;
  Layout_c1d100((void*)(&v140_.v140), a5, a6, v31, a8);
  if ((v143_.v143 & 1) != 0) {
    v33 = v143_.v144;
  }
  else {
    v33 = (unsigned __int64)(unsigned __int8)v143_.v143 >> 1;
  }
  if ((v143_.v143 & 1) != 0) {
    v34 = v143_.v145;
  }
  else {
    v34 = (char*)&v143_.v143 + 1;
  }
  v35 = v33 + 1;
  if (v33 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_232:
    String_60a1d0();
  }
  if (v35 >= 0x17) {
    if ((v35 | 7) == 0x17) {
      v37 = 26;
    }
    else {
      v37 = (v35 | 7) + 1;
    }
    v36 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v37,
                                                16, 0);
    v132_.v133 = v33 + 1;
    v132_.v134 = v36;
    v132_.v132 = v37 | 1;
    goto LABEL_45;
  }
  v132_.v133 = 0;
  v132_.v134 = nullptr;
  v132_.v132 = (unsigned __int8)(2 * v35);
  v36 = (char*)&v132_.v132 + 1;
  if (v33 != 0) {
  LABEL_45:
    GameRoutine_1a0b940((__int64)v36, (__int64)v34, v33);
  }
  *(_WORD*)&v36[v33] = 47;
  if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_232;
  }
  v38 = v32;
  if (a4 >= 0x17) {
    if ((a4 | 7) == 0x17) {
      v40 = 26;
    }
    else {
      v40 = (a4 | 7) + 1;
    }
    v39 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v40, 16, 0);
    v129_.v130 = a4;
    v129_.v131 = v39;
    v129_.v129 = v40 | 1;
    goto LABEL_54;
  }
  LOBYTE(v129_.v129) = 2 * a4;
  v39 = (char*)&v129_.v129 + 1;
  if (a4 != 0) {
  LABEL_54:
    GameRoutine_1a0b940((__int64)v39, a3, a4);
  }
  v39[a4] = 0;
  if ((v129_.v129 & 1) != 0) {
    v41 = v129_.v131;
  }
  else {
    v41 = (char*)&v129_.v129 + 1;
  }
  if ((v129_.v129 & 1) != 0) {
    v42 = v129_.v130;
  }
  else {
    v42 = (unsigned __int64)(unsigned __int8)v129_.v129 >> 1;
  }
  v43 = (__int64*)GameRoutine_1a09ce0((__int64)&v132_.v132, v41, v42);
  v45 = v43[1];
  v44 = v43[2];
  v135_.v135 = *v43;
  v135_.v136 = v45;
  v135_.v137 = (const char*)v44;
  v43[1] = 0;
  v43[2] = 0;
  *v43 = 0;
  if ((v140_.v140 & 1) != 0) {
    v46 = v140_.v142;
  }
  else {
    v46 = (char*)&v140_.v140 + 1;
  }
  if ((v140_.v140 & 1) != 0) {
    v47 = v140_.v141;
  }
  else {
    v47 = (unsigned __int64)(unsigned __int8)v140_.v140 >> 1;
  }
  v48 = (_QWORD*)GameRoutine_1a09ce0((__int64)&v135_.v135, v46, v47);
  v50 = v48[1];
  v49 = v48[2];
  v138_.v138[0] = *v48;
  v138_.v138[1] = v50;
  v138_.v139 = v49;
  v48[1] = 0;
  v48[2] = 0;
  *v48 = 0;
  v51 = (__int64*)GameRoutine_1a09ce0((__int64)v138_.v138, ".probe", 6u);
  v53 = v51[1];
  v52 = v51[2];
  v126_.v126 = *v51;
  v126_.v127 = v53;
  v126_.v128 = (char*)v52;
  v51[1] = 0;
  v51[2] = 0;
  *v51 = 0;
  if ((v138_.v138[0] & 1) != 0 && v138_.v139 != 0) {
    v54 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v54,
                                  v138_.v139);
  }
  if ((v135_.v135 & 1) != 0 && v135_.v137 != nullptr) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v55,
                                  (__int64)v135_.v137);
  }
  if ((v129_.v129 & 1) != 0 && v129_.v131 != nullptr) {
    v56 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v56,
                                  (__int64)v129_.v131);
  }
  if ((v132_.v132 & 1) != 0 && v132_.v134 != nullptr) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v57,
                                  (__int64)v132_.v134);
  }
  if ((v140_.v140 & 1) != 0 && v140_.v142 != nullptr) {
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v58,
                                  (__int64)v140_.v142);
  }
  if ((v143_.v143 & 1) != 0 && v143_.v145 != nullptr) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v59,
                                  (__int64)v143_.v145);
  }
  v60 = &v126_.v126;
  v61 = game_g_frame_clock_ptr[0];
  if ((v126_.v126 & 1) != 0) {
    v62 = v126_.v127;
  }
  else {
    v62 = (unsigned __int64)(unsigned __int8)v126_.v126 >> 1;
  }
  if ((v126_.v126 & 1) != 0) {
    v63 = v126_.v128;
  }
  else {
    v63 = (char*)&v126_.v126 + 1;
  }
  v64 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
      **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v63, v62, 255);
  if ((v64 & 1) == 0) {
    if ((a10 & 1) != 0) {
      LOBYTE(v60) = 0;
      if ((v126_.v126 & 1) == 0) {
        goto LABEL_122;
      }
    }
    else {
      LOBYTE(v60) = 1;
      *(_QWORD*)a9 = 0;
      *(_QWORD*)(a9 + 8) = 0;
      if ((v126_.v126 & 1) == 0) {
        goto LABEL_122;
      }
    }
    goto LABEL_118;
  }
  v65 = *v61;
  v124_.v124 = 0;
  v124_.v125 = 0;
  if ((v126_.v126 & 1) != 0) {
    v66 = v126_.v128;
  }
  else {
    v66 = (char*)&v126_.v126 + 1;
  }
  if ((v126_.v126 & 1) != 0) {
    v67 = v126_.v127;
  }
  else {
    v67 = (unsigned __int64)(unsigned __int8)v126_.v126 >> 1;
  }
  v68 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*, __int64))(
      **(_QWORD**)(v65 + 13432) + 16LL))(*(_QWORD*)(v65 + 13432), v66, v67,
                                         &v124_.v124, 255);
  if (v124_.v125 != 0) {
    std___1___shared_weak_count___release_weak(v124_.v125);
  }
  *(_QWORD*)a9 = v68;
  if ((v126_.v126 & 1) != 0) {
  LABEL_118:
    if (v126_.v128 != nullptr) {
      v69 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v69 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, (__int64)v126_.v128);
    }
  }
LABEL_122:
  if ((v64 & 1) == 0) {
    return (unsigned __int8)v60 & 1;
  }
  LOBYTE(v138_.v138[0]) = 20;
  strcpy((char*)v138_.v138 + 1, "Contents:/");
  if (a2 >= 0x17) {
    if ((a2 | 7) == 0x17) {
      v71 = 26;
    }
    else {
      v71 = (a2 | 7) + 1;
    }
    v70 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v71, 16, 0);
    v135_.v136 = a2;
    v135_.v137 = v70;
    v135_.v135 = v71 | 1;
    goto LABEL_130;
  }
  LOBYTE(v135_.v135) = 2 * a2;
  v70 = (char*)&v135_.v135 + 1;
  if (a2 != 0) {
  LABEL_130:
    GameRoutine_1a0b940((__int64)v70, a1, a2);
  }
  v70[a2] = 0;
  if ((v135_.v135 & 1) != 0) {
    v72 = v135_.v137;
  }
  else {
    v72 = (char*)&v135_.v135 + 1;
  }
  if ((v135_.v135 & 1) != 0) {
    v73 = v135_.v136;
  }
  else {
    v73 = (unsigned __int64)(unsigned __int8)v135_.v135 >> 1;
  }
  v74 = (__int64*)GameRoutine_1a09ce0((__int64)v138_.v138, v72, v73);
  v76 = v74[1];
  v75 = v74[2];
  v140_.v140 = *v74;
  v140_.v141 = v76;
  v140_.v142 = (const char*)v75;
  v74[1] = 0;
  v74[2] = 0;
  *v74 = 0;
  v77 = (__int64*)GameRoutine_1a09ce0((__int64)&v140_.v140, "/Lighting", 9u);
  v78 = *v77;
  v79 = v77[1];
  *v77 = 0;
  v77[1] = 0;
  v143_.v143 = v78;
  v143_.v144 = v79;
  v80 = v77[2];
  v77[2] = 0;
  v143_.v145 = (char*)v80;
  if ((v140_.v140 & 1) != 0 && v140_.v142 != nullptr) {
    v81 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v81,
                                  (__int64)v140_.v142);
  }
  if ((v135_.v135 & 1) != 0 && v135_.v137 != nullptr) {
    v82 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v82,
                                  (__int64)v135_.v137);
  }
  v83 = v61;
  if ((v138_.v138[0] & 1) != 0 && v138_.v139 != 0) {
    v84 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v84,
                                  v138_.v139);
  }
  Layout_c1d100((void*)(&v140_.v140), v118, v119, v120, v38);
  if ((v143_.v143 & 1) != 0) {
    v85 = v143_.v144;
  }
  else {
    v85 = (unsigned __int64)(unsigned __int8)v143_.v143 >> 1;
  }
  if ((v143_.v143 & 1) != 0) {
    v86 = v143_.v145;
  }
  else {
    v86 = (char*)&v143_.v143 + 1;
  }
  v87 = v85 + 1;
  if (v85 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_232;
  }
  if (v87 >= 0x17) {
    if ((v87 | 7) == 0x17) {
      v89 = 26;
    }
    else {
      v89 = (v87 | 7) + 1;
    }
    v88 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v89,
                                                16, 0);
    v132_.v133 = v85 + 1;
    v132_.v134 = v88;
    v132_.v132 = v89 | 1;
    goto LABEL_166;
  }
  v132_.v133 = 0;
  v132_.v134 = nullptr;
  v132_.v132 = (unsigned __int8)(2 * v87);
  v88 = (char*)&v132_.v132 + 1;
  if (v85 != 0) {
  LABEL_166:
    GameRoutine_1a0b940((__int64)v88, (__int64)v86, v85);
  }
  *(_WORD*)&v88[v85] = 47;
  if (a4 >= 0x17) {
    if ((a4 | 7) == 0x17) {
      v91 = 26;
    }
    else {
      v91 = (a4 | 7) + 1;
    }
    v90 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v91, 16, 0);
    v129_.v130 = a4;
    v129_.v131 = v90;
    v129_.v129 = v91 | 1;
  }
  else {
    LOBYTE(v129_.v129) = 2 * a4;
    v90 = (char*)&v129_.v129 + 1;
    if (a4 == 0) {
      goto LABEL_175;
    }
  }
  GameRoutine_1a0b940((__int64)v90, a3, a4);
LABEL_175:
  v90[a4] = 0;
  if ((v129_.v129 & 1) != 0) {
    v92 = v129_.v131;
  }
  else {
    v92 = (char*)&v129_.v129 + 1;
  }
  if ((v129_.v129 & 1) != 0) {
    v93 = v129_.v130;
  }
  else {
    v93 = (unsigned __int64)(unsigned __int8)v129_.v129 >> 1;
  }
  v94 = (__int64*)GameRoutine_1a09ce0((__int64)&v132_.v132, v92, v93);
  v96 = v94[1];
  v95 = v94[2];
  v135_.v135 = *v94;
  v135_.v136 = v96;
  v135_.v137 = (const char*)v95;
  v94[1] = 0;
  v94[2] = 0;
  *v94 = 0;
  if ((v140_.v140 & 1) != 0) {
    v97 = v140_.v142;
  }
  else {
    v97 = (char*)&v140_.v140 + 1;
  }
  if ((v140_.v140 & 1) != 0) {
    v98 = v140_.v141;
  }
  else {
    v98 = (unsigned __int64)(unsigned __int8)v140_.v140 >> 1;
  }
  v99 = (_QWORD*)GameRoutine_1a09ce0((__int64)&v135_.v135, v97, v98);
  v101 = v99[1];
  v100 = v99[2];
  v138_.v138[0] = *v99;
  v138_.v138[1] = v101;
  v138_.v139 = v100;
  v99[1] = 0;
  v99[2] = 0;
  *v99 = 0;
  v102 = (__int64*)GameRoutine_1a09ce0((__int64)v138_.v138, "_LSPV.bntx", 0xAu);
  v104 = v102[1];
  v103 = v102[2];
  v126_.v126 = *v102;
  v126_.v127 = v104;
  v126_.v128 = (char*)v103;
  v102[1] = 0;
  v102[2] = 0;
  *v102 = 0;
  if ((v138_.v138[0] & 1) != 0 && v138_.v139 != 0) {
    v105 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v105 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v105,
                                  v138_.v139);
  }
  if ((v135_.v135 & 1) != 0 && v135_.v137 != nullptr) {
    v106 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v106 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v106,
                                  (__int64)v135_.v137);
  }
  if ((v129_.v129 & 1) != 0 && v129_.v131 != nullptr) {
    v107 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v107 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v107,
                                  (__int64)v129_.v131);
  }
  if ((v132_.v132 & 1) != 0 && v132_.v134 != nullptr) {
    v108 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v108 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v108,
                                  (__int64)v132_.v134);
  }
  if ((v140_.v140 & 1) != 0 && v140_.v142 != nullptr) {
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v109,
                                  (__int64)v140_.v142);
  }
  if ((v143_.v143 & 1) != 0 && v143_.v145 != nullptr) {
    v110 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v110 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v110,
                                  (__int64)v143_.v145);
  }
  v111 = *v83;
  v122_.v122 = 0;
  v122_.v123 = 0;
  if ((v126_.v126 & 1) != 0) {
    v112 = v126_.v127;
  }
  else {
    v112 = (unsigned __int64)(unsigned __int8)v126_.v126 >> 1;
  }
  if ((v126_.v126 & 1) != 0) {
    v113 = v126_.v128;
  }
  else {
    v113 = (char*)&v126_.v126 + 1;
  }
  v114 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*))(
      **(_QWORD**)(v111 + 13432) + 40LL))(*(_QWORD*)(v111 + 13432), v113, v112,
                                          &v122_.v122);
  if (v122_.v123 != 0) {
    std___1___shared_weak_count___release_weak(v122_.v123);
  }
  v115 = v126_.v126;
  *(_QWORD*)(a9 + 8) = v114;
  if ((v115 & 1) != 0 && v126_.v128 != nullptr) {
    v116 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v116 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v116,
                                  (__int64)v126_.v128);
  }
  GameRoutine_60a060((char*)(a9 + 16), v118, v119);
  GameRoutine_60a060((char*)(a9 + 40), v120, v38);
  LOBYTE(v60) = 1;
  return (unsigned __int8)v60 & 1;
}

#pragma GCC visibility pop
