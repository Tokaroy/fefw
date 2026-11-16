#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void gfxa_b722e0(PSEUDO_X8, __int64, int*);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_a738c0(__int64, __int64, int);
__int64 GameRoutine_a73d40(__int64 result, __int64);
__int64 GameRoutine_a73e50(__int64 result, __int64);
__int64 GameRoutine_b50b10(__int64*, const char*, __int64);
__int64 GameRoutine_b50c60(__int64*, const char*, __int64);
__int64 ResourceBuilder_b71ec0(__int64, __int64, _QWORD*, __int64);
__int64 ResourceBuilder_b72830(_QWORD*, __int64, _QWORD*);
__int64 SpotMgr_132ffa0(unsigned int*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e770[3];
extern _UNKNOWN GameData_1a8efcc;
extern _UNKNOWN GameData_1a95031;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int128 GameData_1a83750;
extern __int64 (*GameData_1fd0f88[])();
extern __int64 (*GameData_1fd1008[])();
extern __int64 (*GameData_200aff0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21fdee0;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
float scene_652ba0(float32x4_t*, float, float);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 llvm_libcxx_21_libcxx_include___functional_ba71f0(__int64 a1,
                                                          _QWORD** a2,
                                                          __int64* a3);
__int64 llvm_libcxx_21_libcxx_include___functional_bb3160(__int64 a1,
                                                          __int64* a2,
                                                          _QWORD* a3);
__int64 llvm_libcxx_21_libcxx_include___functional_bfaf50(
    _DWORD* a1, _QWORD* a2, __int64 a3, __int64* a4, __int64 a5);
__int64 llvm_libcxx_21_libcxx_include___functional_10d1c30(__int64 a1,
                                                           __int64* a2);
void llvm_libcxx_21_libcxx_include___functional_175b230(__int64 a1);

__int64 llvm_libcxx_21_libcxx_include___functional_ba71f0(__int64 a1,
                                                          _QWORD** a2,
                                                          __int64* a3)
{
  __int64* v3;
  _QWORD** v4;
  __int64 v7;
  _QWORD* v8;
  int v9;
  __int64 v10;
  __int64* v11;
  bool v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64* v20;
  __int64 result;
  struct {
    _QWORD v22[3];
    char v23;
    char gap25_[3];
    int v24;
    char gap32_[1088];
    _QWORD v25[6];
    int v26;
    __int64 v27;
  } f_;
  __int64 v28;

  v3 = *(__int64**)(a1 + 8);
  v4 = *(_QWORD***)(a1 + 16);
  f_.v26 = 20;
  v7 = *v3;
  v8 = *v4;
  v9 = *(unsigned __int8*)(v7 + 16700);
  v10 = *(_QWORD*)(v7 + 16672);
  v11 = (__int64*)(v7 + 13304);
  v12 = v9 == 0;
  v13 = (__int64*)(v10 + 24);
  v14 = v8[4];
  f_.v25[0] = *v8;
  if (!v12) {
    v11 = v13;
  }
  v15 = *v11;
  f_.v25[1] = v14;
  v16 = v8[65];
  f_.v27 = v15;
  v17 = v8[63];
  f_.v25[3] = v16;
  f_.v25[2] = v17;
  v19 = v8 + 6;
  v18 = v8[6];
  f_.v25[5] = v19[1];
  f_.v25[4] = v18;
  gfxa_b722e0((void*)((__int64)f_.v22), **(_QWORD**)(a1 + 24),
              **(int***)(a1 + 32));
  GameRoutine_1a0b950((__int64)&v28, (__int64)f_.v22, 0x451u);
  ResourceBuilder_b72830(*a2, (__int64)a3, f_.v25);
  v20 = a2[1];
  f_.v24 = 0;
  f_.v22[1] = v15;
  f_.v22[0] = 0x400000000LL;
  f_.v22[2] = 0x100000001LL;
  f_.v23 = 1;
  v20[1] = GameRoutine_b50c60(a3, "SighaMapMask", (__int64)f_.v22);
  DWORDn(f_.v22[0], sizeof(f_.v22[0]) / 4 - 1) = 20;
  result = GameRoutine_b50b10(a3, "SightMapComposite", (__int64)f_.v22);
  *v20 = result;
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___functional_bb3160(__int64 a1,
                                                          __int64* a2,
                                                          _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  struct {
    _QWORD v22[5];
    _QWORD v23[2];
    int v24;
    char v25;
  } f_;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  f_.v23[0] = 0;
  f_.v23[1] = 0;
  memset(&f_.v22[2], 0, 24);
  v5 = a2[3];
  v6 = *(_DWORD*)(v4 + 80);
  f_.v22[0] = *(_QWORD*)v3;
  if (v6 >= 1) {
    v7 = *(_QWORD*)(v3 + 56);
    v8 = v6 & 7;
    if ((unsigned int)v6 < 8) {
      v9 = 0;
      if (v8 == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v10 = (_QWORD*)(v7 + 64);
    v11 = 0;
    v12 = -(__int64)(v6 & 0x7FFFFFF8);
    v13 = f_.v23;
    do {
      v11 -= 8;
      *(v13 - 3) = *(v10 - 8);
      *(v13 - 2) = *(v10 - 6);
      *(v13 - 1) = *(v10 - 4);
      *v13 = *(v10 - 2);
      v13[1] = *v10;
      v13[2] = v10[2];
      v13[3] = v10[4];
      v14 = v10[6];
      v10 += 16;
      v13[4] = v14;
      v13 += 8;
    } while (v12 != v11);
    v9 = -v11;
    if (v8 != 0) {
    LABEL_8:
      v15 = (__int64*)(v7 + 16 * v9);
      v16 = &f_.v22[v9 + 2];
      do {
        v17 = *v15;
        v15 += 2;
        --v8;
        *v16++ = v17;
      } while (v8 != 0);
    }
  }
LABEL_10:
  v18 = *(_QWORD*)(v5 + 96);
  v19 = a2[1];
  f_.v24 = *(_DWORD*)(v3 + 136);
  v20 = *(_BYTE*)(v5 + 123);
  f_.v22[1] = v18;
  f_.v25 = v20;
  return ResourceBuilder_b71ec0(v4, v19, a3, (__int64)f_.v22);
}

__int64 llvm_libcxx_21_libcxx_include___functional_bfaf50(
    _DWORD* a1, _QWORD* a2, __int64 a3, __int64* a4, __int64 a5)
{

#pragma clang fp contract(off)
  int v5;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  float32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  int8x16_t v28;
  unsigned __int32 v29;
  __int64 v30;
  float v31;
  float32x4_t v32;
  float v33;
  int8x16_t v34;
  float v35;
  float32x4_t v36;
  __int64 v37;
  int v38;
  __int64 v39;
  float32x4_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  unsigned __int32 v44;
  __int64 v45;
  float v46;
  float v47;
  int8x16_t v48;
  float v49;
  float32x4_t v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _DWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  __int64 v112;
  __int64 v113;
  struct {
    char gap0_[12];
    int v115;
    unsigned __int64 v116;
    char gap24_[8];
    float32x4_t v117;
    __int64 v118;
    __int64 v119;
    float32x4_t* v120;
    __int64 v121;
    char gap80_[8];
    __int64 v122;
  } f_;

  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = a1[30];
  v11 = v5 < -1;
  v12 = ((_BYTE)v5 + 1) & 1;
  if (v11) {
    v12 = -v12;
  }
  a1[30] = v12;
  v13 = *(_QWORD*)&a1[2 * v12 + 26];
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = v14;
  *(_QWORD*)v14 = 0x3FD625C13A83126FLL;
  *(_QWORD*)(v14 + 8) = 1098907648;
  v16 = *(_DWORD*)(a5 + 8);
  v17 = v16 + 31;
  v11 = v16 < -31;
  v18 = v16 + 62;
  if (!v11) {
    v18 = v17;
  }
  *(_DWORD*)(v14 + 16) = v18 >> 5;
  v19 = *(_DWORD*)(a5 + 12);
  v20 = v19 + 31;
  v11 = v19 < -31;
  v21 = v19 + 62;
  if (!v11) {
    v21 = v20;
  }
  *(_DWORD*)(v14 + 20) = v21 >> 5;
  *(_QWORD*)(v14 + 24) = 16;
  v22 = *(_QWORD*)(a5 + 32);
  v23 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  v24 = 256;
  if (*(_BYTE*)(v22 + 208) != 0) {
    v24 = 192;
  }
  v25 = *(float32x4_t*)(v22 + v24);
  f_.v117 = v25;
  if ((unsigned int)(v23 - 3) <= 3) {
    if ((unsigned int)(v23 - 5) > 1) {
      v26 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v26).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_u64[0];
      v27 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v27).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
              .n64_u64[0];
      v28 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v28).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
              .n64_u64[0];
      v29 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                .n64_u32[0];
      LANES128(v25).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v25).n128_u64[1] = v29;
    }
    else {
      LANES128(v25).n128_f32[0] =
          scene_652ba0(&f_.v117, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v22 = *(_QWORD*)(a5 + 32);
    }
  }
  v30 = 128;
  if (*(_BYTE*)(v22 + 96) != 0) {
    v30 = 92;
  }
  v31 = *(float*)(v22 + v30);
  *(_DWORD*)(v15 + 44) = 0;
  v32 = COERCE_AS(float32x4_t, GameData_1a83750);
  v33 = v31 / 0x1.921fb40000000p+1f;
  v34 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a83750));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
          .n64_u64[0];
  v35 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
            .n64_f32[0];
  if (v35 < 0x1.0624de0000000p-10f) {
    v35 = 0x1.0624de0000000p-10f;
  }
  v36 = vmulq_n_f32(vmulq_n_f32(v25, 0x1.0000000000000p+0f / v35),
                    v33 / 0x1.9000000000000p+6f);
  *(_QWORD*)(v15 + 32) = LANES128(v36).n128_u64[0];
  *(_DWORD*)(v15 + 40) = LANES128(v36).n128_u32[2];
  v37 = *(_QWORD*)(a5 + 32);
  v38 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  v39 = 464;
  if (*(_BYTE*)(v37 + 416) != 0) {
    v39 = 400;
  }
  v40 = *(float32x4_t*)(v37 + v39);
  f_.v117 = v40;
  if ((unsigned int)(v38 - 3) <= 3) {
    if ((unsigned int)(v38 - 5) > 1) {
      v41 = vmulq_f32(v40, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v41).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
              .n64_u64[0];
      v42 = vmulq_f32(v40, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v42).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
              .n64_u64[0];
      v43 = vmulq_f32(v40, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v43).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
              .n64_u64[0];
      v44 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
                .n64_u32[0];
      LANES128(v40).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v40).n128_u64[1] = v44;
    }
    else {
      LANES128(v40).n128_f32[0] =
          scene_652ba0(&f_.v117, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v32 = COERCE_AS(float32x4_t, GameData_1a83750);
      v37 = *(_QWORD*)(a5 + 32);
    }
  }
  v45 = 344;
  if (*(_BYTE*)(v37 + 312) != 0) {
    v45 = 308;
  }
  v46 = *(float*)(v37 + v45);
  *(_DWORD*)(v15 + 60) = 0;
  v47 = v46 / 0x1.921fb40000000p+1f;
  v48 = vmulq_f32(v40, v32);
  LANES128(v48).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
          .n64_u64[0];
  v49 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_f32[0];
  if (v49 < 0x1.0624de0000000p-10f) {
    v49 = 0x1.0624de0000000p-10f;
  }
  v50 = vmulq_n_f32(vmulq_n_f32(v40, 0x1.0000000000000p+0f / v49),
                    v47 / 0x1.9000000000000p+6f);
  *(_QWORD*)(v15 + 48) = LANES128(v50).n128_u64[0];
  *(_DWORD*)(v15 + 56) = LANES128(v50).n128_u32[2];
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = *a4;
  v52 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v53 = v52 + 16LL * *(int*)(v52 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v51 + 224LL))(v51, 3, 0, *(_QWORD*)(v53 + 24),
                              *(_QWORD*)(v53 + 32)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54 = *a4;
  v55 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v56 = v55 + 16LL * *(int*)(v55 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v54 + 224LL))(v54, 3, 1, *(_QWORD*)(v56 + 24),
                              *(_QWORD*)(v56 + 32)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v57 = *a4;
  v58 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v59 = v58 + 16LL * *(int*)(v58 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v57 + 224LL))(v57, 3, 2, *(_QWORD*)(v59 + 24),
                              *(_QWORD*)(v59 + 32)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v60 = *(_QWORD*)(a5 + 16) + 16LL * *(int*)(*(_QWORD*)(a5 + 16) + 16LL);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 3, *(_QWORD*)(v60 + 24),
                              *(_QWORD*)(v60 + 32)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v61 = *a4;
  v62 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v63 = v62 + 16LL * *(int*)(v62 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v61 + 224LL))(v61, 3, 9, *(_QWORD*)(v63 + 24),
                              *(_QWORD*)(v63 + 32)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v64 = &a1[4 * a1[30]];
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 8, *((_QWORD*)v64 + 16),
                              *((_QWORD*)v64 + 17)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v65 = *a4;
  v66 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v67 = v66 + 16LL * *(int*)(v66 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v65 + 224LL))(v65, 3, 11, *(_QWORD*)(v67 + 24),
                              *(_QWORD*)(v67 + 32)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v68 = *(_QWORD*)(a5 + 24);
  if (v68 != 0) {
    v69 = v68 + 16LL * *(int*)(v68 + 16);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 3, 12, *(_QWORD*)(v69 + 24),
                                *(_QWORD*)(v69 + 32)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v70 = *a4;
  v71 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v72 = v71 + 16LL * *(int*)(v71 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v70 + 232LL))(v70, 2, 0, *(_QWORD*)(v72 + 24),
                              *(_QWORD*)(v72 + 32)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v73 = *a4;
  v74 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[6] + 16LL))(a2[6]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v75 = v74 + 16LL * *(int*)(v74 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v73 + 232LL))(v73, 2, 4, *(_QWORD*)(v75 + 24),
                              *(_QWORD*)(v75 + 32)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v76 = *a4;
  v77 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[7] + 16LL))(a2[7]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v78 = v77 + 16LL * *(int*)(v77 + 8);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v76 + 232LL))(v76, 2, 5, *(_QWORD*)(v78 + 16),
                              *(_QWORD*)(v78 + 24)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v79 = a4[1];
  gxc_NvnStateCache_BindBlendState(v79, GameData_21fdee0),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v79, GameData_21fdf10),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v79, GameData_21fdf14),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v80 = *(_QWORD*)a5;
  if (v80 == 0) {
    return 0;
  }
  v81 = *a4;
  LANES128(f_.v117).n128_u64[0] = (unsigned __int64)GameData_1fd0f88;
  LANES128(f_.v117).n128_u64[1] = (unsigned __int64)a1;
  f_.v120 = &f_.v117;
  f_.v115 = GameRoutine_a738c0(v80, (__int64)&f_.v117, 2),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (f_.v120 == &f_.v117) {
    v82 = 32;
  }
  else {
    if (f_.v120 == nullptr) {
      goto LABEL_36;
    }
    v82 = 40;
  }
  (*(void (**)(void*))(LANES128(*(f_.v120)).n128_u64[0] + v82))((void*)f_.v120),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_36:
  f_.v122 = v81;
  (*(void (**)(__int64, _DWORD*))GameData_212e770[0])(v81 + 8, a1 + 22),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v84 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 32) + 16LL))(
      *(_QWORD*)(a3 + 32)),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v85 = (*(__int64 (**)(__int64))(*(_QWORD*)v84 + 32LL))(v84),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v116 = (unsigned __int64)a1;
  v86 = (_QWORD*)a3;
  v87 = *(_QWORD*)(a3 + 40);
  v89 = v88;
  v90 = (*(__int64 (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v91 = (*(__int64 (**)(__int64))(*(_QWORD*)v90 + 32LL))(v90),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v93 = v92;
  v94 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *v94 = v85;
  v94[1] = v89;
  v94[2] = v91;
  v94[3] = v93;
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 112LL))(*a4, v85,
                                                                   v89),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_a73d40(v80, (__int64)a4),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)*a4 + 112LL))(*a4, v94[2],
                                                                 v94[3]),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_a73d40(v80, (__int64)a4),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v95 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v86[5] + 16LL))(v86[5]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v96 = (*(__int64 (**)(__int64))(*(_QWORD*)v95 + 32LL))(v95),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v98 = v97;
  v99 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v86 + 16LL))(*v86),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v100 = (*(__int64 (**)(__int64))(*(_QWORD*)v99 + 32LL))(v99),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v102 = v101;
  v103 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v86[1] + 16LL))(v86[1]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v104 = (*(__int64 (**)(__int64))(*(_QWORD*)v103 + 32LL))(v103),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v106 = v105;
  v107 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v86[2] + 16LL))(v86[2]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v120 =
      (float32x4_t*)(*(__int64 (**)(__int64))(*(_QWORD*)v107 + 32LL))(v107),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v121 = v108;
  v109 = *a4;
  LANES128(f_.v117).n128_u64[0] = v100;
  LANES128(f_.v117).n128_u64[1] = v102;
  f_.v118 = v104;
  f_.v119 = v106;
  (*(void (**)(__int64, __int64, float32x4_t*, __int64, __int64))(
      *(_QWORD*)v109 + 128LL))(v109, 3, &f_.v117, v96, v98),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v110 = a4[1];
  gxc_NvnStateCache_BindPolygonState(v110, GameData_21fdf10),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v110, GameData_21fdf14),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  f_.v120 = &f_.v117;
  LANES128(f_.v117).n128_u64[0] = (unsigned __int64)GameData_1fd1008;
  LANES128(f_.v117).n128_u64[1] = f_.v116;
  v111 = GameRoutine_a738c0(v80, (__int64)&f_.v117, 1),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v112 = 32;
  v83 = (unsigned int)(v111 + 2 * f_.v115);
  if (f_.v120 == &f_.v117) {
  LABEL_39:
    (*(void (**)(void*))(LANES128(*(f_.v120)).n128_u64[0] + v112))(
        (void*)f_.v120),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_40;
  }
  if (f_.v120 != nullptr) {
    v112 = 40;
    goto LABEL_39;
  }
LABEL_40:
  (*(void (**)(__int64, unsigned __int64))GameData_212e770[0])(f_.v122 + 8,
                                                               f_.v116 + 80),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_a73e50(v80, (__int64)a4),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v113 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v113 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v113,
                                (__int64)v94),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v83;
}

__int64 llvm_libcxx_21_libcxx_include___functional_10d1c30(__int64 a1,
                                                           __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  _QWORD* v4;
  __int64 result;
  __int64 v6;
  struct {
    char gap0_[12];
    float v7;
    _QWORD v8[4];
    _QWORD* v9;
  } f_;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(*a2 + 52);
  v10 = *a2;
  v4 = *(_QWORD**)(v2 + 40);
  f_.v7 = (float)v3 / 0x1.e000000000000p+5f;
  f_.v9 = f_.v8;
  f_.v8[0] = GameData_200aff0;
  f_.v8[1] = &v10;
  f_.v8[2] = &f_.v7;
  CharacterBuilder_1083e90(v4, (__int64)f_.v8);
  result = (__int64)f_.v9;
  if (f_.v9 == f_.v8) {
    v6 = 32;
  }
  else {
    if (f_.v9 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*f_.v9 + v6))((__int64)f_.v9);
}

void llvm_libcxx_21_libcxx_include___functional_175b230(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float32x4_t* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float32x4_t v11;
  __int64 v12;
  float32x4_t v13;
  float32x4_t v14;
  int v15;
  __int64 v16;
  int v17;
  float32x4_t v18;
  int v19;
  float32x4_t v20;
  float32x4_t v21;
  __int128 v22;
  int32x4_t v23;
  int v24;
  int32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  unsigned __int32 v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  int32x4_t v35;
  float32x4_t v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  float32x4_t v40;
  __int64 v41;
  float32x4_t v42;
  float32x4_t v43;
  int v44;
  __int64 v45;
  int v46;
  float32x4_t v47;
  int v48;
  float32x4_t v49;
  float32x4_t v50;
  __int128 v51;
  int32x4_t v52;
  int v53;
  int32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  unsigned __int32 v58;
  int32x4_t v59;
  int32x4_t v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int32x4_t v64;
  float32x4_t v65;
  __int64 v66;
  double v67;
  float v68;
  float v69;
  float v70;
  float32x2_t v71;
  unsigned __int32 v72;
  float v73;
  float32x4_t v74;
  int8x16_t v75;
  float32x2_t v76;
  float32x2_t v77;
  float32x2_t v78;
  float32x4_t v79;
  float32x4_t v80;
  struct {
    float v81;
    char gap4_[12];
    float v82;
    char gap20_[12];
    float32x4_t v83;
    float32x4_t v84;
    __int64 v85;
    void* v86;
  } f_;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s1", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s2", "=w")),
  v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s1", "=w")),
  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s2", "=w"));
  f_.v86 = &GameData_1a95031;
  f_.v85 = game_HashString((__int64)&GameData_1a95031),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s1", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s2", "=w")),
  v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s1", "=w")),
  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s2", "=w"));
  v2 = SpotMgr_132ffa0((unsigned int*)&f_.v85),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s1", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s2", "=w")),
  v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s1", "=w")),
  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s2", "=w"));
  f_.v86 = &GameData_1a8efcc;
  f_.v85 = game_HashString((__int64)&GameData_1a8efcc),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s1", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s2", "=w")),
  v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s1", "=w")),
  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s2", "=w"));
  v3 = SpotMgr_132ffa0((unsigned int*)&f_.v85),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s1", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s2", "=w")),
  v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s1", "=w")),
  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v2 != 0) {
    v4 = (float32x4_t*)v3;
    if (v3 != 0) {
      v5 = *(_QWORD*)(a1 + 8);
      if (v5 != 0) {
        v6 = std___1___shared_weak_count_lock(v5),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s1", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s2", "=w")),
        v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s1", "=w")),
        v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v6 != 0) {
          v7 = *(__int64**)a1;
          v8 = v6;
          if (*(_QWORD*)a1 != 0) {
            v9 = v7[1];
            if (v9 != 0) {
              v10 = std___1___shared_weak_count_lock(v9),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v73 = COERCE_AS(__typeof__(v73),
                              PSEUDO_REGISTER(float, "s2", "=w"));
              if (v10 != 0) {
                v12 = *v7;
                if (*(_BYTE*)(*v7 + 24) == 1) {
                  v13 = *(float32x4_t*)(v12 + 336);
                  v14 = *(float32x4_t*)(v12 + 352);
                  v15 = 0;
                  DWORDn(v22, sizeof(v22) / 4 - 1) = 0;
                  v16 = 0;
                  v17 = 0;
                  v18 = *(float32x4_t*)(v12 + 368);
                  v19 = DWORDn(*(_OWORD*)(v12 + 272),
                               sizeof(*(_OWORD*)(v12 + 272)) / 4 - 1);
                  v20 = *(float32x4_t*)(v12 + 304);
                  v21 = *(float32x4_t*)(v12 + 320);
                  *(_QWORD*)&v22 = LANES128(v21).n128_u32[3];
                  v23 = vaddq_f32(
                      *(float32x4_t*)(&v15 - 1),
                      vmlaq_laneq_f32(
                          vmlaq_lane_f32(
                              vmulq_n_f32(v13,
                                          COERCE_FLOAT(*(_OWORD*)(v12 + 272))),
                              v14, *(float32x2_t*)(v12 + 272), 1),
                          v18, *(float32x4_t*)(v12 + 272), 2));
                  *(_QWORD*)((char*)&v22 + 4) = 0;
                  DWORDn(v22, sizeof(v22) / 4 - 1) = 0;
                  v24 = DWORDn(*(_OWORD*)(v12 + 288),
                               sizeof(*(_OWORD*)(v12 + 288)) / 4 - 1);
                  v25 = vaddq_f32(
                      *(float32x4_t*)((char*)&v22 + 4),
                      vmlaq_laneq_f32(
                          vmlaq_lane_f32(
                              vmulq_n_f32(v13,
                                          COERCE_FLOAT(*(_OWORD*)(v12 + 288))),
                              v14, *(float32x2_t*)(v12 + 288), 1),
                          v18, *(float32x4_t*)(v12 + 288), 2));
                  *(_QWORD*)((char*)&v22 + 4) = 0;
                  DWORDn(v22, sizeof(v22) / 4 - 1) = 0;
                  v26 = vmlaq_lane_f32(
                      vmulq_n_f32(v13, LANES128(v20).n128_f32[0]), v14,
                      COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1);
                  v27 = vmlaq_lane_f32(
                      vmulq_n_f32(v13, LANES128(v21).n128_f32[0]), v14,
                      COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1);
                  v28 = *(float32x4_t*)(v2 + 32);
                  v29 = LANES128(v20).n128_u32[3];
                  v30 = vaddq_f32(*(float32x4_t*)((char*)&v22 + 4),
                                  vmlaq_laneq_f32(v26, v18, v20, 2));
                  v31 = vaddq_f32(*(float32x4_t*)&v16,
                                  vmlaq_laneq_f32(v27, v18, v21, 2));
                  v32 = vzip1q_s32(v23, v30);
                  v33 = vzip2q_s32(v23, v30);
                  v34 = vzip1q_s32(v25, v31);
                  v35 = vzip2q_s32(v25, v31);
                  v36 = vaddq_f32(
                      vzip2q_s32(v33, v35),
                      vmlaq_laneq_f32(
                          vmlaq_lane_f32(
                              vmulq_n_f32(vzip1q_s32(v32, v34),
                                          LANES128(v28).n128_f32[0]),
                              vzip2q_s32(v32, v34),
                              COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                              1),
                          vzip1q_s32(v33, v35), v28, 2));
                  LANES128(v36).n128_u64[0] =
                      LANES128_OF(
                          vmulq_n_f32(v36, 0x1.0000000000000p+0f /
                                               LANES128(v36).n128_f32[3]))
                          .n128_u64[0];
                  LANES128(v11).n128_f32[0] =
                      (float)((float)(LANES128(v36).n128_f32[0] *
                                      0x1.0000000000000p-1f) +
                              0x1.0000000000000p-1f) *
                      0x1.e000000000000p+10f;
                  LANES128(v11).n128_f32[1] =
                      (float)(0x1.0000000000000p-1f -
                              (float)(0x1.0000000000000p-1f *
                                      LANES128(v36).n128_f32[1])) *
                      0x1.0e00000000000p+10f;
                  LANES128(v11).n128_u64[1] = LANES128(v28).n128_u32[2];
                }
                f_.v84 = v11;
                if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v37 = v10;
                  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
                      v11 = COERCE_AS(__typeof__(v11),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v69 = COERCE_AS(__typeof__(v69),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v72 = COERCE_AS(__typeof__(v72),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v73 = COERCE_AS(__typeof__(v73),
                                      PSEUDO_REGISTER(float, "s2", "=w"));
                  std___1___shared_weak_count___release_weak(v37),
                      v11 = COERCE_AS(__typeof__(v11),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v69 = COERCE_AS(__typeof__(v69),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v72 = COERCE_AS(__typeof__(v72),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v73 = COERCE_AS(__typeof__(v73),
                                      PSEUDO_REGISTER(float, "s2", "=w"));
                }
              }
            }
            v38 = v7[1];
            if (v38 != 0) {
              v39 = std___1___shared_weak_count_lock(v38),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v40 = COERCE_AS(__typeof__(v40),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v72 = COERCE_AS(__typeof__(v72),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v73 = COERCE_AS(__typeof__(v73),
                              PSEUDO_REGISTER(float, "s2", "=w"));
              if (v39 != 0) {
                v41 = *v7;
                if (*(_BYTE*)(*v7 + 24) == 1) {
                  v42 = *(float32x4_t*)(v41 + 336);
                  v43 = *(float32x4_t*)(v41 + 352);
                  v44 = 0;
                  DWORDn(v51, sizeof(v51) / 4 - 1) = 0;
                  v45 = 0;
                  v46 = 0;
                  v47 = *(float32x4_t*)(v41 + 368);
                  v48 = DWORDn(*(_OWORD*)(v41 + 272),
                               sizeof(*(_OWORD*)(v41 + 272)) / 4 - 1);
                  v49 = *(float32x4_t*)(v41 + 304);
                  v50 = *(float32x4_t*)(v41 + 320);
                  *(_QWORD*)&v51 = LANES128(v50).n128_u32[3];
                  v52 = vaddq_f32(
                      *(float32x4_t*)(&v44 - 1),
                      vmlaq_laneq_f32(
                          vmlaq_lane_f32(
                              vmulq_n_f32(v42,
                                          COERCE_FLOAT(*(_OWORD*)(v41 + 272))),
                              v43, *(float32x2_t*)(v41 + 272), 1),
                          v47, *(float32x4_t*)(v41 + 272), 2));
                  *(_QWORD*)((char*)&v51 + 4) = 0;
                  DWORDn(v51, sizeof(v51) / 4 - 1) = 0;
                  v53 = DWORDn(*(_OWORD*)(v41 + 288),
                               sizeof(*(_OWORD*)(v41 + 288)) / 4 - 1);
                  v54 = vaddq_f32(
                      *(float32x4_t*)((char*)&v51 + 4),
                      vmlaq_laneq_f32(
                          vmlaq_lane_f32(
                              vmulq_n_f32(v42,
                                          COERCE_FLOAT(*(_OWORD*)(v41 + 288))),
                              v43, *(float32x2_t*)(v41 + 288), 1),
                          v47, *(float32x4_t*)(v41 + 288), 2));
                  *(_QWORD*)((char*)&v51 + 4) = 0;
                  DWORDn(v51, sizeof(v51) / 4 - 1) = 0;
                  v55 = vmlaq_lane_f32(
                      vmulq_n_f32(v42, LANES128(v49).n128_f32[0]), v43,
                      COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]), 1);
                  v56 = vmlaq_lane_f32(
                      vmulq_n_f32(v42, LANES128(v50).n128_f32[0]), v43,
                      COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]), 1);
                  v57 = v4[2];
                  v58 = LANES128(v49).n128_u32[3];
                  v59 = vaddq_f32(*(float32x4_t*)((char*)&v51 + 4),
                                  vmlaq_laneq_f32(v55, v47, v49, 2));
                  v60 = vaddq_f32(*(float32x4_t*)&v45,
                                  vmlaq_laneq_f32(v56, v47, v50, 2));
                  v61 = vzip1q_s32(v52, v59);
                  v62 = vzip2q_s32(v52, v59);
                  v63 = vzip1q_s32(v54, v60);
                  v64 = vzip2q_s32(v54, v60);
                  v65 = vaddq_f32(
                      vzip2q_s32(v62, v64),
                      vmlaq_laneq_f32(
                          vmlaq_lane_f32(
                              vmulq_n_f32(vzip1q_s32(v61, v63),
                                          LANES128(v57).n128_f32[0]),
                              vzip2q_s32(v61, v63),
                              COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                              1),
                          vzip1q_s32(v62, v64), v57, 2));
                  LANES128(v65).n128_u64[0] =
                      LANES128_OF(
                          vmulq_n_f32(v65, 0x1.0000000000000p+0f /
                                               LANES128(v65).n128_f32[3]))
                          .n128_u64[0];
                  LANES128(v40).n128_f32[0] =
                      (float)((float)(LANES128(v65).n128_f32[0] *
                                      0x1.0000000000000p-1f) +
                              0x1.0000000000000p-1f) *
                      0x1.e000000000000p+10f;
                  LANES128(v40).n128_f32[1] =
                      (float)(0x1.0000000000000p-1f -
                              (float)(0x1.0000000000000p-1f *
                                      LANES128(v65).n128_f32[1])) *
                      0x1.0e00000000000p+10f;
                  LANES128(v40).n128_u64[1] = LANES128(v57).n128_u32[2];
                }
                f_.v83 = v40;
                if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v66 = v39;
                  (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39),
                      v11 = COERCE_AS(__typeof__(v11),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v69 = COERCE_AS(__typeof__(v69),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v72 = COERCE_AS(__typeof__(v72),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v73 = COERCE_AS(__typeof__(v73),
                                      PSEUDO_REGISTER(float, "s2", "=w"));
                  std___1___shared_weak_count___release_weak(v66),
                      v11 = COERCE_AS(__typeof__(v11),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v40 = COERCE_AS(__typeof__(v40),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v69 = COERCE_AS(__typeof__(v69),
                                      PSEUDO_REGISTER(float, "s2", "=w")),
                      v72 = COERCE_AS(__typeof__(v72),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v73 = COERCE_AS(__typeof__(v73),
                                      PSEUDO_REGISTER(float, "s2", "=w"));
                }
              }
            }
            v67 = ui_LayoutAccessor_GetPaneTranslate(v7, "N_Marker00"),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s1", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s2", "=w")),
            v72 =
                COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s1", "=w")),
            v73 =
                COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s2", "=w"));
            f_.v81 = *(float*)&v67;
            f_.v82 = v68;
            v70 = v69;
            LANES64(v71)
                .n64_f64[0] =
                ui_LayoutAccessor_GetPaneTranslate(v7, "N_Marker01"),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s1", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s2", "=w")),
    v72 = COERCE_AS(__typeof__(v72), PSEUDO_REGISTER(float, "s1", "=w")),
    v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s2", "=w"));
            v74 = vsubq_f32(f_.v84, f_.v83);
            v75 = vmulq_f32(v74, v74);
            LANES128(v75).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v75, v75, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0])))
                    .n64_u64[0];
            LANES64(v76).n64_u64[0] =
                LANES64_OF(
                    vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]))))
                    .n64_u64[0];
            if (LANES64(v76).n64_f32[0] != 0x0.0p+0f) {
              LANES64(v71).n64_u32[1] = v72;
              LANES64(v77).n64_u64[0] =
                  LANES64_OF(vsub_f32(COERCE_AS(float32x2_t,
                                                __PAIR64__(LODWORD(f_.v82),
                                                           LODWORD(f_.v81))),
                                      v71))
                      .n64_u64[0];
              LANES64(v78).n64_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          vmul_f32(COERCE_AS(float32x2_t,
                                             COERCE_UNSIGNED_INT(v70 - v73)),
                                   COERCE_AS(float32x2_t,
                                             COERCE_UNSIGNED_INT(v70 - v73))),
                          vmul_f32(v77, v77)))
                      .n64_u64[0];
              LANES128(v79).n128_u64[0] =
                  LANES64_OF(vdiv_f32(vsqrt_f32(vpadd_f32(v78, v78)), v76))
                      .n64_u64[0];
              *(_DWORD*)(a1 + 16) = LANES128(v79).n128_u32[0];
              LANES128(v79).n128_u64[1] = LANES128(v79).n128_u64[0];
              v80 = vmulq_f32(f_.v84, v79);
              *(float*)(a1 + 20) = f_.v81 - LANES128(v80).n128_f32[0];
              *(float*)(a1 + 24) = f_.v82 + LANES128(v80).n128_f32[2];
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
                v11 = COERCE_AS(__typeof__(v11),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v69 = COERCE_AS(__typeof__(v69),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v73 = COERCE_AS(__typeof__(v73),
                                PSEUDO_REGISTER(float, "s2", "=w"));
            std___1___shared_weak_count___release_weak(v8),
                v11 = COERCE_AS(__typeof__(v11),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v69 = COERCE_AS(__typeof__(v69),
                                PSEUDO_REGISTER(float, "s2", "=w")),
                v72 = COERCE_AS(__typeof__(v72),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v73 = COERCE_AS(__typeof__(v73),
                                PSEUDO_REGISTER(float, "s2", "=w"));
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
