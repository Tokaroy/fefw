#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_19bbae0(_QWORD*);
__int64* GameRoutine_714e40();
__int64 Alignment_56b600(__int64 result);
__int64 GameConverge_8e7ca0(__int64, unsigned __int64*);
__int64 GameHr_1604520(__int64*, __int64, __int64, const char*);
__int64 GameHr_179c320(__int64, unsigned __int8*);
__int64 GameHr_1916be0(__int64, int, const char*, __int64, char);
__int64 GameManager_a20000(__int64);
__int64 GameRoutine_112ea40(__int64, _BYTE*);
__int64 GameRoutine_1840e20(__int64, __int64);
__int64 GameRoutine_190b6a0(__int64, __int64, unsigned __int64);
__int64 GameRoutine_190b870(__int64, unsigned int, int);
__int64 GameRoutine_1916fe0(__int64 result, int, float);
__int64 GameRoutine_1917040(__int64 result, int, float);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 Pane_58f8a0(__int64);
__int64 Unit_6c8300(_QWORD*, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_191b920(__int64 result, _BYTE*, _BYTE*);
__int64 game_191ba20(__int64 result, _BYTE*);
__int64 game_HashString(__int64 result);
__int64 spine_AnimationState_setEmptyAnimation(__int64, __int64, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool GameRoutine_8f9870(__int64);
char* GameRoutine_19bb850(_QWORD*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN GameData_1abbaec;
extern _UNKNOWN GameData_1af6361;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212cc20[67];
extern __int64 game_GameModeData_instance_;
extern __int64 game_sound_g_game_sound;
extern char** msg_MessageManager_empty_text__ptr;
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
unsigned __int64 strlen(const char*);
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_191bab0(__int64, char, __int64*);
void ProcAfterEpisodeSeq_19bd810(__int64, int, const char*, __int64);
void TrickEntity_7d1480(__int64);
__int64 game_anonymous_812320(__int64 a1, __int64 a2, int a3);
__int64 game_anonymous_19bccb0(__int64 result, unsigned int a2, __int64* a3);

__int64 game_anonymous_812320(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  int v85;
  __int64 v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  int v91;
  __int64 v92;
  int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  int v97;
  __int64 v98;
  int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  int v103;
  __int64 v104;
  int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  int v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  int v115;
  __int64 v116;
  int v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  int v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  int v127;
  __int64 v128;
  int v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  int v133;
  __int64 v134;
  int v135;
  _BYTE* v136;
  _BYTE* v137;
  _BYTE* v138;
  _BYTE* v139;
  _BYTE* v140;
  _BYTE* v141;
  _BYTE* v142;
  _BYTE* v143;
  _BYTE* v144;
  _BYTE* v145;
  _BYTE* v146;
  _BYTE* v147;
  _BYTE* v148;
  _BYTE* v149;
  _BYTE* v150;
  _BYTE* v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  int v156;
  __int64 v157;
  int v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  int v163;
  __int64 v164;
  int v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  int v170;
  __int64 v171;
  int v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  int v177;
  __int64 v178;
  int v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  int v184;
  __int64 v185;
  int v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  int v191;
  __int64 v192;
  int v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  int v198;
  __int64 v199;
  int v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  int v205;
  __int64 v206;
  int v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  int v212;
  __int64 v213;
  int v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  int v219;
  __int64 v220;
  int v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  int v226;
  __int64 v227;
  int v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  int v233;
  __int64 v234;
  int v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  int v240;
  __int64 v241;
  int v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  int v247;
  __int64 v248;
  int v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  int v254;
  __int64 v255;
  int v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  int v261;
  __int64 v262;
  int v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
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
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  int v314;
  __int64 v315;
  int v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  int v320;
  __int64 v321;
  int v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  int v326;
  int v327;
  int v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  int v333;
  __int64 v334;
  int v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  __int64 v341;
  int v342;
  __int64 v343;
  int v344;
  __int64 v345;
  __int64 v346;
  int v347;
  int v348;
  int v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  int v354;
  __int64 v355;
  int v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  int v363;
  __int64 v364;
  int v365;
  __int64 v366;
  __int64 v367;
  int v368;
  int v369;
  int v370;
  __int64 v371;
  __int64 v372;
  int v373;
  int v374;
  int v375;
  __int64 v376;
  __int64 v377;
  int v378;
  int v379;
  int v380;
  __int64 v381;
  __int64 v382;
  int v383;
  int v384;
  int v385;
  __int64 v386;
  __int64 v387;
  int v388;
  int v389;
  int v390;
  __int64 v391;
  __int64 v392;
  int v393;
  int v394;
  int v395;
  __int64 v396;
  __int64 v397;
  int v398;
  int v399;
  int v400;
  __int64 v401;
  __int64 v402;
  int v403;
  int v404;
  int v405;
  __int64 v406;
  __int64 v407;
  __int64 v408;
  int v409;
  __int64 v410;
  int v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  int v415;
  __int64 v416;
  int v417;
  __int64 v418;
  __int64 v419;
  __int64 v420;
  int v421;
  __int64 v422;
  int v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  int v427;
  __int64 v428;
  int v429;
  __int64 v430;
  __int64 v431;
  __int64 v432;
  int v433;
  __int64 v434;
  int v435;
  __int64 v436;
  __int64 v437;
  __int64 v438;
  int v439;
  __int64 v440;
  int v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  int v445;
  __int64 v446;
  int v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  int v451;
  __int64 v452;
  int v453;
  __int64 v454;
  __int64 v455;
  __int64 v456;
  int v457;
  __int64 v458;
  int v459;
  __int64 v460;
  __int64 v461;
  __int64 v462;
  int v463;
  __int64 v464;
  int v465;
  __int64 v466;
  __int64 v467;
  __int64 v468;
  int v469;
  __int64 v470;
  int v471;
  __int64 v472;
  __int64 v473;
  __int64 v474;
  int v475;
  __int64 v476;
  int v477;
  __int64 v478;
  __int64 v479;
  __int64 v480;
  int v481;
  __int64 v482;
  int v483;
  __int64 v484;
  __int64 v485;
  __int64 v486;
  int v487;
  __int64 v488;
  int v489;
  __int64 v490;
  __int64 v491;
  __int64 v492;
  int v493;
  __int64 v494;
  int v495;
  __int64 v496;
  __int64 v497;
  __int64 v498;
  int v499;
  __int64 v500;
  int v501;
  __int64 v502;
  __int64 v503;
  __int64 v504;
  int v505;
  __int64 v506;
  int v507;
  __int64 v508;
  __int64 v509;
  __int64 v510;
  int v511;
  __int64 v512;
  int v513;
  __int64 v514;
  __int64 v515;
  __int64 v516;
  int v517;
  __int64 v518;
  int v519;
  __int64 v520;
  __int64 v521;
  __int64 v522;
  int v523;
  __int64 v524;
  int v525;
  __int64 v526;
  __int64 v527;
  __int64 v528;
  int v529;
  __int64 v530;
  int v531;
  __int64 v532;
  __int64 v533;
  __int64 v534;
  int v535;
  __int64 v536;
  int v537;
  __int64 v538;
  __int64 v539;
  __int64 v540;
  int v541;
  __int64 v542;
  int v543;
  __int64 v544;
  __int64 v545;
  __int64 v546;
  int v547;
  __int64 v548;
  int v549;
  __int64 v550;
  __int64 v551;
  __int64 v552;
  int v553;
  __int64 v554;
  int v555;
  __int64 v556;
  __int64 v557;
  __int64 v558;
  int v559;
  __int64 v560;
  int v561;
  __int64 v562;
  __int64 v563;
  __int64 v564;
  int v565;
  __int64 v566;
  int v567;
  __int64 v568;
  __int64 v569;
  __int64 v570;
  int v571;
  __int64 v572;
  int v573;
  __int64 v574;
  __int64 v575;
  __int64 v576;
  int v577;
  __int64 v578;
  int v579;
  __int64 v580;
  __int64 v581;
  __int64 v582;
  int v583;
  __int64 v584;
  int v585;
  __int64 v586;
  __int64 v587;
  __int64 v588;
  int v589;
  __int64 v590;
  int v591;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    GameManager_a20000(game_sound_g_game_sound);
    result = game_sound_g_game_sound;
    v6 = a2;
    if (a3 >= 1) {
      v8 = (__int64*)(a2 + 8);
      v7 = *(_QWORD*)(v6 + 8);
      v9 = a3;
      v10 = game_sound_g_game_sound;
      v12 = (int*)(v6 + 20);
      v11 = *(int*)(v6 + 20);
      v13 = v11 + 1;
      *(_DWORD*)(v6 + 20) = v11 + 1;
      v14 = *(unsigned __int8*)(v7 + v11);
      v15 = v11 + 2;
      *(_DWORD*)(v6 + 20) = v15;
      v16 = v14 | (*(unsigned __int8*)(v7 + v13) << 8);
      if (v16 != 0) {
        *v12 = v15 + v16;
        result = GameRoutine_60a020(result + 2824, v7 + v15);
      }
      else if ((*(_BYTE*)(result + 2824) & 1) != 0) {
        **(_BYTE**)(result + 2840) = 0;
        *(_QWORD*)(result + 2832) = 0;
      }
      else {
        *(_WORD*)(result + 2824) = 0;
      }
      v17 = *v12;
      v18 = *v8;
      v19 = v17 + 1;
      *v12 = v17 + 1;
      v20 = *(unsigned __int8*)(v18 + v17);
      v21 = v17 + 2;
      *v12 = v21;
      v22 = v20 | (*(unsigned __int8*)(v18 + v19) << 8);
      if (v22 != 0) {
        *v12 = v21 + v22;
        result = GameRoutine_60a020(v10 + 2456, v18 + v21);
      }
      else if ((*(_BYTE*)(v10 + 2456) & 1) != 0) {
        **(_BYTE**)(v10 + 2472) = 0;
        *(_QWORD*)(v10 + 2464) = 0;
      }
      else {
        *(_WORD*)(v10 + 2456) = 0;
      }
      v23 = *v12;
      v24 = *v8;
      v25 = v23 + 1;
      *v12 = v23 + 1;
      v26 = *(unsigned __int8*)(v24 + v23);
      v27 = v23 + 2;
      *v12 = v27;
      v28 = v26 | (*(unsigned __int8*)(v24 + v25) << 8);
      if (v28 != 0) {
        *v12 = v27 + v28;
        result = GameRoutine_60a020(v10 + 2760, v24 + v27);
      }
      else if ((*(_BYTE*)(v10 + 2760) & 1) != 0) {
        **(_BYTE**)(v10 + 2776) = 0;
        *(_QWORD*)(v10 + 2768) = 0;
      }
      else {
        *(_WORD*)(v10 + 2760) = 0;
      }
      v29 = *v12;
      *v12 = v29 + 1;
      *(_DWORD*)(v10 + 2812) = *(unsigned __int8*)(*v8 + v29);
      v30 = *v12;
      *v12 = v30 + 1;
      *(_DWORD*)(v10 + 2808) = *(unsigned __int8*)(*v8 + v30);
      v31 = *v12;
      *v12 = v31 + 1;
      *(_BYTE*)(v10 + 2848) = *(_BYTE*)(*v8 + v31) != 0;
      v32 = *v12;
      *v12 = v32 + 1;
      *(_DWORD*)(v10 + 2180) = *(unsigned __int8*)(*v8 + v32);
      if (v9 <= 3) {
        *(_DWORD*)(v10 + 2184) = 0;
      }
      else {
        v33 = *v12;
        *v12 = v33 + 1;
        *(_DWORD*)(v10 + 2184) = *(unsigned __int8*)(*v8 + v33);
        if (v9 > 5) {
          v34 = *v12;
          v35 = *v8;
          v36 = v34 + 1;
          *v12 = v34 + 1;
          v37 = *(unsigned __int8*)(v35 + v34);
          v38 = v34 + 2;
          *v12 = v38;
          v39 = v37 | (*(unsigned __int8*)(v35 + v36) << 8);
          if (v39 != 0) {
            *v12 = v38 + v39;
            result = GameRoutine_60a020(v10 + 712, v35 + v38);
          }
          else if ((*(_BYTE*)(v10 + 712) & 1) != 0) {
            **(_BYTE**)(v10 + 728) = 0;
            *(_QWORD*)(v10 + 720) = 0;
          }
          else {
            *(_WORD*)(v10 + 712) = 0;
          }
          v406 = *v12;
          v407 = *v8;
          v408 = v406 + 1;
          *v12 = v406 + 1;
          v409 = *(unsigned __int8*)(v407 + v406);
          v410 = v406 + 2;
          *v12 = v410;
          v411 = v409 | (*(unsigned __int8*)(v407 + v408) << 8);
          if (v411 != 0) {
            *v12 = v410 + v411;
            result = GameRoutine_60a020(v10 + 736, v407 + v410);
          }
          else if ((*(_BYTE*)(v10 + 736) & 1) != 0) {
            **(_BYTE**)(v10 + 752) = 0;
            *(_QWORD*)(v10 + 744) = 0;
          }
          else {
            *(_WORD*)(v10 + 736) = 0;
          }
          v412 = *v12;
          v413 = *v8;
          v414 = v412 + 1;
          *v12 = v412 + 1;
          v415 = *(unsigned __int8*)(v413 + v412);
          v416 = v412 + 2;
          *v12 = v416;
          v417 = v415 | (*(unsigned __int8*)(v413 + v414) << 8);
          if (v417 != 0) {
            *v12 = v416 + v417;
            result = GameRoutine_60a020(v10 + 760, v413 + v416);
          }
          else if ((*(_BYTE*)(v10 + 760) & 1) != 0) {
            **(_BYTE**)(v10 + 776) = 0;
            *(_QWORD*)(v10 + 768) = 0;
          }
          else {
            *(_WORD*)(v10 + 760) = 0;
          }
          v418 = *v12;
          v419 = *v8;
          v420 = v418 + 1;
          *v12 = v418 + 1;
          v421 = *(unsigned __int8*)(v419 + v418);
          v422 = v418 + 2;
          *v12 = v422;
          v423 = v421 | (*(unsigned __int8*)(v419 + v420) << 8);
          if (v423 != 0) {
            *v12 = v422 + v423;
            result = GameRoutine_60a020(v10 + 784, v419 + v422);
          }
          else if ((*(_BYTE*)(v10 + 784) & 1) != 0) {
            **(_BYTE**)(v10 + 800) = 0;
            *(_QWORD*)(v10 + 792) = 0;
          }
          else {
            *(_WORD*)(v10 + 784) = 0;
          }
          v424 = *v12;
          v425 = *v8;
          v426 = v424 + 1;
          *v12 = v424 + 1;
          v427 = *(unsigned __int8*)(v425 + v424);
          v428 = v424 + 2;
          *v12 = v428;
          v429 = v427 | (*(unsigned __int8*)(v425 + v426) << 8);
          if (v429 != 0) {
            *v12 = v428 + v429;
            result = GameRoutine_60a020(v10 + 808, v425 + v428);
          }
          else if ((*(_BYTE*)(v10 + 808) & 1) != 0) {
            **(_BYTE**)(v10 + 824) = 0;
            *(_QWORD*)(v10 + 816) = 0;
          }
          else {
            *(_WORD*)(v10 + 808) = 0;
          }
          v430 = *v12;
          v431 = *v8;
          v432 = v430 + 1;
          *v12 = v430 + 1;
          v433 = *(unsigned __int8*)(v431 + v430);
          v434 = v430 + 2;
          *v12 = v434;
          v435 = v433 | (*(unsigned __int8*)(v431 + v432) << 8);
          if (v435 != 0) {
            *v12 = v434 + v435;
            result = GameRoutine_60a020(v10 + 832, v431 + v434);
          }
          else if ((*(_BYTE*)(v10 + 832) & 1) != 0) {
            **(_BYTE**)(v10 + 848) = 0;
            *(_QWORD*)(v10 + 840) = 0;
          }
          else {
            *(_WORD*)(v10 + 832) = 0;
          }
          v436 = *v12;
          v437 = *v8;
          v438 = v436 + 1;
          *v12 = v436 + 1;
          v439 = *(unsigned __int8*)(v437 + v436);
          v440 = v436 + 2;
          *v12 = v440;
          v441 = v439 | (*(unsigned __int8*)(v437 + v438) << 8);
          if (v441 != 0) {
            *v12 = v440 + v441;
            result = GameRoutine_60a020(v10 + 856, v437 + v440);
          }
          else if ((*(_BYTE*)(v10 + 856) & 1) != 0) {
            **(_BYTE**)(v10 + 872) = 0;
            *(_QWORD*)(v10 + 864) = 0;
          }
          else {
            *(_WORD*)(v10 + 856) = 0;
          }
          v442 = *v12;
          v443 = *v8;
          v444 = v442 + 1;
          *v12 = v442 + 1;
          v445 = *(unsigned __int8*)(v443 + v442);
          v446 = v442 + 2;
          *v12 = v446;
          v447 = v445 | (*(unsigned __int8*)(v443 + v444) << 8);
          if (v447 != 0) {
            *v12 = v446 + v447;
            result = GameRoutine_60a020(v10 + 880, v443 + v446);
          }
          else if ((*(_BYTE*)(v10 + 880) & 1) != 0) {
            **(_BYTE**)(v10 + 896) = 0;
            *(_QWORD*)(v10 + 888) = 0;
          }
          else {
            *(_WORD*)(v10 + 880) = 0;
          }
          v448 = *v12;
          v449 = *v8;
          v450 = v448 + 1;
          *v12 = v448 + 1;
          v451 = *(unsigned __int8*)(v449 + v448);
          v452 = v448 + 2;
          *v12 = v452;
          v453 = v451 | (*(unsigned __int8*)(v449 + v450) << 8);
          if (v453 != 0) {
            *v12 = v452 + v453;
            result = GameRoutine_60a020(v10 + 904, v449 + v452);
          }
          else if ((*(_BYTE*)(v10 + 904) & 1) != 0) {
            **(_BYTE**)(v10 + 920) = 0;
            *(_QWORD*)(v10 + 912) = 0;
          }
          else {
            *(_WORD*)(v10 + 904) = 0;
          }
          v454 = *v12;
          v455 = *v8;
          v456 = v454 + 1;
          *v12 = v454 + 1;
          v457 = *(unsigned __int8*)(v455 + v454);
          v458 = v454 + 2;
          *v12 = v458;
          v459 = v457 | (*(unsigned __int8*)(v455 + v456) << 8);
          if (v459 != 0) {
            *v12 = v458 + v459;
            result = GameRoutine_60a020(v10 + 928, v455 + v458);
          }
          else if ((*(_BYTE*)(v10 + 928) & 1) != 0) {
            **(_BYTE**)(v10 + 944) = 0;
            *(_QWORD*)(v10 + 936) = 0;
          }
          else {
            *(_WORD*)(v10 + 928) = 0;
          }
          v460 = *v12;
          v461 = *v8;
          v462 = v460 + 1;
          *v12 = v460 + 1;
          v463 = *(unsigned __int8*)(v461 + v460);
          v464 = v460 + 2;
          *v12 = v464;
          v465 = v463 | (*(unsigned __int8*)(v461 + v462) << 8);
          if (v465 != 0) {
            *v12 = v464 + v465;
            result = GameRoutine_60a020(v10 + 952, v461 + v464);
          }
          else if ((*(_BYTE*)(v10 + 952) & 1) != 0) {
            **(_BYTE**)(v10 + 968) = 0;
            *(_QWORD*)(v10 + 960) = 0;
          }
          else {
            *(_WORD*)(v10 + 952) = 0;
          }
          v466 = *v12;
          v467 = *v8;
          v468 = v466 + 1;
          *v12 = v466 + 1;
          v469 = *(unsigned __int8*)(v467 + v466);
          v470 = v466 + 2;
          *v12 = v470;
          v471 = v469 | (*(unsigned __int8*)(v467 + v468) << 8);
          if (v471 != 0) {
            *v12 = v470 + v471;
            result = GameRoutine_60a020(v10 + 976, v467 + v470);
          }
          else if ((*(_BYTE*)(v10 + 976) & 1) != 0) {
            **(_BYTE**)(v10 + 992) = 0;
            *(_QWORD*)(v10 + 984) = 0;
          }
          else {
            *(_WORD*)(v10 + 976) = 0;
          }
          v472 = *v12;
          v473 = *v8;
          v474 = v472 + 1;
          *v12 = v472 + 1;
          v475 = *(unsigned __int8*)(v473 + v472);
          v476 = v472 + 2;
          *v12 = v476;
          v477 = v475 | (*(unsigned __int8*)(v473 + v474) << 8);
          if (v477 != 0) {
            *v12 = v476 + v477;
            result = GameRoutine_60a020(v10 + 1000, v473 + v476);
          }
          else if ((*(_BYTE*)(v10 + 1000) & 1) != 0) {
            **(_BYTE**)(v10 + 1016) = 0;
            *(_QWORD*)(v10 + 1008) = 0;
          }
          else {
            *(_WORD*)(v10 + 1000) = 0;
          }
          v478 = *v12;
          v479 = *v8;
          v480 = v478 + 1;
          *v12 = v478 + 1;
          v481 = *(unsigned __int8*)(v479 + v478);
          v482 = v478 + 2;
          *v12 = v482;
          v483 = v481 | (*(unsigned __int8*)(v479 + v480) << 8);
          if (v483 != 0) {
            *v12 = v482 + v483;
            result = GameRoutine_60a020(v10 + 1024, v479 + v482);
          }
          else if ((*(_BYTE*)(v10 + 1024) & 1) != 0) {
            **(_BYTE**)(v10 + 1040) = 0;
            *(_QWORD*)(v10 + 1032) = 0;
          }
          else {
            *(_WORD*)(v10 + 1024) = 0;
          }
          v484 = *v12;
          v485 = *v8;
          v486 = v484 + 1;
          *v12 = v484 + 1;
          v487 = *(unsigned __int8*)(v485 + v484);
          v488 = v484 + 2;
          *v12 = v488;
          v489 = v487 | (*(unsigned __int8*)(v485 + v486) << 8);
          if (v489 != 0) {
            *v12 = v488 + v489;
            result = GameRoutine_60a020(v10 + 1048, v485 + v488);
          }
          else if ((*(_BYTE*)(v10 + 1048) & 1) != 0) {
            **(_BYTE**)(v10 + 1064) = 0;
            *(_QWORD*)(v10 + 1056) = 0;
          }
          else {
            *(_WORD*)(v10 + 1048) = 0;
          }
          v490 = *v12;
          v491 = *v8;
          v492 = v490 + 1;
          *v12 = v490 + 1;
          v493 = *(unsigned __int8*)(v491 + v490);
          v494 = v490 + 2;
          *v12 = v494;
          v495 = v493 | (*(unsigned __int8*)(v491 + v492) << 8);
          if (v495 != 0) {
            *v12 = v494 + v495;
            result = GameRoutine_60a020(v10 + 1072, v491 + v494);
          }
          else if ((*(_BYTE*)(v10 + 1072) & 1) != 0) {
            **(_BYTE**)(v10 + 1088) = 0;
            *(_QWORD*)(v10 + 1080) = 0;
          }
          else {
            *(_WORD*)(v10 + 1072) = 0;
          }
          v496 = *v12;
          v497 = *v8;
          v498 = v496 + 1;
          *v12 = v496 + 1;
          v499 = *(unsigned __int8*)(v497 + v496);
          v500 = v496 + 2;
          *v12 = v500;
          v501 = v499 | (*(unsigned __int8*)(v497 + v498) << 8);
          if (v501 != 0) {
            *v12 = v500 + v501;
            result = GameRoutine_60a020(v10 + 1096, v497 + v500);
          }
          else if ((*(_BYTE*)(v10 + 1096) & 1) != 0) {
            **(_BYTE**)(v10 + 1112) = 0;
            *(_QWORD*)(v10 + 1104) = 0;
          }
          else {
            *(_WORD*)(v10 + 1096) = 0;
          }
          v502 = *v12;
          v503 = *v8;
          v504 = v502 + 1;
          *v12 = v502 + 1;
          v505 = *(unsigned __int8*)(v503 + v502);
          v506 = v502 + 2;
          *v12 = v506;
          v507 = v505 | (*(unsigned __int8*)(v503 + v504) << 8);
          if (v507 != 0) {
            *v12 = v506 + v507;
            result = GameRoutine_60a020(v10 + 1120, v503 + v506);
          }
          else if ((*(_BYTE*)(v10 + 1120) & 1) != 0) {
            **(_BYTE**)(v10 + 1136) = 0;
            *(_QWORD*)(v10 + 1128) = 0;
          }
          else {
            *(_WORD*)(v10 + 1120) = 0;
          }
          v508 = *v12;
          v509 = *v8;
          v510 = v508 + 1;
          *v12 = v508 + 1;
          v511 = *(unsigned __int8*)(v509 + v508);
          v512 = v508 + 2;
          *v12 = v512;
          v513 = v511 | (*(unsigned __int8*)(v509 + v510) << 8);
          if (v513 != 0) {
            *v12 = v512 + v513;
            result = GameRoutine_60a020(v10 + 1144, v509 + v512);
          }
          else if ((*(_BYTE*)(v10 + 1144) & 1) != 0) {
            **(_BYTE**)(v10 + 1160) = 0;
            *(_QWORD*)(v10 + 1152) = 0;
          }
          else {
            *(_WORD*)(v10 + 1144) = 0;
          }
          v514 = *v12;
          v515 = *v8;
          v516 = v514 + 1;
          *v12 = v514 + 1;
          v517 = *(unsigned __int8*)(v515 + v514);
          v518 = v514 + 2;
          *v12 = v518;
          v519 = v517 | (*(unsigned __int8*)(v515 + v516) << 8);
          if (v519 != 0) {
            *v12 = v518 + v519;
            result = GameRoutine_60a020(v10 + 1168, v515 + v518);
          }
          else if ((*(_BYTE*)(v10 + 1168) & 1) != 0) {
            **(_BYTE**)(v10 + 1184) = 0;
            *(_QWORD*)(v10 + 1176) = 0;
          }
          else {
            *(_WORD*)(v10 + 1168) = 0;
          }
          v520 = *v12;
          v521 = *v8;
          v522 = v520 + 1;
          *v12 = v520 + 1;
          v523 = *(unsigned __int8*)(v521 + v520);
          v524 = v520 + 2;
          *v12 = v524;
          v525 = v523 | (*(unsigned __int8*)(v521 + v522) << 8);
          if (v525 != 0) {
            *v12 = v524 + v525;
            result = GameRoutine_60a020(v10 + 1192, v521 + v524);
          }
          else if ((*(_BYTE*)(v10 + 1192) & 1) != 0) {
            **(_BYTE**)(v10 + 1208) = 0;
            *(_QWORD*)(v10 + 1200) = 0;
          }
          else {
            *(_WORD*)(v10 + 1192) = 0;
          }
          v526 = *v12;
          v527 = *v8;
          v528 = v526 + 1;
          *v12 = v526 + 1;
          v529 = *(unsigned __int8*)(v527 + v526);
          v530 = v526 + 2;
          *v12 = v530;
          v531 = v529 | (*(unsigned __int8*)(v527 + v528) << 8);
          if (v531 != 0) {
            *v12 = v530 + v531;
            result = GameRoutine_60a020(v10 + 1216, v527 + v530);
          }
          else if ((*(_BYTE*)(v10 + 1216) & 1) != 0) {
            **(_BYTE**)(v10 + 1232) = 0;
            *(_QWORD*)(v10 + 1224) = 0;
          }
          else {
            *(_WORD*)(v10 + 1216) = 0;
          }
          v532 = *v12;
          v533 = *v8;
          v534 = v532 + 1;
          *v12 = v532 + 1;
          v535 = *(unsigned __int8*)(v533 + v532);
          v536 = v532 + 2;
          *v12 = v536;
          v537 = v535 | (*(unsigned __int8*)(v533 + v534) << 8);
          if (v537 != 0) {
            *v12 = v536 + v537;
            result = GameRoutine_60a020(v10 + 1240, v533 + v536);
          }
          else if ((*(_BYTE*)(v10 + 1240) & 1) != 0) {
            **(_BYTE**)(v10 + 1256) = 0;
            *(_QWORD*)(v10 + 1248) = 0;
          }
          else {
            *(_WORD*)(v10 + 1240) = 0;
          }
          v538 = *v12;
          v539 = *v8;
          v540 = v538 + 1;
          *v12 = v538 + 1;
          v541 = *(unsigned __int8*)(v539 + v538);
          v542 = v538 + 2;
          *v12 = v542;
          v543 = v541 | (*(unsigned __int8*)(v539 + v540) << 8);
          if (v543 != 0) {
            *v12 = v542 + v543;
            result = GameRoutine_60a020(v10 + 1264, v539 + v542);
          }
          else if ((*(_BYTE*)(v10 + 1264) & 1) != 0) {
            **(_BYTE**)(v10 + 1280) = 0;
            *(_QWORD*)(v10 + 1272) = 0;
          }
          else {
            *(_WORD*)(v10 + 1264) = 0;
          }
          v544 = *v12;
          v545 = *v8;
          v546 = v544 + 1;
          *v12 = v544 + 1;
          v547 = *(unsigned __int8*)(v545 + v544);
          v548 = v544 + 2;
          *v12 = v548;
          v549 = v547 | (*(unsigned __int8*)(v545 + v546) << 8);
          if (v549 != 0) {
            *v12 = v548 + v549;
            result = GameRoutine_60a020(v10 + 1288, v545 + v548);
          }
          else if ((*(_BYTE*)(v10 + 1288) & 1) != 0) {
            **(_BYTE**)(v10 + 1304) = 0;
            *(_QWORD*)(v10 + 1296) = 0;
          }
          else {
            *(_WORD*)(v10 + 1288) = 0;
          }
          v550 = *v12;
          v551 = *v8;
          v552 = v550 + 1;
          *v12 = v550 + 1;
          v553 = *(unsigned __int8*)(v551 + v550);
          v554 = v550 + 2;
          *v12 = v554;
          v555 = v553 | (*(unsigned __int8*)(v551 + v552) << 8);
          if (v555 != 0) {
            *v12 = v554 + v555;
            result = GameRoutine_60a020(v10 + 1312, v551 + v554);
          }
          else if ((*(_BYTE*)(v10 + 1312) & 1) != 0) {
            **(_BYTE**)(v10 + 1328) = 0;
            *(_QWORD*)(v10 + 1320) = 0;
          }
          else {
            *(_WORD*)(v10 + 1312) = 0;
          }
          v556 = *v12;
          v557 = *v8;
          v558 = v556 + 1;
          *v12 = v556 + 1;
          v559 = *(unsigned __int8*)(v557 + v556);
          v560 = v556 + 2;
          *v12 = v560;
          v561 = v559 | (*(unsigned __int8*)(v557 + v558) << 8);
          if (v561 != 0) {
            *v12 = v560 + v561;
            result = GameRoutine_60a020(v10 + 1336, v557 + v560);
          }
          else if ((*(_BYTE*)(v10 + 1336) & 1) != 0) {
            **(_BYTE**)(v10 + 1352) = 0;
            *(_QWORD*)(v10 + 1344) = 0;
          }
          else {
            *(_WORD*)(v10 + 1336) = 0;
          }
          v562 = *v12;
          v563 = *v8;
          v564 = v562 + 1;
          *v12 = v562 + 1;
          v565 = *(unsigned __int8*)(v563 + v562);
          v566 = v562 + 2;
          *v12 = v566;
          v567 = v565 | (*(unsigned __int8*)(v563 + v564) << 8);
          if (v567 != 0) {
            *v12 = v566 + v567;
            result = GameRoutine_60a020(v10 + 1360, v563 + v566);
          }
          else if ((*(_BYTE*)(v10 + 1360) & 1) != 0) {
            **(_BYTE**)(v10 + 1376) = 0;
            *(_QWORD*)(v10 + 1368) = 0;
          }
          else {
            *(_WORD*)(v10 + 1360) = 0;
          }
          v568 = *v12;
          v569 = *v8;
          v570 = v568 + 1;
          *v12 = v568 + 1;
          v571 = *(unsigned __int8*)(v569 + v568);
          v572 = v568 + 2;
          *v12 = v572;
          v573 = v571 | (*(unsigned __int8*)(v569 + v570) << 8);
          if (v573 != 0) {
            *v12 = v572 + v573;
            result = GameRoutine_60a020(v10 + 1384, v569 + v572);
          }
          else if ((*(_BYTE*)(v10 + 1384) & 1) != 0) {
            **(_BYTE**)(v10 + 1400) = 0;
            *(_QWORD*)(v10 + 1392) = 0;
          }
          else {
            *(_WORD*)(v10 + 1384) = 0;
          }
          v574 = *v12;
          v575 = *v8;
          v576 = v574 + 1;
          *v12 = v574 + 1;
          v577 = *(unsigned __int8*)(v575 + v574);
          v578 = v574 + 2;
          *v12 = v578;
          v579 = v577 | (*(unsigned __int8*)(v575 + v576) << 8);
          if (v579 != 0) {
            *v12 = v578 + v579;
            result = GameRoutine_60a020(v10 + 1408, v575 + v578);
          }
          else if ((*(_BYTE*)(v10 + 1408) & 1) != 0) {
            **(_BYTE**)(v10 + 1424) = 0;
            *(_QWORD*)(v10 + 1416) = 0;
          }
          else {
            *(_WORD*)(v10 + 1408) = 0;
          }
          v580 = *v12;
          v581 = *v8;
          v582 = v580 + 1;
          *v12 = v580 + 1;
          v583 = *(unsigned __int8*)(v581 + v580);
          v584 = v580 + 2;
          *v12 = v584;
          v585 = v583 | (*(unsigned __int8*)(v581 + v582) << 8);
          if (v585 != 0) {
            *v12 = v584 + v585;
            result = GameRoutine_60a020(v10 + 1432, v581 + v584);
          }
          else if ((*(_BYTE*)(v10 + 1432) & 1) != 0) {
            **(_BYTE**)(v10 + 1448) = 0;
            *(_QWORD*)(v10 + 1440) = 0;
          }
          else {
            *(_WORD*)(v10 + 1432) = 0;
          }
          v586 = *v12;
          v587 = *v8;
          v588 = v586 + 1;
          *v12 = v586 + 1;
          v589 = *(unsigned __int8*)(v587 + v586);
          v590 = v586 + 2;
          *v12 = v590;
          v591 = v589 | (*(unsigned __int8*)(v587 + v588) << 8);
          if (v591 != 0) {
            *v12 = v590 + v591;
            result = GameRoutine_60a020(v10 + 1456, v587 + v590);
          }
          else if ((*(_BYTE*)(v10 + 1456) & 1) != 0) {
            **(_BYTE**)(v10 + 1472) = 0;
            *(_QWORD*)(v10 + 1464) = 0;
          }
          else {
            *(_WORD*)(v10 + 1456) = 0;
          }
          goto LABEL_154;
        }
      }
      v40 = *v12;
      v41 = *v8;
      v42 = v40 + 1;
      *v12 = v40 + 1;
      v43 = *(unsigned __int8*)(v41 + v40);
      v44 = v40 + 2;
      *v12 = v44;
      v45 = v43 | (*(unsigned __int8*)(v41 + v42) << 8);
      if (v45 != 0) {
        *v12 = v44 + v45;
        result = GameRoutine_60a020(v10 + 712, v41 + v44);
      }
      else if ((*(_BYTE*)(v10 + 712) & 1) != 0) {
        **(_BYTE**)(v10 + 728) = 0;
        *(_QWORD*)(v10 + 720) = 0;
      }
      else {
        *(_WORD*)(v10 + 712) = 0;
      }
      v46 = *v12;
      v47 = *v8;
      v48 = v46 + 1;
      *v12 = v46 + 1;
      v49 = *(unsigned __int8*)(v47 + v46);
      v50 = v46 + 2;
      *v12 = v50;
      v51 = v49 | (*(unsigned __int8*)(v47 + v48) << 8);
      if (v51 != 0) {
        *v12 = v50 + v51;
        result = GameRoutine_60a020(v10 + 736, v47 + v50);
      }
      else if ((*(_BYTE*)(v10 + 736) & 1) != 0) {
        **(_BYTE**)(v10 + 752) = 0;
        *(_QWORD*)(v10 + 744) = 0;
      }
      else {
        *(_WORD*)(v10 + 736) = 0;
      }
      v52 = *v12;
      v53 = *v8;
      v54 = v52 + 1;
      *v12 = v52 + 1;
      v55 = *(unsigned __int8*)(v53 + v52);
      v56 = v52 + 2;
      *v12 = v56;
      v57 = v55 | (*(unsigned __int8*)(v53 + v54) << 8);
      if (v57 != 0) {
        *v12 = v56 + v57;
        result = GameRoutine_60a020(v10 + 760, v53 + v56);
      }
      else if ((*(_BYTE*)(v10 + 760) & 1) != 0) {
        **(_BYTE**)(v10 + 776) = 0;
        *(_QWORD*)(v10 + 768) = 0;
      }
      else {
        *(_WORD*)(v10 + 760) = 0;
      }
      v58 = *v12;
      v59 = *v8;
      v60 = v58 + 1;
      *v12 = v58 + 1;
      v61 = *(unsigned __int8*)(v59 + v58);
      v62 = v58 + 2;
      *v12 = v62;
      v63 = v61 | (*(unsigned __int8*)(v59 + v60) << 8);
      if (v63 != 0) {
        *v12 = v62 + v63;
        result = GameRoutine_60a020(v10 + 784, v59 + v62);
      }
      else if ((*(_BYTE*)(v10 + 784) & 1) != 0) {
        **(_BYTE**)(v10 + 800) = 0;
        *(_QWORD*)(v10 + 792) = 0;
      }
      else {
        *(_WORD*)(v10 + 784) = 0;
      }
      v64 = *v12;
      v65 = *v8;
      v66 = v64 + 1;
      *v12 = v64 + 1;
      v67 = *(unsigned __int8*)(v65 + v64);
      v68 = v64 + 2;
      *v12 = v68;
      v69 = v67 | (*(unsigned __int8*)(v65 + v66) << 8);
      if (v69 != 0) {
        *v12 = v68 + v69;
        result = GameRoutine_60a020(v10 + 808, v65 + v68);
      }
      else if ((*(_BYTE*)(v10 + 808) & 1) != 0) {
        **(_BYTE**)(v10 + 824) = 0;
        *(_QWORD*)(v10 + 816) = 0;
      }
      else {
        *(_WORD*)(v10 + 808) = 0;
      }
      v70 = *v12;
      v71 = *v8;
      v72 = v70 + 1;
      *v12 = v70 + 1;
      v73 = *(unsigned __int8*)(v71 + v70);
      v74 = v70 + 2;
      *v12 = v74;
      v75 = v73 | (*(unsigned __int8*)(v71 + v72) << 8);
      if (v75 != 0) {
        *v12 = v74 + v75;
        result = GameRoutine_60a020(v10 + 832, v71 + v74);
      }
      else if ((*(_BYTE*)(v10 + 832) & 1) != 0) {
        **(_BYTE**)(v10 + 848) = 0;
        *(_QWORD*)(v10 + 840) = 0;
      }
      else {
        *(_WORD*)(v10 + 832) = 0;
      }
      v76 = *v12;
      v77 = *v8;
      v78 = v76 + 1;
      *v12 = v76 + 1;
      v79 = *(unsigned __int8*)(v77 + v76);
      v80 = v76 + 2;
      *v12 = v80;
      v81 = v79 | (*(unsigned __int8*)(v77 + v78) << 8);
      if (v81 != 0) {
        *v12 = v80 + v81;
        result = GameRoutine_60a020(v10 + 856, v77 + v80);
      }
      else if ((*(_BYTE*)(v10 + 856) & 1) != 0) {
        **(_BYTE**)(v10 + 872) = 0;
        *(_QWORD*)(v10 + 864) = 0;
      }
      else {
        *(_WORD*)(v10 + 856) = 0;
      }
      v82 = *v12;
      v83 = *v8;
      v84 = v82 + 1;
      *v12 = v82 + 1;
      v85 = *(unsigned __int8*)(v83 + v82);
      v86 = v82 + 2;
      *v12 = v86;
      v87 = v85 | (*(unsigned __int8*)(v83 + v84) << 8);
      if (v87 != 0) {
        *v12 = v86 + v87;
        result = GameRoutine_60a020(v10 + 880, v83 + v86);
      }
      else if ((*(_BYTE*)(v10 + 880) & 1) != 0) {
        **(_BYTE**)(v10 + 896) = 0;
        *(_QWORD*)(v10 + 888) = 0;
      }
      else {
        *(_WORD*)(v10 + 880) = 0;
      }
      v88 = *v12;
      v89 = *v8;
      v90 = v88 + 1;
      *v12 = v88 + 1;
      v91 = *(unsigned __int8*)(v89 + v88);
      v92 = v88 + 2;
      *v12 = v92;
      v93 = v91 | (*(unsigned __int8*)(v89 + v90) << 8);
      if (v93 != 0) {
        *v12 = v92 + v93;
        result = GameRoutine_60a020(v10 + 904, v89 + v92);
      }
      else if ((*(_BYTE*)(v10 + 904) & 1) != 0) {
        **(_BYTE**)(v10 + 920) = 0;
        *(_QWORD*)(v10 + 912) = 0;
      }
      else {
        *(_WORD*)(v10 + 904) = 0;
      }
      v94 = *v12;
      v95 = *v8;
      v96 = v94 + 1;
      *v12 = v94 + 1;
      v97 = *(unsigned __int8*)(v95 + v94);
      v98 = v94 + 2;
      *v12 = v98;
      v99 = v97 | (*(unsigned __int8*)(v95 + v96) << 8);
      if (v99 != 0) {
        *v12 = v98 + v99;
        result = GameRoutine_60a020(v10 + 928, v95 + v98);
      }
      else if ((*(_BYTE*)(v10 + 928) & 1) != 0) {
        **(_BYTE**)(v10 + 944) = 0;
        *(_QWORD*)(v10 + 936) = 0;
      }
      else {
        *(_WORD*)(v10 + 928) = 0;
      }
      v100 = *v12;
      v101 = *v8;
      v102 = v100 + 1;
      *v12 = v100 + 1;
      v103 = *(unsigned __int8*)(v101 + v100);
      v104 = v100 + 2;
      *v12 = v104;
      v105 = v103 | (*(unsigned __int8*)(v101 + v102) << 8);
      if (v105 != 0) {
        *v12 = v104 + v105;
        result = GameRoutine_60a020(v10 + 952, v101 + v104);
      }
      else if ((*(_BYTE*)(v10 + 952) & 1) != 0) {
        **(_BYTE**)(v10 + 968) = 0;
        *(_QWORD*)(v10 + 960) = 0;
      }
      else {
        *(_WORD*)(v10 + 952) = 0;
      }
      v106 = *v12;
      v107 = *v8;
      v108 = v106 + 1;
      *v12 = v106 + 1;
      v109 = *(unsigned __int8*)(v107 + v106);
      v110 = v106 + 2;
      *v12 = v110;
      v111 = v109 | (*(unsigned __int8*)(v107 + v108) << 8);
      if (v111 != 0) {
        *v12 = v110 + v111;
        result = GameRoutine_60a020(v10 + 976, v107 + v110);
      }
      else if ((*(_BYTE*)(v10 + 976) & 1) != 0) {
        **(_BYTE**)(v10 + 992) = 0;
        *(_QWORD*)(v10 + 984) = 0;
      }
      else {
        *(_WORD*)(v10 + 976) = 0;
      }
      v112 = *v12;
      v113 = *v8;
      v114 = v112 + 1;
      *v12 = v112 + 1;
      v115 = *(unsigned __int8*)(v113 + v112);
      v116 = v112 + 2;
      *v12 = v116;
      v117 = v115 | (*(unsigned __int8*)(v113 + v114) << 8);
      if (v117 != 0) {
        *v12 = v116 + v117;
        result = GameRoutine_60a020(v10 + 1000, v113 + v116);
      }
      else if ((*(_BYTE*)(v10 + 1000) & 1) != 0) {
        **(_BYTE**)(v10 + 1016) = 0;
        *(_QWORD*)(v10 + 1008) = 0;
      }
      else {
        *(_WORD*)(v10 + 1000) = 0;
      }
      v118 = *v12;
      v119 = *v8;
      v120 = v118 + 1;
      *v12 = v118 + 1;
      v121 = *(unsigned __int8*)(v119 + v118);
      v122 = v118 + 2;
      *v12 = v122;
      v123 = v121 | (*(unsigned __int8*)(v119 + v120) << 8);
      if (v123 != 0) {
        *v12 = v122 + v123;
        result = GameRoutine_60a020(v10 + 1024, v119 + v122);
      }
      else if ((*(_BYTE*)(v10 + 1024) & 1) != 0) {
        **(_BYTE**)(v10 + 1040) = 0;
        *(_QWORD*)(v10 + 1032) = 0;
      }
      else {
        *(_WORD*)(v10 + 1024) = 0;
      }
      v124 = *v12;
      v125 = *v8;
      v126 = v124 + 1;
      *v12 = v124 + 1;
      v127 = *(unsigned __int8*)(v125 + v124);
      v128 = v124 + 2;
      *v12 = v128;
      v129 = v127 | (*(unsigned __int8*)(v125 + v126) << 8);
      if (v129 != 0) {
        *v12 = v128 + v129;
        result = GameRoutine_60a020(v10 + 1048, v125 + v128);
      }
      else if ((*(_BYTE*)(v10 + 1048) & 1) != 0) {
        **(_BYTE**)(v10 + 1064) = 0;
        *(_QWORD*)(v10 + 1056) = 0;
      }
      else {
        *(_WORD*)(v10 + 1048) = 0;
      }
      v130 = *v12;
      v131 = *v8;
      v132 = v130 + 1;
      *v12 = v130 + 1;
      v133 = *(unsigned __int8*)(v131 + v130);
      v134 = v130 + 2;
      *v12 = v134;
      v135 = v133 | (*(unsigned __int8*)(v131 + v132) << 8);
      if (v135 != 0) {
        *v12 = v134 + v135;
        result = GameRoutine_60a020(v10 + 1072, v131 + v134);
        if ((*(_BYTE*)(v10 + 1096) & 1) == 0) {
          goto LABEL_107;
        }
      LABEL_105:
        v136 = *(_BYTE**)(v10 + 1112);
        *(_QWORD*)(v10 + 1104) = 0;
      LABEL_108:
        *v136 = 0;
        if ((*(_BYTE*)(v10 + 1120) & 1) != 0) {
          v137 = *(_BYTE**)(v10 + 1136);
          *(_QWORD*)(v10 + 1128) = 0;
        }
        else {
          v137 = (_BYTE*)(v10 + 1121);
          *(_BYTE*)(v10 + 1120) = 0;
        }
        *v137 = 0;
        if ((*(_BYTE*)(v10 + 1144) & 1) != 0) {
          v138 = *(_BYTE**)(v10 + 1160);
          *(_QWORD*)(v10 + 1152) = 0;
        }
        else {
          v138 = (_BYTE*)(v10 + 1145);
          *(_BYTE*)(v10 + 1144) = 0;
        }
        *v138 = 0;
        if ((*(_BYTE*)(v10 + 1168) & 1) != 0) {
          v139 = *(_BYTE**)(v10 + 1184);
          *(_QWORD*)(v10 + 1176) = 0;
        }
        else {
          v139 = (_BYTE*)(v10 + 1169);
          *(_BYTE*)(v10 + 1168) = 0;
        }
        *v139 = 0;
        if ((*(_BYTE*)(v10 + 1192) & 1) != 0) {
          v140 = *(_BYTE**)(v10 + 1208);
          *(_QWORD*)(v10 + 1200) = 0;
        }
        else {
          v140 = (_BYTE*)(v10 + 1193);
          *(_BYTE*)(v10 + 1192) = 0;
        }
        *v140 = 0;
        if ((*(_BYTE*)(v10 + 1216) & 1) != 0) {
          v141 = *(_BYTE**)(v10 + 1232);
          *(_QWORD*)(v10 + 1224) = 0;
        }
        else {
          v141 = (_BYTE*)(v10 + 1217);
          *(_BYTE*)(v10 + 1216) = 0;
        }
        *v141 = 0;
        if ((*(_BYTE*)(v10 + 1240) & 1) != 0) {
          v142 = *(_BYTE**)(v10 + 1256);
          *(_QWORD*)(v10 + 1248) = 0;
        }
        else {
          v142 = (_BYTE*)(v10 + 1241);
          *(_BYTE*)(v10 + 1240) = 0;
        }
        *v142 = 0;
        if ((*(_BYTE*)(v10 + 1264) & 1) != 0) {
          v143 = *(_BYTE**)(v10 + 1280);
          *(_QWORD*)(v10 + 1272) = 0;
        }
        else {
          v143 = (_BYTE*)(v10 + 1265);
          *(_BYTE*)(v10 + 1264) = 0;
        }
        *v143 = 0;
        if ((*(_BYTE*)(v10 + 1288) & 1) != 0) {
          v144 = *(_BYTE**)(v10 + 1304);
          *(_QWORD*)(v10 + 1296) = 0;
        }
        else {
          v144 = (_BYTE*)(v10 + 1289);
          *(_BYTE*)(v10 + 1288) = 0;
        }
        *v144 = 0;
        if ((*(_BYTE*)(v10 + 1312) & 1) != 0) {
          v145 = *(_BYTE**)(v10 + 1328);
          *(_QWORD*)(v10 + 1320) = 0;
        }
        else {
          v145 = (_BYTE*)(v10 + 1313);
          *(_BYTE*)(v10 + 1312) = 0;
        }
        *v145 = 0;
        if ((*(_BYTE*)(v10 + 1336) & 1) != 0) {
          v146 = *(_BYTE**)(v10 + 1352);
          *(_QWORD*)(v10 + 1344) = 0;
        }
        else {
          v146 = (_BYTE*)(v10 + 1337);
          *(_BYTE*)(v10 + 1336) = 0;
        }
        *v146 = 0;
        if ((*(_BYTE*)(v10 + 1360) & 1) != 0) {
          v147 = *(_BYTE**)(v10 + 1376);
          *(_QWORD*)(v10 + 1368) = 0;
        }
        else {
          v147 = (_BYTE*)(v10 + 1361);
          *(_BYTE*)(v10 + 1360) = 0;
        }
        *v147 = 0;
        if ((*(_BYTE*)(v10 + 1384) & 1) != 0) {
          v148 = *(_BYTE**)(v10 + 1400);
          *(_QWORD*)(v10 + 1392) = 0;
        }
        else {
          v148 = (_BYTE*)(v10 + 1385);
          *(_BYTE*)(v10 + 1384) = 0;
        }
        *v148 = 0;
        if ((*(_BYTE*)(v10 + 1408) & 1) != 0) {
          v149 = *(_BYTE**)(v10 + 1424);
          *(_QWORD*)(v10 + 1416) = 0;
        }
        else {
          v149 = (_BYTE*)(v10 + 1409);
          *(_BYTE*)(v10 + 1408) = 0;
        }
        *v149 = 0;
        if ((*(_BYTE*)(v10 + 1432) & 1) != 0) {
          v150 = *(_BYTE**)(v10 + 1448);
          *(_QWORD*)(v10 + 1440) = 0;
        }
        else {
          v150 = (_BYTE*)(v10 + 1433);
          *(_BYTE*)(v10 + 1432) = 0;
        }
        *v150 = 0;
        if ((*(_BYTE*)(v10 + 1456) & 1) != 0) {
          v151 = *(_BYTE**)(v10 + 1472);
          *(_QWORD*)(v10 + 1464) = 0;
        }
        else {
          v151 = (_BYTE*)(v10 + 1457);
          *(_BYTE*)(v10 + 1456) = 0;
        }
        *v151 = 0;
      LABEL_154:
        v152 = *v12;
        *v12 = v152 + 1;
        *(_BYTE*)(v10 + 1480) = *(_BYTE*)(*v8 + v152);
        v153 = *v12;
        v154 = *v8;
        v155 = v153 + 1;
        *v12 = v153 + 1;
        v156 = *(unsigned __int8*)(v154 + v153);
        v157 = v153 + 2;
        *v12 = v157;
        v158 = v156 | (*(unsigned __int8*)(v154 + v155) << 8);
        if (v158 != 0) {
          *v12 = v157 + v158;
          result = GameRoutine_60a020(v10 + 1488, v154 + v157);
        }
        else if ((*(_BYTE*)(v10 + 1488) & 1) != 0) {
          **(_BYTE**)(v10 + 1504) = 0;
          *(_QWORD*)(v10 + 1496) = 0;
        }
        else {
          *(_WORD*)(v10 + 1488) = 0;
        }
        v159 = *v12;
        *v12 = v159 + 1;
        *(_BYTE*)(v10 + 1512) = *(_BYTE*)(*v8 + v159);
        v160 = *v12;
        v161 = *v8;
        v162 = v160 + 1;
        *v12 = v160 + 1;
        v163 = *(unsigned __int8*)(v161 + v160);
        v164 = v160 + 2;
        *v12 = v164;
        v165 = v163 | (*(unsigned __int8*)(v161 + v162) << 8);
        if (v165 != 0) {
          *v12 = v164 + v165;
          result = GameRoutine_60a020(v10 + 1520, v161 + v164);
        }
        else if ((*(_BYTE*)(v10 + 1520) & 1) != 0) {
          **(_BYTE**)(v10 + 1536) = 0;
          *(_QWORD*)(v10 + 1528) = 0;
        }
        else {
          *(_WORD*)(v10 + 1520) = 0;
        }
        v166 = *v12;
        *v12 = v166 + 1;
        *(_BYTE*)(v10 + 1544) = *(_BYTE*)(*v8 + v166);
        v167 = *v12;
        v168 = *v8;
        v169 = v167 + 1;
        *v12 = v167 + 1;
        v170 = *(unsigned __int8*)(v168 + v167);
        v171 = v167 + 2;
        *v12 = v171;
        v172 = v170 | (*(unsigned __int8*)(v168 + v169) << 8);
        if (v172 != 0) {
          *v12 = v171 + v172;
          result = GameRoutine_60a020(v10 + 1552, v168 + v171);
        }
        else if ((*(_BYTE*)(v10 + 1552) & 1) != 0) {
          **(_BYTE**)(v10 + 1568) = 0;
          *(_QWORD*)(v10 + 1560) = 0;
        }
        else {
          *(_WORD*)(v10 + 1552) = 0;
        }
        v173 = *v12;
        *v12 = v173 + 1;
        *(_BYTE*)(v10 + 1576) = *(_BYTE*)(*v8 + v173);
        v174 = *v12;
        v175 = *v8;
        v176 = v174 + 1;
        *v12 = v174 + 1;
        v177 = *(unsigned __int8*)(v175 + v174);
        v178 = v174 + 2;
        *v12 = v178;
        v179 = v177 | (*(unsigned __int8*)(v175 + v176) << 8);
        if (v179 != 0) {
          *v12 = v178 + v179;
          result = GameRoutine_60a020(v10 + 1584, v175 + v178);
        }
        else if ((*(_BYTE*)(v10 + 1584) & 1) != 0) {
          **(_BYTE**)(v10 + 1600) = 0;
          *(_QWORD*)(v10 + 1592) = 0;
        }
        else {
          *(_WORD*)(v10 + 1584) = 0;
        }
        v180 = *v12;
        *v12 = v180 + 1;
        *(_BYTE*)(v10 + 1608) = *(_BYTE*)(*v8 + v180);
        v181 = *v12;
        v182 = *v8;
        v183 = v181 + 1;
        *v12 = v181 + 1;
        v184 = *(unsigned __int8*)(v182 + v181);
        v185 = v181 + 2;
        *v12 = v185;
        v186 = v184 | (*(unsigned __int8*)(v182 + v183) << 8);
        if (v186 != 0) {
          *v12 = v185 + v186;
          result = GameRoutine_60a020(v10 + 1616, v182 + v185);
        }
        else if ((*(_BYTE*)(v10 + 1616) & 1) != 0) {
          **(_BYTE**)(v10 + 1632) = 0;
          *(_QWORD*)(v10 + 1624) = 0;
        }
        else {
          *(_WORD*)(v10 + 1616) = 0;
        }
        v187 = *v12;
        *v12 = v187 + 1;
        *(_BYTE*)(v10 + 1640) = *(_BYTE*)(*v8 + v187);
        v188 = *v12;
        v189 = *v8;
        v190 = v188 + 1;
        *v12 = v188 + 1;
        v191 = *(unsigned __int8*)(v189 + v188);
        v192 = v188 + 2;
        *v12 = v192;
        v193 = v191 | (*(unsigned __int8*)(v189 + v190) << 8);
        if (v193 != 0) {
          *v12 = v192 + v193;
          result = GameRoutine_60a020(v10 + 1648, v189 + v192);
        }
        else if ((*(_BYTE*)(v10 + 1648) & 1) != 0) {
          **(_BYTE**)(v10 + 1664) = 0;
          *(_QWORD*)(v10 + 1656) = 0;
        }
        else {
          *(_WORD*)(v10 + 1648) = 0;
        }
        v194 = *v12;
        *v12 = v194 + 1;
        *(_BYTE*)(v10 + 1672) = *(_BYTE*)(*v8 + v194);
        v195 = *v12;
        v196 = *v8;
        v197 = v195 + 1;
        *v12 = v195 + 1;
        v198 = *(unsigned __int8*)(v196 + v195);
        v199 = v195 + 2;
        *v12 = v199;
        v200 = v198 | (*(unsigned __int8*)(v196 + v197) << 8);
        if (v200 != 0) {
          *v12 = v199 + v200;
          result = GameRoutine_60a020(v10 + 1680, v196 + v199);
        }
        else if ((*(_BYTE*)(v10 + 1680) & 1) != 0) {
          **(_BYTE**)(v10 + 1696) = 0;
          *(_QWORD*)(v10 + 1688) = 0;
        }
        else {
          *(_WORD*)(v10 + 1680) = 0;
        }
        v201 = *v12;
        *v12 = v201 + 1;
        *(_BYTE*)(v10 + 1704) = *(_BYTE*)(*v8 + v201);
        v202 = *v12;
        v203 = *v8;
        v204 = v202 + 1;
        *v12 = v202 + 1;
        v205 = *(unsigned __int8*)(v203 + v202);
        v206 = v202 + 2;
        *v12 = v206;
        v207 = v205 | (*(unsigned __int8*)(v203 + v204) << 8);
        if (v207 != 0) {
          *v12 = v206 + v207;
          result = GameRoutine_60a020(v10 + 1712, v203 + v206);
        }
        else if ((*(_BYTE*)(v10 + 1712) & 1) != 0) {
          **(_BYTE**)(v10 + 1728) = 0;
          *(_QWORD*)(v10 + 1720) = 0;
        }
        else {
          *(_WORD*)(v10 + 1712) = 0;
        }
        v208 = *v12;
        *v12 = v208 + 1;
        *(_BYTE*)(v10 + 1736) = *(_BYTE*)(*v8 + v208);
        v209 = *v12;
        v210 = *v8;
        v211 = v209 + 1;
        *v12 = v209 + 1;
        v212 = *(unsigned __int8*)(v210 + v209);
        v213 = v209 + 2;
        *v12 = v213;
        v214 = v212 | (*(unsigned __int8*)(v210 + v211) << 8);
        if (v214 != 0) {
          *v12 = v213 + v214;
          result = GameRoutine_60a020(v10 + 1744, v210 + v213);
        }
        else if ((*(_BYTE*)(v10 + 1744) & 1) != 0) {
          **(_BYTE**)(v10 + 1760) = 0;
          *(_QWORD*)(v10 + 1752) = 0;
        }
        else {
          *(_WORD*)(v10 + 1744) = 0;
        }
        v215 = *v12;
        *v12 = v215 + 1;
        *(_BYTE*)(v10 + 1768) = *(_BYTE*)(*v8 + v215);
        v216 = *v12;
        v217 = *v8;
        v218 = v216 + 1;
        *v12 = v216 + 1;
        v219 = *(unsigned __int8*)(v217 + v216);
        v220 = v216 + 2;
        *v12 = v220;
        v221 = v219 | (*(unsigned __int8*)(v217 + v218) << 8);
        if (v221 != 0) {
          *v12 = v220 + v221;
          result = GameRoutine_60a020(v10 + 1776, v217 + v220);
        }
        else if ((*(_BYTE*)(v10 + 1776) & 1) != 0) {
          **(_BYTE**)(v10 + 1792) = 0;
          *(_QWORD*)(v10 + 1784) = 0;
        }
        else {
          *(_WORD*)(v10 + 1776) = 0;
        }
        v222 = *v12;
        *v12 = v222 + 1;
        *(_BYTE*)(v10 + 1800) = *(_BYTE*)(*v8 + v222);
        v223 = *v12;
        v224 = *v8;
        v225 = v223 + 1;
        *v12 = v223 + 1;
        v226 = *(unsigned __int8*)(v224 + v223);
        v227 = v223 + 2;
        *v12 = v227;
        v228 = v226 | (*(unsigned __int8*)(v224 + v225) << 8);
        if (v228 != 0) {
          *v12 = v227 + v228;
          result = GameRoutine_60a020(v10 + 1808, v224 + v227);
        }
        else if ((*(_BYTE*)(v10 + 1808) & 1) != 0) {
          **(_BYTE**)(v10 + 1824) = 0;
          *(_QWORD*)(v10 + 1816) = 0;
        }
        else {
          *(_WORD*)(v10 + 1808) = 0;
        }
        v229 = *v12;
        *v12 = v229 + 1;
        *(_BYTE*)(v10 + 1832) = *(_BYTE*)(*v8 + v229);
        v230 = *v12;
        v231 = *v8;
        v232 = v230 + 1;
        *v12 = v230 + 1;
        v233 = *(unsigned __int8*)(v231 + v230);
        v234 = v230 + 2;
        *v12 = v234;
        v235 = v233 | (*(unsigned __int8*)(v231 + v232) << 8);
        if (v235 != 0) {
          *v12 = v234 + v235;
          result = GameRoutine_60a020(v10 + 1840, v231 + v234);
        }
        else if ((*(_BYTE*)(v10 + 1840) & 1) != 0) {
          **(_BYTE**)(v10 + 1856) = 0;
          *(_QWORD*)(v10 + 1848) = 0;
        }
        else {
          *(_WORD*)(v10 + 1840) = 0;
        }
        v236 = *v12;
        *v12 = v236 + 1;
        *(_BYTE*)(v10 + 1864) = *(_BYTE*)(*v8 + v236);
        v237 = *v12;
        v238 = *v8;
        v239 = v237 + 1;
        *v12 = v237 + 1;
        v240 = *(unsigned __int8*)(v238 + v237);
        v241 = v237 + 2;
        *v12 = v241;
        v242 = v240 | (*(unsigned __int8*)(v238 + v239) << 8);
        if (v242 != 0) {
          *v12 = v241 + v242;
          result = GameRoutine_60a020(v10 + 1872, v238 + v241);
        }
        else if ((*(_BYTE*)(v10 + 1872) & 1) != 0) {
          **(_BYTE**)(v10 + 1888) = 0;
          *(_QWORD*)(v10 + 1880) = 0;
        }
        else {
          *(_WORD*)(v10 + 1872) = 0;
        }
        v243 = *v12;
        *v12 = v243 + 1;
        *(_BYTE*)(v10 + 1896) = *(_BYTE*)(*v8 + v243);
        v244 = *v12;
        v245 = *v8;
        v246 = v244 + 1;
        *v12 = v244 + 1;
        v247 = *(unsigned __int8*)(v245 + v244);
        v248 = v244 + 2;
        *v12 = v248;
        v249 = v247 | (*(unsigned __int8*)(v245 + v246) << 8);
        if (v249 != 0) {
          *v12 = v248 + v249;
          result = GameRoutine_60a020(v10 + 1904, v245 + v248);
        }
        else if ((*(_BYTE*)(v10 + 1904) & 1) != 0) {
          **(_BYTE**)(v10 + 1920) = 0;
          *(_QWORD*)(v10 + 1912) = 0;
        }
        else {
          *(_WORD*)(v10 + 1904) = 0;
        }
        v250 = *v12;
        *v12 = v250 + 1;
        *(_BYTE*)(v10 + 1928) = *(_BYTE*)(*v8 + v250);
        v251 = *v12;
        v252 = *v8;
        v253 = v251 + 1;
        *v12 = v251 + 1;
        v254 = *(unsigned __int8*)(v252 + v251);
        v255 = v251 + 2;
        *v12 = v255;
        v256 = v254 | (*(unsigned __int8*)(v252 + v253) << 8);
        if (v256 != 0) {
          *v12 = v255 + v256;
          result = GameRoutine_60a020(v10 + 1936, v252 + v255);
        }
        else if ((*(_BYTE*)(v10 + 1936) & 1) != 0) {
          **(_BYTE**)(v10 + 1952) = 0;
          *(_QWORD*)(v10 + 1944) = 0;
        }
        else {
          *(_WORD*)(v10 + 1936) = 0;
        }
        v257 = *v12;
        *v12 = v257 + 1;
        *(_BYTE*)(v10 + 1960) = *(_BYTE*)(*v8 + v257);
        v258 = *v12;
        v259 = *v8;
        v260 = v258 + 1;
        *v12 = v258 + 1;
        v261 = *(unsigned __int8*)(v259 + v258);
        v262 = v258 + 2;
        *v12 = v262;
        v263 = v261 | (*(unsigned __int8*)(v259 + v260) << 8);
        if (v263 != 0) {
          *v12 = v262 + v263;
          result = GameRoutine_60a020(v10 + 1968, v259 + v262);
        }
        else if ((*(_BYTE*)(v10 + 1968) & 1) != 0) {
          **(_BYTE**)(v10 + 1984) = 0;
          *(_QWORD*)(v10 + 1976) = 0;
        }
        else {
          *(_WORD*)(v10 + 1968) = 0;
        }
        v264 = *v12;
        *v12 = v264 + 1;
        *(_DWORD*)(v10 + 1992) = *(char*)(*v8 + v264);
        v265 = *v12;
        *v12 = v265 + 1;
        *(_DWORD*)(v10 + 1996) = *(char*)(*v8 + v265);
        v266 = *v12;
        *v12 = v266 + 1;
        *(_DWORD*)(v10 + 2000) = *(char*)(*v8 + v266);
        v267 = *v12;
        *v12 = v267 + 1;
        *(_DWORD*)(v10 + 2004) = *(char*)(*v8 + v267);
        v268 = *v12;
        *v12 = v268 + 1;
        *(_DWORD*)(v10 + 2008) = *(char*)(*v8 + v268);
        v269 = *v12;
        *v12 = v269 + 1;
        *(_DWORD*)(v10 + 2012) = *(char*)(*v8 + v269);
        v270 = *v12;
        *v12 = v270 + 1;
        *(_DWORD*)(v10 + 2016) = *(char*)(*v8 + v270);
        v271 = *v12;
        *v12 = v271 + 1;
        *(_DWORD*)(v10 + 2020) = *(char*)(*v8 + v271);
        v272 = *v12;
        *v12 = v272 + 1;
        *(_DWORD*)(v10 + 2024) = *(char*)(*v8 + v272);
        v273 = *v12;
        *v12 = v273 + 1;
        *(_DWORD*)(v10 + 2028) = *(char*)(*v8 + v273);
        v274 = *v12;
        *v12 = v274 + 1;
        *(_DWORD*)(v10 + 2032) = *(char*)(*v8 + v274);
        v275 = *v12;
        *v12 = v275 + 1;
        *(_DWORD*)(v10 + 2036) = *(char*)(*v8 + v275);
        v276 = *v12;
        *v12 = v276 + 1;
        *(_DWORD*)(v10 + 2040) = *(char*)(*v8 + v276);
        v277 = *v12;
        *v12 = v277 + 1;
        *(_DWORD*)(v10 + 2044) = *(char*)(*v8 + v277);
        v278 = *v12;
        *v12 = v278 + 1;
        *(_DWORD*)(v10 + 2048) = *(char*)(*v8 + v278);
        v279 = *v12;
        *v12 = v279 + 1;
        *(_DWORD*)(v10 + 2052) = *(char*)(*v8 + v279);
        v280 = *v12;
        *v12 = v280 + 1;
        *(_DWORD*)(v10 + 2056) = *(char*)(*v8 + v280);
        v281 = *v12;
        *v12 = v281 + 1;
        *(_DWORD*)(v10 + 2060) = *(char*)(*v8 + v281);
        v282 = *v12;
        *v12 = v282 + 1;
        *(_DWORD*)(v10 + 2064) = *(char*)(*v8 + v282);
        v283 = *v12;
        *v12 = v283 + 1;
        *(_DWORD*)(v10 + 2068) = *(char*)(*v8 + v283);
        v284 = *v12;
        *v12 = v284 + 1;
        *(_DWORD*)(v10 + 2072) = *(char*)(*v8 + v284);
        v285 = *v12;
        *v12 = v285 + 1;
        *(_DWORD*)(v10 + 2076) = *(char*)(*v8 + v285);
        v286 = *v12;
        *v12 = v286 + 1;
        *(_DWORD*)(v10 + 2080) = *(char*)(*v8 + v286);
        v287 = *v12;
        *v12 = v287 + 1;
        *(_DWORD*)(v10 + 2084) = *(char*)(*v8 + v287);
        v288 = *v12;
        *v12 = v288 + 1;
        *(_DWORD*)(v10 + 2088) = *(char*)(*v8 + v288);
        v289 = *v12;
        *v12 = v289 + 1;
        *(_DWORD*)(v10 + 2092) = *(char*)(*v8 + v289);
        v290 = *v12;
        *v12 = v290 + 1;
        *(_DWORD*)(v10 + 2096) = *(char*)(*v8 + v290);
        v291 = *v12;
        *v12 = v291 + 1;
        *(_DWORD*)(v10 + 2100) = *(char*)(*v8 + v291);
        v292 = *v12;
        *v12 = v292 + 1;
        *(_DWORD*)(v10 + 2104) = *(char*)(*v8 + v292);
        v293 = *v12;
        *v12 = v293 + 1;
        *(_DWORD*)(v10 + 2108) = *(char*)(*v8 + v293);
        v294 = *v12;
        *v12 = v294 + 1;
        *(_DWORD*)(v10 + 2112) = *(char*)(*v8 + v294);
        v295 = *v12;
        *v12 = v295 + 1;
        *(_DWORD*)(v10 + 2116) = *(char*)(*v8 + v295);
        v296 = *v12;
        *v12 = v296 + 1;
        *(_DWORD*)(v10 + 2120) = *(char*)(*v8 + v296);
        v297 = *v12;
        *v12 = v297 + 1;
        *(_DWORD*)(v10 + 2124) = *(char*)(*v8 + v297);
        v298 = *v12;
        *v12 = v298 + 1;
        *(_DWORD*)(v10 + 2128) = *(char*)(*v8 + v298);
        v299 = *v12;
        *v12 = v299 + 1;
        *(_DWORD*)(v10 + 2132) = *(char*)(*v8 + v299);
        if (v9 <= 3) {
          *(_QWORD*)(v10 + 2152) = -1;
          *(_QWORD*)(v10 + 2160) = -1;
          *(_QWORD*)(v10 + 2136) = -1;
          *(_QWORD*)(v10 + 2144) = -1;
          *(_DWORD*)(v10 + 2168) = -1;
        }
        else {
          v300 = *v12;
          *v12 = v300 + 1;
          *(_DWORD*)(v10 + 2136) = *(char*)(*v8 + v300);
          v301 = *v12;
          *v12 = v301 + 1;
          *(_DWORD*)(v10 + 2140) = *(char*)(*v8 + v301);
          v302 = *v12;
          *v12 = v302 + 1;
          *(_DWORD*)(v10 + 2144) = *(char*)(*v8 + v302);
          v303 = *v12;
          *v12 = v303 + 1;
          *(_DWORD*)(v10 + 2148) = *(char*)(*v8 + v303);
          v304 = *v12;
          *v12 = v304 + 1;
          *(_DWORD*)(v10 + 2152) = *(char*)(*v8 + v304);
          v305 = *v12;
          *v12 = v305 + 1;
          *(_DWORD*)(v10 + 2156) = *(char*)(*v8 + v305);
          v306 = *v12;
          *v12 = v306 + 1;
          *(_DWORD*)(v10 + 2160) = *(char*)(*v8 + v306);
          v307 = *v12;
          *v12 = v307 + 1;
          *(_DWORD*)(v10 + 2164) = *(char*)(*v8 + v307);
          v308 = *v12;
          *v12 = v308 + 1;
          *(_DWORD*)(v10 + 2168) = *(char*)(*v8 + v308);
        }
        v309 = *v12;
        *v12 = v309 + 1;
        *(_DWORD*)(v10 + 2188) = *(char*)(*v8 + v309);
        v310 = *v12;
        *v12 = v310 + 1;
        *(_DWORD*)(v10 + 2192) = *(char*)(*v8 + v310);
        v311 = *v12;
        v312 = *v8;
        v313 = v311 + 1;
        *v12 = v311 + 1;
        v314 = *(unsigned __int8*)(v312 + v311);
        v315 = v311 + 2;
        *v12 = v315;
        v316 = v314 | (*(unsigned __int8*)(v312 + v313) << 8);
        if (v316 != 0) {
          *v12 = v315 + v316;
          result = GameRoutine_60a020(v10 + 3080, v312 + v315);
        }
        else if ((*(_BYTE*)(v10 + 3080) & 1) != 0) {
          **(_BYTE**)(v10 + 3096) = 0;
          *(_QWORD*)(v10 + 3088) = 0;
        }
        else {
          *(_WORD*)(v10 + 3080) = 0;
        }
        v317 = *v12;
        v318 = *v8;
        v319 = v317 + 1;
        *v12 = v317 + 1;
        v320 = *(unsigned __int8*)(v318 + v317);
        v321 = v317 + 2;
        *v12 = v321;
        v322 = v320 | (*(unsigned __int8*)(v318 + v319) << 8);
        if (v322 != 0) {
          *v12 = v321 + v322;
          result = GameRoutine_60a020(v10 + 3104, v318 + v321);
        }
        else if ((*(_BYTE*)(v10 + 3104) & 1) != 0) {
          **(_BYTE**)(v10 + 3120) = 0;
          *(_QWORD*)(v10 + 3112) = 0;
        }
        else {
          *(_WORD*)(v10 + 3104) = 0;
        }
        v323 = *v12;
        *v12 = v323 + 1;
        *(_BYTE*)(v10 + 2816) = *(_BYTE*)(*v8 + v323) != 0;
        v324 = *v12;
        v325 = *v8;
        *v12 = v324 + 1;
        v326 = *(unsigned __int8*)(v325 + v324);
        *v12 = v324 + 2;
        v327 = v326 | (*(unsigned __int8*)(v325 + v324 + 1) << 8);
        *v12 = v324 + 3;
        v328 = *(unsigned __int8*)(v325 + v324 + 2);
        *v12 = v324 + 4;
        *(float*)(v10 + 2892) =
            (float)(v327 | (v328 << 16) |
                    (*(unsigned __int8*)(v325 + v324 + 3) << 24));
        v329 = *v12;
        *v12 = v329 + 1;
        *(_DWORD*)(v10 + 2852) = *(unsigned __int8*)(*v8 + v329);
        v330 = *v12;
        v331 = *v8;
        v332 = v330 + 1;
        *v12 = v330 + 1;
        v333 = *(unsigned __int8*)(v331 + v330);
        v334 = v330 + 2;
        *v12 = v334;
        v335 = v333 | (*(unsigned __int8*)(v331 + v332) << 8);
        if (v335 != 0) {
          *v12 = v334 + v335;
          result = GameRoutine_60a020(v10 + 2856, v331 + v334);
        }
        else if ((*(_BYTE*)(v10 + 2856) & 1) != 0) {
          **(_BYTE**)(v10 + 2872) = 0;
          *(_QWORD*)(v10 + 2864) = 0;
        }
        else {
          *(_WORD*)(v10 + 2856) = 0;
        }
        v336 = *v12;
        *v12 = v336 + 1;
        *(_DWORD*)(v10 + 2880) = *(unsigned __int8*)(*v8 + v336);
        v337 = *v12;
        *v12 = v337 + 1;
        *(_DWORD*)(v10 + 2884) = *(unsigned __int8*)(*v8 + v337);
        v338 = *v12;
        *v12 = v338 + 1;
        *(_BYTE*)(v10 + 2888) = *(_BYTE*)(*v8 + v338) != 0;
        v339 = *v12;
        v340 = *v8;
        v341 = v339 + 1;
        *v12 = v339 + 1;
        v342 = *(unsigned __int8*)(v340 + v339);
        v343 = v339 + 2;
        *v12 = v343;
        v344 = v342 | (*(unsigned __int8*)(v340 + v341) << 8);
        if (v344 != 0) {
          *v12 = v343 + v344;
          result = GameRoutine_60a020(v10 + 2896, v340 + v343);
          if (v9 < 5) {
            goto LABEL_271;
          }
        }
        else if ((*(_BYTE*)(v10 + 2896) & 1) != 0) {
          **(_BYTE**)(v10 + 2912) = 0;
          *(_QWORD*)(v10 + 2904) = 0;
          if (v9 < 5) {
          LABEL_271:
            v366 = *v12;
            v367 = *v8;
            *v12 = v366 + 1;
            v368 = *(unsigned __int8*)(v367 + v366);
            *v12 = v366 + 2;
            v369 = v368 | (*(unsigned __int8*)(v367 + v366 + 1) << 8);
            *v12 = v366 + 3;
            v370 = *(unsigned __int8*)(v367 + v366 + 2);
            *v12 = v366 + 4;
            *(_DWORD*)(v10 + 2548) =
                v369 | (v370 << 16) |
                (*(unsigned __int8*)(v367 + v366 + 3) << 24);
            v371 = *v12;
            v372 = *v8;
            *v12 = v371 + 1;
            v373 = *(unsigned __int8*)(v372 + v371);
            *v12 = v371 + 2;
            v374 = v373 | (*(unsigned __int8*)(v372 + v371 + 1) << 8);
            *v12 = v371 + 3;
            v375 = *(unsigned __int8*)(v372 + v371 + 2);
            *v12 = v371 + 4;
            *(_DWORD*)(v10 + 2552) =
                v374 | (v375 << 16) |
                (*(unsigned __int8*)(v372 + v371 + 3) << 24);
            v376 = *v12;
            v377 = *v8;
            *v12 = v376 + 1;
            v378 = *(unsigned __int8*)(v377 + v376);
            *v12 = v376 + 2;
            v379 = v378 | (*(unsigned __int8*)(v377 + v376 + 1) << 8);
            *v12 = v376 + 3;
            v380 = *(unsigned __int8*)(v377 + v376 + 2);
            *v12 = v376 + 4;
            *(_DWORD*)(v10 + 2556) =
                v379 | (v380 << 16) |
                (*(unsigned __int8*)(v377 + v376 + 3) << 24);
            v381 = *v12;
            v382 = *v8;
            *v12 = v381 + 1;
            v383 = *(unsigned __int8*)(v382 + v381);
            *v12 = v381 + 2;
            v384 = v383 | (*(unsigned __int8*)(v382 + v381 + 1) << 8);
            *v12 = v381 + 3;
            v385 = *(unsigned __int8*)(v382 + v381 + 2);
            *v12 = v381 + 4;
            *(_DWORD*)(v10 + 2560) =
                v384 | (v385 << 16) |
                (*(unsigned __int8*)(v382 + v381 + 3) << 24);
            v386 = *v12;
            v387 = *v8;
            *v12 = v386 + 1;
            v388 = *(unsigned __int8*)(v387 + v386);
            *v12 = v386 + 2;
            v389 = v388 | (*(unsigned __int8*)(v387 + v386 + 1) << 8);
            *v12 = v386 + 3;
            v390 = *(unsigned __int8*)(v387 + v386 + 2);
            *v12 = v386 + 4;
            *(_DWORD*)(v10 + 2564) =
                v389 | (v390 << 16) |
                (*(unsigned __int8*)(v387 + v386 + 3) << 24);
            v391 = *v12;
            v392 = *v8;
            *v12 = v391 + 1;
            v393 = *(unsigned __int8*)(v392 + v391);
            *v12 = v391 + 2;
            v394 = v393 | (*(unsigned __int8*)(v392 + v391 + 1) << 8);
            *v12 = v391 + 3;
            v395 = *(unsigned __int8*)(v392 + v391 + 2);
            *v12 = v391 + 4;
            *(_DWORD*)(v10 + 2568) =
                v394 | (v395 << 16) |
                (*(unsigned __int8*)(v392 + v391 + 3) << 24);
            v396 = *v12;
            v397 = *v8;
            *v12 = v396 + 1;
            v398 = *(unsigned __int8*)(v397 + v396);
            *v12 = v396 + 2;
            v399 = v398 | (*(unsigned __int8*)(v397 + v396 + 1) << 8);
            *v12 = v396 + 3;
            v400 = *(unsigned __int8*)(v397 + v396 + 2);
            *v12 = v396 + 4;
            *(_DWORD*)(v10 + 2572) =
                v399 | (v400 << 16) |
                (*(unsigned __int8*)(v397 + v396 + 3) << 24);
            v401 = *v12;
            v402 = *v8;
            *v12 = v401 + 1;
            v403 = *(unsigned __int8*)(v402 + v401);
            *v12 = v401 + 2;
            v404 = v403 | (*(unsigned __int8*)(v402 + v401 + 1) << 8);
            *v12 = v401 + 3;
            v405 = *(unsigned __int8*)(v402 + v401 + 2);
            *v12 = v401 + 4;
            *(_DWORD*)(v10 + 2576) =
                v404 | (v405 << 16) |
                (*(unsigned __int8*)(v402 + v401 + 3) << 24);
            return result;
          }
        }
        else {
          *(_WORD*)(v10 + 2896) = 0;
          if (v9 < 5) {
            goto LABEL_271;
          }
        }
        v345 = *v12;
        v346 = *v8;
        *v12 = v345 + 1;
        v347 = *(unsigned __int8*)(v346 + v345);
        *v12 = v345 + 2;
        v348 = v347 | (*(unsigned __int8*)(v346 + v345 + 1) << 8);
        *v12 = v345 + 3;
        v349 = *(unsigned __int8*)(v346 + v345 + 2);
        *v12 = v345 + 4;
        *(float*)(v10 + 2964) =
            (float)(v348 | (v349 << 16) |
                    (*(unsigned __int8*)(v346 + v345 + 3) << 24));
        v350 = *v12;
        *v12 = v350 + 1;
        *(_DWORD*)(v10 + 2920) = *(unsigned __int8*)(*v8 + v350);
        v351 = *v12;
        v352 = *v8;
        v353 = v351 + 1;
        *v12 = v351 + 1;
        v354 = *(unsigned __int8*)(v352 + v351);
        v355 = v351 + 2;
        *v12 = v355;
        v356 = v354 | (*(unsigned __int8*)(v352 + v353) << 8);
        if (v356 != 0) {
          *v12 = v355 + v356;
          result = GameRoutine_60a020(v10 + 2928, v352 + v355);
        }
        else if ((*(_BYTE*)(v10 + 2928) & 1) != 0) {
          **(_BYTE**)(v10 + 2944) = 0;
          *(_QWORD*)(v10 + 2936) = 0;
        }
        else {
          *(_WORD*)(v10 + 2928) = 0;
        }
        v357 = *v12;
        *v12 = v357 + 1;
        *(_DWORD*)(v10 + 2952) = *(unsigned __int8*)(*v8 + v357);
        v358 = *v12;
        *v12 = v358 + 1;
        *(_DWORD*)(v10 + 2956) = *(unsigned __int8*)(*v8 + v358);
        v359 = *v12;
        *v12 = v359 + 1;
        *(_BYTE*)(v10 + 2960) = *(_BYTE*)(*v8 + v359) != 0;
        v360 = *v12;
        v361 = *v8;
        v362 = v360 + 1;
        *v12 = v360 + 1;
        v363 = *(unsigned __int8*)(v361 + v360);
        v364 = v360 + 2;
        *v12 = v364;
        v365 = v363 | (*(unsigned __int8*)(v361 + v362) << 8);
        if (v365 != 0) {
          *v12 = v364 + v365;
          result = GameRoutine_60a020(v10 + 2968, v361 + v364);
        }
        else if ((*(_BYTE*)(v10 + 2968) & 1) != 0) {
          **(_BYTE**)(v10 + 2984) = 0;
          *(_QWORD*)(v10 + 2976) = 0;
        }
        else {
          *(_WORD*)(v10 + 2968) = 0;
        }
        goto LABEL_271;
      }
      if ((*(_BYTE*)(v10 + 1072) & 1) != 0) {
        **(_BYTE**)(v10 + 1088) = 0;
        *(_QWORD*)(v10 + 1080) = 0;
        if ((*(_BYTE*)(v10 + 1096) & 1) != 0) {
          goto LABEL_105;
        }
      }
      else {
        *(_WORD*)(v10 + 1072) = 0;
        if ((*(_BYTE*)(v10 + 1096) & 1) != 0) {
          goto LABEL_105;
        }
      }
    LABEL_107:
      v136 = (_BYTE*)(v10 + 1097);
      *(_BYTE*)(v10 + 1096) = 0;
      goto LABEL_108;
    }
  }
  return result;
}

__int64 game_anonymous_19bccb0(__int64 result, unsigned int a2, __int64* a3)
{
  __int64* v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64* v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  char* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  const char* v25;
  const char* v26;
  __int64 v27;
  _BYTE* v28;
  const char* v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  const char* v33;
  const char* v34;
  const char* v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  char* v43;
  const char* v44;
  __int64 v45;
  unsigned __int64 v46;
  char v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  unsigned __int64 v54;
  __int64 v55;
  const char* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  __int64* v65;
  const char* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _BOOL4 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  char v79;
  unsigned __int8* v80;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _BYTE* v93;
  __int64 v94;
  _BYTE* v95;
  __int64 v96;
  __int64 v97;
  unsigned __int8* v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  struct {
    unsigned __int64* v106;
    unsigned __int64 v107;
    unsigned __int64 v108;
    unsigned __int64 v109;
    int v110;
    int v111;
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
  } v106_;
  char v125[4];
  char v126[16];
  char v127[212];

  if (*a3 == 0) {
    return result;
  }
  v4 = (__int64*)result;
  v6 = game_GameModeData_instance_;
  GameRoutine_682bc0(&v106_.v106, *(_QWORD*)(*a3 + 32));
  result = GameConverge_8e7ca0(*(_QWORD*)(v6 + 176), v106_.v106);
  if ((result & 1) != 0 && a3[2] == 0) {
    return result;
  }
  if (*(_OWORD*)(a3 + 1) == 0) {
    return result;
  }
  v106_.v112 = -1;
  v106_.v113 = -1;
  v106_.v114 = -1;
  v106_.v115 = -1;
  v7 = *msg_MessageManager_instance__ptr[0];
  v106_.v116 = -1;
  v106_.v117 = -1;
  v106_.v118 = -1;
  v106_.v119 = -1;
  v106_.v120 = -1;
  v106_.v121 = -1;
  v106_.v122 = -1;
  v106_.v123 = -1;
  v106_.v108 = 0xFFFF0004FFFF0002LL;
  v106_.v109 = 0xFFFF0006FFFF0005LL;
  v106_.v110 = -65529;
  v106_.v111 = -65528;
  v8 = (unsigned __int64*)(GameData_212e348 + 2);
  v106_.v106 = (unsigned __int64*)(GameData_212e348 + 2);
  v106_.v107 = 0xFFFF0001FFFF0000LL;
  v106_.v124 = 8;
  v9 = GameRoutine_a4dbe0(v7, "MID_AfterEp_Scout", 0);
  if (v9 != nullptr) {
    v10 = (__int64)v9;
    v11 = a2 != 0 ? "T_Scout01" : "T_Scout00";
    v12 = ui_LayoutAccessor_FindTextBox(v4 + 32, (__int64)v11);
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v10, 0);
    }
  }
  v106_.v112 = -1;
  v106_.v113 = -1;
  v106_.v114 = -1;
  v106_.v115 = -1;
  v106_.v116 = -1;
  v106_.v117 = -1;
  v106_.v118 = -1;
  v106_.v119 = -1;
  v13 = *msg_MessageManager_instance__ptr[0];
  v106_.v120 = -1;
  v106_.v121 = -1;
  v106_.v122 = -1;
  v106_.v123 = -1;
  v106_.v108 = 0xFFFF0004FFFF0002LL;
  v106_.v109 = 0xFFFF0006FFFF0005LL;
  v106_.v110 = -65529;
  v106_.v111 = -65528;
  v106_.v106 = v8;
  v106_.v107 = 0xFFFF0001FFFF0000LL;
  v106_.v124 = 8;
  v14 = GameRoutine_a4dbe0(v13, "MID_AfterEp_Battle", 0);
  if (v14 != nullptr) {
    v15 = (__int64)v14;
    v16 = a2 != 0 ? "T_Btl_00" : "T_Btl";
    v17 = ui_LayoutAccessor_FindTextBox(v4 + 32, (__int64)v16);
    if (v17 != 0) {
      GameRoutine_156c5d0(v17, v15, 0);
    }
  }
  v18 = msg_MessageManager_instance__ptr[0];
  v19 = *msg_MessageManager_instance__ptr[0];
  v20 = GameData_212e348;
  v106_.v112 = -1;
  v106_.v113 = -1;
  v106_.v114 = -1;
  v106_.v115 = -1;
  v106_.v116 = -1;
  v106_.v117 = -1;
  v106_.v118 = -1;
  v106_.v119 = -1;
  v106_.v120 = -1;
  v106_.v121 = -1;
  v106_.v122 = -1;
  v106_.v123 = -1;
  v106_.v106 = (unsigned __int64*)(GameData_212e348 + 2);
  v106_.v107 = 0xFFFF0001FFFF0000LL;
  v106_.v108 = 0xFFFF0004FFFF0002LL;
  v106_.v109 = 0xFFFF0006FFFF0005LL;
  v106_.v124 = 8;
  v106_.v110 = -65529;
  v106_.v111 = -65528;
  v21 = GameRoutine_a4dbe0(v19, "MID_AfterEp_CmdBtl", 0);
  if (v21 != nullptr) {
    v22 = (__int64)v21;
    v23 = a2 != 0 ? "T_CmdBtl_00" : "T_CmdBtl";
    v24 = ui_LayoutAccessor_FindTextBox(v4 + 32, (__int64)v23);
    if (v24 != 0) {
      GameRoutine_156c5d0(v24, v22, 0);
    }
  }
  v25 = GameRoutine_19bbae0(a3);
  v26 = v25;
  if (v25 != nullptr) {
    v27 = *v18;
    if ((*(_BYTE*)(*v18 + 14704) & 1) != 0) {
      *(_QWORD*)(v27 + 14712) = 0;
      v28 = *(_BYTE**)(v27 + 14720);
    }
    else {
      v28 = (_BYTE*)(*v18 + 14705);
      *(_BYTE*)(*v18 + 14704) = 0;
    }
    *v28 = 0;
    v29 = v25;
    v106_.v112 = -1;
    v106_.v113 = -1;
    v106_.v114 = -1;
    v106_.v115 = -1;
    v106_.v116 = -1;
    v106_.v117 = -1;
    v30 = *v18;
    v106_.v118 = -1;
    v106_.v119 = -1;
    v106_.v120 = -1;
    v106_.v121 = -1;
    v106_.v122 = -1;
    v106_.v123 = -1;
    v106_.v106 = (unsigned __int64*)(v20 + 2);
    v106_.v107 = 0xFFFF0001FFFF0000LL;
    v106_.v108 = 0xFFFF0004FFFF0002LL;
    v106_.v109 = 0xFFFF0006FFFF0005LL;
    v106_.v124 = 8;
    v106_.v110 = -65529;
    v106_.v111 = -65528;
    v25 = GameRoutine_a4dbe0(v30, v29, 0);
  }
  if (v26 != nullptr) {
    v31 = (__int64)v25;
  }
  else {
    v31 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  ProcAfterEpisodeSeq_19bd810((__int64)v4, a2, "T_Handle", v31);
  v32 = GameRoutine_19bb850(a3);
  ProcAfterEpisodeSeq_19bd810((__int64)v4, a2, "T_Name", (__int64)v32);
  v33 = GameRoutine_19bbae0(a3);
  if (v33 != nullptr) {
    if (a2 != 0) {
      v34 = "T_Name01";
    }
    else {
      v34 = "T_Name00";
    }
    if (a2 != 0) {
      v35 = "T_Handle01";
    }
    else {
      v35 = "T_Handle00";
    }
    GameHr_1604520(v4 + 32, (__int64)v34, (__int64)v35, v33);
  }
  GameHr_a51e10(*v18 + 14704, 0, *((_DWORD*)a3 + 18), 0);
  v36 = *v18;
  v106_.v112 = -1;
  v106_.v113 = -1;
  v106_.v114 = -1;
  v106_.v115 = -1;
  v106_.v116 = -1;
  v106_.v117 = -1;
  v106_.v118 = -1;
  v106_.v119 = -1;
  v106_.v120 = -1;
  v106_.v121 = -1;
  v106_.v122 = -1;
  v106_.v123 = -1;
  v106_.v124 = 8;
  v106_.v110 = -65529;
  v106_.v111 = -65528;
  v106_.v106 = (unsigned __int64*)(v20 + 2);
  v106_.v107 = 0xFFFF0001FFFF0000LL;
  v106_.v108 = 0xFFFF0004FFFF0002LL;
  v106_.v109 = 0xFFFF0006FFFF0005LL;
  v37 = GameRoutine_a4dbe0(v36, "MID_AfterEp_Count", 0);
  ProcAfterEpisodeSeq_19bd810((__int64)v4, a2, "T_NumScout", (__int64)v37);
  GameHr_a51e10(*v18 + 14704, 0, *((_DWORD*)a3 + 19), 0);
  v38 = *v18;
  v106_.v112 = -1;
  v106_.v113 = -1;
  v106_.v114 = -1;
  v106_.v115 = -1;
  v106_.v116 = -1;
  v106_.v117 = -1;
  v106_.v118 = -1;
  v106_.v119 = -1;
  v106_.v120 = -1;
  v106_.v121 = -1;
  v106_.v122 = -1;
  v106_.v123 = -1;
  v106_.v124 = 8;
  v106_.v110 = -65529;
  v106_.v111 = -65528;
  v106_.v106 = (unsigned __int64*)(v20 + 2);
  v106_.v107 = 0xFFFF0001FFFF0000LL;
  v106_.v108 = 0xFFFF0004FFFF0002LL;
  v106_.v109 = 0xFFFF0006FFFF0005LL;
  v39 = GameRoutine_a4dbe0(v38, "MID_AfterEp_BattleCount", 0);
  ProcAfterEpisodeSeq_19bd810((__int64)v4, a2, "T_NumBtl", (__int64)v39);
  GameHr_a51e10(*v18 + 14704, 0, *((_DWORD*)a3 + 20), 0);
  v40 = *v18;
  v106_.v112 = -1;
  v106_.v113 = -1;
  v106_.v114 = -1;
  v106_.v115 = -1;
  v106_.v116 = -1;
  v106_.v117 = -1;
  v106_.v118 = -1;
  v106_.v119 = -1;
  v106_.v120 = -1;
  v106_.v121 = -1;
  v106_.v122 = -1;
  v106_.v123 = -1;
  v106_.v124 = 8;
  v106_.v110 = -65529;
  v106_.v111 = -65528;
  v106_.v106 = (unsigned __int64*)(v20 + 2);
  v106_.v107 = 0xFFFF0001FFFF0000LL;
  v106_.v108 = 0xFFFF0004FFFF0002LL;
  v106_.v109 = 0xFFFF0006FFFF0005LL;
  v41 = GameRoutine_a4dbe0(v40, "MID_AfterEp_KillCount", 0);
  ProcAfterEpisodeSeq_19bd810((__int64)v4, a2, "T_NumWin", (__int64)v41);
  GameHr_a51e10(*v18 + 14704, 0, *((_DWORD*)a3 + 21), 0);
  v42 = *v18;
  v106_.v112 = -1;
  v106_.v113 = -1;
  v106_.v114 = -1;
  v106_.v115 = -1;
  v106_.v116 = -1;
  v106_.v117 = -1;
  v106_.v118 = -1;
  v106_.v119 = -1;
  v106_.v120 = -1;
  v106_.v121 = -1;
  v106_.v122 = -1;
  v106_.v123 = -1;
  v106_.v124 = 8;
  v106_.v110 = -65529;
  v106_.v111 = -65528;
  v106_.v106 = (unsigned __int64*)(v20 + 2);
  v106_.v107 = 0xFFFF0001FFFF0000LL;
  v106_.v108 = 0xFFFF0004FFFF0002LL;
  v106_.v109 = 0xFFFF0006FFFF0005LL;
  v43 = GameRoutine_a4dbe0(v42, "MID_AfterEp_Count", 0);
  ProcAfterEpisodeSeq_19bd810((__int64)v4, a2, "T_NumCmdBtl", (__int64)v43);
  if (a2 != 0) {
    v44 = "N_Scout01";
  }
  else {
    v44 = "N_Scout00";
  }
  if (*a3 != 0) {
    v45 = *(_QWORD*)(*a3 + 32);
  }
  else {
    v45 = 0;
  }
  v46 = game_HashString(v45);
  v47 = 0;
  if (v46 != 0) {
    v48 = *(_QWORD*)GameData_212cc20[0];
    v49 = *(_QWORD*)(*(_QWORD*)GameData_212cc20[0] + 96LL);
    if (v49 != 0 && *(_QWORD*)(v48 + 112) != 0) {
      v50 = v49 - 1;
      if ((v49 & (v49 - 1)) != 0) {
        v51 = v46;
        if (v46 >= v49) {
          v51 = v46 % v49;
        }
      }
      else {
        v51 = v50 & v46;
      }
      v52 = *(_QWORD**)(*(_QWORD*)(v48 + 88) + 8 * v51);
      if (v52 == nullptr || (v53 = (_QWORD*)*v52) == nullptr) {
      LABEL_68:
        v47 = 0;
        goto LABEL_69;
      }
      if ((v49 & v50) == 0) {
        while (1) {
          v55 = v53[1];
          if (v55 == v46) {
            if (v53[2] == v46) {
              goto LABEL_145;
            }
          }
          else if ((v55 & v50) != v51) {
            goto LABEL_68;
          }
          v53 = (_QWORD*)*v53;
          v47 = 0;
          if (v53 == nullptr) {
            goto LABEL_69;
          }
        }
      }
      while (1) {
        v54 = v53[1];
        if (v54 == v46) {
          if (v53[2] == v46) {
          LABEL_145:
            v47 = v53[3] != 0;
            break;
          }
        }
        else {
          if (v54 >= v49) {
            v54 %= v49;
          }
          if (v54 != v51) {
            goto LABEL_68;
          }
        }
        v53 = (_QWORD*)*v53;
        if (v53 == nullptr) {
          goto LABEL_68;
        }
      }
    }
  }
LABEL_69:
  ui_LayoutAccessor_SetPaneVisible((__int64)(v4 + 32), (__int64)v44, v47);
  if (a2 != 0) {
    v56 = "A_NumBtl01";
  }
  else {
    v56 = "A_NumBtl00";
  }
  v57 = ui_LayoutAccessor_FindAlignment(v4 + 32, v56);
  if (v57 != 0) {
    Alignment_56b600(v57);
  }
  v58 = ui_LayoutAccessor_FindPane(v4 + 32, (__int64)"IconClan");
  if (v58 != 0) {
    v59 = __dynamic_cast(v58, GameData_212d670[0], GameData_212d678[0], 0);
    v60 = *a3;
    if (*a3 == 0) {
      goto LABEL_85;
    }
  }
  else {
    v59 = 0;
    v60 = *a3;
    if (*a3 == 0) {
      goto LABEL_85;
    }
  }
  v61 = a3[2];
  if (v61 == 0) {
    v18 = (__int64*)game_GameModeData_instance_;
    GameRoutine_682bc0(&v106_.v106, *(_QWORD*)(v60 + 32));
    if ((GameConverge_8e7ca0(v18[22], v106_.v106) & 1) != 0) {
      goto LABEL_85;
    }
    v62 = a3[1];
    if (v62 == 0) {
      goto LABEL_85;
    }
  LABEL_84:
    v63 = *(_QWORD*)(v62 + 40);
  LABEL_87:
    GameRoutine_1840e20(v59, v63);
    goto LABEL_88;
  }
  if ((*(_BYTE*)(v61 + 416) & 8) == 0) {
  LABEL_85:
    v64 = (_QWORD*)a3[2];
    if (v64 == nullptr) {
      goto LABEL_88;
    }
    v63 = Unit_6c8300(v64, 0);
    goto LABEL_87;
  }
  v62 = a3[1];
  if (v62 != 0) {
    goto LABEL_84;
  }
LABEL_88:
  v65 = &v4[6 * a2 + 45];
  if (a2 != 0) {
    v66 = "Face01";
  }
  else {
    v66 = "Face00";
  }
  if (v4[34] != 0) {
    v67 = v4[33];
    if (v67 != 0) {
      v68 = std___1___shared_weak_count_lock(v67);
      if (v68 == 0) {
        goto LABEL_102;
      }
      v69 = v4[32];
      if (v69 != 0) {
        LODWORD(v18) = *(unsigned __int8*)(v69 + 24);
        v70 = v69 + 152;
        if ((_DWORD)v18 == 0) {
          v70 = 0;
        }
        v71 = v70 != v4[34];
      }
      else {
        v71 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v72 = v68;
        (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
        std___1___shared_weak_count___release_weak(v72);
      }
      if (!v71) {
        if (((unsigned __int8)v18 & 1) == 0) {
          goto LABEL_115;
        }
      }
      else {
      LABEL_102:
        v73 = v4[33];
        if (v73 == 0 || *(_QWORD*)(v73 + 8) == -1) {
          goto LABEL_115;
        }
      }
      if (*v65 != 0 && *(_BYTE*)(*v65 + 1041) == 1) {
        v74 = ui_LayoutAccessor_FindPane(v4 + 32, (__int64)v66);
        if (v74 != 0) {
          v75 =
              __dynamic_cast(v74, GameData_212d670[0], GameData_212d678[0], 0);
          if (v75 != 0) {
            v76 = v75;
            *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v75) + 24) + 8LL) = v65 + 3;
            *(_BYTE*)(v76 + 88) |= 1u;
          }
        }
        v77 = v65[2];
        if (v77 != 0) {
          v78 = *v65;
          v79 = *(_BYTE*)(v77 + 48);
          v106_.v106 = nullptr;
          v106_.v107 = 0;
          GameRoutine_191bab0(v78, v79, (__int64*)&v106_.v106);
          if (GameRoutine_8f9870(v65[2])) {
            v80 = (unsigned __int8*)GameRoutine_714e40();
            if (v80[32] != 0) {
              GameHr_179c320((__int64)&v106_.v106, v80);
              game_191b920(*v65, v125, v127);
              game_191ba20(*v65, v126);
              TrickEntity_7d1480((__int64)&v106_.v106);
            }
          }
        }
      }
    }
  }
LABEL_115:
  v90 = *a3;
  if (*a3 == 0) {
    goto LABEL_129;
  }
  v91 = a3[2];
  if (v91 == 0) {
    v94 = game_GameModeData_instance_;
    GameRoutine_682bc0(&v106_.v106, *(_QWORD*)(v90 + 32));
    if ((GameConverge_8e7ca0(*(_QWORD*)(v94 + 176), v106_.v106) & 1) != 0) {
      v90 = *a3;
    }
    else {
      v90 = *a3;
      if (a3[1] != 0) {
        v93 = &GameData_1af6361;
        if (v90 == 0) {
          v92 = 0;
          goto LABEL_130;
        }
      LABEL_128:
        v92 = *(_QWORD*)(v90 + 32);
        goto LABEL_130;
      }
    }
    if (v90 != 0) {
    LABEL_125:
      v95 = *(_BYTE**)(v90 + 40);
      v93 = &GameData_1abbaec;
      if (v95 != nullptr && *v95 != 0) {
        v93 = *(_BYTE**)(v90 + 40);
      }
      goto LABEL_128;
    }
  LABEL_129:
    v92 = 0;
    v93 = &GameData_1abbaec;
    goto LABEL_130;
  }
  if ((*(_BYTE*)(v91 + 416) & 8) == 0) {
    goto LABEL_125;
  }
  v92 = *(_QWORD*)(v90 + 32);
  v93 = &GameData_1af6361;
LABEL_130:
  result = GameRoutine_112ea40(v92, v93);
  if (result != 0) {
    v96 = *v65;
    if (*v65 != 0 && *(_BYTE*)(v96 + 1041) == 1) {
      v97 = *(_QWORD*)(result + 40);
      v98 = (unsigned __int8*)result;
      if (v97 != 0) {
        v99 = strlen(*(const char**)(result + 40));
        GameRoutine_190b6a0(v96, v97, v99);
        GameRoutine_1916fe0(*v65, 1, 0x0.0p+0f);
        GameRoutine_1917040(*v65, 1, 0x1.0000000000000p+0f);
        v96 = *v65;
      }
      GameRoutine_190b870(v96, v98[56], v98[57]);
      v100 = *v65;
      v101 = *(_QWORD*)(*v65 + 1456);
      if ((v98[60] & 1) != 0) {
        *(_QWORD*)(v100 + 1456) = v101 | 1;
        GameHr_1916be0(v100, 2, "EX_Sweat", 8, 1);
      }
      else {
        *(_QWORD*)(v100 + 1456) = v101 & 0xFFFFFFFFFFFFFFFELL;
        spine_AnimationState_setEmptyAnimation(*(_QWORD*)(v100 + 104), 2,
                                               0x0.0p+0f);
      }
      v102 = *v65;
      v103 = *(_QWORD*)(*v65 + 1456);
      if ((v98[60] & 2) != 0) {
        *(_QWORD*)(v102 + 1456) = v103 | 2;
        GameHr_1916be0(v102, 4, "EX_Cheek", 8, 1);
      }
      else {
        *(_QWORD*)(v102 + 1456) = v103 & 0xFFFFFFFFFFFFFFFDLL;
        spine_AnimationState_setEmptyAnimation(*(_QWORD*)(v102 + 104), 4,
                                               0x0.0p+0f);
      }
      v104 = *v65;
      v105 = *(_QWORD*)(*v65 + 1456);
      if ((v98[60] & 4) != 0) {
        *(_QWORD*)(v104 + 1456) = v105 | 4;
        return GameHr_1916be0(v104, 3, "EX_Anger", 8, 1);
      }
      else {
        *(_QWORD*)(v104 + 1456) = v105 & 0xFFFFFFFFFFFFFFFBLL;
        return spine_AnimationState_setEmptyAnimation(*(_QWORD*)(v104 + 104), 3,
                                                      0x0.0p+0f);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
