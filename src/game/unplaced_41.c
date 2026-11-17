#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
double GameRoutine_1a09f70(double);
double GameRoutine_1a09f80(double);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83590;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6180;
extern __int64* GameData_212d448[9];
extern __int64 fw_memory_g_heap_manager_ptr;
float game_110d5c0(__int64, float32x4_t*);
float game_110d7c0(float32x4_t*, float32x4_t*, float32x4_t*, float32x4_t**,
                   float);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void game_111fd80(int8x16_t*, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_10be5c0(__int64 result);

__int64 game_10be5c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  float32x4_t v4;
  float32x4_t v5;
  __int64 v6;
  int16x4_t v7;
  float32x4_t v8;
  int16x4_t v9;
  float32x4_t v10;
  unsigned __int32 v11;
  float v12;
  float32x4_t v13;
  unsigned __int64 v14;
  __int64 v15;
  __int128 v16;
  unsigned __int64 v17;
  float v18;
  float v19;
  float v20;
  int8x16_t v21;
  float v22;
  float v23;
  float32x4_t v24;
  float32x4_t v25;
  float v26;
  float v27;
  float32x4_t v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float v39;
  float v40;
  int8x16_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  int8x8_t v46;
  float32x4_t v47;
  int32x2_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  int8x16_t v55;
  int8x8_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  __int64 v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float v75;
  float32x4_t v76;
  float32x4_t v77;
  int8x16_t v78;
  float v79;
  float32x4_t v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  int8x16_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float v93;
  float v94;
  float v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  int8x16_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  int8x16_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float v109;
  float v110;
  double v111;
  double v112;
  double v113;
  unsigned int v114;
  unsigned int v115;
  int8x16_t v116;
  float32x4_t v117;
  unsigned __int64 v118;
  float32x4_t v119;
  int8x16_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  int8x16_t v125;
  int8x16_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  double v132;
  double v133;
  float v134;
  __int64 v135;
  unsigned int v136;
  float32x4_t v137;
  float32x4_t v138;
  unsigned int v139;
  unsigned __int64 v140;
  float32x4_t v141;
  int8x16_t v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  float32x4_t v146;
  int8x16_t v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x4_t v152;
  int8x16_t v153;
  float32x4_t v154;
  float v155;
  int8x16_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  int8x16_t v164;
  int8x16_t v165;
  float v166;
  float32x4_t v167;
  float32x4_t v168;
  int8x16_t v169;
  float32x4_t v170;
  float32x4_t v171;
  int8x16_t v172;
  float32x4_t v173;
  float32x4_t v174;
  int8x16_t v175;
  float32x4_t v176;
  float32x4_t v177;
  float32x4_t v178;
  int16x4_t v179;
  float32x4_t v180;
  int v181;
  int v182;
  float32x4_t v183;
  float v184;
  float v185;
  float32x4_t v186;
  float32x4_t v187;
  float v188;
  float32x2_t v189;
  float32x2_t v190;
  float32x4_t v191;
  float32x2_t v192;
  int8x16_t v193;
  float32x4_t v194;
  int8x16_t v195;
  float32x4_t v196;
  float32x4_t v197;
  float v198;
  int v199;
  __int64 v200;
  __int64 v201;
  int8x16_t* v202;
  unsigned __int64 v203;
  __int64 v204;
  __int64 v205;
  int8x16_t* v206;
  unsigned __int64 v207;
  __int64 v208;
  float v209;
  unsigned __int64 v210;
  float v211;
  float v212;
  float v213;
  float v214;
  __int64 v215;
  float v216;
  float v217;
  float32x4_t v218;
  float32x4_t v219;
  float v220;
  float v221;
  float32x4_t v222;
  float32x4_t v223;
  float v224;
  float32x4_t v225;
  float32x4_t v226;
  float32x4_t v227;
  float v228;
  float32x4_t v229;
  float32x4_t v230;
  float v231;
  float32x4_t v232;
  int8x16_t v233;
  unsigned __int32 v234;
  float32x2_t v235;
  float v236;
  float v237;
  float32x4_t v238;
  __int64 v239;
  float32x4_t v240;
  float32x4_t v241;
  float v242;
  float v243;
  int8x16_t v244;
  float32x4_t v245;
  int8x16_t v246;
  float32x4_t v247;
  float32x4_t v248;
  float32x4_t v249;
  float32x4_t v250;
  float32x4_t v251;
  float32x4_t v252;
  int8x16_t v253;
  float32x4_t v254;
  float32x4_t v255;
  float32x4_t v256;
  float32x4_t v257;
  float32x4_t v258;
  char v259;
  char v260;
  float32x4_t v261;
  float32x4_t v262;
  float* v263;
  __int128 v264;
  __int128 v265;
  unsigned __int32 v266;
  __int128 v267;
  float v268;
  int v269;
  float v270;
  float v271;
  float v272;
  int v273;
  int v274;
  __int64 v275;
  float v276;
  int v277;
  __int64 v278;
  int v279;
  __int64 v280;
  int v281;
  __int64 v282;
  struct {
    float32x4_t v283;
    float32x4_t v284;
    float32x4_t v285;
    unsigned __int64 v286;
    char gap56_[8];
    unsigned __int64 v287;
    char gap72_[8];
    float32x4_t v288;
    unsigned __int64 v289;
    char gap104_[8];
    unsigned __int64 v290;
    char gap120_[8];
    float32x4_t v291;
    unsigned __int64 v292;
    char gap152_[8];
    unsigned __int64 v293;
    char gap168_[8];
    unsigned __int64 v294;
    char gap184_[8];
    float v295;
    float v296;
    float v297;
    float v298;
    union {
      float32x4_t v299;
      float v300;
    };
    unsigned __int32 v301;
    char gap228_[12];
    unsigned __int64 v302;
    char gap248_[8];
    union {
      float v303;
      float v304;
    };
    char gap260_[12];
    union {
      int8x16_t v305;
      float v306;
      float v307;
      float v308;
      float v309;
      float v310;
      float v311;
      float v312;
    };
    char gap288_[16];
    union {
      unsigned __int64 v313;
      float32x4_t v314;
      float32x4_t v315;
      float v316;
      float32x4_t v317;
    };
    union {
      float32x4_t v318;
      float32x4_t v319;
    };
    union {
      float32x4_t v320;
      unsigned __int32 v321;
      float32x4_t v322;
    };
    char gap352_[16];
    union {
      float32x4_t v323;
      float32x4_t v324;
      float32x4_t v325;
      float32x4_t v326;
      float32x4_t v327;
      float32x4_t v328;
      float32x4_t v329;
    };
    float32x4_t v330;
    float32x4_t v331;
    float32x4_t v332;
    float32x4_t v333;
    __int64 v334;
    char gap456_[8];
    float32x4_t v335;
  } f_;
  float32x4_t v336;

  v260 = COERCE_AS(__typeof__(v260),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_BYTE*)(result + 113) == 0) {
    return result;
  }
  v1 = result;
  *(_BYTE*)(result + 113) = 0;
  v2 = *(_QWORD*)(result + 192);
  if (v2 != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2),
    v260 = COERCE_AS(__typeof__(v260),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v3 == 3) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 192) + 32LL))(
          *(_QWORD*)(v1 + 192));
    }
    if (v3 == 1) {
      (*(void (**)(__int64))(**(_QWORD**)(v1 + 192) + 32LL))(
          *(_QWORD*)(v1 + 192)),
          v260 = COERCE_AS(__typeof__(v260),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v5 = *(float32x4_t*)(v1 + 128);
  v4 = *(float32x4_t*)(v1 + 144);
  v6 = *(_QWORD*)(v1 + 96);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    f_.v328 = v4;
    f_.v322 = v5;
    v274 = __cxa_guard_acquire((__int64)&GameData_21a6130),
    v260 = COERCE_AS(__typeof__(v260),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v5 = f_.v322;
    v4 = f_.v328;
    if (v274 != 0) {
      v275 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v275;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v260 = COERCE_AS(__typeof__(v260),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v5 = f_.v322;
      v4 = f_.v328;
    }
  }
  LANES64(v7).n64_u64[0] =
      LANES64_OF(
          vmovn_s32(vceqq_f32(v5, COERCE_AS(float32x4_t, GameData_21a6120))))
          .n64_u64[0];
  if ((LANES64(v7).n64_u8[0] & 1) != 0 && (LANES64(v7).n64_u8[2] & 1) != 0 &&
      (LANES64(v7).n64_u8[4] & 1) != 0) {
    f_.v323 = v4;
    v8 = vaddq_f32(v4, COERCE_AS(float32x4_t, GameData_1a83590));
    LANES128(v8).n128_u32[3] = 0;
    f_.v320 = v8;
  LABEL_16:
    v11 = 0;
    v12 = 0x1.0000000000000p+0f;
    v13 = COERCE_AS(float32x4_t, GameData_1a83090);
    goto LABEL_17;
  }
  f_.v320 = v5;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    f_.v329 = v4;
    v279 = __cxa_guard_acquire((__int64)&GameData_21a6130),
    v260 = COERCE_AS(__typeof__(v260),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v5 = f_.v320;
    v4 = f_.v329;
    if (v279 != 0) {
      v280 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v280;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v260 = COERCE_AS(__typeof__(v260),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v5 = f_.v320;
      v4 = f_.v329;
    }
  }
  LANES64(v9).n64_u64[0] =
      LANES64_OF(
          vmovn_s32(vceqq_f32(v4, COERCE_AS(float32x4_t, GameData_21a6120))))
          .n64_u64[0];
  if ((LANES64(v9).n64_u8[0] & 1) != 0 && (LANES64(v9).n64_u8[2] & 1) != 0 &&
      (LANES64(v9).n64_u8[4] & 1) != 0) {
    v10 = vaddq_f32(v5, COERCE_AS(float32x4_t, GameData_1a83590));
    LANES128(v10).n128_u32[3] = 0;
    f_.v323 = v10;
    goto LABEL_16;
  }
  f_.v323 = v4;
  v174 = vtrn2q_s32(vrev64q_s32(vsubq_f32(v4, v5)), COERCE_AS(int32x4_t, 0));
  v175 = vmulq_f32(v174, v174);
  LANES128(v175).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v175, v175, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0])))
          .n64_u64[0];
  LANES128(v175).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v175).n128_u64[0])))
          .n64_u64[0];
  LANES128(v175).n128_u64[1] = LANES128(v175).n128_u64[0];
  v176 = vrsqrteq_f32(v175);
  v177 = vmulq_f32(v176, vrsqrtsq_f32(v176, vmulq_f32(v175, v176)));
  v13 = vbicq_s8(
      vmulq_f32(v174,
                vmulq_f32(v177, vrsqrtsq_f32(v177, vmulq_f32(v175, v177)))),
      vceqzq_f32(v175));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    f_.v330 = v13;
    v281 = __cxa_guard_acquire((__int64)&GameData_21a6130),
    v260 = COERCE_AS(__typeof__(v260),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v4 = f_.v323;
    v13 = f_.v330;
    v5 = f_.v320;
    if (v281 != 0) {
      v282 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v282;
      __cxa_guard_release((__int64)&GameData_21a6130),
          v260 = COERCE_AS(__typeof__(v260),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v4 = f_.v323;
      v13 = f_.v330;
      v5 = f_.v320;
    }
  }
  v178 = *(float32x4_t*)(v1 + 176);
  LANES64(v179).n64_u64[0] =
      LANES64_OF(
          vmovn_s32(vceqq_f32(v178, COERCE_AS(float32x4_t, GameData_21a6120))))
          .n64_u64[0];
  v11 = LANES128(v13).n128_u32[1];
  if ((LANES64(v179).n64_u8[0] & 1) != 0 &&
      (LANES64(v179).n64_u8[2] & 1) != 0 &&
      (LANES64(v179).n64_u8[4] & 1) != 0) {
    goto LABEL_56;
  }
  {
    __typeof__(v12) z_ = (__typeof__(v12)){0};
    LODWORD(z_) = *(_QWORD*)(v1 + 184);
    v12 = z_;
  }
  if ((float)((float)(PSEUDO_UNFUSED(LANES128(v13).n128_f32[2] *
                                     LANES128(v178).n128_f32[2])) +
              (float)(LANES128(v178).n128_f32[0] *
                      LANES128(v13).n128_f32[0])) >= 0x0.0p+0f) {
    v233 = vsubq_f32(v5, v4);
    v234 = LANES128_OF(vextq_s8(v233, v233, 8u)).n128_u32[0];
    LANES128(v233).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v234),
                         COERCE_AS(float32x2_t, v234)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v233).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v233).n128_u32[0]))))
            .n64_u64[0];
    LANES64(v235).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v233).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v233).n128_u64[0])))
            .n64_u64[0];
    if (LANES64(v235).n64_f32[0] >= 0x1.2000000000000p+1f) {
    LABEL_56:
      v12 = LANES128(v13).n128_f32[2];
      goto LABEL_17;
    }
    v236 = 0x1.5555560000000p-1f * LANES64_OF(vsqrt_f32(v235)).n64_f32[0];
    v11 = 0;
    v237 = v236 * v236;
    LANES128(v13).n128_u32[1] = 0;
    LANES128(v13).n128_u32[3] = 0;
    v12 = (float)(PSEUDO_UNFUSED(LANES128(v13).n128_f32[2] * v237)) +
          (float)(PSEUDO_UNFUSED(LANES128(v178).n128_f32[2] *
                                 (float)(0x1.0000000000000p+0f - v237)));
    LANES128(v13).n128_f32[0] =
        (float)(PSEUDO_UNFUSED(LANES128(v13).n128_f32[0] * v237)) +
        (float)(PSEUDO_UNFUSED(LANES128(v178).n128_f32[0] *
                               (float)(0x1.0000000000000p+0f - v237)));
    LANES128(v13).n128_f32[2] = v12;
  }
  else {
    v11 = DWORDn(*(_QWORD*)(v1 + 176), sizeof(*(_QWORD*)(v1 + 176)) / 4 - 1);
    LANES128(v178).n128_u32[3] = 0;
    v13 = v178;
  }
LABEL_17:
  *(_DWORD*)(v1 + 176) = LANES128(v13).n128_u32[0];
  *(_DWORD*)(v1 + 180) = v11;
  DWORDn(v17, sizeof(v17) / 4 - 1) = 0;
  v14 = LANES128(v13).n128_u32[0];
  v15 = *(_QWORD*)(v1 + 96);
  v16 = *(_OWORD*)(v1 + 176);
  *((_QWORD*)&v16 + 1) = LODWORD(v12);
  *(_OWORD*)(v1 + 176) = v16;
  f_.v301 = LANES128(v13).n128_u32[2];
  *(float*)&v17 = -LANES128(v13).n128_f32[2];
  v18 = *(float*)(v1 + 12);
  if (v15 != 0) {
    v18 = v18 + *(float*)(v15 + 68);
  }
  v19 = (float)(PSEUDO_UNFUSED((float)(v18 * 0x1.1df46a0000000p-6f) *
                               0x1.0000000000000p-1f)) +
        (float)(roundf((float)((float)(v18 * 0x1.1df46a0000000p-6f) *
                               0x1.0000000000000p-1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v19 <= 0x1.921fb60000000p+0f) {
    if (v19 < -0x1.921fb60000000p+0f) {
      v20 = -0x1.0000000000000p+0f;
    }
    else {
      v20 = 0x1.0000000000000p+0f;
    }
    if (v19 < -0x1.921fb60000000p+0f) {
      v19 = -0x1.921fb60000000p+1f - v19;
    }
  }
  else {
    v20 = -0x1.0000000000000p+0f;
    v19 = 0x1.921fb60000000p+1f - v19;
  }
  v21 = vmulq_f32(v13, v13);
  v22 = v19 * v19;
  v23 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  LANES128(v21).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v21).n128_u64[0];
  v24 = vrsqrteq_f32(v21);
  v25 = vmulq_f32(v24, vrsqrtsq_f32(v24, vmulq_f32(v21, v24)));
  v26 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v27 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v28 = vbicq_s8(
      vmulq_f32(v13, vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v21, v25)))),
      vceqzq_f32(v21));
  v29 = *(float*)GameData_212c190;
  v30 = *((float*)GameData_212c190 + 1);
  v31 =
      v19 *
      (float)((float)((float)-(
                          float)(v23 -
                                 (float)((float)(v27 +
                                                 (float)((float)-(
                                                             float)(v26 -
                                                                    (float)((float)(v30 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v19 *
                                                                                                    v19))) *
                                                                            (float)(v19 *
                                                                                    v19))) *
                                                         (float)(v19 * v19))) *
                                         (float)(v19 * v19))) *
                      (float)(v19 * v19)) +
              0x1.0000000000000p+0f);
  v33 = *(float*)GameData_212c188;
  v32 = *((float*)GameData_212c188 + 1);
  v35 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v34 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v36 = vmulq_n_f32(v28, v31);
  LANES128(v37).n128_u64[0] = v17;
  v38 = v36;
  v39 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v40 =
      v20 *
      (float)((float)((float)-(
                          float)(v39 -
                                 (float)((float)(v34 +
                                                 (float)((float)-(
                                                             float)(v35 -
                                                                    (float)((float)(v32 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v22)) *
                                                                            v22)) *
                                                         v22)) *
                                         v22)) *
                      v22) +
              0x1.0000000000000p+0f);
  LANES128(v41).n128_u64[0] = v17;
  LANES128(v38).n128_f32[3] = v40;
  LANES128(v41).n128_u64[1] = v14;
  v42 = vmulq_f32(v38, COERCE_AS(float32x4_t, GameData_1a829d0));
  f_.v302 = v14;
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES64(v46).n64_u64[0] =
      LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES64(v48).n64_u64[0] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v42).n128_u64[0]), 1))
          .n64_u64[0];
  LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v44).n128_u64[0];
  LANES128(v49).n128_u64[0] = LANES128(v45).n128_u64[0];
  *(int8x8_t*)&LANES128(v49).n128_i8[8] = v46;
  v50 = vmulq_f32(v37, v49);
  v51 = COERCE_AS(float32x4_t, GameData_1a83800);
  v52 = vmlaq_f32(vmulq_f32(v43, v42), COERCE_AS(float32x4_t, GameData_1a83800),
                  v50);
  LANES128(v50).n128_u64[0] = LANES128(v47).n128_u64[0];
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v50).n128_i8[8] = v48;
  LANES128(v44).n128_u64[1] = LANES128(v41).n128_u64[0];
  LANES128(v41).n128_u64[1] = v17;
  v53 = vmulq_f32(v41, v50);
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v54).n128_i8[8] =
      vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v55 = vmlsq_f32(vmlaq_f32(v52, COERCE_AS(float32x4_t, GameData_1a83800), v53),
                  v54, v44);
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v38).n128_u64[1],
                                                 LANES128(v36).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES64(v56).n64_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v38).n128_u64[1],
                                                 LANES128(v36).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v57).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v38).n128_u64[1],
                                                 LANES128(v36).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v53).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v38).n128_i8[8] =
      vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v41).n128_u64[0] = LANES128(v36).n128_u64[0];
  LANES128(v58).n128_u64[1] = LANES128(v58).n128_u64[0];
  *(int8x8_t*)&LANES128(v41).n128_i8[8] = v56;
  v59 = vmulq_f32(v41, v38);
  LANES128(v64).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v60 = vmlaq_f32(vmulq_f32(v58, v55), COERCE_AS(float32x4_t, GameData_1a83800),
                  v59);
  *(int32x2_t*)&LANES128(v53).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v55).n128_u64[0]), 1);
  LANES128(v59).n128_u64[0] = LANES128(v57).n128_u64[0];
  LANES128(v59).n128_u64[1] = LANES128(v36).n128_u64[0];
  v61 = vmulq_f32(v59, v53);
  LANES128(v63).n128_u64[0] = LANES64(v56).n64_u64[0];
  v62 = vmlaq_f32(v60, COERCE_AS(float32x4_t, GameData_1a83800), v61);
  LANES128(v63).n128_u64[1] = LANES128(v57).n128_u64[0];
  *(int8x8_t*)&LANES128(v64).n128_i8[8] =
      vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  f_.v318 = vnegq_f32(v63);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    f_.v296 = v33;
    f_.v297 = v32;
    v276 = v34;
    f_.v298 = v39;
    f_.v300 = v29;
    f_.v295 = v26;
    f_.v304 = v23;
    f_.v312 = v35;
    f_.v317 = v62;
    f_.v283 = v64;
    f_.v284 = v63;
    f_.v285 = v58;
    f_.v286 = LANES64(v56).n64_u64[0];
    f_.v287 = LANES128(v57).n128_u64[0];
    f_.v288 = v54;
    f_.v289 = LANES64(v48).n64_u64[0];
    f_.v290 = LANES128(v47).n128_u64[0];
    f_.v291 = v42;
    f_.v292 = LANES64(v46).n64_u64[0];
    f_.v293 = LANES128(v45).n128_u64[0];
    f_.v294 = LANES128(v36).n128_u64[0];
    v277 = __cxa_guard_acquire((__int64)&GameData_21a6190),
    v260 = COERCE_AS(__typeof__(v260),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v64 = f_.v283;
    v63 = f_.v284;
    v58 = f_.v285;
    LANES64(v56).n64_u64[0] = f_.v286;
    v34 = v276;
    v62 = f_.v317;
    v51 = COERCE_AS(float32x4_t, GameData_1a83800);
    v39 = f_.v298;
    v29 = f_.v300;
    v35 = f_.v312;
    v26 = f_.v295;
    v33 = f_.v296;
    v23 = f_.v304;
    v32 = f_.v297;
    LANES128(v57).n128_u64[0] = f_.v287;
    v54 = f_.v288;
    LANES64(v48).n64_u64[0] = f_.v289;
    LANES128(v47).n128_u64[0] = f_.v290;
    v42 = f_.v291;
    LANES64(v46).n64_u64[0] = f_.v292;
    LANES128(v45).n128_u64[0] = f_.v293;
    LANES128(v36).n128_u64[0] = f_.v294;
    if (v277 != 0) {
      v278 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v278;
      __cxa_guard_release((__int64)&GameData_21a6190),
          v260 = COERCE_AS(__typeof__(v260),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v64 = f_.v283;
      v63 = f_.v284;
      v58 = f_.v285;
      LANES64(v56).n64_u64[0] = f_.v286;
      v34 = v276;
      v62 = f_.v317;
      v51 = COERCE_AS(float32x4_t, GameData_1a83800);
      v39 = f_.v298;
      v29 = f_.v300;
      v35 = f_.v312;
      v26 = f_.v295;
      v33 = f_.v296;
      v23 = f_.v304;
      v32 = f_.v297;
      LANES128(v57).n128_u64[0] = f_.v287;
      v54 = f_.v288;
      LANES64(v48).n64_u64[0] = f_.v289;
      LANES128(v47).n128_u64[0] = f_.v290;
      v42 = f_.v291;
      LANES64(v46).n64_u64[0] = f_.v292;
      LANES128(v45).n128_u64[0] = f_.v293;
      LANES128(v36).n128_u64[0] = f_.v294;
    }
  }
  v65 = vmlsq_f32(v62, v64, v63);
  LANES128(v57).n128_u64[1] = LANES128(v36).n128_u64[0];
  LANES128(v66).n128_u64[0] = GameData_21a6180;
  v67 = *(_QWORD*)(v1 + 96);
  LANES128(v68).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v69).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v70).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v47).n128_u64[1] = GameData_21a6180;
  *(int8x8_t*)&LANES128(v66).n128_i8[8] = v46;
  LANES128(v68).n128_u64[1] = LANES128(v68).n128_u64[0];
  LANES128(v45).n128_u64[1] = LANES128(v69).n128_u64[0];
  LANES128(v69).n128_u64[1] = LANES128(v70).n128_u64[0];
  *(int32x2_t*)&LANES128(v70).n128_i8[8] = v48;
  v71 = vmlsq_f32(
      vmlaq_f32(vmlaq_f32(vmulq_f32(v42, v68), v51, vmulq_f32(v66, v45)), v51,
                vmulq_f32(v47, v70)),
      v54, v69);
  v72 = vmulq_f32(v58, v71);
  LANES128(v69).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v73).n128_u64[0] = LANES128(v36).n128_u64[0];
  *(int8x8_t*)&LANES128(v73).n128_i8[8] = v56;
  *(int8x8_t*)&LANES128(v69).n128_i8[8] =
      vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v74 = vmulq_f32(v73, v69);
  v75 = *(float*)(v1 + 16);
  v76 = vmlaq_f32(v72, v51, v74);
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v74).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v71).n128_u64[0]), 1);
  v77 = vmlaq_f32(v76, v51, vmulq_f32(v57, v74));
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v74).n128_i8[8] =
      vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v78 = vmlaq_f32(v77, v74, f_.v318);
  LANES128(v78).n128_u32[3] = 0;
  v336 = v78;
  if (v67 != 0) {
    v79 = *(float*)(v67 + 72);
    if (*(_BYTE*)(v1 + 114) != 0) {
      v79 = -v79;
    }
    v75 = v75 + v79;
  }
  v80 = v65;
  LANES128(v80).n128_u32[3] = 0;
  if (v75 != 0x0.0p+0f) {
    v81 = -v26;
    v82 = -v33;
    v83 = -v23;
    v84 = -v35;
    v85 = -v29;
    v86 = -v39;
    v87 = (float)(PSEUDO_UNFUSED((float)(v75 * 0x1.1df46a0000000p-6f) *
                                 0x1.0000000000000p-1f)) +
          (float)(roundf((float)((float)(v75 * 0x1.1df46a0000000p-6f) *
                                 0x1.0000000000000p-1f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v87 <= 0x1.921fb60000000p+0f) {
      v89 = 0x1.0000000000000p+0f;
      if (v87 >= -0x1.921fb60000000p+0f) {
      LABEL_37:
        v90 = vmulq_f32(v80, v80);
        LANES128(v90).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v90, v90, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
                .n64_u64[0];
        LANES128(v90).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
                .n64_u64[0];
        LANES128(v90).n128_u64[1] = LANES128(v90).n128_u64[0];
        v91 = vrsqrteq_f32(v90);
        v92 = vmulq_f32(v91, vrsqrtsq_f32(v91, vmulq_f32(v90, v91)));
        v93 =
            (float)((float)(v86 +
                            (float)((float)(v34 +
                                            (float)((float)(v84 +
                                                            (float)((float)(v32 +
                                                                            (float)(v82 *
                                                                                    (float)(v87 *
                                                                                            v87))) *
                                                                    (float)(v87 *
                                                                            v87))) *
                                                    (float)(v87 * v87))) *
                                    (float)(v87 * v87))) *
                    (float)(v87 * v87)) +
            0x1.0000000000000p+0f;
        v94 =
            v87 *
            (float)((float)((float)(v83 +
                                    (float)((float)(v27 +
                                                    (float)((float)(v81 +
                                                                    (float)((float)(v30 +
                                                                                    (float)(v85 *
                                                                                            (float)(v87 *
                                                                                                    v87))) *
                                                                            (float)(v87 *
                                                                                    v87))) *
                                                            (float)(v87 *
                                                                    v87))) *
                                            (float)(v87 * v87))) *
                            (float)(v87 * v87)) +
                    0x1.0000000000000p+0f);
        v95 = v89 * v93;
        LANES128(v96).n128_u64[0] = LANES128(v78).n128_u64[0];
        v97 = vmulq_n_f32(
            vbicq_s8(
                vmulq_f32(v80, vmulq_f32(v92, vrsqrtsq_f32(
                                                  v92, vmulq_f32(v90, v92)))),
                vceqzq_f32(v90)),
            v94);
        LANES128(v98).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v99 = v97;
        LANES128(v96).n128_u64[1] = LANES128(v98).n128_u64[0];
        LANES128(v99).n128_f32[3] = v95;
        v100 = vmulq_f32(v99, COERCE_AS(float32x4_t, GameData_1a829d0));
        LANES128(v101).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v102).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v78, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v103).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v101).n128_u64[1] = LANES128(v101).n128_u64[0];
        LANES128(v98).n128_u64[1] = LANES128(v102).n128_u64[0];
        LANES128(v102).n128_u64[1] = LANES128(v78).n128_u64[0];
        *(int8x8_t*)&LANES128(v103).n128_i8[8] =
            vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v104 = vmlaq_f32(vmulq_f32(v101, v100), v51, vmulq_f32(v96, v103));
        LANES128(v103).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v103).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v100).n128_u64[0]), 1);
        LANES128(v90).n128_u64[0] = LANES128(v97).n128_u64[0];
        v105 = vmlaq_f32(v104, v51, vmulq_f32(v102, v103));
        LANES128(v102).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v102).n128_i8[8] =
            vqtbl1_s8(v100, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v106 = vmlsq_f32(v105, v102, v98);
        LANES128(v99).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(COERCE_AS(int8x16_t,
                                    __PAIR128__(LANES128(v99).n128_u64[1],
                                                LANES128(v97).n128_u64[0])),
                          COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v102).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(COERCE_AS(int8x16_t,
                                    __PAIR128__(LANES128(v99).n128_u64[1],
                                                LANES128(v97).n128_u64[0])),
                          COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v98).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v100).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(COERCE_AS(int8x16_t,
                                    __PAIR128__(LANES128(v99).n128_u64[1],
                                                LANES128(v97).n128_u64[0])),
                          COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v99).n128_u64[1] = LANES128(v99).n128_u64[0];
        LANES128(v90).n128_u64[1] = LANES128(v102).n128_u64[0];
        *(int8x8_t*)&LANES128(v98).n128_i8[8] =
            vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        LANES128(v102).n128_u64[1] = LANES128(v100).n128_u64[0];
        LANES128(v100).n128_u64[1] = LANES128(v97).n128_u64[0];
        v107 = vmlaq_f32(vmulq_f32(v99, v106), v51, vmulq_f32(v90, v98));
        LANES128(v98).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int32x2_t*)&LANES128(v98).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v106).n128_u64[0]), 1);
        LANES128(v97).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v97).n128_i8[8] =
            vqtbl1_s8(v106, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v108 = vmlsq_f32(vmlaq_f32(v107, v51, vmulq_f32(v100, v98)), v97, v102);
        LANES128(v97).n128_u64[0] = LANES128(v108).n128_u64[0];
        LANES128(v97).n128_u64[1] = LANES128(v108).n128_u32[2];
        v336 = v97;
        goto LABEL_38;
      }
      v88 = -0x1.921fb60000000p+1f;
    }
    else {
      v88 = 0x1.921fb60000000p+1f;
    }
    v87 = v88 - v87;
    v89 = -0x1.0000000000000p+0f;
    goto LABEL_37;
  }
LABEL_38:
  v109 = *(float*)(v1 + 8);
  f_.v313 = LANES128(v65).n128_u64[0];
  f_.v305 = v80;
  if (v67 != 0) {
    v110 = *(float*)(v67 + 64);
    if (*(_BYTE*)(v1 + 114) != 0) {
      v110 = -v110;
    }
    v109 = v109 + v110;
  }
  v111 = (float)(v109 * 0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1;
  v112 = GameRoutine_1a09f80(v111),
  v260 = COERCE_AS(__typeof__(v260),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v113 = GameRoutine_1a09f70(v111),
  v260 = COERCE_AS(__typeof__(v260),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(float*)&v114 = v113 + PSEUDO_UNFUSED(v112 * 0x0.0p+0);
  *(float*)&v115 = v112 + PSEUDO_UNFUSED(v113 * 0x0.0p+0);
  LANES128(v116).n128_u64[0] = f_.v313;
  LANES128(v117).n128_u64[0] = f_.v313;
  *(float*)&v118 = PSEUDO_UNFUSED(v113 * -0x0.0p+0) + v112 * 0x0.0p+0;
  LANES128(v119).n128_u64[0] = __PAIR64__(v114, v118);
  LANES128(v119).n128_u64[1] = __PAIR64__(v115, v118);
  v120 = vmulq_f32(v119, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v121).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v121).n128_i8[8] =
      vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v116).n128_u64[1] =
      LANES128_OF(vextq_s8(f_.v305, f_.v305, 8u)).n128_u64[0];
  LANES128(v122).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v116, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v119).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v116, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v116).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v116, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v117).n128_u64[1] = LANES128(v122).n128_u64[0];
  LANES128(v119).n128_u64[1] = LANES128(v119).n128_u64[0];
  LANES128(v122).n128_u64[1] = LANES128(v116).n128_u64[0];
  LANES128(v116).n128_u64[1] = f_.v313;
  v123 =
      vmlaq_f32(vmulq_f32(v119, v120), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v117, v121));
  LANES128(v121).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v121).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v120).n128_u64[0]), 1);
  v124 = vmlaq_f32(v123, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v116, v121));
  LANES128(v116).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v116).n128_i8[8] =
      vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v120).n128_u64[0] = __PAIR64__(v114, v118);
  DWORDn(v118, sizeof(v118) / 4 - 1) = v115;
  v125 = vmlsq_f32(v124, v116, v122);
  LANES128(v126).n128_u64[0] = __PAIR64__(v114, v118);
  LANES128(v127).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v122).n128_u64[0] = LANES128(v126).n128_u64[0];
  LANES128(v126).n128_u64[1] = v118;
  *(int8x8_t*)&LANES128(v127).n128_i8[8] =
      vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v128).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v128).n128_u64[1] = LANES128(v128).n128_u64[0];
  v129 = vmulq_f32(v128, v125);
  LANES128(v128).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v126).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v126, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v122).n128_u64[1] = LANES128(v128).n128_u64[0];
  LANES128(v128).n128_u64[1] = LANES128(v126).n128_u64[0];
  LANES128(v126).n128_u64[1] = LANES128(v120).n128_u64[0];
  v130 = vmlaq_f32(v129, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v122, v127));
  LANES128(v127).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v127).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v125).n128_u64[0]), 1);
  v131 = vmlaq_f32(v130, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v126, v127));
  LANES128(v126).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v126).n128_i8[8] =
      vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  f_.v314 = vmlsq_f32(v131, v126, v128);
  v132 = GameRoutine_1a09f80(v111),
  v260 = COERCE_AS(__typeof__(v260),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v133 = GameRoutine_1a09f70(v111),
  v260 = COERCE_AS(__typeof__(v260),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v134 = *(float*)(v1 + 4);
  v135 = *(_QWORD*)(v1 + 96);
  *(float*)&v136 = v132 + PSEUDO_UNFUSED(v133 * 0x0.0p+0);
  LANES128(v137).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v336, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v138).n128_u64[0] = LANES128(v336).n128_u64[0];
  LANES128(v138).n128_u64[1] = LANES128(v137).n128_u64[0];
  *(float*)&v139 = v133 + PSEUDO_UNFUSED(v132 * 0x0.0p+0);
  *(float*)&v140 = PSEUDO_UNFUSED(v133 * -0x0.0p+0) + v132 * 0x0.0p+0;
  LANES128(v141).n128_u64[0] = __PAIR64__(v139, v140);
  LANES128(v141).n128_u64[1] = __PAIR64__(v136, v140);
  v142 = vmulq_f32(v141, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v141).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v336, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v143).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v142, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v141).n128_u64[1] = LANES128(v141).n128_u64[0];
  *(int8x8_t*)&LANES128(v143).n128_i8[8] =
      vqtbl1_s8(v142, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v144).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v142, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v145 =
      vmlaq_f32(vmulq_f32(v141, v142), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v138, v143));
  LANES128(v143).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v336, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v144).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v142).n128_u64[0]), 1);
  LANES128(v137).n128_u64[1] = LANES128(v143).n128_u64[0];
  LANES128(v143).n128_u64[1] = LANES128(v336).n128_u64[0];
  LANES128(v146).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v142, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v146).n128_i8[8] =
      vqtbl1_s8(v142, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v153 = vmlsq_f32(vmlaq_f32(v145, COERCE_AS(float32x4_t, GameData_1a83800),
                             vmulq_f32(v143, v144)),
                   v146, v137);
  LANES128(v146).n128_u64[0] = __PAIR64__(v139, v140);
  DWORDn(v140, sizeof(v140) / 4 - 1) = v136;
  LANES128(v142).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v153, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v142).n128_i8[8] =
      vqtbl1_s8(v153, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v147).n128_u64[0] = __PAIR64__(v139, v140);
  LANES128(v143).n128_u64[0] = __PAIR64__(v139, v140);
  LANES128(v147).n128_u64[1] = v140;
  LANES128(v148).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v147, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v148).n128_u64[1] = LANES128(v148).n128_u64[0];
  v149 = vmulq_f32(v148, v153);
  LANES128(v148).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v147, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v147).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v147, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v143).n128_u64[1] = LANES128(v148).n128_u64[0];
  LANES128(v154).n128_u64[1] = LANES128(v147).n128_u64[0];
  LANES128(v147).n128_u64[1] = LANES128(v146).n128_u64[0];
  v150 = vmlaq_f32(v149, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v143, v142));
  LANES128(v142).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v153, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v142).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v153).n128_u64[0]), 1);
  v151 = vmlaq_f32(v150, COERCE_AS(float32x4_t, GameData_1a83800),
                   vmulq_f32(v147, v142));
  LANES128(v147).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v153, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v147).n128_i8[8] =
      vqtbl1_s8(v153, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v152 = vmlsq_f32(v151, v147, v154);
  LANES128(v153).n128_u64[0] = LANES128(v152).n128_u64[0];
  LANES128(v154).n128_u64[0] = LANES128(v152).n128_u64[0];
  LANES128(v154).n128_u32[2] = LANES128(v152).n128_u32[2];
  if (*(_BYTE*)(v1 + 114) != 0) {
    v155 = 0x1.0000000000000p+0f - *(float*)(v6 + 60);
  }
  else {
    v155 = *(float*)(v6 + 60);
  }
  LANES128(v154).n128_u32[3] = 0;
  v336 = v154;
  if (v135 != 0) {
    v134 = v134 + *(float*)(v135 + 76);
  }
  LANES128(v156).n128_u64[0] = LANES128(f_.v314).n128_u64[0];
  v157 = f_.v314;
  LANES128(v157).n128_u32[3] = 0;
  if (v155 == 0x1.0000000000000p-1f) {
    LANES128(v153).n128_u64[1] = LANES128(v154).n128_u64[1];
    LANES128(v156).n128_u64[1] = LANES128(v157).n128_u64[1];
    LANES128(v158).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v153, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v159).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v158).n128_i8[8] =
        vqtbl1_s8(v153, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v159).n128_i8[8] =
        vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v160 = vmulq_f32(v158, v159);
    LANES128(v158).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v153, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v158).n128_i8[8] =
        vqtbl1_s8(v153, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v161).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v161).n128_i8[8] =
        vqtbl1_s8(v156, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v163 = vmlsq_f32(v160, v161, v158);
    v162 = vsubq_f32(f_.v323, f_.v320);
    LANES128(v163).n128_u32[3] = 0;
    v164 = vmulq_f32(v162, v163);
    v165 = vmulq_f32(v162, v157);
    LANES128(v164).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v164, v164, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v164).n128_u64[0])))
            .n64_u64[0];
    LANES128(v165).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v165, v165, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0])))
            .n64_u64[0];
    v166 =
        0x1.0000000000000p-2f *
        LANES64_OF(
            vmul_f32(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v164).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v164).n128_u64[0])),
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0]))))
            .n64_f32[0];
    LANES128(v164).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v164).n128_u64[1] = 0x3F0000003F000000LL;
    v167 = vaddq_f32(vmulq_f32(vaddq_f32(f_.v320, f_.v323), v164),
                     vmulq_n_f32(v163, v166 / v134));
  }
  else {
    v168 = vsubq_f32(f_.v323, f_.v320);
    LANES128(v168).n128_u32[1] = 0;
    v169 = vmulq_f32(v168, v168);
    LANES128(v169).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v169, v169, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0])))
            .n64_u64[0];
    LANES128(v169).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0])))
            .n64_u64[0];
    LANES128(v169).n128_u64[1] = LANES128(v169).n128_u64[0];
    v170 = vrsqrteq_f32(v169);
    v171 = vmulq_f32(v170, vrsqrtsq_f32(v170, vmulq_f32(v169, v170)));
    v172 = vbicq_s8(
        vmulq_f32(v168,
                  vmulq_f32(v171, vrsqrtsq_f32(v171, vmulq_f32(v169, v171)))),
        vceqzq_f32(v169));
    if (v155 >= 0x1.0000000000000p-1f) {
      LANES128(v180).n128_u64[0] = 0xC1200000C1200000LL;
      LANES128(v180).n128_u64[1] = 0xC1200000C1200000LL;
      v167 = vaddq_f32(
          f_.v323,
          vmulq_f32(vmulq_n_f32(v172, 0x1.0000000000000p+0f - v155), v180));
    }
    else {
      LANES128(v173).n128_u64[0] = 0x4120000041200000LL;
      LANES128(v173).n128_u64[1] = 0x4120000041200000LL;
      v167 = vaddq_f32(f_.v320, vmulq_f32(vmulq_n_f32(v172, v155), v173));
    }
    v163 = (__typeof__(v163)){0};
    v166 = 0x0.0p+0f;
  }
  LANES128(v167).n128_u32[3] = 0;
  v181 = *(unsigned __int8*)(v1 + 164);
  v182 = *(unsigned __int8*)(v1 + 172);
  v183 = vaddq_f32(vmulq_n_f32(v157, v134), v167);
  v184 = LANES128(v183).n128_f32[1];
  f_.v335 = v183;
  if ((v181 & 1) != 0 || v182 != 0) {
    v185 = *(float*)(v1 + 160);
    v186 = vsubq_f32(v167, f_.v323);
    v187 = vmulq_f32(v186, v186);
    if (v181 == 0) {
      v185 = LANES128(f_.v320).n128_f32[1];
    }
    v188 = *(float*)(v1 + 168);
    LANES64(v189).n64_u64[0] =
        LANES128_OF(vextq_s8(v187, v187, 8u)).n128_u64[0];
    if (v182 == 0) {
      v188 = LANES128(f_.v323).n128_f32[1];
    }
    LANES64(v190).n64_u64[0] =
        LANES64_OF(
            vadd_f32(v189, COERCE_AS(float32x2_t, LANES128(v187).n128_u64[0])))
            .n64_u64[0];
    if (v188 < -0x1.6800000000000p+6f) {
      v188 = v185;
    }
    v191 = vsubq_f32(f_.v320, v167);
    LANES64(v192).n64_u64[0] = LANES64_OF(vpadd_f32(v190, v190)).n64_u64[0];
    if (v185 < -0x1.6800000000000p+6f) {
      v185 = v188;
    }
    v193 = vmulq_f32(v191, v191);
    LANES128(v193).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v193, v193, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0])))
            .n64_u64[0];
    LANES128(v193).n128_f32[0] =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0]))))
            .n64_f32[0];
    LANES128(v167).n128_f32[1] =
        v185 +
        (float)((float)(v188 - v185) *
                (float)(LANES128(v193).n128_f32[0] /
                        (float)(LANES128(v193).n128_f32[0] +
                                LANES64_OF(vsqrt_f32(v192)).n64_f32[0])));
    v194 = vsubq_f32(v183, v167);
    LANES128(v194).n128_u32[3] = 0;
    v195 = vmulq_f32(v194, v194);
    LANES128(v195).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v195, v195, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0])))
            .n64_u64[0];
    LANES128(v195).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0])))
            .n64_u64[0];
    LANES128(v195).n128_u64[1] = LANES128(v195).n128_u64[0];
    v196 = vrsqrteq_f32(v195);
    v197 = vmulq_f32(v196, vrsqrtsq_f32(v196, vmulq_f32(v195, v196)));
    v157 = vbicq_s8(
        vmulq_f32(vmulq_f32(v197, vrsqrtsq_f32(v197, vmulq_f32(v195, v197))),
                  v194),
        vceqzq_f32(v195));
  }
  v198 = *(float*)(v6 + 80);
  v199 = *(unsigned __int8*)(v6 + 96);
  LANES128(v167).n128_f32[1] = v198 + LANES128(v167).n128_f32[1];
  f_.v321 = LANES128(v167).n128_u32[1];
  LANES128(f_.v335).n128_f32[1] = v184 + v198;
  if (v199 == 1) {
    f_.v299 = v163;
    f_.v315 = v157;
    f_.v334 = 0;
    f_.v333 = (__typeof__(f_.v333)){0};
    f_.v324 = v167;
    f_.v303 = v155;
    f_.v306 = v134;
    if (v155 <= 0x1.0000000000000p-1f) {
      v200 = *GameData_212d448[0];
      if (*GameData_212d448[0] != 0) {
        v201 = *(_QWORD*)(v200 + 32);
        if (v201 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v201 + 16), 1u,
                                    memory_order_relaxed);
          v202 = *(int8x16_t**)(v200 + 40);
          if (*(_QWORD*)(v201 + 8) == -1 || v202 == nullptr ||
              ((void)*(volatile __int64*)(v201 + 8),
               v203 = LANES128(v202[5]).n128_u64[0]) == 0 ||
              *(_QWORD*)(v203 + 8) == -1 ||
              LANES128(v202[5]).n128_u64[1] == 0 ||
              *(_QWORD*)(v201 + 8) == -1) {
            std___1___shared_weak_count___release_weak(v201),
                v260 =
                    COERCE_AS(__typeof__(v260),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          else {
            std___1___shared_weak_count___release_weak(v201),
                v260 =
                    COERCE_AS(__typeof__(v260),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            game_111fd80(v202 + 24, (__int64*)&f_.v333),
                v260 =
                    COERCE_AS(__typeof__(v260),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          v167 = f_.v324;
          v155 = f_.v303;
          v134 = f_.v306;
        }
      }
    }
    if (v155 >= 0x1.0000000000000p-1f) {
      v204 = *GameData_212d448[0];
      if (*GameData_212d448[0] != 0) {
        v205 = *(_QWORD*)(v204 + 56);
        if (v205 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v205 + 16), 1u,
                                    memory_order_relaxed);
          v206 = *(int8x16_t**)(v204 + 64);
          if (*(_QWORD*)(v205 + 8) == -1 || v206 == nullptr ||
              ((void)*(volatile __int64*)(v205 + 8),
               v207 = LANES128(v206[5]).n128_u64[0]) == 0 ||
              *(_QWORD*)(v207 + 8) == -1 ||
              LANES128(v206[5]).n128_u64[1] == 0 ||
              *(_QWORD*)(v205 + 8) == -1) {
            std___1___shared_weak_count___release_weak(v205),
                v260 =
                    COERCE_AS(__typeof__(v260),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          else {
            std___1___shared_weak_count___release_weak(v205),
                v260 =
                    COERCE_AS(__typeof__(v260),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            game_111fd80(v206 + 24, (__int64*)&f_.v333),
                v260 =
                    COERCE_AS(__typeof__(v260),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          v167 = f_.v324;
          v134 = f_.v306;
        }
      }
    }
    v208 = LANES128(f_.v333).n128_u64[0];
    if (LANES128(f_.v333).n128_u64[0] == LANES128(f_.v333).n128_u64[1]) {
      goto LABEL_119;
    }
    v209 = *(float*)&f_.v321;
    v210 = LANES128(f_.v333).n128_u64[0];
    do {
      v211 = *(float*)(v210 + 4);
      v212 = *(float*)(v210 + 12);
      v210 += 16LL;
      v213 = v211 - v212;
      if (v213 < v209) {
        v209 = v213;
      }
    } while (v210 != LANES128(f_.v333).n128_u64[1]);
    v214 = *(float*)v1;
    v215 = *(_QWORD*)(v1 + 96);
    f_.v321 = LODWORD(v209);
    if (v215 != 0) {
      v214 = v214 + *(float*)(v215 + 56);
    }
    f_.v332 = v167;
    f_.v331 = f_.v335;
    v216 =
        game_110d7c0(&f_.v335, &f_.v332, &v336, (float32x4_t**)&f_.v333, v214),
    v260 = COERCE_AS(__typeof__(v260),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (f_.v303 == 0x1.0000000000000p-1f) {
      v134 = f_.v306;
      if (v216 <= f_.v306) {
        goto LABEL_117;
      }
      v217 = v166 / v216;
      f_.v332 =
          vaddq_f32(f_.v324, vmulq_n_f32(f_.v299, (float)(v166 / v216) -
                                                      (float)(v166 / f_.v306)));
      f_.v324 = f_.v332;
      f_.v307 = v216;
      v218 = vaddq_f32(vmulq_n_f32(f_.v315, v216), f_.v332);
      LANES128(v219).n128_u64[0] = LANES128(v218).n128_u64[0];
      LANES128(v219).n128_u64[1] = LANES128(v218).n128_u32[2];
      f_.v331 = v219;
      v220 = game_110d7c0(&f_.v331, &f_.v332, &v336, (float32x4_t**)&f_.v333,
                          v214),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v134 = f_.v307;
      if (v220 > f_.v307) {
        v221 = v166 / v220;
        f_.v332 = vaddq_f32(f_.v324,
                            vmulq_n_f32(f_.v299, (float)(v166 / v220) - v217));
        f_.v324 = f_.v332;
        f_.v308 = v220;
        v222 = vaddq_f32(vmulq_n_f32(f_.v315, v220), f_.v332);
        LANES128(v223).n128_u64[0] = LANES128(v222).n128_u64[0];
        LANES128(v223).n128_u64[1] = LANES128(v222).n128_u32[2];
        f_.v331 = v223;
        v224 = game_110d7c0(&f_.v331, &f_.v332, &v336, (float32x4_t**)&f_.v333,
                            v214),
        v260 = COERCE_AS(__typeof__(v260),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v134 = f_.v308;
        if (v224 > f_.v308) {
          v134 = v224;
          v167 = vaddq_f32(f_.v324,
                           vmulq_n_f32(f_.v299, (float)(v166 / v224) - v221));
          v225 = vaddq_f32(vmulq_n_f32(f_.v315, v224), v167);
        LABEL_113:
          LANES128(v232).n128_u64[0] = LANES128(v225).n128_u64[0];
          LANES128(v232).n128_u64[1] = LANES128(v225).n128_u32[2];
          f_.v331 = v232;
        LABEL_118:
          LANES128(v167).n128_u32[3] = 0;
          LANES128(v238).n128_u64[0] = LANES128(f_.v331).n128_u64[0];
          LANES128(v238).n128_u64[1] = LANES128(f_.v331).n128_u32[2];
          f_.v335 = v238;
        LABEL_119:
          if (v208 != 0) {
            f_.v325 = v167;
            f_.v311 = v134;
            v239 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v239 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v239, v208),
                v260 =
                    COERCE_AS(__typeof__(v260),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v134 = f_.v311;
            v167 = f_.v325;
          }
          v157 = f_.v315;
          goto LABEL_124;
        }
        goto LABEL_117;
      }
    }
    else {
      v134 = f_.v306;
      if (v216 <= f_.v306) {
        goto LABEL_117;
      }
      f_.v309 = v216;
      v226 = vaddq_f32(f_.v324, vmulq_n_f32(f_.v315, v216));
      LANES128(v227).n128_u64[0] = LANES128(v226).n128_u64[0];
      LANES128(v227).n128_u64[1] = LANES128(v226).n128_u32[2];
      f_.v331 = v227;
      v228 = game_110d7c0(&f_.v331, &f_.v332, &v336, (float32x4_t**)&f_.v333,
                          v214),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v134 = f_.v309;
      if (v228 > f_.v309) {
        f_.v310 = v228;
        v229 = vaddq_f32(f_.v324, vmulq_n_f32(f_.v315, v228));
        LANES128(v230).n128_u64[0] = LANES128(v229).n128_u64[0];
        LANES128(v230).n128_u64[1] = LANES128(v229).n128_u32[2];
        f_.v331 = v230;
        v231 = game_110d7c0(&f_.v331, &f_.v332, &v336, (float32x4_t**)&f_.v333,
                            v214),
        v260 = COERCE_AS(__typeof__(v260),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v134 = f_.v310;
        if (v231 > f_.v310) {
          v167 = f_.v324;
          v134 = v231;
          v225 = vaddq_f32(f_.v324, vmulq_n_f32(f_.v315, v231));
          goto LABEL_113;
        }
      LABEL_117:
        v167 = f_.v324;
        goto LABEL_118;
      }
    }
    v167 = f_.v324;
    goto LABEL_118;
  }
LABEL_124:
  v240 = vaddq_f32(v167, vmulq_n_f32(v157, v134));
  LANES128(f_.v335).n128_u64[0] = LANES128(v240).n128_u64[0];
  LANES128(v241).n128_u64[0] = LANES128(v240).n128_u64[0];
  LANES128(v241).n128_u64[1] = LANES128(v240).n128_u32[2];
  v242 = *(float*)(v6 + 84);
  f_.v335 = v241;
  if (v242 != 0x0.0p+0f) {
    f_.v316 = v242;
    f_.v319 = v241;
    f_.v326 = v167;
    v243 = -0x1.921fb60000000p+0f;
    if (*(_BYTE*)(v1 + 114) != 0) {
      v243 = 0x1.921fb60000000p+0f;
    }
    math_Quat_FromYawPitchRoll((void*)(&f_.v333), v243, 0x0.0p+0f, 0x0.0p+0f),
        v260 = COERCE_AS(__typeof__(v260),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    LANES128(v244).n128_u64[0] = f_.v302;
    LANES128(v245).n128_u64[0] = f_.v302;
    LANES128(v244).n128_u64[1] = f_.v301;
    v246 = vmulq_f32(f_.v333, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v247).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v246, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v248).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v244, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v249).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v244, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v244).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v244, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v247).n128_i8[8] =
        vqtbl1_s8(v246, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v245).n128_u64[1] = LANES128(v248).n128_u64[0];
    LANES128(v249).n128_u64[1] = LANES128(v249).n128_u64[0];
    LANES128(v248).n128_u64[1] = LANES128(v244).n128_u64[0];
    LANES128(v244).n128_u64[1] = f_.v302;
    v250 = vmlaq_f32(vmulq_f32(v246, v249),
                     COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v245, v247));
    LANES128(v247).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v246, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v247).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v246).n128_u64[0]), 1);
    LANES128(v251).n128_u64[0] = LANES128(f_.v333).n128_u64[0];
    v252 = vmlaq_f32(v250, COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v244, v247));
    LANES128(v244).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v246, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v244).n128_i8[8] =
        vqtbl1_s8(v246, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v246).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v333, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v246).n128_u64[1] = LANES128(v246).n128_u64[0];
    v253 = vmlsq_f32(v252, v244, v248);
    LANES128(v244).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v333, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v248).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v253, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v251).n128_u64[1] = LANES128(v244).n128_u64[0];
    *(int8x8_t*)&LANES128(v248).n128_i8[8] =
        vqtbl1_s8(v253, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v247).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v253, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v254 = vmlaq_f32(vmulq_f32(v246, v253),
                     COERCE_AS(float32x4_t, GameData_1a83800),
                     vmulq_f32(v251, v248));
    LANES128(v248).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(f_.v333, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v247).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v253).n128_u64[0]), 1);
    LANES128(v244).n128_u64[1] = LANES128(v248).n128_u64[0];
    LANES128(v248).n128_u64[1] = LANES128(f_.v333).n128_u64[0];
    LANES128(v255).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v253, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v255).n128_i8[8] =
        vqtbl1_s8(v253, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v256 = vmlsq_f32(vmlaq_f32(v254, COERCE_AS(float32x4_t, GameData_1a83800),
                               vmulq_f32(v248, v247)),
                     v255, v244);
    LANES128(v256).n128_u32[3] = 0;
    v257 = vmulq_n_f32(v256, f_.v316);
    v167 = vaddq_f32(f_.v326, v257);
    f_.v335 = vaddq_f32(f_.v319, v257);
  }
  LANES128(v258).n128_u64[0] = __PAIR64__(f_.v321, LANES128(v167).n128_u32[0]);
  v259 = *(_BYTE*)(v1 + 115);
  LANES128(v258).n128_u64[1] =
      LANES128_OF(vextq_s8(v167, v167, 8u)).n128_u32[0];
  f_.v333 = v258;
  if ((v259 & 1) != 0 || *(_BYTE*)(v6 + 98) != 1) {
    goto LABEL_134;
  }
  f_.v327 = v167;
  game_110d5c0((__int64)&f_.v335, &f_.v333),
      v260 = COERCE_AS(__typeof__(v260),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v260 & 1) == 0) {
    v167 = f_.v327;
    goto LABEL_134;
  }
  v167 = f_.v327;
  if (LANES128(f_.v327).n128_f32[1] >= LANES128(f_.v333).n128_f32[1]) {
  LABEL_134:
    v261 = v167;
    goto LABEL_135;
  }
  LANES128(v261).n128_u32[2] = LANES128(f_.v327).n128_u32[2];
  LANES128(v261).n128_u32[1] = LANES128(f_.v333).n128_u32[1];
LABEL_135:
  v262 = f_.v335;
  *(_DWORD*)(v1 + 48) = LANES128(v167).n128_u32[0];
  *(_DWORD*)(v1 + 52) = LANES128(v261).n128_u32[1];
  v263 = *(float**)(v1 + 96);
  *(_QWORD*)(v1 + 32) = LANES128(v262).n128_u64[0];
  v264 = *(_OWORD*)(v1 + 32);
  v265 = *(_OWORD*)(v1 + 48);
  *((_QWORD*)&v265 + 1) = LANES128(v261).n128_u32[2];
  v266 = LANES128(v336).n128_u32[2];
  *((_QWORD*)&v264 + 1) = LANES128(v262).n128_u32[2];
  *(_QWORD*)(v1 + 64) = LANES128(v336).n128_u64[0];
  v267 = *(_OWORD*)(v1 + 64);
  *(_OWORD*)(v1 + 32) = v264;
  *(_OWORD*)(v1 + 48) = v265;
  *((_QWORD*)&v267 + 1) = v266;
  v268 = *(float*)v1;
  *(_OWORD*)(v1 + 64) = v267;
  if (v263 != nullptr) {
    v269 = *(unsigned __int8*)(v1 + 114);
    *(float*)(v1 + 80) = v268 + v263[14];
    v270 = v263[16];
    if (v269 != 0) {
      v270 = -v270;
    }
    v271 = *(float*)(v1 + 12);
    *(float*)(v1 + 84) = *(float*)(v1 + 8) + v270;
    v272 = v271 + v263[17];
  }
  else {
    v273 = *(_DWORD*)(v1 + 8);
    v272 = *(float*)(v1 + 12);
    *(float*)(v1 + 80) = v268;
    *(_DWORD*)(v1 + 84) = v273;
  }
  result = *(_QWORD*)(v1 + 192);
  *(float*)(v1 + 88) = v272;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result),
    v260 = COERCE_AS(__typeof__(v260),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if ((_DWORD)result == 2) {
      return (*(__int64 (**)(__int64))(**(_QWORD**)(v1 + 192) + 32LL))(
          *(_QWORD*)(v1 + 192));
    }
  }
  return result;
}

#pragma GCC visibility pop
