#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_111d7a0(__int64, int);
void game_character_11182e0(__int128*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void game_111df40(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2);

__attribute__((swiftcall)) void game_111df40(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v8;
  float* v9;
  float* v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  char v16;
  float v17;
  float v18;
  float v19;
  float* v20;
  char v21;
  int v22;
  float* v23;
  int v24;
  float v25;
  float v26;
  float v27;
  float* v28;
  float v29;
  float v30;
  float v31;
  bool v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float* v41;
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
  char v73;
  float v74;
  float v75;
  __int128 v76;
  int8x16_t v77;
  __int64 v78;
  struct {
    int8x16_t v79;
    char gap16_[12];
    float v80;
    float v81;
    float v82;
    float v83;
    float v84;
    __int128 v85;
    float v86;
    __int64 v87;
    int v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
  } f_;
  __int64 v92;

  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = a1 + 32;
  v5 = a1 + 64;
  v8 = 0;
  v9 = (float*)GameData_212c190;
  v10 = (float*)GameData_212c188;
  *a3 = 0;
  a3[1] = 0;
  v11 = *v9;
  f_.v83 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4);
  f_.v84 = v9[1];
  v12 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)v9);
  v13 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9);
  v14 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10);
  v15 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10 + 8);
  v16 = 1;
  v17 = -0x1.38c3540000000p-1f;
  f_.v80 = -v11;
  v18 = -v12;
  v19 = -*v10;
  f_.v81 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10 + 4);
  f_.v82 = v10[1];
  do {
    v20 = (float*)(v4 + 8 * v8);
    v21 = v16;
    v22 = *(unsigned __int8*)(v5 + v8);
    v23 = (float*)&a3[v8];
    v24 = *((_DWORD*)v20 + 1);
    *v23 = *v20;
    *((_DWORD*)v23 + 1) = v24;
    if (v22 != 1) {
      goto LABEL_2;
    }
    GameRoutine_111d7a0(a2, v8),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w"));
    v26 = *v20;
    v27 = v20[1];
    v28 = (float*)(v4 + 8 * (v8 ^ 1));
    v29 = v28[1] - v27;
    v30 = *v28 - *v20;
    v31 = (float)(PSEUDO_UNFUSED(v29 * v29)) + (float)(v30 * v30);
    v32 = v31 < 0x1.0000000000000p-23f;
    v33 = 0x1.0000000000000p+0f / sqrtf(v31);
    v34 = v30 * v33;
    v35 = v29 * v33;
    if (v32) {
      v34 = 0x0.0p+0f;
      v35 = 0x1.0000000000000p+0f;
    }
    v36 = v17 +
          (float)(roundf(v17 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v36 <= 0x1.921fb60000000p+0f) {
      v38 = 0x1.0000000000000p+0f;
      if (v36 >= -0x1.921fb60000000p+0f) {
        goto LABEL_11;
      }
      v37 = -0x1.921fb60000000p+1f;
    }
    else {
      v37 = 0x1.921fb60000000p+1f;
    }
    v36 = v37 - v36;
    v38 = -0x1.0000000000000p+0f;
  LABEL_11:
    v39 = v36 * v36;
    v40 = v25 + v27;
    v41 = (float*)(a1 + 16 * v8);
    v42 =
        v36 *
        (float)((float)((float)(v18 +
                                (float)((float)(f_.v83 +
                                                (float)((float)(v13 +
                                                                (float)((float)(f_.v84 +
                                                                                (float)(f_.v80 *
                                                                                        (float)(v36 *
                                                                                                v36))) *
                                                                        (float)(v36 *
                                                                                v36))) *
                                                        (float)(v36 * v36))) *
                                        (float)(v36 * v36))) *
                        (float)(v36 * v36)) +
                0x1.0000000000000p+0f);
    v43 =
        v38 *
        (float)((float)((float)(v15 +
                                (float)((float)(f_.v81 +
                                                (float)((float)(v14 +
                                                                (float)((float)(f_.v82 +
                                                                                (float)(v19 *
                                                                                        v39)) *
                                                                        v39)) *
                                                        v39)) *
                                        v39)) *
                        v39) +
                0x1.0000000000000p+0f);
    v44 = (float)(PSEUDO_UNFUSED(v35 * v42)) + (float)(v34 * v43);
    v45 = (float)(PSEUDO_UNFUSED(v35 * v43)) - (float)(v34 * v42);
    v46 = fminf(v26 - v25, 0x1.f400000000000p+8f);
    v47 = fmaxf(v26 - v25, -0x1.f400000000000p+8f);
    v48 = fminf(v27 - v25, 0x1.f400000000000p+8f);
    v49 = fmaxf(v27 - v25, -0x1.f400000000000p+8f);
    v50 = v26 + (float)(PSEUDO_UNFUSED(v44 * 0x1.1000000000000p+3f));
    v51 = v45 * 0x1.1000000000000p+3f;
    if (v46 > (float)(v25 + v26)) {
      v46 = v25 + v26;
    }
    v52 = v27 + v51;
    if (v47 < (float)(v25 + v26)) {
      v47 = v25 + v26;
    }
    v53 = v50 - v25;
    v54 = v25 + v50;
    if (v48 > v40) {
      v48 = v25 + v27;
    }
    if (v49 < v40) {
      v49 = v25 + v27;
    }
    v55 = v52 - v25;
    v56 = v25 + v52;
    if (v46 > v53) {
      v46 = v53;
    }
    if (v47 < v53) {
      v47 = v53;
    }
    v57 = *v41;
    if (v48 > v55) {
      v48 = v55;
    }
    if (v49 < v55) {
      v49 = v55;
    }
    if (v46 > v54) {
      v46 = v54;
    }
    if (v47 >= v54) {
      v58 = v47;
    }
    else {
      v58 = v54;
    }
    if (v48 <= v56) {
      v59 = v48;
    }
    else {
      v59 = v56;
    }
    if (v49 < v56) {
      v49 = v56;
    }
    if (v46 >= v57) {
      v61 = v41[2];
      v60 = 0x0.0p+0f;
      if (v58 > v61) {
        v60 = v61 - v58;
      }
    }
    else {
      v60 = v57 - v46;
    }
    v62 = v41[1];
    if (v59 >= v62) {
      v64 = v41[3];
      v63 = 0x0.0p+0f;
      if (v49 > v64) {
        v63 = v64 - v49;
      }
    }
    else {
      v63 = v62 - v59;
    }
    v65 = v41[2];
    v66 = v58 + v60;
    if (v66 <= v65) {
      v68 = v46 + v60;
      if (v68 >= v57) {
        goto LABEL_50;
      }
      v67 = v57 - v68;
    }
    else {
      v67 = v65 - v66;
    }
    v60 = v60 + v67;
  LABEL_50:
    v69 = v41[3];
    v70 = v49 + v63;
    if (v70 > v69) {
      v71 = v69 - v70;
    LABEL_54:
      v63 = v63 + v71;
      goto LABEL_55;
    }
    v72 = v59 + v63;
    if (v72 < v62) {
      v71 = v62 - v72;
      goto LABEL_54;
    }
  LABEL_55:
    v73 = *(_BYTE*)(a1 + 76);
    v74 = v26 + v60;
    v75 = v27 + v63;
    *v23 = v74;
    v23[1] = v27 + v63;
    if ((v73 & 1) == 0 && *(_BYTE*)(v5 + v8) == 1) {
      *(_QWORD*)&v76 = LODWORD(v74);
      f_.v86 = v25;
      f_.v87 = 0x3D360B613F800000LL;
      f_.v88 = 1120403456;
      f_.v89 = 0;
      f_.v90 = 0;
      f_.v91 = 0;
      v92 = 0;
      *((_QWORD*)&v76 + 1) = LODWORD(v75);
      f_.v85 = v76;
      game_character_11182e0(&f_.v85),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w"));
      v77 = *(int8x16_t*)(f_.v89 + 48LL * (int)v92);
      f_.v90 = f_.v89;
      f_.v79 = v77;
      v78 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v78 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, f_.v89),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(float, "s0", "=w"));
      *(int32x2_t*)v23 = vzip1_s32(
          COERCE_AS(int32x2_t, LANES128(f_.v79).n128_u64[0]),
          COERCE_AS(int32x2_t,
                    LANES128_OF(vextq_s8(f_.v79, f_.v79, 8u)).n128_u64[0]));
    }
  LABEL_2:
    v8 = 1;
    v16 = 0;
    v17 = 0x1.38c3540000000p-1f;
  } while ((v21 & 1) != 0);
}

#pragma GCC visibility pop
