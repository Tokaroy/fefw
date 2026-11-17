#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 gfx_render_1943ae0(float32x4_t* a1, float32x4_t* a2);

__int64 gfx_render_1943ae0(float32x4_t* a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  int16x4_t v2;
  __int64 v3;
  int16x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  unsigned __int32 v7;
  unsigned __int32 v8;
  unsigned __int32 v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  unsigned __int32 v13;
  unsigned __int32 v14;
  unsigned __int32 v15;
  int8x16_t v16;
  __int64 v18;
  float* v19;
  float32x4_t v20;
  float32x4_t v21;
  unsigned __int32 v22;
  unsigned __int32 v23;
  unsigned __int32 v24;
  bool v25;
  char v26;
  int8x16_t v27;
  float v28;
  float32x4_t v29;
  float32x4_t v30;
  unsigned __int32 v31;
  unsigned __int32 v32;
  unsigned __int32 v33;
  int8x16_t v34;
  __int64 v35;
  float* v36;
  float32x4_t v37;
  float32x4_t v38;
  unsigned __int32 v39;
  unsigned __int32 v40;
  unsigned __int32 v41;
  char v42;
  int8x16_t v43;
  float v44;

  if (LANES128(a1[15]).n128_u32[1] != 0) {
    LANES64(v2).n64_u64[0] =
        LANES64_OF(vmovn_s32(vcgtq_f32(a1[1], a2[1]))).n64_u64[0];
    if ((LANES64(v2).n64_u8[0] & 1) != 0) {
      return 0;
    }
    LODWORD(v3) = 0;
    LANES64(v4).n64_u64[0] =
        LANES64_OF(vmovn_s32(vcgtq_f32(*a2, a1[2]))).n64_u64[0];
    if ((LANES64(v4).n64_u8[0] & 1) != 0 || (LANES64(v2).n64_u8[2] & 1) != 0 ||
        (LANES64(v4).n64_u8[2] & 1) != 0 || (LANES64(v2).n64_u8[4] & 1) != 0 ||
        (LANES64(v4).n64_u8[4] & 1) != 0) {
      return (unsigned int)v3;
    }
  }
  v3 = LANES128(a1[15]).n128_u32[0];
  if ((int)v3 < 1) {
    return 1;
  }
  if ((LANES128(a1[16]).n128_u8[0] & 1) == 0) {
    v18 = v3 - 1;
    v19 = (float*)&a1[4];
    do {
      v20 = *(float32x4_t*)(v19 - 4);
      LANES128(v21).n128_u32[3] = 0;
      if (LANES128(v20).n128_f32[0] >= 0x0.0p+0f) {
        v22 = *(unsigned __int32*)&(*a2);
      }
      else {
        v22 = *(unsigned __int32*)&(a2)[1];
      }
      LANES128(v21).n128_u32[0] = v22;
      if (COERCE_FLOAT(DWORDn(*((_QWORD*)v19 - 2),
                              sizeof(*((_QWORD*)v19 - 2)) / 4 - 1)) >=
          0x0.0p+0f) {
        v23 = DWORDn(LANES128(*(a2)).n128_u64[0],
                     sizeof(LANES128(*(a2)).n128_u64[0]) / 4 - 1);
      }
      else {
        v23 = DWORDn(LANES128(a2[1]).n128_u64[0],
                     sizeof(LANES128(a2[1]).n128_u64[0]) / 4 - 1);
      }
      if (COERCE_FLOAT(*((_QWORD*)v19 - 1)) >= 0x0.0p+0f) {
        v24 = LANES128(*(a2)).n128_u64[1];
      }
      else {
        v24 = LANES128(a2[1]).n128_u64[1];
      }
      v25 = v18-- != 0;
      LANES128(v21).n128_u32[1] = v23;
      v26 = v25;
      LANES128(v21).n128_u32[2] = v24;
      v27 = vmulq_f32(v20, v21);
      LANES128(v27).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
              .n64_u64[0];
      v28 = *v19;
      v19 += 8;
      PSEUDO_LOW_LANE128(
          v27, n128_f32,
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                  .n64_f32[0] +
              v28);
      LODWORD(v3) = LANES128(v27).n128_f32[0] <= 0x0.0p+0f;
    } while (!(LANES128(v27).n128_f32[0] > 0x0.0p+0f) && (v26 & 1) != 0);
    return (unsigned int)v3;
  }
  v5 = a1[3];
  LANES128(v6).n128_u32[3] = 0;
  if (LANES128(v5).n128_f32[0] >= 0x0.0p+0f) {
    v7 = *(unsigned __int32*)&(*a2);
  }
  else {
    v7 = *(unsigned __int32*)&(a2)[1];
  }
  LANES128(v6).n128_u32[0] = v7;
  if (COERCE_FLOAT(DWORDn(LANES128(a1[3]).n128_u64[0],
                          sizeof(LANES128(a1[3]).n128_u64[0]) / 4 - 1)) >=
      0x0.0p+0f) {
    v8 = DWORDn(LANES128(*(a2)).n128_u64[0],
                sizeof(LANES128(*(a2)).n128_u64[0]) / 4 - 1);
  }
  else {
    v8 = DWORDn(LANES128(a2[1]).n128_u64[0],
                sizeof(LANES128(a2[1]).n128_u64[0]) / 4 - 1);
  }
  if (COERCE_FLOAT(LANES128(a1[3]).n128_u64[1]) >= 0x0.0p+0f) {
    v9 = LANES128(*(a2)).n128_u64[1];
  }
  else {
    v9 = LANES128(a2[1]).n128_u64[1];
  }
  LANES128(v6).n128_u32[1] = v8;
  LANES128(v6).n128_u32[2] = v9;
  v10 = vmulq_f32(v5, v6);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  if ((float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                  .n64_f32[0] +
              LANES128(a1[4]).n128_f32[0]) > 0x0.0p+0f) {
    return 0;
  }
  if ((_DWORD)v3 == 1) {
    return (unsigned int)v3;
  }
  v11 = a1[5];
  LANES128(v12).n128_u32[3] = 0;
  if (LANES128(v11).n128_f32[0] >= 0x0.0p+0f) {
    v13 = *(unsigned __int32*)&(*a2);
  }
  else {
    v13 = *(unsigned __int32*)&(a2)[1];
  }
  LANES128(v12).n128_u32[0] = v13;
  if (COERCE_FLOAT(DWORDn(LANES128(a1[5]).n128_u64[0],
                          sizeof(LANES128(a1[5]).n128_u64[0]) / 4 - 1)) >=
      0x0.0p+0f) {
    v14 = DWORDn(LANES128(*(a2)).n128_u64[0],
                 sizeof(LANES128(*(a2)).n128_u64[0]) / 4 - 1);
  }
  else {
    v14 = DWORDn(LANES128(a2[1]).n128_u64[0],
                 sizeof(LANES128(a2[1]).n128_u64[0]) / 4 - 1);
  }
  if (COERCE_FLOAT(LANES128(a1[5]).n128_u64[1]) >= 0x0.0p+0f) {
    v15 = LANES128(*(a2)).n128_u64[1];
  }
  else {
    v15 = LANES128(a2[1]).n128_u64[1];
  }
  LANES128(v12).n128_u32[1] = v14;
  LANES128(v12).n128_u32[2] = v15;
  v16 = vmulq_f32(v11, v12);
  LANES128(v16).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
          .n64_u64[0];
  if ((float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
                  .n64_f32[0] +
              LANES128(a1[6]).n128_f32[0]) <= 0x0.0p+0f) {
    if ((_DWORD)v3 == 2) {
      return 1;
    }
    v29 = a1[7];
    LANES128(v30).n128_u32[3] = 0;
    v31 = LANES128(v29).n128_f32[0] >= 0x0.0p+0f ? *(unsigned __int32*)&(*a2)
                                                 : *(_OWORD*)&a2[1];
    LANES128(v30).n128_u32[0] = v31;
    v32 = COERCE_FLOAT(DWORDn(LANES128(a1[7]).n128_u64[0],
                              sizeof(LANES128(a1[7]).n128_u64[0]) / 4 - 1)) >=
                  0x0.0p+0f
              ? DWORDn(LANES128(*(a2)).n128_u64[0],
                       sizeof(LANES128(*(a2)).n128_u64[0]) / 4 - 1)
              : DWORDn(LANES128(a2[1]).n128_u64[0],
                       sizeof(LANES128(a2[1]).n128_u64[0]) / 4 - 1);
    v33 = COERCE_FLOAT(LANES128(a1[7]).n128_u64[1]) >= 0x0.0p+0f
              ? LANES128(*(a2)).n128_u64[1]
              : LANES128(a2[1]).n128_u64[1];
    LANES128(v30).n128_u32[1] = v32;
    LANES128(v30).n128_u32[2] = v33;
    v34 = vmulq_f32(v29, v30);
    LANES128(v34).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
            .n64_u64[0];
    if ((float)(LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                    .n64_f32[0] +
                LANES128(a1[8]).n128_f32[0]) <= 0x0.0p+0f) {
      if ((unsigned int)(v3 - 3) < 2) {
        return 1;
      }
      v35 = v3 - 5;
      v36 = (float*)&a1[12];
      do {
        v37 = *(float32x4_t*)(v36 - 4);
        LANES128(v38).n128_u32[3] = 0;
        if (LANES128(v37).n128_f32[0] >= 0x0.0p+0f) {
          v39 = *(unsigned __int32*)&(*a2);
        }
        else {
          v39 = *(unsigned __int32*)&(a2)[1];
        }
        LANES128(v38).n128_u32[0] = v39;
        if (COERCE_FLOAT(DWORDn(*((_QWORD*)v36 - 2),
                                sizeof(*((_QWORD*)v36 - 2)) / 4 - 1)) >=
            0x0.0p+0f) {
          v40 = DWORDn(LANES128(*(a2)).n128_u64[0],
                       sizeof(LANES128(*(a2)).n128_u64[0]) / 4 - 1);
        }
        else {
          v40 = DWORDn(LANES128(a2[1]).n128_u64[0],
                       sizeof(LANES128(a2[1]).n128_u64[0]) / 4 - 1);
        }
        if (COERCE_FLOAT(*((_QWORD*)v36 - 1)) >= 0x0.0p+0f) {
          v41 = LANES128(*(a2)).n128_u64[1];
        }
        else {
          v41 = LANES128(a2[1]).n128_u64[1];
        }
        v25 = v35-- != 0;
        LANES128(v38).n128_u32[1] = v40;
        v42 = v25;
        LANES128(v38).n128_u32[2] = v41;
        v43 = vmulq_f32(v37, v38);
        LANES128(v43).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
                .n64_u64[0];
        v44 = *v36;
        v36 += 8;
        PSEUDO_LOW_LANE128(
            v43, n128_f32,
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
                    .n64_f32[0] +
                v44);
        LODWORD(v3) = LANES128(v43).n128_f32[0] <= 0x0.0p+0f;
      } while (!(LANES128(v43).n128_f32[0] > 0x0.0p+0f) && (v42 & 1) != 0);
      return (unsigned int)v3;
    }
  }
  return 0;
}

#pragma GCC visibility pop
