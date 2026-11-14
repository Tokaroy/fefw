#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_3ecc0(__int64, __int64);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* SpineModel_19184e0(__int64, __int64*, __int64**);
_QWORD* spine_Skeleton_updateWorldTransform(_QWORD* result);
__attribute__((swiftcall)) void spine_cpp_src_spine_53bd0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void spine_cpp_src_spine_53c20(PSEUDO_X8, __int64);
__int64* SpineModel_190e620(__int64* result, _QWORD*, __int64*, _QWORD*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_19e10();
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a680(__int64, unsigned __int64, const char*,
                            unsigned __int64);
__int64 GameRoutine_1a0a7a0(__int64, unsigned __int64, char);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_1efd0(__int64, __int64);
__int64 GameRoutine_4e7c0(__int64);
__int64 GameRoutine_5de60(_QWORD*, __int64);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, float*);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 SkeletonJson_Destructor(__int64);
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 cspine_1911530(__int64*, __int64*, __int64, unsigned __int64, char,
                       char, unsigned int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_615760(__int64, __int64);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 spine_AnimationStateData_AnimationStateData(__int64 result, __int64);
__int64 spine_AnimationStateData_setDefaultMix(_QWORD, float);
__int64 spine_AnimationState_AnimationState(__int64, __int64);
__int64 spine_Atlas_Atlas(_QWORD*, __int64, __int64, __int64, __int64);
__int64 spine_SkeletonBinary_Destroy_SkeletonBinary_23b40(__int64);
__int64 spine_SkeletonBinary_SkeletonBinary(__int64, __int64);
__int64 spine_SkeletonBinary_readSkeletonData(__int64, __int64, int);
__int64 spine_SkeletonData_getSlots(_QWORD);
__int64 spine_SkeletonJson_SkeletonJson(__int64, __int64);
__int64 spine_Skeleton_Skeleton(__int64, __int64);
__int64 spine_Skeleton_getBounds(__int64 result, float*, float*, float*, float*,
                                 _QWORD*);
__int64 spine_Skeleton_setScaleX(void);
__int64 spine_Skeleton_setScaleY(_QWORD, float);
__int64 spine_SlotData_getName(_QWORD);
__int64 spine_Slot_getAttachment(_QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD*);
__int64 spine_VertexAttachment_getWorldVerticesLength(_QWORD);
__int64 std___1___next_prime(unsigned __int64);
bool spine_RTTI_isExactly(const char**, const char**);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _BYTE GameData_1b01428[32];
extern _UNKNOWN* GameData_212ea30;
extern _UNKNOWN* GameData_21322f8;
extern _UNKNOWN* GameData_2132300;
extern _UNKNOWN** GameData_212e490[11];
extern _UNKNOWN** GameData_212e4b8[6];
extern _UNKNOWN GameData_1c1d658;
extern __int128 GameData_1a829b0;
extern __int128 GameData_1a82bc0;
extern __int128 GameData_1a82ca0;
extern __int128 GameData_1a831e0;
extern __int128 GameData_1a83330;
extern __int128 GameData_1a83400;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83940;
extern __int64 (*GameData_2110158[])();
extern __int64 (*GameData_2110280[])();
extern __int64 (*GameData_2110300[])();
extern __int64 (*GameData_2110380[])();
extern __int64 (*SpineModel_1912dc0_ptr[])();
extern __int64* GameData_212c740;
extern __int64* GameData_21322b8[2];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_220b680;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
float GameRoutine_1a0a550(float, float);
float spine_SkeletonData_getFps(_QWORD);
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_1918840(__int64*, unsigned __int64);
void GameRoutine_1bc10();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(const char*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void cspine_190e8c0(__int64 a1, __int64 a2);

void cspine_190e8c0(__int64 a1, __int64 a2)
{
  float v3;
  float v4;
  char v6;
  int8x8_t v7;
  int8x8_t v8;
  int8x8_t v9;
  int8x8_t v10;
  unsigned int v11;
  float32x4_t v12;
  float v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  char v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64* v30;
  __int64* v31;
  char v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int128 v42;
  __int128 v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  char v53;
  char v54;
  char v55;
  char v56;
  char v57;
  __int128 v58;
  __int128 v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  __int64* v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  int v81;
  int* v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  int v91;
  __int64 v92;
  int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  char* v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  __int64* v101;
  __int64 v102;
  unsigned __int64 v103;
  char* v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  char* v107;
  char* v108;
  unsigned __int64 v109;
  char* v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  char v116;
  __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  char v120;
  unsigned __int64 v121;
  char v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  char v131;
  char v132;
  int v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  char* v138;
  __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  unsigned __int64 v145;
  __int64 i;
  unsigned __int64 v147;
  __int64 v148;
  char* v149;
  char v150;
  char* v151;
  unsigned int v152;
  char* v153;
  _QWORD* v154;
  _BOOL4 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  int v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  _BYTE* v170;
  char* v171;
  char* v172;
  unsigned __int64 v173;
  __int64 v174;
  char* v175;
  __int64 v176;
  int* v177;
  unsigned __int64 v178;
  unsigned __int64 v179;
  unsigned __int64 v180;
  _BYTE* v181;
  __int64 v182;
  char* v183;
  _QWORD* v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  bool v192;
  __int64 v193;
  __int64* v194;
  unsigned __int64 v195;
  __int64 v196;
  bool v197;
  unsigned __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  unsigned __int64 v202;
  unsigned __int64 v203;
  __int64 v204;
  bool v205;
  unsigned __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  float v209;
  int v210;
  __int64 v211;
  _QWORD* v212;
  __int64 v213;
  __int64 v214;
  void (**v215)(__int64);
  void (**v216)(__int64, __int64, __int64, __int64, __int64);
  __int64 (**v217)();
  __int64 v218;
  __int64 (**v219)();
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int128 v225;
  __int64 v226;
  __int64 v227;
  __int64 (**v228)();
  __int64 v229;
  __int64 (**v230)();
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int128 v236;
  __int64 v237;
  __int64 v238;
  __int64* v239;
  __int64 v240;
  __int64* v241;
  __int64 v242;
  __int64 v243;
  float v244;
  __int128 v245;
  float v246;
  __int128 v247;
  float v248;
  __int128 v249;
  float v250;
  __int128 v251;
  __int64 v252;
  __int64 v253;
  __int64* v254;
  __int64 v255;
  __int64* v256;
  __int64 v257;
  __int64 v258;
  float v259;
  __int128 v260;
  float v261;
  __int128 v262;
  float v263;
  __int128 v264;
  float v265;
  __int128 v266;
  __int64 v267;
  __int64 v268;
  __int64 (**v269)();
  __int64 v270;
  __int64 (**v271)();
  float32x2_t v272;
  __int64 v273;
  float32x4_t v274;
  float32x4_t v275;
  float32x4_t v276;
  int8x16_t v277;
  float32x4_t v278;
  float32x4_t v279;
  int8x16_t v280;
  int8x16_t v281;
  float32x2_t v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 (**v286)();
  __int64 v287;
  __int64 (**v288)();
  __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  char** v301;
  __int64 v302;
  __int64 v303;
  unsigned __int64 v304;
  __int64 v305;
  float v306;
  float v307;
  float v308;
  float v309;
  unsigned __int64 v310;
  bool v311;
  unsigned __int64 v312;
  char v313;
  __int64 v314;
  unsigned __int64 v315;
  int v316;
  int v317;
  int v318;
  char v319;
  int v320;
  int v321;
  int v322;
  int v323;
  int v324;
  __int64 v325;
  char** v326;
  unsigned __int64 v327;
  unsigned __int64 v328;
  float* v329;
  __int64 v330;
  float v331;
  float v332;
  float v333;
  float v334;
  float v335;
  float v336;
  float v337;
  float v338;
  float v339;
  float v340;
  float v341;
  float v342;
  float v343;
  float v344;
  float v345;
  float* v346;
  float v347;
  float v348;
  float v349;
  float v350;
  char* v351;
  __int64 v352;
  char* v353;
  int v354;
  int v355;
  __int64 v356;
  __int64 v357;
  float v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  __int64 v375;
  __int64 v376;
  __int64 v377;
  int v378;
  int v379;
  int v380;
  int v381;
  __int64 v382;
  __int64 v383;
  __int64 v384;
  __int64 v385;
  int v386;
  int v387;
  int v388;
  int v389;
  __int64 v390;
  __int64* v391;
  __int64 v392;
  __int64* v393;
  __int64 v394;
  __int64* v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  unsigned __int64 primeEm;
  unsigned __int64 v401;
  unsigned __int64 v402;
  __int64 v403;
  __int64 v404;
  unsigned __int64 v405;
  __int64 v406;
  _QWORD* v407;
  __int64 v408;
  __int64 v409;
  __int64 v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  int v414;
  char v415;
  int v416;
  int v417;
  int v418;
  int v419;
  unsigned int v420;
  int v421;
  int v422;
  char v423;
  int v424;
  int v425;
  int v426;
  int v427;
  int v428;
  int v429;
  char v430;
  char v431;
  int v432;
  __int128 v433;
  __int128 v434;
  __int128 v435;
  __int128 v436;
  float v437;
  unsigned __int64 v438;
  unsigned __int64 v439;
  __int64 v440;
  __int64 v441;
  unsigned __int64 v442;
  float v443;
  float v444;
  float v445;
  float v446;
  float v447;
  float v448;
  float v449;
  float v450;
  unsigned __int64 v451;
  float v452;
  float v453;
  float v454;
  float v455;
  float v456;
  float v457;
  float v458;
  float v459;
  float v460;
  float32x2_t v461;
  float32x2_t v462;
  float32x4_t v463;
  float32x4_t v464;
  char* v465;
  float32x4_t v466;
  float32x4_t v467;
  float32x4_t v468;
  float32x4_t v469;
  __int64* v470;
  _BYTE* v471;
  _BYTE* v472;
  __int64* v473;
  __int64* v474;
  __int64* v475;
  struct {
    __int64 (**v476)();
    unsigned __int64 v477;
  } v476_;
  __int128 v478;
  struct {
    char** v479;
    __int64 v480;
  } v479_;
  struct {
    __int64 v481;
    unsigned __int64 v482;
  } v481_;
  struct {
    __int64 v483;
    unsigned __int64 v484;
  } v483_;
  struct {
    char* v485;
    __int64 v486;
  } v485_;
  struct {
    char* v487;
    unsigned __int64 v488;
  } v487_;
  struct {
    __int64 v489;
    unsigned __int64 v490;
  } v489_;
  __int64 v491;
  __int64 v492;
  float v493;
  struct {
    __int64 (**v494)();
    unsigned __int64 v495;
    __int64 v496;
    __int64 v497;
  } v494_;
  float32x4x4_t v498;
  float32x4x4_t v499;

  v227 = COERCE_AS(__typeof__(v227),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v238 = COERCE_AS(__typeof__(v238),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v253 = COERCE_AS(__typeof__(v253),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v268 = COERCE_AS(__typeof__(v268),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v285 = COERCE_AS(__typeof__(v285),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v292 = COERCE_AS(__typeof__(v292),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = 0x1.0000000000000p+0f;
  v4 = 0x1.c000000000000p+0f;
  v6 = 0;
  PSEUDO_LOW_LANE64(v7, n64_u64, 0xF0E0D0C03020100LL);
  PSEUDO_LOW_LANE64(v8, n64_u64, 0x30201000B0A0908LL);
  PSEUDO_LOW_LANE64(v9, n64_u64, 0xF0E0D0C07060504LL);
  PSEUDO_LOW_LANE64(v10, n64_u64, 0xB0A090807060504LL);
  v475 = (__int64*)(a1 + 88);
  v470 = (__int64*)(a2 + 64);
  LOBYTE(v11) = 1;
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1120403456LL),
                           COERCE_AS(float32x2_t, 1120403456LL)))
          .n64_u64[0];
  v440 = a1 + 89;
  v13 = *(float*)GameData_212ea30;
  v471 = (_BYTE*)(a1 + 65);
  LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
  v465 = (const char*)(GameData_21322b8[0] + 2);
  v14 = vrsqrteq_f32(v12);
  v15 = vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v12, v14)));
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v17 =
      vbicq_s8(vmulq_f32(vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v12, v15))),
                         COERCE_AS(float32x4_t, GameData_1a831e0)),
               vceqzq_f32(v12));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v469 = v17;
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v473 = (__int64*)(a1 + 16);
  v474 = (__int64*)(a1 + 64);
  v467 = v19;
  v441 = a2 + 41;
  v468 = v18;
  v472 = (_BYTE*)(a1 + 41);
  v466 = vmlsq_f32(vmulq_f32(v12, v18), v19, v16);
  v463 = vmulq_f32(v466, v466);
  v464 = vmulq_f32(v17, COERCE_AS(float32x4_t, GameData_1a829b0));
  LANES64(v461).n64_u64[0] = LANES128_OF(vextq_s8(v463, v463, 8u)).n128_u64[0];
  LANES64(v462).n64_u64[0] = LANES128_OF(vextq_s8(v464, v464, 8u)).n128_u64[0];
  while (2) {
    v20 = v6;
    switch (*(_DWORD*)a1) {
    case 1:
      v21 = *(unsigned __int8*)(a1 + 16);
      if ((v21 & 1) != 0) {
        v22 = *(_QWORD*)(a1 + 24);
      }
      else {
        v22 = v21 >> 1;
      }
      if (v22 != 0) {
        v11 = 1;
        v23 = 4;
      }
      else {
        v112 = *(unsigned __int8*)(a1 + 40);
        if ((v112 & 1) != 0) {
          v113 = *(_QWORD*)(a1 + 48);
        }
        else {
          v113 = v112 >> 1;
        }
        if (v113 != 0 && (((v114 = *(unsigned __int8*)(a1 + 64)) & 1) != 0
                              ? (v115 = *(_QWORD*)(a1 + 72))
                              : (v115 = v114 >> 1),
                          v115 != 0)) {
          v11 = 1;
          v23 = 6;
        }
        else if (*(_BYTE*)(a2 + 1041) == 1 &&
                 (((v134 = *(unsigned __int8*)(a1 + 88)) & 1) != 0
                      ? (v135 = *(_QWORD*)(a1 + 96))
                      : (v135 = v134 >> 1),
                  v135 != 0)) {
          v11 = 1;
          v23 = 8;
        }
        else {
          v23 = 3;
          v11 = 0;
        }
      }
      v169 = *(_QWORD*)(a1 + 120);
      *(_DWORD*)a1 = v23;
      v6 = 1;
      if (v169 != 0) {
        (*(void (**)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD*)v169 + 16LL))(
            v169, 0, a2, v11),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v6 = 1;
      }
      continue;
    case 2:
      *(_BYTE*)(a2 + 1041) = 1;
      *(_DWORD*)a1 = 0;
      v412 = *(_QWORD*)(a1 + 120);
      if (v412 != 0) {
        (*(void (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v412 + 16LL))(v412, 1, a2, 1),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      spine_Skeleton_updateWorldTransform(*(_QWORD**)(a2 + 96)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return;
    case 3:
      v413 = *(_QWORD*)(a1 + 120);
      *(_DWORD*)a1 = 0;
      if (v413 != 0) {
        (*(void (**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v413 + 16LL))(
            v413, 1, 0, 0),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      return;
    case 4:
      v101 = (__int64*)*GameData_212c740;
      if (*GameData_212c740 != 0) {
        v102 = *v101;
        v103 = v101[1];
      }
      else {
        v102 = 0;
        v103 = 0;
      }
      v127 = *(unsigned __int8*)(a1 + 40);
      if ((v127 & 1) != 0) {
        v128 = *(_QWORD*)(a1 + 48);
      }
      else {
        v128 = v127 >> 1;
      }
      if (v128 != 0) {
        v129 = *(unsigned __int8*)(a1 + 64);
        if ((v129 & 1) != 0) {
          v130 = *(_QWORD*)(a1 + 72);
        }
        else {
          v130 = v129 >> 1;
        }
        v131 = v130 == 0;
      }
      else {
        v131 = 1;
      }
      v132 = cspine_1911530((__int64*)(a1 + 136), v473, v102, v103, v11 & 1,
                            v131, 2u),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((cspine_1911530((__int64*)(a1 + 160), v475,
                          (__int64)&GameData_1a9f09e, 0, v132 & 1, 0, 2u) &
           1) == 0) {
        goto LABEL_2;
      }
      v133 = 5;
      goto LABEL_512;
    case 5:
      v74 = *(_QWORD*)(a1 + 136);
      nn_os_AcquireReadLock(v74 + 696),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v75 = *(_DWORD*)(v74 + 656);
      nn_os_ReleaseReadLock(v74 + 696),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v75 & 0x40) == 0) {
        return;
      }
      v76 = *(_QWORD*)(a1 + 136);
      v481_.v481 = 0;
      v481_.v482 = 0;
      v479_.v479 = nullptr;
      v479_.v480 = 0;
      v478 = (__typeof__(v478)){0};
      v476_.v477 = GameRoutine_1a09c70((const char*)(v76 + 16)),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v476_.v476 = (__int64 (**)(void))(v76 + 16),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      SpineModel_190e620((__int64*)&v476_.v476, &v478, (__int64*)&v479_.v479,
                         &v481_.v481),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v77 = (__int64*)*GameData_212c740;
      if (*GameData_212c740 != 0 && (v78 = v77[1]) != 0) {
        v79 = v481_.v482;
        if (v78 >= v481_.v482) {
          v80 = v481_.v482;
        }
        else {
          v80 = v77[1];
        }
        v81 = GameRoutine_1a09cf0(v481_.v481, *v77, v80),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v79 != v78 || v81 != 0) {
        LABEL_69:
          v104 = *(const char**)(v76 + 592);
          v105 = GameRoutine_1a09c70(v104),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v106 = v105;
          if (v105 != 0) {
            v107 = (char*)v474;
            v108 = &v104[v105];
            v109 = v105 & 3;
            v110 = v104;
            if ((v105 & 3) != 0) {
              v110 = v104;
              while (*v110 != 13) {
                ++v110;
                if (--v109 == 0) {
                  goto LABEL_74;
                }
              }
            }
            else {
            LABEL_74:
              if (v105 >= 4) {
                v110 += 3;
                while (1) {
                  if (*(v110 - 3) == 13) {
                    v110 -= 3;
                    goto LABEL_76;
                  }
                  if (*(v110 - 2) == 13) {
                    v110 -= 2;
                    goto LABEL_76;
                  }
                  if (*(v110 - 1) == 13) {
                    break;
                  }
                  if (*v110 == 13) {
                    goto LABEL_76;
                  }
                  v171 = v110 + 1;
                  v110 += 4;
                  if (v171 == v108) {
                    goto LABEL_75;
                  }
                }
                --v110;
              }
              else {
              LABEL_75:
                v110 = &v104[v105];
              }
            }
          LABEL_76:
            if (v110 == v108) {
              v111 = -1;
            }
            else {
              v111 = v110 - v104;
            }
          }
          else {
            v107 = (char*)v474;
            v111 = -1;
          }
          if (v105 >= v111) {
            v136 = v111;
          }
          else {
            v136 = v105;
          }
          GameRoutine_60a060((char*)(a1 + 40), (__int64)v104, v136),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v111 + 1 < v106) {
            v137 = (unsigned __int64)&v104[v111 + 1];
            v138 = &v104[v106];
            v139 = ~((_BYTE)v111 - (_BYTE)v106) & 3;
            if ((~((_BYTE)v111 - (_BYTE)v106) & 3) != 0) {
              while (*(_BYTE*)v137 == 10) {
                ++v137;
                if (--v139 == 0) {
                  goto LABEL_126;
                }
              }
            LABEL_415:
              v140 = v137 - (_QWORD)v104;
              if (v137 - (unsigned __int64)v104 < v106) {
                v351 = (const char*)v137;
                v352 = ((_BYTE)v106 + (_BYTE)v104 - (_BYTE)v137) & 3;
                if ((((_BYTE)v106 + (_BYTE)v104 - (_BYTE)v137) & 3) != 0) {
                  while (*v351 != 13) {
                    ++v351;
                    if (--v352 == 0) {
                      goto LABEL_419;
                    }
                  }
                }
                else {
                LABEL_419:
                  if ((unsigned __int64)&v104[v106 + ~v137] >= 3) {
                    v351 += 3;
                    while (1) {
                      if (*(v351 - 3) == 13) {
                        v351 -= 3;
                        goto LABEL_421;
                      }
                      if (*(v351 - 2) == 13) {
                        v351 -= 2;
                        goto LABEL_421;
                      }
                      if (*(v351 - 1) == 13) {
                        break;
                      }
                      if (*v351 == 13) {
                        goto LABEL_421;
                      }
                      v353 = v351 + 1;
                      v351 += 4;
                      if (v353 == v138) {
                        goto LABEL_420;
                      }
                    }
                    --v351;
                  }
                  else {
                  LABEL_420:
                    v351 = &v104[v106];
                  }
                }
              LABEL_421:
                if (v351 == v138) {
                  v141 = -1;
                }
                else {
                  v141 = v351 - v104;
                }
                v142 = v106 - v140;
                if (v106 < v140) {
                  goto LABEL_524;
                }
                goto LABEL_129;
              }
            LABEL_128:
              v141 = -1;
              v142 = v106 - v140;
              if (v106 < v140) {
                goto LABEL_524;
              }
            LABEL_129:
              v143 = v141 - v140;
              if (v142 >= v143) {
                v144 = v143;
              }
              else {
                v144 = v142;
              }
              GameRoutine_60a060(v107, (__int64)&v104[v140], v144),
                  v227 = COERCE_AS(
                      __typeof__(v227),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v238 = COERCE_AS(
                      __typeof__(v238),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v253 = COERCE_AS(
                      __typeof__(v253),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v268 = COERCE_AS(
                      __typeof__(v268),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v285 = COERCE_AS(
                      __typeof__(v285),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v292 = COERCE_AS(
                      __typeof__(v292),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            LABEL_133:
              GameRoutine_1a0a680(a1 + 40, 0, "Contents:/UI/Face/", 0x12u),
                  v227 = COERCE_AS(
                      __typeof__(v227),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v238 = COERCE_AS(
                      __typeof__(v238),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v253 = COERCE_AS(
                      __typeof__(v253),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v268 = COERCE_AS(
                      __typeof__(v268),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v285 = COERCE_AS(
                      __typeof__(v285),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v292 = COERCE_AS(
                      __typeof__(v292),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              GameRoutine_1a0a680((__int64)v107, 0, "Contents:/UI/Face/",
                                  0x12u),
                  v227 = COERCE_AS(
                      __typeof__(v227),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v238 = COERCE_AS(
                      __typeof__(v238),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v253 = COERCE_AS(
                      __typeof__(v253),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v268 = COERCE_AS(
                      __typeof__(v268),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v285 = COERCE_AS(
                      __typeof__(v285),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v292 = COERCE_AS(
                      __typeof__(v292),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              goto LABEL_134;
            }
          LABEL_126:
            if (v106 + ~v111 - 1 >= 3) {
              v137 += 3LL;
              while (1) {
                if (*(_BYTE*)(v137 - 3) != 10) {
                  v137 -= 3LL;
                  goto LABEL_415;
                }
                if (*(_BYTE*)(v137 - 2) != 10) {
                  v137 -= 2LL;
                  goto LABEL_415;
                }
                if (*(_BYTE*)(v137 - 1) != 10) {
                  break;
                }
                if (*(_BYTE*)v137 != 10) {
                  goto LABEL_415;
                }
                v172 = (const char*)(v137 + 1);
                v137 += 4LL;
                if (v172 == v138) {
                  goto LABEL_127;
                }
              }
              --v137;
              goto LABEL_415;
            }
          }
        LABEL_127:
          v140 = -1;
          goto LABEL_128;
        }
      }
      else if (v481_.v482 != 0) {
        goto LABEL_69;
      }
      if (*(__int64*)(v76 + 576) >= 1) {
        v83 = *(int**)(v76 + 592);
        v84 = *(unsigned __int8*)(a1 + 40);
        v85 = *(_QWORD*)(a1 + 48);
        v86 = *v83;
        if ((v84 & 1) == 0) {
          v85 = v84 >> 1;
        }
        if (v86 <= v85) {
          if ((v84 & 1) != 0) {
            v170 = *(_BYTE**)(a1 + 56);
            *(_QWORD*)(a1 + 48) = v86;
          }
          else {
            *(_BYTE*)(a1 + 40) = 2 * v86;
            v170 = v472;
          }
          v170[v86] = 0;
        }
        else {
          GameRoutine_1a0a7a0(a1 + 40, v86 - v85, 0),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v176 =
            (*(_BYTE*)(a1 + 40) & 1) != 0 ? *(_QWORD*)(a1 + 56) : (__int64)v472;
        GameRoutine_1a0b950(v176, (__int64)(v83 + 1), v86),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((signed __int64)(v86 + 4) < (signed __int64)*(_QWORD*)(v76 + 576)) {
          v177 = (int*)((char*)v83 + v86 + 4);
          v178 = *(unsigned __int8*)(a1 + 64);
          v179 = *(_QWORD*)(a1 + 72);
          v180 = *v177;
          if ((v178 & 1) == 0) {
            v179 = v178 >> 1;
          }
          if (v180 <= v179) {
            v107 = (char*)v474;
            if ((v178 & 1) != 0) {
              v181 = *(_BYTE**)(a1 + 80);
              *(_QWORD*)(a1 + 72) = v180;
            }
            else {
              *(_BYTE*)v474 = 2 * v180;
              v181 = v471;
            }
            v181[v180] = 0;
          }
          else {
            v107 = (char*)v474;
            GameRoutine_1a0a7a0((__int64)v474, v180 - v179, 0),
                v227 =
                    COERCE_AS(__typeof__(v227),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v238 =
                    COERCE_AS(__typeof__(v238),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v253 =
                    COERCE_AS(__typeof__(v253),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v268 =
                    COERCE_AS(__typeof__(v268),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v285 =
                    COERCE_AS(__typeof__(v285),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v292 =
                    COERCE_AS(__typeof__(v292),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
            v325 = *(_QWORD*)(a1 + 80);
          }
          else {
            v325 = (__int64)v471;
          }
          GameRoutine_1a0b950(v325, (__int64)(v177 + 1), v180),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          goto LABEL_133;
        }
      }
      if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
        **(_BYTE**)(a1 + 56) = 0;
        *(_QWORD*)(a1 + 48) = 0;
      }
      else {
        *(_BYTE*)(a1 + 40) = 0;
        *v472 = 0;
      }
      if ((*(_BYTE*)v474 & 1) != 0) {
        **(_BYTE**)(a1 + 80) = 0;
        *(_QWORD*)(a1 + 72) = 0;
      }
      else {
        *(_BYTE*)v474 = 0;
        *v471 = 0;
      }
    LABEL_134:
      *(_DWORD*)a1 = 6;
      v6 = 1;
      continue;
    case 6:
      v87 = *GameData_212c740;
      if (*GameData_212c740 != 0) {
        v88 = *(_QWORD*)(v87 + 16);
        v89 = *(_QWORD*)(v87 + 24);
      }
      else {
        v88 = 0;
        v89 = 0;
      }
      v116 = cspine_1911530((__int64*)(a1 + 144), (__int64*)(a1 + 40), v88, v89,
                            v11 & 1, 1, 1u),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v117 = *GameData_212c740;
      if (*GameData_212c740 != 0) {
        v118 = *(_QWORD*)(v117 + 32);
        v119 = *(_QWORD*)(v117 + 40);
      }
      else {
        v118 = 0;
        v119 = 0;
      }
      v120 = cspine_1911530((__int64*)(a1 + 152), v474, v118, v119, v116 & 1, 1,
                            1u),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v121 = *(unsigned __int8*)(a1 + 88);
      v122 = v120;
      if ((v121 & 1) != 0) {
        v123 = *(_QWORD*)(a1 + 96);
      }
      else {
        v123 = v121 >> 1;
      }
      if (v123 == 0) {
        v124 = *GameData_212c740;
        if (*GameData_212c740 != 0) {
          v125 = *(_QWORD*)(v124 + 64);
          v126 = *(_QWORD*)(v124 + 72);
        }
        else {
          v125 = 0;
          v126 = 0;
        }
        GameRoutine_60a060((char*)v475, v125, v126),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if ((cspine_1911530((__int64*)(a1 + 160), v475,
                          (__int64)&GameData_1a9f09e, 0, v122 & 1, 0, 2u) &
           1) == 0) {
        goto LABEL_2;
      }
      *(_DWORD*)a1 = 7;
      goto LABEL_513;
    case 7:
      v90 = *(_QWORD*)(a1 + 144);
      nn_os_AcquireReadLock(v90 + 696),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v91 = *(_DWORD*)(v90 + 656);
      nn_os_ReleaseReadLock(v90 + 696),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v91 & 0x40) == 0) {
        return;
      }
      v92 = *(_QWORD*)(a1 + 152);
      nn_os_AcquireReadLock(v92 + 696),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v93 = *(_DWORD*)(v92 + 656);
      nn_os_ReleaseReadLock(v92 + 696),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v93 & 0x40) == 0) {
        return;
      }
      v94 = *(_QWORD*)(a2 + 152);
      if (v94 == 0 || (v11 & 1) == 0) {
        goto LABEL_2;
      }
      v95 = *(_QWORD*)(a1 + 144);
      v481_.v481 = 0;
      v481_.v482 = 0;
      v479_.v479 = nullptr;
      v479_.v480 = 0;
      v478 = (__typeof__(v478)){0};
      v476_.v477 = GameRoutine_1a09c70((const char*)(v95 + 16)),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v476_.v476 = (__int64 (**)(void))(v95 + 16),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      SpineModel_190e620((__int64*)&v476_.v476, &v478, (__int64*)&v479_.v479,
                         &v481_.v481),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v483_.v484 = 0;
      v485_.v485 = nullptr;
      v483_.v483 = 0;
      GameRoutine_1a09ce0((__int64)&v483_.v483, (const char*)v478,
                          *((unsigned __int64*)&v478 + 1)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v96 = *(_QWORD*)(v95 + 592);
      v97 = *(_QWORD*)(v95 + 576);
      v494_.v495 = 0;
      v494_.v496 = 0;
      v494_.v494 = nullptr;
      if (v97 != 0) {
        GameRoutine_1a0a7a0((__int64)&v494_.v494, v97, 0),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v98 = (char*)&v494_.v494 + 1;
        if (((unsigned __int8)v494_.v494 & 1) != 0) {
          v98 = (char*)v494_.v496;
        }
        v99 = v97 - 8;
        if (v97 == 8) {
          v100 = 0;
          goto LABEL_138;
        }
      }
      else {
        v98 = (char*)&v494_.v494 + 1;
        v99 = -8;
      }
      v100 = 0;
      do {
        *(_QWORD*)&v98[v100] =
            *(_QWORD*)&GameData_1b01428[v100 & 0x18] ^ *(_QWORD*)(v96 + v100);
        v100 += 8LL;
      } while (v100 < v99);
    LABEL_138:
      v145 = v100 - v97;
      if (v100 < v97) {
        for (i = ((_BYTE)v97 - (_BYTE)v100) & 7; i != 0; ++v100) {
          --i;
          v98[v100] = GameData_1b01428[v100 & 0x1F] ^ *(_BYTE*)(v96 + v100);
        }
        if (v145 <= 0xFFFFFFFFFFFFFFF8LL) {
          v147 = v100 + 3;
          do {
            v148 = v96 + v147;
            v149 = &v98[v147];
            *(v149 - 3) = GameData_1b01428[((_BYTE)v147 - 3) & 0x1F] ^
                          *(_BYTE*)(v96 + v147 - 3);
            *(v149 - 2) = GameData_1b01428[((_BYTE)v147 - 2) & 0x1F] ^
                          *(_BYTE*)(v96 + v147 - 2);
            *(v149 - 1) = GameData_1b01428[((_BYTE)v147 - 1) & 0x1F] ^
                          *(_BYTE*)(v96 + v147 - 1);
            *v149 = GameData_1b01428[v147 & 0x1F] ^ *(_BYTE*)(v96 + v147);
            v149[1] = GameData_1b01428[((_BYTE)v147 + 1) & 0x1F] ^
                      *(_BYTE*)(v96 + v147 + 1);
            v149[2] = GameData_1b01428[((_BYTE)v147 + 2) & 0x1F] ^
                      *(_BYTE*)(v96 + v147 + 2);
            v149[3] = GameData_1b01428[((_BYTE)v147 + 3) & 0x1F] ^
                      *(_BYTE*)(v96 + v147 + 3);
            v150 = v147 + 4;
            v147 += 8LL;
            v149[4] = GameData_1b01428[v150 & 0x1F] ^ *(_BYTE*)(v148 + 4);
          } while (v147 - v97 != 3);
        }
      }
      if (((unsigned __int8)v494_.v494 & 1) != 0) {
        v151 = (char*)v494_.v496;
      }
      else {
        v151 = (char*)&v494_.v494 + 1;
      }
      if (((unsigned __int8)v494_.v494 & 1) != 0) {
        v152 = v494_.v495;
      }
      else {
        v152 = (unsigned __int64)(unsigned __int8)v494_.v494 >> 1;
      }
      if ((v483_.v483 & 1) != 0) {
        v153 = v485_.v485;
      }
      else {
        v153 = (char*)&v483_.v483 + 1;
      }
      v154 = (_QWORD*)GameRoutine_4e7c0(80),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v155 = true;
      spine_Atlas_Atlas(v154, (__int64)v151, v152, (__int64)v153, v94),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v156 = *(_QWORD*)(a2 + 88);
      *(_QWORD*)(a2 + 88) = v154;
      if (v156 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v156 + 8LL))(v156),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v155 = *(_QWORD*)(a2 + 88) != 0;
      }
      if (((unsigned __int8)v494_.v494 & 1) != 0 && v494_.v496 != 0) {
        v157 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v157 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v157, v494_.v496),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if ((v483_.v483 & 1) != 0 && v485_.v485 != nullptr) {
        v158 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v158 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v158, (__int64)v485_.v485),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (!v155) {
        goto LABEL_2;
      }
      v159 = *(_QWORD*)(a2 + 88);
      if (v159 == 0) {
        goto LABEL_242;
      }
      v160 = *(_QWORD*)(a1 + 152);
      v489_.v489 = 0;
      v489_.v490 = 0;
      v487_.v487 = nullptr;
      v487_.v488 = 0;
      v485_.v485 = nullptr;
      v485_.v486 = 0;
      v161 = GameRoutine_1a09c70((const char*)(v160 + 16)),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v483_.v483 = v160 + 16;
      v483_.v484 = v161;
      SpineModel_190e620(&v483_.v483, &v485_.v485, (__int64*)&v487_.v487,
                         &v489_.v489),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v162 = *GameData_212c740;
      if (*GameData_212c740 != 0 && (v163 = *(_QWORD*)(v162 + 40)) != 0) {
        v164 = v489_.v490;
        if (v163 >= v489_.v490) {
          v165 = v489_.v490;
        }
        else {
          v165 = *(_QWORD*)(v162 + 40);
        }
        v166 = GameRoutine_1a09cf0(v489_.v489, *(_QWORD*)(v162 + 32), v165),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v164 == v163 && v166 == 0) {
        LABEL_174:
          spine_SkeletonBinary_SkeletonBinary((__int64)&v476_.v476, v159),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v167 = spine_SkeletonBinary_readSkeletonData((__int64)&v476_.v476,
                                                       *(_QWORD*)(v160 + 592),
                                                       *(_DWORD*)(v160 + 576)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v168 = *(_QWORD*)(a2 + 112);
          *(_QWORD*)(a2 + 112) = v167;
          if (v168 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v168 + 8LL))(v168),
                v227 =
                    COERCE_AS(__typeof__(v227),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v238 =
                    COERCE_AS(__typeof__(v238),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v253 =
                    COERCE_AS(__typeof__(v253),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v268 =
                    COERCE_AS(__typeof__(v268),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v285 =
                    COERCE_AS(__typeof__(v285),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v292 =
                    COERCE_AS(__typeof__(v292),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v167 = *(_QWORD*)(a2 + 112);
          }
          spine_SkeletonBinary_Destroy_SkeletonBinary_23b40(
              (__int64)&v476_.v476),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v167 == 0) {
            goto LABEL_2;
          }
          goto LABEL_240;
        }
      }
      else if (v489_.v490 == 0) {
        goto LABEL_174;
      }
      spine_SkeletonJson_SkeletonJson((__int64)&v476_.v476, v159),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v173 = *(_QWORD*)(v160 + 576);
      if (v173 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0(),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v174 = *(_QWORD*)(v160 + 592);
      if (v173 >= 0x17) {
        if ((v173 | 7) == 0x17) {
          v182 = 26;
        }
        else {
          v182 = (v173 | 7) + 1;
        }
        v175 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v182, 16, 0),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v494_.v495 = v173;
        v494_.v496 = (__int64)v175;
        v494_.v494 = (__int64 (**)(void))(v182 | 1),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v175 = (char*)&v494_.v494 + 1;
        LOBYTE(v494_.v494) = 2 * v173;
        if (v173 == 0) {
          goto LABEL_229;
        }
      }
      GameRoutine_1a0b940((__int64)v175, v174, v173),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_229:
      v175[v173] = 0;
      if (((unsigned __int8)v494_.v494 & 1) != 0) {
        v183 = (char*)v494_.v496;
      }
      else {
        v183 = (char*)&v494_.v494 + 1;
      }
      v184 = GameRoutine_3ecc0((__int64)&v476_.v476, (__int64)v183),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v185 = *(_QWORD*)(a2 + 112);
      *(_QWORD*)(a2 + 112) = v184;
      if (v185 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v185 + 8LL))(v185),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v184 = *(_QWORD**)(a2 + 112);
      }
      if (((unsigned __int8)v494_.v494 & 1) != 0 && v494_.v496 != 0) {
        v186 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v186 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v186, v494_.v496),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      SkeletonJson_Destructor((__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v184 == nullptr) {
        goto LABEL_2;
      }
    LABEL_240:
      v187 = *(_QWORD*)(a2 + 112);
      v188 = GameRoutine_4e7c0(288),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      spine_Skeleton_Skeleton(v188, v187),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v189 = *(_QWORD*)(a2 + 96);
      *(_QWORD*)(a2 + 96) = v188;
      if (v189 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v189 + 8LL))(v189),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (*(_QWORD*)(a2 + 96) == 0) {
          goto LABEL_2;
        }
      }
    LABEL_242:
      v190 = *(unsigned __int8*)(a1 + 16);
      if ((v190 & 1) != 0) {
        v191 = *(_QWORD*)(a1 + 24);
      }
      else {
        v191 = v190 >> 1;
      }
      v192 = v191 == 0;
      v193 = 16;
      if (v192) {
        v193 = 64;
      }
      v194 = v473;
      v195 = *(unsigned __int8*)(a1 + v193);
      if (v192) {
        v194 = v474;
      }
      v196 = v194[1];
      v197 = (v195 & 1) == 0;
      v198 = v195 >> 1;
      if (v197) {
        v199 = (__int64)v194 + 1;
      }
      else {
        v199 = v194[2];
      }
      if (!v197) {
        v198 = v196;
      }
      v485_.v485 = nullptr;
      v485_.v486 = 0;
      v487_.v487 = nullptr;
      v487_.v488 = 0;
      v489_.v489 = 0;
      v489_.v490 = 0;
      v483_.v483 = v199;
      v483_.v484 = v198;
      SpineModel_190e620(&v483_.v483, &v485_.v485, (__int64*)&v487_.v487,
                         &v489_.v489),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v478 = 0;
      v476_.v477 = 0;
      v476_.v476 = nullptr;
      GameRoutine_1a09ce0((__int64)&v476_.v476, v487_.v487, v487_.v488),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((*(_BYTE*)(a2 + 40) & 1) != 0) {
        v200 = *(_QWORD*)(a2 + 56);
        if (v200 != 0) {
          v201 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v201 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v201, v200),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v202 = v476_.v477;
      *(_QWORD*)(a2 + 40) = v476_.v476;
      *(_QWORD*)(a2 + 48) = v202;
      LOBYTE(v202) = *(_BYTE*)(a2 + 16);
      *(_QWORD*)(a2 + 56) = v478;
      v203 = *(unsigned __int8*)(a2 + 40);
      if ((v202 & 1) != 0) {
        v205 = (v203 & 1) == 0;
        v206 = v203 >> 1;
        if (v205) {
          v207 = v441;
        }
        else {
          v207 = *(_QWORD*)(a2 + 56);
        }
        if (v205) {
          v208 = v206;
        }
        else {
          v208 = *(_QWORD*)(a2 + 48);
        }
        SpineModel_64dde0((__int64*)(a2 + 16), v207, v208),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else if ((v203 & 1) != 0) {
        GameRoutine_64df20((_QWORD*)(a2 + 16), *(_QWORD*)(a2 + 56),
                           *(_QWORD*)(a2 + 48)),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v204 = *(_QWORD*)(a2 + 48);
        *(_QWORD*)(a2 + 16) = *(_QWORD*)(a2 + 40);
        *(_QWORD*)(a2 + 24) = v204;
        *(_QWORD*)(a2 + 32) = *(_QWORD*)(a2 + 56);
      }
      v209 = *(float*)(a1 + 112);
      v210 = *(unsigned __int8*)(a2 + 1041);
      *(float*)(a2 + 864) = v209;
      if (v210 == 1 && *(_QWORD*)(a2 + 96) != 0) {
        v460 = v209;
        spine_Skeleton_setScaleX(),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        spine_Skeleton_setScaleY(*(_QWORD*)(a2 + 96), v460),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v211 = GameRoutine_4e7c0(48),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      spine_AnimationStateData_AnimationStateData(v211, *(_QWORD*)(a2 + 112)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v212 = *(_QWORD**)(a2 + 120);
      *(_QWORD*)(a2 + 120) = v211;
      if (v212 != nullptr) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v212 + 8LL))((void*)(v212), v212),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v211 = *(_QWORD*)(a2 + 120);
      }
      spine_AnimationStateData_setDefaultMix(v211, 0x1.99999a0000000p-4f),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v213 = GameRoutine_4e7c0(216),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      spine_AnimationState_AnimationState(v213, *(_QWORD*)(a2 + 120)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v214 = *(_QWORD*)(a2 + 104);
      *(_QWORD*)(a2 + 104) = v213;
      if (v214 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v214 + 8LL))(v214),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      *(float*)(a2 +
                856) = spine_SkeletonData_getFps(*(_QWORD*)(a2 + 112)),
                v227 =
                    COERCE_AS(__typeof__(v227),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v238 =
                    COERCE_AS(__typeof__(v238),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v253 =
                    COERCE_AS(__typeof__(v253),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v268 =
                    COERCE_AS(__typeof__(v268),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v285 =
                    COERCE_AS(__typeof__(v285),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v292 =
                    COERCE_AS(__typeof__(v292),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v215 = (void (**)(__int64))GameData_212e490[0],
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))GameData_212e490[0])(a2 + 880),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v216 = (void (**)(__int64, __int64, __int64, __int64,
                        __int64))GameData_212e4b8[0],
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64, __int64,
                   __int64))GameData_212e4b8[0])(a2 + 880, 5, 6, 2, 6),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*v215)(a2 + 888);
      (*v216)(a2 + 888, 2, 6, 2, 6);
      (*v215)(a2 + 896);
      (*v216)(a2 + 896, 5, 2, 2, 2);
      (*v215)(a2 + 904);
      (*v216)(a2 + 904, 2, 2, 2, 2);
      (*v215)(a2 + 912);
      (*v216)(a2 + 912, 9, 6, 2, 6);
      (*v215)(a2 + 920);
      (*v216)(a2 + 920, 9, 6, 2, 6);
      (*v215)(a2 + 928);
      (*v216)(a2 + 928, 2, 4, 4, 4);
      (*v215)(a2 + 936);
      (*v216)(a2 + 936, 2, 4, 4, 4);
      (*v215)(a2 + 944);
      (*v216)(a2 + 944, 5, 6, 1, 6);
      LODWORD(v494_.v494) = 3;
      v494_.v495 = 68;
      v494_.v496 = 0;
      v494_.v496 = *(_QWORD*)(GameData_220b680 + 8);
      spine_cpp_src_spine_53bd0((void*)((__int64*)&v476_.v476),
                                (__int64)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v217 = v476_.v476;
      v218 = *(_QWORD*)(a2 + 280);
      v476_.v476 = nullptr;
      *(_QWORD*)(a2 + 280) = v217;
      if (v218 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v218 + 8LL))(v218),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v219 = v476_.v476;
        v476_.v476 = nullptr;
        if (v219 != nullptr) {
          (*((void (**)(__int64 (**)(void)))*v219 + 1))(v219),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      if (*(_BYTE*)(a2 + 1041) == 1) {
        v220 = *(_QWORD*)(a2 + 96);
        v492 = 0;
        v493 = 0x0.0p+0f;
        LODWORD(v491) = 0;
        if (v220 != 0) {
          v476_.v477 = 0;
          v478 = (__typeof__(v478)){0};
          v476_.v476 = GameData_2110158;
          spine_Skeleton_getBounds(v220, (float*)&v491, &v493,
                                   (float*)&v492 + 1, (float*)&v492,
                                   &v476_.v476),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v221 = *((_QWORD*)&v478 + 1);
          v476_.v476 = GameData_2110158;
          v476_.v477 = 0;
          if (*((_QWORD*)&v478 + 1) != 0) {
            v222 = GameRoutine_19e10(),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(__int64, __int64, const char*, __int64))(
                *(_QWORD*)v222 + 40LL))(
                v222, v221, "/Program/Externals/Spine/include\\spine/Vector.h",
                206),
                v227 =
                    COERCE_AS(__typeof__(v227),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v238 =
                    COERCE_AS(__typeof__(v238),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v253 =
                    COERCE_AS(__typeof__(v253),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v268 =
                    COERCE_AS(__typeof__(v268),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v285 =
                    COERCE_AS(__typeof__(v285),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v292 =
                    COERCE_AS(__typeof__(v292),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          spine_SpineObject_Destroy_SpineObject_4e8a0(&v476_.v476),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v223 = *(_QWORD*)(a2 + 280);
      v224 = (*(__int64 (**)(__int64))(*(_QWORD*)v223 + 56LL))(v223),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v225 = __PAIR64__(LODWORD(v493), v491);
      *((float*)&v225 + 2) = *(float*)&v491 + *((float*)&v492 + 1);
      *((float*)&v225 + 3) = v493 + *(float*)&v492;
      *(_OWORD*)v224 = v225;
      *(_OWORD*)(v224 + 16) = GameData_1a83940;
      *(float*)(v224 + 32) = v3 / *(float*)(a2 + 1236);
      {
        __typeof__(v225) z_ = (__typeof__(v225)){0};
        LODWORD(z_) = *(_DWORD*)(a2 + 1244);
        v225 = z_;
      }
      *(_OWORD*)(v224 + 48) = GameData_1a83940;
      *(_DWORD*)(v224 + 36) = v225;
      {
        __typeof__(v225) z_ = (__typeof__(v225)){0};
        LODWORD(z_) = *(_DWORD*)(a2 + 1236);
        v225 = z_;
      }
      *(_QWORD*)(v224 + 40) = 0;
      *(float*)(v224 + 64) = v3 / *(float*)&v225;
      v226 = *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552) + 16LL);
      *(_QWORD*)(a2 +
                 296) = (*(__int64 (**)(__int64))(*(_QWORD*)v226 + 80LL))(v226),
                 v227 =
                     COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v238 =
                     COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v253 =
                     COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v268 =
                     COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v285 =
                     COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v292 =
                     COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a2 + 304) = v227;
      GameRoutine_5de60((_QWORD*)(a2 + 296), *(_QWORD*)(a2 + 280)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v223 + 64LL))(v223),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LODWORD(v494_.v494) = 3;
      v494_.v495 = 68;
      v494_.v496 = 0;
      v494_.v496 = *(_QWORD*)(GameData_220b680 + 8);
      spine_cpp_src_spine_53bd0((void*)((__int64*)&v476_.v476),
                                (__int64)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v228 = v476_.v476;
      v229 = *(_QWORD*)(a2 + 288);
      v476_.v476 = nullptr;
      *(_QWORD*)(a2 + 288) = v228;
      if (v229 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v229 + 8LL))(v229),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v230 = v476_.v476;
        v476_.v476 = nullptr;
        if (v230 != nullptr) {
          (*((void (**)(__int64 (**)(void)))*v230 + 1))(v230),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      if (*(_BYTE*)(a2 + 1041) == 1) {
        v231 = *(_QWORD*)(a2 + 96);
        v492 = 0;
        v493 = 0x0.0p+0f;
        LODWORD(v491) = 0;
        if (v231 != 0) {
          v476_.v477 = 0;
          v478 = (__typeof__(v478)){0};
          v476_.v476 = GameData_2110158;
          spine_Skeleton_getBounds(v231, (float*)&v491, &v493,
                                   (float*)&v492 + 1, (float*)&v492,
                                   &v476_.v476),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v232 = *((_QWORD*)&v478 + 1);
          v476_.v476 = GameData_2110158;
          v476_.v477 = 0;
          if (*((_QWORD*)&v478 + 1) != 0) {
            v233 = GameRoutine_19e10(),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(__int64, __int64, const char*, __int64))(
                *(_QWORD*)v233 + 40LL))(
                v233, v232, "/Program/Externals/Spine/include\\spine/Vector.h",
                206),
                v227 =
                    COERCE_AS(__typeof__(v227),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v238 =
                    COERCE_AS(__typeof__(v238),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v253 =
                    COERCE_AS(__typeof__(v253),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v268 =
                    COERCE_AS(__typeof__(v268),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v285 =
                    COERCE_AS(__typeof__(v285),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v292 =
                    COERCE_AS(__typeof__(v292),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          spine_SpineObject_Destroy_SpineObject_4e8a0(&v476_.v476),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v234 = *(_QWORD*)(a2 + 288);
      v235 = (*(__int64 (**)(__int64))(*(_QWORD*)v234 + 56LL))(v234),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v236 = __PAIR64__(LODWORD(v493), v491);
      *((float*)&v236 + 2) = *(float*)&v491 + *((float*)&v492 + 1);
      *((float*)&v236 + 3) = v493 + *(float*)&v492;
      *(_OWORD*)v235 = v236;
      *(_OWORD*)(v235 + 16) = GameData_1a83940;
      *(float*)(v235 + 32) = v3 / *(float*)(a2 + 1236);
      {
        __typeof__(v236) z_ = (__typeof__(v236)){0};
        LODWORD(z_) = *(_DWORD*)(a2 + 1244);
        v236 = z_;
      }
      *(_OWORD*)(v235 + 48) = GameData_1a83940;
      *(_DWORD*)(v235 + 36) = v236;
      {
        __typeof__(v236) z_ = (__typeof__(v236)){0};
        LODWORD(z_) = *(_DWORD*)(a2 + 1236);
        v236 = z_;
      }
      *(_QWORD*)(v235 + 40) = 0;
      *(float*)(v235 + 64) = v3 / *(float*)&v236;
      v237 = *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552) + 16LL);
      *(_QWORD*)(a2 +
                 312) = (*(__int64 (**)(__int64))(*(_QWORD*)v237 + 80LL))(v237),
                 v227 =
                     COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v238 =
                     COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v253 =
                     COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v268 =
                     COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v285 =
                     COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v292 =
                     COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a2 + 320) = v238;
      GameRoutine_5de60((_QWORD*)(a2 + 312), *(_QWORD*)(a2 + 288)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v234 + 64LL))(v234),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v478 = 0;
      LODWORD(v476_.v476) = 3;
      v476_.v477 = 104;
      *(_QWORD*)&v478 = *(_QWORD*)(GameData_220b680 + 8);
      spine_cpp_src_spine_53bd0((void*)((__int64*)&v494_.v494),
                                (__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v239 = (__int64*)v494_.v494;
      v240 = *(_QWORD*)(a2 + 328);
      v494_.v494 = nullptr;
      *(_QWORD*)(a2 + 328) = v239;
      if (v240 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v240 + 8LL))(v240),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v241 = (__int64*)v494_.v494;
        v494_.v494 = nullptr;
        if (v241 != nullptr) {
          (*(void (**)(__int64*))(*v241 + 8))(v241),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v242 = *(_QWORD*)(a2 + 328);
      v243 = (*(__int64 (**)(__int64))(*(_QWORD*)v242 + 56LL))(v242),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v452 = GameRoutine_1a0a550(*(float*)(a2 + 1072), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v443 = GameRoutine_1a0a550(*(float*)(a2 + 1076), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v244 = GameRoutine_1a0a550(*(float*)(a2 + 1080), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v245 = __PAIR64__(LODWORD(v443), LODWORD(v452));
      *((float*)&v245 + 2) = v244;
      DWORDn(v245, sizeof(v245) / 4 - 1) = *(_DWORD*)(a2 + 1084);
      *(_OWORD*)v243 = v245;
      v453 = GameRoutine_1a0a550(*(float*)(a2 + 1088), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v444 = GameRoutine_1a0a550(*(float*)(a2 + 1092), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v246 = GameRoutine_1a0a550(*(float*)(a2 + 1096), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v247 = __PAIR64__(LODWORD(v444), LODWORD(v453));
      *((float*)&v247 + 2) = v246;
      DWORDn(v247, sizeof(v247) / 4 - 1) = *(_DWORD*)(a2 + 1100);
      *(_DWORD*)(v243 + 64) = 1065353216;
      *(_DWORD*)(v243 + 72) = 0;
      *(_OWORD*)(v243 + 16) = v247;
      *(_DWORD*)(v243 + 80) = *(_DWORD*)(a2 + 1104);
      *(float*)(v243 + 88) = (float)*(int*)(a2 + 1120);
      v454 = GameRoutine_1a0a550(*(float*)(a2 + 1152), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v445 = GameRoutine_1a0a550(*(float*)(a2 + 1156), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v248 = GameRoutine_1a0a550(*(float*)(a2 + 1160), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v249 = __PAIR64__(LODWORD(v445), LODWORD(v454));
      *((float*)&v249 + 2) = v248;
      DWORDn(v249, sizeof(v249) / 4 - 1) = *(_DWORD*)(a2 + 1164);
      *(_OWORD*)(v243 + 32) = v249;
      v455 = GameRoutine_1a0a550(*(float*)(a2 + 1168), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v446 = GameRoutine_1a0a550(*(float*)(a2 + 1172), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v250 = GameRoutine_1a0a550(*(float*)(a2 + 1176), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v251 = __PAIR64__(LODWORD(v446), LODWORD(v455));
      *((float*)&v251 + 2) = v250;
      DWORDn(v251, sizeof(v251) / 4 - 1) = *(_DWORD*)(a2 + 1180);
      *(_DWORD*)(v243 + 68) = 1065353216;
      *(_DWORD*)(v243 + 76) = 0;
      *(_OWORD*)(v243 + 16) = v251;
      *(_DWORD*)(v243 + 84) = *(_DWORD*)(a2 + 1184);
      *(float*)(v243 + 92) = (float)*(int*)(a2 + 1200);
      v252 = *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552) + 16LL);
      *(_QWORD*)(a2 +
                 344) = (*(__int64 (**)(__int64))(*(_QWORD*)v252 + 80LL))(v252),
                 v227 =
                     COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v238 =
                     COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v253 =
                     COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v268 =
                     COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v285 =
                     COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v292 =
                     COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a2 + 352) = v253;
      GameRoutine_5de60((_QWORD*)(a2 + 344), *(_QWORD*)(a2 + 328)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v242 + 64LL))(v242),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v478 = 0;
      LODWORD(v476_.v476) = 3;
      v476_.v477 = 104;
      *(_QWORD*)&v478 = *(_QWORD*)(GameData_220b680 + 8);
      spine_cpp_src_spine_53bd0((void*)((__int64*)&v494_.v494),
                                (__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v254 = (__int64*)v494_.v494;
      v255 = *(_QWORD*)(a2 + 336);
      v494_.v494 = nullptr;
      *(_QWORD*)(a2 + 336) = v254;
      if (v255 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v255 + 8LL))(v255),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v256 = (__int64*)v494_.v494;
        v494_.v494 = nullptr;
        if (v256 != nullptr) {
          (*(void (**)(__int64*))(*v256 + 8))(v256),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v257 = *(_QWORD*)(a2 + 336);
      v258 = (*(__int64 (**)(__int64))(*(_QWORD*)v257 + 56LL))(v257),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v456 = GameRoutine_1a0a550(*(float*)(a2 + 1072), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v447 = GameRoutine_1a0a550(*(float*)(a2 + 1076), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v259 = GameRoutine_1a0a550(*(float*)(a2 + 1080), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v260 = __PAIR64__(LODWORD(v447), LODWORD(v456));
      *((float*)&v260 + 2) = v259;
      DWORDn(v260, sizeof(v260) / 4 - 1) = *(_DWORD*)(a2 + 1084);
      *(_OWORD*)v258 = v260;
      v457 = GameRoutine_1a0a550(*(float*)(a2 + 1088), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v448 = GameRoutine_1a0a550(*(float*)(a2 + 1092), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v261 = GameRoutine_1a0a550(*(float*)(a2 + 1096), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v262 = __PAIR64__(LODWORD(v448), LODWORD(v457));
      *((float*)&v262 + 2) = v261;
      DWORDn(v262, sizeof(v262) / 4 - 1) = *(_DWORD*)(a2 + 1100);
      *(_DWORD*)(v258 + 64) = 1065353216;
      *(_DWORD*)(v258 + 72) = 0;
      *(_OWORD*)(v258 + 16) = v262;
      *(_DWORD*)(v258 + 80) = *(_DWORD*)(a2 + 1104);
      *(float*)(v258 + 88) = (float)*(int*)(a2 + 1120);
      v458 = GameRoutine_1a0a550(*(float*)(a2 + 1152), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v449 = GameRoutine_1a0a550(*(float*)(a2 + 1156), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v263 = GameRoutine_1a0a550(*(float*)(a2 + 1160), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v264 = __PAIR64__(LODWORD(v449), LODWORD(v458));
      *((float*)&v264 + 2) = v263;
      DWORDn(v264, sizeof(v264) / 4 - 1) = *(_DWORD*)(a2 + 1164);
      *(_OWORD*)(v258 + 32) = v264;
      v459 = GameRoutine_1a0a550(*(float*)(a2 + 1168), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v450 = GameRoutine_1a0a550(*(float*)(a2 + 1172), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v265 = GameRoutine_1a0a550(*(float*)(a2 + 1176), v13),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v266 = __PAIR64__(LODWORD(v450), LODWORD(v459));
      *((float*)&v266 + 2) = v265;
      DWORDn(v266, sizeof(v266) / 4 - 1) = *(_DWORD*)(a2 + 1180);
      *(_DWORD*)(v258 + 68) = 1065353216;
      *(_DWORD*)(v258 + 76) = 0;
      *(_OWORD*)(v258 + 16) = v266;
      *(_DWORD*)(v258 + 84) = *(_DWORD*)(a2 + 1184);
      *(float*)(v258 + 92) = (float)*(int*)(a2 + 1200);
      v267 = *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552) + 16LL);
      *(_QWORD*)(a2 +
                 360) = (*(__int64 (**)(__int64))(*(_QWORD*)v267 + 80LL))(v267),
                 v227 =
                     COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v238 =
                     COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v253 =
                     COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v268 =
                     COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v285 =
                     COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v292 =
                     COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a2 + 368) = v268;
      GameRoutine_5de60((_QWORD*)(a2 + 360), *(_QWORD*)(a2 + 336)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v257 + 64LL))(v257),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LODWORD(v494_.v494) = 3;
      v494_.v495 = 64;
      v494_.v496 = 0;
      v494_.v496 = *(_QWORD*)(GameData_220b680 + 8);
      spine_cpp_src_spine_53bd0((void*)((__int64*)&v476_.v476),
                                (__int64)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v269 = v476_.v476;
      v270 = *(_QWORD*)(a2 + 376);
      v476_.v476 = nullptr;
      *(_QWORD*)(a2 + 376) = v269;
      if (v270 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v270 + 8LL))(v270),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v271 = v476_.v476;
        v476_.v476 = nullptr;
        if (v271 != nullptr) {
          (*((void (**)(__int64 (**)(void)))*v271 + 1))(v271),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      LANES64(v272).n64_u64[0] =
          LANES64_OF(vadd_f32(v461, COERCE_AS(float32x2_t,
                                              LANES128(v463).n128_u64[0])))
              .n64_u64[0];
      v273 = *(_QWORD*)(a2 + 376);
      LANES128(v274).n128_u64[0] = LANES64_OF(vpadd_f32(v272, v272)).n64_u64[0];
      LANES128(v274).n128_u64[1] = LANES128(v274).n128_u64[0];
      v275 = vrsqrteq_f32(v274);
      v276 = vmulq_f32(v275, vrsqrtsq_f32(v275, vmulq_f32(v274, v275)));
      v277 = vbicq_s8(
          vmulq_f32(v466,
                    vmulq_f32(v276, vrsqrtsq_f32(v276, vmulq_f32(v274, v276)))),
          vceqzq_f32(v274));
      LANES128(v276).n128_u64[0] = LANES64_OF(vqtbl1_s8(v277, v8)).n64_u64[0];
      *(int8x8_t*)&LANES128(v276).n128_i8[8] = vqtbl1_s8(v277, v9);
      LANES128(v278).n128_u64[0] = LANES64_OF(vqtbl1_s8(v277, v10)).n64_u64[0];
      *(int8x8_t*)&LANES128(v278).n128_i8[8] = vqtbl1_s8(v277, v7);
      v279 = vmlsq_f32(vmulq_f32(v467, v276), v278, v468);
      v280 = vmulq_f32(v277, COERCE_AS(float32x4_t, GameData_1a829b0));
      LANES128(v280).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v280, v280, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v280).n128_u64[0])))
              .n64_u64[0];
      v281 = vmulq_f32(v279, COERCE_AS(float32x4_t, GameData_1a829b0));
      LANES128(v281).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v281, v281, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0])))
              .n64_u64[0];
      LANES64(v282).n64_u64[0] =
          LANES64_OF(vadd_f32(v462, COERCE_AS(float32x2_t,
                                              LANES128(v464).n128_u64[0])))
              .n64_u64[0];
      v499.val[0] = vmlaq_n_f32(
          vmlaq_n_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                                  LANES128(v277).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a82ca0),
                      LANES128(v279).n128_f32[0]),
          COERCE_AS(float32x4_t, GameData_1a83330), LANES128(v469).n128_f32[0]);
      v499.val[1] = vmlaq_lane_f32(
          vmlaq_lane_f32(
              vmulq_lane_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                             COERCE_AS(float32x2_t, LANES128(v277).n128_u64[0]),
                             1),
              COERCE_AS(float32x4_t, GameData_1a82ca0),
              COERCE_AS(float32x2_t, LANES128(v279).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83330),
          COERCE_AS(float32x2_t, LANES128(v469).n128_u64[0]), 1);
      v499.val[2] = vmlaq_laneq_f32(
          vmlaq_laneq_f32(
              vmulq_laneq_f32(COERCE_AS(float32x4_t, GameData_1a82bc0), v277,
                              2),
              COERCE_AS(float32x4_t, GameData_1a82ca0), v279, 2),
          COERCE_AS(float32x4_t, GameData_1a83330), v469, 2);
      v499.val[3] = vaddq_f32(
          vmlaq_lane_f32(
              vmlaq_lane_f32(
                  vmulq_lane_f32(
                      COERCE_AS(float32x4_t, GameData_1a82bc0),
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v280).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v280).n128_u64[0])),
                      1),
                  COERCE_AS(float32x4_t, GameData_1a82ca0),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0])),
                  1),
              COERCE_AS(float32x4_t, GameData_1a83330), vpadd_f32(v282, v282),
              1),
          COERCE_AS(float32x4_t, GameData_1a83400));
      vst4q_f32((float*)&v476_.v476, v499);
      v498 = v499;
      v283 = (*(__int64 (**)(__int64))(*(_QWORD*)v273 + 56LL))(v273),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_1a0b950(v283, (__int64)&v476_.v476, v494_.v495),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v284 = *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552) + 16LL);
      *(_QWORD*)(a2 +
                 392) = (*(__int64 (**)(__int64))(*(_QWORD*)v284 + 80LL))(v284),
                 v227 =
                     COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v238 =
                     COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v253 =
                     COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v268 =
                     COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v285 =
                     COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v292 =
                     COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a2 + 400) = v285;
      GameRoutine_5de60((_QWORD*)(a2 + 392), *(_QWORD*)(a2 + 376)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v273 + 64LL))(v273),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LODWORD(v494_.v494) = 3;
      v494_.v495 = 64;
      v494_.v496 = 0;
      v494_.v496 = *(_QWORD*)(GameData_220b680 + 8);
      spine_cpp_src_spine_53bd0((void*)((__int64*)&v476_.v476),
                                (__int64)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v286 = v476_.v476;
      v287 = *(_QWORD*)(a2 + 384);
      v476_.v476 = nullptr;
      *(_QWORD*)(a2 + 384) = v286;
      if (v287 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v287 + 8LL))(v287),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v288 = v476_.v476;
        v476_.v476 = nullptr;
        if (v288 != nullptr) {
          (*((void (**)(__int64 (**)(void)))*v288 + 1))(v288),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v289 = *(_QWORD*)(a2 + 384);
      vst4q_f32((float*)&v476_.v476, v498);
      v290 = (*(__int64 (**)(__int64))(*(_QWORD*)v289 + 56LL))(v289),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_1a0b950(v290, (__int64)&v476_.v476, v494_.v495),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v291 = *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552) + 16LL);
      *(_QWORD*)(a2 +
                 408) = (*(__int64 (**)(__int64))(*(_QWORD*)v291 + 80LL))(v291),
                 v227 =
                     COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v238 =
                     COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v253 =
                     COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v268 =
                     COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v285 =
                     COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v292 =
                     COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a2 + 416) = v292;
      GameRoutine_5de60((_QWORD*)(a2 + 408), *(_QWORD*)(a2 + 384)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)v289 + 64LL))(v289),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v293 = *(_QWORD*)(a2 + 96);
      BYTE8(v478) = 1;
      v476_.v477 = 6;
      v476_.v476 = (__int64 (**)(void))v465,
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v294 = GameRoutine_19e10(),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)&v478 = (*(__int64 (**)(__int64, __int64, const char*,
                                        __int64))(*(_QWORD*)v294 + 24LL))(
          v294, 7, "/Program/Externals/Spine/include\\spine/SpineString.h", 53),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_1a0b950(v478, (__int64)"Render", v476_.v477 + 1),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v295 = GameRoutine_1efd0(v293, (__int64)&v476_.v476),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v296 = v478;
      v297 = v295;
      v476_.v476 = (__int64 (**)(void))v465,
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((_QWORD)v478 != 0 && (BYTE8(v478) & 1) != 0) {
        v298 = GameRoutine_19e10(),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v298 +
                                                              40LL))(
            v298, v296, "/Program/Externals/Spine/include\\spine/SpineString.h",
            206),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      spine_SpineObject_Destroy_SpineObject_4e8a0(&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v297 == 0) {
        goto LABEL_466;
      }
      v299 = spine_Slot_getAttachment(v297),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v299 == 0) {
        goto LABEL_466;
      }
      v300 = v299;
      v494_.v494 = SpineModel_1912dc0_ptr;
      v494_.v496 = 0;
      v494_.v497 = 0;
      v494_.v495 = 0;
      v301 =
          (const char**)(*(__int64 (**)(__int64))(*(_QWORD*)v299 + 16LL))(v299),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (spine_RTTI_isExactly(v301, (const char**)GameData_21322f8)) {
        v494_.v495 = 4;
        v494_.v496 = 8;
        v302 = GameRoutine_19e10(),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v303 = (*(__int64 (**)(__int64, _QWORD, __int64, const char*, __int64))(
            *(_QWORD*)v302 + 32LL))(
            v302, 0, 256, "/Program/Externals/Spine/include\\spine/Vector.h",
            82),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v494_.v497 = v303;
        *(_QWORD*)(v303 + 32) = 0;
        *(_QWORD*)(v303 + 40) = 0;
        *(_QWORD*)(v303 + 48) = 0;
        *(_QWORD*)(v303 + 56) = 0;
        *(_QWORD*)(v303 + 64) = 0;
        *(_QWORD*)(v303 + 72) = 0;
        *(_QWORD*)(v303 + 80) = 0;
        *(_QWORD*)(v303 + 88) = 0;
        *(_QWORD*)(v303 + 96) = 0;
        *(_QWORD*)(v303 + 104) = 0;
        *(_QWORD*)(v303 + 112) = 0;
        *(_QWORD*)(v303 + 120) = 0;
        *(_QWORD*)v303 = 0;
        *(_QWORD*)(v303 + 8) = 0;
        *(_QWORD*)(v303 + 16) = 0;
        *(_QWORD*)(v303 + 24) = 0;
        ((void (*)(__int64, __int64, __int64, _QWORD,
                   __int64))GameRoutine_1bc10)(v300, v297, v303, 0, 8),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v304 = 4;
      LABEL_312:
        if (v304 - 1 >= 7) {
          v329 = (float*)(v303 + 128);
          v330 = 0;
          v306 = 0x1.fffffe0000000p+127f;
          v307 = -0x1.fffffe0000000p+127f;
          v308 = 0x1.fffffe0000000p+127f;
          v309 = -0x1.fffffe0000000p+127f;
          do {
            v331 = *(v329 - 32);
            v332 = *(v329 - 31);
            v330 -= 8;
            if (v308 >= v331) {
              v308 = *(v329 - 32);
            }
            if (v306 >= v332) {
              v306 = *(v329 - 31);
            }
            if (v331 >= v309) {
              v309 = *(v329 - 32);
            }
            if (v332 >= v307) {
              v307 = *(v329 - 31);
            }
            v333 = *(v329 - 24);
            v334 = *(v329 - 23);
            if (v308 >= v333) {
              v308 = *(v329 - 24);
            }
            if (v306 >= v334) {
              v306 = *(v329 - 23);
            }
            if (v333 >= v309) {
              v309 = *(v329 - 24);
            }
            if (v334 >= v307) {
              v307 = *(v329 - 23);
            }
            v335 = *(v329 - 16);
            v336 = *(v329 - 15);
            if (v308 >= v335) {
              v308 = *(v329 - 16);
            }
            if (v306 >= v336) {
              v306 = *(v329 - 15);
            }
            if (v335 >= v309) {
              v309 = *(v329 - 16);
            }
            if (v336 >= v307) {
              v307 = *(v329 - 15);
            }
            v337 = *(v329 - 8);
            v338 = *(v329 - 7);
            if (v308 >= v337) {
              v308 = *(v329 - 8);
            }
            if (v306 >= v338) {
              v306 = *(v329 - 7);
            }
            if (v337 >= v309) {
              v309 = *(v329 - 8);
            }
            if (v338 >= v307) {
              v307 = *(v329 - 7);
            }
            v339 = v329[1];
            if (v308 >= *v329) {
              v308 = *v329;
            }
            if (v306 >= v339) {
              v306 = v329[1];
            }
            if (*v329 >= v309) {
              v309 = *v329;
            }
            if (v339 >= v307) {
              v307 = v329[1];
            }
            v340 = v329[8];
            v341 = v329[9];
            if (v308 >= v340) {
              v308 = v329[8];
            }
            if (v306 >= v341) {
              v306 = v329[9];
            }
            if (v340 >= v309) {
              v309 = v329[8];
            }
            if (v341 >= v307) {
              v307 = v329[9];
            }
            v342 = v329[16];
            v343 = v329[17];
            if (v308 >= v342) {
              v308 = v329[16];
            }
            if (v306 >= v343) {
              v306 = v329[17];
            }
            if (v342 >= v309) {
              v309 = v329[16];
            }
            if (v343 >= v307) {
              v307 = v329[17];
            }
            v344 = v329[24];
            v345 = v329[25];
            v329 += 64;
            if (v308 >= v344) {
              v308 = v344;
            }
            if (v306 >= v345) {
              v306 = v345;
            }
            if (v344 >= v309) {
              v309 = v344;
            }
            if (v345 >= v307) {
              v307 = v345;
            }
          } while (-(__int64)(v304 & 0x7FFFFFFFFFFFFFF8LL) != v330);
          v305 = -v330;
          v310 = v304 & 7;
          if ((v304 & 7) == 0) {
            goto LABEL_413;
          }
        }
        else {
          v305 = 0;
          v306 = 0x1.fffffe0000000p+127f;
          v307 = -0x1.fffffe0000000p+127f;
          v308 = 0x1.fffffe0000000p+127f;
          v309 = -0x1.fffffe0000000p+127f;
          v310 = v304 & 7;
          if ((v304 & 7) == 0) {
          LABEL_413:
            v349 = v309 - v308;
            v350 = v307 - v306;
            goto LABEL_444;
          }
        }
        v346 = (float*)(v303 + 32 * v305 + 4);
        do {
          v347 = *(v346 - 1);
          v348 = *v346;
          v346 += 8;
          if (v308 >= v347) {
            v308 = v347;
          }
          if (v306 >= v348) {
            v306 = v348;
          }
          if (v347 >= v309) {
            v309 = v347;
          }
          if (v348 >= v307) {
            v307 = v348;
          }
          --v310;
        } while (v310 != 0);
        goto LABEL_413;
      }
      v326 =
          (const char**)(*(__int64 (**)(__int64))(*(_QWORD*)v300 + 16LL))(v300),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (spine_RTTI_isExactly(v326, (const char**)GameData_2132300)) {
        v327 = spine_VertexAttachment_getWorldVerticesLength(v300),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v304 = v327 >> 1;
        v328 = v327;
        v494_.v495 = v327 >> 1;
        if (v327 >= 2) {
          if ((unsigned int)(int)(float)((float)v304 * v4) <= 8) {
            v355 = 8;
          }
          else {
            v355 = (int)(float)((float)v304 * v4);
          }
          v494_.v496 = v355;
          v356 = GameRoutine_19e10(),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v303 = (*(__int64 (**)(__int64, _QWORD, __int64, const char*,
                                 __int64))(*(_QWORD*)v356 + 32LL))(
              v356, 0, 32LL * v355,
              "/Program/Externals/Spine/include\\spine/Vector.h", 82),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v494_.v497 = v303;
          GameRoutine_1a0ba50(v303, 0, 32 * v304),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v303 = 0;
        }
        v357 = spine_VertexAttachment_getWorldVerticesLength(v300),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD,
                     __int64))(*(_QWORD*)v300 + 32LL))(v300, v297, 0, v357,
                                                       v303, 0, 8),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v328 >= 2) {
          goto LABEL_312;
        }
        v304 = 0;
      }
      else {
        v304 = 0;
        v303 = 0;
      }
      v349 = -__builtin_inff();
      v350 = -__builtin_inff();
    LABEL_444:
      v358 = *(float*)(a2 + 864);
      *(_BYTE*)(a2 + 1044) = 1;
      v476_.v477 = 0x100000001LL;
      v479_.v479 = nullptr;
      v479_.v480 = 0;
      LODWORD(v478) = 0;
      *(_DWORD*)((char*)&v478 + 7) = 0;
      DWORD1(v478) = 5;
      *(float*)&v359 = v349 * v358;
      *((float*)&v359 + 1) = v350 * v358;
      LODWORD(v476_.v476) = (int)*(float*)&v359;
      DWORDn(v476_.v476, sizeof(v476_.v476) / 4 - 1) =
          (int)(float)(v350 * v358);
      v360 = GameData_220b680;
      *(_QWORD*)(a2 + 840) = v359;
      v479_.v479 = *(const char***)(v360 + 40);
      v361 = *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552) + 16LL);
      BYTE8(v478) = 1;
      v479_.v480 = v361;
      spine_cpp_src_spine_53c20((void*)(&v491), (__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v362 = v491;
      v363 = *(_QWORD*)(a2 + 808);
      v491 = 0;
      *(_QWORD*)(a2 + 808) = v362;
      if (v363 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v363 + 8LL))(v363),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v364 = v491;
        v491 = 0;
        if (v364 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v364 + 8LL))(v364),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      spine_cpp_src_spine_53c20((void*)(&v491), (__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v365 = v491;
      v366 = *(_QWORD*)(a2 + 816);
      v491 = 0;
      *(_QWORD*)(a2 + 816) = v365;
      if (v366 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v366 + 8LL))(v366),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v367 = v491;
        v491 = 0;
        if (v367 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v367 + 8LL))(v367),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      LODWORD(v476_.v476) = (int)v476_.v476 / 2;
      SDWORDn(v476_.v476, sizeof(v476_.v476) / 4 - 1) /= 2;
      spine_cpp_src_spine_53c20((void*)(&v491), (__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v368 = v491;
      v369 = *(_QWORD*)(a2 + 824);
      v491 = 0;
      *(_QWORD*)(a2 + 824) = v368;
      if (v369 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v369 + 8LL))(v369),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v370 = v491;
        v491 = 0;
        if (v370 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v370 + 8LL))(v370),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      spine_cpp_src_spine_53c20((void*)(&v491), (__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v371 = v491;
      v372 = *(_QWORD*)(a2 + 832);
      v491 = 0;
      *(_QWORD*)(a2 + 832) = v371;
      if (v372 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v372 + 8LL))(v372),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v373 = v491;
        v491 = 0;
        if (v373 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v373 + 8LL))(v373),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      *(_QWORD*)&v478 = 0;
      LODWORD(v476_.v476) = 1;
      v476_.v477 = 128;
      *(_QWORD*)&v478 = *(_QWORD*)(GameData_220b680 + 8);
      spine_cpp_src_spine_53bd0((void*)(&v491), (__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v374 = v491;
      v375 = *(_QWORD*)(a2 + 256);
      v491 = 0;
      *(_QWORD*)(a2 + 256) = v374;
      if (v375 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v375 + 8LL))(v375),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v376 = v491;
        v491 = 0;
        if (v376 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v376 + 8LL))(v376),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v377 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 256) + 56LL))(
          *(_QWORD*)(a2 + 256)),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v304 == 0) {
        goto LABEL_523;
      }
      *(_DWORD*)v377 = *(_DWORD*)v303;
      v378 = *(_DWORD*)(v303 + 4);
      *(_QWORD*)(v377 + 16) = 0x3F8000003F800000LL;
      *(_QWORD*)(v377 + 24) = 0x3F8000003F800000LL;
      *(_QWORD*)(v377 + 8) = 1065353216;
      *(_DWORD*)(v377 + 4) = v378;
      if (v304 == 1) {
        goto LABEL_523;
      }
      *(_DWORD*)(v377 + 32) = *(_DWORD*)(v303 + 32);
      v379 = *(_DWORD*)(v303 + 36);
      *(_QWORD*)(v377 + 48) = 0x3F8000003F800000LL;
      *(_QWORD*)(v377 + 56) = 0x3F8000003F800000LL;
      *(_QWORD*)(v377 + 40) = 0;
      *(_DWORD*)(v377 + 36) = v379;
      if (v304 < 4) {
        goto LABEL_523;
      }
      *(_DWORD*)(v377 + 64) = *(_DWORD*)(v303 + 96);
      v380 = *(_DWORD*)(v303 + 100);
      *(_QWORD*)(v377 + 80) = 0x3F8000003F800000LL;
      *(_QWORD*)(v377 + 88) = 0x3F8000003F800000LL;
      *(_QWORD*)(v377 + 72) = 0x3F8000003F800000LL;
      *(_DWORD*)(v377 + 68) = v380;
      *(_DWORD*)(v377 + 96) = *(_DWORD*)(v303 + 64);
      v381 = *(_DWORD*)(v303 + 68);
      *(_QWORD*)(v377 + 112) = 0x3F8000003F800000LL;
      *(_QWORD*)(v377 + 120) = 0x3F8000003F800000LL;
      *(_QWORD*)(v377 + 104) = 0x3F80000000000000LL;
      *(_DWORD*)(v377 + 100) = v381;
      (*(void (**)(_QWORD))(**(_QWORD**)(a2 + 256) + 64LL))(
          *(_QWORD*)(a2 + 256)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      spine_cpp_src_spine_53bd0((void*)(&v491), (__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v382 = v491;
      v383 = *(_QWORD*)(a2 + 264);
      v491 = 0;
      *(_QWORD*)(a2 + 264) = v382;
      if (v383 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v383 + 8LL))(v383),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v384 = v491;
        v491 = 0;
        if (v384 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v384 + 8LL))(v384),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v385 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 264) + 56LL))(
          *(_QWORD*)(a2 + 264)),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_DWORD*)v385 = *(_DWORD*)v303;
      v386 = *(_DWORD*)(v303 + 4);
      *(_QWORD*)(v385 + 16) = 0x3F8000003F800000LL;
      *(_QWORD*)(v385 + 24) = 0x3F8000003F800000LL;
      *(_QWORD*)(v385 + 8) = 1065353216;
      *(_DWORD*)(v385 + 4) = v386;
      *(_DWORD*)(v385 + 32) = *(_DWORD*)(v303 + 32);
      v387 = *(_DWORD*)(v303 + 36);
      *(_QWORD*)(v385 + 48) = 0x3F8000003F800000LL;
      *(_QWORD*)(v385 + 56) = 0x3F8000003F800000LL;
      *(_QWORD*)(v385 + 40) = 0;
      *(_DWORD*)(v385 + 36) = v387;
      *(_DWORD*)(v385 + 64) = *(_DWORD*)(v303 + 96);
      v388 = *(_DWORD*)(v303 + 100);
      *(_QWORD*)(v385 + 80) = 0x3F8000003F800000LL;
      *(_QWORD*)(v385 + 88) = 0x3F8000003F800000LL;
      *(_QWORD*)(v385 + 72) = 0x3F8000003F800000LL;
      *(_DWORD*)(v385 + 68) = v388;
      *(_DWORD*)(v385 + 96) = *(_DWORD*)(v303 + 64);
      v389 = *(_DWORD*)(v303 + 68);
      *(_QWORD*)(v385 + 112) = 0x3F8000003F800000LL;
      *(_QWORD*)(v385 + 120) = 0x3F8000003F800000LL;
      *(_QWORD*)(v385 + 104) = 0x3F80000000000000LL;
      *(_DWORD*)(v385 + 100) = v389;
      (*(void (**)(_QWORD))(**(_QWORD**)(a2 + 264) + 64LL))(
          *(_QWORD*)(a2 + 264)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v494_.v494 = SpineModel_1912dc0_ptr;
      v494_.v495 = 0;
      v390 = GameRoutine_19e10(),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v390 +
                                                            40LL))(
          v390, v303, "/Program/Externals/Spine/include\\spine/Vector.h", 206),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      spine_SpineObject_Destroy_SpineObject_4e8a0(&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_466:
      LODWORD(v476_.v476) = 2;
      v476_.v477 = 12;
      *(_QWORD*)&v478 = *(_QWORD*)(GameData_220b680 + 8);
      spine_cpp_src_spine_53bd0((void*)((__int64*)&v494_.v494),
                                (__int64)&v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v391 = (__int64*)v494_.v494;
      v392 = *(_QWORD*)(a2 + 272);
      v494_.v494 = nullptr;
      *(_QWORD*)(a2 + 272) = v391;
      if (v392 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v392 + 8LL))(v392),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v393 = (__int64*)v494_.v494;
        v494_.v494 = nullptr;
        if (v393 != nullptr) {
          (*(void (**)(__int64*))(*v393 + 8))(v393),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v394 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 272) + 56LL))(
          *(_QWORD*)(a2 + 272)),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_1a0b950(v394, (__int64)&GameData_1c1d658, v476_.v477),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD))(**(_QWORD**)(a2 + 272) + 64LL))(
          *(_QWORD*)(a2 + 272)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v479_.v479 = (const char**)&v476_.v476;
      v494_.v496 = 0;
      v494_.v497 = 0;
      v494_.v494 = nullptr;
      v494_.v495 = 0;
      v476_.v476 = GameData_2110280;
      GameRoutine_5fc230((__int64)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v479_.v479 != nullptr) {
        (*((void (**)(const char**, __int64 (***)(void)))*v479_.v479 + 6))(
            v479_.v479, &v494_.v494),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v395 = game_g_frame_clock_ptr[0];
      GameRoutine_604060(a2 + 424, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                         (float*)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a2 +
                 544) = game_615760(*(_QWORD*)(*v395 + 552), a2 + 424),
                 v227 =
                     COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v238 =
                     COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v253 =
                     COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v268 =
                     COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v285 =
                     COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v292 =
                     COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v479_.v479 == (const char**)&v476_.v476) {
        v396 = 32;
      }
      else {
        if (v479_.v479 == nullptr) {
          goto LABEL_476;
        }
        v396 = 40;
      }
      (*(void (**)(void*)) & (*v479_.v479)[v396])((void*)v479_.v479),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_476:
      v479_.v479 = (const char**)&v476_.v476;
      v494_.v496 = 0;
      v494_.v497 = 0;
      v494_.v494 = nullptr;
      v494_.v495 = 0;
      v476_.v476 = GameData_2110300;
      GameRoutine_5fc230((__int64)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v479_.v479 != nullptr) {
        (*((void (**)(const char**, __int64 (***)(void)))*v479_.v479 + 6))(
            v479_.v479, &v494_.v494),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      GameRoutine_604060(a2 + 552, (__int64*)(*v395 + 568),
                         (float*)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a2 +
                 672) = game_615760(*(_QWORD*)(*v395 + 552), a2 + 552),
                 v227 =
                     COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v238 =
                     COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v253 =
                     COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v268 =
                     COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v285 =
                     COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v292 =
                     COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v479_.v479 == (const char**)&v476_.v476) {
        v397 = 32;
      }
      else {
        if (v479_.v479 == nullptr) {
          goto LABEL_483;
        }
        v397 = 40;
      }
      (*(void (**)(void*)) & (*v479_.v479)[v397])((void*)v479_.v479),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_483:
      v479_.v479 = (const char**)&v476_.v476;
      v494_.v496 = 0;
      v494_.v497 = 0;
      v494_.v494 = nullptr;
      v494_.v495 = 0;
      v476_.v476 = GameData_2110380;
      GameRoutine_5fc230((__int64)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v479_.v479 != nullptr) {
        (*((void (**)(const char**, __int64 (***)(void)))*v479_.v479 + 6))(
            v479_.v479, &v494_.v494),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      GameRoutine_604060(a2 + 680, (__int64*)(*v395 + 568),
                         (float*)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a2 +
                 800) = game_615760(*(_QWORD*)(*v395 + 552), a2 + 680),
                 v227 =
                     COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v238 =
                     COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v253 =
                     COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v268 =
                     COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v285 =
                     COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                 v292 =
                     COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v479_.v479 == (const char**)&v476_.v476) {
        v398 = 32;
      }
      else {
        if (v479_.v479 == nullptr) {
          goto LABEL_490;
        }
        v398 = 40;
      }
      (*(void (**)(void*)) & (*v479_.v479)[v398])((void*)v479_.v479),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_490:
      v399 = *(_QWORD*)(a2 + 112);
      *(_BYTE*)(a2 + 1042) = 1;
      primeEm = vcvtps_u64_f32(
          (float)*(unsigned __int64*)(spine_SkeletonData_getSlots(v399) + 8) /
          *(float*)(a2 + 1312)),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime(primeEm),
        v227 = COERCE_AS(__typeof__(v227),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v238 = COERCE_AS(__typeof__(v238),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v253 = COERCE_AS(__typeof__(v253),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v268 = COERCE_AS(__typeof__(v268),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v285 = COERCE_AS(__typeof__(v285),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v292 = COERCE_AS(__typeof__(v292),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v401 = *(_QWORD*)(a2 + 1288);
      if (primeEm > v401) {
        goto LABEL_495;
      }
      if (primeEm < v401) {
        v402 = vcvtps_u64_f32((float)*(unsigned __int64*)(a2 + 1304) /
                              *(float*)(a2 + 1312));
        if (v401 < 3 || (v401 & (v401 - 1)) != 0) {
          v402 = std___1___next_prime(v402),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v403 = 1LL << ((-(char)__clz((unsigned long long)(v402 - 1))) & 63);
          if (v402 >= 2) {
            v402 = v403;
          }
        }
        if (primeEm <= v402) {
          primeEm = v402;
        }
        if (primeEm < v401) {
        LABEL_495:
          GameRoutine_1918840((__int64*)(a2 + 1280), primeEm),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v404 = *(_QWORD*)(spine_SkeletonData_getSlots(*(_QWORD*)(a2 + 112)) + 8),
      v227 = COERCE_AS(__typeof__(v227),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v238 = COERCE_AS(__typeof__(v238),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v253 = COERCE_AS(__typeof__(v253),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v268 = COERCE_AS(__typeof__(v268),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v285 = COERCE_AS(__typeof__(v285),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v292 = COERCE_AS(__typeof__(v292),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v404 != 0) {
        v405 = 0;
        while (1) {
          v406 = spine_SkeletonData_getSlots(*(_QWORD*)(a2 + 112)),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v405 >= *(_QWORD*)(v406 + 8)) {
            break;
          }
          v476_.v476 = *(__int64 (***)(void))(
              spine_SlotData_getName(
                  *(_QWORD*)(*(_QWORD*)(v406 + 24) + 8 * v405)) +
              16),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v476_.v477 = GameRoutine_1a09c70((const char*)v476_.v476),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v494_.v494 = (__int64 (**)(void))&v476_.v476,
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v407 = SpineModel_19184e0(a2 + 1280, (__int64*)&v476_.v476,
                                    (__int64**)&v494_.v494),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          DecalObject_a91100(
              v407 + 4, *(_QWORD*)(GameData_220b680 + 8),
              *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552) + 16LL),
              8),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v408 = v407[4];
          v409 = (*(__int64 (**)(__int64))(*(_QWORD*)v408 + 56LL))(v408),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(float*)v409 = *((float*)v407 + 22) + v3;
          *(_DWORD*)(v409 + 4) = *((_DWORD*)v407 + 23);
          (*(void (**)(__int64))(*(_QWORD*)v408 + 64LL))(v408),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v410 = v407[5];
          v411 = (*(__int64 (**)(__int64))(*(_QWORD*)v410 + 56LL))(v410),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(float*)v411 = *((float*)v407 + 22) + v3;
          *(_DWORD*)(v411 + 4) = *((_DWORD*)v407 + 23);
          (*(void (**)(__int64))(*(_QWORD*)v410 + 64LL))(v410),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v404 == ++v405) {
            goto LABEL_510;
          }
        }
      LABEL_523:
        __assert_fail("inIndex < _size",
                      "/Program/Externals/Spine/include\\spine/Vector.h", 162,
                      "operator[]"),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LABEL_524:
        String_60a250("string_view::substr"),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    LABEL_510:
      (*(void (**)(__int64))(*(_QWORD*)a2 + 16LL))(a2),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_511:
      v133 = 9;
    LABEL_512:
      *(_DWORD*)a1 = v133;
    LABEL_513:
      LOBYTE(v11) = 1;
      v6 = 1;
      continue;
    case 8:
      if ((cspine_1911530((__int64*)(a1 + 160), v475,
                          (__int64)&GameData_1a9f09e, 0, v11 & 1, 0, 2u) &
           1) != 0) {
        goto LABEL_511;
      }
      goto LABEL_2;
    case 9:
      v38 = *(_QWORD*)(a1 + 160);
      if (v38 == 0) {
        v29 = 10;
      LABEL_89:
        *(_DWORD*)a1 = v29;
        v6 = 1;
        continue;
      }
      nn_os_AcquireReadLock(v38 + 696),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v39 = *(_DWORD*)(v38 + 656);
      nn_os_ReleaseReadLock(v38 + 696),
          v227 = COERCE_AS(__typeof__(v227),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v238 = COERCE_AS(__typeof__(v238),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v253 = COERCE_AS(__typeof__(v253),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v268 = COERCE_AS(__typeof__(v268),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v285 = COERCE_AS(__typeof__(v285),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v292 = COERCE_AS(__typeof__(v292),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v39 & 0x40) != 0) {
        v40 = *(_QWORD*)(a1 + 160);
        if (*(_QWORD*)(v40 + 576) != 172 ||
            *(_DWORD*)(v41 = *(_QWORD*)(v40 + 592)) != 0) {
        LABEL_2:
          LOBYTE(v11) = 0;
          *(_QWORD*)a1 = 0x10000000ALL;
          v6 = 1;
        }
        else {
          v437 = v13;
          v438 = LANES64(v9).n64_u64[0];
          v439 = LANES64(v8).n64_u64[0];
          v42 = *(_OWORD*)(v41 + 8);
          v43 = *(_OWORD*)(v41 + 24);
          v442 = LANES64(v7).n64_u64[0];
          v451 = LANES64(v10).n64_u64[0];
          v45 = *(_DWORD*)(v41 + 40);
          v44 = *(_DWORD*)(v41 + 44);
          v46 = *(_DWORD*)(v41 + 48);
          v47 = *(_DWORD*)(v41 + 96);
          v48 = *(_DWORD*)(v41 + 100);
          v49 = *(_DWORD*)(v41 + 104);
          v50 = *(_DWORD*)(v41 + 136);
          v51 = *(_DWORD*)(v41 + 144);
          v52 = *(_DWORD*)(v41 + 168);
          v53 = *(_BYTE*)(v41 + 4);
          v54 = *(_BYTE*)(v41 + 60);
          v55 = *(_BYTE*)(v41 + 116);
          v56 = *(_BYTE*)(v41 + 140);
          v57 = *(_BYTE*)(v41 + 148);
          v58 = *(_OWORD*)(v41 + 64);
          v59 = *(_OWORD*)(v41 + 80);
          v60 = *(_DWORD*)(v41 + 52);
          v61 = *(_DWORD*)(v41 + 56);
          v11 = *(_DWORD*)(v41 + 108);
          v62 = *(_DWORD*)(v41 + 112);
          v63 = *(_DWORD*)(v41 + 120);
          v64 = *(_DWORD*)(v41 + 124);
          v66 = *(_DWORD*)(v41 + 128);
          v65 = *(_DWORD*)(v41 + 132);
          v67 = *(_DWORD*)(v41 + 152);
          v68 = *(_DWORD*)(v41 + 156);
          v69 = *(_DWORD*)(v41 + 160);
          v70 = *(_DWORD*)(v41 + 164);
          if (v470 == v475) {
            goto LABEL_435;
          }
          v71 = *(unsigned __int8*)v475;
          if ((*(_BYTE*)v470 & 1) != 0) {
            v311 = (v71 & 1) == 0;
            v312 = v71 >> 1;
            v313 = v53;
            v430 = v57;
            v432 = v63;
            v426 = v68;
            v428 = v67;
            if (v311) {
              v314 = v440;
            }
            else {
              v314 = *(_QWORD*)(a1 + 104);
            }
            if (v311) {
              v315 = v312;
            }
            else {
              v315 = *(_QWORD*)(a1 + 96);
            }
            v433 = v59;
            v434 = v58;
            v435 = v43;
            v436 = v42;
            v414 = v60;
            v420 = v11;
            v422 = v62;
            v316 = v66;
            v317 = v65;
            v318 = v70;
            v418 = v61;
            v319 = v55;
            v424 = v69;
            v416 = v45;
            v320 = v44;
            v321 = v50;
            v322 = v49;
            v323 = v48;
            v324 = v47;
            SpineModel_64dde0(v470, v314, v315),
                v227 =
                    COERCE_AS(__typeof__(v227),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v238 =
                    COERCE_AS(__typeof__(v238),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v253 =
                    COERCE_AS(__typeof__(v253),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v268 =
                    COERCE_AS(__typeof__(v268),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v285 =
                    COERCE_AS(__typeof__(v285),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v292 =
                    COERCE_AS(__typeof__(v292),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v47 = v324;
            v48 = v323;
            v70 = v318;
            v69 = v424;
            v68 = v426;
            v67 = v428;
            v57 = v430;
            v49 = v322;
            v65 = v317;
            v66 = v316;
            v55 = v319;
            v50 = v321;
            v61 = v418;
            v11 = v420;
            v62 = v422;
            v44 = v320;
            v53 = v313;
            v45 = v416;
            v60 = v414;
          }
          else {
            if ((v71 & 1) == 0) {
              v72 = *v475;
              v73 = v475[2];
              v470[1] = v475[1];
              v470[2] = v73;
              *v470 = v72;
              goto LABEL_435;
            }
            v427 = v68;
            v429 = v67;
            v354 = v60;
            v431 = v57;
            v432 = v63;
            v421 = v65;
            v423 = v55;
            v419 = v70;
            v425 = v69;
            v417 = v47;
            v433 = v59;
            v434 = v58;
            v415 = v53;
            v435 = v43;
            v436 = v42;
            GameRoutine_64df20(v470, *(_QWORD*)(a1 + 104), *(_QWORD*)(a1 + 96)),
                v227 =
                    COERCE_AS(__typeof__(v227),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v238 =
                    COERCE_AS(__typeof__(v238),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v253 =
                    COERCE_AS(__typeof__(v253),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v268 =
                    COERCE_AS(__typeof__(v268),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v285 =
                    COERCE_AS(__typeof__(v285),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v292 =
                    COERCE_AS(__typeof__(v292),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v47 = v417;
            v53 = v415;
            v70 = v419;
            v60 = v354;
            v69 = v425;
            v68 = v427;
            v67 = v429;
            v57 = v431;
            v65 = v421;
            v55 = v423;
          }
          v59 = v433;
          v58 = v434;
          v43 = v435;
          v42 = v436;
          v63 = v432;
        LABEL_435:
          *(_DWORD*)(a2 + 1112) = v46;
          *(_DWORD*)(a2 + 1188) = v48;
          PSEUDO_LOW_LANE64(v9, n64_u64, v438);
          PSEUDO_LOW_LANE64(v8, n64_u64, v439);
          v6 = 1;
          *(_DWORD*)(a2 + 1192) = v49;
          v13 = v437;
          *(_DWORD*)(a2 + 1244) = v51;
          PSEUDO_LOW_LANE64(v7, n64_u64, v442);
          *(_DWORD*)(a2 + 1268) = v52;
          PSEUDO_LOW_LANE64(v10, n64_u64, v451);
          *(_BYTE*)(a2 + 1056) = v53;
          *(_OWORD*)(a2 + 1072) = v42;
          *(_OWORD*)(a2 + 1088) = v43;
          *(_DWORD*)(a2 + 1104) = v45;
          *(_DWORD*)(a2 + 1108) = v44;
          v4 = 0x1.c000000000000p+0f;
          *(_DWORD*)(a2 + 1116) = v60;
          *(_DWORD*)(a2 + 1120) = v61;
          *(_BYTE*)(a2 + 1136) = v54;
          *(_OWORD*)(a2 + 1152) = v58;
          *(_OWORD*)(a2 + 1168) = v59;
          *(_DWORD*)(a2 + 1184) = v47;
          *(_DWORD*)(a2 + 1196) = v11;
          LOBYTE(v11) = 1;
          *(_DWORD*)(a2 + 1200) = v62;
          *(_BYTE*)(a2 + 1216) = v55;
          *(_DWORD*)(a2 + 1220) = v63;
          *(_DWORD*)(a2 + 1224) = v64;
          *(_DWORD*)(a2 + 1228) = v66;
          *(_DWORD*)(a2 + 1232) = v65;
          *(_DWORD*)(a2 + 1236) = v50;
          v3 = 0x1.0000000000000p+0f;
          *(_BYTE*)(a2 + 1240) = v56;
          *(_BYTE*)(a2 + 1248) = v57;
          *(_DWORD*)(a2 + 1252) = v67;
          *(_DWORD*)(a2 + 1256) = v68;
          *(_DWORD*)(a2 + 1260) = v69;
          *(_DWORD*)(a2 + 1264) = v70;
          *(_DWORD*)a1 = 10;
        }
        continue;
      }
      return;
    case 0xA:
      v30 = *(__int64**)(a2 + 128);
      v31 = *(__int64**)(a2 + 136);
      if (v30 != v31) {
        v32 = 0;
        do {
          v34 = (__int64*)*v30;
          if (*(_BYTE*)(*v30 + 120) == 1) {
            v35 = *v34;
            nn_os_AcquireReadLock(*v34 + 696),
                v227 =
                    COERCE_AS(__typeof__(v227),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v238 =
                    COERCE_AS(__typeof__(v238),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v253 =
                    COERCE_AS(__typeof__(v253),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v268 =
                    COERCE_AS(__typeof__(v268),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v285 =
                    COERCE_AS(__typeof__(v285),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v292 =
                    COERCE_AS(__typeof__(v292),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v36 = *(_DWORD*)(v35 + 656);
            nn_os_ReleaseReadLock(v35 + 696),
                v227 =
                    COERCE_AS(__typeof__(v227),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v238 =
                    COERCE_AS(__typeof__(v238),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v253 =
                    COERCE_AS(__typeof__(v253),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v268 =
                    COERCE_AS(__typeof__(v268),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v285 =
                    COERCE_AS(__typeof__(v285),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v292 =
                    COERCE_AS(__typeof__(v292),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((v36 & 8) != 0) {
              v37 = GameRoutine_5fc1f0(*(_QWORD*)(*v34 + 592)),
              v227 = COERCE_AS(__typeof__(v227),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v238 = COERCE_AS(__typeof__(v238),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v253 = COERCE_AS(__typeof__(v253),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v268 = COERCE_AS(__typeof__(v268),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v285 = COERCE_AS(__typeof__(v285),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v292 = COERCE_AS(__typeof__(v292),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v34[1] = v37;
              v34[11] = *(_QWORD*)(**(_QWORD**)(v37 + 40) + 144LL);
              *((_WORD*)v34 + 60) = 256;
            }
          }
          v33 = (__int64*)*v30++;
          v32 |= *((_BYTE*)v33 + 121) ^ 1;
        } while (v30 != v31);
        if ((v32 & 1) != 0) {
          return;
        }
      }
      v29 = 11;
      goto LABEL_89;
    case 0xB:
      v24 = *(_QWORD*)(a1 + 136);
      if (v24 != 0) {
        GameRoutine_634d80(*(_QWORD*)(v24 + 8), v24),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v25 = *(_QWORD*)(a1 + 144);
      *(_QWORD*)(a1 + 136) = 0;
      if (v25 != 0) {
        GameRoutine_634d80(*(_QWORD*)(v25 + 8), v25),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v26 = *(_QWORD*)(a1 + 152);
      *(_QWORD*)(a1 + 144) = 0;
      if (v26 != 0) {
        GameRoutine_634d80(*(_QWORD*)(v26 + 8), v26),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v27 = *(_QWORD*)(a1 + 160);
      *(_QWORD*)(a1 + 152) = 0;
      if (v27 != 0) {
        GameRoutine_634d80(*(_QWORD*)(v27 + 8), v27),
            v227 = COERCE_AS(__typeof__(v227),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v238 = COERCE_AS(__typeof__(v238),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v253 = COERCE_AS(__typeof__(v253),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v268 = COERCE_AS(__typeof__(v268),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v285 = COERCE_AS(__typeof__(v285),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v292 = COERCE_AS(__typeof__(v292),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v28 = *(_DWORD*)(a1 + 4);
      *(_QWORD*)(a1 + 160) = 0;
      if (v28 != 0) {
        v29 = 3;
      }
      else {
        v29 = 2;
      }
      goto LABEL_89;
    default:
      v6 = 1;
      if ((v20 & 1) == 0) {
        return;
      }
      continue;
    }
  }
}

#pragma GCC visibility pop
