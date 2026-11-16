#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_17da710(__int64*, _QWORD*);
__int64* GameRoutine_1138e00(__int64*, const char**);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 GameRoutine_1a09be0(__int64, const char*);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_64be60();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 nn_fs_GetEntryType(__int64, const char*);
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_18d7a10(__int64, __int64, int);
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
__int64 fs_detail_17d93c0(__int64 a1, int a2);

__int64 fs_detail_17d93c0(__int64 a1, int a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  _BYTE* v20;
  char* v21;
  unsigned __int64 v22;
  char* v23;
  char* v24;
  _BYTE* v25;
  unsigned __int64 v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  char* v30;
  char* v31;
  _BYTE* v32;
  unsigned __int64 v33;
  __int64 v34;
  char* v35;
  unsigned __int64 v36;
  char* v37;
  char* v38;
  _BYTE* v39;
  unsigned __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  _BYTE* v44;
  __int64 v45;
  __int64* v46;
  unsigned __int64 v47;
  __int64 v48;
  signed __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  _BYTE* v55;
  __int64 v56;
  __int64* v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  signed __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  _BYTE* v67;
  __int64 v68;
  char* v69;
  _BYTE* v70;
  unsigned __int64 v71;
  char* v72;
  char* v73;
  char* v74;
  bool v75;
  char* v76;
  unsigned __int64 v77;
  __int64 v78;
  char* v79;
  __int64* v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  _BYTE* v85;
  __int64 v86;
  __int64* v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  signed __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64* v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64* v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64* v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int8 v110;
  int v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  char** v115;
  __int64* v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  char** v123;
  __int64 v124;
  _BYTE* v125;
  __int64 v126;
  char*** v127;
  unsigned __int64 v128;
  __int64 v129;
  __int64 v130;
  signed __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  __int64 v136;
  _BYTE* v137;
  __int64 v138;
  char* v139;
  __int64* v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64** v145;
  __int64* v146;
  __int64 v147;
  _QWORD* v148;
  __int64* v149;
  __int64 v150;
  _QWORD* v151;
  char*** v152;
  unsigned __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  char v159;
  char* v160;
  char* v161;
  char* v162;
  char* v163;
  unsigned __int64 v164;
  char* v166;
  int v167;
  __int64* v168;
  char v169;
  unsigned __int64 v170;
  __int64 v171;
  struct {
    char gap0_[72];
    __int64 v172;
    unsigned __int64 v173;
    char* v174;
    char gap96_[4];
    char v175[4];
    __int64 v176;
    __int64 v177;
    char* v178;
    char* v179;
    char* v180;
    __int64 v181;
    unsigned __int64 v182;
    __int64 v183;
    char gap168_[8];
    char* v184[2];
    unsigned __int64 v185;
    __int64 (*v186)();
    __int64 v187;
    _BYTE v188[256];
    _BYTE* v189;
    _QWORD v190[2];
    __int64 v191;
    __int64 v192;
    __int64 v193;
    char** v194;
    char** v195;
    char** v196;
    __int64 v197;
    char v198[8];
    char v199;
  } f_;

  v3 = a2;
  v4 = *snd_g_fileIndex_ptr[0];
  v5 = *(_QWORD*)(*snd_g_fileIndex_ptr[0] + 4752);
  if (v5 != 0) {
    v6 = GameRoutine_18d7a10(v5, a1, a2);
    if ((v6 & 1) == 0) {
      v110 = 0;
      v111 = 1;
      return v110 | (unsigned int)(v111 << 8);
    }
    v7 = a1 + 256;
    v167 = v3;
    v8 = DWORDn(v6, sizeof(v6) / 4 - 1);
    v9 = GameRoutine_1a09c70((const char*)(a1 + 256));
    v10 = GameRoutine_1a09c60(a1 + 256, 58, v9);
    v166 = (const char*)(a1 + 256);
    v168 = (__int64*)(a1 + 528);
    v11 = *(_QWORD*)(v4 + 4752);
    v13 = *(_QWORD**)(v11 + 64);
    v12 = *(_QWORD**)(v11 + 72);
    if (v13 != v12) {
      v14 = v10 - v7;
      v169 = 0;
      if (v10 == 0) {
        v14 = -1;
      }
      if (v14 == -1) {
        v15 = 0;
      }
      else {
        v15 = v14 + 2;
      }
      v16 = v7 + v15;
      v17 = v9 - v15;
      v18 = v3;
      v171 = v16;
      v170 = v17;
      while (1) {
        v20 = (_BYTE*)*v13;
        if (*(_BYTE*)*v13 != 1 ||
            (((unsigned int)v8 >> *((_DWORD*)v20 + 1)) & 1) == 0) {
          goto LABEL_12;
        }
        v21 = v20 + 17;
        if (v18 == 2) {
          v29 = (unsigned __int8)v20[16];
          v32 = v20 + 24;
          v30 = *((char**)v20 + 3);
          v31 = *((const char**)v32 + 1);
          f_.v184[0] = f_.v188;
          f_.v184[1] = (_BYTE*)(((_UNKNOWN*)0xFCLL) + 4);
          f_.v182 = v170;
          f_.v183 = 429;
          f_.v187 = 0;
          f_.v189 = f_.v188;
          LODWORD(f_.v191) = 0;
          f_.v198[0] = 0;
          f_.v199 = 0;
          if ((v29 & 1) != 0) {
            v21 = v31;
          }
          else {
            v30 = (char*)(v29 >> 1);
          }
          f_.v185 = 0;
          f_.v186 = GameRoutine_64be60;
          f_.v180 = v30;
          f_.v181 = v171;
          f_.v179 = v21;
          f_.v190[0] = "{}:/{}";
          f_.v190[1] = "";
          f_.v192 = 0;
          f_.v193 = 2;
          f_.v195 = (const char**)(((_UNKNOWN*)0x0LL) + 2);
          f_.v196 = &f_.v179;
          f_.v197 = 429;
          f_.v194 = f_.v184;
          GameRoutine_6380e0((__int64)f_.v190, (__int64**)&f_.v194);
          if (f_.v199 == 1) {
            std___1_locale_Destroy_locale((__int64)f_.v198);
          }
          v33 = f_.v185;
          if (f_.v185 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_269;
          }
          v34 = (__int64)f_.v189;
          if (f_.v185 >= 0x17) {
            if ((f_.v185 | 7) == 0x17) {
              v54 = 26;
            }
            else {
              v54 = (f_.v185 | 7) + 1;
            }
            v35 = (const char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v54, 16, 0);
            f_.v177 = v33;
            f_.v178 = v35;
            f_.v176 = v54 | 1;
          }
          else {
            v35 = (char*)&f_.v176 + 1;
            LOBYTE(f_.v176) = 2 * f_.v185;
            if (f_.v185 == 0) {
            LABEL_69:
              v55 = f_.v189;
              v35[v33] = 0;
              if (v55 != f_.v188 && v55 != nullptr) {
                v56 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v56 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, (__int64)v55);
              }
              v57 = *(__int64**)(a1 + 536);
              v58 = *(_QWORD*)(a1 + 544);
              if ((unsigned __int64)v57 >= v58) {
                v60 = *v168;
                v61 = (signed __int64)v57 - *v168;
                v62 = 1 - 0x5555555555555555LL * (v61 >> 3);
                if (v62 > 0xAAAAAAAAAAAAAAALL) {
                  goto LABEL_270;
                }
                v63 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v58 - v60) >> 3);
                if (2 * v63 > v62) {
                  v62 = 2 * v63;
                }
                if (v63 >= 0x555555555555555LL) {
                  v64 = 0xAAAAAAAAAAAAAAALL;
                }
                else {
                  v64 = v62;
                }
                if (v64 != 0) {
                  if (v64 > 0xAAAAAAAAAAAAAAALL) {
                    goto LABEL_271;
                  }
                  v65 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                       24 * v64, 16, 0);
                }
                else {
                  v65 = 0;
                }
                v101 = (__int64*)(v65 + v61);
                v102 = v65 + 24 * v64;
                v103 = f_.v177;
                v59 = v65 + v61 + 24;
                *v101 = f_.v176;
                v101[1] = v103;
                v101[2] = (__int64)f_.v178;
                GameRoutine_1a0b950(v65, v60, v61);
                *(_QWORD*)(a1 + 528) = v65;
                *(_QWORD*)(a1 + 536) = v59;
                *(_QWORD*)(a1 + 544) = v102;
                if (v60 != 0) {
                  v104 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v104 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v104, v60);
                }
              }
              else {
                v59 = (__int64)(v57 + 3);
                *v57 = f_.v176;
                v57[1] = f_.v177;
                v57[2] = (__int64)f_.v178;
              }
              *(_QWORD*)(a1 + 536) = v59;
              v18 = 2;
              goto LABEL_12;
            }
          }
          GameRoutine_1a0b940((__int64)v35, v34, v33);
          goto LABEL_69;
        }
        if (v18 == 1) {
          v22 = (unsigned __int8)v20[16];
          v25 = v20 + 24;
          v23 = *((char**)v20 + 3);
          v24 = *((const char**)v25 + 1);
          f_.v184[0] = f_.v188;
          f_.v184[1] = (_BYTE*)(((_UNKNOWN*)0xFCLL) + 4);
          f_.v182 = v170;
          f_.v183 = 429;
          f_.v187 = 0;
          f_.v189 = f_.v188;
          LODWORD(f_.v191) = 0;
          f_.v198[0] = 0;
          f_.v199 = 0;
          if ((v22 & 1) != 0) {
            v21 = v24;
          }
          else {
            v23 = (char*)(v22 >> 1);
          }
          f_.v185 = 0;
          f_.v186 = GameRoutine_64be60;
          f_.v180 = v23;
          f_.v181 = v171;
          f_.v179 = v21;
          f_.v190[0] = "{}:/{}.zst";
          f_.v190[1] = "";
          f_.v192 = 0;
          f_.v193 = 2;
          f_.v195 = (const char**)(((_UNKNOWN*)0x0LL) + 2);
          f_.v196 = &f_.v179;
          f_.v197 = 429;
          f_.v194 = f_.v184;
          GameRoutine_6380e0((__int64)f_.v190, (__int64**)&f_.v194);
          if (f_.v199 == 1) {
            std___1_locale_Destroy_locale((__int64)f_.v198);
          }
          v26 = f_.v185;
          if (f_.v185 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_269;
          }
          v27 = (__int64)f_.v189;
          if (f_.v185 >= 0x17) {
            if ((f_.v185 | 7) == 0x17) {
              v43 = 26;
            }
            else {
              v43 = (f_.v185 | 7) + 1;
            }
            v28 = (const char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v43, 16, 0);
            f_.v177 = v26;
            f_.v178 = v28;
            f_.v176 = v43 | 1;
          }
          else {
            v28 = (char*)&f_.v176 + 1;
            LOBYTE(f_.v176) = 2 * f_.v185;
            if (f_.v185 == 0) {
            LABEL_49:
              v44 = f_.v189;
              v28[v26] = 0;
              if (v44 != f_.v188 && v44 != nullptr) {
                v45 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v45 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, (__int64)v44);
              }
              v46 = *(__int64**)(a1 + 536);
              v47 = *(_QWORD*)(a1 + 544);
              if ((unsigned __int64)v46 < v47) {
                v19 = (__int64)(v46 + 3);
                *v46 = f_.v176;
                v46[1] = f_.v177;
                v46[2] = (__int64)f_.v178;
              }
              else {
                v48 = *v168;
                v49 = (signed __int64)v46 - *v168;
                v50 = 1 - 0x5555555555555555LL * (v49 >> 3);
                if (v50 > 0xAAAAAAAAAAAAAAALL) {
                  goto LABEL_270;
                }
                v51 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v47 - v48) >> 3);
                if (2 * v51 > v50) {
                  v50 = 2 * v51;
                }
                if (v51 >= 0x555555555555555LL) {
                  v52 = 0xAAAAAAAAAAAAAAALL;
                }
                else {
                  v52 = v50;
                }
                if (v52 != 0) {
                  if (v52 > 0xAAAAAAAAAAAAAAALL) {
                    goto LABEL_271;
                  }
                  v53 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                       24 * v52, 16, 0);
                }
                else {
                  v53 = 0;
                }
                v97 = (__int64*)(v53 + v49);
                v98 = v53 + 24 * v52;
                v99 = f_.v177;
                v19 = v53 + v49 + 24;
                *v97 = f_.v176;
                v97[1] = v99;
                v97[2] = (__int64)f_.v178;
                GameRoutine_1a0b950(v53, v48, v49);
                *(_QWORD*)(a1 + 528) = v53;
                *(_QWORD*)(a1 + 536) = v19;
                *(_QWORD*)(a1 + 544) = v98;
                if (v48 != 0) {
                  v100 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v100 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v100, v48);
                }
              }
              *(_QWORD*)(a1 + 536) = v19;
              v18 = 1;
              v169 = 1;
              goto LABEL_12;
            }
          }
          GameRoutine_1a0b940((__int64)v28, v27, v26);
          goto LABEL_49;
        }
        v36 = (unsigned __int8)v20[16];
        v39 = v20 + 24;
        v37 = *((char**)v20 + 3);
        v38 = *((const char**)v39 + 1);
        f_.v184[0] = f_.v188;
        f_.v184[1] = (_BYTE*)(((_UNKNOWN*)0xFCLL) + 4);
        f_.v182 = v170;
        f_.v183 = 429;
        f_.v187 = 0;
        f_.v189 = f_.v188;
        LODWORD(f_.v191) = 0;
        f_.v198[0] = 0;
        f_.v199 = 0;
        if ((v36 & 1) != 0) {
          v21 = v38;
        }
        else {
          v37 = (char*)(v36 >> 1);
        }
        f_.v185 = 0;
        f_.v186 = GameRoutine_64be60;
        f_.v180 = v37;
        f_.v181 = v171;
        f_.v179 = v21;
        f_.v190[0] = "{}:/{}.zst";
        f_.v190[1] = "";
        f_.v192 = 0;
        f_.v193 = 2;
        f_.v195 = (const char**)(((_UNKNOWN*)0x0LL) + 2);
        f_.v196 = &f_.v179;
        f_.v197 = 429;
        f_.v194 = f_.v184;
        GameRoutine_6380e0((__int64)f_.v190, (__int64**)&f_.v194);
        if (f_.v199 == 1) {
          std___1_locale_Destroy_locale((__int64)f_.v198);
        }
        v40 = f_.v185;
        if (f_.v185 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_269;
        }
        v41 = (__int64)f_.v189;
        if (f_.v185 >= 0x17) {
          if ((f_.v185 | 7) == 0x17) {
            v66 = 26;
          }
          else {
            v66 = (f_.v185 | 7) + 1;
          }
          v42 = (const char*)fw_memory_HeapManager_Allocate(
              fw_memory_g_heap_manager, v66, 16, 0);
          f_.v177 = v40;
          f_.v178 = v42;
          f_.v176 = v66 | 1;
        }
        else {
          v42 = (char*)&f_.v176 + 1;
          LOBYTE(f_.v176) = 2 * f_.v185;
          if (f_.v185 == 0) {
            goto LABEL_90;
          }
        }
        GameRoutine_1a0b940((__int64)v42, v41, v40);
      LABEL_90:
        v67 = f_.v189;
        v42[v40] = 0;
        if (v67 != f_.v188 && v67 != nullptr) {
          v68 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, (__int64)v67);
        }
        if ((f_.v176 & 1) != 0) {
          v69 = f_.v178;
        }
        else {
          v69 = (char*)&f_.v176 + 1;
        }
        if ((unsigned int)nn_fs_GetEntryType((__int64)f_.v175, v69) == 0) {
          v80 = *(__int64**)(a1 + 536);
          if ((unsigned __int64)v80 >= *(_QWORD*)(a1 + 544)) {
            v83 = GameRoutine_17da710(v168, &f_.v176);
          }
          else if ((f_.v176 & 1) != 0) {
            fw_text_String_CopyTerminated(*(__int64**)(a1 + 536),
                                          (__int64)f_.v178, f_.v177);
            v83 = v80 + 3;
          }
          else {
            v81 = f_.v176;
            v82 = (__int64)f_.v178;
            v83 = v80 + 3;
            v80[1] = f_.v177;
            v80[2] = v82;
            *v80 = v81;
          }
          *(_QWORD*)(a1 + 536) = v83;
          v18 = 1;
          v169 = 1;
          if ((f_.v176 & 1) != 0) {
            goto LABEL_156;
          }
          goto LABEL_12;
        }
        v70 = (_BYTE*)*v13;
        f_.v184[0] = f_.v188;
        f_.v184[1] = (_BYTE*)(((_UNKNOWN*)0xFCLL) + 4);
        v71 = (unsigned __int8)v70[16];
        LODWORD(f_.v191) = 0;
        v73 = *((char**)v70 + 3);
        v72 = *((const char**)v70 + 4);
        f_.v185 = 0;
        f_.v186 = GameRoutine_64be60;
        v74 = v70 + 17;
        f_.v182 = v170;
        f_.v183 = 429;
        f_.v187 = 0;
        f_.v189 = f_.v188;
        f_.v198[0] = 0;
        f_.v199 = 0;
        v75 = (v71 & 1) == 0;
        if ((v71 & 1) != 0) {
          v76 = v73;
        }
        else {
          v76 = (char*)(v71 >> 1);
        }
        if (!v75) {
          v74 = v72;
        }
        f_.v180 = v76;
        f_.v181 = v171;
        f_.v179 = v74;
        f_.v190[0] = "{}:/{}";
        f_.v190[1] = "";
        f_.v192 = 0;
        f_.v193 = 2;
        f_.v195 = (const char**)(((_UNKNOWN*)0x0LL) + 2);
        f_.v196 = &f_.v179;
        f_.v197 = 429;
        f_.v194 = f_.v184;
        GameRoutine_6380e0((__int64)f_.v190, (__int64**)&f_.v194);
        if (f_.v199 == 1) {
          std___1_locale_Destroy_locale((__int64)f_.v198);
        }
        v77 = f_.v185;
        if (f_.v185 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_269;
        }
        v78 = (__int64)f_.v189;
        if (f_.v185 >= 0x17) {
          if ((f_.v185 | 7) == 0x17) {
            v84 = 26;
          }
          else {
            v84 = (f_.v185 | 7) + 1;
          }
          v79 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v84, 16, 0);
          f_.v173 = v77;
          f_.v174 = v79;
          f_.v172 = v84 | 1;
        }
        else {
          v79 = (char*)&f_.v172 + 1;
          LOBYTE(f_.v172) = 2 * f_.v185;
          if (f_.v185 == 0) {
            goto LABEL_118;
          }
        }
        GameRoutine_1a0b940((__int64)v79, v78, v77);
      LABEL_118:
        v85 = f_.v189;
        v79[v77] = 0;
        if (v85 != f_.v188 && v85 != nullptr) {
          v86 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v86 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, (__int64)v85);
        }
        v87 = *(__int64**)(a1 + 536);
        v88 = *(_QWORD*)(a1 + 544);
        if ((unsigned __int64)v87 >= v88) {
          v91 = *v168;
          v92 = (signed __int64)v87 - *v168;
          v93 = 1 - 0x5555555555555555LL * (v92 >> 3);
          if (v93 > 0xAAAAAAAAAAAAAAALL) {
            goto LABEL_270;
          }
          v94 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v88 - v91) >> 3);
          if (2 * v94 > v93) {
            v93 = 2 * v94;
          }
          if (v94 >= 0x555555555555555LL) {
            v95 = 0xAAAAAAAAAAAAAAALL;
          }
          else {
            v95 = v93;
          }
          if (v95 != 0) {
            if (v95 > 0xAAAAAAAAAAAAAAALL) {
              goto LABEL_271;
            }
            v96 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                 24 * v95, 16, 0);
          }
          else {
            v96 = 0;
          }
          v105 = (__int64*)(v96 + v92);
          v106 = v96 + 24 * v95;
          v107 = f_.v173;
          v90 = v96 + v92 + 24;
          *v105 = f_.v172;
          v105[1] = v107;
          v105[2] = (__int64)f_.v174;
          GameRoutine_1a0b950(v96, v91, v92);
          *(_QWORD*)(a1 + 528) = v96;
          *(_QWORD*)(a1 + 536) = v90;
          *(_QWORD*)(a1 + 544) = v106;
          if (v91 != 0) {
            v108 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v108 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v108, v91);
          }
        }
        else {
          v89 = f_.v173;
          v90 = (__int64)(v87 + 3);
          *v87 = f_.v172;
          v87[1] = v89;
          v87[2] = (__int64)f_.v174;
        }
        v18 = 2;
        *(_QWORD*)(a1 + 536) = v90;
        if ((f_.v176 & 1) != 0) {
        LABEL_156:
          if (f_.v178 != nullptr) {
            v109 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v109 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v109,
                (__int64)f_.v178);
          }
        }
      LABEL_12:
        if (++v13 == v12) {
          goto LABEL_162;
        }
      }
    }
    v18 = v3;
    v169 = 0;
  LABEL_162:
    if ((v8 & 1) == 0) {
      v3 = v167;
      v112 = a1 + 256;
      v110 = v169;
      goto LABEL_255;
    }
    if (v18 != 2) {
      v112 = a1 + 256;
      if (v18 == 1) {
        f_.v184[0] = f_.v188;
        f_.v184[1] = (_BYTE*)(((_UNKNOWN*)0xFCLL) + 4);
        f_.v190[0] = a1 + 256;
        f_.v187 = 0;
        f_.v189 = f_.v188;
        f_.v185 = 0;
        f_.v186 = GameRoutine_64be60;
        f_.v191 = 12;
        LODWORD(f_.v181) = 0;
        f_.v198[0] = 0;
        f_.v199 = 0;
        f_.v179 = "{}.zst";
        f_.v180 = "";
        f_.v182 = 0;
        f_.v183 = 1;
        f_.v196 = (const char**)f_.v190;
        f_.v197 = 12;
        f_.v194 = f_.v184;
        f_.v195 = (const char**)(((_UNKNOWN*)0x0LL) + 1);
        GameRoutine_6380e0((__int64)&f_.v179, (__int64**)&f_.v194);
        if (f_.v199 == 1) {
          std___1_locale_Destroy_locale((__int64)f_.v198);
        }
        v113 = f_.v185;
        v3 = v167;
        if (f_.v185 < 0xFFFFFFFFFFFFFFF7LL) {
          v114 = (__int64)f_.v189;
          if (f_.v185 >= 0x17) {
            if ((f_.v185 | 7) == 0x17) {
              v124 = 26;
            }
            else {
              v124 = (f_.v185 | 7) + 1;
            }
            v115 = (const char**)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v124, 16, 0);
            f_.v195 = (const char**)v113;
            f_.v196 = v115;
            f_.v194 = (const char**)(v124 | 1);
          }
          else {
            LOBYTE(f_.v194) = 2 * f_.v185;
            v115 = (const char**)((char*)&f_.v194 + 1);
            if (f_.v185 == 0) {
            LABEL_189:
              v125 = f_.v189;
              *((_BYTE*)v115 + v113) = 0;
              if (v125 != f_.v188 && v125 != nullptr) {
                v126 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v126 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v126,
                    (__int64)v125);
              }
              v127 = *(const char****)(a1 + 536);
              v128 = *(_QWORD*)(a1 + 544);
              if ((unsigned __int64)v127 >= v128) {
                v130 = *v168;
                v131 = (signed __int64)v127 - *v168;
                v132 = 1 - 0x5555555555555555LL * (v131 >> 3);
                if (v132 > 0xAAAAAAAAAAAAAAALL) {
                LABEL_270:
                  GameRoutine_64aa00();
                }
                v133 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v128 - v130) >> 3);
                if (2 * v133 > v132) {
                  v132 = 2 * v133;
                }
                if (v133 >= 0x555555555555555LL) {
                  v134 = 0xAAAAAAAAAAAAAAALL;
                }
                else {
                  v134 = v132;
                }
                if (v134 != 0) {
                  if (v134 > 0xAAAAAAAAAAAAAAALL) {
                  LABEL_271:
                    GameRoutine_60a210();
                  }
                  v135 = fw_memory_HeapManager_Allocate(
                      fw_memory_g_heap_manager, 24 * v134, 16, 0);
                }
                else {
                  v135 = 0;
                }
                v152 = (const char***)(v135 + v131);
                v153 = v135 + 24 * v134;
                v154 = (unsigned __int64)f_.v195;
                v129 = v135 + v131 + 24;
                *v152 = f_.v194;
                v152[1] = (const char**)v154;
                v152[2] = f_.v196;
                GameRoutine_1a0b950(v135, v130, v131);
                *(_QWORD*)(a1 + 528) = v135;
                *(_QWORD*)(a1 + 536) = v129;
                *(_QWORD*)(a1 + 544) = v153;
                if (v130 != 0) {
                  v155 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v155 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v155, v130);
                }
              }
              else {
                v129 = (__int64)(v127 + 3);
                *v127 = f_.v194;
                v127[1] = f_.v195;
                v127[2] = f_.v196;
              }
              *(_QWORD*)(a1 + 536) = v129;
              v110 = 1;
            LABEL_255:
              v158 = *(_QWORD*)(a1 + 536);
              if (*(_QWORD*)(a1 + 528) != v158) {
                v159 = *(_BYTE*)(v158 - 24);
                v160 = *(const char**)(v158 - 8);
                v161 = (const char*)(v158 - 23);
                if ((v159 & 1) != 0) {
                  v162 = v160;
                }
                else {
                  v162 = v161;
                }
                GameRoutine_1a09be0(v112, v162);
                goto LABEL_267;
              }
              goto LABEL_260;
            }
          }
          GameRoutine_1a0b940((__int64)v115, v114, v113);
          goto LABEL_189;
        }
      LABEL_269:
        String_60a1d0();
      }
      f_.v184[0] = f_.v188;
      f_.v184[1] = (_BYTE*)(((_UNKNOWN*)0xFCLL) + 4);
      f_.v190[0] = a1 + 256;
      f_.v187 = 0;
      f_.v189 = f_.v188;
      f_.v185 = 0;
      f_.v186 = GameRoutine_64be60;
      f_.v191 = 12;
      LODWORD(f_.v181) = 0;
      f_.v198[0] = 0;
      f_.v199 = 0;
      f_.v179 = "{}.zst";
      f_.v180 = "";
      f_.v182 = 0;
      f_.v183 = 1;
      f_.v196 = (const char**)f_.v190;
      f_.v197 = 12;
      f_.v194 = f_.v184;
      f_.v195 = (const char**)(((_UNKNOWN*)0x0LL) + 1);
      GameRoutine_6380e0((__int64)&f_.v179, (__int64**)&f_.v194);
      if (f_.v199 == 1) {
        std___1_locale_Destroy_locale((__int64)f_.v198);
      }
      v121 = f_.v185;
      v3 = v167;
      if (f_.v185 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_269;
      }
      v122 = (__int64)f_.v189;
      if (f_.v185 >= 0x17) {
        if ((f_.v185 | 7) == 0x17) {
          v136 = 26;
        }
        else {
          v136 = (f_.v185 | 7) + 1;
        }
        v123 = (const char**)fw_memory_HeapManager_Allocate(
            fw_memory_g_heap_manager, v136, 16, 0);
        f_.v195 = (const char**)v121;
        f_.v196 = v123;
        f_.v194 = (const char**)(v136 | 1);
      }
      else {
        LOBYTE(f_.v194) = 2 * f_.v185;
        v123 = (const char**)((char*)&f_.v194 + 1);
        if (f_.v185 == 0) {
          goto LABEL_210;
        }
      }
      GameRoutine_1a0b940((__int64)v123, v122, v121);
    LABEL_210:
      v137 = f_.v189;
      *((_BYTE*)v123 + v121) = 0;
      if (v137 != f_.v188 && v137 != nullptr) {
        v138 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v138 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v138, (__int64)v137);
      }
      if (((unsigned __int8)f_.v194 & 1) != 0) {
        v139 = (const char*)f_.v196;
      }
      else {
        v139 = (char*)&f_.v194 + 1;
      }
      if ((unsigned int)nn_fs_GetEntryType((__int64)&f_.v179, v139) == 0) {
        v145 = *(__int64***)(a1 + 536);
        if ((unsigned __int64)v145 >= *(_QWORD*)(a1 + 544)) {
          v148 = GameRoutine_17da710(v168, &f_.v194);
        }
        else if (((unsigned __int8)f_.v194 & 1) != 0) {
          fw_text_String_CopyTerminated(*(__int64**)(a1 + 536),
                                        (__int64)f_.v196,
                                        (unsigned __int64)f_.v195);
          v148 = v145 + 3;
        }
        else {
          v146 = (__int64*)f_.v194;
          v147 = (__int64)f_.v196;
          v148 = v145 + 3;
          v145[1] = (__int64*)f_.v195;
          v145[2] = (__int64*)v147;
          *v145 = v146;
        }
        *(_QWORD*)(a1 + 536) = v148;
        v110 = 1;
        if (((unsigned __int8)f_.v194 & 1) == 0) {
          goto LABEL_255;
        }
        goto LABEL_251;
      }
      v140 = *(__int64**)(a1 + 536);
      v141 = *(_QWORD*)(a1 + 544);
      f_.v184[0] = (const char*)(a1 + 256);
      if ((unsigned __int64)v140 >= v141) {
        v149 = GameRoutine_1138e00(v168, f_.v184);
        goto LABEL_247;
      }
      v142 = GameRoutine_1a09c70(v166);
      if (v142 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_269;
      }
      v143 = v142;
      if (v142 >= 0x17) {
        if ((v142 | 7) == 0x17) {
          v156 = 26;
        }
        else {
          v156 = (v142 | 7) + 1;
        }
        v144 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v156,
                                              16, 0);
        v140[1] = v143;
        v140[2] = v144;
        *v140 = v156 | 1;
      }
      else {
        *(_BYTE*)v140 = 2 * v142;
        v144 = (__int64)v140 + 1;
        if (v142 == 0) {
          goto LABEL_246;
        }
      }
      GameRoutine_1a0b940(v144, (__int64)v166, v143);
    LABEL_246:
      *(_BYTE*)(v144 + v143) = 0;
      v149 = v140 + 3;
    LABEL_247:
      v110 = v169;
      *(_QWORD*)(a1 + 536) = v149;
      if (((unsigned __int8)f_.v194 & 1) == 0) {
        goto LABEL_255;
      }
    LABEL_251:
      if (f_.v196 != nullptr) {
        v157 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v157 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v157, (__int64)f_.v196);
      }
      goto LABEL_255;
    }
    v112 = a1 + 256;
    v116 = *(__int64**)(a1 + 536);
    v117 = *(_QWORD*)(a1 + 544);
    f_.v184[0] = (const char*)(a1 + 256);
    if ((unsigned __int64)v116 >= v117) {
      v3 = v167;
      v110 = v169;
      *(_QWORD*)(a1 + 536) = GameRoutine_1138e00(v168, f_.v184);
      goto LABEL_255;
    }
    v118 = GameRoutine_1a09c70(v166);
    v3 = v167;
    if (v118 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_269;
    }
    v119 = v118;
    if (v118 >= 0x17) {
      if ((v118 | 7) == 0x17) {
        v150 = 26;
      }
      else {
        v150 = (v118 | 7) + 1;
      }
      v120 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v150, 16, 0);
      v116[1] = v119;
      v116[2] = v120;
      *v116 = v150 | 1;
    }
    else {
      *(_BYTE*)v116 = 2 * v118;
      v120 = (__int64)v116 + 1;
      if (v118 == 0) {
        goto LABEL_233;
      }
    }
    GameRoutine_1a0b940(v120, (__int64)v166, v119);
  LABEL_233:
    v151 = v116 + 3;
    v110 = v169;
    *(_BYTE*)(v120 + v119) = 0;
    *(_QWORD*)(a1 + 536) = v151;
    goto LABEL_255;
  }
LABEL_260:
  if (v3 == 2) {
    v111 = 0;
    v110 = 0;
  }
  else {
    v163 = (const char*)(a1 + 256);
    if (v3 != 1) {
      GameRoutine_1a09be0((__int64)f_.v184, v163);
      strcpy((char*)f_.v184 + GameRoutine_1a09c70((const char*)f_.v184),
             ".zst");
      if ((unsigned int)nn_fs_GetEntryType((__int64)&f_.v194,
                                           (const char*)f_.v184) != 0) {
        v110 = 0;
      }
      else {
        v110 = 1;
        strcpy((char*)&v163[GameRoutine_1a09c70(v163)], ".zst");
      }
    LABEL_267:
      v111 = 0;
      return v110 | (unsigned int)(v111 << 8);
    }
    v164 = GameRoutine_1a09c70(v163);
    v111 = 0;
    v110 = 1;
    strcpy((char*)&v163[v164], ".zst");
  }
  return v110 | (unsigned int)(v111 << 8);
}

#pragma GCC visibility pop
