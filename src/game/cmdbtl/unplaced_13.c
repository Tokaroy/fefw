#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void MindBase_ed78e0(PSEUDO_X8, __int64, int);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_eb9120(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1ad709d;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83030;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_2216858;
extern float GameData_1b913ec[26];
extern unsigned __int8 GameData_2216780[];
void CmdBtlUnit_e7bed0(__int64, char);
void GameRoutine_e76320(_QWORD*, _QWORD*);
void UnitActor_81d740(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_a78a90();
void __attribute__((noreturn)) GameRoutine_e77e10();
void __attribute__((noreturn)) GameRoutine_e77e30();
void game_e9f200(__int64);
void game_cmdbtl_e74b60(__int64 a1, __int64 a2);

void game_cmdbtl_e74b60(__int64 a1, __int64 a2)
{
  float v4;
  __int64 v5;
  __int64 v6;
  float32x4_t v7;
  float v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  float v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __n128 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  float v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  char* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  atomic_ullong* v64;
  __int64* v65;
  __int64 v66;
  char* v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  float v80;
  __int64 v81;
  __int64 v82;
  int v83;
  _QWORD* v84;
  __int64 v85;
  __int64 v86;
  float v87;
  char* v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  float v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int32 v104;
  float v105;
  float v106;
  float* v107;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  float v114;
  float v115;
  __int64 v116;
  char* v117;
  char* v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  float v123;
  __int64 v124;
  float* v125;
  _QWORD* v126;
  __int64 v127;
  __int64 v128;
  float v129;
  float v130;
  __int64 v131;
  __int64 v132;
  float v133;
  float v134;
  float v135;
  __int64 v136;
  __int64* v137;
  __int64 j;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  float v143;
  float v144;
  __int64 v145;
  __int64 v146;
  float v147;
  __int64 v148;
  __int64* v149;
  int v150;
  float v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  float v155;
  float v156;
  float v157;
  float v158;
  unsigned __int64 v159;
  float v160;
  float v161;
  __int64 v162;
  float v163;
  __int64 v164;
  bool v165;
  unsigned __int64 add;
  __int64 v167;
  __int64* v168;
  char* v169;
  float v170;
  float v171;
  __int64 v172;
  float v173;
  __int64 v174;
  __int64 v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  float v183;
  float v184;
  float v185;
  int8x16_t v186;
  int8x16_t v187;
  int8x16_t v188;
  float32x4_t v189;
  __int64 v190;
  float32x2_t v191;
  int8x16_t v192;
  int8x16_t v193;
  float32x4_t v194;
  float32x4_t v195;
  float32x4_t v196;
  float32x4_t v197;
  float32x2_t v198;
  float32x4_t v199;
  float32x4_t v200;
  float32x4_t v201;
  int8x16_t v202;
  float32x4_t v203;
  float32x4_t v204;
  float32x4_t v205;
  float32x4_t v206;
  float32x4_t v207;
  float32x4_t v208;
  float32x4_t v209;
  float32x4_t v210;
  int8x16_t v211;
  float32x4_t v212;
  float32x4_t v213;
  float32x4_t v214;
  float32x4_t v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int128 v221;
  __int128 v222;
  __int128 v223;
  __int128 v224;
  __int128 v225;
  __int64 v226;
  __n128 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  unsigned __int64 v232;
  char* v233;
  __int64 v234;
  unsigned __int64 i;
  __int64* v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  char* v241;
  __int64 v242;
  char* v243;
  char* v244;
  __int64 v245;
  unsigned __int64 v246;
  __int64 v247;
  unsigned __int64 v248;
  __int64 v249;
  char* v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  float v257;
  float v258;
  float v259;
  float v260;
  float v261;
  float32x4_t v262;
  float* v263;
  int v264;
  float v265;
  __int64* v266;
  __int64 v267;
  __int64 v268;
  int8x16_t v269;
  unsigned __int64 v270;
  float v271;
  float32x4_t v272;
  unsigned __int64 v273;
  int8x16_t v274;
  float32x4_t v275;
  __int128 v276;
  unsigned __int64 v277;
  int8x16_t v278;
  struct {
    char gap0_[248];
    char* v279;
    char* v280;
    char* v281;
    char gap272_[16];
    __int64 v282;
    char gap296_[8];
    char* v283;
  } f_;
  __int128 v284;
  __int128 v285;

  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
  v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  f_.v283 = (char*)&GameData_1ad709d;
  v4 = 0x0.0p+0f;
  f_.v282 = game_HashString((__int64)&GameData_1ad709d),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
  v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&f_.v282),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
    v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v5 != 0) {
      v4 = (float)*(int*)(v5 + 32);
    }
  }
  if (*(_QWORD*)(a1 + 48) == *(_QWORD*)(a1 + 40)) {
    return;
  }
  v264 = *(_DWORD*)(a1 + 8);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v255 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v255;
    __cxa_guard_release(&GameData_21a6130),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if ((GameData_2216858 & 1) == 0) {
  LABEL_378:
    GameRoutine_8123d0(),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v6 = GameRoutine_eb9120((__int64)GameData_2216780),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
  v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v6 != 0) {
    LANES128(v7).n128_u32[0] = *(_DWORD*)(v6 + 96);
    v8 = *(float*)(v6 + 108);
    LANES128(v7).n128_u32[1] = *(_DWORD*)(v6 + 100);
    LANES128(v7).n128_u32[2] = *(_DWORD*)(v6 + 104);
  }
  else {
    v7 = (__typeof__(v7)){0};
    v8 = 0x0.0p+0f;
  }
  v262 = v7;
  f_.v280 = nullptr;
  f_.v281 = nullptr;
  v256 = a2;
  v9 = *(_QWORD*)(a2 + 16);
  f_.v279 = nullptr;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = GameData_212dec0[0];
  if (v9 != 0) {
    v12 = std___1___shared_weak_count_lock(v9),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
    v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v12 != 0) {
      v13 = *(_QWORD*)(v256 + 8);
      if (v13 != 0) {
        v14 = (char*)fw_memory_HeapManager_Allocate(*v10, 16, 16, 0),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_QWORD*)v14 = v13;
        *((_QWORD*)v14 + 1) = v12;
        v15 = 0x1.0000000000000p-1f;
        v16 = 0;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
        f_.v280 = v14 + 16;
        f_.v281 = v14 + 16;
        f_.v279 = v14;
      LABEL_44:
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v12),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        goto LABEL_46;
      }
    }
  }
  else {
    v12 = 0;
  }
  if (*(_BYTE*)(*v11 + 12) != 1) {
    if (v264 != 0) {
      v20 = *(_QWORD*)(a1 + 88);
      if (v20 != 0) {
        v21 = *(_QWORD*)(a1 + 80);
        v22 = *(_QWORD*)(a1 + 88);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                  memory_order_relaxed);
        f_.v282 = 0;
        f_.v283 = (char*)std___1___shared_weak_count_lock(v22),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        if (f_.v283 != nullptr) {
          f_.v282 = v21;
        }
      }
      else {
        f_.v282 = 0;
        f_.v283 = nullptr;
      }
      GameRoutine_e76320(&f_.v279, &f_.v282),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v27 = f_.v283;
      if (f_.v283 != nullptr &&
          atomic_fetch_add((atomic_ullong* volatile)(f_.v283 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(char*))(*(_QWORD*)v27 + 16LL))(v27),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak(v27),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      if (v20 != 0) {
        std___1___shared_weak_count___release_weak(v20),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v15 = 0x1.0000000000000p-1f;
    LABEL_43:
      v16 = 0;
      if (v12 == 0) {
        goto LABEL_46;
      }
      goto LABEL_44;
    }
    v15 = 0x1.0000000000000p-1f;
    if (*(_BYTE*)v256 != 1) {
      goto LABEL_43;
    }
    v24 = *GameData_212ea58;
    v25 = *(_QWORD*)(*GameData_212ea58 + 640);
    v26 = *(_QWORD*)(*GameData_212ea58 + 648);
    if (v26 != 0 &&
        (atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0)) {
      v229 = v25;
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak(v26),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v25 = v229;
      if (v229 == 0) {
      LABEL_340:
        v25 = *(_QWORD*)(v24 + 656);
        v230 = *(_QWORD*)(v24 + 664);
        if (v230 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v230 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v230 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v231 = v25;
            (*(void (**)(__int64))(*(_QWORD*)v230 + 16LL))(v230),
                v114 = COERCE_AS(__typeof__(v114),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v129 = COERCE_AS(__typeof__(v129),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v143 = COERCE_AS(__typeof__(v143),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v176 = COERCE_AS(__typeof__(v176),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
            std___1___shared_weak_count___release_weak(v230),
                v114 = COERCE_AS(__typeof__(v114),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v129 = COERCE_AS(__typeof__(v129),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v143 = COERCE_AS(__typeof__(v143),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v176 = COERCE_AS(__typeof__(v176),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
            v25 = v231;
          }
        }
        if (v25 == 0) {
          goto LABEL_376;
        }
      }
    }
    else if (v25 == 0) {
      goto LABEL_340;
    }
    MindBase_ed78e0((void*)(&f_.v282), v25, *(_DWORD*)(a1 + 8)),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    v232 = f_.v282;
    v233 = f_.v283;
    if (f_.v283 != (char*)f_.v282) {
      v234 = 0;
      for (i = 0; i < (__int64)&f_.v283[-f_.v282] >> 4; ++i) {
        v236 = (__int64*)(v232 + v234);
        v237 = *(_QWORD*)(v232 + v234 + 8);
        if (v237 != 0) {
          v238 = std___1___shared_weak_count_lock(v237),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
          if (v238 != 0) {
            v239 = *v236;
            v240 = v238;
            if (*v236 != 0) {
              v241 = f_.v280;
              if (f_.v280 >= f_.v281) {
                v243 = f_.v279;
                v244 = (char*)(f_.v280 - f_.v279);
                v245 = (f_.v280 - f_.v279) >> 4;
                v246 = v245 + 1;
                if ((unsigned __int64)(v245 + 1) >> 60 != 0) {
                  goto LABEL_384;
                }
                v247 = f_.v281 - f_.v279;
                if ((f_.v281 - f_.v279) >> 3 > v246) {
                  v246 = v247 >> 3;
                }
                if ((unsigned __int64)v247 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v248 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v248 = v246;
                }
                if (v248 >> 60 != 0) {
                LABEL_383:
                  GameRoutine_60a210(),
                      v114 = COERCE_AS(__typeof__(v114),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v129 = COERCE_AS(__typeof__(v129),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v133 = COERCE_AS(__typeof__(v133),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v143 = COERCE_AS(__typeof__(v143),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v155 = COERCE_AS(__typeof__(v155),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v176 = COERCE_AS(__typeof__(v176),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
                }
                v249 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v248, 16, 0),
                v114 = COERCE_AS(__typeof__(v114),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v129 = COERCE_AS(__typeof__(v129),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v143 = COERCE_AS(__typeof__(v143),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v176 = COERCE_AS(__typeof__(v176),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
                v250 = &v244[v249];
                v277 = v249 + 16 * v248;
                *(_QWORD*)v250 = v239;
                *((_QWORD*)v250 + 1) = v240;
                v251 = (__int64)&v244[v249 + -16 * v245];
                v242 = (__int64)&v244[v249 + 16];
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v240 + 8),
                                          1u, memory_order_relaxed);
                GameRoutine_1a0b950(v251, v243, v244),
                    v114 = COERCE_AS(__typeof__(v114),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v129 = COERCE_AS(__typeof__(v129),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v143 = COERCE_AS(__typeof__(v143),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v155 = COERCE_AS(__typeof__(v155),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v176 = COERCE_AS(__typeof__(v176),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                f_.v279 = (char*)v251;
                f_.v281 = (char*)v277;
                v10 = (__int64*)fw_memory_g_heap_manager_ptr;
                if (v243 != nullptr) {
                  v252 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v252 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v252),
                      v114 = COERCE_AS(__typeof__(v114),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v129 = COERCE_AS(__typeof__(v129),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v133 = COERCE_AS(__typeof__(v133),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v143 = COERCE_AS(__typeof__(v143),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v155 = COERCE_AS(__typeof__(v155),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v176 = COERCE_AS(__typeof__(v176),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
                }
              }
              else {
                *(_QWORD*)f_.v280 = v239;
                *((_QWORD*)v241 + 1) = v238;
                v242 = (__int64)(v241 + 16);
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v238 + 8),
                                          1u, memory_order_relaxed);
              }
              f_.v280 = (char*)v242;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v240 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v240 + 16LL))(v240),
                  v114 = COERCE_AS(__typeof__(v114),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v129 = COERCE_AS(__typeof__(v129),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v143 = COERCE_AS(__typeof__(v143),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v155 = COERCE_AS(__typeof__(v155),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v176 = COERCE_AS(__typeof__(v176),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
              std___1___shared_weak_count___release_weak(v240),
                  v114 = COERCE_AS(__typeof__(v114),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v129 = COERCE_AS(__typeof__(v129),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v143 = COERCE_AS(__typeof__(v143),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v155 = COERCE_AS(__typeof__(v155),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v176 = COERCE_AS(__typeof__(v176),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
            }
          }
        }
        v232 = f_.v282;
        v233 = f_.v283;
        v234 += 16;
      }
    }
    if (v232 != 0) {
      if ((char*)v232 == v233) {
        goto LABEL_373;
      }
      do {
        v253 = *((_QWORD*)v233 - 1);
        if (v253 != 0) {
          std___1___shared_weak_count___release_weak(v253),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v233 -= 16;
      } while (v233 != (char*)v232);
      f_.v283 = (char*)v232;
      if (f_.v282 != 0) {
      LABEL_373:
        v254 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v254 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v254),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
  LABEL_376:
    v16 = 1;
    if (v12 == 0) {
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v17 = *(_QWORD*)(a1 + 88);
  if (v17 != 0) {
    v18 = *(_QWORD*)(a1 + 80);
    v19 = *(_QWORD*)(a1 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    f_.v282 = 0;
    f_.v283 = (char*)std___1___shared_weak_count_lock(v19),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
    v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    if (f_.v283 != nullptr) {
      f_.v282 = v18;
    }
  }
  else {
    f_.v282 = 0;
    f_.v283 = nullptr;
  }
  GameRoutine_e76320(&f_.v279, &f_.v282),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  v23 = f_.v283;
  if (f_.v283 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(f_.v283 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(char*))(*(_QWORD*)v23 + 16LL))(v23),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v23),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (v17 != 0) {
    std___1___shared_weak_count___release_weak(v17),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v16 = 0;
  v15 = 0x1.99999a0000000p-3f;
  if (v12 != 0) {
    goto LABEL_44;
  }
LABEL_46:
  if ((GameData_2216858 & 1) == 0) {
    goto LABEL_378;
  }
  v28 = GameRoutine_eb9120((__int64)GameData_2216780),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
  v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v28 != 0) {
    PSEUDO_LOW_LANE128(v29, n128_u32, *(_DWORD*)(v28 + 112));
  }
  else {
    PSEUDO_LOW_LANE128(v29, n128_u32,
                       COERCE_UNSIGNED_INT((float)(0x1.e000000000000p+3f)));
  }
  v30 = *(_QWORD*)(a1 + 40);
  v31 = *(_QWORD*)(a1 + 48);
  v265 = LANES128(v29).n128_f32[0];
  v32 = v31 - v30;
  if (v31 == v30) {
    v41 = 0;
    v45 = 0;
    v30 = *(_QWORD*)(a1 + 48);
    v266 = nullptr;
    if (v16 == 0) {
      goto LABEL_105;
    }
  }
  else {
    v33 = 0;
    v34 = 0;
    PSEUDO_LOW_LANE128(
        v29, n128_f32,
        (float)((float)(LANES128(v29).n128_f32[0] +
                        (float)((float)(unsigned __int64)(v32 >> 4) *
                                -0x1.0000000000000p-1f)) *
                0x1.0000000000000p-1f) /
            (float)(unsigned __int64)(v32 >> 4));
    v35 = (float)((float)(v265 + (float)((float)(unsigned __int64)(v32 >> 4) *
                                         -0x1.0000000000000p-1f)) *
                  0x1.0000000000000p-1f) /
          (float)(unsigned __int64)(v32 >> 4);
    do {
      v38 = *(_QWORD*)(v30 + v33);
      v39 = *(_QWORD*)(v38 + 216);
      v40 = *(_QWORD*)(v38 + 224);
      if (v40 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v39 != 0) {
        *(float*)(v39 + 88) = v35;
        *(_BYTE*)(v39 + 92) = 1;
      }
      if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        v29 = std___1___shared_weak_count___release_weak(v40),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v30 = *(_QWORD*)(a1 + 40);
      v36 = *(_QWORD*)(a1 + 48);
      ++v34;
      v33 += 16;
      v37 = v36 - v30;
    } while (v34 < (v36 - v30) >> 4);
    if (v36 == v30) {
      v41 = 0;
      v45 = 0;
      v31 = *(_QWORD*)(a1 + 40);
      v266 = nullptr;
      if (v16 == 0) {
        goto LABEL_105;
      }
    }
    else {
      if (v37 < 0) {
      LABEL_384:
        GameRoutine_e77e10(),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v41 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v37, 16, 0),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      GameRoutine_1a0ba50(v41, 0, v37),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v31 = *(_QWORD*)(a1 + 40);
      v30 = *(_QWORD*)(a1 + 48);
      v45 = v41 + v37;
      v266 = (__int64*)v41;
      if (v16 == 0) {
        goto LABEL_105;
      }
    }
  }
  v46 = *GameData_212ea58;
  v47 = *(_QWORD*)(*GameData_212ea58 + 640);
  v48 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v48 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v49 = v47;
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    v29 = std___1___shared_weak_count___release_weak(v48),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
    v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    v47 = v49;
    if (v49 != 0) {
      goto LABEL_76;
    }
  }
  else if (v47 != 0) {
    goto LABEL_76;
  }
  v47 = *(_QWORD*)(v46 + 656);
  v50 = *(_QWORD*)(v46 + 664);
  if (v50 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v51 = v47;
      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v29 = std___1___shared_weak_count___release_weak(v50),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v47 = v51;
    }
  }
  if (v47 == 0) {
  LABEL_105:
    v56 = nullptr;
    v57 = nullptr;
    goto LABEL_118;
  }
LABEL_76:
  MindBase_ed78e0((void*)(&f_.v282), v47, *(_DWORD*)(a1 + 8)),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  v52 = f_.v282;
  v53 = f_.v283;
  if (f_.v283 == (char*)f_.v282) {
    v56 = nullptr;
    v57 = nullptr;
    if (f_.v282 == 0) {
      goto LABEL_118;
    }
  LABEL_109:
    if ((char*)v52 == v53) {
      f_.v283 = (char*)v52;
    }
    else {
      do {
        v77 = *((_QWORD*)v53 - 1);
        if (v77 != 0) {
          v29 = std___1___shared_weak_count___release_weak(v77),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v53 -= 16;
      } while (v53 != (char*)v52);
      f_.v283 = (char*)v52;
      if (f_.v282 == 0) {
        goto LABEL_118;
      }
    }
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v78 = 56;
    }
    v29 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v78),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
    v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    goto LABEL_118;
  }
  v54 = v45 - v41;
  v55 = 0;
  v56 = nullptr;
  v57 = nullptr;
  v270 = 0;
  v58 = 0;
  v273 = v54 >> 4;
  v59 = ((unsigned __int64)(((v30 - v31) >> 4) - 1) >> 1) - 1;
  do {
    v60 = *(_QWORD*)(v52 + v55 + 8);
    if (v60 != 0) {
      v61 = std___1___shared_weak_count_lock(v60),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v61 != 0) {
        v62 = *(_QWORD*)(v52 + v55);
        if (v62 != 0) {
          v63 = v59 + ((__int64)&f_.v283[-f_.v282] >> 4);
          if (v63 < v273) {
            v64 = (atomic_ullong*)(v61 + 8);
            v65 = &v266[2 * v63];
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8), 1u,
                                      memory_order_relaxed);
            v66 = v65[1];
            *v65 = v62;
            v65[1] = v61;
            if (v66 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v267 = v61;
              (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66),
                  v114 = COERCE_AS(__typeof__(v114),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v129 = COERCE_AS(__typeof__(v129),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v143 = COERCE_AS(__typeof__(v143),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v155 = COERCE_AS(__typeof__(v155),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v176 = COERCE_AS(__typeof__(v176),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
              v29 = std___1___shared_weak_count___release_weak(v66),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
              v61 = v267;
            }
            atomic_fetch_add_explicit(v64, 1u, memory_order_relaxed);
            if ((unsigned __int64)v57 < v270) {
              *(_QWORD*)v57 = v62;
              *((_QWORD*)v57 + 1) = v61;
              v57 += 16;
            }
            else {
              v67 = (char*)(v57 - v56);
              v68 = (v57 - v56) >> 4;
              v69 = v68 + 1;
              if ((unsigned __int64)(v68 + 1) >> 60 != 0) {
                GameRoutine_e77e30(),
                    v114 = COERCE_AS(__typeof__(v114),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v129 = COERCE_AS(__typeof__(v129),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v133 = COERCE_AS(__typeof__(v133),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v143 = COERCE_AS(__typeof__(v143),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v155 = COERCE_AS(__typeof__(v155),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v176 = COERCE_AS(__typeof__(v176),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
              }
              if ((__int64)(v270 - (_QWORD)v56) >> 3 > v69) {
                v69 = (__int64)(v270 - (_QWORD)v56) >> 3;
              }
              if (v270 - (unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFF0LL) {
                v70 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v70 = v69;
              }
              if (v70 != 0) {
                v268 = v61;
                if (v70 >> 60 != 0) {
                  goto LABEL_383;
                }
                v71 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v70, 16, 0),
                v114 = COERCE_AS(__typeof__(v114),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v129 = COERCE_AS(__typeof__(v129),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v143 = COERCE_AS(__typeof__(v143),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v176 = COERCE_AS(__typeof__(v176),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
                v61 = v268;
              }
              else {
                v71 = 0;
              }
              v73 = &v67[v71];
              v74 = (__int64)&v67[v71 + -16 * v68];
              v270 = v71 + 16 * v70;
              *(_QWORD*)v73 = v62;
              *((_QWORD*)v73 + 1) = v61;
              v75 = v61;
              v57 = &v67[v71 + 16];
              GameRoutine_1a0b950(v74, v56, v67),
                  v114 = COERCE_AS(__typeof__(v114),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v129 = COERCE_AS(__typeof__(v129),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v143 = COERCE_AS(__typeof__(v143),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v155 = COERCE_AS(__typeof__(v155),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v176 = COERCE_AS(__typeof__(v176),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
              if (v56 != nullptr) {
                v76 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v76 = 56;
                }
                v29 = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v76),
                v114 = COERCE_AS(__typeof__(v114),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v129 = COERCE_AS(__typeof__(v129),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v133 = COERCE_AS(__typeof__(v133),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v143 = COERCE_AS(__typeof__(v143),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v155 = COERCE_AS(__typeof__(v155),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v176 = COERCE_AS(__typeof__(v176),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              }
              v56 = (char*)v74;
              v61 = v75;
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v72 = v61;
          (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          v29 = std___1___shared_weak_count___release_weak(v72),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
    }
    v52 = f_.v282;
    v53 = f_.v283;
    ++v58;
    --v59;
    v55 += 16;
  } while (v58 < (__int64)&f_.v283[-f_.v282] >> 4);
  v41 = (__int64)v266;
  if (f_.v282 != 0) {
    goto LABEL_109;
  }
LABEL_118:
  v79 = *(_QWORD*)(a1 + 40);
  if (*(_QWORD*)(a1 + 48) != v79) {
    v80 = 0x0.0p+0f;
    v81 = v41 - 8;
    v82 = 0;
    v83 = 0;
    while (1) {
      v84 = (_QWORD*)(v79 + 16 * v82);
      v85 = *(_QWORD*)(*v84 + 216LL);
      v86 = *(_QWORD*)(*v84 + 224LL);
      if (v86 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v86 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v85 != 0) {
        game_e9f200(v85),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        v87 = LANES128(v29).n128_f32[0];
        if (v86 == 0) {
          goto LABEL_130;
        }
      }
      else {
        v87 = 0x1.0000000000000p-1f;
        if (v86 == 0) {
          goto LABEL_130;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v86 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        v29 = std___1___shared_weak_count___release_weak(v86),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    LABEL_130:
      PSEUDO_LOW_LANE128(v29, n128_f32,
                         v80 + (float)(v87 * 0x1.0000000000000p+1f));
      if (((__int64)(*(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40)) >> 4) - 1 ==
          v82) {
        v80 = v80 + (float)(v87 * 0x1.0000000000000p+1f);
      }
      else {
        v80 = LANES128(v29).n128_f32[0] + 0x1.0000000000000p-1f;
      }
      if (v56 == v57) {
        goto LABEL_137;
      }
      v88 = v56;
      while (*(_QWORD*)v88 != *v84) {
        v88 += 16;
        if (v88 == v57) {
          goto LABEL_137;
        }
      }
      if (v88 == v57) {
      LABEL_137:
        v89 = (__int64*)(v81 + 16LL * v83--);
        do {
          v90 = v89[1];
          v89 += 2;
          ++v83;
        } while (v90 != 0);
        v92 = *v84;
        v91 = v84[1];
        if (v91 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v91 + 8), 1u,
                                    memory_order_relaxed);
        }
        v93 = *v89;
        *(v89 - 1) = v92;
        *v89 = v91;
        if (v93 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          v29 = std___1___shared_weak_count___release_weak(v93),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
      v79 = *(_QWORD*)(a1 + 40);
      if (++v82 >= (unsigned __int64)((*(_QWORD*)(a1 + 48) - v79) >> 4)) {
        goto LABEL_145;
      }
    }
  }
  v80 = 0x0.0p+0f;
LABEL_145:
  v94 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v56 != nullptr) {
    for (; v57 != v56; v57 -= 16) {
      v95 = *((_QWORD*)v57 - 1);
      if (v95 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v95 + 16LL))(
            v95, *(long double*)&v29),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        v29 = std___1___shared_weak_count___release_weak(v95),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    v96 = 128;
    if (*(_QWORD*)(*v94 + 200) == 0) {
      v96 = 56;
    }
    v29 = nn_mem_StandardAllocator_Free(*v94 + v96),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
    v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v97 = v45 - (_QWORD)v266;
  if ((__int64*)v45 == v266) {
    PSEUDO_LOW_LANE128(v29, n128_f32, v265);
    goto LABEL_174;
  }
  v98 = *(_QWORD*)(*v266 + 216);
  v99 = *(_QWORD*)(*v266 + 224);
  if (v99 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v99 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v98 != 0) {
    game_e9f200(v98),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    v100 = LANES128(v29).n128_f32[0];
    if (v99 == 0) {
      goto LABEL_165;
    }
  }
  else {
    v100 = 0x1.0000000000000p-1f;
    if (v99 == 0) {
      goto LABEL_165;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    v29 = std___1___shared_weak_count___release_weak(v99),
    v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
    v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
    v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  }
LABEL_165:
  v101 = *(_QWORD*)(v45 - 16);
  v102 = *(_QWORD*)(v101 + 216);
  v103 = *(_QWORD*)(v101 + 224);
  if (v103 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v103 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v102 != 0) {
    game_e9f200(v102),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v103 == 0) {
      goto LABEL_173;
    }
  LABEL_171:
    if (atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v104 = LANES128(v29).n128_u32[0];
      (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v29 = std___1___shared_weak_count___release_weak(v103),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      PSEUDO_LOW_LANE128(v29, n128_u32, v104);
    }
    goto LABEL_173;
  }
  PSEUDO_LOW_LANE128(v29, n128_u32,
                     COERCE_UNSIGNED_INT((float)(0x1.0000000000000p-1f)));
  if (v103 != 0) {
    goto LABEL_171;
  }
LABEL_173:
  v80 = v80 - (float)(v100 + LANES128(v29).n128_f32[0]);
  PSEUDO_LOW_LANE128(v29, n128_f32,
                     v265 - (float)(v100 + LANES128(v29).n128_f32[0]));
LABEL_174:
  v105 = 0x1.0000000000000p+0f;
  if (v80 > LANES128(v29).n128_f32[0]) {
    v105 = LANES128(v29).n128_f32[0] / v80;
  }
  if ((__int64*)v45 == v266) {
    if (v266 != nullptr) {
      goto LABEL_185;
    }
    goto LABEL_188;
  }
  if ((v97 & 0x8000000000000000LL) != 0) {
    GameRoutine_a78a90(),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v106 = (float)(PSEUDO_UNFUSED(LANES128(v29).n128_f32[0] *
                                -0x1.0000000000000p-1f)) +
         (float)((float)(LANES128(v29).n128_f32[0] - (float)(v80 * v105)) *
                 0x1.0000000000000p-1f);
  v107 = (float*)fw_memory_HeapManager_Allocate(*v94, v97 >> 2, 16, 0),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
  v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  GameRoutine_1a0ba50(v107, 0, v97 >> 2),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  v111 = v97 >> 4;
  v263 = v107;
  *v107 = v106;
  if (v97 != 16) {
    v112 = *(_QWORD*)(*v266 + 216);
    v113 = *(_QWORD*)(*v266 + 224);
    if (v113 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v113 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v112 != 0) {
      game_e9f200(v112),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v115 = v114 + 0x1.0000000000000p-1f;
      if (v113 == 0) {
        goto LABEL_203;
      }
    }
    else {
      v115 = 0x1.0000000000000p+0f;
      if (v113 == 0) {
        goto LABEL_203;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v113 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v113 + 16LL))(v113),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak(v113),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  LABEL_203:
    if (v97 >= 0x11) {
      v121 = v111 - 2;
      v122 = 2;
      v123 = v106 + (float)(v115 * v105);
      if (v111 > 2) {
        v122 = v111;
      }
      v124 = v122 - 1;
      v125 = v263 + 1;
      v126 = v266 + 2;
      do {
        v127 = *(_QWORD*)(*v126 + 216LL);
        v128 = *(_QWORD*)(*v126 + 224LL);
        if (v128 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v128 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v127 != 0) {
          game_e9f200(v127),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          if (v128 == 0) {
            goto LABEL_217;
          }
        }
        else {
          v129 = 0x1.0000000000000p-1f;
          if (v128 == 0) {
            goto LABEL_217;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v128 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v130 = v129;
          (*(void (**)(__int64))(*(_QWORD*)v128 + 16LL))(v128),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v128),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          v129 = v130;
        }
      LABEL_217:
        v123 = v123 + (float)(v129 * v105);
        *v125 = v123;
        if (v121 == 0) {
          goto LABEL_208;
        }
        v131 = *(_QWORD*)(*v126 + 216LL);
        v132 = *(_QWORD*)(*v126 + 224LL);
        if (v132 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v132 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v131 != 0) {
          game_e9f200(v131),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          v134 = v133 + 0x1.0000000000000p-1f;
          if (v132 != 0) {
            goto LABEL_224;
          }
        }
        else {
          v134 = 0x1.0000000000000p+0f;
          if (v132 != 0) {
          LABEL_224:
            if (atomic_fetch_add((atomic_ullong* volatile)(v132 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v132 + 16LL))(v132),
                  v114 = COERCE_AS(__typeof__(v114),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v129 = COERCE_AS(__typeof__(v129),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v143 = COERCE_AS(__typeof__(v143),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v155 = COERCE_AS(__typeof__(v155),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v176 = COERCE_AS(__typeof__(v176),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
              std___1___shared_weak_count___release_weak(v132),
                  v114 = COERCE_AS(__typeof__(v114),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v129 = COERCE_AS(__typeof__(v129),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v133 = COERCE_AS(__typeof__(v133),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v143 = COERCE_AS(__typeof__(v143),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v155 = COERCE_AS(__typeof__(v155),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v176 = COERCE_AS(__typeof__(v176),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
            }
          }
        }
        v123 = v123 + (float)(v134 * v105);
      LABEL_208:
        --v124;
        --v121;
        ++v125;
        v126 += 2;
      } while (v124 != 0);
    }
  }
  v135 = v4 / 0x1.9000000000000p+6f;
  if (v111 <= 1) {
    v136 = 1;
  }
  else {
    v136 = v111;
  }
  v137 = v266;
  for (j = v136; j != 0; --j) {
    v140 = *v137;
    v137 += 2;
    v139 = v140;
    v141 = *(_QWORD*)(v140 + 216);
    v142 = *(_QWORD*)(v140 + 224);
    if (v142 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v142 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v141 != 0) {
      game_e9f200(v141),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v144 = v143;
      if (v142 == 0) {
        goto LABEL_238;
      }
    }
    else {
      v144 = 0x1.0000000000000p-1f;
      if (v142 == 0) {
        goto LABEL_238;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v142 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
    LABEL_238:
      v145 = *(_QWORD*)(v139 + 216);
      v146 = *(_QWORD*)(v139 + 224);
      if (v146 == 0) {
        goto LABEL_240;
      }
    LABEL_239:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v146 + 8), 1u,
                                memory_order_relaxed);
      goto LABEL_240;
    }
    (*(void (**)(__int64))(*(_QWORD*)v142 + 16LL))(v142),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak(v142),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    v145 = *(_QWORD*)(v139 + 216);
    v146 = *(_QWORD*)(v139 + 224);
    if (v146 != 0) {
      goto LABEL_239;
    }
  LABEL_240:
    if (v145 != 0) {
      *(_BYTE*)(v145 + 92) = 1;
      *(float*)(v145 + 88) = v105 * v144;
    }
    if (v146 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v146 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v146 + 16LL))(v146),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak(v146),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
  v147 = 0x0.0p+0f;
  v148 = v136;
  v149 = v266;
  v150 = *(unsigned __int8*)(*GameData_212dec0[0] + 12);
  do {
    v152 = *v149;
    v149 += 2;
    v154 = *(_QWORD*)(v152 + 216);
    v153 = *(_QWORD*)(v152 + 224);
    if (v153 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v153 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v154 == 0) {
      v157 = 0x0.0p+0f;
      if (v153 == 0) {
        goto LABEL_248;
      }
    LABEL_259:
      if (atomic_fetch_add((atomic_ullong* volatile)(v153 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v153 + 16LL))(v153),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak(v153),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      goto LABEL_248;
    }
    game_e9f200(v154),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    v156 = fmaxf(v155, 0x1.3333340000000p-1f);
    if ((*(_BYTE*)(v154 + 92) & (*(float*)(v154 + 88) < v156)) != 0) {
      v156 = *(float*)(v154 + 88);
    }
    v157 = v156 + -0x1.0000000000000p-1f;
    if (v153 != 0) {
      goto LABEL_259;
    }
  LABEL_248:
    v151 = -v157;
    if (v157 < 0x0.0p+0f) {
      v151 = -0x0.0p+0f;
    }
    --v148;
    v147 = fminf(v147, v151);
  } while (v148 != 0);
  v158 = -v135;
  v159 = 0;
  if (v264 == 0) {
    v158 = v135;
  }
  v160 = v8 + 0x1.6800000000000p+7f;
  if (v264 == 0) {
    v160 = v8;
  }
  if (v150 != 0) {
    v161 = 0x0.0p+0f;
  }
  else {
    v161 = v158;
  }
  v261 = v160;
  v257 = (float)(v15 * -0x1.4000000000000p+1f) + -0x1.c000000000000p+1f;
  v258 = (float)(v15 * 0x1.4000000000000p+1f) + -0x1.c000000000000p+1f;
  v260 = v161;
  v259 = v160 * 0x1.1df46a0000000p-6f;
  v94 = (__int64*)fw_memory_g_heap_manager_ptr;
  while (2) {
    v162 = *(_QWORD*)(v256 + 16);
    v163 = v263[v159];
    if (v162 != 0) {
      v164 = std___1___shared_weak_count_lock(v162),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v164 != 0) {
        v165 = *(_QWORD*)(v256 + 8) == 0;
        add = atomic_fetch_add((atomic_ullong* volatile)(v164 + 8),
                               0xFFFFFFFFFFFFFFFFLL);
        if (!v165) {
          v163 = 0x0.0p+0f;
        }
        if (add == 0) {
          v167 = v164;
          (*(void (**)(__int64))(*(_QWORD*)v164 + 16LL))(v164),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak(v167),
              v114 = COERCE_AS(__typeof__(v114),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v129 = COERCE_AS(__typeof__(v129),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v133 = COERCE_AS(__typeof__(v133),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v143 = COERCE_AS(__typeof__(v143),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v176 = COERCE_AS(__typeof__(v176),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
    }
    v168 = &v266[2 * v159];
    if (f_.v279 == f_.v280) {
      v169 = f_.v279;
    }
    else {
      v169 = f_.v279;
      while (*(_QWORD*)v169 != *v168) {
        v169 += 16;
        if (v169 == f_.v280) {
          goto LABEL_283;
        }
      }
    }
    v170 = v258;
    v171 = 0x0.0p+0f;
    if (v169 == f_.v280) {
    LABEL_283:
      v171 = 0x0.0p+0f;
      if (v159 <= 5) {
        v171 = GameData_1b913ec[v159] + 0x0.0p+0f;
      }
      if (f_.v279 == f_.v280) {
        v170 = -0x1.c000000000000p+1f;
      }
      else {
        v170 = v257;
      }
    }
    v172 = *v168;
    if (v264 != 0) {
      v173 = v163;
    }
    else {
      v173 = -v163;
    }
    v175 = *(_QWORD*)(v172 + 216);
    v174 = *(_QWORD*)(v172 + 224);
    if (v174 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v174 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v175 != 0) {
      game_e9f200(v175),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v177 = fmaxf(v176, 0x1.3333340000000p-1f);
      if ((*(_BYTE*)(v175 + 92) & (*(float*)(v175 + 88) < v177)) != 0) {
        v178 = *(float*)(v175 + 88);
      }
      else {
        v178 = v177;
      }
    }
    else {
      v178 = 0x1.0000000000000p-1f;
    }
    v179 = v260 + (float)(v147 + v170);
    if (v174 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v174 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v174 + 16LL))(v174),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak(v174),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v180 = -v178;
    v181 = v178 + (float)((float)-v265 * 0x1.0000000000000p-1f);
    v182 = -(float)(v178 - (float)(v265 * 0x1.0000000000000p-1f));
    if (v181 > (float)-v178) {
      v181 = -v178;
    }
    if (v182 >= v173) {
      v182 = v173;
    }
    if (v173 >= (float)-(float)((float)(v265 * 0x1.0000000000000p-1f) - v178)) {
      v183 = v182;
    }
    else {
      v183 = -(float)((float)(v265 * 0x1.0000000000000p-1f) - v178);
    }
    v184 = v171 + v179;
    if (v179 <= v180) {
      v185 = v179;
    }
    else {
      v185 = -v178;
    }
    if (v179 < v181) {
      v185 = v181;
    }
    if (v184 <= v180) {
      v180 = v171 + v179;
    }
    if (v184 < v181) {
      v180 = v181;
    }
    LANES128(v186).n128_u64[0] = LODWORD(v183);
    v187 = COERCE_AS(int8x16_t, LODWORD(v183));
    LANES128(v186).n128_u64[1] = LODWORD(v180);
    LANES128(v187).n128_f32[2] = v185;
    v274 = v186;
    v269 = v187;
    v271 = v183;
    math_Quat_FromYawPitchRoll((void*)(&v278), v259, 0x0.0p+0f, 0x0.0p+0f),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    v188 = vmulq_f32(v278, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v189).n128_u64[0] = LANES128(v278).n128_u64[0];
    v190 = *(_QWORD*)(v256 + 16);
    LANES64(v191).n64_u64[0] =
        LANES64_OF(vqtbl1_s8(v188, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v192).n128_u64[0] = LODWORD(v271);
    LANES128(v193).n128_u64[0] = LODWORD(v271);
    LANES128(v194).n128_u64[0] =
        LANES64_OF(
            vmul_f32(COERCE_AS(float32x2_t, LODWORD(v271)),
                     vqtbl1_s8(v188, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL))))
            .n64_u64[0];
    LANES128(v195).n128_u64[0] = LANES128(v194).n128_u64[0];
    LANES128(v193).n128_u64[1] =
        LANES128_OF(vextq_s8(v269, v269, 8u)).n128_u64[0];
    LANES128(v196).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v193, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v196).n128_u64[1] = LANES128(v196).n128_u64[0];
    v197 = vmulq_f32(v188, v196);
    LANES128(v196).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v193, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(float32x2_t*)&LANES128(v195).n128_i8[8] =
        vmul_f32(COERCE_AS(float32x2_t, LANES128(v196).n128_u64[0]), v191);
    LANES64(v198).n64_u64[0] =
        LANES64_OF(vqtbl1_s8(v188, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v199 = vmlaq_f32(v197, COERCE_AS(float32x4_t, GameData_1a83800), v195);
    LANES128(v195).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v193, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v193).n128_u64[0] =
        LANES64_OF(vmul_lane_f32(
                       COERCE_AS(float32x2_t, LODWORD(v271)),
                       COERCE_AS(float32x2_t, LANES128(v188).n128_u64[0]), 1))
            .n64_u64[0];
    LANES128(v200).n128_u64[0] =
        LANES64_OF(
            vmul_f32(COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0]), v198))
            .n64_u64[0];
    LANES128(v196).n128_u64[1] = LANES128(v195).n128_u64[0];
    LANES128(v195).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v188, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v200).n128_u64[1] = LANES128(v193).n128_u64[0];
    v201 = vmlaq_f32(v199, COERCE_AS(float32x4_t, GameData_1a83800), v200);
    *(int8x8_t*)&LANES128(v195).n128_i8[8] =
        vqtbl1_s8(v188, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v200).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v278, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v200).n128_u64[1] = LANES128(v200).n128_u64[0];
    v202 = vmlsq_f32(v201, v195, v196);
    LANES128(v196).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v278, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v203).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v202, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v189).n128_u64[1] = LANES128(v196).n128_u64[0];
    *(int8x8_t*)&LANES128(v203).n128_i8[8] =
        vqtbl1_s8(v202, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v204).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v202, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v204).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v202).n128_u64[0]), 1);
    v205 = vmlaq_f32(vmulq_f32(v200, v202),
                     COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v189, v203));
    LANES128(v203).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v278, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v196).n128_u64[1] = LANES128(v203).n128_u64[0];
    LANES128(v203).n128_u64[1] = LANES128(v278).n128_u64[0];
    LANES128(v206).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v202, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v206).n128_i8[8] =
        vqtbl1_s8(v202, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v207 = vmlsq_f32(vmlaq_f32(v205, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v203, v204)),
                     v206, v196);
    LANES128(v207).n128_u32[3] = 0;
    LANES128(v192).n128_u64[1] =
        LANES128_OF(vextq_s8(v274, v274, 8u)).n128_u64[0];
    v208 = vaddq_f32(v262, v207);
    LANES128(v206).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v206).n128_u64[1] = LANES128(v206).n128_u64[0];
    v209 = vmulq_f32(v188, v206);
    LANES128(v206).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v206).n128_i8[8] =
        vqtbl1_s8(v192, COERCE_AS(int8x8_t, 0xB0A090807060504LL));
    *(float32x2_t*)&LANES128(v194).n128_i8[8] =
        vmul_f32(v191, COERCE_AS(float32x2_t, LANES128(v206).n128_u64[0]));
    v210 = vmlaq_f32(v209, COERCE_AS(float32x4_t, GameData_1a83800), v194);
    LANES128(v194).n128_u64[0] =
        LANES64_OF(vmul_f32(v198, *(float32x2_t*)&LANES128(v206).n128_i8[8]))
            .n64_u64[0];
    LANES128(v194).n128_u64[1] = LANES128(v193).n128_u64[0];
    v211 = vmlsq_f32(
        vmlaq_f32(v210, COERCE_AS(float32x4_t, GameData_1a83800), v194), v195,
        v206);
    LANES128(v194).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v211, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v194).n128_i8[8] =
        vqtbl1_s8(v211, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v212 = vmlaq_f32(vmulq_f32(v200, v211),
                     COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v189, v194));
    LANES128(v194).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v211, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v194).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v211).n128_u64[0]), 1);
    v213 = vmlaq_f32(v212, COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v203, v194));
    LANES128(v194).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v211, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v194).n128_i8[8] =
        vqtbl1_s8(v211, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v214 = vmlsq_f32(v213, v194, v196);
    LANES128(v214).n128_u32[3] = 0;
    v215 = vaddq_f32(v262, v214);
    if (v190 != 0) {
      v272 = v215;
      v275 = v208;
      v216 = std___1___shared_weak_count_lock(v190),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v216 == 0) {
        goto LABEL_325;
      }
      v217 = *(_QWORD*)(v256 + 8);
      if (v217 != 0) {
        v215 = v272;
        v208 = v275;
        if (v217 != *v168) {
          v208 = COERCE_AS(float32x4_t, GameData_1a83030);
          v215 = COERCE_AS(float32x4_t, GameData_1a83030);
        }
      }
      else {
        v215 = v272;
        v208 = v275;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v216 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v218 = v216;
        v272 = v215;
        v275 = v208;
        (*(void (**)(__int64))(*(_QWORD*)v216 + 16LL))(v216),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak(v218),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      LABEL_325:
        v215 = v272;
        v208 = v275;
      }
    }
    v219 = *v168;
    if ((*(_BYTE*)(*v168 + 177) & 1) == 0) {
      *(_BYTE*)(v219 + 177) = 1;
    }
    *(_QWORD*)(v219 + 96) = LANES128(v208).n128_u64[0];
    *(_QWORD*)(v219 + 112) = LANES128(v215).n128_u64[0];
    v220 = *(_QWORD*)(v219 + 208);
    v222 = *(_OWORD*)(v219 + 96);
    v221 = *(_OWORD*)(v219 + 112);
    *(_QWORD*)&v223 = *(_QWORD*)(v219 + 112);
    *((_QWORD*)&v222 + 1) = LANES128(v208).n128_u32[2];
    *((_QWORD*)&v223 + 1) = LANES128(v215).n128_u32[2];
    *(_OWORD*)(v219 + 96) = v222;
    *(_OWORD*)(v219 + 112) = v223;
    *(float*)(v219 + 128) = v163;
    *(float*)(v219 + 132) = v261;
    if (v220 != 0) {
      v276 = v223;
      *(_QWORD*)&v224 = (unsigned int)v221 | 0x4348000000000000LL;
      *((_QWORD*)&v224 + 1) = LANES128_OF(vextq_s8(v215, v215, 8u)).n128_u32[0];
      v285 = v224;
      DWORD1(v221) = -1027080192;
      *((_QWORD*)&v221 + 1) = *((_QWORD*)&v224 + 1);
      v284 = v221;
      GameRoutine_1085a10((void*)(&f_.v282), v220 + 160, &v285, &v284, 0),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v223 = v276;
      DWORD1(v223) = HIDWORD(f_.v282);
    }
    *(_QWORD*)(v219 + 112) = v223;
    *(_BYTE*)(v219 + 188) = 1;
    v225 = *(_OWORD*)(v219 + 112);
    *(_DWORD*)(v219 + 100) = DWORD1(v225);
    *((_QWORD*)&v225 + 1) = DWORD2(v223);
    *(_OWORD*)(v219 + 112) = v225;
    CmdBtlUnit_e7bed0(v219, 1),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_WORD*)(*(_QWORD*)(v219 + 16) + 20LL) |= 1u;
    if (*(_QWORD*)(v219 + 424) == *(_QWORD*)(v219 + 416)) {
      UnitActor_81d740(*(_QWORD*)(v219 + 16)),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    if (++v159 != v136) {
      continue;
    }
    break;
  }
  v226 = 128;
  if (*(_QWORD*)(*v94 + 200) == 0) {
    v226 = 56;
  }
  v227 = nn_mem_StandardAllocator_Free(*v94 + v226),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
  v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
  do {
    v228 = *(_QWORD*)(v45 - 8);
    if (v228 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v228 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v228 + 16LL))(
          v228, *(long double*)&v227),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      v227 = std___1___shared_weak_count___release_weak(v228),
      v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
      v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
      v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    v45 -= 16;
  } while ((__int64*)v45 != v266);
LABEL_185:
  v116 = 128;
  if (*(_QWORD*)(*v94 + 200) == 0) {
    v116 = 56;
  }
  v29 = nn_mem_StandardAllocator_Free(*v94 + v116),
  v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
  v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
  v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
LABEL_188:
  v117 = f_.v279;
  if (f_.v279 != nullptr) {
    v118 = f_.v280;
    if (f_.v279 == f_.v280) {
      goto LABEL_196;
    }
    do {
      v119 = *((_QWORD*)v118 - 1);
      if (v119 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v119 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v119 + 16LL))(
            v119, *(long double*)&v29),
            v114 =
                COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
            v129 =
                COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
            v133 =
                COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
            v143 =
                COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
            v155 =
                COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
            v176 =
                COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
        v29 = std___1___shared_weak_count___release_weak(v119),
        v114 = COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
        v143 = COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
        v176 = COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v118 -= 16;
    } while (v118 != v117);
    if (f_.v279 != nullptr) {
    LABEL_196:
      v120 = 128;
      if (*(_QWORD*)(*v94 + 200) == 0) {
        v120 = 56;
      }
      nn_mem_StandardAllocator_Free(*v94 + v120),
          v114 =
              COERCE_AS(__typeof__(v114), PSEUDO_REGISTER(float, "s0", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(float, "s0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(float, "s0", "=w")),
          v143 =
              COERCE_AS(__typeof__(v143), PSEUDO_REGISTER(float, "s0", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(float, "s0", "=w")),
          v176 =
              COERCE_AS(__typeof__(v176), PSEUDO_REGISTER(float, "s0", "=w"));
    }
  }
}

#pragma GCC visibility pop
