#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64 (*GameData_1ffa520[])();
extern __int64 (*GameData_1ffa620[])();
extern __int64 (*GameData_1ffa720[])();
extern __int64 (*GameData_1ffa820[])();
extern __int64 (*GameData_1ffa920[])();
extern __int64 (*GameData_1ffaa20[])();
extern __int64 (*GameData_1ffab20[])();
extern __int64 (*GameData_1ffac20[])();
extern __int64 (*GameData_1ffad20[])();
extern __int64 (*GameData_1ffae20[])();
extern __int64 (*GameData_1ffaf20[])();
extern __int64 (*GameData_1ffb020[])();
extern __int64 (*GameData_1ffb120[])();
extern __int64 (*GameData_1ffb220[])();
extern __int64 (*GameData_1ffb320[])();
extern __int64 (*GameData_1ffb420[])();
extern __int64 (*GameData_1ffb520[])();
extern __int64 (*GameData_1ffb650[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffa490[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffa5a0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffa6a0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffa7a0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffa8a0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffa9a0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffaaa0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffaba0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffaca0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffada0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffaea0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffafa0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffb0a0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffb1a0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffb2a0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffb3a0[])();
extern __int64 (*game_ProcInst_Unknown04_faabe0_ptr_1ffb4a0[])();
extern __int64 GameData_2229d78;
extern __int64 GameData_2229d80;
extern __int64 GameData_2229d88;
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 llvm_libcxx_21_libcxx_include___functional_faaf00();

__int64 llvm_libcxx_21_libcxx_include___functional_faaf00()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  struct {
    _QWORD v60[4];
    _QWORD* v61;
    char gap40_[8];
    _QWORD v62[4];
    _QWORD* v63;
    char gap88_[8];
    _QWORD v64[4];
    _QWORD* v65;
    char gap136_[8];
    _QWORD v66[4];
    _QWORD* v67;
    char gap184_[8];
    _QWORD v68[4];
    _QWORD* v69;
    char gap232_[8];
    _QWORD v70[4];
    _QWORD* v71;
    char gap280_[8];
    _QWORD v72[4];
    _QWORD* v73;
    char gap328_[8];
    _QWORD v74[4];
    _QWORD* v75;
    char gap376_[8];
    _QWORD v76[4];
    _QWORD* v77;
    char gap424_[8];
    _QWORD v78[4];
    _QWORD* v79;
    char gap472_[8];
    _QWORD v80[4];
    _QWORD* v81;
    char gap520_[8];
    _QWORD v82[4];
    _QWORD* v83;
    char gap568_[8];
    _QWORD v84[4];
    _QWORD* v85;
    char gap616_[8];
    _QWORD v86[4];
    _QWORD* v87;
    char gap664_[8];
    _QWORD v88[4];
    _QWORD* v89;
    char gap712_[8];
    _QWORD v90[4];
    _QWORD* v91;
    char gap760_[8];
    _QWORD v92[4];
    _QWORD* v93;
    char gap808_[8];
    _QWORD v94[4];
    _QWORD* v95;
    char gap856_[8];
    _QWORD v96[4];
    _QWORD* v97;
    char gap904_[8];
    _QWORD v98[4];
    _QWORD* v99;
    char gap952_[8];
    _QWORD v100[4];
    _QWORD* v101;
    char gap1000_[8];
    _QWORD v102[4];
    _QWORD* v103;
    char gap1048_[8];
    _QWORD v104[4];
    _QWORD* v105;
    char gap1096_[8];
    _QWORD v106[4];
    _QWORD* v107;
    char gap1144_[8];
    _QWORD v108[4];
    _QWORD* v109;
    char gap1192_[8];
    _QWORD v110[4];
    _QWORD* v111;
    char gap1240_[8];
    _QWORD v112[4];
    _QWORD* v113;
    char gap1288_[8];
    _QWORD v114[4];
    _QWORD* v115;
    char gap1336_[8];
    _QWORD v116[4];
    _QWORD* v117;
    char gap1384_[8];
    _QWORD v118[4];
    _QWORD* v119;
    char gap1432_[8];
    _QWORD v120[4];
    _QWORD* v121;
    char gap1480_[8];
    _QWORD v122[4];
    _QWORD* v123;
    char gap1528_[8];
    _QWORD v124[4];
    _QWORD* v125;
    char gap1576_[8];
    _QWORD v126[4];
    __int64 v127[2];
    _QWORD v128[4];
    __int64 v129[2];
    _QWORD v130[4];
    _QWORD* v131;
    char gap1720_[8];
    _QWORD v132[4];
    __int64 (**v133)();
    char gap1768_[24];
    _QWORD v134[2];
    _QWORD v135[4];
    _QWORD v136[2];
    char v137;
    char gap1857_[15];
    __int64 v138;
    __int64 v139;
    char gap1888_[16];
    _QWORD v140[6];
    _QWORD v141[6];
    char v142;
    char gap2001_[15];
    __int64 v143;
    __int64 v144;
    char gap2032_[16];
    _QWORD v145[6];
    _QWORD v146[6];
    char v147;
    char gap2145_[15];
    __int64 v148;
    __int64 v149;
    char gap2176_[16];
    _QWORD v150[6];
    _QWORD v151[6];
    char v152;
    char gap2289_[15];
    __int64 v153;
    __int64 v154;
    char gap2320_[16];
    _QWORD v155[6];
    _QWORD v156[6];
    char v157;
    char gap2433_[15];
    __int64 v158;
    __int64 v159;
    __int64 v160;
    char gap2472_[8];
    _QWORD v161[6];
    _QWORD v162[6];
    char v163;
    char gap2577_[15];
    __int64 v164;
    __int64 v165;
    char gap2608_[16];
    _QWORD v166[6];
    _QWORD v167[6];
    char v168;
    char gap2721_[15];
    __int64 v169;
    __int64 v170;
    char gap2752_[16];
    _QWORD v171[6];
    _QWORD v172[6];
    char v173;
    char gap2865_[15];
    char v174;
    char v175[31];
    _QWORD v176[6];
    _QWORD v177[6];
    char v178;
    char gap3009_[15];
    __int64 v179;
    __int64 v180;
    char gap3040_[16];
    _QWORD v181[6];
    _QWORD v182[6];
    char v183;
    char gap3153_[15];
    __int64 v184;
    __int64 v185;
    char gap3184_[16];
    _QWORD v186[6];
    _QWORD v187[6];
    char v188;
    char gap3297_[15];
    __int64 v189;
    __int64 v190;
    char gap3328_[16];
    _QWORD v191[6];
    _QWORD v192[6];
    char v193;
    char gap3441_[15];
    __int64 v194;
    __int64 v195;
    char gap3472_[16];
    _QWORD v196[6];
    _QWORD v197[6];
    char v198;
    char gap3585_[15];
    char v199;
    char v200[31];
    _QWORD v201[6];
    _QWORD v202[6];
    char v203;
    char gap3729_[15];
    __int64 v204;
    __int64 v205;
    char gap3760_[16];
    _QWORD v206[6];
    _QWORD v207[6];
    char v208;
    char gap3873_[15];
    __int64 v209;
    __int64 v210;
    char gap3904_[16];
    _QWORD v211[6];
    _QWORD v212[6];
    char v213;
    char gap4017_[15];
    __int64 v214;
    __int64 v215;
    char gap4048_[16];
    _QWORD v216[6];
    _QWORD v217[6];
    char v218;
    char gap4161_[15];
    __int64 v219;
    __int64 v220;
    char gap4192_[16];
    _QWORD v221[6];
    _QWORD v222[6];
    char v223;
  } f_;

  f_.v137 = 0;
  f_.v142 = 0;
  f_.v147 = 0;
  f_.v152 = 0;
  f_.v129[0] = (__int64)f_.v128;
  f_.v128[0] = GameData_1ffa520;
  f_.v135[0] = GameData_1ffa520;
  f_.v81 = f_.v80;
  f_.v125 = f_.v124;
  f_.v134[0] = &f_.v133;
  f_.v127[0] = (__int64)f_.v126;
  f_.v157 = 0;
  f_.v124[0] = GameData_1ffa620;
  f_.v141[0] = GameData_1ffa620;
  f_.v132[1] = 0x656D614E6CLL;
  f_.v160 = 0;
  f_.v139 = 1682533999;
  f_.v122[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa6a0;
  f_.v145[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa6a0;
  f_.v146[4] = f_.v146;
  f_.v132[0] = 0x6C75466165726118LL;
  f_.v130[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa490;
  f_.v133 = game_ProcInst_Unknown04_faabe0_ptr_1ffa490;
  f_.v131 = f_.v130;
  f_.v136[0] = f_.v135;
  f_.v194 = 0x6F6D5F6574616414LL;
  f_.v138 = 0x6974616972617616LL;
  f_.v144 = 2019521391;
  f_.v118[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa7a0;
  f_.v150[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa7a0;
  f_.v126[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa5a0;
  f_.v140[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa5a0;
  f_.v163 = 0;
  f_.v140[4] = f_.v140;
  f_.v145[4] = f_.v145;
  f_.v151[4] = f_.v151;
  f_.v141[4] = f_.v141;
  f_.v195 = 6845550;
  f_.v120[0] = GameData_1ffa720;
  f_.v146[0] = GameData_1ffa720;
  f_.v117 = f_.v116;
  f_.v119 = f_.v118;
  f_.v114[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa8a0;
  f_.v155[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa8a0;
  f_.v156[4] = f_.v156;
  f_.v123 = f_.v122;
  f_.v121 = f_.v120;
  f_.v116[0] = GameData_1ffa820;
  f_.v151[0] = GameData_1ffa820;
  f_.v115 = f_.v114;
  f_.v112[0] = GameData_1ffa920;
  f_.v156[0] = GameData_1ffa920;
  f_.v149 = 2036298607;
  f_.v150[4] = f_.v150;
  f_.v113 = f_.v112;
  f_.v111 = f_.v110;
  f_.v110[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa9a0;
  f_.v161[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffa9a0;
  f_.v107 = f_.v106;
  f_.v104[0] = GameData_1ffab20;
  f_.v167[0] = GameData_1ffab20;
  f_.v103 = f_.v102;
  f_.v143 = 0x50726579616C7016LL;
  f_.v148 = 0x50726579616C7016LL;
  f_.v153 = 0x50726579616C7016LL;
  f_.v196[4] = f_.v196;
  f_.v168 = 0;
  f_.v173 = 0;
  f_.v178 = 0;
  f_.v183 = 0;
  f_.v188 = 0;
  f_.v77 = f_.v76;
  f_.v108[0] = GameData_1ffaa20;
  f_.v162[0] = GameData_1ffaa20;
  f_.v154 = 2053075823;
  f_.v100[0] = GameData_1ffac20;
  f_.v172[0] = GameData_1ffac20;
  f_.v158 = 0x50726579616C701ELL;
  f_.v105 = f_.v104;
  f_.v155[4] = f_.v155;
  f_.v109 = f_.v108;
  f_.v165 = 7823705;
  f_.v99 = f_.v98;
  f_.v97 = f_.v96;
  f_.v174 = 16;
  f_.v199 = 16;
  f_.v164 = 0x5F6172656D616314LL;
  f_.v169 = 0x5F6172656D616318LL;
  f_.v166[4] = f_.v166;
  f_.v101 = f_.v100;
  f_.v170 = 0x6863746950LL;
  f_.v159 = 0x656C676E615F736FLL;
  strcpy(f_.v200, "date_day");
  f_.v161[4] = f_.v161;
  f_.v75 = f_.v74;
  f_.v162[4] = f_.v162;
  f_.v72[0] = GameData_1ffb320;
  f_.v207[0] = GameData_1ffb320;
  f_.v106[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffaaa0;
  f_.v166[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffaaa0;
  f_.v167[4] = f_.v167;
  f_.v102[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffaba0;
  f_.v171[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffaba0;
  f_.v171[4] = f_.v171;
  strcpy(f_.v175, "gamePart");
  f_.v71 = f_.v70;
  f_.v172[4] = f_.v172;
  f_.v96[0] = GameData_1ffad20;
  f_.v177[0] = GameData_1ffad20;
  f_.v176[4] = f_.v176;
  f_.v69 = f_.v68;
  f_.v95 = f_.v94;
  f_.v92[0] = GameData_1ffae20;
  f_.v182[0] = GameData_1ffae20;
  f_.v91 = f_.v90;
  f_.v93 = f_.v92;
  f_.v88[0] = GameData_1ffaf20;
  f_.v187[0] = GameData_1ffaf20;
  f_.v98[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffaca0;
  f_.v176[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffaca0;
  f_.v201[4] = f_.v201;
  f_.v177[4] = f_.v177;
  f_.v202[4] = f_.v202;
  f_.v209 = 0x696D5F6574616416LL;
  f_.v87 = f_.v86;
  f_.v179 = 0x616843656D616716LL;
  f_.v84[0] = GameData_1ffb020;
  f_.v192[0] = GameData_1ffb020;
  f_.v94[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffada0;
  f_.v181[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffada0;
  f_.v74[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb2a0;
  f_.v206[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb2a0;
  f_.v182[4] = f_.v182;
  f_.v207[4] = f_.v207;
  f_.v210 = 1702131054;
  f_.v90[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffaea0;
  f_.v186[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffaea0;
  f_.v70[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb3a0;
  f_.v211[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb3a0;
  f_.v187[4] = f_.v187;
  f_.v212[4] = f_.v212;
  f_.v86[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffafa0;
  f_.v191[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffafa0;
  f_.v66[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb4a0;
  f_.v216[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb4a0;
  f_.v82[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb0a0;
  f_.v196[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb0a0;
  f_.v180 = 1919251568;
  f_.v211[4] = f_.v211;
  f_.v192[4] = f_.v192;
  f_.v217[4] = f_.v217;
  f_.v197[4] = f_.v197;
  f_.v181[4] = f_.v181;
  f_.v67 = f_.v66;
  f_.v193 = 1;
  f_.v198 = 1;
  f_.v203 = 1;
  f_.v208 = 1;
  f_.v213 = 1;
  f_.v218 = 1;
  f_.v62[0] = game_ProcInst_Unknown04_faabe0_ptr;
  f_.v221[0] = game_ProcInst_Unknown04_faabe0_ptr;
  f_.v78[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb1a0;
  f_.v201[0] = game_ProcInst_Unknown04_faabe0_ptr_1ffb1a0;
  f_.v89 = f_.v88;
  f_.v73 = f_.v72;
  f_.v184 = 0x756F52656D616712LL;
  f_.v64[0] = GameData_1ffb520;
  f_.v217[0] = GameData_1ffb520;
  f_.v63 = f_.v62;
  f_.v60[0] = GameData_1ffb650;
  f_.v204 = 0x6F685F6574616412LL;
  f_.v185 = 25972;
  f_.v205 = 29301;
  f_.v186[4] = f_.v186;
  f_.v206[4] = f_.v206;
  f_.v85 = f_.v84;
  f_.v68[0] = GameData_1ffb420;
  f_.v212[0] = GameData_1ffb420;
  f_.v65 = f_.v64;
  f_.v189 = 0x65795F6574616412LL;
  f_.v190 = 29281;
  f_.v214 = 0x65735F6574616416LL;
  f_.v191[4] = f_.v191;
  f_.v83 = f_.v82;
  f_.v215 = 1684959075;
  f_.v80[0] = GameData_1ffb120;
  f_.v197[0] = GameData_1ffb120;
  f_.v216[4] = f_.v216;
  f_.v79 = f_.v78;
  f_.v61 = f_.v60;
  f_.v76[0] = GameData_1ffb220;
  f_.v202[0] = GameData_1ffb220;
  f_.v219 = 0x6E69746867696C18LL;
  f_.v220 = 0x6570795467LL;
  f_.v221[4] = f_.v221;
  f_.v222[4] = f_.v222;
  v0 = fw_memory_g_heap_manager_ptr;
  v1 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  f_.v222[0] = GameData_1ffb650;
  f_.v223 = 1;
  v2 = fw_memory_HeapManager_Allocate(v1, 2592, 16, 0);
  v3 = 0;
  GameData_2229d78 = v2;
  GameData_2229d80 = v2;
  GameData_2229d88 = v2 + 2592;
  do {
    v6 = &f_.v132[v3];
    v7 = (__int64*)(v2 + v3 * 8);
    if ((f_.v132[v3] & 1) != 0) {
      fw_text_String_CopyTerminated(v7, v6[2], v6[1]);
    }
    else {
      v8 = *v6;
      v9 = v6[1];
      v10 = v6[2];
      *v7 = v8;
      v7[1] = v9;
      v7[2] = v10;
    }
    v11 = v2 + v3 * 8;
    v12 = (_QWORD*)f_.v134[v3];
    if (v12 != nullptr) {
      if (&f_.v132[v3 + 4] == v12) {
        *(_QWORD*)(v2 + v3 * 8 + 64) = v11 + 32;
        (*(void (**)(__int64, __int64))(*v12 + 24LL))((__int64)v12, v11 + 32);
      }
      else {
        *(_QWORD*)(v2 + v3 * 8 + 64) =
            (*(__int64 (**)(__int64))(*v12 + 16LL))((__int64)v12);
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v13 = v2 + v3 * 8;
    v14 = (_QWORD*)f_.v136[v3];
    if (v14 != nullptr) {
      if (&f_.v135[v3] == v14) {
        *(_QWORD*)(v2 + v3 * 8 + 112) = v13 + 80;
        (*(void (**)(__int64, __int64))(*v14 + 24LL))((__int64)v14, v13 + 80);
      }
      else {
        *(_QWORD*)(v2 + v3 * 8 + 112) =
            (*(__int64 (**)(__int64))(*v14 + 16LL))((__int64)v14);
      }
    }
    else {
      *(_QWORD*)(v13 + 112) = 0;
    }
    v4 = &f_.v132[v3];
    v5 = v2 + v3 * 8;
    v3 += 18;
    *(_BYTE*)(v5 + 128) = *((_BYTE*)v4 + 128);
  } while (v3 != 324);
  v15 = v2 + 2592;
  v16 = 324;
  GameData_2229d80 = v15;
  do {
    v17 = (__int64*)f_.v130[v16 + 2];
    if (&f_.v129[v16] == v17) {
      v18 = 32;
    }
    else {
      if (v17 == nullptr) {
        goto LABEL_23;
      }
      v18 = 40;
    }
    (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
  LABEL_23:
    v19 = (__int64*)f_.v128[v16 + 2];
    if (&f_.v127[v16] == v19) {
      v20 = 32;
      goto LABEL_27;
    }
    if (v19 != nullptr) {
      v20 = 40;
    LABEL_27:
      (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
    }
    if ((f_.v126[v16] & 1) != 0) {
      v21 = f_.v126[v16 + 2];
      if (v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v22, v21);
      }
    }
    v16 -= 18;
  } while (v16 != 0);
  if (f_.v61 == f_.v60) {
    v23 = 32;
  LABEL_38:
    (*(void (**)(__int64))(*f_.v61 + v23))((__int64)f_.v61);
  }
  else if (f_.v61 != nullptr) {
    v23 = 40;
    goto LABEL_38;
  }
  if (f_.v63 == f_.v62) {
    v24 = 32;
  LABEL_43:
    (*(void (**)(__int64))(*f_.v63 + v24))((__int64)f_.v63);
  }
  else if (f_.v63 != nullptr) {
    v24 = 40;
    goto LABEL_43;
  }
  if (f_.v65 == f_.v64) {
    v25 = 32;
  LABEL_48:
    (*(void (**)(__int64))(*f_.v65 + v25))((__int64)f_.v65);
  }
  else if (f_.v65 != nullptr) {
    v25 = 40;
    goto LABEL_48;
  }
  if (f_.v67 == f_.v66) {
    v26 = 32;
  LABEL_53:
    (*(void (**)(__int64))(*f_.v67 + v26))((__int64)f_.v67);
  }
  else if (f_.v67 != nullptr) {
    v26 = 40;
    goto LABEL_53;
  }
  if (f_.v69 == f_.v68) {
    v27 = 32;
  LABEL_58:
    (*(void (**)(__int64))(*f_.v69 + v27))((__int64)f_.v69);
  }
  else if (f_.v69 != nullptr) {
    v27 = 40;
    goto LABEL_58;
  }
  if (f_.v71 == f_.v70) {
    v28 = 32;
  LABEL_63:
    (*(void (**)(__int64))(*f_.v71 + v28))((__int64)f_.v71);
  }
  else if (f_.v71 != nullptr) {
    v28 = 40;
    goto LABEL_63;
  }
  if (f_.v73 == f_.v72) {
    v29 = 32;
  LABEL_68:
    (*(void (**)(__int64))(*f_.v73 + v29))((__int64)f_.v73);
  }
  else if (f_.v73 != nullptr) {
    v29 = 40;
    goto LABEL_68;
  }
  if (f_.v75 == f_.v74) {
    v30 = 32;
  LABEL_73:
    (*(void (**)(__int64))(*f_.v75 + v30))((__int64)f_.v75);
  }
  else if (f_.v75 != nullptr) {
    v30 = 40;
    goto LABEL_73;
  }
  if (f_.v77 == f_.v76) {
    v31 = 32;
  LABEL_78:
    (*(void (**)(__int64))(*f_.v77 + v31))((__int64)f_.v77);
  }
  else if (f_.v77 != nullptr) {
    v31 = 40;
    goto LABEL_78;
  }
  if (f_.v79 == f_.v78) {
    v32 = 32;
  LABEL_83:
    (*(void (**)(__int64))(*f_.v79 + v32))((__int64)f_.v79);
  }
  else if (f_.v79 != nullptr) {
    v32 = 40;
    goto LABEL_83;
  }
  if (f_.v81 == f_.v80) {
    v33 = 32;
  LABEL_88:
    (*(void (**)(__int64))(*f_.v81 + v33))((__int64)f_.v81);
  }
  else if (f_.v81 != nullptr) {
    v33 = 40;
    goto LABEL_88;
  }
  if (f_.v83 == f_.v82) {
    v34 = 32;
  LABEL_93:
    (*(void (**)(__int64))(*f_.v83 + v34))((__int64)f_.v83);
  }
  else if (f_.v83 != nullptr) {
    v34 = 40;
    goto LABEL_93;
  }
  if (f_.v85 == f_.v84) {
    v35 = 32;
  LABEL_98:
    (*(void (**)(__int64))(*f_.v85 + v35))((__int64)f_.v85);
  }
  else if (f_.v85 != nullptr) {
    v35 = 40;
    goto LABEL_98;
  }
  if (f_.v87 == f_.v86) {
    v36 = 32;
  LABEL_103:
    (*(void (**)(__int64))(*f_.v87 + v36))((__int64)f_.v87);
  }
  else if (f_.v87 != nullptr) {
    v36 = 40;
    goto LABEL_103;
  }
  if (f_.v89 == f_.v88) {
    v37 = 32;
  LABEL_108:
    (*(void (**)(__int64))(*f_.v89 + v37))((__int64)f_.v89);
  }
  else if (f_.v89 != nullptr) {
    v37 = 40;
    goto LABEL_108;
  }
  if (f_.v91 == f_.v90) {
    v38 = 32;
  LABEL_113:
    (*(void (**)(__int64))(*f_.v91 + v38))((__int64)f_.v91);
  }
  else if (f_.v91 != nullptr) {
    v38 = 40;
    goto LABEL_113;
  }
  if (f_.v93 == f_.v92) {
    v39 = 32;
  LABEL_118:
    (*(void (**)(__int64))(*f_.v93 + v39))((__int64)f_.v93);
  }
  else if (f_.v93 != nullptr) {
    v39 = 40;
    goto LABEL_118;
  }
  if (f_.v95 == f_.v94) {
    v40 = 32;
  LABEL_123:
    (*(void (**)(__int64))(*f_.v95 + v40))((__int64)f_.v95);
  }
  else if (f_.v95 != nullptr) {
    v40 = 40;
    goto LABEL_123;
  }
  if (f_.v97 == f_.v96) {
    v41 = 32;
  LABEL_128:
    (*(void (**)(__int64))(*f_.v97 + v41))((__int64)f_.v97);
  }
  else if (f_.v97 != nullptr) {
    v41 = 40;
    goto LABEL_128;
  }
  if (f_.v99 == f_.v98) {
    v42 = 32;
  LABEL_133:
    (*(void (**)(__int64))(*f_.v99 + v42))((__int64)f_.v99);
  }
  else if (f_.v99 != nullptr) {
    v42 = 40;
    goto LABEL_133;
  }
  if (f_.v101 == f_.v100) {
    v43 = 32;
  LABEL_138:
    (*(void (**)(__int64))(*f_.v101 + v43))((__int64)f_.v101);
  }
  else if (f_.v101 != nullptr) {
    v43 = 40;
    goto LABEL_138;
  }
  if (f_.v103 == f_.v102) {
    v44 = 32;
  LABEL_143:
    (*(void (**)(__int64))(*f_.v103 + v44))((__int64)f_.v103);
  }
  else if (f_.v103 != nullptr) {
    v44 = 40;
    goto LABEL_143;
  }
  if (f_.v105 == f_.v104) {
    v45 = 32;
  LABEL_148:
    (*(void (**)(__int64))(*f_.v105 + v45))((__int64)f_.v105);
  }
  else if (f_.v105 != nullptr) {
    v45 = 40;
    goto LABEL_148;
  }
  if (f_.v107 == f_.v106) {
    v46 = 32;
  LABEL_153:
    (*(void (**)(__int64))(*f_.v107 + v46))((__int64)f_.v107);
  }
  else if (f_.v107 != nullptr) {
    v46 = 40;
    goto LABEL_153;
  }
  if (f_.v109 == f_.v108) {
    v47 = 32;
  LABEL_158:
    (*(void (**)(__int64))(*f_.v109 + v47))((__int64)f_.v109);
  }
  else if (f_.v109 != nullptr) {
    v47 = 40;
    goto LABEL_158;
  }
  if (f_.v111 == f_.v110) {
    v48 = 32;
  LABEL_163:
    (*(void (**)(__int64))(*f_.v111 + v48))((__int64)f_.v111);
  }
  else if (f_.v111 != nullptr) {
    v48 = 40;
    goto LABEL_163;
  }
  if (f_.v113 == f_.v112) {
    v49 = 32;
  LABEL_168:
    (*(void (**)(__int64))(*f_.v113 + v49))((__int64)f_.v113);
  }
  else if (f_.v113 != nullptr) {
    v49 = 40;
    goto LABEL_168;
  }
  if (f_.v115 == f_.v114) {
    v50 = 32;
  LABEL_173:
    (*(void (**)(__int64))(*f_.v115 + v50))((__int64)f_.v115);
  }
  else if (f_.v115 != nullptr) {
    v50 = 40;
    goto LABEL_173;
  }
  if (f_.v117 == f_.v116) {
    v51 = 32;
  LABEL_178:
    (*(void (**)(__int64))(*f_.v117 + v51))((__int64)f_.v117);
  }
  else if (f_.v117 != nullptr) {
    v51 = 40;
    goto LABEL_178;
  }
  if (f_.v119 == f_.v118) {
    v52 = 32;
  LABEL_183:
    (*(void (**)(__int64))(*f_.v119 + v52))((__int64)f_.v119);
  }
  else if (f_.v119 != nullptr) {
    v52 = 40;
    goto LABEL_183;
  }
  if (f_.v121 == f_.v120) {
    v53 = 32;
  LABEL_188:
    (*(void (**)(__int64))(*f_.v121 + v53))((__int64)f_.v121);
  }
  else if (f_.v121 != nullptr) {
    v53 = 40;
    goto LABEL_188;
  }
  if (f_.v123 == f_.v122) {
    v54 = 32;
  LABEL_193:
    (*(void (**)(__int64))(*f_.v123 + v54))((__int64)f_.v123);
  }
  else if (f_.v123 != nullptr) {
    v54 = 40;
    goto LABEL_193;
  }
  if (f_.v125 == f_.v124) {
    v55 = 32;
  LABEL_198:
    (*(void (**)(__int64))(*f_.v125 + v55))((__int64)f_.v125);
  }
  else if (f_.v125 != nullptr) {
    v55 = 40;
    goto LABEL_198;
  }
  if ((_QWORD*)f_.v127[0] == f_.v126) {
    v56 = 32;
  LABEL_203:
    (*(void (**)(__int64))(*(_QWORD*)f_.v127[0] + v56))(f_.v127[0]);
  }
  else if (f_.v127[0] != 0) {
    v56 = 40;
    goto LABEL_203;
  }
  if ((_QWORD*)f_.v129[0] == f_.v128) {
    v57 = 32;
  LABEL_208:
    (*(void (**)(__int64))(*(_QWORD*)f_.v129[0] + v57))(f_.v129[0]);
  }
  else if (f_.v129[0] != 0) {
    v57 = 40;
    goto LABEL_208;
  }
  if (f_.v131 == f_.v130) {
    v58 = 32;
  LABEL_213:
    (*(void (**)(__int64))(*f_.v131 + v58))((__int64)f_.v131);
  }
  else if (f_.v131 != nullptr) {
    v58 = 40;
    goto LABEL_213;
  }
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
