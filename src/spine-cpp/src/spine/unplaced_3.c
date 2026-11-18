#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_44d00(_QWORD* result, unsigned __int64, __int64*);
_QWORD* GameRoutine_44e40(_QWORD* result, unsigned __int64, __int64*);
_QWORD* GameRoutine_4d190(__int64, __int64);
_QWORD* SkeletonJson_3e980(_QWORD* result);
_QWORD* spine_Json_Json(_QWORD* result, __int64);
_QWORD* spine_MeshAttachment_setParentMesh(_QWORD* result, __int64);
_QWORD* spine_MeshAttachment_updateRegion(_QWORD* result);
__int64 GameRoutine_19e10();
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0ba50(__int64, int, unsigned __int64);
__int64 GameRoutine_44c80(__int64 result, unsigned __int64);
__int64 GameRoutine_44dd0(__int64 result, unsigned __int64);
__int64 GameRoutine_4e7c0(__int64);
__int64 GameRoutine_4e800(__int64, __int64, unsigned int);
__int64 String_Destructor(__int64);
__int64 __assert_fail();
__int64 spine_BoneData_BoneData(__int64 result, int, __int64, __int64);
__int64 spine_BoneData_getColor(_QWORD);
__int64 spine_BoundingBoxAttachment_getColor(_QWORD);
__int64 spine_ClippingAttachment_getColor(_QWORD);
__int64 spine_ConstraintData_setOrder(_QWORD, _QWORD);
__int64 spine_ConstraintData_setSkinRequired(_QWORD, _QWORD);
__int64 spine_EventData_EventData(__int64 result, __int64);
__int64 spine_IkConstraintData_IkConstraintData(__int64);
__int64 spine_Json_getInt(__int64, __int64, unsigned int);
__int64 spine_Json_getItem_4bae0(__int64, __int64);
__int64 spine_Json_getString(__int64, __int64, __int64);
__int64 spine_LinkedMesh_LinkedMesh(__int64 result, __int64, __int64, __int64,
                                    __int64, char);
__int64 spine_MeshAttachment_getColor(_QWORD);
__int64 spine_PathAttachment_getColor(_QWORD);
__int64 spine_PathConstraintData_PathConstraintData(__int64);
__int64 spine_PointAttachment_getColor(_QWORD);
__int64 spine_RegionAttachment_getColor(_QWORD);
__int64 spine_Sequence_Sequence(__int64 result, int);
__int64 spine_SkeletonData_SkeletonData(__int64 result);
__int64 spine_SkeletonData_findBone(__int64, __int64);
__int64 spine_SkeletonData_findSkin(__int64, __int64);
__int64 spine_SkeletonData_getDefaultSkin(_QWORD, _QWORD);
__int64 spine_SkeletonJson_readAnimation(__int64, __int64, _QWORD*);
__int64 spine_SkeletonJson_readVertices(__int64, __int64, __int64, __int64);
__int64 spine_SkeletonJson_setError(__int64, __int64, __int64, __int64);
__int64 spine_Skin_getAttachment(_QWORD, _QWORD, _QWORD);
__int64 spine_Skin_getBones(_QWORD);
__int64 spine_Skin_getConstraints(_QWORD);
__int64 spine_Skin_setAttachment(__int64, __int64, __int64, __int64);
__int64 spine_SlotData_getColor(_QWORD);
__int64 spine_SlotData_getDarkColor(_QWORD);
__int64 spine_SlotData_getIndex(_QWORD);
__int64 spine_SlotData_setAttachmentName(__int64 result, __int64);
__int64 spine_SlotData_setHasDarkColor(_QWORD, _QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD*);
__int64 spine_TransformConstraintData_TransformConstraintData(__int64);
bool spine_Json_getBoolean(__int64, __int64, char);
extern _UNKNOWN GameData_1a8bb7b;
extern __int64* GameData_21322b8[2];
extern char GameData_1a9f09e;
float spine_Json_getFloat(__int64, __int64, float);
int GameRoutine_1a09d30(const char*, const char*);
int GameRoutine_1a0a6b0(__int64, unsigned __int64, const char*, ...);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int64 GameRoutine_1a0ba60(const char*, __int64, int);
unsigned __int64 spine_String_String(unsigned __int64 result, const char*, char,
                                     char);
unsigned __int64 toColor(float*, const char*, char);
void GameRoutine_3dce0();
void GameRoutine_3e060();
void GameRoutine_3e140();
void GameRoutine_3e220();
void spine_RegionAttachment_updateRegion(__int64);
void spine_SlotData_SlotData(__int64, int, __int64, __int64);
float* spine_cpp_src_spine_3ecc0(__int64 a1, __int64 a2);
__int64 GameRoutine_4d190_alt1(__int64, __int64);
float spine_RegionAttachment_updateRegion_alt1(__int64 result);
float toColor_alt1(float*, const char*, char);

float* spine_cpp_src_spine_3ecc0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  char* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  float* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _BYTE* v48;
  __int64 v49;
  __int64 v50;
  __int64** v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64* v72;
  __int64* v73;
  char* v74;
  char* v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  char* v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  char* v88;
  float* v89;
  __int64 v90;
  char* v91;
  int v92;
  __int64 v93;
  char* v94;
  float* v95;
  __int64 v96;
  float* v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64* v106;
  char* v107;
  char* v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  char* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  char* v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  char* v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  float v126;
  float v127;
  int v128;
  __int16 v129;
  int v130;
  unsigned __int64 v131;
  float v132;
  float v133;
  __int16 v134;
  int v135;
  __int16 v136;
  int v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  unsigned __int64 v141;
  float v142;
  float v143;
  int v144;
  __int16 v145;
  int v146;
  float v147;
  __int16 v148;
  int v149;
  __int64 v150;
  char* v151;
  unsigned __int64 v152;
  __int64 v153;
  char* v154;
  __int64 v155;
  __int64 v156;
  char* v157;
  int v158;
  __int64 v159;
  __int64 v160;
  float* v161;
  unsigned __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  unsigned __int64 v169;
  __int64* v170;
  __int64* v171;
  __int64 v172;
  char* v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  char* v177;
  __int64 v178;
  int v179;
  bool v180;
  __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  unsigned __int64 v186;
  unsigned __int64 v187;
  float* v188;
  __int64 v189;
  unsigned __int64 v190;
  char* v191;
  unsigned __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  char* v196;
  __int64 v197;
  char* v198;
  char* v199;
  unsigned __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  int v204;
  __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64 v208;
  char* v209;
  __int64 v210;
  int v211;
  int v212;
  __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  unsigned __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  unsigned __int64 v221;
  __int64* v222;
  __int64 v223;
  char* v224;
  __int64 v225;
  unsigned __int64 v226;
  __int64 v227;
  char* v228;
  __int64 v229;
  int v230;
  bool v231;
  __int64 v232;
  unsigned __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  unsigned __int64 v237;
  unsigned __int64 v238;
  float* v239;
  __int64 v240;
  unsigned __int64 v241;
  char* v242;
  unsigned __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  char* v247;
  __int64 v248;
  char* v249;
  unsigned __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  int v254;
  __int64 v255;
  __int64 v256;
  unsigned __int64 v257;
  __int64 v258;
  char* v259;
  __int64 v260;
  float v261;
  float v262;
  float v263;
  __int64 v264;
  unsigned __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  unsigned __int64 v269;
  unsigned __int64 v270;
  __int64 v271;
  unsigned __int64 v272;
  __int64* v273;
  __int64* v274;
  __int64 v275;
  char* v276;
  __int64 v277;
  unsigned __int64 v278;
  __int64 v279;
  char* v280;
  __int64 v281;
  int v282;
  bool v283;
  __int64 v284;
  unsigned __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  unsigned __int64 v289;
  unsigned __int64 v290;
  float* v291;
  __int64 v292;
  unsigned __int64 v293;
  char* v294;
  unsigned __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  char* v299;
  __int64 v300;
  char* v301;
  char* v302;
  unsigned __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  int v307;
  __int64 v308;
  __int64 v309;
  unsigned __int64 v310;
  __int64 v311;
  char* v312;
  __int64 v313;
  char* v314;
  int v315;
  int v316;
  char* v317;
  int v318;
  char* v319;
  int v320;
  float v321;
  int v322;
  float v323;
  unsigned int v324;
  float v325;
  __int64 v326;
  __int64 v327;
  char* v328;
  __int64 v329;
  unsigned __int64 v330;
  __int64 v331;
  __int64 v332;
  __int64 v333;
  unsigned __int64 v334;
  unsigned __int64 v335;
  __int64 v336;
  unsigned __int64 v337;
  __int64* v338;
  __int64 v339;
  char* v340;
  __int64 v341;
  unsigned __int64 v342;
  __int64 v343;
  char* v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  char* v349;
  unsigned __int64 v350;
  __int64 v351;
  __int64 v352;
  char* v353;
  __int64 v354;
  __int64 v355;
  _QWORD* v356;
  unsigned __int64 v357;
  __int64 v358;
  _QWORD* v359;
  unsigned int v360;
  int v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  char* v367;
  unsigned __int64 v368;
  __int64 v369;
  __int64 v370;
  char* v371;
  __int64 v372;
  __int64 v373;
  _QWORD* v374;
  unsigned __int64 v375;
  __int64 v376;
  _QWORD* v377;
  unsigned int v378;
  int v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  __int64 v384;
  char* v385;
  unsigned __int64 v386;
  __int64 v387;
  __int64 v388;
  char* v389;
  __int64 v390;
  __int64 v391;
  _QWORD* v392;
  unsigned __int64 v393;
  __int64 v394;
  _QWORD* v395;
  unsigned int v396;
  int v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  char* v403;
  unsigned __int64 v404;
  __int64 v405;
  __int64 v406;
  char* v407;
  __int64 v408;
  __int64 v409;
  _QWORD* v410;
  unsigned __int64 v411;
  __int64 v412;
  _QWORD* v413;
  unsigned int v414;
  int v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  char* v419;
  __int64 v420;
  __int64 v421;
  char* v422;
  unsigned __int64 v423;
  __int64 v424;
  __int64 v425;
  char* v426;
  __int64 v427;
  __int64 v428;
  char* v429;
  char* v430;
  char* v431;
  char* v432;
  __int64 v433;
  unsigned __int64 v434;
  __int64 v435;
  __int64 v436;
  __int64 v437;
  _DWORD* v438;
  int v439;
  __int64 v440;
  __int64 v441;
  _DWORD* v442;
  int v443;
  __int64 v444;
  unsigned __int64 v445;
  __int64 v446;
  unsigned __int64 v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  __int64 v452;
  char* v453;
  __int64 v454;
  __int64 v455;
  __int64 v456;
  unsigned __int64 v457;
  __int64 v458;
  __int64 v459;
  __int64 v460;
  __int64 v461;
  unsigned __int64 v462;
  __int64 v463;
  unsigned __int64 v464;
  __int64 v465;
  __int64 v466;
  __int64 v467;
  __int64 v468;
  char* v469;
  __int64 v470;
  __int64 v471;
  __int64 v472;
  unsigned __int64 v473;
  __int64 v474;
  __int64 v475;
  __int64 v476;
  __int64 v477;
  unsigned __int64 v478;
  __int64 v479;
  __int64 v480;
  char* v481;
  float* v482;
  float v483;
  float v484;
  __int64 v485;
  __int64 v486;
  int v487;
  __int64 v488;
  char* v489;
  __int64 v490;
  unsigned __int64 v491;
  __int64 v492;
  __int64 v493;
  __int64 v494;
  unsigned __int64 v495;
  __int64 v496;
  __int64 v497;
  __int64 v498;
  unsigned __int64 v499;
  unsigned __int64 v500;
  __int64 v501;
  unsigned __int64 v502;
  __int64 v503;
  unsigned __int64 v504;
  __int64 v505;
  __int64 v506;
  __int64 v507;
  __int64 v508;
  unsigned __int64 v509;
  unsigned __int64 v510;
  unsigned __int64 v511;
  __int64 v512;
  unsigned __int64 v513;
  __int64 v514;
  unsigned __int64 v515;
  __int64 v516;
  __int64 v517;
  __int64 v518;
  unsigned __int64 v519;
  unsigned __int64 v520;
  __int64 v521;
  unsigned __int64 v522;
  __int64 v523;
  int v524;
  __int64 v525;
  __int64 v526;
  unsigned __int64 v527;
  __int64 v528;
  int v529;
  __int64 v530;
  __int64 v531;
  __int64 v532;
  unsigned __int64 v533;
  int v534;
  char* v535;
  int v536;
  unsigned __int64 v537;
  __int64 v538;
  __int64 v539;
  __int64 v540;
  __int64 v541;
  char* v542;
  __int64 v543;
  unsigned __int64 v544;
  __int64 v545;
  unsigned int v546;
  int v547;
  __int64 v548;
  __int64 v549;
  __int64 v550;
  __int64 v551;
  __int64 v552;
  int v553;
  __int64 v554;
  __int64 v555;
  unsigned __int64 v556;
  float v557;
  float v558;
  __int64 v559;
  char* v560;
  float* v561;
  __int64 v562;
  unsigned __int64 v563;
  __int64 v564;
  __int64 v565;
  unsigned __int64 v566;
  __int64 v567;
  __int64 v568;
  char* v569;
  __int64 v570;
  int v571;
  __int64 v572;
  char* v573;
  float* v574;
  __int64 v575;
  char* v576;
  __int64 v577;
  __int64 v578;
  __int64 v579;
  char* v580;
  __int64 v581;
  int v582;
  unsigned __int64 v583;
  __int64 v584;
  __int64 v585;
  __int64 v586;
  unsigned __int64 v587;
  unsigned __int64 v588;
  __int64 v589;
  unsigned __int64 v590;
  __int64 v591;
  __int64 v592;
  int v593;
  __int64 v594;
  __int64 v595;
  unsigned __int64 v596;
  __int64 v597;
  char* v598;
  __int64 v599;
  char* v600;
  __int64 v601;
  unsigned __int64 v602;
  __int64 v603;
  __int64 v604;
  char* v605;
  __int64 v606;
  int v607;
  __int64 v608;
  int v609;
  unsigned __int64 v610;
  __int64 v611;
  char* v612;
  __int64 v613;
  __int64 v614;
  unsigned __int64 v615;
  __int64 v616;
  __int64 v617;
  __int64 v618;
  __int64 v619;
  __int64 v620;
  int v621;
  __int64 v622;
  __int64 v623;
  unsigned __int64 v624;
  __int64 v625;
  int v626;
  __int64 v627;
  __int64 v628;
  unsigned __int64 v629;
  __int64 v630;
  char* v631;
  __int64 v632;
  __int64 v633;
  __int64 v634;
  __int64 v635;
  int v636;
  __int64 v637;
  __int64 v638;
  unsigned __int64 v639;
  __int64* v640;
  __int64 v641;
  char* v642;
  unsigned __int64 v643;
  __int64 v644;
  __int64 v645;
  __int64 v646;
  __int64 v647;
  int v648;
  __int64 v649;
  __int64 v650;
  unsigned __int64 v651;
  __int64 v652;
  char* v653;
  unsigned __int64 v654;
  __int64 v655;
  __int64 v656;
  __int64 v657;
  __int64 v658;
  __int64* v659;
  __int64 v660;
  int v661;
  __int64 v662;
  __int64 v663;
  unsigned __int64 v664;
  __int64* v665;
  __int64 v666;
  char* v667;
  unsigned __int64 v668;
  __int64 v669;
  __int64 v670;
  __int64 v671;
  __int64* v672;
  __int64 v673;
  __int64 v674;
  __int64 v675;
  float* v676;
  __int64 v677;
  unsigned __int64 v678;
  __int64 v679;
  unsigned __int64 v680;
  __int64* v681;
  __int64 v682;
  char* v683;
  __int64 v684;
  unsigned __int64 v685;
  __int64 v686;
  char* v687;
  __int64 v688;
  __int64 v689;
  __int64 v690;
  char* v691;
  __int64 v692;
  unsigned __int64 v693;
  __int64 v694;
  __int64 v695;
  __int64 v696;
  __int64 v697;
  __int64 v698;
  char* v699;
  __int64 v700;
  unsigned __int64 v701;
  __int64 v702;
  __int64 v703;
  __int64 v704;
  float* v705;
  __int64 v706;
  float* v707;
  __int64 v708;
  unsigned __int64 v709;
  __int64 v710;
  unsigned __int64 v711;
  __int64 v712;
  __int64 v713;
  __int64 v714;
  __int64 v715;
  __int64* v716;
  __int64* v717;
  __int64 v718;
  __int64 v719;
  unsigned __int64 v720;
  __int64 v721;
  __int64 v722;
  __int64 v723;
  __int64 v724;
  __int64 v725;
  char* v726;
  __int64 v727;
  __int64 v728;
  unsigned __int64 v729;
  __int64 v730;
  __int64 v731;
  __int64 v732;
  __int64 v733;
  char* v734;
  unsigned __int64 v735;
  __int64 v736;
  __int64 v737;
  __int64 v739;
  unsigned __int64 v740;
  __int64 v741;
  __int64 v742;
  __int64 v743;
  struct {
    __int64* v744;
    __int64 v745;
    unsigned __int64 v746;
    __int64 v747;
    __int64 v748;
    union {
      __int64* v749;
      __int64* v750;
      __int64* v751;
      __int64* v752;
      __int64 v753;
    };
    __int64 v754;
    _QWORD v755[3];
    char v756;
    char gap81_[7];
    __int64* v757;
    unsigned __int64 v758;
    __int64 v759;
    char v760;
    char gap113_[7];
    __int64* v761;
    __int64 v762;
    char* v763;
    char v764;
    char gap145_[247];
    float* v765;
  } f_;

  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(char**)(a1 + 72);
  v4 = a1;
  if (v2 != &GameData_1a9f09e) {
    if (v2 != nullptr && (*(_BYTE*)(a1 + 80) & 1) != 0) {
      v5 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v5 + 40LL))(
          v5, (__int64)v2,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
          135),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    *(_QWORD*)(v4 + 64) = 0;
    v6 = GameRoutine_19e10(),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v6 +
                                                              24LL))(
        v6, 1, (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
        142),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = *(_QWORD*)(v4 + 64);
    *(_QWORD*)(v4 + 72) = v7;
    GameRoutine_1a0ba50(v7, 0, v8 + 1),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_QWORD*)(v4 + 24) = 0;
  v9 = (_QWORD*)GameRoutine_4e800(
      56, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
      0x8Cu),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  spine_Json_Json(v9, a2),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (float*)GameRoutine_4e800(
      488, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
      0x93u),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  spine_SkeletonData_SkeletonData((__int64)v10),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = spine_Json_getItem_4bae0((__int64)v9, (__int64)"skeleton"),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v11 != 0) {
    v12 = v11;
    v13 = spine_Json_getString(v11, (__int64)"hash", 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v14 = *((_QWORD*)v10 + 46);
    if (v14 != v13) {
      v15 = (const char*)v13;
      if (v14 != 0 && (*(_BYTE*)&v10[94] & 1) != 0) {
        v16 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v16 +
                                                          40LL))(
            v16, v14,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            135),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v15 != nullptr) {
        v17 = GameRoutine_1a09c70(v15),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *((_QWORD*)v10 + 45) = v17;
        v18 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v19 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v18 + 24LL))(
            v18, v17 + 1,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            142),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v20 = *((_QWORD*)v10 + 45);
        *((_QWORD*)v10 + 46) = v19;
        GameRoutine_1a0b950(v19, (__int64)v15, v20 + 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        *((_QWORD*)v10 + 45) = 0;
        *((_QWORD*)v10 + 46) = 0;
      }
    }
    v21 = spine_Json_getString(v12, (__int64)"spine", 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v22 = *((_QWORD*)v10 + 42);
    if (v22 != v21) {
      v23 = (const char*)v21;
      if (v22 != 0 && (*(_BYTE*)&v10[86] & 1) != 0) {
        v24 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v24 +
                                                          40LL))(
            v24, v22,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            135),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v23 != nullptr) {
        v25 = GameRoutine_1a09c70(v23),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *((_QWORD*)v10 + 41) = v25;
        v26 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v27 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v26 + 24LL))(
            v26, v25 + 1,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            142),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v28 = *((_QWORD*)v10 + 41);
        *((_QWORD*)v10 + 42) = v27;
        GameRoutine_1a0b950(v27, (__int64)v23, v28 + 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        *((_QWORD*)v10 + 41) = 0;
        *((_QWORD*)v10 + 42) = 0;
      }
    }
    v29 = GameData_21322b8[0];
    f_.v764 = 1;
    v30 = GameData_21322b8[0] + 2;
    f_.v761 = GameData_21322b8[0] + 2;
    f_.v762 = 3;
    v31 = GameRoutine_19e10(),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v32 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
        *(_QWORD*)v31 + 24LL))(
        v31, 4,
        (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h", 53),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v763 = v32;
    v33 = (__int64)v32;
    *(_DWORD*)v32 = 3223092;
    if (*((_QWORD*)v10 + 41) < 3u ||
        *(unsigned __int8*)(v34 = *((_QWORD*)v10 + 42)) !=
            (unsigned __int8)*v32 ||
        *(unsigned __int8*)(v34 + 1) != (unsigned __int8)v32[1] ||
        *(unsigned __int8*)(v34 + 2) != (unsigned __int8)v32[2]) {
      f_.v761 = v30;
      v44 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v44 + 40LL))(
          v44, v33,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
          206),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_1a0a6b0(
          (__int64)&f_.v761, 0xFFu,
          "Skeleton version %s does not match runtime version %s",
          *((const char**)v10 + 42), "4.1"),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v757 = v30;
      f_.v760 = 1;
      f_.v758 = GameRoutine_1a09c70((const char*)&f_.v761),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v45 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v46 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v45 +
                                                                 24LL))(
          v45, f_.v758 + 1,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h", 53),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v759 = v46;
      GameRoutine_1a0b950(v46, (__int64)&f_.v761, f_.v758 + 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v756 = 1;
      f_.v755[0] = v30;
      f_.v755[1] = 0;
      v47 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v48 = (_BYTE*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)v47 + 24LL))(
          v47, 1,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h", 53),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v755[2] = v48;
      *v48 = 0;
      spine_SkeletonJson_setError(v4, 0, (__int64)&f_.v757, (__int64)f_.v755),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v755[0] = v30;
      v49 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v49 + 40LL))(
          v49, (__int64)v48,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
          206),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      spine_SpineObject_Destroy_SpineObject_4e8a0(f_.v755),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v757 = v30;
      if (v46 != 0) {
        v50 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v50 +
                                                          40LL))(
            v50, v46,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            206),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v51 = &f_.v757;
      goto LABEL_698;
    }
    f_.v761 = v29 + 2;
    v35 = GameRoutine_19e10(),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v35 + 40LL))(
        v35, v33,
        (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h", 206),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10[76] = spine_Json_getFloat(v12, (__int64)"x", 0x0.0p+0f),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10[77] = spine_Json_getFloat(v12, (__int64)"y", 0x0.0p+0f),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10[78] = spine_Json_getFloat(v12, (__int64)"width", 0x0.0p+0f),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10[79] = spine_Json_getFloat(v12, (__int64)"height", 0x0.0p+0f),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10[104] = spine_Json_getFloat(v12, (__int64)&GameData_1a8bb7b,
                                   0x1.e000000000000p+4f),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v36 = spine_Json_getString(v12, (__int64)"audio", 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v37 = *((_QWORD*)v10 + 59);
    if (v37 != v36) {
      v38 = (const char*)v36;
      if (v37 != 0 && (*(_BYTE*)&v10[120] & 1) != 0) {
        v39 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v39 +
                                                          40LL))(
            v39, v37,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            135),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v38 != nullptr) {
        v40 = GameRoutine_1a09c70(v38),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *((_QWORD*)v10 + 58) = v40;
        v41 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v42 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v41 + 24LL))(
            v41, v40 + 1,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            142),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v43 = *((_QWORD*)v10 + 58);
        *((_QWORD*)v10 + 59) = v42;
        GameRoutine_1a0b950(v42, (__int64)v38, v43 + 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        *((_QWORD*)v10 + 58) = 0;
        *((_QWORD*)v10 + 59) = 0;
      }
    }
    v52 = spine_Json_getString(v12, (__int64)"images", 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v53 = *((_QWORD*)v10 + 55);
    if (v53 != v52) {
      v54 = (const char*)v52;
      if (v53 != 0 && (*(_BYTE*)&v10[112] & 1) != 0) {
        v55 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v55 +
                                                          40LL))(
            v55, v53,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            135),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v54 != nullptr) {
        v56 = GameRoutine_1a09c70(v54),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *((_QWORD*)v10 + 54) = v56;
        v57 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v58 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v57 + 24LL))(
            v57, v56 + 1,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            142),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v59 = *((_QWORD*)v10 + 54);
        *((_QWORD*)v10 + 55) = v58;
        GameRoutine_1a0b950(v58, (__int64)v54, v59 + 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        *((_QWORD*)v10 + 54) = 0;
        *((_QWORD*)v10 + 55) = 0;
      }
    }
  }
  v60 = spine_Json_getItem_4bae0((__int64)v9, (__int64)"bones"),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v61 = *(int*)(v60 + 28);
  v63 = *((_QWORD*)v10 + 6);
  v62 = *((_QWORD*)v10 + 7);
  v64 = v60;
  *((_QWORD*)v10 + 6) = v61;
  if (v62 < v61) {
    v65 = *((_QWORD*)v10 + 8);
    v66 = (int)(float)((float)v61 * 0x1.c000000000000p+0f);
    if (v66 <= 8) {
      v67 = 8;
    }
    else {
      v67 = v66;
    }
    *((_QWORD*)v10 + 7) = v67;
    v68 = GameRoutine_19e10(),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v69 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
        *(_QWORD*)v68 + 32LL))(
        v68, v65, 8LL * v67,
        (__int64)"/Program/Externals/Spine/include\\spine/Vector.h", 82),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v61 = *((_QWORD*)v10 + 6);
    *((_QWORD*)v10 + 8) = v69;
  }
  f_.v748 = (__int64)v9;
  if (v63 < v61) {
    do {
      *(_QWORD*)(*((_QWORD*)v10 + 8) + 8 * v63++) = 0;
    } while (v63 < *((_QWORD*)v10 + 6));
  }
  v70 = *(_QWORD*)(v64 + 16);
  f_.v765 = v10;
  f_.v754 = v4;
  if (v70 != 0) {
    v71 = 0;
    v72 = GameData_21322b8[0] + 2;
    v73 = GameData_21322b8[0];
    while (1) {
      v74 = (const char*)spine_Json_getString(v70, (__int64)"parent", 0),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v74 != nullptr) {
        v75 = v74;
        f_.v761 = v73 + 2;
        f_.v764 = 1;
        v76 = GameRoutine_1a09c70(v74),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v762 = v76;
        v77 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v77 + 24LL))(
            v77, v76 + 1,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            53),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameRoutine_1a0b950((__int64)f_.v763, (__int64)v75, f_.v762 + 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v78 = spine_SkeletonData_findBone((__int64)f_.v765, (__int64)&f_.v761),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v761 = v73 + 2;
        v79 = f_.v763;
        v80 = v78;
        if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
          v81 = GameRoutine_19e10(),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v81 +
                                                            40LL))(
              v81, (__int64)v79,
              (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
              206),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v80 == 0) {
          (*(void (**)(__int64))(*(_QWORD*)f_.v765 + 8LL))((__int64)f_.v765),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v764 = 1;
          f_.v761 = v73 + 2;
          f_.v762 = 23;
          v630 = GameRoutine_19e10(),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
              *(_QWORD*)v630 + 24LL))(
              v630, 24,
              (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
              53),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v631 = f_.v763;
          strcpy(f_.v763, "Parent bone not found: ");
          f_.v757 = v73 + 2;
          f_.v760 = 1;
          f_.v758 = GameRoutine_1a09c70(v75),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v632 = GameRoutine_19e10(),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v633 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
              *(_QWORD*)v632 + 24LL))(
              v632, f_.v758 + 1,
              (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
              53),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v759 = v633;
          GameRoutine_1a0b950(v633, (__int64)v75, f_.v758 + 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          spine_SkeletonJson_setError(v4, (__int64)v9, (__int64)&f_.v761,
                                      (__int64)&f_.v757),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v757 = v73 + 2;
          if (v633 != 0) {
            v634 = GameRoutine_19e10(),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(__int64, __int64, __int64, __int64))(
                *(_QWORD*)v634 + 40LL))(v634, v633,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/SpineString.h",
                                        206),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v757),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v761 = v73 + 2;
          goto LABEL_696;
        }
      }
      else {
        v80 = 0;
      }
      v82 = GameRoutine_4e800(
          120, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
          0xBBu),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v83 = (const char*)spine_Json_getString(v70, (__int64)"name", 0),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v761 = v72;
      f_.v764 = 1;
      if (v83 != nullptr) {
        v84 = (__int64)v83;
        v85 = GameRoutine_1a09c70(v83),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v762 = v85;
        v86 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v87 = v85 + 1;
        v4 = f_.v754;
        f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v86 + 24LL))(
            v86, v87,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            53),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameRoutine_1a0b950((__int64)f_.v763, v84, f_.v762 + 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        f_.v762 = 0;
        f_.v763 = nullptr;
      }
      spine_BoneData_BoneData(v82, v71, (__int64)&f_.v761, v80),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v88 = f_.v763;
      v89 = f_.v765;
      f_.v761 = v73 + 2;
      if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
        v90 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v90 +
                                                          40LL))(
            v90, (__int64)v88,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            206),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)(v82 +
                56) = spine_Json_getFloat(v70, (__int64)"length", 0x0.0p+0f) *
                      *(float*)(v4 + 48),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)(v82 + 60) = spine_Json_getFloat(v70, (__int64)"x", 0x0.0p+0f) *
                            *(float*)(v4 + 48),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)(v82 + 64) = spine_Json_getFloat(v70, (__int64)"y", 0x0.0p+0f) *
                            *(float*)(v4 + 48),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)(v82 +
                68) = spine_Json_getFloat(v70, (__int64)"rotation", 0x0.0p+0f),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)(v82 + 72) =
          spine_Json_getFloat(v70, (__int64)"scaleX", 0x1.0000000000000p+0f),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)(v82 + 76) =
          spine_Json_getFloat(v70, (__int64)"scaleY", 0x1.0000000000000p+0f),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)(v82 +
                80) = spine_Json_getFloat(v70, (__int64)"shearX", 0x0.0p+0f),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)(v82 +
                84) = spine_Json_getFloat(v70, (__int64)"shearY", 0x0.0p+0f),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v91 = (const char*)spine_Json_getString(v70, (__int64)"transform",
                                              (__int64)"normal"),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_DWORD*)(v82 + 88) = 0;
      if (GameRoutine_1a09d30(v91, "normal") != 0) {
        if (GameRoutine_1a09d30(v91, "onlyTranslation") == 0) {
          break;
        }
        if (GameRoutine_1a09d30(v91, "noRotationOrReflection") == 0) {
          v92 = 2;
          goto LABEL_73;
        }
        if (GameRoutine_1a09d30(v91, "noScale") == 0) {
          v92 = 3;
          goto LABEL_73;
        }
        if (GameRoutine_1a09d30(v91, "noScaleOrReflection") == 0) {
          v92 = 4;
        LABEL_73:
          *(_DWORD*)(v82 + 88) = v92;
        }
      }
      *(_BYTE*)(v82 + 92) = spine_Json_getBoolean(v70, (__int64)"skin", 0),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v93 = spine_Json_getString(v70, (__int64)"color", 0),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v93 != 0) {
        v94 = (const char*)v93;
        v95 = (float*)spine_BoneData_getColor(v82),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        toColor_alt1(v95, v94, 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (*((_QWORD*)v89 + 6) <= v71) {
        goto LABEL_663;
      }
      *(_QWORD*)(*((_QWORD*)v89 + 8) + 8 * v71++) = v82;
      v70 = *(_QWORD*)(v70 + 8);
      if (v70 == 0) {
        goto LABEL_78;
      }
    }
    v92 = 1;
    goto LABEL_73;
  }
LABEL_78:
  v96 = spine_Json_getItem_4bae0((__int64)v9, (__int64)"slots"),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v96 == 0) {
    goto LABEL_141;
  }
  v97 = f_.v765;
  v98 = *(int*)(v96 + 28);
  v99 = v96;
  if (*((_QWORD*)f_.v765 + 11) >= v98) {
    v103 = *((_QWORD*)f_.v765 + 10);
    *((_QWORD*)f_.v765 + 10) = v98;
  LABEL_81:
    if (v103 >= v98) {
      goto LABEL_83;
    }
    goto LABEL_82;
  }
  v100 = *((_QWORD*)f_.v765 + 12);
  *((_QWORD*)f_.v765 + 11) = v98;
  v101 = GameRoutine_19e10(),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_QWORD*)v97 +
    12) = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                          __int64))(*(_QWORD*)v101 + 32LL))(
      v101, v100, 8 * v98,
      (__int64)"/Program/Externals/Spine/include\\spine/Vector.h", 94),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v103 = *((_QWORD*)v97 + 10);
  v102 = *((_QWORD*)v97 + 11);
  v98 = *(int*)(v99 + 28);
  *((_QWORD*)v97 + 10) = v98;
  if (v102 >= v98) {
    goto LABEL_81;
  }
  v620 = *((_QWORD*)v97 + 12);
  if ((unsigned int)(int)(float)((float)v98 * 0x1.c000000000000p+0f) <= 8) {
    v621 = 8;
  }
  else {
    v621 = (int)(float)((float)v98 * 0x1.c000000000000p+0f);
  }
  *((_QWORD*)v97 + 11) = v621;
  v622 = GameRoutine_19e10(),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v623 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)v622 + 32LL))(
      v622, v620, 8LL * v621,
      (__int64)"/Program/Externals/Spine/include\\spine/Vector.h", 82),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v624 = *((_QWORD*)v97 + 10);
  *((_QWORD*)v97 + 12) = v623;
  if (v103 < v624) {
    do {
    LABEL_82:
      *(_QWORD*)(*((_QWORD*)v97 + 12) + 8 * v103++) = 0;
    } while (v103 < *((_QWORD*)v97 + 10));
  }
LABEL_83:
  v104 = *(_QWORD*)(v99 + 16);
  if (v104 != 0) {
    v105 = 0;
    v106 = GameData_21322b8[0];
    f_.v749 = GameData_21322b8[0] + 2;
    while (1) {
      v107 = (const char*)spine_Json_getString(v104, (__int64)"bone", 0),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v108 = v107;
      f_.v764 = 1;
      f_.v761 = f_.v749;
      if (v107 != nullptr) {
        v109 = GameRoutine_1a09c70(v107),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v762 = v109;
        v110 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v110 + 24LL))(
            v110, v109 + 1,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            53),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameRoutine_1a0b950((__int64)f_.v763, (__int64)v108, f_.v762 + 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        f_.v762 = 0;
        f_.v763 = nullptr;
      }
      v111 = spine_SkeletonData_findBone((__int64)f_.v765, (__int64)&f_.v761),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v112 = f_.v763;
      v113 = v111;
      f_.v761 = v106 + 2;
      if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
        v114 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v114 +
                                                          40LL))(
            v114, (__int64)v112,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            206),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v113 == 0) {
        (*(void (**)(__int64))(*(_QWORD*)f_.v765 + 8LL))((__int64)f_.v765),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v764 = 1;
        f_.v761 = v106 + 2;
        f_.v762 = 21;
        v652 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v652 + 24LL))(
            v652, 22,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            53),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v653 = f_.v763;
        strcpy(f_.v763, "Slot bone not found: ");
        f_.v757 = v106 + 2;
        f_.v760 = 1;
        if (v108 != nullptr) {
          v654 = GameRoutine_1a09c70(v108),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v758 = v654;
          v655 = GameRoutine_19e10(),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v656 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
              *(_QWORD*)v655 + 24LL))(
              v655, v654 + 1,
              (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
              53),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v759 = v656;
          GameRoutine_1a0b950(v656, (__int64)v108, v654 + 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          spine_SkeletonJson_setError(f_.v754, (__int64)v9, (__int64)&f_.v761,
                                      (__int64)&f_.v757),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v757 = v106 + 2;
          if (v656 != 0) {
            v657 = GameRoutine_19e10(),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(__int64, __int64, __int64, __int64))(
                *(_QWORD*)v657 + 40LL))(v657, v656,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/SpineString.h",
                                        206),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        else {
          f_.v758 = 0;
          f_.v759 = 0;
          spine_SkeletonJson_setError(f_.v754, (__int64)v9, (__int64)&f_.v761,
                                      (__int64)&f_.v757),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v757 = v106 + 2;
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v757),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v761 = v106 + 2;
      LABEL_634:
        v672 = (__int64*)GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v673 = *v672;
        v674 = (__int64)v653;
        goto LABEL_697;
      }
      v115 = GameRoutine_4e800(
          152, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
          0xEDu),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v116 = (const char*)spine_Json_getString(v104, (__int64)"name", 0),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v764 = 1;
      f_.v761 = v106 + 2;
      if (v116 != nullptr) {
        v117 = (__int64)v116;
        v118 = GameRoutine_1a09c70(v116),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v762 = v118;
        v119 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)v119 + 24LL))(
            v119, v118 + 1,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            53),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameRoutine_1a0b950((__int64)f_.v763, v117, f_.v762 + 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        f_.v762 = 0;
        f_.v763 = nullptr;
      }
      spine_SlotData_SlotData(v115, v105, (__int64)&f_.v761, v113),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v120 = f_.v763;
      f_.v761 = v106 + 2;
      if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
        v121 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v121 +
                                                          40LL))(
            v121, (__int64)v120,
            (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
            206),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v122 = spine_Json_getString(v104, (__int64)"color", 0),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v122 != 0) {
        break;
      }
    LABEL_112:
      v138 = spine_Json_getString(v104, (__int64)"dark", 0),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v138 == 0) {
        goto LABEL_123;
      }
      v139 = v138;
      v140 = spine_SlotData_getDarkColor(v115),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v141 = GameRoutine_1a09c70((const char*)v139),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v142 = -0x1.0000000000000p+0f;
      v143 = -0x1.0000000000000p+0f;
      if (v141 < 2 ||
          (LOBYTE(f_.v757) = *(_BYTE*)v139,
           *(_WORD*)((char*)&f_.v757 + 1) = *(unsigned __int8*)(v139 + 1),
           v144 = GameRoutine_1a0ba60((const char*)&f_.v757, (__int64)&f_.v761,
                                      16),
           v143 = -0x1.0000000000000p+0f, *(_BYTE*)f_.v761 != 0)) {
        *(float*)(v140 + 8) = v143;
        if (GameRoutine_1a09c70((const char*)v139) >= 4) {
          goto LABEL_116;
        }
      }
      else {
        *(float*)(v140 + 8) = (float)v144 / 0x1.fe00000000000p+7f;
        if (GameRoutine_1a09c70((const char*)v139) >= 4) {
        LABEL_116:
          v145 = *(_WORD*)(v139 + 2);
          BYTE2(f_.v757) = 0;
          LOWORD(f_.v757) = v145;
          v146 =
              GameRoutine_1a0ba60((const char*)&f_.v757, (__int64)&f_.v761, 16),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (*(_BYTE*)f_.v761 == 0) {
            v142 = (float)v146 / 0x1.fe00000000000p+7f;
          }
        }
      }
      *(float*)(v140 + 12) = v142;
      v147 = -0x1.0000000000000p+0f;
      if (GameRoutine_1a09c70((const char*)v139) >= 6) {
        v148 = *(_WORD*)(v139 + 4);
        BYTE2(f_.v757) = 0;
        LOWORD(f_.v757) = v148;
        v149 =
            GameRoutine_1a0ba60((const char*)&f_.v757, (__int64)&f_.v761, 16),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (*(_BYTE*)f_.v761 == 0) {
          v147 = (float)v149 / 0x1.fe00000000000p+7f;
        }
      }
      *(float*)(v140 + 16) = v147;
      *(_DWORD*)(v140 + 20) = 1065353216;
      spine_SlotData_setHasDarkColor(v115, 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_123:
      v150 = spine_Json_getItem_4bae0(v104, (__int64)"attachment"),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v150 != 0) {
        v151 = *(const char**)(v150 + 32);
        f_.v764 = 1;
        f_.v761 = v106 + 2;
        if (v151 != nullptr) {
          v152 = GameRoutine_1a09c70(v151),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v762 = v152;
          v153 = GameRoutine_19e10(),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
              *(_QWORD*)v153 + 24LL))(
              v153, v152 + 1,
              (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
              53),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_1a0b950((__int64)f_.v763, (__int64)v151, f_.v762 + 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          f_.v762 = 0;
          f_.v763 = nullptr;
        }
        spine_SlotData_setAttachmentName(v115, (__int64)&f_.v761),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v154 = f_.v763;
        f_.v761 = v106 + 2;
        if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
          v155 = GameRoutine_19e10(),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v155 +
                                                            40LL))(
              v155, (__int64)v154,
              (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
              206),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v156 = spine_Json_getItem_4bae0(v104, (__int64)"blend"),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v156 != 0) {
        v157 = *(const char**)(v156 + 32);
        if (GameRoutine_1a09d30(v157, "additive") == 0) {
          v158 = 1;
          goto LABEL_138;
        }
        if (GameRoutine_1a09d30(v157, "multiply") == 0) {
          v158 = 2;
          goto LABEL_138;
        }
        if (GameRoutine_1a09d30(v157, "screen") == 0) {
          v158 = 3;
        LABEL_138:
          *(_DWORD*)(v115 + 144) = v158;
        }
      }
      if (*((_QWORD*)f_.v765 + 10) <= v105) {
        goto LABEL_663;
      }
      *(_QWORD*)(*((_QWORD*)f_.v765 + 12) + 8 * v105++) = v115;
      v104 = *(_QWORD*)(v104 + 8);
      if (v104 == 0) {
        goto LABEL_141;
      }
    }
    v123 = v122;
    v124 = spine_SlotData_getColor(v115),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v125 = GameRoutine_1a09c70((const char*)v123),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v126 = -0x1.0000000000000p+0f;
    v127 = -0x1.0000000000000p+0f;
    if (v125 < 2 ||
        (LOBYTE(f_.v757) = *(_BYTE*)v123,
         *(_WORD*)((char*)&f_.v757 + 1) = *(unsigned __int8*)(v123 + 1),
         v128 =
             GameRoutine_1a0ba60((const char*)&f_.v757, (__int64)&f_.v761, 16),
         v127 = -0x1.0000000000000p+0f, *(_BYTE*)f_.v761 != 0)) {
      *(float*)(v124 + 8) = v127;
      if (GameRoutine_1a09c70((const char*)v123) < 4) {
        goto LABEL_105;
      }
    }
    else {
      *(float*)(v124 + 8) = (float)v128 / 0x1.fe00000000000p+7f;
      if (GameRoutine_1a09c70((const char*)v123) < 4) {
        goto LABEL_105;
      }
    }
    v129 = *(_WORD*)(v123 + 2);
    BYTE2(f_.v757) = 0;
    LOWORD(f_.v757) = v129;
    v130 = GameRoutine_1a0ba60((const char*)&f_.v757, (__int64)&f_.v761, 16),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(_BYTE*)f_.v761 == 0) {
      v126 = (float)v130 / 0x1.fe00000000000p+7f;
    }
  LABEL_105:
    *(float*)(v124 + 12) = v126;
    v131 = GameRoutine_1a09c70((const char*)v123),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v132 = -0x1.0000000000000p+0f;
    v133 = -0x1.0000000000000p+0f;
    if (v131 < 6 ||
        (v134 = *(_WORD*)(v123 + 4), BYTE2(f_.v757) = 0, LOWORD(f_.v757) = v134,
         v135 =
             GameRoutine_1a0ba60((const char*)&f_.v757, (__int64)&f_.v761, 16),
         v133 = -0x1.0000000000000p+0f, *(_BYTE*)f_.v761 != 0)) {
      *(float*)(v124 + 16) = v133;
      if (GameRoutine_1a09c70((const char*)v123) >= 8) {
        goto LABEL_108;
      }
    }
    else {
      *(float*)(v124 + 16) = (float)v135 / 0x1.fe00000000000p+7f;
      if (GameRoutine_1a09c70((const char*)v123) >= 8) {
      LABEL_108:
        v136 = *(_WORD*)(v123 + 6);
        BYTE2(f_.v757) = 0;
        LOWORD(f_.v757) = v136;
        v137 =
            GameRoutine_1a0ba60((const char*)&f_.v757, (__int64)&f_.v761, 16),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (*(_BYTE*)f_.v761 == 0) {
          v132 = (float)v137 / 0x1.fe00000000000p+7f;
        }
      }
    }
    *(float*)(v124 + 20) = v132;
    goto LABEL_112;
  }
LABEL_141:
  v159 = (__int64)v9;
  v160 = spine_Json_getItem_4bae0((__int64)v9, (__int64)"ik"),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v161 = f_.v765;
  if (v160 == 0) {
    goto LABEL_188;
  }
  v162 = *(int*)(v160 + 28);
  v163 = v160;
  if (*((_QWORD*)f_.v765 + 28) >= v162) {
    v167 = *((_QWORD*)f_.v765 + 27);
    *((_QWORD*)f_.v765 + 27) = v162;
  LABEL_144:
    if (v167 >= v162) {
      goto LABEL_146;
    }
    goto LABEL_145;
  }
  v164 = *((_QWORD*)f_.v765 + 29);
  *((_QWORD*)f_.v765 + 28) = v162;
  v165 = GameRoutine_19e10(),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_QWORD*)v161 +
    29) = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                          __int64))(*(_QWORD*)v165 + 32LL))(
      v165, v164, 8 * v162,
      (__int64)"/Program/Externals/Spine/include\\spine/Vector.h", 94),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v167 = *((_QWORD*)v161 + 27);
  v166 = *((_QWORD*)v161 + 28);
  v162 = *(int*)(v163 + 28);
  *((_QWORD*)v161 + 27) = v162;
  if (v166 >= v162) {
    goto LABEL_144;
  }
  v625 = *((_QWORD*)v161 + 29);
  if ((unsigned int)(int)(float)((float)v162 * 0x1.c000000000000p+0f) <= 8) {
    v626 = 8;
  }
  else {
    v626 = (int)(float)((float)v162 * 0x1.c000000000000p+0f);
  }
  *((_QWORD*)v161 + 28) = v626;
  v627 = GameRoutine_19e10(),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v628 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)v627 + 32LL))(
      v627, v625, 8LL * v626,
      (__int64)"/Program/Externals/Spine/include\\spine/Vector.h", 82),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v629 = *((_QWORD*)v161 + 27);
  *((_QWORD*)v161 + 29) = v628;
  if (v167 < v629) {
    do {
    LABEL_145:
      *(_QWORD*)(*((_QWORD*)v161 + 29) + 8 * v167++) = 0;
    } while (v167 < *((_QWORD*)v161 + 27));
  }
LABEL_146:
  v168 = *(_QWORD*)(v163 + 16);
  if (v168 == 0) {
  LABEL_188:
    v213 = spine_Json_getItem_4bae0(v159, (__int64)"transform"),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v213 == 0) {
      goto LABEL_232;
    }
    v214 = *(int*)(v213 + 28);
    v215 = v213;
    if (*((_QWORD*)v161 + 32) >= v214) {
      v219 = *((_QWORD*)v161 + 31);
      *((_QWORD*)v161 + 31) = v214;
    }
    else {
      v216 = *((_QWORD*)v161 + 33);
      *((_QWORD*)v161 + 32) = v214;
      v217 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *((_QWORD*)v161 +
        33) = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                              __int64))(*(_QWORD*)v217 + 32LL))(
          v217, v216, 8 * v214,
          (__int64)"/Program/Externals/Spine/include\\spine/Vector.h", 94),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v219 = *((_QWORD*)v161 + 31);
      v218 = *((_QWORD*)v161 + 32);
      v214 = *(int*)(v215 + 28);
      *((_QWORD*)v161 + 31) = v214;
      if (v218 < v214) {
        v635 = *((_QWORD*)v161 + 33);
        if ((unsigned int)(int)(float)((float)v214 * 0x1.c000000000000p+0f) <=
            8) {
          v636 = 8;
        }
        else {
          v636 = (int)(float)((float)v214 * 0x1.c000000000000p+0f);
        }
        *((_QWORD*)v161 + 32) = v636;
        v637 = GameRoutine_19e10(),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v638 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
            *(_QWORD*)v637 + 32LL))(
            v637, v635, 8LL * v636,
            (__int64)"/Program/Externals/Spine/include\\spine/Vector.h", 82),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v639 = *((_QWORD*)v161 + 31);
        *((_QWORD*)v161 + 33) = v638;
        if (v219 >= v639) {
        LABEL_193:
          v220 = *(_QWORD*)(v215 + 16);
          if (v220 != 0) {
            v221 = 0;
            v170 = GameData_21322b8[0];
            v222 = GameData_21322b8[0] + 2;
            f_.v751 = GameData_21322b8[0] + 2;
            while (1) {
              v223 = GameRoutine_4e800(152,
                                       (__int64)"/Program/Externals/Spine/src/"
                                                "spine/SkeletonJson.cpp",
                                       0x148u),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v224 =
                  (const char*)spine_Json_getString(v220, (__int64)"name", 0),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              f_.v761 = v222;
              f_.v764 = 1;
              if (v224 != nullptr) {
                v225 = (__int64)v224;
                v226 = GameRoutine_1a09c70(v224),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                f_.v762 = v226;
                v227 = GameRoutine_19e10(),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                f_.v763 =
                    (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
                        *(_QWORD*)v227 + 24LL))(
                        v227, v226 + 1,
                        (__int64)"/Program/Externals/Spine/include\\spine/"
                                 "SpineString.h",
                        53),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                GameRoutine_1a0b950((__int64)f_.v763, v225, f_.v762 + 1),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                f_.v762 = 0;
                f_.v763 = nullptr;
              }
              spine_TransformConstraintData_TransformConstraintData(v223),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v228 = f_.v763;
              f_.v761 = v170 + 2;
              if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                v229 = GameRoutine_19e10(),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                (*(void (**)(__int64, __int64, __int64, __int64))(
                    *(_QWORD*)v229 + 40LL))(
                    v229, (__int64)v228,
                    (__int64)"/Program/Externals/Spine/include\\spine/"
                             "SpineString.h",
                    206),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v230 = spine_Json_getInt(v220, (__int64)"order", 0),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              spine_ConstraintData_setOrder(v223, v230),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v231 = spine_Json_getBoolean(v220, (__int64)"skin", 0),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              spine_ConstraintData_setSkinRequired(v223, v231),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v232 = spine_Json_getItem_4bae0(v220, (__int64)"bones"),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v233 = *(int*)(v232 + 28);
              v234 = v232;
              if (*(_QWORD*)(v223 + 72) >= v233) {
                break;
              }
              v235 = *(_QWORD*)(v223 + 80);
              *(_QWORD*)(v223 + 72) = v233;
              v236 = GameRoutine_19e10(),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(_QWORD*)(v223 +
                         80) = (*(__int64 (**)(__int64, __int64, __int64,
                                               __int64, __int64))(
                  *(_QWORD*)v236 + 32LL))(
                  v236, v235, 8 * v233,
                  (__int64)"/Program/Externals/Spine/include\\spine/Vector.h",
                  94),
                         v328 = COERCE_AS(
                             __typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v238 = *(_QWORD*)(v223 + 64);
              v237 = *(_QWORD*)(v223 + 72);
              v233 = *(int*)(v234 + 28);
              *(_QWORD*)(v223 + 64) = v233;
              if (v237 >= v233) {
                goto LABEL_203;
              }
              v253 = *(_QWORD*)(v223 + 80);
              if ((unsigned int)(int)(float)((float)v233 *
                                             0x1.c000000000000p+0f) <= 8) {
                v254 = 8;
              }
              else {
                v254 = (int)(float)((float)v233 * 0x1.c000000000000p+0f);
              }
              *(_QWORD*)(v223 + 72) = v254;
              v255 = GameRoutine_19e10(),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v256 = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                                     __int64))(*(_QWORD*)v255 + 32LL))(
                  v255, v253, 8LL * v254,
                  (__int64)"/Program/Externals/Spine/include\\spine/Vector.h",
                  82),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v257 = *(_QWORD*)(v223 + 64);
              *(_QWORD*)(v223 + 80) = v256;
              v239 = f_.v765;
              if (v238 < v257) {
                goto LABEL_204;
              }
            LABEL_205:
              v240 = *(_QWORD*)(v234 + 16);
              if (v240 != 0) {
                v241 = 0;
                while (1) {
                  v242 = *(const char**)(v240 + 32);
                  f_.v764 = 1;
                  f_.v761 = v170 + 2;
                  if (v242 != nullptr) {
                    v243 = GameRoutine_1a09c70(v242),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    f_.v762 = v243;
                    v244 = GameRoutine_19e10(),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v245 = v243 + 1;
                    v239 = f_.v765;
                    f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64,
                                                     __int64))(*(_QWORD*)v244 +
                                                               24LL))(
                        v244, v245,
                        (__int64)"/Program/Externals/Spine/include\\spine/"
                                 "SpineString.h",
                        53),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    GameRoutine_1a0b950((__int64)f_.v763, (__int64)v242,
                                        f_.v762 + 1),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v246 = spine_SkeletonData_findBone((__int64)v239,
                                                       (__int64)&f_.v761),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if (*(_QWORD*)(v223 + 64) <= v241) {
                      goto LABEL_663;
                    }
                  }
                  else {
                    f_.v762 = 0;
                    f_.v763 = nullptr;
                    v246 = spine_SkeletonData_findBone((__int64)v239,
                                                       (__int64)&f_.v761),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if (*(_QWORD*)(v223 + 64) <= v241) {
                      goto LABEL_663;
                    }
                  }
                  *(_QWORD*)(*(_QWORD*)(v223 + 80) + 8 * v241) = v246;
                  v247 = f_.v763;
                  f_.v761 = v170 + 2;
                  if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                    v248 = GameRoutine_19e10(),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    (*(void (**)(__int64, __int64, __int64, __int64))(
                        *(_QWORD*)v248 + 40LL))(
                        v248, (__int64)v247,
                        (__int64)"/Program/Externals/Spine/include\\spine/"
                                 "SpineString.h",
                        206),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (*(_QWORD*)(v223 + 64) <= v241) {
                    goto LABEL_663;
                  }
                  if (*(_QWORD*)(*(_QWORD*)(v223 + 80) + 8 * v241) == 0) {
                    break;
                  }
                  v240 = *(_QWORD*)(v240 + 8);
                  ++v241;
                  if (v240 == 0) {
                    goto LABEL_217;
                  }
                }
                (*(void (**)(__int64))(*(_QWORD*)v239 + 8LL))((__int64)v239),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v640 = v170 + 2;
                f_.v764 = 1;
                f_.v761 = v170 + 2;
                f_.v762 = 26;
                v658 = GameRoutine_19e10(),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                f_.v763 =
                    (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
                        *(_QWORD*)v658 + 24LL))(
                        v658, 27,
                        (__int64)"/Program/Externals/Spine/include\\spine/"
                                 "SpineString.h",
                        53),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v631 = f_.v763;
                strcpy(f_.v763, "Transform bone not found: ");
                f_.v757 = v170 + 2;
                f_.v760 = 1;
                v642 = *(const char**)(v240 + 32);
                if (v642 == nullptr) {
                LABEL_622:
                  f_.v758 = 0;
                  f_.v759 = 0;
                  spine_SkeletonJson_setError(f_.v754, (__int64)v9,
                                              (__int64)&f_.v761,
                                              (__int64)&f_.v757),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  f_.v757 = v640;
                LABEL_623:
                  spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v757),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v659 = v170 + 2;
                  goto LABEL_695;
                }
              LABEL_610:
                v643 = GameRoutine_1a09c70(v642),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                f_.v758 = v643;
                v644 = GameRoutine_19e10(),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v645 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
                    *(_QWORD*)v644 + 24LL))(
                    v644, v643 + 1,
                    (__int64)"/Program/Externals/Spine/include\\spine/"
                             "SpineString.h",
                    53),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                f_.v759 = v645;
                GameRoutine_1a0b950(v645, (__int64)v642, v643 + 1),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                spine_SkeletonJson_setError(
                    f_.v754, (__int64)v9, (__int64)&f_.v761, (__int64)&f_.v757),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                f_.v757 = v640;
                if (v645 != 0) {
                  v646 = GameRoutine_19e10(),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(__int64, __int64, __int64, __int64))(
                      *(_QWORD*)v646 + 40LL))(
                      v646, v645,
                      (__int64)"/Program/Externals/Spine/include\\spine/"
                               "SpineString.h",
                      206),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                goto LABEL_623;
              }
            LABEL_217:
              v249 =
                  (const char*)spine_Json_getString(v220, (__int64)"target", 0),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v199 = v249;
              f_.v764 = 1;
              f_.v761 = v170 + 2;
              if (v249 != nullptr) {
                v250 = GameRoutine_1a09c70(v249),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                f_.v762 = v250;
                v251 = GameRoutine_19e10(),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v252 = v250 + 1;
                v239 = f_.v765;
                f_.v763 =
                    (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
                        *(_QWORD*)v251 + 24LL))(
                        v251, v252,
                        (__int64)"/Program/Externals/Spine/include\\spine/"
                                 "SpineString.h",
                        53),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                GameRoutine_1a0b950((__int64)f_.v763, (__int64)v199,
                                    f_.v762 + 1),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                f_.v762 = 0;
                f_.v763 = nullptr;
              }
              v159 = (__int64)v9;
              v222 = f_.v751;
              v258 =
                  spine_SkeletonData_findBone((__int64)v239, (__int64)&f_.v761),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v259 = f_.v763;
              *(_QWORD*)(v223 + 88) = v258;
              f_.v761 = v170 + 2;
              if (v259 != nullptr && (f_.v764 & 1) != 0) {
                v260 = GameRoutine_19e10(),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                (*(void (**)(__int64, __int64, __int64, __int64))(
                    *(_QWORD*)v260 + 40LL))(
                    v260, (__int64)v259,
                    (__int64)"/Program/Externals/Spine/include\\spine/"
                             "SpineString.h",
                    206),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (*(_QWORD*)(v223 + 88) == 0) {
                goto LABEL_672;
              }
              *(_BYTE*)(v223 + 145) = (unsigned int)spine_Json_getInt(
                                          v220, (__int64)"local", 0) != 0,
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              *(_BYTE*)(v223 + 144) = (unsigned int)spine_Json_getInt(
                                          v220, (__int64)"relative", 0) != 0,
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              *(float*)(v223 + 120) =
                  spine_Json_getFloat(v220, (__int64)"rotation", 0x0.0p+0f),
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              *(float*)(v223 + 124) =
                  spine_Json_getFloat(v220, (__int64)"x", 0x0.0p+0f) *
                  *(float*)(f_.v754 + 48),
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              *(float*)(v223 + 128) =
                  spine_Json_getFloat(v220, (__int64)"y", 0x0.0p+0f) *
                  *(float*)(f_.v754 + 48),
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              *(float*)(v223 + 132) =
                  spine_Json_getFloat(v220, (__int64)"scaleX", 0x0.0p+0f),
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              *(float*)(v223 + 136) =
                  spine_Json_getFloat(v220, (__int64)"scaleY", 0x0.0p+0f),
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              *(float*)(v223 + 140) =
                  spine_Json_getFloat(v220, (__int64)"shearY", 0x0.0p+0f),
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              *(float*)(v223 + 96) = spine_Json_getFloat(
                  v220, (__int64)"mixRotate", 0x1.0000000000000p+0f),
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              v261 = spine_Json_getFloat(v220, (__int64)"mixX",
                                         0x1.0000000000000p+0f),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(float*)(v223 + 100) = v261;
              *(float*)(v223 +
                        104) = spine_Json_getFloat(v220, (__int64)"mixY", v261),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v262 = spine_Json_getFloat(v220, (__int64)"mixScaleX",
                                         0x1.0000000000000p+0f),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(float*)(v223 + 108) = v262;
              *(float*)(v223 + 112) =
                  spine_Json_getFloat(v220, (__int64)"mixScaleY", v262),
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
              v263 = spine_Json_getFloat(v220, (__int64)"mixShearY",
                                         0x1.0000000000000p+0f),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v161 = f_.v765;
              *(float*)(v223 + 116) = v263;
              if (*((_QWORD*)v161 + 31) <= v221) {
                goto LABEL_663;
              }
              *(_QWORD*)(*((_QWORD*)v161 + 33) + 8 * v221++) = v223;
              v220 = *(_QWORD*)(v220 + 8);
              if (v220 == 0) {
                goto LABEL_232;
              }
            }
            v238 = *(_QWORD*)(v223 + 64);
            *(_QWORD*)(v223 + 64) = v233;
          LABEL_203:
            v239 = f_.v765;
            if (v238 >= v233) {
              goto LABEL_205;
            }
            do {
            LABEL_204:
              *(_QWORD*)(*(_QWORD*)(v223 + 80) + 8 * v238++) = 0;
            } while (v238 < *(_QWORD*)(v223 + 64));
            goto LABEL_205;
          }
        LABEL_232:
          v264 = spine_Json_getItem_4bae0(v159, (__int64)"path"),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v264 == 0) {
            goto LABEL_300;
          }
          v265 = *(int*)(v264 + 28);
          v266 = v264;
          if (*((_QWORD*)v161 + 36) >= v265) {
            v270 = *((_QWORD*)v161 + 35);
            *((_QWORD*)v161 + 35) = v265;
          }
          else {
            v267 = *((_QWORD*)v161 + 37);
            *((_QWORD*)v161 + 36) = v265;
            v268 = GameRoutine_19e10(),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *((_QWORD*)v161 +
              37) = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                                    __int64))(*(_QWORD*)v268 + 32LL))(
                v268, v267, 8 * v265,
                (__int64)"/Program/Externals/Spine/include\\spine/Vector.h",
                94),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v270 = *((_QWORD*)v161 + 35);
            v269 = *((_QWORD*)v161 + 36);
            v265 = *(int*)(v266 + 28);
            *((_QWORD*)v161 + 35) = v265;
            if (v269 < v265) {
              v647 = *((_QWORD*)v161 + 37);
              if ((unsigned int)(int)(float)((float)v265 *
                                             0x1.c000000000000p+0f) <= 8) {
                v648 = 8;
              }
              else {
                v648 = (int)(float)((float)v265 * 0x1.c000000000000p+0f);
              }
              *((_QWORD*)v161 + 36) = v648;
              v649 = GameRoutine_19e10(),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v650 = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                                     __int64))(*(_QWORD*)v649 + 32LL))(
                  v649, v647, 8LL * v648,
                  (__int64)"/Program/Externals/Spine/include\\spine/Vector.h",
                  82),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v651 = *((_QWORD*)v161 + 35);
              *((_QWORD*)v161 + 37) = v650;
              if (v270 >= v651) {
              LABEL_237:
                v271 = *(_QWORD*)(v266 + 16);
                if (v271 != 0) {
                  v272 = 0;
                  v273 = GameData_21322b8[0];
                  v274 = GameData_21322b8[0] + 2;
                  f_.v752 = GameData_21322b8[0] + 2;
                  while (1) {
                    v275 =
                        GameRoutine_4e800(136,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "src/spine/SkeletonJson.cpp",
                                          0x17Fu),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v276 = (const char*)spine_Json_getString(
                        v271, (__int64)"name", 0),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    f_.v761 = v274;
                    f_.v764 = 1;
                    if (v276 != nullptr) {
                      v277 = (__int64)v276;
                      v278 = GameRoutine_1a09c70(v276),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      f_.v762 = v278;
                      v279 = GameRoutine_19e10(),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      f_.v763 = (char*)(*(
                          __int64 (**)(__int64, __int64, __int64, __int64))(
                          *(_QWORD*)v279 + 24LL))(
                          v279, v278 + 1,
                          (__int64)"/Program/Externals/Spine/include\\spine/"
                                   "SpineString.h",
                          53),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      GameRoutine_1a0b950((__int64)f_.v763, v277, f_.v762 + 1),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    else {
                      f_.v762 = 0;
                      f_.v763 = nullptr;
                    }
                    spine_PathConstraintData_PathConstraintData(v275),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v280 = f_.v763;
                    f_.v761 = v273 + 2;
                    if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                      v281 = GameRoutine_19e10(),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      (*(void (**)(__int64, __int64, __int64, __int64))(
                          *(_QWORD*)v281 + 40LL))(
                          v281, (__int64)v280,
                          (__int64)"/Program/Externals/Spine/include\\spine/"
                                   "SpineString.h",
                          206),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v282 = spine_Json_getInt(v271, (__int64)"order", 0),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    spine_ConstraintData_setOrder(v275, v282),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v283 = spine_Json_getBoolean(v271, (__int64)"skin", 0),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    spine_ConstraintData_setSkinRequired(v275, v283),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v284 = spine_Json_getItem_4bae0(v271, (__int64)"bones"),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v285 = *(int*)(v284 + 28);
                    v286 = v284;
                    if (*(_QWORD*)(v275 + 72) >= v285) {
                      break;
                    }
                    v287 = *(_QWORD*)(v275 + 80);
                    *(_QWORD*)(v275 + 72) = v285;
                    v288 = GameRoutine_19e10(),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    *(_QWORD*)(v275 + 80) =
                        (*(__int64 (**)(__int64, __int64, __int64, __int64,
                                        __int64))(*(_QWORD*)v288 + 32LL))(
                            v288, v287, 8 * v285,
                            (__int64)"/Program/Externals/Spine/include\\spine/"
                                     "Vector.h",
                            94),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                    v290 = *(_QWORD*)(v275 + 64);
                    v289 = *(_QWORD*)(v275 + 72);
                    v285 = *(int*)(v286 + 28);
                    *(_QWORD*)(v275 + 64) = v285;
                    if (v289 >= v285) {
                      goto LABEL_247;
                    }
                    v306 = *(_QWORD*)(v275 + 80);
                    if ((unsigned int)(int)(float)((float)v285 *
                                                   0x1.c000000000000p+0f) <=
                        8) {
                      v307 = 8;
                    }
                    else {
                      v307 = (int)(float)((float)v285 * 0x1.c000000000000p+0f);
                    }
                    *(_QWORD*)(v275 + 72) = v307;
                    v308 = GameRoutine_19e10(),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v309 = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                                           __int64))(*(_QWORD*)v308 + 32LL))(
                        v308, v306, 8LL * v307,
                        (__int64)"/Program/Externals/Spine/include\\spine/"
                                 "Vector.h",
                        82),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v310 = *(_QWORD*)(v275 + 64);
                    *(_QWORD*)(v275 + 80) = v309;
                    v291 = f_.v765;
                    if (v290 < v310) {
                      goto LABEL_248;
                    }
                  LABEL_249:
                    v292 = *(_QWORD*)(v286 + 16);
                    if (v292 != 0) {
                      v293 = 0;
                      do {
                        v294 = *(const char**)(v292 + 32);
                        f_.v764 = 1;
                        f_.v761 = v273 + 2;
                        if (v294 != nullptr) {
                          v295 = GameRoutine_1a09c70(v294),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          f_.v762 = v295;
                          v296 = GameRoutine_19e10(),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          v297 = v295 + 1;
                          v291 = f_.v765;
                          f_.v763 = (char*)(*(
                              __int64 (**)(__int64, __int64, __int64, __int64))(
                              *(_QWORD*)v296 + 24LL))(
                              v296, v297,
                              (__int64)"/Program/Externals/Spine/"
                                       "include\\spine/SpineString.h",
                              53),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          GameRoutine_1a0b950((__int64)f_.v763, (__int64)v294,
                                              f_.v762 + 1),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v298 = spine_SkeletonData_findBone((__int64)v291,
                                                             (__int64)&f_.v761),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          if (*(_QWORD*)(v275 + 64) <= v293) {
                            goto LABEL_663;
                          }
                        }
                        else {
                          f_.v762 = 0;
                          f_.v763 = nullptr;
                          v298 = spine_SkeletonData_findBone((__int64)v291,
                                                             (__int64)&f_.v761),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          if (*(_QWORD*)(v275 + 64) <= v293) {
                            goto LABEL_663;
                          }
                        }
                        *(_QWORD*)(*(_QWORD*)(v275 + 80) + 8 * v293) = v298;
                        v299 = f_.v763;
                        f_.v761 = v273 + 2;
                        if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                          v300 = GameRoutine_19e10(),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          (*(void (**)(__int64, __int64, __int64, __int64))(
                              *(_QWORD*)v300 + 40LL))(
                              v300, (__int64)v299,
                              (__int64)"/Program/Externals/Spine/"
                                       "include\\spine/SpineString.h",
                              206),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                        }
                        spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                        if (*(_QWORD*)(v275 + 64) <= v293) {
                          goto LABEL_663;
                        }
                        if (*(_QWORD*)(*(_QWORD*)(v275 + 80) + 8 * v293) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v291 + 8LL))(
                              (__int64)v291),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v665 = v273 + 2;
                          f_.v764 = 1;
                          f_.v761 = v273 + 2;
                          f_.v762 = 21;
                          v666 = GameRoutine_19e10(),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          f_.v763 = (char*)(*(
                              __int64 (**)(__int64, __int64, __int64, __int64))(
                              *(_QWORD*)v666 + 24LL))(
                              v666, 22,
                              (__int64)"/Program/Externals/Spine/"
                                       "include\\spine/SpineString.h",
                              53),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          v631 = f_.v763;
                          strcpy(f_.v763, "Path bone not found: ");
                          f_.v757 = v273 + 2;
                          f_.v760 = 1;
                          v667 = *(const char**)(v292 + 32);
                          if (v667 != nullptr) {
                            v668 = GameRoutine_1a09c70(v667),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            f_.v758 = v668;
                            v669 = GameRoutine_19e10(),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v670 = (*(__int64 (**)(__int64, __int64, __int64,
                                                   __int64))(*(_QWORD*)v669 +
                                                             24LL))(
                                v669, v668 + 1,
                                (__int64)"/Program/Externals/Spine/"
                                         "include\\spine/SpineString.h",
                                53),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            f_.v759 = v670;
                            GameRoutine_1a0b950(v670, (__int64)v667, v668 + 1),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                            v671 = f_.v754;
                            goto LABEL_690;
                          }
                          v713 = f_.v754;
                          f_.v758 = 0;
                          f_.v759 = 0;
                          goto LABEL_693;
                        }
                        v292 = *(_QWORD*)(v292 + 8);
                        ++v293;
                      } while (v292 != 0);
                    }
                    v301 = (const char*)spine_Json_getString(
                        v271, (__int64)"target", 0),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v302 = v301;
                    f_.v764 = 1;
                    f_.v761 = v273 + 2;
                    if (v301 != nullptr) {
                      v303 = GameRoutine_1a09c70(v301),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      f_.v762 = v303;
                      v304 = GameRoutine_19e10(),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      v305 = v303 + 1;
                      v291 = f_.v765;
                      f_.v763 = (char*)(*(
                          __int64 (**)(__int64, __int64, __int64, __int64))(
                          *(_QWORD*)v304 + 24LL))(
                          v304, v305,
                          (__int64)"/Program/Externals/Spine/include\\spine/"
                                   "SpineString.h",
                          53),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      GameRoutine_1a0b950((__int64)f_.v763, (__int64)v302,
                                          f_.v762 + 1),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    else {
                      f_.v762 = 0;
                      f_.v763 = nullptr;
                    }
                    v274 = f_.v752;
                    v311 = ((__int64 (*)(float*, __int64**))GameRoutine_3dce0)(
                        v291, &f_.v761),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v312 = f_.v763;
                    *(_QWORD*)(v275 + 88) = v311;
                    f_.v761 = v273 + 2;
                    if (v312 != nullptr && (f_.v764 & 1) != 0) {
                      v313 = GameRoutine_19e10(),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      (*(void (**)(__int64, __int64, __int64, __int64))(
                          *(_QWORD*)v313 + 40LL))(
                          v313, (__int64)v312,
                          (__int64)"/Program/Externals/Spine/include\\spine/"
                                   "SpineString.h",
                          206),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if (*(_QWORD*)(v275 + 88) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)f_.v765 + 8LL))(
                          (__int64)f_.v765),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      spine_String_String((unsigned __int64)&f_.v761,
                                          "Target slot not found: ", 0, 1),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      spine_String_String((unsigned __int64)&f_.v757, v302, 0,
                                          1),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      v714 = f_.v754;
                      v715 = f_.v748;
                      goto LABEL_704;
                    }
                    v314 = (const char*)spine_Json_getString(
                        v271, (__int64)"positionMode", (__int64)"percent"),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v315 = GameRoutine_1a09d30(v314, "fixed"),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v161 = f_.v765;
                    if (v315 != 0) {
                      if (GameRoutine_1a09d30(v314, "percent") != 0) {
                        goto LABEL_279;
                      }
                      v316 = 1;
                    }
                    else {
                      v316 = 0;
                    }
                    *(_DWORD*)(v275 + 96) = v316;
                  LABEL_279:
                    v317 = (const char*)spine_Json_getString(
                        v271, (__int64)"spacingMode", (__int64)"length"),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if (GameRoutine_1a09d30(v317, "length") != 0) {
                      if (GameRoutine_1a09d30(v317, "fixed") != 0) {
                        if (GameRoutine_1a09d30(v317, "percent") != 0) {
                          v318 = 3;
                        }
                        else {
                          v318 = 2;
                        }
                      }
                      else {
                        v318 = 1;
                      }
                      *(_DWORD*)(v275 + 100) = v318;
                    }
                    else {
                      *(_DWORD*)(v275 + 100) = 0;
                    }
                    v319 = (const char*)spine_Json_getString(
                        v271, (__int64)"rotateMode", (__int64)"tangent"),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if (GameRoutine_1a09d30(v319, "tangent") != 0) {
                      if (GameRoutine_1a09d30(v319, "chain") != 0) {
                        if (GameRoutine_1a09d30(v319, "chainScale") != 0) {
                          goto LABEL_294;
                        }
                        v320 = 2;
                      }
                      else {
                        v320 = 1;
                      }
                    }
                    else {
                      v320 = 0;
                    }
                    *(_DWORD*)(v275 + 104) = v320;
                  LABEL_294:
                    *(float*)(v275 + 108) = spine_Json_getFloat(
                        v271, (__int64)"rotation", 0x0.0p+0f),
                                     v328 = COERCE_AS(
                                         __typeof__(v328),
                                         PSEUDO_REGISTER(unsigned long long,
                                                         "x1", "=r"));
                    v321 = spine_Json_getFloat(v271, (__int64)"position",
                                               0x0.0p+0f),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v322 = *(_DWORD*)(v275 + 96);
                    *(float*)(v275 + 112) = v321;
                    if (v322 == 0) {
                      *(float*)(v275 + 112) = v321 * *(float*)(f_.v754 + 48);
                    }
                    v323 = spine_Json_getFloat(v271, (__int64)"spacing",
                                               0x0.0p+0f),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v324 = *(_DWORD*)(v275 + 100);
                    *(float*)(v275 + 116) = v323;
                    if (v324 <= 1) {
                      *(float*)(v275 + 116) = v323 * *(float*)(f_.v754 + 48);
                    }
                    *(float*)(v275 + 120) = spine_Json_getFloat(
                        v271, (__int64)"mixRotate", 0x1.0000000000000p+0f),
                                     v328 = COERCE_AS(
                                         __typeof__(v328),
                                         PSEUDO_REGISTER(unsigned long long,
                                                         "x1", "=r"));
                    v325 = spine_Json_getFloat(v271, (__int64)"mixX",
                                               0x1.0000000000000p+0f),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    *(float*)(v275 + 124) = v325;
                    *(float*)(v275 + 128) =
                        spine_Json_getFloat(v271, (__int64)"mixY", v325),
                                     v328 = COERCE_AS(
                                         __typeof__(v328),
                                         PSEUDO_REGISTER(unsigned long long,
                                                         "x1", "=r"));
                    if (*((_QWORD*)v161 + 35) <= v272) {
                      goto LABEL_663;
                    }
                    *(_QWORD*)(*((_QWORD*)v161 + 37) + 8 * v272++) = v275;
                    v271 = *(_QWORD*)(v271 + 8);
                    if (v271 == 0) {
                      goto LABEL_300;
                    }
                  }
                  v290 = *(_QWORD*)(v275 + 64);
                  *(_QWORD*)(v275 + 64) = v285;
                LABEL_247:
                  v291 = f_.v765;
                  if (v290 >= v285) {
                    goto LABEL_249;
                  }
                  do {
                  LABEL_248:
                    *(_QWORD*)(*(_QWORD*)(v275 + 80) + 8 * v290++) = 0;
                  } while (v290 < *(_QWORD*)(v275 + 64));
                  goto LABEL_249;
                }
              LABEL_300:
                v326 = f_.v748;
                v327 = spine_Json_getItem_4bae0(f_.v748, (__int64)"skins"),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v329 = f_.v754;
                if (v327 == 0) {
                LABEL_574:
                  if ((int)*(_QWORD*)(v329 + 24) >= 1) {
                    v614 = *(_QWORD*)(v329 + 24) & 0x7FFFFFFFLL;
                    v615 = 0;
                    while (*(_QWORD*)(v329 + 24) > v615) {
                      v616 = *(_QWORD*)(*(_QWORD*)(v329 + 40) + 8 * v615);
                      if (*(_QWORD*)(v616 + 24) != 0) {
                        v617 = spine_SkeletonData_findSkin((__int64)v161,
                                                           v616 + 16),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        if (v617 == 0) {
                          goto LABEL_673;
                        }
                      }
                      else {
                        v617 = spine_SkeletonData_getDefaultSkin(v161, v328),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        if (v617 == 0) {
                        LABEL_673:
                          (*(void (**)(__int64))(*(_QWORD*)v161 + 8LL))(
                              (__int64)v161),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          spine_String_String((unsigned __int64)&f_.v761,
                                              "Skin not found: ", 0, 1),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          spine_String_String((unsigned __int64)&f_.v757,
                                              *(const char**)(v616 + 32), 0, 1),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v714 = v329;
                          v715 = v326;
                          goto LABEL_704;
                        }
                      }
                      v618 = spine_Skin_getAttachment(
                          v617, *(_QWORD*)(v616 + 48), v616 + 56),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      if (v618 == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v161 + 8LL))(
                            (__int64)v161),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                        v716 = GameData_21322b8[0];
                        f_.v764 = 1;
                        v717 = GameData_21322b8[0] + 2;
                        f_.v761 = GameData_21322b8[0] + 2;
                        f_.v762 = 23;
                        v718 = GameRoutine_19e10(),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        f_.v763 = (char*)(*(
                            __int64 (**)(__int64, __int64, __int64, __int64))(
                            *(_QWORD*)v718 + 24LL))(
                            v718, 24,
                            (__int64)"/Program/Externals/Spine/include\\spine/"
                                     "SpineString.h",
                            53),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        v631 = f_.v763;
                        strcpy(f_.v763, "Parent mesh not found: ");
                        f_.v757 = v717;
                        f_.v760 = 1;
                        v719 = *(_QWORD*)(v616 + 72);
                        if (v719 != 0) {
                          v720 =
                              GameRoutine_1a09c70(*(const char**)(v616 + 72)),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          f_.v758 = v720;
                          v721 = GameRoutine_19e10(),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          v722 =
                              (*(__int64 (**)(__int64, __int64, __int64,
                                              __int64))(*(_QWORD*)v721 + 24LL))(
                                  v721, v720 + 1,
                                  (__int64)"/Program/Externals/Spine/"
                                           "include\\spine/SpineString.h",
                                  53),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          f_.v759 = v722;
                          GameRoutine_1a0b950(v722, v719, v720 + 1),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          spine_SkeletonJson_setError(
                              v329, v326, (__int64)&f_.v761, (__int64)&f_.v757),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          f_.v757 = v717;
                          if (v722 != 0) {
                            v723 = GameRoutine_19e10(),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            (*(void (**)(__int64, __int64, __int64, __int64))(
                                *(_QWORD*)v723 + 40LL))(
                                v723, v722,
                                (__int64)"/Program/Externals/Spine/"
                                         "include\\spine/SpineString.h",
                                206),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                        }
                        else {
                          f_.v758 = 0;
                          f_.v759 = 0;
                          spine_SkeletonJson_setError(
                              v329, v326, (__int64)&f_.v761, (__int64)&f_.v757),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          f_.v757 = v717;
                        }
                        spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v757),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                        v659 = v716 + 2;
                        goto LABEL_695;
                      }
                      if (*(_BYTE*)(v616 + 88) != 0) {
                        v619 = v618;
                      }
                      else {
                        v619 = *(_QWORD*)(v616 + 8);
                      }
                      *(_QWORD*)(*(_QWORD*)(v616 + 8) + 120LL) = v619;
                      spine_MeshAttachment_setParentMesh(*(_QWORD**)(v616 + 8),
                                                         v618),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      if (*(_QWORD*)(*(_QWORD*)(v616 + 8) + 344LL) != 0) {
                        spine_MeshAttachment_updateRegion(
                            *(_QWORD**)(v616 + 8)),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      (*(void (**)(__int64))(**(_QWORD**)(v329 + 8) + 72LL))(
                          *(_QWORD*)(v329 + 8)),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      if (v614 == ++v615) {
                        goto LABEL_635;
                      }
                    }
                    goto LABEL_663;
                  }
                LABEL_635:
                  SkeletonJson_3e980((_QWORD*)(v329 + 16)),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  *(_QWORD*)(v329 + 24) = 0;
                  v675 = spine_Json_getItem_4bae0(v326, (__int64)"events"),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v675 == 0) {
                    goto LABEL_664;
                  }
                  v676 = f_.v765;
                  v677 = v675;
                  GameRoutine_44c80((__int64)(f_.v765 + 36),
                                    *(int*)(v675 + 28)),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v678 = *(int*)(v677 + 28);
                  f_.v761 = nullptr;
                  GameRoutine_44d00((_QWORD*)v676 + 18, v678,
                                    (__int64*)&f_.v761),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v679 = *(_QWORD*)(v677 + 16);
                  if (v679 == 0) {
                    goto LABEL_664;
                  }
                  v680 = 0;
                  v681 = GameData_21322b8[0] + 2;
                  while (1) {
                    v682 =
                        GameRoutine_4e800(120,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "src/spine/SkeletonJson.cpp",
                                          0x2EBu),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v683 = *(const char**)(v679 + 48);
                    v684 = v682;
                    f_.v761 = v681;
                    f_.v764 = 1;
                    if (v683 != nullptr) {
                      v685 = GameRoutine_1a09c70(v683),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      f_.v762 = v685;
                      v686 = GameRoutine_19e10(),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      f_.v763 = (char*)(*(
                          __int64 (**)(__int64, __int64, __int64, __int64))(
                          *(_QWORD*)v686 + 24LL))(
                          v686, v685 + 1,
                          (__int64)"/Program/Externals/Spine/include\\spine/"
                                   "SpineString.h",
                          53),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      GameRoutine_1a0b950((__int64)f_.v763, (__int64)v683,
                                          f_.v762 + 1),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    else {
                      f_.v762 = 0;
                      f_.v763 = nullptr;
                    }
                    spine_EventData_EventData(v684, (__int64)&f_.v761),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v687 = f_.v763;
                    f_.v761 = GameData_21322b8[0] + 2;
                    if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                      v688 = GameRoutine_19e10(),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      (*(void (**)(__int64, __int64, __int64, __int64))(
                          *(_QWORD*)v688 + 40LL))(
                          v688, (__int64)v687,
                          (__int64)"/Program/Externals/Spine/include\\spine/"
                                   "SpineString.h",
                          206),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    *(_DWORD*)(v684 +
                               40) = spine_Json_getInt(v679, (__int64)"int", 0),
                               v328 =
                                   COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                    *(float*)(v684 + 44) =
                        spine_Json_getFloat(v679, (__int64)"float", 0x0.0p+0f),
                                     v328 = COERCE_AS(
                                         __typeof__(v328),
                                         PSEUDO_REGISTER(unsigned long long,
                                                         "x1", "=r"));
                    v689 = spine_Json_getString(v679, (__int64)"string", 0),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v690 = *(_QWORD*)(v684 + 64);
                    if (v690 != v689) {
                      v691 = (const char*)v689;
                      if (v690 != 0 && (*(_BYTE*)(v684 + 72) & 1) != 0) {
                        v692 = GameRoutine_19e10(),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        (*(void (**)(__int64, __int64, __int64, __int64))(
                            *(_QWORD*)v692 + 40LL))(
                            v692, v690,
                            (__int64)"/Program/Externals/Spine/include\\spine/"
                                     "SpineString.h",
                            135),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      if (v691 != nullptr) {
                        v693 = GameRoutine_1a09c70(v691),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        *(_QWORD*)(v684 + 56) = v693;
                        v694 = GameRoutine_19e10(),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        v695 =
                            (*(__int64 (**)(__int64, __int64, __int64,
                                            __int64))(*(_QWORD*)v694 + 24LL))(
                                v694, v693 + 1,
                                (__int64)"/Program/Externals/Spine/"
                                         "include\\spine/SpineString.h",
                                142),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        v696 = *(_QWORD*)(v684 + 56);
                        *(_QWORD*)(v684 + 64) = v695;
                        GameRoutine_1a0b950(v695, (__int64)v691, v696 + 1),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                      }
                      else {
                        *(_QWORD*)(v684 + 56) = 0;
                        *(_QWORD*)(v684 + 64) = 0;
                      }
                    }
                    v697 = spine_Json_getString(v679, (__int64)"audio", 0),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v698 = *(_QWORD*)(v684 + 96);
                    v699 = (const char*)v697;
                    if (v698 == v697) {
                      break;
                    }
                    if (v698 != 0 && (*(_BYTE*)(v684 + 104) & 1) != 0) {
                      v700 = GameRoutine_19e10(),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      (*(void (**)(__int64, __int64, __int64, __int64))(
                          *(_QWORD*)v700 + 40LL))(
                          v700, v698,
                          (__int64)"/Program/Externals/Spine/include\\spine/"
                                   "SpineString.h",
                          135),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    if (v699 != nullptr) {
                      v701 = GameRoutine_1a09c70(v699),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      *(_QWORD*)(v684 + 88) = v701;
                      v702 = GameRoutine_19e10(),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      v703 = (*(__int64 (**)(__int64, __int64, __int64,
                                             __int64))(*(_QWORD*)v702 + 24LL))(
                          v702, v701 + 1,
                          (__int64)"/Program/Externals/Spine/include\\spine/"
                                   "SpineString.h",
                          142),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      v704 = *(_QWORD*)(v684 + 88);
                      *(_QWORD*)(v684 + 96) = v703;
                      GameRoutine_1a0b950(v703, (__int64)v699, v704 + 1),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      goto LABEL_658;
                    }
                    *(_QWORD*)(v684 + 88) = 0;
                    *(_QWORD*)(v684 + 96) = 0;
                    v705 = f_.v765;
                    if (*((_QWORD*)f_.v765 + 19) <= v680) {
                      goto LABEL_663;
                    }
                  LABEL_660:
                    *(_QWORD*)(*((_QWORD*)v705 + 21) + 8 * v680++) = v684;
                    v679 = *(_QWORD*)(v679 + 8);
                    if (v679 == 0) {
                      goto LABEL_664;
                    }
                  }
                  if (v697 != 0) {
                  LABEL_658:
                    *(float*)(v684 + 112) = spine_Json_getFloat(
                        v679, (__int64)"volume", 0x1.0000000000000p+0f),
                                     v328 = COERCE_AS(
                                         __typeof__(v328),
                                         PSEUDO_REGISTER(unsigned long long,
                                                         "x1", "=r"));
                    *(float*)(v684 + 116) = spine_Json_getFloat(
                        v679, (__int64)"balance", 0x0.0p+0f),
                                     v328 = COERCE_AS(
                                         __typeof__(v328),
                                         PSEUDO_REGISTER(unsigned long long,
                                                         "x1", "=r"));
                  }
                  v705 = f_.v765;
                  if (*((_QWORD*)f_.v765 + 19) <= v680) {
                    goto LABEL_663;
                  }
                  goto LABEL_660;
                }
                v330 = *(int*)(v327 + 28);
                v331 = v327;
                if (*((_QWORD*)v161 + 15) >= v330) {
                  v335 = *((_QWORD*)v161 + 14);
                  *((_QWORD*)v161 + 14) = v330;
                }
                else {
                  v332 = *((_QWORD*)v161 + 16);
                  *((_QWORD*)v161 + 15) = v330;
                  v333 = GameRoutine_19e10(),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  *((_QWORD*)v161 +
                    16) = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                                          __int64))(*(_QWORD*)v333 + 32LL))(
                      v333, v332, 8 * v330,
                      (__int64)"/Program/Externals/Spine/include\\spine/"
                               "Vector.h",
                      94),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v335 = *((_QWORD*)v161 + 14);
                  v334 = *((_QWORD*)v161 + 15);
                  v330 = *(int*)(v331 + 28);
                  *((_QWORD*)v161 + 14) = v330;
                  if (v334 < v330) {
                    v660 = *((_QWORD*)v161 + 16);
                    if ((unsigned int)(int)(float)((float)v330 *
                                                   0x1.c000000000000p+0f) <=
                        8) {
                      v661 = 8;
                    }
                    else {
                      v661 = (int)(float)((float)v330 * 0x1.c000000000000p+0f);
                    }
                    *((_QWORD*)v161 + 15) = v661;
                    v662 = GameRoutine_19e10(),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v663 = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                                           __int64))(*(_QWORD*)v662 + 32LL))(
                        v662, v660, 8LL * v661,
                        (__int64)"/Program/Externals/Spine/include\\spine/"
                                 "Vector.h",
                        82),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v664 = *((_QWORD*)v161 + 14);
                    *((_QWORD*)v161 + 16) = v663;
                    if (v335 >= v664) {
                    LABEL_305:
                      v336 = *(_QWORD*)(v331 + 16);
                      if (v336 != 0) {
                        v337 = 0;
                        v338 = GameData_21322b8[0] + 2;
                        f_.v744 = GameData_21322b8[0] + 2;
                        while (1) {
                          f_.v746 = v337;
                          v339 = GameRoutine_4e800(
                              144,
                              (__int64)"/Program/Externals/Spine/src/spine/"
                                       "SkeletonJson.cpp",
                              0x1C8u),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          f_.v747 = v336;
                          v340 = (const char*)spine_Json_getString(
                              v336, (__int64)"name",
                              (__int64)&GameData_1a9f09e),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          f_.v761 = v338;
                          f_.v764 = 1;
                          if (v340 != nullptr) {
                            v341 = (__int64)v340;
                            v342 = GameRoutine_1a09c70(v340),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            f_.v762 = v342;
                            v343 = GameRoutine_19e10(),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            f_.v763 = (char*)(*(__int64 (**)(__int64, __int64,
                                                             __int64, __int64))(
                                *(_QWORD*)v343 + 24LL))(
                                v343, v342 + 1,
                                (__int64)"/Program/Externals/Spine/"
                                         "include\\spine/SpineString.h",
                                53),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            GameRoutine_1a0b950((__int64)f_.v763, v341,
                                                f_.v762 + 1),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                          else {
                            f_.v762 = 0;
                            f_.v763 = nullptr;
                          }
                          v273 = GameData_21322b8[0];
                          GameRoutine_4d190_alt1(v339, (__int64)&f_.v761),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v344 = f_.v763;
                          f_.v761 = v273 + 2;
                          if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                            v345 = GameRoutine_19e10(),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            (*(void (**)(__int64, __int64, __int64, __int64))(
                                *(_QWORD*)v345 + 40LL))(
                                v345, (__int64)v344,
                                (__int64)"/Program/Externals/Spine/"
                                         "include\\spine/SpineString.h",
                                206),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                          spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v346 = spine_Json_getItem_4bae0(f_.v747,
                                                          (__int64)"bones"),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          if (v346 != 0) {
                            v347 = *(_QWORD*)(v346 + 16);
                            if (v347 != 0) {
                              while (1) {
                                v349 = *(const char**)(v347 + 32);
                                f_.v764 = 1;
                                f_.v761 = v273 + 2;
                                if (v349 != nullptr) {
                                  v350 = GameRoutine_1a09c70(v349),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v762 = v350;
                                  v351 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v763 = (char*)(*(__int64 (**)(
                                      __int64, __int64, __int64, __int64))(
                                      *(_QWORD*)v351 + 24LL))(
                                      v351, v350 + 1,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      53),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_1a0b950((__int64)f_.v763,
                                                      (__int64)v349,
                                                      f_.v762 + 1),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                else {
                                  f_.v762 = 0;
                                  f_.v763 = nullptr;
                                }
                                v352 = spine_SkeletonData_findBone(
                                    (__int64)v161, (__int64)&f_.v761),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v353 = f_.v763;
                                v354 = v352;
                                f_.v761 = v273 + 2;
                                if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                                  v355 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  (*(void (**)(__int64, __int64, __int64,
                                               __int64))(*(_QWORD*)v355 +
                                                         40LL))(
                                      v355, (__int64)v353,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      206),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                spine_SpineObject_Destroy_SpineObject_4e8a0(
                                    &f_.v761),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                if (v354 == 0) {
                                  break;
                                }
                                v356 = (_QWORD*)spine_Skin_getBones(v339),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v357 = v356[1];
                                if (v357 == v356[2]) {
                                  v358 = v356[3];
                                  v359 = v356;
                                  v360 = (int)(float)((float)v357 *
                                                      0x1.c000000000000p+0f);
                                  if (v360 <= 8) {
                                    v361 = 8;
                                  }
                                  else {
                                    v361 = v360;
                                  }
                                  v356[2] = v361;
                                  v362 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v363 = (*(__int64 (**)(
                                      __int64, __int64, __int64, __int64,
                                      __int64))(*(_QWORD*)v362 + 32LL))(
                                      v362, v358, 8LL * v361,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/Vector.h",
                                      106),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v364 = v359[1];
                                  v359[3] = v363;
                                  v359[1] = v364 + 1;
                                  v161 = f_.v765;
                                  *(_QWORD*)(v363 + 8 * v364) = v354;
                                  v347 = *(_QWORD*)(v347 + 8);
                                  if (v347 == 0) {
                                    goto LABEL_329;
                                  }
                                }
                                else {
                                  v348 = v356[3];
                                  v356[1] = v357 + 1;
                                  *(_QWORD*)(v348 + 8 * v357) = v354;
                                  v347 = *(_QWORD*)(v347 + 8);
                                  if (v347 == 0) {
                                    goto LABEL_329;
                                  }
                                }
                              }
                              (*(void (**)(__int64))(*(_QWORD*)v161 + 8LL))(
                                  (__int64)v161),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                              v665 = v273 + 2;
                              f_.v764 = 1;
                              f_.v761 = v273 + 2;
                              f_.v762 = 21;
                              v724 = GameRoutine_19e10(),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              v725 = (*(__int64 (**)(__int64, __int64, __int64,
                                                     __int64))(*(_QWORD*)v724 +
                                                               24LL))(
                                  v724, 22,
                                  (__int64)"/Program/Externals/Spine/"
                                           "include\\spine/SpineString.h",
                                  53),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              v726 = "Skin bone not found: ";
                              v631 = (char*)v725;
                              f_.v763 = (char*)v725;
                              strcpy((char*)(v725 + 14), "found: ");
                              goto LABEL_687;
                            }
                          }
                        LABEL_329:
                          v365 =
                              spine_Json_getItem_4bae0(f_.v747, (__int64)"ik"),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          if (v365 != 0) {
                            v347 = *(_QWORD*)(v365 + 16);
                            if (v347 != 0) {
                              break;
                            }
                          }
                        LABEL_345:
                          v383 = spine_Json_getItem_4bae0(f_.v747,
                                                          (__int64)"transform"),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          if (v383 != 0) {
                            v347 = *(_QWORD*)(v383 + 16);
                            if (v347 != 0) {
                              while (1) {
                                v385 = *(const char**)(v347 + 32);
                                f_.v764 = 1;
                                f_.v761 = v273 + 2;
                                if (v385 != nullptr) {
                                  v386 = GameRoutine_1a09c70(v385),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v762 = v386;
                                  v387 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v763 = (char*)(*(__int64 (**)(
                                      __int64, __int64, __int64, __int64))(
                                      *(_QWORD*)v387 + 24LL))(
                                      v387, v386 + 1,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      53),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_1a0b950((__int64)f_.v763,
                                                      (__int64)v385,
                                                      f_.v762 + 1),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                else {
                                  f_.v762 = 0;
                                  f_.v763 = nullptr;
                                }
                                v388 = ((__int64 (*)(float*, __int64**))
                                            GameRoutine_3e140)(v161, &f_.v761),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v389 = f_.v763;
                                v390 = v388;
                                f_.v761 = v273 + 2;
                                if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                                  v391 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  (*(void (**)(__int64, __int64, __int64,
                                               __int64))(*(_QWORD*)v391 +
                                                         40LL))(
                                      v391, (__int64)v389,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      206),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                spine_SpineObject_Destroy_SpineObject_4e8a0(
                                    &f_.v761),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                if (v390 == 0) {
                                  break;
                                }
                                v392 = (_QWORD*)spine_Skin_getConstraints(v339),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v393 = v392[1];
                                if (v393 == v392[2]) {
                                  v394 = v392[3];
                                  v395 = v392;
                                  v396 = (int)(float)((float)v393 *
                                                      0x1.c000000000000p+0f);
                                  if (v396 <= 8) {
                                    v397 = 8;
                                  }
                                  else {
                                    v397 = v396;
                                  }
                                  v392[2] = v397;
                                  v398 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v399 = (*(__int64 (**)(
                                      __int64, __int64, __int64, __int64,
                                      __int64))(*(_QWORD*)v398 + 32LL))(
                                      v398, v394, 8LL * v397,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/Vector.h",
                                      106),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v400 = v395[1];
                                  v395[3] = v399;
                                  v395[1] = v400 + 1;
                                  v161 = f_.v765;
                                  *(_QWORD*)(v399 + 8 * v400) = v390;
                                  v347 = *(_QWORD*)(v347 + 8);
                                  if (v347 == 0) {
                                    goto LABEL_361;
                                  }
                                }
                                else {
                                  v384 = v392[3];
                                  v392[1] = v393 + 1;
                                  *(_QWORD*)(v384 + 8 * v393) = v390;
                                  v347 = *(_QWORD*)(v347 + 8);
                                  if (v347 == 0) {
                                    goto LABEL_361;
                                  }
                                }
                              }
                              (*(void (**)(__int64))(*(_QWORD*)v161 + 8LL))(
                                  (__int64)v161),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                              v665 = v273 + 2;
                              f_.v764 = 1;
                              f_.v761 = v273 + 2;
                              f_.v762 = 37;
                              v731 = GameRoutine_19e10(),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              f_.v763 = (char*)(*(__int64 (**)(
                                  __int64, __int64, __int64, __int64))(
                                  *(_QWORD*)v731 + 24LL))(
                                  v731, 38,
                                  (__int64)"/Program/Externals/Spine/"
                                           "include\\spine/SpineString.h",
                                  53),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              v631 = f_.v763;
                              strcpy(f_.v763,
                                     "Skin transform constraint not found: ");
                            LABEL_688:
                              v734 = *(const char**)(v347 + 32);
                              f_.v757 = v665;
                              f_.v760 = 1;
                              if (v734 != nullptr) {
                                v735 = GameRoutine_1a09c70(v734),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                f_.v758 = v735;
                                v736 = GameRoutine_19e10(),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v670 = (*(__int64 (**)(__int64, __int64,
                                                       __int64, __int64))(
                                    *(_QWORD*)v736 + 24LL))(
                                    v736, v735 + 1,
                                    (__int64)"/Program/Externals/Spine/"
                                             "include\\spine/SpineString.h",
                                    53),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                f_.v759 = v670;
                                GameRoutine_1a0b950(v670, (__int64)v734,
                                                    v735 + 1),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                v671 = v329;
                              LABEL_690:
                                spine_SkeletonJson_setError(v671, f_.v748,
                                                            (__int64)&f_.v761,
                                                            (__int64)&f_.v757),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                f_.v757 = v665;
                                if (v670 != 0) {
                                LABEL_691:
                                  v737 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  (*(void (**)(__int64, __int64, __int64,
                                               __int64))(*(_QWORD*)v737 +
                                                         40LL))(
                                      v737, v670,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      206),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                              LABEL_694:
                                spine_SpineObject_Destroy_SpineObject_4e8a0(
                                    &f_.v757),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                v659 = v273 + 2;
                              LABEL_695:
                                f_.v761 = v659;
                              LABEL_696:
                                v672 = (__int64*)GameRoutine_19e10(),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v673 = *v672;
                                v674 = (__int64)v631;
                              LABEL_697:
                                (*(void (**)(__int64, __int64, __int64,
                                             __int64))(v673 + 40))(
                                    (__int64)v672, v674,
                                    (__int64)"/Program/Externals/Spine/"
                                             "include\\spine/SpineString.h",
                                    206),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                v51 = &f_.v761;
                              LABEL_698:
                                spine_SpineObject_Destroy_SpineObject_4e8a0(
                                    v51),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                return nullptr;
                              }
                              f_.v758 = 0;
                              f_.v759 = 0;
                              v713 = v329;
                            LABEL_693:
                              spine_SkeletonJson_setError(v713, f_.v748,
                                                          (__int64)&f_.v761,
                                                          (__int64)&f_.v757),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                              f_.v757 = v665;
                              goto LABEL_694;
                            }
                          }
                        LABEL_361:
                          v401 = spine_Json_getItem_4bae0(f_.v747,
                                                          (__int64)"path"),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          if (v401 != 0) {
                            v347 = *(_QWORD*)(v401 + 16);
                            if (v347 != 0) {
                              while (1) {
                                v403 = *(const char**)(v347 + 32);
                                f_.v764 = 1;
                                f_.v761 = v273 + 2;
                                if (v403 != nullptr) {
                                  v404 = GameRoutine_1a09c70(v403),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v762 = v404;
                                  v405 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v763 = (char*)(*(__int64 (**)(
                                      __int64, __int64, __int64, __int64))(
                                      *(_QWORD*)v405 + 24LL))(
                                      v405, v404 + 1,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      53),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_1a0b950((__int64)f_.v763,
                                                      (__int64)v403,
                                                      f_.v762 + 1),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                else {
                                  f_.v762 = 0;
                                  f_.v763 = nullptr;
                                }
                                v406 = ((__int64 (*)(float*, __int64**))
                                            GameRoutine_3e220)(v161, &f_.v761),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v407 = f_.v763;
                                v408 = v406;
                                f_.v761 = v273 + 2;
                                if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                                  v409 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  (*(void (**)(__int64, __int64, __int64,
                                               __int64))(*(_QWORD*)v409 +
                                                         40LL))(
                                      v409, (__int64)v407,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      206),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                spine_SpineObject_Destroy_SpineObject_4e8a0(
                                    &f_.v761),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                if (v408 == 0) {
                                  break;
                                }
                                v410 = (_QWORD*)spine_Skin_getConstraints(v339),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v411 = v410[1];
                                if (v411 == v410[2]) {
                                  v412 = v410[3];
                                  v413 = v410;
                                  v414 = (int)(float)((float)v411 *
                                                      0x1.c000000000000p+0f);
                                  if (v414 <= 8) {
                                    v415 = 8;
                                  }
                                  else {
                                    v415 = v414;
                                  }
                                  v410[2] = v415;
                                  v416 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v417 = (*(__int64 (**)(
                                      __int64, __int64, __int64, __int64,
                                      __int64))(*(_QWORD*)v416 + 32LL))(
                                      v416, v412, 8LL * v415,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/Vector.h",
                                      106),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v418 = v413[1];
                                  v413[3] = v417;
                                  v413[1] = v418 + 1;
                                  v161 = f_.v765;
                                  *(_QWORD*)(v417 + 8 * v418) = v408;
                                  v347 = *(_QWORD*)(v347 + 8);
                                  if (v347 == 0) {
                                    goto LABEL_377;
                                  }
                                }
                                else {
                                  v402 = v410[3];
                                  v410[1] = v411 + 1;
                                  *(_QWORD*)(v402 + 8 * v411) = v408;
                                  v347 = *(_QWORD*)(v347 + 8);
                                  if (v347 == 0) {
                                    goto LABEL_377;
                                  }
                                }
                              }
                              (*(void (**)(__int64))(*(_QWORD*)v161 + 8LL))(
                                  (__int64)v161),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                              v665 = v273 + 2;
                              f_.v764 = 1;
                              f_.v761 = v273 + 2;
                              f_.v762 = 32;
                              v732 = GameRoutine_19e10(),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              v725 = (*(__int64 (**)(__int64, __int64, __int64,
                                                     __int64))(*(_QWORD*)v732 +
                                                               24LL))(
                                  v732, 33,
                                  (__int64)"/Program/Externals/Spine/"
                                           "include\\spine/SpineString.h",
                                  53),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              v726 = "Skin path constraint not found: ";
                              v631 = (char*)v725;
                              f_.v763 = (char*)v725;
                              strcpy((char*)(v725 + 16), "aint not found: ");
                            LABEL_687:
                              v733 = *((_QWORD*)v726 + 1);
                              *(_QWORD*)v725 = *(_QWORD*)v726;
                              *(_QWORD*)(v725 + 8) = v733;
                              goto LABEL_688;
                            }
                          }
                        LABEL_377:
                          if (*((_QWORD*)v161 + 14) <= f_.v746) {
                            goto LABEL_663;
                          }
                          *(_QWORD*)(*((_QWORD*)v161 + 16) + 8 * f_.v746) =
                              v339;
                          v419 = (const char*)spine_Json_getString(
                              f_.v747, (__int64)"name",
                              (__int64)&GameData_1a9f09e),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          if (GameRoutine_1a09d30(v419, "default") == 0) {
                            *((_QWORD*)v161 + 17) = v339;
                          }
                          v420 = spine_Json_getItem_4bae0(
                              f_.v747, (__int64)"attachments"),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          if (v420 != 0) {
                            v421 = *(_QWORD*)(v420 + 16);
                            if (v421 != 0) {
                              while (1) {
                                v422 = *(const char**)(v421 + 48);
                                f_.v745 = v421;
                                f_.v764 = 1;
                                f_.v761 = v273 + 2;
                                if (v422 != nullptr) {
                                  v423 = GameRoutine_1a09c70(v422),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v762 = v423;
                                  v424 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v763 = (char*)(*(__int64 (**)(
                                      __int64, __int64, __int64, __int64))(
                                      *(_QWORD*)v424 + 24LL))(
                                      v424, v423 + 1,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      53),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  GameRoutine_1a0b950((__int64)f_.v763,
                                                      (__int64)v422,
                                                      f_.v762 + 1),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                else {
                                  f_.v762 = 0;
                                  f_.v763 = nullptr;
                                }
                                v425 = ((__int64 (*)(float*, __int64**))
                                            GameRoutine_3dce0)(v161, &f_.v761),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v426 = f_.v763;
                                f_.v753 = v425;
                                f_.v761 = v273 + 2;
                                if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                                  v427 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  (*(void (**)(__int64, __int64, __int64,
                                               __int64))(*(_QWORD*)v427 +
                                                         40LL))(
                                      v427, (__int64)v426,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      206),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                spine_SpineObject_Destroy_SpineObject_4e8a0(
                                    &f_.v761),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                v428 = *(_QWORD*)(f_.v745 + 16);
                                if (v428 != 0) {
                                  break;
                                }
                              LABEL_389:
                                v329 = f_.v754;
                                v161 = f_.v765;
                                v421 = *(_QWORD*)(f_.v745 + 8);
                                if (v421 == 0) {
                                  goto LABEL_573;
                                }
                              }
                              while (2) {
                                v429 = *(const char**)(v428 + 48);
                                v430 = (const char*)spine_Json_getString(
                                    v428, (__int64)"name", (__int64)v429),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v431 = (const char*)spine_Json_getString(
                                    v428, (__int64)"path", (__int64)v430),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v432 = (const char*)spine_Json_getString(
                                    v428, (__int64)"type", (__int64)"region"),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                if (GameRoutine_1a09d30(v432, "region") != 0) {
                                  if (GameRoutine_1a09d30(v432, "mesh") != 0 &&
                                      GameRoutine_1a09d30(v432, "linkedmesh") !=
                                          0) {
                                    if (GameRoutine_1a09d30(
                                            v432, "boundingbox") == 0) {
                                      v477 = *(_QWORD*)(f_.v754 + 8);
                                      f_.v761 = v273 + 2;
                                      f_.v764 = 1;
                                      if (v430 != nullptr) {
                                        v478 = GameRoutine_1a09c70(v430),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        f_.v762 = v478;
                                        v479 = GameRoutine_19e10(),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        f_.v763 = (char*)(*(__int64 (**)(
                                            __int64, __int64, __int64,
                                            __int64))(*(_QWORD*)v479 + 24LL))(
                                            v479, v478 + 1,
                                            (__int64)"/Program/Externals/Spine/"
                                                     "include\\spine/"
                                                     "SpineString.h",
                                            53),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        GameRoutine_1a0b950((__int64)f_.v763,
                                                            (__int64)v430,
                                                            f_.v762 + 1),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                      }
                                      else {
                                        f_.v762 = 0;
                                        f_.v763 = nullptr;
                                      }
                                      v568 = (*(__int64 (**)(__int64, __int64,
                                                             __int64))(
                                          *(_QWORD*)v477 + 40LL))(
                                          v477, v339, (__int64)&f_.v761),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v569 = f_.v763;
                                      v451 = v568;
                                      f_.v761 = v273 + 2;
                                      if (f_.v763 != nullptr &&
                                          (f_.v764 & 1) != 0) {
                                        v570 = GameRoutine_19e10(),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        (*(void (**)(__int64, __int64, __int64,
                                                     __int64))(*(_QWORD*)v570 +
                                                               40LL))(
                                            v570, (__int64)v569,
                                            (__int64)"/Program/Externals/Spine/"
                                                     "include\\spine/"
                                                     "SpineString.h",
                                            206),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                      }
                                      spine_SpineObject_Destroy_SpineObject_4e8a0(
                                          &f_.v761),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                      v571 = spine_Json_getInt(
                                          v428, (__int64)"vertexCount", 0),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      spine_SkeletonJson_readVertices(
                                          f_.v754, v428, v451, 2 * v571),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                      v572 = spine_Json_getString(
                                          v428, (__int64)"color", 0),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      if (v572 != 0) {
                                        v573 = (const char*)v572;
                                        v574 = (float*)
                                            spine_BoundingBoxAttachment_getColor(
                                                v451),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        goto LABEL_565;
                                      }
                                      goto LABEL_566;
                                    }
                                    if (GameRoutine_1a09d30(v432, "path") !=
                                        0) {
                                      if (GameRoutine_1a09d30(
                                              v432, "clipping") != 0) {
                                        if (GameRoutine_1a09d30(v432,
                                                                "point") != 0) {
                                          if (f_.v765 != nullptr) {
                                            (*(void (**)(__int64))(
                                                *(_QWORD*)f_.v765 + 8LL))(
                                                (__int64)f_.v765),
                                                v328 = COERCE_AS(
                                                    __typeof__(v328),
                                                    PSEUDO_REGISTER(
                                                        unsigned long long,
                                                        "x1", "=r"));
                                          }
                                          f_.v764 = 1;
                                          f_.v761 = v273 + 2;
                                          f_.v762 = 25;
                                          v739 = GameRoutine_19e10(),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          f_.v763 = (char*)(*(__int64 (**)(
                                              __int64, __int64, __int64,
                                              __int64))(*(_QWORD*)v739 + 24LL))(
                                              v739, 26,
                                              (__int64)"/Program/Externals/"
                                                       "Spine/include\\spine/"
                                                       "SpineString.h",
                                              53),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          v653 = f_.v763;
                                          strcpy(f_.v763,
                                                 "Unknown attachment type: ");
                                          f_.v757 = v273 + 2;
                                          f_.v760 = 1;
                                          v740 = GameRoutine_1a09c70(v432),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          f_.v758 = v740;
                                          v741 = GameRoutine_19e10(),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          v742 = (*(__int64 (**)(
                                              __int64, __int64, __int64,
                                              __int64))(*(_QWORD*)v741 + 24LL))(
                                              v741, v740 + 1,
                                              (__int64)"/Program/Externals/"
                                                       "Spine/include\\spine/"
                                                       "SpineString.h",
                                              53),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          f_.v759 = v742;
                                          GameRoutine_1a0b950(
                                              v742, (__int64)v432, v740 + 1),
                                              v328 = COERCE_AS(
                                                  __typeof__(v328),
                                                  PSEUDO_REGISTER(
                                                      unsigned long long, "x1",
                                                      "=r"));
                                          spine_SkeletonJson_setError(
                                              f_.v754, f_.v748,
                                              (__int64)&f_.v761,
                                              (__int64)&f_.v757),
                                              v328 = COERCE_AS(
                                                  __typeof__(v328),
                                                  PSEUDO_REGISTER(
                                                      unsigned long long, "x1",
                                                      "=r"));
                                          f_.v757 = v273 + 2;
                                          if (v742 != 0) {
                                            v743 = GameRoutine_19e10(),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                            (*(void (**)(__int64, __int64,
                                                         __int64, __int64))(
                                                *(_QWORD*)v743 + 40LL))(
                                                v743, v742,
                                                (__int64)"/Program/Externals/"
                                                         "Spine/include\\spine/"
                                                         "SpineString.h",
                                                206),
                                                v328 = COERCE_AS(
                                                    __typeof__(v328),
                                                    PSEUDO_REGISTER(
                                                        unsigned long long,
                                                        "x1", "=r"));
                                          }
                                          spine_SpineObject_Destroy_SpineObject_4e8a0(
                                              &f_.v757),
                                              v328 = COERCE_AS(
                                                  __typeof__(v328),
                                                  PSEUDO_REGISTER(
                                                      unsigned long long, "x1",
                                                      "=r"));
                                          f_.v761 = v273 + 2;
                                          goto LABEL_634;
                                        }
                                        v433 = *(_QWORD*)(f_.v754 + 8);
                                        f_.v761 = v273 + 2;
                                        f_.v764 = 1;
                                        if (v430 != nullptr) {
                                          v434 = GameRoutine_1a09c70(v430),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          f_.v762 = v434;
                                          v435 = GameRoutine_19e10(),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          f_.v763 = (char*)(*(__int64 (**)(
                                              __int64, __int64, __int64,
                                              __int64))(*(_QWORD*)v435 + 24LL))(
                                              v435, v434 + 1,
                                              (__int64)"/Program/Externals/"
                                                       "Spine/include\\spine/"
                                                       "SpineString.h",
                                              53),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          GameRoutine_1a0b950((__int64)f_.v763,
                                                              (__int64)v430,
                                                              f_.v762 + 1),
                                              v328 = COERCE_AS(
                                                  __typeof__(v328),
                                                  PSEUDO_REGISTER(
                                                      unsigned long long, "x1",
                                                      "=r"));
                                        }
                                        else {
                                          f_.v762 = 0;
                                          f_.v763 = nullptr;
                                        }
                                        v575 = (*(__int64 (**)(__int64, __int64,
                                                               __int64))(
                                            *(_QWORD*)v433 + 56LL))(
                                            v433, v339, (__int64)&f_.v761),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        v576 = f_.v763;
                                        v451 = v575;
                                        f_.v761 = v273 + 2;
                                        if (f_.v763 != nullptr &&
                                            (f_.v764 & 1) != 0) {
                                          v577 = GameRoutine_19e10(),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          (*(void (**)(__int64, __int64,
                                                       __int64, __int64))(
                                              *(_QWORD*)v577 + 40LL))(
                                              v577, (__int64)v576,
                                              (__int64)"/Program/Externals/"
                                                       "Spine/include\\spine/"
                                                       "SpineString.h",
                                              206),
                                              v328 = COERCE_AS(
                                                  __typeof__(v328),
                                                  PSEUDO_REGISTER(
                                                      unsigned long long, "x1",
                                                      "=r"));
                                        }
                                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                                            &f_.v761),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                        *(float*)(v451 +
                                                  44) =
                                            spine_Json_getFloat(
                                                v428, (__int64)"x", 0x0.0p+0f) *
                                            *(float*)(f_.v754 + 48),
                                                  v328 = COERCE_AS(
                                                      __typeof__(v328),
                                                      PSEUDO_REGISTER(
                                                          unsigned long long,
                                                          "x1", "=r"));
                                        *(float*)(v451 +
                                                  48) =
                                            spine_Json_getFloat(
                                                v428, (__int64)"y", 0x0.0p+0f) *
                                            *(float*)(f_.v754 + 48),
                                                  v328 = COERCE_AS(
                                                      __typeof__(v328),
                                                      PSEUDO_REGISTER(
                                                          unsigned long long,
                                                          "x1", "=r"));
                                        *(float*)(v451 +
                                                  52) =
                                            spine_Json_getFloat(
                                                v428, (__int64)"rotation",
                                                0x0.0p+0f),
                                                  v328 = COERCE_AS(
                                                      __typeof__(v328),
                                                      PSEUDO_REGISTER(
                                                          unsigned long long,
                                                          "x1", "=r"));
                                        v578 = spine_Json_getString(
                                            v428, (__int64)"color", 0),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        if (v578 != 0) {
                                          v573 = (const char*)v578;
                                          v574 = (float*)
                                              spine_PointAttachment_getColor(
                                                  v451),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          goto LABEL_565;
                                        }
                                      LABEL_566:
                                        (*(void (**)(__int64, __int64))(
                                            **(_QWORD**)(f_.v754 + 8) + 72LL))(
                                            *(_QWORD*)(f_.v754 + 8), v451),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                      LABEL_567:
                                        v609 = spine_SlotData_getIndex(f_.v753),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        f_.v761 = v273 + 2;
                                        f_.v764 = 1;
                                        if (v429 != nullptr) {
                                          v610 = GameRoutine_1a09c70(v429),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          f_.v762 = v610;
                                          v611 = GameRoutine_19e10(),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          f_.v763 = (char*)(*(__int64 (**)(
                                              __int64, __int64, __int64,
                                              __int64))(*(_QWORD*)v611 + 24LL))(
                                              v611, v610 + 1,
                                              (__int64)"/Program/Externals/"
                                                       "Spine/include\\spine/"
                                                       "SpineString.h",
                                              53),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          GameRoutine_1a0b950((__int64)f_.v763,
                                                              (__int64)v429,
                                                              f_.v762 + 1),
                                              v328 = COERCE_AS(
                                                  __typeof__(v328),
                                                  PSEUDO_REGISTER(
                                                      unsigned long long, "x1",
                                                      "=r"));
                                        }
                                        else {
                                          f_.v762 = 0;
                                          f_.v763 = nullptr;
                                        }
                                        spine_Skin_setAttachment(
                                            v339, v609, (__int64)&f_.v761,
                                            v451),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                        v612 = f_.v763;
                                        f_.v761 = v273 + 2;
                                        if (f_.v763 != nullptr &&
                                            (f_.v764 & 1) != 0) {
                                          v613 = GameRoutine_19e10(),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          (*(void (**)(__int64, __int64,
                                                       __int64, __int64))(
                                              *(_QWORD*)v613 + 40LL))(
                                              v613, (__int64)v612,
                                              (__int64)"/Program/Externals/"
                                                       "Spine/include\\spine/"
                                                       "SpineString.h",
                                              206),
                                              v328 = COERCE_AS(
                                                  __typeof__(v328),
                                                  PSEUDO_REGISTER(
                                                      unsigned long long, "x1",
                                                      "=r"));
                                        }
                                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                                            &f_.v761),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                        v428 = *(_QWORD*)(v428 + 8);
                                        if (v428 == 0) {
                                          goto LABEL_389;
                                        }
                                        continue;
                                      }
                                      v565 = *(_QWORD*)(f_.v754 + 8);
                                      f_.v761 = v273 + 2;
                                      f_.v764 = 1;
                                      if (v430 != nullptr) {
                                        v566 = GameRoutine_1a09c70(v430),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        f_.v762 = v566;
                                        v567 = GameRoutine_19e10(),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        f_.v763 = (char*)(*(__int64 (**)(
                                            __int64, __int64, __int64,
                                            __int64))(*(_QWORD*)v567 + 24LL))(
                                            v567, v566 + 1,
                                            (__int64)"/Program/Externals/Spine/"
                                                     "include\\spine/"
                                                     "SpineString.h",
                                            53),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        GameRoutine_1a0b950((__int64)f_.v763,
                                                            (__int64)v430,
                                                            f_.v762 + 1),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                      }
                                      else {
                                        f_.v762 = 0;
                                        f_.v763 = nullptr;
                                      }
                                      v597 = (*(__int64 (**)(__int64, __int64,
                                                             __int64))(
                                          *(_QWORD*)v565 + 64LL))(
                                          v565, v339, (__int64)&f_.v761),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v598 = f_.v763;
                                      v451 = v597;
                                      f_.v761 = v273 + 2;
                                      if (f_.v763 != nullptr &&
                                          (f_.v764 & 1) != 0) {
                                        v599 = GameRoutine_19e10(),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        (*(void (**)(__int64, __int64, __int64,
                                                     __int64))(*(_QWORD*)v599 +
                                                               40LL))(
                                            v599, (__int64)v598,
                                            (__int64)"/Program/Externals/Spine/"
                                                     "include\\spine/"
                                                     "SpineString.h",
                                            206),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                      }
                                      spine_SpineObject_Destroy_SpineObject_4e8a0(
                                          &f_.v761),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                      v600 = (const char*)spine_Json_getString(
                                          v428, (__int64)"end", 0),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      if (v600 != nullptr) {
                                        v601 = (__int64)v600;
                                        f_.v761 = v273 + 2;
                                        f_.v764 = 1;
                                        v602 = GameRoutine_1a09c70(v600),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        f_.v762 = v602;
                                        v603 = GameRoutine_19e10(),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        f_.v763 = (char*)(*(__int64 (**)(
                                            __int64, __int64, __int64,
                                            __int64))(*(_QWORD*)v603 + 24LL))(
                                            v603, v602 + 1,
                                            (__int64)"/Program/Externals/Spine/"
                                                     "include\\spine/"
                                                     "SpineString.h",
                                            53),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        GameRoutine_1a0b950((__int64)f_.v763,
                                                            v601, f_.v762 + 1),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                        v604 = ((__int64 (*)(float*, __int64**))
                                                    GameRoutine_3dce0)(
                                            f_.v765, &f_.v761),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        v605 = f_.v763;
                                        *(_QWORD*)(v451 + 136) = v604;
                                        f_.v761 = v273 + 2;
                                        if (v605 != nullptr &&
                                            (f_.v764 & 1) != 0) {
                                          v606 = GameRoutine_19e10(),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                          (*(void (**)(__int64, __int64,
                                                       __int64, __int64))(
                                              *(_QWORD*)v606 + 40LL))(
                                              v606, (__int64)v605,
                                              (__int64)"/Program/Externals/"
                                                       "Spine/include\\spine/"
                                                       "SpineString.h",
                                              206),
                                              v328 = COERCE_AS(
                                                  __typeof__(v328),
                                                  PSEUDO_REGISTER(
                                                      unsigned long long, "x1",
                                                      "=r"));
                                        }
                                        spine_SpineObject_Destroy_SpineObject_4e8a0(
                                            &f_.v761),
                                            v328 = COERCE_AS(
                                                __typeof__(v328),
                                                PSEUDO_REGISTER(
                                                    unsigned long long, "x1",
                                                    "=r"));
                                      }
                                      v607 = spine_Json_getInt(
                                          v428, (__int64)"vertexCount", 0),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      spine_SkeletonJson_readVertices(
                                          f_.v754, v428, v451, 2 * v607),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                      v608 = spine_Json_getString(
                                          v428, (__int64)"color", 0),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      if (v608 == 0) {
                                        goto LABEL_566;
                                      }
                                      v573 = (const char*)v608;
                                      v574 = (float*)
                                          spine_ClippingAttachment_getColor(
                                              v451),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                    LABEL_565:
                                      toColor_alt1(v574, v573, 1),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                      goto LABEL_566;
                                    }
                                    v562 = *(_QWORD*)(f_.v754 + 8);
                                    f_.v761 = v273 + 2;
                                    f_.v764 = 1;
                                    if (v430 != nullptr) {
                                      v563 = GameRoutine_1a09c70(v430),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      f_.v762 = v563;
                                      v564 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      f_.v763 = (char*)(*(__int64 (**)(
                                          __int64, __int64, __int64, __int64))(
                                          *(_QWORD*)v564 + 24LL))(
                                          v564, v563 + 1,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/"
                                                   "SpineString.h",
                                          53),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      GameRoutine_1a0b950((__int64)f_.v763,
                                                          (__int64)v430,
                                                          f_.v762 + 1),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                    }
                                    else {
                                      f_.v762 = 0;
                                      f_.v763 = nullptr;
                                    }
                                    v579 = (*(__int64 (**)(__int64, __int64,
                                                           __int64))(
                                        *(_QWORD*)v562 + 48LL))(
                                        v562, v339, (__int64)&f_.v761),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v580 = f_.v763;
                                    v451 = v579;
                                    f_.v761 = v273 + 2;
                                    if (f_.v763 != nullptr &&
                                        (f_.v764 & 1) != 0) {
                                      v581 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      (*(void (**)(__int64, __int64, __int64,
                                                   __int64))(*(_QWORD*)v581 +
                                                             40LL))(
                                          v581, (__int64)v580,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/"
                                                   "SpineString.h",
                                          206),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                    }
                                    spine_SpineObject_Destroy_SpineObject_4e8a0(
                                        &f_.v761),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                    *(_BYTE*)(v451 + 168) =
                                        (unsigned int)spine_Json_getInt(
                                            v428, (__int64)"closed", 0) != 0,
                                                     v328 = COERCE_AS(
                                                         __typeof__(v328),
                                                         PSEUDO_REGISTER(
                                                             unsigned long long,
                                                             "x1", "=r"));
                                    *(_BYTE*)(v451 + 169) =
                                        (unsigned int)spine_Json_getInt(
                                            v428, (__int64)"constantSpeed",
                                            1u) != 0,
                                                     v328 = COERCE_AS(
                                                         __typeof__(v328),
                                                         PSEUDO_REGISTER(
                                                             unsigned long long,
                                                             "x1", "=r"));
                                    v582 = spine_Json_getInt(
                                        v428, (__int64)"vertexCount", 0),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    spine_SkeletonJson_readVertices(
                                        f_.v754, v428, v451, 2 * v582),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                    v583 = v582 / 3;
                                    if (*(_QWORD*)(v451 + 152) >= v583) {
                                      v588 = *(_QWORD*)(v451 + 144);
                                      *(_QWORD*)(v451 + 144) = v583;
                                    LABEL_540:
                                      if (v588 >= v583) {
                                      LABEL_542:
                                        v589 =
                                            *(_QWORD*)(spine_Json_getItem_4bae0(
                                                           v428,
                                                           (__int64)"lengths") +
                                                       16),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        if (v589 != 0) {
                                          v590 = 0;
                                          while (*(_QWORD*)(v451 + 144) >
                                                 v590) {
                                            *(float*)(*(_QWORD*)(v451 + 160) +
                                                      4 * v590++) =
                                                *(float*)(v589 + 44) *
                                                *(float*)(f_.v754 + 48);
                                            v589 = *(_QWORD*)(v589 + 8);
                                            if (v589 == 0) {
                                              goto LABEL_546;
                                            }
                                          }
                                          goto LABEL_663;
                                        }
                                      LABEL_546:
                                        v591 = spine_Json_getString(
                                            v428, (__int64)"color", 0),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        if (v591 == 0) {
                                          goto LABEL_566;
                                        }
                                        v573 = (const char*)v591;
                                        v574 = (float*)
                                            spine_PathAttachment_getColor(v451),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                        goto LABEL_565;
                                      }
                                    }
                                    else {
                                      v584 = *(_QWORD*)(v451 + 160);
                                      *(_QWORD*)(v451 + 152) = v583;
                                      v585 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v586 = (*(__int64 (**)(
                                          __int64, __int64, __int64, __int64,
                                          __int64))(*(_QWORD*)v585 + 32LL))(
                                          v585, v584, 4 * v583,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/Vector.h",
                                          94),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v588 = *(_QWORD*)(v451 + 144);
                                      v587 = *(_QWORD*)(v451 + 152);
                                      *(_QWORD*)(v451 + 160) = v586;
                                      *(_QWORD*)(v451 + 144) = v583;
                                      if (v587 >= v583) {
                                        goto LABEL_540;
                                      }
                                      v592 = *(_QWORD*)(v451 + 160);
                                      if ((unsigned int)(int)(float)((float)
                                                                         v583 *
                                                                     0x1.c000000000000p+0f) <=
                                          8) {
                                        v593 = 8;
                                      }
                                      else {
                                        v593 =
                                            (int)(float)((float)v583 *
                                                         0x1.c000000000000p+0f);
                                      }
                                      *(_QWORD*)(v451 + 152) = v593;
                                      v594 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v595 = (*(__int64 (**)(
                                          __int64, __int64, __int64, __int64,
                                          __int64))(*(_QWORD*)v594 + 32LL))(
                                          v594, v592, 4LL * v593,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/Vector.h",
                                          82),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v596 = *(_QWORD*)(v451 + 144);
                                      *(_QWORD*)(v451 + 160) = v595;
                                      if (v588 >= v596) {
                                        goto LABEL_542;
                                      }
                                    }
                                    do {
                                      *(_DWORD*)(*(_QWORD*)(v451 + 160) +
                                                 4 * v588++) = 0;
                                    } while (v588 < *(_QWORD*)(v451 + 144));
                                    goto LABEL_542;
                                  }
                                  v436 = spine_Json_getItem_4bae0(
                                      v428, (__int64)"sequence"),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  if (v436 != 0) {
                                    v437 = v436;
                                    v438 = (_DWORD*)GameRoutine_4e7c0(64),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v439 = spine_Json_getInt(
                                        v437, (__int64)"count", 0),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    spine_Sequence_Sequence((__int64)v438,
                                                            v439),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                    v438[12] = spine_Json_getInt(
                                        v437, (__int64)"start", 1u),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v438[13] = spine_Json_getInt(
                                        v437, (__int64)"digits", 0),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v438[14] = spine_Json_getInt(
                                        v437, (__int64)"setupIndex", 0),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                  }
                                  else {
                                    v438 = nullptr;
                                  }
                                  v444 = *(_QWORD*)(f_.v754 + 8);
                                  f_.v761 = v273 + 2;
                                  f_.v764 = 1;
                                  if (v430 != nullptr) {
                                    v445 = GameRoutine_1a09c70(v430),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    f_.v762 = v445;
                                    v446 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    f_.v763 = (char*)(*(__int64 (**)(
                                        __int64, __int64, __int64, __int64))(
                                        *(_QWORD*)v446 + 24LL))(
                                        v446, v445 + 1,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/SpineString.h",
                                        53),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    GameRoutine_1a0b950((__int64)f_.v763,
                                                        (__int64)v430,
                                                        f_.v762 + 1),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                    f_.v757 = v273 + 2;
                                    f_.v760 = 1;
                                    if (v431 != nullptr) {
                                      goto LABEL_408;
                                    }
                                  LABEL_410:
                                    f_.v758 = 0;
                                    f_.v759 = 0;
                                  }
                                  else {
                                    f_.v762 = 0;
                                    f_.v763 = nullptr;
                                    f_.v757 = v273 + 2;
                                    f_.v760 = 1;
                                    if (v431 == nullptr) {
                                      goto LABEL_410;
                                    }
                                  LABEL_408:
                                    v447 = GameRoutine_1a09c70(v431),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    f_.v758 = v447;
                                    v448 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    f_.v759 = (*(__int64 (**)(
                                        __int64, __int64, __int64, __int64))(
                                        *(_QWORD*)v448 + 24LL))(
                                        v448, v447 + 1,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/SpineString.h",
                                        53),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    GameRoutine_1a0b950(f_.v759, (__int64)v431,
                                                        f_.v758 + 1),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                  }
                                  v449 = (*(__int64 (**)(
                                      __int64, __int64, __int64, __int64,
                                      __int64))(*(_QWORD*)v444 + 32LL))(
                                      v444, v339, (__int64)&f_.v761,
                                      (__int64)&f_.v757, (__int64)v438),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v450 = f_.v759;
                                  v451 = v449;
                                  f_.v757 = v273 + 2;
                                  if (f_.v759 != 0 && (f_.v760 & 1) != 0) {
                                    v452 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    (*(void (**)(__int64, __int64, __int64,
                                                 __int64))(*(_QWORD*)v452 +
                                                           40LL))(
                                        v452, v450,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/SpineString.h",
                                        206),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                  }
                                  spine_SpineObject_Destroy_SpineObject_4e8a0(
                                      &f_.v757),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  v453 = f_.v763;
                                  f_.v761 = v273 + 2;
                                  if (f_.v763 != nullptr &&
                                      (f_.v764 & 1) != 0) {
                                    v454 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    (*(void (**)(__int64, __int64, __int64,
                                                 __int64))(*(_QWORD*)v454 +
                                                           40LL))(
                                        v454, (__int64)v453,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/SpineString.h",
                                        206),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                  }
                                  spine_SpineObject_Destroy_SpineObject_4e8a0(
                                      &f_.v761),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  if (v451 == 0) {
                                    goto LABEL_679;
                                  }
                                  v455 = *(_QWORD*)(v451 + 288);
                                  if ((const char*)v455 != v431) {
                                    if (v455 != 0 &&
                                        (*(_BYTE*)(v451 + 296) & 1) != 0) {
                                      v456 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      (*(void (**)(__int64, __int64, __int64,
                                                   __int64))(*(_QWORD*)v456 +
                                                             40LL))(
                                          v456, v455,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/"
                                                   "SpineString.h",
                                          135),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                    }
                                    if (v431 != nullptr) {
                                      v457 = GameRoutine_1a09c70(v431),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      *(_QWORD*)(v451 + 280) = v457;
                                      v458 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v459 = (*(__int64 (**)(__int64, __int64,
                                                             __int64, __int64))(
                                          *(_QWORD*)v458 + 24LL))(
                                          v458, v457 + 1,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/"
                                                   "SpineString.h",
                                          142),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v460 = *(_QWORD*)(v451 + 280);
                                      *(_QWORD*)(v451 + 288) = v459;
                                      GameRoutine_1a0b950(v459, (__int64)v431,
                                                          v460 + 1),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                    }
                                    else {
                                      *(_QWORD*)(v451 + 280) = 0;
                                      *(_QWORD*)(v451 + 288) = 0;
                                    }
                                  }
                                  v480 = spine_Json_getString(
                                      v428, (__int64)"color", 0),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  if (v480 != 0) {
                                    v481 = (const char*)v480;
                                    v482 =
                                        (float*)spine_MeshAttachment_getColor(
                                            v451),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    toColor_alt1(v482, v481, 1),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                  }
                                  *(_DWORD*)(v451 + 332) =
                                      (int)(float)(spine_Json_getFloat(
                                                       v428, (__int64)"width",
                                                       0x1.0000000000000p+5f) *
                                                   *(float*)(f_.v754 + 48)),
                                                    v328 = COERCE_AS(
                                                        __typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                  v483 = spine_Json_getFloat(
                                      v428, (__int64)"height",
                                      0x1.0000000000000p+5f),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v484 = *(float*)(f_.v754 + 48);
                                  *(_QWORD*)(v451 + 352) = v438;
                                  *(_DWORD*)(v451 + 336) =
                                      (int)(float)(v483 * v484);
                                  v485 = spine_Json_getItem_4bae0(
                                      v428, (__int64)"parent"),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  if (v485 != 0) {
                                    v486 = v485;
                                    v487 = spine_Json_getInt(
                                        v428, (__int64)"timelines", 1u),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v488 = GameRoutine_4e800(
                                        96,
                                        (__int64)"/Program/Externals/Spine/src/"
                                                 "spine/SkeletonJson.cpp",
                                        0x279u),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v489 = (const char*)spine_Json_getString(
                                        v428, (__int64)"skin", 0),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    f_.v761 = v273 + 2;
                                    f_.v764 = 1;
                                    if (v489 != nullptr) {
                                      v490 = (__int64)v489;
                                      v491 = GameRoutine_1a09c70(v489),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      f_.v762 = v491;
                                      v492 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v493 = v491 + 1;
                                      v273 = GameData_21322b8[0];
                                      f_.v763 = (char*)(*(__int64 (**)(
                                          __int64, __int64, __int64, __int64))(
                                          *(_QWORD*)v492 + 24LL))(
                                          v492, v493,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/"
                                                   "SpineString.h",
                                          53),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      GameRoutine_1a0b950((__int64)f_.v763,
                                                          v490, f_.v762 + 1),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                    }
                                    else {
                                      f_.v762 = 0;
                                      f_.v763 = nullptr;
                                    }
                                    v534 = spine_SlotData_getIndex(f_.v753),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v535 = *(const char**)(v486 + 32);
                                    v536 = v534;
                                    f_.v757 = v273 + 2;
                                    f_.v760 = 1;
                                    if (v535 != nullptr) {
                                      v537 = GameRoutine_1a09c70(v535),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      f_.v758 = v537;
                                      v538 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v539 = v537 + 1;
                                      v273 = GameData_21322b8[0];
                                      f_.v759 = (*(__int64 (**)(
                                          __int64, __int64, __int64, __int64))(
                                          *(_QWORD*)v538 + 24LL))(
                                          v538, v539,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/"
                                                   "SpineString.h",
                                          53),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      GameRoutine_1a0b950(
                                          f_.v759, (__int64)v535, f_.v758 + 1),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                    }
                                    else {
                                      f_.v758 = 0;
                                      f_.v759 = 0;
                                    }
                                    spine_LinkedMesh_LinkedMesh(
                                        v488, v451, (__int64)&f_.v761, v536,
                                        (__int64)&f_.v757, v487 != 0),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                    v540 = f_.v759;
                                    f_.v757 = v273 + 2;
                                    if (f_.v759 != 0 && (f_.v760 & 1) != 0) {
                                      v541 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      (*(void (**)(__int64, __int64, __int64,
                                                   __int64))(*(_QWORD*)v541 +
                                                             40LL))(
                                          v541, v540,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/"
                                                   "SpineString.h",
                                          206),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                    }
                                    spine_SpineObject_Destroy_SpineObject_4e8a0(
                                        &f_.v757),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                    v542 = f_.v763;
                                    f_.v761 = v273 + 2;
                                    if (f_.v763 != nullptr &&
                                        (f_.v764 & 1) != 0) {
                                      v543 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      (*(void (**)(__int64, __int64, __int64,
                                                   __int64))(*(_QWORD*)v543 +
                                                             40LL))(
                                          v543, (__int64)v542,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/"
                                                   "SpineString.h",
                                          206),
                                          v328 =
                                              COERCE_AS(__typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                    }
                                    spine_SpineObject_Destroy_SpineObject_4e8a0(
                                        &f_.v761),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                    v544 = *(_QWORD*)(f_.v754 + 24);
                                    if (v544 == *(_QWORD*)(f_.v754 + 32)) {
                                      v545 = *(_QWORD*)(f_.v754 + 40);
                                      v546 =
                                          (int)(float)((float)v544 *
                                                       0x1.c000000000000p+0f);
                                      if (v546 <= 8) {
                                        v547 = 8;
                                      }
                                      else {
                                        v547 = v546;
                                      }
                                      *(_QWORD*)(f_.v754 + 32) = v547;
                                      v548 = GameRoutine_19e10(),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v549 = (*(__int64 (**)(
                                          __int64, __int64, __int64, __int64,
                                          __int64))(*(_QWORD*)v548 + 32LL))(
                                          v548, v545, 8LL * v547,
                                          (__int64)"/Program/Externals/Spine/"
                                                   "include\\spine/Vector.h",
                                          106),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                      v550 = *(_QWORD*)(f_.v754 + 24);
                                      *(_QWORD*)(f_.v754 + 40) = v549;
                                      *(_QWORD*)(f_.v754 + 24) = v550 + 1;
                                      *(_QWORD*)(v549 + 8 * v550) = v488;
                                    }
                                    else {
                                      v551 = *(_QWORD*)(f_.v754 + 40);
                                      *(_QWORD*)(f_.v754 + 24) = v544 + 1;
                                      *(_QWORD*)(v551 + 8 * v544) = v488;
                                    }
                                    goto LABEL_567;
                                  }
                                  v494 = spine_Json_getItem_4bae0(
                                      v428, (__int64)"triangles"),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v495 = *(int*)(v494 + 28);
                                  v496 = v494;
                                  if (*(_QWORD*)(v451 + 224) < v495) {
                                    v497 = *(_QWORD*)(v451 + 232);
                                    *(_QWORD*)(v451 + 224) = v495;
                                    v498 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    *(_QWORD*)(v451 +
                                               232) =
                                        (*(__int64 (**)(
                                            __int64, __int64, __int64, __int64,
                                            __int64))(*(_QWORD*)v498 + 32LL))(
                                            v498, v497, 2 * v495,
                                            (__int64)"/Program/Externals/Spine/"
                                                     "include\\spine/Vector.h",
                                            94),
                                               v328 = COERCE_AS(
                                                   __typeof__(v328),
                                                   PSEUDO_REGISTER(
                                                       unsigned long long, "x1",
                                                       "=r"));
                                    v500 = *(_QWORD*)(v451 + 216);
                                    v499 = *(_QWORD*)(v451 + 224);
                                    v495 = *(int*)(v496 + 28);
                                    *(_QWORD*)(v451 + 216) = v495;
                                    if (v499 >= v495) {
                                      goto LABEL_453;
                                    }
                                    v523 = *(_QWORD*)(v451 + 232);
                                    if ((unsigned int)(int)(float)((float)v495 *
                                                                   0x1.c000000000000p+0f) <=
                                        8) {
                                      v524 = 8;
                                    }
                                    else {
                                      v524 =
                                          (int)(float)((float)v495 *
                                                       0x1.c000000000000p+0f);
                                    }
                                    *(_QWORD*)(v451 + 224) = v524;
                                    v525 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v526 = (*(__int64 (**)(
                                        __int64, __int64, __int64, __int64,
                                        __int64))(*(_QWORD*)v525 + 32LL))(
                                        v525, v523, 2LL * v524,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/Vector.h",
                                        82),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v527 = *(_QWORD*)(v451 + 216);
                                    *(_QWORD*)(v451 + 232) = v526;
                                    if (v500 >= v527) {
                                      goto LABEL_455;
                                    }
                                    do {
                                    LABEL_454:
                                      *(_WORD*)(*(_QWORD*)(v451 + 232) +
                                                2 * v500++) = 0;
                                    } while (v500 < *(_QWORD*)(v451 + 216));
                                    goto LABEL_455;
                                  }
                                  v500 = *(_QWORD*)(v451 + 216);
                                  *(_QWORD*)(v451 + 216) = v495;
                                LABEL_453:
                                  if (v500 < v495) {
                                    goto LABEL_454;
                                  }
                                LABEL_455:
                                  v501 = *(_QWORD*)(v496 + 16);
                                  if (v501 != 0) {
                                    v502 = 0;
                                    while (*(_QWORD*)(v451 + 216) > v502) {
                                      *(_WORD*)(*(_QWORD*)(v451 + 232) +
                                                2 * v502++) =
                                          *(_DWORD*)(v501 + 40);
                                      v501 = *(_QWORD*)(v501 + 8);
                                      if (v501 == 0) {
                                        goto LABEL_459;
                                      }
                                    }
                                    goto LABEL_663;
                                  }
                                LABEL_459:
                                  v503 = spine_Json_getItem_4bae0(
                                      v428, (__int64)"uvs"),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v504 = *(int*)(v503 + 28);
                                  v505 = v503;
                                  if (*(_QWORD*)(v451 + 192) < v504) {
                                    v506 = *(_QWORD*)(v451 + 200);
                                    *(_QWORD*)(v451 + 192) = v504;
                                    v507 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v508 = (*(__int64 (**)(
                                        __int64, __int64, __int64, __int64,
                                        __int64))(*(_QWORD*)v507 + 32LL))(
                                        v507, v506, 4 * v504,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/Vector.h",
                                        94),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v510 = *(_QWORD*)(v451 + 184);
                                    v509 = *(_QWORD*)(v451 + 192);
                                    *(_QWORD*)(v451 + 200) = v508;
                                    *(_QWORD*)(v451 + 184) = v504;
                                    v511 = v504;
                                    if (v509 >= v504) {
                                      goto LABEL_461;
                                    }
                                    v528 = *(_QWORD*)(v451 + 200);
                                    if ((unsigned int)(int)(float)((float)v504 *
                                                                   0x1.c000000000000p+0f) <=
                                        8) {
                                      v529 = 8;
                                    }
                                    else {
                                      v529 =
                                          (int)(float)((float)v504 *
                                                       0x1.c000000000000p+0f);
                                    }
                                    *(_QWORD*)(v451 + 192) = v529;
                                    v530 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v531 = 4LL * v529;
                                    v273 = GameData_21322b8[0];
                                    v532 = (*(__int64 (**)(
                                        __int64, __int64, __int64, __int64,
                                        __int64))(*(_QWORD*)v530 + 32LL))(
                                        v530, v528, v531,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/Vector.h",
                                        82),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v533 = *(_QWORD*)(v451 + 184);
                                    *(_QWORD*)(v451 + 200) = v532;
                                    if (v510 >= v533) {
                                      goto LABEL_463;
                                    }
                                    do {
                                    LABEL_462:
                                      *(_DWORD*)(*(_QWORD*)(v451 + 200) +
                                                 4 * v510++) = 0;
                                    } while (v510 < *(_QWORD*)(v451 + 184));
                                    goto LABEL_463;
                                  }
                                  v510 = *(_QWORD*)(v451 + 184);
                                  *(_QWORD*)(v451 + 184) = v504;
                                  v511 = v504;
                                LABEL_461:
                                  if (v510 < v511) {
                                    goto LABEL_462;
                                  }
                                LABEL_463:
                                  v512 = *(_QWORD*)(v505 + 16);
                                  if (v512 != 0) {
                                    v513 = 0;
                                    while (*(_QWORD*)(v451 + 184) > v513) {
                                      *(_DWORD*)(*(_QWORD*)(v451 + 200) +
                                                 4 * v513++) =
                                          *(_DWORD*)(v512 + 44);
                                      v512 = *(_QWORD*)(v512 + 8);
                                      if (v512 == 0) {
                                        goto LABEL_467;
                                      }
                                    }
                                    goto LABEL_663;
                                  }
                                LABEL_467:
                                  spine_SkeletonJson_readVertices(f_.v754, v428,
                                                                  v451, v504),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  if (*(_QWORD*)(v451 + 344) != 0) {
                                    spine_MeshAttachment_updateRegion(
                                        (_QWORD*)v451),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                                  }
                                  *(_DWORD*)(v451 + 328) = spine_Json_getInt(
                                      v428, (__int64)"hull", 0),
                                                    v328 = COERCE_AS(
                                                        __typeof__(v328),
                                                        PSEUDO_REGISTER(
                                                            unsigned long long,
                                                            "x1", "=r"));
                                  v514 = spine_Json_getItem_4bae0(
                                      v428, (__int64)"edges"),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  if (v514 == 0) {
                                    goto LABEL_566;
                                  }
                                  v515 = *(int*)(v514 + 28);
                                  v516 = v514;
                                  if (*(_QWORD*)(v451 + 256) >= v515) {
                                    v520 = *(_QWORD*)(v451 + 248);
                                    *(_QWORD*)(v451 + 248) = v515;
                                  LABEL_472:
                                    if (v520 >= v515) {
                                    LABEL_474:
                                      v521 = *(_QWORD*)(v516 + 16);
                                      if (v521 != 0) {
                                        v522 = 0;
                                        while (*(_QWORD*)(v451 + 248) > v522) {
                                          *(_WORD*)(*(_QWORD*)(v451 + 264) +
                                                    2 * v522++) =
                                              *(_DWORD*)(v521 + 40);
                                          v521 = *(_QWORD*)(v521 + 8);
                                          if (v521 == 0) {
                                            goto LABEL_566;
                                          }
                                        }
                                        goto LABEL_663;
                                      }
                                      goto LABEL_566;
                                    }
                                  }
                                  else {
                                    v517 = *(_QWORD*)(v451 + 264);
                                    *(_QWORD*)(v451 + 256) = v515;
                                    v518 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    *(_QWORD*)(v451 +
                                               264) =
                                        (*(__int64 (**)(
                                            __int64, __int64, __int64, __int64,
                                            __int64))(*(_QWORD*)v518 + 32LL))(
                                            v518, v517, 2 * v515,
                                            (__int64)"/Program/Externals/Spine/"
                                                     "include\\spine/Vector.h",
                                            94),
                                               v328 = COERCE_AS(
                                                   __typeof__(v328),
                                                   PSEUDO_REGISTER(
                                                       unsigned long long, "x1",
                                                       "=r"));
                                    v520 = *(_QWORD*)(v451 + 248);
                                    v519 = *(_QWORD*)(v451 + 256);
                                    v515 = *(int*)(v516 + 28);
                                    *(_QWORD*)(v451 + 248) = v515;
                                    if (v519 >= v515) {
                                      goto LABEL_472;
                                    }
                                    v552 = *(_QWORD*)(v451 + 264);
                                    if ((unsigned int)(int)(float)((float)v515 *
                                                                   0x1.c000000000000p+0f) <=
                                        8) {
                                      v553 = 8;
                                    }
                                    else {
                                      v553 =
                                          (int)(float)((float)v515 *
                                                       0x1.c000000000000p+0f);
                                    }
                                    *(_QWORD*)(v451 + 256) = v553;
                                    v554 = GameRoutine_19e10(),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v555 = (*(__int64 (**)(
                                        __int64, __int64, __int64, __int64,
                                        __int64))(*(_QWORD*)v554 + 32LL))(
                                        v554, v552, 2LL * v553,
                                        (__int64)"/Program/Externals/Spine/"
                                                 "include\\spine/Vector.h",
                                        82),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                    v556 = *(_QWORD*)(v451 + 248);
                                    *(_QWORD*)(v451 + 264) = v555;
                                    if (v520 >= v556) {
                                      goto LABEL_474;
                                    }
                                  }
                                  do {
                                    *(_WORD*)(*(_QWORD*)(v451 + 264) +
                                              2 * v520++) = 0;
                                  } while (v520 < *(_QWORD*)(v451 + 248));
                                  goto LABEL_474;
                                }
                                break;
                              }
                              v440 = spine_Json_getItem_4bae0(
                                  v428, (__int64)"sequence"),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              if (v440 != 0) {
                                v441 = v440;
                                v442 = (_DWORD*)GameRoutine_4e7c0(64),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v443 = spine_Json_getInt(v441, (__int64)"count",
                                                         0),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                spine_Sequence_Sequence((__int64)v442, v443),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                v442[12] = spine_Json_getInt(
                                    v441, (__int64)"start", 1u),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v442[13] = spine_Json_getInt(
                                    v441, (__int64)"digits", 0),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v442[14] = spine_Json_getInt(
                                    v441, (__int64)"setupIndex", 0),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                              }
                              else {
                                v442 = nullptr;
                              }
                              v461 = *(_QWORD*)(f_.v754 + 8);
                              f_.v761 = v273 + 2;
                              f_.v764 = 1;
                              if (v430 != nullptr) {
                                v462 = GameRoutine_1a09c70(v430),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                f_.v762 = v462;
                                v463 = GameRoutine_19e10(),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                f_.v763 = (char*)(*(__int64 (**)(
                                    __int64, __int64, __int64, __int64))(
                                    *(_QWORD*)v463 + 24LL))(
                                    v463, v462 + 1,
                                    (__int64)"/Program/Externals/Spine/"
                                             "include\\spine/SpineString.h",
                                    53),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                GameRoutine_1a0b950((__int64)f_.v763,
                                                    (__int64)v430, f_.v762 + 1),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                                f_.v757 = v273 + 2;
                                f_.v760 = 1;
                                if (v431 != nullptr) {
                                  goto LABEL_427;
                                }
                              LABEL_429:
                                f_.v758 = 0;
                                f_.v759 = 0;
                              }
                              else {
                                f_.v762 = 0;
                                f_.v763 = nullptr;
                                f_.v757 = v273 + 2;
                                f_.v760 = 1;
                                if (v431 == nullptr) {
                                  goto LABEL_429;
                                }
                              LABEL_427:
                                v464 = GameRoutine_1a09c70(v431),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                f_.v758 = v464;
                                v465 = GameRoutine_19e10(),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                f_.v759 = (*(__int64 (**)(__int64, __int64,
                                                          __int64, __int64))(
                                    *(_QWORD*)v465 + 24LL))(
                                    v465, v464 + 1,
                                    (__int64)"/Program/Externals/Spine/"
                                             "include\\spine/SpineString.h",
                                    53),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                GameRoutine_1a0b950(f_.v759, (__int64)v431,
                                                    f_.v758 + 1),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                              }
                              v466 = (*(__int64 (**)(__int64, __int64, __int64,
                                                     __int64, __int64))(
                                  *(_QWORD*)v461 + 24LL))(
                                  v461, v339, (__int64)&f_.v761,
                                  (__int64)&f_.v757, (__int64)v442),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              v467 = f_.v759;
                              v451 = v466;
                              f_.v757 = v273 + 2;
                              if (f_.v759 != 0 && (f_.v760 & 1) != 0) {
                                v468 = GameRoutine_19e10(),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                (*(void (**)(__int64, __int64, __int64,
                                             __int64))(*(_QWORD*)v468 + 40LL))(
                                    v468, v467,
                                    (__int64)"/Program/Externals/Spine/"
                                             "include\\spine/SpineString.h",
                                    206),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                              }
                              spine_SpineObject_Destroy_SpineObject_4e8a0(
                                  &f_.v757),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                              v469 = f_.v763;
                              f_.v761 = v273 + 2;
                              if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                                v470 = GameRoutine_19e10(),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                (*(void (**)(__int64, __int64, __int64,
                                             __int64))(*(_QWORD*)v470 + 40LL))(
                                    v470, (__int64)v469,
                                    (__int64)"/Program/Externals/Spine/"
                                             "include\\spine/SpineString.h",
                                    206),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                              }
                              spine_SpineObject_Destroy_SpineObject_4e8a0(
                                  &f_.v761),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                              if (v451 == 0) {
                              LABEL_679:
                                if (f_.v765 != nullptr) {
                                  (*(void (**)(__int64))(*(_QWORD*)f_.v765 +
                                                         8LL))(
                                      (__int64)f_.v765),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                f_.v764 = 1;
                                f_.v761 = v273 + 2;
                                f_.v762 = 26;
                                v728 = GameRoutine_19e10(),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                f_.v763 = (char*)(*(__int64 (**)(
                                    __int64, __int64, __int64, __int64))(
                                    *(_QWORD*)v728 + 24LL))(
                                    v728, 27,
                                    (__int64)"/Program/Externals/Spine/"
                                             "include\\spine/SpineString.h",
                                    53),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                v631 = f_.v763;
                                strcpy(f_.v763, "Error reading attachment: ");
                                f_.v757 = v273 + 2;
                                f_.v760 = 1;
                                if (v429 != nullptr) {
                                  v729 = GameRoutine_1a09c70(v429),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v758 = v729;
                                  v730 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v670 = (*(__int64 (**)(__int64, __int64,
                                                         __int64, __int64))(
                                      *(_QWORD*)v730 + 24LL))(
                                      v730, v729 + 1,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      53),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  f_.v759 = v670;
                                  GameRoutine_1a0b950(v670, (__int64)v429,
                                                      v729 + 1),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  spine_SkeletonJson_setError(
                                      f_.v754, f_.v748, (__int64)&f_.v761,
                                      (__int64)&f_.v757),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  f_.v757 = v273 + 2;
                                  if (v670 != 0) {
                                    goto LABEL_691;
                                  }
                                }
                                else {
                                  f_.v758 = 0;
                                  f_.v759 = 0;
                                  spine_SkeletonJson_setError(
                                      f_.v754, f_.v748, (__int64)&f_.v761,
                                      (__int64)&f_.v757),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                  f_.v757 = v273 + 2;
                                }
                                goto LABEL_694;
                              }
                              v471 = *(_QWORD*)(v451 + 152);
                              if ((const char*)v471 != v431) {
                                if (v471 != 0 &&
                                    (*(_BYTE*)(v451 + 160) & 1) != 0) {
                                  v472 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  (*(void (**)(__int64, __int64, __int64,
                                               __int64))(*(_QWORD*)v472 +
                                                         40LL))(
                                      v472, v471,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      135),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                if (v431 != nullptr) {
                                  v473 = GameRoutine_1a09c70(v431),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  *(_QWORD*)(v451 + 144) = v473;
                                  v474 = GameRoutine_19e10(),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v475 = (*(__int64 (**)(__int64, __int64,
                                                         __int64, __int64))(
                                      *(_QWORD*)v474 + 24LL))(
                                      v474, v473 + 1,
                                      (__int64)"/Program/Externals/Spine/"
                                               "include\\spine/SpineString.h",
                                      142),
                                  v328 = COERCE_AS(
                                      __typeof__(v328),
                                      PSEUDO_REGISTER(unsigned long long, "x1",
                                                      "=r"));
                                  v476 = *(_QWORD*)(v451 + 144);
                                  *(_QWORD*)(v451 + 152) = v475;
                                  GameRoutine_1a0b950(v475, (__int64)v431,
                                                      v476 + 1),
                                      v328 = COERCE_AS(
                                          __typeof__(v328),
                                          PSEUDO_REGISTER(unsigned long long,
                                                          "x1", "=r"));
                                }
                                else {
                                  *(_QWORD*)(v451 + 144) = 0;
                                  *(_QWORD*)(v451 + 152) = 0;
                                }
                              }
                              *(float*)(v451 +
                                        44) =
                                  spine_Json_getFloat(v428, (__int64)"x",
                                                      0x0.0p+0f) *
                                  *(float*)(f_.v754 + 48),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              *(float*)(v451 +
                                        48) =
                                  spine_Json_getFloat(v428, (__int64)"y",
                                                      0x0.0p+0f) *
                                  *(float*)(f_.v754 + 48),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              *(float*)(v451 +
                                        56) =
                                  spine_Json_getFloat(v428, (__int64)"scaleX",
                                                      0x1.0000000000000p+0f),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              *(float*)(v451 +
                                        60) =
                                  spine_Json_getFloat(v428, (__int64)"scaleY",
                                                      0x1.0000000000000p+0f),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              *(float*)(v451 +
                                        52) =
                                  spine_Json_getFloat(v428, (__int64)"rotation",
                                                      0x0.0p+0f),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              *(float*)(v451 +
                                        64) =
                                  spine_Json_getFloat(v428, (__int64)"width",
                                                      0x1.0000000000000p+5f) *
                                  *(float*)(f_.v754 + 48),
                                        v328 = COERCE_AS(
                                            __typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              v557 =
                                  spine_Json_getFloat(v428, (__int64)"height",
                                                      0x1.0000000000000p+5f),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              v558 = *(float*)(f_.v754 + 48);
                              *(_QWORD*)(v451 + 200) = v442;
                              *(float*)(v451 + 68) = v557 * v558;
                              v559 = spine_Json_getString(v428,
                                                          (__int64)"color", 0),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                              if (v559 != 0) {
                                v560 = (const char*)v559;
                                v561 = (float*)spine_RegionAttachment_getColor(
                                    v451),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                                toColor_alt1(v561, v560, 1),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                              }
                              if (*(_QWORD*)(v451 + 192) != 0) {
                                spine_RegionAttachment_updateRegion_alt1(v451),
                                    v328 = COERCE_AS(
                                        __typeof__(v328),
                                        PSEUDO_REGISTER(unsigned long long,
                                                        "x1", "=r"));
                              }
                              goto LABEL_566;
                            }
                          }
                        LABEL_573:
                          v326 = f_.v748;
                          v328 = "/Program/Externals/Spine/src/spine/"
                                 "SkeletonJson.cpp";
                          v337 = f_.v746 + 1;
                          v336 = *(_QWORD*)(f_.v747 + 8);
                          v338 = f_.v744;
                          if (v336 == 0) {
                            goto LABEL_574;
                          }
                        }
                        while (1) {
                          v367 = *(const char**)(v347 + 32);
                          f_.v764 = 1;
                          f_.v761 = v273 + 2;
                          if (v367 != nullptr) {
                            v368 = GameRoutine_1a09c70(v367),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            f_.v762 = v368;
                            v369 = GameRoutine_19e10(),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            f_.v763 = (char*)(*(__int64 (**)(__int64, __int64,
                                                             __int64, __int64))(
                                *(_QWORD*)v369 + 24LL))(
                                v369, v368 + 1,
                                (__int64)"/Program/Externals/Spine/"
                                         "include\\spine/SpineString.h",
                                53),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            GameRoutine_1a0b950((__int64)f_.v763, (__int64)v367,
                                                f_.v762 + 1),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                          else {
                            f_.v762 = 0;
                            f_.v763 = nullptr;
                          }
                          v370 = ((__int64 (*)(float*, __int64**))
                                      GameRoutine_3e060)(v161, &f_.v761),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          v371 = f_.v763;
                          v372 = v370;
                          f_.v761 = v273 + 2;
                          if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
                            v373 = GameRoutine_19e10(),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            (*(void (**)(__int64, __int64, __int64, __int64))(
                                *(_QWORD*)v373 + 40LL))(
                                v373, (__int64)v371,
                                (__int64)"/Program/Externals/Spine/"
                                         "include\\spine/SpineString.h",
                                206),
                                v328 = COERCE_AS(
                                    __typeof__(v328),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                          spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
                              v328 =
                                  COERCE_AS(__typeof__(v328),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          if (v372 == 0) {
                            break;
                          }
                          v374 = (_QWORD*)spine_Skin_getConstraints(v339),
                          v328 = COERCE_AS(
                              __typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          v375 = v374[1];
                          if (v375 == v374[2]) {
                            v376 = v374[3];
                            v377 = v374;
                            v378 = (int)(float)((float)v375 *
                                                0x1.c000000000000p+0f);
                            if (v378 <= 8) {
                              v379 = 8;
                            }
                            else {
                              v379 = v378;
                            }
                            v374[2] = v379;
                            v380 = GameRoutine_19e10(),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v381 = (*(__int64 (**)(__int64, __int64, __int64,
                                                   __int64, __int64))(
                                *(_QWORD*)v380 + 32LL))(
                                v380, v376, 8LL * v379,
                                (__int64)"/Program/Externals/Spine/"
                                         "include\\spine/Vector.h",
                                106),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                            v382 = v377[1];
                            v377[3] = v381;
                            v377[1] = v382 + 1;
                            v161 = f_.v765;
                            *(_QWORD*)(v381 + 8 * v382) = v372;
                            v347 = *(_QWORD*)(v347 + 8);
                            if (v347 == 0) {
                              goto LABEL_345;
                            }
                          }
                          else {
                            v366 = v374[3];
                            v374[1] = v375 + 1;
                            *(_QWORD*)(v366 + 8 * v375) = v372;
                            v347 = *(_QWORD*)(v347 + 8);
                            if (v347 == 0) {
                              goto LABEL_345;
                            }
                          }
                        }
                        (*(void (**)(__int64))(*(_QWORD*)v161 + 8LL))(
                            (__int64)v161),
                            v328 = COERCE_AS(__typeof__(v328),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                        v665 = v273 + 2;
                        f_.v764 = 1;
                        f_.v761 = v273 + 2;
                        f_.v762 = 30;
                        v727 = GameRoutine_19e10(),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        v725 =
                            (*(__int64 (**)(__int64, __int64, __int64,
                                            __int64))(*(_QWORD*)v727 + 24LL))(
                                v727, 31,
                                (__int64)"/Program/Externals/Spine/"
                                         "include\\spine/SpineString.h",
                                53),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        v726 = "Skin IK constraint not found: ";
                        f_.v763 = (char*)v725;
                        v631 = (char*)v725;
                        strcpy((char*)(v725 + 16), "nt not found: ");
                        goto LABEL_687;
                      }
                      goto LABEL_574;
                    }
                    do {
                    LABEL_304:
                      *(_QWORD*)(*((_QWORD*)v161 + 16) + 8 * v335++) = 0;
                    } while (v335 < *((_QWORD*)v161 + 14));
                    goto LABEL_305;
                  }
                }
                if (v335 >= v330) {
                  goto LABEL_305;
                }
                goto LABEL_304;
              }
              do {
              LABEL_236:
                *(_QWORD*)(*((_QWORD*)v161 + 37) + 8 * v270++) = 0;
              } while (v270 < *((_QWORD*)v161 + 35));
              goto LABEL_237;
            }
          }
          if (v270 >= v265) {
            goto LABEL_237;
          }
          goto LABEL_236;
        }
        do {
        LABEL_192:
          *(_QWORD*)(*((_QWORD*)v161 + 33) + 8 * v219++) = 0;
        } while (v219 < *((_QWORD*)v161 + 31));
        goto LABEL_193;
      }
    }
    if (v219 >= v214) {
      goto LABEL_193;
    }
    goto LABEL_192;
  }
  v169 = 0;
  v170 = GameData_21322b8[0];
  v171 = GameData_21322b8[0] + 2;
  f_.v750 = GameData_21322b8[0] + 2;
  while (1) {
    v172 = GameRoutine_4e800(
        112, (__int64)"/Program/Externals/Spine/src/spine/SkeletonJson.cpp",
        0x11Bu),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v173 = (const char*)spine_Json_getString(v168, (__int64)"name", 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    f_.v761 = v171;
    f_.v764 = 1;
    if (v173 != nullptr) {
      v174 = (__int64)v173;
      v175 = GameRoutine_1a09c70(v173),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v762 = v175;
      v176 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)v176 + 24LL))(
          v176, v175 + 1,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h", 53),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_1a0b950((__int64)f_.v763, v174, f_.v762 + 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      f_.v762 = 0;
      f_.v763 = nullptr;
    }
    spine_IkConstraintData_IkConstraintData(v172),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v177 = f_.v763;
    f_.v761 = v170 + 2;
    if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
      v178 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v178 + 40LL))(
          v178, (__int64)v177,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
          206),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v179 = spine_Json_getInt(v168, (__int64)"order", 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    spine_ConstraintData_setOrder(v172, v179),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v180 = spine_Json_getBoolean(v168, (__int64)"skin", 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    spine_ConstraintData_setSkinRequired(v172, v180),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v181 = spine_Json_getItem_4bae0(v168, (__int64)"bones"),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v182 = *(int*)(v181 + 28);
    v183 = v181;
    if (*(_QWORD*)(v172 + 72) >= v182) {
      v187 = *(_QWORD*)(v172 + 64);
      *(_QWORD*)(v172 + 64) = v182;
    LABEL_156:
      v188 = f_.v765;
      if (v187 >= v182) {
        goto LABEL_158;
      }
      do {
      LABEL_157:
        *(_QWORD*)(*(_QWORD*)(v172 + 80) + 8 * v187++) = 0;
      } while (v187 < *(_QWORD*)(v172 + 64));
      goto LABEL_158;
    }
    v184 = *(_QWORD*)(v172 + 80);
    *(_QWORD*)(v172 + 72) = v182;
    v185 = GameRoutine_19e10(),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v172 + 80) = (*(__int64 (**)(__int64, __int64, __int64, __int64,
                                            __int64))(*(_QWORD*)v185 + 32LL))(
        v185, v184, 8 * v182,
        (__int64)"/Program/Externals/Spine/include\\spine/Vector.h", 94),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v187 = *(_QWORD*)(v172 + 64);
    v186 = *(_QWORD*)(v172 + 72);
    v182 = *(int*)(v183 + 28);
    *(_QWORD*)(v172 + 64) = v182;
    if (v186 >= v182) {
      goto LABEL_156;
    }
    v203 = *(_QWORD*)(v172 + 80);
    if ((unsigned int)(int)(float)((float)v182 * 0x1.c000000000000p+0f) <= 8) {
      v204 = 8;
    }
    else {
      v204 = (int)(float)((float)v182 * 0x1.c000000000000p+0f);
    }
    *(_QWORD*)(v172 + 72) = v204;
    v205 = GameRoutine_19e10(),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v206 = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
        *(_QWORD*)v205 + 32LL))(
        v205, v203, 8LL * v204,
        (__int64)"/Program/Externals/Spine/include\\spine/Vector.h", 82),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v207 = *(_QWORD*)(v172 + 64);
    *(_QWORD*)(v172 + 80) = v206;
    v188 = f_.v765;
    if (v187 < v207) {
      goto LABEL_157;
    }
  LABEL_158:
    v189 = *(_QWORD*)(v183 + 16);
    if (v189 != 0) {
      break;
    }
  LABEL_170:
    v198 = (const char*)spine_Json_getString(v168, (__int64)"target", 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v199 = v198;
    f_.v764 = 1;
    f_.v761 = v170 + 2;
    if (v198 != nullptr) {
      v200 = GameRoutine_1a09c70(v198),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v762 = v200;
      v201 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v202 = v200 + 1;
      v188 = f_.v765;
      f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)v201 + 24LL))(
          v201, v202,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h", 53),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_1a0b950((__int64)f_.v763, (__int64)v199, f_.v762 + 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      f_.v762 = 0;
      f_.v763 = nullptr;
    }
    v159 = (__int64)v9;
    v171 = f_.v750;
    v208 = spine_SkeletonData_findBone((__int64)v188, (__int64)&f_.v761),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v209 = f_.v763;
    *(_QWORD*)(v172 + 88) = v208;
    f_.v761 = v170 + 2;
    if (v209 != nullptr && (f_.v764 & 1) != 0) {
      v210 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v210 + 40LL))(
          v210, (__int64)v209,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
          206),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(_QWORD*)(v172 + 88) == 0) {
    LABEL_672:
      (*(void (**)(__int64))(*(_QWORD*)f_.v765 + 8LL))((__int64)f_.v765),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      spine_String_String((unsigned __int64)&f_.v761,
                          "Target bone not found: ", 0, 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      spine_String_String((unsigned __int64)&f_.v757, v199, 0, 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v714 = f_.v754;
      v715 = v159;
    LABEL_704:
      spine_SkeletonJson_setError(v714, v715, (__int64)&f_.v761,
                                  (__int64)&f_.v757),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      String_Destructor((__int64)&f_.v757),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      String_Destructor((__int64)&f_.v761),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return nullptr;
    }
    *(float*)(v172 +
              104) =
        spine_Json_getFloat(v168, (__int64)"mix", 0x1.0000000000000p+0f),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(float*)(v172 +
              108) = spine_Json_getFloat(v168, (__int64)"softness", 0x0.0p+0f) *
                     *(float*)(f_.v754 + 48),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((unsigned int)spine_Json_getInt(v168, (__int64)"bendPositive", 1u) !=
        0) {
      v211 = 1;
    }
    else {
      v211 = -1;
    }
    *(_DWORD*)(v172 + 96) = v211;
    *(_BYTE*)(v172 +
              100) =
        (unsigned int)spine_Json_getInt(v168, (__int64)"compress", 0) != 0,
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(v172 +
              101) =
        (unsigned int)spine_Json_getInt(v168, (__int64)"stretch", 0) != 0,
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v212 = spine_Json_getInt(v168, (__int64)"uniform", 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v161 = f_.v765;
    *(_BYTE*)(v172 + 102) = v212 != 0;
    if (*((_QWORD*)v161 + 27) <= v169) {
      goto LABEL_663;
    }
    *(_QWORD*)(*((_QWORD*)v161 + 29) + 8 * v169++) = v172;
    v168 = *(_QWORD*)(v168 + 8);
    if (v168 == 0) {
      goto LABEL_188;
    }
  }
  v190 = 0;
  while (1) {
    v191 = *(const char**)(v189 + 32);
    f_.v764 = 1;
    f_.v761 = v170 + 2;
    if (v191 != nullptr) {
      v192 = GameRoutine_1a09c70(v191),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v762 = v192;
      v193 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v194 = v192 + 1;
      v188 = f_.v765;
      f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)v193 + 24LL))(
          v193, v194,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h", 53),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_1a0b950((__int64)f_.v763, (__int64)v191, f_.v762 + 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v195 = spine_SkeletonData_findBone((__int64)v188, (__int64)&f_.v761),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (*(_QWORD*)(v172 + 64) <= v190) {
        break;
      }
    }
    else {
      f_.v762 = 0;
      f_.v763 = nullptr;
      v195 = spine_SkeletonData_findBone((__int64)v188, (__int64)&f_.v761),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (*(_QWORD*)(v172 + 64) <= v190) {
        break;
      }
    }
    *(_QWORD*)(*(_QWORD*)(v172 + 80) + 8 * v190) = v195;
    v196 = f_.v763;
    f_.v761 = v170 + 2;
    if (f_.v763 != nullptr && (f_.v764 & 1) != 0) {
      v197 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v197 + 40LL))(
          v197, (__int64)v196,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h",
          206),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    spine_SpineObject_Destroy_SpineObject_4e8a0(&f_.v761),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(_QWORD*)(v172 + 64) <= v190) {
      break;
    }
    if (*(_QWORD*)(*(_QWORD*)(v172 + 80) + 8 * v190) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v188 + 8LL))((__int64)v188),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v640 = v170 + 2;
      f_.v764 = 1;
      f_.v761 = v170 + 2;
      f_.v762 = 19;
      v641 = GameRoutine_19e10(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      f_.v763 = (char*)(*(__int64 (**)(__int64, __int64, __int64, __int64))(
          *(_QWORD*)v641 + 24LL))(
          v641, 20,
          (__int64)"/Program/Externals/Spine/include\\spine/SpineString.h", 53),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v631 = f_.v763;
      strcpy(f_.v763, "IK bone not found: ");
      f_.v757 = v170 + 2;
      f_.v760 = 1;
      v642 = *(const char**)(v189 + 32);
      if (v642 == nullptr) {
        goto LABEL_622;
      }
      goto LABEL_610;
    }
    v189 = *(_QWORD*)(v189 + 8);
    ++v190;
    if (v189 == 0) {
      goto LABEL_170;
    }
  }
LABEL_663:
  __assert_fail(),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_664:
  v706 = spine_Json_getItem_4bae0(f_.v748, (__int64)"animations"),
  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v707 = f_.v765;
  if (v706 != 0) {
    v708 = v706;
    GameRoutine_44dd0((__int64)(f_.v765 + 44), *(int*)(v706 + 28)),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v709 = *(int*)(v708 + 28);
    f_.v761 = nullptr;
    GameRoutine_44e40((_QWORD*)v707 + 22, v709, (__int64*)&f_.v761),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v710 = *(_QWORD*)(v708 + 16);
    if (v710 != 0) {
      v711 = 0;
      while (1) {
        v712 = spine_SkeletonJson_readAnimation(f_.v754, v710, v707),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v712 == 0) {
          break;
        }
        if (*((_QWORD*)v707 + 23) <= v711) {
          goto LABEL_663;
        }
        *(_QWORD*)(*((_QWORD*)v707 + 25) + 8 * v711++) = v712;
        v710 = *(_QWORD*)(v710 + 8);
        if (v710 == 0) {
          goto LABEL_670;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v707 + 8LL))((__int64)v707),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64))(*(_QWORD*)f_.v748 + 8LL))(f_.v748),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return nullptr;
    }
  }
LABEL_670:
  (*(void (**)(__int64))(*(_QWORD*)f_.v748 + 8LL))(f_.v748),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v707;
}

#pragma GCC visibility pop
