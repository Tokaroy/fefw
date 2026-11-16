#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_283950(PSEUDO_X8, __int64 result, int);
__int64 GameRoutine_283930(__int64);
__int64 GameRoutine_283ab0(_QWORD);
__int64 GameRoutine_283c30(_QWORD);
__int64 GameRoutine_2a6940(__int64 result, char, float);
__int64 GameRoutine_2a6950(__int64, __int64, _QWORD*);
__int64 GameRoutine_2a69b0(__int64);
__int64 MmlSequenceTrack_294a80(float, float, float, long double, long double);
__int64 nn_atk_detail_2a69c0(__int64);
__int64 rcContext_doStopTimer_283cf0(_QWORD);
float GameRoutine_2a69d0(__int64, __int64);
void nn_detail_UnexpectedDefaultImpl();
__int64 nn_atk_detail_driver_294440(__int64 result, double a2, double a3,
                                    float a4, long double a5, long double a6);

__int64 nn_atk_detail_driver_294440(__int64 result, double a2, double a3,
                                    float a4, long double a5, long double a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  float v21;
  int v22;
  float v23;
  int v24;
  char v25;
  unsigned int v26;
  float* v27;
  float v28;
  int v29;
  int v30;
  int v31;
  int v32;
  float v33;
  float v34;
  float v35;
  float v36;
  char v37;
  int v38;
  int v39;
  float v40;
  float v41;
  float v42;
  float v43;
  int v44;
  float v45;
  float v46;
  float v47;
  unsigned int v48;
  unsigned int v49;
  float v50;
  unsigned int v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
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
  unsigned int v90;
  unsigned int v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  struct {
    char gap0_[8];
    float v98;
    float v99;
    float v100;
    int v101;
    _QWORD v102[2];
    float v103;
    float v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    unsigned __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
    unsigned __int64 v119;
    __int64 v120;
    __int64 v121;
    char gap184_[4];
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    float v132;
    float v133;
  } f_;
  float v134;

  if (*(_BYTE*)(result + 9) != 1) {
    return result;
  }
  v6 = *(_QWORD*)(result + 608);
  v7 = result;
  if (v6 == 0) {
    return result;
  }
  v8 = *(__int16*)(result + 392);
  v9 = *(__int16*)(result + 390);
  if (v8 >= v9) {
    v10 = *(__int16*)(result + 398);
    v11 = *(__int16*)(result + 396);
    v12 = *(unsigned __int8*)(result + 389);
    if (v10 >= v11) {
      goto LABEL_5;
    }
  LABEL_7:
    v13 = *(unsigned __int8*)(result + 394) +
          (*(unsigned __int8*)(result + 395) -
           *(unsigned __int8*)(result + 394)) *
              v10 / v11;
    goto LABEL_8;
  }
  LOBYTE(v12) = *(_BYTE*)(result + 388) + (*(unsigned __int8*)(result + 389) -
                                           *(unsigned __int8*)(result + 388)) *
                                              v8 / v9;
  v10 = *(__int16*)(result + 398);
  v11 = *(__int16*)(result + 396);
  v12 = (unsigned __int8)v12;
  if (v10 < v11) {
    goto LABEL_7;
  }
LABEL_5:
  LOBYTE(v13) = *(_BYTE*)(result + 395);
LABEL_8:
  v14 = (unsigned __int8)v13 * v12;
  v15 = *(_QWORD*)(result + 600);
  v16 = *(__int16*)(v15 + 304);
  v17 = *(__int16*)(v15 + 302);
  if (v16 >= v17) {
    LOBYTE(v18) = *(_BYTE*)(v15 + 301);
  }
  else {
    v18 = *(unsigned __int8*)(v15 + 300) +
          (*(unsigned __int8*)(v15 + 301) - *(unsigned __int8*)(v15 + 300)) *
              v16 / v17;
  }
  v19 = v14 * (unsigned __int8)v18;
  v20 = *(__int16*)(result + 414);
  v21 = (float)v19;
  v22 = *(__int16*)(result + 416);
  v23 = v21 / 0x1.f417f00000000p+20f;
  if (v22 >= v20) {
    LOBYTE(v24) = *(_BYTE*)(result + 413);
  }
  else {
    v24 = *(char*)(result + 412) +
          (*(char*)(result + 413) - *(char*)(result + 412)) * v22 / v20;
  }
  v25 = *(_BYTE*)(result + 502);
  v26 = (char)v24;
  v27 = (float*)(result + 512);
  v28 = v23 * v23;
  if (*(unsigned __int8*)(v15 + 88) != 255) {
    v27 = (float*)(v15 + 84);
    v25 = *(_BYTE*)(v15 + 88);
  }
  v29 = *(_DWORD*)(v15 + 100);
  if (*(_DWORD*)(result + 516) != -1) {
    v29 = *(_DWORD*)(result + 516);
  }
  v30 = *(__int16*)(result + 402);
  f_.v101 = v29;
  v31 = *(__int16*)(result + 404);
  if (v31 >= v30) {
    LOBYTE(v32) = *(_BYTE*)(result + 401);
  }
  else {
    v32 = *(char*)(result + 400) +
          (*(char*)(result + 401) - *(char*)(result + 400)) * v31 / v30;
  }
  v33 = *(float*)(result + 12) * v28;
  v34 = vcvts_n_f32_s32(v26, 7u);
  v35 = *(float*)(v15 + 76);
  {
    __typeof__(a4) z_ = (__typeof__(a4)){0};
    LOBYTE(z_) = *(_BYTE*)(result + 489);
    a4 = z_;
  }
  v36 = (float)LODWORD(a4);
  v37 = v25;
  v38 = *(__int16*)(result + 408);
  v39 = *(__int16*)(result + 410);
  v40 = (float)(char)v32 / 0x1.f800000000000p+5f;
  v41 = -0x1.0000000000000p+0f;
  if (v40 >= -0x1.0000000000000p+0f) {
    v41 = (float)(char)v32 / 0x1.f800000000000p+5f;
  }
  if (v40 > 0x1.0000000000000p+0f) {
    v41 = 0x1.0000000000000p+0f;
  }
  v42 = *(float*)(result + 16);
  v43 = *(float*)(v15 + 252) * (float)(*(float*)(result + 20) * v41);
  if (v39 >= v38) {
    LOBYTE(v44) = *(_BYTE*)(result + 407);
  }
  else {
    v44 = *(char*)(result + 406) +
          (*(char*)(result + 407) - *(char*)(result + 406)) * v39 / v38;
  }
  v45 = v34 * v36;
  {
    __typeof__(v34) z_ = (__typeof__(v34)){0};
    LOBYTE(z_) = *(_BYTE*)(result + 504);
    v34 = z_;
  }
  v46 = *v27;
  v47 = *(float*)(result + 508) + *(float*)(v15 + 80);
  f_.v100 = *(float*)(v15 + 72) * v33;
  *(float*)&v48 = v35 * v42;
  *(float*)&v49 = (float)LODWORD(v34);
  f_.v98 = v35 * v42;
  f_.v99 = v45;
  {
    __typeof__(v48) z_ = (__typeof__(v48)){0};
    LOBYTE(z_) = *(_BYTE*)(result + 503);
    v48 = z_;
  }
  {
    __typeof__(a6) z_ = (__typeof__(a6)){0};
    LODWORD(z_) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+1f));
    a6 = z_;
  }
  v50 = *(float*)&v49 / 0x1.fc00000000000p+6f;
  {
    __typeof__(v49) z_ = (__typeof__(v49)){0};
    LOBYTE(z_) = *(_BYTE*)(result + 505);
    v49 = z_;
  }
  *(float*)&v51 = (float)v49;
  v52 = (float)v48 / 0x1.fc00000000000p+6f;
  v53 = *(float*)&v51 / 0x1.fc00000000000p+6f;
  {
    __typeof__(v51) z_ = (__typeof__(v51)){0};
    LOBYTE(z_) = *(_BYTE*)(result + 506);
    v51 = z_;
  }
  f_.v132 = v50;
  f_.v133 = v53;
  v54 = (float)v51 / 0x1.fc00000000000p+6f;
  v55 = (float)(char)v44 / 0x1.f800000000000p+5f;
  *(_QWORD*)&a5 = 0;
  v134 = v54;
  if (v55 >= 0x0.0p+0f) {
    *(float*)&a5 = (float)(char)v44 / 0x1.f800000000000p+5f;
  }
  if (v55 <= 0x1.0000000000000p+1f) {
    v56 = *(float*)&a5;
  }
  else {
    v56 = 0x1.0000000000000p+1f;
  }
  v57 = v52 + -0x1.0000000000000p+0f;
  MmlSequenceTrack_294a80(v43, v56, v52 + -0x1.0000000000000p+0f, a5, a6);
  do {
    *(float*)(v6 + 208) = v47;
    *(float*)(v6 + 200) = f_.v100;
    *(float*)(v6 + 204) = f_.v98;
    *(float*)(v6 + 312) = f_.v99;
    result = GameRoutine_2a6940(v6, v37, v46);
    v59 = f_.v124;
    v58 = f_.v125;
    *(_DWORD*)(v6 + 216) = f_.v101;
    v60 = *(_QWORD*)(v7 + 420);
    *(_QWORD*)(v6 + 68) = *(_QWORD*)(v7 + 428);
    *(_QWORD*)(v6 + 60) = v60;
    *(_BYTE*)(v6 + 188) = *(_BYTE*)(v7 + 484);
    v61 = *(_QWORD*)(v7 + 436);
    *(_QWORD*)(v6 + 100) = *(_QWORD*)(v7 + 444);
    *(_QWORD*)(v6 + 92) = v61;
    *(_BYTE*)(v6 + 189) = *(_BYTE*)(v7 + 485);
    v62 = *(_QWORD*)(v7 + 452);
    *(_QWORD*)(v6 + 132) = *(_QWORD*)(v7 + 460);
    *(_QWORD*)(v6 + 124) = v62;
    *(_BYTE*)(v6 + 190) = *(_BYTE*)(v7 + 486);
    v63 = *(_QWORD*)(v7 + 468);
    *(_QWORD*)(v6 + 164) = *(_QWORD*)(v7 + 476);
    *(_QWORD*)(v6 + 156) = v63;
    v64 = f_.v122;
    v65 = f_.v123;
    *(_BYTE*)(v6 + 191) = *(_BYTE*)(v7 + 487);
    *(_QWORD*)(v6 + 220) = v64;
    v67 = f_.v126;
    v66 = f_.v127;
    *(_QWORD*)(v6 + 228) = v65;
    *(_QWORD*)(v6 + 236) = v59;
    *(_QWORD*)(v6 + 244) = v58;
    *(_QWORD*)(v6 + 252) = v67;
    v69 = f_.v130;
    v68 = f_.v131;
    *(_QWORD*)(v6 + 260) = v66;
    *(_QWORD*)(v6 + 284) = v69;
    *(_QWORD*)(v6 + 292) = v68;
    v70 = f_.v129;
    *(_QWORD*)(v6 + 268) = f_.v128;
    *(_QWORD*)(v6 + 276) = v70;
    v71 = *(_QWORD*)(v7 + 600);
    v72 = *(_QWORD*)(v71 + 184);
    if (v72 != 0) {
      GameRoutine_283ab0(*(_QWORD*)(v71 + 184));
      GameRoutine_2a69b0(v6);
      GameRoutine_283c30(v72);
      nn_atk_detail_2a69c0(v6);
      v73 = rcContext_doStopTimer_283cf0(v72);
      GameRoutine_2a69d0(v6, v73);
      result = GameRoutine_283930(v72);
      if ((int)result >= 1) {
        v74 = 1;
        do {
          f_.v120 = 0;
          f_.v121 = 0;
          f_.v118 = 0;
          f_.v119 = 0;
          f_.v116 = 0;
          f_.v117 = 0;
          f_.v114 = 0;
          f_.v115 = 0;
          f_.v112 = 0;
          f_.v113 = 0;
          if ((unsigned int)(v74 - 1) >= 3) {
            nn_detail_UnexpectedDefaultImpl();
          }
          game_283950((void*)(f_.v102), v72, v74);
          v75 = *(float*)(v7 + 104);
          v76 = *(float*)(v7 + 112);
          v77 = *(float*)(v7 + 116);
          v78 = *(float*)(v7 + 120);
          v79 = *(float*)(v7 + 124);
          v80 = *(float*)(v7 + 128);
          v81 = *(float*)(v7 + 132);
          f_.v118 = f_.v108;
          f_.v119 = f_.v109;
          f_.v120 = f_.v110;
          f_.v121 = f_.v111;
          f_.v115 = f_.v105;
          f_.v116 = f_.v106;
          f_.v117 = f_.v107;
          f_.v112 = f_.v102[0];
          f_.v113 = f_.v102[1];
          *(float*)&f_.v114 = v78 * f_.v103;
          *((float*)&f_.v114 + 1) = v79 * f_.v104;
          v82 = *(float*)(v7 + 136);
          v83 = *(float*)(v7 + 140);
          *(float*)&f_.v112 = v75 * *(float*)f_.v102;
          *(float*)&f_.v113 = v76 * *(float*)&f_.v102[1];
          *((float*)&f_.v113 + 1) = v77 * *((float*)&f_.v102[1] + 1);
          *(float*)&f_.v115 = v80 * *(float*)&f_.v105;
          *((float*)&f_.v115 + 1) = v81 * *((float*)&f_.v105 + 1);
          v84 = v83 * *((float*)&f_.v106 + 1);
          v85 = *(float*)(v7 + 144);
          v86 = *(float*)(v7 + 148);
          *(float*)&f_.v116 = v82 * *(float*)&f_.v106;
          *((float*)&f_.v116 + 1) = v84;
          *(float*)&f_.v117 = v85 * *(float*)&f_.v107;
          *((float*)&f_.v117 + 1) = v86 * *((float*)&f_.v107 + 1);
          v87 = *(float*)(v7 + 156) * *((float*)&f_.v108 + 1);
          v88 = *(float*)(v7 + 160);
          v89 = *(float*)(v7 + 164);
          *(float*)&f_.v118 = *(float*)(v7 + 152) * *(float*)&f_.v108;
          *((float*)&f_.v118 + 1) = v87;
          *(float*)&v90 = (float)(v43 + *(float*)&f_.v109) + v88;
          *(float*)&v91 = (float)(v56 + *((float*)&f_.v109 + 1)) + v89;
          v92 = *(float*)(v7 + 168);
          v93 = *(float*)(v7 + 172);
          f_.v119 = __PAIR64__(v91, v90);
          v94 = v93 + *((float*)&f_.v110 + 1);
          v95 = *(float*)(v7 + 176);
          v96 = *(float*)(v7 + 180);
          *(float*)&f_.v120 = v57 + (float)(v92 + *(float*)&f_.v110);
          *((float*)&f_.v120 + 1) = v50 + v94;
          *(float*)&f_.v121 = v53 + (float)(v95 + *(float*)&f_.v111);
          *((float*)&f_.v121 + 1) =
              v54 + (float)(v96 + *((float*)&f_.v111 + 1));
          GameRoutine_2a6950(v6, (unsigned int)v74, &f_.v112);
          result = GameRoutine_283930(v72);
        } while (v74++ < (int)result);
      }
    }
    v6 = *(_QWORD*)(v6 + 408);
  } while (v6 != 0);
  return result;
}

#pragma GCC visibility pop
