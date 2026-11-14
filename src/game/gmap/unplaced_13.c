#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_dbc1e0(_QWORD*, __int64);
__attribute__((swiftcall)) void SpotMgr_13306e0(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD);
__int64* GameRoutine_1328d60(__int64);
__int64 GameHr_14a1390(__int64*, char);
__int64 GameHr_14a1520(__int64*, char);
__int64 GameHr_14a7290(__int64*);
__int64 GameRoutine_133e110(void);
__int64 GameRoutine_1545120(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 Impl_13261c0(__int64);
__int64 RuntimeBuffer_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 SpotMgr_13304c0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_gmap_13402f0(void);
__int64 game_gmap_1347b30(_QWORD, _QWORD);
__int64 game_gmap_1347cc0(_QWORD);
__int64 game_gmap_SpotMgr_FindSpot(void);
__int64 game_gmap_SpotMgr_GetCurrentSpot(void);
__int64 game_gmap_TroopMgr_CountTroop_134e600(_QWORD, _QWORD);
__int64 game_gmap_Troop_OnEndPhase(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int128* GameData_212c670;
extern __int64 (*GameData_1fa69a0[])();
extern __int64* GameData_212c780;
extern __int64* GameData_212d718;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9f00;
extern __int64 GameData_21ca090;
extern __int64 GameData_21f1660;
extern __int64 GameData_22416b0;
extern __int64 fw_memory_g_heap_manager_ptr;
float std___1_stof(_QWORD, _QWORD);
unsigned __int64 game_gmap_8808c0(unsigned __int64 result, int32x4_t a2);
__int64 game_gmap_13339e0();
__int64* game_gmap_1333b20();
__int64 game_gmap_1337000();
__int64 game_gmap_14a9e00();
__int64 game_gmap_14aa080();
__int64* game_gmap_14c6e20();
__int64 game_gmap_14ca660();

unsigned __int64 game_gmap_8808c0(unsigned __int64 result, int32x4_t a2)
{

#pragma clang fp contract(fast)

  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  char* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  int* v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v31;
  int v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _DWORD* v37;
  unsigned __int8* v38;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  int v67;
  unsigned __int64* v69;
  unsigned __int64* v70;
  int* v71;
  int v72;
  int v73;
  unsigned __int64* v75;
  unsigned __int64* v76;
  __int64 v77;
  unsigned __int64* v78;
  unsigned __int64* v79;
  __int64 v80;
  _BYTE* v81;
  char v82;
  __int64 (**v83)();
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  _QWORD* v94;
  _QWORD* v95;
  unsigned __int64 v96;
  __int64 v97;
  _QWORD* v98;
  _QWORD* v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 (**v109)();
  char v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned __int32 v114;
  int32x4_t v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v120;
  unsigned __int64 v121;
  _QWORD* v122;
  _QWORD* v123;
  unsigned __int64 v124;
  __int64 v125;
  __int16 v126;
  int8x16_t v127;
  int8x16_t v128;
  __int128 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  char v133;
  __int64 v134;
  __int64 v135;
  int32x4_t v136;
  unsigned __int8* v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64* v141;
  __int64* v142;
  _QWORD* v143;
  __int64 (**v144)();
  __int64 (**v145)();
  __int64 (***v146)();
  __int64 v147;
  __int64 v148;
  __int64 v149;
  unsigned __int64 v150;

  v150 = result;
  v2 = GameData_21f1660;
  v3 = *(_QWORD*)(GameData_21f1660 + 8);
  v4 = *(_QWORD**)(v3 + 8);
  if (*(_QWORD**)v3 != v4) {
    v5 = (_QWORD*)(*(_QWORD*)v3 + 16LL);
    v6 = 0;
    do {
      v7 = v5 - 2;
      v8 = *(v5 - 1);
      if ((*(_BYTE*)(v5 - 2) & 1) == 0) {
        v8 = *((_BYTE*)v5 - 16) >> 1;
      }
      if (v8 == 1) {
        v9 = (*(_BYTE*)(v5 - 2) & 1) != 0 ? (char*)*v5 : (char*)v5 - 15;
        if (*v9 == 42) {
          ++v6;
        }
      }
      v5 += 3;
    } while (v7 + 3 != v4);
    if (v6 == 2 && *(_DWORD*)(v3 + 48) == 0) {
      v137 = (unsigned __int8*)(v150 + 224);
      v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      LANES128(a2).n128_u32[0] = 2;
      v136 = a2;
      do {
        v13 = *(_QWORD**)(v2 + 8);
        v15 = v13[3];
        v14 = v13[4];
        v16 = *v13;
        v17 = v14 == v15 && v13[1] == v16;
        if (v17) {
          return result;
        }
        v18 = v14 == v15 ? v13[1] : v13[4];
        if (v14 == v15) {
          v19 = (int*)(v13 + 6);
        }
        else {
          v16 = v13[3];
          v19 = (int*)v13 + 13;
        }
        v20 = *v19;
        if (0xAAAAAAAAAAAAAAABLL * ((v18 - v16) >> 3) <= v20) {
          return result;
        }
        v148 = 0;
        v149 = 0;
        v147 = 0;
        v21 = *v13;
        if (v14 != v15) {
          v21 = v15;
        }
        v22 = (unsigned __int8*)(v21 + 24LL * (int)v20);
        v23 = *v22;
        if ((v23 & 1) != 0) {
          v24 = *((unsigned __int8**)v22 + 2);
        }
        else {
          v24 = v22 + 1;
        }
        if ((v23 & 1) != 0) {
          v25 = *((_QWORD*)v22 + 1);
        }
        else {
          v25 = v23 >> 1;
        }
        result = RuntimeBuffer_8924a0(&v147, v24, v25, 47);
        v27 = *(_QWORD*)(v147 + 8);
        if ((*(_BYTE*)v147 & 1) == 0) {
          v27 = *(_BYTE*)v147 >> 1;
        }
        if (v27 <= 11) {
          if (v27 != 1) {
            if (v27 == 4) {
              v37 = (*(_BYTE*)v147 & 1) != 0 ? *(_DWORD**)(v147 + 16)
                                             : (_DWORD*)(v147 + 1);
              v17 = *v37 == 2036427856;
              v38 = (unsigned __int8*)(v147 + 24);
              if (v17 && v137 != v38) {
                result = (unsigned __int64)v137;
                v40 = *v38;
                if ((*v137 & 1) != 0) {
                  if ((v40 & 1) != 0) {
                    v92 = *(_QWORD*)(v147 + 40);
                  }
                  else {
                    v92 = v147 + 25;
                  }
                  if ((v40 & 1) != 0) {
                    v93 = *(_QWORD*)(v147 + 32);
                  }
                  else {
                    v93 = v40 >> 1;
                  }
                  result = SpineModel_64dde0(v137, v92, v93);
                }
                else if ((v40 & 1) != 0) {
                  result = GameRoutine_64df20(v137, *(_QWORD*)(v147 + 40),
                                              *(_QWORD*)(v147 + 32));
                }
                else {
                  v41 = *(_QWORD*)v38;
                  v42 = *(_QWORD*)(v147 + 40);
                  *((_QWORD*)v137 + 1) = *(_QWORD*)(v147 + 32);
                  *((_QWORD*)v137 + 2) = v42;
                  *(_QWORD*)v137 = v41;
                }
              }
            }
            goto LABEL_287;
          }
          if ((*(_BYTE*)v147 & 1) != 0) {
            v81 = *(_BYTE**)(v147 + 16);
          }
          else {
            v81 = (_BYTE*)(v147 + 1);
          }
          if (*v81 != 42) {
            goto LABEL_287;
          }
          v82 = 0;
          goto LABEL_288;
        }
        if (v27 == 18) {
          if ((*(_BYTE*)v147 & 1) != 0) {
            v43 = *(__int64**)(v147 + 16);
          }
          else {
            v43 = (__int64*)(v147 + 1);
          }
          v44 = *v43;
          v45 = v43[1];
          v46 = *((unsigned __int16*)v43 + 8);
          if (v44 != 0x83E39481E9B088E5LL || v45 != 0xE38383E3A782E381LL ||
              v46 != 44930) {
            goto LABEL_287;
          }
          v49 = (*(_BYTE*)(v147 + 24) & 1) != 0 ? *(_QWORD*)(v147 + 40)
                                                : v147 + 25;
          result = game_HashString(v49, v26);
          if (result == 0) {
            goto LABEL_287;
          }
          v50 = *(_QWORD*)(GameData_21ca090 + 96);
          if (v50 == 0 || *(_QWORD*)(GameData_21ca090 + 112) == 0) {
            goto LABEL_287;
          }
          v52 = v50 - 1;
          if ((v50 & (v50 - 1)) != 0) {
            v53 = result;
            if (result >= v50) {
              v53 = result % v50;
            }
          }
          else {
            v53 = v52 & result;
          }
          v94 = *(_QWORD**)(*(_QWORD*)(GameData_21ca090 + 88) + 8 * v53);
          if (v94 == nullptr) {
            goto LABEL_287;
          }
          v95 = (_QWORD*)*v94;
          if (v95 == nullptr) {
            goto LABEL_287;
          }
          if ((v50 & v52) == 0) {
            while (1) {
              v97 = v95[1];
              if (v97 == result) {
                if (v95[2] == result) {
                  goto LABEL_225;
                }
              }
              else if ((v97 & v52) != v53) {
                goto LABEL_287;
              }
              v95 = (_QWORD*)*v95;
              if (v95 == nullptr) {
                goto LABEL_287;
              }
            }
          }
          while (1) {
            v96 = v95[1];
            if (v96 == result) {
              if (v95[2] == result) {
              LABEL_225:
                result = v95[3];
                if (result != 0) {
                  result = game_gmap_SpotMgr_FindSpot();
                  if (result != 0) {
                    v102 = result;
                    v103 = game_gmap_SpotMgr_GetCurrentSpot();
                    v104 = (__int64*)fw_memory_HeapManager_Allocate(*v10, 16,
                                                                    16, 0);
                    *v104 = v103;
                    v104[1] = v102;
                    v140 = 0;
                    v141 = v104;
                    v138 = 0;
                    v139 = 0;
                    v142 = v104 + 2;
                    v143 = v104 + 2;
                    result =
                        (unsigned __int64)(SpotMgr_13306e0((void*)(&v144),
                                                           &v141, 17, &v138),
                                           (void*)(&v144));
                    if (v138 != 0) {
                      v105 = *v10;
                      v139 = v138;
                      if (*(_QWORD*)(v105 + 200) != 0) {
                        v106 = 128;
                      }
                      else {
                        v106 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(v105 + v106, v138);
                    }
                    if (v141 != nullptr) {
                      v107 = *v10;
                      v142 = v141;
                      if (*(_QWORD*)(v107 + 200) != 0) {
                        v108 = 128;
                      }
                      else {
                        v108 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(v107 + v108, v141);
                    }
                    v109 = v144;
                    v110 = *(_BYTE*)(v102 + 178) & 0xFE;
                    if (v145 != v144) {
                      ++v110;
                    }
                    *(_BYTE*)(v102 + 178) = v110;
                    if (v109 != nullptr) {
                      v111 = *v10;
                      v145 = v109;
                      if (*(_QWORD*)(v111 + 200) != 0) {
                        v112 = 128;
                      }
                      else {
                        v112 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(v111 + v112, v109);
                    }
                  }
                }
                goto LABEL_287;
              }
            }
            else {
              if (v96 >= v50) {
                v96 %= v50;
              }
              if (v96 != v53) {
                goto LABEL_287;
              }
            }
            v95 = (_QWORD*)*v95;
            if (v95 == nullptr) {
              goto LABEL_287;
            }
          }
        }
        if (v27 == 15) {
          if ((*(_BYTE*)v147 & 1) != 0) {
            v54 = *(__int64**)(v147 + 16);
          }
          else {
            v54 = (__int64*)(v147 + 1);
          }
          v55 = *v54;
          v56 = *(__int64*)((char*)v54 + 7);
          if (v55 == 0x9DE99B8AE5A28BE5LL && v56 == 0xBAA4E7A8A1E89E9DLL) {
            v58 = v147 + 24;
            if (v148 != v147 + 24) {
              v59 = *(_QWORD*)(GameData_21c96e8 + 8);
              do {
                v64 = *(_QWORD*)(v58 + 8);
                if ((*(_BYTE*)v58 & 1) == 0) {
                  v64 = *(_BYTE*)v58 >> 1;
                }
                switch (v64) {
                case 6LL:
                  if ((*(_BYTE*)v58 & 1) != 0) {
                    v71 = *(int**)(v58 + 16);
                  }
                  else {
                    v71 = (int*)(v58 + 1);
                  }
                  v72 = *v71;
                  v73 = *((unsigned __int16*)v71 + 2);
                  if (v72 == -374831643 && v73 == 43139) {
                    v75 = *(unsigned __int64**)(v59 + 8);
                    v76 = *(unsigned __int64**)(v59 + 16);
                    while (v75 != v76) {
                      result = *v75;
                      v77 = *(_QWORD*)(*v75 + 96);
                      if (v77 == 0 ||
                          (unsigned int)*(unsigned __int8*)(v77 + 32) - 3 >=
                              2) {
                        result = game_gmap_13402f0();
                      }
                      ++v75;
                    }
                  }
                  break;
                case 15LL:
                  if ((*(_BYTE*)v58 & 1) != 0) {
                    v60 = *(__int64**)(v58 + 16);
                  }
                  else {
                    v60 = (__int64*)(v58 + 1);
                  }
                  v61 = *v60;
                  v62 = *(__int64*)((char*)v60 + 7);
                  if (v61 == 0x85E5BABAE4BBB8E4LL &&
                      v62 == 0x96A4E5A5BBE4AC85LL) {
                    v79 = *(unsigned __int64**)(v59 + 8);
                    v78 = *(unsigned __int64**)(v59 + 16);
                    while (v79 != v78) {
                      result = *v79;
                      v80 = *(_QWORD*)(*v79 + 96);
                      if ((v80 | *(_QWORD*)(*v79 + 552)) != 0 &&
                          (v80 == 0 ||
                           (unsigned int)*(unsigned __int8*)(v80 + 32) - 3 >=
                               2)) {
                        result = game_gmap_13402f0();
                      }
                      ++v79;
                    }
                  }
                  break;
                case 9LL:
                  v65 = (*(_BYTE*)v58 & 1) != 0 ? *(__int64**)(v58 + 16)
                                                : (__int64*)(v58 + 1);
                  v66 = *v65;
                  v67 = *((unsigned __int8*)v65 + 8);
                  if (v66 == 0x85E5BABAE4BBB8E4LL && v67 == 172) {
                    v69 = *(unsigned __int64**)(v59 + 8);
                    v70 = *(unsigned __int64**)(v59 + 16);
                    while (v69 != v70) {
                      result = *v69;
                      if ((*(_QWORD*)(*v69 + 96) | *(_QWORD*)(*v69 + 552)) ==
                          0) {
                        result = game_gmap_13402f0();
                      }
                      ++v69;
                    }
                  }
                  break;
                default:
                  break;
                }
                v58 += 24;
              } while (v58 != v148);
            }
          }
          goto LABEL_287;
        }
        if (v27 != 12) {
          goto LABEL_287;
        }
        if ((*(_BYTE*)v147 & 1) != 0) {
          v28 = *(__int64**)(v147 + 16);
        }
        else {
          v28 = (__int64*)(v147 + 1);
        }
        if (*v28 == 0x81E3BA87E594BCE6LL &&
            *((_DWORD*)v28 + 2) == -1082006610) {
          *(_BYTE*)(v150 + 306) = 1;
          goto LABEL_287;
        }
        if (*v28 != 0x85E99B8AE5A28BE5LL ||
            *((_DWORD*)v28 + 2) != -1363286131) {
          v31 = *v28;
          v32 = *((_DWORD*)v28 + 2);
          v33 = v31 == 0x94E79F9CE69D88E5LL && v32 == -1834489669;
          if (v33 && v148 - v147 == 48) {
            LODWORD(v144) = std___1_stof(v147 + 24, 0);
            v34 = *(_QWORD*)(*GameData_212d718 + 16);
            if (*(_BYTE*)(v34 + 680) == 1) {
              v35 = *(_QWORD*)(v34 + 656);
              v36 = v34 + 656;
            }
            else {
              if (*(float*)(v34 + 664) <= 0.0f) {
                result = (*(__int64 (**)(__int64, __int64 (***)(), __int64))(
                    *(_QWORD*)(v34 + 656) + 8LL))(v34 + 656, &v144, v34 + 688);
                if ((result & 1) == 0) {
                  goto LABEL_287;
                }
              }
              (*(void (**)(__int64))(*(_QWORD*)(v34 + 656) + 16LL))(v34 + 656);
              v35 = *(_QWORD*)(v34 + 656);
              v36 = v34 + 656;
            }
            result = (*(__int64 (**)(__int64))(v35 + 24))(v36);
            *(_QWORD*)(v34 + 664) = 0;
            *(_WORD*)(v34 + 680) = 256;
            goto LABEL_287;
          }
          goto LABEL_287;
        }
        if ((*(_BYTE*)(v147 + 48) & 1) != 0) {
          v83 = *(__int64 (***)())(v147 + 64);
        }
        else {
          v83 = (__int64 (**)())(v147 + 49);
        }
        v145 = v83;
        v144 = (__int64 (**)())game_HashString(v83, v26);
        result = SpotMgr_13304c0(&v144);
        if (result == 0) {
          goto LABEL_287;
        }
        v85 = result;
        if ((*(_BYTE*)(v147 + 24) & 1) != 0) {
          v86 = *(_QWORD*)(v147 + 40);
        }
        else {
          v86 = v147 + 25;
        }
        v87 = game_HashString(v86, v84);
        if (v87 == 0) {
          goto LABEL_250;
        }
        v89 = *(_QWORD*)(GameData_21c99c8 + 96);
        if (v89 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
          goto LABEL_250;
        }
        v90 = v89 - 1;
        if ((v89 & (v89 - 1)) != 0) {
          v91 = v87;
          if (v87 >= v89) {
            v91 = v87 % v89;
          }
        }
        else {
          v91 = v90 & v87;
        }
        v98 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v91);
        if (v98 == nullptr) {
          goto LABEL_250;
        }
        v99 = (_QWORD*)*v98;
        if (v99 == nullptr) {
          goto LABEL_250;
        }
        if ((v89 & v90) == 0) {
          while (1) {
            v101 = v99[1];
            if (v101 == v87) {
              if (v99[2] == v87) {
                goto LABEL_244;
              }
            }
            else if ((v101 & v90) != v91) {
              goto LABEL_250;
            }
            v99 = (_QWORD*)*v99;
            if (v99 == nullptr) {
              goto LABEL_250;
            }
          }
        }
        while (1) {
          v100 = v99[1];
          if (v100 == v87) {
            break;
          }
          if (v100 >= v89) {
            v100 %= v89;
          }
          if (v100 != v91) {
            goto LABEL_250;
          }
        LABEL_214:
          v99 = (_QWORD*)*v99;
          if (v99 == nullptr) {
            goto LABEL_250;
          }
        }
        if (v99[2] != v87) {
          goto LABEL_214;
        }
      LABEL_244:
        v88 = v99[3];
        if (v88 != 0) {
          v113 = game_gmap_1347cc0(v85);
          result = GameRoutine_133e110();
          if ((result & 1) == 0) {
            goto LABEL_287;
          }
          result = GameRoutine_1545120(*(_QWORD*)(v2 + 8), v147 + 24);
          if ((result & 1) != 0) {
            goto LABEL_287;
          }
          v144 = GameData_1fa69a0;
          v146 = &v144;
          v114 = game_gmap_TroopMgr_CountTroop_134e600(v85, &v144);
          result = (unsigned __int64)v146;
          if (v146 == &v144) {
            v116 = 4;
          LABEL_285:
            result = (*v146)[v116]();
          }
          else if (v146 != nullptr) {
            v116 = 5;
            goto LABEL_285;
          }
          LANES128(v115).n128_u32[0] = v114;
          v127 = COERCE_AS(int8x16_t, *GameData_212c670);
          LANES128(v127).n128_f32[0] = -COERCE_FLOAT(*GameData_212c670);
          v128 = vbslq_s8(
              vdupq_lane_s32(
                  COERCE_AS(int32x2_t,
                            LANES128_OF(vceqq_s32(v115, v136)).n128_u64[0]),
                  0),
              v127, *(int8x16_t*)GameData_212c670);
          *(_QWORD*)(v113 + 64) = LANES128(v128).n128_u64[0];
          v129 = *(_OWORD*)(v113 + 64);
          *((_QWORD*)&v129 + 1) = LANES128(v128).n128_u32[2];
          *(_OWORD*)(v113 + 64) = v129;
          goto LABEL_287;
        }
      LABEL_250:
        if ((*(_BYTE*)(v147 + 24) & 1) != 0) {
          v117 = *(_QWORD*)(v147 + 40);
        }
        else {
          v117 = v147 + 25;
        }
        result = game_HashString(v117, v88);
        if (result != 0) {
          v118 = *(_QWORD*)(GameData_21c9f00 + 96);
          if (v118 != 0 && *(_QWORD*)(GameData_21c9f00 + 112) != 0) {
            v120 = v118 - 1;
            if ((v118 & (v118 - 1)) != 0) {
              v121 = result;
              if (result >= v118) {
                v121 = result % v118;
              }
            }
            else {
              v121 = v120 & result;
            }
            v122 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f00 + 88) + 8 * v121);
            if (v122 != nullptr) {
              v123 = (_QWORD*)*v122;
              if (v123 != nullptr) {
                if ((v118 & v120) == 0) {
                  while (1) {
                    v125 = v123[1];
                    if (v125 == result) {
                      if (v123[2] == result) {
                        goto LABEL_278;
                      }
                    }
                    else if ((v125 & v120) != v121) {
                      goto LABEL_287;
                    }
                    v123 = (_QWORD*)*v123;
                    if (v123 == nullptr) {
                      goto LABEL_287;
                    }
                  }
                }
                do {
                  v124 = v123[1];
                  if (v124 == result) {
                    if (v123[2] == result) {
                    LABEL_278:
                      if (v123[3] != 0) {
                        result =
                            GameData_21c96e8 != 0
                                ? game_gmap_1347b30(
                                      *(_QWORD*)(GameData_21c96e8 + 8), v85)
                                : 0LL;
                        v126 = *(_WORD*)(result + 544);
                        if ((v126 & 0x40) == 0) {
                          *(_WORD*)(result + 544) = v126 | 0x40;
                        }
                      }
                      break;
                    }
                  }
                  else {
                    if (v124 >= v118) {
                      v124 %= v118;
                    }
                    if (v124 != v121) {
                      break;
                    }
                  }
                  v123 = (_QWORD*)*v123;
                } while (v123 != nullptr);
              }
            }
          }
        }
      LABEL_287:
        v82 = 1;
      LABEL_288:
        v130 = *(_QWORD*)(v2 + 8);
        if (*(_QWORD*)(v130 + 32) == *(_QWORD*)(v130 + 24)) {
          ++*(_DWORD*)(v130 + 48);
          v11 = v147;
          if (v147 == 0) {
            continue;
          }
        }
        else {
          ++*(_DWORD*)(v130 + 52);
          v11 = v147;
          if (v147 == 0) {
            continue;
          }
        }
        v131 = v148;
        if (v11 == v148) {
          goto LABEL_17;
        }
        v132 = v148;
        do {
          v133 = *(_BYTE*)(v132 - 24);
          v132 -= 24;
          if ((v133 & 1) != 0) {
            v134 = *(_QWORD*)(v131 - 8);
            if (v134 != 0) {
              if (*(_QWORD*)(*v10 + 200LL) != 0) {
                v135 = 128;
              }
              else {
                v135 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v10 + v135, v134);
            }
          }
          v131 = v132;
        } while (v132 != v11);
        v148 = v11;
        v11 = v147;
        if (v147 != 0) {
        LABEL_17:
          if (*(_QWORD*)(*v10 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v12, v11);
        }
      } while ((v82 & 1) != 0);
    }
  }
  return result;
}

__int64 game_gmap_13339e0()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  unsigned int v3;
  __int64 v4;
  _QWORD** v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v12;
  int v13;
  int v14;
  _QWORD* v15;

  v0 = *(_QWORD*)(*GameData_212c780 + 8);
  v1 = *(__int64**)(v0 + 48);
  v2 = *(__int64**)(v0 + 56);
  if (v1 == v2) {
    return 0;
  }
  else {
    v3 = 0;
    v4 = *(_QWORD*)GameData_212c7a0[0];
    v5 = (_QWORD**)GameData_212c6a0[0];
    do {
      v7 = *v1;
      if ((unsigned __int8)Impl_13261c0(*v1) == 9) {
        v8 = *(_QWORD*)(v4 + 16);
        v9 = *(_QWORD**)(v8 + 80);
        v10 = *(_QWORD**)(v8 + 88);
        if (v9 != v10) {
          while (*v9 != *(_QWORD*)(v7 + 96)) {
            v9 += 9;
            if (v9 == v10) {
              goto LABEL_5;
            }
          }
          v12 = (__int64*)v9[6];
          v11 = (__int64*)v9[7];
          if ((int)((unsigned __int64)((char*)v11 - (char*)v12) >> 3) >= 1) {
            if (v12 == v11) {
              v6 = 1;
            }
            else {
              v13 = 0;
              do {
                v15 = GameRoutine_dbc1e0(*v5, *v12);
                v14 = v15 == nullptr || *((_DWORD*)v15 + 3) == 0;
                v13 += v14;
                ++v12;
              } while (v12 != v11);
              v6 = v13 == 0;
            }
            v3 += v6;
          }
        }
      }
    LABEL_5:
      ++v1;
    } while (v1 != v2);
  }
  return v3;
}

__int64* game_gmap_1333b20()
{
  __int64 v0;
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64* result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21c9700 + 8);
  v1 = *(__int64**)(v0 + 48);
  for (i = *(__int64**)(v0 + 56); v1 != i; result = GameRoutine_1328d60(v3)) {
    v3 = *v1++;
  }
  return result;
}

__int64 game_gmap_1337000()
{
  __int64 v0;
  __int64** v1;
  __int64** i;
  __int64* v3;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21c9700 + 8);
  v1 = *(__int64***)(v0 + 48);
  for (i = *(__int64***)(v0 + 56); v1 != i;
       result = GameHr_14a1390(v3 + 33, 1)) {
    v3 = *v1++;
    GameHr_14a1390(v3 + 23, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameHr_14a1390(v3 + 25, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameHr_14a1390(v3 + 27, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameHr_14a1390(v3 + 29, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameHr_14a1390(v3 + 31, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  return result;
}

__int64 game_gmap_14a9e00()
{
  __int64 v0;
  __int64** v1;
  __int64** v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_22416b0 + 8);
  v1 = *(__int64***)v0;
  v2 = *(__int64***)(v0 + 8);
  if (*(__int64***)v0 != v2) {
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      v4 = *v1;
      if (*v1 != nullptr) {
        GameHr_14a7290(*v1),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, v4);
      }
      ++v1;
    } while (v1 != v2);
    v1 = *(__int64***)v0;
  }
  v7 = *(__int64**)(v0 + 48);
  v8 = *(__int64**)(v0 + 56);
  *(_QWORD*)(v0 + 8) = v1;
  if (v7 != v8) {
    v9 = fw_memory_g_heap_manager_ptr;
    do {
      v11 = *v7;
      if (*v7 != 0) {
        GameHr_14a1520((__int64*)(v11 + 8), 1),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v12 = *(_QWORD*)(v11 + 16);
        if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
              result =
                  COERCE_AS(__typeof__(result),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          std___1___shared_weak_count___release_weak(v12),
              result =
                  COERCE_AS(__typeof__(result),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v10, v11);
      }
      ++v7;
    } while (v7 != v8);
    v7 = *(__int64**)(v0 + 48);
  }
  *(_QWORD*)(v0 + 56) = v7;
  return result;
}

__int64 game_gmap_14aa080()
{
  __int64 v0;
  __int64** v1;
  __int64** v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64** v7;
  __int64** v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_22416b0 + 8);
  v1 = *(__int64***)v0;
  v2 = *(__int64***)(v0 + 8);
  if (*(__int64***)v0 != v2) {
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      v4 = *v1;
      if (*v1 != nullptr) {
        GameHr_14a7290(*v1),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, v4);
      }
      ++v1;
    } while (v1 != v2);
    v1 = *(__int64***)v0;
  }
  *(_QWORD*)(v0 + 8) = v1;
  v7 = *(__int64***)(v0 + 24);
  v8 = *(__int64***)(v0 + 32);
  if (v7 != v8) {
    v9 = fw_memory_g_heap_manager_ptr;
    do {
      v10 = *v7;
      if (*v7 != nullptr) {
        GameHr_14a7290(*v7),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11, v10);
      }
      ++v7;
    } while (v7 != v8);
    v7 = *(__int64***)(v0 + 24);
  }
  *(_QWORD*)(v0 + 32) = v7;
  *(_BYTE*)(v0 + 72) = 0;
  return result;
}

__int64* game_gmap_14c6e20()
{
  __int64 v0;
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64* result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21c9700 + 8);
  v1 = *(__int64**)(v0 + 48);
  for (i = *(__int64**)(v0 + 56); v1 != i; result = GameRoutine_1328d60(v3)) {
    v3 = *v1++;
  }
  return result;
}

__int64 game_gmap_14ca660()
{
  __int64 v0;
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(__int64**)(v0 + 8);
  for (i = *(__int64**)(v0 + 16); v1 != i;
       result = game_gmap_Troop_OnEndPhase(v3)) {
    v3 = *v1++;
  }
  return result;
}

#pragma GCC visibility pop
