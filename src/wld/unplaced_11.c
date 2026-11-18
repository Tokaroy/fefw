#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void math_622ac0(PSEUDO_X8, float32x2_t*);
__int64* Model_a66700(__int64* result, int);
__int64 g3d_a661a0(__int64, int, __int64, int);
double cos(double);
double sin(double);
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_1fc0868[])();
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
unsigned __int8 wld_a78840(__int64 result, const char* a2, __int64 a3, int a4);
__int64 wld_a8b5a0(__int64 result);
double GameRoutine_1a09f70(double);
double GameRoutine_1a09f80(double);

unsigned __int8 wld_a78840(__int64 result, const char* a2, __int64 a3, int a4)
{
  __int64 v5;
  __int64 v6;
  const char* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int16* v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;

  v5 = result;
  v6 = *(_QWORD*)(**(_QWORD**)(result + 40) + 8LL);
  if (v6 == 0) {
    goto LABEL_14;
  }
  if (a2 != nullptr) {
    v7 = a2;
    result = strlen(a2);
    a2 = v7;
    v8 = result;
  }
  else {
    v8 = 0;
  }
  v9 = v6 + 8;
  v10 = *(unsigned __int16*)(v6 + 12);
  v11 = v6 + 8 + 16 * v10;
  v12 = *(_DWORD*)v11;
  if ((signed __int32)*(_DWORD*)(v6 + 8) < (signed __int32)*(_DWORD*)v11) {
    do {
      v15 = (__int64)v12 >> 3;
      if (v8 > v15) {
        v13 = ((unsigned __int8)a2[v8 + ~v15] >> (v12 & 7)) & 1;
      }
      else {
        v13 = 0;
      }
      v10 = *(unsigned __int16*)(v6 + 12 + 16 * v10 + 2 * v13);
      v14 = v12 < (signed __int32)*(_DWORD*)(v9 + 16 * v10);
      v12 = *(_DWORD*)(v9 + 16 * v10);
    } while (v14);
    v11 = v9 + 16 * v10;
  }
  v16 = *(unsigned __int16**)(v11 + 8);
  if (v8 == *v16 &&
      (_DWORD)(result = memcmp((__int64)(v16 + 1), (__int64)a2, v8)) == 0) {
    v17 = (unsigned __int64)(v11 - v6 - 24) >> 4;
  }
  else {
  LABEL_14:
    LODWORD(v17) = -1;
  }
  if (*(_BYTE*)(v5 + 132) == 1) {
    result = (__int64)Model_a66700(*(__int64**)(v5 + 24), *(_DWORD*)(v5 + 128));
    if (*(_BYTE*)(v5 + 132) == 1) {
      *(_BYTE*)(v5 + 132) = 0;
    }
    *(_QWORD*)(v5 + 224) = 0xFFFFFFFFLL;
  }
  if ((_DWORD)v17 != -1) {
    v18 = *(_QWORD*)(v5 + 24);
    *(_DWORD*)(v5 + 224) = v17;
    *(_DWORD*)(v5 + 228) = a4;
    v21_.v21[0] = GameData_1fc0868;
    v21_.v21[1] = v5;
    v21_.v22 = v21_.v21;
    v19 = g3d_a661a0(v18, v17, (__int64)v21_.v21, 0);
    result = (__int64)v21_.v22;
    if (v21_.v22 == v21_.v21) {
      v20 = 32;
    }
    else {
      if (v21_.v22 == nullptr) {
      LABEL_25:
        *(_DWORD*)(v5 + 128) = v19;
        *(_BYTE*)(v5 + 132) = 1;
        return result;
      }
      v20 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v21_.v22 + v20))((__int64)v21_.v22);
    goto LABEL_25;
  }
  return result;
}

__int64 wld_a8b5a0(__int64 result)
{
  int v9;
  float32x4_t* v10;
  float32x4_t* v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  __int128 v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  __int64 v19;
  __int128 v20;
  float v21;
  float v22;
  double v23;
  double v24;
  double v25;
  double v26;
  double v27;
  double v28;
  double v29;
  double v30;
  double v31;
  float v32;
  float v33;
  float v34;
  float v35;
  int v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  __int128 v43;
  int v44;
  float32x2_t v45;
  float32x4_t v46;
  unsigned __int64 v47;
  float32x4_t v48;
  float32x4_t v49;
  unsigned __int64 v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  __int128 v65;
  float32x4_t v66;
  int16x4_t v67;
  __int64 v68;
  __int32 v69;
  unsigned int v70;
  __int128 v71;
  float32x4_t* v72;
  float32x4_t v73;
  float32x4_t v74;
  int8x16_t v75;
  __int128 v76;
  float32x2_t v77;
  float32x4_t v78;
  unsigned __int64 v79;
  float32x4_t v80;
  float32x4_t v81;
  unsigned __int64 v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  __int128 v89;
  __int128 v90;
  int8x16x2_t v99;
  int8x16x2_t v100;
  int8x16x2_t v101;
  int8x16x2_t v102;
  int8x16x2_t v103;
  int8x16x2_t v104;
  int8x16x2_t v105;

  v9 = *(_DWORD*)(result + 296);
  if ((v9 & 5) != 0) {
    if ((v9 & 4) != 0) {
      v11 = *(float32x4_t**)(result + 776);
      if (v11 != nullptr) {
        v12 = v11[13];
        v13 = vsubq_f32(*(float32x4_t*)(result + 304), v12);
        v14 = vmulq_f32(v13, v13);
        LANES128(v14).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                .n64_u64[0];
        if (__builtin_islessgreater(LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                .n64_f32[0], 0x0.0p+0f)) {
          *(_DWORD*)(result + 304) = LANES128(v12).n128_u32[0];
          *(_DWORD*)(result + 308) = LANES128(v11[13]).n128_u32[1];
          v15 = *(_OWORD*)(result + 304);
          DWORD2(v15) = LANES128(v11[13]).n128_u32[2];
          *(_DWORD*)(result + 296) = v9 | 1;
          *((_QWORD*)&v15 + 1) = DWORD2(v15);
          *(_OWORD*)(result + 304) = v15;
        }
        v16 = v11[14];
        v17 = vsubq_f32(*(float32x4_t*)(result + 320), v16);
        v18 = vmulq_f32(v17, v17);
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_u64[0];
        if (__builtin_islessgreater(LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_f32[0], 0x0.0p+0f)) {
          *(_DWORD*)(result + 320) = LANES128(v16).n128_u32[0];
          v19 = result;
          *(_DWORD*)(result + 324) = LANES128(v11[14]).n128_u32[1];
          v20 = *(_OWORD*)(result + 320);
          *((_QWORD*)&v20 + 1) = LANES128(v11[14]).n128_u32[2];
          *(_OWORD*)(result + 320) = v20;
          v21 = LANES128(v11[14]).n128_f32[1];
          v22 = LANES128(v11[14]).n128_f32[0];
          v23 = LANES128(v11[14]).n128_f32[2] * 0x1.0000000000000p-1;
          v24 = GameRoutine_1a09f80(v23);
          v25 = GameRoutine_1a09f70(v23);
          v26 = v22 * 0x1.0000000000000p-1;
          v27 = GameRoutine_1a09f80(v26);
          v28 = GameRoutine_1a09f70(v26);
          v29 = v21 * 0x1.0000000000000p-1;
          v30 = GameRoutine_1a09f80(v29);
          v31 = GameRoutine_1a09f70(v29);
          result = v19;
          v32 = v24 * v28 * v30 - PSEUDO_UNFUSED(v31 * (v25 * v27));
          v33 =
              PSEUDO_UNFUSED(v25 * v28 * v30) + PSEUDO_UNFUSED(v24 * v27) * v31;
          v34 =
              PSEUDO_UNFUSED(v25 * v28 * v31) + PSEUDO_UNFUSED(v24 * v27) * v30;
          v35 = v25 * v27 * v30 - PSEUDO_UNFUSED(v31 * (v24 * v28));
          if (COERCE_FLOAT(*(_OWORD*)(v19 + 336)) != v32 ||
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v19 + 336))) != v33 ||
              COERCE_FLOAT(*(_QWORD*)(v19 + 344)) != v35 ||
              COERCE_FLOAT(HIDWORD(*(_OWORD*)(v19 + 336))) != v34) {
            v39 = *(_DWORD*)(v19 + 296);
            *(float*)(v19 + 336) = v32;
            *(float*)(v19 + 340) = v33;
            *(float*)(v19 + 344) = v35;
            *(float*)(v19 + 348) = v34;
            *(_DWORD*)(v19 + 296) = v39 | 1;
          }
          v11 = *(float32x4_t**)(v19 + 776);
        }
        v40 = v11[15];
        v41 = vsubq_f32(*(float32x4_t*)(result + 352), v40);
        v42 = vmulq_f32(v41, v41);
        LANES128(v42).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
                .n64_u64[0];
        if (__builtin_islessgreater(LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
                .n64_f32[0], 0x0.0p+0f)) {
          *(_DWORD*)(result + 352) = LANES128(v40).n128_u32[0];
          *(_DWORD*)(result + 356) = LANES128(v11[15]).n128_u32[1];
          v43 = *(_OWORD*)(result + 352);
          DWORD2(v43) = LANES128(v11[15]).n128_u32[2];
          *(_DWORD*)(result + 296) |= 1u;
          *((_QWORD*)&v43 + 1) = DWORD2(v43);
          *(_OWORD*)(result + 352) = v43;
        }
        v10 = v11 + 9;
      }
      else {
        v10 = *(float32x4_t**)(result + 768);
        if (v10 != nullptr) {
          v61 = *(_DWORD*)(result + 784);
          if ((v61 & 4) != 0) {
            v62 = v10[19];
            v63 = vsubq_f32(*(float32x4_t*)(result + 304), v62);
            v64 = vmulq_f32(v63, v63);
            LANES128(v64).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v64, v64, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
                    .n64_u64[0];
            if (__builtin_islessgreater(LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
                    .n64_f32[0], 0x0.0p+0f)) {
              *(_DWORD*)(result + 304) = LANES128(v62).n128_u32[0];
              v9 |= 1u;
              *(_DWORD*)(result + 308) = LANES128(v10[19]).n128_u32[1];
              v65 = *(_OWORD*)(result + 304);
              DWORD2(v65) = LANES128(v10[19]).n128_u32[2];
              *(_DWORD*)(result + 296) = v9;
              *((_QWORD*)&v65 + 1) = DWORD2(v65);
              *(_OWORD*)(result + 304) = v65;
            }
          }
          if ((v61 & 2) != 0) {
            v66 = v10[21];
            LANES64(v67).n64_u64[0] =
                LANES64_OF(vmovn_s32(vmvnq_s8(
                               vceqq_f32(*(float32x4_t*)(result + 336), v66))))
                    .n64_u64[0];
            if ((LANES64(v67).n64_u8[0] & 1) != 0 ||
                (LANES64(v67).n64_u8[2] & 1) != 0 ||
                (LANES64(v67).n64_u8[4] & 1) != 0 ||
                (LANES64(v67).n64_u8[6] & 1) != 0) {
              *(_DWORD*)(result + 336) = LANES128(v66).n128_u32[0];
              v68 = result;
              *(_DWORD*)(result + 340) = LANES128(v10[21]).n128_u32[1];
              *(_DWORD*)(result + 344) = LANES128(v10[21]).n128_u32[2];
              v69 = LANES128(v10[21]).n128_i32[3];
              *(_DWORD*)(result + 296) = v9 | 1;
              *(_DWORD*)(result + 348) = v69;
              math_622ac0((void*)(&v90), (float32x2_t*)&v10[21]);
              v70 = DWORD2(v90);
              v61 = *(_DWORD*)(v68 + 784);
              result = v68;
              *(_QWORD*)(v68 + 320) = v90;
              v71 = *(_OWORD*)(v68 + 320);
              *((_QWORD*)&v71 + 1) = v70;
              *(_OWORD*)(v68 + 320) = v71;
            }
          }
          v10 = nullptr;
          if ((v61 & 1) != 0) {
            v72 = *(float32x4_t**)(result + 768);
            v73 = v72[22];
            v74 = vsubq_f32(*(float32x4_t*)(result + 352), v73);
            v75 = vmulq_f32(v74, v74);
            LANES128(v75).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v75, v75, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
                    .n64_u64[0];
            if (__builtin_islessgreater(LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
                    .n64_f32[0], 0x0.0p+0f)) {
              *(_DWORD*)(result + 352) = LANES128(v73).n128_u32[0];
              v10 = nullptr;
              *(_DWORD*)(result + 356) = LANES128(v72[22]).n128_u32[1];
              v76 = *(_OWORD*)(result + 352);
              DWORD2(v76) = LANES128(v72[22]).n128_u32[2];
              *(_DWORD*)(result + 296) |= 1u;
              *((_QWORD*)&v76 + 1) = DWORD2(v76);
              *(_OWORD*)(result + 352) = v76;
            }
          }
        }
      }
    }
    else {
      v10 = nullptr;
    }
    v44 = *(_DWORD*)(result + 296);
    if ((v44 & 1) != 0) {
      if (v10 != nullptr) {
        *(float32x4_t*)(result + 432) = *v10;
        *(float32x4_t*)(result + 448) = v10[1];
        *(float32x4_t*)(result + 464) = v10[2];
        *(float32x4_t*)(result + 480) = v10[3];
        if ((v44 & 2) == 0) {
        LABEL_27:
          *(_DWORD*)(result + 296) = v44 & 0xFFFFFFFE;
          return result;
        }
      }
      else {
        LANES64(v77).n64_u32[0] = 0;
        LANES128(v78).n128_u64[0] = 0;
        v103.val[1] = *(int8x16_t*)(result + 336);
        LANES64(v77).n64_u32[1] = HIDWORD(*(_QWORD*)(result + 352));
        LANES128(v78).n128_u64[1] = (unsigned int)*(_QWORD*)(result + 360);
        LANES128(v103.val[1]).n128_u32[3] = 0;
        v79 = LANES64_OF(vqtbl1_s8(v103.val[1],
                                   COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                  .n64_u64[0];
        LANES128(v80).n128_u64[0] =
            LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t,
                                            LANES128(v103.val[1]).n128_u64[0])))
                .n64_u64[0];
        LANES128(v81).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v103.val[1],
                                 COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        v82 = LANES64_OF(vqtbl1_s8(v103.val[1],
                                   COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                  .n64_u64[0];
        LANES128(v80).n128_u64[1] = v79;
        LANES128(v81).n128_u64[1] = v82;
        v83 = vmulq_f32(v80, v80);
        v100.val[1] = vmulq_f32(v81, v81);
        v100.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                                vaddq_f32(vaddq_f32(v100.val[1], v100.val[1]),
                                          vaddq_f32(v83, v83)));
        LANES128(v84).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v103.val[1],
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v84).n128_u64[1] = v79;
        v85 = vmulq_f32(v84, v103.val[1]);
        v86 = vaddq_f32(v85, v85);
        LANES128(v103.val[1]).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v103.val[1],
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v103.val[1]).n128_u64[1] = v82;
        v87 = vmulq_laneq_f32(v103.val[1], *(float32x4_t*)(result + 336), 3);
        v88 = vaddq_f32(v87, v87);
        v105.val[0] = vaddq_f32(v86, v88);
        v105.val[1] = vsubq_f32(v86, v88);
        LANES128(v103.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v105, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v100.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v105, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v103.val[1]).n128_i8[8] =
            vqtbl2_s8(v105, COERCE_AS(int8x8_t, 0x706050413121110LL));
        *(int8x8_t*)&LANES128(v100.val[1]).n128_i8[8] =
            vqtbl2_s8(v105, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        v103.val[0] = v100.val[0];
        LANES128(v86).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v103, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v86).n128_i8[8] =
            vqtbl2_s8(v103, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v105.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v103, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v105.val[0]).n128_i8[8] =
            vqtbl2_s8(v103, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(v103.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v100, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v103.val[0]).n128_i8[8] =
            vqtbl2_s8(v100, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
        *(float32x4_t*)(result + 432) = vmlaq_f32(
            vmlaq_f32(vmulq_n_f32(v86, COERCE_FLOAT(*(_QWORD*)(result + 352))),
                      COERCE_AS(float32x4_t, 0), v105.val[0]),
            COERCE_AS(float32x4_t, 0), v103.val[0]);
        *(float32x4_t*)(result + 448) =
            vmlaq_f32(vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v86),
                                     v105.val[0], v77, 1),
                      COERCE_AS(float32x4_t, 0), v103.val[0]);
        v89 = *(_OWORD*)(result + 304);
        *(float32x4_t*)(result + 464) =
            vmlaq_laneq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v86),
                                      COERCE_AS(float32x4_t, 0), v105.val[0]),
                            v103.val[0], v78, 2);
        *(_OWORD*)(result + 480) = v89;
        if ((v44 & 2) == 0) {
          goto LABEL_27;
        }
      }
      LANES64(v45).n64_u32[0] = 0;
      LANES128(v46).n128_u64[0] = 0;
      v101.val[1] = *(int8x16_t*)(result + 400);
      LANES64(v45).n64_u32[1] = HIDWORD(*(_QWORD*)(result + 416));
      LANES128(v46).n128_u64[1] = (unsigned int)*(_QWORD*)(result + 424);
      LANES128(v101.val[1]).n128_u32[3] = 0;
      v47 = LANES64_OF(vqtbl1_s8(v101.val[1],
                                 COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                .n64_u64[0];
      LANES128(v48).n128_u64[0] =
          LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t,
                                          LANES128(v101.val[1]).n128_u64[0])))
              .n64_u64[0];
      LANES128(v49).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v101.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      v50 = LANES64_OF(vqtbl1_s8(v101.val[1],
                                 COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
      LANES128(v48).n128_u64[1] = v47;
      LANES128(v49).n128_u64[1] = v50;
      v51 = vmulq_f32(v48, v48);
      v99.val[1] = vmulq_f32(v49, v49);
      v99.val[0] = vsubq_f32(
          COERCE_AS(float32x4_t, GameData_1a837f0),
          vaddq_f32(vaddq_f32(v99.val[1], v99.val[1]), vaddq_f32(v51, v51)));
      LANES128(v52).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v101.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v52).n128_u64[1] = v47;
      v53 = vmulq_f32(v52, v101.val[1]);
      v54 = vaddq_f32(v53, v53);
      LANES128(v101.val[1]).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v101.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v101.val[1]).n128_u64[1] = v50;
      v55 = vmulq_laneq_f32(v101.val[1], *(float32x4_t*)(result + 400), 3);
      v56 = vaddq_f32(v55, v55);
      v104.val[0] = vaddq_f32(v54, v56);
      v104.val[1] = vsubq_f32(v54, v56);
      LANES128(v101.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v104, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
              .n64_u64[0];
      LANES128(v99.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v104, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v101.val[1]).n128_i8[8] =
          vqtbl2_s8(v104, COERCE_AS(int8x8_t, 0x706050413121110LL));
      *(int8x8_t*)&LANES128(v99.val[1]).n128_i8[8] =
          vqtbl2_s8(v104, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
      v101.val[0] = v99.val[0];
      LANES128(v54).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v54).n128_i8[8] =
          vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
      LANES128(v104.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v104.val[0]).n128_i8[8] =
          vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
      LANES128(v101.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v99, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v101.val[0]).n128_i8[8] =
          vqtbl2_s8(v99, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
      v99.val[0] = vmlaq_f32(
          vmlaq_f32(vmulq_n_f32(v54, COERCE_FLOAT(*(_QWORD*)(result + 416))),
                    COERCE_AS(float32x4_t, 0), v104.val[0]),
          COERCE_AS(float32x4_t, 0), v101.val[0]);
      v57 = vmlaq_f32(vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v54),
                                     v104.val[0], v45, 1),
                      COERCE_AS(float32x4_t, 0), v101.val[0]);
      v58 = *(float32x4_t*)(result + 368);
      v59 = vmlaq_laneq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v54),
                                      COERCE_AS(float32x4_t, 0), v104.val[0]),
                            v101.val[0], v46, 2);
      v60 = *(float32x4_t*)(result + 432);
      v99.val[1] = *(int8x16_t*)(result + 448);
      v102 = *(int8x16x2_t*)(result + 464);
      *(float32x4_t*)(result + 432) = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v60, LANES128(v99.val[0]).n128_f32[0]), v99.val[1],
              COERCE_AS(float32x2_t, LANES128(v99.val[0]).n128_u64[0]), 1),
          v102.val[0], v99.val[0], 2);
      *(float32x4_t*)(result + 448) = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v60, LANES128(v57).n128_f32[0]),
                         v99.val[1],
                         COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]), 1),
          v102.val[0], v57, 2);
      *(float32x4_t*)(result + 464) = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v60, LANES128(v59).n128_f32[0]),
                         v99.val[1],
                         COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]), 1),
          v102.val[0], v59, 2);
      *(float32x4_t*)(result + 480) = vaddq_f32(
          v102.val[1],
          vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v60, LANES128(v58).n128_f32[0]), v99.val[1],
                  COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]), 1),
              v102.val[0], v58, 2));
      goto LABEL_27;
    }
  }
  return result;
}

#pragma GCC visibility pop
