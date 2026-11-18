#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_109da60(PSEUDO_X8, float32x4_t*,
                                             float32x4_t*, int8x16_t result);
__attribute__((swiftcall)) void game_109e470(PSEUDO_X8, int32x2_t*, int32x2_t*,
                                             float);
__attribute__((swiftcall)) void math_Quat_Slerp(PSEUDO_X8, float32x4_t* result,
                                                float32x4_t*, float);
__int64 GameRoutine_1a09ff0();
__int64 GameRoutine_1a0a000();
__int64 MapOnMapInfo_16017e0(__int64 result, __int64);
__int64 ProcDeliveryAnimalMenu_171e560(__int64);
__int64 ProcDeliveryTransportMenu_171fd50(__int64);
__n64 GameRoutine_a6c440(float32x4_t*, __int128*, float32x4_t*);
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_21fdd18;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a5670;
extern __int128 GameData_21a61a0;
extern __int64 (*msg_ProjectFile_vtable[])();
extern __int64 GameData_212d270;
extern __int64 GameData_21ed080;
extern char GameData_2262bf8;
float GameRoutine_1a0a550(float, float);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void fs_6315e0(_QWORD*);
void llvm_libcxx_21_libcxx_include___functional_8096d0(__int64 a1, __int64* a2);
void llvm_libcxx_21_libcxx_include___functional_a532e0(_QWORD* a1);
void llvm_libcxx_21_libcxx_include___functional_10b8b50_alt1(__int64 a1,
                                                             __int64 a2,
                                                             __int64 a3);
__int64 llvm_libcxx_21_libcxx_include___functional_171ea10(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___functional_1720150(__int64 a1);
__attribute__((swiftcall)) void game_109e470_alt1(PSEUDO_X8, _QWORD, _QWORD,
                                                  float);
__int64 __cxa_guard_acquire_alt1(_QWORD, long double, long double, long double,
                                 long double, double);
__int64 __cxa_guard_release_alt1(_QWORD);
float GameRoutine_1a0a550_alt1(long double, float);
long double GameRoutine_1a09ff0_alt1(double, double);
long double GameRoutine_1a0a000_alt1(long double, long double);
void llvm_libcxx_21_libcxx_include___functional_10b8b50(
    __int64 a1, long double a2, long double a3, long double a4, long double a5,
    double a6, __int64 a7, int8x16_t** a8);

void llvm_libcxx_21_libcxx_include___functional_8096d0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  __n64 v13;
  float v14;
  float v15;
  bool v16;
  float v17;
  bool v18;
  float32x4_t v19;
  float32x4_t v20[4];
  _QWORD v21[8];

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *a2;
  (*(void (**)(__int64))(*(_QWORD*)(*a2 + 48) + 16LL))(*a2 + 48),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(_QWORD*)(a1 + 8);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_OWORD*)v21 = v5;
  *(_OWORD*)&v21[2] = v6;
  *(_OWORD*)&v21[4] = v7;
  *(_OWORD*)&v21[6] = v8;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v20[0] = v9;
  v20[1] = v10;
  v20[2] = v11;
  v20[3] = v12;
  LANES64(v13).n64_u64[0] =
      LANES64_OF(GameRoutine_a6c440(&v19, (__int128*)v21, v20)).n64_u64[0],
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v14 <= 0x0.0p+0f) {
    LANES64(v13).n64_f32[0] = LANES64(v13).n64_f32[0] + -0x1.e000000000000p+9f;
    LANES64(v13).n64_f32[1] = 0x1.0e00000000000p+9f - LANES64(v13).n64_f32[1];
  }
  v15 = fabsf(LANES64(v13).n64_f32[0]);
  v16 = v14 <= 0x0.0p+0f & v15 < 0x1.e000000000000p+9f;
  v17 = fabsf(LANES64(v13).n64_f32[1]);
  v18 = v16 && v17 < 0x1.0e00000000000p+9f;
  if (v18 && GameData_21ed080 != 0) {
    MapOnMapInfo_16017e0(GameData_21ed080, v2),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
}

void llvm_libcxx_21_libcxx_include___functional_a532e0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[100];
  *a1 = msg_ProjectFile_vtable;
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 != 0) {
    ((void (*)(__int64))GameData_21fdd18)(v3);
  }
  ((void (*)(__int64))GameData_21fdd18)(v1);
  fs_6315e0(a1);
}

void llvm_libcxx_21_libcxx_include___functional_10b8b50(
    __int64 a1, long double a2, long double a3, long double a4, long double a5,
    double a6, __int64 a7, int8x16_t** a8)
{
  __int64 v8;
  int32x4_t* v10;
  int8x16_t v11;
  int8x16_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  unsigned __int64 v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x2_t* v24;
  float32x4_t v25;
  float32x4_t v26;
  long double v27;
  long double v28;
  float v29;
  int v30;
  float v31;
  float v32;
  float v33;
  unsigned __int32 v34;
  int v35;
  bool v36;
  float32x4_t v37;
  int8x16_t v38;
  int8x16_t v39;
  float v40;
  float v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  int8x16_t v49;
  float v50;
  unsigned __int32 v51;
  float v52;
  float32x4_t v53;
  int8x16_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
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
  int8x16_t v72;
  int8x16_t v73;
  __int128 v74;
  unsigned __int32 v75;
  int8x16_t v76;
  int8x16_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  int8x16_t v83;
  float32x4_t v84;
  float32x4_t v85;
  int8x16_t v86;
  int8x16_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float v96;
  int32x4_t v97;
  int8x16_t v98;
  int8x16_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  int32x4_t v109;
  int32x4_t v110;
  int32x4_t v111;
  int8x16_t v112;
  int8x16_t v113;
  int8x16_t v114;
  float32x4_t v115;
  float32x4_t v116;
  unsigned __int64 v117;
  int8x16_t v118;
  float32x4_t v119;
  int8x16_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  int8x16_t v124;
  int8x16_t v125;
  float v126;
  float32x4_t v127;
  float32x4_t v128;
  int8x16_t v129;
  float32x4_t v130;
  float32x4_t v131;
  int8x16_t v132;
  float32x4_t v133;
  float v134;
  float v135;
  double v136;
  long double v137;
  long double v138;
  long double v139;
  long double v140;
  float32x4_t* v141;
  float v142;
  float32x4_t v143;
  int8x16_t v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t v147;
  int32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  int8x16_t v151;
  float32x4_t v152;
  float32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  int8x16_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  int8x16_t v160;
  float32x4_t v161;
  float v162;
  float v163;
  double v164;
  long double v165;
  long double v166;
  long double v167;
  long double v168;
  float32x4_t v169;
  int32x2_t v170;
  float v171;
  float v172;
  float v173;
  __int128 v174;
  float v175;
  float v176;
  float v177;
  __int64 v180;
  __int64 v183;
  int v184;
  __int64 v187;
  unsigned int v188;
  unsigned int v189;
  unsigned int v190;
  unsigned __int64 v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  int8x16_t v195;
  int8x16_t v196;
  int8x16_t v197;
  int8x16x2_t v198;
  int8x16x2_t v199;
  int8x16x2_t v200;
  int8x16x2_t v201;
  int8x16x2_t v202;
  int8x16x2_t v203;

  v8 = *(_QWORD*)(a1 + 8);
  LANES128(*(a8[2])).n128_u32[0] &= 0x33FFFFFFu;
  v10 = *a8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt1(&GameData_21a5680, a2, a3, a4, a5,
                                             a6) != 0) {
    v180 = *((_QWORD*)GameData_212c2f8 + 1);
    *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
    *((_QWORD*)&GameData_21a5670 + 1) = v180;
    __cxa_guard_release_alt1(&GameData_21a5680);
  }
  math_Quat_Slerp((void*)(&v197), (float32x4_t*)&GameData_21a5670,
                  (float32x4_t*)(v8 + 272), *(float*)(v8 + 480));
  v11 = vmulq_f32(v197, COERCE_AS(float32x4_t, GameData_1a829d0));
  v12 = vmulq_f32(v197, v197);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
          .n64_u64[0];
  LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
  v13 = vrecpeq_f32(v12);
  v14 = vmulq_f32(v13, vrecpsq_f32(v13, v12));
  v15 = vbslq_s8(vceqzq_f32(v12), v11,
                 vmulq_f32(v11, vmulq_f32(v14, vrecpsq_f32(v14, v12))));
  v200.val[1] = v15;
  LANES128(v200.val[1]).n128_u32[3] = 0;
  LANES128(v16).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v200.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v11).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v200.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v17 = LANES64_OF(
            vqtbl1_s8(v200.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v200.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v12).n128_u64[1] = LANES128(v16).n128_u64[1];
  LANES128(v11).n128_u64[1] = v17;
  v18 = vmulq_f32(v16, v200.val[1]);
  LANES128(v200.val[1]).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v200.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v19 = vmulq_f32(v12, v12);
  v198.val[1] = vmulq_f32(v11, v11);
  v20 = vaddq_f32(v18, v18);
  LANES128(v200.val[1]).n128_u64[1] = v17;
  v21 = vmulq_laneq_f32(v200.val[1], v15, 3);
  v198.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v198.val[1], v198.val[1]), vaddq_f32(v19, v19)));
  v22 = vaddq_f32(v21, v21);
  v202.val[0] = vaddq_f32(v20, v22);
  v202.val[1] = vsubq_f32(v20, v22);
  LANES128(v198.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v202, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  LANES128(v200.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v202, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v200.val[1]).n128_i8[8] =
      vqtbl2_s8(v202, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v198.val[1]).n128_i8[8] =
      vqtbl2_s8(v202, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v200.val[0] = v198.val[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v200, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl2_s8(v200, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v202.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v200, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v202.val[0]).n128_i8[8] =
      vqtbl2_s8(v200, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v200.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v198, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  v200.val[1] = v10[2];
  *(int8x8_t*)&LANES128(v200.val[0]).n128_i8[8] =
      vqtbl2_s8(v198, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
  v198.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v23, COERCE_FLOAT(*(_OWORD*)&v10[1])),
                     v202.val[0],
                     COERCE_AS(float32x2_t, LANES128(v10[1]).n128_u64[0]), 1),
      v200.val[0], v10[1], 2);
  *v10 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v23, COERCE_FLOAT(*v10)), v202.val[0],
                     COERCE_AS(float32x2_t, LANES128(*(v10)).n128_u64[0]), 1),
      v200.val[0], *v10, 2);
  v198.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(v23, LANES128(v200.val[1]).n128_f32[0]), v202.val[0],
          COERCE_AS(float32x2_t, LANES128(v200.val[1]).n128_u64[0]), 1),
      v200.val[0], v200.val[1], 2);
  *(int8x16x2_t*)LANES128(v10[1]).n128_u64 = v198;
  *(_QWORD*)(v8 + 368) = LANES128(v198.val[1]).n128_u64[0];
  v198.val[0] = *(int8x16_t*)(v8 + 368);
  v24 = *(float32x2_t**)(v8 + 320);
  LANES128(v198.val[0]).n128_u64[1] = LANES128(v198.val[1]).n128_u32[2];
  v198.val[1] = vmulq_f32(v198.val[0], v198.val[0]);
  LANES128(v198.val[1]).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v198.val[1], v198.val[1], 8u))
                                 .n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v198.val[1]).n128_u64[0])))
          .n64_u64[0];
  LANES128(v198.val[1]).n128_u64[0] =
      LANES64_OF(
          vpadd_f32(COERCE_AS(float32x2_t, LANES128(v198.val[1]).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v198.val[1]).n128_u64[0])))
          .n64_u64[0];
  LANES128(v198.val[1]).n128_u64[1] = LANES128(v198.val[1]).n128_u64[0];
  v200.val[0] = vrsqrteq_f32(v198.val[1]);
  v200.val[0] =
      vmulq_f32(v200.val[0],
                vrsqrtsq_f32(v200.val[0], vmulq_f32(v198.val[1], v200.val[0])));
  *(int8x16_t*)(v8 + 368) = vbicq_s8(
      vmulq_f32(v198.val[0],
                vmulq_f32(v200.val[0],
                          vrsqrtsq_f32(v200.val[0],
                                       vmulq_f32(v198.val[1], v200.val[0])))),
      vceqzq_f32(v198.val[1]));
  v198.val[0] = v10[3];
  *(_QWORD*)(v8 + 336) = LANES128(v198.val[0]).n128_u64[0];
  v198.val[1] = *(int8x16_t*)(v8 + 336);
  LANES128(v198.val[1]).n128_u64[1] = LANES128(v198.val[0]).n128_u32[2];
  *(int8x16_t*)(v8 + 336) = v198.val[1];
  v198.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(*v10, COERCE_FLOAT(*(_OWORD*)LANES64(v24[4]).n64_u64)),
          v10[1], v24[4], 1),
      v10[2], *(float32x4_t*)LANES64(v24[4]).n64_u64, 2);
  *(_QWORD*)(v8 + 352) = LANES128(v198.val[0]).n128_u64[0];
  v198.val[1] = *(int8x16_t*)(v8 + 352);
  LANES128(v198.val[1]).n128_u64[1] = LANES128(v198.val[0]).n128_u32[2];
  v198.val[0] = vmulq_f32(v198.val[1], v198.val[1]);
  LANES128(v198.val[0]).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v198.val[0], v198.val[0], 8u))
                                 .n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v198.val[0]).n128_u64[0])))
          .n64_u64[0];
  LANES128(v198.val[0]).n128_u64[0] =
      LANES64_OF(
          vpadd_f32(COERCE_AS(float32x2_t, LANES128(v198.val[0]).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v198.val[0]).n128_u64[0])))
          .n64_u64[0];
  LANES128(v198.val[0]).n128_u64[1] = LANES128(v198.val[0]).n128_u64[0];
  v200.val[0] = vrsqrteq_f32(v198.val[0]);
  v200.val[0] =
      vmulq_f32(v200.val[0],
                vrsqrtsq_f32(v200.val[0], vmulq_f32(v198.val[0], v200.val[0])));
  v25 = vrsqrtsq_f32(v200.val[0], vmulq_f32(v198.val[0], v200.val[0]));
  v26 = vmulq_f32(v200.val[0], v25);
  v28 = COERCE_LONG_DOUBLE(vmulq_f32(v198.val[1], v26));
  v27 =
      COERCE_LONG_DOUBLE(vbicq_s8(*(int8x16_t*)&v28, vceqzq_f32(v198.val[0])));
  LODWORD(v28) = *(_DWORD*)(v8 + 144);
  *(long double*)(v8 + 352) = v27;
  *(float*)&v27 = *(float*)(v8 + 156) * *(float*)&v28;
  LODWORD(v28) = *(_DWORD*)(v8 + 104);
  v29 = *(float*)&v27 * *(float*)&v28;
  if ((float)(*(float*)&v27 * *(float*)&v28) > 0x0.0p+0f &&
      (*(_BYTE*)(v8 + 16) & 1) != 0) {
    v30 = *(_DWORD*)(v8 + 432);
    if ((unsigned int)(v30 - 2) >= 2) {
      if (v30 != 0) {
        v37 = *(float32x4_t*)(v8 + 384);
      }
      else {
        *(_QWORD*)&v27 = 0;
        v40 = *(float*)(*(_QWORD*)GameData_212d270 + 504LL);
        if (v40 > 0x0.0p+0f) {
          LODWORD(v27) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
          if (v40 < 0x1.0000000000000p+0f) {
            v41 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v8 + 8) + 496LL) +
                                    16LL) *
                          0x1.0aef000000000p+4f) /
                  0x1.f400000000000p+9f;
            *(_QWORD*)&v27 = 0;
            if (v41 > 0x0.0p+0f) {
              *(float*)&v27 = 0x1.0000000000000p+0f - v40;
              *(float*)&v27 =
                  0x1.0000000000000p+0f -
                  GameRoutine_1a0a550_alt1(v27, v41 * 0x1.df851e0000000p+4f);
            }
          }
        }
        game_109da60((void*)(&v197), (float32x4_t*)(v8 + 384),
                     (float32x4_t*)(v8 + 352), *(int8x16_t*)&v27);
        v42 = v197;
        *(_DWORD*)(v8 + 436) = 0;
        *(_QWORD*)(v8 + 384) = LANES128(v42).n128_u64[0];
        v44 = *(float32x4_t*)(v8 + 368);
        v43 = *(float32x4_t*)(v8 + 384);
        LANES128(v43).n128_u64[1] = LANES128(v42).n128_u32[2];
        v45 = *(float32x4_t*)(v8 + 352);
        *(float32x4_t*)(v8 + 384) = v43;
        v46 = vsubq_f32(v43, v45);
        v47 = vsubq_f32(v44, v45);
        v48 = vmulq_f32(v46, v46);
        v49 = vmulq_f32(v47, v47);
        LANES128(v48).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
                .n64_u64[0];
        LANES128(v49).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v49, v49, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
                .n64_u64[0];
        LANES128(v49).n128_u64[0] =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]))))
                .n64_u64[0];
        PSEUDO_LOW_LANE128(
            v49, n128_f32,
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]))))
                    .n64_f32[0] /
                LANES128(v49).n128_f32[0]);
        v50 = 0x1.0000000000000p+0f;
        if (LANES128(v49).n128_f32[0] <= 0x1.0000000000000p+0f) {
          v50 = LANES128(v49).n128_f32[0];
        }
        if (LANES128(v49).n128_f32[0] >= 0x0.0p+0f) {
          PSEUDO_LOW_LANE128(v49, n128_f32, v50);
        }
        else {
          PSEUDO_LOW_LANE128(v49, n128_f32, 0x0.0p+0f);
        }
        game_109da60((void*)(&v197), (float32x4_t*)(v8 + 352),
                     (float32x4_t*)(v8 + 368), v49);
        v51 = LANES128(v197).n128_u32[2];
        *(_QWORD*)(v8 + 384) = LANES128(v197).n128_u64[0];
        v37 = *(float32x4_t*)(v8 + 384);
        LANES128(v37).n128_u64[1] = v51;
        *(float32x4_t*)(v8 + 384) = v37;
      }
    }
    else {
      v31 = 0x1.0000000000000p+1f;
      if (v30 == 3) {
        v31 = 0x1.4000000000000p+2f;
      }
      v32 = v31 * *(float*)(*(_QWORD*)GameData_212d270 + 504LL);
      *(_QWORD*)&v27 = 0;
      if (v32 > 0x0.0p+0f) {
        LODWORD(v27) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
        if (v32 < 0x1.0000000000000p+0f) {
          v33 =
              (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v8 + 8) + 496LL) + 16LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f;
          *(_QWORD*)&v27 = 0;
          if (v33 > 0x0.0p+0f) {
            *(float*)&v27 = 0x1.0000000000000p+0f - v32;
            *(float*)&v27 =
                0x1.0000000000000p+0f -
                GameRoutine_1a0a550_alt1(v27, v33 * 0x1.df851e0000000p+4f);
          }
        }
      }
      game_109da60((void*)(&v197), (float32x4_t*)(v8 + 384),
                   (float32x4_t*)(v8 + 352), *(int8x16_t*)&v27);
      v34 = LANES128(v197).n128_u32[2];
      v35 = *(_DWORD*)(v8 + 436);
      v36 = __OFSUB__(v35--, 1);
      *(_QWORD*)(v8 + 384) = LANES128(v197).n128_u64[0];
      *(_DWORD*)(v8 + 436) = v35;
      v37 = *(float32x4_t*)(v8 + 384);
      LANES128(v37).n128_u64[1] = v34;
      *(float32x4_t*)(v8 + 384) = v37;
      if ((v35 < 0) ^ v36 | (v35 == 0)) {
        v38 = vmulq_f32(v37, *(float32x4_t*)(v8 + 352));
        LANES128(v38).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
                .n64_f32[0] > 0x1.fffd320000000p-1f) {
          *(_DWORD*)(v8 + 432) = 0;
        }
      }
    }
    v52 = *(float*)(v8 + 492);
    v53 = vsubq_f32(*(float32x4_t*)(v8 + 128), *(float32x4_t*)(v8 + 336));
    v54 = vmulq_f32(v53, v53);
    LANES128(v54).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v54, v54, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0])))
            .n64_u64[0];
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0])))
            .n64_u64[0];
    LANES128(v54).n128_u64[1] = LANES128(v54).n128_u64[0];
    v55 = vrsqrteq_f32(v54);
    v56 = vmulq_f32(v55, vrsqrtsq_f32(v55, vmulq_f32(v54, v55)));
    v57 = vbicq_s8(
        vmulq_f32(v53, vmulq_f32(v56, vrsqrtsq_f32(v56, vmulq_f32(v54, v56)))),
        vceqzq_f32(v54));
    v58 = vmulq_f32(v37, v57);
    v197 = v57;
    LANES128(v58).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
            .n64_u64[0];
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v58).n128_f32[0] <= 0x1.0000000000000p+0f) {
      v59 = LANES128(v58).n128_f32[0];
    }
    else {
      v59 = 0x1.0000000000000p+0f;
    }
    if (LANES128(v58).n128_f32[0] >= -0x1.0000000000000p+0f) {
      v60 = v59;
    }
    else {
      v60 = -0x1.0000000000000p+0f;
    }
    v61 = sqrtf(0x1.0000000000000p+0f - (float)(v60 * v60));
    v62 = v52 * 0x1.1df46a0000000p-6f;
    if (v60 >= 0x0.0p+0f) {
      v65 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v66 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v67 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      v68 = v60 / v61;
      v69 = v61 / v60;
      v70 = 0x1.921fb60000000p+0f -
            (float)(PSEUDO_UNFUSED(
                v68 *
                (float)((float)((float)((float)((float)(v67 +
                                                        (float)((float)((float)((float)(v66 + (float)((
                                                                                                          float)((float)((float)(v65 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v68 * v68)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v68 *
                                                                                                                                                       v68))) *
                                                                                                                         (float)(v68 *
                                                                                                                                 v68)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v68 *
                                                                                                              v68))) *
                                                                                (float)(v68 *
                                                                                        v68)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v68 *
                                                                        v68))) *
                                                (float)(v68 * v68)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v68 * v68)) +
                        0x1.0000000000000p+0f)));
      v64 =
          v69 *
          (float)((
                      float)((float)((float)((float)(v67 +
                                                     (float)((float)((float)((
                                                                                 float)(v66 + (float)((
                                                                                                          float)((float)((float)(v65 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v69 * v69)) - *((float*)GameData_212c2f0 + 1)) * (float)(v69 * v69))) * (float)(v69 * v69)) - *(float*)((
                                                                                                                                                                                                                                                                                                               char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                           4)) *
                                                                                                      (float)(v69 *
                                                                                                              v69))) *
                                                                             (float)(v69 *
                                                                                     v69)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v69 *
                                                                     v69))) *
                                             (float)(v69 * v69)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v69 * v69)) +
                  0x1.0000000000000p+0f);
      if (v60 <= 0x1.6a09e60000000p-1f) {
        v64 = v70;
      }
    }
    else if (v60 >= -0x1.6a09e60000000p-1f) {
      v71 = (float)-v60 / v61;
      v64 =
          (float)(PSEUDO_UNFUSED(
              v71 * (float)((float)((float)-(
                                        float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v71 *
                                                                                                                                                                                                                                                                                                                                                                                                v71))) *
                                                                                                                                                                                                                                                                                                       (float)(v71 *
                                                                                                                                                                                                                                                                                                               v71))) *
                                                                                                                                                                                                                                                                                    (float)(v71 *
                                                                                                                                                                                                                                                                                            v71))) *
                                                                                                                                                                                                                                                            (float)(v71 *
                                                                                                                                                                                                                                                                    v71))) *
                                                                                                                                                                         (float)(v71 *
                                                                                                                                                                                 v71))) *
                                                                          (float)(v71 *
                                                                                  v71))) *
                                                       (float)(v71 * v71))) *
                                    (float)(v71 * v71)) +
                            0x1.0000000000000p+0f))) +
          0x1.921fb60000000p+0f;
    }
    else {
      v63 = (float)-v61 / v60;
      v64 =
          0x1.921fb60000000p+1f -
          (float)(PSEUDO_UNFUSED(
              v63 * (float)((
                                float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12) - (float)((
                                                                                                                                           float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((
                                                                                                                                                                                                                                     float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                              4) -
                                                                                                                                                                                                                                                    (float)((
                                                                                                                                                                                                                                                                float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                                                                                                                  (float)((
                                                                                                                                                                                                                                                                                                                                                                              float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         GameData_212c2f0 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     (float)(v63 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             v63))) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                (float)(v63 * v63))) *
                                                                                                                                                                                                                                                                                                                                                                          (float)(v63 *
                                                                                                                                                                                                                                                                                                                                                                                  v63))) *
                                                                                                                                                                                                                                                                                                                                                  (float)(v63 *
                                                                                                                                                                                                                                                                                                                                                          v63))) *
                                                                                                                                                                                                                                                            (float)(v63 * v63))) *
                                                                                                                                                                                                                                 (float)(v63 *
                                                                                                                                                                                                                                         v63))) *
                                                                                                                                       (float)(v63 *
                                                                                                                                               v63))) *
                                       (float)(v63 * v63)) +
                            0x1.0000000000000p+0f)));
    }
    if (v62 < v64) {
      game_109e470_alt1((void*)(&v196), v8 + 384, &v197, v62 / v64);
      v58 = v196;
      LANES128(v72).n128_u64[0] = LANES128(v196).n128_u64[0];
      LANES128(v72).n128_u64[1] = LANES128(v196).n128_u32[2];
      v197 = v72;
    }
    PSEUDO_LOW_LANE128(v58, n128_f32, v29 * *(float*)(v8 + 456));
    game_109da60((void*)(&v196), (float32x4_t*)(v8 + 384), &v197, v58);
    v73 = v196;
    *(_QWORD*)(v8 + 416) = LANES128(v196).n128_u64[0];
    v74 = *(_OWORD*)(v8 + 416);
    *((_QWORD*)&v74 + 1) = LANES128(v73).n128_u32[2];
    LANES128(v73).n128_f32[0] = v29 * *(float*)(v8 + 468);
    *(_OWORD*)(v8 + 416) = v74;
    game_109da60((void*)(&v196), (float32x4_t*)(v8 + 384), &v197, v73);
    v75 = LANES128(v196).n128_u32[2];
    *(_QWORD*)(v8 + 400) = LANES128(v196).n128_u64[0];
    v77 = *(int8x16_t*)(v8 + 384);
    v76 = *(int8x16_t*)(v8 + 400);
    LANES128(v78).n128_u64[0] = *(_QWORD*)(v8 + 400);
    LANES128(v78).n128_u64[1] = v75;
    LANES128(v79).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v79).n128_i8[8] =
        vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v80).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v76).n128_u64[1] = LANES128(v78).n128_u64[1];
    *(float32x4_t*)(v8 + 400) = v78;
    LANES128(v81).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v81).n128_i8[8] =
        vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v82 = vmulq_f32(v79, v81);
    *(int8x8_t*)&LANES128(v80).n128_i8[8] =
        vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v81).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v81).n128_i8[8] =
        vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v83 = vmulq_f32(v78, v77);
    LANES128(v78).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v78).n128_u64[1] = 0x3F0000003F000000LL;
    LANES128(v83).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v83, v83, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
            .n64_u64[0];
    LANES128(v77).n128_u64[0] = 0x3F8000003F800000LL;
    LANES128(v77).n128_u64[1] = 0x3F8000003F800000LL;
    LANES128(v83).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
            .n64_u64[0];
    LANES128(v83).n128_u64[1] = LANES128(v83).n128_u64[0];
    v84 = vaddq_f32(v83, v77);
    v85 = vsqrtq_f32(vaddq_f32(v84, v84));
    v86 = vdivq_f32(vmlsq_f32(v82, v81, v80), v85);
    LANES128(v86).n128_u32[3] = LANES128_OF(vmulq_f32(v85, v78)).n128_u32[3];
    LANES128(v85).n128_u64[0] = 0x3400000034000000LL;
    LANES128(v85).n128_u64[1] = 0x3400000034000000LL;
    v87 = vbslq_s8(vcgeq_f32(v85, v84), COERCE_AS(int8x16_t, GameData_1a82dd0),
                   v86);
    *(_QWORD*)(v8 + 272) = LANES128(v87).n128_u64[0];
    *(_QWORD*)(v8 + 280) = LANES128_OF(vextq_s8(v87, v87, 8u)).n128_u64[0];
    v199.val[1] = *(int8x16_t*)(v8 + 272);
    LANES128(v199.val[1]).n128_u32[3] = 0;
    LANES128(v88).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v199.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v78).n128_u64[0] =
        LANES64_OF(
            vrev64_s32(COERCE_AS(int32x2_t, LANES128(v199.val[1]).n128_u64[0])))
            .n64_u64[0];
    LANES128(v80).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v199.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
            .n64_u64[0];
    LANES128(v81).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v199.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v88).n128_i8[8] =
        vqtbl1_s8(v199.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v78).n128_u64[1] = LANES128(v88).n128_u64[1];
    LANES128(v80).n128_u64[1] = LANES128(v81).n128_u64[0];
    v89 = vmulq_f32(v88, v199.val[1]);
    LANES128(v199.val[1]).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v199.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v90 = vmulq_f32(v78, v78);
    v201.val[1] = vmulq_f32(v80, v80);
    v91 = vaddq_f32(v89, v89);
    LANES128(v199.val[1]).n128_u64[1] = LANES128(v81).n128_u64[0];
    v92 = vmulq_laneq_f32(v199.val[1], *(float32x4_t*)(v8 + 272), 3);
    v93 = vaddq_f32(v92, v92);
    v201.val[0] = vsubq_f32(
        COERCE_AS(float32x4_t, GameData_1a837f0),
        vaddq_f32(vaddq_f32(v201.val[1], v201.val[1]), vaddq_f32(v90, v90)));
    v203.val[0] = vaddq_f32(v91, v93);
    v203.val[1] = vsubq_f32(v91, v93);
    LANES128(v201.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v203, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
            .n64_u64[0];
    LANES128(v199.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v203, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v199.val[1]).n128_i8[8] =
        vqtbl2_s8(v203, COERCE_AS(int8x8_t, 0x706050413121110LL));
    *(int8x8_t*)&LANES128(v201.val[1]).n128_i8[8] =
        vqtbl2_s8(v203, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
    v199.val[0] = v201.val[0];
    LANES128(v91).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v199, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v91).n128_i8[8] =
        vqtbl2_s8(v199, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
    LANES128(v203.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v199, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v203.val[0]).n128_i8[8] =
        vqtbl2_s8(v199, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
    LANES128(v199.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v201, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
            .n64_u64[0];
    LANES128(v199.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v201, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
            .n64_u64[0];
    v23 = v10[2];
    LANES128(v199.val[0]).n128_u64[1] = LANES128(v199.val[1]).n128_u64[0];
    v201.val[0] = v10[1];
    *v10 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v91, COERCE_FLOAT(*v10)), v203.val[0],
                       COERCE_AS(float32x2_t, LANES128(*(v10)).n128_u64[0]), 1),
        v199.val[0], *v10, 2);
    v10[1] = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v91, LANES128(v201.val[0]).n128_f32[0]), v203.val[0],
            COERCE_AS(float32x2_t, LANES128(v201.val[0]).n128_u64[0]), 1),
        v199.val[0], v201.val[0], 2);
    v10[2] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v91, LANES128(v23).n128_f32[0]), v203.val[0],
                       COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
        v199.val[0], v23, 2);
  }
  else {
    *(_DWORD*)(v8 + 432) = 0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_alt1(
            &GameData_21a5680, v27, v28, *(long double*)&v26,
            *(long double*)&v25, LANES128(v23).n128_f64[0]) != 0) {
      v183 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v183;
      __cxa_guard_release_alt1(&GameData_21a5680);
    }
    v39 = COERCE_AS(int8x16_t, GameData_21a5670);
    *(_QWORD*)(v8 + 272) = GameData_21a5670;
    *(_QWORD*)(v8 + 280) = LANES128_OF(vextq_s8(v39, v39, 8u)).n128_u64[0];
  }
  if (*(_BYTE*)(v8 + 16) == 1 && *(_QWORD*)(v8 + 264) != 0) {
    v94 = (__typeof__(v94)){0};
    v95 = (__typeof__(v95)){0};
    v96 = (float)(*(float*)(v8 + 156) * *(float*)(v8 + 144)) *
          *(float*)(v8 + 104);
    if (v96 > 0x0.0p+0f) {
      v97 = **a8;
      v98 = (*a8)[1];
      v99 = (*a8)[2];
      LANES128(v100).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v100).n128_i8[8] =
          vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v101).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v99, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v101).n128_i8[8] =
          vqtbl1_s8(v99, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v102 = vmulq_f32(vmulq_f32(v97, v100), v101);
      LANES128(v101).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v101).n128_i8[8] =
          vqtbl1_s8(v98, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v103).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v99, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v103).n128_i8[8] =
          vqtbl1_s8(v99, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v104 = vsubq_f32(v102, vmulq_f32(vmulq_f32(v97, v101), v103));
      LANES128(v104).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v104, v104)).n128_u64[0];
      v105 = vaddq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v104).n128_u64[0]), 0),
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v104).n128_u64[0]), 1));
      v106 = vrecpeq_f32(v105);
      v107 = vmulq_f32(v106, vrecpsq_f32(v106, v105));
      v108 = vmulq_f32(v107, vrecpsq_f32(v107, v105));
      v109 = vzip1q_s32(v97, v99);
      v110 = vzip2q_s32(v97, v99);
      v111 = vzip1q_s32(v98, COERCE_AS(int32x4_t, 0));
      v112 = vzip2q_s32(v109, v111);
      v113 = vzip1q_s32(v110, vzip2q_s32(v98, COERCE_AS(int32x4_t, 0)));
      v114 = vzip1q_s32(v109, v111);
      LANES128(v115).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v98).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v116).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v109).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v115).n128_i8[8] =
          vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v117 =
          LANES64_OF(vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v116).n128_i8[8] =
          vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v113).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v98).n128_u64[1] = v117;
      *(int8x8_t*)&LANES128(v113).n128_i8[8] =
          vqtbl1_s8(v112, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v118 = vmulq_f32(v108, vmlsq_f32(vmulq_f32(v115, v98), v113, v116));
      *(int8x8_t*)&LANES128(v109).n128_i8[8] =
          vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v119 = vmulq_f32(v116, v109);
      LANES128(v116).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v116).n128_i8[8] =
          vqtbl1_s8(v114, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v120 = vceqzq_f32(v105);
      v121 = vbicq_s8(v118, v120);
      v122 = vbicq_s8(vmulq_f32(v108, vmlsq_f32(v119, v98, v116)), v120);
      v123 = vbicq_s8(
          vmulq_f32(v108, vmlsq_f32(vmulq_f32(v113, v116), v109, v115)), v120);
      v124 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v121, COERCE_FLOAT(*(_OWORD*)(v8 + 400))),
                         v122, *(float32x2_t*)(v8 + 400), 1),
          v123, *(float32x4_t*)(v8 + 400), 2);
      v125 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v121, COERCE_FLOAT(*(_OWORD*)(v8 + 416))),
                         v122, *(float32x2_t*)(v8 + 416), 1),
          v123, *(float32x4_t*)(v8 + 416), 2);
      LANES128(v123).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v124, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v121).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v123).n128_i8[8] =
          vqtbl1_s8(v124, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v122).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v124, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v121).n128_i8[8] =
          vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v126 = (float)(*(float*)(v8 + 156) * *(float*)(v8 + 144)) *
             *(float*)(v8 + 104);
      v127 = vmulq_f32(v123, v121);
      *(int8x8_t*)&LANES128(v122).n128_i8[8] =
          vqtbl1_s8(v124, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v121).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v121).n128_i8[8] =
          vqtbl1_s8(v125, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v128 = vmlsq_f32(v127, v121, v122);
      v129 = vmulq_f32(v124, v125);
      LANES128(v121).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v121).n128_u64[1] = 0x3F0000003F000000LL;
      LANES128(v129).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v129, v129, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0])))
              .n64_u64[0];
      LANES128(v125).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v125).n128_u64[1] = 0x3F8000003F800000LL;
      LANES128(v129).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0])))
              .n64_u64[0];
      LANES128(v129).n128_u64[1] = LANES128(v129).n128_u64[0];
      v130 = vaddq_f32(v129, v125);
      v131 = vsqrtq_f32(vaddq_f32(v130, v130));
      v132 = vdivq_f32(v128, v131);
      LANES128(v132).n128_u32[3] =
          LANES128_OF(vmulq_f32(v131, v121)).n128_u32[3];
      LANES128(v131).n128_u64[0] = 0x3400000034000000LL;
      LANES128(v131).n128_u64[1] = 0x3400000034000000LL;
      v133 = vbslq_s8(vcgeq_f32(v131, v130),
                      COERCE_AS(int8x16_t, GameData_1a82dd0), v132);
      v134 = LANES128(v133).n128_f32[1];
      v193 = v133;
      v135 = LANES128(v133).n128_f32[2];
      v136 =
          vmuls_lane_f32(LANES128(v133).n128_f32[1],
                         COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0]), 1);
      LANES128(v132).n128_f32[0] =
          vmuls_lane_f32(LANES128(v133).n128_f32[1], v133, 2) +
          (float)(LANES128(v133).n128_f32[0] * LANES128(v133).n128_f32[3]);
      v138 = GameRoutine_1a09ff0_alt1(
          LANES128(v132).n128_f32[0] + LANES128(v132).n128_f32[0],
          (LANES128_OF(vmulq_f32(v133, v133)).n128_f32[0] + v136) *
                  -0x1.0000000000000p+1 +
              0x1.0000000000000p+0);
      *((_QWORD*)&v137 + 1) = LANES128(v193).n128_u64[1];
      *(float*)&v138 = *(double*)&v138;
      v191 = *(_QWORD*)&v138;
      *(float*)&v138 = vmuls_lane_f32(-LANES128(v193).n128_f32[0], v193, 2) +
                       (float)(v134 * LANES128(v193).n128_f32[3]);
      *(_QWORD*)&v137 = -0x1.0000000000000p+0;
      v96 = v126;
      *(double*)&v138 = *(float*)&v138 + *(float*)&v138;
      if (*(double*)&v138 > 0x1.0000000000000p+0) {
        *(double*)&v138 = 0x1.0000000000000p+0;
      }
      if (*(double*)&v138 < -0x1.0000000000000p+0) {
        *(double*)&v138 = -0x1.0000000000000p+0;
      }
      v139 = GameRoutine_1a0a000_alt1(v138, v137);
      *(float*)&v139 = *(double*)&v139;
      v189 = LODWORD(v139);
      *(float*)&v139 =
          vmuls_lane_f32(LANES128(v193).n128_f32[0],
                         COERCE_AS(float32x2_t, LANES128(v193).n128_u64[0]), 1);
      v140 = GameRoutine_1a09ff0_alt1(
          (float)(*(float*)&v139 + (float)(v135 * LANES128(v193).n128_f32[3])) +
              (float)(*(float*)&v139 +
                      (float)(v135 * LANES128(v193).n128_f32[3])),
          (v136 + vmuls_lane_f32(v135, v193, 2)) * -0x1.0000000000000p+1 +
              0x1.0000000000000p+0);
      LANES128(v23).n128_u64[0] = v191;
      *(float*)&v140 = *(double*)&v140;
      v94 = (__typeof__(v94)){0};
      LANES128(v95).n128_u64[0] = __PAIR64__(v189, v191);
      LANES128(v95).n128_u64[1] = LODWORD(v140);
    }
    v141 = *(float32x4_t**)(v8 + 448);
    v142 = 0x1.0000000000000p+0f;
    if (v141 != nullptr) {
      v143 = v141[5];
      v94 = v143;
      LANES128(v94).n128_u32[3] = 0;
      if (LANES128(v143).n128_f32[0] != 0x0.0p+0f ||
          LANES128(v143).n128_f32[1] != 0x0.0p+0f) {
        v144 = vmulq_f32(v94, v94);
        v192 = v95;
        LANES128(v144).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v144, v144, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
                .n64_u64[0];
        LANES128(v144).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])))
                .n64_u64[0];
        LANES128(v144).n128_u64[1] = LANES128(v144).n128_u64[0];
        v145 = vrsqrteq_f32(v144);
        v146 = vmulq_f32(v145, vrsqrtsq_f32(v145, vmulq_f32(v144, v145)));
        v147 = vmulq_f32(v144, v146);
        v148 = vceqzq_f32(v144);
        v149 = vrsqrtsq_f32(v146, v147);
        v150 = vmulq_f32(v94, vmulq_f32(v146, v149));
        v151 = vbicq_s8(v150, v148);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                  memory_order_acquire) &
             1) == 0) {
          v195 = v151;
          v184 = __cxa_guard_acquire_alt1(
              &GameData_21a61b0, *(long double*)&v148, *(long double*)&v150,
              *(long double*)&v149, *(long double*)&v94,
              LANES128(v23).n128_f64[0]);
          v151 = v195;
          if (v184 != 0) {
            v187 = *((_QWORD*)GameData_212c560 + 1);
            *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
            *((_QWORD*)&GameData_21a61a0 + 1) = v187;
            __cxa_guard_release_alt1(&GameData_21a61b0);
            v151 = v195;
          }
        }
        LANES128(v152).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v151, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v152).n128_i8[8] =
            vqtbl1_s8(v151, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v153).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v153).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v154).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        v155 = vmulq_f32(v153, v152);
        v156 = vmulq_f32(v151, COERCE_AS(float32x4_t, GameData_21a61a0));
        *(int8x8_t*)&LANES128(v154).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v152).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(v151, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v152).n128_i8[8] =
            vqtbl1_s8(v151, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v157 = vmlsq_f32(v155, v152, v154);
        LANES128(v152).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v152).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v156).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v156, v156, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0])))
                .n64_u64[0];
        LANES128(v154).n128_u64[0] = 0x3F8000003F800000LL;
        LANES128(v154).n128_u64[1] = 0x3F8000003F800000LL;
        LANES128(v156).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0])))
                .n64_u64[0];
        LANES128(v156).n128_u64[1] = LANES128(v156).n128_u64[0];
        v158 = vaddq_f32(v156, v154);
        v159 = vsqrtq_f32(vaddq_f32(v158, v158));
        v160 = vdivq_f32(v157, v159);
        LANES128(v160).n128_u32[3] =
            LANES128_OF(vmulq_f32(v159, v152)).n128_u32[3];
        LANES128(v159).n128_u64[0] = 0x3400000034000000LL;
        LANES128(v159).n128_u64[1] = 0x3400000034000000LL;
        v161 = vbslq_s8(vcgeq_f32(v159, v158),
                        COERCE_AS(int8x16_t, GameData_1a82dd0), v160);
        v162 = LANES128(v161).n128_f32[1];
        v194 = v161;
        v163 = LANES128(v161).n128_f32[2];
        v164 = vmuls_lane_f32(
            LANES128(v161).n128_f32[1],
            COERCE_AS(float32x2_t, LANES128(v161).n128_u64[0]), 1);
        PSEUDO_LOW_LANE128(v158, n128_f32,
                           vmuls_lane_f32(LANES128(v161).n128_f32[1], v161, 2) +
                               (float)(LANES128(v161).n128_f32[0] *
                                       LANES128(v161).n128_f32[3]));
        v166 = GameRoutine_1a09ff0_alt1(
            LANES128(v158).n128_f32[0] + LANES128(v158).n128_f32[0],
            (LANES128_OF(vmulq_f32(v161, v161)).n128_f32[0] + v164) *
                    -0x1.0000000000000p+1 +
                0x1.0000000000000p+0);
        v165 = *(long double*)&v194;
        *(float*)&v166 = *(double*)&v166;
        v190 = LODWORD(v166);
        *(float*)&v166 =
            vmuls_lane_f32(-*(float*)&v165, *(float32x4_t*)&v165, 2);
        *(_QWORD*)&v165 = -0x1.0000000000000p+0;
        *(double*)&v166 = (float)(*(float*)&v166 +
                                  (float)(v162 * LANES128(v194).n128_f32[3])) +
                          (float)(*(float*)&v166 +
                                  (float)(v162 * LANES128(v194).n128_f32[3]));
        if (*(double*)&v166 > 0x1.0000000000000p+0) {
          *(double*)&v166 = 0x1.0000000000000p+0;
        }
        if (*(double*)&v166 < -0x1.0000000000000p+0) {
          *(double*)&v166 = -0x1.0000000000000p+0;
        }
        v167 = GameRoutine_1a0a000_alt1(v166, v165);
        *(float*)&v167 = *(double*)&v167;
        v188 = LODWORD(v167);
        *(float*)&v167 = vmuls_lane_f32(
            LANES128(v194).n128_f32[0],
            COERCE_AS(float32x2_t, LANES128(v194).n128_u64[0]), 1);
        v168 = GameRoutine_1a09ff0_alt1(
            (float)(*(float*)&v167 +
                    (float)(v163 * LANES128(v194).n128_f32[3])) +
                (float)(*(float*)&v167 +
                        (float)(v163 * LANES128(v194).n128_f32[3])),
            (v164 + vmuls_lane_f32(v163, v194, 2)) * -0x1.0000000000000p+1 +
                0x1.0000000000000p+0);
        *(float*)&v168 = *(double*)&v168;
        LANES128(v169).n128_u64[0] = __PAIR64__(v188, v190);
        v95 = v192;
        LANES128(v169).n128_u64[1] = LODWORD(v168);
        v94 = vmulq_n_f32(v169, 0x1.0000000000000p+0f - v96);
        v142 = *(float*)(*(_QWORD*)(v8 + 448) + 16LL);
      }
    }
    if (*(_QWORD*)(v8 + 264) != 0) {
      LANES64(v170).n64_u64[0] = LANES128_OF(vaddq_f32(v95, v94)).n128_u64[0];
      *(int32x2_t*)(v8 + 288) = vrev64_s32(v170);
      v171 = 0x1.3333340000000p-3f;
      v172 = vmuls_lane_f32(0x1.99999a0000000p-3f, v170, 1);
      if (v172 <= 0x1.3333340000000p-3f) {
        v171 = v172;
      }
      if (v172 >= -0x1.3333340000000p-3f) {
        v173 = v171;
      }
      else {
        v173 = -0x1.3333340000000p-3f;
      }
      v174 = *(_OWORD*)(v8 + 288);
      *(float*)(v8 + 304) = v173;
      *((_QWORD*)&v174 + 1) = LODWORD(v142);
      v175 = -0x1.0a3d700000000p-3f * LANES64(v170).n64_f32[0];
      v176 = 0x1.47ae140000000p-5f;
      if (v175 <= 0x1.47ae140000000p-5f) {
        v176 = v175;
      }
      *(_OWORD*)(v8 + 288) = v174;
      if (v175 >= -0x1.47ae140000000p-4f) {
        v177 = v176;
      }
      else {
        v177 = -0x1.47ae140000000p-4f;
      }
      *(float*)(v8 + 308) = v177;
    }
  }
}

__int64 llvm_libcxx_21_libcxx_include___functional_171ea10(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  void (**v4)(__int64);

  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v1 + 1096) -= 16LL;
  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(unsigned __int8*)(v2 + 79);
  *(_BYTE*)(v2 + 108) = 0;
  if (v3 == 1) {
    v4 = (void (**)(__int64))(*(_QWORD*)v2 + 520LL);
  }
  else {
    v4 = (void (**)(__int64))(*(_QWORD*)v2 + 504LL);
    if (*(_QWORD*)(*(_QWORD*)(v2 + 8) + 336LL) == v2) {
      v4 = (void (**)(__int64))(*(_QWORD*)v2 + 512LL);
    }
  }
  (*v4)(v2);
  ProcDeliveryAnimalMenu_171e560(v1);
  return 3;
}

__int64 llvm_libcxx_21_libcxx_include___functional_1720150(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  void (**v4)(__int64);

  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v1 + 1088) -= 16LL;
  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(unsigned __int8*)(v2 + 79);
  *(_BYTE*)(v2 + 96) = 0;
  if (v3 == 1) {
    v4 = (void (**)(__int64))(*(_QWORD*)v2 + 520LL);
  }
  else {
    v4 = (void (**)(__int64))(*(_QWORD*)v2 + 504LL);
    if (*(_QWORD*)(*(_QWORD*)(v2 + 8) + 336LL) == v2) {
      v4 = (void (**)(__int64))(*(_QWORD*)v2 + 512LL);
    }
  }
  (*v4)(v2);
  ProcDeliveryTransportMenu_171fd50(v1);
  GameData_2262bf8 = 0;
  return 3;
}

#pragma GCC visibility pop
