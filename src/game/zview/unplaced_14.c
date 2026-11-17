#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void CameraStateCircleHub_d31ee0(PSEUDO_X8, __int64,
                                                            unsigned int);
__int64 game_zview_d470a0(__int64);
bool game_d26f50(__int64, int);
extern _UNKNOWN* GameData_212c188;
extern __int64* GameData_212ed08[13];
extern __int64 GameData_21c9608;
extern __int64 GameData_21d96b8;
extern __int64 GameData_220b6f0;
extern __int64 GameData_2258178;
extern __int64 game_g_game_setting;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_1a0a550(float, float);
float game_zview_d21160(__int64);
float game_zview_d31780(__int64 a1);

float game_zview_d31780(__int64 a1)
{
  float v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  int v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  int v91;
  __int64 v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  bool v100;
  float v109;
  struct __attribute__((packed)) {
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    int v108;
  } g_;

  v1 = *(float*)(a1 + 1104);
  if (v1 <= 0x0.0p+0f) {
    if ((game_zview_d470a0(a1) & 1) == 0 &&
        (GameData_2258178 != 0 &&
             (v3 = *(_QWORD*)(GameData_2258178 + 192)) != 0 &&
             *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                                   8 * ((unsigned __int64)(v3 +
                                                           *(_QWORD*)(GameData_2258178 +
                                                                      184) -
                                                           1) >>
                                        10)) +
                        4 * ((v3 + *(_QWORD*)(GameData_2258178 + 184) - 1) &
                             0x3FF)) == 5 ||
         (*(_BYTE*)(game_g_game_setting + 807) != 1 ||
          (*(_BYTE*)(game_g_game_setting + 804) & 1) == 0 &&
              (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
               (*(_BYTE*)(game_g_game_setting + 805) & 1) == 0 ||
               (*(_BYTE*)(game_g_game_setting + 806) & 1) == 0)) &&
             (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
              (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
                  (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
                   (*(_BYTE*)(game_g_game_setting + 901) & 1) == 0 ||
                   *(_BYTE*)(game_g_game_setting + 902) != 1)) ||
         (v4 = *(_QWORD*)(GameData_220b6f0 + 56)) == 0 ||
         (v5 = *(_QWORD*)(v4 + 32)) == 0 ||
         (float)((float)(PSEUDO_UNFUSED(*(float*)(v5 + 36) *
                                        *(float*)(v5 + 36))) +
                 (float)(*(float*)(v5 + 32) * *(float*)(v5 + 32))) <=
             0x1.f5c28e0000000p-2f)) {
      v6 = GameData_212ed08[0];
      v7 = *GameData_212ed08[0];
      if (game_d26f50(*GameData_212ed08[0], 2)) {
        v8 = *(_QWORD*)(v7 + 136);
        v9 = *(_QWORD*)(v7 + 144);
        if (v8 != v9) {
          while (*(float*)(v8 + 4) >=
                 (float)(*(float*)(v7 + 8) + -0x1.6666660000000p-2f)) {
            if ((*(_BYTE*)(v8 + 9) & 1) != 0) {
              v13 = -1;
            LABEL_33:
              v14 = *(_DWORD*)(a1 + 992);
              v15 = v14 + v13;
              if (v15 <= 1) {
                v15 = 1;
              }
              if (v15 >= 3) {
                v16 = 3;
              }
              else {
                v16 = v15;
              }
              if (v14 != v16) {
                v17 = *(_DWORD*)(a1 + 1116);
                *(_DWORD*)(a1 + 992) = v16;
                *(_DWORD*)(a1 + 1100) = 0;
                *(_DWORD*)(a1 + 1104) = v17;
                CameraStateCircleHub_d31ee0((void*)((__int64)&g_.v102), a1,
                                            v14);
                v18 = g_.v107;
                *(_QWORD*)(a1 + 1028) = g_.v106;
                *(_QWORD*)(a1 + 1036) = v18;
                v19 = g_.v103;
                *(_DWORD*)(a1 + 1044) = g_.v108;
                *(_QWORD*)(a1 + 996) = g_.v102;
                *(_QWORD*)(a1 + 1004) = v19;
                v20 = g_.v105;
                *(_QWORD*)(a1 + 1012) = g_.v104;
                *(_QWORD*)(a1 + 1020) = v20;
                CameraStateCircleHub_d31ee0((void*)((__int64)&g_.v102), a1,
                                            v16);
                v21 = g_.v107;
                v22 = g_.v104;
                *(_QWORD*)(a1 + 1072) = g_.v105;
                v23 = g_.v106;
                *(_QWORD*)(a1 + 1088) = v21;
                v24 = g_.v103;
                *(_QWORD*)(a1 + 1064) = v22;
                *(_QWORD*)(a1 + 1080) = v23;
                LODWORD(v23) = g_.v108;
                *(_QWORD*)(a1 + 1056) = v24;
                *(_DWORD*)(a1 + 1096) = v23;
                *(_QWORD*)(a1 + 1048) = g_.v102;
                *(_BYTE*)(GameData_21c9608 + 720) = v16;
              }
              goto LABEL_40;
            }
            v8 += 12;
            if (v8 == v9) {
              break;
            }
          }
        }
      }
      v10 = *v6;
      if (game_d26f50(*v6, 2)) {
        v11 = *(_QWORD*)(v10 + 160);
        v12 = *(_QWORD*)(v10 + 168);
        if (v11 != v12) {
          while (*(float*)(v11 + 4) >=
                 (float)(*(float*)(v10 + 8) + -0x1.6666660000000p-2f)) {
            if (*(_BYTE*)(v11 + 9) == 1) {
              v13 = 1;
              goto LABEL_33;
            }
            v11 += 12;
            if (v11 == v12) {
              break;
            }
          }
        }
      }
    }
  LABEL_40:
    v1 = *(float*)(a1 + 1104);
  }
  v25 = *(float*)(a1 + 1100);
  v26 =
      fabsf((float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  if (v25 <= v1) {
    if (v25 >= v1) {
      goto LABEL_47;
    }
    v25 = v25 + v26;
    if (v25 <= v1) {
      goto LABEL_47;
    }
    goto LABEL_46;
  }
  v25 = v25 - v26;
  if (v25 < v1) {
  LABEL_46:
    v25 = v1;
  }
LABEL_47:
  *(float*)(a1 + 1100) = v25;
  if (v1 <= 0x0.0p+0f | v25 < v1) {
    v28 = 0x1.0000000000000p+0f;
    if (v1 > 0x0.0p+0f) {
      v28 = v25 / v1;
    }
  }
  else {
    *(_DWORD*)(a1 + 1104) = 0;
    v28 = 0x1.0000000000000p+0f;
  }
  v29 = *(float*)(a1 + 1120);
  v30 = (float)(PSEUDO_UNFUSED(v28 * 0x1.921fb60000000p+1f)) +
        (float)(roundf((float)(v28 * 0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v30 <= 0x1.921fb60000000p+0f) {
    v32 = 0x1.0000000000000p+0f;
    if (v30 >= -0x1.921fb60000000p+0f) {
      goto LABEL_59;
    }
    v31 = -0x1.921fb60000000p+1f;
  }
  else {
    v31 = 0x1.921fb60000000p+1f;
  }
  v30 = v31 - v30;
  v32 = -0x1.0000000000000p+0f;
LABEL_59:
  v33 = 0x1.0000000000000p+0f;
  v34 = *(float*)GameData_212c188;
  v36 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v35 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v37 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v109 = *((float*)GameData_212c188 + 1);
  v38 =
      v32 *
      (float)((float)((float)-(
                          float)(v37 -
                                 (float)((float)(v35 +
                                                 (float)((float)-(
                                                             float)(v36 -
                                                                    (float)((float)(v109 -
                                                                                    (float)(v34 *
                                                                                            (float)(v30 *
                                                                                                    v30))) *
                                                                            (float)(v30 *
                                                                                    v30))) *
                                                         (float)(v30 * v30))) *
                                         (float)(v30 * v30))) *
                      (float)(v30 * v30)) +
              0x1.0000000000000p+0f);
  v39 = 0x1.0000000000000p+0f / v29;
  v40 = fabsf(v38);
  if (v29 < 0x1.0000000000000p+0f) {
    v39 = 0x1.0000000000000p+0f;
  }
  v41 = GameRoutine_1a0a550(v40, v39);
  v42 = -0x1.0000000000000p+0f;
  v43 = *(float*)(a1 + 1008);
  v44 = *(float*)(a1 + 1064);
  v45 = v41 * 0x1.0000000000000p-1f;
  if (v38 < 0x0.0p+0f) {
    v42 = 0x1.0000000000000p+0f;
  }
  v46 = (float)(v45 * v42) + 0x1.0000000000000p-1f;
  v47 = *(float*)(a1 + 1060) - v43;
  v48 = *(_DWORD*)(GameData_21d96b8 + 8);
  if (v29 < 0x1.0000000000000p+0f) {
    v46 = (float)(PSEUDO_UNFUSED(v29 * v46)) +
          (float)(v28 * (float)(0x1.0000000000000p+0f - v29));
  }
  *(_BYTE*)(a1 + 560) = 1;
  *(_BYTE*)(a1 + 608) = 1;
  if (v48 == 2) {
    v49 = 0x1.4ccccc0000000p-1f;
  }
  else {
    v49 = 0x1.0000000000000p+0f;
  }
  v50 = 0x0.0p+0f;
  v51 = fminf(fmaxf(v46, 0x0.0p+0f), 0x1.0000000000000p+0f);
  v52 = fminf(fmaxf(v28, 0x0.0p+0f), 0x1.0000000000000p+0f);
  v53 = v43 + (float)(v51 * v47);
  v54 = *(float*)(a1 + 1056);
  *(float*)(a1 + 548) = v53;
  v55 =
      *(float*)(a1 + 1004) + (float)(v51 * (float)(v54 - *(float*)(a1 + 1004)));
  v56 = *(float*)(a1 + 1012);
  *(float*)(a1 + 556) = v55;
  v57 = v56 + (float)(v52 * (float)(v44 - v56));
  v58 = *(float*)(a1 + 1068);
  v59 = *(float*)(a1 + 1108) * v57;
  v60 = *(float*)(a1 + 1016);
  *(float*)(a1 + 500) = v59;
  v61 = v60 + (float)(v52 * (float)(v58 - v60));
  v62 = *(float*)(a1 + 1000);
  v63 = *(float*)(a1 + 1112) * v61;
  v64 = *(float*)(a1 + 1076);
  *(float*)(a1 + 512) = v63;
  v65 =
      *(float*)(a1 + 1024) + (float)(v52 * (float)(v64 - *(float*)(a1 + 1024)));
  v66 = *(float*)(a1 + 1080);
  *(float*)(a1 + 532) = v65;
  v67 =
      *(float*)(a1 + 1028) + (float)(v52 * (float)(v66 - *(float*)(a1 + 1028)));
  v68 = *(float*)(a1 + 1084);
  *(float*)(a1 + 612) = v67;
  v69 =
      *(float*)(a1 + 1032) + (float)(v52 * (float)(v68 - *(float*)(a1 + 1032)));
  v70 = *(float*)(a1 + 1092);
  *(float*)(a1 + 616) = v69;
  v71 =
      *(float*)(a1 + 1040) + (float)(v52 * (float)(v70 - *(float*)(a1 + 1040)));
  v72 = *(float*)(a1 + 1096);
  *(float*)(a1 + 620) = v71;
  v73 =
      *(float*)(a1 + 1044) + (float)(v52 * (float)(v72 - *(float*)(a1 + 1044)));
  v74 = *(float*)(a1 + 1088);
  *(float*)(a1 + 624) = v73;
  v75 =
      *(float*)(a1 + 1036) + (float)(v52 * (float)(v74 - *(float*)(a1 + 1036)));
  v76 = *(float*)(a1 + 996);
  *(float*)(a1 + 604) = v49 * v75;
  v77 = (float)(*(float*)(a1 + 836) + 0x1.a000000000000p+4f) /
        0x1.2c00000000000p+6f;
  if (v77 <= 0x1.0000000000000p+0f) {
    v78 = (float)(*(float*)(a1 + 836) + 0x1.a000000000000p+4f) /
          0x1.2c00000000000p+6f;
  }
  else {
    v78 = 0x1.0000000000000p+0f;
  }
  v79 = fminf(fmaxf(v78, 0x0.0p+0f), 0x1.0000000000000p+0f);
  if (v77 >= 0x0.0p+0f) {
    v50 = v79;
  }
  *(float*)(a1 + 544) =
      (float)(PSEUDO_UNFUSED(
          v76 *
          (float)(v62 + (float)(v50 * (float)(0x1.0000000000000p+0f - v62))))) +
      (float)(v51 *
              (float)((float)(PSEUDO_UNFUSED(
                          *(float*)(a1 + 1048) *
                          (float)(*(float*)(a1 + 1052) +
                                  (float)(v50 *
                                          (float)(0x1.0000000000000p+0f -
                                                  *(float*)(a1 + 1052)))))) -
                      (float)(PSEUDO_UNFUSED(
                          v76 *
                          (float)(v62 +
                                  (float)(v50 * (float)(0x1.0000000000000p+0f -
                                                        v62)))))));
  v80 = *(float*)(a1 + 1104);
  if (v80 > 0x0.0p+0f) {
    v33 = *(float*)(a1 + 1100) / v80;
  }
  v81 = -v34;
  v82 = *(float*)(a1 + 1120);
  v83 = (float)(PSEUDO_UNFUSED(v33 * 0x1.921fb60000000p+1f)) +
        (float)(roundf((float)(v33 * 0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v83 <= 0x1.921fb60000000p+0f) {
    v85 = 0x1.0000000000000p+0f;
    if (v83 >= -0x1.921fb60000000p+0f) {
      goto LABEL_80;
    }
    v84 = -0x1.921fb60000000p+1f;
  }
  else {
    v84 = 0x1.921fb60000000p+1f;
  }
  v83 = v84 - v83;
  v85 = -0x1.0000000000000p+0f;
LABEL_80:
  v86 = v83 * v83;
  v87 = (float)((float)(v35 +
                        (float)((float)((float)((float)(v109 +
                                                        (float)(v81 * v86)) *
                                                v86) -
                                        v36) *
                                v86)) *
                v86) -
        v37;
  v88 = 0x1.0000000000000p+0f / v82;
  v89 = v85 * (float)((float)(v87 * v86) + 0x1.0000000000000p+0f);
  if (v82 < 0x1.0000000000000p+0f) {
    v88 = 0x1.0000000000000p+0f;
  }
  v90 = GameRoutine_1a0a550(fabsf(v89), v88);
  v91 = *(_DWORD*)(a1 + 992);
  v92 = *(_QWORD*)(a1 + 928);
  v93 = -0x1.0000000000000p+0f;
  v94 = v90 * 0x1.0000000000000p-1f;
  if (v89 < 0x0.0p+0f) {
    v93 = 0x1.0000000000000p+0f;
  }
  v95 = (float)(v94 * v93) + 0x1.0000000000000p-1f;
  if (v82 < 0x1.0000000000000p+0f) {
    v95 = (float)(PSEUDO_UNFUSED(v82 * v95)) +
          (float)(v33 * (float)(0x1.0000000000000p+0f - v82));
  }
  v96 = *(float*)(a1 + 1020) +
        (float)(fminf(fmaxf(v95, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                (float)(*(float*)(a1 + 1072) - *(float*)(a1 + 1020)));
  v97 = *(float*)(a1 + 1124);
  *(float*)(a1 + 1124) = v96;
  v98 = v96 - v97;
  v99 = *(float*)(a1 + 1104);
  *(float*)(a1 + 864) = v98;
  *(_BYTE*)(v92 + 96) = v99 > 0x0.0p+0f;
  v100 = v91 == 1 & v99 > 0x0.0p+0f;
  *(_BYTE*)(*(_QWORD*)(a1 + 912) + 64LL) = v100;
  return game_zview_d21160(a1);
}

#pragma GCC visibility pop
