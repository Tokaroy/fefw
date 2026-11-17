#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64* GameRoutine_b3f6c0(_QWORD*, const char*);
__int64* GameRoutine_b3f800(_QWORD*, const char*);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 ResourceBuilder_b528e0(__int64*, unsigned __int8*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_templates_a93ea0(float*, unsigned __int8*, __int64, __int64**);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _DWORD GameData_1b5f120[3];
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN** GameData_212e4d8[2];
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int128 GameData_1a83750;
extern __int64 (*GameData_1fc1458[])();
extern __int64 (*GameData_1fc5228[])();
extern __int64 (*gfx_settings_BaseParamInstance_vtable)();
extern __int64 (*gfx_settings_Float_vtable[])();
extern __int64 (*gfxa_TranslucencySetting_vtable[])();
extern __int64* GameData_212e548[27];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_652ba0(float32x4_t*, float, float);
float exp2f(float);
float tanf(float);
void TranslucencySetting_Destructor(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a9fd80();
void __attribute__((noreturn)) GameRoutine_aa0e00();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void gfxa_a9d8c0_alt1(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7, char a8, float a9);
void gfxa_b44060(__int64 a1, int a2, __int64* a3);
void gfxa_b52720(__int64 a1, __int64* a2, __int64 a3);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
float GameRoutine_1a0a8c0(float);
float GameRoutine_1a0a8d0(float);
float scene_652ba0(float32x4_t*, float, float);
__int64 gfxa_a9d8c0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, char a8, float a9);

__int64 gfxa_a9d8c0(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6, __int64 a7, char a8, float a9)
{
  int v9;
  int v10;
  _DWORD* v11;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int128 v42;
  __int64* v46;
  __int64 v47;
  int v48;
  unsigned __int64 v49;
  float v50;
  signed int v51;
  float v52;
  int v53;
  float v54;
  float v55;
  unsigned int v56;
  float v57;
  unsigned int v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  unsigned __int64 v64;
  float v65;
  int32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  float64x2_t v69;
  float64x2_t v70;
  int32x4_t v71;
  int32x4_t v72;
  int8x16_t v73;
  int32x4_t v74;
  int32x4_t v75;
  int32x4_t v76;
  int32x4_t v77;
  int32x4_t v78;
  int32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  int8x16_t v82;
  int8x16_t v83;
  float32x4_t v84;
  float32x4_t v85;
  int8x16_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float64x2_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  int8x16_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  int8x16_t v110;
  float32x4_t v111;
  int32x4_t v112;
  __n128 v113;
  int32x4_t v114;
  int32x4_t v115;
  __n128 v116;
  __n128 v117;
  __n128 v118;
  __int64 v119;
  int v120;
  float v121;
  float v122;
  float v123;
  float v124;
  int32x4_t v125;
  int32x4_t v126;
  __n128 v127;
  int32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  __n128 v136;
  __n128 v137;
  __n128 v138;
  __n128 v139;
  float32x4_t v140;
  int32x4_t v141;
  __n128 v142;
  __n128 v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  __int64 v153;
  __int64 v154;
  int32x4_t* v155;
  __int64 v156;
  int32x4_t v157;
  int32x4_t v158;
  int32x4_t v159;
  int32x4_t v160;
  int32x4_t v161;
  int32x4_t v162;
  float32x4_t v163;
  int32x4_t v164;
  int32x4_t v165;
  int8x16_t v166;
  int8x16_t v167;
  int8x16_t v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x4_t v171;
  int8x16_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x4_t v175;
  float32x4_t v176;
  float32x4_t v177;
  float32x4_t v178;
  float32x4_t v179;
  float32x4_t v180;
  float32x4_t v181;
  float32x4_t v182;
  float32x4_t v183;
  float32x4_t v184;
  float32x4_t v185;
  float32x4_t v186;
  float32x4_t v187;
  int8x16_t v188;
  float32x4_t v189;
  float32x4_t v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x4_t v193;
  int8x16_t v194;
  float32x4_t v195;
  int32x4_t v196;
  int32x4_t v197;
  float v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64* v202;
  float32x4_t* v203;
  __int64* v204;
  _QWORD* v205;
  _BYTE* v206;
  _BYTE* v207;
  __int64 v208;
  __int64 v209;
  float v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  float32x4_t v214;
  __int64 v215;
  float v216;
  __int64 v217;
  float32x4_t v218;
  unsigned __int64 v219;
  float32x4_t v220;
  __int64 v221;
  float v222;
  int v223;
  float32x4_t v224;
  int8x16_t v225;
  int8x16_t v226;
  int8x16_t v227;
  unsigned __int32 v228;
  int v229;
  float32x4_t* v230;
  float v231;
  unsigned __int64 v232;
  __int64 v233;
  __int64 v234;
  float v235;
  unsigned __int64 v236;
  __int64 v237;
  float v238;
  float v239;
  __int64 v240;
  float v241;
  __int64 v242;
  int* v243;
  float v244;
  float v245;
  float v246;
  float v247;
  unsigned __int64 v248;
  __int64 v249;
  float v250;
  __int64 v251;
  int v252;
  __int64 v253;
  float v254;
  float v255;
  __int64 v256;
  int v257;
  int* v258;
  int v259;
  __int64 v260;
  float v261;
  __int64 v262;
  int v263;
  __int64 v264;
  int v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  float v270;
  int v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  float32x4_t v278;
  int8x16_t v279;
  int8x16_t v280;
  int8x16_t v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  float v286;
  __int64 v287;
  __int64 v288;
  float v289;
  __int64 v290;
  float v291;
  float v292;
  __int64 v293;
  float v294;
  unsigned int v295;
  int v296;
  __int64 v297;
  float v298;
  __int64 v299;
  float v300;
  float v301;
  float v302;
  __int64 v303;
  int v304;
  __int64 v305;
  int v306;
  int v307;
  __int64 v308;
  __int64 v309;
  unsigned __int8 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  int v316;
  int v317;
  bool v318;
  __int64 v319;
  __int64 v320;
  float v321;
  _BOOL4 v322;
  bool v323;
  __int64* v324;
  int v325;
  char v326;
  __int64 (**v327)(__int64, __int64, __int64);
  __int64 v328;
  float v329;
  int v330;
  float v331;
  __int64 v332;
  int v333;
  __int64 v334;
  float v335;
  __int64 v336;
  __int64 v337;
  __int128 v338;
  __int64 v339;
  __int64 v340;
  int v341;
  float32x4_t v342;
  int8x16_t v343;
  int8x16_t v344;
  int8x16_t v345;
  unsigned __int32 v346;
  __int64 v347;
  float v348;
  float32x4_t v349;
  float v350;
  int8x16_t v351;
  float v352;
  float32x4_t v353;
  __int64 v354;
  int v355;
  float32x4_t v356;
  int8x16_t v357;
  int8x16_t v358;
  int8x16_t v359;
  unsigned __int32 v360;
  __int64 v361;
  float v362;
  float v363;
  int8x16_t v364;
  float v365;
  float32x4_t v366;
  __int64 v367;
  char v368;
  unsigned __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  unsigned __int64 v373;
  __int64 v374;
  unsigned __int64 v375;
  char v376;
  __int64 v377;
  __int64 v378;
  char v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  __int64 v384;
  __int64 v385;
  char v386;
  int v387;
  __int64 v388;
  __int64 v389;
  char v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  char v397;
  int v398;
  __int64 v399;
  __int64 v400;
  char v401;
  __int64 v402;
  __int64 v403;
  __int64 v404;
  __int64 v405;
  __int64 v406;
  __int64 v407;
  int v408;
  char v409;
  __int64 v410;
  __int64 v411;
  char v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  int v419;
  char v420;
  __int64 v421;
  __int64 v422;
  char v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  int v430;
  char v431;
  __int64 v432;
  __int64 v433;
  char v434;
  __int64 v435;
  __int64 v436;
  __int64 v437;
  __int64 v438;
  __int64 v439;
  __int64 v440;
  int v441;
  char v442;
  __int64 v443;
  __int64 v444;
  char v445;
  __int64 v446;
  __int64 v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  float v452;
  __int64 v453;
  __int64 v454;
  float v455;
  __int64 v456;
  float v457;
  __int64 v458;
  float v459;
  __int64 v460;
  float v461;
  int* v462;
  int v463;
  __int64 v464;
  unsigned __int32 v465;
  __int64 (**v466)(__int64, __int64, __int64);
  unsigned int* v467;
  unsigned int* v468;
  __int64 v469;
  __int64 v470;
  __int64 v471;
  __int64* i;
  float v473;
  float v474;
  _DWORD* v475;
  __int64 v476;
  __int64 v477;
  float v478;
  __int64 v479;
  __int64 v480;
  float v481;
  __int64 v482;
  __int64 v483;
  float v485;
  float v486;
  float32x4_t v487;
  float v488;
  float v489;
  int32x4_t v491;
  int32x4_t v492;
  float v493;
  int32x4_t v494;
  int32x4_t v495;
  char v496;
  __n128 v497;
  int32x4_t v498;
  float v499;
  int32x4_t v500;
  int32x4_t v501;
  int v502;
  float v504;
  __int64 v505;
  float32x4_t v506;
  unsigned __int64 v507;
  struct {
    float32x4_t v509;
    __int64 v510;
    __int64 v511;
    __int64 v512;
    __int64 v513;
    unsigned __int64 v514;
    __int64 (**v515)();
  } v509_;
  __int64 v516[3];
  char v517;
  __int64 v518;
  __int64 v519;
  __int64 v520;
  __int64 v521;
  int v522;
  __int64 (**v523)();
  __int64 v524[3];
  char v525;
  __int64 v526;
  __int64 v527;
  __int64 v528;
  __int64 v529;
  int v530;
  __int64 (**v531)();
  __int64 v532[3];
  char v533;
  __int64 v534;
  __int64 v535;
  __int64 v536;
  __int64 v537;
  int v538;
  __int64 (**v539)();
  __int64 v540[3];
  char v541;
  __int64 v542;
  __int64 v543;
  __int64 v544;
  __int64 v545;
  int v546;
  __int64 (**v547)();
  __int64 v548[3];
  char v549;
  __int64 v550;
  __int64 v551;
  __int64 v552;
  __int64 v553;
  int v554;
  __int64 (**v555)();
  __int64 v556[3];
  char v557;
  __int64 v558;
  __int64 v559;
  __int64 v560;
  __int64 v561;
  int v562;
  __int64 (**v563)();
  __int64 v564[3];
  char v565;
  __int64 v566;
  __int64 v567;
  __int64 v568;
  __int64 v569;
  int v570;
  float32x4_t v571;
  float32x4_t* v572;
  float32x4x4_t v573;
  float32x4x4_t v574;
  float32x4x4_t v575;
  float32x4x4_t v576;
  float32x4x4_t v577;
  float32x4x4_t v578;
  float32x4x4_t v579;

  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v9 = a1[14];
  v10 = a1[28];
  v11 = a1 + 10;
  v318 = v9 < -1;
  v18 = ((_BYTE)v9 + 1) & 1;
  if (v318) {
    v18 = -v18;
  }
  v318 = v10 < -1;
  v19 = ((_BYTE)v10 + 1) & 1;
  a1[14] = v18;
  v20 = *(_QWORD*)&v11[2 * v18];
  if (v318) {
    v19 = -v19;
  }
  a1[28] = v19;
  v21 = a1[42];
  v318 = v21 < -1;
  v22 = ((_BYTE)v21 + 1) & 1;
  if (v318) {
    v22 = -v22;
  }
  a1[42] = v22;
  v23 = a1[56];
  v318 = v23 < -1;
  v24 = ((_BYTE)v23 + 1) & 1;
  if (v318) {
    v24 = -v24;
  }
  a1[56] = v24;
  v25 = a1[70];
  v318 = v25 < -1;
  v26 = ((_BYTE)v25 + 1) & 1;
  if (v318) {
    v26 = -v26;
  }
  a1[70] = v26;
  v27 = a1[84];
  v318 = v27 < -1;
  v28 = ((_BYTE)v27 + 1) & 1;
  if (v318) {
    v28 = -v28;
  }
  a1[84] = v28;
  v29 = a1[98];
  v318 = v29 < -1;
  v30 = ((_BYTE)v29 + 1) & 1;
  if (v318) {
    v30 = -v30;
  }
  a1[98] = v30;
  v31 = a1[112];
  v318 = v31 < -1;
  v32 = ((_BYTE)v31 + 1) & 1;
  if (v318) {
    v32 = -v32;
  }
  a1[112] = v32;
  v33 = a1[314];
  v318 = v33 < -1;
  v34 = ((_BYTE)v33 + 1) & 1;
  if (v318) {
    v34 = -v34;
  }
  a1[314] = v34;
  v35 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 3) + 8LL) + 160LL);
  v36 = 128;
  if (*(_BYTE*)(v35 + 96) != 0) {
    v36 = 92;
  }
  v37 = *(_DWORD*)(v35 + v36);
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 56LL))(v20),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *((_QWORD*)a1 + 148) = *((_QWORD*)a1 + 132);
  *((_QWORD*)a1 + 149) = *((_QWORD*)a1 + 133);
  *((_QWORD*)a1 + 150) = *((_QWORD*)a1 + 134);
  *((_QWORD*)a1 + 151) = *((_QWORD*)a1 + 135);
  *((_QWORD*)a1 + 144) = *((_QWORD*)a1 + 128);
  *((_QWORD*)a1 + 145) = *((_QWORD*)a1 + 129);
  *((_QWORD*)a1 + 146) = *((_QWORD*)a1 + 130);
  *((_QWORD*)a1 + 147) = *((_QWORD*)a1 + 131);
  *((_QWORD*)a1 + 140) = *((_QWORD*)a1 + 124);
  *((_QWORD*)a1 + 141) = *((_QWORD*)a1 + 125);
  *((_QWORD*)a1 + 142) = *((_QWORD*)a1 + 126);
  *((_QWORD*)a1 + 143) = *((_QWORD*)a1 + 127);
  *((_QWORD*)a1 + 136) = *((_QWORD*)a1 + 120);
  *((_QWORD*)a1 + 137) = *((_QWORD*)a1 + 121);
  *((_QWORD*)a1 + 138) = *((_QWORD*)a1 + 122);
  *((_QWORD*)a1 + 139) = *((_QWORD*)a1 + 123);
  if ((a8 & 1) == 0) {
    *(_QWORD*)(a1 + 307) = *(_QWORD*)(a1 + 305);
  }
  (*(void (**)(__int64))(*(_QWORD*)a3 + 16LL))(a3),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *((_OWORD*)a1 + 64) = v39;
  *((_OWORD*)a1 + 65) = v40;
  *((_OWORD*)a1 + 66) = v41;
  *((_OWORD*)a1 + 67) = v42;
  (*(void (**)(__int64))(*(_QWORD*)a3 + 24LL))(a3),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v46 = (__int64*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  else {
    v46 = (__int64*)(*(_QWORD*)a1 + 13304LL);
  }
  if ((a8 & 1) != 0 || v37 != 1) {
    v62 = 0x0.0p+0f;
    v63 = 0x0.0p+0f;
    *(_QWORD*)(a1 + 305) = 0;
  }
  else {
    v47 = *v46;
    v48 = a1[304];
    v49 = DWORDn(*v46, sizeof(*v46) / 4 - 1);
    v50 = (float)(int)v47;
    v51 = v48 + 1;
    v52 = (float)*(int*)(*(_QWORD*)a1 + 13312LL) / v50;
    v53 = (int)(float)(v52 * (float)(v52 * 0x1.0000000000000p+3f));
    if (v48 < 0) {
      v59 = -0x1.0000000000000p-1f;
      v61 = -0x1.0000000000000p-1f;
      a1[305] = -1090519040;
    }
    else {
      v54 = 0x1.0000000000000p+0f;
      v55 = 0x0.0p+0f;
      v56 = v48 + 1;
      do {
        v54 = v54 * 0x1.0000000000000p-1f;
        v55 = v55 + (float)(v54 * (float)(v56 & 1));
        v318 = v56 > 1;
        v56 >>= 1;
      } while (v318);
      v57 = 0x1.0000000000000p+0f;
      v58 = v51;
      v59 = v55 + -0x1.0000000000000p-1f;
      v60 = 0x0.0p+0f;
      *((float*)a1 + 305) = v59;
      do {
        v57 = v57 / 0x1.8000000000000p+1f;
        v60 = v60 + (float)(v57 * (float)(v58 % 3));
        v318 = v58 > 2;
        v58 /= 3u;
      } while (v318);
      v61 = v60 + -0x1.0000000000000p-1f;
    }
    *((float*)a1 + 306) = v61;
    *(float*)&v64 = (float)(v59 + v59) / v50;
    v65 = *((float*)a1 + 307);
    a1[304] = v51 % v53;
    *((float*)&v64 + 1) =
        (float)(v61 * -0x1.0000000000000p+1f) / (float)(int)v49;
    v63 = (float)(v65 - v59) / v50;
    v573.val[2] = vsubq_f32(v573.val[2], COERCE_AS(float32x4_t, v64));
    v62 = (float)(*((float*)a1 + 308) - v61) / (float)(int)v49;
  }
  v66 = *((int32x4_t*)a1 + 67);
  v67 = *((int32x4_t*)a1 + 64);
  v68 = *((int32x4_t*)a1 + 65);
  LANES128(v69).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v69).n128_u64[1] = 0x3F8000003F800000LL;
  v70 = vnegq_f64(v69);
  v71 = *((int32x4_t*)a1 + 66);
  v72 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v573.val[0], LANES128(v67).n128_f32[0]),
                     v573.val[1],
                     COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]), 1),
      v573.val[2], v67, 2);
  v73 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v573.val[0], LANES128(v68).n128_f32[0]),
                     v573.val[1],
                     COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]), 1),
      v573.val[2], v68, 2);
  v74 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v573.val[0], LANES128(v71).n128_f32[0]),
                     v573.val[1],
                     COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]), 1),
      v573.val[2], v71, 2);
  v75 = vaddq_f32(
      v573.val[3],
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v573.val[0], LANES128(v66).n128_f32[0]),
                         v573.val[1],
                         COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]), 1),
          v573.val[2], v66, 2));
  v76 = vzip1q_s32(v72, v74);
  v77 = vzip2q_s32(v72, v74);
  *((int32x4_t*)a1 + 60) = v72;
  *((int8x16_t*)a1 + 61) = v73;
  v78 = vzip1q_s32(v73, v75);
  *((int32x4_t*)a1 + 62) = v74;
  *((int32x4_t*)a1 + 63) = v75;
  v79 = vzip2q_s32(v73, v75);
  v80 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v72).n128_u64[0]), 0);
  vst4q_f32((float*)(v38 + 48), v573);
  LANES128(v80).n128_u32[0] = LANES128(v73).n128_u32[0];
  v81 = vzip1q_s32(v76, v78);
  v82 = vzip1q_s32(v77, v79);
  v83 = vzip2q_s32(v77, v79);
  LANES128(v84).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v79).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v83, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v84).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0]), 0);
  LANES128(v85).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v85).n128_i8[8] =
      vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v86 = vzip2q_s32(v76, v78);
  v87 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v72).n128_u64[0]), 1);
  LANES128(v87).n128_u32[0] = LANES128(v73).n128_u32[1];
  LANES128(v78).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v88).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v78).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0]), 1);
  LANES128(v89).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v88).n128_i8[8] =
      vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v90 = vdupq_laneq_s32(v72, 2);
  LANES128(v90).n128_u32[0] = LANES128(v73).n128_u32[2];
  v91 = vextq_s8(v73, vdupq_laneq_s32(v72, 3), 0xCu);
  *(int32x2_t*)&LANES128(v89).n128_i8[8] = vdup_laneq_s32(v73, 2);
  LANES128(v92).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v92).n128_i8[8] =
      vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v82).n128_u64[0] = LANES64_OF(vdup_laneq_s32(v73, 3)).n64_u64[0];
  LANES128(v73).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v83, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v79).n128_u64[1] = LANES128(v82).n128_u64[0];
  *(int8x8_t*)&LANES128(v73).n128_i8[8] =
      vqtbl1_s8(v83, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v93 = vsubq_f32(vmulq_f32(v89, v73), vmulq_f32(v79, v92));
  v94 = vsubq_f32(vmulq_f32(v90, v73), vmulq_f32(v91, v92));
  v95 = vsubq_f32(vmulq_f32(v90, v79), vmulq_f32(v91, v89));
  v96 = vmlsq_f32(vmulq_f32(v87, v93), v94, v78);
  v97 = vmlsq_f32(vmulq_f32(v80, v93), v94, v84);
  LANES128(v94).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v94).n128_u64[1] = 0xBF800000BF800000LL;
  v98 = vmlaq_f32(v97, v95, v85);
  v99 = vnegq_f64(v94);
  v100 = vsubq_f32(vmulq_f32(v84, v88), vmulq_f32(v78, v85));
  v101 = vsubq_f32(vmulq_f32(v80, v88), vmulq_f32(v87, v85));
  v102 = vsubq_f32(vmulq_f32(v80, v78), vmulq_f32(v84, v87));
  v103 = vmulq_f32(vmlaq_f32(v96, v95, v88), v70);
  v104 = vmulq_f32(v81, v103);
  v105 = vmlaq_f32(vmlsq_f32(vmulq_f32(v91, v100), v101, v79), v102, v73);
  v106 = vmulq_f32(
      vmlaq_f32(vmlsq_f32(vmulq_f32(v90, v100), v101, v89), v102, v92), v99);
  LANES128(v104).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
          .n64_u64[0];
  LANES128(v104).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
          .n64_u64[0];
  LANES128(v104).n128_u64[1] = LANES128(v104).n128_u64[0];
  v107 = vrecpeq_f32(v104);
  v108 = vmulq_f32(v107, vrecpsq_f32(v107, v104));
  v109 = vrecpsq_f32(v108, v104);
  v110 = vceqzq_f32(v104);
  v111 = vmulq_f32(v108, v109);
  v578.val[0] = vbicq_s8(vmulq_f32(v111, v103), v110);
  v578.val[1] = vbicq_s8(vmulq_f32(v111, vmulq_f32(v98, v99)), v110);
  v578.val[2] = vbicq_s8(vmulq_f32(vmulq_f32(v105, v70), v111), v110);
  v578.val[3] = vbicq_s8(vmulq_f32(v106, v111), v110);
  v112 = vzip1q_s32(v67, v71);
  v113 = vzip2q_s32(v67, v71);
  v114 = vzip1q_s32(v68, v66);
  v115 = vzip2q_s32(v68, v66);
  v116 = vzip1q_s32(v112, v114);
  v117 = vzip2q_s32(v112, v114);
  *(__n128*)v38 = v116;
  *(__n128*)(v38 + 16) = v117;
  *(int32x4_t*)(v38 + 32) = vzip1q_s32(v113, v115);
  vst4q_f32((float*)(v38 + 112), *((float32x4x4_t*)a1 + 15));
  v574 = *(float32x4x4_t*)((_BYTE*)a1 + 18);
  v118 = vzip1q_s32(v574.val[0], v574.val[2]);
  v574.val[0] = vzip2q_s32(v574.val[0], v574.val[2]);
  v574.val[2] = vzip1q_s32(v574.val[1], v574.val[3]);
  *(int32x4_t*)(v38 + 176) = vzip1q_s32(v118, v574.val[2]);
  *(int32x4_t*)(v38 + 192) = vzip2q_s32(v118, v574.val[2]);
  *(int32x4_t*)(v38 + 208) =
      vzip1q_s32(v574.val[0], vzip2q_s32(v574.val[1], v574.val[3]));
  v575 = *(float32x4x4_t*)((_BYTE*)a1 + 17);
  vst4q_f32((float*)(v38 + 224), v575);
  vst4q_f32((float*)(v38 + 288), v578);
  (*(void (**)(__int64, __n128, __n128, __n128, __n128, __n128, __n128, __n128,
               __n128))(*(_QWORD*)a3 + 40LL))(a3, v575.val[0], v575.val[1],
                                              v575.val[2], v575.val[3], v118,
                                              v113, v116, v117),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v38 + 352) = v119;
  *(_DWORD*)(v38 + 360) = v120;
  (*(void (**)(__int64))(*(_QWORD*)a3 + 72LL))(a3),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(float*)(v38 +
            364) = GameRoutine_1a0a8c0(v121 * 0x1.0000000000000p-1f),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v121 =
                COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
            v122 =
                COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
            v124 =
                COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
            v125 = COERCE_AS(__typeof__(v125),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v144 =
                COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
            v149 =
                COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
            v151 =
                COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v338 = COERCE_AS(__typeof__(v338),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v339 = COERCE_AS(__typeof__(v339),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_DWORD*)(v38 + 368) = 0;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 48LL))(a3) & 1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v123 = v122;
    (*(void (**)(__int64))(*(_QWORD*)a3 + 64LL))(a3),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(float*)(v38 + 368) = v123 / v124;
  }
  *(_DWORD*)(v38 + 372) = 0;
  *(float*)(v38 + 376) = v63;
  *(float*)(v38 + 380) = v62;
  (*(void (**)(__int64))(*(_QWORD*)a4 + 16LL))(a4),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v491 = v125;
  v494 = v126;
  v497 = v127;
  v500 = v128;
  (*(void (**)(__int64))(*(_QWORD*)a4 + 24LL))(a4),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v130 = vmulq_n_f32(v129, LANES128(v491).n128_f32[0]);
  v131 = vmulq_n_f32(v129, LANES128(v494).n128_f32[0]);
  v132 = vmulq_n_f32(v129, LANES128(v497).n128_f32[0]);
  v135 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v129, LANES128(v500).n128_f32[0]), v133,
                     COERCE_AS(float32x2_t, LANES128(v500).n128_u64[0]), 1),
      v134, v500, 2);
  v136 = vmlaq_laneq_f32(
      vmlaq_lane_f32(v130, v133,
                     COERCE_AS(float32x2_t, LANES128(v491).n128_u64[0]), 1),
      v134, v491, 2);
  v137 = vmlaq_laneq_f32(
      vmlaq_lane_f32(v131, v133,
                     COERCE_AS(float32x2_t, LANES128(v494).n128_u64[0]), 1),
      v134, v494, 2);
  v138 = vmlaq_laneq_f32(
      vmlaq_lane_f32(v132, v133,
                     COERCE_AS(float32x2_t, LANES128(v497).n128_u64[0]), 1),
      v134, v497, 2);
  v139 = vzip2q_s32(v497, v500);
  v141 = vaddq_f32(v140, v135);
  *(_QWORD*)(v38 + 384) = LANES128_OF(vzip2q_s32(v491, v494)).n128_u64[0];
  *(_QWORD*)(v38 + 392) = LANES128(v139).n128_u64[0];
  *(int32x2_t*)(v38 + 416) =
      vzip1_s32(COERCE_AS(int32x2_t, LANES128(v136).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v137).n128_u64[0]));
  *(int32x2_t*)(v38 + 424) =
      vzip1_s32(COERCE_AS(int32x2_t, LANES128(v138).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v141).n128_u64[0]));
  LANES128(v139).n128_u64[0] =
      LANES64_OF(vzip2_s32(COERCE_AS(int32x2_t, LANES128(v138).n128_u64[0]),
                           COERCE_AS(int32x2_t, LANES128(v141).n128_u64[0])))
          .n64_u64[0];
  *(int32x2_t*)(v38 + 432) =
      vzip2_s32(COERCE_AS(int32x2_t, LANES128(v136).n128_u64[0]),
                COERCE_AS(int32x2_t, LANES128(v137).n128_u64[0]));
  *(_QWORD*)(v38 + 440) = LANES128(v139).n128_u64[0];
  v142 = vuzp2q_s32(vuzp2q_s32(v138, v141), v138);
  v143 = vuzp2q_s32(vuzp2q_s32(v136, v137), v136);
  *(_QWORD*)(v38 + 400) = LANES128(v143).n128_u64[0];
  *(_QWORD*)(v38 + 408) = LANES128(v142).n128_u64[0];
  (*(void (**)(__int64, __n128, __n128, __n128, double, __n128, __n128, __n128,
               __n128))(*(_QWORD*)a3 + 64LL))(
      a3, v142, v143, v139, LANES128(v140).n128_f64[0], v136, v137, v138, v497),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v145 = v144;
  (*(void (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v147 = v145 / v146;
  *(_DWORD*)(v38 + 452) = 1065353216;
  v148 = v147 + -0x1.0000000000000p+0f;
  *(float*)(v38 + 448) = v147 + -0x1.0000000000000p+0f;
  (*(void (**)(__int64, float, float))(*(_QWORD*)a3 + 64LL))(
      a3, v147, -0x1.0000000000000p+0f),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v150 = v148 / v149;
  *(float*)(v38 + 456) = v150;
  (*(void (**)(__int64, float))(*(_QWORD*)a3 + 64LL))(a3, v150),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v152 = 0x1.0000000000000p+0f / v151;
  *(float*)(v38 + 460) = v152;
  (*(void (**)(__int64, float, float))(*(_QWORD*)v20 + 64LL))(
      v20, v152, 0x1.0000000000000p+0f),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v153 = *(_QWORD*)&v11[2 * a1[14]];
  v154 = *(_QWORD*)&a1[2 * a1[28] + 24];
  v155 = (int32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v154 + 56LL))(v154),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v156 = (*(__int64 (**)(__int64))(*(_QWORD*)v153 + 56LL))(v153),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  GameRoutine_1a0b950((__int64)v155, v156, 0x1D0u),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)a3 + 16LL))(a3),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v492 = v157;
  v495 = v158;
  v498 = v159;
  v501 = v160;
  (*(void (**)(__int64))(*(_QWORD*)a3 + 24LL))(a3),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  vst4q_f32((float*)&v155[3], v576);
  v577.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v576.val[0], LANES128(v492).n128_f32[0]),
                     v576.val[1],
                     COERCE_AS(float32x2_t, LANES128(v492).n128_u64[0]), 1),
      v576.val[2], v492, 2);
  v577.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v576.val[0], LANES128(v495).n128_f32[0]),
                     v576.val[1],
                     COERCE_AS(float32x2_t, LANES128(v495).n128_u64[0]), 1),
      v576.val[2], v495, 2);
  v577.val[2] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v576.val[0], LANES128(v498).n128_f32[0]),
                     v576.val[1],
                     COERCE_AS(float32x2_t, LANES128(v498).n128_u64[0]), 1),
      v576.val[2], v498, 2);
  v577.val[3] = vaddq_f32(
      v576.val[3],
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v576.val[0], LANES128(v501).n128_f32[0]),
                         v576.val[1],
                         COERCE_AS(float32x2_t, LANES128(v501).n128_u64[0]), 1),
          v576.val[2], v501, 2));
  v161 = vzip1q_s32(v577.val[0], v577.val[2]);
  v162 = vzip2q_s32(v577.val[0], v577.val[2]);
  v163 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v577.val[0]).n128_u64[0]),
                        0);
  LANES128(v163).n128_u32[0] = LANES128(v577.val[1]).n128_u32[0];
  v164 = vzip1q_s32(v577.val[1], v577.val[3]);
  v165 = vzip2q_s32(v577.val[1], v577.val[3]);
  vst4q_f32((float*)&v155[7], v577);
  v166 = vzip1q_s32(v161, v164);
  v167 = vzip1q_s32(v162, v165);
  v168 = vzip2q_s32(v162, v165);
  LANES128(v169).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v166, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v165).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v170).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v169).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v577.val[1]).n128_u64[0]), 0);
  LANES128(v171).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v166, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v170).n128_i8[8] =
      vqtbl1_s8(v168, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v171).n128_i8[8] =
      vqtbl1_s8(v166, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v172 = vzip2q_s32(v161, v164);
  v173 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v577.val[0]).n128_u64[0]),
                        1);
  LANES128(v173).n128_u32[0] = LANES128(v577.val[1]).n128_u32[1];
  LANES128(v164).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v174).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v164).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v577.val[1]).n128_u64[0]), 1);
  LANES128(v175).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v167, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v174).n128_i8[8] =
      vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v176 = vdupq_laneq_s32(v577.val[0], 2);
  LANES128(v176).n128_u32[0] = LANES128(v577.val[1]).n128_u32[2];
  *(int32x2_t*)&LANES128(v175).n128_i8[8] = vdup_laneq_s32(v577.val[1], 2);
  LANES128(v177).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v167, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v177).n128_i8[8] =
      vqtbl1_s8(v167, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int32x2_t*)&LANES128(v165).n128_i8[8] = vdup_laneq_s32(v577.val[1], 3);
  v178 = vextq_s8(v577.val[1], vdupq_laneq_s32(v577.val[0], 3), 0xCu);
  v179 = vsubq_f32(vmulq_f32(v175, v170), vmulq_f32(v165, v177));
  v180 = vsubq_f32(vmulq_f32(v176, v170), vmulq_f32(v178, v177));
  v181 = vsubq_f32(vmulq_f32(v176, v165), vmulq_f32(v178, v175));
  v182 = vmlsq_f32(vmulq_f32(v173, v179), v180, v164);
  v183 = vmlaq_f32(vmlsq_f32(vmulq_f32(v163, v179), v180, v169), v181, v171);
  v184 = vsubq_f32(vmulq_f32(v169, v174), vmulq_f32(v164, v171));
  v185 = vsubq_f32(vmulq_f32(v163, v174), vmulq_f32(v173, v171));
  v186 = vsubq_f32(vmulq_f32(v163, v164), vmulq_f32(v169, v173));
  v187 = vmulq_f32(vmlaq_f32(v182, v181, v174), v70);
  v188 = vmulq_f32(v166, v187);
  LANES128(v188).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v188, v188, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v188).n128_u64[0])))
          .n64_u64[0];
  v189 = vmlaq_f32(vmlsq_f32(vmulq_f32(v178, v184), v185, v165), v186, v170);
  LANES128(v188).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v188).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v188).n128_u64[0])))
          .n64_u64[0];
  v190 = vmulq_f32(
      vmlaq_f32(vmlsq_f32(vmulq_f32(v176, v184), v185, v175), v186, v177), v99);
  LANES128(v188).n128_u64[1] = LANES128(v188).n128_u64[0];
  v191 = vrecpeq_f32(v188);
  v192 = vmulq_f32(v191, vrecpsq_f32(v191, v188));
  v193 = vrecpsq_f32(v192, v188);
  v194 = vceqzq_f32(v188);
  v195 = vmulq_f32(v192, v193);
  v579.val[0] = vbicq_s8(vmulq_f32(v195, v187), v194);
  v579.val[1] = vbicq_s8(vmulq_f32(v195, vmulq_f32(v183, v99)), v194);
  v579.val[2] = vbicq_s8(vmulq_f32(v195, vmulq_f32(v189, v70)), v194);
  v196 = vzip1q_s32(v492, v498);
  v197 = vzip1q_s32(v495, v501);
  v579.val[3] = vbicq_s8(vmulq_f32(v195, v190), v194);
  vst4q_f32((float*)&v155[18], v579);
  *v155 = vzip1q_s32(v196, v197);
  v155[1] = vzip2q_s32(v196, v197);
  v155[2] = vzip1q_s32(vzip2q_s32(v492, v498), vzip2q_s32(v495, v501));
  (*(void (**)(__int64))(*(_QWORD*)v154 + 64LL))(v154),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if ((a8 & 1) != 0) {
    v198 = 0x0.0p+0f;
  }
  else {
    v198 = a9;
  }
  v505 = *(_QWORD*)&a1[2 * a1[42] + 38];
  v199 = (*(__int64 (**)(__int64, double, float))(*(_QWORD*)v505 + 56LL))(
      v505, 0x0.0p+0, a9),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v200 = *(_QWORD*)(a2 + 288);
  v201 = v199;
  v202 = GameRoutine_b3f6c0((_QWORD*)(v200 + 592), "Sun"),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v203 = (float32x4_t*)(v202 + 6);
  v204 = v202 + 12;
  if (*((_BYTE*)v202 + 112) == 0) {
    v204 = v202 + 6;
  }
  if (*((float*)v204 + 1) > 0x0.0p+0f) {
    v203 = (float32x4_t*)(GameRoutine_b3f800(
                              (_QWORD*)(*(_QWORD*)(a2 + 288) + 592LL), "Moon") +
                          6),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  v205 = *(_QWORD**)(*((_QWORD*)a1 + 3) + 8LL);
  v206 = (_BYTE*)*v205;
  v207 = (_BYTE*)v205[1];
  v208 = v205[15];
  if (*(_BYTE*)(v200 + 188) == 1) {
    v209 = v205[10];
    v210 = 0x1.0000000000000p+0f;
    v211 = 128;
    if (*(_BYTE*)(v209 + 96) != 0) {
      v211 = 92;
    }
    if (*(_DWORD*)(v209 + v211) == 1) {
      v212 = v205[11];
      v213 = 672;
      if (*(_BYTE*)(v212 + 640) != 0) {
        v213 = 636;
      }
      v210 =
          GameRoutine_1a0a8d0(*(float*)(v212 + v213) - *(float*)(v200 + 184)),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  else {
    v210 = 0x1.0000000000000p+0f;
  }
  v214 = vmulq_f32(v203[1], vdupq_n_s32(0x3C23D70Au));
  v215 = 128;
  if (v206[96] != 0) {
    v215 = 92;
  }
  v216 = *(float*)&v206[v215];
  LANES128(v214).n128_u32[3] = 0;
  v217 = 632;
  if (v207[600] != 0) {
    v217 = 596;
  }
  v218 = vmulq_n_f32(v214, v216);
  LANES128(v214).n128_u32[0] = *(_DWORD*)&v207[v217];
  if (LANES128(v214).n128_f32[0] < 0x0.0p+0f) {
    v219 = COERCE_UNSIGNED_INT(
        0x1.554c980000000p-2f *
        LANES128_OF(
            vaddq_f32(vdupq_laneq_s32(v218, 2),
                      vaddq_f32(v218, vdupq_lane_s32(
                                          COERCE_AS(int32x2_t,
                                                    LANES128(v218).n128_u64[0]),
                                          1))))
            .n128_f32[0]);
    LANES128(v220).n128_u64[0] = v219 | (v219 << 32);
    LANES128(v220).n128_u64[1] = v219;
    v218 =
        vmlsq_lane_f32(v218, vsubq_f32(v220, v218),
                       COERCE_AS(float32x2_t, LANES128(v214).n128_u64[0]), 0);
  }
  v506 = v218;
  v221 = 552;
  if (v207[520] != 0) {
    v221 = 516;
  }
  v222 = GameRoutine_1a0a8d0(*(float*)&v207[v221]),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v223 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  v224 = vmulq_n_f32(v506, v210 * v222);
  v571 = v224;
  if ((unsigned int)(v223 - 3) <= 3) {
    if ((unsigned int)(v223 - 5) > 1) {
      v225 = vmulq_f32(v224, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v225).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v225, v225, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v225).n128_u64[0])))
              .n64_u64[0];
      v226 = vmulq_f32(v224, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v226).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v226, v226, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v226).n128_u64[0])))
              .n64_u64[0];
      v227 = vmulq_f32(v224, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v227).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v227, v227, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0])))
              .n64_u64[0];
      v228 = LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0])))
                 .n64_u32[0];
      LANES128(v224).n128_u32[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v225).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v225).n128_u64[0])))
              .n64_u32[0];
      LANES128(v224).n128_u32[1] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v226).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v226).n128_u64[0])))
              .n64_u32[0];
      LANES128(v224).n128_u64[1] = v228;
    }
    else {
      LANES128(v224).n128_f32[0] =
          scene_652ba0(&v571, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  v229 = LANES128(v203[4]).n128_u8[0];
  v571 = v224;
  v230 = v203 + 3;
  v231 = v198 + *((float*)a1 + 234);
  if (v229 == 0) {
    v230 = v203;
  }
  v232 = LANES128(*(v230)).n128_u64[0];
  v233 = LANES128(*(v230)).n128_u32[2];
  if (v231 > 0x1.5179cc0000000p+16f) {
    v231 = v231 + -0x1.5179cc0000000p+16f;
  }
  *((float*)a1 + 234) = v231;
  *(_QWORD*)v201 = v232;
  *(_QWORD*)(v201 + 8) = v233;
  v234 = 1112;
  if (v207[1080] != 0) {
    v234 = 1076;
  }
  v235 = GameRoutine_1a0a8d0(*(float*)&v207[v234]),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v236 = LANES128(v571).n128_u32[2] | ((unsigned __int64)LODWORD(v235) << 32);
  *(_QWORD*)(v201 + 16) = LANES128(v571).n128_u64[0];
  *(_QWORD*)(v201 + 24) = v236;
  v237 = 288;
  if (v206[256] != 0) {
    v237 = 252;
  }
  v238 = v210 * (float)(*(float*)(v200 + 376) / 0x1.9000000000000p+6f);
  v239 = *(float*)&v206[v237];
  v240 = 208;
  if (v206[176] != 0) {
    v240 = 172;
  }
  v241 = *(float*)&v206[v240];
  v242 = 872;
  if (v207[840] != 0) {
    v242 = 836;
  }
  *(float*)(v201 +
            88) =
      (float)(v238 * v239) * GameRoutine_1a0a8d0(*(float*)&v207[v242]),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v121 =
                COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
            v122 =
                COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
            v124 =
                COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
            v125 = COERCE_AS(__typeof__(v125),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v144 =
                COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
            v149 =
                COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
            v151 =
                COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v338 = COERCE_AS(__typeof__(v338),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v339 = COERCE_AS(__typeof__(v339),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v243 = (int*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v243 = (int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v244 = (float)v243[1];
  *(float*)(v201 + 32) = (float)*v243;
  *(float*)(v201 + 36) = v244;
  *(_DWORD*)(v201 + 40) = a1[234];
  v245 = *((float*)a1 + 235);
  *(float*)(v201 + 44) = v245;
  v246 = *((float*)a1 + 234);
  *((float*)a1 + 235) = v246;
  v247 = v246 - v245;
  v248 = *(unsigned int*)(v200 + 472) |
         ((unsigned __int64)*(unsigned int*)(v200 + 480) << 32);
  *(_QWORD*)(v201 + 176) = *(_QWORD*)(v200 + 464);
  *(_QWORD*)(v201 + 184) = v248;
  v249 = 2112;
  if (*(_BYTE*)(v208 + 2080) != 0) {
    v249 = 2076;
  }
  v250 = *(float*)(v208 + v249);
  v251 = 2192;
  if (*(_BYTE*)(v208 + 2160) != 0) {
    v251 = 2156;
  }
  v252 = *(_DWORD*)(v208 + v251);
  v253 = 1632;
  if (*(_BYTE*)(v208 + 1600) != 0) {
    v253 = 1596;
  }
  v254 = *(float*)(v208 + v253);
  v255 = *((float*)a1 + 236) + (float)((float)(v247 * v254) / v250);
  *((float*)a1 + 236) = v255 - (float)(int)v255;
  v256 = 1552;
  if (*(_BYTE*)(v208 + 1520) != 0) {
    v256 = 1516;
  }
  v257 = *(_DWORD*)(v208 + v256);
  v258 = (int*)(v208 + 1756);
  if (*(_BYTE*)(v208 + 1760) == 0) {
    v258 = (int*)(v208 + 1792);
  }
  v259 = *v258;
  v260 = 1712;
  if (*(_BYTE*)(v208 + 1680) != 0) {
    v260 = 1676;
  }
  v261 = *(float*)(v208 + v260);
  *(_DWORD*)(v201 + 192) = v257;
  *(float*)(v201 + 196) = v254;
  *(_DWORD*)(v201 + 200) = v259;
  *(float*)(v201 + 204) = v261 * 0x1.1df46a0000000p-6f;
  v262 = 1872;
  if (*(_BYTE*)(v208 + 1840) != 0) {
    v262 = 1836;
  }
  v263 = *(_DWORD*)(v208 + v262);
  v264 = 1952;
  if (*(_BYTE*)(v208 + 1920) != 0) {
    v264 = 1916;
  }
  v265 = *(_DWORD*)(v208 + v264);
  v266 = 2032;
  if (*(_BYTE*)(v208 + 2000) != 0) {
    v266 = 1996;
  }
  v267 = (unsigned int)a1[236];
  v268 = *(unsigned int*)(v208 + v266);
  *(_DWORD*)(v201 + 208) = v263;
  *(_DWORD*)(v201 + 212) = v265;
  *(_QWORD*)(v201 + 216) = v268 | (v267 << 32);
  v269 = 2272;
  if (*(_BYTE*)(v208 + 2240) != 0) {
    v269 = 2236;
  }
  v270 = *(float*)(v208 + v269);
  *(float*)(v201 + 224) = v250;
  *(_DWORD*)(v201 + 228) = v252;
  *(_DWORD*)(v201 + 236) = 0;
  *(float*)(v201 + 232) = v270 * 0x1.1df46a0000000p-6f;
  v271 = *(unsigned __int8*)(v208 + 1760);
  v272 = 368;
  v504 = *(float*)(v208 + 1756);
  if (v206[336] != 0) {
    v272 = 332;
  }
  v499 = *(float*)(v208 + 1792);
  *(_DWORD*)(v201 + 80) = *(_DWORD*)&v206[v272];
  v273 = 128;
  if (v206[96] != 0) {
    v273 = 92;
  }
  v274 = 164;
  *(_DWORD*)(v201 + 84) = *(_DWORD*)&v206[v273];
  v275 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 3) + 8LL) + 104LL);
  if (*(_BYTE*)(v275 + 168) == 0) {
    v274 = 200;
  }
  v276 = 280;
  if (*(_BYTE*)(v275 + 248) != 0) {
    v276 = 244;
  }
  v277 = 480;
  if (*(_BYTE*)(v275 + 432) != 0) {
    v277 = 416;
  }
  v278 = *(float32x4_t*)(v275 + v277);
  if ((unsigned int)(*(int*)(*(_QWORD*)a1 + 13240LL) - 3) <= 3) {
    v279 = vmulq_f32(v278, COERCE_AS(float32x4_t, GameData_1a83620));
    LANES128(v279).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v279, v279, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v279).n128_u64[0])))
            .n64_u64[0];
    v280 = vmulq_f32(v278, COERCE_AS(float32x4_t, GameData_1a834b0));
    LANES128(v280).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v280, v280, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v280).n128_u64[0])))
            .n64_u64[0];
    v281 = vmulq_f32(v278, COERCE_AS(float32x4_t, GameData_1a82d20));
    LANES128(v281).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v281, v281, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0])))
            .n64_u64[0];
    LANES128(v278).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v279).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v279).n128_u64[0])))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v280).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v280).n128_u64[0])))
             .n64_u32[0]
         << 32);
    LANES128(v278).n128_u64[1] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0])))
            .n64_u32[0];
  }
  v502 = v271;
  v282 = 360;
  if (*(_BYTE*)(v275 + 328) != 0) {
    v282 = 324;
  }
  v283 = 568;
  if (*(_BYTE*)(v275 + 536) != 0) {
    v283 = 532;
  }
  v284 = 720;
  if (*(_BYTE*)(v275 + 688) != 0) {
    v284 = 684;
  }
  v285 = 640;
  if (*(_BYTE*)(v275 + 610) != 0) {
    v285 = 609;
  }
  if (*(_BYTE*)(v275 + 848) == 1) {
    v286 = *(float*)(v275 + 844);
  }
  else {
    v287 = 952;
    if (v207[920] != 0) {
      v287 = 916;
    }
    v286 = *(float*)&v207[v287];
  }
  v486 = v286;
  v288 = a2;
  v289 = *(float*)(v275 + v274);
  v290 = 120;
  if (*(_BYTE*)(v275 + 90) != 0) {
    v290 = 89;
  }
  v488 = v241;
  v489 = v238;
  v487 = v278;
  if ((*(_BYTE*)(v275 + v290) & 1) != 0) {
    v291 = *(float*)(v275 + v276);
    v292 = -v289;
    v293 = 800;
    v294 = v291 - v289;
    if (*(_BYTE*)(v275 + 768) != 0) {
      v293 = 764;
    }
    v295 = *(_DWORD*)(v275 + v293);
    v507 = (unsigned __int64)COERCE_UNSIGNED_INT(0x1.0000000000000p+0f / v294)
           << 32;
  }
  else {
    v507 = 0;
    v292 = -v289;
    v295 = 3;
  }
  v496 = *(_BYTE*)(v275 + v285);
  v296 = *(_DWORD*)(v275 + v282);
  v297 = 960;
  if (*(_BYTE*)(v275 + 928) != 0) {
    v297 = 924;
  }
  v493 = *(float*)(v275 + v283);
  v485 = *(float*)(v275 + v284);
  v298 = *(float*)(v275 + v297);
  v299 = 1040;
  if (*(_BYTE*)(v275 + 1008) != 0) {
    v299 = 1004;
  }
  v300 = GameRoutine_1a0a8d0(*(float*)(v275 + v299)),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v301 = *(float*)(a7 + 4);
  v302 = v300;
  v303 = 1120;
  if (*(_BYTE*)(v275 + 1088) != 0) {
    v303 = 1084;
  }
  v304 = *(_DWORD*)(v275 + v303);
  v305 = 1200;
  if (*(_BYTE*)(v275 + 1168) != 0) {
    v305 = 1164;
  }
  v306 = *(_DWORD*)(v275 + v305);
  if (a1[309] != v295) {
    if (v295 > 2) {
      v307 = 2;
    }
    else {
      v307 = GameData_1b5f120[v295];
    }
    v308 = *(_QWORD*)(*(_QWORD*)a1 + 13232LL);
    LANES128(v509_.v509).n128_u8[0] = 22;
    strcpy(&LANES128(v509_.v509).n128_i8[1], "co_fog_type");
    v572 = &v509_.v509;
    v309 = game_templates_a93ea0((float*)v308, (unsigned __int8*)&v509_.v509,
                                 (__int64)std___1_piecewise_construct_ptr,
                                 (__int64**)&v572),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v310 = LANES128(v509_.v509).n128_u8[0];
    *(_DWORD*)(v309 + 40) = v307;
    if ((v310 & 1) != 0 && v509_.v510 != 0) {
      v311 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v311 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v311, v509_.v510),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
          v125 =
              COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v126 =
              COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v144 =
              COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
          v146 =
              COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
          v151 =
              COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
          v157 =
              COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v158 =
              COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v338 =
              COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v339 = COERCE_AS(__typeof__(v339),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    *(_BYTE*)(v308 + 40) = 1;
    a1[309] = v295;
  }
  v312 = *(_QWORD*)(v288 + 288);
  v313 = *(_QWORD*)(v312 + 792);
  if (v313 == 0) {
    goto LABEL_160;
  }
  v314 = v312 + 792;
  v315 = v312 + 792;
  v316 = *(_DWORD*)(a6 + 36);
  do {
    v317 = *(_DWORD*)(v313 + 32);
    v318 = v317 < v316;
    if (v317 >= v316) {
      v319 = 0;
    }
    else {
      v319 = 8;
    }
    if (!v318) {
      v315 = v313;
    }
    v313 = *(_QWORD*)(v313 + v319);
  } while (v313 != 0);
  if (v315 != v314 && v316 >= (signed __int32)*(_DWORD*)(v315 + 32)) {
    v320 = *(_QWORD*)(v315 + 40);
  }
  else {
  LABEL_160:
    v320 = 0;
  }
  v321 = v298 + 0x1.0000000000000p+0f;
  v322 = v295 == 0;
  v323 = v320 == 0;
  v324 = (__int64*)(v320 + 808);
  v325 = !v323;
  v326 = v322 & v325;
  if ((v322 & v325) == 0) {
    v324 = (__int64*)(a5 + 24);
  }
  (*(void (**)(__int64))(*(_QWORD*)*v324 + 40LL))(*v324),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v327 = (__int64 (**)(__int64, __int64, __int64))GameData_212e4d8[0],
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v201 +
             264) =
      (*(__int64 (**)(__int64, __int64, __int64))GameData_212e4d8[0])(
          *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, v328, (unsigned int)a1[168]),
             v119 = COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(double, "d0", "=w")),
             v121 = COERCE_AS(__typeof__(v121),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v122 = COERCE_AS(__typeof__(v122),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v124 = COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v125 = COERCE_AS(__typeof__(v125),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v126 = COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v127 = COERCE_AS(__typeof__(v127),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v128 = COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v129 = COERCE_AS(__typeof__(v129),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v133 = COERCE_AS(__typeof__(v133),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v134 = COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v140 = COERCE_AS(__typeof__(v140),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v144 = COERCE_AS(__typeof__(v144),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v146 = COERCE_AS(__typeof__(v146),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v149 = COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v151 = COERCE_AS(__typeof__(v151),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v157 = COERCE_AS(__typeof__(v157),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v158 = COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v159 = COERCE_AS(__typeof__(v159),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v160 = COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v328 = COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v338 = COERCE_AS(__typeof__(v338),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v339 = COERCE_AS(__typeof__(v339),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v39 = COERCE_AS(__typeof__(v39),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
             v40 = COERCE_AS(__typeof__(v40),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
             v41 = COERCE_AS(__typeof__(v41),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
             v42 = COERCE_AS(__typeof__(v42),
                             PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v201 + 272) =
      (*v327)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL,
              *(unsigned int*)(v200 + 568), (unsigned int)a1[168]);
  if (a1[309] == 1) {
    if ((v496 & 1) != 0) {
      v329 = (float)(0x1.0000000000000p+0f / v301) * GameRoutine_1a0a8d0(v485),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    else {
      v329 = GameRoutine_1a0a8d0(v493 + -0x1.8000000000000p+1f) /
             0x1.9000000000000p+6f,
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  else {
    v329 = v489 * v488;
    if ((v326 & 1) != 0) {
      v329 = 0x1.0000000000000p+0f;
    }
  }
  *(_DWORD*)(v201 + 120) = v296;
  *(float*)(v201 + 124) = v329;
  *(float*)(v201 + 160) = v321;
  *(float*)(v201 + 164) = v302;
  *(_DWORD*)(v201 + 168) = v304;
  *(_DWORD*)(v201 + 172) = v306;
  *(_QWORD*)(v201 + 112) = v507 | LODWORD(v292);
  v330 = a1[309];
  if (v330 == 2) {
    v334 = 872;
    if (v207[840] != 0) {
      v334 = 836;
    }
    v335 = GameRoutine_1a0a8d0(*(float*)&v207[v334]),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(float*)(v201 + 128) = v486 + 0x1.0000000000000p+0f;
    *(float*)(v201 + 132) = v335;
    goto LABEL_184;
  }
  if (v330 != 1) {
    *(_QWORD*)(v201 + 128) = 0x3F8000003F800000LL;
  LABEL_184:
    v333 = 0;
    *(_DWORD*)(v201 + 136) = 0;
    goto LABEL_185;
  }
  v331 = v493 + -0x1.8000000000000p+1f;
  if ((float)(v493 + -0x1.8000000000000p+1f) > 0x1.fc00000000000p+6f ||
      v331 < -0x1.2a00000000000p+7f) {
    GameRoutine_1a0a8d0(v331),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  v332 = 0x3F80000000000000LL;
  if ((v496 & 1) == 0) {
    v332 = 0;
  }
  *(_QWORD*)(v201 + 128) = LANES128(v487).n128_u32[0] |
                           ((unsigned __int64)LANES128(v487).n128_u32[1] << 32);
  *(_DWORD*)(v201 + 136) = v332 | LANES128(v487).n128_u32[2];
  v333 = DWORDn(v332, sizeof(v332) / 4 - 1);
LABEL_185:
  *(_DWORD*)(v201 + 140) = v333;
  v336 = 1272;
  if (*(_BYTE*)(v275 + 1242) != 0) {
    v336 = 1241;
  }
  if ((*(_BYTE*)(v275 + v336) & 1) != 0) {
    v337 = 1392;
    if (*(_BYTE*)(v275 + 1344) != 0) {
      v337 = 1328;
    }
    v338 = *(_OWORD*)(v275 + v337);
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)a3 + 40LL))(a3),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  *(_QWORD*)(v201 + 144) = v338;
  *(_DWORD*)(v201 + 156) = 0;
  *(_DWORD*)(v201 + 152) = DWORD2(v338);
  (*(void (**)(__int64))(**((_QWORD**)a1 + 155) + 40LL))(*((_QWORD*)a1 + 155)),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v201 + 248) = (*v327)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, v339,
                                   (unsigned int)a1[168]);
  *(_QWORD*)(v201 + 256) = (*v327)(
      *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL,
      *(unsigned int*)(*(_QWORD*)(v288 + 288) + 1016LL), (unsigned int)a1[168]);
  v340 = 256;
  v341 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  if (v207[208] != 0) {
    v340 = 192;
  }
  v342 = *(float32x4_t*)&v207[v340];
  v509_.v509 = v342;
  if ((unsigned int)(v341 - 3) <= 3) {
    if ((unsigned int)(v341 - 5) > 1) {
      v343 = vmulq_f32(v342, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v343).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v343, v343, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v343).n128_u64[0])))
              .n64_u64[0];
      v344 = vmulq_f32(v342, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v344).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v344, v344, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v344).n128_u64[0])))
              .n64_u64[0];
      v345 = vmulq_f32(v342, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v345).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v345, v345, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v345).n128_u64[0])))
              .n64_u64[0];
      v346 = LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v345).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v345).n128_u64[0])))
                 .n64_u32[0];
      LANES128(v342).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v343).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v343).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v344).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v344).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v342).n128_u64[1] = v346;
    }
    else {
      LANES128(v342).n128_f32[0] = scene_652ba0(
          &v509_.v509, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  v347 = 128;
  if (v207[96] != 0) {
    v347 = 92;
  }
  v348 = *(float*)&v207[v347];
  *(_DWORD*)(v201 + 60) = 0;
  v349 = COERCE_AS(float32x4_t, GameData_1a83750);
  v350 = v348 / 0x1.921fb40000000p+1f;
  v351 = vmulq_f32(v342, COERCE_AS(float32x4_t, GameData_1a83750));
  LANES128(v351).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v351, v351, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v351).n128_u64[0])))
          .n64_u64[0];
  v352 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v351).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v351).n128_u64[0])))
          .n64_f32[0];
  if (v352 < 0x1.0624de0000000p-10f) {
    v352 = 0x1.0624de0000000p-10f;
  }
  v353 = vmulq_n_f32(vmulq_n_f32(v342, 0x1.0000000000000p+0f / v352),
                     v350 / 0x1.9000000000000p+6f);
  *(_QWORD*)(v201 + 48) = LANES128(v353).n128_u64[0];
  *(_DWORD*)(v201 + 56) = LANES128(v353).n128_u32[2];
  v354 = 464;
  v355 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  if (v207[416] != 0) {
    v354 = 400;
  }
  v356 = *(float32x4_t*)&v207[v354];
  v509_.v509 = v356;
  if ((unsigned int)(v355 - 3) <= 3) {
    if ((unsigned int)(v355 - 5) > 1) {
      v357 = vmulq_f32(v356, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v357).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v357, v357, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v357).n128_u64[0])))
              .n64_u64[0];
      v358 = vmulq_f32(v356, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v358).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v358, v358, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v358).n128_u64[0])))
              .n64_u64[0];
      v359 = vmulq_f32(v356, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v359).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v359, v359, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v359).n128_u64[0])))
              .n64_u64[0];
      v360 = LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v359).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v359).n128_u64[0])))
                 .n64_u32[0];
      LANES128(v356).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v357).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v357).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v358).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v358).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v356).n128_u64[1] = v360;
    }
    else {
      LANES128(v356).n128_f32[0] = scene_652ba0(
          &v509_.v509, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v349 = COERCE_AS(float32x4_t, GameData_1a83750);
    }
  }
  v361 = 344;
  if (v207[312] != 0) {
    v361 = 308;
  }
  v362 = *(float*)&v207[v361];
  *(_DWORD*)(v201 + 76) = 0;
  v363 = v362 / 0x1.921fb40000000p+1f;
  v364 = vmulq_f32(v356, v349);
  LANES128(v364).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v364, v364, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v364).n128_u64[0])))
          .n64_u64[0];
  v365 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v364).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v364).n128_u64[0])))
          .n64_f32[0];
  if (v365 < 0x1.0624de0000000p-10f) {
    v365 = 0x1.0624de0000000p-10f;
  }
  v366 = vmulq_n_f32(vmulq_n_f32(v356, 0x1.0000000000000p+0f / v365),
                     v363 / 0x1.9000000000000p+6f);
  *(_QWORD*)(v201 + 64) = LANES128(v366).n128_u64[0];
  *(_DWORD*)(v201 + 72) = LANES128(v366).n128_u32[2];
  v367 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 3) + 8LL) + 352LL);
  v368 = *(_BYTE*)(v367 + 8);
  LANES128(v509_.v509).n128_u64[0] =
      (unsigned __int64)(GameData_212e548[0] + 2);
  if ((v368 & 1) != 0) {
    fw_text_String_CopyTerminated(&LANES128(v509_.v509).n128_i64[1],
                                  *(_QWORD*)(v367 + 24), *(_QWORD*)(v367 + 16)),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v369 = *(_QWORD*)(v367 + 8);
    v370 = *(_QWORD*)(v367 + 24);
    v509_.v510 = *(_QWORD*)(v367 + 16);
    v509_.v511 = v370;
    LANES128(v509_.v509).n128_u64[1] = v369;
  }
  v509_.v513 = 0;
  v509_.v514 = 0;
  v509_.v512 = 0;
  v372 = *(_QWORD*)(v367 + 32);
  v371 = *(_QWORD*)(v367 + 40);
  v373 = v371 - v372;
  if (v371 != v372) {
    if ((v373 & 0x8000000000000000LL) != 0) {
      GameRoutine_a9fd80(),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
          v125 =
              COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v126 =
              COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v144 =
              COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
          v146 =
              COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
          v151 =
              COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
          v157 =
              COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v158 =
              COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v338 =
              COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v339 = COERCE_AS(__typeof__(v339),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    v374 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v371 - v372, 16, 0),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v375 = v374 + v373;
    v509_.v512 = v374;
    v509_.v513 = v374;
    v509_.v514 = v374 + v373;
    GameRoutine_1a0b950(v374, v372, v373),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v509_.v513 = v375;
  }
  v509_.v515 = &gfx_settings_BaseParamInstance_vtable;
  v376 = *(_BYTE*)(v367 + 64);
  LANES128(v509_.v509).n128_u64[0] =
      (unsigned __int64)gfxa_TranslucencySetting_vtable;
  if ((v376 & 1) != 0) {
    fw_text_String_CopyTerminated(v516, *(_QWORD*)(v367 + 80),
                                  *(_QWORD*)(v367 + 72)),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v377 = *(_QWORD*)(v367 + 64);
    v378 = *(_QWORD*)(v367 + 80);
    v516[1] = *(_QWORD*)(v367 + 72);
    v516[2] = v378;
    v516[0] = v377;
  }
  v379 = *(_BYTE*)(v367 + 88);
  v509_.v515 = GameData_1fc1458;
  v517 = v379;
  v380 = *(_QWORD*)(v367 + 92);
  v520 = 0;
  v521 = 0;
  v519 = 0;
  v518 = v380;
  v382 = *(_QWORD*)(v367 + 104);
  v381 = *(_QWORD*)(v367 + 112);
  v383 = v381 - v382;
  if (v381 != v382) {
    if (0xAAAAAAAAAAAAAAABLL * (v383 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v384 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v383, 16, 0),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v385 = v384 + v383;
    v519 = v384;
    v520 = v384;
    v521 = v384 + v383;
    GameRoutine_1a0b950(v384, v382, v383),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v520 = v385;
  }
  v386 = *(_BYTE*)(v367 + 144);
  v387 = *(_DWORD*)(v367 + 128);
  v523 = &gfx_settings_BaseParamInstance_vtable;
  v509_.v515 = gfx_settings_Float_vtable;
  v522 = v387;
  if ((v386 & 1) != 0) {
    fw_text_String_CopyTerminated(v524, *(_QWORD*)(v367 + 160),
                                  *(_QWORD*)(v367 + 152)),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v388 = *(_QWORD*)(v367 + 144);
    v389 = *(_QWORD*)(v367 + 160);
    v524[1] = *(_QWORD*)(v367 + 152);
    v524[2] = v389;
    v524[0] = v388;
  }
  v390 = *(_BYTE*)(v367 + 168);
  v523 = GameData_1fc1458;
  v525 = v390;
  v391 = *(_QWORD*)(v367 + 172);
  v528 = 0;
  v529 = 0;
  v527 = 0;
  v526 = v391;
  v393 = *(_QWORD*)(v367 + 184);
  v392 = *(_QWORD*)(v367 + 192);
  v394 = v392 - v393;
  if (v392 != v393) {
    if (0xAAAAAAAAAAAAAAABLL * (v394 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v395 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v394, 16, 0),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v396 = v395 + v394;
    v527 = v395;
    v528 = v395;
    v529 = v395 + v394;
    GameRoutine_1a0b950(v395, v393, v394),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v528 = v396;
  }
  v397 = *(_BYTE*)(v367 + 224);
  v523 = gfx_settings_Float_vtable;
  v398 = *(_DWORD*)(v367 + 208);
  v531 = &gfx_settings_BaseParamInstance_vtable;
  v530 = v398;
  if ((v397 & 1) != 0) {
    fw_text_String_CopyTerminated(v532, *(_QWORD*)(v367 + 240),
                                  *(_QWORD*)(v367 + 232)),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v399 = *(_QWORD*)(v367 + 224);
    v400 = *(_QWORD*)(v367 + 240);
    v532[1] = *(_QWORD*)(v367 + 232);
    v532[2] = v400;
    v532[0] = v399;
  }
  v401 = *(_BYTE*)(v367 + 248);
  v531 = GameData_1fc1458;
  v533 = v401;
  v402 = *(_QWORD*)(v367 + 252);
  v536 = 0;
  v537 = 0;
  v535 = 0;
  v534 = v402;
  v404 = *(_QWORD*)(v367 + 264);
  v403 = *(_QWORD*)(v367 + 272);
  v405 = v403 - v404;
  if (v403 != v404) {
    if (0xAAAAAAAAAAAAAAABLL * (v405 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v406 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v405, 16, 0),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v407 = v406 + v405;
    v535 = v406;
    v536 = v406;
    v537 = v406 + v405;
    GameRoutine_1a0b950(v406, v404, v405),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v536 = v407;
  }
  v408 = *(_DWORD*)(v367 + 288);
  v409 = *(_BYTE*)(v367 + 304);
  v531 = gfx_settings_Float_vtable;
  v539 = &gfx_settings_BaseParamInstance_vtable;
  v538 = v408;
  if ((v409 & 1) != 0) {
    fw_text_String_CopyTerminated(v540, *(_QWORD*)(v367 + 320),
                                  *(_QWORD*)(v367 + 312)),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v410 = *(_QWORD*)(v367 + 304);
    v411 = *(_QWORD*)(v367 + 320);
    v540[1] = *(_QWORD*)(v367 + 312);
    v540[2] = v411;
    v540[0] = v410;
  }
  v412 = *(_BYTE*)(v367 + 328);
  v539 = GameData_1fc1458;
  v541 = v412;
  v413 = *(_QWORD*)(v367 + 332);
  v545 = 0;
  v543 = 0;
  v544 = 0;
  v542 = v413;
  v415 = *(_QWORD*)(v367 + 344);
  v414 = *(_QWORD*)(v367 + 352);
  v416 = v414 - v415;
  if (v414 != v415) {
    if (0xAAAAAAAAAAAAAAABLL * (v416 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v417 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v416, 16, 0),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v418 = v417 + v416;
    v543 = v417;
    v544 = v417;
    v545 = v417 + v416;
    GameRoutine_1a0b950(v417, v415, v416),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v544 = v418;
  }
  v419 = *(_DWORD*)(v367 + 368);
  v420 = *(_BYTE*)(v367 + 384);
  v539 = gfx_settings_Float_vtable;
  v547 = &gfx_settings_BaseParamInstance_vtable;
  v546 = v419;
  if ((v420 & 1) != 0) {
    fw_text_String_CopyTerminated(v548, *(_QWORD*)(v367 + 400),
                                  *(_QWORD*)(v367 + 392)),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v421 = *(_QWORD*)(v367 + 384);
    v422 = *(_QWORD*)(v367 + 400);
    v548[1] = *(_QWORD*)(v367 + 392);
    v548[2] = v422;
    v548[0] = v421;
  }
  v423 = *(_BYTE*)(v367 + 408);
  v547 = GameData_1fc1458;
  v549 = v423;
  v424 = *(_QWORD*)(v367 + 412);
  v553 = 0;
  v551 = 0;
  v552 = 0;
  v550 = v424;
  v426 = *(_QWORD*)(v367 + 424);
  v425 = *(_QWORD*)(v367 + 432);
  v427 = v425 - v426;
  if (v425 != v426) {
    if (0xAAAAAAAAAAAAAAABLL * (v427 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v428 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v427, 16, 0),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v429 = v428 + v427;
    v551 = v428;
    v552 = v428;
    v553 = v428 + v427;
    GameRoutine_1a0b950(v428, v426, v427),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v552 = v429;
  }
  v430 = *(_DWORD*)(v367 + 448);
  v431 = *(_BYTE*)(v367 + 464);
  v547 = gfx_settings_Float_vtable;
  v555 = &gfx_settings_BaseParamInstance_vtable;
  v554 = v430;
  if ((v431 & 1) != 0) {
    fw_text_String_CopyTerminated(v556, *(_QWORD*)(v367 + 480),
                                  *(_QWORD*)(v367 + 472)),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v432 = *(_QWORD*)(v367 + 464);
    v433 = *(_QWORD*)(v367 + 480);
    v556[1] = *(_QWORD*)(v367 + 472);
    v556[2] = v433;
    v556[0] = v432;
  }
  v434 = *(_BYTE*)(v367 + 488);
  v555 = GameData_1fc1458;
  v557 = v434;
  v435 = *(_QWORD*)(v367 + 492);
  v561 = 0;
  v559 = 0;
  v560 = 0;
  v558 = v435;
  v437 = *(_QWORD*)(v367 + 504);
  v436 = *(_QWORD*)(v367 + 512);
  v438 = v436 - v437;
  if (v436 != v437) {
    if (0xAAAAAAAAAAAAAAABLL * (v438 >> 2) > 0x1555555555555555LL) {
      goto LABEL_287;
    }
    v439 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v438, 16, 0),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
    v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
    v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
    v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
    v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
    v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v339 = COERCE_AS(__typeof__(v339),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v440 = v439 + v438;
    v559 = v439;
    v560 = v439;
    v561 = v439 + v438;
    GameRoutine_1a0b950(v439, v437, v438),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v560 = v440;
  }
  v441 = *(_DWORD*)(v367 + 528);
  v555 = gfx_settings_Float_vtable;
  v563 = &gfx_settings_BaseParamInstance_vtable;
  v442 = *(_BYTE*)(v367 + 544);
  v562 = v441;
  if ((v442 & 1) != 0) {
    fw_text_String_CopyTerminated(v564, *(_QWORD*)(v367 + 560),
                                  *(_QWORD*)(v367 + 552)),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  else {
    v443 = *(_QWORD*)(v367 + 544);
    v444 = *(_QWORD*)(v367 + 560);
    v564[1] = *(_QWORD*)(v367 + 552);
    v564[2] = v444;
    v564[0] = v443;
  }
  v445 = *(_BYTE*)(v367 + 568);
  v563 = GameData_1fc1458;
  v565 = v445;
  v446 = *(_QWORD*)(v367 + 572);
  v567 = 0;
  v569 = 0;
  v568 = 0;
  v447 = *(_QWORD*)(v367 + 584);
  v566 = v446;
  v448 = *(_QWORD*)(v367 + 592);
  v449 = v448 - v447;
  if (v448 != v447) {
    if (0xAAAAAAAAAAAAAAABLL * (v449 >> 2) <= 0x1555555555555555LL) {
      v450 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v449, 16, 0),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v451 = v450 + v449;
      v567 = v450;
      v568 = v450;
      v569 = v450 + v449;
      GameRoutine_1a0b950(v450, v447, v449),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
          v122 =
              COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
          v124 =
              COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
          v125 =
              COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v126 =
              COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v127 =
              COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v128 =
              COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v129 =
              COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v133 =
              COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v140 =
              COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v144 =
              COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
          v146 =
              COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
          v149 =
              COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
          v151 =
              COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
          v157 =
              COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v158 =
              COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v160 =
              COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v338 =
              COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v339 = COERCE_AS(__typeof__(v339),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v568 = v451;
      goto LABEL_260;
    }
  LABEL_287:
    GameRoutine_aa0e00(),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
        v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
        v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
        v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
        v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
        v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v339 = COERCE_AS(__typeof__(v339),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
LABEL_260:
  v563 = gfx_settings_Float_vtable;
  if (v502 != 0) {
    v452 = v504;
  }
  else {
    v452 = v499;
  }
  v453 = 52;
  if (BYTE4(v526) != 0) {
    v453 = 43;
  }
  v570 = *(_DWORD*)(v367 + 608);
  *(float*)(v201 +
            92) =
      GameRoutine_1a0a8d0((float)((float)(0x1.0000000000000p+0f -
                                          LANES128(v509_.v509).n128_f32[v453]) *
                                  0x1.0000000000000p+2f) +
                          0x1.0000000000000p+0f),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v121 =
                COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
            v122 =
                COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
            v124 =
                COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
            v125 = COERCE_AS(__typeof__(v125),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v126 = COERCE_AS(__typeof__(v126),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v127 = COERCE_AS(__typeof__(v127),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v128 = COERCE_AS(__typeof__(v128),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v129 = COERCE_AS(__typeof__(v129),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v133 = COERCE_AS(__typeof__(v133),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v134 = COERCE_AS(__typeof__(v134),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v140 = COERCE_AS(__typeof__(v140),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v144 =
                COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
            v149 =
                COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
            v151 =
                COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v158 = COERCE_AS(__typeof__(v158),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v159 = COERCE_AS(__typeof__(v159),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v160 = COERCE_AS(__typeof__(v160),
                             PSEUDO_REGISTER(__n128, "v3", "=w")),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v338 = COERCE_AS(__typeof__(v338),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
            v339 = COERCE_AS(__typeof__(v339),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v39 =
                COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v41 =
                COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v42 =
                COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v454 = 32;
  if (BYTE4(v518) != 0) {
    v454 = 23;
  }
  v455 = LANES128(v509_.v509).n128_f32[v454];
  v456 = 92;
  if (BYTE4(v542) != 0) {
    v456 = 83;
  }
  v457 = v455 * GameRoutine_1a0a8d0(LANES128(v509_.v509).n128_f32[v456]),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v458 = 112;
  if (BYTE4(v550) != 0) {
    v458 = 103;
  }
  v459 = LANES128(v509_.v509).n128_f32[v458];
  v460 = 132;
  if (BYTE4(v558) != 0) {
    v460 = 123;
  }
  v461 = v459 * GameRoutine_1a0a8d0(LANES128(v509_.v509).n128_f32[v460]),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (BYTE4(v566) != 0) {
    v462 = (int*)&v566;
  }
  else {
    v462 = &v570;
  }
  v463 = *v462;
  v464 = 72;
  if (BYTE4(v534) != 0) {
    v464 = 63;
  }
  v465 = LANES128(v509_.v509).n128_u32[v464];
  *(float*)(v201 + 96) = v457;
  *(float*)(v201 + 100) = v461;
  *(_DWORD*)(v201 + 104) = v463;
  *(_DWORD*)(v201 + 108) = v465;
  TranslucencySetting_Destructor((__int64)&v509_.v509),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v466 = (__int64 (**)(__int64, __int64, __int64))GameData_212e4d8[0],
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(_QWORD*)(v201 +
             240) =
      (*(__int64 (**)(__int64, __int64, __int64))GameData_212e4d8[0])(
          *(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL, (unsigned int)a1[124],
          (unsigned int)a1[168]),
             v119 = COERCE_AS(__typeof__(v119),
                              PSEUDO_REGISTER(double, "d0", "=w")),
             v121 = COERCE_AS(__typeof__(v121),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v122 = COERCE_AS(__typeof__(v122),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v124 = COERCE_AS(__typeof__(v124),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v125 = COERCE_AS(__typeof__(v125),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v126 = COERCE_AS(__typeof__(v126),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v127 = COERCE_AS(__typeof__(v127),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v128 = COERCE_AS(__typeof__(v128),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v129 = COERCE_AS(__typeof__(v129),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v133 = COERCE_AS(__typeof__(v133),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v134 = COERCE_AS(__typeof__(v134),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v140 = COERCE_AS(__typeof__(v140),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v144 = COERCE_AS(__typeof__(v144),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v146 = COERCE_AS(__typeof__(v146),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v149 = COERCE_AS(__typeof__(v149),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v151 = COERCE_AS(__typeof__(v151),
                              PSEUDO_REGISTER(float, "s0", "=w")),
             v157 = COERCE_AS(__typeof__(v157),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v158 = COERCE_AS(__typeof__(v158),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
             v159 = COERCE_AS(__typeof__(v159),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
             v160 = COERCE_AS(__typeof__(v160),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
             v328 = COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v338 = COERCE_AS(__typeof__(v338),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
             v339 = COERCE_AS(__typeof__(v339),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
             v39 = COERCE_AS(__typeof__(v39),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
             v40 = COERCE_AS(__typeof__(v40),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
             v41 = COERCE_AS(__typeof__(v41),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
             v42 = COERCE_AS(__typeof__(v42),
                             PSEUDO_REGISTER(__n128, "v3", "=w"));
  v467 = a1 + 128;
  if (v452 > 0x0.0p+0f) {
    v468 = a1 + 132;
  }
  else {
    v467 = a1 + 136;
    v468 = a1 + 136;
  }
  *(_QWORD*)(v201 + 280) = (*v466)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL,
                                   *v467, (unsigned int)a1[200]);
  *(_QWORD*)(v201 + 288) = (*v466)(*(_QWORD*)(*(_QWORD*)a1 + 256LL) + 8LL,
                                   *v468, (unsigned int)a1[200]);
  (*(void (**)(__int64))(*(_QWORD*)v505 + 64LL))(v505),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v469 = *(_QWORD*)&a1[2 * a1[84] + 80];
  v470 = (*(__int64 (**)(__int64))(*(_QWORD*)v469 + 56LL))(v469),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v471 = *(_QWORD*)(*(_QWORD*)a1 + 13232LL);
  (*(void (**)(__int64))(*(_QWORD*)v469 + 40LL))(v469),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  for (i = *(__int64**)(v471 + 64); i != nullptr; i = (__int64*)*i) {
    *(_DWORD*)(v470 + 4LL * *((int*)i + 10)) = *((_DWORD*)i + 11);
  }
  (*(void (**)(__int64))(*(_QWORD*)v469 + 64LL))(v469),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v473 = *((float*)a1 + 315) + 0x1.11570a0000000p-5f;
  v474 = v473 + -0x1.5179cc0000000p+16f;
  v475 = &a1[2 * a1[56]];
  if (v473 > 0x1.5179cc0000000p+16f) {
    v473 = v473 + -0x1.5179cc0000000p+16f;
  }
  *((float*)a1 + 315) = v473;
  v476 = *((_QWORD*)v475 + 26);
  v477 = (*(__int64 (**)(__int64, float, float, float))(*(_QWORD*)v476 + 56LL))(
      v476, v473, v474, 0x1.5179cc0000000p+16f),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v478 = *((float*)a1 + 315);
  *(_DWORD*)(v477 + 476) = 0;
  *(_QWORD*)(v477 + 468) = 0;
  *(float*)(v477 + 464) = v478;
  (*(void (**)(__int64, float))(*(_QWORD*)v476 + 64LL))(v476, v478),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v479 = *(_QWORD*)&a1[2 * a1[70] + 66];
  v480 = (*(__int64 (**)(__int64))(*(_QWORD*)v479 + 56LL))(v479),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v481 = *((float*)a1 + 315);
  *(_DWORD*)(v480 + 476) = 0;
  *(_QWORD*)(v480 + 468) = 0;
  *(float*)(v480 + 464) = v481;
  (*(void (**)(__int64, float))(*(_QWORD*)v479 + 64LL))(v479, v481),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v482 = *(_QWORD*)&a1[2 * a1[112] + 108];
  v483 = (*(__int64 (**)(__int64))(*(_QWORD*)v482 + 56LL))(v482),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
  v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
  v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
  v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
  v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
  v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v339 = COERCE_AS(__typeof__(v339),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  GameRoutine_1a0ba50(v483, 0, 0x400u),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(double, "d0", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(float, "s0", "=w")),
      v122 = COERCE_AS(__typeof__(v122), PSEUDO_REGISTER(float, "s0", "=w")),
      v124 = COERCE_AS(__typeof__(v124), PSEUDO_REGISTER(float, "s0", "=w")),
      v125 = COERCE_AS(__typeof__(v125), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v126 = COERCE_AS(__typeof__(v126), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v127 = COERCE_AS(__typeof__(v127), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v128 = COERCE_AS(__typeof__(v128), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v129 = COERCE_AS(__typeof__(v129), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v133 = COERCE_AS(__typeof__(v133), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v140 = COERCE_AS(__typeof__(v140), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v144 = COERCE_AS(__typeof__(v144), PSEUDO_REGISTER(float, "s0", "=w")),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w")),
      v149 = COERCE_AS(__typeof__(v149), PSEUDO_REGISTER(float, "s0", "=w")),
      v151 = COERCE_AS(__typeof__(v151), PSEUDO_REGISTER(float, "s0", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v158 = COERCE_AS(__typeof__(v158), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v160 = COERCE_AS(__typeof__(v160), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v338 = COERCE_AS(__typeof__(v338), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v339 = COERCE_AS(__typeof__(v339),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v41 = COERCE_AS(__typeof__(v41), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v3", "=w"));
  return (*(__int64 (**)(__int64))(*(_QWORD*)v482 + 64LL))(v482);
}

void gfxa_b44060(__int64 a1, int a2, __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64** v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  float v29;
  _QWORD* v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  atomic_ullong* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  atomic_ullong* v69;
  __int64 v70;
  __int64 v71;
  _BYTE v72[15];

  v4 = *(_QWORD*)(a1 + 488);
  v6 = a2;
  if (v4 != 0 && *(_QWORD*)(a1 + 504) != 0) {
    v10 = v4 - 1;
    if ((v4 & (v4 - 1)) != 0) {
      v11 = a2;
      if (v4 <= a2) {
        v11 = a2 % v4;
      }
    }
    else {
      v11 = v10 & a2;
    }
    v12 = *(__int64***)(*(_QWORD*)(a1 + 480) + 8 * v11);
    if (v12 != nullptr) {
      v13 = *v12;
      if (v13 != nullptr) {
        if ((v4 & v10) == 0) {
          while (1) {
            v15 = v13[1];
            if (v15 == a2) {
              if (*((_DWORD*)v13 + 4) == a2) {
                goto LABEL_125;
              }
            }
            else if ((v15 & v10) != v11) {
              goto LABEL_24;
            }
            v13 = (__int64*)*v13;
            if (v13 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v14 = v13[1];
          if (v14 == a2) {
            if (*((_DWORD*)v13 + 4) == a2) {
            LABEL_125:
              v66 = a3[3];
              v68 = *a3;
              v67 = a3[1];
              v13[6] = a3[2];
              v13[7] = v66;
              LOBYTE(v66) = *((_BYTE*)v13 + 64);
              v13[4] = v68;
              v13[5] = v67;
              if ((v66 & 1) == 0) {
                *((_BYTE*)v13 + 64) = 1;
              }
              return;
            }
          }
          else {
            if (v14 >= v4) {
              v14 %= v4;
            }
            if (v14 != v11) {
              break;
            }
          }
          v13 = (__int64*)*v13;
        } while (v13 != nullptr);
      }
    }
  }
LABEL_24:
  v16 = *(_BYTE*)a3;
  v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       64, 16, 0);
  v18 = *(__int64*)((char*)a3 + 9);
  *(_QWORD*)(v17 + 8) = 0;
  v19 = (atomic_ullong*)(v17 + 8);
  *(_QWORD*)(v17 + 16) = 0;
  v20 = v17;
  *(_QWORD*)(v17 + 24) = 0;
  v21 = v17 + 24;
  *(_QWORD*)v17 = GameData_1fc5228;
  *(_QWORD*)(v17 + 32) = 0;
  *(_QWORD*)(v17 + 40) = 0;
  *(_QWORD*)(v17 + 48) = 0;
  *(_QWORD*)(v17 + 56) = 0xFFFFFFFF00000000LL;
  v70 = *(__int64*)((char*)a3 + 1);
  v71 = v18;
  *(_QWORD*)v72 = *(__int64*)((char*)a3 + 17);
  *(_QWORD*)&v72[7] = a3[3];
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                            memory_order_relaxed);
  v69 = (atomic_ullong*)(v17 + 8);
  v22 = *(_QWORD*)(a1 + 488);
  if (v22 == 0) {
    goto LABEL_45;
  }
  v23 = v22 - 1;
  if ((v22 & (v22 - 1)) != 0) {
    v3 = v6;
    if (v22 <= v6) {
      v3 = v6 % v22;
    }
  }
  else {
    v3 = v23 & v6;
  }
  v24 = *(__int64***)(*(_QWORD*)(a1 + 480) + 8 * v3);
  if (v24 == nullptr || (v25 = *v24) == nullptr) {
  LABEL_45:
    v28 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         96, 16, 0);
    v29 = *(float*)(a1 + 512);
    v30 = (_QWORD*)v28;
    *(_QWORD*)v28 = 0;
    *(_QWORD*)(v28 + 8) = v6;
    *(_DWORD*)(v28 + 16) = a2;
    *(_BYTE*)(v28 + 32) = v16;
    *(_BYTE*)(v28 + 64) = 1;
    *(_QWORD*)(v28 + 80) = v21;
    *(_QWORD*)(v28 + 88) = v20;
    *(_QWORD*)(v28 + 33) = v70;
    *(_QWORD*)(v28 + 41) = v71;
    *(_QWORD*)(v28 + 49) = *(_QWORD*)v72;
    *(_QWORD*)(v28 + 56) = *(_QWORD*)&v72[7];
    v31 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 504) + 1LL);
    if (v22 != 0 && !((float)(v29 * (float)v22) < v31)) {
      goto LABEL_113;
    }
    v32 = v31 / v29;
    v33 = true;
    if (v22 >= 3) {
      v33 = (v22 & (v22 - 1)) != 0;
    }
    v34 = v33 | (2 * v22);
    v35 = vcvtps_u64_f32(v32);
    if (v34 <= v35) {
      primeEm = v35;
    }
    else {
      primeEm = v34;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v37 = *(_QWORD*)(a1 + 488);
    if (primeEm <= v37) {
      if (primeEm >= v37) {
        goto LABEL_108;
      }
      v44 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 504) /
                           *(float*)(a1 + 512));
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v44 = std___1___next_prime(v44);
      }
      else {
        v45 = 1LL << (-(char)__clz(v44 - 1) & 63);
        if (v44 >= 2) {
          v44 = v45;
        }
      }
      if (primeEm <= v44) {
        primeEm = v44;
      }
      if (primeEm >= v37) {
        goto LABEL_108;
      }
      if (primeEm == 0) {
        v60 = *(_QWORD*)(a1 + 480);
        *(_QWORD*)(a1 + 480) = 0;
        if (v60 != 0) {
          v61 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v61 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v61, v60);
        }
        *(_QWORD*)(a1 + 488) = 0;
        goto LABEL_108;
      }
    }
    v38 = fw_memory_g_heap_manager_ptr;
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * primeEm, 16, 0);
    v40 = *(_QWORD*)(a1 + 480);
    *(_QWORD*)(a1 + 480) = v39;
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v41, v40);
    }
    v42 = primeEm & 7;
    *(_QWORD*)(a1 + 488) = primeEm;
    if (primeEm >= 8) {
      v43 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v43 + 48) = 0;
        v46 = *(_QWORD*)(a1 + 480) + 8 * v43;
        v43 += 8;
        *(_QWORD*)(v46 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v43);
    }
    else {
      v43 = 0;
    }
    if ((primeEm & 7) != 0) {
      v47 = 8 * v43;
      do {
        --v42;
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + v47) = 0;
        v47 += 8;
      } while (v42 != 0);
    }
    v48 = *(_QWORD**)(a1 + 496);
    if (v48 != nullptr) {
      v49 = v48[1];
      v50 = a1 + 496;
      v51 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v49 >= primeEm) {
          v49 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v49) = v50;
        v52 = (_QWORD*)*v48;
        if (*v48 == 0) {
          goto LABEL_108;
        }
        while (1) {
          v53 = v52[1];
          if (v53 >= primeEm) {
            v53 %= primeEm;
          }
          if (v53 != v49) {
            v54 = *(_QWORD*)(a1 + 480);
            if (*(_QWORD*)(v54 + 8 * v53) == 0) {
              *(_QWORD*)(v54 + 8 * v53) = v48;
              goto LABEL_83;
            }
            *v48 = *v52;
            *v52 = **(_QWORD**)(*(_QWORD*)(a1 + 480) + 8 * v53);
            **(_QWORD**)(*(_QWORD*)(a1 + 480) + 8 * v53) = v52;
            v52 = v48;
          }
          v53 = v49;
        LABEL_83:
          v48 = v52;
          v52 = (_QWORD*)*v52;
          v49 = v53;
          if (v52 == nullptr) {
            goto LABEL_108;
          }
        }
      }
      v55 = v49 & v51;
      *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v55) = v50;
      while (1) {
        v56 = (_QWORD*)*v48;
        if (*v48 == 0) {
          break;
        }
        v57 = v56[1] & v51;
        if (v57 == v55) {
          v48 = (_QWORD*)*v48;
        }
        else {
          v58 = *(_QWORD*)(a1 + 480);
          if (*(_QWORD*)(v58 + 8 * v57) != 0) {
            *v48 = *v56;
            *v56 = **(_QWORD**)(*(_QWORD*)(a1 + 480) + 8 * v57);
            **(_QWORD**)(*(_QWORD*)(a1 + 480) + 8 * v57) = v56;
          }
          else {
            *(_QWORD*)(v58 + 8 * v57) = v48;
            v48 = v56;
            v55 = v57;
          }
        }
      }
    }
  LABEL_108:
    v22 = *(_QWORD*)(a1 + 488);
    if ((v22 & (v22 - 1)) != 0) {
      if (v22 <= v6) {
        v3 = v6 % v22;
      }
      else {
        v3 = v6;
      }
    }
    else {
      v3 = (v22 - 1) & v6;
    }
  LABEL_113:
    v62 = *(_QWORD*)(a1 + 480);
    v63 = *(_QWORD**)(v62 + 8 * v3);
    if (v63 != nullptr) {
      v19 = v69;
      *v30 = *v63;
      *v63 = v30;
    }
    else {
      v64 = *(_QWORD*)(a1 + 496);
      v19 = v69;
      *(_QWORD*)(a1 + 496) = v30;
      *v30 = v64;
      *(_QWORD*)(v62 + 8 * v3) = a1 + 496;
      if (v64 != 0) {
        v65 = *(_QWORD*)(v64 + 8);
        if ((v22 & (v22 - 1)) != 0) {
          if (v65 >= v22) {
            v65 %= v22;
          }
        }
        else {
          v65 &= v22 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(a1 + 480) + 8 * v65) = v30;
      }
    }
    ++*(_QWORD*)(a1 + 504);
    goto LABEL_122;
  }
  if ((v22 & v23) == 0) {
    while (1) {
      v27 = v25[1];
      if (v27 == v6) {
        if (*((_DWORD*)v25 + 4) == a2) {
          goto LABEL_96;
        }
      }
      else if ((v27 & v23) != v3) {
        goto LABEL_45;
      }
      v25 = (__int64*)*v25;
      if (v25 == nullptr) {
        goto LABEL_45;
      }
    }
  }
  while (1) {
    v26 = v25[1];
    if (v26 == v6) {
      break;
    }
    if (v26 >= v22) {
      v26 %= v22;
    }
    if (v26 != v3) {
      goto LABEL_45;
    }
  LABEL_35:
    v25 = (__int64*)*v25;
    if (v25 == nullptr) {
      goto LABEL_45;
    }
  }
  if (*((_DWORD*)v25 + 4) != a2) {
    goto LABEL_35;
  }
LABEL_96:
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v59 = (atomic_ullong*)(v17 + 8);
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v20);
    v19 = v59;
  }
LABEL_122:
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
}

void gfxa_b52720(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 i;
  const char* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  struct {
    _QWORD v17[2];
    const char* v18;
  } v17_;
  __int64 v19[3];
  struct {
    _QWORD v20[2];
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    int v23;
    int v24;
    __int64 v25;
    char v26;
    char gap105_[3];
    int v27;
  } v22_;

  for (i = 0; i != 16; ++i) {
    v22_.v27 = 0;
    v22_.v22 = 0x1700000000LL;
    v22_.v25 = 0x100000001LL;
    v22_.v26 = 1;
    v22_.v23 = *(_DWORD*)(a3 + 4 * i);
    v22_.v24 = v22_.v23;
    strcpy((char*)v19, "$CharaSelfShadowMap");
    std___1_to_string_1a0a790((void*)(v17_.v17), (unsigned int)i);
    if ((v17_.v17[0] & 1) != 0) {
      v7 = v17_.v18;
    }
    else {
      v7 = (char*)v17_.v17 + 1;
    }
    if ((v17_.v17[0] & 1) != 0) {
      v8 = v17_.v17[1];
    }
    else {
      v8 = (unsigned __int64)LOBYTE(v17_.v17[0]) >> 1;
    }
    v9 = (_QWORD*)GameRoutine_1a09ce0((__int64)v19, v7, v8);
    v11 = v9[1];
    v10 = v9[2];
    v20_.v20[0] = *v9;
    v20_.v20[1] = v11;
    v20_.v21 = v10;
    v9[1] = 0;
    v9[2] = 0;
    *v9 = 0;
    if ((v17_.v17[0] & 1) != 0 && v17_.v18 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v12,
                                    (__int64)v17_.v18);
    }
    if ((v19[0] & 1) != 0 && v19[2] != 0) {
      v13 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v13, v19[2]);
    }
    v14 = ResourceBuilder_b528e0(a2, (unsigned __int8*)v20_.v20,
                                 (__int64)&v22_.v22);
    v15 = v20_.v20[0];
    *(_QWORD*)(a1 + 8 * i) = v14;
    if ((v15 & 1) != 0 && v20_.v21 != 0) {
      v16 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v16, v20_.v21);
    }
  }
}

#pragma GCC visibility pop
