#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* gfx_ad4540(float*, unsigned __int64*, __int64, __int64**);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___vector_ad1560(PSEUDO_X8, __int64, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 ElfFile_631220(__int64*, const char*);
__int64 GameRoutine_1a09c60(__int64, int, unsigned __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_5fbb80(__int64 result, __int64, __int64);
__int64 GameRoutine_5fc0e0(__int64);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_636000(__int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_templates_b36de0(__int64, unsigned int*, _DWORD**);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_2167620;
int GameRoutine_1a09cf0(__int64, __int64, unsigned __int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
void GameRoutine_7a6cc0(__int64*, unsigned __int64);
void GameRoutine_8301a0(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) String_60a1d0();
void llvm_libcxx_21_libcxx_include___vector_a598e0(__int64, __int64*, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
bool llvm_libcxx_21_libcxx_include___vector_a57070(
    float32x2_t* a1, float32x2_t* a2, float32x2_t* a3, float32x2_t* a4,
    float* a5, float* a6, double a7, double a8, long double a9, double a10,
    double a11, float32x4_t a12, float32x4_t a13);
int8x16_t* llvm_libcxx_21_libcxx_include___vector_a57200(int8x16_t* result,
                                                         float32x4_t* a2,
                                                         float a3, double a4,
                                                         double a5, double a6);
void llvm_libcxx_21_libcxx_include___vector_a59220(__int64* a1, __int64 a2,
                                                   unsigned __int64 a3,
                                                   char a4);
__int64 llvm_libcxx_21_libcxx_include___vector_ad1740(float* a1, __int64 a2,
                                                      unsigned __int64 a3);
__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b34600(
    PSEUDO_X8 x8_, float* a1, unsigned __int8* a2, unsigned __int64 a3,
    __int64 a4, unsigned __int64 a5, unsigned __int64 a6, __int64 unused_int6,
    char a7, _QWORD* a9);
__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b35580(
    PSEUDO_X8 x8_, _QWORD* a1, __int64* a2, __int64 a3, unsigned __int64 a4,
    char a5, _QWORD* a6);
__int64 llvm_libcxx_21_libcxx_include___vector_bd7540(__int64 result);

bool llvm_libcxx_21_libcxx_include___vector_a57070(
    float32x2_t* a1, float32x2_t* a2, float32x2_t* a3, float32x2_t* a4,
    float* a5, float* a6, double a7, double a8, long double a9, double a10,
    double a11, float32x4_t a12, float32x4_t a13)
{
  float32x2_t v13;
  float v14;
  float32x2_t v15;
  float v16;
  float v17;
  float v18;
  _BOOL8 result;
  float32x2_t v20;
  float v21;
  int8x16_t v22;
  float32x2_t v23;
  int8x16_t v24;
  float32x2_t v25;
  float v26;
  float v27;
  float v28;
  bool v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;

  PSEUDO_LOW_LANE64(v13, n64_u64, LANES64(*(a1)).n64_u64[0]);
  v14 = 0x0.0p+0f;
  LANES64(v15).n64_u64[0] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]),
                          COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0])))
          .n64_u64[0];
  *(float32x2_t*)&a9 =
      vsub_f32(COERCE_AS(float32x2_t, LANES64(*(a4)).n64_u64[0]),
               COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]));
  v16 = LANES64_OF(vmul_f32(v15, v15)).n64_f32[1] +
        (float)(LANES64(v15).n64_f32[0] * LANES64(v15).n64_f32[0]);
  v17 =
      LANES64_OF(vmul_f32(*(float32x2_t*)&a9, *(float32x2_t*)&a9)).n64_f32[1] +
      (float)(*(float*)&a9 * *(float*)&a9);
  v18 = 0x0.0p+0f;
  result = v17 > 0x1.a36e2e0000000p-14f || v16 > 0x1.a36e2e0000000p-14f;
  if (result) {
    LANES128(a12).n128_u64[0] =
        LANES64_OF(
            vsub_f32(v13, COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0])))
            .n64_u64[0];
    LANES64(v20).n64_u64[0] =
        LANES64_OF(vadd_f32(vmul_f32(*(float32x2_t*)&a9,
                                     COERCE_AS(float32x2_t,
                                               LANES128(a12).n128_u64[0])),
                            ((float32x2_t){0})))
            .n64_u64[0];
    {
      __typeof__(v21) z_ = (__typeof__(v21)){0};
      LODWORD(z_) = LANES64_OF(vpadd_f32(v20, v20)).n64_u32[0];
      v21 = z_;
    }
    if (v16 <= 0x1.a36e2e0000000p-14f) {
      v30 = v21 / v17;
      v31 = 0x1.0000000000000p+0f;
      v18 = 0x0.0p+0f;
      if (v30 <= 0x1.0000000000000p+0f) {
        v31 = v30;
      }
      if (v30 >= 0x0.0p+0f) {
        v14 = v31;
      }
      else {
        v14 = 0x0.0p+0f;
      }
    }
    else {
      PSEUDO_LOW_LANE128(a13, n128_u64, LANES64(v15).n64_u64[0]);
      v22 = vmulq_f32(a13, a12);
      LANES128(v22).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_u64[0];
      LANES64(v23).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_u64[0];
      if (v17 <= 0x1.a36e2e0000000p-14f) {
        goto LABEL_20;
      }
      v24 = vmulq_f32(a13, *(float32x4_t*)&a9);
      LANES128(v24).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
              .n64_u64[0];
      LANES64(v25).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
              .n64_u64[0];
      v26 = (float)(PSEUDO_UNFUSED((float)-LANES64(v25).n64_f32[0] *
                                   LANES64(v25).n64_f32[0])) +
            (float)(v16 * v17);
      if (v26 == 0x0.0p+0f) {
        v18 = 0x0.0p+0f;
      }
      else {
        v27 = (float)((float)(LANES64(v25).n64_f32[0] * v21) -
                      (float)(PSEUDO_UNFUSED(v17 * LANES64(v23).n64_f32[0]))) /
              v26;
        v28 = 0x1.0000000000000p+0f;
        if (v27 <= 0x1.0000000000000p+0f) {
          v28 = v27;
        }
        v29 = v27 < 0x0.0p+0f;
        v18 = 0x0.0p+0f;
        if (!v29) {
          v18 = v28;
        }
      }
      v32 = v21 + (float)(LANES64(v25).n64_f32[0] * v18);
      if (v32 >= 0x0.0p+0f) {
        if (v32 <= v17) {
          v14 = v32 / v17;
        }
        else {
          v14 = 0x1.0000000000000p+0f;
          v35 = LANES64_OF(vsub_f32(v25, v23)).n64_f32[0] / v16;
          if (v35 <= 0x1.0000000000000p+0f) {
            v36 = v35;
          }
          else {
            v36 = 0x1.0000000000000p+0f;
          }
          if (v35 >= 0x0.0p+0f) {
            v18 = v36;
          }
          else {
            v18 = 0x0.0p+0f;
          }
        }
      }
      else {
      LABEL_20:
        v14 = 0x0.0p+0f;
        v33 = (float)-LANES64(v23).n64_f32[0] / v16;
        v34 = 0x1.0000000000000p+0f;
        if (v33 <= 0x1.0000000000000p+0f) {
          v34 = v33;
        }
        if (v33 >= 0x0.0p+0f) {
          v18 = v34;
        }
        else {
          v18 = 0x0.0p+0f;
        }
      }
    }
  }
  *a5 = v18;
  *a6 = v14;
  return result;
}

int8x16_t* llvm_libcxx_21_libcxx_include___vector_a57200(int8x16_t* result,
                                                         float32x4_t* a2,
                                                         float a3, double a4,
                                                         double a5, double a6)
{
  float v6;
  float v7;
  float v8;
  float32x4_t v9;
  float32x4_t* v10;
  float v11;
  int8x16_t v12;
  int8x16_t v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v21;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float v28;
  int8x16_t v29;
  float v30;
  float v31;
  float v32;
  float32x4_t v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float32x4_t v43;
  float32x4_t v44;
  float v45;
  float32x4_t v46;
  float32x4_t v47;
  float v48;
  int8x16_t v49;
  float v50;
  float32x4_t v51;
  float32x4_t v52;
  int8x16_t v53;
  float v54;
  float v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  int8x16_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  int8x16_t v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  int8x16_t v70;
  float32x4_t v71;
  int8x16_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  int8x16_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  int8x16_t v82;
  float32x4_t* v83;
  int8x16_t v84;
  int8x16_t v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v93;
  float32x4_t v95;
  float32x4_t v96;
  int8x16_t v97;
  float32x4_t v98;
  int8x16_t v99;
  float v100;
  int8x16_t v101;
  float v102;
  float v103;
  float v104;
  float32x4_t v105;
  float32x4_t v106;
  int8x16_t v107;
  int8x16_t v108;
  float32x4_t v109;
  int8x16_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  int8x16_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  int8x16_t v120;
  float v121;

  v6 = LANES128(*(result)).n128_f32[3];
  v7 = LANES128(a2[6]).n128_f32[2];
  if (LANES128(a2[9]).n128_u8[8] == 1) {
    v8 = v6 + v7;
    v9 = a2[5];
    v10 = (float32x4_t*)LANES128(*(a2)).n128_u64[0];
    v11 = v8 * v8;
    v121 = LANES128(a2[7]).n128_f32[2];
    if (LANES128(*(a2)).n128_u64[0] != 0) {
      v12 = *result;
      v13 = result[1];
      v14 = LANES128(v10[4]).n128_f32[1];
      {
        __typeof__(v15) z_ = (__typeof__(v15)){0};
        LODWORD(z_) = DWORDn(LANES128(*(result)).n128_u64[0],
                             sizeof(LANES128(*(result)).n128_u64[0]) / 4 - 1);
        v15 = z_;
      }
      {
        __typeof__(v16) z_ = (__typeof__(v16)){0};
        LODWORD(z_) = DWORDn(LANES128(result[1]).n128_u64[0],
                             sizeof(LANES128(result[1]).n128_u64[0]) / 4 - 1);
        v16 = z_;
      }
      v17 = LANES128(a2[4]).n128_f32[1];
      {
        __typeof__(v18) z_ = (__typeof__(v18)){0};
        LODWORD(z_) =
            v16 >= v15
                ? DWORDn(LANES128(*(result)).n128_u64[0],
                         sizeof(LANES128(*(result)).n128_u64[0]) / 4 - 1)
                : DWORDn(LANES128(result[1]).n128_u64[0],
                         sizeof(LANES128(result[1]).n128_u64[0]) / 4 - 1);
        v18 = z_;
      }
      v19 = v18 - v8;
      if (v14 >= v19 || v17 >= v19) {
        if (v15 < v16) {
          __typeof__(v15) z_ = (__typeof__(v15)){0};
          LODWORD(z_) = DWORDn(LANES128(result[1]).n128_u64[0],
                               sizeof(LANES128(result[1]).n128_u64[0]) / 4 - 1);
          v15 = z_;
        }
        v21 = v8 + v15;
        if (v14 <= v21 || v17 <= v21) {
          LANES128(v12).n128_u64[1] =
              LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u32[0];
          LANES128(v13).n128_u64[1] =
              LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u32[0];
          v23 = vsubq_f32(v13, v12);
          v24 = v10[4];
          v25 = vmulq_f32(v23, v23);
          v26 = vsubq_f32(a2[4], v24);
          LANES128(v25).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                  .n64_u64[0];
          v27 = vmulq_f32(v23, v26);
          v28 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                  .n64_f32[0];
          LANES128(v27).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                  .n64_u64[0];
          v29 = vmulq_f32(v26, v26);
          v30 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                  .n64_f32[0];
          LANES128(v29).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
                  .n64_u64[0];
          v31 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
                  .n64_f32[0];
          v32 = (float)(PSEUDO_UNFUSED((float)-v30 * v30)) + (float)(v28 * v31);
          if (v32 >= 0x1.0000000000000p-23f) {
            v68 = vsubq_f32(v12, v24);
            v69 = vmulq_f32(v26, v68);
            v70 = vmulq_f32(v23, v68);
            LANES128(v69).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v70).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v70, v70, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v69).n128_f32[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
                    .n64_f32[0];
            LANES128(v70).n128_f32[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
                    .n64_f32[0];
            v12 = vaddq_f32(
                v12,
                vmulq_n_f32(
                    v23,
                    fminf(
                        fmaxf((float)((float)(v30 * LANES128(v69).n128_f32[0]) -
                                      (float)(PSEUDO_UNFUSED(
                                          LANES128(v70).n128_f32[0] * v31))) /
                                  v32,
                              0x0.0p+0f),
                        0x1.0000000000000p+0f)));
            v33 = vaddq_f32(
                v24,
                vmulq_n_f32(
                    v26,
                    fminf(
                        fmaxf((float)((float)(v28 * LANES128(v69).n128_f32[0]) -
                                      (float)(PSEUDO_UNFUSED(
                                          LANES128(v70).n128_f32[0] * v30))) /
                                  v32,
                              0x0.0p+0f),
                        0x1.0000000000000p+0f)));
          }
          else {
            v33 = v10[4];
          }
          v71 = vsubq_f32(v33, v12);
          v72 = vmulq_f32(v71, v71);
          LANES128(v72).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v72, v72, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v72).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
                  .n64_u64[0];
          if (LANES128(v72).n128_f32[0] < v11) {
            LANES128(v72).n128_u64[1] = LANES128(v72).n128_u64[0];
            v73 = vrsqrteq_f32(v72);
            v74 = vmulq_f32(v73, vrsqrtsq_f32(v73, vmulq_f32(v72, v73)));
            v75 = vmulq_n_f32(
                vbicq_s8(
                    vmulq_f32(
                        v71,
                        vmulq_f32(v74, vrsqrtsq_f32(v74, vmulq_f32(v72, v74)))),
                    vceqzq_f32(v72)),
                v8 - LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v72).n128_u64[0])))
                         .n64_f32[0]);
            LANES128(v75).n128_u32[3] = 0;
            v76 = vaddq_f32(v24, v75);
            LANES128(v10[4]).n128_u64[0] = LANES128(v76).n128_u64[0];
            v77 = v10[4];
            LANES128(v77).n128_u64[1] = LANES128(v76).n128_u32[2];
            v10[4] = v77;
            v78 = vaddq_f32(a2[4], v75);
            LANES128(a2[4]).n128_u64[0] = LANES128(v78).n128_u64[0];
            v79 = a2[4];
            LANES128(v80).n128_u64[0] = LANES128(a2[4]).n128_u64[0];
            LANES128(v80).n128_u64[1] = LANES128(v78).n128_u32[2];
            LANES128(v79).n128_u64[1] =
                LANES128_OF(vextq_s8(v78, v78, 8u)).n128_u32[0];
            v81 = vsubq_f32(v79, v9);
            v82 = vmulq_f32(v75, v81);
            LANES128(v82).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v82, v82, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0])))
                    .n64_u64[0];
            a2[4] = vsubq_f32(
                v80,
                vmulq_n_f32(
                    vsubq_f32(
                        v81,
                        vmulq_n_f32(
                            v81,
                            LANES64_OF(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v82).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v82).n128_u64[0])))
                                .n64_f32[0])),
                    v121));
          }
        }
      }
    }
    v83 = (float32x4_t*)LANES128(a2[1]).n128_u64[1];
    if (v83 != nullptr) {
      v84 = *result;
      v85 = result[1];
      v86 = LANES128(v83[4]).n128_f32[1];
      {
        __typeof__(v87) z_ = (__typeof__(v87)){0};
        LODWORD(z_) = DWORDn(LANES128(*(result)).n128_u64[0],
                             sizeof(LANES128(*(result)).n128_u64[0]) / 4 - 1);
        v87 = z_;
      }
      {
        __typeof__(v88) z_ = (__typeof__(v88)){0};
        LODWORD(z_) = DWORDn(LANES128(result[1]).n128_u64[0],
                             sizeof(LANES128(result[1]).n128_u64[0]) / 4 - 1);
        v88 = z_;
      }
      v89 = LANES128(a2[4]).n128_f32[1];
      {
        __typeof__(v90) z_ = (__typeof__(v90)){0};
        LODWORD(z_) =
            v88 >= v87
                ? DWORDn(LANES128(*(result)).n128_u64[0],
                         sizeof(LANES128(*(result)).n128_u64[0]) / 4 - 1)
                : DWORDn(LANES128(result[1]).n128_u64[0],
                         sizeof(LANES128(result[1]).n128_u64[0]) / 4 - 1);
        v90 = z_;
      }
      v91 = v90 - v8;
      if (v86 >= v91 || v89 >= v91) {
        if (v87 < v88) {
          __typeof__(v87) z_ = (__typeof__(v87)){0};
          LODWORD(z_) = DWORDn(LANES128(result[1]).n128_u64[0],
                               sizeof(LANES128(result[1]).n128_u64[0]) / 4 - 1);
          v87 = z_;
        }
        v93 = v8 + v87;
        if (v86 <= v93 || v89 <= v93) {
          LANES128(v84).n128_u64[1] =
              LANES128_OF(vextq_s8(v84, v84, 8u)).n128_u32[0];
          LANES128(v85).n128_u64[1] =
              LANES128_OF(vextq_s8(v85, v85, 8u)).n128_u32[0];
          v95 = vsubq_f32(v85, v84);
          v96 = v83[4];
          v97 = vmulq_f32(v95, v95);
          v98 = vsubq_f32(a2[4], v96);
          LANES128(v97).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v97, v97, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0])))
                  .n64_u64[0];
          v99 = vmulq_f32(v95, v98);
          v100 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0])))
                  .n64_f32[0];
          LANES128(v99).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v99, v99, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0])))
                  .n64_u64[0];
          v101 = vmulq_f32(v98, v98);
          v102 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0])))
                  .n64_f32[0];
          LANES128(v101).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v101, v101, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
                  .n64_u64[0];
          v103 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
                  .n64_f32[0];
          v104 = (float)(PSEUDO_UNFUSED((float)-v102 * v102)) +
                 (float)(v100 * v103);
          if (v104 >= 0x1.0000000000000p-23f) {
            v106 = vsubq_f32(v84, v96);
            v107 = vmulq_f32(v98, v106);
            v108 = vmulq_f32(v95, v106);
            LANES128(v107).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v107, v107, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v108).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v108, v108, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v107).n128_f32[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0])))
                    .n64_f32[0];
            LANES128(v108).n128_f32[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])))
                    .n64_f32[0];
            v84 = vaddq_f32(
                v84,
                vmulq_n_f32(
                    v95,
                    fminf(
                        fmaxf(
                            (float)((float)(v102 * LANES128(v107).n128_f32[0]) -
                                    (float)(PSEUDO_UNFUSED(
                                        LANES128(v108).n128_f32[0] * v103))) /
                                v104,
                            0x0.0p+0f),
                        0x1.0000000000000p+0f)));
            v105 = vaddq_f32(
                v96,
                vmulq_n_f32(
                    v98,
                    fminf(
                        fmaxf(
                            (float)((float)(v100 * LANES128(v107).n128_f32[0]) -
                                    (float)(PSEUDO_UNFUSED(
                                        LANES128(v108).n128_f32[0] * v102))) /
                                v104,
                            0x0.0p+0f),
                        0x1.0000000000000p+0f)));
          }
          else {
            v105 = v83[4];
          }
          v109 = vsubq_f32(v105, v84);
          v110 = vmulq_f32(v109, v109);
          LANES128(v110).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v110).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
                  .n64_u64[0];
          if (LANES128(v110).n128_f32[0] < v11) {
            LANES128(v110).n128_u64[1] = LANES128(v110).n128_u64[0];
            v111 = vrsqrteq_f32(v110);
            v112 = vmulq_f32(v111, vrsqrtsq_f32(v111, vmulq_f32(v110, v111)));
            v113 = vmulq_n_f32(
                vbicq_s8(vmulq_f32(
                             v109,
                             vmulq_f32(v112, vrsqrtsq_f32(
                                                 v112, vmulq_f32(v110, v112)))),
                         vceqzq_f32(v110)),
                v8 - LANES64_OF(vsqrt_f32(COERCE_AS(
                                    float32x2_t, LANES128(v110).n128_u64[0])))
                         .n64_f32[0]);
            LANES128(v113).n128_u32[3] = 0;
            v114 = vaddq_f32(v96, v113);
            LANES128(v83[4]).n128_u64[0] = LANES128(v114).n128_u64[0];
            v115 = v83[4];
            LANES128(v115).n128_u64[1] = LANES128(v114).n128_u32[2];
            v83[4] = v115;
            v116 = vaddq_f32(a2[4], v113);
            LANES128(a2[4]).n128_u64[0] = LANES128(v116).n128_u64[0];
            v117 = a2[4];
            LANES128(v118).n128_u64[0] = LANES128(a2[4]).n128_u64[0];
            LANES128(v118).n128_u64[1] = LANES128(v116).n128_u32[2];
            LANES128(v117).n128_u64[1] =
                LANES128_OF(vextq_s8(v116, v116, 8u)).n128_u32[0];
            v119 = vsubq_f32(v117, v9);
            v120 = vmulq_f32(v113, v119);
            LANES128(v120).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v120, v120, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0])))
                    .n64_u64[0];
            v67 = vsubq_f32(
                v118,
                vmulq_n_f32(
                    vsubq_f32(
                        v119,
                        vmulq_n_f32(
                            v119,
                            LANES64_OF(
                                vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v120).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v120).n128_u64[0])))
                                .n64_f32[0])),
                    v121));
            goto LABEL_63;
          }
        }
      }
    }
  }
  else {
    v34 = v6 + (float)(v7 * a3);
    v35 = LANES128(*(result)).n128_f32[1];
    v36 = LANES128(result[1]).n128_f32[1];
    v37 = LANES128(a2[4]).n128_f32[1];
    if (v36 >= v35) {
      v38 = LANES128(*(result)).n128_f32[1];
    }
    else {
      v38 = LANES128(result[1]).n128_f32[1];
    }
    v39 = v38 - v34;
    if (v35 >= v36) {
      v40 = LANES128(*(result)).n128_f32[1];
    }
    else {
      v40 = LANES128(result[1]).n128_f32[1];
    }
    v41 = v34 + v40;
    if (v37 >= v39 && v37 <= v41) {
      LANES128(v43).n128_u64[0] = LANES128(*(result)).n128_u64[0];
      LANES128(v43).n128_u32[1] = LANES128(*(result)).n128_u32[1];
      {
        __typeof__(a6) z_ = (__typeof__(a6)){0};
        LODWORD(z_) = LANES128(*(result)).n128_u32[2];
        a6 = z_;
      }
      LANES128(v43).n128_f64[1] = a6;
      LANES128(v44).n128_u64[0] = LANES128(result[1]).n128_u64[0];
      LANES128(v44).n128_u32[1] = LANES128(result[1]).n128_u32[1];
      {
        __typeof__(a4) z_ = (__typeof__(a4)){0};
        LODWORD(z_) = LANES128(result[1]).n128_u32[2];
        a4 = z_;
      }
      v45 = LANES128(result[1]).n128_f32[3];
      LANES128(v44).n128_f64[1] = a4;
      v46 = a2[4];
      v47 = vsubq_f32(v44, v43);
      if (v45 >= 0x1.a36e2e0000000p-14f) {
        v49 = vmulq_f32(vsubq_f32(v46, v43), v47);
        LANES128(v49).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v49, v49, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
                .n64_u64[0];
        v48 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
                  .n64_f32[0] /
              v45;
      }
      else {
        v48 = 0x0.0p+0f;
      }
      v50 = 0x1.0000000000000p+0f;
      if (v48 <= 0x1.0000000000000p+0f) {
        v50 = v48;
      }
      if (v48 < 0x0.0p+0f) {
        v50 = 0x0.0p+0f;
      }
      v51 = vaddq_f32(v43, vmulq_n_f32(v47, v50));
      v52 = vsubq_f32(v51, v46);
      v53 = vmulq_f32(v52, v52);
      LANES128(v53).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v53, v53, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
              .n64_u64[0];
      v54 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
                .n64_f32[0];
      if (v54 < (float)(v34 * v34) && v54 > 0x0.0p+0f) {
        v55 = v34 - sqrtf(v54);
        v56 = a2[4];
        v57 = a2[5];
        v58 = vsubq_f32(v56, v51);
        v59 = vmulq_f32(v58, v58);
        LANES128(v59).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v59, v59, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0])))
                .n64_u64[0];
        LANES128(v59).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0])))
                .n64_u64[0];
        LANES128(v59).n128_u64[1] = LANES128(v59).n128_u64[0];
        v60 = vrsqrteq_f32(v59);
        v61 = vmulq_f32(v60, vrsqrtsq_f32(v60, vmulq_f32(v59, v60)));
        v62 = vbicq_s8(
            vmulq_f32(v58,
                      vmulq_f32(v61, vrsqrtsq_f32(v61, vmulq_f32(v59, v61)))),
            vceqzq_f32(v59));
        v63 = vaddq_f32(v56, vmulq_n_f32(v62, v55));
        LANES128(a2[4]).n128_u64[0] = LANES128(v63).n128_u64[0];
        v64 = a2[4];
        LANES128(v64).n128_u64[1] = LANES128(v63).n128_u32[2];
        v65 = vsubq_f32(v64, v57);
        v66 = vmulq_f32(v62, v65);
        LANES128(v66).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v66, v66, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0])))
                .n64_u64[0];
        v67 = vsubq_f32(
            v64,
            vmulq_n_f32(
                vsubq_f32(
                    v65, vmulq_n_f32(
                             v65, LANES64_OF(
                                      vpadd_f32(
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v66).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v66).n128_u64[0])))
                                      .n64_f32[0])),
                COERCE_FLOAT(*(_OWORD*)((char*)&a2[7] + 8))));
      LABEL_63:
        a2[4] = v67;
      }
    }
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___vector_a59220(__int64* a1, __int64 a2,
                                                   unsigned __int64 a3, char a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  bool v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    char gap0_[4];
    char v36;
    char gap5_[3];
    unsigned __int64 v37;
    __int64 v38;
    __int64 v39;
    unsigned __int64 v40;
    _QWORD* v41;
    __int64 v42;
    int v43;
  } f_;
  __int64 v44[2];

  if (a3 != 0) {
    v8 = 0;
    f_.v41 = nullptr;
    f_.v42 = 0;
    f_.v39 = 0;
    f_.v40 = 0;
    f_.v43 = 1065353216;
    while (1) {
      v9 = GameRoutine_1a09c60(a2 + v8, 44, a3 - v8);
      if (v9 == 0) {
        break;
      }
      v10 = v9 - a2;
      if (v9 - a2 == -1) {
        break;
      }
      v11 = v10 - v8;
      if (a3 - v8 < v10 - v8) {
        v11 = a3 - v8;
      }
      v44[0] = a2 + v8;
      v44[1] = v11;
      llvm_libcxx_21_libcxx_include___vector_a598e0((__int64)&f_.v39, v44, v44);
      v8 = v10 + 1;
      if (v10 + 1 >= a3) {
        goto LABEL_10;
      }
    }
    v44[0] = a2 + v8;
    v44[1] = a3 - v8;
    llvm_libcxx_21_libcxx_include___vector_a598e0((__int64)&f_.v39, v44, v44);
  LABEL_10:
    {
      v12 = *a1;
      __asm__ volatile("" ::"r"(v12));
    }
    {
      v13 = a1[1];
      __asm__ volatile("" ::"r"(v13));
    }
    if (*a1 != v13) {
      v14 = f_.v40;
      f_.v36 = a4 & 1;
      v15 = f_.v40 - 1;
      v17 = f_.v40 == 0 || f_.v42 == 0;
      f_.v37 = f_.v40 & v15;
      f_.v38 = f_.v39;
      do {
        {
          v18 = *(unsigned __int8*)(v12 + 104);
          __asm__ volatile("" ::"r"(v18));
        }
        v19 = (v18 & 1) == 0;
        v20 = v18 >> 1;
        if (v19) {
          v21 = v12 + 105;
        }
        else {
          v21 = *(_QWORD*)(v12 + 120);
          __asm__ volatile("" ::"r"(v21));
        }
        if (v19) {
          v22 = v20;
        }
        else {
          v22 = *(_QWORD*)(v12 + 112);
          __asm__ volatile("" ::"r"(v22));
        }
        if (!v17) {
          v23 = std___1___hash_memory(v21, v22);
          v24 = v23;
          if (f_.v37 != 0) {
            v25 = v23;
            if (v23 >= v14) {
              v25 = v23 % v14;
            }
          }
          else {
            v25 = v23 & v15;
          }
          {
            v26 = *(_QWORD**)(f_.v38 + 8 * v25);
            __asm__ volatile("" ::"r"(v26));
          }
          if (v26 != nullptr) {
            v27 = (_QWORD*)*v26;
            if (*v26 != 0) {
              if ((v14 & v15) == 0) {
                while (1) {
                  {
                    v29 = v27[1];
                    __asm__ volatile("" ::"r"(v29));
                  }
                  if (v24 == v29) {
                    if (v27[3] == v22 &&
                        GameRoutine_1a09cf0(v27[2], v21, v22) == 0) {
                      goto LABEL_18;
                    }
                  }
                  else if ((v29 & v15) != v25) {
                    goto LABEL_19;
                  }
                  v27 = (_QWORD*)*v27;
                  if (v27 == nullptr) {
                    goto LABEL_19;
                  }
                }
              }
              do {
                {
                  v28 = v27[1];
                  __asm__ volatile("" ::"r"(v28));
                }
                if (v24 == v28) {
                  if (v27[3] == v22 &&
                      GameRoutine_1a09cf0(v27[2], v21, v22) == 0) {
                  LABEL_18:
                    *(_BYTE*)(v12 + 133) = f_.v36;
                    break;
                  }
                }
                else {
                  if (v28 >= v14) {
                    v28 %= v14;
                  }
                  if (v28 != v25) {
                    break;
                  }
                }
                v27 = (_QWORD*)*v27;
              } while (v27 != nullptr);
            }
          }
        }
      LABEL_19:
        v12 += 176;
      } while (v12 != v13);
    }
    v30 = f_.v41;
    v31 = fw_memory_g_heap_manager_ptr;
    if (f_.v41 != nullptr) {
      do {
        v32 = (_QWORD*)*v30;
        if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
          v33 = 128;
        }
        else {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v33, (__int64)v30);
        v30 = v32;
      } while (v32 != nullptr);
    }
    v34 = f_.v39;
    f_.v39 = 0;
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v35, v34);
    }
  }
}

__int64 llvm_libcxx_21_libcxx_include___vector_ad1740(float* a1, __int64 a2,
                                                      unsigned __int64 a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  int v35;
  char* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  _QWORD* v54;
  __int64* v55;
  unsigned __int64 v56;
  float v57;
  __int64 v58;
  float v59;
  float v60;
  _BOOL8 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 primeEm;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  _QWORD* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  _QWORD* v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  _QWORD* v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  _QWORD* v95;
  __int64 result;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  unsigned __int64 v100;
  _QWORD* v101;
  __int64* v102;
  unsigned __int16 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  _QWORD* v107;
  _BYTE* v108;
  const char* v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  char* v112;
  __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  _QWORD* v120;
  _QWORD* v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  _QWORD* v131;
  char v132;
  unsigned __int64 v133;
  _QWORD* v134;
  __int64 v135;
  int v136;
  __int64 v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  float v140;
  float v141;
  _BOOL8 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  unsigned __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  _QWORD* v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  _QWORD* v158;
  unsigned __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  _QWORD* v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  _QWORD* v168;
  _QWORD* v169;
  unsigned __int64 v170;
  _QWORD* v171;
  _QWORD* v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  unsigned __int64 v178;
  unsigned __int64 v179;
  _QWORD* v180;
  _QWORD* v181;
  unsigned __int64 v182;
  __int64 v183;
  _QWORD* v184;
  float v185;
  float v186;
  float v187;
  _BOOL8 v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  __int64 v195;
  float* v196;
  float* v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  __int64* v202;
  __int64 v203;
  __int64 v204;
  int v205;
  __int64 v206;
  _QWORD* v207;
  __int64 v208;
  unsigned int v209;
  __int64* v210;
  unsigned __int64 v211;
  char v212;
  struct {
    __int64 v213;
    unsigned __int64 v214;
    char* v215;
  } v213_;
  struct {
    __int64* v216;
    unsigned __int64 v217;
    char* v218;
    __int64 v219;
    unsigned __int64 v220;
    _QWORD* v221;
    __int64 v222;
    int v223;
  } v216_;

  v4 = *((_QWORD*)a1 + 3);
  if (v4 != 0 && *((_QWORD*)a1 + 5) != 0) {
    v9 = std___1___hash_memory(a2, a3);
    v3 = v4 - 1;
    v10 = v9;
    if ((v4 & (v4 - 1)) != 0) {
      v11 = v9;
      if (v9 >= v4) {
        v11 = v9 % v4;
      }
    }
    else {
      v11 = v9 & v3;
    }
    v12 = *(__int64**)(*((_QWORD*)a1 + 2) + 8 * v11);
    if (v12 != nullptr) {
      v13 = *v12;
      if (*v12 != 0) {
        if ((v4 & v3) == 0) {
          while (1) {
            v18 = *(_QWORD*)(v13 + 8);
            if (v18 == v10) {
              v19 = *(unsigned __int8*)(v13 + 16);
              v20 = *(_QWORD*)(v13 + 24);
              if ((v19 & 1) == 0) {
                v20 = v19 >> 1;
              }
              if (a3 == v20) {
                v21 = (v19 & 1) != 0 ? *(_QWORD*)(v13 + 32) : v13 + 17;
                if (GameRoutine_1a09cf0(a2, v21, a3) == 0) {
                  goto LABEL_36;
                }
              }
            }
            else if ((v18 & v3) != v11) {
              goto LABEL_39;
            }
            v13 = *(_QWORD*)v13;
            if (v13 == 0) {
              goto LABEL_39;
            }
          }
        }
        do {
          v14 = *(_QWORD*)(v13 + 8);
          if (v14 == v10) {
            v15 = *(unsigned __int8*)(v13 + 16);
            v16 = *(_QWORD*)(v13 + 24);
            if ((v15 & 1) == 0) {
              v16 = v15 >> 1;
            }
            if (a3 == v16) {
              v17 = (v15 & 1) != 0 ? *(_QWORD*)(v13 + 32) : v13 + 17;
              if (GameRoutine_1a09cf0(a2, v17, a3) == 0) {
              LABEL_36:
                v22 = *(_QWORD*)(v13 + 40);
                GameRoutine_636000(*(_QWORD*)(v22 + 8), v22);
                v23 = *((_QWORD*)a1 + 3);
                v24 = *(_QWORD*)(v13 + 8);
                v25 = v23 - 1;
                if ((v23 & (v23 - 1)) != 0) {
                  if (v24 >= v23) {
                    v24 %= v23;
                  }
                }
                else {
                  v24 &= v25;
                }
                v195 = *((_QWORD*)a1 + 2);
                v196 = *(float**)(v195 + 8 * v24);
                do {
                  v197 = v196;
                  v196 = *(float**)v196;
                } while (v196 != (float*)v13);
                if (v197 == a1 + 8) {
                  goto LABEL_420;
                }
                v198 = *((_QWORD*)v197 + 1);
                if ((v23 & v25) != 0) {
                  if (v198 >= v23) {
                    v198 %= v23;
                  }
                }
                else {
                  v198 &= v25;
                }
                if (v198 != v24) {
                LABEL_420:
                  if (*(_QWORD*)v13 == 0) {
                    goto LABEL_421;
                  }
                  v199 = *(_QWORD*)(*(_QWORD*)v13 + 8LL);
                  if ((v23 & v25) != 0) {
                    if (v199 >= v23) {
                      v199 %= v23;
                    }
                  }
                  else {
                    v199 &= v25;
                  }
                  if (v199 != v24) {
                  LABEL_421:
                    *(_QWORD*)(v195 + 8 * v24) = 0;
                  }
                }
                v200 = *(_QWORD*)v13;
                if (*(_QWORD*)v13 != 0) {
                  v201 = *(_QWORD*)(v200 + 8);
                  if ((v23 & v25) != 0) {
                    if (v201 >= v23) {
                      v201 %= v23;
                    }
                  }
                  else {
                    v201 &= v25;
                  }
                  if (v201 != v24) {
                    *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v201) = v197;
                    v200 = *(_QWORD*)v13;
                  }
                }
                *(_QWORD*)v197 = v200;
                *(_QWORD*)v13 = 0;
                --*((_QWORD*)a1 + 5);
                v202 = (__int64*)fw_memory_g_heap_manager_ptr;
                if ((*(_BYTE*)(v13 + 16) & 1) != 0) {
                  v203 = *(_QWORD*)(v13 + 32);
                  if (v203 != 0) {
                    v204 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v204 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v204, v203);
                  }
                }
                v29 = *v202;
                v28 = v13;
              LABEL_48:
                v30 = 128;
                if (*(_QWORD*)(v29 + 200) == 0) {
                  v30 = 56;
                }
                nn_mem_StandardAllocator_Free(v29 + v30, v28);
                goto LABEL_51;
              }
            }
          }
          else {
            if (v14 >= v4) {
              v14 %= v4;
            }
            if (v14 != v11) {
              break;
            }
          }
          v13 = *(_QWORD*)v13;
        } while (v13 != 0);
      }
    }
  }
LABEL_39:
  llvm_libcxx_21_libcxx_include___vector_ad1560((void*)(&v216_.v216), a2, a3);
  if (((unsigned __int8)v216_.v216 & 1) != 0) {
    v26 = v216_.v217;
  }
  else {
    v26 = (unsigned __int64)(unsigned __int8)v216_.v216 >> 1;
  }
  if (((unsigned __int8)v216_.v216 & 1) != 0) {
    v27 = v216_.v218;
  }
  else {
    v27 = (char*)&v216_.v216 + 1;
  }
  v22 = (*(__int64 (**)(_QWORD, char*, unsigned __int64))(
      **(_QWORD**)(*(_QWORD*)a1 + 13432LL) + 72LL))(
      *(_QWORD*)(*(_QWORD*)a1 + 13432LL), v27, v26);
  if (((unsigned __int8)v216_.v216 & 1) != 0) {
    v28 = (__int64)v216_.v218;
    if (v216_.v218 != nullptr) {
      v29 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      goto LABEL_48;
    }
  }
LABEL_51:
  v31 = *(_QWORD*)(GameRoutine_5fc0e0(*(_QWORD*)(v22 + 592)) + 32);
  GameRoutine_5fbb80(v31, *(_QWORD*)a1 + 568LL, 0);
  v206 = v31;
  *(_QWORD*)(v31 + 32) = v22;
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_435:
    String_60a1d0();
  }
  v32 = *((_QWORD*)a1 + 10);
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (a3 | 7) + 1;
    }
    v33 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v34,
                                                16, 0);
    v216_.v217 = a3;
    v216_.v218 = v33;
    v216_.v216 = (__int64*)(v34 | 1);
  }
  else {
    LOBYTE(v216_.v216) = 2 * a3;
    v33 = (char*)&v216_.v216 + 1;
    if (a3 == 0) {
      goto LABEL_60;
    }
  }
  GameRoutine_1a0b940((__int64)v33, a2, a3);
LABEL_60:
  v33[a3] = 0;
  v35 = (unsigned __int8)v216_.v216 & 1;
  if (v35 != 0) {
    v36 = v216_.v218;
  }
  else {
    v36 = (char*)&v216_.v216 + 1;
  }
  if (((unsigned __int8)v216_.v216 & 1) != 0) {
    v37 = v216_.v217;
  }
  else {
    v37 = (unsigned __int64)(unsigned __int8)v216_.v216 >> 1;
  }
  v38 = std___1___hash_memory((__int64)v36, v37);
  v39 = *((_QWORD*)a1 + 8);
  v40 = v38;
  if (v39 != 0) {
    v41 = v39 - 1;
    if ((v39 & (v39 - 1)) != 0) {
      v3 = v38;
      if (v38 >= v39) {
        v3 = v38 % v39;
      }
    }
    else {
      v3 = v41 & v38;
    }
    v42 = *(_QWORD**)(*((_QWORD*)a1 + 7) + 8 * v3);
    if (v42 != nullptr) {
      v43 = (_QWORD*)*v42;
      if (*v42 != 0) {
        if ((v39 & v41) == 0) {
          while (1) {
            v48 = v43[1];
            if (v48 == v40) {
              v49 = *((unsigned __int8*)v43 + 16);
              v50 = v43[3];
              if ((v49 & 1) == 0) {
                v50 = v49 >> 1;
              }
              if (v50 == v37) {
                v51 = (v49 & 1) != 0 ? v43[4] : (__int64)v43 + 17;
                if (GameRoutine_1a09cf0(v51, (__int64)v36, v37) == 0) {
                  goto LABEL_99;
                }
              }
            }
            else if ((v48 & v41) != v3) {
              goto LABEL_100;
            }
            v43 = (_QWORD*)*v43;
            if (v43 == nullptr) {
              goto LABEL_100;
            }
          }
        }
        do {
          v44 = v43[1];
          if (v44 == v40) {
            v45 = *((unsigned __int8*)v43 + 16);
            v46 = v43[3];
            if ((v45 & 1) == 0) {
              v46 = v45 >> 1;
            }
            if (v46 == v37) {
              v47 = (v45 & 1) != 0 ? v43[4] : (__int64)v43 + 17;
              if (GameRoutine_1a09cf0(v47, (__int64)v36, v37) == 0) {
              LABEL_99:
                v52 = v206;
                goto LABEL_175;
              }
            }
          }
          else {
            if (v44 >= v39) {
              v44 %= v39;
            }
            if (v44 != v3) {
              break;
            }
          }
          v43 = (_QWORD*)*v43;
        } while (v43 != nullptr);
      }
    }
  }
LABEL_100:
  v53 = (__int64*)fw_memory_g_heap_manager_ptr;
  v54 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v55 = v216_.v216;
  v56 = v216_.v217;
  v57 = a1[22];
  v43 = v54;
  *v54 = 0;
  v54[1] = v40;
  v216_.v216 = nullptr;
  v216_.v217 = 0;
  v54[6] = 0;
  v54[2] = v55;
  v54[3] = v56;
  v58 = (__int64)v216_.v218;
  v216_.v218 = nullptr;
  v54[4] = v58;
  v54[5] = 0;
  v59 = (float)(unsigned __int64)(*((_QWORD*)a1 + 10) + 1LL);
  if (v39 == 0 || (float)(v57 * (float)v39) < v59) {
    v60 = v59 / v57;
    v61 = true;
    if (v39 >= 3) {
      v61 = (v39 & (v39 - 1)) != 0;
    }
    v62 = v61 | (2 * v39);
    v63 = vcvtps_u64_f32(v60);
    if (v62 <= v63) {
      primeEm = v63;
    }
    else {
      primeEm = v62;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v65 = *((_QWORD*)a1 + 8);
    if (primeEm <= v65) {
      if (primeEm >= v65) {
        goto LABEL_161;
      }
      v71 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 10) / a1[22]);
      if (v65 < 3 || (v65 & (v65 - 1)) != 0) {
        v71 = std___1___next_prime(v71);
      }
      else {
        v72 = 1LL << -(char)__clz(v71 - 1);
        if (v71 >= 2) {
          v71 = v72;
        }
      }
      if (primeEm <= v71) {
        primeEm = v71;
      }
      if (primeEm >= v65) {
        goto LABEL_161;
      }
      if (primeEm == 0) {
        v86 = *((_QWORD*)a1 + 7);
        *((_QWORD*)a1 + 7) = 0;
        if (v86 != 0) {
          v87 = 128;
          if (*(_QWORD*)(*v53 + 200) == 0) {
            v87 = 56;
          }
          nn_mem_StandardAllocator_Free(*v53 + v87, v86);
        }
        *((_QWORD*)a1 + 8) = 0;
        goto LABEL_161;
      }
    }
    if (primeEm >> 61 != 0) {
    LABEL_436:
      GameRoutine_60a210();
    }
    v66 = fw_memory_HeapManager_Allocate(*v53, 8 * primeEm, 16, 0);
    v67 = *((_QWORD*)a1 + 7);
    *((_QWORD*)a1 + 7) = v66;
    if (v67 != 0) {
      v68 = 128;
      if (*(_QWORD*)(*v53 + 200) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free(*v53 + v68, v67);
    }
    v69 = primeEm & 7;
    *((_QWORD*)a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v70 = 0;
      do {
        *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v70) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v70 + 8) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v70 + 16) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v70 + 24) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v70 + 32) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v70 + 40) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v70 + 48) = 0;
        v73 = *((_QWORD*)a1 + 7) + 8 * v70;
        v70 += 8;
        *(_QWORD*)(v73 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v70);
    }
    else {
      v70 = 0;
    }
    if ((primeEm & 7) != 0) {
      v74 = 8 * v70;
      do {
        --v69;
        *(_QWORD*)(*((_QWORD*)a1 + 7) + v74) = 0;
        v74 += 8;
      } while (v69 != 0);
    }
    v76 = a1 + 18;
    v75 = *((_QWORD**)a1 + 9);
    if (v75 == nullptr) {
      goto LABEL_161;
    }
    v77 = v75[1];
    v78 = primeEm - 1;
    if ((primeEm & (primeEm - 1)) == 0) {
      v82 = v77 & v78;
      *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v82) = v76;
      while (1) {
        v83 = (_QWORD*)*v75;
        if (*v75 == 0) {
          break;
        }
        v84 = v83[1] & v78;
        if (v84 == v82) {
          v75 = (_QWORD*)*v75;
        }
        else {
          v85 = *((_QWORD*)a1 + 7);
          if (*(_QWORD*)(v85 + 8 * v84) != 0) {
            *v75 = *v83;
            *v83 = **(_QWORD**)(*((_QWORD*)a1 + 7) + 8 * v84);
            **(_QWORD**)(*((_QWORD*)a1 + 7) + 8 * v84) = v83;
          }
          else {
            *(_QWORD*)(v85 + 8 * v84) = v75;
            v75 = v83;
            v82 = v84;
          }
        }
      }
    LABEL_161:
      v39 = *((_QWORD*)a1 + 8);
      if ((v39 & (v39 - 1)) != 0) {
        if (v40 >= v39) {
          v3 = v40 % v39;
        }
        else {
          v3 = v40;
        }
      }
      else {
        v3 = (v39 - 1) & v40;
      }
      goto LABEL_166;
    }
    if (v77 >= primeEm) {
      v77 %= primeEm;
    }
    *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v77) = v76;
    v79 = (_QWORD*)*v75;
    if (*v75 == 0) {
      goto LABEL_161;
    }
    while (1) {
      v80 = v79[1];
      if (v80 >= primeEm) {
        v80 %= primeEm;
      }
      if (v80 != v77) {
        v81 = *((_QWORD*)a1 + 7);
        if (*(_QWORD*)(v81 + 8 * v80) == 0) {
          *(_QWORD*)(v81 + 8 * v80) = v75;
          goto LABEL_138;
        }
        *v75 = *v79;
        *v79 = **(_QWORD**)(*((_QWORD*)a1 + 7) + 8 * v80);
        **(_QWORD**)(*((_QWORD*)a1 + 7) + 8 * v80) = v79;
        v79 = v75;
      }
      v80 = v77;
    LABEL_138:
      v75 = v79;
      v79 = (_QWORD*)*v79;
      v77 = v80;
      if (v79 == nullptr) {
        goto LABEL_161;
      }
    }
  }
LABEL_166:
  v88 = *((_QWORD*)a1 + 7);
  v89 = *(_QWORD**)(v88 + 8 * v3);
  if (v89 != nullptr) {
    v52 = v206;
    *v43 = *v89;
    *v89 = v43;
  }
  else {
    v90 = *((_QWORD*)a1 + 9);
    v52 = v206;
    *((_QWORD*)a1 + 9) = v43;
    *v43 = v90;
    *(_QWORD*)(v88 + 8 * v3) = a1 + 18;
    if (*v43 != 0) {
      v91 = *(_QWORD*)(*v43 + 8LL);
      if ((v39 & (v39 - 1)) != 0) {
        if (v91 >= v39) {
          v91 %= v39;
        }
      }
      else {
        v91 &= v39 - 1;
      }
      *(_QWORD*)(*((_QWORD*)a1 + 7) + 8 * v91) = v43;
    }
  }
  ++*((_QWORD*)a1 + 10);
  v35 = (unsigned __int8)v216_.v216 & 1;
LABEL_175:
  v43[5] = v52;
  *((_DWORD*)v43 + 12) = v32;
  if (v35 != 0 && v216_.v218 != nullptr) {
    v92 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v92 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v92,
                                  (__int64)v216_.v218);
  }
  v93 = *(_QWORD*)v52;
  v94 = GameRoutine_1a09c70((const char*)(*(_QWORD*)v52 + 2LL));
  v213_.v213 = std___1___hash_memory(v93 + 2, v94);
  v216_.v216 = &v213_.v213;
  v95 = gfx_ad4540(a1 + 24, (unsigned __int64*)&v213_.v213,
                   (__int64)std___1_piecewise_construct_ptr, &v216_.v216);
  result = GameRoutine_60a020((__int64)(v95 + 3), (const char*)(v93 + 2));
  if (*(_WORD*)(v52 + 64) != 0) {
    v97 = 0;
    v205 = 100 * v32;
    v207 = a1 + 38;
    v98 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v208 = v97;
      v102 = (__int64*)(*(_QWORD*)(v52 + 16) + (v97 << 8));
      v103 = *((_WORD*)v102 + 114);
      if (v103 != 0) {
        break;
      }
    LABEL_182:
      v99 = *v102;
      v100 = GameRoutine_1a09c70((const char*)(*v102 + 2));
      v213_.v213 = std___1___hash_memory(v99 + 2, v100);
      v216_.v216 = &v213_.v213;
      v101 = gfx_ad4540(a1 + 24, (unsigned __int64*)&v213_.v213,
                        (__int64)std___1_piecewise_construct_ptr, &v216_.v216);
      result = GameRoutine_60a020((__int64)(v101 + 3), (const char*)(v99 + 2));
      v52 = v206;
      v97 = v208 + 1;
      if (v208 + 1 >= (unsigned __int64)*(unsigned __int16*)(v206 + 64)) {
        return result;
      }
    }
    v104 = 0;
    v209 = v97 + v205;
    v210 = (__int64*)(*(_QWORD*)(v52 + 16) + (v97 << 8));
    v211 = (int)v97 + v205;
    while (1) {
      v108 = *(_BYTE**)(v102[1] + 40 * v104);
      v109 = v108 + 2;
      if (v108[2] == 99 && v108[3] == 111 && v108[4] == 95) {
        break;
      }
    LABEL_190:
      if (++v104 >= (unsigned __int64)v103) {
        goto LABEL_182;
      }
    }
    v110 = GameRoutine_1a09c70(v109);
    if (v110 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_435;
    }
    v111 = v110;
    if (v110 >= 0x17) {
      if ((v110 | 7) == 0x17) {
        v113 = 26;
      }
      else {
        v113 = (v110 | 7) + 1;
      }
      v112 = (char*)fw_memory_HeapManager_Allocate(*v98, v113, 16, 0);
      v213_.v214 = v111;
      v213_.v215 = v112;
      v213_.v213 = v113 | 1;
    }
    else {
      v112 = (char*)&v213_.v213 + 1;
      LOBYTE(v213_.v213) = 2 * v110;
      if (v110 == 0) {
        goto LABEL_203;
      }
    }
    GameRoutine_1a0b940((__int64)v112, (__int64)v109, v111);
  LABEL_203:
    v112[v111] = 0;
    v212 = v213_.v213;
    if ((v213_.v213 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)&v216_.v216, (__int64)v213_.v215,
                                    v213_.v214);
    }
    else {
      v216_.v216 = (__int64*)v213_.v213;
      v216_.v217 = v213_.v214;
      v216_.v218 = v213_.v215;
    }
    v216_.v221 = nullptr;
    v216_.v222 = 0;
    v216_.v219 = 0;
    v216_.v220 = 0;
    v216_.v223 = 1065353216;
    if (((unsigned __int8)v216_.v216 & 1) != 0) {
      v105 = (unsigned __int64)v216_.v218;
    }
    else {
      v105 = (unsigned __int64)&v216_.v216 + 1;
    }
    if (((unsigned __int8)v216_.v216 & 1) != 0) {
      v114 = v216_.v217;
    }
    else {
      v114 = (unsigned __int64)(unsigned __int8)v216_.v216 >> 1;
    }
    v115 = std___1___hash_memory(v105, v114);
    v116 = *((_QWORD*)a1 + 18);
    v117 = v115;
    if (v116 != 0) {
      v118 = v116 - 1;
      if ((v116 & (v116 - 1)) != 0) {
        v111 = v115;
        if (v115 >= v116) {
          v111 = v115 % v116;
        }
      }
      else {
        v111 = v118 & v115;
      }
      v120 = *(_QWORD**)(*((_QWORD*)a1 + 17) + 8 * v111);
      if (v120 != nullptr) {
        v121 = (_QWORD*)*v120;
        if (*v120 != 0) {
          if ((v116 & v118) != 0) {
            while (1) {
              v122 = v121[1];
              if (v122 == v117) {
                v123 = *((unsigned __int8*)v121 + 16);
                v124 = v121[3];
                if ((v123 & 1) == 0) {
                  v124 = v123 >> 1;
                }
                if (v124 == v114) {
                  v125 = (v123 & 1) != 0 ? v121[4] : (__int64)v121 + 17;
                  if (GameRoutine_1a09cf0(v125, v105, v114) == 0) {
                    goto LABEL_248;
                  }
                }
              }
              else {
                if (v122 >= v116) {
                  v122 %= v116;
                }
                if (v122 != v111) {
                  goto LABEL_249;
                }
              }
              v121 = (_QWORD*)*v121;
              if (v121 == nullptr) {
                goto LABEL_249;
              }
            }
          }
          do {
            v126 = v121[1];
            if (v126 == v117) {
              v127 = *((unsigned __int8*)v121 + 16);
              v128 = v121[3];
              if ((v127 & 1) == 0) {
                v128 = v127 >> 1;
              }
              if (v128 == v114) {
                v129 = (v127 & 1) != 0 ? v121[4] : (__int64)v121 + 17;
                if (GameRoutine_1a09cf0(v129, v105, v114) == 0) {
                LABEL_248:
                  v130 = v211;
                  goto LABEL_340;
                }
              }
            }
            else if ((v126 & v118) != v111) {
              break;
            }
            v121 = (_QWORD*)*v121;
          } while (v121 != nullptr);
        }
      }
    }
  LABEL_249:
    v131 = (_QWORD*)fw_memory_HeapManager_Allocate(*v98, 80, 16, 0);
    v132 = (char)v216_.v216;
    v121 = v131;
    *v131 = 0;
    v131[1] = v117;
    if ((v132 & 1) != 0) {
      fw_text_String_CopyTerminated(v131 + 2, (__int64)v216_.v218, v216_.v217);
    }
    else {
      v133 = v216_.v217;
      v131[2] = v216_.v216;
      v131[3] = v133;
      v131[4] = v216_.v218;
    }
    v134 = v216_.v221;
    v135 = v216_.v222;
    v136 = v216_.v223;
    v121[7] = v216_.v221;
    v137 = v216_.v219;
    v138 = v216_.v220;
    v216_.v219 = 0;
    v216_.v220 = 0;
    v121[5] = v137;
    v121[6] = v138;
    v121[8] = v135;
    *((_DWORD*)v121 + 18) = v136;
    if (v135 != 0) {
      v139 = v134[1];
      if ((v138 & (v138 - 1)) != 0) {
        if (v139 >= v138) {
          v139 %= v138;
        }
      }
      else {
        v139 &= v138 - 1;
      }
      *(_QWORD*)(v137 + 8 * v139) = v121 + 7;
      v216_.v221 = nullptr;
      v216_.v222 = 0;
    }
    v140 = a1[42];
    v141 = (float)(unsigned __int64)(*((_QWORD*)a1 + 20) + 1LL);
    if (v116 != 0 && (float)(v140 * (float)v116) >= v141) {
      goto LABEL_327;
    }
    v142 = v116 < 3 || (v116 & (v116 - 1)) != 0;
    v143 = v142 | (2 * v116);
    v144 = vcvtps_u64_f32(v141 / v140);
    if (v143 <= v144) {
      v105 = v144;
    }
    else {
      v105 = v143;
    }
    if (v105 == 1) {
      v105 = 2;
    }
    else if ((v105 & (v105 - 1)) != 0) {
      v105 = std___1___next_prime(v105);
    }
    v145 = *((_QWORD*)a1 + 18);
    if (v105 <= v145) {
      if (v105 >= v145) {
        goto LABEL_322;
      }
      v150 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 20) / a1[42]);
      if (v145 < 3 || (v145 & (v145 - 1)) != 0) {
        v150 = std___1___next_prime(v150);
      }
      else {
        v151 = 1LL << -(char)__clz(v150 - 1);
        if (v150 >= 2) {
          v150 = v151;
        }
      }
      if (v105 <= v150) {
        v105 = v150;
      }
      if (v105 >= v145) {
        goto LABEL_322;
      }
      if (v105 == 0) {
        v165 = *((_QWORD*)a1 + 17);
        *((_QWORD*)a1 + 17) = 0;
        if (v165 != 0) {
          v166 = 56;
          if (*(_QWORD*)(*v98 + 200) != 0) {
            v166 = 128;
          }
          nn_mem_StandardAllocator_Free(*v98 + v166, v165);
        }
        *((_QWORD*)a1 + 18) = 0;
        goto LABEL_322;
      }
    }
    if (v105 >> 61 != 0) {
      goto LABEL_436;
    }
    v146 = fw_memory_HeapManager_Allocate(*v98, 8 * v105, 16, 0);
    v147 = *((_QWORD*)a1 + 17);
    *((_QWORD*)a1 + 17) = v146;
    if (v147 != 0) {
      v148 = 56;
      if (*(_QWORD*)(*v98 + 200) != 0) {
        v148 = 128;
      }
      nn_mem_StandardAllocator_Free(*v98 + v148, v147);
    }
    *((_QWORD*)a1 + 18) = v105;
    if (v105 >= 8) {
      v149 = 0;
      do {
        *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v149) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v149 + 8) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v149 + 16) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v149 + 24) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v149 + 32) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v149 + 40) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v149 + 48) = 0;
        v152 = *((_QWORD*)a1 + 17) + 8 * v149;
        v149 += 8;
        *(_QWORD*)(v152 + 56) = 0;
      } while ((v105 & 0x1FFFFFFFFFFFFFF8LL) != v149);
    }
    else {
      v149 = 0;
    }
    v153 = v105 & 7;
    if ((v105 & 7) != 0) {
      v154 = 8 * v149;
      do {
        --v153;
        *(_QWORD*)(*((_QWORD*)a1 + 17) + v154) = 0;
        v154 += 8;
      } while (v153 != 0);
    }
    v155 = (_QWORD*)*v207;
    if (*v207 == 0) {
      goto LABEL_322;
    }
    v156 = v155[1];
    v157 = v105 - 1;
    if ((v105 & (v105 - 1)) == 0) {
      v161 = v156 & v157;
      *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v161) = v207;
      while (1) {
        v162 = (_QWORD*)*v155;
        if (*v155 == 0) {
          break;
        }
        v163 = v162[1] & v157;
        if (v163 == v161) {
          v155 = (_QWORD*)*v155;
        }
        else {
          v164 = *((_QWORD*)a1 + 17);
          if (*(_QWORD*)(v164 + 8 * v163) != 0) {
            *v155 = *v162;
            *v162 = **(_QWORD**)(*((_QWORD*)a1 + 17) + 8 * v163);
            **(_QWORD**)(*((_QWORD*)a1 + 17) + 8 * v163) = v162;
          }
          else {
            *(_QWORD*)(v164 + 8 * v163) = v155;
            v155 = v162;
            v161 = v163;
          }
        }
      }
    LABEL_322:
      v116 = *((_QWORD*)a1 + 18);
      if ((v116 & (v116 - 1)) != 0) {
        if (v117 >= v116) {
          v111 = v117 % v116;
        }
        else {
          v111 = v117;
        }
      }
      else {
        v111 = (v116 - 1) & v117;
      }
    LABEL_327:
      v167 = *((_QWORD*)a1 + 17);
      v168 = *(_QWORD**)(v167 + 8 * v111);
      if (v168 != nullptr) {
        v130 = v211;
        *v121 = *v168;
        *v168 = v121;
      }
      else {
        v130 = v211;
        v169 = (_QWORD*)*v207;
        *v207 = v121;
        *v121 = v169;
        *(_QWORD*)(v167 + 8 * v111) = v207;
        if (*v121 != 0) {
          v170 = *(_QWORD*)(*v121 + 8LL);
          if ((v116 & (v116 - 1)) != 0) {
            if (v170 >= v116) {
              v170 %= v116;
            }
          }
          else {
            v170 &= v116 - 1;
          }
          *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v170) = v121;
        }
      }
      v171 = v216_.v221;
      ++*((_QWORD*)a1 + 20);
      if (v171 != nullptr) {
        do {
          v172 = (_QWORD*)*v171;
          if (*(_QWORD*)(*v98 + 200) != 0) {
            v173 = 128;
          }
          else {
            v173 = 56;
          }
          nn_mem_StandardAllocator_Free(*v98 + v173, (__int64)v171);
          v171 = v172;
        } while (v172 != nullptr);
      }
    LABEL_340:
      v174 = v216_.v219;
      v216_.v219 = 0;
      if (v174 != 0) {
        if (*(_QWORD*)(*v98 + 200) != 0) {
          v175 = 128;
        }
        else {
          v175 = 56;
        }
        nn_mem_StandardAllocator_Free(*v98 + v175, v174);
      }
      if (((unsigned __int8)v216_.v216 & 1) != 0 && v216_.v218 != nullptr) {
        if (*(_QWORD*)(*v98 + 200) != 0) {
          v176 = 128;
        }
        else {
          v176 = 56;
        }
        nn_mem_StandardAllocator_Free(*v98 + v176, (__int64)v216_.v218);
      }
      if ((v212 & 1) != 0 && v213_.v215 != nullptr) {
        if (*(_QWORD*)(*v98 + 200) != 0) {
          v177 = 128;
        }
        else {
          v177 = 56;
        }
        nn_mem_StandardAllocator_Free(*v98 + v177, (__int64)v213_.v215);
      }
      v178 = v121[6];
      if (v178 != 0) {
        v179 = v178 - 1;
        if ((v178 & (v178 - 1)) != 0) {
          v105 = v130;
          if (v178 <= v130) {
            v105 = v130 % v178;
          }
        }
        else {
          v105 = v179 & v130;
        }
        v180 = *(_QWORD**)(v121[5] + 8 * v105);
        if (v180 != nullptr) {
          v181 = (_QWORD*)*v180;
          if (*v180 != 0) {
            if ((v178 & v179) == 0) {
              while (1) {
                v183 = v181[1];
                if (v183 == v130) {
                  if (*((_DWORD*)v181 + 4) == v209) {
                    goto LABEL_189;
                  }
                }
                else if ((v183 & v179) != v105) {
                  goto LABEL_378;
                }
                v181 = (_QWORD*)*v181;
                if (v181 == nullptr) {
                  goto LABEL_378;
                }
              }
            }
            do {
              v182 = v181[1];
              if (v182 == v130) {
                if (*((_DWORD*)v181 + 4) == v209) {
                  goto LABEL_189;
                }
              }
              else {
                if (v182 >= v178) {
                  v182 %= v178;
                }
                if (v182 != v105) {
                  break;
                }
              }
              v181 = (_QWORD*)*v181;
            } while (v181 != nullptr);
          }
        }
      }
    LABEL_378:
      v184 = (_QWORD*)fw_memory_HeapManager_Allocate(*v98, 24, 16, 0);
      *v184 = 0;
      v184[1] = v130;
      v184[2] = v209;
      v181 = v184;
      v185 = *((float*)v121 + 18);
      v186 = (float)(unsigned __int64)(v121[8] + 1LL);
      if (v178 == 0 || (float)(v185 * (float)v178) < v186) {
        v187 = v186 / v185;
        v188 = (v178 & (v178 - 1)) != 0;
        if (v178 < 3) {
          v188 = true;
        }
        v189 = v188 | (2 * v178);
        v190 = vcvtps_u64_f32(v187);
        if (v189 <= v190) {
          v191 = v190;
        }
        else {
          v191 = v189;
        }
        if (v191 == 1) {
          v191 = 2;
        }
        else if ((v191 & (v191 - 1)) != 0) {
          v192 = std___1___next_prime(v191);
          v178 = v121[6];
          v191 = v192;
        }
        if (v191 > v178) {
          goto LABEL_390;
        }
        if (v191 < v178) {
          v193 = vcvtps_u64_f32((float)(unsigned __int64)v121[8] /
                                *((float*)v121 + 18));
          if (v178 < 3 || (v178 & (v178 - 1)) != 0) {
            v193 = std___1___next_prime(v193);
          }
          else {
            v194 = 1LL << -(char)__clz(v193 - 1);
            if (v193 >= 2) {
              v193 = v194;
            }
          }
          if (v191 <= v193) {
            v191 = v193;
          }
          if (v191 < v178) {
          LABEL_390:
            GameRoutine_7a6cc0(v121 + 5, v191);
          }
        }
        v178 = v121[6];
        if ((v178 & (v178 - 1)) != 0) {
          if (v178 <= v130) {
            v105 = v130 % v178;
          }
          else {
            v105 = v130;
          }
        }
        else {
          v105 = (v178 - 1) & v130;
        }
      }
      v106 = v121[5];
      v107 = *(_QWORD**)(v106 + 8 * v105);
      if (v107 != nullptr) {
        *v181 = *v107;
        *v107 = v181;
      }
      else {
        *v181 = v121[7];
        v121[7] = v181;
        *(_QWORD*)(v106 + 8 * v105) = v121 + 7;
        if (*v181 != 0) {
          v119 = *(_QWORD*)(*v181 + 8LL);
          if ((v178 & (v178 - 1)) != 0) {
            if (v119 >= v178) {
              v119 %= v178;
            }
          }
          else {
            v119 &= v178 - 1;
          }
          *(_QWORD*)(v121[5] + 8 * v119) = v181;
        }
      }
      ++v121[8];
    LABEL_189:
      v102 = v210;
      *((_DWORD*)v181 + 5) = v104;
      v103 = *((_WORD*)v210 + 114);
      goto LABEL_190;
    }
    if (v156 >= v105) {
      v156 %= v105;
    }
    *(_QWORD*)(*((_QWORD*)a1 + 17) + 8 * v156) = v207;
    v158 = (_QWORD*)*v155;
    if (*v155 == 0) {
      goto LABEL_322;
    }
    while (1) {
      v159 = v158[1];
      if (v159 >= v105) {
        v159 %= v105;
      }
      if (v159 != v156) {
        v160 = *((_QWORD*)a1 + 17);
        if (*(_QWORD*)(v160 + 8 * v159) == 0) {
          *(_QWORD*)(v160 + 8 * v159) = v155;
          goto LABEL_297;
        }
        *v155 = *v158;
        *v158 = **(_QWORD**)(*((_QWORD*)a1 + 17) + 8 * v159);
        **(_QWORD**)(*((_QWORD*)a1 + 17) + 8 * v159) = v158;
        v158 = v155;
      }
      v159 = v156;
    LABEL_297:
      v155 = v158;
      v158 = (_QWORD*)*v158;
      v156 = v159;
      if (v158 == nullptr) {
        goto LABEL_322;
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b34600(
    PSEUDO_X8 x8_, float* a1, unsigned __int8* a2, unsigned __int64 a3,
    __int64 a4, unsigned __int64 a5, unsigned __int64 a6, __int64 unused_int6,
    char a7, _QWORD* a9)
{

#pragma clang fp contract(off)
  __int64 a8 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int v16;
  unsigned int v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64** v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned int* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  float* v48;
  __int64 v49;
  float v50;
  float v51;
  float v52;
  _BOOL8 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  float* v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  _QWORD* v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  _QWORD* v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64* v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64* v88;
  unsigned __int64 v89;
  char* v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64* v93;
  char* v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  char* v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  _QWORD* v102;
  unsigned __int64 v103;
  _QWORD* v104;
  __int64 v105;
  char* v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  char* v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  char* v114;
  __int64 v115;
  char v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64* v119;
  unsigned int v120;
  unsigned __int64 i;
  unsigned __int64 v122;
  unsigned int* v123;
  unsigned int v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  _QWORD* v127;
  _QWORD* v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  float v133;
  float v134;
  float v135;
  _BOOL8 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  __int64 primeEm;
  unsigned __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64* v148;
  __int64 v149;
  char v150;
  _QWORD* v151;
  __int64 v152;
  float* v153;
  __int64 v154;
  char v155;
  _QWORD* v156;
  __int64 v157;
  __int64*** v158;
  __int64** v159;
  unsigned __int64 v160;
  __int64* v161;
  struct {
    char gap0_[8];
    unsigned __int64 v162;
    char gap16_[12];
    char v163;
    char gap29_[3];
    __int64 v164;
    __int64 v165;
    __int64 v166;
    char gap56_[16];
    unsigned __int64 v168;
    _QWORD v169[2];
    _QWORD v170[2];
    __int64 v171;
    unsigned __int64 v172;
    char* v173;
    __int64 v174;
    unsigned __int64 v175;
    char* v176;
  } f_;

  v16 = wld_Crc32(0, a2, a3);
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_294:
    String_60a1d0();
  }
  v17 = v16;
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (a3 | 7) + 1;
    }
    v18 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v19,
                                                16, 0);
    f_.v172 = a3;
    f_.v173 = v18;
    f_.v171 = v19 | 1;
  }
  else {
    LOBYTE(f_.v171) = 2 * a3;
    v18 = (char*)&f_.v171 + 1;
    if (a3 == 0) {
      goto LABEL_10;
    }
  }
  GameRoutine_1a0b940((__int64)v18, (__int64)a2, a3);
LABEL_10:
  v20 = (unsigned __int64)a9;
  v18[a3] = 0;
  v21 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v171, ".elf", 4u);
  v23 = v21[1];
  v22 = v21[2];
  f_.v174 = *v21;
  f_.v175 = v23;
  f_.v176 = (char*)v22;
  v21[1] = 0;
  v21[2] = 0;
  *v21 = 0;
  if ((f_.v171 & 1) != 0 && f_.v173 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                                  (__int64)f_.v173);
  }
  v25 = *((_QWORD*)a1 + 2);
  if (v25 == 0 || *((_QWORD*)a1 + 4) == 0) {
    goto LABEL_36;
  }
  v26 = v25 - 1;
  if ((v25 & (v25 - 1)) != 0) {
    v27 = v17;
    if (v25 <= v17) {
      v27 = v17 % (unsigned int)v25;
    }
  }
  else {
    v27 = ((int)v25 - 1) & v17;
  }
  v28 = *(__int64***)(*((_QWORD*)a1 + 1) + 8 * v27);
  if (v28 == nullptr || (v29 = *v28) == nullptr) {
  LABEL_36:
    if ((f_.v174 & 1) != 0) {
      v32 = f_.v175;
    }
    else {
      v32 = (unsigned __int64)(unsigned __int8)f_.v174 >> 1;
    }
    if ((f_.v174 & 1) != 0) {
      v33 = f_.v176;
    }
    else {
      v33 = (char*)&f_.v174 + 1;
    }
    if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
             **(_QWORD**)(*(_QWORD*)a1 + 13432LL) + 96LL))(
             *(_QWORD*)(*(_QWORD*)a1 + 13432LL), v33, v32, 255) &
         1) == 0) {
      goto LABEL_265;
    }
    v34 = (__int64)&f_.v174 + 1;
    f_.v163 = a7;
    f_.v166 = a8;
    if ((f_.v174 & 1) != 0) {
      v35 = f_.v175;
    }
    else {
      v35 = (unsigned __int64)(unsigned __int8)f_.v174 >> 1;
    }
    if ((f_.v174 & 1) != 0) {
      v36 = f_.v176;
    }
    else {
      v36 = (char*)&f_.v174 + 1;
    }
    f_.v165 = (*(__int64 (**)(_QWORD, char*, unsigned __int64))(
        **(_QWORD**)(*(_QWORD*)a1 + 13432LL) + 64LL))(
        *(_QWORD*)(*(_QWORD*)a1 + 13432LL), v36, v35);
    v37 = ElfFile_631220((__int64*)(f_.v165 + 800), "gfx::data::s_data");
    v38 = *((_QWORD*)a1 + 2);
    v39 = (unsigned int*)v37;
    v40 = v17;
    f_.v164 = a4;
    f_.v168 = a6;
    if (v38 != 0) {
      v41 = v38 - 1;
      if ((v38 & (v38 - 1)) != 0) {
        v20 = v17;
        if (v38 <= v17) {
          v20 = v17 % (unsigned int)v38;
        }
      }
      else {
        v20 = ((int)v38 - 1) & v17;
      }
      v42 = *(__int64**)(*((_QWORD*)a1 + 1) + 8 * v20);
      if (v42 != nullptr) {
        v43 = *v42;
        if (*v42 != 0) {
          if ((v38 & v41) == 0) {
            while (1) {
              v45 = *(_QWORD*)(v43 + 8);
              if (v45 == v17) {
                if (*(_DWORD*)(v43 + 16) == v17) {
                  goto LABEL_152;
                }
              }
              else if ((v45 & v41) != v20) {
                goto LABEL_70;
              }
              v43 = *(_QWORD*)v43;
              if (v43 == 0) {
                goto LABEL_70;
              }
            }
          }
          do {
            v44 = *(_QWORD*)(v43 + 8);
            if (v44 == v17) {
              if (*(_DWORD*)(v43 + 16) == v17) {
                goto LABEL_152;
              }
            }
            else {
              if (v44 >= v38) {
                v44 %= v38;
              }
              if (v44 != v20) {
                break;
              }
            }
            v43 = *(_QWORD*)v43;
          } while (v43 != 0);
        }
      }
    }
  LABEL_70:
    v46 = (__int64*)fw_memory_g_heap_manager_ptr;
    v47 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         112, 16, 0);
    v48 = a1;
    v43 = v47;
    *(_QWORD*)v47 = 0;
    *(_QWORD*)(v47 + 8) = v17;
    *(_DWORD*)(v47 + 16) = v17;
    v49 = *((_QWORD*)a1 + 4);
    v50 = a1[10];
    *(_QWORD*)(v47 + 96) = 0;
    *(_QWORD*)(v47 + 104) = 0;
    *(_QWORD*)(v47 + 24) = 0;
    *(_QWORD*)(v47 + 32) = 0;
    *(_QWORD*)(v47 + 40) = 0;
    *(_QWORD*)(v47 + 48) = 0;
    *(_QWORD*)(v47 + 56) = 0;
    *(_QWORD*)(v47 + 64) = 0;
    *(_QWORD*)(v47 + 72) = 0;
    *(_QWORD*)(v47 + 80) = 0;
    *(_QWORD*)(v47 + 88) = 0;
    v51 = (float)(unsigned __int64)(v49 + 1);
    *(_DWORD*)(v47 + 104) = 1065353216;
    if (v38 != 0 && (float)(v50 * (float)v38) >= v51) {
    LABEL_143:
      v84 = *((_QWORD*)v48 + 1);
      v85 = *(__int64**)(v84 + 8 * v20);
      if (v85 != nullptr) {
        *(_QWORD*)v43 = *v85;
        *v85 = v43;
      }
      else {
        v86 = *((_QWORD*)v48 + 3);
        *((_QWORD*)v48 + 3) = v43;
        *(_QWORD*)v43 = v86;
        *(_QWORD*)(v84 + 8 * v20) = v48 + 6;
        if (*(_QWORD*)v43 != 0) {
          v87 = *(_QWORD*)(*(_QWORD*)v43 + 8LL);
          if ((v38 & (v38 - 1)) != 0) {
            if (v87 >= v38) {
              v87 %= v38;
            }
          }
          else {
            v87 &= v38 - 1;
          }
          *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v87) = v43;
        }
      }
      ++*((_QWORD*)v48 + 4);
    LABEL_152:
      v88 = (__int64*)(v43 + 24);
      if ((__int64*)(v43 + 24) != &f_.v174) {
        if ((*(_BYTE*)v88 & 1) != 0) {
          if ((f_.v174 & 1) != 0) {
            v90 = f_.v176;
          }
          else {
            v90 = (char*)&f_.v174 + 1;
          }
          if ((f_.v174 & 1) != 0) {
            v91 = f_.v175;
          }
          else {
            v91 = (unsigned __int64)(unsigned __int8)f_.v174 >> 1;
          }
          SpineModel_64dde0(v88, (__int64)v90, v91);
        }
        else if ((f_.v174 & 1) != 0) {
          GameRoutine_64df20(v88, (__int64)f_.v176, f_.v175);
        }
        else {
          v89 = f_.v175;
          *v88 = f_.v174;
          *(_QWORD*)(v43 + 32) = v89;
          *(_QWORD*)(v43 + 40) = f_.v176;
        }
      }
      f_.v162 = a5;
      if (v39[1] != 0) {
        v92 = 0;
        v93 = (__int64*)fw_memory_g_heap_manager_ptr;
        do {
          v94 = *(const char**)(*((_QWORD*)v39 + 2) + 8 * v92);
          v95 = GameRoutine_1a09c70(v94);
          if (v95 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_294;
          }
          v96 = v95;
          if (v95 >= 0x17) {
            if ((v95 | 7) == 0x17) {
              v98 = 26;
            }
            else {
              v98 = (v95 | 7) + 1;
            }
            v97 = (char*)fw_memory_HeapManager_Allocate(*v93, v98, 16, 0);
            f_.v172 = v96;
            f_.v173 = v97;
            f_.v171 = v98 | 1;
          }
          else {
            v97 = (char*)&f_.v171 + 1;
            LOBYTE(f_.v171) = 2 * v95;
            if (v95 == 0) {
              goto LABEL_176;
            }
          }
          GameRoutine_1a0b940((__int64)v97, (__int64)v94, v96);
        LABEL_176:
          v97[v96] = 0;
          v99 = (__int64*)GameRoutine_1a09ce0((__int64)&f_.v171, ".bntx", 5u);
          v101 = *v99;
          v100 = v99[1];
          v34 = v99[2];
          *v99 = 0;
          v99[1] = 0;
          v99[2] = 0;
          v102 = *(_QWORD**)(v43 + 56);
          v103 = *(_QWORD*)(v43 + 64);
          if ((unsigned __int64)v102 >= v103) {
            v105 = *(_QWORD*)(v43 + 48);
            v106 = (char*)v102 - v105;
            v107 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v102 - v105) >> 3) + 1;
            if (v107 > 0xAAAAAAAAAAAAAAALL) {
              GameRoutine_64aa00();
            }
            v108 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v103 - v105) >> 3);
            if (2 * v108 > v107) {
              v107 = 2 * v108;
            }
            if (v108 >= 0x555555555555555LL) {
              v109 = 0xAAAAAAAAAAAAAAALL;
            }
            else {
              v109 = v107;
            }
            if (v109 != 0) {
              if (v109 > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_296;
              }
              v110 = fw_memory_HeapManager_Allocate(*v93, 24 * v109, 16, 0);
            }
            else {
              v110 = 0;
            }
            v111 = &v106[v110];
            *(_QWORD*)v111 = v101;
            *((_QWORD*)v111 + 1) = v100;
            *((_QWORD*)v111 + 2) = v34;
            v112 = v110 + 24 * v109;
            v104 = v111 + 24;
            v34 = *(_QWORD*)(v43 + 48);
            v113 = *(_QWORD*)(v43 + 56) - v34;
            v114 = &v111[-v113];
            GameRoutine_1a0b950((__int64)&v111[-v113], v34, v113);
            *(_QWORD*)(v43 + 48) = v114;
            *(_QWORD*)(v43 + 56) = v104;
            *(_QWORD*)(v43 + 64) = v112;
            if (v34 != 0) {
              v115 = 128;
              if (*(_QWORD*)(*v93 + 200) == 0) {
                v115 = 56;
              }
              nn_mem_StandardAllocator_Free(*v93 + v115, v34);
            }
          }
          else {
            *v102 = v101;
            v102[1] = v100;
            v104 = v102 + 3;
            v102[2] = v34;
          }
          v116 = f_.v171;
          *(_QWORD*)(v43 + 56) = v104;
          if ((v116 & 1) != 0 && f_.v173 != nullptr) {
            v117 = 128;
            if (*(_QWORD*)(*v93 + 200) == 0) {
              v117 = 56;
            }
            nn_mem_StandardAllocator_Free(*v93 + v117, (__int64)f_.v173);
          }
          ++v92;
        } while (v92 < v39[1]);
      }
      v118 = *v39;
      if ((_DWORD)v118 != 0) {
        v119 = (__int64*)(v43 + 88);
        v120 = -1;
        for (i = 0; i < v118; ++i) {
          v122 = *(_QWORD*)(v43 + 80);
          v123 = (unsigned int*)(*((_QWORD*)v39 + 1) + 12 * i);
          v124 = v123[2];
          v125 = v123[1] | ((unsigned __int64)*v123 << 32);
          if (v122 != 0) {
            v126 = v122 - 1;
            if ((v122 & (v122 - 1)) != 0) {
              v34 = v123[1] | ((unsigned __int64)*v123 << 32);
              if (v125 >= v122) {
                v34 = v125 % v122;
              }
            }
            else {
              v34 = v126 & v125;
            }
            v127 = *(_QWORD**)(*(_QWORD*)(v43 + 72) + 8 * v34);
            if (v127 != nullptr) {
              v128 = (_QWORD*)*v127;
              if (v128 != nullptr) {
                if ((v122 & v126) == 0) {
                  while (1) {
                    v130 = v128[1];
                    if (v130 == v125) {
                      if (v128[2] == v125) {
                        goto LABEL_256;
                      }
                    }
                    else if ((v130 & v126) != v34) {
                      goto LABEL_219;
                    }
                    v128 = (_QWORD*)*v128;
                    if (v128 == nullptr) {
                      goto LABEL_219;
                    }
                  }
                }
                do {
                  v129 = v128[1];
                  if (v129 == v125) {
                    if (v128[2] == v125) {
                      goto LABEL_256;
                    }
                  }
                  else {
                    if (v129 >= v122) {
                      v129 %= v122;
                    }
                    if (v129 != v34) {
                      break;
                    }
                  }
                  v128 = (_QWORD*)*v128;
                } while (v128 != nullptr);
              }
            }
          }
        LABEL_219:
          v131 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
          *(_QWORD*)v131 = 0;
          *(_QWORD*)(v131 + 8) = v125;
          *(_QWORD*)(v131 + 16) = v125;
          v132 = v131;
          *(_DWORD*)(v131 + 24) = v124;
          v133 = *(float*)(v43 + 104);
          v134 = (float)(unsigned __int64)(*(_QWORD*)(v43 + 96) + 1LL);
          if (v122 == 0 || (float)(v133 * (float)v122) < v134) {
            v135 = v134 / v133;
            v136 = (v122 & (v122 - 1)) != 0;
            if (v122 < 3) {
              v136 = true;
            }
            v137 = v136 | (2 * v122);
            v138 = vcvtps_u64_f32(v135);
            if (v137 <= v138) {
              v139 = v138;
            }
            else {
              v139 = v137;
            }
            if (v139 == 1) {
              v139 = 2;
            }
            else if ((v139 & (v139 - 1)) != 0) {
              primeEm = std___1___next_prime(v139);
              v122 = *(_QWORD*)(v43 + 80);
              v139 = primeEm;
            }
            if (v139 > v122) {
              goto LABEL_231;
            }
            if (v139 < v122) {
              v141 = vcvtps_u64_f32((float)*(unsigned __int64*)(v43 + 96) /
                                    *(float*)(v43 + 104));
              if (v122 < 3 || (v122 & (v122 - 1)) != 0) {
                v141 = std___1___next_prime(v141);
              }
              else {
                v142 = 1LL << ((-(char)__clz((unsigned long long)(v141 - 1))) &
                               63);
                if (v141 >= 2) {
                  v141 = v142;
                }
              }
              if (v139 <= v141) {
                v139 = v141;
              }
              if (v139 < v122) {
              LABEL_231:
                GameRoutine_8301a0((__int64*)(v43 + 72), v139);
              }
            }
            v122 = *(_QWORD*)(v43 + 80);
            if ((v122 & (v122 - 1)) != 0) {
              if (v125 >= v122) {
                v34 = v125 % v122;
              }
              else {
                v34 = v125;
              }
            }
            else {
              v34 = (v122 - 1) & v125;
            }
          }
          v143 = *(_QWORD*)(v43 + 72);
          v144 = *(__int64**)(v143 + 8 * v34);
          if (v144 != nullptr) {
            *(_QWORD*)v132 = *v144;
            *v144 = v132;
          }
          else {
            *(_QWORD*)v132 = *v119;
            *v119 = v132;
            *(_QWORD*)(v143 + 8 * v34) = v119;
            if (*(_QWORD*)v132 != 0) {
              v145 = *(_QWORD*)(*(_QWORD*)v132 + 8LL);
              if ((v122 & (v122 - 1)) != 0) {
                if (v145 >= v122) {
                  v145 %= v122;
                }
              }
              else {
                v145 &= v122 - 1;
              }
              *(_QWORD*)(*(_QWORD*)(v43 + 72) + 8 * v145) = v132;
            }
          }
          ++*(_QWORD*)(v43 + 96);
          v118 = *v39;
        LABEL_256:
          if (v125 == f_.v168) {
            v120 = v124;
          }
        }
        GameRoutine_634d80(*(_QWORD*)(f_.v165 + 8), f_.v165);
        v146 = f_.v162;
        v147 = f_.v164;
        a8 = f_.v166;
        if ((v120 & 0x80000000) == 0) {
          v148 = (__int64*)(*(_QWORD*)(v43 + 48) + 24LL * v120);
          v149 = a9[1];
          f_.v169[0] = *a9;
          f_.v169[1] = v149;
          if (v149 != 0) {
            v150 = f_.v163 & 1;
            v151 = f_.v169;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v149 + 16), 1u,
                                      memory_order_relaxed);
            v152 = f_.v166;
            v153 = a1;
            goto LABEL_262;
          }
          v153 = a1;
          v155 = f_.v163 & 1;
          v156 = f_.v169;
          v157 = f_.v166;
        LABEL_272:
          llvm_libcxx_21_libcxx_include___vector_b35580(
              (void*)(v157), v153, v148, v147, v146, v155, v156);
          if ((f_.v174 & 1) == 0) {
            return;
          }
          goto LABEL_266;
        }
      }
      else {
        GameRoutine_634d80(*(_QWORD*)(f_.v165 + 8), f_.v165);
        a8 = f_.v166;
      }
    LABEL_265:
      *(_QWORD*)a8 = 0;
      *(_DWORD*)(a8 + 16) = 0;
      *(_DWORD*)(a8 + 8) = -1;
      if ((f_.v174 & 1) == 0) {
        return;
      }
      goto LABEL_266;
    }
    v52 = v51 / v50;
    v53 = true;
    if (v38 >= 3) {
      v53 = (v38 & (v38 - 1)) != 0;
    }
    v54 = v53 | (2 * v38);
    v55 = vcvtps_u64_f32(v52);
    if (v54 <= v55) {
      v56 = v55;
    }
    else {
      v56 = v54;
    }
    if (v56 == 1) {
      v56 = 2;
    }
    else if ((v56 & (v56 - 1)) != 0) {
      v57 = std___1___next_prime(v56);
      v48 = a1;
      v56 = v57;
      v38 = *((_QWORD*)a1 + 2);
    }
    if (v56 <= v38) {
      if (v56 >= v38) {
        goto LABEL_138;
      }
      v63 = vcvtps_u64_f32((float)*((unsigned __int64*)v48 + 4) / v48[10]);
      if (v38 < 3 || (v38 & (v38 - 1)) != 0) {
        v63 = std___1___next_prime(v63);
      }
      else {
        v64 = 1LL << ((-(char)__clz((unsigned long long)(v63 - 1))) & 63);
        if (v63 >= 2) {
          v63 = v64;
        }
      }
      v48 = a1;
      if (v56 <= v63) {
        v56 = v63;
      }
      if (v56 >= v38) {
        goto LABEL_138;
      }
      if (v56 == 0) {
        v82 = *((_QWORD*)a1 + 1);
        *((_QWORD*)a1 + 1) = 0;
        if (v82 != 0) {
          v83 = 128;
          if (*(_QWORD*)(*v46 + 200) == 0) {
            v83 = 56;
          }
          nn_mem_StandardAllocator_Free(*v46 + v83, v82);
          v48 = a1;
        }
        *((_QWORD*)v48 + 2) = 0;
        goto LABEL_138;
      }
    }
    if (v56 >> 61 != 0) {
    LABEL_296:
      GameRoutine_60a210();
    }
    v58 = fw_memory_HeapManager_Allocate(*v46, 8 * v56, 16, 0);
    v48 = a1;
    v59 = *((_QWORD*)a1 + 1);
    *((_QWORD*)a1 + 1) = v58;
    if (v59 != 0) {
      v60 = 128;
      if (*(_QWORD*)(*v46 + 200) == 0) {
        v60 = 56;
      }
      nn_mem_StandardAllocator_Free(*v46 + v60, v59);
      v48 = a1;
    }
    v61 = v56 & 7;
    *((_QWORD*)v48 + 2) = v56;
    if (v56 >= 8) {
      v62 = 0;
      do {
        *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v62) = 0;
        *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v62 + 8) = 0;
        *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v62 + 16) = 0;
        *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v62 + 24) = 0;
        *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v62 + 32) = 0;
        *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v62 + 40) = 0;
        *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v62 + 48) = 0;
        v65 = *((_QWORD*)v48 + 1) + 8 * v62;
        v62 += 8;
        *(_QWORD*)(v65 + 56) = 0;
      } while ((v56 & 0x1FFFFFFFFFFFFFF8LL) != v62);
    }
    else {
      v62 = 0;
    }
    if ((v56 & 7) != 0) {
      v66 = 8 * v62;
      do {
        --v61;
        *(_QWORD*)(*((_QWORD*)v48 + 1) + v66) = 0;
        v66 += 8;
      } while (v61 != 0);
    }
    v68 = v48 + 6;
    v67 = *((_QWORD**)v48 + 3);
    if (v67 == nullptr) {
      goto LABEL_138;
    }
    v69 = v67[1];
    v70 = v56 - 1;
    if ((v56 & (v56 - 1)) == 0) {
      v78 = v69 & v70;
      *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v78) = v68;
      while (1) {
        v79 = (_QWORD*)*v67;
        if (*v67 == 0) {
          break;
        }
        v80 = v79[1] & v70;
        if (v80 == v78) {
          v67 = (_QWORD*)*v67;
        }
        else {
          v81 = *((_QWORD*)v48 + 1);
          if (*(_QWORD*)(v81 + 8 * v80) != 0) {
            *v67 = *v79;
            *v79 = **(_QWORD**)(*((_QWORD*)v48 + 1) + 8 * v80);
            **(_QWORD**)(*((_QWORD*)v48 + 1) + 8 * v80) = v79;
          }
          else {
            *(_QWORD*)(v81 + 8 * v80) = v67;
            v67 = v79;
            v78 = v80;
          }
        }
      }
    LABEL_138:
      v38 = *((_QWORD*)v48 + 2);
      if ((v38 & (v38 - 1)) != 0) {
        if (v38 <= v40) {
          v20 = v40 % v38;
        }
        else {
          v20 = v40;
        }
      }
      else {
        v20 = ((int)v38 - 1) & (unsigned int)v40;
      }
      goto LABEL_143;
    }
    if (v69 >= v56) {
      v69 %= v56;
    }
    *(_QWORD*)(*((_QWORD*)v48 + 1) + 8 * v69) = v68;
    v71 = (_QWORD*)*v67;
    if (*v67 == 0) {
      goto LABEL_138;
    }
    while (1) {
      v72 = v71[1];
      if (v72 >= v56) {
        v72 %= v56;
      }
      if (v72 != v69) {
        v73 = *((_QWORD*)v48 + 1);
        if (*(_QWORD*)(v73 + 8 * v72) == 0) {
          *(_QWORD*)(v73 + 8 * v72) = v67;
          goto LABEL_108;
        }
        *v67 = *v71;
        *v71 = **(_QWORD**)(*((_QWORD*)v48 + 1) + 8 * v72);
        **(_QWORD**)(*((_QWORD*)v48 + 1) + 8 * v72) = v71;
        v71 = v67;
      }
      v72 = v69;
    LABEL_108:
      v67 = v71;
      v71 = (_QWORD*)*v71;
      v69 = v72;
      if (v71 == nullptr) {
        goto LABEL_138;
      }
    }
  }
  if ((v25 & v26) == 0) {
    while (1) {
      v31 = v29[1];
      if (v31 == v17) {
        if (*((_DWORD*)v29 + 4) == v17) {
          goto LABEL_114;
        }
      }
      else if ((v31 & v26) != v27) {
        goto LABEL_36;
      }
      v29 = (__int64*)*v29;
      if (v29 == nullptr) {
        goto LABEL_36;
      }
    }
  }
  while (1) {
    v30 = v29[1];
    if (v30 == v17) {
      break;
    }
    if (v30 >= v25) {
      v30 %= v25;
    }
    if (v30 != v27) {
      goto LABEL_36;
    }
  LABEL_26:
    v29 = (__int64*)*v29;
    if (v29 == nullptr) {
      goto LABEL_36;
    }
  }
  if (*((_DWORD*)v29 + 4) != v17) {
    goto LABEL_26;
  }
LABEL_114:
  v74 = v29[10];
  if (v74 == 0 || v29[12] == 0) {
    goto LABEL_265;
  }
  v76 = v74 - 1;
  if ((v74 & (v74 - 1)) != 0) {
    v77 = a6;
    if (a6 >= v74) {
      v77 = a6 % v74;
    }
  }
  else {
    v77 = v76 & a6;
  }
  v158 = *(__int64****)(v29[9] + 8 * v77);
  if (v158 == nullptr) {
    goto LABEL_265;
  }
  v159 = *v158;
  if (v159 == nullptr) {
    goto LABEL_265;
  }
  if ((v74 & v76) == 0) {
    while (1) {
      v161 = v159[1];
      if ((__int64*)a6 == v161) {
        if (v159[2] == (__int64*)a6) {
          goto LABEL_291;
        }
      }
      else if (((unsigned __int64)v161 & v76) != v77) {
        goto LABEL_265;
      }
      v159 = (__int64**)*v159;
      if (v159 == nullptr) {
        goto LABEL_265;
      }
    }
  }
  while (1) {
    v160 = (unsigned __int64)v159[1];
    if (a6 == v160) {
      break;
    }
    if (v160 >= v74) {
      v160 %= v74;
    }
    if (v160 != v77) {
      goto LABEL_265;
    }
  LABEL_280:
    v159 = (__int64**)*v159;
    if (v159 == nullptr) {
      goto LABEL_265;
    }
  }
  if (v159[2] != (__int64*)a6) {
    goto LABEL_280;
  }
LABEL_291:
  v153 = a1;
  v148 = (__int64*)(v29[6] + 24LL * *((int*)v159 + 6));
  v149 = a9[1];
  f_.v170[0] = *a9;
  f_.v170[1] = v149;
  if (v149 == 0) {
    v155 = a7 & 1;
    v156 = f_.v170;
    v157 = a8;
    v147 = a4;
    v146 = a5;
    goto LABEL_272;
  }
  v150 = a7 & 1;
  v151 = f_.v170;
  v147 = a4;
  v146 = a5;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v149 + 16), 1u,
                            memory_order_relaxed);
  v152 = a8;
LABEL_262:
  llvm_libcxx_21_libcxx_include___vector_b35580((void*)(v152), v153, v148, v147,
                                                v146, v150, v151);
  std___1___shared_weak_count___release_weak(v149);
  if ((f_.v174 & 1) != 0) {
  LABEL_266:
    if (f_.v176 != nullptr) {
      v154 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v154 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v154, (__int64)f_.v176);
    }
  }
}

__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b35580(
    PSEUDO_X8 x8_, _QWORD* a1, __int64* a2, __int64 a3, unsigned __int64 a4,
    char a5, _QWORD* a6)
{
  __int64 a7 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v8;
  unsigned __int64 v9;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int8* v19;
  unsigned __int64 v20;
  unsigned int v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v25;
  __int64 v26;
  __int64** v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  bool v32;
  unsigned __int64 v33;
  __int64 v34;
  char* v35;
  unsigned int v36;
  unsigned __int64 v37;
  unsigned int v38;
  unsigned __int64 v39;
  bool v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  _QWORD* v44;
  __int64* v45;
  unsigned __int64 v46;
  bool v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64* v54;
  unsigned __int64 v55;
  char* v56;
  unsigned __int64 v57;
  char* v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  bool v76;
  unsigned __int64 v77;
  unsigned __int16* v78;
  unsigned __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int16* v92;
  unsigned int v93;
  __int64 v94;
  int v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  struct {
    __int64 v103;
    __int64 v104;
    __int64 v105;
    unsigned __int64 v106;
    char* v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    char gap80_[4];
    unsigned int v113;
  } f_;
  unsigned int* v114;

  *(_QWORD*)a7 = 0;
  v9 = a2[1];
  v8 = (unsigned __int8*)a2[2];
  *(_DWORD*)(a7 + 8) = -1;
  v16 = *(unsigned __int8*)a2;
  *(_DWORD*)(a7 + 16) = 0;
  v17 = (v16 & 1) == 0;
  v18 = v16 >> 1;
  if (v17) {
    v19 = (unsigned __int8*)a2 + 1;
  }
  else {
    v19 = v8;
  }
  if (v17) {
    v20 = v18;
  }
  else {
    v20 = v9;
  }
  v21 = wld_Crc32(0, v19, v20);
  v22 = a1[7];
  v23 = a1[9];
  f_.v113 = v21;
  if (v22 == 0 | v23 == 0) {
    goto LABEL_30;
  }
  v25 = v22 - 1;
  if ((v22 & (v22 - 1)) != 0) {
    v26 = v21;
    if (v22 <= v21) {
      v26 = v21 % (unsigned int)v22;
    }
  }
  else {
    v26 = ((int)v22 - 1) & v21;
  }
  v27 = *(__int64***)(a1[6] + 8 * v26);
  if (v27 == nullptr || (v28 = *v27, *v27 == nullptr)) {
  LABEL_30:
    v31 = *(unsigned __int8*)a2;
    v32 = (v31 & 1) == 0;
    v33 = v31 >> 1;
    if (v32) {
      v34 = v33;
    }
    else {
      v34 = a2[1];
    }
    if (v32) {
      v35 = (char*)a2 + 1;
    }
    else {
      v35 = (char*)a2[2];
    }
    if (((*(__int64 (**)(_QWORD, char*, __int64, __int64))(
             **(_QWORD**)(*a1 + 13432LL) + 96LL))(*(_QWORD*)(*a1 + 13432LL),
                                                  v35, v34, 255) &
         1) != 0) {
      if ((a5 & 1) != 0) {
        v36 = *(unsigned __int8*)a2;
        f_.v109 = 0;
        f_.v110 = 0;
        f_.v107 = nullptr;
        f_.v108 = 0;
        f_.v105 = 0;
        f_.v106 = 0;
        if (&f_.v105 != a2) {
          if ((v36 & 1) != 0) {
            GameRoutine_64df20(&f_.v105, a2[2], a2[1]);
            v36 = *(unsigned __int8*)a2;
          }
          else {
            v37 = a2[1];
            f_.v105 = *a2;
            f_.v106 = v37;
            f_.v107 = (char*)a2[2];
          }
        }
        v40 = (v36 & 1) == 0;
        v41 = v36 >> 1;
        if (v40) {
          v42 = v41;
        }
        else {
          v42 = a2[1];
        }
        if (v40) {
          v43 = (char*)a2 + 1;
        }
        else {
          v43 = (char*)a2[2];
        }
        f_.v108 = (*(__int64 (**)(_QWORD, char*, __int64))(
            **(_QWORD**)(*a1 + 13432LL) + 80LL))(*(_QWORD*)(*a1 + 13432LL), v43,
                                                 v42);
        f_.v109 = GameRoutine_5fc1f0(*(_QWORD*)(f_.v108 + 592));
        f_.v110 = 1;
        v114 = &f_.v113;
        v44 =
            (_QWORD*)game_templates_b36de0((__int64)(a1 + 6), &f_.v113, &v114);
        v45 = v44 + 3;
        if (v44 + 3 != &f_.v105) {
          if ((*(_BYTE*)v45 & 1) != 0) {
            if ((f_.v105 & 1) != 0) {
              v56 = f_.v107;
            }
            else {
              v56 = (char*)&f_.v105 + 1;
            }
            if ((f_.v105 & 1) != 0) {
              v57 = f_.v106;
            }
            else {
              v57 = (unsigned __int64)(unsigned __int8)f_.v105 >> 1;
            }
            SpineModel_64dde0(v45, (__int64)v56, v57);
          }
          else if ((f_.v105 & 1) != 0) {
            GameRoutine_64df20(v45, (__int64)f_.v107, f_.v106);
          }
          else {
            v46 = f_.v106;
            *v45 = f_.v105;
            v44[4] = v46;
            v44[5] = f_.v107;
          }
        }
        v68 = f_.v109;
        v44[6] = f_.v108;
        v44[7] = v68;
        v44[8] = f_.v110;
        v69 = f_.v109;
        v70 = *(_QWORD*)(f_.v109 + 56);
        v71 = *(unsigned __int16*)(v70 + 12);
        v72 = v70 + 8;
        v73 = v70 + 8 + 16 * v71;
        v74 = *(_DWORD*)v73;
        if ((signed __int32)*(_DWORD*)(v70 + 8) <
            (signed __int32)*(_DWORD*)v73) {
          do {
            v77 = (__int64)v74 >> 3;
            if (a4 > v77) {
              v75 = (*(unsigned __int8*)(a3 + a4 + ~v77) >> (v74 & 7)) & 1;
            }
            else {
              v75 = 0;
            }
            v71 = *(unsigned __int16*)(v70 + 12 + 16 * v71 + 2 * v75);
            v76 = v74 < (signed __int32)*(_DWORD*)(v72 + 16 * v71);
            v74 = *(_DWORD*)(v72 + 16 * v71);
          } while (v76);
          v73 = v72 + 16 * v71;
        }
        v78 = *(unsigned __int16**)(v73 + 8);
        if (a4 == *v78 &&
            GameRoutine_1a09cf0((__int64)(v78 + 1), a3, a4) == 0 &&
            (~(v79 = v73 - v70 - 24) & 0xFFFFFFFF0LL) != 0) {
          v84 = *(_QWORD*)(*(_QWORD*)(v69 + 40) + 8LL * (int)(v79 >> 4));
          v81 = *(_DWORD*)(v84 + 144);
          v80 = *(_QWORD*)(*(_QWORD*)(v84 + 128) + 8LL);
        }
        else {
          v80 = 0;
          v81 = -1;
        }
        *(_QWORD*)a7 = v80;
        *(_DWORD*)(a7 + 8) = v81;
      }
      else {
        v38 = *(unsigned __int8*)a2;
        f_.v109 = 0;
        f_.v110 = 0;
        f_.v107 = nullptr;
        f_.v108 = 0;
        f_.v105 = 0;
        f_.v106 = 0;
        if (&f_.v105 != a2) {
          if ((v38 & 1) != 0) {
            GameRoutine_64df20(&f_.v105, a2[2], a2[1]);
            v38 = *(unsigned __int8*)a2;
          }
          else {
            v39 = a2[1];
            f_.v105 = *a2;
            f_.v106 = v39;
            f_.v107 = (char*)a2[2];
          }
        }
        v47 = (v38 & 1) == 0;
        v48 = v38 >> 1;
        v49 = *(_QWORD*)(*a1 + 13432LL);
        if (v47) {
          v50 = (char*)a2 + 1;
        }
        else {
          v50 = (char*)a2[2];
        }
        if (v47) {
          v51 = v48;
        }
        else {
          v51 = a2[1];
        }
        v52 = a6[1];
        f_.v103 = *a6;
        f_.v104 = v52;
        if (v52 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                    memory_order_relaxed);
        }
        f_.v108 = (*(__int64 (**)(__int64, char*, __int64, __int64*))(
            *(_QWORD*)v49 + 40LL))(v49, v50, v51, &f_.v103);
        if (f_.v104 != 0) {
          std___1___shared_weak_count___release_weak(f_.v104);
        }
        f_.v109 = 0;
        f_.v110 = 1;
        v114 = &f_.v113;
        v53 =
            (_QWORD*)game_templates_b36de0((__int64)(a1 + 6), &f_.v113, &v114);
        v54 = v53 + 3;
        if (v53 + 3 != &f_.v105) {
          if ((*(_BYTE*)v54 & 1) != 0) {
            if ((f_.v105 & 1) != 0) {
              v58 = f_.v107;
            }
            else {
              v58 = (char*)&f_.v105 + 1;
            }
            if ((f_.v105 & 1) != 0) {
              v59 = f_.v106;
            }
            else {
              v59 = (unsigned __int64)(unsigned __int8)f_.v105 >> 1;
            }
            SpineModel_64dde0(v54, (__int64)v58, v59);
          }
          else if ((f_.v105 & 1) != 0) {
            GameRoutine_64df20(v54, (__int64)f_.v107, f_.v106);
          }
          else {
            v55 = f_.v106;
            *v54 = f_.v105;
            v53[4] = v55;
            v53[5] = f_.v107;
          }
        }
        v82 = f_.v109;
        v53[6] = f_.v108;
        v53[7] = v82;
        v53[8] = f_.v110;
      }
      *(_DWORD*)(a7 + 16) = f_.v113;
      if ((f_.v105 & 1) != 0 && f_.v107 != nullptr) {
        v83 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v83 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, (__int64)f_.v107);
      }
    }
    return;
  }
  if ((v22 & v25) == 0) {
    while (1) {
      v30 = v28[1];
      if (v30 == v21) {
        if (*((_DWORD*)v28 + 4) == v21) {
          goto LABEL_84;
        }
      }
      else if ((v30 & v25) != v26) {
        goto LABEL_30;
      }
      v28 = (__int64*)*v28;
      if (v28 == nullptr) {
        goto LABEL_30;
      }
    }
  }
  while (1) {
    v29 = v28[1];
    if (v29 == v21) {
      break;
    }
    if (v29 >= v22) {
      v29 %= v22;
    }
    if (v29 != v26) {
      goto LABEL_30;
    }
  LABEL_20:
    v28 = (__int64*)*v28;
    if (v28 == nullptr) {
      goto LABEL_30;
    }
  }
  if (*((_DWORD*)v28 + 4) != v21) {
    goto LABEL_20;
  }
LABEL_84:
  v60 = v28[7];
  if (v60 != 0) {
  LABEL_112:
    v85 = *(_QWORD*)(v60 + 56);
    v86 = *(unsigned __int16*)(v85 + 12);
    v87 = v85 + 8;
    v88 = v85 + 8 + 16 * v86;
    v89 = *(_DWORD*)v88;
    if ((signed __int32)*(_DWORD*)(v85 + 8) < (signed __int32)*(_DWORD*)v88) {
      do {
        v91 = (__int64)v89 >> 3;
        if (a4 > v91) {
          v90 = (*(unsigned __int8*)(a3 + a4 + ~v91) >> (v89 & 7)) & 1;
        }
        else {
          v90 = 0;
        }
        v86 = *(unsigned __int16*)(v85 + 12 + 16 * v86 + 2 * v90);
        v76 = v89 < (signed __int32)*(_DWORD*)(v87 + 16 * v86);
        v89 = *(_DWORD*)(v87 + 16 * v86);
      } while (v76);
      v88 = v87 + 16 * v86;
    }
    v92 = *(unsigned __int16**)(v88 + 8);
    if (a4 == *v92) {
      v93 = v21;
      if (GameRoutine_1a09cf0((__int64)(v92 + 1), a3, a4) != 0) {
        v94 = 0;
        v95 = -1;
        v21 = v93;
      LABEL_124:
        *(_QWORD*)a7 = v94;
        *(_DWORD*)(a7 + 8) = v95;
        *(_DWORD*)(a7 + 16) = v21;
        ++v28[8];
        if ((a5 & 1) == 0 && *(_DWORD*)(a7 + 8) == 0xFFFFFFFFLL) {
          v97 = a6[1];
          if (v97 != 0) {
            v98 = std___1___shared_weak_count_lock(v97);
            if (v98 != 0) {
              v99 = v98;
              if (*a6 != 0) {
                v100 = *(_QWORD*)(*a6 + 32LL);
                f_.v105 = v28[6];
                if (v100 == 0) {
                  GameRoutine_60a310();
                }
                (*(void (**)(__int64, __int64*))(*(_QWORD*)v100 + 48LL))(
                    v100, &f_.v105);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
                std___1___shared_weak_count___release_weak(v99);
              }
            }
          }
        }
        return;
      }
      v21 = v93;
      v96 = v88 - v85 - 24;
      if ((~v96 & 0xFFFFFFFF0LL) != 0) {
        v102 = *(_QWORD*)(*(_QWORD*)(v60 + 40) + 8LL * (int)(v96 >> 4));
        v95 = *(_DWORD*)(v102 + 144);
        v94 = *(_QWORD*)(*(_QWORD*)(v102 + 128) + 8LL);
        goto LABEL_124;
      }
    }
    v94 = 0;
    v95 = -1;
    goto LABEL_124;
  }
  v61 = v28[6];
  v62 = v21;
  nn_os_AcquireReadLock(v61 + 696);
  v63 = *(_DWORD*)(v61 + 656);
  nn_os_ReleaseReadLock(v61 + 696);
  v64 = v28[6];
  if ((v63 & 8) != 0) {
    v60 = GameRoutine_5fc1f0(*(_QWORD*)(v64 + 592));
    v28[7] = v60;
  LABEL_111:
    v21 = v62;
    goto LABEL_112;
  }
  v65 = *(_QWORD*)(*a1 + 13432LL);
  v66 = GameRoutine_1a09c70((const char*)(v64 + 16));
  if ((a5 & 1) != 0) {
    v67 = (*(__int64 (**)(__int64, __int64, unsigned __int64))(
        *(_QWORD*)v65 + 80LL))(v65, v64 + 16, v66);
    v28[6] = v67;
    v28[7] = GameRoutine_5fc1f0(*(_QWORD*)(v67 + 592));
    GameRoutine_634d80(*(_QWORD*)(v64 + 8), v64);
    v60 = v28[7];
    goto LABEL_111;
  }
  v101 = a6[1];
  f_.v111 = *a6;
  f_.v112 = v101;
  if (v101 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v101 + 16), 1u,
                              memory_order_relaxed);
  }
  v28[6] = (*(__int64 (**)(__int64, __int64, unsigned __int64, __int64*))(
      *(_QWORD*)v65 + 40LL))(v65, v64 + 16, v66, &f_.v111);
  if (f_.v112 != 0) {
    std___1___shared_weak_count___release_weak(f_.v112);
  }
  GameRoutine_634d80(*(_QWORD*)(v64 + 8), v64);
  ++v28[8];
  *(_DWORD*)(a7 + 16) = f_.v113;
}

__int64 llvm_libcxx_21_libcxx_include___vector_bd7540(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  _BYTE* v2;
  __int64 v3;
  __int64** v4;
  __int64** v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  float v9;

  v1 = *(unsigned __int8*)(result + 112);
  v2 = (_BYTE*)result;
  if (v1 != (unsigned __int8)GameData_2167620 ||
      (*(_BYTE*)(result + 114) & 1) != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(result + 240) + 24LL);
    v4 = *(__int64***)(v3 + 312);
    v5 = *(__int64***)(v3 + 320);
    if (v4 == v5) {
      LOBYTE(v1) = GameData_2167620;
    }
    else {
      do {
        v7 = *v4;
        v4 += 2;
        v6 = (__int64)v7;
        v8 = *v7;
        if (((unsigned __int8)GameData_2167620 & v2[113] & 1) != 0) {
          v9 = 0x1.0000000000000p+0f;
        }
        else {
          v9 = 0x0.0p+0f;
        }
        result = (*(__int64 (**)(__int64, __int64, __int64, float))(v8 + 16))(
            v6, (__int64)"Game_RimScale", 13, v9);
      } while (v4 != v5);
      LOBYTE(v1) = GameData_2167620;
    }
    v2[114] = 0;
  }
  v2[112] = v1;
  return result;
}

#pragma GCC visibility pop
