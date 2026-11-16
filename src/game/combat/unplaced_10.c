#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_e5d5a0(__int64*, _QWORD*);
_QWORD* Situation_767300(__int64*, _QWORD*);
__attribute__((swiftcall)) void
CharacterSound_1096110(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, float);
__attribute__((swiftcall)) void
CharacterSound_10962d0(PSEUDO_X8, __int64, __int64, unsigned __int64);
__attribute__((swiftcall)) void game_108d130(PSEUDO_X8, __int64, const char*,
                                             float32x4_t*, __int64*,
                                             long double);
__attribute__((swiftcall)) void game_108db00(PSEUDO_X8, __int64, char*,
                                             float32x4_t*, float);
__attribute__((swiftcall)) void game_108dd30(PSEUDO_X8, __int64, const char*,
                                             float32x4_t*, float32x4_t*,
                                             int8x16_t*, long double);
__attribute__((swiftcall)) void game_108df10(PSEUDO_X8, __int64, const char*,
                                             int8x16_t*, long double);
__attribute__((swiftcall)) void game_108e3e0(PSEUDO_X8, __int64, char*, char*,
                                             unsigned int, char, float);
__attribute__((swiftcall)) void game_character_10b49e0(PSEUDO_X8,
                                                       __int64 result, _BYTE*);
__attribute__((swiftcall)) void game_character_10b4c40(PSEUDO_X8, __int64,
                                                       _BYTE*);
__int64 (***game_10c1280(__int64 (***result)(), __int64))();
__int64 CharacterAppearance_10743e0(__int64);
__int64 CombatCharacterSound_1091900(_QWORD*);
__int64 GameRoutine_10b5e70(__int64 result, int);
__int64 GameRoutine_14a1390(__int64*, char);
__int64 GameRoutine_14a1520(__int64*, char);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_character_1084940(__int64 result, char, float);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_playAt_ff4e0(__int64, __int64, __int64, unsigned int, unsigned int,
                         int, float, float, float, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__n128 GameRoutine_109ded0(__int128*, int8x16_t*, __int64);
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_1ad3c32;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_21a5670;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6180;
extern __int64* GameData_212d448[9];
extern __int64 GameData_2131678;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2235e30;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char** GameData_212fed8;
extern char GameData_1a9f09e;
float32x4_t GameRoutine_10a3bd0(float32x4_t*);
float32x4_t MagicInst_10a3950(float32x4_t*, float32x4_t*, float32x4_t*);
int GameRoutine_1a09d30(const char*, const char*);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
_QWORD* game_combat_1091e40(_QWORD* result, _DWORD* a2);
void game_combat_10a51c0(float32x4_t* a1, float a2);

_QWORD* game_combat_1091e40(_QWORD* result, _DWORD* a2)
{

#pragma clang fp contract(off)
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v9;
  _QWORD* v10;
  __int64 v13;
  unsigned int v14;
  _DWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  bool v20;
  _QWORD* v21;
  unsigned int v22;
  __int64 v23;
  __int64 v25;
  bool v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int128 v31;
  __int64 v32;
  __int128 v33;
  int v34;
  int* v35;
  int v36;
  int v37;
  int v38;
  _QWORD* v39;
  float v40;
  char* v41;
  char* v42;
  float v43;
  char* v44;
  int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _BYTE* v52;
  _DWORD* v53;
  struct {
    _QWORD v54[2];
    char gap16_[8];
    _QWORD v55[2];
    int v56;
  } f_;

  if (GameData_21ec7b0 == 0) {
    return result;
  }
  v2 = a2[2];
  if (v2 > 3) {
    return result;
  }
  v3 = GameData_21ec7b0 + 24LL * v2;
  v4 = *(_QWORD*)(v3 + 32);
  if (v4 == 0) {
    return result;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v5 = *(_QWORD*)(v3 + 40);
  if (*(_QWORD*)(v4 + 8) != -1 & v5 != 0) {
    v7 = *(_QWORD*)(v5 + 80);
    if (v7 != 0 && *(_QWORD*)(v7 + 8) != -1 & *(_QWORD*)(v5 + 88) != 0) {
      v9 = *(_QWORD*)(v4 + 8);
      v10 = result;
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v4);
      if (v9 == -1 | v5 != v10[1]) {
        return result;
      }
      result = (_QWORD*)CombatCharacterSound_1091900(v10);
      if (result == nullptr) {
        return result;
      }
      v13 = GameData_21ec7b0;
      if (GameData_21ec7b0 == 0) {
        return result;
      }
      v14 = a2[3];
      v15 = a2;
      if (v14 <= 3) {
        v16 = GameData_21ec7b0 + 24LL * v14;
        v4 = *(_QWORD*)(v16 + 32);
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                    memory_order_relaxed);
          v17 = *(_QWORD*)(v16 + 40);
          if (*(_QWORD*)(v4 + 8) != -1 & v17 != 0) {
            v19 = *(_QWORD*)(v17 + 80);
            if (v19 != 0) {
              v20 = *(_QWORD*)(v19 + 8) == -1 | *(_QWORD*)(v17 + 88) == 0;
              if (!v20 && *(_QWORD*)(v4 + 8) != -1) {
                goto LABEL_47;
              }
            }
          }
          v21 = result;
          std___1___shared_weak_count___release_weak(v4);
          v13 = GameData_21ec7b0;
          result = v21;
          v15 = a2;
          if (GameData_21ec7b0 == 0) {
            return result;
          }
        }
      }
      v22 = v15[2];
      if (v22 > 3) {
        return result;
      }
      v23 = v13 + 24LL * v22;
      v4 = *(_QWORD*)(v23 + 32);
      if (v4 == 0) {
        return result;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v17 = *(_QWORD*)(v23 + 40);
      if (*(_QWORD*)(v4 + 8) != -1 & v17 != 0) {
        v25 = *(_QWORD*)(v17 + 80);
        if (v25 != 0) {
          v26 = *(_QWORD*)(v25 + 8) == -1 | *(_QWORD*)(v17 + 88) == 0;
          if (!v26 && *(_QWORD*)(v4 + 8) != -1) {
          LABEL_47:
            v27 = result;
            std___1___shared_weak_count___release_weak(v4);
            v28 = *(_QWORD*)(*(_QWORD*)(v17 + 88) + 136LL);
            *(_OWORD*)f_.v54 = (__typeof__(*(_OWORD*)f_.v54)){0};
            v29 = snd_fnd_WeakHandle_get(v28 + 72);
            if (v29 != 0) {
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
                  *(_QWORD*)(v29 - 5592) + 96LL))((void*)(f_.v55), v29 - 5592);
              *(_QWORD*)&v31 = f_.v55[1];
              {
                __typeof__(v30) z_ = (__typeof__(v30)){0};
                LODWORD(z_) = f_.v56;
                v30 = z_;
              }
              *((_QWORD*)&v31 + 1) = v30;
            }
            else {
              v32 = *(_QWORD*)(v28 + 8);
              v33 = *(_OWORD*)(v32 + 304);
              f_.v54[0] = *(_QWORD*)(v32 + 304);
              *(_QWORD*)&v31 = f_.v54[0];
              *((_QWORD*)&v31 + 1) = DWORD2(v33);
            }
            v34 = a2[17];
            v35 = a2;
            result = v27;
            *(_OWORD*)f_.v54 = v31;
            if ((v34 == -1911544118 || v34 == -1911544124) &&
                ((unsigned int)((v36 = a2[16]) - 989295305) <= 0x21 &&
                     ((1LL << ((unsigned __int8)v36 + 55)) & 0x200040007LL) !=
                         0 ||
                 (unsigned int)(v37 = v36 + 2068235592) <= 0x12 &&
                     ((1 << v37) & 0x40003) != 0)) {
              CharacterSound_1096110((void*)(f_.v55), v27,
                                     "SE_ACT_<LD/MB>_Parry", 0, f_.v54,
                                     0x1.0000000000000p+0f);
              result = v27;
              v35 = a2;
            }
            v38 = *v35;
            if ((v38 & 1) != 0) {
              v42 = "SE_ACT_<LD/MB>_Miss";
              v43 = 0x1.0000000000000p+0f;
              v44 = nullptr;
              return X8CALL_X0(void*,
                               CharacterSound_1096110((void*)(f_.v55), result,
                                                      v42, v44, f_.v54, v43));
            }
            if ((v38 & 4) != 0) {
              v41 = "SE_ACT_<LD/MB>_Hit_Critical";
              v40 = 0x1.0000000000000p+0f;
              v39 = result;
            }
            else {
              v39 = result;
              if ((v38 & 0x20) == 0) {
                goto LABEL_64;
              }
              v40 = 0x1.0000000000000p+0f;
              v41 = "SE_ACT_<LD/MB>_Hit_Special";
            }
            result =
                X8CALL_X0(void*, CharacterSound_1096110((void*)(f_.v55), result,
                                                        v41, 0, f_.v54, v40));
          LABEL_64:
            v45 = a2[16];
            if ((unsigned int)(v45 - 989295305) > 0x21 ||
                ((1LL << ((unsigned __int8)v45 + 55)) & 0x200040007LL) == 0) {
              v46 = v45 + 2068235592;
              if (v46 > 0x12 || ((1 << v46) & 0x40003) == 0) {
                return result;
              }
            }
            if ((*(_BYTE*)a2 & 8) != 0) {
              v42 = "SE_ACT_<LD/MB>_Guard_Normal";
              v43 = 0x1.0000000000000p+0f;
              result = v39;
              v44 = nullptr;
              return X8CALL_X0(void*,
                               CharacterSound_1096110((void*)(f_.v55), result,
                                                      v42, v44, f_.v54, v43));
            }
            v47 = v10[1];
            v48 = *(_QWORD*)(v47 + 80);
            if (v48 != 0) {
              v49 = 0;
              if (*(_QWORD*)(v48 + 8) != -1) {
                v50 = *(_QWORD*)(v47 + 88);
                if (v50 != 0) {
                  v49 = *(_QWORD*)(v50 + 392);
                  v51 = *(_QWORD*)(v50 + 400);
                  if (v51 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v51 + 8), 1u,
                        memory_order_relaxed);
                    if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
                      std___1___shared_weak_count___release_weak(v51);
                    }
                  }
                }
              }
            }
            else {
              v49 = 0;
            }
            result = (_QWORD*)CharacterAppearance_10743e0(v49);
            v44 = *(const char**)(v49 + 11712);
            v52 = a2;
            if (v44 != nullptr) {
              goto LABEL_94;
            }
            if ((int)result <= 3) {
              switch ((_DWORD)result) {
              case 1:
                v44 = "Sword";
                break;
              case 2:
                v44 = "Spear";
                break;
              case 3:
                v52 = a2;
                v44 = (const char*)&GameData_1ad3c32;
                goto LABEL_94;
              default:
                return result;
              }
              goto LABEL_93;
            }
            if ((_DWORD)result == 4) {
              v44 = "Arrow";
            LABEL_93:
              v52 = a2;
            LABEL_94:
              if ((*v52 & 4) != 0 ||
                  (signed __int32)(v53 = &a2[3 * a2[3]])[26] >= (int)v53[24] >>
                      1) {
                v42 = "SE_ACT_<LD/MB>_Hit_<Arg>_H";
              }
              else {
                v42 = "SE_ACT_<LD/MB>_Hit_<Arg>_L";
              }
              v43 = 0x1.0000000000000p+0f;
              result = v39;
              return X8CALL_X0(void*,
                               CharacterSound_1096110((void*)(f_.v55), result,
                                                      v42, v44, f_.v54, v43));
            }
            if ((_DWORD)result == 5) {
              v44 = "Punch";
              goto LABEL_93;
            }
            if ((_DWORD)result == 8 &&
                (unsigned int)(*(int*)(v49 + 11784) + 1) <= 0x24) {
              v52 = a2;
              v44 = GameData_212fed8[2 *
                                     (unsigned int)(*(int*)(v49 + 11784) + 1)];
              if (v44 != nullptr) {
                goto LABEL_94;
              }
            }
            return result;
          }
        }
      }
    }
  }
  return (_QWORD*)std___1___shared_weak_count___release_weak(v4);
}

void game_combat_10a51c0(float32x4_t* a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  float v13;
  unsigned int v15;
  __int64 v16;
  float v17;
  char v18;
  _BYTE* v19;
  _BYTE* v20;
  _BYTE* v21;
  __int64 v22;
  char v23;
  _BYTE* v24;
  _BYTE* v25;
  _BYTE* v26;
  float v27;
  float v28;
  __int128 v29;
  __int128 v30;
  unsigned __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int128 v38;
  __int128 v39;
  unsigned __int64 v40;
  bool v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int8* v45;
  int v46;
  unsigned __int64* v47;
  signed __int64 v48;
  char* v49;
  signed __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64** v54;
  __int64** v55;
  char* v56;
  int v57;
  __int64* v58;
  __int64 v59;
  int v60;
  __int64 v61;
  atomic_ullong* v62;
  unsigned __int64 add;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  __int64 v71;
  int v72;
  float32x4_t* v73;
  float32x4_t v74;
  __int128 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  int v81;
  int v82;
  __int64* v83;
  __int64 v84;
  float v85;
  __int64 v86;
  float v87;
  unsigned int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  bool v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  signed __int64 v99;
  unsigned __int64 v100;
  char* v101;
  __int64 v102;
  char* v103;
  int v104;
  __int64 v105;
  unsigned int v106;
  int32x4_t v107;
  __int64* v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  unsigned int v122;
  long double v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  int32x4_t v130;
  __int64* v131;
  unsigned __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  _QWORD* v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  int8x16_t v139;
  float32x4_t v140;
  float32x4_t v141;
  int8x16_t v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  char* v149;
  __int64 v150;
  char v151;
  _BYTE* v152;
  _BYTE* v153;
  _BYTE* v154;
  __int64 v155;
  float32x4_t v156;
  char v157;
  _BYTE* v158;
  _BYTE* v159;
  _BYTE* v160;
  int8x16_t v161;
  float32x4_t v162;
  float32x4_t v163;
  int8x16_t v164;
  unsigned __int64 v165;
  __int64 v166;
  __int64 v167;
  _QWORD* v168;
  unsigned __int64 v169;
  int v170;
  char* v171;
  unsigned __int64 v172;
  float v173;
  float v174;
  __int8* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  int v179;
  __int64 v180;
  __int64 v181;
  int v182;
  __int64 v183;
  __int64 v184;
  int v185;
  __int64 v186;
  __int64 v187;
  __int64* v188;
  float32x4_t* v189;
  float32x4_t* v190;
  __int64* v191;
  __int64* v192;
  int32x4_t v193;
  __int64 v194;
  __int64 v195;
  float32x4_t v197;
  __int128 v198;
  float32x4_t* v199;
  __int64 v200;
  __int64 v201;
  float32x4_t v202;
  int8x16_t v203;
  struct {
    char gap0_[176];
    float32x4_t v204;
    __int8* v205;
    char gap200_[8];
    int8x16_t v206;
    __int64 v207;
    __int64 v208;
  } f_;

  v3 = (__int64)a1;
  v4 = 0;
  v199 = a1 + 34;
  v191 = (__int64*)&a1[13];
  v192 = &LANES128(a1[11]).n128_i64[1];
  v195 = (__int64)&LANES128(a1[41]).n128_i64[1];
  v190 = a1 + 33;
  v189 = a1 + 48;
  v188 = (__int64*)&a1[32];
  v194 = GameData_2131678 + 16;
  LANES128(a1[50]).n128_u32[0] &= ~0x100u;
  v193 = vdupq_n_s32(0x42652EE1u);
  do {
    v200 = v4;
    v5 = (__int64)v199 + 24 * v4;
    if (*(_BYTE*)(v5 + 8) == 1) {
      v6 = *(float*)(v5 + 12);
      v7 = *(_QWORD**)v5;
      *(float*)(v5 + 12) = a2 + v6;
      v8 = v7[1] - *v7;
      if ((int)(v8 >> 6) >= 1) {
        v9 = (v8 >> 6) & 0x7FFFFFFF;
        v10 = 0;
        v201 = v9;
        do {
          v12 = (unsigned __int8*)(*v7 + (v10 << 6));
          if (*(_BYTE*)(v5 + 9) == 1 && *v12 != 4) {
            goto LABEL_9;
          }
          if ((*((_WORD*)v12 + 1) & 2) != 0) {
            goto LABEL_9;
          }
          v13 = (float)*((int*)v12 + 1) / 0x1.e000000000000p+5f;
          if (v6 > v13 || v13 >= (float)(a2 + v6)) {
            goto LABEL_9;
          }
          v15 = *v12;
          if (v15 > 3) {
            switch (v15) {
            case 4u:
              v40 = v12[8];
              v41 = (v40 & 1) == 0;
              v42 = v40 >> 1;
              if (v41) {
                v43 = (__int64)(v12 + 9);
              }
              else {
                v43 = *((_QWORD*)v12 + 3);
              }
              if (v41) {
                v44 = v42;
              }
              else {
                v44 = *((_QWORD*)v12 + 2);
              }
              CharacterSound_10962d0((void*)((__int64*)&f_.v204),
                                     *(_QWORD*)(*(_QWORD*)(v3 + 184) + 136LL),
                                     v43, v44);
              if (v200 == 3) {
                v45 = f_.v205;
                v46 = LANES128(f_.v204).n128_u8[0] & 1;
                v47 = v46 != 0 ? (unsigned __int64*)f_.v205
                               : (unsigned __int64*)((char*)LANES128(f_.v204)
                                                         .n128_u64 +
                                                     1);
                v48 = (LANES128(f_.v204).n128_u8[0] & 1) != 0
                          ? LANES128(f_.v204).n128_u64[1]
                          : (unsigned __int64)LANES128(f_.v204).n128_u8[0] >> 1;
                if (v48 >= 5) {
                  v49 = (char*)v47 + v48;
                  v50 = v48;
                  v51 = (__int64)v47;
                  while (1) {
                    v52 = GameRoutine_1a09c60(v51, 95, v50 - 4);
                    if (v52 == 0) {
                      goto LABEL_314;
                    }
                    if (*(_DWORD*)v52 == 1953056863 &
                        *(_BYTE*)(v52 + 4) == 95) {
                      break;
                    }
                    v51 = v52 + 1;
                    v50 = (signed __int64)&v49[-v51];
                    if ((__int64)&v49[-v51] < 5) {
                      goto LABEL_314;
                    }
                  }
                  if ((char*)v52 != v49 && v52 - (_QWORD)v47 != -1) {
                    if (*GameData_212d168 == 2) {
                      goto LABEL_318;
                    }
                    if (*(_DWORD*)(v3 + 232) != 2 &&
                        *((_WORD*)v49 - 1) == 19551) {
                      v99 = v48 - 2;
                      if (v46 != 0) {
                        LANES128(f_.v204).n128_u64[1] = v48 - 2;
                      }
                      else {
                        v45 = &LANES128(f_.v204).n128_i8[1];
                        LANES128(f_.v204).n128_u8[0] = 2 * v99;
                      }
                      v45[v99] = 0;
                      v170 = *(_DWORD*)(v3 + 232);
                      if (v170 != 1) {
                        if (v170 == 4) {
                          v171 = "_N";
                        }
                        else {
                          if (v170 == 5) {
                            v171 = "_Parry";
                            v172 = 6;
                          LABEL_313:
                            GameRoutine_1a09ce0((__int64)&f_.v204, v171, v172);
                            goto LABEL_314;
                          }
                          v171 = "_H";
                        }
                        v172 = 2;
                        goto LABEL_313;
                      }
                      v171 = "_Miss";
                      v172 = 5;
                      goto LABEL_313;
                    }
                  }
                }
              }
            LABEL_314:
              v198 = *(_OWORD*)(v3 + 464);
              {
                __typeof__(v173) z_ = (__typeof__(v173)){0};
                LODWORD(z_) = DWORDn(*(_QWORD*)(v3 + 464),
                                     sizeof(*(_QWORD*)(v3 + 464)) / 4 - 1);
                v173 = z_;
              }
              {
                __typeof__(v174) z_ = (__typeof__(v174)){0};
                LODWORD(z_) = *(_QWORD*)(v3 + 472);
                v174 = z_;
              }
              if ((LANES128(f_.v204).n128_u8[0] & 1) != 0) {
                v175 = f_.v205;
              }
              else {
                v175 = &LANES128(f_.v204).n128_i8[1];
              }
              snd_Fade_Fade_10c830((__int64)&f_.v206, 0x0.0p+0f);
              snd_playAt_ff4e0((__int64)&GameData_1a9f09e, (__int64)v175,
                               (__int64)&f_.v206, 0, 0x10001u, 0,
                               *(float*)&v198, v173, v174, 0x0.0p+0f,
                               0x1.0000000000000p+0f);
              snd_Fade_Destroy_Fade(&f_.v206);
              v46 = LANES128(f_.v204).n128_u8[0] & 1;
            LABEL_318:
              if (v46 != 0 && f_.v205 != nullptr) {
                v176 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v176 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v176,
                    (__int64)f_.v205);
              }
              goto LABEL_8;
            case 6u:
              if (v13 == *(float*)(v3 + 636)) {
                v57 = 512;
              }
              else {
                v57 = 256;
              }
              *(_DWORD*)(v3 + 800) |= v57;
              break;
            case 8u:
              v32 = *((_DWORD*)v12 + 14);
              if (v32 == 1) {
                v64 = *(_QWORD*)(v3 + 200);
                if (v64 == 0) {
                  break;
                }
                v65 = *(_QWORD*)(v64 + 8);
                v35 = v191;
                if (v65 == -1) {
                  break;
                }
              }
              else {
                if (v32 != 0) {
                  break;
                }
                v33 = *(_QWORD*)(v3 + 176);
                if (v33 == 0) {
                  break;
                }
                v34 = *(_QWORD*)(v33 + 8);
                v35 = v192;
                if (v34 == -1) {
                  break;
                }
              }
              if (*v35 != 0) {
                game_character_1084940(*v35, 0, *((float*)v12 + 15));
                goto LABEL_8;
              }
              break;
            default:
              break;
            }
          }
          else {
            switch (v15) {
            case 1u:
              v36 = v12[32];
              if ((v36 & 1) != 0) {
                v37 = *((_QWORD*)v12 + 5);
              }
              else {
                v37 = v36 >> 1;
              }
              if (v37 == 0) {
                break;
              }
              if (v200 == 3 && (*(_DWORD*)(v3 + 232) & 0xFFFFFFFE) == 4) {
                if (*(_BYTE*)(v3 + 784) == 1) {
                  v38 = *(_OWORD*)(v3 + 464);
                  *(_QWORD*)(v3 + 768) = v38;
                  v39 = *(_OWORD*)(v3 + 768);
                  *((_QWORD*)&v39 + 1) = DWORD2(v38);
                  *(_OWORD*)(v3 + 768) = v39;
                }
                else {
                  v100 = *(_QWORD*)(v3 + 472);
                  LANES128(*(v189)).n128_u64[0] = *(_QWORD*)(v3 + 464);
                  LANES128(*(v189)).n128_u64[1] = v100;
                  *(_BYTE*)(v3 + 784) = 1;
                }
                if (*(_DWORD*)(v3 + 160) == 1) {
                  break;
                }
              }
              if ((v12[8] & 1) != 0) {
                v101 = *((char**)v12 + 3);
              }
              else {
                v101 = (char*)(v12 + 9);
              }
              v102 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
              *(_QWORD*)(v102 + 8) = 0;
              *(_QWORD*)(v102 + 16) = 0;
              *(_DWORD*)(v102 + 32) = 0;
              *(_QWORD*)(v102 + 40) = 0;
              *(_DWORD*)(v102 + 104) = 0;
              *(_QWORD*)(v102 + 56) = 0;
              *(_QWORD*)(v102 + 64) = 0;
              *(_QWORD*)(v102 + 72) = 0;
              *(_WORD*)(v102 + 80) = 0;
              *(_WORD*)(v102 + 116) = 0;
              *(_WORD*)(v102 + 136) = 0;
              *(_BYTE*)(v102 + 160) = 0;
              *(_BYTE*)(v102 + 288) = 0;
              *(_QWORD*)(v102 + 272) = 0;
              *(_QWORD*)(v102 + 280) = 0;
              *(_QWORD*)(v102 + 256) = 0;
              *(_QWORD*)(v102 + 264) = 0;
              *(_QWORD*)(v102 + 240) = 0;
              *(_QWORD*)(v102 + 248) = 0;
              *(_QWORD*)(v102 + 224) = 0;
              *(_QWORD*)(v102 + 232) = 0;
              *(_QWORD*)(v102 + 208) = 0;
              *(_QWORD*)(v102 + 216) = 0;
              *(_QWORD*)(v102 + 192) = 0;
              *(_QWORD*)(v102 + 200) = 0;
              *(_QWORD*)(v102 + 176) = 0;
              *(_QWORD*)(v102 + 184) = 0;
              *(_QWORD*)(v102 + 168) = 0;
              *(_QWORD*)(v102 + 120) = 0;
              *(_DWORD*)(v102 + 127) = 0;
              LANES128(f_.v204).n128_u64[1] = v102;
              *(_QWORD*)v102 = v194;
              *(_DWORD*)(v102 + 48) = 0x2000;
              *(_WORD*)(v102 + 108) = 256;
              *(_DWORD*)(v102 + 112) = -1082130432;
              *(_DWORD*)(v102 + 292) = 2;
              *(_QWORD*)(v102 + 24) = 0;
              LANES128(f_.v204).n128_u64[0] = v102 + 24;
              if ((v12[32] & 1) != 0) {
                v103 = *((char**)v12 + 6);
              }
              else {
                v103 = (char*)(v12 + 33);
              }
              v104 = (unsigned __int8)*v103;
              if (v104 == 32) {
                v105 = *(_QWORD*)(*(_QWORD*)(v3 + 184) + 80LL);
                v106 = v12[1];
                if (v106 > 2) {
                  if (v106 != 3) {
                    if (v106 != 4) {
                      goto LABEL_293;
                    }
                    v117 = *(_QWORD*)(v3 + 464);
                    v118 = *(_QWORD*)(v3 + 472);
                    v119 = *(_QWORD*)(*(_QWORD*)(v3 + 184) + 80LL);
                    f_.v207 = 0;
                    f_.v208 = 0;
                    f_.v206 = (__typeof__(f_.v206)){0};
                    LANES128(v203).n128_u64[0] = v117;
                    LANES128(v203).n128_u64[1] = v118;
                    GameRoutine_109ded0((__int128*)&f_.v206, &v203, 0);
                    LANES128(v203).n128_f32[1] =
                        LANES128(f_.v206).n128_f32[1] + 0x1.eb851e0000000p-6f;
                    game_108db00((void*)(&f_.v206), v119, v101, &v203,
                                 -0x1.0000000000000p+0f);
                    v110 = LANES128(f_.v206).n128_i64[1];
                    v109 = LANES128(f_.v206).n128_u64[0];
                    if (LANES128(f_.v206).n128_u64[1] == 0) {
                      goto LABEL_185;
                    }
                    goto LABEL_184;
                  }
                  v138 = *(_QWORD*)(v3 + 488);
                  LANES128(f_.v206).n128_u64[0] =
                      (unsigned int)*(_QWORD*)(v3 + 480);
                  LANES128(f_.v206).n128_u64[1] = v138;
                  v139 = vmulq_f32(f_.v206, f_.v206);
                  LANES128(v139).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v139, v139, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v139).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v139).n128_u64[0] =
                      LANES64_OF(
                          vpadd_f32(COERCE_AS(float32x2_t,
                                              LANES128(v139).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v139).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v139).n128_u64[1] = LANES128(v139).n128_u64[0];
                  v140 = vrsqrteq_f32(v139);
                  v141 = vmulq_f32(v140,
                                   vrsqrtsq_f32(v140, vmulq_f32(v139, v140)));
                  v142 = vbicq_s8(
                      vmulq_f32(
                          f_.v206,
                          vmulq_f32(v141,
                                    vrsqrtsq_f32(v141, vmulq_f32(v139, v141)))),
                      vceqzq_f32(v139));
                  f_.v206 = v142;
                  if (LANES128(v139).n128_f32[0] != 0x0.0p+0f) {
                    if ((atomic_load_explicit(
                             (atomic_uchar* volatile)&GameData_21a6190,
                             memory_order_acquire) &
                         1) == 0) {
                      v184 = v105;
                      v185 = __cxa_guard_acquire((__int64)&GameData_21a6190);
                      v105 = v184;
                      if (v185 != 0) {
                        v186 = *((_QWORD*)GameData_212c558 + 1);
                        *(_QWORD*)&GameData_21a6180 =
                            *(_QWORD*)GameData_212c558;
                        *((_QWORD*)&GameData_21a6180 + 1) = v186;
                        __cxa_guard_release((__int64)&GameData_21a6190);
                        v105 = v184;
                      }
                    }
                    PSEUDO_LOW_LANE128(
                        v142, n128_u32,
                        COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f)));
                    game_108dd30((void*)(&v203), v105, v101,
                                 (float32x4_t*)(v3 + 464), &f_.v206,
                                 (int8x16_t*)&GameData_21a6180,
                                 *(long double*)&v142);
                    v144 = LANES128(v203).n128_i64[1];
                    v143 = LANES128(v203).n128_u64[0];
                    if (LANES128(v203).n128_u64[1] != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(LANES128(v203).n128_u64[1] +
                                                    8),
                          1u, memory_order_relaxed);
                    }
                    v145 = LANES128(f_.v204).n128_i64[1];
                    LANES128(f_.v204).n128_u64[0] = v143;
                    LANES128(f_.v204).n128_u64[1] = v144;
                    if (v145 != 0) {
                      if (atomic_fetch_add((atomic_ullong* volatile)(v145 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v145 + 16LL))(v145);
                        std___1___shared_weak_count___release_weak(v145);
                      }
                      v144 = LANES128(f_.v204).n128_i64[1];
                    }
                    if (v144 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v144 + 8), 1u,
                          memory_order_relaxed);
                      if (atomic_fetch_add((atomic_ullong* volatile)(v144 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v144 + 16LL))(v144);
                        std___1___shared_weak_count___release_weak(v144);
                      }
                    }
                    v113 = LANES128(v203).n128_i64[1];
                    if (LANES128(v203).n128_u64[1] != 0) {
                      goto LABEL_252;
                    }
                  }
                }
                else {
                  if (v106 != 1) {
                    if (v106 != 2) {
                      goto LABEL_293;
                    }
                    if ((atomic_load_explicit(
                             (atomic_uchar* volatile)&GameData_21a6130,
                             memory_order_acquire) &
                         1) == 0) {
                      v178 = v105;
                      v179 = __cxa_guard_acquire((__int64)&GameData_21a6130);
                      v105 = v178;
                      if (v179 != 0) {
                        v180 = *((_QWORD*)GameData_212c540 + 1);
                        *(_QWORD*)&GameData_21a6120 =
                            *(_QWORD*)GameData_212c540;
                        *((_QWORD*)&GameData_21a6120 + 1) = v180;
                        __cxa_guard_release((__int64)&GameData_21a6130);
                        v105 = v178;
                      }
                    }
                    v107 = vmvnq_s8(vceqq_f32(
                        *v190, COERCE_AS(float32x4_t, GameData_21a6120)));
                    LANES128(v107).n128_u64[0] =
                        LANES64_OF(vmovn_s32(v107)).n64_u64[0];
                    if ((LANES128(v107).n128_u8[0] & 1) != 0 ||
                        (LANES128(v107).n128_u8[2] & 1) != 0 ||
                        (v108 = v188, (LANES128(v107).n128_u8[4] & 1) != 0)) {
                      v108 = (__int64*)v190;
                    }
                    LANES128(v107).n128_u32[0] =
                        COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
                    game_108d130((void*)(&f_.v206), v105, v101,
                                 (float32x4_t*)(v3 + 464), v108,
                                 *(long double*)&v107);
                    v110 = LANES128(f_.v206).n128_i64[1];
                    v109 = LANES128(f_.v206).n128_u64[0];
                    if (LANES128(f_.v206).n128_u64[1] == 0) {
                    LABEL_185:
                      v120 = LANES128(f_.v204).n128_i64[1];
                      LANES128(f_.v204).n128_u64[0] = v109;
                      LANES128(f_.v204).n128_u64[1] = v110;
                      if (v120 != 0) {
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v120 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v120 + 16LL))(v120);
                          std___1___shared_weak_count___release_weak(v120);
                        }
                        v110 = LANES128(f_.v204).n128_i64[1];
                      }
                      if (v110 != 0) {
                        atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v110 + 8), 1u,
                            memory_order_relaxed);
                        if (atomic_fetch_add(
                                (atomic_ullong* volatile)(v110 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
                          std___1___shared_weak_count___release_weak(v110);
                        }
                      }
                      v113 = LANES128(f_.v206).n128_i64[1];
                      if (LANES128(f_.v206).n128_u64[1] == 0) {
                        goto LABEL_293;
                      }
                    LABEL_252:
                      if (atomic_fetch_add((atomic_ullong* volatile)(v113 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) != 0) {
                        goto LABEL_293;
                      }
                      (*(void (**)(__int64))(*(_QWORD*)v113 + 16LL))(v113);
                    LABEL_292:
                      std___1___shared_weak_count___release_weak(v113);
                      goto LABEL_293;
                    }
                  LABEL_184:
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v110 + 8), 1u,
                        memory_order_relaxed);
                    goto LABEL_185;
                  }
                  if ((atomic_load_explicit(
                           (atomic_uchar* volatile)&GameData_21a6130,
                           memory_order_acquire) &
                       1) == 0) {
                    v181 = v105;
                    v182 = __cxa_guard_acquire((__int64)&GameData_21a6130);
                    v105 = v181;
                    if (v182 != 0) {
                      v183 = *((_QWORD*)GameData_212c540 + 1);
                      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                      *((_QWORD*)&GameData_21a6120 + 1) = v183;
                      __cxa_guard_release((__int64)&GameData_21a6130);
                      v105 = v181;
                    }
                  }
                  v130 = vmvnq_s8(vceqq_f32(
                      *v190, COERCE_AS(float32x4_t, GameData_21a6120)));
                  LANES128(v130).n128_u64[0] =
                      LANES64_OF(vmovn_s32(v130)).n64_u64[0];
                  if ((LANES128(v130).n128_u8[0] & 1) != 0 ||
                      (LANES128(v130).n128_u8[2] & 1) != 0 ||
                      (v131 = v188, (LANES128(v130).n128_u8[4] & 1) != 0)) {
                    v131 = (__int64*)v190;
                  }
                  LANES128(v130).n128_u32[0] =
                      COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
                  game_108d130((void*)(&f_.v206), v105, v101,
                               (float32x4_t*)(v3 + 464), v131,
                               *(long double*)&v130);
                  v133 = LANES128(f_.v206).n128_i64[1];
                  v132 = LANES128(f_.v206).n128_u64[0];
                  if (LANES128(f_.v206).n128_u64[1] != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(LANES128(f_.v206)
                                                      .n128_u64[1] +
                                                  8),
                        1u, memory_order_relaxed);
                  }
                  v134 = LANES128(f_.v204).n128_i64[1];
                  LANES128(f_.v204).n128_u64[0] = v132;
                  LANES128(f_.v204).n128_u64[1] = v133;
                  if (v134 != 0) {
                    if (atomic_fetch_add((atomic_ullong* volatile)(v134 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v134 + 16LL))(v134);
                      std___1___shared_weak_count___release_weak(v134);
                    }
                    v133 = LANES128(f_.v204).n128_i64[1];
                  }
                  if (v133 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v133 + 8), 1u,
                        memory_order_relaxed);
                    if (atomic_fetch_add((atomic_ullong* volatile)(v133 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v133 + 16LL))(v133);
                      std___1___shared_weak_count___release_weak(v133);
                    }
                  }
                  v135 = LANES128(f_.v206).n128_i64[1];
                  if (LANES128(f_.v206).n128_u64[1] != 0 &&
                      atomic_fetch_add(
                          (atomic_ullong* volatile)(LANES128(f_.v206)
                                                        .n128_u64[1] +
                                                    8),
                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v135 + 16LL))(v135);
                    std___1___shared_weak_count___release_weak(v135);
                  }
                  v136 = *(_QWORD**)(v3 + 256);
                  if ((unsigned __int64)v136 >= *(_QWORD*)(v3 + 264)) {
                    *(_QWORD*)(v3 + 256) =
                        GameRoutine_e5d5a0((__int64*)(v3 + 248), &f_.v204);
                  }
                  else {
                    *v136 = LANES128(f_.v204).n128_u64[0];
                    v137 = LANES128(f_.v204).n128_u64[1];
                    v136[1] = LANES128(f_.v204).n128_u64[1];
                    if (v137 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v137 + 8), 1u,
                          memory_order_relaxed);
                    }
                    *(_QWORD*)(v3 + 256) = v136 + 2;
                  }
                }
              LABEL_293:
                if (*(_QWORD*)LANES128(f_.v204).n128_u64[0] != 0 &&
                    *(_DWORD*)(*(_QWORD*)LANES128(f_.v204).n128_u64[0] +
                               16LL) ==
                        *(_DWORD*)(LANES128(f_.v204).n128_u64[0] + 8)) {
                  v168 = *(_QWORD**)(v3 + 280);
                  if ((unsigned __int64)v168 < *(_QWORD*)(v3 + 288)) {
                    *v168 = LANES128(f_.v204).n128_u64[0];
                    v169 = LANES128(f_.v204).n128_u64[1];
                    v168[1] = LANES128(f_.v204).n128_u64[1];
                    if (v169 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v169 + 8), 1u,
                          memory_order_relaxed);
                    }
                    *(_QWORD*)(v3 + 280) = v168 + 2;
                    goto LABEL_299;
                  }
                  *(_QWORD*)(v3 + 280) =
                      Situation_767300((__int64*)(v3 + 272), &f_.v204);
                  v116 = LANES128(f_.v204).n128_i64[1];
                  if (LANES128(f_.v204).n128_u64[1] == 0) {
                    goto LABEL_8;
                  }
                }
                else {
                LABEL_299:
                  v116 = LANES128(f_.v204).n128_i64[1];
                  if (LANES128(f_.v204).n128_u64[1] == 0) {
                    goto LABEL_8;
                  }
                }
              LABEL_300:
                if (atomic_fetch_add((atomic_ullong* volatile)(v116 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v116 + 16LL))(v116);
                  std___1___shared_weak_count___release_weak(v116);
                }
                goto LABEL_8;
              }
              v41 = v104 == 62;
              v111 = 24;
              if (!v41) {
                v111 = 0;
              }
              v112 = v195 + v111;
              v113 = *(_QWORD*)(v112 + 8);
              if (v113 == 0) {
                goto LABEL_299;
              }
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v113 + 16),
                                        1u, memory_order_relaxed);
              v114 = *(_QWORD*)(v112 + 16);
              if (*(_QWORD*)(v113 + 8) == -1 | v114 == 0) {
                std___1___shared_weak_count___release_weak(v113);
                v116 = LANES128(f_.v204).n128_i64[1];
                if (LANES128(f_.v204).n128_u64[1] == 0) {
                  goto LABEL_8;
                }
                goto LABEL_300;
              }
              v121 = *(_QWORD*)(v114 + 80);
              v122 = v12[1];
              if (v122 > 2) {
                if (v122 == 3) {
                  game_character_10b49e0((void*)(&v203), v195, v103);
                  v150 = *(_QWORD*)(v3 + 152);
                  v151 = *(_BYTE*)(v150 + 56);
                  v152 = *(_BYTE**)(v150 + 72);
                  v153 = (_BYTE*)(v150 + 57);
                  if ((v151 & 1) != 0) {
                    v154 = v152;
                  }
                  else {
                    v154 = v153;
                  }
                  game_character_10b49e0((void*)(&f_.v206), v195, v154);
                  v155 = *(_QWORD*)(v3 + 152);
                  v156 = vaddq_f32(f_.v206, *(float32x4_t*)(v3 + 752));
                  v157 = *(_BYTE*)(v155 + 32);
                  v158 = *(_BYTE**)(v155 + 48);
                  v159 = (_BYTE*)(v155 + 33);
                  if ((v157 & 1) != 0) {
                    v160 = v158;
                  }
                  else {
                    v160 = v159;
                  }
                  v197 = v156;
                  game_character_10b49e0((void*)(&v202), v195, v160);
                  f_.v206 = vsubq_f32(v197, v202);
                  LANES128(f_.v206).n128_u32[1] = 0;
                  v161 = vmulq_f32(f_.v206, f_.v206);
                  LANES128(v161).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v161, v161, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v161).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v161).n128_u64[0] =
                      LANES64_OF(
                          vpadd_f32(COERCE_AS(float32x2_t,
                                              LANES128(v161).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v161).n128_u64[0])))
                          .n64_u64[0];
                  LANES128(v161).n128_u64[1] = LANES128(v161).n128_u64[0];
                  v162 = vrsqrteq_f32(v161);
                  v163 = vmulq_f32(v162,
                                   vrsqrtsq_f32(v162, vmulq_f32(v161, v162)));
                  v164 = vbicq_s8(
                      vmulq_f32(
                          f_.v206,
                          vmulq_f32(v163,
                                    vrsqrtsq_f32(v163, vmulq_f32(v161, v163)))),
                      vceqzq_f32(v161));
                  f_.v206 = v164;
                  if ((atomic_load_explicit(
                           (atomic_uchar* volatile)&GameData_21a6190,
                           memory_order_acquire) &
                       1) == 0 &&
                      __cxa_guard_acquire((__int64)&GameData_21a6190) != 0) {
                    v187 = *((_QWORD*)GameData_212c558 + 1);
                    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
                    *((_QWORD*)&GameData_21a6180 + 1) = v187;
                    __cxa_guard_release((__int64)&GameData_21a6190);
                  }
                  PSEUDO_LOW_LANE128(
                      v164, n128_u32,
                      COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f)));
                  game_108dd30((void*)(&v202), v121, v101, &v203, &f_.v206,
                               (int8x16_t*)&GameData_21a6180,
                               *(long double*)&v164);
                  v166 = LANES128(v202).n128_i64[1];
                  v165 = LANES128(v202).n128_u64[0];
                  if (LANES128(v202).n128_u64[1] != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(LANES128(v202).n128_u64[1] +
                                                  8),
                        1u, memory_order_relaxed);
                  }
                  v167 = LANES128(f_.v204).n128_i64[1];
                  LANES128(f_.v204).n128_u64[0] = v165;
                  LANES128(f_.v204).n128_u64[1] = v166;
                  if (v167 != 0) {
                    if (atomic_fetch_add((atomic_ullong* volatile)(v167 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v167 + 16LL))(v167);
                      std___1___shared_weak_count___release_weak(v167);
                    }
                    v166 = LANES128(f_.v204).n128_i64[1];
                  }
                  if (v166 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v166 + 8), 1u,
                        memory_order_relaxed);
                    if (atomic_fetch_add((atomic_ullong* volatile)(v166 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v166 + 16LL))(v166);
                      std___1___shared_weak_count___release_weak(v166);
                    }
                  }
                  v127 = LANES128(v202).n128_i64[1];
                  if (LANES128(v202).n128_u64[1] == 0) {
                    goto LABEL_292;
                  }
                LABEL_290:
                  if (atomic_fetch_add((atomic_ullong* volatile)(v127 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v127 + 16LL))(v127);
                    std___1___shared_weak_count___release_weak(v127);
                  }
                  goto LABEL_292;
                }
                if (v122 != 4) {
                  goto LABEL_292;
                }
                game_character_10b49e0((void*)(&v203), v195, v103);
                f_.v207 = 0;
                f_.v208 = 0;
                f_.v206 = (__typeof__(f_.v206)){0};
                GameRoutine_109ded0((__int128*)&f_.v206, &v203, 0);
                LANES128(v203).n128_f32[1] =
                    LANES128(f_.v206).n128_f32[1] + 0x1.eb851e0000000p-6f;
                game_108db00((void*)(&f_.v206), v121, v101, &v203,
                             -0x1.0000000000000p+0f);
                v147 = LANES128(f_.v206).n128_i64[1];
                v146 = LANES128(f_.v206).n128_u64[0];
                if (LANES128(f_.v206).n128_u64[1] == 0) {
                  goto LABEL_258;
                }
              }
              else {
                if (v122 != 1) {
                  if (v122 != 2) {
                    goto LABEL_292;
                  }
                  v123 = X8CALL_V0(long double,
                                   game_character_10b4c40(
                                       (void*)((__int64)&f_.v206), v195, v103));
                  {
                    __typeof__(v123) z_ = (__typeof__(v123)){0};
                    LODWORD(z_) =
                        COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
                    v123 = z_;
                  }
                  game_108df10((void*)(&v203), v121, v101, &f_.v206, v123);
                  v125 = LANES128(v203).n128_i64[1];
                  v124 = LANES128(v203).n128_u64[0];
                  if (LANES128(v203).n128_u64[1] != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(LANES128(v203).n128_u64[1] +
                                                  8),
                        1u, memory_order_relaxed);
                  }
                  v126 = LANES128(f_.v204).n128_i64[1];
                  LANES128(f_.v204).n128_u64[0] = v124;
                  LANES128(f_.v204).n128_u64[1] = v125;
                  if (v126 != 0) {
                    if (atomic_fetch_add((atomic_ullong* volatile)(v126 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v126 + 16LL))(v126);
                      std___1___shared_weak_count___release_weak(v126);
                    }
                    v125 = LANES128(f_.v204).n128_i64[1];
                  }
                  if (v125 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v125 + 8), 1u,
                        memory_order_relaxed);
                    if (atomic_fetch_add((atomic_ullong* volatile)(v125 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v125 + 16LL))(v125);
                      std___1___shared_weak_count___release_weak(v125);
                    }
                  }
                  v127 = LANES128(v203).n128_i64[1];
                  if (LANES128(v203).n128_u64[1] == 0) {
                    goto LABEL_292;
                  }
                  goto LABEL_290;
                }
                if (*v103 == 62) {
                  v149 = v103 + 1;
                }
                else {
                  v149 = v103;
                }
                game_108e3e0(
                    (void*)((__int64**)&f_.v206), v121, v101, v149, 7u, 1,
                    COERCE_AS(float, (unsigned int)(COERCE_UNSIGNED_INT(
                                         -0x1.0000000000000p+0f))));
                v147 = LANES128(f_.v206).n128_i64[1];
                v146 = LANES128(f_.v206).n128_u64[0];
                if (LANES128(f_.v206).n128_u64[1] == 0) {
                LABEL_258:
                  v148 = LANES128(f_.v204).n128_i64[1];
                  LANES128(f_.v204).n128_u64[0] = v146;
                  LANES128(f_.v204).n128_u64[1] = v147;
                  if (v148 != 0) {
                    if (atomic_fetch_add((atomic_ullong* volatile)(v148 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v148 + 16LL))(v148);
                      std___1___shared_weak_count___release_weak(v148);
                    }
                    v147 = LANES128(f_.v204).n128_i64[1];
                  }
                  if (v147 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v147 + 8), 1u,
                        memory_order_relaxed);
                    if (atomic_fetch_add((atomic_ullong* volatile)(v147 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v147 + 16LL))(v147);
                      std___1___shared_weak_count___release_weak(v147);
                    }
                  }
                  v127 = LANES128(f_.v206).n128_i64[1];
                  if (LANES128(f_.v206).n128_u64[1] == 0) {
                    goto LABEL_292;
                  }
                  goto LABEL_290;
                }
              }
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v147 + 8), 1u,
                                        memory_order_relaxed);
              goto LABEL_258;
            case 2u:
              v54 = *(__int64***)(v3 + 272);
              v55 = *(__int64***)(v3 + 280);
              if ((v12[8] & 1) != 0) {
                v56 = *((const char**)v12 + 3);
              }
              else {
                v56 = (const char*)(v12 + 9);
              }
            LABEL_82:
              if (v54 == v55) {
                break;
              }
              v58 = *v54;
              v59 = **v54;
              if (v59 != 0 && *(_DWORD*)(v59 + 16) == *((_DWORD*)v58 + 2)) {
                v60 = GameRoutine_1a09d30(v56, **(const char***)(v59 + 24));
                v9 = v201;
                if (v60 == 0) {
                  v61 = (__int64)v54[1];
                  if ((*((_WORD*)v12 + 1) & 1) != 0) {
                    if (v61 == 0) {
                      f_.v206 = COERCE_AS(int8x16_t, (unsigned __int64)v58);
                      GameRoutine_14a1520((__int64*)&f_.v206, 1);
                      goto LABEL_80;
                    }
                    v62 = (atomic_ullong*)(v61 + 8);
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v61 + 8), 1u,
                        memory_order_relaxed);
                    LANES128(f_.v206).n128_u64[0] = (unsigned __int64)v58;
                    LANES128(f_.v206).n128_u64[1] = v61;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v61 + 8), 1u,
                        memory_order_relaxed);
                    GameRoutine_14a1520((__int64*)&f_.v206, 1);
                  LABEL_91:
                    if (atomic_fetch_add(v62, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
                      std___1___shared_weak_count___release_weak(v61);
                    }
                    add = atomic_fetch_add(v62, 0xFFFFFFFFFFFFFFFFLL);
                    v3 = (__int64)a1;
                    v9 = v201;
                    if (add == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
                      std___1___shared_weak_count___release_weak(v61);
                      goto LABEL_80;
                    }
                  }
                  else {
                    if (v61 != 0) {
                      v62 = (atomic_ullong*)(v61 + 8);
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v61 + 8), 1u,
                          memory_order_relaxed);
                      LANES128(f_.v206).n128_u64[0] = (unsigned __int64)v58;
                      LANES128(f_.v206).n128_u64[1] = v61;
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v61 + 8), 1u,
                          memory_order_relaxed);
                      GameRoutine_14a1390((__int64*)&f_.v206, 1);
                      goto LABEL_91;
                    }
                    f_.v206 = COERCE_AS(int8x16_t, (unsigned __int64)v58);
                    GameRoutine_14a1390((__int64*)&f_.v206, 1);
                  LABEL_80:
                    v9 = v201;
                  }
                }
              }
              v54 += 2;
              goto LABEL_82;
            case 3u:
              v16 = *(_QWORD*)(v3 + 152);
              v17 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 184) + 304LL) +
                                      16LL) *
                            0x1.0aef000000000p+4f) *
                    0x1.0624de0000000p-10f;
              v18 = *(_BYTE*)(v16 + 32);
              v19 = *(_BYTE**)(v16 + 48);
              v20 = (_BYTE*)(v16 + 33);
              if ((v18 & 1) != 0) {
                v21 = v19;
              }
              else {
                v21 = v20;
              }
              game_character_10b49e0((void*)(&f_.v204), v195, v21);
              v22 = *(_QWORD*)(v3 + 152);
              v23 = *(_BYTE*)(v22 + 56);
              v24 = *(_BYTE**)(v22 + 72);
              v25 = (_BYTE*)(v22 + 57);
              if ((v23 & 1) != 0) {
                v26 = v24;
              }
              else {
                v26 = v25;
              }
              game_character_10b49e0((void*)(&f_.v206), v195, v26);
              v203 = vaddq_f32(f_.v206, *(float32x4_t*)(v3 + 752));
              MagicInst_10a3950((float32x4_t*)(v3 + 304), &f_.v204, &v203);
              v27 = *(float*)(v3 + 424);
              *(_DWORD*)(v3 + 420) = 0;
              if (v27 >= 0x0.0p+0f) {
                v28 = v17 + 0x0.0p+0f;
                if (((v17 > v27) & *(_BYTE*)(v3 + 416)) != 0) {
                  v28 = v27;
                }
                *(float*)(v3 + 420) = v28;
                if (v27 == 0x0.0p+0f) {
                  v29 = *(_OWORD*)(v3 + 448);
                  *(_QWORD*)(v3 + 464) = v29;
                  v30 = *(_OWORD*)(v3 + 464);
                  *((_QWORD*)&v30 + 1) = DWORD2(v29);
                  *(_OWORD*)(v3 + 464) = v30;
                  if ((atomic_load_explicit(
                           (atomic_uchar* volatile)&GameData_21a5680,
                           memory_order_acquire) &
                       1) == 0 &&
                      __cxa_guard_acquire((__int64)&GameData_21a5680) != 0) {
                    v177 = *((_QWORD*)GameData_212c2f8 + 1);
                    *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
                    *((_QWORD*)&GameData_21a5670 + 1) = v177;
                    __cxa_guard_release((__int64)&GameData_21a5680);
                  }
                  v31 =
                      LANES128_OF(
                          vextq_s8(COERCE_AS(int8x16_t, GameData_21a5670),
                                   COERCE_AS(int8x16_t, GameData_21a5670), 8u))
                          .n128_u64[0];
                  *(_QWORD*)(v3 + 496) = GameData_21a5670;
                  *(_QWORD*)(v3 + 504) = v31;
                }
                else {
                  GameRoutine_10a3bd0((float32x4_t*)(v3 + 304));
                }
              }
              v66 = *(_QWORD*)(v3 + 184);
              v67 = *(_QWORD*)(v66 + 392);
              v68 = *(_QWORD*)(v66 + 400);
              if (v68 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 8),
                                          1u, memory_order_relaxed);
                v69 = CharacterAppearance_10743e0(v67);
                if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v70 = v69;
                  (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
                  std___1___shared_weak_count___release_weak(v68);
                  v69 = v70;
                }
                if (v69 == 5) {
                LABEL_108:
                  v71 = *(_QWORD*)(v3 + 184);
                  v72 = *(_DWORD*)(*(_QWORD*)(v71 + 72) + 120LL);
                  if ((unsigned int)(v72 - 603384486) <= 0x12 &&
                          ((1 << (v72 + 90)) & 0x40007) != 0 ||
                      v72 == 309207209 || v72 == 309207191) {
                    v73 = *(float32x4_t**)(v71 + 440);
                    if (v73 != nullptr) {
                      v74 = vmulq_f32(v73[20], v193);
                      *(_QWORD*)(v3 + 528) = LANES128(v74).n128_u64[0];
                      v75 = *(_OWORD*)(v3 + 528);
                      *((_QWORD*)&v75 + 1) = LANES128(v74).n128_u32[2];
                      *(_OWORD*)(v3 + 528) = v75;
                    }
                  }
                  goto LABEL_114;
                }
              }
              else {
                v69 = CharacterAppearance_10743e0(v67);
                if (v69 == 5) {
                  goto LABEL_108;
                }
              }
              if (v69 == 3) {
                goto LABEL_108;
              }
            LABEL_114:
              *(float*)(v3 + 236) = *(float*)(v3 + 424) - v17;
              v76 = *GameData_212d448[0];
              if (*GameData_212d448[0] != 0 &&
                  (*(_BYTE*)(*(_QWORD*)(v3 + 184) + 340LL) & 1) == 0) {
                v77 = *(_QWORD*)(v76 + 8);
                v78 = *(_QWORD*)(v77 + 32);
                v79 = *(_QWORD*)(v77 + 40);
                if (v78 == v79) {
                  v83 = &GameData_2235e30;
                }
                else {
                  v80 = *(_DWORD*)(v77 + 56);
                  v81 = 954437177 * ((unsigned __int64)(v79 - v78) >> 4) - 1;
                  if (v80 < v81) {
                    v81 = v80;
                  }
                  if (v80 >= 0) {
                    v82 = v81;
                  }
                  else {
                    v82 = 0;
                  }
                  v83 = (__int64*)(v78 + 144LL * v82);
                }
                v84 = nn_os_ConvertToTimeSpan(*(
                    _QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                             344LL));
                v85 = *(float*)(v3 + 636);
                v86 = *(_QWORD*)(v76 + 136);
                v87 = *(float*)(v3 + 236);
                *((_BYTE*)v83 + 24) = 1;
                *((float*)v83 + 5) = (float)((float)(v84 / 1000 - v86) /
                                             0x1.e848000000000p+19f) +
                                     (float)(v87 + v85);
              }
              v88 = *(_DWORD*)(v3 + 800);
              if ((v88 & 0x1000) != 0) {
                *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v3 + 184) + 64LL) + 156LL) = 0;
                v88 = *(_DWORD*)(v3 + 800) & 0xFFFFEFFF;
                *(_DWORD*)(v3 + 800) = v88;
              }
              if ((v88 & 0x2000) == 0) {
                GameRoutine_10b5e70(*(_QWORD*)(*(_QWORD*)(v3 + 184) + 144LL),
                                    2);
              }
              v9 = v201;
              if (*(_DWORD*)(v3 + 160) != 1 ||
                  (*(_BYTE*)(v3 + 801) & 0x40) != 0) {
                break;
              }
              v89 = *(_QWORD*)(v3 + 176);
              v11 = *(_QWORD*)(v3 + 184);
              v90 = *(_QWORD*)(v11 + 392);
              v91 = *(_QWORD*)(v11 + 400);
              if (v91 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v91 + 8),
                                          1u, memory_order_relaxed);
                v92 = *(unsigned __int8*)(v90 + 472);
                if ((v92 & 1) != 0) {
                  v93 = *(_QWORD*)(v90 + 480);
                }
                else {
                  v93 = v92 >> 1;
                }
                if (v93 != 0) {
                  v94 = false;
                }
                else {
                  v128 = *(unsigned __int8*)(v90 + 400);
                  v129 = *(_QWORD*)(v90 + 408);
                  if ((v128 & 1) == 0) {
                    v129 = v128 >> 1;
                  }
                  v94 = v129 == 0;
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v91 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
                  if (v94) {
                    break;
                  }
                }
                else {
                  (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91);
                  std___1___shared_weak_count___release_weak(v91);
                  v9 = v201;
                  if (v94) {
                    break;
                  }
                }
                v89 = *(_QWORD*)(v3 + 176);
                if (v89 != 0) {
                  v11 = *v192;
                  goto LABEL_217;
                }
                goto LABEL_6;
              }
              v95 = *(unsigned __int8*)(v90 + 472);
              if ((v95 & 1) != 0) {
                v96 = *(_QWORD*)(v90 + 480);
              }
              else {
                v96 = v95 >> 1;
              }
              if (v96 == 0) {
                v97 = *(unsigned __int8*)(v90 + 400);
                v98 = *(_QWORD*)(v90 + 408);
                if ((v97 & 1) == 0) {
                  v98 = v97 >> 1;
                }
                if (v98 == 0) {
                  break;
                }
              }
            LABEL_217:
              if (*(_QWORD*)(v89 + 8) == -1) {
              LABEL_6:
                v11 = 0;
              }
              game_10c1280((__int64 (***)(void))v11, v3);
            LABEL_8:
              v9 = v201;
              break;
            default:
              break;
            }
          }
        LABEL_9:
          ++v10;
        } while (v10 != v9);
      }
    }
    v4 = v200 + 1;
  } while (v200 != 4);
}

#pragma GCC visibility pop
