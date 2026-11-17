#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_717820(_QWORD*, __int64*);
__attribute__((swiftcall)) void SdkRoutine_70ace0(PSEUDO_X8, __int64, _QWORD*);
__attribute__((swiftcall)) void SdkRoutine_70b0c0(PSEUDO_X8, float*, float,
                                                  float, float);
__attribute__((swiftcall)) void SdkRoutine_719ca0(PSEUDO_X8, _QWORD*, __int64*);
__attribute__((swiftcall)) void SdkRoutine_7202e0(PSEUDO_X8, __int64, __int64*,
                                                  __int64*, unsigned __int64);
__attribute__((swiftcall)) void SdkRoutine_720480(PSEUDO_X8, __int64*, float*);
__attribute__((swiftcall)) void SdkRoutine_722d40(PSEUDO_X8, float*);
__attribute__((swiftcall)) void SdkRoutine_728730(PSEUDO_X8, float*);
__attribute__((swiftcall)) void SdkRoutine_879f80(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_879f90(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_879fa0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87a1e0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
fw_math_MapStateIndices21(PSEUDO_X8, unsigned __int64*, __int64*);
__attribute__((swiftcall)) void
fw_math_MapStateIndices9(PSEUDO_X8, unsigned __int64*, __int64*);
__attribute__((swiftcall)) void kalman_transition_70e160(PSEUDO_X8, float*);
__attribute__((swiftcall)) void kalman_transition_70ed80(PSEUDO_X8, float*,
                                                         float*);
__attribute__((swiftcall)) void kalman_transition_70f080(PSEUDO_X8, float*,
                                                         float, float, float);
__attribute__((swiftcall)) void kalman_transition_70f680(PSEUDO_X8, float*,
                                                         float*);
__attribute__((swiftcall)) void kalman_transition_70f9d0(PSEUDO_X8, float*,
                                                         float*);
__attribute__((swiftcall)) void math_71d560(PSEUDO_X8, _QWORD*, __int64*);
__attribute__((swiftcall)) void math_7241f0(PSEUDO_X8, float*, float*);
__attribute__((swiftcall)) void math_724480(PSEUDO_X8, float*);
__attribute__((swiftcall)) void math_724870(PSEUDO_X8, float*);
__int64 SdkRoutine_711380(__int64*);
__int64 SdkRoutine_879cb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_879f50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_879fb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_879fd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_879fe0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 SdkRoutine_87a000(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a020(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a050(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, double);
__int64 SdkRoutine_87a1f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64
    fw_math_LookupStateIndex_alt1(_QWORD,
                                  _QWORD) __asm__("fw_math_LookupStateIndex");
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 memset_plt_alt1(void* this_, void*, int,
                        unsigned __int64) __asm__("memset_plt");
__int64
    nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration_plt(
        _QWORD);
__int64 nerd_gyro_pointing_GyroPointingCore_Recover_plt(_QWORD, _QWORD);
__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeadingCovariance_plt(_QWORD);
__int64 nerd_gyro_pointing_GyroPointingCore_UpdateStableOrientation_plt(
    _QWORD, float, float, float, float);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_AddRelativeRotationVariable_plt(
        _QWORD, _QWORD, _QWORD);
__int64 nerd_gyro_pointing_GyroPointingKalmanFilter_AddUnbiasedGyrVariable_plt(
    _QWORD, _QWORD, _QWORD);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_AddVariableCovariances_plt(_QWORD,
                                                                       float);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState_plt(_QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_PushParameterState_plt(_QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveRelativeRotationVariable_plt(
        _QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveUnbiasedGyrVariable_plt(
        _QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_ResetVelocityAndParameters_plt(
        _QWORD);
__int64
    nerd_gyro_pointing_GyroPointingKalmanFilter_TestParameterStates_plt(_QWORD);
__n128
    nerd_gyro_pointing_GyroPointingCore_UpdateFusedGyroBiasEstimate_plt(_QWORD,
                                                                        _QWORD);
extern void (*SdkData_e891a8[31])();
float SdkRoutine_712760(float*, float*, long double, double, double,
                        long double);
float atan2f_plt(float, float);
float cosf_plt(float);
float nerd_gyro_pointing_GyroPointingCore_GetFusedGyroBiasEstimate_plt(_QWORD,
                                                                       float,
                                                                       float,
                                                                       float);
float nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated_plt(
    void);
float sinf_plt(float);
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
void __attribute__((noreturn)) nn_codec_hwacod_32f020();
void nerd_gyro_pointing_GyroPointingCore_FeedImuSampleNoUpdate(__int64 a1,
                                                               __int64 a2);
__int64
nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration(
    __int64 this_);
__int64 nerd_gyro_pointing_GyroPointingCore_Update(__int64 this_);
float nerd_gyro_pointing_GyroPointingCore_UpdateFusedGyroBiasEstimate(
    __int64 a1, float* a2);
void nerd_gyro_pointing_GyroPointingCore_UpdateStableOrientation(
    float* a1, float a2, float a3, float a4, float a5);
__int64 nerd_gyro_pointing_GyroPointingCore_Recover(void* this_, char a2);
float nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated(
    void* this_);
__int64 nerd_gyro_pointing_GyroPointingCore_GetFusedGyroBiasEstimate(__int64 a1,
                                                                     float a2,
                                                                     float a3,
                                                                     float a4);
__attribute__((swiftcall)) void
nerd_gyro_pointing_GyroPointingCore_GetStateStd(PSEUDO_X8 x8_, void* this_);
__attribute__((swiftcall)) void
nerd_gyro_pointing_GyroPointingCore_GetStateUniqueStd(PSEUDO_X8 x8_,
                                                      void* this_);
__attribute__((swiftcall)) void
nerd_gyro_pointing_GyroPointingCore_StoreParameters(PSEUDO_X8 x8_, void* this_,
                                                    __int64 unused_int1,
                                                    __int64 unused_int2,
                                                    unsigned __int64 a2);
__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeadingCovariance(void* this_);
__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeading(__int64 result,
                                                         long double a2,
                                                         double a3, double a4,
                                                         long double a5);
__attribute__((swiftcall)) void math_70b0c0(PSEUDO_X8, float*, float, float,
                                            float);
__attribute__((swiftcall)) void nerd_gyro_pointing_70ace0(PSEUDO_X8, __int64,
                                                          _QWORD*);
__attribute__((swiftcall)) void nerd_gyro_pointing_720480(PSEUDO_X8, __int64*,
                                                          float*);
__int64 math_711380(__int64*);
__int64 SdkRoutine_879cb0_alt1(__int64, unsigned __int64, __int64,
                               unsigned __int64, unsigned __int64);
__int64 SdkRoutine_879f80_alt1();
__int64 SdkRoutine_879f90_alt1();
__int64 SdkRoutine_879fa0_alt1();
__int64 SdkRoutine_879fb0_alt1(__int64, __int64, __int64, __int64, __int64);
__int64 SdkRoutine_879fd0_alt1(__int64, __int64, __int64, __int64, __int64);
__int64 SdkRoutine_879fe0_alt1(__int64, __int64, __int64, __int64, __int64,
                               float);
__int64 SdkRoutine_87a000_alt1(__int64, __int64, __int64, __int64, __int64);
__int64 SdkRoutine_87a020_alt1(__int64, __int64, __int64, __int64, __int64);
__int64 SdkRoutine_87a050_alt1(__int64, __int64, __int64, __int64, __int64,
                               float);
__int64 memcpy_plt_alt1(__int64, __int64, unsigned __int64);
__int64 memset_plt_alt2(__int64, int, unsigned __int64);
__int64 nerd_gyro_pointing_GyroPointingCore_Recover_plt_alt1(__int64, bool);
__int64
nerd_gyro_pointing_GyroPointingCore_UpdateFusedGyroBiasEstimate_plt_alt1(
    __int64, __int64);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_AddRelativeRotationVariable_plt_alt1(
    __int64, __int64, __int64);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_AddUnbiasedGyrVariable_plt_alt1(
    __int64, __int64, __int64);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_AddVariableCovariances_plt_alt1(
    __int64, float);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState_plt_alt1(__int64);
__int64 nerd_gyro_pointing_GyroPointingKalmanFilter_PushParameterState_plt_alt1(
    __int64);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveRelativeRotationVariable_plt_alt1(
    __int64);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveUnbiasedGyrVariable_plt_alt1(
    __int64);
__int64
nerd_gyro_pointing_GyroPointingKalmanFilter_TestParameterStates_plt_alt1(
    __int64);
void math_711380_alt1(__int64*);
void nerd_gyro_pointing_GyroPointingCore_UpdateStableOrientation_plt_alt1(
    __int64, float, float, float, float);
__int64
nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration_plt_alt1(
    __int64);

void nerd_gyro_pointing_GyroPointingCore_FeedImuSampleNoUpdate(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  char v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  float v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  float v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64* v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
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
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  char v145;
  float v146;
  float v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  float v155;
  float v156;
  float v157;
  float v158;
  float v159;
  float v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  float v180;
  float v181;
  float v182;
  __int64 v183;
  int v184;
  unsigned __int64 v185;
  unsigned __int64 v186;
  struct {
    __int64 v187;
    __int64 v188;
    __int64 v189;
    __int64 v190;
    __int64 v191;
    char gap112_[88];
    float v192;
    float v193;
  } v187_;

  v2 = a1 + 12288;
  v3 = *(_QWORD*)a2;
  if ((*(_BYTE*)(a1 + 12392) & 1) == 0) {
    *(_BYTE*)(a1 + 12392) = 1;
  }
  *(_QWORD*)(a1 + 12384) = v3;
  v6 = *(_QWORD*)(a2 + 40);
  v7 = *(_BYTE*)(a2 + 48);
  v187_.v189 = *(_QWORD*)(a2 + 32);
  v187_.v190 = v6;
  v8 = *(_QWORD*)a2;
  v9 = *(_QWORD*)(a2 + 8);
  LOBYTE(v187_.v191) = v7;
  v10 = *(_QWORD*)(a1 + 14984);
  v185 = v8;
  v186 = v9;
  v11 = *(_QWORD*)(a2 + 24);
  v187_.v187 = *(_QWORD*)(a2 + 16);
  v187_.v188 = v11;
  v12 = *(_DWORD*)(a2 + 56);
  v13 = *(_QWORD*)(a1 + 14976);
  if (v13 == v10) {
    *(_QWORD*)(a1 + 14976) = v13 - 1;
  }
  v14 = a1 + 12416 + (*(_QWORD*)(a1 + 14992) << 6);
  v15 = v185;
  v16 = v186;
  *(_DWORD*)(v14 + 56) = v12;
  *(_QWORD*)v14 = v15;
  *(_QWORD*)(v14 + 8) = v16;
  v17 = v187_.v191;
  *(_QWORD*)(v14 + 40) = v187_.v190;
  *(_QWORD*)(v14 + 48) = v17;
  *(_QWORD*)(v14 + 32) = v187_.v189;
  v18 = v187_.v188;
  *(_QWORD*)(v14 + 16) = v187_.v187;
  *(_QWORD*)(v14 + 24) = v18;
  v19 = *(_QWORD*)(a1 + 14992);
  v20 = *(_QWORD*)(a1 + 14984);
  v21 = *(_QWORD*)(a1 + 14976) + 1LL;
  *(_QWORD*)(a1 + 14976) = v21;
  if (v19 + 1 == v20) {
    v22 = 0;
  }
  else {
    v22 = v19 + 1;
  }
  *(_QWORD*)(a1 + 14992) = v22;
  if ((*(_BYTE*)(a1 + 15000) & 1) == 0) {
    if (v21 != v20) {
      return;
    }
    nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration_plt_alt1(
        a1);
    v23 = *(float*)(a1 + 8224);
    v24 = *(float*)(a1 + 15292);
    v25 = *(float*)(a1 + 8228);
    v26 = *(float*)(a1 + 15296);
    v27 = *(float*)(a1 + 8232);
    v28 = *(float*)(a1 + 15300);
    v29 = *(float*)(a1 + 8236);
    v30 = *(float*)(a1 + 15304);
    *(_BYTE*)(v2 + 2712) = 1;
    *(float*)(a1 + 12412) =
        -(float)((float)((float)((float)((float)(v23 * v24) + 0x0.0p+0f) +
                                 (float)(v25 * v26)) +
                         (float)(v27 * v28)) -
                 (float)(v29 * v30));
    *(float*)(a1 + 12400) =
        (float)((float)(PSEUDO_UNFUSED(v23 * v30)) +
                (float)(PSEUDO_UNFUSED(v29 * v24))) +
        (float)((float)(v25 * v28) - (float)(PSEUDO_UNFUSED(v26 * v27)));
    *(float*)(a1 + 12404) =
        (float)((float)(PSEUDO_UNFUSED(v25 * v30)) +
                (float)(PSEUDO_UNFUSED(v29 * v26))) +
        (float)((float)(v27 * v24) - (float)(PSEUDO_UNFUSED(v28 * v23)));
    *(float*)(a1 + 12408) =
        (float)((float)(v23 * v26) - (float)(PSEUDO_UNFUSED(v24 * v25))) +
        (float)((float)(PSEUDO_UNFUSED(v27 * v30)) +
                (float)(PSEUDO_UNFUSED(v29 * v28)));
    v31 = *(_QWORD*)a2;
    *(_QWORD*)(a1 + 15424) = *(_QWORD*)a2;
    *(_QWORD*)(a1 + 15008) = v31;
  }
  v32 = a1 + 15016;
  v33 = *(_QWORD*)(a1 + 15240);
  if (v33 == 0) {
    goto LABEL_20;
  }
  v34 = *(float*)(a1 + 15264);
  v35 = *(_QWORD*)(a1 + 15256);
  v36 = *(_QWORD*)(a1 + 15248);
  if (v34 >= (float)((float)(__int64)(*(_QWORD*)a2 - *(_QWORD*)(a1 + 15008)) /
                     0x1.dcd6500000000p+29f)) {
    v34 = (float)(__int64)(*(_QWORD*)a2 - *(_QWORD*)(a1 + 15008)) /
          0x1.dcd6500000000p+29f;
  }
  if (v33 <= v35) {
    v37 = 0;
  }
  else {
    v37 = *(_QWORD*)(a1 + 15248);
  }
  v38 = v35 + v37 - 1;
  v39 = v34 / (float)v36;
  if (v38 < v36) {
    v36 = 0;
  }
  if ((float)((float)(__int64)(*(_QWORD*)a2 -
                               *(_QWORD*)(v32 + 56 * (v38 - v36))) /
              0x1.dcd6500000000p+29f) >= v39) {
  LABEL_20:
    if ((unsigned int)
            nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState_plt_alt1(
                a1 + 200) == 0) {
      v40 = *(_QWORD*)(a1 + 8440);
      v41 = *(_QWORD*)a2;
      v183 = *(_QWORD*)(a1 + 8416);
      v184 = *(_DWORD*)(a1 + 8424);
      v185 = *(_QWORD*)(a1 + 8432);
      v186 = v40;
      v187_.v187 = *(_QWORD*)(a1 + 8448);
      v185 = *fw_math_LookupStateIndex((unsigned __int64*)(a1 + 4584),
                                       (__int64*)&v185);
      v186 = *fw_math_LookupStateIndex((unsigned __int64*)(a1 + 4584),
                                       (__int64*)&v186);
      v42 =
          fw_math_LookupStateIndex((unsigned __int64*)(a1 + 4584), &v187_.v187);
      v43 = *(_DWORD*)(a1 + 216 + 136 * v185);
      v44 = *(_DWORD*)(a1 + 216 + 4 * (33 * v185 + *v42));
      v45 = *(_DWORD*)(a1 + 216 + 4 * (33 * v185 + v186));
      v46 = *(_DWORD*)(a1 + 216 + 4 * (33 * v186 + *v42));
      v47 = 33 * *v42;
      v48 = *(_DWORD*)(a1 + 216 + 4 * (33 * v186 + v185));
      v49 = *(_DWORD*)(a1 + 216 + 136 * v186);
      v50 = *(_DWORD*)(a1 + 216 + 136 * *v42);
      v51 = *(_QWORD*)(a1 + 15240);
      v52 = *(_DWORD*)(a1 + 216 + 4 * (v185 + v47));
      v53 = *(_DWORD*)(a1 + 216 + 4 * (v186 + v47));
      if (v51 == *(_QWORD*)(a1 + 15248)) {
        *(_QWORD*)(a1 + 15240) = v51 - 1;
      }
      v54 = v32 + 56LL * *(_QWORD*)(a1 + 15256);
      *(_DWORD*)(v54 + 20) = v43;
      *(_DWORD*)(v54 + 24) = v45;
      *(_DWORD*)(v54 + 28) = v44;
      *(_DWORD*)(v54 + 32) = v48;
      *(_DWORD*)(v54 + 36) = v49;
      *(_DWORD*)(v54 + 40) = v46;
      *(_DWORD*)(v54 + 44) = v52;
      *(_DWORD*)(v54 + 48) = v53;
      *(_DWORD*)(v54 + 52) = v50;
      *(_DWORD*)(v54 + 16) = v184;
      *(_QWORD*)v54 = v41;
      *(_QWORD*)(v54 + 8) = v183;
      v55 = *(_QWORD*)(a1 + 15248);
      ++*(_QWORD*)(a1 + 15240);
      v56 = *(_QWORD*)(a1 + 15256);
      if (v56 + 1 == v55) {
        v57 = 0;
      }
      else {
        v57 = v56 + 1;
      }
      *(_QWORD*)(a1 + 15256) = v57;
    }
  }
  v58 = *(float*)(a2 + 60);
  v59 = *(float*)(a2 + 64);
  v60 = *(float*)(a2 + 68);
  v61 = *(float*)(a1 + 15292);
  v62 = *(float*)(a1 + 15296);
  v63 = v61 * v61;
  v178 = *(float*)(a2 + 76);
  v179 = *(float*)(a2 + 72);
  v177 = *(float*)(a2 + 80);
  v64 = *(float*)(a1 + 15300);
  v65 = v62 * v62;
  v66 = v64 * v64;
  v67 = v61 * v62;
  v68 = v62 * v64;
  v69 = v61 * v64;
  *(float*)(a1 + 15276) = *(float*)(a2 + 56) + *(float*)(a1 + 15276);
  v70 = *(float*)(a2 + 56);
  v71 = v70 - *(float*)(a2 + 40);
  v72 = v71 * 0x1.921fb60000000p+2f;
  if (*(_BYTE*)(a2 + 48) != 0) {
    v71 = *(float*)(a2 + 56);
  }
  v73 = *(float*)(a1 + 15304);
  v74 = (float)(PSEUDO_UNFUSED(v73 * v73)) + v63;
  v75 = (float)((float)(v71 * 0x1.f400000000000p+9f) / 0x1.9000000000000p+6f) *
        (float)((float)(v71 * 0x1.f400000000000p+9f) / 0x1.9000000000000p+6f);
  v76 = (float)(v74 + v65) + v66;
  v77 = (float)((float)(v74 - v65) - v66) / v76;
  v78 = (float)(PSEUDO_UNFUSED(v73 * v73)) - v63;
  v79 = (float)((float)(v78 + v65) - v66) / v76;
  v80 = (float)((float)(v78 - v65) + v66) / v76;
  v182 = v77;
  v187_.v192 = v79;
  v187_.v193 = v80;
  v81 = (float)((float)((float)(PSEUDO_UNFUSED(v73 * v62)) + v69) +
                (float)((float)(PSEUDO_UNFUSED(v73 * v62)) + v69)) /
        v76;
  v82 = (float)((float)(v67 + (float)(PSEUDO_UNFUSED(v73 * v64))) +
                (float)(v67 + (float)(PSEUDO_UNFUSED(v73 * v64)))) /
        v76;
  v83 = *(float*)(a2 + 8);
  v180 = (float)((float)(v69 - (float)(PSEUDO_UNFUSED(v73 * v62))) +
                 (float)(v69 - (float)(PSEUDO_UNFUSED(v73 * v62)))) /
         v76;
  v181 = (float)((float)(v68 - (float)(PSEUDO_UNFUSED(v73 * v61))) +
                 (float)(v68 - (float)(PSEUDO_UNFUSED(v73 * v61)))) /
         v76;
  v84 = v70 * *(float*)(a2 + 12);
  v85 = v70 * *(float*)(a2 + 16);
  v86 = (float)(v63 + v65) + v66;
  v175 = (float)((float)((float)(PSEUDO_UNFUSED(v73 * v61)) + v68) +
                 (float)((float)(PSEUDO_UNFUSED(v73 * v61)) + v68)) /
         v76;
  v176 = (float)((float)(v67 - (float)(PSEUDO_UNFUSED(v73 * v64))) +
                 (float)(v67 - (float)(PSEUDO_UNFUSED(v73 * v64)))) /
         v76;
  v87 = (float)((float)((float)(PSEUDO_UNFUSED(v61 * (float)(v70 * v83))) +
                        0x0.0p+0f) +
                (float)(PSEUDO_UNFUSED(v62 * v84))) +
        (float)(PSEUDO_UNFUSED(v64 * v85));
  v88 =
      0x1.0000000000000p+1f / (float)((float)(PSEUDO_UNFUSED(v73 * v73)) + v86);
  *(float*)(a1 + 15280) =
      *(float*)(a1 + 15280) +
      (float)((float)(PSEUDO_UNFUSED(v70 * v83)) +
              (float)(PSEUDO_UNFUSED(
                  v88 *
                  (float)((float)(PSEUDO_UNFUSED(
                              v73 *
                              (float)((float)(PSEUDO_UNFUSED(v62 * v85)) -
                                      (float)(PSEUDO_UNFUSED(v64 * v84))))) +
                          (float)((float)(PSEUDO_UNFUSED(v61 * v87)) -
                                  (float)(PSEUDO_UNFUSED(
                                      v86 * (float)(v70 * v83))))))));
  *(float*)(a1 + 15284) =
      *(float*)(a1 + 15284) +
      (float)(v84 +
              (float)(PSEUDO_UNFUSED(
                  v88 *
                  (float)((float)(PSEUDO_UNFUSED(
                              v73 *
                              (float)((float)(PSEUDO_UNFUSED(
                                          v64 * (float)(v70 * v83))) -
                                      (float)(PSEUDO_UNFUSED(v61 * v85))))) +
                          (float)((float)(PSEUDO_UNFUSED(v62 * v87)) -
                                  (float)(PSEUDO_UNFUSED(v86 * v84)))))));
  *(float*)(a1 + 15288) =
      *(float*)(a1 + 15288) +
      (float)(v85 +
              (float)(PSEUDO_UNFUSED(
                  v88 *
                  (float)((float)(PSEUDO_UNFUSED(
                              v73 * (float)((float)(PSEUDO_UNFUSED(v61 * v84)) -
                                            (float)(PSEUDO_UNFUSED(
                                                v62 * (float)(v70 * v83)))))) +
                          (float)((float)(PSEUDO_UNFUSED(v64 * v87)) -
                                  (float)(PSEUDO_UNFUSED(v86 * v85)))))));
  v89 = *(float*)(a2 + 56) * *(float*)(a2 + 56);
  v90 = v58 * v89;
  v91 = v59 * v89;
  v92 = v60 * v89;
  v93 = v77 * v90;
  v94 = v176 * v91;
  v95 = v81 * v92;
  v96 = v82 * v90;
  v97 = v79 * v91;
  v98 = v181 * v92;
  v99 = v180 * v90;
  v100 = v175 * v91;
  v101 = v80 * v92;
  v102 = (float)(PSEUDO_UNFUSED(v81 * v95)) +
         (float)((float)(PSEUDO_UNFUSED(v176 * v94)) +
                 (float)((float)(PSEUDO_UNFUSED(v77 * v93)) + 0x0.0p+0f));
  v103 = v82 * v93;
  v104 = (float)(PSEUDO_UNFUSED(v80 * v95)) +
         (float)((float)(PSEUDO_UNFUSED(v175 * v94)) +
                 (float)((float)(PSEUDO_UNFUSED(v180 * v93)) + 0x0.0p+0f));
  v105 =
      (float)(PSEUDO_UNFUSED(v181 * v95)) +
      (float)((float)(PSEUDO_UNFUSED(v79 * v94)) + (float)(v103 + 0x0.0p+0f));
  v106 = (float)(PSEUDO_UNFUSED(v81 * v98)) +
         (float)((float)(PSEUDO_UNFUSED(v176 * v97)) +
                 (float)((float)(PSEUDO_UNFUSED(v77 * v96)) + 0x0.0p+0f));
  v107 = v82 * v96;
  v108 = (float)(PSEUDO_UNFUSED(v80 * v98)) +
         (float)((float)(PSEUDO_UNFUSED(v175 * v97)) +
                 (float)((float)(PSEUDO_UNFUSED(v180 * v96)) + 0x0.0p+0f));
  v109 =
      (float)(PSEUDO_UNFUSED(v181 * v98)) +
      (float)((float)(PSEUDO_UNFUSED(v79 * v97)) + (float)(v107 + 0x0.0p+0f));
  v110 = v79 * v100;
  v111 = (float)(PSEUDO_UNFUSED(v81 * v101)) +
         (float)((float)(PSEUDO_UNFUSED(v176 * v100)) +
                 (float)((float)(PSEUDO_UNFUSED(v77 * v99)) + 0x0.0p+0f));
  v112 = v82 * v99;
  v113 = (float)(PSEUDO_UNFUSED(v175 * v100)) +
         (float)((float)(PSEUDO_UNFUSED(v180 * v99)) + 0x0.0p+0f);
  v114 = v80 * v101;
  v115 = v110 + (float)(v112 + 0x0.0p+0f);
  v116 = v181 * v101;
  v117 = v75 + v102;
  v118 = v72 * v72;
  v119 = v114 + v113;
  v120 = v75 + v109;
  v121 = v75 + v119;
  v122 = *(float*)(a1 + 15308) + v117;
  v123 = *(float*)(a1 + 8456);
  *(float*)(a1 + 15308) = v122;
  *(float*)(a1 + 15312) = *(float*)(a1 + 15312) + v105;
  *(float*)(a1 + 15316) = *(float*)(a1 + 15316) + v104;
  *(float*)(a1 + 15320) = v106 + *(float*)(a1 + 15320);
  v124 = v120 + *(float*)(a1 + 15324);
  v125 = *(float*)(a1 + 15416);
  *(float*)(a1 + 15324) = v124;
  *(float*)(a1 + 15328) = v108 + *(float*)(a1 + 15328);
  *(float*)(a1 + 15332) = v111 + *(float*)(a1 + 15332);
  *(float*)(a1 + 15336) = (float)(v116 + v115) + *(float*)(a1 + 15336);
  v126 = *(float*)(a1 + 15412);
  *(float*)(a1 + 15340) = v121 + *(float*)(a1 + 15340);
  v127 = *(float*)(a2 + 20) - *(float*)(a1 + 15408);
  v128 = *(float*)(a2 + 24) - v126;
  v129 = *(float*)(a2 + 28) - v125;
  v130 = (float)((float)((float)(PSEUDO_UNFUSED(v123 * v127)) + 0x0.0p+0f) +
                 (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8460) * v128))) +
         (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8464) * v129));
  v131 = (float)((float)((float)(PSEUDO_UNFUSED(*(float*)(a1 + 8468) * v127)) +
                         0x0.0p+0f) +
                 (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8472) * v128))) +
         (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8476) * v129));
  v132 = (float)((float)((float)(PSEUDO_UNFUSED(*(float*)(a1 + 8480) * v127)) +
                         0x0.0p+0f) +
                 (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8484) * v128))) +
         (float)(PSEUDO_UNFUSED(*(float*)(a1 + 8488) * v129));
  v133 = *(float*)(a2 + 56);
  v134 = v133 * v130;
  v135 = v133 * v131;
  v136 = v133 * v132;
  v137 = sqrtf((float)((float)(PSEUDO_UNFUSED(v136 * v136)) +
                       (float)((float)(PSEUDO_UNFUSED(v134 * v134)) +
                               (float)(PSEUDO_UNFUSED(v135 * v135)))) +
               0x1.0000000000000p-126f) *
         0x1.0000000000000p-1f;
  if ((float)(v137 * v137) <= 0x1.47ae140000000p-5f) {
    v138 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v137 *
                                                                                        v137) *
                                                                                -0x1.ae64560000000p-26f) +
                                                                        0x1.71de3a0000000p-19f) *
                                                                (float)(v137 *
                                                                        v137)) +
                                                        -0x1.a01a020000000p-13f) *
                                                (float)(v137 * v137)) +
                                        0x1.1111120000000p-7f) *
                                (float)(v137 * v137)) +
                        -0x1.5555560000000p-3f) *
                (float)(v137 * v137)) +
        0x1.0000000000000p+0f;
  }
  else {
    v138 = sinf_plt(v137) / v137;
  }
  v139 = v138 * 0x1.0000000000000p-1f;
  v140 = cosf_plt(v137);
  v141 = *(float*)(a1 + 15292);
  v142 = *(float*)(a1 + 15296);
  v143 = *(float*)(a1 + 15300);
  v144 = *(float*)(a1 + 15304);
  v145 = *(_BYTE*)(v2 + 3092);
  v147 = v187_.v192;
  v146 = v187_.v193;
  *(float*)(a1 + 15304) =
      -(float)((float)((float)((float)((float)(v141 * (float)(v134 * v139)) +
                                       0x0.0p+0f) +
                               (float)(v142 * (float)(v135 * v139))) +
                       (float)(v143 * (float)(v136 * v139))) -
               (float)(v144 * v140));
  *(float*)(a1 + 15292) =
      (float)((float)(PSEUDO_UNFUSED(v144 * (float)(v134 * v139))) +
              (float)(PSEUDO_UNFUSED(v140 * v141))) +
      (float)((float)(v142 * (float)(v136 * v139)) -
              (float)(PSEUDO_UNFUSED((float)(v135 * v139) * v143)));
  *(float*)(a1 + 15296) =
      (float)((float)(PSEUDO_UNFUSED(v144 * (float)(v135 * v139))) +
              (float)(PSEUDO_UNFUSED(v140 * v142))) +
      (float)((float)(v143 * (float)(v134 * v139)) -
              (float)(PSEUDO_UNFUSED((float)(v136 * v139) * v141)));
  *(float*)(a1 + 15300) =
      (float)((float)(v141 * (float)(v135 * v139)) -
              (float)(PSEUDO_UNFUSED((float)(v134 * v139) * v142))) +
      (float)((float)(PSEUDO_UNFUSED(v144 * (float)(v136 * v139))) +
              (float)(PSEUDO_UNFUSED(v140 * v143)));
  v148 = *(float*)(a2 + 56) * *(float*)(a2 + 56);
  v149 = v179 * v148;
  v150 = v178 * v148;
  v151 = v177 * v148;
  v152 = v182 * v149;
  v153 = v176 * v150;
  v154 = v81 * v151;
  v155 = v82 * v149;
  v156 = v147 * v150;
  v157 = v181 * v151;
  v158 = v180 * v149;
  v159 = v175 * v150;
  v160 = v146 * v151;
  *(float*)(a1 + 15344) =
      *(float*)(a1 + 15344) +
      (float)(v118 +
              (float)((float)(PSEUDO_UNFUSED(v81 * v154)) +
                      (float)((float)(PSEUDO_UNFUSED(v176 * v153)) +
                              (float)((float)(PSEUDO_UNFUSED(v182 * v152)) +
                                      0x0.0p+0f))));
  *(float*)(a1 + 15348) =
      *(float*)(a1 + 15348) +
      (float)((float)(PSEUDO_UNFUSED(v181 * v154)) +
              (float)((float)(PSEUDO_UNFUSED(v147 * v153)) +
                      (float)((float)(PSEUDO_UNFUSED(v82 * v152)) +
                              0x0.0p+0f)));
  *(float*)(a1 + 15352) =
      *(float*)(a1 + 15352) +
      (float)((float)(PSEUDO_UNFUSED(v146 * v154)) +
              (float)((float)(PSEUDO_UNFUSED(v175 * v153)) +
                      (float)((float)(PSEUDO_UNFUSED(v180 * v152)) +
                              0x0.0p+0f)));
  *(float*)(a1 + 15356) =
      (float)((float)(PSEUDO_UNFUSED(v81 * v157)) +
              (float)((float)(PSEUDO_UNFUSED(v176 * v156)) +
                      (float)((float)(PSEUDO_UNFUSED(v182 * v155)) +
                              0x0.0p+0f))) +
      *(float*)(a1 + 15356);
  *(float*)(a1 + 15360) =
      (float)(v118 +
              (float)((float)(PSEUDO_UNFUSED(v181 * v157)) +
                      (float)((float)(PSEUDO_UNFUSED(v147 * v156)) +
                              (float)((float)(PSEUDO_UNFUSED(v82 * v155)) +
                                      0x0.0p+0f)))) +
      *(float*)(a1 + 15360);
  *(float*)(a1 + 15364) =
      (float)((float)(PSEUDO_UNFUSED(v146 * v157)) +
              (float)((float)(PSEUDO_UNFUSED(v175 * v156)) +
                      (float)((float)(PSEUDO_UNFUSED(v180 * v155)) +
                              0x0.0p+0f))) +
      *(float*)(a1 + 15364);
  *(float*)(a1 + 15368) =
      (float)((float)(PSEUDO_UNFUSED(v81 * v160)) +
              (float)((float)(PSEUDO_UNFUSED(v176 * v159)) +
                      (float)((float)(PSEUDO_UNFUSED(v182 * v158)) +
                              0x0.0p+0f))) +
      *(float*)(a1 + 15368);
  *(float*)(a1 + 15372) =
      (float)((float)(PSEUDO_UNFUSED(v181 * v160)) +
              (float)((float)(PSEUDO_UNFUSED(v147 * v159)) +
                      (float)((float)(PSEUDO_UNFUSED(v82 * v158)) +
                              0x0.0p+0f))) +
      *(float*)(a1 + 15372);
  *(float*)(a1 + 15376) =
      (float)(v118 +
              (float)((float)(PSEUDO_UNFUSED(v146 * v160)) +
                      (float)((float)(PSEUDO_UNFUSED(v175 * v159)) +
                              (float)((float)(PSEUDO_UNFUSED(v180 * v158)) +
                                      0x0.0p+0f)))) +
      *(float*)(a1 + 15376);
  *(_BYTE*)(v2 + 3092) = (v145 | *(_BYTE*)(a2 + 48)) & 1;
  if (*(_BYTE*)(a2 + 36) == 1) {
    *(float*)(a1 + 15388) = *(float*)(a2 + 56) + *(float*)(a1 + 15388);
    if ((*(_BYTE*)(a2 + 36) & 1) == 0) {
      nn_codec_hwacod_32f020();
    }
    *(float*)(a1 + 15384) =
        (float)(PSEUDO_UNFUSED(*(float*)(a2 + 32) * *(float*)(a2 + 56))) +
        *(float*)(a1 + 15384);
  }
  if (*(_BYTE*)(v2 + 3264) == 1) {
    *(_QWORD*)(a1 + 15440) = *(_QWORD*)a2;
    v161 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a1 + 15456) = *(_DWORD*)(a2 + 16);
    *(_QWORD*)(a1 + 15448) = v161;
    LODWORD(v161) = *(_DWORD*)(a2 + 28);
    *(_QWORD*)(a1 + 15460) = *(_QWORD*)(a2 + 20);
    *(_DWORD*)(a1 + 15468) = v161;
    v162 = *(_QWORD*)(a2 + 32);
    v163 = *(_QWORD*)(a2 + 40);
    *(_BYTE*)(a1 + 15488) = *(_BYTE*)(a2 + 48);
    *(_QWORD*)(a1 + 15480) = v163;
    *(_QWORD*)(a1 + 15472) = v162;
    *(_DWORD*)(a1 + 15496) = *(_DWORD*)(a2 + 56);
    LODWORD(v161) = *(_DWORD*)(a2 + 68);
    *(_QWORD*)(a1 + 15500) = *(_QWORD*)(a2 + 60);
    *(_DWORD*)(a1 + 15508) = v161;
    v164 = *(_QWORD*)(a2 + 72);
    *(_DWORD*)(a1 + 15520) = *(_DWORD*)(a2 + 80);
    *(_QWORD*)(a1 + 15512) = v164;
    *(_QWORD*)(v2 + 3236) = *(_QWORD*)(a2 + 84);
    LODWORD(v164) = *(_DWORD*)(a2 + 100);
    *(_QWORD*)(a1 + 15532) = *(_QWORD*)(a2 + 92);
    *(_DWORD*)(a1 + 15540) = v164;
    *(_DWORD*)(a1 + 15544) = *(_DWORD*)(a2 + 104);
  }
  else {
    v165 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a1 + 15440) = *(_QWORD*)a2;
    *(_QWORD*)(a1 + 15448) = v165;
    v166 = *(_QWORD*)(a2 + 16);
    v167 = *(_QWORD*)(a2 + 24);
    v168 = *(_QWORD*)(a2 + 40);
    *(_QWORD*)(a1 + 15472) = *(_QWORD*)(a2 + 32);
    *(_QWORD*)(a1 + 15480) = v168;
    *(_QWORD*)(a1 + 15456) = v166;
    *(_QWORD*)(a1 + 15464) = v167;
    v169 = *(_QWORD*)(a2 + 48);
    v170 = *(_QWORD*)(a2 + 56);
    v171 = *(_QWORD*)(a2 + 72);
    *(_QWORD*)(a1 + 15504) = *(_QWORD*)(a2 + 64);
    *(_QWORD*)(a1 + 15512) = v171;
    *(_QWORD*)(a1 + 15488) = v169;
    *(_QWORD*)(a1 + 15496) = v170;
    v172 = *(_QWORD*)(a2 + 80);
    v173 = *(_QWORD*)(a2 + 88);
    v174 = *(_QWORD*)(a2 + 104);
    *(_QWORD*)(a1 + 15536) = *(_QWORD*)(a2 + 96);
    *(_QWORD*)(a1 + 15544) = v174;
    *(_QWORD*)(a1 + 15520) = v172;
    *(_QWORD*)(a1 + 15528) = v173;
    *(_BYTE*)(v2 + 3264) = 1;
  }
}

__int64

nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration(
    __int64 this_)
{
  __int64 v1;
  float v2;
  float v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  double v13;
  double v14;
  long double v15;
  float v16;
  float v17;
  long double v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  float* v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  _BYTE v36[12];
  int v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  float v44[3];

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s3", "=w"));
  v1 = *(_QWORD*)(this_ + 14976);
  if (v1 != 0) {
    v2 = 0x1.0000000000000p-1f;
    v3 = 0x0.0p+0f;
    v4 = 0x0.0p+0f;
    v5 = 0x0.0p+0f;
    v6 = this_;
    v7 = this_ + 12416;
    v8 = 0;
    do {
      v19 = *(_QWORD*)(v6 + 14976);
      v20 = *(_QWORD*)(v6 + 14992);
      v21 = *(_QWORD*)(v6 + 14984);
      if (v19 <= v20) {
        v22 = 0;
      }
      else {
        v22 = *(_QWORD*)(v6 + 14984);
      }
      v23 = v22 + v20;
      if (v8 + v23 - v19 < v21) {
        v21 = 0;
      }
      v24 = (float*)(v7 + ((v8 + v23 - v21 - v19) << 6));
      v25 = v24[14];
      v26 = v25 * v24[5];
      v27 = v25 * v24[6];
      v28 = v25 * v24[7];
      v29 = sqrtf((float)((float)((float)(PSEUDO_UNFUSED(v26 * v26)) +
                                  (float)(PSEUDO_UNFUSED(v27 * v27))) +
                          (float)(PSEUDO_UNFUSED(v28 * v28))) +
                  0x1.0000000000000p-126f) *
            v2;
      if ((float)(v29 * v29) > 0x1.47ae140000000p-5f) {
        v9 = sinf_plt(v29) / v29,
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s3", "=w"));
      }
      else {
        v9 =
            (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v29 *
                                                                                            v29) *
                                                                                    -0x1.ae64560000000p-26f) +
                                                                            0x1.71de3a0000000p-19f) *
                                                                    (float)(v29 *
                                                                            v29)) +
                                                            -0x1.a01a020000000p-13f) *
                                                    (float)(v29 * v29)) +
                                            0x1.1111120000000p-7f) *
                                    (float)(v29 * v29)) +
                            -0x1.5555560000000p-3f) *
                    (float)(v29 * v29)) +
            0x1.0000000000000p+0f;
      }
      v10 = v9 * 0x1.0000000000000p-1f;
      *(float*)&v15 = cosf_plt(v29),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(float, "s1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(float, "s3", "=w"));
      ++v8;
      v2 = 0x1.0000000000000p-1f;
      v11 = (float)(PSEUDO_UNFUSED((float)(v28 * v10) * (float)(v28 * v10))) +
            (float)((float)(PSEUDO_UNFUSED((float)(v26 * v10) *
                                           (float)(v26 * v10))) +
                    (float)(PSEUDO_UNFUSED((float)(v27 * v10) *
                                           (float)(v27 * v10))));
      v12 = (float)((float)((float)((float)(v26 * v10) * v3) + 0x0.0p+0f) +
                    (float)((float)(v27 * v10) * v4)) +
            (float)((float)(v28 * v10) * v5);
      *(float*)&v18 = *(float*)&v15 *
                      (float)((float)((float)(v28 * v10) * v3) -
                              (float)(PSEUDO_UNFUSED(v5 * (float)(v26 * v10))));
      *(float*)&v14 =
          (float)((float)(PSEUDO_UNFUSED((float)(v26 * v10) * v12)) -
                  (float)(PSEUDO_UNFUSED(v3 * v11))) -
          (float)(PSEUDO_UNFUSED(
              *(float*)&v15 *
              (float)((float)((float)(v27 * v10) * v5) -
                      (float)(PSEUDO_UNFUSED(v4 * (float)(v28 * v10))))));
      *(float*)&v13 =
          (float)((float)(PSEUDO_UNFUSED((float)(v28 * v10) * v12)) -
                  (float)(PSEUDO_UNFUSED(v5 * v11))) -
          (float)(PSEUDO_UNFUSED(
              *(float*)&v15 *
              (float)((float)((float)(v26 * v10) * v4) -
                      (float)(PSEUDO_UNFUSED(v3 * (float)(v27 * v10))))));
      *(float*)&v15 =
          0x1.0000000000000p+1f /
          (float)((float)(PSEUDO_UNFUSED(*(float*)&v15 * *(float*)&v15)) + v11);
      *(float*)&v14 = *(float*)&v15 * *(float*)&v14;
      *(float*)&v18 =
          *(float*)&v15 *
          (float)((float)((float)(PSEUDO_UNFUSED((float)(v27 * v10) * v12)) -
                          (float)(PSEUDO_UNFUSED(v4 * v11))) -
                  *(float*)&v18);
      *(float*)&v15 = *(float*)&v15 * *(float*)&v13;
      *(float*)&v13 = v3 + *(float*)&v14;
      *(float*)&v14 = v4 + *(float*)&v18;
      *(float*)&v18 = v24[14];
      *(float*)&v15 = v5 + *(float*)&v15;
      v16 = *(float*)&v18 * v24[2];
      v17 = *(float*)&v18 * v24[3];
      *(float*)&v18 = *(float*)&v18 * v24[4];
      v3 = v16 + *(float*)&v13;
      v4 = *(float*)&v14 + v17;
      v5 = *(float*)&v15 + *(float*)&v18;
    } while (v1 != v8);
    v44[0] = v16 + *(float*)&v13;
    v44[1] = *(float*)&v14 + v17;
    v44[2] = *(float*)&v15 + *(float*)&v18;
    *(_QWORD*)v36 = 0;
    *(_DWORD*)&v36[8] = 1065353216;
    *(float*)(v6 + 8224) =
        SdkRoutine_712760(v44, (float*)v36, v15, v13, v14, v18),
                   v30 = COERCE_AS(__typeof__(v30),
                                   PSEUDO_REGISTER(float, "s1", "=w")),
                   v31 = COERCE_AS(__typeof__(v31),
                                   PSEUDO_REGISTER(float, "s2", "=w")),
                   v32 = COERCE_AS(__typeof__(v32),
                                   PSEUDO_REGISTER(float, "s3", "=w"));
    *(_DWORD*)(v6 + 8228) = v30;
    *(_DWORD*)(v6 + 8232) = v31;
    *(_DWORD*)(v6 + 8236) = v32;
    v33 = *(_DWORD*)((char*)SdkData_e891a8[0] +
                     (unsigned __int64)((__int64*)0xCLL));
    v34 = *(_DWORD*)((char*)SdkData_e891a8[0] +
                     (unsigned __int64)((__int64*)0xCLL) + 4);
    v43 = 0;
    v42 = 0;
    *(_QWORD*)&v36[4] = 0;
    v37 = 0;
    v39 = 0;
    v40 = 0;
    *(_DWORD*)v36 = v33;
    v35 =
        *(_DWORD*)((char*)SdkData_e891a8[0] + (unsigned __int64)((int*)0x14LL));
    v38 = v34;
    v41 = v35;
    return SdkRoutine_879f50(v6 + 200, &v43, &v42, v6 + 8240, v36);
  }
  return this_;
}

__int64 nerd_gyro_pointing_GyroPointingCore_Update(__int64 this_)
{
  __int64 v1;
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
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
  bool v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  char v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  _BYTE* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _BYTE* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  float v82;
  float* v83;
  float v84;
  float v85;
  float v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  float v94;
  __int64* v95;
  __int64 v96;
  float v97;
  __int64* v98;
  float v99;
  __int64* v100;
  __int64* v101;
  __int64 v102;
  float v103;
  __int64* v104;
  __int64* v105;
  __int64 v106;
  float v107;
  __int64* v108;
  __int64* v109;
  __int64 v110;
  float v111;
  float v112;
  float v113;
  float v114;
  bool v115;
  char v116;
  float v117;
  __int64 v118;
  __int64 v119;
  float v120;
  float v121;
  float v122;
  float v123;
  char v124;
  float v125;
  __int64* v126;
  __int64 v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  char v134;
  float v135;
  __int64* v136;
  __int64 v137;
  float v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  float v142;
  float v143;
  __int64 v144;
  __int64 v145;
  char v146;
  float v147;
  char v148;
  float v149;
  __int64 v150;
  __int64 v151;
  float v152;
  float v153;
  __int64 v154;
  __int64 v155;
  char v156;
  float v157;
  char v158;
  float v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  bool v168;
  float v169;
  char v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  float v174;
  float v175;
  float v176;
  bool v177;
  char v178;
  float v179;
  char v180;
  __int64 v181;
  __int64 v182;
  float v183;
  float v184;
  float v185;
  float v186;
  float v187;
  float v188;
  bool v189;
  char v190;
  float v191;
  char v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  float v197;
  __int64* v198;
  __int64 v199;
  __int64 v200;
  float v201;
  float v202;
  __int64* v203;
  __int64 v204;
  __int64 v205;
  float v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  float v210;
  __int64 v211;
  float v212;
  float v213;
  float v214;
  float v215;
  float v216;
  float v217;
  float v218;
  float v219;
  float v220;
  float v221;
  float v222;
  float v223;
  float v224;
  float v225;
  int v226;
  _DWORD* v227;
  int v228;
  __int64 v229;
  __int64 v230;
  int v231;
  __int64 v232;
  __int64 v233;
  int v234;
  int v235;
  int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  __int64* v251;
  __int64 v252;
  unsigned __int64 v253;
  __int64* v254;
  __int64 v255;
  bool v256;
  __int64* v257;
  unsigned __int64* v258;
  float* v259;
  unsigned __int64 v260;
  __int64 v261;
  float v262;
  float* v263;
  float v264;
  float v265;
  float v266;
  float v267;
  float v268;
  float v269;
  float v270;
  float v271;
  float v272;
  float v273;
  float v274;
  float v275;
  float v276;
  float v277;
  float v278;
  float v279;
  float v280;
  float v281;
  float v282;
  float v283;
  float v284;
  float v285;
  float v286;
  float v287;
  float v288;
  float v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  float v293;
  float v294;
  float v295;
  __int64* v296;
  __int64 v297;
  __int64* v298;
  __int64 v299;
  __int64* v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64* v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  unsigned __int64 v308;
  float* v309;
  __int64 v310;
  float v311;
  float* v312;
  float v313;
  float v314;
  float v315;
  float v316;
  float v317;
  float v318;
  float v319;
  unsigned __int64 v320;
  char* v321;
  __int64 v322;
  char* v323;
  __int64 v324;
  __int64 v325;
  unsigned __int64 v326;
  float* v327;
  __int64 v328;
  float v329;
  float* v330;
  float v331;
  float v332;
  float v333;
  float v334;
  float v335;
  float v336;
  float v337;
  unsigned __int64 v338;
  char* v339;
  __int64 v340;
  char* v341;
  unsigned __int64 v342;
  float* v343;
  __int64 v344;
  float v345;
  float* v346;
  float v347;
  float v348;
  float v349;
  float v350;
  float v351;
  float v352;
  float v353;
  float v354;
  float v355;
  float v356;
  float v357;
  float v358;
  float v359;
  char v360;
  unsigned __int64 v361;
  float v362;
  __int64 v363;
  __int64 v364;
  float v365;
  float v366;
  float v367;
  float v368;
  unsigned __int64 v369;
  unsigned __int64 v370;
  __int64 v371;
  __int64 v372;
  _BYTE* v373;
  __int64* v374;
  char* v375;
  char* v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  char* v381;
  __int64 v382;
  char* v383;
  __int64 v384;
  __int64* v385;
  _BYTE* v386;
  __int64 v387;
  char* v388;
  __int64 v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  unsigned __int64 v393;
  unsigned __int64 v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  __int64* v401;
  __int64 v402;
  __int64 v403;
  __int64* v404;
  __int64 v405;
  __int64 v406;
  float v407;
  float v408;
  float v409;
  float v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  float v414;
  __int64 v415;
  __int64 v416;
  __int64 v417;
  float v418;
  __int64 v419;
  __int64 v420;
  __int64 v421;
  int v422;
  int v423;
  int v424;
  float v425;
  unsigned int v426;
  unsigned int v427;
  unsigned __int64 v428;
  __int64 v429;
  __int64 v430;
  unsigned __int64 v431;
  __int64* v432;
  __int64 v433;
  __int64* v434;
  __int64 v435;
  __int64 v436;
  unsigned __int64 v437;
  float* v438;
  __int64 v439;
  float v440;
  float* v441;
  float v442;
  float v443;
  float v444;
  float v445;
  unsigned __int64 v446;
  char* v447;
  __int64 v448;
  char* v449;
  __int64 v450;
  __int64 v451;
  unsigned __int64 v452;
  float* v453;
  __int64 v454;
  float v455;
  float* v456;
  float v457;
  float v458;
  float v459;
  float v460;
  unsigned __int64 v461;
  char* v462;
  __int64 v463;
  char* v464;
  unsigned __int64 v465;
  float* v466;
  __int64 v467;
  float v468;
  float* v469;
  float v470;
  float v471;
  float v472;
  float v473;
  __int64 v474;
  __int64 v475;
  __int64 v476;
  __int64 v477;
  float v478;
  __int64 v479;
  __int64 v480;
  float v481;
  float v482;
  __int64 v483;
  __int64 v484;
  float v485;
  float v486;
  __int64 v487;
  float v488;
  float v489;
  float v490;
  __int64 v491;
  float v492;
  float v493;
  float v494;
  float v495;
  __int64 v496;
  float v497;
  float v498;
  float v499;
  float v500;
  __int64 v501;
  float v502;
  unsigned int v503;
  float v504;
  float v505;
  float v506;
  float v507;
  float v508;
  __int64 v509;
  __int64 v510;
  float v511;
  unsigned int v512;
  float v513;
  float v514;
  float v515;
  float v516;
  float v517;
  float v518;
  float v519;
  float v520;
  float v521;
  float v522;
  float v523;
  float v524;
  float v525;
  float v526;
  float v527;
  float v528;
  float v529;
  float v530;
  float v531;
  float v532;
  float v533;
  float v534;
  float v535;
  float v536;
  float v537;
  float v538;
  float v539;
  float v540;
  __int64 v541;
  float v542;
  float v543;
  float v544;
  float v545;
  __int64 v546;
  float v547;
  float v548;
  float v549;
  float v550;
  float v551;
  float v552;
  float v553;
  float v554;
  float v555;
  float v556;
  float v557;
  float v558;
  float v559;
  float v560;
  float v561;
  float v562;
  float v563;
  float v564;
  float v565;
  float v566;
  float v567;
  float v568;
  float v569;
  float v570;
  float v571;
  float v572;
  float v573;
  float v574;
  float v575;
  float v576;
  float v577;
  float v578;
  float v579;
  float v580;
  float v581;
  float v582;
  float v583;
  float v584;
  float v585;
  float v586;
  float v587;
  float v588;
  float v589;
  float v590;
  float v591;
  float v592;
  float v593;
  float v594;
  float v595;
  float v596;
  float v597;
  float v598;
  float v599;
  float v600;
  float v601;
  float v602;
  float v603;
  float v604;
  float v605;
  float v606;
  float v607;
  float v608;
  float v609;
  float v610;
  float v611;
  float v612;
  float v613;
  float v614;
  float v615;
  float v616;
  float v617;
  float v618;
  float v619;
  float v620;
  float v621;
  float v622;
  float v623;
  float v624;
  float v625;
  float v626;
  float v627;
  float v628;
  float v629;
  float v630;
  float v631;
  float v632;
  float v633;
  float v634;
  float v635;
  float v636;
  float v637;
  float v638;
  float v639;
  float v640;
  float v641;
  float v642;
  float v643;
  float v644;
  float v645;
  float v646;
  float v647;
  float v648;
  float v649;
  float v650;
  float v651;
  float v652;
  float v653;
  float v654;
  float v655;
  float v656;
  float v657;
  float v658;
  float v659;
  float v660;
  float v661;
  float v662;
  float v663;
  float v664;
  float v665;
  float v666;
  float v667;
  float v668;
  __int64 v669;
  float v670;
  float v671;
  float v672;
  float v673;
  float v674;
  __int64 v675;
  __int64 v676;
  unsigned __int64* v677;
  __int64 v678;
  _DWORD* v679;
  int v680;
  int v681;
  int v682;
  int v683;
  int v684;
  _BYTE* v685;
  int* v686;
  _DWORD* v687;
  int v688;
  float v689;
  float v690;
  float v691;
  __int64 v692;
  float v693;
  float v694;
  float v695;
  float v696;
  float v697;
  float v698;
  float v699;
  float v700;
  float v701;
  unsigned __int64 v702;
  float v703;
  float v704;
  float v705;
  float v706;
  float v707;
  float v708;
  float v709;
  float v710;
  float v711;
  float v712;
  float v713;
  float v714;
  float v715;
  float v716;
  __int64* v717;
  float v718;
  float v719;
  __int64 v720;
  float v721;
  char v722;
  float v723;
  __int64 v724;
  __int64 v725;
  float v726;
  float v727;
  float v728;
  float v729;
  float v730;
  float v731;
  float v732;
  float v733;
  float v734;
  float v735;
  float v736;
  float v737;
  float v738;
  __int64 v739;
  float v740;
  float v741;
  float v742;
  float v743;
  float v744;
  float v745;
  float v746;
  float v747;
  unsigned int v748;
  float v749;
  float v750;
  float v751;
  float v752;
  float v753;
  unsigned int v754;
  __int64 v755;
  float v756;
  float v757;
  float v758;
  float v759;
  float v760;
  float v761;
  __int64* v762;
  float v763;
  float v764;
  float v765;
  float v766;
  __int64 v767;
  float v768;
  float v769;
  float v770;
  float v771;
  __int64 v772;
  float v773;
  float v774;
  float v775;
  float v776;
  float v777;
  float v778;
  float v779;
  float v780;
  float v781;
  float v782;
  float v783;
  float v784;
  float v785;
  float v786;
  float v787;
  float v788;
  float v789;
  float v790;
  float v791;
  float v792;
  float v793;
  float v794;
  float v795;
  float v796;
  float v797;
  float v798;
  unsigned int v799;
  float v800;
  float v801;
  float v802;
  float v803;
  float v804;
  float v805[2];
  __int64 v806;
  float v807;
  __int64 v808;
  int v809;
  float v810;
  __int64 v811;
  int v812;
  float v813[9];
  struct {
    __int64 v814;
    __int64 v815;
    __int64 v816;
    __int64 v817;
    float v818;
  } v814_;
  _QWORD v819[3];
  struct {
    unsigned __int64 v820;
    unsigned __int64 v821;
    __int64 v822;
    __int64 v823;
    __int64 v824;
    float v825;
    int v826;
    __int64 v827;
    __int64 v828;
    float v829;
    int v830;
  } v820_;
  struct {
    unsigned __int64 v831;
    unsigned __int64 v832;
  } v831_;
  struct {
    unsigned __int64 v833;
    __int64 v834;
    __int64 v835;
    __int64 v836;
    __int64 v837;
    __int64 v838;
    __int64 v839;
  } v833_;
  __int64 v840;
  __int64 v841;
  __int64 v842;
  __int64* v843;
  __int64 v844;
  __int64 v845;
  __int64* v846;
  __int64 v847;
  __int64 v848;
  __int64 v849;
  __int64 v850;
  unsigned int v851;
  __int64 v852;
  __int64 v853;
  unsigned int v854;
  __int64 v855;
  __int64 v856;
  unsigned int v857;
  __int64 v858;
  __int64 v859;
  unsigned int v860;
  __int64 v861;
  __int64 v862;
  unsigned int v863;
  __int64 v864;
  __int64 v865;
  unsigned int v866;
  __int64 v867[2];
  __int64 v868;
  __int128 v869;
  __int64 v870;
  __int64 v871;
  __int64 v872;
  __int64 v873;
  __int64 v874;
  __int64 v875;
  __int64 v876;
  __int64 v877;
  __int64 v878;
  __int64 v879;
  __int64 v880;
  __int64 v881;
  __int64 v882;
  __int64 v883;
  __int64 v884;
  __int64 v885;
  __int64 v886;
  __int64 v887;
  __int64 v888;
  __int64 v889;
  __int64 v890;
  __int64 v891;
  __int64 v892;
  __int64 v893;
  __int64 v894;
  __int64 v895;
  __int64 v896;
  __int64 v897;
  __int64 v898;
  __int64 v899;
  __int64 v900;
  __int64 v901;
  __int64 v902;
  __int64 v903;
  __int64 v904;
  _BYTE v905[184];
  __int64* v906;
  unsigned __int64 v907;
  __int64 v908;
  __int64 v909;
  __int64 v910;
  __int64 v911;
  __int64 v912;
  __int64 v913;
  __int64 v914;
  __int64 v915;
  __int64 v916;
  __int64 v917;
  __int64 v918;
  __int64 v919;
  __int64 v920;
  __int64 v921;
  __int64 v922;
  __int64 v923;
  __int64 v924;
  __int64 v925;
  __int64 v926;
  __int64* v927;
  __int64 v928;
  __int64 v929;
  __int64* v930;
  __int64 v931;
  __int64 v932;
  __int64* v933;
  __int64 v934;
  __int64 v935;
  __int64 v936;
  __int64 v937;
  __int64 v938;
  __int64 v939;
  __int64 v940;
  __int64 v941;
  __int64 v942;
  __int64 v943;
  __int64 v944;
  __int64 v945;
  __int64 v946;
  __int64 v947;
  __int64 v948;
  __int64* v949;
  __int64 v950;
  __int64 v951;
  __int64* v952;
  __int64 v953;
  __int64 v954;
  __int64* v955;
  __int64 v956;
  __int64 v957;
  __int64 v958;
  __int64 v959;
  __int64 v960;
  __int64 v961;
  __int64 v962;
  __int64 v963;
  __int64 v964;
  __int64 v965;
  __int64 v966;
  __int64 v967;
  __int64 v968;
  __int64 v969;
  __int64 v970;
  __int64 v971;
  __int64 v972;
  __int64 v973;
  __int64 v974;
  float v975;
  __int16 v976;
  __int64 v977;
  float v978;
  __int16 v979;
  __int64 v980;
  float v981;
  __int16 v982;
  __int64 v983;
  float v984;
  __int16 v985;
  __int64 v986;
  int v987;
  __int16 v988;
  __int64 v989;
  int v990;
  __int16 v991;
  __int64 v992;
  int v993;
  __int16 v994;
  __int64 v995;
  __int16 v996;
  __int64 v997;
  __int16 v998;
  __int64 v999;
  __int16 v1000;
  __int64 v1001;
  __int16 v1002;
  unsigned __int64 v1003;
  __int16 v1004;
  unsigned __int64 v1005;
  __int16 v1006;
  unsigned __int64 v1007;
  __int64 v1008;
  _QWORD v1009[4];
  int v1010;
  _QWORD v1011[10];
  __int64 v1012;
  __int64 v1013;
  __int64 v1014;
  __int64 v1015;
  __int64 v1016[2];
  _QWORD v1017[6];
  __int64 v1018;
  __int64 v1019;
  __int64 v1020;
  __int64 v1021;
  __int64 v1022;
  __int64 v1023;
  __int64 v1024;
  __int64 v1025;
  __int64 v1026;
  __int64 v1027;
  __int64 v1028;
  __int64 v1029;
  __int64 v1030;
  __int64 v1031;
  __int64 v1032;
  __int64 v1033;
  __int64 v1034;
  __int64 v1035;
  __int64 v1036;

  v1 = this_ + 12288;
  if (*(_BYTE*)(this_ + 15552) == 1) {
    v2 = *(_QWORD*)(this_ + 15520);
    v3 = *(float*)(this_ + 15408);
    v4 = *(_QWORD*)(this_ + 15528);
    v5 = this_;
    v6 = *(float*)(this_ + 15284);
    v7 = *(float*)(this_ + 15280);
    *(_BYTE*)(this_ + 15552) = 0;
    v975 = 0x0.0p+0f;
    v974 = 0;
    v973 = 0;
    v972 = 0;
    v971 = 0;
    v1012 = v2;
    v8 = *(_QWORD*)(this_ + 15536);
    v1013 = v4;
    v9 = *(_QWORD*)(this_ + 15544);
    v802 = v3;
    v10 = *(float*)(this_ + 15412);
    v1014 = v8;
    v11 = *(_QWORD*)(this_ + 15488);
    v1015 = v9;
    v12 = *(_QWORD*)(this_ + 15496);
    v800 = v10;
    v13 = *(float*)(this_ + 15416);
    v1011[6] = v11;
    v14 = *(_QWORD*)(this_ + 15504);
    v1011[7] = v12;
    v15 = *(_QWORD*)(this_ + 15512);
    v792 = v13;
    v16 = *(float*)(this_ + 15276);
    v1011[8] = v14;
    v17 = *(_QWORD*)(this_ + 15456);
    v1011[9] = v15;
    v1011[2] = v17;
    v804 = v16;
    v18 = *(float*)(this_ + 15288);
    v1011[3] = *(_QWORD*)(this_ + 15464);
    v728 = v18;
    v731 = v6;
    v1011[4] = *(_QWORD*)(this_ + 15472);
    v1011[5] = *(_QWORD*)(this_ + 15480);
    v1011[0] = *(_QWORD*)(this_ + 15440);
    v1011[1] = *(_QWORD*)(this_ + 15448);
    v1009[1] = *(_QWORD*)(this_ + 8464);
    v1009[2] = *(_QWORD*)(this_ + 8472);
    v1009[3] = *(_QWORD*)(this_ + 8480);
    v1010 = *(_DWORD*)(this_ + 8488);
    v1009[0] = *(_QWORD*)(this_ + 8456);
    if ((SdkRoutine_879cb0_alt1((__int64)v1009, 3u, (__int64)&v971, 3u, 3u) &
         1) == 0) {
      v1010 = 0;
      memset(v1009, 0, sizeof(v1009));
    }
    v19 = *(float*)(v5 + 15304);
    v20 = v971;
    v21 = *(float*)&v972;
    v22 = *(float*)&v973;
    v23 = *(float*)(v5 + 15292);
    v24 = *(float*)(v5 + 15296);
    v25 = *(float*)(v5 + 15300);
    v734 = v7;
    v796 = *((float*)&v972 + 1);
    v788 = *((float*)&v973 + 1);
    v26 = v974;
    v781 = v975;
    if (v19 < 0x0.0p+0f) {
      v23 = -v23;
      v24 = -v24;
      v25 = -v25;
      v19 = -v19;
    }
    v27 = sqrtf((float)((float)(PSEUDO_UNFUSED(v25 * v25)) +
                        (float)((float)(PSEUDO_UNFUSED(v24 * v24)) +
                                (float)(PSEUDO_UNFUSED(v23 * v23)))) +
                0x1.0000000000000p-126f);
    v28 = atan2f_plt(v27, v19);
    v29 = v28 + v28;
    v30 = v29 * (float)(v23 / v27);
    v31 = v29 * (float)(v24 / v27);
    v32 = v29 * (float)(v25 / v27);
    v33 = 0x0.0p+0f;
    v34 = *(float*)(v5 + 15276);
    v35 =
        (float)((float)((float)(v796 * v30) + 0x0.0p+0f) + (float)(v22 * v31)) +
        (float)(v788 * v32);
    v36 = (float)((float)((float)(*(float*)&v26 * v30) + 0x0.0p+0f) +
                  (float)(*((float*)&v26 + 1) * v31)) +
          (float)(v781 * v32);
    v37 = (float)((float)((float)((float)(*(float*)&v20 * v30) + 0x0.0p+0f) +
                          (float)(*((float*)&v20 + 1) * v31)) +
                  (float)(v21 * v32)) /
          v34;
    v38 = v35 / v34;
    v39 = *(float*)(v5 + 15388);
    if (v39 > 0x0.0p+0f) {
      v33 = *(float*)(v5 + 15384) / v39;
    }
    v40 = *(float*)(v5 + 15308);
    v41 = v39 <= 0x0.0p+0f;
    v42 = *(float*)(v5 + 15356);
    v43 = *(float*)(v5 + 15376);
    *(_DWORD*)(v5 + 15300) = 0;
    *(_QWORD*)(v5 + 15284) = 0;
    *(_QWORD*)(v5 + 15292) = 0;
    *(_QWORD*)(v5 + 15276) = 0;
    *(_QWORD*)(v5 + 15384) = 0;
    *(_DWORD*)(v5 + 15304) = 1065353216;
    v784 = v40;
    v782 = *(float*)(v5 + 15312);
    v778 = *(float*)(v5 + 15316);
    v44 = *(float*)(v5 + 15320);
    *(_QWORD*)(v5 + 15308) = 0;
    *(_QWORD*)(v5 + 15316) = 0;
    v775 = v44;
    v773 = *(float*)(v5 + 15324);
    v771 = *(float*)(v5 + 15328);
    v769 = *(float*)(v5 + 15332);
    v45 = *(float*)(v5 + 15336);
    *(_QWORD*)(v5 + 15324) = 0;
    *(_QWORD*)(v5 + 15332) = 0;
    v768 = v45;
    v766 = *(float*)(v5 + 15340);
    v46 = v802 + v37;
    v47 = v800 + v38;
    v761 = v42;
    v763 = *(float*)(v5 + 15344);
    v48 = *(float*)(v5 + 15360);
    v49 = v792 + (float)(v36 / v34);
    v50 = *(float*)(v5 + 15348);
    v51 = *(float*)(v5 + 15352);
    *(_QWORD*)(v5 + 15340) = 0;
    *(_QWORD*)(v5 + 15348) = 0;
    v764 = v48;
    v757 = v51;
    v759 = v50;
    v786 = *(float*)(v5 + 15364);
    v52 = *(float*)(v5 + 15368);
    *(_QWORD*)(v5 + 15356) = 0;
    *(_QWORD*)(v5 + 15364) = 0;
    v789 = v52;
    v53 = *(float*)(v5 + 15372);
    *(_QWORD*)(v5 + 15372) = 0;
    *(_BYTE*)(v5 + 15380) = 0;
    v793 = v53;
    if (!v41) {
      v54 = *(_BYTE*)(v1 + 3108);
      *(float*)(v5 + 15400) = v33;
      *(_BYTE*)(v1 + 3116) = 1;
      if ((v54 & 1) == 0) {
        *(float*)(v5 + 15392) = v33;
        *(_BYTE*)(v1 + 3108) = 1;
      }
    }
    nerd_gyro_pointing_GyroPointingCore_UpdateFusedGyroBiasEstimate_plt_alt1(
        v5, (__int64)v1011);
    nerd_gyro_pointing_GyroPointingCore_UpdateStableOrientation_plt_alt1(
        v5, v46, v47, v49, v804);
    memset_plt_alt2((__int64)&v971, 0, 0x1000u);
    v55 = *(__int64**)(v5 + 8200);
    v967 = 0;
    v945 = 0;
    v944 = 0;
    v943 = 0;
    v942 = 0;
    v969 = 6;
    v970 = 9;
    v947 = 6;
    v948 = 9;
    v941 = 0;
    v940 = 0;
    v939 = 0;
    v938 = 0;
    v936 = 0;
    v937 = 0;
    v1008 = 0;
    v949 = v55;
    v950 = *(_QWORD*)(v5 + 8208);
    v951 = *(_QWORD*)(v5 + 8216);
    v952 = *(__int64**)(v5 + 8240);
    v953 = *(_QWORD*)(v5 + 8248);
    v954 = *(_QWORD*)(v5 + 8256);
    v955 = *(__int64**)(v5 + 8280);
    v956 = *(_QWORD*)(v5 + 8288);
    v957 = *(_QWORD*)(v5 + 8296);
    v958 = *(_QWORD*)(v5 + 8344);
    v959 = *(_QWORD*)(v5 + 8352);
    v960 = *(_QWORD*)(v5 + 8360);
    v961 = *(_QWORD*)(v5 + 8368);
    v962 = *(_QWORD*)(v5 + 8376);
    v963 = *(_QWORD*)(v5 + 8384);
    v964 = *(_QWORD*)(v5 + 8392);
    v965 = *(_QWORD*)(v5 + 8400);
    v966 = *(_QWORD*)(v5 + 8408);
    v968 = 3;
    v946 = 3;
    memset_plt_alt2((__int64)&v904, 0, 0x1F8u);
    SdkRoutine_879f80_alt1();
    v56 = &v971 + 2 * v1008;
    *((_WORD*)v56 + 2) = 0;
    v56[1] = 0;
    v57 = v1008++;
    v58 = &v971 + 2 * v1008;
    *((_WORD*)v58 + 2) = 0;
    v58[1] = 0;
    v59 = v1008++;
    v60 = &v971 + 2 * v1008;
    *((_WORD*)v60 + 2) = 0;
    v60[1] = 0;
    v61 = v1008++;
    memcpy_plt_alt1((__int64)&v904, (__int64)v1016, 0x1B0u);
    v927 = &v971;
    v928 = v57;
    v62 = &v905[24 * v945 - 8];
    v929 = 0;
    v930 = &v971;
    v931 = v59;
    v932 = 0;
    v933 = &v971;
    v934 = v61;
    v935 = 0;
    v63 = *(_QWORD*)v62;
    v65 = *((_QWORD*)v62 + 3);
    v64 = *((_QWORD*)v62 + 4);
    v67 = *((_QWORD*)v62 + 6);
    v66 = *((_QWORD*)v62 + 7);
    v749 = *((float*)v62 + 10);
    v752 = *((float*)v62 + 4);
    v743 = *(float*)(v5 + 8184);
    v746 = *((float*)v62 + 16);
    if (*(_QWORD*)v62 != 0) {
      v68 = v63 + 16LL * *(_QWORD*)(v63 + 4096);
      *(_WORD*)(v68 + 4) = (unsigned __int8)*((_QWORD*)v62 + 1);
      *(_QWORD*)(v68 + 8) = 1065353216;
      v720 = *(_QWORD*)(v63 + 4096);
      *(_QWORD*)(v63 + 4096) = v720 + 1;
      v741 = *(float*)(v5 + 8188);
      if (v65 != 0) {
      LABEL_13:
        v69 = v65 + 16LL * *(_QWORD*)(v65 + 4096);
        *(_BYTE*)(v69 + 4) = v64;
        *(_BYTE*)(v69 + 5) = 0;
        *(_QWORD*)(v69 + 8) = 1065353216;
        v70 = *(_QWORD*)(v65 + 4096);
        *(_QWORD*)(v65 + 4096) = v70 + 1;
        goto LABEL_16;
      }
    }
    else {
      LOBYTE(v720) = -1;
      v741 = *(float*)(v5 + 8188);
      if (v65 != 0) {
        goto LABEL_13;
      }
    }
    LOBYTE(v70) = -1;
  LABEL_16:
    v797 = v47;
    v755 = v67;
    v739 = v65;
    v722 = v70;
    v737 = *(float*)(v5 + 0x2000);
    if (v67 != 0) {
      v71 = v67 + 16LL * *(_QWORD*)(v67 + 4096);
      *(_BYTE*)(v71 + 4) = v66;
      *(_BYTE*)(v71 + 5) = 0;
      *(_QWORD*)(v71 + 8) = 1065353216;
      v724 = *(_QWORD*)(v67 + 4096);
      *(_QWORD*)(v67 + 4096) = v724 + 1;
    }
    else {
      LOBYTE(v724) = -1;
    }
    v903 = 0;
    v902 = 0;
    v72 = &v905[24 * v946 - 8];
    v901 = 0;
    v900 = 0;
    v899 = 0;
    v898 = 0;
    v897 = 0;
    v896 = 0;
    v895 = 0;
    v894 = 0;
    v73 = *(_QWORD*)v72;
    v74 = *((_QWORD*)v72 + 1);
    v75 = *((unsigned int*)v72 + 4);
    v76 = *((_QWORD*)v72 + 3);
    v77 = *((_QWORD*)v72 + 4);
    v78 = *((unsigned int*)v72 + 10);
    v79 = *((_QWORD*)v72 + 6);
    v80 = *((_QWORD*)v72 + 7);
    v81 = *((unsigned int*)v72 + 16);
    v893 = 0;
    v892 = 0;
    v873 = v81;
    v867[0] = v73;
    v867[1] = v74;
    v868 = v75;
    *(_QWORD*)&v869 = v76;
    *((_QWORD*)&v869 + 1) = v77;
    v870 = v78;
    v871 = v79;
    v872 = v80;
    kalman_transition_70e160((void*)((float*)v1016), (float*)v867);
    nerd_gyro_pointing_720480((void*)((float*)&v892), v1016,
                              (float*)(v5 + 8224));
    v82 = *(float*)(v5 + 8264);
    v803 = v46;
    v83 = (float*)&v905[24 * v947 - 8];
    v84 = v83[4];
    v85 = v83[10];
    v86 = v83[16];
    v87 = *(_QWORD*)v83;
    v89 = *((__int64**)v83 + 3);
    v88 = *((_QWORD*)v83 + 4);
    v91 = *((__int64**)v83 + 6);
    v90 = *((_QWORD*)v83 + 7);
    if (*(_QWORD*)v83 != 0) {
      v92 = v87 + 16LL * *(_QWORD*)(v87 + 4096);
      *(_WORD*)(v92 + 4) = (unsigned __int8)*((_QWORD*)v83 + 1);
      v93 = *(_QWORD*)(v87 + 4096);
      *(_QWORD*)(v92 + 8) = 1065353216;
      *(_QWORD*)(v87 + 4096) = v93 + 1;
      v94 = *(float*)(v5 + 8268);
      v801 = v49;
      if (v89 != nullptr) {
        goto LABEL_21;
      }
    }
    else {
      LOBYTE(v93) = -1;
      v94 = *(float*)(v5 + 8268);
      v801 = v49;
      if (v89 != nullptr) {
      LABEL_21:
        v95 = &v89[2 * v89[512]];
        *((_BYTE*)v95 + 4) = v88;
        *((_BYTE*)v95 + 5) = 0;
        v96 = v89[512];
        v95[1] = 1065353216;
        v89[512] = v96 + 1;
        v97 = *(float*)(v5 + 8272);
        if (v91 != nullptr) {
        LABEL_22:
          v98 = &v91[2 * v91[512]];
          *((_BYTE*)v98 + 4) = v90;
          *((_BYTE*)v98 + 5) = 0;
          v98[1] = 1065353216;
          v725 = v91[512];
          v91[512] = v725 + 1;
          goto LABEL_26;
        }
      LABEL_25:
        LOBYTE(v725) = -1;
      LABEL_26:
        v891 = 0;
        v890 = 0;
        v889 = 0;
        v888 = 0;
        v887 = 0;
        v886 = 0;
        v885 = 0;
        v884 = 0;
        v883 = 0;
        v882 = 0;
        v880 = 0;
        v881 = 0;
        v878 = 0;
        v879 = 0;
        v876 = 0;
        v877 = 0;
        v874 = 0;
        v875 = 0;
        v872 = 0;
        v873 = 0;
        v870 = 0;
        v871 = 0;
        v869 = (__typeof__(v869)){0};
        v867[1] = 0;
        v868 = 0;
        v867[0] = 0;
        nerd_gyro_pointing_70ace0((void*)(&v840), (__int64)&v904, &v948);
        v1016[0] = v840;
        v1016[1] = v841;
        v1025 = v855;
        v1026 = v856;
        v1031 = v861;
        v1032 = v862;
        v1017[1] = v843;
        v1017[2] = v844;
        v1017[0] = (unsigned int)v842;
        v1017[3] = (unsigned int)v845;
        v1024 = v854;
        v1027 = v857;
        v1017[4] = v846;
        v1017[5] = v847;
        v1034 = v864;
        v1035 = v865;
        v1036 = v866;
        v1018 = (unsigned int)v848;
        v1021 = v851;
        v1028 = v858;
        v1029 = v859;
        v1019 = v849;
        v1020 = v850;
        v1030 = v860;
        v1033 = v863;
        v1022 = v852;
        v1023 = v853;
        SdkRoutine_879f90_alt1();
        v99 = *(float*)&v929;
        v100 = v927;
        if (v927 != nullptr) {
          v101 = &v927[2 * v927[512]];
          *((_WORD*)v101 + 2) = (unsigned __int8)v928;
          v102 = v100[512];
          v101[1] = 1065353216;
          v100[512] = v102 + 1;
          v103 = *(float*)&v932;
          v104 = v930;
          if (v930 != nullptr) {
            goto LABEL_28;
          }
        }
        else {
          LOBYTE(v102) = -1;
          v103 = *(float*)&v932;
          v104 = v930;
          if (v930 != nullptr) {
          LABEL_28:
            v105 = &v104[2 * v104[512]];
            *((_WORD*)v105 + 2) = (unsigned __int8)v931;
            v106 = v104[512];
            v105[1] = 1065353216;
            v104[512] = v106 + 1;
            v107 = *(float*)&v935;
            v108 = v933;
            if (v933 != nullptr) {
            LABEL_29:
              v109 = &v108[2 * v108[512]];
              *((_WORD*)v109 + 2) = (unsigned __int8)v934;
              v109[1] = 1065353216;
              v110 = v108[512];
              v108[512] = v110 + 1;
              goto LABEL_33;
            }
          LABEL_32:
            LOBYTE(v110) = -1;
          LABEL_33:
            v111 = v734 / v804;
            v112 = v731 / v804;
            v113 = v728 / v804;
            if (v100 != nullptr) {
              v114 = -0x1.0000000000000p+0f;
              v115 = v87 == 0;
              v87 = (__int64)v100;
              if (v115) {
                v116 = 0;
              }
              else {
                v116 = v93;
              }
              LOBYTE(v93) = v102;
              if (v115) {
                v114 = 0x0.0p+0f;
              }
              v117 = 0x1.0000000000000p+0f;
            }
            else {
              if (v87 == 0) {
                v119 = -1;
                v120 = v111 * 0x1.9000000000000p+6f;
                v121 = v112 * 0x1.9000000000000p+6f;
                v122 = v113 * 0x1.9000000000000p+6f;
                if (v104 != nullptr) {
                  goto LABEL_43;
                }
                goto LABEL_50;
              }
              v116 = 0;
              v114 = 0x0.0p+0f;
              v117 = -0x1.0000000000000p+0f;
            }
            v118 = v87 + 16LL * *(_QWORD*)(v87 + 4096);
            *(_BYTE*)(v118 + 4) = v93;
            *(_BYTE*)(v118 + 5) = v116;
            *(float*)(v118 + 8) = v117;
            *(float*)(v118 + 12) = v114;
            v119 = *(_QWORD*)(v87 + 4096);
            *(_QWORD*)(v87 + 4096) = v119 + 1;
            v120 = v111 * 0x1.9000000000000p+6f;
            v121 = v112 * 0x1.9000000000000p+6f;
            v122 = v113 * 0x1.9000000000000p+6f;
            if (v104 != nullptr) {
            LABEL_43:
              v123 = -0x1.0000000000000p+0f;
              if (v89 != nullptr) {
                v124 = v96;
              }
              else {
                v124 = 0;
              }
              if (v89 == nullptr) {
                v123 = 0x0.0p+0f;
              }
              v125 = 0x1.0000000000000p+0f;
              goto LABEL_52;
            }
          LABEL_50:
            if (v89 == nullptr) {
              v104 = nullptr;
              v127 = -1;
            LABEL_53:
              v128 = v85 + v94;
              v129 = v121 + v103;
              v130 = v120 + v99;
              v131 = v122 + v107;
              if (v108 != nullptr) {
                v132 = v804;
                v133 = -0x1.0000000000000p+0f;
                if (v91 != nullptr) {
                  v134 = v725;
                }
                else {
                  v134 = 0;
                }
                if (v91 == nullptr) {
                  v133 = 0x0.0p+0f;
                }
                v135 = 0x1.0000000000000p+0f;
              }
              else {
                v132 = v804;
                if (v91 == nullptr) {
                  v108 = nullptr;
                  v137 = -1;
                LABEL_63:
                  v843 = v104;
                  v844 = v127;
                  v840 = v87;
                  v841 = v119;
                  DWORDn(v842, sizeof(v842) / 4 - 1) = 0;
                  DWORDn(v845, sizeof(v845) / 4 - 1) = 0;
                  v846 = v108;
                  v847 = v137;
                  DWORDn(v848, sizeof(v848) / 4 - 1) = 0;
                  v833_.v838 = 0;
                  v833_.v839 = 0;
                  v833_.v836 = 0;
                  v833_.v837 = 0;
                  v833_.v834 = 0;
                  v833_.v835 = 0;
                  v831_.v832 = 0;
                  v833_.v833 = 0;
                  v831_.v831 = 0;
                  *(float*)&v842 = v130 - (float)(v84 + v82);
                  *(float*)&v845 = v129 - v128;
                  *(float*)&v848 = v131 - (float)(v86 + v97);
                  SdkRoutine_879fa0_alt1();
                  math_70b0c0((void*)((__int64)v1016), (float*)&v892, 0x0.0p+0f,
                              0x0.0p+0f, 0x1.ea80000000000p+9f);
                  v138 = *(float*)v1017;
                  v139 = v1016[0];
                  if (v1016[0] != 0) {
                    v140 = v1016[0] + 16LL * *(_QWORD*)(v1016[0] + 4096);
                    *(_BYTE*)(v140 + 4) = v1016[1];
                    *(_BYTE*)(v140 + 5) = 0;
                    *(float*)(v140 + 8) = -0x1.0000000000000p+0f;
                    *(_DWORD*)(v140 + 12) = 0;
                    v141 = *(_QWORD*)(v139 + 4096);
                    *(_QWORD*)(v139 + 4096) = v141 + 1;
                    v142 = *(float*)&v833_.v836;
                    v143 = *(float*)&v1017[3];
                    v144 = v833_.v834;
                    v145 = v1017[1];
                    if (v833_.v834 != 0) {
                      v146 = v833_.v835;
                      v147 = 0x1.0000000000000p+0f;
                      if (v1017[1] != 0) {
                        v148 = v1017[2];
                        v149 = -0x1.0000000000000p+0f;
                      }
                      else {
                        v148 = 0;
                        v149 = 0x0.0p+0f;
                      }
                      goto LABEL_73;
                    }
                  }
                  else {
                    LOBYTE(v141) = -1;
                    v142 = *(float*)&v833_.v836;
                    v143 = *(float*)&v1017[3];
                    v145 = v1017[1];
                  }
                  if (v145 == 0) {
                    v144 = 0;
                    LOBYTE(v151) = -1;
                    v152 = *(float*)&v833_.v839;
                    v153 = *(float*)&v1018;
                    v154 = v833_.v837;
                    v155 = v1017[4];
                    if (v833_.v837 != 0) {
                    LABEL_74:
                      v156 = v833_.v838;
                      v157 = 0x1.0000000000000p+0f;
                      if (v155 != 0) {
                        v158 = v1017[5];
                        v159 = -0x1.0000000000000p+0f;
                      }
                      else {
                        v158 = 0;
                        v159 = 0x0.0p+0f;
                      }
                      goto LABEL_80;
                    }
                  LABEL_78:
                    if (v155 == 0) {
                      v154 = 0;
                      LOBYTE(v161) = -1;
                      if (v139 != 0) {
                      LABEL_81:
                        v162 = v139 + 16LL * *(_QWORD*)(v139 + 4096);
                        *(_BYTE*)(v162 + 4) = v141;
                        *(_BYTE*)(v162 + 5) = 0;
                        *(float*)(v162 + 8) = v132;
                        *(_DWORD*)(v162 + 12) = 0;
                        v163 = *(_QWORD*)(v139 + 4096);
                        *(_QWORD*)(v139 + 4096) = v163 + 1;
                        if (v144 != 0) {
                          goto LABEL_82;
                        }
                        goto LABEL_92;
                      }
                    LABEL_91:
                      LOBYTE(v163) = -1;
                      if (v144 != 0) {
                      LABEL_82:
                        v164 = v144 + 16LL * *(_QWORD*)(v144 + 4096);
                        *(_BYTE*)(v164 + 4) = v151;
                        *(_BYTE*)(v164 + 5) = 0;
                        *(float*)(v164 + 8) = v132;
                        *(_DWORD*)(v164 + 12) = 0;
                        v165 = *(_QWORD*)(v144 + 4096);
                        *(_QWORD*)(v144 + 4096) = v165 + 1;
                        if (v154 != 0) {
                          goto LABEL_83;
                        }
                        goto LABEL_93;
                      }
                    LABEL_92:
                      LOBYTE(v165) = -1;
                      if (v154 != 0) {
                      LABEL_83:
                        v166 = v154 + 16LL * *(_QWORD*)(v154 + 4096);
                        *(_BYTE*)(v166 + 4) = v161;
                        *(_BYTE*)(v166 + 5) = 0;
                        *(float*)(v166 + 8) = v132;
                        *(_DWORD*)(v166 + 12) = 0;
                        v167 = *(_QWORD*)(v154 + 4096);
                        *(_QWORD*)(v154 + 4096) = v167 + 1;
                        if (v63 != 0) {
                          goto LABEL_84;
                        }
                        goto LABEL_94;
                      }
                    LABEL_93:
                      LOBYTE(v167) = -1;
                      if (v63 != 0) {
                      LABEL_84:
                        v168 = v139 == 0;
                        v169 = 0x1.0000000000000p+0f;
                        v139 = v63;
                        if (v168) {
                          v170 = 0;
                        }
                        else {
                          v170 = v163;
                        }
                        LOBYTE(v163) = v720;
                        if (v168) {
                          v169 = 0x0.0p+0f;
                        }
                        goto LABEL_96;
                      }
                    LABEL_94:
                      if (v139 == 0) {
                        LOBYTE(v172) = -1;
                        v173 = v739;
                        v174 = v142 - v143;
                        v175 = 0x0.0p+0f - v138;
                        v176 = v152 - v153;
                        if (v739 != 0) {
                        LABEL_97:
                          v177 = v144 == 0;
                          v144 = v173;
                          v178 = v722;
                          v179 = 0x1.0000000000000p+0f;
                          if (v177) {
                            v180 = 0;
                          }
                          else {
                            v180 = v165;
                          }
                          if (v177) {
                            v179 = 0x0.0p+0f;
                          }
                          goto LABEL_106;
                        }
                      LABEL_104:
                        if (v144 == 0) {
                          LOBYTE(v182) = -1;
                        LABEL_107:
                          v183 = v132 * v175;
                          v184 = v749 + v741;
                          v185 = v752 + v743;
                          v186 = v746 + v737;
                          v187 = v132 * v174;
                          v188 = v132 * v176;
                          if (v755 != 0) {
                            v189 = v154 == 0;
                            v154 = v755;
                            v190 = v724;
                            v191 = 0x1.0000000000000p+0f;
                            if (v189) {
                              v192 = 0;
                            }
                            else {
                              v192 = v167;
                            }
                            if (v189) {
                              v191 = 0x0.0p+0f;
                            }
                          }
                          else {
                            if (v154 == 0) {
                              LOBYTE(v194) = -1;
                            LABEL_117:
                              *(float*)(v5 + 8184) = v185 + v183;
                              *(float*)(v5 + 8188) = v184 + v187;
                              *(float*)(v5 + 0x2000) = v186 + v188;
                              if (v139 != 0) {
                                v195 = v139 + 16LL * *(_QWORD*)(v139 + 4096);
                                *(_BYTE*)(v195 + 4) = v172;
                                *(_BYTE*)(v195 + 5) = 0;
                                v196 = *(_QWORD*)(v139 + 4096);
                                *(_QWORD*)(v195 + 8) = 1065353216;
                                *(_QWORD*)(v139 + 4096) = v196 + 1;
                                v197 = *(float*)(v5 + 8188);
                                v198 = (__int64*)(v5 + 8200);
                                if (v144 != 0) {
                                  goto LABEL_119;
                                }
                              }
                              else {
                                v196 = -1;
                                v197 = v184 + v187;
                                v198 = (__int64*)(v5 + 8200);
                                if (v144 != 0) {
                                LABEL_119:
                                  v199 = v144 + 16LL * *(_QWORD*)(v144 + 4096);
                                  *(_BYTE*)(v199 + 4) = v182;
                                  *(_BYTE*)(v199 + 5) = 0;
                                  *(_QWORD*)(v199 + 8) = 1065353216;
                                  v200 = *(_QWORD*)(v144 + 4096);
                                  *(_QWORD*)(v144 + 4096) = v200 + 1;
                                  v201 = *(float*)(v5 + 0x2000);
                                  v202 = v34 * v34;
                                  v203 = &v950;
                                  if (v154 != 0) {
                                  LABEL_120:
                                    v204 =
                                        v154 + 16LL * *(_QWORD*)(v154 + 4096);
                                    *(_BYTE*)(v204 + 4) = v194;
                                    *(_BYTE*)(v204 + 5) = 0;
                                    *(_QWORD*)(v204 + 8) = 1065353216;
                                    v205 = *(_QWORD*)(v154 + 4096);
                                    *(_QWORD*)(v154 + 4096) = v205 + 1;
                                  LABEL_124:
                                    v820_.v820 = v139;
                                    v820_.v821 = v196;
                                    v820_.v823 = v144;
                                    v820_.v824 = v200;
                                    v206 = v43 / v202;
                                    v207 = *v198;
                                    v208 = v198[1];
                                    v820_.v827 = v154;
                                    v820_.v828 = v205;
                                    v209 = 0;
                                    DWORDn(v820_.v822,
                                           sizeof(v820_.v822) / 4 - 1) = 0;
                                    v820_.v826 = 0;
                                    v820_.v830 = 0;
                                    v814_.v818 = 0x0.0p+0f;
                                    v814_.v816 = 0;
                                    v814_.v817 = 0;
                                    v814_.v814 = 0;
                                    v814_.v815 = 0;
                                    v210 = v784 / v202;
                                    v820_.v825 = (float)(v184 + v187) - v197;
                                    *(float*)&v820_.v822 =
                                        (float)(v185 + v183) -
                                        (float)(v185 + v183);
                                    v819[0] = v207;
                                    v211 = v198[2];
                                    v820_.v829 = (float)(v186 + v188) - v201;
                                    v1035 = 0;
                                    v1036 = 0;
                                    v1033 = 0;
                                    v1034 = 0;
                                    v1031 = 0;
                                    v1032 = 0;
                                    v1029 = 0;
                                    v1030 = 0;
                                    v1027 = 0;
                                    v1028 = 0;
                                    v1025 = 0;
                                    v1026 = 0;
                                    v1023 = 0;
                                    v1024 = 0;
                                    v1021 = 0;
                                    v1022 = 0;
                                    v1019 = 0;
                                    v1020 = 0;
                                    v1018 = 0;
                                    v1016[1] = 0;
                                    memset(v1017, 0, sizeof(v1017));
                                    v1016[0] = 0;
                                    v819[1] = v208;
                                    v819[2] = v211;
                                    v212 = v782 / v202;
                                    v213 = v778;
                                    v779 = v763 / v202;
                                    v214 = v213 / v202;
                                    v215 = v775;
                                    v776 = v761 / v202;
                                    v783 = v759 / v202;
                                    v216 = v215 / v202;
                                    v217 = v773;
                                    v774 = v764 / v202;
                                    v218 = v217 / v202;
                                    v219 = v786 / v202;
                                    v220 = v771 / v202;
                                    v221 = v789 / v202;
                                    v785 = v757 / v202;
                                    v222 = v769 / v202;
                                    v223 = v793 / v202;
                                    v224 = v768 / v202;
                                    v225 = v766 / v202;
                                    do {
                                      v252 = v1008;
                                      if (v1008 != 0) {
                                        v253 = 16 * v1008 - 16;
                                        if ((~(_BYTE)v253 & 0x70) != 0) {
                                          v255 = -(
                                              __int64)(((unsigned __int8)((unsigned int)
                                                                              v253 >>
                                                                          4) +
                                                        1) &
                                                       7);
                                          v254 = &v971;
                                          do {
                                            *(_DWORD*)v254 = 0;
                                            v254 += 2;
                                            v256 = __CFADD__(v255++, 1);
                                          } while (!v256);
                                        }
                                        else {
                                          v254 = &v971;
                                        }
                                        if (v253 >= 0x70) {
                                          v257 = &v971 + 2 * v252;
                                          do {
                                            *(_DWORD*)v254 = 0;
                                            *((_DWORD*)v254 + 4) = 0;
                                            *((_DWORD*)v254 + 8) = 0;
                                            *((_DWORD*)v254 + 12) = 0;
                                            *((_DWORD*)v254 + 16) = 0;
                                            *((_DWORD*)v254 + 20) = 0;
                                            *((_DWORD*)v254 + 24) = 0;
                                            *((_DWORD*)v254 + 28) = 0;
                                            v254 += 16;
                                          } while (v254 != v257);
                                        }
                                      }
                                      v258 = &v820_.v820 + 3 * v209;
                                      if (*v258 != 0) {
                                        *(_DWORD*)(*v258 + 16 * v258[1]) =
                                            1065353216;
                                      }
                                      if (v1008 != 0) {
                                        v259 = (float*)(&v971 + 2 * v1008);
                                        v260 = 16 * v1008 - 16;
                                        if ((~(_BYTE)v260 & 0x70) != 0) {
                                          v261 = -(
                                              __int64)(((unsigned __int8)((unsigned int)
                                                                              v260 >>
                                                                          4) +
                                                        1) &
                                                       7);
                                          do {
                                            v262 = *(v259 - 4);
                                            v259 -= 4;
                                            v256 = __CFADD__(v261++, 1);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v259 +
                                                    4)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v259 +
                                                        4)) +
                                                (float)(v259[2] * v262);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v259 +
                                                    5)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v259 +
                                                        5)) +
                                                (float)(v259[3] * v262);
                                          } while (!v256);
                                        }
                                        if (v260 >= 0x70) {
                                          v263 = v259 - 32;
                                          do {
                                            v264 = v263[28];
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    116)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        116)) +
                                                (float)(v263[30] * v264);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    117)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        117)) +
                                                (float)(v263[31] * v264);
                                            v265 = v263[24];
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    100)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        100)) +
                                                (float)(v263[26] * v265);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    101)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        101)) +
                                                (float)(v263[27] * v265);
                                            v266 = v263[20];
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    84)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        84)) +
                                                (float)(v263[22] * v266);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    85)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        85)) +
                                                (float)(v263[23] * v266);
                                            v267 = v263[16];
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    68)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        68)) +
                                                (float)(v263[18] * v267);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    69)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        69)) +
                                                (float)(v263[19] * v267);
                                            v268 = v263[12];
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    52)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        52)) +
                                                (float)(v263[14] * v268);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    53)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        53)) +
                                                (float)(v263[15] * v268);
                                            v269 = v263[8];
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    36)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        36)) +
                                                (float)(v263[10] * v269);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    37)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        37)) +
                                                (float)(v263[11] * v269);
                                            v270 = v263[4];
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    20)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        20)) +
                                                (float)(v263[6] * v270);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    21)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        21)) +
                                                (float)(v263[7] * v270);
                                            v271 = *v263;
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    4)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        4)) +
                                                (float)(v263[2] * *v263);
                                            *((float*)&v971 +
                                              4 * *((unsigned __int8*)v263 +
                                                    5)) =
                                                *((float*)&v971 +
                                                  4 * *((unsigned __int8*)v263 +
                                                        5)) +
                                                (float)(v263[3] * v271);
                                            v115 = v263 == (float*)&v971;
                                            v263 -= 32;
                                          } while (!v115);
                                        }
                                      }
                                      v226 = v930[2 * v931];
                                      v227 = (_DWORD*)&v814_.v814 + 3 * v209;
                                      v228 = v933[2 * v934];
                                      v229 = *(_QWORD*)v905;
                                      v230 = v904;
                                      *(_DWORD*)v227 = v927[2 * v928];
                                      v227[1] = v226;
                                      v231 = *(_DWORD*)(v230 + 16 * v229);
                                      v232 = *(_QWORD*)&v905[24];
                                      v233 = *(_QWORD*)&v905[16];
                                      v227[2] = v228;
                                      v234 = *(_DWORD*)(v233 + 16 * v232);
                                      v235 = *(
                                          _DWORD*)(*(_QWORD*)&v905[40] +
                                                   16LL * *(_QWORD*)&v905[48]);
                                      v236 = *(
                                          _DWORD*)(*(_QWORD*)&v905[64] +
                                                   16LL * *(_QWORD*)&v905[72]);
                                      v237 = *(
                                          _DWORD*)(*(_QWORD*)&v905[88] +
                                                   16LL * *(_QWORD*)&v905[96]);
                                      v238 = *(
                                          _DWORD*)(*(_QWORD*)&v905[112] +
                                                   16LL * *(_QWORD*)&v905[120]);
                                      v239 = *(
                                          _DWORD*)(*(_QWORD*)&v905[136] +
                                                   16LL * *(_QWORD*)&v905[144]);
                                      v240 = *(
                                          _DWORD*)(*(_QWORD*)&v905[160] +
                                                   16LL * *(_QWORD*)&v905[168]);
                                      v241 = v906[2 * v907];
                                      v242 = *(_DWORD*)(v909 + 16 * v910);
                                      v243 = *(_DWORD*)(v911 + 16 * v912);
                                      v244 = *(_DWORD*)(v913 + 16 * v914);
                                      v245 = *(_DWORD*)(v915 + 16 * v916);
                                      v246 = *(_DWORD*)(v917 + 16 * v918);
                                      v247 = *(_DWORD*)(v919 + 16 * v920);
                                      v248 = *(_DWORD*)(v921 + 16 * v922);
                                      v249 = *(_DWORD*)(v923 + 16 * v924);
                                      v250 = *(_DWORD*)(v925 + 16 * v926);
                                      v251 = &v1016[9 * v209++];
                                      *(_DWORD*)v251 = v231;
                                      *((_DWORD*)v251 + 1) = v234;
                                      *((_DWORD*)v251 + 2) = v235;
                                      *((_DWORD*)v251 + 3) = v236;
                                      *((_DWORD*)v251 + 4) = v237;
                                      *((_DWORD*)v251 + 5) = v238;
                                      *((_DWORD*)v251 + 6) = v239;
                                      *((_DWORD*)v251 + 7) = v240;
                                      *((_DWORD*)v251 + 8) = v241;
                                      *((_DWORD*)v251 + 9) = v242;
                                      *((_DWORD*)v251 + 10) = v243;
                                      *((_DWORD*)v251 + 11) = v244;
                                      *((_DWORD*)v251 + 12) = v245;
                                      *((_DWORD*)v251 + 13) = v246;
                                      *((_DWORD*)v251 + 14) = v247;
                                      *((_DWORD*)v251 + 15) = v248;
                                      *((_DWORD*)v251 + 16) = v249;
                                      *((_DWORD*)v251 + 17) = v250;
                                    } while (v209 != 3);
                                    v272 = v214 * 0x1.3880000000000p+13f;
                                    v273 = v218 * 0x1.3880000000000p+13f;
                                    v274 = v222 * 0x1.3880000000000p+13f;
                                    v275 = v220 * 0x1.3880000000000p+13f;
                                    v276 = v224 * 0x1.3880000000000p+13f;
                                    v277 = v225 * 0x1.3880000000000p+13f;
                                    v278 =
                                        (float)((float)((float)(*(float*)&v814_
                                                                     .v814 *
                                                                (float)(v210 *
                                                                        0x1.3880000000000p+13f)) +
                                                        0x0.0p+0f) +
                                                (float)(*((float*)&v814_.v814 +
                                                          1) *
                                                        (float)(v216 *
                                                                0x1.3880000000000p+13f))) +
                                        (float)(*(float*)&v814_.v815 * v274);
                                    v279 =
                                        (float)((float)((float)(*((float*)&v814_
                                                                      .v815 +
                                                                  1) *
                                                                (float)(v210 *
                                                                        0x1.3880000000000p+13f)) +
                                                        0x0.0p+0f) +
                                                (float)(*(float*)&v814_.v816 *
                                                        (float)(v216 *
                                                                0x1.3880000000000p+13f))) +
                                        (float)(*((float*)&v814_.v816 + 1) *
                                                v274);
                                    v280 =
                                        (float)((float)((float)(*(float*)&v814_
                                                                     .v817 *
                                                                (float)(v210 *
                                                                        0x1.3880000000000p+13f)) +
                                                        0x0.0p+0f) +
                                                (float)(*((float*)&v814_.v817 +
                                                          1) *
                                                        (float)(v216 *
                                                                0x1.3880000000000p+13f))) +
                                        (float)(v814_.v818 * v274);
                                    v281 =
                                        (float)((float)(*(float*)&v814_.v814 *
                                                        v272) +
                                                0x0.0p+0f) +
                                        (float)(*((float*)&v814_.v814 + 1) *
                                                v275);
                                    v282 =
                                        (float)((float)(*((float*)&v814_.v815 +
                                                          1) *
                                                        v272) +
                                                0x0.0p+0f) +
                                        (float)(*(float*)&v814_.v816 * v275);
                                    v283 =
                                        (float)((float)(*(float*)&v814_.v817 *
                                                        v272) +
                                                0x0.0p+0f) +
                                        (float)(*((float*)&v814_.v817 + 1) *
                                                v275);
                                    v284 =
                                        (float)((float)((float)(*(float*)&v814_
                                                                     .v814 *
                                                                (float)(v212 *
                                                                        0x1.3880000000000p+13f)) +
                                                        0x0.0p+0f) +
                                                (float)(*((float*)&v814_.v814 +
                                                          1) *
                                                        v273)) +
                                        (float)(*(float*)&v814_.v815 * v276);
                                    v285 =
                                        (float)((float)((float)(*((float*)&v814_
                                                                      .v815 +
                                                                  1) *
                                                                (float)(v212 *
                                                                        0x1.3880000000000p+13f)) +
                                                        0x0.0p+0f) +
                                                (float)(*(float*)&v814_.v816 *
                                                        v273)) +
                                        (float)(*((float*)&v814_.v816 + 1) *
                                                v276);
                                    v286 =
                                        (float)((float)((float)(*(float*)&v814_
                                                                     .v817 *
                                                                (float)(v212 *
                                                                        0x1.3880000000000p+13f)) +
                                                        0x0.0p+0f) +
                                                (float)(*((float*)&v814_.v817 +
                                                          1) *
                                                        v273)) +
                                        (float)(v814_.v818 * v276);
                                    v287 = v281 +
                                           (float)(*(float*)&v814_.v815 * v277);
                                    v288 = v282 +
                                           (float)(*((float*)&v814_.v816 + 1) *
                                                   v277);
                                    v289 = v283 + (float)(v814_.v818 * v277);
                                    v813[0] =
                                        (float)((float)((float)(v278 *
                                                                *(float*)&v814_
                                                                     .v814) +
                                                        0x0.0p+0f) +
                                                (float)(v284 *
                                                        *((float*)&v814_.v814 +
                                                          1))) +
                                        (float)(v287 * *(float*)&v814_.v815);
                                    v813[2] =
                                        (float)((float)((float)(v278 *
                                                                *(float*)&v814_
                                                                     .v817) +
                                                        0x0.0p+0f) +
                                                (float)(v284 *
                                                        *((float*)&v814_.v817 +
                                                          1))) +
                                        (float)(v287 * v814_.v818);
                                    v813[1] =
                                        (float)((float)((float)(v278 *
                                                                *((float*)&v814_
                                                                      .v815 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v284 *
                                                        *(float*)&v814_.v816)) +
                                        (float)(v287 *
                                                *((float*)&v814_.v816 + 1));
                                    v813[3] =
                                        (float)((float)((float)(v279 *
                                                                *(float*)&v814_
                                                                     .v814) +
                                                        0x0.0p+0f) +
                                                (float)(v285 *
                                                        *((float*)&v814_.v814 +
                                                          1))) +
                                        (float)(v288 * *(float*)&v814_.v815);
                                    v813[6] =
                                        (float)((float)((float)(v280 *
                                                                *(float*)&v814_
                                                                     .v814) +
                                                        0x0.0p+0f) +
                                                (float)(v286 *
                                                        *((float*)&v814_.v814 +
                                                          1))) +
                                        (float)(v289 * *(float*)&v814_.v815);
                                    v813[4] =
                                        (float)((float)((float)(v279 *
                                                                *((float*)&v814_
                                                                      .v815 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v285 *
                                                        *(float*)&v814_.v816)) +
                                        (float)(v288 *
                                                *((float*)&v814_.v816 + 1));
                                    v813[5] =
                                        (float)((float)((float)(v279 *
                                                                *(float*)&v814_
                                                                     .v817) +
                                                        0x0.0p+0f) +
                                                (float)(v285 *
                                                        *((float*)&v814_.v817 +
                                                          1))) +
                                        (float)(v288 * v814_.v818);
                                    v813[7] =
                                        (float)((float)((float)(v280 *
                                                                *((float*)&v814_
                                                                      .v815 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v286 *
                                                        *(float*)&v814_.v816)) +
                                        (float)(v289 *
                                                *((float*)&v814_.v816 + 1));
                                    v813[8] =
                                        (float)((float)((float)(v280 *
                                                                *(float*)&v814_
                                                                     .v817) +
                                                        0x0.0p+0f) +
                                                (float)(v286 *
                                                        *((float*)&v814_.v817 +
                                                          1))) +
                                        (float)(v289 * v814_.v818);
                                    SdkRoutine_879fb0_alt1(
                                        v5 + 200, (__int64)v1016,
                                        (__int64)&v949, (__int64)v819,
                                        (__int64)v813);
                                    LODWORD(v1016[1]) = 0;
                                    v1016[0] = 0;
                                    memset(v905, 0, 28);
                                    v904 = 0;
                                    v290 =
                                        nerd_gyro_pointing_GyroPointingKalmanFilter_AddUnbiasedGyrVariable_plt_alt1(
                                            v5 + 200, (__int64)v1016,
                                            (__int64)&v904);
                                    v291 = *(_QWORD*)(v5 + 8440);
                                    v292 = v290;
                                    v293 = *(float*)(v5 + 8416) + 0x0.0p+0f;
                                    v867[0] = *(_QWORD*)(v5 + 8432);
                                    v867[1] = v291;
                                    v294 = *(float*)(v5 + 8420);
                                    v295 = *(float*)(v5 + 8424);
                                    v991 = 1;
                                    v868 = *(_QWORD*)(v5 + 8448);
                                    *(_QWORD*)&v869 = 0;
                                    v1004 = 1802;
                                    WORD2(v971) = 0;
                                    v972 = 0;
                                    WORD2(v973) = 0;
                                    v974 = 0;
                                    v976 = 0;
                                    v994 = 2;
                                    v996 = 3;
                                    v977 = 0;
                                    v979 = 0;
                                    v980 = 0;
                                    v982 = 0;
                                    v983 = 0;
                                    v985 = 0;
                                    v986 = 0;
                                    v988 = 0;
                                    v989 = 1065353216;
                                    v992 = 1065353216;
                                    v995 = 1065353216;
                                    v997 = 1065353216;
                                    v999 = 1065353216;
                                    v1001 = 1065353216;
                                    v1006 = 2059;
                                    v998 = 4;
                                    v1000 = 5;
                                    v1002 = 1545;
                                    v1003 = 0xBF8000003F800000LL;
                                    v1005 = 0xBF8000003F800000LL;
                                    v1007 = 0xBF8000003F800000LL;
                                    v1008 = 15;
                                    *(float*)v290 =
                                        (float)(v803 + 0x0.0p+0f) - v293;
                                    *(float*)(v290 + 4) =
                                        (float)(v797 + 0x0.0p+0f) -
                                        (float)(v294 + 0x0.0p+0f);
                                    *(float*)(v290 + 8) =
                                        (float)(v801 + 0x0.0p+0f) -
                                        (float)(v295 + 0x0.0p+0f);
                                    v296 = &v971 + 2 * v1008;
                                    *((_WORD*)v296 + 2) = 12;
                                    v296[1] = 1065353216;
                                    v297 = v1008++;
                                    v298 = &v971 + 2 * v1008;
                                    *((_WORD*)v298 + 2) = 13;
                                    v298[1] = 1065353216;
                                    v299 = v1008++;
                                    v300 = &v971 + 2 * v1008;
                                    *((_WORD*)v300 + 2) = 14;
                                    v300[1] = 1065353216;
                                    v301 = v1008++;
                                    v302 = *(_QWORD*)(v290 + 24);
                                    v840 = *(_QWORD*)(v290 + 16);
                                    v841 = v302;
                                    v303 = *(_QWORD*)(v290 + 32);
                                    *(_DWORD*)&v905[24] = 0;
                                    *(_QWORD*)&v905[16] = 0;
                                    v842 = v303;
                                    if (v301 != -1) {
                                      if ((~(_BYTE)v301 & 7) != 0) {
                                        v305 = ((_BYTE)v301 + 1) & 7;
                                        v304 = &v971;
                                        do {
                                          *(_DWORD*)v304 = 0;
                                          v304 += 2;
                                          --v305;
                                        } while (v305 != 0);
                                      }
                                      else {
                                        v304 = &v971;
                                      }
                                      if ((v301 & 0xFFFFFFFFFFFFFFFuLL) >= 7) {
                                        do {
                                          *(_DWORD*)v304 = 0;
                                          *((_DWORD*)v304 + 4) = 0;
                                          *((_DWORD*)v304 + 8) = 0;
                                          *((_DWORD*)v304 + 12) = 0;
                                          *((_DWORD*)v304 + 16) = 0;
                                          *((_DWORD*)v304 + 20) = 0;
                                          *((_DWORD*)v304 + 24) = 0;
                                          *((_DWORD*)v304 + 28) = 0;
                                          v304 += 16;
                                        } while (v304 != &v971 + 2 * v301 + 2);
                                      }
                                    }
                                    *((_DWORD*)&v971 + 4 * v297) = 1065353216;
                                    v306 = v1008;
                                    if (v1008 != 0) {
                                      v307 = 16 * v1008;
                                      v308 = 16 * v1008 - 16;
                                      v309 = (float*)(&v971 + 2 * v1008);
                                      if ((~(_BYTE)v308 & 0x30) != 0) {
                                        v310 = -(
                                            __int64)(((unsigned __int8)((unsigned int)
                                                                            v308 >>
                                                                        4) +
                                                      1) &
                                                     3);
                                        do {
                                          v311 = *(v309 - 4);
                                          v309 -= 4;
                                          v256 = __CFADD__(v310++, 1);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v309 + 4)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v309 +
                                                      4)) +
                                              (float)(v309[2] * v311);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v309 + 5)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v309 +
                                                      5)) +
                                              (float)(v309[3] * v311);
                                        } while (!v256);
                                      }
                                      if (v308 >= 0x30) {
                                        v312 = v309 - 16;
                                        do {
                                          v313 = v312[12];
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v312 +
                                                  52)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v312 +
                                                      52)) +
                                              (float)(v312[14] * v313);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v312 +
                                                  53)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v312 +
                                                      53)) +
                                              (float)(v312[15] * v313);
                                          v314 = v312[8];
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v312 +
                                                  36)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v312 +
                                                      36)) +
                                              (float)(v312[10] * v314);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v312 +
                                                  37)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v312 +
                                                      37)) +
                                              (float)(v312[11] * v314);
                                          v315 = v312[4];
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v312 +
                                                  20)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v312 +
                                                      20)) +
                                              (float)(v312[6] * v315);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v312 +
                                                  21)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v312 +
                                                      21)) +
                                              (float)(v312[7] * v315);
                                          v316 = *v312;
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v312 + 4)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v312 +
                                                      4)) +
                                              (float)(v312[2] * *v312);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v312 + 5)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v312 +
                                                      5)) +
                                              (float)(v312[3] * v316);
                                          v115 = v312 == (float*)&v971;
                                          v312 -= 16;
                                        } while (!v115);
                                      }
                                    }
                                    else {
                                      v307 = 0;
                                    }
                                    v317 = v981;
                                    v318 = v984;
                                    v319 = v978;
                                    v904 = __PAIR64__(v973, v971);
                                    *(float*)v905 = v975;
                                    if (v306 != 0) {
                                      v320 = v307 - 16;
                                      if ((~((_BYTE)v307 - 16) & 0x70) != 0) {
                                        v322 = ((unsigned __int8)((unsigned int)
                                                                      v320 >>
                                                                  4) +
                                                1) &
                                               7;
                                        v321 = (char*)&v971;
                                        do {
                                          *(_DWORD*)v321 = 0;
                                          v321 += 16;
                                          --v322;
                                        } while (v322 != 0);
                                      }
                                      else {
                                        v321 = (char*)&v971;
                                      }
                                      if (v320 >= 0x70) {
                                        v323 = (char*)&v971 + v307;
                                        do {
                                          *(_DWORD*)v321 = 0;
                                          *((_DWORD*)v321 + 4) = 0;
                                          *((_DWORD*)v321 + 8) = 0;
                                          *((_DWORD*)v321 + 12) = 0;
                                          *((_DWORD*)v321 + 16) = 0;
                                          *((_DWORD*)v321 + 20) = 0;
                                          *((_DWORD*)v321 + 24) = 0;
                                          *((_DWORD*)v321 + 28) = 0;
                                          v321 += 128;
                                        } while (v321 != v323);
                                      }
                                    }
                                    *((_DWORD*)&v971 + 4 * v299) = 1065353216;
                                    v324 = v1008;
                                    if (v1008 != 0) {
                                      v325 = 16 * v1008;
                                      v326 = 16 * v1008 - 16;
                                      v327 = (float*)(&v971 + 2 * v1008);
                                      if ((~(_BYTE)v326 & 0x30) != 0) {
                                        v328 = -(
                                            __int64)(((unsigned __int8)((unsigned int)
                                                                            v326 >>
                                                                        4) +
                                                      1) &
                                                     3);
                                        do {
                                          v329 = *(v327 - 4);
                                          v327 -= 4;
                                          v256 = __CFADD__(v328++, 1);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v327 + 4)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v327 +
                                                      4)) +
                                              (float)(v327[2] * v329);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v327 + 5)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v327 +
                                                      5)) +
                                              (float)(v327[3] * v329);
                                        } while (!v256);
                                      }
                                      if (v326 >= 0x30) {
                                        v330 = v327 - 16;
                                        do {
                                          v331 = v330[12];
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v330 +
                                                  52)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v330 +
                                                      52)) +
                                              (float)(v330[14] * v331);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v330 +
                                                  53)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v330 +
                                                      53)) +
                                              (float)(v330[15] * v331);
                                          v332 = v330[8];
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v330 +
                                                  36)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v330 +
                                                      36)) +
                                              (float)(v330[10] * v332);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v330 +
                                                  37)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v330 +
                                                      37)) +
                                              (float)(v330[11] * v332);
                                          v333 = v330[4];
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v330 +
                                                  20)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v330 +
                                                      20)) +
                                              (float)(v330[6] * v333);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v330 +
                                                  21)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v330 +
                                                      21)) +
                                              (float)(v330[7] * v333);
                                          v334 = *v330;
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v330 + 4)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v330 +
                                                      4)) +
                                              (float)(v330[2] * *v330);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v330 + 5)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v330 +
                                                      5)) +
                                              (float)(v330[3] * v334);
                                          v115 = v330 == (float*)&v971;
                                          v330 -= 16;
                                        } while (!v115);
                                      }
                                    }
                                    else {
                                      v325 = 0;
                                    }
                                    v335 = v981;
                                    v336 = v984;
                                    v337 = v978;
                                    *(_DWORD*)&v905[4] = v971;
                                    *(_DWORD*)&v905[8] = v973;
                                    *(float*)&v905[12] = v975;
                                    if (v324 != 0) {
                                      v338 = v325 - 16;
                                      if ((~((_BYTE)v325 - 16) & 0x70) != 0) {
                                        v340 = ((unsigned __int8)((unsigned int)
                                                                      v338 >>
                                                                  4) +
                                                1) &
                                               7;
                                        v339 = (char*)&v971;
                                        do {
                                          *(_DWORD*)v339 = 0;
                                          v339 += 16;
                                          --v340;
                                        } while (v340 != 0);
                                      }
                                      else {
                                        v339 = (char*)&v971;
                                      }
                                      if (v338 >= 0x70) {
                                        v341 = (char*)&v971 + v325;
                                        do {
                                          *(_DWORD*)v339 = 0;
                                          *((_DWORD*)v339 + 4) = 0;
                                          *((_DWORD*)v339 + 8) = 0;
                                          *((_DWORD*)v339 + 12) = 0;
                                          *((_DWORD*)v339 + 16) = 0;
                                          *((_DWORD*)v339 + 20) = 0;
                                          *((_DWORD*)v339 + 24) = 0;
                                          *((_DWORD*)v339 + 28) = 0;
                                          v339 += 128;
                                        } while (v339 != v341);
                                      }
                                    }
                                    *((_DWORD*)&v971 + 4 * v301) = 1065353216;
                                    if (v1008 != 0) {
                                      v342 = 16 * v1008 - 16;
                                      v343 = (float*)(&v971 + 2 * v1008);
                                      if ((~(_BYTE)v342 & 0x30) != 0) {
                                        v344 = -(
                                            __int64)(((unsigned __int8)((unsigned int)
                                                                            v342 >>
                                                                        4) +
                                                      1) &
                                                     3);
                                        do {
                                          v345 = *(v343 - 4);
                                          v343 -= 4;
                                          v256 = __CFADD__(v344++, 1);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v343 + 4)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v343 +
                                                      4)) +
                                              (float)(v343[2] * v345);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v343 + 5)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v343 +
                                                      5)) +
                                              (float)(v343[3] * v345);
                                        } while (!v256);
                                      }
                                      if (v342 >= 0x30) {
                                        v346 = v343 - 16;
                                        do {
                                          v347 = v346[12];
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v346 +
                                                  52)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v346 +
                                                      52)) +
                                              (float)(v346[14] * v347);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v346 +
                                                  53)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v346 +
                                                      53)) +
                                              (float)(v346[15] * v347);
                                          v348 = v346[8];
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v346 +
                                                  36)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v346 +
                                                      36)) +
                                              (float)(v346[10] * v348);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v346 +
                                                  37)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v346 +
                                                      37)) +
                                              (float)(v346[11] * v348);
                                          v349 = v346[4];
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v346 +
                                                  20)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v346 +
                                                      20)) +
                                              (float)(v346[6] * v349);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v346 +
                                                  21)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v346 +
                                                      21)) +
                                              (float)(v346[7] * v349);
                                          v350 = *v346;
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v346 + 4)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v346 +
                                                      4)) +
                                              (float)(v346[2] * *v346);
                                          *((float*)&v971 +
                                            4 * *((unsigned __int8*)v346 + 5)) =
                                              *((float*)&v971 +
                                                4 * *((unsigned __int8*)v346 +
                                                      5)) +
                                              (float)(v346[3] * v350);
                                          v115 = v346 == (float*)&v971;
                                          v346 -= 16;
                                        } while (!v115);
                                      }
                                    }
                                    *(_DWORD*)&v905[16] = v971;
                                    *(_DWORD*)&v905[20] = v973;
                                    *(float*)&v905[24] = v975;
                                    v351 =
                                        (float)((float)((float)(v319 * v779) +
                                                        0x0.0p+0f) +
                                                (float)(v317 * v776)) +
                                        (float)(v318 * v221);
                                    v352 =
                                        (float)((float)((float)(v319 * v783) +
                                                        0x0.0p+0f) +
                                                (float)(v317 * v774)) +
                                        (float)(v318 * v223);
                                    v353 =
                                        (float)((float)((float)(v319 * v785) +
                                                        0x0.0p+0f) +
                                                (float)(v317 * v219)) +
                                        (float)(v318 * v206);
                                    v354 =
                                        (float)((float)((float)(v337 * v779) +
                                                        0x0.0p+0f) +
                                                (float)(v335 * v776)) +
                                        (float)(v336 * v221);
                                    v355 =
                                        (float)((float)((float)(v337 * v785) +
                                                        0x0.0p+0f) +
                                                (float)(v335 * v219)) +
                                        (float)(v336 * v206);
                                    v356 =
                                        (float)((float)((float)(v337 * v783) +
                                                        0x0.0p+0f) +
                                                (float)(v335 * v774)) +
                                        (float)(v336 * v223);
                                    v357 =
                                        (float)((float)((float)(v978 * v779) +
                                                        0x0.0p+0f) +
                                                (float)(v981 * v776)) +
                                        (float)(v984 * v221);
                                    v358 =
                                        (float)((float)((float)(v978 * v783) +
                                                        0x0.0p+0f) +
                                                (float)(v981 * v774)) +
                                        (float)(v984 * v223);
                                    v359 =
                                        (float)((float)((float)(v978 * v785) +
                                                        0x0.0p+0f) +
                                                (float)(v981 * v219)) +
                                        (float)(v984 * v206);
                                    *(float*)v1016 =
                                        (float)((float)((float)(v351 * v319) +
                                                        0x0.0p+0f) +
                                                (float)(v352 * v317)) +
                                        (float)(v353 * v318);
                                    *((float*)v1016 + 1) =
                                        (float)((float)((float)(v351 * v337) +
                                                        0x0.0p+0f) +
                                                (float)(v352 * v335)) +
                                        (float)(v353 * v336);
                                    *(float*)&v1016[1] =
                                        (float)((float)((float)(v351 * v978) +
                                                        0x0.0p+0f) +
                                                (float)(v352 * v981)) +
                                        (float)(v353 * v984);
                                    *(float*)v1017 =
                                        (float)((float)((float)(v354 * v337) +
                                                        0x0.0p+0f) +
                                                (float)(v356 * v335)) +
                                        (float)(v355 * v336);
                                    *((float*)&v1016[1] + 1) =
                                        (float)((float)((float)(v354 * v319) +
                                                        0x0.0p+0f) +
                                                (float)(v356 * v317)) +
                                        (float)(v355 * v318);
                                    *((float*)v1017 + 1) =
                                        (float)((float)((float)(v354 * v978) +
                                                        0x0.0p+0f) +
                                                (float)(v356 * v981)) +
                                        (float)(v355 * v984);
                                    *(float*)&v1017[1] =
                                        (float)((float)((float)(v357 * v319) +
                                                        0x0.0p+0f) +
                                                (float)(v358 * v317)) +
                                        (float)(v359 * v318);
                                    *((float*)&v1017[1] + 1) =
                                        (float)((float)((float)(v357 * v337) +
                                                        0x0.0p+0f) +
                                                (float)(v358 * v335)) +
                                        (float)(v359 * v336);
                                    *(float*)&v1017[2] =
                                        (float)((float)((float)(v357 * v978) +
                                                        0x0.0p+0f) +
                                                (float)(v358 * v981)) +
                                        (float)(v359 * v984);
                                    SdkRoutine_879fd0_alt1(
                                        v5 + 200, (__int64)&v904, (__int64)v867,
                                        (__int64)&v840, (__int64)v1016);
                                    if ((v1012 & 0x100000000LL) != 0) {
                                    LABEL_237:
                                      v1016[0] = 0;
                                      v1016[1] = 0;
                                      memset(v905, 0, 28);
                                      v904 = 0;
                                      v396 =
                                          nerd_gyro_pointing_GyroPointingKalmanFilter_AddRelativeRotationVariable_plt_alt1(
                                              v5 + 200, (__int64)v1016,
                                              (__int64)&v904);
                                      v397 = *(_QWORD*)(v292 + 16);
                                      v398 = *(_QWORD*)(v292 + 24);
                                      v399 = *(_QWORD*)(v292 + 32);
                                      v400 = v396;
                                      v401 = *(__int64**)(v5 + 8496);
                                      v402 = *(_QWORD*)(v5 + 8504);
                                      v403 = *(_QWORD*)(v5 + 8512);
                                      v404 = *(__int64**)(v5 + 8520);
                                      WORD2(v971) = 0;
                                      v972 = 0;
                                      WORD2(v973) = 0;
                                      v974 = 0;
                                      v976 = 0;
                                      v977 = 0;
                                      v979 = 0;
                                      v980 = 0;
                                      v982 = 0;
                                      v983 = 0;
                                      v985 = 0;
                                      v849 = 0;
                                      v850 = 3;
                                      v986 = 0;
                                      v988 = 0;
                                      v989 = 0;
                                      v991 = 0;
                                      v992 = 0;
                                      v994 = 0;
                                      v995 = 0;
                                      v957 = 0;
                                      v956 = 0;
                                      v955 = nullptr;
                                      v954 = 0;
                                      v953 = 0;
                                      v952 = nullptr;
                                      v951 = 0;
                                      v950 = 0;
                                      v949 = nullptr;
                                      v840 = v397;
                                      v841 = v398;
                                      v405 = *(_QWORD*)(v5 + 8536);
                                      v406 = *(_QWORD*)(v5 + 8528);
                                      v842 = v399;
                                      v843 = v401;
                                      v844 = v402;
                                      v845 = v403;
                                      v848 = v405;
                                      v846 = v404;
                                      v847 = v406;
                                      v1008 = 9;
                                      v407 = *(float*)v292 + 0x0.0p+0f;
                                      v996 = 0;
                                      v997 = 1065353216;
                                      v1008 = 10;
                                      v408 = *(float*)(v292 + 4) + 0x0.0p+0f;
                                      v998 = 1;
                                      v999 = 1065353216;
                                      v1008 = 11;
                                      v409 = *(float*)(v292 + 8) + 0x0.0p+0f;
                                      *(_QWORD*)v905 = 3;
                                      *(_QWORD*)&v905[24] = 4;
                                      *(_QWORD*)&v905[72] = 4;
                                      *(_QWORD*)&v905[48] = 5;
                                      *(_QWORD*)&v905[144] = 5;
                                      *(_QWORD*)&v905[96] = 6;
                                      *(_QWORD*)&v905[120] = 7;
                                      *(_QWORD*)&v905[168] = 7;
                                      v1001 = 1065353216;
                                      v907 = 8;
                                      v1008 = 12;
                                      v1000 = 2;
                                      v949 = &v971;
                                      v950 = 9;
                                      v952 = &v971;
                                      v953 = 10;
                                      *(float*)&v951 = v407;
                                      *(float*)&v954 = v408;
                                      v955 = &v971;
                                      v956 = 11;
                                      v1035 = 0;
                                      v1036 = 0;
                                      v1033 = 0;
                                      v1034 = 0;
                                      v1031 = 0;
                                      v1032 = 0;
                                      v1029 = 0;
                                      v1030 = 0;
                                      v1027 = 0;
                                      v1028 = 0;
                                      v1025 = 0;
                                      v1026 = 0;
                                      v1023 = 0;
                                      v1024 = 0;
                                      v1021 = 0;
                                      v1022 = 0;
                                      v1019 = 0;
                                      v1020 = 0;
                                      v1018 = 0;
                                      v1016[1] = 0;
                                      memset(v1017, 0, sizeof(v1017));
                                      v1016[0] = 0;
                                      v908 = 0;
                                      *(_QWORD*)&v905[176] = 0;
                                      *(_QWORD*)&v905[152] = 0;
                                      *(_QWORD*)&v905[128] = 0;
                                      *(_QWORD*)&v905[104] = 0;
                                      *(_QWORD*)&v905[80] = 0;
                                      *(_QWORD*)&v905[56] = 0;
                                      *(_QWORD*)&v905[32] = 0;
                                      *(_QWORD*)&v905[8] = 0;
                                      v904 = (__int64)&v971;
                                      *(_QWORD*)&v905[16] = &v971;
                                      *(_QWORD*)&v905[64] = &v971;
                                      *(_QWORD*)&v905[40] = &v971;
                                      *(_QWORD*)&v905[136] = &v971;
                                      *(_QWORD*)&v905[88] = &v971;
                                      *(_QWORD*)&v905[112] = &v971;
                                      *(_QWORD*)&v905[160] = &v971;
                                      v906 = &v971;
                                      *(float*)&v957 = v409;
                                      SdkRoutine_879f90_alt1();
                                      v900 = 0;
                                      v899 = 0;
                                      v898 = 0;
                                      v897 = 0;
                                      v896 = 0;
                                      v895 = 0;
                                      v894 = 0;
                                      v893 = 0;
                                      v892 = 0;
                                      SdkRoutine_879fa0_alt1();
                                      v410 = *(float*)&v894;
                                      v411 = v892;
                                      v875 = 0;
                                      v876 = 0;
                                      v873 = 0;
                                      v874 = 0;
                                      v871 = 0;
                                      v872 = 0;
                                      v870 = 0;
                                      v868 = 0;
                                      v869 = (__typeof__(v869)){0};
                                      v867[0] = 0;
                                      v867[1] = 0;
                                      if (v892 != 0) {
                                        v412 = v892 +
                                               16LL * *(_QWORD*)(v892 + 4096);
                                        *(_WORD*)(v412 + 4) =
                                            (unsigned __int8)v893;
                                        *(float*)(v412 + 8) = v804;
                                        *(_DWORD*)(v412 + 12) = 0;
                                        v413 = *(_QWORD*)(v411 + 4096);
                                        *(_QWORD*)(v411 + 4096) = v413 + 1;
                                        v414 = *(float*)&v897;
                                        v415 = v895;
                                        if (v895 != 0) {
                                          goto LABEL_239;
                                        }
                                      }
                                      else {
                                        v413 = -1;
                                        v414 = *(float*)&v897;
                                        v415 = v895;
                                        if (v895 != 0) {
                                        LABEL_239:
                                          v416 = v415 +
                                                 16LL * *(_QWORD*)(v415 + 4096);
                                          *(_WORD*)(v416 + 4) =
                                              (unsigned __int8)v896;
                                          *(float*)(v416 + 8) = v804;
                                          *(_DWORD*)(v416 + 12) = 0;
                                          v417 = *(_QWORD*)(v415 + 4096);
                                          *(_QWORD*)(v415 + 4096) = v417 + 1;
                                          v418 = *(float*)&v900;
                                          v419 = v898;
                                          if (v898 != 0) {
                                          LABEL_240:
                                            v420 =
                                                v419 +
                                                16LL * *(_QWORD*)(v419 + 4096);
                                            *(_WORD*)(v420 + 4) =
                                                (unsigned __int8)v899;
                                            *(float*)(v420 + 8) = v804;
                                            *(_DWORD*)(v420 + 12) = 0;
                                            v421 = *(_QWORD*)(v419 + 4096);
                                            *(_QWORD*)(v419 + 4096) = v421 + 1;
                                          LABEL_244:
                                            v904 = v411;
                                            *(_QWORD*)v905 = v413;
                                            *(_DWORD*)&v905[12] = 0;
                                            *(_QWORD*)&v905[16] = v415;
                                            *(_QWORD*)&v905[24] = v417;
                                            *(_DWORD*)&v905[36] = 0;
                                            *(_QWORD*)&v905[40] = v419;
                                            *(_QWORD*)&v905[48] = v421;
                                            *(_DWORD*)&v905[60] = 0;
                                            *(float*)&v905[8] = v804 * v410;
                                            *(float*)&v905[32] = v804 * v414;
                                            *(float*)&v905[56] = v804 * v418;
                                            kalman_transition_70e160(
                                                (void*)((float*)v867),
                                                (float*)&v904);
                                            v422 = v870;
                                            v423 = v873;
                                            v424 = v876;
                                            *(_DWORD*)v400 = v868;
                                            *(_DWORD*)(v400 + 4) = v422;
                                            *(_DWORD*)(v400 + 8) = v423;
                                            *(_DWORD*)(v400 + 12) = v424;
                                            v944 = 0;
                                            v943 = 0;
                                            v942 = 0;
                                            v941 = 0;
                                            v940 = 0;
                                            v939 = 0;
                                            v938 = 0;
                                            v936 = 0;
                                            v937 = 0;
                                            v425 = *(float*)(v400 + 8);
                                            *(float*)&v426 = -*(float*)v400;
                                            *(float*)&v427 =
                                                -*(float*)(v400 + 4);
                                            DWORDn(v831_.v832,
                                                   sizeof(v831_.v832) / 4 - 1) =
                                                *(_DWORD*)(v400 + 12);
                                            v831_.v831 = __PAIR64__(v427, v426);
                                            *(float*)&v831_.v832 = -v425;
                                            nerd_gyro_pointing_720480(
                                                (void*)((float*)&v904), v867,
                                                (float*)&v831_.v831);
                                            SdkRoutine_722d40(
                                                (void*)((__int64)&v936),
                                                (float*)&v904);
                                            v428 = *(_QWORD*)(v400 + 24);
                                            v820_.v820 = *(_QWORD*)(v400 + 16);
                                            v820_.v821 = v428;
                                            v429 = *(_QWORD*)(v400 + 32);
                                            memset(&v905[28], 0, 72);
                                            v820_.v822 = v429;
                                            v430 = v1008;
                                            if (v1008 != 0) {
                                              v431 = 16 * v1008 - 16;
                                              if ((~(_BYTE)v431 & 0x70) != 0) {
                                                v433 = -(
                                                    __int64)(((unsigned __int8)((unsigned int)
                                                                                    v431 >>
                                                                                4) +
                                                              1) &
                                                             7);
                                                v432 = &v971;
                                                do {
                                                  *(_DWORD*)v432 = 0;
                                                  v432 += 2;
                                                  v256 = __CFADD__(v433++, 1);
                                                } while (!v256);
                                              }
                                              else {
                                                v432 = &v971;
                                              }
                                              if (v431 >= 0x70) {
                                                v434 = &v971 + 2 * v430;
                                                do {
                                                  *(_DWORD*)v432 = 0;
                                                  *((_DWORD*)v432 + 4) = 0;
                                                  *((_DWORD*)v432 + 8) = 0;
                                                  *((_DWORD*)v432 + 12) = 0;
                                                  *((_DWORD*)v432 + 16) = 0;
                                                  *((_DWORD*)v432 + 20) = 0;
                                                  *((_DWORD*)v432 + 24) = 0;
                                                  *((_DWORD*)v432 + 28) = 0;
                                                  v432 += 16;
                                                } while (v432 != v434);
                                              }
                                            }
                                            if (v936 != 0) {
                                              *(_DWORD*)(v936 + 16 * v937) =
                                                  1065353216;
                                            }
                                            v435 = v1008;
                                            if (v1008 != 0) {
                                              v436 = 16 * v1008;
                                              v437 = 16 * v1008 - 16;
                                              v438 =
                                                  (float*)(&v971 + 2 * v1008);
                                              if ((~(_BYTE)v437 & 0x30) != 0) {
                                                v439 = -(
                                                    __int64)(((unsigned __int8)((unsigned int)
                                                                                    v437 >>
                                                                                4) +
                                                              1) &
                                                             3);
                                                do {
                                                  v440 = *(v438 - 4);
                                                  v438 -= 4;
                                                  v256 = __CFADD__(v439++, 1);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v438 +
                                                          4)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v438 +
                                                              4)) +
                                                      (float)(v438[2] * v440);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v438 +
                                                          5)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v438 +
                                                              5)) +
                                                      (float)(v438[3] * v440);
                                                } while (!v256);
                                              }
                                              if (v437 >= 0x30) {
                                                v441 = v438 - 16;
                                                do {
                                                  v442 = v441[12];
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v441 +
                                                          52)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v441 +
                                                              52)) +
                                                      (float)(v441[14] * v442);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v441 +
                                                          53)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v441 +
                                                              53)) +
                                                      (float)(v441[15] * v442);
                                                  v443 = v441[8];
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v441 +
                                                          36)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v441 +
                                                              36)) +
                                                      (float)(v441[10] * v443);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v441 +
                                                          37)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v441 +
                                                              37)) +
                                                      (float)(v441[11] * v443);
                                                  v444 = v441[4];
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v441 +
                                                          20)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v441 +
                                                              20)) +
                                                      (float)(v441[6] * v444);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v441 +
                                                          21)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v441 +
                                                              21)) +
                                                      (float)(v441[7] * v444);
                                                  v445 = *v441;
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v441 +
                                                          4)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v441 +
                                                              4)) +
                                                      (float)(v441[2] * *v441);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v441 +
                                                          5)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v441 +
                                                              5)) +
                                                      (float)(v441[3] * v445);
                                                  v115 = v441 == (float*)&v971;
                                                  v441 -= 16;
                                                } while (!v115);
                                              }
                                            }
                                            else {
                                              v436 = 0;
                                            }
                                            v904 = __PAIR64__(v973, v971);
                                            *(float*)v905 = v975;
                                            *(float*)&v905[4] = v978;
                                            *(float*)&v905[8] = v981;
                                            *(float*)&v905[12] = v984;
                                            *(_DWORD*)&v905[16] = v987;
                                            *(_DWORD*)&v905[20] = v990;
                                            *(_DWORD*)&v905[24] = v993;
                                            if (v435 != 0) {
                                              v446 = v436 - 16;
                                              if ((~((_BYTE)v436 - 16) &
                                                   0x70) != 0) {
                                                v448 =
                                                    ((unsigned __int8)((unsigned int)
                                                                           v446 >>
                                                                       4) +
                                                     1) &
                                                    7;
                                                v447 = (char*)&v971;
                                                do {
                                                  *(_DWORD*)v447 = 0;
                                                  v447 += 16;
                                                  --v448;
                                                } while (v448 != 0);
                                              }
                                              else {
                                                v447 = (char*)&v971;
                                              }
                                              if (v446 >= 0x70) {
                                                v449 = (char*)&v971 + v436;
                                                do {
                                                  *(_DWORD*)v447 = 0;
                                                  *((_DWORD*)v447 + 4) = 0;
                                                  *((_DWORD*)v447 + 8) = 0;
                                                  *((_DWORD*)v447 + 12) = 0;
                                                  *((_DWORD*)v447 + 16) = 0;
                                                  *((_DWORD*)v447 + 20) = 0;
                                                  *((_DWORD*)v447 + 24) = 0;
                                                  *((_DWORD*)v447 + 28) = 0;
                                                  v447 += 128;
                                                } while (v447 != v449);
                                              }
                                            }
                                            if (v939 != 0) {
                                              *(_DWORD*)(v939 + 16 * v940) =
                                                  1065353216;
                                            }
                                            v450 = v1008;
                                            if (v1008 != 0) {
                                              v451 = 16 * v1008;
                                              v452 = 16 * v1008 - 16;
                                              v453 =
                                                  (float*)(&v971 + 2 * v1008);
                                              if ((~(_BYTE)v452 & 0x30) != 0) {
                                                v454 = -(
                                                    __int64)(((unsigned __int8)((unsigned int)
                                                                                    v452 >>
                                                                                4) +
                                                              1) &
                                                             3);
                                                do {
                                                  v455 = *(v453 - 4);
                                                  v453 -= 4;
                                                  v256 = __CFADD__(v454++, 1);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v453 +
                                                          4)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v453 +
                                                              4)) +
                                                      (float)(v453[2] * v455);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v453 +
                                                          5)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v453 +
                                                              5)) +
                                                      (float)(v453[3] * v455);
                                                } while (!v256);
                                              }
                                              if (v452 >= 0x30) {
                                                v456 = v453 - 16;
                                                do {
                                                  v457 = v456[12];
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v456 +
                                                          52)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v456 +
                                                              52)) +
                                                      (float)(v456[14] * v457);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v456 +
                                                          53)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v456 +
                                                              53)) +
                                                      (float)(v456[15] * v457);
                                                  v458 = v456[8];
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v456 +
                                                          36)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v456 +
                                                              36)) +
                                                      (float)(v456[10] * v458);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v456 +
                                                          37)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v456 +
                                                              37)) +
                                                      (float)(v456[11] * v458);
                                                  v459 = v456[4];
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v456 +
                                                          20)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v456 +
                                                              20)) +
                                                      (float)(v456[6] * v459);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v456 +
                                                          21)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v456 +
                                                              21)) +
                                                      (float)(v456[7] * v459);
                                                  v460 = *v456;
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v456 +
                                                          4)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v456 +
                                                              4)) +
                                                      (float)(v456[2] * *v456);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v456 +
                                                          5)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v456 +
                                                              5)) +
                                                      (float)(v456[3] * v460);
                                                  v115 = v456 == (float*)&v971;
                                                  v456 -= 16;
                                                } while (!v115);
                                              }
                                            }
                                            else {
                                              v451 = 0;
                                            }
                                            *(_DWORD*)&v905[28] = v971;
                                            *(_DWORD*)&v905[32] = v973;
                                            *(float*)&v905[36] = v975;
                                            *(float*)&v905[40] = v978;
                                            *(float*)&v905[44] = v981;
                                            *(float*)&v905[48] = v984;
                                            *(_DWORD*)&v905[52] = v987;
                                            *(_DWORD*)&v905[56] = v990;
                                            *(_DWORD*)&v905[60] = v993;
                                            if (v450 != 0) {
                                              v461 = v451 - 16;
                                              if ((~((_BYTE)v451 - 16) &
                                                   0x70) != 0) {
                                                v463 =
                                                    ((unsigned __int8)((unsigned int)
                                                                           v461 >>
                                                                       4) +
                                                     1) &
                                                    7;
                                                v462 = (char*)&v971;
                                                do {
                                                  *(_DWORD*)v462 = 0;
                                                  v462 += 16;
                                                  --v463;
                                                } while (v463 != 0);
                                              }
                                              else {
                                                v462 = (char*)&v971;
                                              }
                                              if (v461 >= 0x70) {
                                                v464 = (char*)&v971 + v451;
                                                do {
                                                  *(_DWORD*)v462 = 0;
                                                  *((_DWORD*)v462 + 4) = 0;
                                                  *((_DWORD*)v462 + 8) = 0;
                                                  *((_DWORD*)v462 + 12) = 0;
                                                  *((_DWORD*)v462 + 16) = 0;
                                                  *((_DWORD*)v462 + 20) = 0;
                                                  *((_DWORD*)v462 + 24) = 0;
                                                  *((_DWORD*)v462 + 28) = 0;
                                                  v462 += 128;
                                                } while (v462 != v464);
                                              }
                                            }
                                            if (v942 != 0) {
                                              *(_DWORD*)(v942 + 16 * v943) =
                                                  1065353216;
                                            }
                                            if (v1008 != 0) {
                                              v465 = 16 * v1008 - 16;
                                              v466 =
                                                  (float*)(&v971 + 2 * v1008);
                                              if ((~(_BYTE)v465 & 0x30) != 0) {
                                                v467 = -(
                                                    __int64)(((unsigned __int8)((unsigned int)
                                                                                    v465 >>
                                                                                4) +
                                                              1) &
                                                             3);
                                                do {
                                                  v468 = *(v466 - 4);
                                                  v466 -= 4;
                                                  v256 = __CFADD__(v467++, 1);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v466 +
                                                          4)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              4)) +
                                                      (float)(v466[2] * v468);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v466 +
                                                          5)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v466 +
                                                              5)) +
                                                      (float)(v466[3] * v468);
                                                } while (!v256);
                                              }
                                              if (v465 >= 0x30) {
                                                v469 = v466 - 16;
                                                do {
                                                  v470 = v469[12];
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v469 +
                                                          52)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v469 +
                                                              52)) +
                                                      (float)(v469[14] * v470);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v469 +
                                                          53)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v469 +
                                                              53)) +
                                                      (float)(v469[15] * v470);
                                                  v471 = v469[8];
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v469 +
                                                          36)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v469 +
                                                              36)) +
                                                      (float)(v469[10] * v471);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v469 +
                                                          37)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v469 +
                                                              37)) +
                                                      (float)(v469[11] * v471);
                                                  v472 = v469[4];
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v469 +
                                                          20)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v469 +
                                                              20)) +
                                                      (float)(v469[6] * v472);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v469 +
                                                          21)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v469 +
                                                              21)) +
                                                      (float)(v469[7] * v472);
                                                  v473 = *v469;
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v469 +
                                                          4)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v469 +
                                                              4)) +
                                                      (float)(v469[2] * *v469);
                                                  *((float*)&v971 +
                                                    4 * *((unsigned __int8*)
                                                              v469 +
                                                          5)) =
                                                      *((float*)&v971 +
                                                        4 * *((unsigned __int8*)
                                                                  v469 +
                                                              5)) +
                                                      (float)(v469[3] * v473);
                                                  v115 = v469 == (float*)&v971;
                                                  v469 -= 16;
                                                } while (!v115);
                                              }
                                            }
                                            LODWORD(v833_.v835) = 0;
                                            v833_.v833 = 0;
                                            v833_.v834 = 0;
                                            v831_.v831 = 0;
                                            v831_.v832 = 0;
                                            *(_DWORD*)&v905[64] = v971;
                                            *(_DWORD*)&v905[68] = v973;
                                            *(float*)&v905[80] = v981;
                                            *(float*)&v905[84] = v984;
                                            *(_DWORD*)&v905[88] = v987;
                                            *(_DWORD*)&v905[92] = v990;
                                            *(float*)&v905[72] = v975;
                                            *(float*)&v905[76] = v978;
                                            *(_DWORD*)&v905[96] = v993;
                                            SdkRoutine_87a000_alt1(
                                                v5 + 200, (__int64)&v904,
                                                (__int64)&v840,
                                                (__int64)&v820_.v820,
                                                (__int64)&v831_.v831);
                                            nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveUnbiasedGyrVariable_plt_alt1(
                                                v5 + 200);
                                            v474 = *(_QWORD*)(v5 + 8208);
                                            v475 = *(_QWORD*)(v400 + 16);
                                            v476 = *(_QWORD*)(v400 + 24);
                                            v477 = *(_QWORD*)(v400 + 32);
                                            v478 = *(float*)(v5 + 8184) +
                                                   0x0.0p+0f;
                                            v867[0] = *(_QWORD*)(v5 + 8200);
                                            v867[1] = v474;
                                            v479 = *(_QWORD*)(v5 + 8216);
                                            v480 = *(_QWORD*)(v5 + 8240);
                                            v481 = *(float*)(v5 + 8188);
                                            v871 = v475;
                                            v872 = v476;
                                            v873 = v477;
                                            v874 = 0;
                                            v846 = nullptr;
                                            v847 = 0;
                                            v844 = 0;
                                            v845 = 0;
                                            v842 = 0;
                                            v843 = nullptr;
                                            v840 = 0;
                                            v841 = 0;
                                            v1016[0] = 0x3F80000000000000LL;
                                            v1016[1] = 0;
                                            v1017[0] = 0;
                                            v482 = v481 + 0x0.0p+0f;
                                            v868 = v479;
                                            *(_QWORD*)&v869 = v480;
                                            v483 = *(_QWORD*)(v5 + 8248);
                                            v484 = *(_QWORD*)(v5 + 8256);
                                            v485 = *(float*)(v5 + 0x2000);
                                            *(_QWORD*)((char*)&v1017[1] + 4) =
                                                0;
                                            *(_QWORD*)((char*)&v1017[2] + 4) =
                                                0;
                                            LODWORD(v1017[1]) = 1065353216;
                                            DWORDn(v1017[3],
                                                   sizeof(v1017[3]) / 4 - 1) =
                                                1065353216;
                                            *((_QWORD*)&v869 + 1) = v483;
                                            v870 = v484;
                                            v875 = 3;
                                            v876 = 6;
                                            v486 = v485 + 0x0.0p+0f;
                                            math_724480((void*)((float*)&v904),
                                                        (float*)v1016);
                                            math_7241f0((void*)((float*)&v840),
                                                        (float*)&v904,
                                                        (float*)(v5 + 8224));
                                            v956 = 0;
                                            v955 = nullptr;
                                            v954 = 0;
                                            v953 = 0;
                                            v952 = nullptr;
                                            v951 = 0;
                                            v950 = 0;
                                            v949 = nullptr;
                                            v1016[0] = 0x3F80000000000000LL;
                                            v1016[1] = 0;
                                            v1017[0] = 0;
                                            *(_QWORD*)((char*)&v1017[1] + 4) =
                                                0;
                                            *(_QWORD*)((char*)&v1017[2] + 4) =
                                                0;
                                            LODWORD(v1017[1]) = 1065353216;
                                            DWORDn(v1017[3],
                                                   sizeof(v1017[3]) / 4 - 1) =
                                                1065353216;
                                            v729 = *((float*)&v840 + 1);
                                            v726 = *((float*)&v842 + 1);
                                            v750 = *((float*)&v844 + 1);
                                            v753 = *((float*)&v846 + 1);
                                            v831_.v832 = __PAIR64__(
                                                (unsigned int)v846, v844);
                                            v831_.v831 = __PAIR64__(v842, v840);
                                            v716 = *(float*)&v841;
                                            v717 = v843;
                                            v718 = *((float*)&v841 + 1);
                                            v732 = *((float*)&v845 + 1);
                                            v735 = *(float*)&v845;
                                            v744 = *((float*)&v847 + 1);
                                            v747 = *(float*)&v847;
                                            math_724480((void*)((float*)&v904),
                                                        (float*)v1016);
                                            math_7241f0((void*)((float*)&v949),
                                                        (float*)&v904,
                                                        (float*)v400);
                                            v805[0] = v478;
                                            v805[1] = 0x1.0000000000000p+0f;
                                            v807 = v482;
                                            v809 = 0;
                                            v810 = v486;
                                            v806 = 0;
                                            v812 = 1065353216;
                                            v808 = 0x3F80000000000000LL;
                                            v811 = 0;
                                            v767 = v950;
                                            v787 = *((float*)&v953 + 1);
                                            v798 = *((float*)&v955 + 1);
                                            v820_.v821 = __PAIR64__(
                                                (unsigned int)v955, v953);
                                            v762 = v952;
                                            v794 = *(float*)&v954;
                                            v756 = *((float*)&v951 + 1);
                                            v790 = *((float*)&v954 + 1);
                                            v487 = v956;
                                            v758 = *((float*)&v949 + 1);
                                            v820_.v820 = __PAIR64__(
                                                v951, (unsigned int)v949);
                                            v488 =
                                                (float)((float)(PSEUDO_UNFUSED(
                                                            *(float*)&v949 *
                                                            *(float*)&v949)) +
                                                        (float)(PSEUDO_UNFUSED(
                                                            *(float*)&v951 *
                                                            *(float*)&v951))) +
                                                (float)(PSEUDO_UNFUSED(
                                                    *(float*)&v820_.v821 *
                                                    *(float*)&v820_.v821));
                                            v489 =
                                                (float)((float)((float)(*(float*)&v949 *
                                                                        v478) +
                                                                0x0.0p+0f) +
                                                        (float)(*(float*)&v951 *
                                                                v482)) +
                                                (float)(*(float*)&v953 * v486);
                                            v490 =
                                                0x1.0000000000000p+1f /
                                                (float)((float)(PSEUDO_UNFUSED(
                                                            *(float*)&v955 *
                                                            *(float*)&v955)) +
                                                        v488);
                                            v707 =
                                                v482 +
                                                (float)(PSEUDO_UNFUSED(
                                                    v490 *
                                                    (float)((float)((float)(PSEUDO_UNFUSED(
                                                                        *(float*)&v951 *
                                                                        v489)) -
                                                                    (float)(PSEUDO_UNFUSED(
                                                                        v482 *
                                                                        v488))) -
                                                            (float)(PSEUDO_UNFUSED(
                                                                (float)((float)(*(float*)&v953 *
                                                                                v478) -
                                                                        (float)(PSEUDO_UNFUSED(
                                                                            v486 *
                                                                            *(float*)&v949))) *
                                                                *(float*)&v955)))));
                                            v709 =
                                                v478 +
                                                (float)(PSEUDO_UNFUSED(
                                                    v490 *
                                                    (float)((float)((float)(PSEUDO_UNFUSED(
                                                                        *(float*)&v949 *
                                                                        v489)) -
                                                                    (float)(PSEUDO_UNFUSED(
                                                                        v478 *
                                                                        v488))) -
                                                            (float)(PSEUDO_UNFUSED(
                                                                *(float*)&v955 *
                                                                (float)((float)(*(float*)&v951 *
                                                                                v486) -
                                                                        (float)(PSEUDO_UNFUSED(
                                                                            v482 *
                                                                            *(float*)&v953))))))));
                                            v705 =
                                                v486 +
                                                (float)(PSEUDO_UNFUSED(
                                                    v490 *
                                                    (float)((float)((float)(PSEUDO_UNFUSED(
                                                                        *(float*)&v953 *
                                                                        v489)) -
                                                                    (float)(PSEUDO_UNFUSED(
                                                                        v486 *
                                                                        v488))) -
                                                            (float)(PSEUDO_UNFUSED(
                                                                (float)((float)(*(float*)&v949 *
                                                                                v482) -
                                                                        (float)(PSEUDO_UNFUSED(
                                                                            v478 *
                                                                            *(float*)&v951))) *
                                                                *(float*)&v955)))));
                                            kalman_transition_70ed80(
                                                (void*)((float*)&v904),
                                                (float*)&v820_.v820, v805);
                                            *(_DWORD*)&v905[8] = 0;
                                            *(_QWORD*)&v905[44] = 1065353216;
                                            *(_QWORD*)&v905[56] = 0;
                                            *(_QWORD*)&v905[64] =
                                                0x3F80000000000000LL;
                                            v780 = *((float*)&v904 + 1);
                                            v772 = *(_QWORD*)&v905[16];
                                            *(_DWORD*)&v905[52] = DWORDn(
                                                v820_.v821,
                                                sizeof(v820_.v821) / 4 - 1);
                                            v491 = *(_QWORD*)v905;
                                            v492 = *(float*)&v905[28];
                                            *(_QWORD*)v905 = 0;
                                            *(_QWORD*)&v905[16] =
                                                0x3F80000000000000LL;
                                            *(_QWORD*)&v905[24] = 0;
                                            v493 = *(float*)&v905[12];
                                            v765 = v492;
                                            *(_DWORD*)&v905[12] = DWORDn(
                                                v820_.v820,
                                                sizeof(v820_.v820) / 4 - 1);
                                            v777 = v493;
                                            v770 = *(float*)&v905[32];
                                            v904 = (unsigned int)v820_.v820 |
                                                   0x3F80000000000000LL;
                                            *(_DWORD*)&v905[32] = v820_.v821;
                                            v494 = *(float*)&v905[36];
                                            *(_QWORD*)&v905[36] = 0;
                                            v760 = v494;
                                            kalman_transition_70f080(
                                                (void*)((float*)v1016),
                                                (float*)&v904, v478, v482,
                                                v486);
                                            v495 = *((float*)v1016 + 1);
                                            v496 = v1016[1];
                                            v497 = *(float*)v1017;
                                            v1016[0] =
                                                (unsigned int)v831_.v831 |
                                                0x3F80000000000000LL;
                                            v1016[1] = 0;
                                            LODWORD(v1017[0]) = 0;
                                            DWORDn(v1017[0],
                                                   sizeof(v1017[0]) / 4 - 1) =
                                                DWORDn(v831_.v831,
                                                       sizeof(v831_.v831) / 4 -
                                                           1);
                                            DWORDn(v1017[5],
                                                   sizeof(v1017[5]) / 4 - 1) =
                                                DWORDn(v831_.v832,
                                                       sizeof(v831_.v832) / 4 -
                                                           1);
                                            LODWORD(v1017[3]) = v831_.v832;
                                            v1018 = 0;
                                            v1019 = 0x3F80000000000000LL;
                                            v742 = v497;
                                            v498 = -(
                                                float)((float)((float)((float)((float)(*(float*)&v831_
                                                                                            .v831 *
                                                                                       *(float*)&v820_
                                                                                            .v820) +
                                                                               0x0.0p+0f) +
                                                                       (float)(*((float*)&v831_
                                                                                     .v831 +
                                                                                 1) *
                                                                               *((float*)&v820_
                                                                                     .v820 +
                                                                                 1))) +
                                                               (float)(*(float*)&v831_
                                                                            .v832 *
                                                                       *(float*)&v820_
                                                                            .v821)) -
                                                       (float)(*((float*)&v831_
                                                                     .v832 +
                                                                 1) *
                                                               *((float*)&v820_
                                                                     .v821 +
                                                                 1)));
                                            v713 = *(float*)&v1017[1];
                                            v714 = v495;
                                            v499 = *((float*)&v1017[2] + 1);
                                            v500 = *(float*)&v1017[2];
                                            v715 = *((float*)&v1017[1] + 1);
                                            v1017[1] = 0x3F80000000000000LL;
                                            v1017[2] = 0;
                                            v723 = v500;
                                            v501 = *(_QWORD*)((char*)&v1017[3] +
                                                              4);
                                            *(_QWORD*)((char*)&v1017[3] + 4) =
                                                0;
                                            v721 = *((float*)&v1017[4] + 1);
                                            v502 = *(float*)&v1017[5];
                                            *(_QWORD*)((char*)&v1017[4] + 4) =
                                                1065353216;
                                            v738 = v502;
                                            v740 = v499;
                                            *(float*)&v503 =
                                                (float)((float)(PSEUDO_UNFUSED(
                                                            *((float*)&v820_
                                                                  .v821 +
                                                              1) *
                                                            *(float*)&v831_
                                                                 .v831)) +
                                                        (float)(PSEUDO_UNFUSED(
                                                            *((float*)&v831_
                                                                  .v832 +
                                                              1) *
                                                            *(float*)&v820_
                                                                 .v820))) +
                                                (float)((float)(*((float*)&v831_
                                                                      .v831 +
                                                                  1) *
                                                                *(float*)&v820_
                                                                     .v821) -
                                                        (float)(PSEUDO_UNFUSED(
                                                            *((float*)&v820_
                                                                  .v820 +
                                                              1) *
                                                            *(float*)&v831_
                                                                 .v832)));
                                            v504 =
                                                (float)((float)(PSEUDO_UNFUSED(
                                                            *((float*)&v820_
                                                                  .v821 +
                                                              1) *
                                                            *((float*)&v831_
                                                                  .v831 +
                                                              1))) +
                                                        (float)(PSEUDO_UNFUSED(
                                                            *((float*)&v831_
                                                                  .v832 +
                                                              1) *
                                                            *((float*)&v820_
                                                                  .v820 +
                                                              1)))) +
                                                (float)((float)(*(float*)&v831_
                                                                     .v832 *
                                                                *(float*)&v820_
                                                                     .v820) -
                                                        (float)(PSEUDO_UNFUSED(
                                                            *(float*)&v820_
                                                                 .v821 *
                                                            *(float*)&v831_
                                                                 .v831)));
                                            v505 =
                                                (float)((float)(*(float*)&v831_
                                                                     .v831 *
                                                                *((float*)&v820_
                                                                      .v820 +
                                                                  1)) -
                                                        (float)(PSEUDO_UNFUSED(
                                                            *(float*)&v820_
                                                                 .v820 *
                                                            *((float*)&v831_
                                                                  .v831 +
                                                              1)))) +
                                                (float)((float)(PSEUDO_UNFUSED(
                                                            *((float*)&v820_
                                                                  .v821 +
                                                              1) *
                                                            *(float*)&v831_
                                                                 .v832)) +
                                                        (float)(PSEUDO_UNFUSED(
                                                            *((float*)&v831_
                                                                  .v832 +
                                                              1) *
                                                            *(float*)&v820_
                                                                 .v821)));
                                            kalman_transition_70f680(
                                                (void*)((float*)&v904),
                                                (float*)v1016,
                                                (float*)&v820_.v820);
                                            v506 = *((float*)&v904 + 1);
                                            v507 = *(float*)&v905[16];
                                            v508 = *(float*)&v905[56];
                                            v1016[1] = 0;
                                            LODWORD(v1017[0]) = 0;
                                            v1017[1] = 0x3F80000000000000LL;
                                            v1017[2] = 0;
                                            *(_QWORD*)((char*)&v1017[3] + 4) =
                                                0;
                                            *(_QWORD*)((char*)&v1017[4] + 4) =
                                                1065353216;
                                            v1018 = 0;
                                            v1019 = 0x3F80000000000000LL;
                                            v690 = *(float*)v905;
                                            v691 = *(float*)&v905[20];
                                            v509 = *(_QWORD*)&v905[24];
                                            v692 = *(_QWORD*)&v905[36];
                                            v697 = *(float*)&v905[44];
                                            v698 = *(float*)&v905[4];
                                            DWORDn(v1017[0],
                                                   sizeof(v1017[0]) / 4 - 1) =
                                                DWORDn(v820_.v820,
                                                       sizeof(v820_.v820) / 4 -
                                                           1);
                                            v711 = *(float*)&v905[48];
                                            v712 = *(float*)&v905[8];
                                            DWORDn(v1017[5],
                                                   sizeof(v1017[5]) / 4 - 1) =
                                                DWORDn(v820_.v821,
                                                       sizeof(v820_.v821) / 4 -
                                                           1);
                                            v689 = *(float*)&v905[60];
                                            v1016[0] =
                                                (unsigned int)v820_.v820 |
                                                0x3F80000000000000LL;
                                            LODWORD(v1017[3]) = v820_.v821;
                                            v510 = *(_QWORD*)&v905[64];
                                            kalman_transition_70f9d0(
                                                (void*)((float*)&v904),
                                                (float*)&v831_.v831,
                                                (float*)v1016);
                                            v511 = *((float*)&v904 + 1);
                                            v512 = *(_DWORD*)v905;
                                            v513 = *(float*)&v905[20];
                                            v514 = *(float*)&v905[44];
                                            *(float*)(v5 + 8228) = v504;
                                            *(float*)(v5 + 8232) = v505;
                                            *((float*)v1017 + 1) = v504;
                                            *(float*)&v1017[3] = v505;
                                            *(float*)(v5 + 8224) =
                                                *(float*)&v503;
                                            *(float*)(v5 + 8236) = v498;
                                            v1016[0] =
                                                v503 | 0x3F80000000000000LL;
                                            v1016[1] = 0;
                                            LODWORD(v1017[0]) = 0;
                                            v1017[1] = 0x3F80000000000000LL;
                                            v1017[2] = 0;
                                            *(_QWORD*)((char*)&v1017[3] + 4) =
                                                0;
                                            *(_QWORD*)((char*)&v1017[4] + 4) =
                                                1065353216;
                                            *((float*)&v1017[5] + 1) = v498;
                                            v1018 = 0;
                                            v1019 = 0x3F80000000000000LL;
                                            *((float*)&v937 + 1) = v498;
                                            v699 = v511;
                                            v702 = __PAIR64__(
                                                *(unsigned int*)&v905[4], v512);
                                            v515 = *(float*)&v905[16];
                                            v703 = *(float*)&v905[8];
                                            *(float*)(v5 + 8188) = v707;
                                            *(float*)(v5 + 8184) = v709;
                                            v516 = *(float*)&v905[48];
                                            *(float*)(v5 + 0x2000) = v705;
                                            v700 = v516;
                                            v701 = v514;
                                            v693 = v515;
                                            v694 = *(float*)&v905[24];
                                            v704 = *(float*)&v905[60];
                                            v706 = *(float*)&v905[56];
                                            v695 = v513;
                                            v696 = *(float*)&v905[28];
                                            v517 = -v505;
                                            v518 = *(float*)&v905[68];
                                            *(float*)&v937 = v517;
                                            v708 = *(float*)&v905[40];
                                            v710 = *(float*)&v905[36];
                                            v519 = -v504;
                                            v520 = *(float*)&v905[64];
                                            *(float*)&v936 = -*(float*)&v503;
                                            *((float*)&v936 + 1) = v519;
                                            kalman_transition_70f680(
                                                (void*)((float*)&v904),
                                                (float*)v1016, (float*)&v936);
                                            math_724870((void*)((float*)&v892),
                                                        (float*)&v904);
                                            v521 = *((float*)&v892 + 1);
                                            v522 = *(float*)&v895;
                                            v523 = *((float*)&v897 + 1);
                                            v524 = *(float*)&v893;
                                            v525 = *((float*)&v895 + 1);
                                            v526 = *(float*)&v898;
                                            v527 = *((float*)&v893 + 1);
                                            v528 = *(float*)&v896;
                                            v529 = *((float*)&v898 + 1);
                                            v530 =
                                                (float)(*((float*)&v892 + 1) *
                                                        v506) +
                                                0x0.0p+0f;
                                            v531 = *(float*)&v894;
                                            v532 = *((float*)&v896 + 1);
                                            v533 = *(float*)&v899;
                                            memset(&v905[164], 0, 20);
                                            *(_QWORD*)&v905[156] = 0;
                                            *(_QWORD*)&v905[148] = 0;
                                            v534 =
                                                (float)((float)((float)(*((float*)&v892 +
                                                                          1) *
                                                                        v690) +
                                                                0x0.0p+0f) +
                                                        (float)(*(float*)&v893 *
                                                                v691)) +
                                                (float)(*((float*)&v893 + 1) *
                                                        *((float*)&v692 + 1));
                                            memset(&v905[116], 0, 32);
                                            v892 = *(_QWORD*)(v5 + 8200);
                                            v893 = *(_QWORD*)(v5 + 8208);
                                            v894 = *(_QWORD*)(v5 + 8216);
                                            v535 =
                                                (float)((float)(v530 +
                                                                (float)(v524 *
                                                                        v507)) +
                                                        (float)(v527 *
                                                                *(float*)&v692)) +
                                                (float)(v531 * v508);
                                            v536 =
                                                (float)((float)((float)((float)(*(float*)&v895 *
                                                                                v506) +
                                                                        0x0.0p+0f) +
                                                                (float)(*((float*)&v895 +
                                                                          1) *
                                                                        v507)) +
                                                        (float)(*(float*)&v896 *
                                                                *(float*)&v692)) +
                                                (float)(*((float*)&v896 + 1) *
                                                        v508);
                                            v537 =
                                                (float)((float)((float)((float)(*((float*)&v897 +
                                                                                  1) *
                                                                                v506) +
                                                                        0x0.0p+0f) +
                                                                (float)(*(float*)&v898 *
                                                                        v507)) +
                                                        (float)(*((float*)&v898 +
                                                                  1) *
                                                                *(float*)&v692)) +
                                                (float)(*(float*)&v899 * v508);
                                            v538 = v534 + (float)(v531 * v689);
                                            v539 =
                                                (float)((float)((float)((float)(*(float*)&v895 *
                                                                                v690) +
                                                                        0x0.0p+0f) +
                                                                (float)(*((float*)&v895 +
                                                                          1) *
                                                                        v691)) +
                                                        (float)(*(float*)&v896 *
                                                                *((float*)&v692 +
                                                                  1))) +
                                                (float)(*((float*)&v896 + 1) *
                                                        v689);
                                            v540 =
                                                (float)((float)((float)((float)(*((float*)&v897 +
                                                                                  1) *
                                                                                v690) +
                                                                        0x0.0p+0f) +
                                                                (float)(*(float*)&v898 *
                                                                        v691)) +
                                                        (float)(*((float*)&v898 +
                                                                  1) *
                                                                *((float*)&v692 +
                                                                  1))) +
                                                (float)(*(float*)&v899 * v689);
                                            v895 = *(_QWORD*)(v5 + 8240);
                                            v541 = *(_QWORD*)(v5 + 8248);
                                            v898 = 0;
                                            v899 = 3;
                                            memset(&v905[4], 0, 112);
                                            v1026 = 0;
                                            v1027 = 0;
                                            v1024 = 0;
                                            v1025 = 0;
                                            v1022 = 0;
                                            v1023 = 0;
                                            v1020 = 0;
                                            v1021 = 0;
                                            v1018 = 0;
                                            v1019 = 0;
                                            v542 =
                                                (float)((float)(v535 * v729) +
                                                        0x0.0p+0f) +
                                                (float)(v538 * v726);
                                            v543 =
                                                (float)((float)(v535 * v716) +
                                                        0x0.0p+0f) +
                                                (float)(v538 * *(float*)&v717);
                                            v544 =
                                                (float)((float)(v535 * v718) +
                                                        0x0.0p+0f) +
                                                (float)(v538 *
                                                        *((float*)&v717 + 1));
                                            v545 =
                                                (float)((float)(v536 * v716) +
                                                        0x0.0p+0f) +
                                                (float)(v539 * *(float*)&v717);
                                            v896 = v541;
                                            v546 = *(_QWORD*)(v5 + 8256);
                                            memset(v1017, 0, sizeof(v1017));
                                            v1016[0] = 0;
                                            v1016[1] = 0;
                                            v547 =
                                                (float)((float)(v536 * v729) +
                                                        0x0.0p+0f) +
                                                (float)(v539 * v726);
                                            v548 =
                                                (float)((float)(v536 * v718) +
                                                        0x0.0p+0f) +
                                                (float)(v539 *
                                                        *((float*)&v717 + 1));
                                            v897 = v546;
                                            v549 =
                                                (float)((float)(v537 * v729) +
                                                        0x0.0p+0f) +
                                                (float)(v540 * v726);
                                            v550 =
                                                (float)((float)(v537 * v716) +
                                                        0x0.0p+0f) +
                                                (float)(v540 * *(float*)&v717);
                                            v551 =
                                                (float)((float)(v537 * v718) +
                                                        0x0.0p+0f) +
                                                (float)(v540 *
                                                        *((float*)&v717 + 1));
                                            v552 =
                                                (float)((float)((float)((float)(v521 *
                                                                                v698) +
                                                                        0x0.0p+0f) +
                                                                (float)(v524 *
                                                                        *(float*)&v509)) +
                                                        (float)(v527 * v697)) +
                                                (float)(v531 * *(float*)&v510);
                                            v553 =
                                                (float)((float)((float)((float)(v522 *
                                                                                v698) +
                                                                        0x0.0p+0f) +
                                                                (float)(v525 *
                                                                        *(float*)&v509)) +
                                                        (float)(v528 * v697)) +
                                                (float)(v532 * *(float*)&v510);
                                            v554 =
                                                (float)((float)((float)((float)(v523 *
                                                                                v698) +
                                                                        0x0.0p+0f) +
                                                                (float)(v526 *
                                                                        *(float*)&v509)) +
                                                        (float)(v529 * v697)) +
                                                (float)(v533 * *(float*)&v510);
                                            v555 = v543 + (float)(v552 * v735);
                                            v556 = v544 + (float)(v552 * v732);
                                            v557 = v545 + (float)(v553 * v735);
                                            v558 = v548 + (float)(v553 * v732);
                                            v559 = v550 + (float)(v554 * v735);
                                            v560 = v542 + (float)(v552 * v750);
                                            v561 = v547 + (float)(v553 * v750);
                                            v562 = v549 + (float)(v554 * v750);
                                            v563 = v551 + (float)(v554 * v732);
                                            v564 =
                                                (float)((float)((float)((float)(v522 *
                                                                                v712) +
                                                                        0x0.0p+0f) +
                                                                (float)(v525 *
                                                                        *((float*)&v509 +
                                                                          1))) +
                                                        (float)(v528 * v711)) +
                                                (float)(v532 *
                                                        *((float*)&v510 + 1));
                                            v565 =
                                                (float)((float)((float)((float)(v521 *
                                                                                v712) +
                                                                        0x0.0p+0f) +
                                                                (float)(v524 *
                                                                        *((float*)&v509 +
                                                                          1))) +
                                                        (float)(v527 * v711)) +
                                                (float)(v531 *
                                                        *((float*)&v510 + 1));
                                            v566 =
                                                (float)((float)((float)((float)(v523 *
                                                                                v712) +
                                                                        0x0.0p+0f) +
                                                                (float)(v526 *
                                                                        *((float*)&v509 +
                                                                          1))) +
                                                        (float)(v529 * v711)) +
                                                (float)(v533 *
                                                        *((float*)&v510 + 1));
                                            v733 = v560 + (float)(v565 * v753);
                                            v730 = v555 + (float)(v565 * v747);
                                            v736 = v556 + (float)(v565 * v744);
                                            v727 = v561 + (float)(v564 * v753);
                                            *((float*)&v717 + 1) =
                                                v562 + (float)(v566 * v753);
                                            v719 = v557 + (float)(v564 * v747);
                                            *(float*)&v748 =
                                                v559 + (float)(v566 * v747);
                                            v751 = v558 + (float)(v564 * v744);
                                            *(float*)&v754 =
                                                v563 + (float)(v566 * v744);
                                            v567 =
                                                (float)((float)(v521 * v699) +
                                                        0x0.0p+0f) +
                                                (float)(v524 * v693);
                                            v568 =
                                                (float)((float)(v521 *
                                                                *(float*)&v702) +
                                                        0x0.0p+0f) +
                                                (float)(v524 * v695);
                                            v569 =
                                                (float)((float)(v521 *
                                                                *((float*)&v702 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v524 * v694);
                                            v570 =
                                                (float)((float)(v522 *
                                                                *(float*)&v702) +
                                                        0x0.0p+0f) +
                                                (float)(v525 * v695);
                                            v571 =
                                                (float)((float)(v522 *
                                                                *((float*)&v702 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v525 * v694);
                                            v572 =
                                                (float)((float)(v523 *
                                                                *(float*)&v702) +
                                                        0x0.0p+0f) +
                                                (float)(v526 * v695);
                                            v573 =
                                                (float)((float)(v523 *
                                                                *((float*)&v702 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v526 * v694);
                                            v574 =
                                                (float)((float)(v521 * v703) +
                                                        0x0.0p+0f) +
                                                (float)(v524 * v696);
                                            v575 =
                                                (float)((float)(v522 * v699) +
                                                        0x0.0p+0f) +
                                                (float)(v525 * v693);
                                            v576 =
                                                (float)((float)(v522 * v703) +
                                                        0x0.0p+0f) +
                                                (float)(v525 * v696);
                                            v577 =
                                                (float)((float)(v523 * v699) +
                                                        0x0.0p+0f) +
                                                (float)(v526 * v693);
                                            v578 =
                                                (float)((float)(v523 * v703) +
                                                        0x0.0p+0f) +
                                                (float)(v526 * v696);
                                            v579 = v574 + (float)(v527 * v700);
                                            v580 = v567 + (float)(v527 * v710);
                                            v581 = v568 + (float)(v527 * v708);
                                            v582 = v569 + (float)(v527 * v701);
                                            v583 = v575 + (float)(v528 * v710);
                                            v584 = v570 + (float)(v528 * v708);
                                            v585 = v571 + (float)(v528 * v701);
                                            v586 = v576 + (float)(v528 * v700);
                                            v587 = v577 + (float)(v529 * v710);
                                            v588 = v572 + (float)(v529 * v708);
                                            v589 = v579 + (float)(v531 * v518);
                                            v590 = v582 + (float)(v531 * v520);
                                            v591 = v586 + (float)(v532 * v518);
                                            v592 =
                                                (float)(v578 +
                                                        (float)(v529 * v700)) +
                                                (float)(v533 * v518);
                                            v593 = v585 + (float)(v532 * v520);
                                            v594 = v583 + (float)(v532 * v706);
                                            v595 = v580 + (float)(v531 * v706);
                                            v596 = v581 + (float)(v531 * v704);
                                            v597 = v584 + (float)(v532 * v704);
                                            v598 = v587 + (float)(v533 * v706);
                                            v599 = v588 + (float)(v533 * v704);
                                            v600 =
                                                (float)(v573 +
                                                        (float)(v529 * v701)) +
                                                (float)(v533 * v520);
                                            v745 = v589;
                                            v601 = (float)(v714 * 0x0.0p+0f) +
                                                   0x0.0p+0f;
                                            v602 = (float)((float)(v714 +
                                                                   0x0.0p+0f) +
                                                           (float)(v713 *
                                                                   0x0.0p+0f)) +
                                                   (float)(*(float*)&v501 *
                                                           0x0.0p+0f);
                                            v603 = (float)(v601 + v713) +
                                                   (float)(*(float*)&v501 *
                                                           0x0.0p+0f);
                                            v604 = (float)(v601 +
                                                           (float)(v713 *
                                                                   0x0.0p+0f)) +
                                                   *(float*)&v501;
                                            v605 = (float)(*(float*)&v496 *
                                                           0x0.0p+0f) +
                                                   0x0.0p+0f;
                                            v606 =
                                                (float)((float)(*(float*)&v496 +
                                                                0x0.0p+0f) +
                                                        (float)(v715 *
                                                                0x0.0p+0f)) +
                                                (float)(*((float*)&v501 + 1) *
                                                        0x0.0p+0f);
                                            v607 =
                                                (float)(v605 + v715) +
                                                (float)(*((float*)&v501 + 1) *
                                                        0x0.0p+0f);
                                            v608 = (float)(v605 +
                                                           (float)(v715 *
                                                                   0x0.0p+0f)) +
                                                   *((float*)&v501 + 1);
                                            v609 =
                                                (float)((float)(v602 * v758) +
                                                        0x0.0p+0f) +
                                                (float)(v606 * v756);
                                            v610 =
                                                (float)((float)(v602 *
                                                                *(float*)&v767) +
                                                        0x0.0p+0f) +
                                                (float)(v606 * *(float*)&v762);
                                            v611 =
                                                (float)((float)(v595 *
                                                                *(float*)&v767) +
                                                        0x0.0p+0f) +
                                                (float)(v596 * *(float*)&v762);
                                            v612 =
                                                (float)((float)(v594 *
                                                                *(float*)&v767) +
                                                        0x0.0p+0f) +
                                                (float)(v597 * *(float*)&v762);
                                            v613 =
                                                (float)((float)(v598 *
                                                                *(float*)&v767) +
                                                        0x0.0p+0f) +
                                                (float)(v599 * *(float*)&v762);
                                            v614 =
                                                (float)((float)(v603 *
                                                                *(float*)&v767) +
                                                        0x0.0p+0f) +
                                                (float)(v607 * *(float*)&v762);
                                            v615 =
                                                (float)((float)(v604 *
                                                                *(float*)&v767) +
                                                        0x0.0p+0f) +
                                                (float)(v608 * *(float*)&v762);
                                            v616 =
                                                (float)((float)(v602 *
                                                                *((float*)&v767 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v606 *
                                                        *((float*)&v762 + 1));
                                            v617 =
                                                (float)((float)(v603 * v758) +
                                                        0x0.0p+0f) +
                                                (float)(v607 * v756);
                                            v618 =
                                                (float)((float)(v603 *
                                                                *((float*)&v767 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v607 *
                                                        *((float*)&v762 + 1));
                                            v619 =
                                                (float)((float)(v604 * v758) +
                                                        0x0.0p+0f) +
                                                (float)(v608 * v756);
                                            v620 =
                                                (float)((float)(v604 *
                                                                *((float*)&v767 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v608 *
                                                        *((float*)&v762 + 1));
                                            v621 =
                                                (float)((float)(v595 * v758) +
                                                        0x0.0p+0f) +
                                                (float)(v596 * v756);
                                            v622 =
                                                (float)((float)(v595 *
                                                                *((float*)&v767 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v596 *
                                                        *((float*)&v762 + 1));
                                            v623 =
                                                (float)((float)(v594 * v758) +
                                                        0x0.0p+0f) +
                                                (float)(v597 * v756);
                                            v624 =
                                                (float)((float)(v594 *
                                                                *((float*)&v767 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v597 *
                                                        *((float*)&v762 + 1));
                                            v625 =
                                                (float)((float)(v598 * v758) +
                                                        0x0.0p+0f) +
                                                (float)(v599 * v756);
                                            v626 =
                                                (float)((float)(v598 *
                                                                *((float*)&v767 +
                                                                  1)) +
                                                        0x0.0p+0f) +
                                                (float)(v599 *
                                                        *((float*)&v762 + 1));
                                            v627 =
                                                (float)(*((float*)&v496 + 1) *
                                                        0x0.0p+0f) +
                                                0x0.0p+0f;
                                            v628 =
                                                (float)((float)(*((float*)&v496 +
                                                                  1) +
                                                                0x0.0p+0f) +
                                                        (float)(v723 *
                                                                0x0.0p+0f)) +
                                                (float)(v721 * 0x0.0p+0f);
                                            v629 = (float)(v627 + v723) +
                                                   (float)(v721 * 0x0.0p+0f);
                                            v630 = (float)(v627 +
                                                           (float)(v723 *
                                                                   0x0.0p+0f)) +
                                                   v721;
                                            v631 = v620 + (float)(v630 * v790);
                                            v632 = v609 + (float)(v628 * v787);
                                            v633 = v610 + (float)(v628 * v794);
                                            v634 = v616 + (float)(v628 * v790);
                                            v635 = v617 + (float)(v629 * v787);
                                            v636 = v614 + (float)(v629 * v794);
                                            v637 = v615 + (float)(v630 * v794);
                                            v638 = v621 + (float)(v590 * v787);
                                            v639 = v611 + (float)(v590 * v794);
                                            v640 = v622 + (float)(v590 * v790);
                                            v641 = v612 + (float)(v593 * v794);
                                            v642 = v613 + (float)(v600 * v794);
                                            v643 = v623 + (float)(v593 * v787);
                                            v644 = v624 + (float)(v593 * v790);
                                            v645 = v625 + (float)(v600 * v787);
                                            v646 = v626 + (float)(v600 * v790);
                                            v647 = (float)(v742 * 0x0.0p+0f) +
                                                   0x0.0p+0f;
                                            v648 = (float)((float)(v742 +
                                                                   0x0.0p+0f) +
                                                           (float)(v740 *
                                                                   0x0.0p+0f)) +
                                                   (float)(v738 * 0x0.0p+0f);
                                            v649 = (float)(v647 + v740) +
                                                   (float)(v738 * 0x0.0p+0f);
                                            v650 = (float)(v647 +
                                                           (float)(v740 *
                                                                   0x0.0p+0f)) +
                                                   v738;
                                            *(float*)&v905[16] =
                                                v632 + (float)(v648 * v798);
                                            *(float*)&v905[24] =
                                                v634 +
                                                (float)(v648 *
                                                        *((float*)&v487 + 1));
                                            *(float*)&v905[52] =
                                                v635 + (float)(v649 * v798);
                                            *(float*)&v905[96] =
                                                v631 +
                                                (float)(v650 *
                                                        *((float*)&v487 + 1));
                                            *(float*)&v905[20] =
                                                v633 +
                                                (float)(v648 * *(float*)&v487);
                                            *(float*)&v905[56] =
                                                v636 +
                                                (float)(v649 * *(float*)&v487);
                                            *(float*)&v905[60] =
                                                (float)(v618 +
                                                        (float)(v629 * v790)) +
                                                (float)(v649 *
                                                        *((float*)&v487 + 1));
                                            *(float*)&v905[88] =
                                                (float)(v619 +
                                                        (float)(v630 * v787)) +
                                                (float)(v650 * v798);
                                            *(float*)&v905[92] =
                                                v637 +
                                                (float)(v650 * *(float*)&v487);
                                            v791 =
                                                v644 +
                                                (float)(v591 *
                                                        *((float*)&v487 + 1));
                                            v795 =
                                                v641 +
                                                (float)(v591 * *(float*)&v487);
                                            *(float*)&v905[124] =
                                                v638 + (float)(v745 * v798);
                                            *(float*)&v905[128] =
                                                v639 +
                                                (float)(v745 * *(float*)&v487);
                                            *(float*)&v905[132] =
                                                v640 +
                                                (float)(v745 *
                                                        *((float*)&v487 + 1));
                                            *(float*)&v905[160] =
                                                v643 + (float)(v591 * v798);
                                            v651 =
                                                (float)(*((float*)&v491 + 1) *
                                                        0x0.0p+0f) +
                                                0x0.0p+0f;
                                            *(float*)&v799 =
                                                v645 + (float)(v592 * v798);
                                            v652 = (float)(*(float*)&v491 *
                                                           0x0.0p+0f) +
                                                   0x0.0p+0f;
                                            *((float*)&v908 + 1) =
                                                v646 +
                                                (float)(v592 *
                                                        *((float*)&v487 + 1));
                                            v653 =
                                                (float)((float)(*(float*)&v491 +
                                                                0x0.0p+0f) +
                                                        (float)(*(float*)&v772 *
                                                                0x0.0p+0f)) +
                                                (float)(v770 * 0x0.0p+0f);
                                            v654 = (float)((float)(v780 +
                                                                   0x0.0p+0f) +
                                                           (float)(v777 *
                                                                   0x0.0p+0f)) +
                                                   (float)(v765 * 0x0.0p+0f);
                                            v655 =
                                                (float)((float)(*((float*)&v491 +
                                                                  1) +
                                                                0x0.0p+0f) +
                                                        (float)(*((float*)&v772 +
                                                                  1) *
                                                                0x0.0p+0f)) +
                                                (float)(v760 * 0x0.0p+0f);
                                            v656 =
                                                (float)(v651 +
                                                        *((float*)&v772 + 1)) +
                                                (float)(v760 * 0x0.0p+0f);
                                            v657 =
                                                (float)(v651 +
                                                        (float)(*((float*)&v772 +
                                                                  1) *
                                                                0x0.0p+0f)) +
                                                v760;
                                            v658 = v654 + 0x0.0p+0f;
                                            v659 = (float)(v654 * 0x0.0p+0f) +
                                                   0x0.0p+0f;
                                            *(float*)&v904 =
                                                (float)(v658 +
                                                        (float)(v653 *
                                                                0x0.0p+0f)) +
                                                (float)(v655 * 0x0.0p+0f);
                                            v660 = (float)(v780 * 0x0.0p+0f) +
                                                   0x0.0p+0f;
                                            v661 =
                                                (float)(v652 + *(float*)&v772) +
                                                (float)(v770 * 0x0.0p+0f);
                                            *((float*)&v904 + 1) =
                                                (float)(v653 + v659) +
                                                (float)(v655 * 0x0.0p+0f);
                                            *(float*)v905 =
                                                v655 +
                                                (float)(v659 +
                                                        (float)(v653 *
                                                                0x0.0p+0f));
                                            v662 =
                                                (float)(v652 +
                                                        (float)(*(float*)&v772 *
                                                                0x0.0p+0f)) +
                                                v770;
                                            v663 = (float)(v660 + v777) +
                                                   (float)(v765 * 0x0.0p+0f);
                                            v664 = (float)(v660 +
                                                           (float)(v777 *
                                                                   0x0.0p+0f)) +
                                                   v765;
                                            *(float*)&v905[116] = v730;
                                            *(float*)&v905[112] = v733;
                                            v665 = v663 + 0x0.0p+0f;
                                            v666 = (float)(v663 * 0x0.0p+0f) +
                                                   0x0.0p+0f;
                                            *(float*)&v905[148] = v727;
                                            *(float*)&v905[28] =
                                                (float)(v665 +
                                                        (float)(v661 *
                                                                0x0.0p+0f)) +
                                                (float)(v656 * 0x0.0p+0f);
                                            v667 = v664 + 0x0.0p+0f;
                                            v668 = (float)(v664 * 0x0.0p+0f) +
                                                   0x0.0p+0f;
                                            *(float*)&v905[36] =
                                                v656 +
                                                (float)(v666 +
                                                        (float)(v661 *
                                                                0x0.0p+0f));
                                            v906 = (__int64*)__PAIR64__(
                                                v748,
                                                DWORDn(v717,
                                                       sizeof(v717) / 4 - 1));
                                            *(float*)&v905[152] = v719;
                                            *(float*)&v905[32] =
                                                (float)(v661 + v666) +
                                                (float)(v656 * 0x0.0p+0f);
                                            *(float*)&v905[64] =
                                                (float)(v667 +
                                                        (float)(v662 *
                                                                0x0.0p+0f)) +
                                                (float)(v657 * 0x0.0p+0f);
                                            *(float*)&v905[72] =
                                                v657 +
                                                (float)(v668 +
                                                        (float)(v662 *
                                                                0x0.0p+0f));
                                            *(float*)&v905[68] =
                                                (float)(v662 + v668) +
                                                (float)(v657 * 0x0.0p+0f);
                                            *(float*)&v905[120] = v736;
                                            *(float*)&v905[156] = v751;
                                            *(float*)&v905[164] = v795;
                                            *(float*)&v905[168] = v791;
                                            v907 = __PAIR64__(v799, v754);
                                            *(float*)&v908 =
                                                v642 +
                                                (float)(v592 * *(float*)&v487);
                                            SdkRoutine_87a020_alt1(
                                                v5 + 200, (__int64)&v904,
                                                (__int64)v867, (__int64)&v892,
                                                (__int64)v1016);
                                            nerd_gyro_pointing_GyroPointingKalmanFilter_RemoveRelativeRotationVariable_plt_alt1(
                                                v5 + 200);
                                            nerd_gyro_pointing_GyroPointingKalmanFilter_AddVariableCovariances_plt_alt1(
                                                v5 + 200, v804);
                                            v669 = *(_QWORD*)(v5 + 8208);
                                            v670 = *(float*)(v5 + 8188);
                                            v671 = *(float*)(v5 + 8184) +
                                                   0x0.0p+0f;
                                            v867[0] = *(_QWORD*)(v5 + 8200);
                                            v867[1] = v669;
                                            v672 = *(float*)(v5 + 0x2000) +
                                                   0x0.0p+0f;
                                            v868 = *(_QWORD*)(v5 + 8216);
                                            v904 = 1065353216;
                                            *(_QWORD*)v905 = 0;
                                            *(_DWORD*)&v905[8] = 1065353216;
                                            *(_DWORD*)&v905[12] = 0;
                                            *(_QWORD*)&v905[16] = 0;
                                            *(_DWORD*)&v905[24] = 1065353216;
                                            *(__int64*)((char*)v1016 + 4) = 0;
                                            v673 = 0x1.99999a0000000p-4f;
                                            DWORDn(v1016[1],
                                                   sizeof(v1016[1]) / 4 - 1) =
                                                0;
                                            *(_QWORD*)((char*)v1017 + 4) = 0;
                                            DWORDn(v1017[1],
                                                   sizeof(v1017[1]) / 4 - 1) =
                                                0;
                                            *(float*)&v840 = v671;
                                            *((float*)&v840 + 1) =
                                                v670 + 0x0.0p+0f;
                                            *(float*)&v841 = v672;
                                            if (v804 <= 0x1.99999a0000000p-4f) {
                                              v673 = v804;
                                            }
                                            *(float*)v1016 =
                                                *(float*)&v1013 /
                                                (float)(v673 / *(float*)&v1015);
                                            *(float*)v1017 = *(float*)v1016;
                                            *(float*)&v1017[2] = *(float*)v1016;
                                            SdkRoutine_87a050_alt1(
                                                v5 + 200, (__int64)&v840,
                                                (__int64)&v904, (__int64)v1016,
                                                (__int64)v867, 0x0.0p+0f);
                                            math_711380_alt1(
                                                (__int64*)(v5 + 200));
                                            if ((nerd_gyro_pointing_GyroPointingKalmanFilter_TestParameterStates_plt_alt1(
                                                     v5 + 200) &
                                                 1) != 0) {
                                              if ((signed __int64)v1011[0] <
                                                  *(__int64*)(v5 + 15424)) {
                                                goto LABEL_310;
                                              }
                                            }
                                            else {
                                              nerd_gyro_pointing_GyroPointingCore_Recover_plt_alt1(
                                                  v5, false);
                                              if ((signed __int64)v1011[0] <
                                                  *(__int64*)(v5 + 15424)) {
                                              LABEL_310:
                                                this_ =
                                                    nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState_plt_alt1(
                                                        v5 + 200);
                                                if ((_DWORD)this_ == 2) {
                                                  goto LABEL_311;
                                                }
                                                goto LABEL_315;
                                              }
                                            }
                                            nerd_gyro_pointing_GyroPointingKalmanFilter_PushParameterState_plt_alt1(
                                                v5 + 200);
                                            v675 = *(_QWORD*)(v5 + 15432);
                                            *(_QWORD*)(v5 + 15424) += v675;
                                            *(_QWORD*)(v5 + 15432) = 2 * v675;
                                            this_ =
                                                nerd_gyro_pointing_GyroPointingKalmanFilter_GetIntegrityState_plt_alt1(
                                                    v5 + 200);
                                            if ((_DWORD)this_ == 2) {
                                            LABEL_311:
                                              v674 =
                                                  v804 + *(float*)(v5 + 15004);
                                              *(float*)(v5 + 15004) = v674;
                                              if (v674 >
                                                  0x1.0000000000000p-1f) {
                                                return nerd_gyro_pointing_GyroPointingCore_Recover_plt_alt1(
                                                    v5, true);
                                              }
                                              return this_;
                                            }
                                          LABEL_315:
                                            *(_DWORD*)(v5 + 15004) = 0;
                                            return this_;
                                          }
                                        LABEL_243:
                                          v421 = -1;
                                          goto LABEL_244;
                                        }
                                      }
                                      v417 = -1;
                                      v418 = *(float*)&v900;
                                      v419 = v898;
                                      if (v898 != 0) {
                                        goto LABEL_240;
                                      }
                                      goto LABEL_243;
                                    }
                                    v360 = BYTE5(v1012);
                                    v952 = nullptr;
                                    v951 = 0;
                                    v950 = 0;
                                    v949 = nullptr;
                                    if ((v1012 & 0x10000000000LL) != 0) {
                                      v361 = 1;
                                      v952 = (_QWORD*)(((char*)0x0LL) + 1);
                                      if ((v1012 & 0x20000000000LL) == 0) {
                                        goto LABEL_207;
                                      }
                                    }
                                    else {
                                      v361 = 0;
                                      v203 = (__int64*)&v949;
                                      if ((v1012 & 0x20000000000LL) == 0) {
                                      LABEL_207:
                                        if ((v360 & 4) != 0) {
                                          (&v949)[v361] =
                                              (_QWORD*)(((char*)0x0LL) + 2);
                                          v361 = (unsigned __int64)v952 + 1;
                                          v952 = (__int64*)((char*)v952 + 1);
                                        }
                                        v362 = 0x1.99999a0000000p-4f;
                                        v363 = *(_QWORD*)(v292 + 24);
                                        v364 = *(_QWORD*)(v292 + 32);
                                        v892 = *(_QWORD*)(v292 + 16);
                                        v893 = v363;
                                        if (v804 <= 0x1.99999a0000000p-4f) {
                                          v362 = v804;
                                        }
                                        v894 = v364;
                                        v365 = 0x1.2dfd6a0000000p-19f / v362;
                                        v366 = *(float*)v292;
                                        v367 = *(float*)(v292 + 4);
                                        *((float*)&v820_.v820 + 1) =
                                            0x1.2dfd6a0000000p-17f / v362;
                                        v368 = *(float*)(v292 + 8);
                                        *(float*)&v820_.v820 = v365;
                                        *(float*)&v820_.v821 = v365;
                                        v840 = 1065353216;
                                        v841 = 0;
                                        v842 = 1065353216;
                                        v843 = nullptr;
                                        LODWORD(v844) = 1065353216;
                                        *(_QWORD*)&v905[8] = v361;
                                        *(float*)&v814_.v814 = v366 + 0x0.0p+0f;
                                        *((float*)&v814_.v814 + 1) =
                                            v367 + 0x0.0p+0f;
                                        *(float*)&v814_.v815 = v368 + 0x0.0p+0f;
                                        if (v361 != 0) {
                                          *(_QWORD*)v905 = 0;
                                          v904 = 0;
                                          memset_plt_alt2((__int64)&v904, 0,
                                                          4 * v361);
                                          if (*(_QWORD*)&v905[8] != 0) {
                                            v369 = 0;
                                            do {
                                              *(_DWORD*)&v905[4 * v369 - 8] =
                                                  *((_DWORD*)&v814_.v814 +
                                                    (_QWORD)(&v949)[v369]);
                                              ++v369;
                                            } while (v369 < *(_QWORD*)&v905[8]);
                                            v938 = *(_QWORD*)&v905[8];
                                            if (*(_QWORD*)&v905[8] != 0) {
                                              memcpy_plt_alt1(
                                                  (__int64)&v936,
                                                  (__int64)&v904,
                                                  4LL * *(_QWORD*)&v905[8]);
                                            }
                                          }
                                          else {
                                            v938 = 0;
                                          }
                                          v370 = v361 & 3;
                                          v371 = 0;
                                          v904 = v361;
                                          memset(v905, 0, 40);
                                          if (v361 >= 4) {
                                            v372 = 0;
                                            v373 = &v905[24];
                                            v374 = &v951;
                                            do {
                                              v372 -= 4;
                                              v375 = (char*)&v840 +
                                                     12 * *(v374 - 2);
                                              v376 = (char*)&v840 +
                                                     12 * *(v374 - 1);
                                              v377 = *(_QWORD*)v375;
                                              LODWORD(v375) =
                                                  *((_DWORD*)v375 + 2);
                                              *((_QWORD*)v373 - 3) = v377;
                                              v378 = *(_QWORD*)v376;
                                              *((_DWORD*)v373 - 4) =
                                                  (_DWORD)v375;
                                              LODWORD(v376) =
                                                  *((_DWORD*)v376 + 2);
                                              *(_QWORD*)(v373 - 12) = v378;
                                              v379 = *v374;
                                              v380 = v374[1];
                                              v374 += 4;
                                              *((_DWORD*)v373 - 1) =
                                                  (_DWORD)v376;
                                              v381 = (char*)&v840 + 12 * v379;
                                              v382 = *(_QWORD*)v381;
                                              *((_DWORD*)v373 + 2) =
                                                  *((_DWORD*)v381 + 2);
                                              v383 = (char*)&v840 + 12 * v380;
                                              *(_QWORD*)v373 = v382;
                                              v384 = *(_QWORD*)v383;
                                              *((_DWORD*)v373 + 5) =
                                                  *((_DWORD*)v383 + 2);
                                              *(_QWORD*)(v373 + 12) = v384;
                                              v373 += 48;
                                            } while (
                                                -(__int64)(v361 &
                                                           0xFFFFFFFFFFFFFFFCLL) !=
                                                v372);
                                            v371 = -v372;
                                          }
                                          if ((v361 & 3) != 0) {
                                            v385 = (__int64*)&(&v949)[v371];
                                            v386 = &v905[12 * v371];
                                            do {
                                              v387 = *v385++;
                                              --v370;
                                              v388 = (char*)&v840 + 12 * v387;
                                              v389 = *(_QWORD*)v388;
                                              LODWORD(v388) =
                                                  *((_DWORD*)v388 + 2);
                                              *(_QWORD*)v386 = v389;
                                              *((_DWORD*)v386 + 2) =
                                                  (_DWORD)v388;
                                              v386 += 12;
                                            } while (v370 != 0);
                                          }
                                          v390 = *(_QWORD*)&v905[8];
                                          *(_QWORD*)&v905[8] = v361;
                                          v868 = v390;
                                          v869 = *(_OWORD*)&v905[16];
                                          v870 = *(_QWORD*)&v905[32];
                                          v391 = v904;
                                          v392 = *(_QWORD*)v905;
                                          v904 = 0;
                                          *(_QWORD*)v905 = 0;
                                          v867[0] = v391;
                                          v867[1] = v392;
                                          memset_plt_alt2((__int64)&v904, 0,
                                                          4 * v361);
                                          if (*(_QWORD*)&v905[8] != 0) {
                                            v393 = 0;
                                            do {
                                              *(_DWORD*)&v905[4 * v393 - 8] =
                                                  *((_DWORD*)&v820_.v820 +
                                                    (_QWORD)(&v949)[v393]);
                                              ++v393;
                                            } while (v393 < *(_QWORD*)&v905[8]);
                                            v833_.v833 = *(_QWORD*)&v905[8];
                                            if (*(_QWORD*)&v905[8] != 0) {
                                              memcpy_plt_alt1(
                                                  (__int64)&v831_.v831,
                                                  (__int64)&v904,
                                                  4LL * *(_QWORD*)&v905[8]);
                                              memset(&v905[8], 0, 40);
                                              v904 = v833_.v833;
                                              *(_QWORD*)v905 = v833_.v833;
                                              if (v833_.v833 != 0) {
                                                v394 = v833_.v833 & 7;
                                                if (v833_.v833 >= 8) {
                                                  v676 = 0;
                                                  v677 = &v833_.v833;
                                                  v678 = -(
                                                      __int64)(v833_.v833 &
                                                               0xFFFFFFFFFFFFFFF8LL);
                                                  v679 = &v905[56];
                                                  do {
                                                    v680 = *((_DWORD*)v677 - 3);
                                                    v676 -= 8;
                                                    *(v679 - 12) =
                                                        *((_DWORD*)v677 - 4);
                                                    *(v679 - 8) = v680;
                                                    v681 = *((_DWORD*)v677 - 1);
                                                    *(v679 - 4) =
                                                        *((_DWORD*)v677 - 2);
                                                    *(_DWORD*)v679 = v681;
                                                    v682 = *((_DWORD*)v677 + 1);
                                                    v679[4] = *(_DWORD*)v677;
                                                    v679[8] = v682;
                                                    v683 = *((_DWORD*)v677 + 2);
                                                    v684 = *((_DWORD*)v677 + 3);
                                                    v677 += 4;
                                                    v679[12] = v683;
                                                    v679[16] = v684;
                                                    v679 += 32;
                                                  } while (v678 != v676);
                                                  v395 = -v676;
                                                }
                                                else {
                                                  v395 = 0;
                                                }
                                                if (v394 != 0) {
                                                  v685 = &v905[16 * v395 - 8];
                                                  v686 =
                                                      (int*)&v831_.v831 + v395;
                                                  v687 = v685 + 16;
                                                  do {
                                                    v688 = *v686++;
                                                    --v394;
                                                    *(_DWORD*)v687 = v688;
                                                    v687 += 4;
                                                  } while (v394 != 0);
                                                }
                                              }
                                              goto LABEL_236;
                                            }
                                          }
                                        }
                                        else {
                                          v938 = 0;
                                          v867[0] = 0;
                                          v867[1] = 0;
                                          v868 = 0;
                                          v869 = (__typeof__(v869)){0};
                                          v870 = 0;
                                        }
                                        memset(v905, 0, 48);
                                        v904 = 0;
                                      LABEL_236:
                                        qmemcpy(v1017, &v905[8], 40);
                                        v1016[0] = v904;
                                        v1016[1] = *(_QWORD*)v905;
                                        SdkRoutine_879fe0_alt1(
                                            v5 + 200, (__int64)&v936,
                                            (__int64)v867, (__int64)v1016,
                                            (__int64)&v892,
                                            0x1.99999a0000000p-4f);
                                        goto LABEL_237;
                                      }
                                    }
                                    ++v361;
                                    *v203 = 1;
                                    v952 = (__int64*)v361;
                                    goto LABEL_207;
                                  }
                                LABEL_123:
                                  v205 = -1;
                                  goto LABEL_124;
                                }
                              }
                              v200 = -1;
                              v201 = *(float*)(v5 + 0x2000);
                              v202 = v34 * v34;
                              v203 = &v950;
                              if (v154 != 0) {
                                goto LABEL_120;
                              }
                              goto LABEL_123;
                            }
                            v191 = 0x0.0p+0f;
                            v192 = 0;
                            v190 = v167;
                          }
                          v193 = v154 + 16LL * *(_QWORD*)(v154 + 4096);
                          *(_BYTE*)(v193 + 4) = v190;
                          *(_BYTE*)(v193 + 5) = v192;
                          *(float*)(v193 + 12) = v191;
                          v194 = *(_QWORD*)(v154 + 4096);
                          *(_DWORD*)(v193 + 8) = 1065353216;
                          *(_QWORD*)(v154 + 4096) = v194 + 1;
                          goto LABEL_117;
                        }
                        v179 = 0x0.0p+0f;
                        v180 = 0;
                        v178 = v165;
                      LABEL_106:
                        v181 = v144 + 16LL * *(_QWORD*)(v144 + 4096);
                        *(_BYTE*)(v181 + 4) = v178;
                        *(_BYTE*)(v181 + 5) = v180;
                        *(float*)(v181 + 12) = v179;
                        *(_DWORD*)(v181 + 8) = 1065353216;
                        v182 = *(_QWORD*)(v144 + 4096);
                        *(_QWORD*)(v144 + 4096) = v182 + 1;
                        goto LABEL_107;
                      }
                      v170 = 0;
                      v169 = 0x0.0p+0f;
                    LABEL_96:
                      v171 = v139 + 16LL * *(_QWORD*)(v139 + 4096);
                      *(_BYTE*)(v171 + 4) = v163;
                      *(_BYTE*)(v171 + 5) = v170;
                      *(float*)(v171 + 12) = v169;
                      *(_DWORD*)(v171 + 8) = 1065353216;
                      v172 = *(_QWORD*)(v139 + 4096);
                      *(_QWORD*)(v139 + 4096) = v172 + 1;
                      v173 = v739;
                      v174 = v142 - v143;
                      v175 = 0x0.0p+0f - v138;
                      v176 = v152 - v153;
                      if (v739 != 0) {
                        goto LABEL_97;
                      }
                      goto LABEL_104;
                    }
                    v156 = v1017[5];
                    v159 = 0x0.0p+0f;
                    v157 = -0x1.0000000000000p+0f;
                    v158 = 0;
                    v154 = v155;
                  LABEL_80:
                    v160 = v154 + 16LL * *(_QWORD*)(v154 + 4096);
                    *(_BYTE*)(v160 + 4) = v156;
                    *(_BYTE*)(v160 + 5) = v158;
                    *(float*)(v160 + 8) = v157;
                    *(float*)(v160 + 12) = v159;
                    v161 = *(_QWORD*)(v154 + 4096);
                    *(_QWORD*)(v154 + 4096) = v161 + 1;
                    if (v139 != 0) {
                      goto LABEL_81;
                    }
                    goto LABEL_91;
                  }
                  v146 = v1017[2];
                  v149 = 0x0.0p+0f;
                  v147 = -0x1.0000000000000p+0f;
                  v148 = 0;
                  v144 = v145;
                LABEL_73:
                  v150 = v144 + 16LL * *(_QWORD*)(v144 + 4096);
                  *(_BYTE*)(v150 + 4) = v146;
                  *(_BYTE*)(v150 + 5) = v148;
                  *(float*)(v150 + 8) = v147;
                  *(float*)(v150 + 12) = v149;
                  v151 = *(_QWORD*)(v144 + 4096);
                  *(_QWORD*)(v144 + 4096) = v151 + 1;
                  v152 = *(float*)&v833_.v839;
                  v153 = *(float*)&v1018;
                  v154 = v833_.v837;
                  v155 = v1017[4];
                  if (v833_.v837 != 0) {
                    goto LABEL_74;
                  }
                  goto LABEL_78;
                }
                LOBYTE(v110) = v725;
                v133 = 0x0.0p+0f;
                v135 = -0x1.0000000000000p+0f;
                v134 = 0;
                v108 = v91;
              }
              v136 = &v108[2 * v108[512]];
              *((_BYTE*)v136 + 4) = v110;
              *((_BYTE*)v136 + 5) = v134;
              *((float*)v136 + 2) = v135;
              *((float*)v136 + 3) = v133;
              v137 = v108[512];
              v108[512] = v137 + 1;
              goto LABEL_63;
            }
            v123 = 0x0.0p+0f;
            v125 = -0x1.0000000000000p+0f;
            v124 = 0;
            v104 = v89;
            LOBYTE(v106) = v96;
          LABEL_52:
            v126 = &v104[2 * v104[512]];
            *((_BYTE*)v126 + 4) = v106;
            *((_BYTE*)v126 + 5) = v124;
            *((float*)v126 + 2) = v125;
            *((float*)v126 + 3) = v123;
            v127 = v104[512];
            v104[512] = v127 + 1;
            goto LABEL_53;
          }
        }
        LOBYTE(v106) = -1;
        v107 = *(float*)&v935;
        v108 = v933;
        if (v933 != nullptr) {
          goto LABEL_29;
        }
        goto LABEL_32;
      }
    }
    LOBYTE(v96) = -1;
    v97 = *(float*)(v5 + 8272);
    if (v91 != nullptr) {
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  return this_;
}

float nerd_gyro_pointing_GyroPointingCore_UpdateFusedGyroBiasEstimate(
    __int64 a1, float* a2)
{
  float v2;
  float v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  __int64* v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  _DWORD v27[9];
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v2 = a2[24];
  v4 = a2[23] - *(float*)(a1 + 8416);
  v5 = *(float*)(a1 + 8420);
  v6 = *(_QWORD*)(a1 + 8440);
  v7 = *(float*)(a1 + 8424);
  v28 = *(_QWORD*)(a1 + 8432);
  v29 = v6;
  v30 = *(_QWORD*)(a1 + 8448);
  v8 = v2 - v5;
  v9 = a2[25] - v7;
  v28 = *(_QWORD*)fw_math_LookupStateIndex_alt1(a1 + 4584, &v28);
  v29 = *(_QWORD*)fw_math_LookupStateIndex_alt1(a1 + 4584, &v29);
  v10 = (__int64*)fw_math_LookupStateIndex_alt1(a1 + 4584, &v30);
  v11 = *v10;
  v12 = *(_DWORD*)(a1 + 216 + 4 * (33 * v28 + v29));
  v13 = *(_DWORD*)(a1 + 216 + 4 * (33 * v28 + *v10));
  v14 = *(_DWORD*)(a1 + 216 + 4 * (33 * v29 + *v10));
  v15 = *(_DWORD*)(a1 + 216 + 4 * (33 * v29 + v28));
  v27[0] = *(_DWORD*)(a1 + 216 + 136 * v28);
  v27[1] = v12;
  v16 = *(_DWORD*)(a1 + 216 + 136 * v11);
  v17 = *(_DWORD*)(a1 + 216 + 136 * v29);
  v18 = *(_DWORD*)(a1 + 216 + 4 * (v28 + 33 * v11));
  v19 = *(_DWORD*)(a1 + 216 + 4 * (v29 + 33 * v11));
  v27[2] = v13;
  v27[3] = v15;
  v27[8] = v16;
  v27[4] = v17;
  v27[5] = v14;
  v27[6] = v18;
  v27[7] = v19;
  v20 = nerd_gyro_pointing_GyroPointingCore_GetFusedGyroBiasEstimate_plt(
      v27, v4, v8, v9);
  v21 = *(float*)(a1 + 8420);
  *(float*)(a1 + 15408) = *(float*)(a1 + 8416) + v20;
  v23 = v22 + v21;
  v24 = *(float*)(a1 + 8424);
  *(float*)(a1 + 15412) = v23;
  *(float*)(a1 + 15416) = v25 + v24;
  return v25 + v24;
}

void nerd_gyro_pointing_GyroPointingCore_UpdateStableOrientation(
    float* a1, float a2, float a3, float a4, float a5)
{
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
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
  float v48;
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

  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  v10 =
      nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated_plt(),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  v11 = a1[3823];
  v12 = a1[3824];
  v13 = a1[3825];
  v14 = a1[3826];
  v17 = (float)(PSEUDO_UNFUSED(v14 * v16)) + (float)(PSEUDO_UNFUSED(v15 * v12));
  v18 = (float)(PSEUDO_UNFUSED(v14 * v10)) + (float)(PSEUDO_UNFUSED(v15 * v11));
  v20 = -(float)((float)((float)((float)((float)(v10 * v11) + 0x0.0p+0f) +
                                 (float)(v16 * v12)) +
                         (float)(v19 * v13)) -
                 (float)(v15 * v14));
  v21 = (float)(PSEUDO_UNFUSED(v14 * v19)) + (float)(PSEUDO_UNFUSED(v15 * v13));
  v22 = (float)(v16 * v13) - (float)(PSEUDO_UNFUSED(v12 * v19));
  v23 = -(float)(v13 * v10);
  v24 = v18 + v22;
  v25 = (float)((float)(v10 * v12) - (float)(PSEUDO_UNFUSED(v11 * v16))) + v21;
  v26 = v17 + (float)(v23 + (float)(v19 * v11));
  v27 = a2 - a1[3852];
  v28 = a4 - a1[3854];
  v29 = a3 - a1[3853];
  v30 = (float)(a1[2117] * v27) + 0x0.0p+0f;
  v31 = (float)((float)((float)(a1[2114] * v27) + 0x0.0p+0f) +
                (float)(a1[2115] * v29)) +
        (float)(a1[2116] * v28);
  v32 = (float)((float)((float)(a1[2120] * v27) + 0x0.0p+0f) +
                (float)(a1[2121] * v29)) +
        (float)(a1[2122] * v28);
  v33 = (float)(v30 + (float)(a1[2118] * v29)) + (float)(a1[2119] * v28);
  v34 = a1[3101];
  v35 = a5 * v31;
  v36 = a5 * v32;
  v37 = a1[3100];
  v38 = a5 * v33;
  v39 = a1[3102];
  v40 = a1[3103];
  v41 = 0x1.0000000000000p+0f /
        (float)((float)((float)((float)(PSEUDO_UNFUSED(v37 * v37)) +
                                (float)(PSEUDO_UNFUSED(v34 * v34))) +
                        (float)(PSEUDO_UNFUSED(v39 * v39))) +
                (float)(PSEUDO_UNFUSED(v40 * v40)));
  v42 = -(float)(v41 * v37);
  v43 = -(float)(v41 * v34);
  v44 = -(float)(v41 * v39);
  v45 = v40 * v41;
  v46 = -(float)((float)((float)((float)((float)(v42 * v24) + 0x0.0p+0f) +
                                 (float)(v43 * v26)) +
                         (float)(v44 * v25)) -
                 (float)(v45 * v20));
  v47 = (float)((float)(PSEUDO_UNFUSED(v20 * v42)) +
                (float)(PSEUDO_UNFUSED(v24 * v45))) +
        (float)((float)(v43 * v25) - (float)(PSEUDO_UNFUSED(v26 * v44)));
  v48 = (float)((float)(PSEUDO_UNFUSED(v20 * v43)) +
                (float)(PSEUDO_UNFUSED(v26 * v45))) +
        (float)((float)(v44 * v24) - (float)(PSEUDO_UNFUSED(v25 * v42)));
  v49 = (float)((float)(v42 * v26) - (float)(PSEUDO_UNFUSED(v24 * v43))) +
        (float)((float)(PSEUDO_UNFUSED(v20 * v44)) +
                (float)(PSEUDO_UNFUSED(v25 * v45)));
  if (v46 < 0x0.0p+0f) {
    v47 = -v47;
    v48 = -v48;
    v49 = -v49;
    v46 = -v46;
  }
  v50 = sqrtf((float)((float)(PSEUDO_UNFUSED(v49 * v49)) +
                      (float)((float)(PSEUDO_UNFUSED(v48 * v48)) +
                              (float)(PSEUDO_UNFUSED(v47 * v47)))) +
              0x1.0000000000000p-126f);
  v51 = atan2f_plt(v50, v46),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  v52 = v51 + v51;
  v53 = (float)(v51 + v51) * (float)(v47 / v50);
  v54 = v52 * (float)(v48 / v50);
  v55 = v52 * (float)(v49 / v50);
  v56 = (float)((float)(PSEUDO_UNFUSED(v35 * v35)) +
                (float)(PSEUDO_UNFUSED(v38 * v38))) +
        (float)(PSEUDO_UNFUSED(v36 * v36));
  if ((float)((float)(PSEUDO_UNFUSED(v55 * v55)) +
              (float)((float)(PSEUDO_UNFUSED(v53 * v53)) +
                      (float)(PSEUDO_UNFUSED(v54 * v54)))) != 0x0.0p+0f &&
      v56 != 0x0.0p+0f) {
    v57 = sqrtf(v56) + (float)(a5 * -0x1.47ae140000000p-7f);
    if (v57 > 0x0.0p+0f) {
      v58 = (float)((float)((float)((float)(v53 * v35) + 0x0.0p+0f) +
                            (float)(v54 * v38)) +
                    (float)(v55 * v36)) /
            v56;
      v59 = v36 * v58;
      v60 = v38 * v58;
      v61 = v35 * v58;
      v62 = (float)(v57 * 0x1.99999a0000000p-4f) /
            sqrtf((float)(PSEUDO_UNFUSED(v59 * v59)) +
                  (float)((float)(PSEUDO_UNFUSED(v61 * v61)) +
                          (float)(PSEUDO_UNFUSED(v60 * v60))));
      if (v62 > 0x1.0000000000000p+0f) {
        v62 = 0x1.0000000000000p+0f;
      }
      v63 = v60 * v62;
      v64 = v59 * v62;
      v87 = v61 * v62;
      v65 = sqrtf((float)((float)(PSEUDO_UNFUSED(v64 * v64)) +
                          (float)((float)(PSEUDO_UNFUSED(v87 * v87)) +
                                  (float)(PSEUDO_UNFUSED(v63 * v63)))) +
                  0x1.0000000000000p-126f) *
            0x1.0000000000000p-1f;
      if ((float)(v65 * v65) <= 0x1.47ae140000000p-5f) {
        v66 =
            (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v65 *
                                                                                            v65) *
                                                                                    -0x1.ae64560000000p-26f) +
                                                                            0x1.71de3a0000000p-19f) *
                                                                    (float)(v65 *
                                                                            v65)) +
                                                            -0x1.a01a020000000p-13f) *
                                                    (float)(v65 * v65)) +
                                            0x1.1111120000000p-7f) *
                                    (float)(v65 * v65)) +
                            -0x1.5555560000000p-3f) *
                    (float)(v65 * v65)) +
            0x1.0000000000000p+0f;
      }
      else {
        v66 = sinf_plt(v65) / v65,
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      v67 = v66 * 0x1.0000000000000p-1f;
      v68 = cosf_plt(v65),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
      v69 = a1[3100];
      v70 = a1[3101];
      v71 = a1[3102];
      v72 = a1[3103];
      a1[3103] =
          -(float)((float)((float)((float)((float)(v69 * (float)(v87 * v67)) +
                                           0x0.0p+0f) +
                                   (float)(v70 * (float)(v63 * v67))) +
                           (float)(v71 * (float)(v64 * v67))) -
                   (float)(v72 * v68));
      a1[3100] = (float)((float)(PSEUDO_UNFUSED(v72 * (float)(v87 * v67))) +
                         (float)(PSEUDO_UNFUSED(v68 * v69))) +
                 (float)((float)(v70 * (float)(v64 * v67)) -
                         (float)(PSEUDO_UNFUSED((float)(v63 * v67) * v71)));
      a1[3101] = (float)((float)(PSEUDO_UNFUSED(v72 * (float)(v63 * v67))) +
                         (float)(PSEUDO_UNFUSED(v68 * v70))) +
                 (float)((float)(v71 * (float)(v87 * v67)) -
                         (float)(PSEUDO_UNFUSED((float)(v64 * v67) * v69)));
      a1[3102] = (float)((float)(v69 * (float)(v63 * v67)) -
                         (float)(PSEUDO_UNFUSED((float)(v87 * v67) * v70))) +
                 (float)((float)(PSEUDO_UNFUSED(v72 * (float)(v64 * v67))) +
                         (float)(PSEUDO_UNFUSED(v68 * v71)));
    }
  }
  v73 = sqrtf(v56 + 0x1.0000000000000p-126f) * 0x1.0000000000000p-1f;
  if ((float)(v73 * v73) <= 0x1.47ae140000000p-5f) {
    v74 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v73 *
                                                                                        v73) *
                                                                                -0x1.ae64560000000p-26f) +
                                                                        0x1.71de3a0000000p-19f) *
                                                                (float)(v73 *
                                                                        v73)) +
                                                        -0x1.a01a020000000p-13f) *
                                                (float)(v73 * v73)) +
                                        0x1.1111120000000p-7f) *
                                (float)(v73 * v73)) +
                        -0x1.5555560000000p-3f) *
                (float)(v73 * v73)) +
        0x1.0000000000000p+0f;
  }
  else {
    v74 = sinf_plt(v73) / v73,
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v75 = v74 * 0x1.0000000000000p-1f;
  v76 = cosf_plt(v73),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s3", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w"));
  v77 = a1[3100];
  v78 = a1[3101];
  v79 = a1[3102];
  v80 = a1[3103];
  v81 = -(float)((float)((float)((float)((float)(v77 * (float)(v35 * v75)) +
                                         0x0.0p+0f) +
                                 (float)(v78 * (float)(v38 * v75))) +
                         (float)(v79 * (float)(v36 * v75))) -
                 (float)(v80 * v76));
  a1[3103] = v81;
  v82 = (float)((float)(PSEUDO_UNFUSED(v80 * (float)(v35 * v75))) +
                (float)(PSEUDO_UNFUSED(v76 * v77))) +
        (float)((float)(v78 * (float)(v36 * v75)) -
                (float)(PSEUDO_UNFUSED((float)(v38 * v75) * v79)));
  v83 = (float)((float)(PSEUDO_UNFUSED(v80 * (float)(v38 * v75))) +
                (float)(PSEUDO_UNFUSED(v76 * v78))) +
        (float)((float)(v79 * (float)(v35 * v75)) -
                (float)(PSEUDO_UNFUSED((float)(v36 * v75) * v77)));
  v84 = (float)((float)(v77 * (float)(v38 * v75)) -
                (float)(PSEUDO_UNFUSED((float)(v35 * v75) * v78))) +
        (float)((float)(PSEUDO_UNFUSED(v80 * (float)(v36 * v75))) +
                (float)(PSEUDO_UNFUSED(v76 * v79)));
  a1[3100] = v82;
  a1[3101] = v83;
  a1[3102] = v84;
  v85 = (float)(PSEUDO_UNFUSED(v81 * v81)) +
        (float)((float)(PSEUDO_UNFUSED(v84 * v84)) +
                (float)((float)(PSEUDO_UNFUSED(v83 * v83)) +
                        (float)(PSEUDO_UNFUSED(v82 * v82))));
  if (v85 != 0x0.0p+0f) {
    v86 = 0x1.0000000000000p+0f / sqrtf(v85);
    a1[3102] = v84 * v86;
    a1[3100] = v82 * v86;
    a1[3101] = v83 * v86;
    a1[3103] = v81 * v86;
  }
}

__int64 nerd_gyro_pointing_GyroPointingCore_Recover(void* this_, char a2)
{
  float v4;
  int v5;
  int v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 result;
  unsigned __int64 v12;
  __int64 v13;
  float v14;
  unsigned __int64 v15;
  float v16;
  unsigned __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  int v42;

  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
  ++*((_QWORD*)this_ + 1945);
  v4 =
      nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated_plt(),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
  v6 = v5;
  v8 = v7;
  v10 = v9;
  result =
      nerd_gyro_pointing_GyroPointingKalmanFilter_ResetVelocityAndParameters_plt(
          (char*)this_ + 200),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
  v12 = *((_QWORD*)this_ + 1905);
  if (v12 != 0) {
    if ((*((_BYTE*)this_ + 12392) & 1) == 0) {
      nn_codec_hwacod_32f020(),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
    }
    v13 = *((_QWORD*)this_ + 1876);
    v14 = (float)(*((_QWORD*)this_ + 1548) - v13);
    v15 = *((_QWORD*)this_ + 1907);
    v16 = *((float*)this_ + 3817);
    if ((float)(v16 * (float)(v14 / 0x1.dcd6500000000p+29f)) >=
        *((float*)this_ + 3816)) {
      v17 = *((_QWORD*)this_ + 1906);
      v19 = 0;
    }
    else {
      v17 = *((_QWORD*)this_ + 1906);
      v18 = v16 * v14;
      v19 = v12 - 1;
      if (v12 <= v15) {
        v20 = 0;
      }
      else {
        v20 = *((_QWORD*)this_ + 1906);
      }
      v21 = v20 + v15;
      v22 = (char*)this_ + 56 * (v20 + v15) - 56 * v12 + 15072;
      v23 = v21 - v12;
      v24 = 1;
      while (v12 != v24) {
        v25 = v23 + v24++;
        if (v25 >= v17) {
          v26 = *((_QWORD*)this_ + 1906);
        }
        else {
          v26 = 0;
        }
        v27 = *(_QWORD*)&v22[-56 * v26];
        v22 += 56;
        if (v18 <= (float)(v27 - v13)) {
          v19 = v24 - 2;
          break;
        }
      }
    }
    v28 = v12 > v15;
    v29 = v19 - v12;
    v42 = 0;
    v41 = 0;
    if (v28) {
      v30 = v17;
    }
    else {
      v30 = 0;
    }
    v31 = v29 + v15 + v30;
    if (v31 >= v17) {
      v32 = v17;
    }
    else {
      v32 = 0;
    }
    v33 = (char*)this_ + 56 * (v31 - v32) + 15016;
    *((_QWORD*)this_ + 1052) = *((_QWORD*)v33 + 1);
    *((_DWORD*)this_ + 2106) = *((_DWORD*)v33 + 4);
    result = SdkRoutine_879f50((char*)this_ + 200, &v42, &v41,
                               (char*)this_ + 8432, v33 + 20),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
  }
  if (fabs(v4) > 0x1.fffffe0000000p+127f || (v6 & 0x7FFFFFFFu) > 0x7F7FFFFF ||
      fabs(v8) > 0x1.fffffe0000000p+127f ||
      fabs(v10) > 0x1.fffffe0000000p+127f ||
      (*((_DWORD*)this_ + 2056) & 0x7FFFFFFFu) > 0x7F7FFFFF ||
      (*((_DWORD*)this_ + 2057) & 0x7FFFFFFFu) > 0x7F7FFFFF ||
      (*((_DWORD*)this_ + 2058) & 0x7FFFFFFFu) > 0x7F7FFFFF ||
      (*((_DWORD*)this_ + 2059) & 0x7FFFFFFFu) > 0x7F7FFFFF) {
    return nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration_plt(
        this_);
  }
  if ((a2 & 1) != 0) {
    v34 = 0x1.0000000000000p+0f / (float)((float)(PSEUDO_UNFUSED(v8 * v8)) +
                                          (float)(PSEUDO_UNFUSED(v10 * v10)));
    v35 = v8 * v34;
    v36 = v10 * v34;
    result =
        nerd_gyro_pointing_GyroPointingCore_InitializeOrientationFromAcceleration_plt(
            this_),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s2", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s3", "=w"));
    v37 = *((float*)this_ + 2056);
    v38 = *((float*)this_ + 2057);
    v39 = *((float*)this_ + 2059);
    v40 = *((float*)this_ + 2058);
    *((float*)this_ + 2059) =
        -(float)((float)((float)((float)((float)(v37 * 0x0.0p+0f) + 0x0.0p+0f) +
                                 (float)(v38 * 0x0.0p+0f)) +
                         (float)(v35 * v40)) -
                 (float)(v36 * v39));
    *((float*)this_ + 2056) =
        (float)((float)(PSEUDO_UNFUSED(v39 * 0x0.0p+0f)) +
                (float)(PSEUDO_UNFUSED(v36 * v37))) +
        (float)((float)(v40 * 0x0.0p+0f) - (float)(PSEUDO_UNFUSED(v38 * v35)));
    *((float*)this_ + 2057) =
        (float)((float)(PSEUDO_UNFUSED(v39 * 0x0.0p+0f)) +
                (float)(PSEUDO_UNFUSED(v36 * v38))) +
        (float)((float)(PSEUDO_UNFUSED(v40 * -0x0.0p+0f)) + (float)(v35 * v37));
    *((float*)this_ + 2058) =
        (float)((float)(PSEUDO_UNFUSED(v37 * -0x0.0p+0f)) +
                (float)(v38 * 0x0.0p+0f)) +
        (float)((float)(PSEUDO_UNFUSED(v35 * v39)) +
                (float)(PSEUDO_UNFUSED(v36 * v40)));
  }
  return result;
}

float nerd_gyro_pointing_GyroPointingCore_GetHeuristicOrientationWithoutAccumulated(
    void* this_)
{
  unsigned __int64 v1;
  char* v3;
  unsigned __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64* v21;
  float v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  bool v34;
  float v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
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
  float v79;
  float v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  struct {
    unsigned __int64 v86;
    char gap96_[88];
    float v87;
    float v88;
  } v86_;

  v1 = *((_QWORD*)this_ + 1055);
  v84 = *((_QWORD*)this_ + 1054);
  v85 = v1;
  v86_.v86 = *((_QWORD*)this_ + 1056);
  v84 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v84);
  v85 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v85);
  v3 = (char*)this_ + 216;
  v4 = *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573,
                                 (__int64*)&v86_.v86);
  v5 = *((float*)this_ + 3852);
  v6 = *((float*)this_ + 3854);
  v7 = *((float*)this_ + 2106);
  v86_.v87 = *((float*)this_ + 2104);
  v86_.v88 = v5;
  v8 = *((float*)this_ + 34 * v84 + 54);
  v9 = *((float*)this_ + 33 * v85 + v84 + 54);
  v79 = *((float*)this_ + 2105);
  v80 = *((float*)this_ + 3853);
  v10 = *((float*)this_ + 34 * v85 + 54);
  v11 = *((float*)this_ + 34 * v4 + 54);
  v12 = *((float*)this_ + 33 * v4 + v84 + 54);
  v13 = *((float*)this_ + 33 * v4 + v85 + 54);
  v14 = *((_QWORD*)this_ + 1031);
  v84 = *((_QWORD*)this_ + 1030);
  v85 = v14;
  v86_.v86 = *((_QWORD*)this_ + 1032);
  v84 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v84);
  v85 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v85);
  v15 = *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573,
                                  (__int64*)&v86_.v86);
  v16 = *((_QWORD*)this_ + 1056);
  v17 = *((_QWORD*)this_ + 1055);
  v18 = *((_QWORD*)this_ + 1054);
  v86_.v86 = v15;
  v19 = v84;
  v20 = v85;
  v82 = v17;
  v83 = v16;
  v81 = v18;
  v81 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v81);
  v82 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v82);
  v21 = fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, &v83);
  v22 = 0x0.0p+0f;
  v23 = *v21;
  v24 = 33 * v19;
  v25 = 33 * v20;
  v26 = 33 * v15;
  if (v8 >= 0x0.0p+0f) {
    v27 = v8;
  }
  else {
    v27 = 0x0.0p+0f;
  }
  v28 = sqrtf(v27);
  if (v10 >= 0x0.0p+0f) {
    v29 = v10;
  }
  else {
    v29 = 0x0.0p+0f;
  }
  if (v11 >= 0x0.0p+0f) {
    v30 = v11;
  }
  else {
    v30 = 0x0.0p+0f;
  }
  v31 = 0x1.0000000000000p+0f / v28;
  if (v27 == 0x0.0p+0f) {
    v32 = 0x0.0p+0f;
  }
  else {
    v32 = 0x1.0000000000000p+0f / v28;
  }
  v33 = v32 * v9;
  if (v29 >= (float)(v33 * v33)) {
    v22 = v29 - (float)(PSEUDO_UNFUSED(v33 * v33));
  }
  else {
    v34 = v33 <= 0x0.0p+0f;
    v33 = sqrtf(v29);
    if (v34) {
      v33 = -v33;
    }
  }
  v35 = v32 * v12;
  v36 = v81 + v24;
  v37 = v82 + v24;
  v38 = v23 + v24;
  v39 = v81 + v25;
  v40 = v82 + v25;
  v41 = v23 + v25;
  v42 = v23 + v26;
  if (v30 >= (float)(v35 * v35)) {
    v44 = v30 - (float)(PSEUDO_UNFUSED(v35 * v35));
  }
  else {
    v43 = sqrtf(v30);
    v44 = 0x0.0p+0f;
    if (v35 <= 0x0.0p+0f) {
      v35 = -v43;
    }
    else {
      v35 = v43;
    }
  }
  v45 = sqrtf(v22);
  if (v45 == 0x0.0p+0f) {
    v50 = 0x0.0p+0f;
    v51 = 0x0.0p+0f * (float)(v13 - (float)(v35 * v33));
    v52 = v51 * v51;
    if (v44 < (float)(v51 * v51)) {
      goto LABEL_25;
    }
  LABEL_29:
    v54 = sqrtf(v44 - v52);
    goto LABEL_30;
  }
  v50 = 0x1.0000000000000p+0f / v45;
  v51 =
      (float)(0x1.0000000000000p+0f / v45) * (float)(v13 - (float)(v35 * v33));
  v52 = v51 * v51;
  if (v44 >= (float)(v51 * v51)) {
    goto LABEL_29;
  }
LABEL_25:
  v53 = sqrtf(v44);
  if (v51 <= 0x0.0p+0f) {
    v51 = -v53;
  }
  else {
    v51 = v53;
  }
  v54 = sqrtf(0x0.0p+0f);
LABEL_30:
  if (v27 == 0x0.0p+0f) {
    v55 = 0x0.0p+0f;
  }
  else {
    v55 = v31;
  }
  v56 = v86_.v88 - v86_.v87;
  v57 = -(float)((float)((float)(v33 * v55) + 0x0.0p+0f) * v50);
  v58 = 0x0.0p+0f;
  v59 = v80 - v79;
  v60 = v6 - v7;
  if (v54 != 0x0.0p+0f) {
    v58 = 0x1.0000000000000p+0f / v54;
  }
  v61 = (float)((float)(v35 * v55) + 0x0.0p+0f) + (float)(v51 * v57);
  v62 = (float)(PSEUDO_UNFUSED(v55 * v55)) + (float)(PSEUDO_UNFUSED(v57 * v57));
  v63 = -(float)((float)((float)(v51 * v50) + 0x0.0p+0f) * v58);
  v64 = -(float)(v61 * v58);
  v65 = v63 * v63;
  v66 = v64 * v64;
  v67 = (float)((float)(v57 * v50) + 0x0.0p+0f) + (float)(v64 * v63);
  v68 = (float)(v64 * v58) + 0x0.0p+0f;
  v69 = (float)(v63 * v58) + 0x0.0p+0f;
  v70 = v58 * v58;
  v71 = v62 + v66;
  v72 = (float)(PSEUDO_UNFUSED(v50 * v50)) + v65;
  v46 = *(float*)&v3[4 * v36];
  v73 =
      (float)((float)((float)((float)((float)((float)((float)(v46 * v71) +
                                                      0x0.0p+0f) +
                                              (float)(*(float*)&v3[4 * v37] *
                                                      v67)) +
                                      (float)(*(float*)&v3[4 * v38] * v68)) *
                              v56) +
                      0x0.0p+0f) +
              (float)((float)((float)((float)((float)(v46 * v67) + 0x0.0p+0f) +
                                      (float)(*(float*)&v3[4 * v37] * v72)) +
                              (float)(*(float*)&v3[4 * v38] * v69)) *
                      v59)) +
      (float)((float)((float)((float)((float)(v46 * v68) + 0x0.0p+0f) +
                              (float)(*(float*)&v3[4 * v37] * v69)) +
                      (float)(*(float*)&v3[4 * v38] * v70)) *
              v60);
  v47 = *(float*)&v3[4 * v40];
  v74 = (float)((float)((float)((float)((float)((float)((float)(*(float*)&v3
                                                                    [4 * v39] *
                                                                v71) +
                                                        0x0.0p+0f) +
                                                (float)(v47 * v67)) +
                                        (float)(*(float*)&v3[4 * v41] * v68)) *
                                v56) +
                        0x0.0p+0f) +
                (float)((float)((float)((float)((float)(*(float*)&v3[4 * v39] *
                                                        v67) +
                                                0x0.0p+0f) +
                                        (float)(v47 * v72)) +
                                (float)(*(float*)&v3[4 * v41] * v69)) *
                        v59)) +
        (float)((float)((float)((float)((float)(*(float*)&v3[4 * v39] * v68) +
                                        0x0.0p+0f) +
                                (float)(v47 * v69)) +
                        (float)(*(float*)&v3[4 * v41] * v70)) *
                v60);
  v49 = *(float*)&v3[4 * v42];
  v48 = *(float*)&v3[4 * v81 + 4 * v26];
  v75 =
      (float)((float)((float)((float)((float)((float)((float)(v48 * v71) +
                                                      0x0.0p+0f) +
                                              (float)(*(float*)&v3[4 * v82 +
                                                                   4 * v26] *
                                                      v67)) +
                                      (float)(v49 * v68)) *
                              v56) +
                      0x0.0p+0f) +
              (float)((float)((float)((float)((float)(v48 * v67) + 0x0.0p+0f) +
                                      (float)(*(float*)&v3[4 * v82 + 4 * v26] *
                                              v72)) +
                              (float)(v49 * v69)) *
                      v59)) +
      (float)((float)((float)((float)((float)(v48 * v68) + 0x0.0p+0f) +
                              (float)(*(float*)&v3[4 * v82 + 4 * v26] * v69)) +
                      (float)(v49 * v70)) *
              v60);
  v76 = sqrtf((float)((float)(PSEUDO_UNFUSED(v75 * v75)) +
                      (float)((float)(PSEUDO_UNFUSED(v73 * v73)) +
                              (float)(PSEUDO_UNFUSED(v74 * v74)))) +
              0x1.0000000000000p-126f) *
        0x1.0000000000000p-1f;
  if ((float)(v76 * v76) <= 0x1.47ae140000000p-5f) {
    v77 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v76 *
                                                                                        v76) *
                                                                                -0x1.ae64560000000p-26f) +
                                                                        0x1.71de3a0000000p-19f) *
                                                                (float)(v76 *
                                                                        v76)) +
                                                        -0x1.a01a020000000p-13f) *
                                                (float)(v76 * v76)) +
                                        0x1.1111120000000p-7f) *
                                (float)(v76 * v76)) +
                        -0x1.5555560000000p-3f) *
                (float)(v76 * v76)) +
        0x1.0000000000000p+0f;
  }
  else {
    v77 = sinf_plt(v76) / v76;
  }
  return (float)((float)(PSEUDO_UNFUSED(
                     (float)(v73 * (float)(v77 * 0x1.0000000000000p-1f)) *
                     *((float*)this_ + 2059))) +
                 (float)(PSEUDO_UNFUSED(cosf_plt(v76) *
                                        *((float*)this_ + 2056)))) +
         (float)((float)((float)(v74 * (float)(v77 * 0x1.0000000000000p-1f)) *
                         *((float*)this_ + 2058)) -
                 (float)(PSEUDO_UNFUSED(
                     *((float*)this_ + 2057) *
                     (float)(v75 * (float)(v77 * 0x1.0000000000000p-1f)))));
}

__int64 nerd_gyro_pointing_GyroPointingCore_GetFusedGyroBiasEstimate(__int64 a1,
                                                                     float a2,
                                                                     float a3,
                                                                     float a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v9;
  __int64 result;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    float v29;
    float v30;
    float v31;
  } v29_;
  struct {
    _QWORD v32[4];
    int v33;
  } v32_;
  struct {
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    float v38;
  } v34_;
  _DWORD v39[2];

  v4 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  v25 = 0;
  v27 = 0;
  v34_.v38 = 0x0.0p+0f;
  v34_.v36 = 0;
  v34_.v37 = 0;
  v34_.v34 = 0;
  v34_.v35 = 0;
  v32_.v32[2] = v4;
  v32_.v32[3] = v5;
  v32_.v33 = *(_DWORD*)(a1 + 32);
  v9 = *(_QWORD*)(a1 + 8);
  v32_.v32[0] = *(_QWORD*)a1;
  v32_.v32[1] = v9;
  v26 = 0x3F80000000000000LL;
  v28 = 0x3F80000000000000LL;
  v24 = 0x1.0000000000000p+0f;
  SdkRoutine_87a1e0((void*)(&v34_.v34), v32_.v32, &v24);
  v29_.v29 = *(float*)&v34_.v34;
  v29_.v30 = *(float*)&v34_.v36;
  v29_.v31 = v34_.v38;
  v39[0] = HIDWORD(v34_.v35);
  v39[1] = HIDWORD(v34_.v37);
  result = SdkRoutine_87a1f0(3, &v29_.v29, v39, 3, 3, 1, &v24);
  v11 = 0x1.0000000000000p+0f / v29_.v29;
  v12 = 0x1.0000000000000p+0f / v29_.v30;
  v13 = (float)((float)((float)(v24 * a2) + 0x0.0p+0f) +
                (float)(*(float*)&v26 * a3)) +
        (float)(*((float*)&v27 + 1) * a4);
  v14 = 0x1.0000000000000p+0f / v29_.v31;
  v15 = (float)((float)((float)(*(float*)&v25 * a2) + 0x0.0p+0f) +
                (float)(*((float*)&v26 + 1) * a3)) +
        (float)(*(float*)&v28 * a4);
  v16 = (float)((float)((float)(*((float*)&v25 + 1) * a2) + 0x0.0p+0f) +
                (float)(*(float*)&v27 * a3)) +
        (float)(*((float*)&v28 + 1) * a4);
  v17 =
      (float)((float)((float)(v13 * (float)((float)(0x1.0000000000000p+0f /
                                                    v29_.v29) *
                                            v13)) +
                      0x0.0p+0f) +
              (float)(v15 * (float)((float)(0x1.0000000000000p+0f / v29_.v30) *
                                    v15))) +
      (float)(v16 * (float)((float)(0x1.0000000000000p+0f / v29_.v31) * v16));
  if (v17 > 0x1.8000000000000p+2f) {
    v18 = 0x1.0000000000000p+0f /
          (float)((float)((float)(v11 + 0x0.0p+0f) + v12) + v14);
    if (v18 > 0x0.0p+0f) {
      v19 = 0x1.8000000000000p+2f / (float)(v17 / 0x1.8000000000000p+2f);
      while (1) {
        v20 = v18;
        if (fabs(v18) > 0x1.fffffe0000000p+127f) {
          break;
        }
        v21 =
            (float)((float)((float)(v13 *
                                    (float)(v13 *
                                            (float)(v11 /
                                                    (float)((float)((float)(PSEUDO_UNFUSED(
                                                                        v11 *
                                                                        v18)) +
                                                                    0x1.0000000000000p+0f) *
                                                            (float)((float)(PSEUDO_UNFUSED(
                                                                        v11 *
                                                                        v18)) +
                                                                    0x1.0000000000000p+0f))))) +
                            0x0.0p+0f) +
                    (float)(v15 *
                            (float)(v15 *
                                    (float)(v12 /
                                            (float)((float)((float)(PSEUDO_UNFUSED(
                                                                v12 * v18)) +
                                                            0x1.0000000000000p+0f) *
                                                    (float)((float)(PSEUDO_UNFUSED(
                                                                v12 * v18)) +
                                                            0x1.0000000000000p+0f)))))) +
            (float)(v16 *
                    (float)(v16 *
                            (float)(v14 /
                                    (float)((float)((float)(PSEUDO_UNFUSED(
                                                        v14 * v18)) +
                                                    0x1.0000000000000p+0f) *
                                            (float)((float)(PSEUDO_UNFUSED(
                                                        v14 * v18)) +
                                                    0x1.0000000000000p+0f)))));
        v18 = v18 + v18;
        if (v21 <= v19) {
          v22 = (float)(v20 + 0x0.0p+0f) * 0x1.0000000000000p-1f;
          if (COERCE_INT(fabs(v22)) <= 2139095039) {
            v23 = 0x0.0p+0f;
            do {
              if (v22 <= v23 || v22 >= v20) {
                break;
              }
              if ((float)((float)((float)((float)(v13 *
                                                  (float)(v13 *
                                                          (float)(v11 /
                                                                  (float)((float)((float)(PSEUDO_UNFUSED(
                                                                                      v11 *
                                                                                      v22)) +
                                                                                  0x1.0000000000000p+0f) *
                                                                          (float)((float)(PSEUDO_UNFUSED(
                                                                                      v11 *
                                                                                      v22)) +
                                                                                  0x1.0000000000000p+0f))))) +
                                          0x0.0p+0f) +
                                  (float)(v15 *
                                          (float)(v15 *
                                                  (float)(v12 /
                                                          (float)((float)((float)(PSEUDO_UNFUSED(
                                                                              v12 *
                                                                              v22)) +
                                                                          0x1.0000000000000p+0f) *
                                                                  (float)((float)(PSEUDO_UNFUSED(
                                                                              v12 *
                                                                              v22)) +
                                                                          0x1.0000000000000p+0f)))))) +
                          (float)(v16 *
                                  (float)(v16 *
                                          (float)(v14 /
                                                  (float)((float)((float)(PSEUDO_UNFUSED(
                                                                      v14 *
                                                                      v22)) +
                                                                  0x1.0000000000000p+0f) *
                                                          (float)((float)(PSEUDO_UNFUSED(
                                                                      v14 *
                                                                      v22)) +
                                                                  0x1.0000000000000p+0f)))))) <=
                  v19) {
                v20 = v22;
              }
              else {
                v23 = v22;
              }
              v22 = (float)(v20 + v23) * 0x1.0000000000000p-1f;
            } while (COERCE_INT(fabs(v22)) <= 2139095039);
          }
          return result;
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_GyroPointingCore_GetStateStd(PSEUDO_X8 x8_, void* this_)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  unsigned __int64 v5;
  float v6;
  float v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  float v11;
  float v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  float v36;
  float v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64* result;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  __int64 v48[9];
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  struct {
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
  } v54_;

  *(_DWORD*)(a2 + 116) = 0;
  *(_QWORD*)(a2 + 108) = 0;
  v3 = *((_QWORD*)this_ + 1026);
  *(_QWORD*)(a2 + 100) = 0;
  *(_QWORD*)(a2 + 92) = 0;
  *(_QWORD*)(a2 + 84) = 0;
  v49 = *((_QWORD*)this_ + 1025);
  v50 = v3;
  v51 = *((_QWORD*)this_ + 1027);
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v5 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v6 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v7 = sqrtf(*((float*)this_ + 34 * v5 + 54));
  v8 = *((_QWORD*)this_ + 1030);
  v9 = *((_QWORD*)this_ + 1031);
  *(float*)a2 = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 4) = v6;
  *(float*)(a2 + 8) = v7;
  v49 = v8;
  v50 = v9;
  v51 = *((_QWORD*)this_ + 1032);
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v10 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v11 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v12 = sqrtf(*((float*)this_ + 34 * v10 + 54));
  v13 = *((_QWORD*)this_ + 1035);
  v14 = *((_QWORD*)this_ + 1036);
  *(float*)(a2 + 12) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 16) = v11;
  *(float*)(a2 + 20) = v12;
  v49 = v13;
  v50 = v14;
  v51 = *((_QWORD*)this_ + 1037);
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v15 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v16 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v17 = sqrtf(*((float*)this_ + 34 * v15 + 54));
  v18 = *((_QWORD*)this_ + 1049);
  v19 = *((_QWORD*)this_ + 1050);
  v20 = *((_QWORD*)this_ + 1048);
  v21 = *((_QWORD*)this_ + 1044);
  v22 = *((_QWORD*)this_ + 1051);
  *(float*)(a2 + 24) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 28) = v16;
  *(float*)(a2 + 32) = v17;
  v54_.v56 = 0;
  v54_.v57 = 0;
  v54_.v54 = 0;
  v54_.v55 = 0;
  v52 = 0;
  v53 = 0;
  v50 = 0;
  v51 = 0;
  v49 = 0;
  v48[6] = v18;
  v48[7] = v19;
  v23 = *((_QWORD*)this_ + 1045);
  v24 = *((_QWORD*)this_ + 1046);
  v48[8] = v22;
  v48[2] = v23;
  v48[3] = v24;
  v48[4] = *((_QWORD*)this_ + 1047);
  v48[5] = v20;
  v48[0] = *((_QWORD*)this_ + 1043);
  v48[1] = v21;
  fw_math_MapStateIndices9((void*)((__int64*)&v49),
                           (unsigned __int64*)this_ + 573, v48);
  v25 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v26 = sqrtf(*((float*)this_ + 34 * v51 + 54));
  v27 = sqrtf(*((float*)this_ + 34 * v52 + 54));
  v28 = sqrtf(*((float*)this_ + 34 * v53 + 54));
  v29 = sqrtf(*((float*)this_ + 34 * v54_.v54 + 54));
  v30 = sqrtf(*((float*)this_ + 34 * v54_.v55 + 54));
  v31 = sqrtf(*((float*)this_ + 34 * v54_.v56 + 54));
  v32 = sqrtf(*((float*)this_ + 34 * v54_.v57 + 54));
  v33 = *((_QWORD*)this_ + 1054);
  v34 = *((_QWORD*)this_ + 1055);
  *(float*)(a2 + 36) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 40) = v25;
  *(float*)(a2 + 44) = v26;
  *(float*)(a2 + 48) = v27;
  *(float*)(a2 + 52) = v28;
  *(float*)(a2 + 56) = v29;
  *(float*)(a2 + 60) = v30;
  *(float*)(a2 + 64) = v31;
  *(float*)(a2 + 68) = v32;
  v49 = v33;
  v50 = v34;
  v51 = *((_QWORD*)this_ + 1056);
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v35 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v36 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v37 = sqrtf(*((float*)this_ + 34 * v35 + 54));
  v38 = *((_QWORD*)this_ + 1064);
  v39 = *((_QWORD*)this_ + 1065);
  *(float*)(a2 + 72) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 76) = v36;
  *(float*)(a2 + 80) = v37;
  v51 = v38;
  v52 = v39;
  v40 = *((_QWORD*)this_ + 1067);
  v53 = *((_QWORD*)this_ + 1066);
  v54_.v54 = v40;
  v41 = *((_QWORD*)this_ + 1063);
  v49 = *((_QWORD*)this_ + 1062);
  v50 = v41;
  v49 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v49);
  v50 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v50);
  v51 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v51);
  v52 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v52);
  v53 =
      *fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, (__int64*)&v53);
  result = fw_math_LookupStateIndex((unsigned __int64*)this_ + 573, &v54_.v54);
  v43 = sqrtf(*((float*)this_ + 34 * v50 + 54));
  v44 = sqrtf(*((float*)this_ + 34 * v51 + 54));
  v45 = sqrtf(*((float*)this_ + 34 * v52 + 54));
  v46 = sqrtf(*((float*)this_ + 34 * v53 + 54));
  v47 = sqrtf(*((float*)this_ + 34 * *result + 54));
  *(float*)(a2 + 84) = sqrtf(*((float*)this_ + 34 * v49 + 54));
  *(float*)(a2 + 88) = v43;
  *(float*)(a2 + 92) = v44;
  *(float*)(a2 + 96) = v43;
  *(float*)(a2 + 100) = v45;
  *(float*)(a2 + 104) = v46;
  *(float*)(a2 + 108) = v44;
  *(float*)(a2 + 112) = v46;
  *(float*)(a2 + 116) = v47;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_GyroPointingCore_GetStateUniqueStd(PSEUDO_X8 x8_,
                                                      void* this_)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  float result;
  int v21;
  struct {
    __int64 v22;
    int v23;
    int v24;
    float v25;
    int v26;
  } v22_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)(a2 + 116) = 0;
  *(_QWORD*)(a2 + 108) = 0;
  *(_QWORD*)(a2 + 100) = 0;
  *(_QWORD*)(a2 + 92) = 0;
  *(_QWORD*)(a2 + 84) = 0;
  *(_QWORD*)(a2 + 76) = 0;
  *(_QWORD*)(a2 + 68) = 0;
  *(_QWORD*)(a2 + 60) = 0;
  *(_QWORD*)(a2 + 52) = 0;
  *(_QWORD*)(a2 + 44) = 0;
  *(_QWORD*)(a2 + 36) = 0;
  SdkRoutine_717820((_QWORD*)this_ + 25, (__int64*)this_ + 1025),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)a2 = v4;
  *(_DWORD*)(a2 + 4) = v5;
  *(_DWORD*)(a2 + 8) = v6;
  SdkRoutine_717820((_QWORD*)this_ + 25, (__int64*)this_ + 1030),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)(a2 + 12) = v7;
  *(_DWORD*)(a2 + 16) = v8;
  *(_DWORD*)(a2 + 20) = v9;
  SdkRoutine_717820((_QWORD*)this_ + 25, (__int64*)this_ + 1035),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)(a2 + 24) = v10;
  *(_DWORD*)(a2 + 28) = v11;
  *(_DWORD*)(a2 + 32) = v12;
  SdkRoutine_719ca0((void*)((float*)(a2 + 36)), (_QWORD*)this_ + 25,
                    (__int64*)this_ + 1043),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  SdkRoutine_717820((_QWORD*)this_ + 25, (__int64*)this_ + 1054),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  *(_DWORD*)(a2 + 72) = v13;
  *(_DWORD*)(a2 + 76) = v14;
  *(_DWORD*)(a2 + 80) = v15;
  math_71d560((void*)((float*)&v22_.v22), (_QWORD*)this_ + 25,
              (__int64*)this_ + 1062),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s2", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s1", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  v16 = HIDWORD(v22_.v22);
  v17 = v22_.v23;
  v18 = v22_.v24;
  *(_QWORD*)(a2 + 84) = v22_.v22;
  v19 = v22_.v23;
  *(_DWORD*)(a2 + 96) = v16;
  *(_DWORD*)(a2 + 100) = v18;
  result = v22_.v25;
  v21 = v22_.v26;
  *(_DWORD*)(a2 + 92) = v19;
  *(float*)(a2 + 104) = result;
  *(_DWORD*)(a2 + 108) = v17;
  *(float*)(a2 + 112) = result;
  *(_DWORD*)(a2 + 116) = v21;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_GyroPointingCore_StoreParameters(PSEUDO_X8 x8_, void* this_,
                                                    __int64 unused_int1,
                                                    __int64 unused_int2,
                                                    unsigned __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v37[21];
  __int64 v38[21];

  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset_plt_alt1((void*)(a3 + 96), nullptr, 1764, a2),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v5 = *((_QWORD*)this_ + 1033);
  v6 = *((_QWORD*)this_ + 1039);
  v7 = *((_QWORD*)this_ + 1040);
  v8 = *((_QWORD*)this_ + 1041);
  v9 = *((_DWORD*)this_ + 2084);
  v10 = *((_QWORD*)this_ + 1038);
  v11 = *((_DWORD*)this_ + 2068);
  v12 = *((_QWORD*)this_ + 1036);
  v13 = *((_QWORD*)this_ + 1065);
  v14 = *((_QWORD*)this_ + 1066);
  v15 = *((_QWORD*)this_ + 1067);
  v16 = *((_QWORD*)this_ + 1035);
  memset(v38, 0, sizeof(v38));
  *(_QWORD*)(a3 + 48) = v5;
  v17 = *((_QWORD*)this_ + 1052);
  *(_QWORD*)(a3 + 68) = v6;
  v18 = *((_QWORD*)this_ + 1055);
  *(_QWORD*)(a3 + 76) = v7;
  *(_QWORD*)(a3 + 84) = v8;
  *(_DWORD*)(a3 + 92) = v9;
  *(_QWORD*)(a3 + 60) = v10;
  v19 = *((_QWORD*)this_ + 1056);
  v20 = *((_QWORD*)this_ + 1062);
  v21 = *((_QWORD*)this_ + 1063);
  v22 = *((_QWORD*)this_ + 1064);
  v37[6] = v13;
  v37[7] = v14;
  v37[8] = v15;
  v37[9] = v16;
  v23 = *((_QWORD*)this_ + 1048);
  v24 = *((_QWORD*)this_ + 1049);
  v25 = *((_QWORD*)this_ + 1050);
  *(_DWORD*)(a3 + 56) = v11;
  v26 = *((_DWORD*)this_ + 2106);
  *(_QWORD*)a3 = v17;
  v27 = *((_QWORD*)this_ + 1057);
  v37[2] = v19;
  v37[3] = v20;
  v37[4] = v21;
  v37[5] = v22;
  v28 = *((_QWORD*)this_ + 1044);
  v29 = *((_QWORD*)this_ + 1045);
  v30 = *((_QWORD*)this_ + 1046);
  v31 = *((_QWORD*)this_ + 1047);
  v37[18] = v24;
  v37[19] = v25;
  *(_DWORD*)(a3 + 8) = v26;
  *(_QWORD*)(a3 + 12) = v27;
  LODWORD(v27) = *((_DWORD*)this_ + 2122);
  v37[14] = v29;
  v37[15] = v30;
  v37[16] = v31;
  v37[17] = v23;
  *(_DWORD*)(a3 + 44) = v27;
  *(_QWORD*)(a3 + 36) = *((_QWORD*)this_ + 1060);
  *(_QWORD*)(a3 + 28) = *((_QWORD*)this_ + 1059);
  *(_QWORD*)(a3 + 20) = *((_QWORD*)this_ + 1058);
  v37[0] = *((_QWORD*)this_ + 1054);
  v37[1] = v18;
  v32 = *((_QWORD*)this_ + 1037);
  v33 = *((_QWORD*)this_ + 1043);
  v37[10] = v12;
  v37[11] = v32;
  v34 = *((_QWORD*)this_ + 1051);
  v37[12] = v33;
  v37[13] = v28;
  v37[20] = v34;
  fw_math_MapStateIndices21((void*)((__int64)v38),
                            (unsigned __int64*)this_ + 573, v37),
      v35 = COERCE_AS(__typeof__(v35),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  {
    X8CALL_X0(__int64, SdkRoutine_7202e0((void*)(a3 + 96), (__int64)this_ + 200,
                                         v38, v38, v35)),
        v35 = COERCE_AS(__typeof__(v35),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    return;
  }
}

__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeadingCovariance(void* this_)
{

#pragma clang fp contract(off)
  __int64 v1;
  float v3;
  float v4;
  float v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  struct {
    _QWORD v11[4];
    int v12;
  } v11_;
  _QWORD v13[3];
  __int128 v14;
  __int128 v15;
  __int128 v16;
  _QWORD v17[2];
  __int64 v18;
  __int64 v19;
  __int128 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[3];
  _QWORD v24[3];
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int128 v30;
  __int64 v31;
  int v32;

  v1 = *((_QWORD*)this_ + 1031);
  v24[2] = 0;
  v21 = 0;
  v22 = 0;
  v20 = (__typeof__(v20)){0};
  v18 = 0;
  v19 = 0;
  v17[0] = 0;
  v17[1] = 0;
  v24[0] = 0x3F80000000000000LL;
  v24[1] = 0;
  v26 = 0;
  v27 = 0;
  v25 = 1065353216;
  v28 = 1065353216;
  v23[0] = *((_QWORD*)this_ + 1030);
  v23[1] = v1;
  v23[2] = *((_QWORD*)this_ + 1032);
  math_724480((void*)((float*)&v29), (float*)v24);
  math_7241f0((void*)((float*)v17), (float*)&v29, (float*)this_ + 2056);
  v3 = *(float*)v17;
  v4 = *(float*)&v18;
  v5 = *(float*)&v20;
  v6 = v21;
  *(_QWORD*)((char*)&v20 + 4) = 0;
  DWORD3(v20) = 0;
  v16 = (__typeof__(v16)){0};
  v15 = (__typeof__(v15)){0};
  v14 = (__typeof__(v14)){0};
  *((_DWORD*)this_ + 2056) = v17[0];
  *((float*)this_ + 2057) = v4;
  *((float*)this_ + 2058) = v5;
  *((_DWORD*)this_ + 2059) = v6;
  *(float*)v11_.v11 = -v3;
  *((float*)v11_.v11 + 1) = -v4;
  *(float*)&v11_.v11[1] = -v5;
  HIDWORD(v11_.v11[1]) = v6;
  math_7241f0((void*)((float*)&v29), (float*)v17, (float*)v11_.v11);
  SdkRoutine_728730((void*)((float*)&v14), (float*)&v29);
  v7 = *((_QWORD*)this_ + 1031);
  v13[0] = *((_QWORD*)this_ + 1030);
  v13[1] = v7;
  v8 = *((_QWORD*)this_ + 1032);
  *(_QWORD*)((char*)&v30 + 4) = *(_QWORD*)((char*)&v15 + 4);
  v13[2] = v8;
  DWORD3(v30) = DWORD3(v15);
  LODWORD(v30) = DWORD3(v14);
  v11_.v12 = DWORD3(v16);
  v32 = 0;
  v9 = v30;
  v30 = (__typeof__(v30)){0};
  v29 = 0;
  v31 = 0;
  v11_.v11[3] = *(_QWORD*)((char*)&v16 + 4);
  v11_.v11[0] = *(_QWORD*)((char*)&v14 + 4);
  *(_OWORD*)&v11_.v11[1] = v9;
  return SdkRoutine_879fd0((char*)this_ + 200, v11_.v11, v23, v13, &v29);
}

__int64 nerd_gyro_pointing_GyroPointingCore_ResetHeading(__int64 result,
                                                         long double a2,
                                                         double a3, double a4,
                                                         long double a5)
{
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21[2];
  _QWORD v22[2];

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s3", "=w"));
  v22[0] = 0;
  v22[1] = 1065353216;
  v5 = (float)(PSEUDO_UNFUSED(*(float*)&a4 * *(float*)&a4)) +
       (float)((float)(PSEUDO_UNFUSED(*(float*)&a2 * *(float*)&a2)) +
               (float)(PSEUDO_UNFUSED(*(float*)&a3 * *(float*)&a3)));
  v6 = (float)(*(float*)&a3 +
               (float)((float)(*(float*)&a2 * 0x0.0p+0f) + 0x0.0p+0f)) +
       (float)(*(float*)&a4 * 0x0.0p+0f);
  v7 = (float)(PSEUDO_UNFUSED(*(float*)&a2 * v6)) +
       (float)(PSEUDO_UNFUSED(v5 * -0x0.0p+0f));
  v8 = (float)(PSEUDO_UNFUSED(*(float*)&a3 * v6)) - v5;
  v9 = *(float*)&a5 *
       (float)-(float)(*(float*)&a4 - (float)(*(float*)&a3 * 0x0.0p+0f));
  v10 = *(float*)&a5 *
        (float)((float)(PSEUDO_UNFUSED(*(float*)&a2 * -0x0.0p+0f)) +
                (float)(*(float*)&a4 * 0x0.0p+0f));
  v11 = 0x1.0000000000000p+1f /
        (float)((float)(PSEUDO_UNFUSED(*(float*)&a5 * *(float*)&a5)) + v5);
  LODWORD(a5) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  *(float*)&a3 = v11 * (float)(v9 + v7);
  *(float*)&a2 =
      (float)(PSEUDO_UNFUSED(v11 * (float)(v10 + v8))) + 0x1.0000000000000p+0f;
  v21[0] = *(float*)&a3 + 0x0.0p+0f;
  v21[1] = *(float*)&a2;
  if (*(float*)&a3 != 0x0.0p+0f || *(float*)&a2 != 0x0.0p+0f) {
    v12 = result;
    *(float*)&a4 = *(float*)&a3 + 0x0.0p+0f;
    v13 = SdkRoutine_712760(v21, (float*)v22 + 1, a2, a3, a4, a5),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s2", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s3", "=w"));
    v14 = *(float*)(v12 + 8224);
    v15 = *(float*)(v12 + 8228);
    v16 = *(float*)(v12 + 8232);
    v17 = *(float*)(v12 + 8236);
    *(float*)(v12 + 8236) =
        -(float)((float)((float)((float)((float)(v13 * v14) + 0x0.0p+0f) +
                                 (float)(v18 * v15)) +
                         (float)(v19 * v16)) -
                 (float)(v20 * v17));
    *(float*)(v12 + 8224) =
        (float)((float)(PSEUDO_UNFUSED(v17 * v13)) +
                (float)(PSEUDO_UNFUSED(v20 * v14))) +
        (float)((float)(v18 * v16) - (float)(PSEUDO_UNFUSED(v15 * v19)));
    *(float*)(v12 + 8228) =
        (float)((float)(PSEUDO_UNFUSED(v17 * v18)) +
                (float)(PSEUDO_UNFUSED(v20 * v15))) +
        (float)((float)(v19 * v14) - (float)(PSEUDO_UNFUSED(v16 * v13)));
    *(float*)(v12 + 8232) =
        (float)((float)(v13 * v15) - (float)(PSEUDO_UNFUSED(v14 * v18))) +
        (float)((float)(PSEUDO_UNFUSED(v17 * v19)) +
                (float)(PSEUDO_UNFUSED(v20 * v16)));
    *(_QWORD*)(v12 + 12400) = *(_QWORD*)(v12 + 8224);
    *(_QWORD*)(v12 + 12408) = *(_QWORD*)(v12 + 8232);
    return nerd_gyro_pointing_GyroPointingCore_ResetHeadingCovariance_plt(v12);
  }
  return result;
}

#pragma GCC visibility pop
