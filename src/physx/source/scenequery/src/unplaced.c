#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 physx_Gu_IncrementalAABBTree_update(__int64, __int64, unsigned int,
                                            __int64, __int64);
__int64 physx_Sq_BVHCompoundPruner_updateMapping(__int64 result, unsigned int,
                                                 __int64);
__int64
physx_Sq_CompoundTree_updateObjectAfterManualBoundsUpdates(__int64,
                                                           unsigned int);
float GameRoutine_1a0ccb0(float);
__int64 physx_source_scenequery_src_3083a0(__int64 result, int a2,
                                           unsigned int a3);

__int64 physx_source_scenequery_src_3083a0(__int64 result, int a2,
                                           unsigned int a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  float v11;
  float v12;
  float32x4_t* v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float32x4_t v19;
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
  __int64 v67;
  float v68;
  float* v69;
  __int64 v70;
  float v71;
  float v72;
  float v73;
  float v74;

  if (*(_DWORD*)(result + 260) != 0) {
    v3 = 9 * ((~(a2 << 15) + a2) ^ ((unsigned int)(~(a2 << 15) + a2) >> 10));
    v4 = *(
        unsigned int*)(*(_QWORD*)(result + 232) +
                       4LL *
                           ((*(_DWORD*)(result + 244) - 1) &
                            (((v3 ^ (v3 >> 6)) + ~((v3 ^ (v3 >> 6)) << 11)) ^
                             (((v3 ^ (v3 >> 6)) + ~((v3 ^ (v3 >> 6)) << 11)) >>
                              16))));
    if ((_DWORD)v4 != -1) {
      v5 = *(_QWORD*)(result + 216);
      while (*(_DWORD*)(v5 + 8 * v4) != a2) {
        v4 = *(unsigned int*)(*(_QWORD*)(result + 224) + 4 * v4);
        if ((_DWORD)v4 == -1) {
          return result;
        }
      }
      v6 = v5 + 8 * v4;
      v7 = result;
      physx_Sq_CompoundTree_updateObjectAfterManualBoundsUpdates(
          *(_QWORD*)(result + 192) + 56LL * *(unsigned int*)(v6 + 4), a3);
      v8 = v7;
      LODWORD(v7) = *(_DWORD*)(v6 + 4);
      v9 = v8;
      v10 = (float*)(*(_QWORD*)(v8 + 192) + 56LL * (unsigned int)v7);
      v12 = v10[6];
      v11 = v10[7];
      v13 = *(float32x4_t**)(*(_QWORD*)v10 + 104LL);
      v15 = v10[8];
      v14 = v10[9];
      v16 = (float)(v14 * v14) + -0x1.0000000000000p-1f;
      v17 = v12 + v12;
      v18 = v11 + v11;
      v19 = v13[1];
      LODWORD(v20) = HIDWORD(LANES128(*(v13)).n128_u64[0]);
      LODWORD(v21) = HIDWORD(LANES128(v13[1]).n128_u64[0]);
      v22 = COERCE_FLOAT(LANES128(*(v13)).n128_u64[1]);
      v23 = COERCE_FLOAT(LANES128(v13[1]).n128_u64[1]);
      v24 = LANES128_OF(vaddq_f32(*v13, v19)).n128_f32[0];
      v25 = v20 + v21;
      v26 = v22 + v23;
      PSEUDO_LOW_LANE128(v19, n128_f32,
                         0x1.0000000000000p-1f *
                             LANES128_OF(vsubq_f32(v19, *v13)).n128_f32[0]);
      v27 = (float)(v21 - v20) * 0x1.0000000000000p-1f;
      v28 = (float)(v23 - v22) * 0x1.0000000000000p-1f;
      v29 = (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f * v24)) +
            (float)(PSEUDO_UNFUSED(0x1.0000000000000p-1f * v24));
      v30 = (float)(PSEUDO_UNFUSED(v25 * 0x1.0000000000000p-1f)) +
            (float)(PSEUDO_UNFUSED(v25 * 0x1.0000000000000p-1f));
      v31 = (float)(PSEUDO_UNFUSED(v26 * 0x1.0000000000000p-1f)) +
            (float)(PSEUDO_UNFUSED(v26 * 0x1.0000000000000p-1f));
      v32 = v14 *
            (float)((float)(v11 * v31) - (float)(PSEUDO_UNFUSED(v15 * v30)));
      v33 = v14 *
            (float)((float)(v15 * v29) - (float)(PSEUDO_UNFUSED(v12 * v31)));
      v34 = (float)(PSEUDO_UNFUSED(
                v14 * (float)((float)(v12 * v30) -
                              (float)(PSEUDO_UNFUSED(v11 * v29))))) +
            (float)(v31 * v16);
      v35 = (float)((float)(PSEUDO_UNFUSED(v11 * v30)) + (float)(v12 * v29)) +
            (float)(v15 * v31);
      v36 = v11 * (float)(v11 + v11);
      v37 = v32 + (float)(v29 * v16);
      v38 = v33 + (float)(v30 * v16);
      v39 = v15 + v15;
      v40 = v12 * (float)(v12 + v12);
      v41 = v37 + (float)(v12 * v35);
      v42 = v15 * (float)(v15 + v15);
      v43 = v38 + (float)(v11 * v35);
      v44 = v17 * v11;
      v45 = v34 + (float)(v15 * v35);
      v46 = v17 * v15;
      v47 = v14 * v17;
      v48 = v18 * v15;
      v49 = v14 * v18;
      v50 = v14 * v39;
      v51 = v27 * (float)(v47 + v48);
      v52 = v28 * (float)(v48 - v47);
      v73 = v10[10] + v41;
      v74 = v10[12] + v45;
      v53 = LANES128(v19).n128_f32[0] * (float)(v46 - v49);
      v54 = v28 * (float)(v46 + v49);
      v55 = v27 * (float)(v44 - v50);
      v56 = LANES128(v19).n128_f32[0] * (float)(v44 + v50);
      v57 = v27 * (float)((float)(0x1.0000000000000p+0f - v40) - v42);
      v71 = v28 * (float)((float)(0x1.0000000000000p+0f - v40) - v36);
      v72 = v10[11] + v43;
      v58 = GameRoutine_1a0ccb0(
          LANES128(v19).n128_f32[0] *
          (float)((float)(0x1.0000000000000p+0f - v36) - v42));
      v59 = v58 + GameRoutine_1a0ccb0(v55);
      v60 = v59 + GameRoutine_1a0ccb0(v54);
      v61 = GameRoutine_1a0ccb0(v56);
      v62 = v61 + GameRoutine_1a0ccb0(v57);
      v63 = v62 + GameRoutine_1a0ccb0(v52);
      v64 = GameRoutine_1a0ccb0(v53);
      v65 = v64 + GameRoutine_1a0ccb0(v51);
      v66 = GameRoutine_1a0ccb0(v71);
      v67 = *(_QWORD*)(v9 + 176);
      v68 = v65 + v66;
      v69 = (float*)(v67 + 24LL * (unsigned int)v7);
      *(_DWORD*)(v9 + 288) = 0;
      *v69 = v73 - v60;
      v69[1] = v72 - v63;
      v69[2] = v74 - v68;
      v69[3] = v73 + v60;
      v69[4] = v72 + v63;
      v69[5] = v74 + v68;
      v70 = physx_Gu_IncrementalAABBTree_update(
          v9 + 8, *(_QWORD*)(*(_QWORD*)(v9 + 152) + 8LL * (unsigned int)v7), v7,
          v67, v9 + 280);
      return physx_Sq_BVHCompoundPruner_updateMapping(v9, v7, v70);
    }
  }
  return result;
}

#pragma GCC visibility pop
