#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_BGM_getFirstHandle(PSEUDO_X8);
__attribute__((swiftcall)) void snd_BGM_getFirstNameString(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void snd_findSlot_100a50(PSEUDO_X8, _QWORD);
__int64 GameAlloc_e1ba0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameAlloc_e5920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameManager_a21ca0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameManager_a223a0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_e7db0(_QWORD);
__int64 GameRoutine_ecb40(void);
__int64 GameRoutine_efde00(_QWORD);
__int64 GameRoutine_efdf40(_QWORD, _QWORD);
__int64 Manager_c43b70(_QWORD);
__int64 Seq_114d520(_QWORD, _QWORD);
__int64 Seq_114d680(void);
__int64 WaveMultiVoice_183050(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              long double);
__int64 WaveMultiVoice_1830e0(_QWORD);
__int64 WaveMultiVoice_183130(_QWORD);
__int64 WaveMultiVoice_1832f0(_QWORD, _QWORD);
__int64 WaveMultiVoice_183350(_QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD);
__int64 game_Force_Find(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_1905280(_QWORD);
__int64 snd_19057e0(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 snd_Voice_hasFeature(_QWORD, _QWORD);
__int64 snd_a2fe30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                   _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_getDefineInt(_QWORD);
__int64 snd_getUnknown10(_QWORD);
__int64 snd_startSlotFadeVolume_100ca0(_QWORD, _QWORD, float);
__int64 snd_stopKind(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _QWORD GameData_1fbdbc8[10];
extern __int64 (*GameData_1fbdda0[])();
extern __int64 (*GameData_1fbe680[])();
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212fc38[2];
extern __int64* snd_g_memory_ptr[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_212c6c8;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212f500[8];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_1a9f09e;
extern char game_facility_g_memory_sound_playing;
extern int GameData_21fa938;
extern int GameData_21fa93c;
extern int GameData_21fa940;
extern int GameData_21fa964;
float snd_Fade_getTime(_QWORD);
float snd_getDefineValue(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 (***snd_a203a0(__int64 (***result)()))();

__int64 (***snd_a203a0(__int64 (***result)()))()
{
  __int64 (***v1)();
  __int64 (**v2)();
  __int64 (**v3)();
  __int64 (**v4)();
  __int64 (**v5)();
  __int64 (**v6)();
  char* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  int v20;
  int v21;
  int v22;
  _BOOL4 v24;
  char v25;
  char v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  char v34;
  bool v35;
  __int64 (**v36)();
  char v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int16* v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 (**v48)();
  char* v49;
  __int64 (**v50)();
  int v51;
  const char* v52;
  const char* v53;
  __int64 (**v54)();
  __int64 (**v55)();
  __int64 (**v56)();
  __int64 (**v57)();
  __int64 (**v58)();
  __int64 (**v59)();
  __int64 (**v60)();
  __int64 (**v61)();
  __int64 (**v62)();
  __int64 (**v63)();
  char* v64;
  char* v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  double v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  long double v79;
  __int64 v80;
  __int64 v81;
  long double v82;
  __int64 v83;
  double v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  long double v88;
  __int64 v89;
  __int64 v90;
  long double v91;
  __int64 v92;
  double v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  long double v97;
  __int64 v98;
  __int64 v99;
  long double v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64 (**v104)();
  char* v105;
  __int64 v106;
  __int64 v107;
  int v108;
  bool v109;
  __int64 (**v111)();
  char* v112;
  __int64 v113;
  __int64 v114;
  int v115;
  bool v116;
  unsigned __int64 v118;
  __int64 (**v119)();
  __int64 (*v120)();
  __int64 (*v121)();
  int v122;
  _BOOL4 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned int v129;
  int v130;
  float v131;
  float v132;
  double v133;
  unsigned int v134;
  __n128 v135;
  long double v136;
  char v137;
  __int64 v138;
  __int64 v139;
  int v140;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  int v146;
  __int64 v147;
  char v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  int v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  int v157;
  __int64 v158;
  char v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  unsigned int v164;
  float v165;
  __n128 v166;
  long double v167;
  int v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  unsigned int v173;
  float v174;
  __n128 v175;
  long double v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  unsigned int v181;
  float v182;
  __n128 v183;
  long double v184;
  __int64 v185;
  __int64 v186;
  double v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  long double v191;
  int v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  _QWORD* v196;
  __int64 v197;
  __int64 v198;
  int v199;
  int v200;
  _BYTE* v201;
  int v202;
  float v203;
  _BOOL4 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  _QWORD v209[4];
  __int64 (***v210)();
  __int64 (**v211)();
  __int64 (**v212)();
  char* v213;
  __int64 (**v214)();
  unsigned __int64 v215;
  __int64 (**v216)();
  __int64 v217;
  int v218;
  __int64 v219;
  int v220;
  _BYTE v221[16];
  __int64 (**v222)();
  __int64 (**v223)();
  char* v224;
  __int64 (***v225)();

  if (*((_BYTE*)result + 48) == 1) {
    v1 = result;
    if (*((_BYTE*)result + 706) != 1 || (GameRoutine_ecb40() & 1) == 0) {
      goto LABEL_29;
    }
    v2 = (__int64 (**)())(*((_BYTE*)v1 + 656) >> 1);
    if (((_BYTE)v1[82] & 1) != 0) {
      v2 = v1[83];
    }
    if (v2 == nullptr) {
    LABEL_28:
      *((_BYTE*)v1 + 706) = 0;
    LABEL_29:
      if (*((int*)v1 + 154) <= 0 && *((_DWORD*)v1 + 155) <= 0 &&
          *((_DWORD*)v1 + 156) <= 0 && *((_DWORD*)v1 + 157) <= 0 &&
          *((_DWORD*)v1 + 158) <= 0 && *((_DWORD*)v1 + 159) < 1) {
        goto LABEL_190;
      }
      v16 = *((_BYTE*)v1 + 2816);
      v17 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     40LL);
      v18 = GameData_212ce90[0];
      v19 = (_QWORD*)GameData_212c6c8;
      if (v17 != 0) {
        v20 = *(_DWORD*)(v17 + 284);
      }
      else {
        if (*(_QWORD*)GameData_212c6c8 == 0) {
          if (*GameData_212ce90[0] != 0) {
            v24 = false;
            v26 = (*(_BYTE*)(*GameData_212ce90[0] + 21) & 8) != 0;
          }
          else if (*(_QWORD*)GameData_212f500[0] != 0) {
            v24 = false;
            v26 = (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212f500[0] + 56LL) +
                             8LL) &
                   4) != 0;
          }
          else {
            v32 = *GameData_212fc38[0];
            if (*GameData_212fc38[0] != 0) {
              if ((*(_BYTE*)(v32 + 280) & 1) != 0) {
                v33 = *(_QWORD*)(v32 + 296);
              }
              else {
                v33 = v32 + 281;
              }
              v26 = Seq_114d520(v32, v33);
            }
            else {
              v26 = 0;
            }
            v24 = false;
          }
          goto LABEL_87;
        }
        if (game_gmap_GmapClock_instance_ != 0) {
          v20 = *(__int16*)(game_gmap_GmapClock_instance_ + 14);
        }
        else {
          v20 = 0;
        }
      }
      v21 = snd_getDefineInt("SetTime_Night");
      v22 = snd_getDefineInt("SetTime_Day");
      v24 = v21 <= v20 || v20 < v22;
      v25 = v24 ^ (*((_DWORD*)v1 + 702) == 1);
      if (*v18 != 0) {
        v26 = (*(_BYTE*)(*v18 + 21) & 8) != 0;
      }
      else if (*(_QWORD*)GameData_212f500[0] != 0) {
        v26 =
            (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212f500[0] + 56LL) + 8LL) &
             4) != 0;
      }
      else {
        v27 = *GameData_212fc38[0];
        if (*GameData_212fc38[0] != 0) {
          if ((*(_BYTE*)(v27 + 280) & 1) != 0) {
            v28 = *(_QWORD*)(v27 + 296);
          }
          else {
            v28 = v27 + 281;
          }
          v26 = Seq_114d520(v27, v28);
        }
        else {
          v26 = 0;
        }
      }
      if ((v25 & 1) != 0) {
        v29 = 1;
        v30 = *v18;
        if (*v18 == 0) {
          goto LABEL_73;
        }
        goto LABEL_88;
      }
    LABEL_87:
      v29 = v26 ^ (*((_DWORD*)v1 + 703) == 1);
      v30 = *v18;
      if (*v18 == 0) {
      LABEL_73:
        if (*(_QWORD*)GameData_212f500[0] != 0) {
          v31 = (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212f500[0] + 56LL) +
                           8LL) &
                 8) != 0;
        }
        else if (*GameData_212fc38[0] != 0) {
          v31 = Seq_114d680();
        }
        else {
          v31 = *(_QWORD*)GameData_212dbc0[0] != 0 &&
                *(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 160LL) == 1;
        }
        goto LABEL_89;
      }
    LABEL_88:
      v31 = (*(_BYTE*)(v30 + 21) & 0x10) != 0;
    LABEL_89:
      v34 = v16 | v31 & 1;
      v35 = v34 != *((_BYTE*)v1 + 2816);
      if (((_BYTE)v1[392] & 1) != 0) {
        fw_text_String_CopyTerminated(&v214);
      }
      else {
        v36 = v1[393];
        v214 = v1[392];
        v215 = (unsigned __int64)v36;
        v216 = v1[394];
      }
      v37 = v29 | v35;
      v38 = *(_QWORD*)GameData_212c6c0[0];
      if (*(_QWORD*)GameData_212c6c0[0] != 0 && *v19 != 0) {
        v39 = *(_QWORD*)(v38 + 16);
        v40 = *(_QWORD*)(v38 + 24);
        if (game_gmap_GmapClock_instance_ != 0) {
          v41 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
        }
        else {
          v41 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
        }
        if (v39 != v40) {
          while (*v41 != *(unsigned __int16*)(v39 + 4) ||
                 v41[1] != *(unsigned __int8*)(v39 + 6) ||
                 v41[2] != *(unsigned __int8*)(v39 + 7)) {
            v39 += 368;
            if (v39 == v40) {
              goto LABEL_117;
            }
          }
        }
        if (v39 != v40 && v39 != 0) {
          v42 = *(unsigned __int8*)(v39 + 1);
          if (*(_BYTE*)(v39 + 1) != 0) {
            v43 = (_QWORD*)(v39 + 16);
            while (*((_BYTE*)v43 - 8) != 6) {
              v43 += 3;
              if (--v42 == 0) {
                goto LABEL_117;
              }
            }
            v44 = *v43;
            if ((GameRoutine_efdf40(*v43, v41) & 1) != 0 &&
                (GameRoutine_efde00(v44) & 1) == 0) {
              v45 = *(char**)(v44 + 48);
            }
            else {
              v45 = &GameData_1a9f09e;
            }
            GameRoutine_60a020(v1 + 392, v45);
          }
        }
      LABEL_117:
        if (((unsigned __int8)v214 & 1) != 0) {
          v46 = v215;
        }
        else {
          v46 = (unsigned __int64)(unsigned __int8)v214 >> 1;
        }
        v47 = *((unsigned __int8*)v1 + 3136);
        v48 = v1[393];
        if ((v47 & 1) == 0) {
          v48 = (__int64 (**)())(v47 >> 1);
        }
        if ((__int64 (**)())v46 == v48) {
          v49 =
              ((unsigned __int8)v214 & 1) != 0 ? (char*)v216 : (char*)&v214 + 1;
          v50 = (v47 & 1) != 0 ? v1[394] : (__int64 (**)())((char*)v1 + 3137);
          if ((((unsigned int)GameRoutine_1a09cf0(v49, v50, v46) != 0) |
               v37 & 1) == 0) {
            goto LABEL_185;
          }
        }
      }
      else if ((v37 & 1) == 0) {
      LABEL_185:
        if (((unsigned __int8)v214 & 1) != 0 && v216 != nullptr) {
          v67 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v67 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v216);
        }
      LABEL_190:
        if (*((_BYTE*)v1 + 602) != 1) {
          goto LABEL_201;
        }
        snd_Fade_Fade_10cb00(&v222, "FadeTime_AllSounds_Skip_Out");
        snd_stopKind(16, &v222);
        v68 = snd_Fade_Destroy_Fade(&v222);
        v69 = snd_getUnknown10(v68);
        result = (__int64 (***)())v209;
        v210 = (__int64 (***)())v209;
        v209[0] = GameData_1fbdda0;
        v70 = **(_QWORD**)(v69 + 24);
        if (v70 == 0) {
          goto LABEL_199;
        }
        v71 = *(_QWORD*)(v70 + 5616);
        result = (__int64 (***)())v209;
        v222 = (__int64 (**)())v70;
        while (1) {
          ((void (*)(__int64 (***)(), __int64 (***)()))(*result)[6])(result,
                                                                     &v222);
          result = v210;
          if (v71 == 0) {
            break;
          }
          v222 = (__int64 (**)())v71;
          v71 = *(_QWORD*)(v71 + 5616);
          if (v210 == nullptr) {
          LABEL_195:
            GameRoutine_60a310(result, v72);
          }
        }
        if (v210 == v209) {
        LABEL_199:
          v73 = 4;
        }
        else {
          if (v210 == nullptr) {
            goto LABEL_201;
          }
          v73 = 5;
        }
        ((void (*)(__int64 (***)()))(*result)[v73])(result);
      LABEL_201:
        snd_findSlot_100a50((void*)(&v222), &GameData_21fa938);
        v74 = snd_fnd_WeakHandle_get(&v222);
        if (v74 == 0) {
          goto LABEL_212;
        }
        v76 = v74;
        if (*((_BYTE*)v1 + 601) == 1) {
          if (*((_BYTE*)v1 + 602) != 1) {
            goto LABEL_207;
          }
          LODWORD(v75) = 1128792064;
          *((_QWORD*)&v79 + 1) =
              LANES128_OF(snd_Fade_Fade_10c830(&v222, v75)).n128_u64[1];
          v77 = *(_QWORD*)(v76 - 5552);
          v78 = v76 - 5552;
          *(_QWORD*)&v79 = 0;
        }
        else {
          *(__n128*)&v79 = snd_Fade_Fade_10c830(&v222, 0.0);
          v77 = *(_QWORD*)(v76 - 5552);
          LODWORD(v79) = 1.0;
          v78 = v76 - 5552;
        }
        (*(void (**)(__int64, __int64 (***)(), long double))(v77 + 272))(
            v78, &v222, v79);
        snd_Fade_Destroy_Fade(&v222);
      LABEL_207:
        if (*((_BYTE*)v1 + 608) == 1) {
          *((_QWORD*)&v82 + 1) =
              LANES128_OF(snd_Fade_Fade_10c830(&v222, 0.0)).n128_u64[1];
          v80 = *(_QWORD*)(v76 - 5552);
          v81 = v76 - 5552;
          *(_QWORD*)&v82 = 0;
        }
        else {
          if (*((_BYTE*)v1 + 609) != 1) {
            goto LABEL_212;
          }
          LODWORD(v75) = 1148846080;
          *(__n128*)&v82 = snd_Fade_Fade_10c830(&v222, v75);
          v80 = *(_QWORD*)(v76 - 5552);
          LODWORD(v82) = 1.0;
          v81 = v76 - 5552;
        }
        (*(void (**)(__int64, __int64 (***)(), long double))(v80 + 288))(
            v81, &v222, v82);
        snd_Fade_Destroy_Fade(&v222);
      LABEL_212:
        snd_findSlot_100a50((void*)(&v222), &GameData_21fa93c);
        v83 = snd_fnd_WeakHandle_get(&v222);
        if (v83 == 0) {
          goto LABEL_223;
        }
        v85 = v83;
        if (*((_BYTE*)v1 + 601) == 1) {
          if (*((_BYTE*)v1 + 602) != 1) {
            goto LABEL_218;
          }
          LODWORD(v84) = 1128792064;
          *((_QWORD*)&v88 + 1) =
              LANES128_OF(snd_Fade_Fade_10c830(&v222, v84)).n128_u64[1];
          v86 = *(_QWORD*)(v85 - 5552);
          v87 = v85 - 5552;
          *(_QWORD*)&v88 = 0;
        }
        else {
          *(__n128*)&v88 = snd_Fade_Fade_10c830(&v222, 0.0);
          v86 = *(_QWORD*)(v85 - 5552);
          LODWORD(v88) = 1.0;
          v87 = v85 - 5552;
        }
        (*(void (**)(__int64, __int64 (***)(), long double))(v86 + 272))(
            v87, &v222, v88);
        snd_Fade_Destroy_Fade(&v222);
      LABEL_218:
        if (*((_BYTE*)v1 + 608) == 1) {
          *((_QWORD*)&v91 + 1) =
              LANES128_OF(snd_Fade_Fade_10c830(&v222, 0.0)).n128_u64[1];
          v89 = *(_QWORD*)(v85 - 5552);
          v90 = v85 - 5552;
          *(_QWORD*)&v91 = 0;
        }
        else {
          if (*((_BYTE*)v1 + 609) != 1) {
            goto LABEL_223;
          }
          LODWORD(v84) = 1148846080;
          *(__n128*)&v91 = snd_Fade_Fade_10c830(&v222, v84);
          v89 = *(_QWORD*)(v85 - 5552);
          LODWORD(v91) = 1.0;
          v90 = v85 - 5552;
        }
        (*(void (**)(__int64, __int64 (***)(), long double))(v89 + 288))(
            v90, &v222, v91);
        snd_Fade_Destroy_Fade(&v222);
      LABEL_223:
        snd_findSlot_100a50((void*)(&v222), &GameData_21fa940);
        v92 = snd_fnd_WeakHandle_get(&v222);
        if (v92 == 0) {
          goto LABEL_236;
        }
        v94 = v92;
        if ((*((int*)v1 + 159) > 0 || *((int*)v1 + 162) >= 1) &&
            *((_BYTE*)v1 + 601) == 1) {
          if (*((_BYTE*)v1 + 602) != 1) {
            goto LABEL_231;
          }
          LODWORD(v93) = 1128792064;
          *((_QWORD*)&v97 + 1) =
              LANES128_OF(snd_Fade_Fade_10c830(&v222, v93)).n128_u64[1];
          v95 = *(_QWORD*)(v94 - 5552);
          v96 = v94 - 5552;
          *(_QWORD*)&v97 = 0;
        }
        else {
          *(__n128*)&v97 = snd_Fade_Fade_10c830(&v222, 0.0);
          v95 = *(_QWORD*)(v94 - 5552);
          LODWORD(v97) = 1.0;
          v96 = v94 - 5552;
        }
        (*(void (**)(__int64, __int64 (***)(), long double))(v95 + 272))(
            v96, &v222, v97);
        snd_Fade_Destroy_Fade(&v222);
      LABEL_231:
        if (*((_BYTE*)v1 + 608) == 1) {
          *((_QWORD*)&v100 + 1) =
              LANES128_OF(snd_Fade_Fade_10c830(&v222, 0.0)).n128_u64[1];
          v98 = *(_QWORD*)(v94 - 5552);
          v99 = v94 - 5552;
          *(_QWORD*)&v100 = 0;
        }
        else {
          if (*((_BYTE*)v1 + 609) != 1) {
            goto LABEL_236;
          }
          LODWORD(v93) = 1148846080;
          *(__n128*)&v100 = snd_Fade_Fade_10c830(&v222, v93);
          v98 = *(_QWORD*)(v94 - 5552);
          LODWORD(v100) = 1.0;
          v99 = v94 - 5552;
        }
        (*(void (**)(__int64, __int64 (***)(), long double))(v98 + 288))(
            v99, &v222, v100);
        snd_Fade_Destroy_Fade(&v222);
      LABEL_236:
        if (*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] != 0) {
          *((_BYTE*)v1 + 611) =
              *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                        156LL) > 1.0;
        }
        snd_BGM_getFirstHandle((void*)(&v222));
        v101 = snd_fnd_WeakHandle_get(&v222);
        if (v101 == 0) {
        LABEL_294:
          snd_BGM_getFirstHandle((void*)(&v222));
          v138 = snd_fnd_WeakHandle_get(&v222);
          if (v138 == 0) {
            goto LABEL_353;
          }
          v139 = v138;
          if ((snd_Voice_hasFeature(v138 - 5592, 17) & 1) == 0) {
            goto LABEL_353;
          }
          v140 = *((_DWORD*)v1 + 768);
          do {
            if (v140 <= 8) {
              ++v140;
            }
            else {
              v140 = 0;
            }
            if (v140 == 0 || v140 == 9) {
              break;
            }
            if (*((int*)v1 + 154) < 1) {
              break;
            }
            v142 = game_Force_Find(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL,
                                   GameData_1fbdbc8[v140]);
          } while (v142 == 0 || (*(_BYTE*)(v142 + 416) & 8) != 0);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
              *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v222, v139 - 5592, 0);
          if ((snd_fnd_WeakHandle_isValid(&v222) & 1) == 0) {
            goto LABEL_315;
          }
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
              *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v211, v139 - 5592, 0);
          v143 = snd_fnd_WeakHandle_get(&v211);
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
              *(_QWORD*)(v143 - 5592) + 440LL))((void*)&v222, v143 - 5592, 0);
          v144 = GameManager_a223a0(&v222);
          if (v144 == 0) {
            goto LABEL_315;
          }
          v145 = v144;
          v146 = -144000;
          v147 = WaveMultiVoice_1832f0(v144, *((unsigned int*)v1 + 768));
          if (v147 != 0) {
            v146 = *(_DWORD*)(v147 + 604) - 144000;
          }
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v145 + 232LL))(v145) & 1) ==
                  0 ||
              (WaveMultiVoice_1830e0(v145) & 1) != 0 ||
              (int)WaveMultiVoice_183350(v145, *((unsigned int*)v1 + 768), 0) <
                  v146) {
            v148 = 0;
          }
          else {
          LABEL_315:
            v148 = 1;
          }
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
              *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v222, v139 - 5592, 1);
          if ((snd_fnd_WeakHandle_isValid(&v222) & 1) != 0) {
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, __int64))(*(_QWORD*)(v139 - 5592) + 440LL))(
                (void*)&v211, v139 - 5592, 1);
            v149 = snd_fnd_WeakHandle_get(&v211);
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, _QWORD))(*(_QWORD*)(v149 - 5592) + 440LL))(
                (void*)&v222, v149 - 5592, 0);
            v150 = GameManager_a223a0(&v222);
            if (v150 != 0) {
              v151 = v150;
              v152 = -144000;
              v153 = WaveMultiVoice_1832f0(v150, *((unsigned int*)v1 + 768));
              if (v153 != 0) {
                v152 = *(_DWORD*)(v153 + 604) - 144000;
              }
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v151 + 232LL))(v151) &
                   1) == 0 ||
                  (WaveMultiVoice_1830e0(v151) & 1) != 0 ||
                  (int)WaveMultiVoice_183350(v151, *((unsigned int*)v1 + 768),
                                             0) < v152) {
                v148 = 0;
              }
            }
          }
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
              *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v222, v139 - 5592, 2);
          if ((snd_fnd_WeakHandle_isValid(&v222) & 1) != 0 &&
              ((*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                       __int64))(
                   *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v211, v139 - 5592,
                                                     2),
               v154 = snd_fnd_WeakHandle_get(&v211),
               (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                       _QWORD))(
                   *(_QWORD*)(v154 - 5592) + 440LL))((void*)&v222, v154 - 5592,
                                                     0),
               (v155 = GameManager_a223a0(&v222)) != 0)) {
            v156 = v155;
            v157 = -144000;
            v158 = WaveMultiVoice_1832f0(v155, *((unsigned int*)v1 + 768));
            if (v158 != 0) {
              v157 = *(_DWORD*)(v158 + 604) - 144000;
            }
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v156 + 232LL))(v156) &
                 1) == 0 ||
                (WaveMultiVoice_1830e0(v156) & 1) != 0) {
              goto LABEL_353;
            }
            v159 = (int)WaveMultiVoice_183350(v156, *((unsigned int*)v1 + 768),
                                              0) >= v157
                       ? v148
                       : 0;
            if ((v159 & 1) == 0) {
              goto LABEL_353;
            }
          }
          else if ((v148 & 1) == 0) {
            goto LABEL_353;
          }
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
              *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v222, v139 - 5592, 0);
          if ((snd_fnd_WeakHandle_isValid(&v222) & 1) != 0 &&
              ((*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                       _QWORD))(
                   *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v211, v139 - 5592,
                                                     0),
               v160 = snd_fnd_WeakHandle_get(&v211),
               (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                       _QWORD))(
                   *(_QWORD*)(v160 - 5592) + 440LL))((void*)&v222, v160 - 5592,
                                                     0),
               (v161 = GameManager_a223a0(&v222)) != 0) &&
              (v162 = v161, (v163 = WaveMultiVoice_1832f0(
                                 v161, *((unsigned int*)v1 + 768))) != 0)) {
            v164 = *(_DWORD*)(v163 + 604);
            v165 = (float)*(int*)(v163 + 612);
            v166 = snd_Fade_Fade_10c830(&v222, 0.0);
            LANES128(v166).n128_f32[0] = v165;
            *(__n128*)&v167 =
                snd_Fade_Fade_10c830(&v211, LANES128(v166).n128_f64[0]);
            WaveMultiVoice_183050(v162, (unsigned int)v140, v164, &v222, &v211,
                                  0, v167);
            snd_Fade_Destroy_Fade(&v211);
            snd_Fade_Destroy_Fade(&v222);
            v168 = 1;
          }
          else {
            v168 = 0;
          }
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
              *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v222, v139 - 5592, 1);
          if ((snd_fnd_WeakHandle_isValid(&v222) & 1) != 0) {
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, __int64))(*(_QWORD*)(v139 - 5592) + 440LL))(
                (void*)&v211, v139 - 5592, 1);
            v169 = snd_fnd_WeakHandle_get(&v211);
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, _QWORD))(*(_QWORD*)(v169 - 5592) + 440LL))(
                (void*)&v222, v169 - 5592, 0);
            v170 = GameManager_a223a0(&v222);
            if (v170 != 0) {
              v171 = v170;
              v172 = WaveMultiVoice_1832f0(v170, *((unsigned int*)v1 + 768));
              if (v172 != 0) {
                v173 = *(_DWORD*)(v172 + 604);
                v174 = (float)*(int*)(v172 + 612);
                v175 = snd_Fade_Fade_10c830(&v222, 0.0);
                LANES128(v175).n128_f32[0] = v174;
                *(__n128*)&v176 =
                    snd_Fade_Fade_10c830(&v211, LANES128(v175).n128_f64[0]);
                WaveMultiVoice_183050(v171, (unsigned int)v140, v173, &v222,
                                      &v211, 0, v176);
                snd_Fade_Destroy_Fade(&v211);
                snd_Fade_Destroy_Fade(&v222);
                v168 = 1;
              }
            }
          }
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
              *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v222, v139 - 5592, 2);
          if ((snd_fnd_WeakHandle_isValid(&v222) & 1) != 0 &&
              ((*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                       __int64))(
                   *(_QWORD*)(v139 - 5592) + 440LL))((void*)&v211, v139 - 5592,
                                                     2),
               v177 = snd_fnd_WeakHandle_get(&v211),
               (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                       _QWORD))(
                   *(_QWORD*)(v177 - 5592) + 440LL))((void*)&v222, v177 - 5592,
                                                     0),
               (v178 = GameManager_a223a0(&v222)) != 0) &&
              (v179 = v178, (v180 = WaveMultiVoice_1832f0(
                                 v178, *((unsigned int*)v1 + 768))) != 0)) {
            v181 = *(_DWORD*)(v180 + 604);
            v182 = (float)*(int*)(v180 + 612);
            v183 = snd_Fade_Fade_10c830(&v222, 0.0);
            LANES128(v183).n128_f32[0] = v182;
            *(__n128*)&v184 =
                snd_Fade_Fade_10c830(&v211, LANES128(v183).n128_f64[0]);
            WaveMultiVoice_183050(v179, (unsigned int)v140, v181, &v222, &v211,
                                  0, v184);
            snd_Fade_Destroy_Fade(&v211);
            snd_Fade_Destroy_Fade(&v222);
          }
          else if (v168 == 0) {
            goto LABEL_353;
          }
          *((_DWORD*)v1 + 768) = v140;
        LABEL_353:
          if (*((int*)v1 + 154) > 0 || *((int*)v1 + 158) > 0 ||
              *((_DWORD*)v1 + 161) != 0) {
            snd_BGM_getFirstHandle((void*)(&v222));
            v185 = snd_fnd_WeakHandle_get(&v222);
            if (v185 != 0 && *(_BYTE*)(v185 + 297) == 1) {
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                      __int64))(
                  *(_QWORD*)(v185 - 5592) + 440LL))((void*)&v222, v185 - 5592,
                                                    2);
              v186 = snd_fnd_WeakHandle_get(&v222);
              if (v186 != 0) {
                v188 = v186;
                LODWORD(v187) = 1128792064;
                if (*((_BYTE*)v1 + 95) == 1) {
                  *((_QWORD*)&v191 + 1) =
                      LANES128_OF(snd_Fade_Fade_10c830(&v222, v187))
                          .n128_u64[1];
                  v189 = *(_QWORD*)(v188 - 5552);
                  v190 = v188 - 5552;
                  *(_QWORD*)&v191 = 0;
                }
                else {
                  *(__n128*)&v191 = snd_Fade_Fade_10c830(&v222, v187);
                  v189 = *(_QWORD*)(v188 - 5552);
                  LODWORD(v191) = 1.0;
                  v190 = v188 - 5552;
                }
                (*(void (**)(__int64, __int64 (***)(), long double))(
                    v189 + 128))(v190, &v222, v191);
                snd_Fade_Destroy_Fade(&v222);
              }
            }
          }
          v192 = *((_DWORD*)v1 + 140);
          if (v192 != 2) {
            if (v192 != 1 ||
                (v193 =
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL),
                 (Manager_c43b70(*(_QWORD*)(v193 + 56)) & 1) == 0) ||
                (v194 = *(_QWORD*)(v193 + 64)) == 0 ||
                (v195 = *(_QWORD*)(v194 + 96)) == 0 ||
                *(_DWORD*)(v195 + 240) != 5) {
            LABEL_377:
              GameRoutine_e7db0(v1);
              result = (__int64 (***)())(
                  (__int64 (*)(__int64 (***)()))(*v1)[23])(v1);
              if (*((_DWORD*)v1 + 157) == 0) {
                snd_Fade_Fade_10c830(&v222, 0.0);
                snd_startSlotFadeVolume_100ca0(&GameData_21fa964, &v222, 1.0);
                result = (__int64 (***)())snd_Fade_Destroy_Fade(&v222);
                goto LABEL_395;
              }
              if (*((_DWORD*)v1 + 154) != 0) {
                goto LABEL_395;
              }
              if (*((_DWORD*)v1 + 155) != 0) {
                goto LABEL_395;
              }
              if (*((_DWORD*)v1 + 159) != 0) {
                goto LABEL_395;
              }
              if (*((_DWORD*)v1 + 156) != 0) {
                goto LABEL_395;
              }
              if (*((_DWORD*)v1 + 162) != 0) {
                goto LABEL_395;
              }
              v197 = *(_QWORD*)GameData_212c638;
              if (*(_QWORD*)GameData_212c638 == 0) {
                goto LABEL_395;
              }
              v198 = *(_QWORD*)(v197 + 32);
              if (v198 == *(_QWORD*)(v197 + 24) || *(_QWORD*)(v198 - 8) == 0) {
                goto LABEL_395;
              }
              if (game_hub_ProcHubSeqView_instance_ != 0 &&
                  *(_QWORD*)GameData_212dbb8[0] != 0 &&
                  *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) != 0 &&
                  *(int*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0 &&
                  (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) ==
                      0) {
                v199 = *(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 152LL);
                v200 = *((unsigned __int8*)v1 + 3160);
                v201 = v1 + 395;
                v202 = v199 > 0;
                if (v199 >= 1 && v200 != v202) {
                  v203 = snd_getDefineValue("SetVolume_AMBENV_MenuOpen");
                  snd_Fade_Fade_10c910(&v222, 500);
                  snd_startSlotFadeVolume_100ca0(&GameData_21fa964, &v222,
                                                 v203);
                  result = (__int64 (***)())snd_Fade_Destroy_Fade(&v222);
                  LOBYTE(v204) = 1;
                  goto LABEL_400;
                }
                v204 = v199 > 0;
                if (v200 == v202) {
                LABEL_400:
                  *v201 = v202;
                  v205 = snd_getUnknown10(result);
                  result = &v222;
                  LOBYTE(v223) = v204;
                  v225 = &v222;
                  v222 = GameData_1fbe680;
                  v206 = **(_QWORD**)(v205 + 24);
                  if (v206 != 0) {
                    v207 = *(_QWORD*)(v206 + 5616);
                    v211 = (__int64 (**)())v206;
                    while (1) {
                      ((void (*)(__int64 (***)(), __int64 (***)()))(
                          *result)[6])(result, &v211);
                      result = v225;
                      if (v207 == 0) {
                        break;
                      }
                      v211 = (__int64 (**)())v207;
                      v207 = *(_QWORD*)(v207 + 5616);
                      if (v225 == nullptr) {
                        goto LABEL_195;
                      }
                    }
                    if (v225 != &v222) {
                      if (v225 != nullptr) {
                        v208 = 5;
                      LABEL_409:
                        result = (__int64 (***)())((__int64 (*)(
                            __int64 (***)()))(*result)[v208])(result);
                      }
                    LABEL_395:
                      *((_BYTE*)v1 + 602) = 0;
                      *((_WORD*)v1 + 304) = 0;
                      return result;
                    }
                  }
                  v208 = 4;
                  goto LABEL_409;
                }
              }
              else {
                LOBYTE(v202) = 0;
                v204 = false;
                v201 = v1 + 395;
                if (*((_BYTE*)v1 + 3160) == 0) {
                  goto LABEL_400;
                }
              }
              if (!v204) {
                snd_Fade_Fade_10c910(&v222, 500);
                snd_startSlotFadeVolume_100ca0(&GameData_21fa964, &v222, 1.0);
                result = (__int64 (***)())snd_Fade_Destroy_Fade(&v222);
              }
              goto LABEL_400;
            }
            v196 = (_QWORD*)(v194 + 120);
            while (1) {
              v196 = (_QWORD*)*v196;
              if (v196 == nullptr) {
                break;
              }
              if (*(_DWORD*)(v196[5] + 240LL) != 5) {
                goto LABEL_377;
              }
            }
            snd_1905280(v1 + 69);
            *((_DWORD*)v1 + 140) = 2;
          }
          snd_19057e0(v1 + 69);
          goto LABEL_377;
        }
        v102 = v101;
        snd_BGM_getFirstNameString((void*)(&v222), v1[1]);
        v103 = snd_g_memory_ptr[0];
        v104 = (__int64 (**)())((unsigned __int8)v222 >> 1);
        if (((unsigned __int8)v222 & 1) != 0) {
          v104 = v223;
        }
        if (v104 == (__int64 (**)())((char*)((__int128*)0x10LL) + 2)) {
          v105 = v224;
          if (((unsigned __int8)v222 & 1) == 0) {
            v105 = (char*)&v222 + 1;
          }
          v106 = *(_QWORD*)v105;
          v107 = *((_QWORD*)v105 + 1);
          v108 = *((unsigned __int16*)v105 + 8);
          v109 = v106 == 0x5F5359535F4D4742LL && v107 == 0x6D6568546E69614DLL;
          if (v109 && v108 == 12901) {
            v125 = true;
            if (((unsigned __int8)v222 & 1) == 0) {
              goto LABEL_285;
            }
            goto LABEL_284;
          }
        }
        snd_BGM_getFirstNameString((void*)(&v211), v1[1]);
        v111 = (__int64 (**)())((unsigned __int8)v211 >> 1);
        if (((unsigned __int8)v211 & 1) != 0) {
          v111 = v212;
        }
        if (v111 == (__int64 (**)())((char*)((__int128*)0x10LL) + 2)) {
          v112 = v213;
          if (((unsigned __int8)v211 & 1) == 0) {
            v112 = (char*)&v211 + 1;
          }
          v113 = *(_QWORD*)v112;
          v114 = *((_QWORD*)v112 + 1);
          v115 = *((unsigned __int16*)v112 + 8);
          v116 = v113 == 0x5F5359535F4D4742LL && v114 == 0x6D6568546E69614DLL;
          if (v116 && v115 == 13157) {
            v125 = true;
            if (((unsigned __int8)v211 & 1) == 0) {
            LABEL_283:
              if (((unsigned __int8)v222 & 1) == 0) {
              LABEL_285:
                if (v125 && *((unsigned __int8*)v1 + 2600) !=
                                *((unsigned __int8*)v1 + 2601)) {
                  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                          _QWORD))(
                      *(_QWORD*)(v102 - 5592) + 440LL))((void*)&v222,
                                                        v102 - 5592, 0);
                  v126 = snd_fnd_WeakHandle_get(&v222);
                  if (v126 != 0) {
                    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                            _QWORD))(
                        *(_QWORD*)(v126 - 5592) + 440LL))((void*)&v222,
                                                          v126 - 5592, 0);
                    v127 = GameManager_a223a0(&v222);
                    if (v127 != 0) {
                      v128 = v127;
                      v129 = WaveMultiVoice_183130(v127);
                      v130 = WaveMultiVoice_183350(v128, v129, 0);
                      snd_Fade_Fade_10cb00(&v222, "FadeTime_BGM_Preview_In");
                      v131 = snd_Fade_getTime(&v222);
                      snd_Fade_Destroy_Fade(&v222);
                      snd_Fade_Fade_10cb00(&v222, "FadeTime_BGM_Preview_Out");
                      v132 = snd_Fade_getTime(&v222);
                      snd_Fade_Destroy_Fade(&v222);
                      v134 = *((unsigned __int8*)v1 + 2600);
                      if ((game_facility_g_memory_sound_playing & 1) == 0 &&
                          *((_BYTE*)v1 + 2600) == 0) {
                        snd_Fade_Fade_10cb00(&v222,
                                             "FadeTime_BGM_Preview_Main_In");
                        v131 = snd_Fade_getTime(&v222);
                        snd_Fade_Destroy_Fade(&v222);
                        snd_Fade_Fade_10cb00(&v222,
                                             "FadeTime_BGM_Preview_Main_Out");
                        v132 = snd_Fade_getTime(&v222);
                        snd_Fade_Destroy_Fade(&v222);
                        v134 = *((unsigned __int8*)v1 + 2600);
                      }
                      *(float*)&v133 = v131;
                      v135 = snd_Fade_Fade_10c830(&v222, v133);
                      LANES128(v135).n128_f32[0] = v132;
                      *(__n128*)&v136 = snd_Fade_Fade_10c830(
                          &v211, LANES128(v135).n128_f64[0]);
                      v137 = WaveMultiVoice_183050(
                          v128, v134, (unsigned int)(v130 + 12000), &v222,
                          &v211, (unsigned int)(v130 + 12000), v136);
                      snd_Fade_Destroy_Fade(&v211);
                      snd_Fade_Destroy_Fade(&v222);
                      if ((v137 & 1) != 0) {
                        *((_BYTE*)v1 + 2601) = *((_BYTE*)v1 + 2600);
                      }
                    }
                  }
                }
                goto LABEL_294;
              }
            LABEL_284:
              (*(void (**)(__int64, char*))(*(_QWORD*)*v103 + 24LL))(*v103,
                                                                     v224);
              goto LABEL_285;
            }
          LABEL_282:
            (*(void (**)(__int64, char*))(*(_QWORD*)*v103 + 24LL))(*v103, v213);
            goto LABEL_283;
          }
        }
        snd_BGM_getFirstNameString((void*)(&v214), v1[1]);
        v118 = v215;
        if (((unsigned __int8)v214 & 1) == 0) {
          v118 = (unsigned __int8)v214 >> 1;
        }
        if (v118 == 18) {
          v119 = v216;
          if (((unsigned __int8)v214 & 1) == 0) {
            v119 = (__int64 (**)())((char*)&v214 + 1);
          }
          v120 = *v119;
          v121 = v119[1];
          v122 = *((unsigned __int16*)v119 + 8);
          v125 = v120 == (__int64 (*)())0x5F5359535F4D4742LL &&
                 v121 == (__int64 (*)())0x6D6568546E69614DLL && v122 == 13413;
          if (((unsigned __int8)v214 & 1) == 0) {
          LABEL_281:
            if (((unsigned __int8)v211 & 1) == 0) {
              goto LABEL_283;
            }
            goto LABEL_282;
          }
        }
        else {
          v125 = false;
          if (((unsigned __int8)v214 & 1) == 0) {
            goto LABEL_281;
          }
        }
        (*(void (**)(__int64, __int64 (**)()))(*(_QWORD*)*v103 + 24LL))(*v103,
                                                                        v216);
        goto LABEL_281;
      }
      v51 = *((_DWORD*)v1 + 703);
      v52 = "FadeTime_ENV_Rain_Out_Cross";
      *((_DWORD*)v1 + 702) = v24;
      *((_BYTE*)v1 + 2816) = v34;
      *((_DWORD*)v1 + 703) = v26 & 1;
      if ((v26 & 1) != 0) {
        v52 = "FadeTime_ENV_Rain_In_Cross";
      }
      if (v51 == (v26 & 1)) {
        v53 = "FadeTime_ENV_DayNight_Cross";
      }
      else {
        v53 = v52;
      }
      snd_Fade_Fade_10cb00(&v222, v53);
      snd_Fade_Fade_10cb00(&v211, v53);
      if (((_BYTE)v1[53] & 1) != 0) {
        v54 = v1[54];
      }
      else {
        v54 = (__int64 (**)())(*((_BYTE*)v1 + 424) >> 1);
      }
      if (v54 != nullptr) {
        v219 = 0;
        v220 = 0x2000;
        GameRoutine_112180(&v219, v1 + 45);
        if (((_BYTE)v1[53] & 1) != 0) {
          v55 = v1[55];
        }
        else {
          v55 = (__int64 (**)())((char*)v1 + 425);
        }
        snd_a2fe30(v1, &v219, v55, v26 & 1, v24, v34 != 0, &v222, &v211);
        GameRoutine_112180(v1 + 45, v221);
      }
      if (((_BYTE)v1[56] & 1) != 0) {
        v56 = v1[57];
      }
      else {
        v56 = (__int64 (**)())(*((_BYTE*)v1 + 448) >> 1);
      }
      if (v56 != nullptr) {
        v219 = 0;
        v220 = 0x2000;
        GameRoutine_112180(&v219, v1 + 47);
        if (((_BYTE)v1[56] & 1) != 0) {
          v57 = v1[58];
        }
        else {
          v57 = (__int64 (**)())((char*)v1 + 449);
        }
        snd_a2fe30(v1, &v219, v57, v26 & 1, v24, v34 != 0, &v222, &v211);
        GameRoutine_112180(v1 + 47, v221);
      }
      if (((_BYTE)v1[59] & 1) != 0) {
        v58 = v1[60];
      }
      else {
        v58 = (__int64 (**)())(*((_BYTE*)v1 + 472) >> 1);
      }
      if (v58 != nullptr) {
        v219 = 0;
        v220 = 0x2000;
        GameRoutine_112180(&v219, v1 + 49);
        if (((_BYTE)v1[59] & 1) != 0) {
          v59 = v1[61];
        }
        else {
          v59 = (__int64 (**)())((char*)v1 + 473);
        }
        snd_a2fe30(v1, &v219, v59, v26 & 1, v24, v34 != 0, &v222, &v211);
        GameRoutine_112180(v1 + 49, v221);
      }
      if (((_BYTE)v1[62] & 1) != 0) {
        v60 = v1[63];
      }
      else {
        v60 = (__int64 (**)())(*((_BYTE*)v1 + 496) >> 1);
      }
      if (v60 != nullptr) {
        v219 = 0;
        v220 = 0x2000;
        GameRoutine_112180(&v219, v1 + 51);
        if (((_BYTE)v1[62] & 1) != 0) {
          v61 = v1[64];
        }
        else {
          v61 = (__int64 (**)())((char*)v1 + 497);
        }
        snd_a2fe30(v1, &v219, v61, v26 & 1, v24, v34 != 0, &v222, &v211);
        GameRoutine_112180(v1 + 51, v221);
      }
      if (((_BYTE)v1[381] & 1) != 0) {
        v62 = v1[382];
      }
      else {
        v62 = (__int64 (**)())(*((_BYTE*)v1 + 3048) >> 1);
      }
      if (v62 != nullptr) {
        v217 = 0;
        v218 = 0x2000;
        GameRoutine_112180(&v217, v1 + 43);
        if (((_BYTE)v1[381] & 1) != 0) {
          v63 = v1[383];
        }
        else {
          v63 = (__int64 (**)())((char*)v1 + 3049);
        }
        snd_a2fe30(v1, &v217, v63, v26 & 1, v24, v34 != 0, &v222, &v211);
        GameRoutine_112180(v1 + 43, v221);
      }
      if ((v26 & 1) != 0) {
        v64 = "_Rain";
      }
      else {
        v64 = &GameData_1a9f09e;
      }
      if (v24) {
        v65 = "_Night";
      }
      else {
        v65 = &GameData_1a9f09e;
      }
      if (v34 != 0) {
        v66 = "_Hds";
      }
      else {
        v66 = &GameData_1a9f09e;
      }
      GameAlloc_e1ba0(v1[4], v64, v65, v66, &v222, &v211);
      GameAlloc_e5920(v1[2], v64, v65, v66, &v222, &v211);
      snd_Fade_Destroy_Fade(&v211);
      snd_Fade_Destroy_Fade(&v222);
      goto LABEL_185;
    }
    if (((_BYTE)v1[82] & 1) != 0) {
      fw_text_String_CopyTerminated(&v222);
      if (((_BYTE)v1[85] & 1) != 0) {
        goto LABEL_9;
      }
    }
    else {
      v3 = v1[83];
      v4 = v1[84];
      v222 = v1[82];
      v223 = v3;
      v224 = (char*)v4;
      if (((_BYTE)v1[85] & 1) != 0) {
      LABEL_9:
        fw_text_String_CopyTerminated(&v211);
      LABEL_12:
        if (((unsigned __int8)v222 & 1) != 0) {
          v7 = v224;
        }
        else {
          v7 = (char*)&v222 + 1;
        }
        if (((unsigned __int8)v211 & 1) != 0) {
          v8 = v213;
        }
        else {
          v8 = (char*)&v211 + 1;
        }
        GameManager_a21ca0(v1, v7, v8, *((unsigned __int8*)v1 + 704),
                           *((unsigned __int8*)v1 + 705), 1);
        if (((unsigned __int8)v211 & 1) != 0 && v213 != nullptr) {
          v9 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v213);
        }
        if (((unsigned __int8)v222 & 1) != 0 && v224 != nullptr) {
          v10 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v224);
        }
        goto LABEL_28;
      }
    }
    v5 = v1[86];
    v6 = v1[87];
    v211 = v1[85];
    v212 = v5;
    v213 = (char*)v6;
    goto LABEL_12;
  }
  return result;
}

#pragma GCC visibility pop
