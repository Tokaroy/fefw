#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1148340(__int64, unsigned __int8*, __int64**);
_QWORD* GameRoutine_1148a20(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_119bb20(__int64, unsigned __int8*, __int64**);
_QWORD* GameRoutine_119c210(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_1209d00(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_12a0ba0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_6680e0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_hub_efca60(PSEUDO_X8, __int64, _QWORD*,
                                                signed __int64);
__int64* game_820d50(int);
__int64* game_UnitPool_Get(_BYTE*);
__int64 AIThink_121a250();
__int64 AIThink_121b950();
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 GameRoutine_11985f0();
__int64 GameRoutine_11f2b00(__int64, __int64, unsigned int);
__int64 GameRoutine_16ae780(__int64, __int64, __int16*);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_88cee0(__int64);
__int64 Hub_1197e80();
__int64 Hub_11982a0();
__int64 Hub_11982c0();
__int64 Hub_11988e0();
__int64 Hub_1199260();
__int64 Hub_1199510();
__int64 Hub_1199600();
__int64 Hub_1199720();
__int64 Hub_1199760();
__int64 Hub_11998d0();
__int64 Hub_1199bc0();
__int64 Hub_1199d20(__int64, __int64*);
__int64 MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
__int64 game_e5d200(__int64, __int64);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64, __int64);
__int64 game_talk_Hub_ChangeCamera();
__int64 game_talk_Hub_DisableLookAt();
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool AIThink_121a340(_QWORD*, __int64);
bool GameRoutine_822320(unsigned int);
bool game_AIThink_GetAttackResult(int*, _QWORD*);
extern _QWORD GameData_1af2765[2];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_216f628;
extern _UNKNOWN GameData_1ac4744;
extern _UNKNOWN GameData_1adfa87;
extern __int64 (*GameData_2012b30[])();
extern __int64 (*GameData_2015050[])();
extern __int64 (*GameData_20189c8[])();
extern __int64 (*GameData_2018a58[])();
extern __int64 (*GameData_2020b98[])();
extern __int64 (*GameData_2020c18[])();
extern __int64 (*GameData_20e4b20[])();
extern __int64 (*GameData_20e4ba0[])();
extern __int64 (*GameData_20f73c0[])();
extern __int64 (*GameData_20f7440[])();
extern __int64 (*GameData_21302a0[78])();
extern __int64 (*GameData_21302b0[76])();
extern __int64 (*GameData_21302b8[75])();
extern __int64 (*GameData_21302c8[73])();
extern __int64 (*GameData_21302d8[71])();
extern __int64 (*GameData_2130300[66])();
extern __int64 (*GameData_2130310[64])();
extern __int64 (*GameData_2130328[61])();
extern __int64 (*GameData_2130330[60])();
extern __int64 (*GameData_2130380[50])();
extern __int64 (*GameData_2130388[49])();
extern __int64 (*GameData_21303d8[39])();
extern __int64 (*GameData_21303f0[36])();
extern __int64 (*GameData_21303f8[35])();
extern __int64 (*GameData_2130408[33])();
extern __int64 (*GameData_2130418[31])();
extern __int64 (*GameData_2130428[29])();
extern __int64 (*GameData_2130438[27])();
extern __int64 (*GameData_2130448[25])();
extern __int64 (*GameData_2130458[23])();
extern __int64 (*GameData_2130468[21])();
extern __int64 (*GameData_2130478[19])();
extern __int64 (*GameData_2130480[18])();
extern __int64 (*GameData_2130488[17])();
extern __int64 (*GameData_21304a8[13])();
extern __int64 (*GameData_21304f0[4])();
extern __int64 (*GameData_21304f8[3])();
extern __int64 (*GameData_2130500[2])();
extern __int64 (*GameData_2130508)();
extern __int64 (*game_evt_demo_11542a0_ptr[81])();
extern __int64 (*game_evt_demo_1154340_ptr[80])();
extern __int64 (*game_evt_demo_11545e0_ptr[79])();
extern __int64 (*game_evt_demo_11547e0_ptr[77])();
extern __int64 (*game_evt_demo_1155290_ptr[74])();
extern __int64 (*game_evt_demo_11553e0_ptr[72])();
extern __int64 (*game_evt_demo_1155700_ptr[70])();
extern __int64 (*game_evt_demo_1155ed0_ptr[69])();
extern __int64 (*game_evt_demo_1156100_ptr[68])();
extern __int64 (*game_evt_demo_1156480_ptr[67])();
extern __int64 (*game_evt_demo_1156900_ptr[65])();
extern __int64 (*game_evt_demo_11575a0_ptr[63])();
extern __int64 (*game_evt_demo_1157880_ptr[62])();
extern __int64 (*game_evt_demo_1157fc0_ptr[59])();
extern __int64 (*game_evt_demo_1158420_ptr[58])();
extern __int64 (*game_evt_demo_1158880_ptr[57])();
extern __int64 (*game_evt_demo_11590c0_ptr[56])();
extern __int64 (*game_evt_demo_1159220_ptr[55])();
extern __int64 (*game_evt_demo_11593e0_ptr[54])();
extern __int64 (*game_evt_demo_11597a0_ptr[53])();
extern __int64 (*game_evt_demo_1159de0_ptr[52])();
extern __int64 (*game_evt_demo_115a360_ptr[51])();
extern __int64 (*game_evt_demo_115aa00_ptr[48])();
extern __int64 (*game_evt_demo_115ae40_ptr[47])();
extern __int64 (*game_evt_demo_115b020_ptr[46])();
extern __int64 (*game_evt_demo_115b360_ptr[45])();
extern __int64 (*game_evt_demo_115b620_ptr[44])();
extern __int64 (*game_evt_demo_115b820_ptr[43])();
extern __int64 (*game_evt_demo_115b9e0_ptr[42])();
extern __int64 (*game_evt_demo_115bba0_ptr[41])();
extern __int64 (*game_evt_demo_115bd80_ptr[40])();
extern __int64 (*game_evt_demo_115c1e0_ptr[38])();
extern __int64 (*game_evt_demo_115c720_ptr[37])();
extern __int64 (*game_evt_demo_115cb40_ptr[34])();
extern __int64 (*game_evt_demo_115cda0_ptr[32])();
extern __int64 (*game_evt_demo_115d0b0_ptr[30])();
extern __int64 (*game_evt_demo_115d330_ptr[26])();
extern __int64 (*game_evt_demo_115db10_ptr[24])();
extern __int64 (*game_evt_demo_115de00_ptr[22])();
extern __int64 (*game_evt_demo_115e3b0_ptr[20])();
extern __int64 (*game_evt_demo_115eb00_ptr[28])();
extern __int64 (*game_evt_demo_115ee20_ptr[16])();
extern __int64 (*game_evt_demo_115eed0_ptr[15])();
extern __int64 (*game_evt_demo_115ef80_ptr[14])();
extern __int64 (*game_evt_demo_115f1b0_ptr[12])();
extern __int64 (*game_evt_demo_115f320_ptr[11])();
extern __int64 (*game_evt_demo_115f430_ptr[10])();
extern __int64 (*game_evt_demo_115f570_ptr[9])();
extern __int64 (*game_evt_demo_115f6b0_ptr[8])();
extern __int64 (*game_evt_demo_115f860_ptr[7])();
extern __int64 (*game_evt_demo_115fa20_ptr[6])();
extern __int64 (*game_evt_demo_115fad0_ptr[5])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d2b8;
extern __int64* GameData_2130960;
extern __int64 GameData_212efa8[4];
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 GameData_22416c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern char GameData_1a9f09e;
long double GameRoutine_1a09ff0(double, double);
long double GameRoutine_1a0a000(long double, long double);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void AIDeploy_1274f90(_QWORD*, __int64, unsigned int, _DWORD*);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_e5d3b0(__int64 a1, __int64 a2, int8x16_t* a3, __int64 a4);
void game_1143620(_QWORD* a1);
void game_1197100(_QWORD* a1);
__int64 game_121b000(__int64* a1, int a2, unsigned __int64 a3,
                     unsigned __int64 a4);
_QWORD* game_129afa0(_QWORD* a1);
_QWORD* game_129b020(_QWORD* a1);
__int64 game_1847120(__int64 a1);
__int64 game_1856b10(__int64 a1);
__int64 game_199bc30(__int64 a1);

void game_e5d3b0(__int64 a1, __int64 a2, int8x16_t* a3, __int64 a4)
{
  __int64 v5;
  _BYTE* v7;
  __int64 v8;
  float v9;
  double v10;
  long double v11;
  float v12;
  float v13;
  long double v14;
  long double v15;
  long double v16;
  float v17;
  long double v18;
  float v19;
  float v20;
  unsigned __int64 v21;
  __int128 v22;
  __int128 v23;
  __int64 v24;
  float v25;
  struct {
    int8x16_t v26;
    __int64 v27;
    char gap40_[8];
    __int128 v28;
    __int128 v29;
    int v30;
  } v26_;

  v5 = *(_QWORD*)(a2 + 56);
  (void)*(volatile __int64*)(*(_QWORD*)(a2 + 48) + 8);
  if ((*(_BYTE*)a4 & 1) != 0) {
    v7 = *(_BYTE**)(a4 + 16);
  }
  else {
    v7 = (_BYTE*)(a4 + 1);
  }
  v8 = CharacterBuilder_1084a50(v5, v7);
  Quat_624bc0((void*)(&v26_.v26), v8);
  v9 = vmuls_lane_f32(LANES128(v26_.v26).n128_f32[1], v26_.v26, 2);
  v10 =
      vmuls_lane_f32(LANES128(v26_.v26).n128_f32[1],
                     COERCE_AS(float32x2_t, LANES128(v26_.v26).n128_u64[0]), 1);
  v11 = GameRoutine_1a09ff0(
      (float)(v9 + (float)(LANES128(v26_.v26).n128_f32[0] *
                           LANES128(v26_.v26).n128_f32[3])) +
          (float)(v9 + (float)(LANES128(v26_.v26).n128_f32[0] *
                               LANES128(v26_.v26).n128_f32[3])),
      (LANES128_OF(vmulq_f32(v26_.v26, v26_.v26)).n128_f32[0] + v10) *
              -0x1.0000000000000p+1 +
          0x1.0000000000000p+0);
  v12 = *(double*)&v11;
  *((_QWORD*)&v15 + 1) = LANES128(v26_.v26).n128_u64[1];
  v13 =
      vmuls_lane_f32(-LANES128(v26_.v26).n128_f32[0], v26_.v26, 2) +
      (float)(LANES128(v26_.v26).n128_f32[1] * LANES128(v26_.v26).n128_f32[3]);
  *(_QWORD*)&v14 = -0x1.0000000000000p+0;
  *(double*)&v15 = v13 + v13;
  if (*(double*)&v15 > 0x1.0000000000000p+0) {
    *(double*)&v15 = 0x1.0000000000000p+0;
  }
  if (*(double*)&v15 < -0x1.0000000000000p+0) {
    *(double*)&v15 = -0x1.0000000000000p+0;
  }
  v16 = GameRoutine_1a0a000(v15, v14);
  v17 = *(double*)&v16;
  *(float*)&v16 =
      vmuls_lane_f32(LANES128(v26_.v26).n128_f32[0],
                     COERCE_AS(float32x2_t, LANES128(v26_.v26).n128_u64[0]), 1);
  v18 = GameRoutine_1a09ff0(
      (float)(*(float*)&v16 + (float)(LANES128(v26_.v26).n128_f32[2] *
                                      LANES128(v26_.v26).n128_f32[3])) +
          (float)(*(float*)&v16 + (float)(LANES128(v26_.v26).n128_f32[2] *
                                          LANES128(v26_.v26).n128_f32[3])),
      (v10 + vmuls_lane_f32(LANES128(v26_.v26).n128_f32[2], v26_.v26, 2)) *
              -0x1.0000000000000p+1 +
          0x1.0000000000000p+0);
  v19 = *(double*)&v18;
  v26_.v26 = (__typeof__(v26_.v26)){0};
  v26_.v27 = 0;
  v26_.v28 = (__typeof__(v26_.v28)){0};
  v26_.v29 = (__typeof__(v26_.v29)){0};
  v26_.v30 = 1065353216;
  v20 = v19 * 0x1.ca5dc20000000p+5f;
  if (&v26_.v26 != a3) {
    if ((LANES128(*(a3)).n128_u8[0] & 1) != 0) {
      v25 = v19 * 0x1.ca5dc20000000p+5f;
      GameRoutine_64df20(&v26_.v26, LANES128(a3[1]).n128_i64[0],
                         LANES128(*(a3)).n128_u64[1]);
      v20 = v25;
    }
    else {
      v21 = LANES128(*(a3)).n128_u64[1];
      LANES128(v26_.v26).n128_u64[0] = LANES128(*(a3)).n128_u64[0];
      LANES128(v26_.v26).n128_u64[1] = v21;
      v26_.v27 = LANES128(a3[1]).n128_i64[0];
    }
  }
  *(_QWORD*)&v22 = *(_QWORD*)(v8 + 48);
  *(_QWORD*)&v23 =
      __PAIR64__(COERCE_UNSIGNED_INT((float)(v17 * 0x1.ca5dc20000000p+5f)),
                 COERCE_UNSIGNED_INT((float)(v12 * 0x1.ca5dc20000000p+5f)));
  *((_QWORD*)&v22 + 1) = (unsigned int)*(_QWORD*)(v8 + 56);
  *((_QWORD*)&v23 + 1) = LODWORD(v20);
  v26_.v28 = v22;
  v26_.v29 = v23;
  game_e5d200(a1, (__int64)&v26_.v26);
  if ((LANES128(v26_.v26).n128_u8[0] & 1) != 0 && v26_.v27 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  v26_.v27);
  }
}

void game_1143620(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  void* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  _QWORD* v93;
  __int64 v94;
  __int64 v95;
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  __int64 v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  _QWORD* v110;
  __int64 v111;
  __int64 v112;
  _QWORD* v113;
  __int64 v114;
  __int64 v115;
  _QWORD* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  _QWORD* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  _QWORD* v129;
  __int64 v130;
  _QWORD* v131;
  __int64 v132;
  __int64 v133;
  _QWORD* v134;
  __int64 v135;
  __int64 v136;
  _QWORD* v137;
  __int64 v138;
  __int64 v139;
  _QWORD* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  _QWORD* v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  _QWORD* v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  _QWORD* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  _QWORD* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  _QWORD* v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  _QWORD* v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  _QWORD* v169;
  __int64 v170;
  __int64 v171;
  _QWORD* v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  _QWORD* v177;
  __int64 v178;
  _QWORD* v179;
  __int64 v180;
  __int64 v181;
  _QWORD* v182;
  __int64 v183;
  __int64 v184;
  _QWORD* v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  _QWORD* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  _QWORD* v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  _QWORD* v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  _QWORD* v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  _QWORD* v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  _QWORD* v210;
  __int64 v211;
  _QWORD* v212;
  __int64 v213;
  __int64 v214;
  _QWORD* v215;
  __int64 v216;
  __int64 v217;
  _QWORD* v218;
  __int64 v219;
  __int64 v220;
  _QWORD* v221;
  __int64 v222;
  __int64 v223;
  _QWORD* v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  _QWORD* v229;
  __int64 v230;
  _QWORD* v231;
  __int64 v232;
  __int64 v233;
  _QWORD* v234;
  __int64 v235;
  __int64 v236;
  _QWORD* v237;
  __int64 v238;
  __int64 v239;
  _QWORD* v240;
  __int64 v241;
  __int64 v242;
  _QWORD* v243;
  __int64 v244;
  __int64 v245;
  _QWORD* v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  _QWORD* v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  _QWORD* v255;
  __int64 v256;
  __int64 v257;
  _QWORD* v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  _QWORD* v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  _QWORD* v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  _QWORD* v271;
  __int64 v272;
  _QWORD* v273;
  __int64 v274;
  __int64 v275;
  _QWORD* v276;
  __int64 v277;
  __int64 v278;
  _QWORD* v279;
  __int64 v280;
  __int64 v281;
  _QWORD* v282;
  __int64 v283;
  __int64 v284;
  _QWORD* v285;
  __int64 v286;
  __int64 v287;
  _QWORD* v288;
  __int64 v289;
  __int64 v290;
  _QWORD* v291;
  __int64 v292;
  __int64 v293;
  _QWORD* v294;
  __int64 v295;
  __int64 v296;
  _QWORD* v297;
  __int64 v298;
  __int64 v299;
  _QWORD* v300;
  __int64 v301;
  __int64 v302;
  _QWORD* v303;
  __int64 v304;
  __int64 v305;
  _QWORD* v306;
  __int64 v307;
  __int64 v308;
  struct {
    char gap0_[8];
    __int64 v309[3];
    __int64* v310[4];
    __int64** v311;
  } f_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (a1[4] != 0) {
    v3 = (_QWORD*)a1[3];
    while (v3 != nullptr) {
      v5 = (__int64)v3;
      v3 = (_QWORD*)*v3;
      v6 = *(_QWORD**)(v5 + 80);
      if (v6 == (_QWORD*)(v5 + 48)) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_13;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_13:
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        v8 = *(_QWORD*)(v5 + 32);
        if (v8 != 0) {
          if (*(_QWORD*)(*v2 + 200) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*v2 + v9, v8);
        }
      }
      if (*(_QWORD*)(*v2 + 200) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v4, v5);
    }
    v10 = a1[2];
    a1[3] = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(a1[1] + 8 * v12) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 8) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 16) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 24) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 32) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 40) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 48) = 0;
          v14 = a1[1] + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(a1[1] + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    a1[4] = 0;
  }
  if (a1[9] != 0) {
    v16 = (_QWORD*)a1[8];
    while (v16 != nullptr) {
      v18 = (__int64)v16;
      v16 = (_QWORD*)*v16;
      v19 = *(_QWORD**)(v18 + 80);
      if (v19 == (_QWORD*)(v18 + 48)) {
        v20 = 32;
      }
      else {
        if (v19 == nullptr) {
          goto LABEL_40;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
    LABEL_40:
      if ((*(_BYTE*)(v18 + 16) & 1) != 0) {
        v21 = *(_QWORD*)(v18 + 32);
        if (v21 != 0) {
          if (*(_QWORD*)(*v2 + 200) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*v2 + v22, v21);
        }
      }
      if (*(_QWORD*)(*v2 + 200) != 0) {
        v17 = 128;
      }
      else {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v17, v18);
    }
    v23 = a1[7];
    a1[8] = 0;
    if (v23 != 0) {
      v24 = v23 & 7;
      if (v23 >= 8) {
        v26 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = 0;
        do {
          *(_QWORD*)(a1[6] + 8 * v25) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 8) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 16) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 24) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 32) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 40) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 48) = 0;
          v27 = a1[6] + 8 * v25;
          v25 += 8;
          *(_QWORD*)(v27 + 56) = 0;
        } while (v26 != v25);
      }
      else {
        v25 = 0;
      }
      if (v24 != 0) {
        v28 = 8 * v25;
        do {
          --v24;
          *(_QWORD*)(a1[6] + v28) = 0;
          v28 += 8;
        } while (v24 != 0);
      }
    }
    a1[9] = 0;
  }
  HIBYTE(f_.v309[0]) = 0;
  LOBYTE(f_.v309[0]) = 12;
  *(_DWORD*)((char*)f_.v309 + 1) = -475167773;
  *(_WORD*)((char*)f_.v309 + 5) = -20350;
  f_.v310[0] = f_.v309;
  v29 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_11542a0_ptr[0];
  GameRoutine_1148a20(f_.v310, v29 + 6);
  if (f_.v311 == f_.v310) {
    v30 = 4;
    goto LABEL_59;
  }
  if (f_.v311 != nullptr) {
    v30 = 5;
  LABEL_59:
    ((void (*)(__int64))(*f_.v311)[v30])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v31 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v31, f_.v309[2]);
  }
  BYTE5(f_.v309[1]) = 0;
  LOBYTE(f_.v309[0]) = 24;
  *(_DWORD*)((char*)&f_.v309[1] + 1) = -2004622428;
  *(__int64*)((char*)f_.v309 + 1) = 0x82E3A782E3A682E3LL;
  f_.v310[0] = f_.v309;
  v32 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1154340_ptr[0];
  GameRoutine_1148a20(f_.v310, v32 + 6);
  if (f_.v311 == f_.v310) {
    v33 = 4;
    goto LABEL_69;
  }
  if (f_.v311 != nullptr) {
    v33 = 5;
  LABEL_69:
    ((void (*)(__int64))(*f_.v311)[v33])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v34 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v34, f_.v309[2]);
  }
  v35 = 4;
  v36 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v36 + 28) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 28;
  f_.v309[2] = v36;
  *(_DWORD*)(v36 + 24) = -2004622428;
  *(_QWORD*)v36 = 0xE353B48FE6AF94E6LL;
  *(_QWORD*)(v36 + 8) = 0x8983E3B383E3A882LL;
  *(_QWORD*)(v36 + 16) = 0x82E3A782E3A682E3LL;
  f_.v310[0] = f_.v309;
  v37 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_11545e0_ptr[0];
  GameRoutine_1148a20(f_.v310, v37 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_78;
  }
  if (f_.v311 != nullptr) {
    v35 = 5;
  LABEL_78:
    ((void (*)(__int64))(*f_.v311)[v35])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v38 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v38, f_.v309[2]);
  }
  BYTE5(f_.v309[1]) = 0;
  LOBYTE(f_.v309[0]) = 24;
  *(_DWORD*)((char*)&f_.v309[1] + 1) = -1382619475;
  *(__int64*)((char*)f_.v309 + 1) = 0xB8E4B1A9E89ABCE4LL;
  f_.v310[0] = f_.v309;
  v39 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21302a0[0];
  GameRoutine_1148a20(f_.v310, v39 + 6);
  if (f_.v311 == f_.v310) {
    v40 = 4;
    goto LABEL_88;
  }
  if (f_.v311 != nullptr) {
    v40 = 5;
  LABEL_88:
    ((void (*)(__int64))(*f_.v311)[v40])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v41 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v41, f_.v309[2]);
  }
  v42 = GameData_216f628;
  v43 = GameRoutine_1a09c70((const char*)GameData_216f628);
  if (v43 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v44 = v43;
  if (v43 >= 0x17) {
    if ((v43 | 7) == 0x17) {
      v46 = 26;
    }
    else {
      v46 = (v43 | 7) + 1;
    }
    v45 = (char*)fw_memory_HeapManager_Allocate(*v2, v46, 16, 0);
    f_.v309[1] = v44;
    f_.v309[2] = (__int64)v45;
    f_.v309[0] = v46 | 1;
    goto LABEL_102;
  }
  LOBYTE(f_.v309[0]) = 2 * v43;
  v45 = (char*)f_.v309 + 1;
  if (v43 != 0) {
  LABEL_102:
    GameRoutine_1a0b940((__int64)v45, (__int64)v42, v44);
  }
  v45[v44] = 0;
  f_.v310[0] = f_.v309;
  v47 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_11547e0_ptr[0];
  GameRoutine_1148a20(f_.v310, v47 + 6);
  if (f_.v311 == f_.v310) {
    v48 = 4;
    goto LABEL_107;
  }
  if (f_.v311 != nullptr) {
    v48 = 5;
  LABEL_107:
    ((void (*)(__int64))(*f_.v311)[v48])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v49 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v49, f_.v309[2]);
  }
  BYTE3(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 36;
  *(_WORD*)((char*)&f_.v309[2] + 1) = -16485;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE68788E5A89BE997LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E38383E39E83E3LL;
  f_.v310[0] = f_.v309;
  v50 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21302b0[0];
  GameRoutine_1148a20(f_.v310, v50 + 6);
  if (f_.v311 == f_.v310) {
    v51 = 4;
    goto LABEL_117;
  }
  if (f_.v311 != nullptr) {
    v51 = 5;
  LABEL_117:
    ((void (*)(__int64))(*f_.v311)[v51])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v52 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v52, f_.v309[2]);
  }
  BYTE3(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 36;
  *(_WORD*)((char*)&f_.v309[2] + 1) = -19581;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE3A482E38983E3BCLL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A782E39583E3LL;
  f_.v310[0] = f_.v309;
  v53 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21302b8[0];
  GameRoutine_1148a20(f_.v310, v53 + 6);
  if (f_.v311 == f_.v310) {
    v54 = 4;
    goto LABEL_127;
  }
  if (f_.v311 != nullptr) {
    v54 = 5;
  LABEL_127:
    ((void (*)(__int64))(*f_.v311)[v54])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v55 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v55, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE3A282E38983E3BCLL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0x8883E3A682E3A282LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A782E39583E3LL;
  f_.v310[0] = f_.v309;
  v56 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1155290_ptr[0];
  GameRoutine_1148a20(f_.v310, v56 + 6);
  if (f_.v311 == f_.v310) {
    v57 = 4;
    goto LABEL_137;
  }
  if (f_.v311 != nullptr) {
    v57 = 5;
  LABEL_137:
    ((void (*)(__int64))(*f_.v311)[v57])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v58 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v58, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE38983E3BC83E3A7LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0xB383E3A482E38983LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x82E39583E3BD99E7LL;
  f_.v310[0] = f_.v309;
  v59 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21302c8[0];
  GameRoutine_1148a20(f_.v310, v59 + 6);
  if (f_.v311 == f_.v310) {
    v60 = 4;
    goto LABEL_147;
  }
  if (f_.v311 != nullptr) {
    v60 = 5;
  LABEL_147:
    ((void (*)(__int64))(*f_.v311)[v60])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v61 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v61, f_.v309[2]);
  }
  v62 = 4;
  v63 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v63 + 24) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 24;
  f_.v309[2] = v63;
  *(_QWORD*)v63 = 0x82E39583E3BD99E7LL;
  *(_QWORD*)(v63 + 8) = 0xE38983E3BC83E3A7LL;
  *(_QWORD*)(v63 + 16) = 0x8883E3A682E3A282LL;
  f_.v310[0] = f_.v309;
  v64 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_11553e0_ptr[0];
  GameRoutine_1148a20(f_.v310, v64 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_156;
  }
  if (f_.v311 != nullptr) {
    v62 = 5;
  LABEL_156:
    ((void (*)(__int64))(*f_.v311)[v62])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v65 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v65, f_.v309[2]);
  }
  v66 = fw_memory_HeapManager_Allocate(*v2, 40, 16, 0);
  *(_BYTE*)(v66 + 37) = 0;
  f_.v309[0] = 41;
  f_.v309[1] = 37;
  f_.v309[2] = v66;
  *(_QWORD*)(v66 + 16) = 0x83E3A782E39583E3LL;
  *(_QWORD*)(v66 + 24) = 0xE3A282E38983E3BCLL;
  *(_QWORD*)(v66 + 29) = 0x8883E3A682E3A282LL;
  *(_QWORD*)v66 = 0xE353B48FE6AF94E6LL;
  *(_QWORD*)(v66 + 8) = 0x8983E3B383E3A882LL;
  f_.v310[0] = f_.v309;
  v67 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21302d8[0];
  GameRoutine_1148a20(f_.v310, v67 + 6);
  if (f_.v311 == f_.v310) {
    v68 = 4;
    goto LABEL_166;
  }
  if (f_.v311 != nullptr) {
    v68 = 5;
  LABEL_166:
    ((void (*)(__int64))(*f_.v311)[v68])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v69 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v69, f_.v309[2]);
  }
  LOBYTE(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 30;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v309[1] = 0xAEBDE78D85E9A983LL;
  f_.v310[0] = f_.v309;
  v70 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1155700_ptr[0];
  GameRoutine_1148a20(f_.v310, v70 + 6);
  if (f_.v311 == f_.v310) {
    v71 = 4;
    goto LABEL_176;
  }
  if (f_.v311 != nullptr) {
    v71 = 5;
  LABEL_176:
    ((void (*)(__int64))(*f_.v311)[v71])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v72 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v72 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v72, f_.v309[2]);
  }
  BYTE3(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 36;
  *(_WORD*)((char*)&f_.v309[2] + 1) = -20803;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE78D85E98D86E5A9LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v310[0] = f_.v309;
  v73 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1155ed0_ptr[0];
  GameRoutine_1148a20(f_.v310, v73 + 6);
  if (f_.v311 == f_.v310) {
    v74 = 4;
    goto LABEL_186;
  }
  if (f_.v311 != nullptr) {
    v74 = 5;
  LABEL_186:
    ((void (*)(__int64))(*f_.v311)[v74])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v75 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v75, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE8AEBDE78D85E9A9LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0xB495E6BFAAE8AEBDLL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v310[0] = f_.v309;
  v76 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1156100_ptr[0];
  GameRoutine_1148a20(f_.v310, v76 + 6);
  if (f_.v311 == f_.v310) {
    v77 = 4;
    goto LABEL_196;
  }
  if (f_.v311 != nullptr) {
    v77 = 5;
  LABEL_196:
    ((void (*)(__int64))(*f_.v311)[v77])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v78 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v78, f_.v309[2]);
  }
  LOBYTE(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 30;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v309[1] = 0xA499E98A89E5A983LL;
  f_.v310[0] = f_.v309;
  v79 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1156480_ptr[0];
  GameRoutine_1148a20(f_.v310, v79 + 6);
  if (f_.v311 == f_.v310) {
    v80 = 4;
    goto LABEL_206;
  }
  if (f_.v311 != nullptr) {
    v80 = 5;
  LABEL_206:
    ((void (*)(__int64))(*f_.v311)[v80])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v81 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v81, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE5BAA4E7A8A1E8A9LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0xBF9BE68788E5BAA4LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v310[0] = f_.v309;
  v82 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130300[0];
  GameRoutine_1148a20(f_.v310, v82 + 6);
  if (f_.v311 == f_.v310) {
    v83 = 4;
    goto LABEL_216;
  }
  if (f_.v311 != nullptr) {
    v83 = 5;
  LABEL_216:
    ((void (*)(__int64))(*f_.v311)[v83])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v84 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v84, f_.v309[2]);
  }
  v85 = 4;
  v86 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v86 + 30) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 30;
  f_.v309[2] = v86;
  *(_QWORD*)v86 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v86 + 8) = 0xE3BC83E3A283E3A9LL;
  *(_QWORD*)(v86 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v86 + 22) = 0x9F94E78D86E5B383LL;
  f_.v310[0] = f_.v309;
  v87 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1156900_ptr[0];
  GameRoutine_1148a20(f_.v310, v87 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_225;
  }
  if (f_.v311 != nullptr) {
    v85 = 5;
  LABEL_225:
    ((void (*)(__int64))(*f_.v311)[v85])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v88 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v88, f_.v309[2]);
  }
  v89 = 4;
  v90 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v90 + 30) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 30;
  f_.v309[2] = v90;
  *(_QWORD*)v90 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v90 + 8) = 0xE3BC83E3A283E3A9LL;
  *(_QWORD*)(v90 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v90 + 22) = 0xA181E385BEE5B383LL;
  f_.v310[0] = f_.v309;
  v91 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130310[0];
  GameRoutine_1148a20(f_.v310, v91 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_234;
  }
  if (f_.v311 != nullptr) {
    v89 = 5;
  LABEL_234:
    ((void (*)(__int64))(*f_.v311)[v89])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v92 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v92 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v92, f_.v309[2]);
  }
  LOBYTE(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 30;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v309[1] = 0x9AB7E796A6E8A983LL;
  f_.v310[0] = f_.v309;
  v93 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_11575a0_ptr[0];
  GameRoutine_1148a20(f_.v310, v93 + 6);
  if (f_.v311 == f_.v310) {
    v94 = 4;
    goto LABEL_244;
  }
  if (f_.v311 != nullptr) {
    v94 = 5;
  LABEL_244:
    ((void (*)(__int64))(*f_.v311)[v94])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v95 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v95 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v95, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE89AB7E796A6E8A9LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0xB0B4E7B3A9E89AB7LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v310[0] = f_.v309;
  v96 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                            f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1157880_ptr[0];
  GameRoutine_1148a20(f_.v310, v96 + 6);
  if (f_.v311 == f_.v310) {
    v97 = 4;
    goto LABEL_254;
  }
  if (f_.v311 != nullptr) {
    v97 = 5;
  LABEL_254:
    ((void (*)(__int64))(*f_.v311)[v97])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v98 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v98 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v98, f_.v309[2]);
  }
  v99 = 4;
  v100 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v100 + 30) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 30;
  f_.v309[2] = v100;
  *(_QWORD*)v100 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v100 + 8) = 0xE39AB7E796A6E8A9LL;
  *(_QWORD*)(v100 + 16) = 0x8383E3BB82E3AA83LL;
  *(_QWORD*)(v100 + 22) = 0xA3ADE68883E38383LL;
  f_.v310[0] = f_.v309;
  v101 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130328[0];
  GameRoutine_1148a20(f_.v310, v101 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_263;
  }
  if (f_.v311 != nullptr) {
    v99 = 5;
  LABEL_263:
    ((void (*)(__int64))(*f_.v311)[v99])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v102 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v102 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v102, f_.v309[2]);
  }
  v103 = 4;
  v104 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v104 + 27) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 27;
  f_.v309[2] = v104;
  *(_DWORD*)(v104 + 23) = -2004622461;
  *(_QWORD*)v104 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v104 + 8) = 0xE39AB7E796A6E8A9LL;
  *(_QWORD*)(v104 + 16) = 0x8383E3BB82E3AA83LL;
  f_.v310[0] = f_.v309;
  v105 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130330[0];
  GameRoutine_1148a20(f_.v310, v105 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_272;
  }
  if (f_.v311 != nullptr) {
    v103 = 5;
  LABEL_272:
    ((void (*)(__int64))(*f_.v311)[v103])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v106 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v106 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v106, f_.v309[2]);
  }
  LOBYTE(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 30;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v309[1] = 0xA2BBE89E9BE5A983LL;
  f_.v310[0] = f_.v309;
  v107 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1157fc0_ptr[0];
  GameRoutine_1148a20(f_.v310, v107 + 6);
  if (f_.v311 == f_.v310) {
    v108 = 4;
    goto LABEL_282;
  }
  if (f_.v311 != nullptr) {
    v108 = 5;
  LABEL_282:
    ((void (*)(__int64))(*f_.v311)[v108])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v109 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v109, f_.v309[2]);
  }
  BYTE3(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 36;
  *(_WORD*)((char*)&f_.v309[2] + 1) = -19301;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE7A2BBE89E9BE5A9LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v310[0] = f_.v309;
  v110 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1158420_ptr[0];
  GameRoutine_1148a20(f_.v310, v110 + 6);
  if (f_.v311 == f_.v310) {
    v111 = 4;
    goto LABEL_292;
  }
  if (f_.v311 != nullptr) {
    v111 = 5;
  LABEL_292:
    ((void (*)(__int64))(*f_.v311)[v111])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v112 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v112 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v112, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE59982E585A3E8A9LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0xB49BE689A4E59982LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v310[0] = f_.v309;
  v113 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1158880_ptr[0];
  GameRoutine_1148a20(f_.v310, v113 + 6);
  if (f_.v311 == f_.v310) {
    v114 = 4;
    goto LABEL_302;
  }
  if (f_.v311 != nullptr) {
    v114 = 5;
  LABEL_302:
    ((void (*)(__int64))(*f_.v311)[v114])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v115 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v115 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v115, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE89982E585A3E8A9LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0xA499E9A3A7E89982LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v310[0] = f_.v309;
  v116 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_11590c0_ptr[0];
  GameRoutine_1148a20(f_.v310, v116 + 6);
  if (f_.v311 == f_.v310) {
    v117 = 4;
    goto LABEL_312;
  }
  if (f_.v311 != nullptr) {
    v117 = 5;
  LABEL_312:
    ((void (*)(__int64))(*f_.v311)[v117])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v118 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v118 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v118, f_.v309[2]);
  }
  v119 = 4;
  v120 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v120 + 27) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 27;
  f_.v309[2] = v120;
  *(_DWORD*)(v120 + 23) = -1080301945;
  *(_QWORD*)v120 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v120 + 8) = 0xE89982E585A3E8A9LL;
  *(_QWORD*)(v120 + 16) = 0x8788E5BAA4E7A8A1LL;
  f_.v310[0] = f_.v309;
  v121 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1159220_ptr[0];
  GameRoutine_1148a20(f_.v310, v121 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_321;
  }
  if (f_.v311 != nullptr) {
    v119 = 5;
  LABEL_321:
    ((void (*)(__int64))(*f_.v311)[v119])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v122 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v122 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v122, f_.v309[2]);
  }
  v123 = 4;
  v124 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v124 + 30) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 30;
  f_.v309[2] = v124;
  *(_QWORD*)v124 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v124 + 8) = 0xE3A899E5A6ADE6A9LL;
  *(_QWORD*)(v124 + 16) = 0xA183E38B83E3A282LL;
  *(_QWORD*)(v124 + 22) = 0x9F94E78D86E5A183LL;
  f_.v310[0] = f_.v309;
  v125 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_11593e0_ptr[0];
  GameRoutine_1148a20(f_.v310, v125 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_330;
  }
  if (f_.v311 != nullptr) {
    v123 = 5;
  LABEL_330:
    ((void (*)(__int64))(*f_.v311)[v123])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v126 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v126 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v126, f_.v309[2]);
  }
  v127 = 4;
  v128 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v128 + 24) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 24;
  f_.v309[2] = v128;
  *(_QWORD*)v128 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v128 + 8) = 0xE3AD83E3AF82E3A9LL;
  *(_QWORD*)(v128 + 16) = 0xA1BEE5B688E5B982LL;
  f_.v310[0] = f_.v309;
  v129 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_11597a0_ptr[0];
  GameRoutine_1148a20(f_.v310, v129 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_339;
  }
  if (f_.v311 != nullptr) {
    v127 = 5;
  LABEL_339:
    ((void (*)(__int64))(*f_.v311)[v127])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v130 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v130 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v130, f_.v309[2]);
  }
  BYTE3(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 36;
  *(_WORD*)((char*)&f_.v309[2] + 1) = -22141;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE3A183E3AB82E3A9LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A383E3AD82E3LL;
  f_.v310[0] = f_.v309;
  v131 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_1159de0_ptr[0];
  GameRoutine_1148a20(f_.v310, v131 + 6);
  if (f_.v311 == f_.v310) {
    v132 = 4;
    goto LABEL_349;
  }
  if (f_.v311 != nullptr) {
    v132 = 5;
  LABEL_349:
    ((void (*)(__int64))(*f_.v311)[v132])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v133 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v133 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v133, f_.v309[2]);
  }
  BYTE3(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 36;
  *(_WORD*)((char*)&f_.v309[2] + 1) = -22141;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE3A183E3AB82E3B3LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3BC83E3B782E3LL;
  f_.v310[0] = f_.v309;
  v134 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115a360_ptr[0];
  GameRoutine_1148a20(f_.v310, v134 + 6);
  if (f_.v311 == f_.v310) {
    v135 = 4;
    goto LABEL_359;
  }
  if (f_.v311 != nullptr) {
    v135 = 5;
  LABEL_359:
    ((void (*)(__int64))(*f_.v311)[v135])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v136 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v136 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v136, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE98C82E3BA8FE6A9LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0x8BA7E58B96E98C82LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A183E3AB82E3LL;
  f_.v310[0] = f_.v309;
  v137 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130380[0];
  GameRoutine_1148a20(f_.v310, v137 + 6);
  if (f_.v311 == f_.v310) {
    v138 = 4;
    goto LABEL_369;
  }
  if (f_.v311 != nullptr) {
    v138 = 5;
  LABEL_369:
    ((void (*)(__int64))(*f_.v311)[v138])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v139 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v139 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v139, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE78C82E3BA8FE6A9LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0x86BAE482B5E78C82LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x83E3A183E3AB82E3LL;
  f_.v310[0] = f_.v309;
  v140 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130388[0];
  GameRoutine_1148a20(f_.v310, v140 + 6);
  if (f_.v311 == f_.v310) {
    v141 = 4;
    goto LABEL_379;
  }
  if (f_.v311 != nullptr) {
    v141 = 5;
  LABEL_379:
    ((void (*)(__int64))(*f_.v311)[v141])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v142 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v142 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v142, f_.v309[2]);
  }
  v143 = 4;
  v144 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v144 + 24) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 24;
  f_.v309[2] = v144;
  *(_QWORD*)v144 = 0x82E39683E3AA82E3LL;
  *(_QWORD*)(v144 + 8) = 0xE3AF82E3A782E3B8LL;
  *(_QWORD*)(v144 + 16) = 0xAEBDE78D85E98883LL;
  f_.v310[0] = f_.v309;
  v145 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115aa00_ptr[0];
  GameRoutine_1148a20(f_.v310, v145 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_388;
  }
  if (f_.v311 != nullptr) {
    v143 = 5;
  LABEL_388:
    ((void (*)(__int64))(*f_.v311)[v143])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v146 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v146 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v146, f_.v309[2]);
  }
  v147 = 4;
  v148 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v148 + 27) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 27;
  f_.v309[2] = v148;
  *(_DWORD*)(v148 + 23) = -1363286131;
  *(_QWORD*)v148 = 0x82E39683E3AA82E3LL;
  *(_QWORD*)(v148 + 8) = 0xE3AF82E3A782E3B8LL;
  *(_QWORD*)(v148 + 16) = 0x8D85E98D86E58883LL;
  f_.v310[0] = f_.v309;
  v149 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115ae40_ptr[0];
  GameRoutine_1148a20(f_.v310, v149 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_397;
  }
  if (f_.v311 != nullptr) {
    v147 = 5;
  LABEL_397:
    ((void (*)(__int64))(*f_.v311)[v147])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v150 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v150 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v150, f_.v309[2]);
  }
  v151 = 4;
  v152 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v152 + 30) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 30;
  f_.v309[2] = v152;
  *(_QWORD*)v152 = 0x82E39683E3AA82E3LL;
  *(_QWORD*)(v152 + 8) = 0xE3AF82E3A782E3B8LL;
  *(_QWORD*)(v152 + 16) = 0xAEBDE78D85E98883LL;
  *(_QWORD*)(v152 + 22) = 0xB495E6BFAAE8AEBDLL;
  f_.v310[0] = f_.v309;
  v153 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115b020_ptr[0];
  GameRoutine_1148a20(f_.v310, v153 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_406;
  }
  if (f_.v311 != nullptr) {
    v151 = 5;
  LABEL_406:
    ((void (*)(__int64))(*f_.v311)[v151])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v154 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v154 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v154, f_.v309[2]);
  }
  v155 = 4;
  v156 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v156 + 24) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 24;
  f_.v309[2] = v156;
  *(_QWORD*)v156 = 0x82E39683E3AA82E3LL;
  *(_QWORD*)(v156 + 8) = 0xE3AF82E3A782E3B8LL;
  *(_QWORD*)(v156 + 16) = 0xA499E98A89E58883LL;
  f_.v310[0] = f_.v309;
  v157 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115b360_ptr[0];
  GameRoutine_1148a20(f_.v310, v157 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_415;
  }
  if (f_.v311 != nullptr) {
    v155 = 5;
  LABEL_415:
    ((void (*)(__int64))(*f_.v311)[v155])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v158 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v158 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v158, f_.v309[2]);
  }
  v159 = 4;
  v160 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v160 + 30) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 30;
  f_.v309[2] = v160;
  *(_QWORD*)v160 = 0x82E39683E3AA82E3LL;
  *(_QWORD*)(v160 + 8) = 0xE3AF82E3A782E3B8LL;
  *(_QWORD*)(v160 + 16) = 0xBAA4E7A8A1E88883LL;
  *(_QWORD*)(v160 + 22) = 0xBF9BE68788E5BAA4LL;
  f_.v310[0] = f_.v309;
  v161 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115b620_ptr[0];
  GameRoutine_1148a20(f_.v310, v161 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_424;
  }
  if (f_.v311 != nullptr) {
    v159 = 5;
  LABEL_424:
    ((void (*)(__int64))(*f_.v311)[v159])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v162 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v162 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v162, f_.v309[2]);
  }
  v163 = 4;
  v164 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v164 + 24) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 24;
  f_.v309[2] = v164;
  *(_QWORD*)v164 = 0x82E39683E3AA82E3LL;
  *(_QWORD*)(v164 + 8) = 0xE3AF82E3A782E3B8LL;
  *(_QWORD*)(v164 + 16) = 0xA2BBE89E9BE58883LL;
  f_.v310[0] = f_.v309;
  v165 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115b820_ptr[0];
  GameRoutine_1148a20(f_.v310, v165 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_433;
  }
  if (f_.v311 != nullptr) {
    v163 = 5;
  LABEL_433:
    ((void (*)(__int64))(*f_.v311)[v163])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v166 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v166 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v166, f_.v309[2]);
  }
  v167 = 4;
  v168 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v168 + 27) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 27;
  f_.v309[2] = v168;
  *(_DWORD*)(v168 + 23) = -1264851038;
  *(_QWORD*)v168 = 0x82E39683E3AA82E3LL;
  *(_QWORD*)(v168 + 8) = 0xE3AF82E3A782E3B8LL;
  *(_QWORD*)(v168 + 16) = 0xA2BBE89E9BE58883LL;
  f_.v310[0] = f_.v309;
  v169 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115b9e0_ptr[0];
  GameRoutine_1148a20(f_.v310, v169 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_442;
  }
  if (f_.v311 != nullptr) {
    v167 = 5;
  LABEL_442:
    ((void (*)(__int64))(*f_.v311)[v167])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v170 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v170 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v170, f_.v309[2]);
  }
  v171 = fw_memory_HeapManager_Allocate(*v2, 40, 16, 0);
  *(_BYTE*)(v171 + 39) = 0;
  f_.v309[0] = 41;
  f_.v309[1] = 39;
  f_.v309[2] = v171;
  *(_QWORD*)(v171 + 16) = 0xAF82E3A782E3B882LL;
  *(_QWORD*)(v171 + 24) = 0xA4E7A8A1E88883E3LL;
  *(_QWORD*)(v171 + 31) = 0xBF9BE68788E5BAA4LL;
  *(_QWORD*)v171 = 0x83E38383E39E83E3LL;
  *(_QWORD*)(v171 + 8) = 0xE39683E3AA82E397LL;
  f_.v310[0] = f_.v309;
  v172 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115bba0_ptr[0];
  GameRoutine_1148a20(f_.v310, v172 + 6);
  if (f_.v311 == f_.v310) {
    v173 = 4;
    goto LABEL_452;
  }
  if (f_.v311 != nullptr) {
    v173 = 5;
  LABEL_452:
    ((void (*)(__int64))(*f_.v311)[v173])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v174 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v174 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v174, f_.v309[2]);
  }
  v175 = 4;
  v176 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v176 + 27) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 27;
  f_.v309[2] = v176;
  *(_DWORD*)(v176 + 23) = -1080301945;
  *(_QWORD*)v176 = 0x83E38383E39E83E3LL;
  *(_QWORD*)(v176 + 8) = 0xE8A2AEE5B3A6E897LL;
  *(_QWORD*)(v176 + 16) = 0x8788E5BAA4E7A8A1LL;
  f_.v310[0] = f_.v309;
  v177 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115bd80_ptr[0];
  GameRoutine_1148a20(f_.v310, v177 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_461;
  }
  if (f_.v311 != nullptr) {
    v175 = 5;
  LABEL_461:
    ((void (*)(__int64))(*f_.v311)[v175])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v178 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v178 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v178, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  f_.v310[0] = f_.v309;
  *(__int64*)((char*)f_.v309 + 1) = 0x82E39583E3A882E3LL;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE98883E3AF82E3A7LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0xAEBDE78D85E98883LL;
  v179 = GameRoutine_1148340((__int64)(a1 + 1), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21303d8[0];
  GameRoutine_1148a20(f_.v310, v179 + 6);
  if (f_.v311 == f_.v310) {
    v180 = 4;
    goto LABEL_471;
  }
  if (f_.v311 != nullptr) {
    v180 = 5;
  LABEL_471:
    ((void (*)(__int64))(*f_.v311)[v180])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v181 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v181 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v181, f_.v309[2]);
  }
  *(__int64*)((char*)f_.v309 + 1) = 0x82E39583E3A882E3LL;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE98883E3AF82E3A7LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0xAEBDE78D85E98883LL;
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  f_.v310[0] = f_.v309;
  v182 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115c1e0_ptr[0];
  GameRoutine_1148a20(f_.v310, v182 + 6);
  if (f_.v311 == f_.v310) {
    v183 = 4;
    goto LABEL_481;
  }
  if (f_.v311 != nullptr) {
    v183 = 5;
  LABEL_481:
    ((void (*)(__int64))(*f_.v311)[v183])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v184 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v184 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v184, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE58883E3AF82E3A7LL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0xA499E98A89E58883LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x82E39583E3A882E3LL;
  f_.v310[0] = f_.v309;
  v185 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115c720_ptr[0];
  GameRoutine_1148a20(f_.v310, v185 + 6);
  if (f_.v311 == f_.v310) {
    v186 = 4;
    goto LABEL_491;
  }
  if (f_.v311 != nullptr) {
    v186 = 5;
  LABEL_491:
    ((void (*)(__int64))(*f_.v311)[v186])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v187 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v187 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v187, f_.v309[2]);
  }
  v188 = fw_memory_HeapManager_Allocate(*v2, 40, 16, 0);
  *(_BYTE*)(v188 + 39) = 0;
  f_.v309[0] = 41;
  f_.v309[1] = 39;
  f_.v309[2] = v188;
  *(_QWORD*)(v188 + 16) = 0x8883E3AF82E3A782LL;
  *(_QWORD*)(v188 + 24) = 0x82E39483E3BB82E3LL;
  *(_QWORD*)(v188 + 31) = 0x958BE5B7B5E8A282LL;
  *(_QWORD*)v188 = 0x83E3B982E39D83E3LL;
  *(_QWORD*)(v188 + 8) = 0xE39583E3A882E388LL;
  f_.v310[0] = f_.v309;
  v189 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21303f0[0];
  GameRoutine_1148a20(f_.v310, v189 + 6);
  if (f_.v311 == f_.v310) {
    v190 = 4;
    goto LABEL_501;
  }
  if (f_.v311 != nullptr) {
    v190 = 5;
  LABEL_501:
    ((void (*)(__int64))(*f_.v311)[v190])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v191 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v191 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v191, f_.v309[2]);
  }
  v192 = fw_memory_HeapManager_Allocate(*v2, 40, 16, 0);
  *(_BYTE*)(v192 + 39) = 0;
  f_.v309[0] = 41;
  f_.v309[1] = 39;
  f_.v309[2] = v192;
  *(_QWORD*)(v192 + 16) = 0x8883E3AF82E3A782LL;
  *(_QWORD*)(v192 + 24) = 0x82E39483E3BB82E3LL;
  *(_QWORD*)(v192 + 31) = 0xA499E9A3A7E8A282LL;
  *(_QWORD*)v192 = 0x83E3B982E39D83E3LL;
  *(_QWORD*)(v192 + 8) = 0xE39583E3A882E388LL;
  f_.v310[0] = f_.v309;
  v193 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21303f8[0];
  GameRoutine_1148a20(f_.v310, v193 + 6);
  if (f_.v311 == f_.v310) {
    v194 = 4;
    goto LABEL_511;
  }
  if (f_.v311 != nullptr) {
    v194 = 5;
  LABEL_511:
    ((void (*)(__int64))(*f_.v311)[v194])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v195 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v195 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v195, f_.v309[2]);
  }
  v196 = fw_memory_HeapManager_Allocate(*v2, 56, 16, 0);
  *(_BYTE*)(v196 + 48) = 0;
  f_.v309[0] = 57;
  f_.v309[1] = 48;
  f_.v309[2] = v196;
  *(_QWORD*)(v196 + 16) = 0x8883E3AF82E3A782LL;
  *(_QWORD*)(v196 + 24) = 0x82E3A682E3AC82E3LL;
  *(_QWORD*)(v196 + 32) = 0xE3A983E39683E3B9LL;
  *(_QWORD*)(v196 + 40) = 0x958BE5B7B5E8BC83LL;
  *(_QWORD*)v196 = 0x83E3B982E39D83E3LL;
  *(_QWORD*)(v196 + 8) = 0xE39583E3A882E388LL;
  f_.v310[0] = f_.v309;
  v197 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115cb40_ptr[0];
  GameRoutine_1148a20(f_.v310, v197 + 6);
  if (f_.v311 == f_.v310) {
    v198 = 4;
    goto LABEL_521;
  }
  if (f_.v311 != nullptr) {
    v198 = 5;
  LABEL_521:
    ((void (*)(__int64))(*f_.v311)[v198])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v199 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v199 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v199, f_.v309[2]);
  }
  v200 = fw_memory_HeapManager_Allocate(*v2, 56, 16, 0);
  *(_BYTE*)(v200 + 48) = 0;
  f_.v309[0] = 57;
  f_.v309[1] = 48;
  f_.v309[2] = v200;
  *(_QWORD*)(v200 + 16) = 0x8883E3AF82E3A782LL;
  *(_QWORD*)(v200 + 24) = 0x82E3A682E3AC82E3LL;
  *(_QWORD*)(v200 + 32) = 0xE3A983E39683E3B9LL;
  *(_QWORD*)(v200 + 40) = 0xA499E9A3A7E8BC83LL;
  *(_QWORD*)v200 = 0x83E3B982E39D83E3LL;
  *(_QWORD*)(v200 + 8) = 0xE39583E3A882E388LL;
  f_.v310[0] = f_.v309;
  v201 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130408[0];
  GameRoutine_1148a20(f_.v310, v201 + 6);
  if (f_.v311 == f_.v310) {
    v202 = 4;
    goto LABEL_531;
  }
  if (f_.v311 != nullptr) {
    v202 = 5;
  LABEL_531:
    ((void (*)(__int64))(*f_.v311)[v202])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v203 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v203 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v203, f_.v309[2]);
  }
  v204 = 4;
  v205 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v205 + 24) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 24;
  f_.v309[2] = v205;
  *(_QWORD*)v205 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v205 + 8) = 0xE58CA1E8B3B9E5A9LL;
  *(_QWORD*)(v205 + 16) = 0x9AAEE5ADA8E88985LL;
  f_.v310[0] = f_.v309;
  v206 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115cda0_ptr[0];
  GameRoutine_1148a20(f_.v310, v206 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_540;
  }
  if (f_.v311 != nullptr) {
    v204 = 5;
  LABEL_540:
    ((void (*)(__int64))(*f_.v311)[v204])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v207 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v207 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v207, f_.v309[2]);
  }
  v208 = 4;
  v209 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v209 + 30) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 30;
  f_.v309[2] = v209;
  *(_QWORD*)v209 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v209 + 8) = 0xE58CA1E8B3B9E5A9LL;
  *(_QWORD*)(v209 + 16) = 0xBB82E3AA83E38985LL;
  *(_QWORD*)(v209 + 22) = 0x8883E38383E3BB82LL;
  f_.v310[0] = f_.v309;
  v210 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130418[0];
  GameRoutine_1148a20(f_.v310, v210 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_549;
  }
  if (f_.v311 != nullptr) {
    v208 = 5;
  LABEL_549:
    ((void (*)(__int64))(*f_.v311)[v208])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v211 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v211 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v211, f_.v309[2]);
  }
  LOBYTE(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 30;
  *(__int64*)((char*)f_.v309 + 1) = 0x6F69737566666944LL;
  f_.v309[1] = 0x9AAEE5ADA8E86E6FLL;
  f_.v310[0] = f_.v309;
  v212 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115d0b0_ptr[0];
  GameRoutine_1148a20(f_.v310, v212 + 6);
  if (f_.v311 == f_.v310) {
    v213 = 4;
    goto LABEL_559;
  }
  if (f_.v311 != nullptr) {
    v213 = 5;
  LABEL_559:
    ((void (*)(__int64))(*f_.v311)[v213])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v214 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v214 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v214, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE3BB82E3AA83E36ELL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0x8883E38383E3BB82LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x6F69737566666944LL;
  f_.v310[0] = f_.v309;
  v215 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130428[0];
  GameRoutine_1148a20(f_.v310, v215 + 6);
  if (f_.v311 == f_.v310) {
    v216 = 4;
    goto LABEL_569;
  }
  if (f_.v311 != nullptr) {
    v216 = 5;
  LABEL_569:
    ((void (*)(__int64))(*f_.v311)[v216])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v217 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v217 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v217, f_.v309[2]);
  }
  LOBYTE(f_.v309[0]) = 18;
  *(__int64*)((char*)f_.v309 + 1) = 0xAEE5ADA8E8466F44LL;
  *(_WORD*)((char*)&f_.v309[1] + 1) = 154;
  f_.v310[0] = f_.v309;
  v218 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115eb00_ptr[0];
  GameRoutine_1148a20(f_.v310, v218 + 6);
  if (f_.v311 == f_.v310) {
    v219 = 4;
    goto LABEL_579;
  }
  if (f_.v311 != nullptr) {
    v219 = 5;
  LABEL_579:
    ((void (*)(__int64))(*f_.v311)[v219])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v220 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v220 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v220, f_.v309[2]);
  }
  LOBYTE(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 30;
  *(__int64*)((char*)f_.v309 + 1) = 0x82E3AA83E3466F44LL;
  f_.v309[1] = 0x8883E38383E3BB82LL;
  f_.v310[0] = f_.v309;
  v221 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130438[0];
  GameRoutine_1148a20(f_.v310, v221 + 6);
  if (f_.v311 == f_.v310) {
    v222 = 4;
    goto LABEL_589;
  }
  if (f_.v311 != nullptr) {
    v222 = 5;
  LABEL_589:
    ((void (*)(__int64))(*f_.v311)[v222])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v223 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v223 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v223, f_.v309[2]);
  }
  BYTE6(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 42;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0xE87265746C69466ELL;
  *(__int64*)((char*)&f_.v309[1] + 6) = 0x9AAEE5ADA8E87265LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x6F69746164617247LL;
  f_.v310[0] = f_.v309;
  v224 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115d330_ptr[0];
  GameRoutine_1148a20(f_.v310, v224 + 6);
  if (f_.v311 == f_.v310) {
    v225 = 4;
    goto LABEL_599;
  }
  if (f_.v311 != nullptr) {
    v225 = 5;
  LABEL_599:
    ((void (*)(__int64))(*f_.v311)[v225])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v226 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v226 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v226, f_.v309[2]);
  }
  v227 = 4;
  v228 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v228 + 27) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 27;
  f_.v309[2] = v228;
  *(_DWORD*)(v228 + 23) = -2004622461;
  *(_QWORD*)v228 = 0x6F69746164617247LL;
  *(_QWORD*)(v228 + 8) = 0xE37265746C69466ELL;
  *(_QWORD*)(v228 + 16) = 0x8383E3BB82E3AA83LL;
  f_.v310[0] = f_.v309;
  v229 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130448[0];
  GameRoutine_1148a20(f_.v310, v229 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_608;
  }
  if (f_.v311 != nullptr) {
    v227 = 5;
  LABEL_608:
    ((void (*)(__int64))(*f_.v311)[v227])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v230 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v230 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v230, f_.v309[2]);
  }
  HIBYTE(f_.v309[1]) = 0;
  LOBYTE(f_.v309[0]) = 28;
  *(__int64*)((char*)f_.v309 + 1) = 0x657275736F707845LL;
  *(__int64*)((char*)f_.v309 + 7) = 0x9AAEE5ADA8E86572LL;
  f_.v310[0] = f_.v309;
  v231 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115db10_ptr[0];
  GameRoutine_1148a20(f_.v310, v231 + 6);
  if (f_.v311 == f_.v310) {
    v232 = 4;
    goto LABEL_618;
  }
  if (f_.v311 != nullptr) {
    v232 = 5;
  LABEL_618:
    ((void (*)(__int64))(*f_.v311)[v232])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v233 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v233 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v233, f_.v309[2]);
  }
  BYTE5(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 40;
  *(_DWORD*)((char*)&f_.v309[2] + 1) = -2004622461;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0x83E3BB82E3AA83E3LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x657275736F707845LL;
  f_.v310[0] = f_.v309;
  v234 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130458[0];
  GameRoutine_1148a20(f_.v310, v234 + 6);
  if (f_.v311 == f_.v310) {
    v235 = 4;
    goto LABEL_628;
  }
  if (f_.v311 != nullptr) {
    v235 = 5;
  LABEL_628:
    ((void (*)(__int64))(*f_.v311)[v235])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v236 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v236 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v236, f_.v309[2]);
  }
  LOBYTE(f_.v309[0]) = 18;
  *(__int64*)((char*)f_.v309 + 1) = 0xAEE5ADA8E8676F46LL;
  *(_WORD*)((char*)&f_.v309[1] + 1) = 154;
  f_.v310[0] = f_.v309;
  v237 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115de00_ptr[0];
  GameRoutine_1148a20(f_.v310, v237 + 6);
  if (f_.v311 == f_.v310) {
    v238 = 4;
    goto LABEL_638;
  }
  if (f_.v311 != nullptr) {
    v238 = 5;
  LABEL_638:
    ((void (*)(__int64))(*f_.v311)[v238])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v239 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v239 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v239, f_.v309[2]);
  }
  LOBYTE(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 30;
  *(__int64*)((char*)f_.v309 + 1) = 0x82E3AA83E3676F46LL;
  f_.v309[1] = 0x8883E38383E3BB82LL;
  f_.v310[0] = f_.v309;
  v240 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130468[0];
  GameRoutine_1148a20(f_.v310, v240 + 6);
  if (f_.v311 == f_.v310) {
    v241 = 4;
    goto LABEL_648;
  }
  if (f_.v311 != nullptr) {
    v241 = 5;
  LABEL_648:
    ((void (*)(__int64))(*f_.v311)[v241])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v242 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v242 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v242, f_.v309[2]);
  }
  HIBYTE(f_.v309[1]) = 0;
  LOBYTE(f_.v309[0]) = 28;
  *(__int64*)((char*)f_.v309 + 1) = 0x657474656E676956LL;
  *(__int64*)((char*)f_.v309 + 7) = 0x9AAEE5ADA8E86574LL;
  f_.v310[0] = f_.v309;
  v243 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115e3b0_ptr[0];
  GameRoutine_1148a20(f_.v310, v243 + 6);
  if (f_.v311 == f_.v310) {
    v244 = 4;
    goto LABEL_658;
  }
  if (f_.v311 != nullptr) {
    v244 = 5;
  LABEL_658:
    ((void (*)(__int64))(*f_.v311)[v244])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v245 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v245 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v245, f_.v309[2]);
  }
  BYTE5(f_.v309[2]) = 0;
  LOBYTE(f_.v309[0]) = 40;
  *(_DWORD*)((char*)&f_.v309[2] + 1) = -2004622461;
  *(__int64*)((char*)&f_.v309[1] + 1) = 0x83E3BB82E3AA83E3LL;
  *(__int64*)((char*)f_.v309 + 1) = 0x657474656E676956LL;
  f_.v310[0] = f_.v309;
  v246 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130478[0];
  GameRoutine_1148a20(f_.v310, v246 + 6);
  if (f_.v311 == f_.v310) {
    v247 = 4;
    goto LABEL_668;
  }
  if (f_.v311 != nullptr) {
    v247 = 5;
  LABEL_668:
    ((void (*)(__int64))(*f_.v311)[v247])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v248 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v248 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v248, f_.v309[2]);
  }
  v249 = fw_memory_HeapManager_Allocate(*v2, 48, 16, 0);
  *(_BYTE*)(v249 + 42) = 0;
  f_.v309[0] = 49;
  f_.v309[1] = 42;
  f_.v309[2] = v249;
  *(_WORD*)(v249 + 40) = -18038;
  *(_QWORD*)(v249 + 16) = 0xB1A0E58583E6B383LL;
  *(_QWORD*)(v249 + 24) = 0xA1E8958BE5AA87E8LL;
  *(_QWORD*)(v249 + 32) = 0xE5A184E7BAA4E7A8LL;
  *(_QWORD*)v249 = 0x83E3B182E3AD83E3LL;
  *(_QWORD*)(v249 + 8) = 0xE3A783E3B782E3BCLL;
  f_.v310[0] = f_.v309;
  v250 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130480[0];
  GameRoutine_1148a20(f_.v310, v250 + 6);
  if (f_.v311 == f_.v310) {
    v251 = 4;
    goto LABEL_678;
  }
  if (f_.v311 != nullptr) {
    v251 = 5;
  LABEL_678:
    ((void (*)(__int64))(*f_.v311)[v251])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v252 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v252 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v252, f_.v309[2]);
  }
  v253 = 4;
  v254 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v254 + 30) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 30;
  f_.v309[2] = v254;
  *(_QWORD*)v254 = 0x83E3B182E3AD83E3LL;
  *(_QWORD*)(v254 + 8) = 0xE3A783E3B782E3BCLL;
  *(_QWORD*)(v254 + 16) = 0xB1A0E58583E6B383LL;
  *(_QWORD*)(v254 + 22) = 0xBAA4E7A8A1E8B1A0LL;
  f_.v310[0] = f_.v309;
  v255 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130488[0];
  GameRoutine_1148a20(f_.v310, v255 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_687;
  }
  if (f_.v311 != nullptr) {
    v253 = 5;
  LABEL_687:
    ((void (*)(__int64))(*f_.v311)[v253])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v256 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v256 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v256, f_.v309[2]);
  }
  v257 = fw_memory_HeapManager_Allocate(*v2, 40, 16, 0);
  *(_BYTE*)(v257 + 39) = 0;
  f_.v309[0] = 41;
  f_.v309[1] = 39;
  f_.v309[2] = v257;
  *(_QWORD*)(v257 + 16) = 0xB1A0E58583E6B383LL;
  *(_QWORD*)(v257 + 24) = 0xB8E48089E6B4A0E5LL;
  *(_QWORD*)(v257 + 31) = 0x8D81E3B89BE68AB8LL;
  *(_QWORD*)v257 = 0x83E3B182E3AD83E3LL;
  *(_QWORD*)(v257 + 8) = 0xE3A783E3B782E3BCLL;
  f_.v310[0] = f_.v309;
  v258 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115ee20_ptr[0];
  GameRoutine_1148a20(f_.v310, v258 + 6);
  if (f_.v311 == f_.v310) {
    v259 = 4;
    goto LABEL_697;
  }
  if (f_.v311 != nullptr) {
    v259 = 5;
  LABEL_697:
    ((void (*)(__int64))(*f_.v311)[v259])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v260 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v260 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v260, f_.v309[2]);
  }
  v261 = fw_memory_HeapManager_Allocate(*v2, 40, 16, 0);
  *(_BYTE*)(v261 + 39) = 0;
  f_.v309[0] = 41;
  f_.v309[1] = 39;
  f_.v309[2] = v261;
  *(_QWORD*)(v261 + 16) = 0xB1A0E58583E6B383LL;
  *(_QWORD*)(v261 + 24) = 0xB8E49396E98299E6LL;
  *(_QWORD*)(v261 + 31) = 0x8D81E3B89BE68AB8LL;
  *(_QWORD*)v261 = 0x83E3B182E3AD83E3LL;
  *(_QWORD*)(v261 + 8) = 0xE3A783E3B782E3BCLL;
  f_.v310[0] = f_.v309;
  v262 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115eed0_ptr[0];
  GameRoutine_1148a20(f_.v310, v262 + 6);
  if (f_.v311 == f_.v310) {
    v263 = 4;
    goto LABEL_707;
  }
  if (f_.v311 != nullptr) {
    v263 = 5;
  LABEL_707:
    ((void (*)(__int64))(*f_.v311)[v263])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v264 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v264 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v264, f_.v309[2]);
  }
  v265 = 4;
  v266 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v266 + 24) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 24;
  f_.v309[2] = v266;
  *(_QWORD*)v266 = 0x83E398BBE4A597E6LL;
  *(_QWORD*)(v266 + 8) = 0xE38383E3AD83E386LL;
  *(_QWORD*)(v266 + 16) = 0xBAA4E7A8A1E89783LL;
  f_.v310[0] = f_.v309;
  v267 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115ef80_ptr[0];
  GameRoutine_1148a20(f_.v310, v267 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_716;
  }
  if (f_.v311 != nullptr) {
    v265 = 5;
  LABEL_716:
    ((void (*)(__int64))(*f_.v311)[v265])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v268 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v268 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v268, f_.v309[2]);
  }
  v269 = 4;
  v270 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v270 + 27) = 0;
  f_.v309[0] = 33;
  f_.v309[1] = 27;
  f_.v309[2] = v270;
  *(_DWORD*)(v270 + 23) = -1163597912;
  *(_QWORD*)v270 = 0x83E398BBE4A597E6LL;
  *(_QWORD*)(v270 + 8) = 0xE38383E3AD83E386LL;
  *(_QWORD*)(v270 + 16) = 0xA8A1E89E9DE99783LL;
  f_.v310[0] = f_.v309;
  v271 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21304a8[0];
  GameRoutine_1148a20(f_.v310, v271 + 6);
  if (f_.v311 == f_.v310) {
    goto LABEL_725;
  }
  if (f_.v311 != nullptr) {
    v269 = 5;
  LABEL_725:
    ((void (*)(__int64))(*f_.v311)[v269])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v272 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v272 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v272, f_.v309[2]);
  }
  LOBYTE(f_.v309[0]) = 8;
  strcpy((char*)f_.v309 + 1, "Play");
  f_.v310[0] = f_.v309;
  v273 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115f1b0_ptr[0];
  GameRoutine_1148a20(f_.v310, v273 + 6);
  if (f_.v311 == f_.v310) {
    v274 = 4;
    goto LABEL_735;
  }
  if (f_.v311 != nullptr) {
    v274 = 5;
  LABEL_735:
    ((void (*)(__int64))(*f_.v311)[v274])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v275 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v275 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v275, f_.v309[2]);
  }
  LOBYTE(f_.v309[0]) = 8;
  strcpy((char*)f_.v309 + 1, "Stop");
  f_.v310[0] = f_.v309;
  v276 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115f320_ptr[0];
  GameRoutine_1148a20(f_.v310, v276 + 6);
  if (f_.v311 == f_.v310) {
    v277 = 4;
    goto LABEL_745;
  }
  if (f_.v311 != nullptr) {
    v277 = 5;
  LABEL_745:
    ((void (*)(__int64))(*f_.v311)[v277])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v278 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v278 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v278, f_.v309[2]);
  }
  strcpy((char*)f_.v309, "\nPause");
  f_.v310[0] = f_.v309;
  v279 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115f430_ptr[0];
  GameRoutine_1148a20(f_.v310, v279 + 6);
  if (f_.v311 == f_.v310) {
    v280 = 4;
    goto LABEL_755;
  }
  if (f_.v311 != nullptr) {
    v280 = 5;
  LABEL_755:
    ((void (*)(__int64))(*f_.v311)[v280])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v281 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v281 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v281, f_.v309[2]);
  }
  LOBYTE(f_.v309[0]) = 12;
  strcpy((char*)f_.v309 + 1, "Resume");
  f_.v310[0] = f_.v309;
  v282 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115f570_ptr[0];
  GameRoutine_1148a20(f_.v310, v282 + 6);
  if (f_.v311 == f_.v310) {
    v283 = 4;
    goto LABEL_765;
  }
  if (f_.v311 != nullptr) {
    v283 = 5;
  LABEL_765:
    ((void (*)(__int64))(*f_.v311)[v283])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v284 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v284 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v284, f_.v309[2]);
  }
  LOBYTE(f_.v309[0]) = 12;
  strcpy((char*)f_.v309 + 1, "SetVol");
  f_.v310[0] = f_.v309;
  v285 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115f6b0_ptr[0];
  GameRoutine_1148a20(f_.v310, v285 + 6);
  if (f_.v311 == f_.v310) {
    v286 = 4;
    goto LABEL_775;
  }
  if (f_.v311 != nullptr) {
    v286 = 5;
  LABEL_775:
    ((void (*)(__int64))(*f_.v311)[v286])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v287 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v287 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v287, f_.v309[2]);
  }
  LOBYTE(f_.v309[0]) = 20;
  strcpy((char*)f_.v309 + 1, "SetSlotVol");
  f_.v310[0] = f_.v309;
  v288 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115f860_ptr[0];
  GameRoutine_1148a20(f_.v310, v288 + 6);
  if (f_.v311 == f_.v310) {
    v289 = 4;
    goto LABEL_785;
  }
  if (f_.v311 != nullptr) {
    v289 = 5;
  LABEL_785:
    ((void (*)(__int64))(*f_.v311)[v289])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v290 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v290 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v290, f_.v309[2]);
  }
  strcpy((char*)f_.v309, "\"EnableSignalSound");
  f_.v310[0] = f_.v309;
  v291 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115fa20_ptr[0];
  GameRoutine_1148a20(f_.v310, v291 + 6);
  if (f_.v311 == f_.v310) {
    v292 = 4;
    goto LABEL_795;
  }
  if (f_.v311 != nullptr) {
    v292 = 5;
  LABEL_795:
    ((void (*)(__int64))(*f_.v311)[v292])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v293 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v293 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v293, f_.v309[2]);
  }
  strcpy((char*)f_.v309, "$DisableSignalSound");
  f_.v310[0] = f_.v309;
  v294 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)game_evt_demo_115fad0_ptr[0];
  GameRoutine_1148a20(f_.v310, v294 + 6);
  if (f_.v311 == f_.v310) {
    v295 = 4;
    goto LABEL_805;
  }
  if (f_.v311 != nullptr) {
    v295 = 5;
  LABEL_805:
    ((void (*)(__int64))(*f_.v311)[v295])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v296 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v296 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v296, f_.v309[2]);
  }
  strcpy((char*)f_.v309, "(EnableSignalSoundAll");
  f_.v310[0] = f_.v309;
  v297 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21304f0[0];
  GameRoutine_1148a20(f_.v310, v297 + 6);
  if (f_.v311 == f_.v310) {
    v298 = 4;
    goto LABEL_815;
  }
  if (f_.v311 != nullptr) {
    v298 = 5;
  LABEL_815:
    ((void (*)(__int64))(*f_.v311)[v298])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v299 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v299 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v299, f_.v309[2]);
  }
  strcpy((char*)f_.v309, "*DisableSignalSoundAll");
  f_.v310[0] = f_.v309;
  v300 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_21304f8[0];
  GameRoutine_1148a20(f_.v310, v300 + 6);
  if (f_.v311 == f_.v310) {
    v301 = 4;
    goto LABEL_825;
  }
  if (f_.v311 != nullptr) {
    v301 = 5;
  LABEL_825:
    ((void (*)(__int64))(*f_.v311)[v301])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v302 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v302 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v302, f_.v309[2]);
  }
  strcpy((char*)f_.v309, "(EnableGameFadeVolume");
  f_.v310[0] = f_.v309;
  v303 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130500[0];
  GameRoutine_1148a20(f_.v310, v303 + 6);
  if (f_.v311 == f_.v310) {
    v304 = 4;
    goto LABEL_835;
  }
  if (f_.v311 != nullptr) {
    v304 = 5;
  LABEL_835:
    ((void (*)(__int64))(*f_.v311)[v304])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v305 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v305 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v305, f_.v309[2]);
  }
  strcpy((char*)f_.v309, "*DisableGameFadeVolume");
  f_.v310[0] = f_.v309;
  v306 = GameRoutine_1148340((__int64)(a1 + 6), (unsigned __int8*)f_.v309,
                             f_.v310);
  f_.v311 = f_.v310;
  f_.v310[0] = (__int64*)GameData_2012b30;
  f_.v310[1] = (__int64*)GameData_2130508;
  GameRoutine_1148a20(f_.v310, v306 + 6);
  if (f_.v311 == f_.v310) {
    v307 = 4;
    goto LABEL_845;
  }
  if (f_.v311 != nullptr) {
    v307 = 5;
  LABEL_845:
    ((void (*)(__int64))(*f_.v311)[v307])((__int64)f_.v311);
  }
  if ((f_.v309[0] & 1) != 0 && f_.v309[2] != 0) {
    v308 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v308 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v308, f_.v309[2]);
  }
}

void game_1197100(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  struct {
    char gap0_[8];
    __int64 v65[2];
    _BYTE v66[24];
    __int64 (**v67)();
    __int64 (*v68)();
    char gap64_[16];
    __int64** v69;
  } f_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (a1[12] != 0) {
    v3 = (_QWORD*)a1[11];
    while (v3 != nullptr) {
      v5 = (__int64)v3;
      v3 = (_QWORD*)*v3;
      v6 = *(_QWORD**)(v5 + 80);
      if (v6 == (_QWORD*)(v5 + 48)) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_13;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_13:
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        v8 = *(_QWORD*)(v5 + 32);
        if (v8 != 0) {
          if (*(_QWORD*)(*v2 + 200) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*v2 + v9, v8);
        }
      }
      if (*(_QWORD*)(*v2 + 200) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v4, v5);
    }
    v10 = a1[10];
    a1[11] = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(a1[9] + 8 * v12) = 0;
          *(_QWORD*)(a1[9] + 8 * v12 + 8) = 0;
          *(_QWORD*)(a1[9] + 8 * v12 + 16) = 0;
          *(_QWORD*)(a1[9] + 8 * v12 + 24) = 0;
          *(_QWORD*)(a1[9] + 8 * v12 + 32) = 0;
          *(_QWORD*)(a1[9] + 8 * v12 + 40) = 0;
          *(_QWORD*)(a1[9] + 8 * v12 + 48) = 0;
          v14 = a1[9] + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(a1[9] + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    a1[12] = 0;
  }
  f_.v66[20] = 0;
  f_.v66[0] = 38;
  *(_DWORD*)&f_.v66[16] = -1951930997;
  *(_QWORD*)&f_.v66[9] = 0x8B96E9B1A9E89ABCLL;
  *(_QWORD*)&f_.v66[1] = 0xE45FB982E7A08BE6LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v16 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_1197e80;
  GameRoutine_119c210(&f_.v67, v16 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    v17 = 4;
    goto LABEL_32;
  }
  if (f_.v69 != nullptr) {
    v17 = 5;
  LABEL_32:
    ((void (*)(__int64))(*f_.v69)[v17])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v18 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v18, *(__int64*)&f_.v66[16]);
  }
  f_.v66[20] = 0;
  f_.v66[0] = 38;
  *(_DWORD*)&f_.v66[16] = -2034572158;
  *(_QWORD*)&f_.v66[9] = 0x82B5E7B1A9E89ABCLL;
  *(_QWORD*)&f_.v66[1] = 0xE45FB982E7A08BE6LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v19 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_11982a0;
  GameRoutine_119c210(&f_.v67, v19 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    v20 = 4;
    goto LABEL_42;
  }
  if (f_.v69 != nullptr) {
    v20 = 5;
  LABEL_42:
    ((void (*)(__int64))(*f_.v69)[v20])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v21 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v21, *(__int64*)&f_.v66[16]);
  }
  v22 = fw_memory_HeapManager_Allocate(*v2, 40, 16, 0);
  *(_QWORD*)f_.v66 = 41;
  *(_QWORD*)&f_.v66[8] = 37;
  *(_QWORD*)&f_.v66[16] = v22;
  *(_QWORD*)(v22 + 16) = 0x82E3BC83E3A283E3LL;
  *(_QWORD*)(v22 + 24) = 0xE5B383E3A783E3B7LL;
  strcpy((char*)(v22 + 29), "\x83\xB3再生");
  *(_QWORD*)v22 = 0xE35FB982E7A08BE6LL;
  *(_QWORD*)(v22 + 8) = 0xA983E3A383E3AD82LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v23 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_11982c0;
  GameRoutine_119c210(&f_.v67, v23 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    v24 = 4;
    goto LABEL_52;
  }
  if (f_.v69 != nullptr) {
    v24 = 5;
  LABEL_52:
    ((void (*)(__int64))(*f_.v69)[v24])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v25 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v25, *(__int64*)&f_.v66[16]);
  }
  v26 = 4;
  v27 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_QWORD*)f_.v66 = 33;
  *(_QWORD*)&f_.v66[8] = 25;
  *(_QWORD*)&f_.v66[16] = v27;
  *(_WORD*)(v27 + 24) = 174;
  *(_QWORD*)v27 = 0xE35FB982E7A08BE6LL;
  *(_QWORD*)(v27 + 8) = 0xA983E3A383E3AD82LL;
  *(_QWORD*)(v27 + 16) = 0x9BE7A8B3E6B881E3LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v28 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = GameRoutine_11985f0;
  GameRoutine_119c210(&f_.v67, v28 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    goto LABEL_61;
  }
  if (f_.v69 != nullptr) {
    v26 = 5;
  LABEL_61:
    ((void (*)(__int64))(*f_.v69)[v26])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v29 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v29, *(__int64*)&f_.v66[16]);
  }
  v30 = 4;
  v31 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v31 + 28) = 0;
  *(_QWORD*)f_.v66 = 33;
  *(_QWORD*)&f_.v66[8] = 28;
  *(_QWORD*)&f_.v66[16] = v31;
  *(_DWORD*)(v31 + 24) = -1365514328;
  *(_QWORD*)v31 = 0xE35FB982E7A08BE6LL;
  *(_QWORD*)(v31 + 8) = 0xBC83E3B182E3AD83LL;
  *(_QWORD*)(v31 + 16) = 0xB3E6B881E3BF82E3LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v32 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_11988e0;
  GameRoutine_119c210(&f_.v67, v32 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    goto LABEL_70;
  }
  if (f_.v69 != nullptr) {
    v30 = 5;
  LABEL_70:
    ((void (*)(__int64))(*f_.v69)[v30])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v33 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v33, *(__int64*)&f_.v66[16]);
  }
  v34 = 4;
  f_.v66[17] = 0;
  f_.v66[0] = 32;
  *(_QWORD*)&f_.v66[9] = 0xA983E3A183E3AB82LL;
  *(_QWORD*)&f_.v66[1] = 0xE35FB982E7A08BE6LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v35 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = game_talk_Hub_ChangeCamera;
  GameRoutine_119c210(&f_.v67, v35 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    goto LABEL_79;
  }
  if (f_.v69 != nullptr) {
    v34 = 5;
  LABEL_79:
    ((void (*)(__int64))(*f_.v69)[v34])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v36 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v36, *(__int64*)&f_.v66[16]);
  }
  f_.v66[23] = 0;
  f_.v66[0] = 44;
  *(_QWORD*)&f_.v66[9] = 0xA983E3A183E3AB82LL;
  *(_QWORD*)&f_.v66[15] = 0x86BAE482B5E7A983LL;
  *(_QWORD*)&f_.v66[1] = 0xE35FB982E7A08BE6LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v37 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_1199260;
  GameRoutine_119c210(&f_.v67, v37 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    v38 = 4;
    goto LABEL_89;
  }
  if (f_.v69 != nullptr) {
    v38 = 5;
  LABEL_89:
    ((void (*)(__int64))(*f_.v69)[v38])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v39 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v39, *(__int64*)&f_.v66[16]);
  }
  f_.v66[23] = 0;
  f_.v66[0] = 44;
  *(_QWORD*)&f_.v66[9] = 0xA983E3A183E3AB82LL;
  *(_QWORD*)&f_.v66[15] = 0x9FA9E685BEE5A983LL;
  *(_QWORD*)&f_.v66[1] = 0xE35FB982E7A08BE6LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v40 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_1199510;
  GameRoutine_119c210(&f_.v67, v40 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    v41 = 4;
    goto LABEL_99;
  }
  if (f_.v69 != nullptr) {
    v41 = 5;
  LABEL_99:
    ((void (*)(__int64))(*f_.v69)[v41])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v42 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v42, *(__int64*)&f_.v66[16]);
  }
  f_.v66[14] = 0;
  f_.v66[0] = 26;
  *(_QWORD*)&f_.v66[1] = 0xE55FB982E7A08BE6LL;
  *(_QWORD*)&f_.v66[6] = 0x9FA9E685BEE55FB9LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v43 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_1199600;
  GameRoutine_119c210(&f_.v67, v43 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    v44 = 4;
    goto LABEL_109;
  }
  if (f_.v69 != nullptr) {
    v44 = 5;
  LABEL_109:
    ((void (*)(__int64))(*f_.v69)[v44])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v45 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v45, *(__int64*)&f_.v66[16]);
  }
  f_.v66[20] = 0;
  f_.v66[0] = 38;
  *(_DWORD*)&f_.v66[16] = -1382619475;
  *(_QWORD*)&f_.v66[9] = 0xADB8E4B1A9E89ABCLL;
  *(_QWORD*)&f_.v66[1] = 0xE45FB982E7A08BE6LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v46 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_1199720;
  GameRoutine_119c210(&f_.v67, v46 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    v47 = 4;
    goto LABEL_119;
  }
  if (f_.v69 != nullptr) {
    v47 = 5;
  LABEL_119:
    ((void (*)(__int64))(*f_.v69)[v47])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v48 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v48, *(__int64*)&f_.v66[16]);
  }
  v49 = 4;
  v50 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_QWORD*)f_.v66 = 33;
  *(_QWORD*)&f_.v66[8] = 25;
  *(_QWORD*)&f_.v66[16] = v50;
  *(_WORD*)(v50 + 24) = 179;
  *(_QWORD*)v50 = 0xE35FB982E7A08BE6LL;
  *(_QWORD*)(v50 + 8) = 0xBC83E3A782E39583LL;
  *(_QWORD*)(v50 + 16) = 0x83E3A482E38983E3LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v51 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_1199760;
  GameRoutine_119c210(&f_.v67, v51 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    goto LABEL_128;
  }
  if (f_.v69 != nullptr) {
    v49 = 5;
  LABEL_128:
    ((void (*)(__int64))(*f_.v69)[v49])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v52 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v52, *(__int64*)&f_.v66[16]);
  }
  v53 = 4;
  v54 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_BYTE*)(v54 + 28) = 0;
  *(_QWORD*)f_.v66 = 33;
  *(_QWORD*)&f_.v66[8] = 28;
  *(_QWORD*)&f_.v66[16] = v54;
  *(_DWORD*)(v54 + 24) = -2004622426;
  *(_QWORD*)v54 = 0xE35FB982E7A08BE6LL;
  *(_QWORD*)(v54 + 8) = 0xBC83E3A782E39583LL;
  *(_QWORD*)(v54 + 16) = 0x82E3A282E38983E3LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v55 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_11998d0;
  GameRoutine_119c210(&f_.v67, v55 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    goto LABEL_137;
  }
  if (f_.v69 != nullptr) {
    v53 = 5;
  LABEL_137:
    ((void (*)(__int64))(*f_.v69)[v53])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v56 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v56, *(__int64*)&f_.v66[16]);
  }
  f_.v66[20] = 0;
  f_.v66[0] = 38;
  *(_DWORD*)&f_.v66[16] = -1565661567;
  *(_QWORD*)&f_.v66[9] = 0x81A6E7AE9BE7A8B3LL;
  *(_QWORD*)&f_.v66[1] = 0xE65FB982E7A08BE6LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v57 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = game_talk_Hub_DisableLookAt;
  GameRoutine_119c210(&f_.v67, v57 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    v58 = 4;
    goto LABEL_147;
  }
  if (f_.v69 != nullptr) {
    v58 = 5;
  LABEL_147:
    ((void (*)(__int64))(*f_.v69)[v58])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v59 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v59, *(__int64*)&f_.v66[16]);
  }
  f_.v66[20] = 0;
  f_.v66[0] = 38;
  *(_DWORD*)&f_.v66[16] = -1349524047;
  *(_QWORD*)&f_.v66[9] = 0xB1A8E8AE9BE7A8B3LL;
  *(_QWORD*)&f_.v66[1] = 0xE65FB982E7A08BE6LL;
  f_.v67 = (__int64 (**)(void))f_.v66;
  v60 = GameRoutine_119bb20((__int64)(a1 + 9), f_.v66, (__int64**)&f_.v67);
  f_.v69 = (__int64**)&f_.v67;
  f_.v67 = GameData_2015050;
  f_.v68 = Hub_1199bc0;
  GameRoutine_119c210(&f_.v67, v60 + 6);
  if (f_.v69 == (__int64**)&f_.v67) {
    v61 = 4;
    goto LABEL_157;
  }
  if (f_.v69 != nullptr) {
    v61 = 5;
  LABEL_157:
    ((void (*)(__int64))(*f_.v69)[v61])((__int64)f_.v69);
  }
  if ((f_.v66[0] & 1) != 0 && *(_QWORD*)&f_.v66[16] != 0) {
    v62 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v62, *(__int64*)&f_.v66[16]);
  }
  if (game_hub_ProcHubSeqView_instance_ != 0 && GameData_21f3d10 != 0 &&
      *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) != 0 &&
      *(int*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0 &&
      (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0 &&
      GameData_21f3d08 != 0) {
    game_hub_efca60((void*)(&f_.v67), GameData_21f3d08, GameData_1af2765, 15);
    if (f_.v68 != nullptr) {
      v63 = std___1___shared_weak_count_lock((__int64)f_.v68);
      if (v63 != 0) {
        v64 = (__int64*)f_.v67;
      }
      else {
        v64 = nullptr;
      }
      if (f_.v68 != nullptr) {
        std___1___shared_weak_count___release_weak((__int64)f_.v68);
      }
      if (v64 != nullptr) {
        f_.v65[0] = (__int64)v64;
        f_.v65[1] = v63;
        if (v63 == 0) {
          Hub_1199d20((__int64)a1, f_.v65);
          return;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                  memory_order_relaxed);
        Hub_1199d20((__int64)a1, f_.v65);
        if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
          std___1___shared_weak_count___release_weak(v63);
        }
      }
      else if (v63 == 0) {
        return;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
        std___1___shared_weak_count___release_weak(v63);
      }
    }
  }
}

__int64 game_121b000(__int64* a1, int a2, unsigned __int64 a3,
                     unsigned __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v8;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  _BYTE* v15;
  __int64 (*v16)();
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  signed int v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  __int64* v38;
  unsigned __int64 v39;
  signed int v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  _BYTE* v52;
  __int64 v53;
  __int64 v54;
  int v55;
  int v56;
  int v57;
  __int64* v58;
  __int16 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  int v63;
  int v64;
  int v65;
  char v66;
  unsigned int v67;
  int v68;
  __int64 v69;
  int v70;
  __int64 v72;
  struct {
    unsigned __int64 v73;
    unsigned __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int16 v79;
    char v80;
  } v73_;
  struct {
    __int64* v81;
    unsigned __int64 v82;
    unsigned __int64 v83;
    __int64 v84;
    __int64** v85;
    __int64 v86;
    __int64 v87;
    int v88;
    char gap188_[4];
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    char v96;
    char gap249_[7];
    __int64 v97;
  } v81_;
  struct {
    _QWORD v98[4];
    _QWORD* v99;
  } v98_;
  struct {
    _QWORD v100[4];
    _QWORD* v101;
    char gap360_[20];
    int v102;
  } v100_;
  struct {
    _QWORD v103[4];
    _QWORD* v104;
  } v103_;
  __int64 v105;
  __int64 v106;

  v4 = a1[1];
  v8 = game_g_shared_system_skills_ptr;
  LODWORD(v81_.v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
  if ((game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)&v81_.v81) & 1) !=
      0) {
    return 0;
  }
  if (*(_WORD*)(v4 + 492) == 0 & *(_BYTE*)(v4 + 496) == 0) {
    LODWORD(v81_.v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v8) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)&v81_.v81) & 1) !=
        0) {
      return 0;
    }
  }
  LODWORD(v81_.v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) + v8) & 0xFFF;
  if ((game_HasSkill((_QWORD*)(v4 + 1744), (unsigned int*)&v81_.v81) & 1) !=
      0) {
    return 0;
  }
  v11 = *(unsigned __int16*)(a3 + 2);
  v103_.v104 = nullptr;
  if (a2 == 61) {
    result = 0;
    if ((v11 & 0x8000) != 0 || *(_BYTE*)a3 != 4) {
      goto LABEL_124;
    }
    v12 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) + 8 * v11);
    v81_.v85 = &v81_.v81;
    v81_.v81 = GameData_2130960 + 2;
    v81_.v82 = (unsigned __int64)AIThink_121b950;
    GameRoutine_1209d00(&v81_.v81, v103_.v103);
    if (v81_.v85 == &v81_.v81) {
      v13 = 4;
    }
    else {
      if (v81_.v85 == nullptr) {
      LABEL_46:
        v72 = v12;
        goto LABEL_47;
      }
      v13 = 5;
    }
    ((void (*)(__int64))(*v81_.v85)[v13])((__int64)v81_.v85);
    goto LABEL_46;
  }
  if ((_DWORD)v11 == 0xFFFF) {
    LOBYTE(v14) = -1;
  }
  else {
    result = 0;
    if ((v11 & 0x8000) != 0) {
      goto LABEL_124;
    }
    if (*(_BYTE*)a3 != 1) {
      goto LABEL_124;
    }
    v14 = (unsigned int)v11 >> 8;
    v15 = (_BYTE*)*GameData_212ce98[0];
    if (*GameData_212ce98[0] != 0) {
      result = 0;
      if ((unsigned __int8)v15[26] <=
              (unsigned int)(unsigned __int8)(v11 - v15[24]) ||
          (unsigned __int8)v15[27] <=
              (unsigned int)(unsigned __int8)(BYTE1(v11) - v15[25])) {
        goto LABEL_124;
      }
    }
  }
  if (a2 == 65) {
    v16 = AIThink_121b950;
  }
  else {
    v16 = AIThink_121a250;
  }
  v81_.v81 = GameData_2130960 + 2;
  v81_.v82 = (unsigned __int64)v16;
  v81_.v85 = &v81_.v81;
  GameRoutine_1209d00(&v81_.v81, v103_.v103);
  if (v81_.v85 == &v81_.v81) {
    v17 = 4;
  }
  else {
    if (v81_.v85 == nullptr) {
      goto LABEL_33;
    }
    v17 = 5;
  }
  ((void (*)(__int64))(*v81_.v85)[v17])((__int64)v81_.v85);
LABEL_33:
  if ((v11 & 0x80) != 0) {
    v72 = 0;
  LABEL_47:
    v24 = *(unsigned __int8*)(*GameData_212ce98[0] + 25);
    v25 = *(unsigned __int8*)(*GameData_212ce98[0] + 26);
    v27 = *(unsigned __int8*)(*GameData_212ce98[0] + 27);
    v70 = *(unsigned __int8*)(*GameData_212ce98[0] + 24);
    goto LABEL_48;
  }
  result = 0;
  v18 = (char)v11 + 32 * (char)v14;
  if (v18 >= 0x400) {
    v18 = 0;
  }
  v19 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v20 = *(__int16*)(v19 + 2LL * v18 + 2152);
  if (v20 < 0) {
    goto LABEL_124;
  }
  v21 = *(_QWORD*)(v19 + 8);
  if (v21 == 0) {
    goto LABEL_124;
  }
  v22 = v21 + 144LL * (int)v20;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 272LL))(v22) & 1) == 0) {
    goto LABEL_123;
  }
  v73_.v73 = v22;
  v81_.v81 = (__int64*)a1[1];
  if (v103_.v104 == nullptr) {
  LABEL_129:
    GameRoutine_60a310();
  }
  if (((*(__int64 (**)(__int64, __int64, __int64))(*v103_.v104 + 48LL))(
           (__int64)v103_.v104, (__int64)&v81_.v81, (__int64)&v73_.v73) &
       1) == 0) {
    goto LABEL_123;
  }
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 56LL))(v22);
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 64LL))(v22);
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 72LL))(v22);
  v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 80LL))(v22);
  v70 = v23;
  if (v23 == -1) {
    goto LABEL_123;
  }
  v27 = v26;
  v72 = 0;
LABEL_48:
  v100_.v102 = 1048578;
  v28 = GameData_21306a0[0];
  AIDeploy_1274f90(*(_QWORD**)GameData_21306a0[0], a1[1], 0xFFFFFFFF,
                   &v100_.v102);
  if (a2 != 61) {
    goto LABEL_69;
  }
  v29 = a1[1];
  LODWORD(v81_.v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v8) & 0xFFF;
  if ((game_HasSkill((_QWORD*)(v29 + 1744), (unsigned int*)&v81_.v81) & 1) !=
      0) {
    goto LABEL_69;
  }
  if (*(_WORD*)(v29 + 492) == 0 && *(_BYTE*)(v29 + 496) == 0) {
    LODWORD(v81_.v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v8) & 0xFFF;
    if ((game_HasSkill((_QWORD*)(v29 + 1744), (unsigned int*)&v81_.v81) & 1) !=
        0) {
      goto LABEL_69;
    }
  }
  LODWORD(v81_.v81) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) + v8) & 0xFFF;
  if ((game_HasSkill((_QWORD*)(v29 + 1744), (unsigned int*)&v81_.v81) & 1) !=
      0) {
    goto LABEL_69;
  }
  v81_.v82 = a3;
  v81_.v83 = a4;
  v81_.v84 = 0;
  v81_.v85 = nullptr;
  v81_.v88 = 0;
  v81_.v93 = 0;
  v81_.v94 = 0;
  v98_.v98[0] = GameData_20189c8;
  v81_.v87 = 0xFFFFFFFFLL;
  LODWORD(v81_.v81) = 61;
  v81_.v95 = 0;
  v98_.v99 = v98_.v98;
  v100_.v101 = v100_.v100;
  v73_.v79 = 0;
  v73_.v80 = 0;
  v81_.v96 = 0;
  v100_.v100[0] = GameData_2018a58;
  v81_.v89 = 0;
  v81_.v90 = -1;
  v81_.v91 = -1;
  v81_.v92 = 0;
  v81_.v97 = -1;
  v73_.v73 = 0;
  v73_.v74 = -1;
  v73_.v77 = 0;
  v73_.v78 = -1;
  v81_.v86 = -1;
  v73_.v75 = 0x7FFFFFFF;
  v73_.v76 = 0xFFFFFFFFLL;
  v30 = a1[1];
  v81_.v88 = v100_.v102;
  v81_.v84 = v30;
  if (game_AIThink_GetAttackResult((int*)&v81_.v81, &v73_.v73) &&
      *((float*)&v73_.v76 + 1) >= 0x1.6666660000000p-1f) {
    if (v100_.v101 == v100_.v100) {
      v31 = 32;
    }
    else {
      if (v100_.v101 == nullptr) {
        goto LABEL_118;
      }
      v31 = 40;
    }
    (*(void (**)(__int64))(*v100_.v101 + v31))((__int64)v100_.v101);
  LABEL_118:
    if (v98_.v99 == v98_.v98) {
      v60 = 32;
    }
    else {
      if (v98_.v99 == nullptr) {
      LABEL_123:
        result = 0;
        goto LABEL_124;
      }
      v60 = 40;
    }
    (*(void (**)(__int64))(*v98_.v99 + v60))((__int64)v98_.v99);
    goto LABEL_123;
  }
  if (v100_.v101 == v100_.v100) {
    v32 = 32;
    goto LABEL_63;
  }
  if (v100_.v101 != nullptr) {
    v32 = 40;
  LABEL_63:
    (*(void (**)(__int64))(*v100_.v101 + v32))((__int64)v100_.v101);
  }
  if (v98_.v99 == v98_.v98) {
    v33 = 32;
    goto LABEL_68;
  }
  if (v98_.v99 != nullptr) {
    v33 = 40;
  LABEL_68:
    (*(void (**)(__int64))(*v98_.v99 + v33))((__int64)v98_.v99);
  }
LABEL_69:
  LODWORD(v81_.v84) = -1;
  LODWORD(v73_.v75) = -1;
  v81_.v82 = -1;
  v81_.v83 = 0xFFFFFFFF00000000LL;
  v73_.v73 = 0xFFFFFFFF00000000LL;
  v73_.v74 = 0xFFFFFFFF00000000LL;
  v81_.v81 = (__int64*)a1[1];
  if (v27 < 1 || v25 < 1) {
    goto LABEL_123;
  }
  v34 = v24 + v27;
  v69 = 0;
  v35 = 32 * v24;
  v36 = -1;
  v68 = v34;
  v37 = v70 + v25;
  v65 = -1;
  v38 = GameData_212cfb8[0];
  v64 = -1;
  v66 = -1;
  v39 = 0xFFFFFFFF00000000LL;
  do {
    v40 = v70;
    do {
      v41 = v35 + v40;
      if (((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v28 + 8LL) +
                       4LL * ((v35 + v40) >> 5) + 2120) >>
            v40) &
           1) != 0) {
        if (v41 >= 0x400) {
          v41 = 0;
        }
        v42 = *(_QWORD*)(*v38 + 16);
        v43 = *(__int16*)(v42 + 2LL * v41 + 2152);
        if ((v43 & 0x8000000000000000LL) == 0) {
          v44 = *(_QWORD*)(v42 + 8);
          if (v44 != 0) {
            v45 = v44 + 144LL * (int)v43;
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v45 + 272LL))(v45) & 1) !=
                    0 &&
                (v72 == 0 || (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 224LL))(
                                 v45) == v72)) {
              v46 = a1[1];
              v105 = v45;
              v106 = v46;
              if (v103_.v104 == nullptr) {
                goto LABEL_129;
              }
              if (((*(__int64 (**)(__int64, __int64, __int64))(
                       *v103_.v104 + 48LL))((__int64)v103_.v104, (__int64)&v106,
                                            (__int64)&v105) &
                   1) != 0) {
                v81_.v82 = __PAIR64__(v24, v40);
                if (AIThink_121a340(&v81_.v81, (__int64)&v73_.v73)) {
                  if (v36 < 0 ||
                      (v67 = v73_.v73,
                       v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v69 + 56LL))(
                           v69),
                       v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v69 + 64LL))(
                           v69),
                       v63 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 56LL))(
                           v45),
                       v49 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 64LL))(
                           v45),
                       (unsigned int)v39 < v67) ||
                      v47 < 0 ||
                      (unsigned int)v39 <= v67 &&
                          (v47 | (v48 << 16)) > (v63 | (v49 << 16))) {
                    v36 = v40;
                    v69 = v45;
                    v39 = v73_.v73;
                    v64 = DWORDn(v73_.v74, sizeof(v73_.v74) / 4 - 1);
                    v65 = v73_.v75;
                    v66 = v24;
                  }
                }
              }
            }
          }
        }
      }
      ++v40;
    } while (v40 < v37);
    ++v24;
    v35 += 32;
  } while (v24 < v68);
  if (v36 < 0) {
    goto LABEL_123;
  }
  GameRoutine_11f2b00(a1[1], *a1, DWORDn(v39, sizeof(v39) / 4 - 1));
  v50 = 2;
  v51 = *GameData_212cfd0[0];
  v52 = (_BYTE*)(a1[1] + 847);
  v53 = *GameData_212c878[0];
  while (1) {
    if (*(_WORD*)(v52 - 19) != 0 && (*(v52 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v53 + 64) +
                                       8LL * *(unsigned __int16*)(v52 - 19)) +
                            72LL) < 8u) {
      LODWORD(v50) = v50 - 2;
      goto LABEL_109;
    }
    if (*(_WORD*)(v52 - 11) != 0 && (*(v52 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v53 + 64) +
                                       8LL * *(unsigned __int16*)(v52 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v52 - 3) != 0 && (*v52 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v53 + 64) +
                                       8LL * *(unsigned __int16*)(v52 - 3)) +
                            72LL) < 8u) {
      goto LABEL_109;
    }
    v50 += 3;
    v52 += 24;
    if (v50 == 32) {
      v54 = v69;
      v56 = v64;
      v55 = v65;
      *(_QWORD*)(v51 + 44) = 0;
      *(_DWORD*)(v51 + 40) = -1;
      goto LABEL_112;
    }
  }
  LODWORD(v50) = v50 - 1;
LABEL_109:
  v57 = *(unsigned __int8*)(v51 + 8);
  v54 = v69;
  v56 = v64;
  v55 = v65;
  *(_DWORD*)(v51 + 40) = v50;
  if (v57 != 0 && game_UnitPool_Get((_BYTE*)(v51 + 8)) != nullptr) {
    v58 = &game_UnitPool_Get((_BYTE*)(v51 + 8))[(unsigned int)v50];
    v59 = *((_WORD*)v58 + 414);
    *(_BYTE*)(v51 + 46) = *((_BYTE*)v58 + 830);
    *(_WORD*)(v51 + 44) = v59;
    *(_BYTE*)(v51 + 47) = *((_BYTE*)v58 + 831);
    *(_DWORD*)(v51 + 48) = *((_DWORD*)v58 + 208);
  }
LABEL_112:
  *(_DWORD*)(v51 + 12) = v56;
  *(_DWORD*)(v51 + 16) = v55;
  if (v54 != 0) {
    *(_WORD*)(v51 + 318) =
        (*(__int64 (**)(__int64))(*(_QWORD*)v54 + 32LL))(v54);
    (*(void (**)(__int64))(*(_QWORD*)v54 + 56LL))(v54);
    (*(void (**)(__int64))(*(_QWORD*)v54 + 64LL))(v54);
  }
  else {
    *(_WORD*)(v51 + 318) = -1;
  }
  result = 1;
  *(_BYTE*)(v51 + 313) = v36;
  *(_BYTE*)(v51 + 314) = v66;
  *(_BYTE*)(v51 + 20) = 3;
LABEL_124:
  if (v103_.v104 == v103_.v103) {
    v62 = result;
    v61 = 32;
    goto LABEL_128;
  }
  if (v103_.v104 != nullptr) {
    v61 = 40;
    v62 = result;
  LABEL_128:
    (*(void (**)(__int64))(*v103_.v104 + v61))((__int64)v103_.v104);
    return v62;
  }
  return result;
}

_QWORD* game_129afa0(_QWORD* a1)
{
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v4_.v4[0] = GameData_2020b98;
  v4_.v5 = v4_.v4;
  GameRoutine_12a0ba0(v4_.v4, a1);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  return a1;
}

_QWORD* game_129b020(_QWORD* a1)
{
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v4_.v4[0] = GameData_2020c18;
  v4_.v5 = v4_.v4;
  GameRoutine_12a0ba0(v4_.v4, a1);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  return a1;
}

__int64 game_1847120(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
    char gap40_[8];
    __int64 (*v16[4])();
    __int64** v17;
    char gap88_[16];
    char* v18;
    __int64* v19;
    __int64 (*v20)();
    __int64 v21;
    char gap136_[8];
    __int64** v22;
  } f_;

  v1 = *(_QWORD*)GameData_212efa8[0];
  if (*(_QWORD*)GameData_212efa8[0] == 0) {
    return 0;
  }
  v2 = *(_DWORD*)(a1 + 96);
  if (v2 != 1) {
    if (v2 == 2) {
      v3 = *(_QWORD*)(a1 + 8);
      f_.v20 = (__int64 (*)())a1;
      f_.v21 = v1;
      f_.v18 = "MID_FastTravelMenu_Confirm";
      f_.v19 = (__int64*)GameData_20e4b20;
      f_.v16[0] = (__int64 (*)())GameData_20e4ba0;
      f_.v14[0] = GameData_20e4ba0;
      f_.v15 = f_.v14;
      f_.v22 = &f_.v19;
      f_.v17 = (__int64**)f_.v16;
      v4 = MapSortieMenu_871860(v3, (__int64)&f_.v18, (__int64)&f_.v19,
                                (__int64)f_.v16, (__int64)f_.v14);
      if (f_.v15 == f_.v14) {
        v5 = 32;
      }
      else {
        if (f_.v15 == nullptr) {
          goto LABEL_13;
        }
        v5 = 40;
      }
      (*(void (**)(__int64))(*f_.v15 + v5))((__int64)f_.v15);
    LABEL_13:
      if (f_.v17 == (__int64**)f_.v16) {
        v11 = 4;
      }
      else {
        if (f_.v17 == nullptr) {
          goto LABEL_18;
        }
        v11 = 5;
      }
      ((void (*)(__int64))(*f_.v17)[v11])((__int64)f_.v17);
    LABEL_18:
      if (f_.v22 == &f_.v19) {
        v12 = 4;
      }
      else {
        if (f_.v22 == nullptr) {
          goto LABEL_23;
        }
        v12 = 5;
      }
      ((void (*)(__int64))(*f_.v22)[v12])((__int64)f_.v22);
    LABEL_23:
      f_.v17 = (__int64**)f_.v16;
      f_.v22 = &f_.v19;
      f_.v16[0] = (__int64 (*)())(GameData_212d2b8 + 2);
      f_.v16[1] = game_sound_PlayDecideLightSe_ptr[0];
      f_.v19 = GameData_212d2b8 + 2;
      f_.v20 = game_sound_PlayDecideLightSe_ptr[0];
      GameRoutine_654050(&f_.v19, (_QWORD*)(v4 + 1152));
      if (f_.v22 == &f_.v19) {
        v13 = 4;
      }
      else {
        if (f_.v22 == nullptr) {
          goto LABEL_28;
        }
        v13 = 5;
      }
      ((void (*)(__int64))(*f_.v22)[v13])((__int64)f_.v22);
    LABEL_28:
      v9 = f_.v17;
      if (f_.v17 != (__int64**)f_.v16) {
        goto LABEL_29;
      }
    LABEL_10:
      v10 = 4;
    LABEL_31:
      ((void (*)(__int64))(*v9)[v10])((__int64)v9);
      return 12;
    }
    return 0;
  }
  v7 = *(_QWORD*)(a1 + 8);
  f_.v16[0] = (__int64 (*)()) "MID_FastTravelMenu_NotMove_Message";
  v8 = game_menu_Dialog__CreateBind_game_menu_Dialog(v7, (__int64)f_.v16);
  if (v8 == 0) {
    return 12;
  }
  f_.v22 = nullptr;
  GameRoutine_6680e0(&f_.v19, (_QWORD*)(v8 + 1248));
  v9 = f_.v22;
  if (f_.v22 == &f_.v19) {
    goto LABEL_10;
  }
LABEL_29:
  if (v9 != nullptr) {
    v10 = 5;
    goto LABEL_31;
  }
  return 12;
}

__int64 game_1856b10(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  unsigned int* v8;
  unsigned int* v9;
  char* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  struct {
    char gap0_[8];
    char* v20;
    __int64 v21;
    int v22;
    char gap28_[4];
    __int64 v23;
    void* v24;
    char gap48_[16];
    unsigned __int64* v25;
  } f_;

  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_27;
  }
  v3 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  if (v3 == 2) {
    if (game_gmap_GmapClock_instance_ == 0) {
      goto LABEL_36;
    }
    if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
        0) {
      goto LABEL_49;
    }
  LABEL_27:
    if (game_gmap_GmapClock_instance_ != 0) {
      v11 = "MID_SysMenu_NextTimeline_Invalid";
      if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v12 = *(_DWORD*)(game_GameModeData_instance_ + 64);
          if (v12 != 7) {
            v11 = "MID_SysMenu_HellGatePeriod_Invalid";
          }
          if (v12 == 6) {
            v11 = "MID_SysMenu_NextTimeline_Unreached_Part3";
          }
        }
        else {
          v11 = "MID_SysMenu_NextTimeline_Unreached";
        }
      }
    LABEL_38:
      v13 = *(_QWORD*)(a1 + 8);
      f_.v20 = v11;
      if (*(_QWORD*)(v13 + 152) != 0) {
        v14 = *(_QWORD*)(v13 + 152);
      }
      else {
        v14 = v13;
      }
      v15 =
          game_menu_Dialog__CreateBind_game_menu_Dialog(v14, (__int64)&f_.v20);
      if (v15 == 0) {
        return 12;
      }
      f_.v25 = nullptr;
      GameRoutine_6680e0(&f_.v23, (_QWORD*)(v15 + 1248));
      if (f_.v25 == (unsigned __int64*)&f_.v23) {
        v16 = 32;
      }
      else {
        if (f_.v25 == nullptr) {
          return 12;
        }
        v16 = 40;
      }
      (*(void (**)(__int64))(*f_.v25 + v16))((__int64)f_.v25);
      return 12;
    }
  LABEL_36:
    v11 = "MID_SysMenu_NextTimeline_Invalid";
    goto LABEL_38;
  }
  if (v3 != 3) {
  LABEL_19:
    v7 = *(_QWORD*)(v2 + 24);
    if (v7 != 0) {
      v8 = (unsigned int*)GameRoutine_88cee0(v7);
      if (v8 != nullptr) {
        v9 = game_gmap_SpotMgr_FindSpot(v8);
        if (v9 != nullptr &&
            *((_QWORD*)v9 + 15) != 0 & (*((_BYTE*)v9 + 178) & 1) != 0) {
          goto LABEL_49;
        }
      }
    }
    goto LABEL_27;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 64) != 6) {
    f_.v24 = &GameData_1adfa87;
    f_.v23 = game_HashString((__int64)&GameData_1adfa87);
    if (game_GameModeData_instance_ != 0) {
      v5 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&f_.v23);
      if (v5 != 0 && *(_DWORD*)(v5 + 32) != 0) {
        goto LABEL_27;
      }
    }
    v2 = game_GameModeData_instance_;
    if (*(_BYTE*)(GameData_22416c0 + 55) != 1 |
        game_GameModeData_instance_ == 0) {
      goto LABEL_27;
    }
    goto LABEL_19;
  }
  f_.v24 = &GameData_1ac4744;
  f_.v23 = game_HashString((__int64)&GameData_1ac4744);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_27;
  }
  v4 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&f_.v23);
  if (v4 == 0 || *(_DWORD*)(v4 + 32) == 0) {
    goto LABEL_27;
  }
LABEL_49:
  v18 = *(_QWORD*)(a1 + 8);
  f_.v21 = 0;
  f_.v22 = 0;
  if (*(_QWORD*)(v18 + 152) != 0) {
    v19 = *(_QWORD*)(v18 + 152);
  }
  else {
    v19 = v18;
  }
  GameRoutine_16ae780(v19, (__int64)&GameData_1a9f09e, (__int16*)&f_.v21);
  return 9;
}

__int64 game_199bc30(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  v2 = game_820d50(7);
  if ((game_GameModeData_instance_ == 0 ||
       (v3 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v2)) == 0 ||
       *(_DWORD*)(v3 + 32) == 0) &&
      GameRoutine_822320(3u)) {
    v5 = *(_QWORD*)(a1 + 88);
    v4 = a1 + 88;
    if (((*(__int64 (**)(__int64))(v5 + 24))(v4) & 1) == 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 56LL))(v4);
    }
    v16_.v16[0] = GameData_20f73c0;
    v16_.v16[1] = v4;
    v14_.v15 = v14_.v14;
    v16_.v17 = v16_.v16;
    v14_.v14[0] = GameData_20f7440;
    v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v4 + 40LL))(
        v4, (__int64)v16_.v16, (__int64)v14_.v14);
    if (v14_.v15 == v14_.v14) {
      v7 = 32;
    }
    else {
      if (v14_.v15 == nullptr) {
        goto LABEL_21;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v14_.v15 + v7))((__int64)v14_.v15);
  LABEL_21:
    if (v16_.v17 == v16_.v16) {
      v13 = 32;
    }
    else {
      if (v16_.v17 == nullptr) {
      LABEL_26:
        (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 48LL))(v4, v6);
        return 12;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v16_.v17 + v13))((__int64)v16_.v17);
    goto LABEL_26;
  }
  v8 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v8 + 152) != 0) {
    v9 = *(_QWORD*)(v8 + 152);
  }
  else {
    v9 = *(_QWORD*)(a1 + 8);
  }
  v14_.v14[0] = "MID_DepositoryMenu_Need_SEO_Message";
  v10 = game_menu_Dialog__CreateBind_game_menu_Dialog(v9, (__int64)v14_.v14);
  if (v10 == 0) {
    return 12;
  }
  v16_.v17 = nullptr;
  GameRoutine_6680e0(v16_.v16, (_QWORD*)(v10 + 1248));
  if (v16_.v17 == v16_.v16) {
    v11 = 32;
    goto LABEL_18;
  }
  if (v16_.v17 != nullptr) {
    v11 = 40;
  LABEL_18:
    (*(void (**)(__int64))(*v16_.v17 + v11))((__int64)v16_.v17);
  }
  return 12;
}

#pragma GCC visibility pop
