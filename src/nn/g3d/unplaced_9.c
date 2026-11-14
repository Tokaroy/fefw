#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a83510;
extern __int128 GameData_1a837f0;
__int64 nn_g3d_5f0e60(__int64 result, __int64 a2);

__int64 nn_g3d_5f0e60(__int64 result, __int64 a2)
{
  int32x2_t v2;
  int32x2_t v3;
  int32x2_t v4;
  int32x2_t v5;
  float32x4_t v6;
  __int64 v7;
  int32x4_t v8;
  int32x4_t v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int32x4_t v13;
  float v14;
  int32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int32x4_t v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  unsigned __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  unsigned int v33;
  __int128 v34;
  unsigned int* v35;
  unsigned int v36;
  __int128 v37;
  int v38;
  float32x4_t v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  int8x16_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int32x4_t v54;
  int32x4_t v55;
  int32x4_t v56;
  int32x4_t v57;
  float32x4_t v58;
  int32x4_t v59;
  float v60;
  int8x16x2_t v61;
  int8x16x2_t v62;
  int8x16x2_t v63;

  if (*(_WORD*)(result + 100) != 0) {
    LANES128(v6).n128_u64[0] = 0x3F8000003F800000LL;
    LANES128(v6).n128_u64[1] = 0x3F8000003F800000LL;
    v7 = 0;
    v8 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
    v9 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
    v10 = *(_QWORD*)(a2 + 24);
    v11 = *(_QWORD*)(result + 72);
    v12 = 4LL * *(unsigned __int16*)(result + 100);
    v13 = vdupq_n_s32(0xC0490FDB);
    v14 = -*(float*)GameData_212c188;
    v15 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v9).n128_u64[0]), 0);
    v16 = vdupq_laneq_s32(v9, 2);
    v60 = -*(float*)GameData_212c190;
    v17 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v8).n128_u64[0]), 0);
    v18 = vdupq_laneq_s32(v8, 2);
    v58 = v17;
    v59 = vdupq_n_s32(0x3E22F983u);
    PSEUDO_LOW_LANE64(
        v2, n64_f32,
        -COERCE_FLOAT(DWORDn(
            *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190),
            sizeof(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                              (_QWORD)GameData_212c190)) /
                    4 -
                1)));
    PSEUDO_LOW_LANE64(
        v3, n64_f32,
        -COERCE_FLOAT(DWORDn(
            *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190),
            sizeof(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                              (_QWORD)GameData_212c190)) /
                    4 -
                1)));
    PSEUDO_LOW_LANE64(
        v4, n64_f32,
        -COERCE_FLOAT(DWORDn(
            *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188),
            sizeof(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                              (_QWORD)GameData_212c188)) /
                    4 -
                1)));
    PSEUDO_LOW_LANE64(
        v5, n64_f32,
        -COERCE_FLOAT(DWORDn(
            *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188),
            sizeof(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                              (_QWORD)GameData_212c188)) /
                    4 -
                1)));
    v19 = vdupq_lane_s32(v2, 0);
    v20 = vdupq_lane_s32(v3, 0);
    v21 = vdupq_lane_s32(v4, 0);
    v22 = vdupq_lane_s32(v5, 0);
    v56 = vdupq_n_s32(0x3FC90FDBu);
    v57 = vdupq_n_s32(0xC0C90FDB);
    v54 = vdupq_n_s32(0xBFC90FDB);
    v55 = vdupq_n_s32(0x40490FDBu);
    do {
      if ((*(_DWORD*)(*(_QWORD*)(result + 88) + v7) & 0x80000000) == 0) {
        v33 = *(_DWORD*)(*(_QWORD*)(result + 88) + v7) & 0x7FFF;
        if (v33 != 0x7FFF) {
          *(_QWORD*)&v34 = *(_QWORD*)(v11 + 4);
          v35 = (unsigned int*)(v10 + 96LL * v33);
          v36 = *v35;
          *((_QWORD*)&v34 + 1) = *(unsigned int*)(v11 + 12);
          *(_QWORD*)&v37 = *(_QWORD*)(v11 + 16);
          *((_QWORD*)&v37 + 1) = *(unsigned int*)(v11 + 24);
          v38 = *(_DWORD*)v11 >> 23;
          *((_OWORD*)v35 + 1) = v34;
          *v35 = v36 & 0xF07FFFFF | ((v38 & 0x1F) << 23);
          *((_OWORD*)v35 + 5) = v37;
          if ((*(_BYTE*)(v11 + 2) & 0x30) != 0) {
            v61.val[1] = *(int8x16_t*)(v11 + 32);
            LANES128(v61.val[1]).n128_u32[3] = 0;
            LANES128(v23).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(v61.val[1],
                                     COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v24).n128_u64[0] =
                LANES64_OF(vrev64_s32(COERCE_AS(
                               int32x2_t, LANES128(v61.val[1]).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v25).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(v61.val[1],
                                     COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                    .n64_u64[0];
            v26 =
                LANES64_OF(vqtbl1_s8(v61.val[1],
                                     COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v23).n128_i8[8] =
                vqtbl1_s8(v61.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v24).n128_u64[1] = LANES128(v23).n128_u64[1];
            LANES128(v25).n128_u64[1] = v26;
            v27 = vmulq_f32(v23, v61.val[1]);
            LANES128(v61.val[1]).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(v61.val[1],
                                     COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            v28 = vmulq_f32(v24, v24);
            v62.val[1] = vmulq_f32(v25, v25);
            v29 = vaddq_f32(v27, v27);
            LANES128(v61.val[1]).n128_u64[1] = v26;
            v30 = vmulq_laneq_f32(v61.val[1], *(float32x4_t*)(v11 + 32), 3);
            v62.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                                   vaddq_f32(vaddq_f32(v62.val[1], v62.val[1]),
                                             vaddq_f32(v28, v28)));
            v31 = vaddq_f32(v30, v30);
            v63.val[0] = vaddq_f32(v29, v31);
            v63.val[1] = vsubq_f32(v29, v31);
            LANES128(v61.val[1]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v63, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                    .n64_u64[0];
            LANES128(v62.val[1]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v63, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v62.val[1]).n128_i8[8] =
                vqtbl2_s8(v63, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
            *(int8x8_t*)&LANES128(v61.val[1]).n128_i8[8] =
                vqtbl2_s8(v63, COERCE_AS(int8x8_t, 0x706050413121110LL));
            v61.val[0] = v62.val[0];
            LANES128(v29).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v61, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v29).n128_i8[8] =
                vqtbl2_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
            LANES128(v63.val[1]).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v61, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v63.val[1]).n128_i8[8] =
                vqtbl2_s8(v61, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
            LANES128(v32).n128_u64[0] =
                LANES64_OF(
                    vqtbl2_s8(v62, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                    .n64_u64[0];
            *((float32x4_t*)v35 + 2) = v29;
            *((_OWORD*)v35 + 3) = COERCE_AS(_OWORD, v63.val[1]);
            *(int8x8_t*)&LANES128(v32).n128_i8[8] =
                vqtbl2_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
          }
          else {
            LANES128(v39).n128_u64[0] = *(_QWORD*)(v11 + 32);
            LANES128(v39).n128_u64[1] = *(unsigned int*)(v11 + 40);
            v40 = vmlaq_f32(v39, v57, vrndnq_f32(vmulq_f32(v39, v59)));
            v41 = vcgtq_f32(v40, v56);
            v42 = vmvnq_s8(v41);
            v43 = vbslq_s8(v41, vsubq_f32(v55, v40), v40);
            v44 = vcgtq_f32(v54, v43);
            v45 = vbslq_s8(v44, vsubq_f32(v13, v43), v43);
            v46 = vmulq_f32(v45, v45);
            v47 = vmulq_f32(
                v45,
                vmlaq_f32(v6, v46,
                          vmlaq_f32(v20, v46,
                                    vmlaq_f32(v18, v46,
                                              vmlaq_f32(v19, v46,
                                                        vmlaq_n_f32(v58, v46,
                                                                    v60))))));
            v48 = vmlaq_f32(
                v6, v46,
                vmlaq_f32(v22, v46,
                          vmlaq_f32(v16, v46,
                                    vmlaq_f32(v21, v46,
                                              vmlaq_n_f32(v15, v46, v14)))));
            v49 = vbslq_s8(vbicq_s8(v42, v44), v48, vnegq_f32(v48));
            LANES128(v46).n128_u64[0] =
                LANES128(v49).n128_u32[1] |
                ((unsigned __int64)LANES128(v49).n128_u32[1] << 32);
            LANES128(v42).n128_u64[0] =
                LANES128(v49).n128_u32[2] |
                ((unsigned __int64)LANES128(v47).n128_u32[2] << 32);
            LANES128(v50).n128_u64[0] = LANES128(v42).n128_u64[0];
            LANES128(v42).n128_u64[1] = 1065353216;
            LANES128(v46).n128_u64[1] = LANES128(v47).n128_u32[1];
            LANES128(v50).n128_u64[1] = 3212836864LL;
            v51 = vmulq_f32(v46, v50);
            LANES128(v50).n128_u32[0] = LANES128(v47).n128_u32[1];
            LANES128(v50).n128_u32[1] = LANES128(v47).n128_u32[1];
            LANES128(v50).n128_u64[1] = LANES128(v49).n128_u32[1];
            PSEUDO_LOW_LANE128(v48, n128_u64,
                               __ROR8__(LANES128(v42).n128_u64[0], 32));
            v52 = vmulq_f32(v50, v42);
            v53 = vmulq_n_f32(v52, LANES128(v47).n128_f32[0]);
            v32 =
                vaddq_f32(vmulq_n_f32(v52, LANES128(v49).n128_f32[0]),
                          vmulq_f32(vmulq_n_f32(v48, LANES128(v47).n128_f32[0]),
                                    COERCE_AS(float32x4_t, GameData_1a83510)));
            *((float32x4_t*)v35 + 2) = v51;
            *((float32x4_t*)v35 + 3) = vaddq_f32(
                v53, vmulq_f32(vmulq_n_f32(v48, LANES128(v49).n128_f32[0]),
                               COERCE_AS(float32x4_t, GameData_1a82940)));
          }
          *((float32x4_t*)v35 + 4) = v32;
        }
      }
      v7 += 4;
      v11 += 48;
    } while (v12 != v7);
  }
  return result;
}

#pragma GCC visibility pop
