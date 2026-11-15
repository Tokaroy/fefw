#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_combat_10690a0(PSEUDO_X8, __int64);
__int64 CharacterAnimator_1079e10(__int64);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _QWORD GameData_1bb1dd8[3];
extern __int64 GameData_21d8778;
extern __int64 GameData_21ec7b0;
extern __int64 game_script_hub_g_frame_counter;
float CharacterAnimator_1079580(__int64, int, float, float, float);
float game_combat_110ac10(__int64 a1, float result);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0abb0(__int64);
__int64 GameRoutine_1a0ace0(__int64, float);
__int64 GameRoutine_1a0acf0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b940(__int64, __int64, unsigned __int64);
__int64 GameRoutine_c30250(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1_ios_base_init(__int64, __int64);
__int64 std___1_locale_locale_1a0a220(__int64);
const char* GameRoutine_108c3c0(int);
double GameRoutine_1a09f70(double);
double GameRoutine_1a09f80(double);
extern _UNKNOWN* GameData_212f3b8;
extern __int64 GameData_212eae8;
extern __int64 GameData_212eaf0;
extern __int64 GameData_212f3b0;
extern __int64 fw_memory_g_heap_manager_ptr;
float game_combat_e401e0(float*, float*);
unsigned __int64 GameRoutine_1a09c70(const char*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
__attribute__((swiftcall)) void game_combat_e36910(PSEUDO_X8 x8_, __int64 a1);
void game_combat_e3f8b0(_QWORD* a1, double a2, double a3, double a4, double a5);

__attribute__((swiftcall)) void game_combat_e36910(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  _WORD* a2 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  char* v4;
  unsigned __int64 v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    char* v28;
  } v26_;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    _QWORD v32[2];
    unsigned __int64 v33;
    __int64 v34;
    unsigned __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    unsigned __int64 v40;
    int v41;
    char gap132_[4];
    _QWORD v42[19];
  } v29_;

  *a2 = 0;
  LOWORD(v29_.v29) = 0;
  GameRoutine_1a09ce0((__int64)a2, (const char*)&v29_.v29 + 1, 0);
  GameRoutine_1a09ce0((__int64)a2, " / ", 3u);
  v4 = GameRoutine_108c3c0(*(_DWORD*)(a1 + 52));
  v5 = GameRoutine_1a09c70(v4);
  result = GameRoutine_1a09ce0((__int64)a2, v4, v5);
  if (*(_BYTE*)(a1 + 88) != 1) {
    result;
    return;
  }
  GameRoutine_1a09ce0((__int64)a2, " / ", 3u);
  v29_.v42[6] = 0;
  v7 = GameData_212f3b0;
  v8 = (__int64*)GameData_212f3b8;
  v9 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8);
  v10 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212f3b8 + 8);
  v11 = GameData_212f3b0 + 64;
  v29_.v42[0] = GameData_212f3b0 + 64;
  v29_.v29 = v9;
  *(__int64*)((char*)&v29_.v29 + *(_QWORD*)(v9 - 24)) = v10;
  v12 = (char*)&v29_.v29 + *(_QWORD*)(v29_.v29 - 24);
  std___1_ios_base_init((__int64)v12, (__int64)&v29_.v30);
  *((_QWORD*)v12 + 17) = 0;
  *((_DWORD*)v12 + 36) = -1;
  v29_.v42[0] = v11;
  v13 = GameData_212eaf0;
  v29_.v29 = v7 + 24;
  v29_.v30 = GameData_212eaf0 + 16;
  std___1_locale_locale_1a0a220((__int64)&v29_.v31);
  v29_.v34 = 0;
  v29_.v35 = 0;
  v29_.v32[1] = 0;
  v29_.v33 = 0;
  v14 = GameData_212eae8;
  v29_.v32[0] = 0;
  v29_.v36 = 0;
  v29_.v37 = 0;
  v29_.v38 = 0;
  v29_.v39 = 0;
  v29_.v40 = 0;
  v29_.v30 = GameData_212eae8 + 16;
  v29_.v41 = 16;
  GameRoutine_c30250((__int64)&v29_.v30);
  *(_DWORD*)((char*)&v29_.v29 + *(_QWORD*)(v29_.v29 - 24) + 8) =
      *(_DWORD*)((_BYTE*)&v29_.v29 + *(_QWORD*)(v29_.v29 - 24) + 8) &
          0xFFFFFEFB |
      4;
  *(_QWORD*)((char*)&v29_.v32[-1] + *(_QWORD*)(v29_.v29 - 24)) = 2;
  if ((*(_BYTE*)(a1 + 88) & 1) == 0) {
    GameRoutine_8123d0();
  }
  GameRoutine_1a0ace0((__int64)&v29_.v29, *(float*)(a1 + 84));
  if ((v29_.v41 & 0x10) != 0) {
    v17 = v29_.v40;
    if (v29_.v40 < v29_.v35) {
      v29_.v40 = v29_.v35;
      v17 = v29_.v35;
    }
    v18 = &v29_.v34;
  }
  else {
    if ((v29_.v41 & 8) == 0) {
      v15 = 0;
      LOBYTE(v26_.v26) = 0;
      v16 = (char*)&v26_.v26 + 1;
      goto LABEL_19;
    }
    v17 = v29_.v33;
    v18 = v29_.v32;
  }
  v19 = *v18;
  v15 = v17 - *v18;
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v15 | 7) + 1;
    }
    v16 = (const char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v20, 16, 0);
    v26_.v27 = v15;
    v26_.v28 = v16;
    v26_.v26 = v20 | 1;
  }
  else {
    LOBYTE(v26_.v26) = 2 * v15;
    v16 = (char*)&v26_.v26 + 1;
    if (v15 == 0) {
      goto LABEL_19;
    }
  }
  GameRoutine_1a0b940((__int64)v16, v19, v15);
LABEL_19:
  v16[v15] = 0;
  if ((v26_.v26 & 1) != 0) {
    v21 = v26_.v28;
  }
  else {
    v21 = (char*)&v26_.v26 + 1;
  }
  if ((v26_.v26 & 1) != 0) {
    v22 = v26_.v27;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v26_.v26 >> 1;
  }
  GameRoutine_1a09ce0((__int64)a2, v21, v22);
  if ((v26_.v26 & 1) != 0 && v26_.v28 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  (__int64)v26_.v28);
  }
  v24 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8);
  v29_.v29 = *v8;
  *(__int64*)((char*)&v29_.v29 + *(_QWORD*)(v29_.v29 - 24)) = v24;
  v29_.v30 = v14 + 16;
  if ((v29_.v37 & 1) != 0 && v29_.v39 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  v29_.v39);
  }
  v29_.v30 = v13 + 16;
  std___1_locale_Destroy_locale((__int64)&v29_.v31);
  GameRoutine_1a0acf0(&v29_.v29, v8 + 1);
  {
    GameRoutine_1a0abb0((__int64)v29_.v42);
    return;
  }
}

void game_combat_e3f8b0(_QWORD* a1, double a2, double a3, double a4, double a5)
{
  __int64 v5;
  float32x4_t* v7;
  __int64 v8;
  float v9;
  float32x4_t v11;
  float v12;
  float32x4_t* v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  __int64 v18;
  float v19;
  unsigned __int64 v20;
  float32x4_t v21;
  int8x16_t v22;
  double v23;
  double v24;
  double v25;
  float v26;
  float v27;
  float v28;
  unsigned __int32 v32;
  double v33;
  unsigned __int32 v34;
  __int64 v35;
  struct {
    char v36[4];
    float v37;
    char gap56_[72];
    char v38;
  } v36_;
  float32x4_t v39;
  float32x4_t v40;

  v5 = a1[6];
  if (v5 != 0 && *(_QWORD*)(v5 + 8) != -1 && a1[7] != 0) {
    v7 = (float32x4_t*)a1[1];
    if (v7 != nullptr) {
      v8 = a1[15];
      v9 = LANES128(v7[19]).n128_f32[1];
      {
        __typeof__(a5) z_ = (__typeof__(a5)){0};
        LODWORD(z_) = *(_DWORD*)(v8 + 20);
        a5 = z_;
      }
      LANES128(v11).n128_u32[0] = *(_DWORD*)(v8 + 16);
      v33 = a5;
      v34 = LANES128(v11).n128_u32[0];
      LANES128(v11).n128_u32[1] = 1128792064;
      LANES128(v11).n128_f64[1] = a5;
      v40 = v11;
      LANES128(v11).n128_u32[1] = -1027080192;
      LANES128(v11).n128_f64[1] = a5;
      v39 = v11;
      collision_670c60((void*)((__int64)v36_.v36), &v40, &v39, 1);
      v12 = v36_.v37;
      v13 = (float32x4_t*)a1[15];
      if (v36_.v38 == 0) {
        v12 = v9;
      }
      if (LANES128(v13[4]).n128_u8[0] == 1) {
        v14 = v13[3];
        LANES128(v14).n128_u32[3] = 0;
      }
      else {
        LANES128(v14).n128_u64[0] = __PAIR64__(LODWORD(v12), v34);
        LANES128(v14).n128_f64[1] = v33;
      }
      v15 = vsubq_f32(v7[19], v14);
      v16 = vmulq_f32(v15, v15);
      LANES128(v16).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v7[19]).n128_u64[0] = LANES128(v14).n128_u64[0];
        v17 = v7[19];
        LANES128(v7[18]).n128_u32[2] |= 1u;
        LANES128(v17).n128_u64[1] = LANES128(v14).n128_u32[2];
        v7[19] = v17;
      }
      v18 = a1[16];
      v35 = 0x3F80000000000000LL;
      v19 = game_combat_e401e0((float*)&v35, (float*)(v18 + 16));
      {
        __typeof__(v20) z_ = (__typeof__(v20)){0};
        LODWORD(z_) = 0;
        v20 = z_;
      }
      *((float*)&v20 + 1) = v19;
      v21 = vsubq_f32(v7[20], COERCE_AS(float32x4_t, v20));
      v22 = vmulq_f32(v21, v21);
      LANES128(v22).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v7[20]).n128_u32[0] = 0;
        LANES128(v7[20]).n128_f32[1] = v19;
        v7[20] = COERCE_AS(float32x4_t, LANES128(v7[20]).n128_u64[0]);
        v23 = v19 * 0x1.0000000000000p-1;
        v24 = GameRoutine_1a09f80(v23);
        v25 = GameRoutine_1a09f70(v23);
        v26 = v24 + PSEUDO_UNFUSED(v25 * 0x0.0p+0);
        v27 = PSEUDO_UNFUSED(v25 * -0x0.0p+0) + v24 * 0x0.0p+0;
        v28 = v25 + PSEUDO_UNFUSED(v24 * 0x0.0p+0);
        if (COERCE_FLOAT(*(_OWORD*)&v7[21]) != v27 ||
            COERCE_FLOAT(
                DWORDn(LANES128(v7[21]).n128_u64[0],
                       sizeof(LANES128(v7[21]).n128_u64[0]) / 4 - 1)) != v28 ||
            COERCE_FLOAT(LANES128(v7[21]).n128_u64[1]) != v27 ||
            COERCE_FLOAT(DWORDn(*(_OWORD*)&v7[21],
                                sizeof(*(_OWORD*)&v7[21]) / 4 - 1)) != v26) {
          v32 = LANES128(v7[18]).n128_u32[2];
          LANES128(v7[21]).n128_f32[0] = v27;
          LANES128(v7[21]).n128_f32[1] = v28;
          LANES128(v7[21]).n128_f32[2] = v27;
          LANES128(v7[21]).n128_f32[3] = v26;
          LANES128(v7[18]).n128_u32[2] = v32 | 1;
        }
      }
    }
  }
}

float game_combat_110ac10(__int64 a1, float result)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  bool v20;
  unsigned int v21;
  char v22;
  char v23;
  __int64 v24;
  int v25;
  __int64 v26;
  float v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  float v37;
  float v38;
  __int64 v40;

  if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 4LL) & 2) != 0) {
    v3 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) - 1;
    v4 = v3 > 2 ? 2LL : GameData_1bb1dd8[v3];
    v5 = GameData_21ec7b0 + 24 * v4;
    v6 = *(_QWORD*)(v5 + 32);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v7 = *(_QWORD*)(v5 + 40);
    v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == 0;
    if (v8 || (v9 = *(_QWORD*)(v7 + 80)) == 0 ||
        (*(_QWORD*)(v9 + 8) != -1 ? (v10 = *(_QWORD*)(v7 + 88) == 0)
                                  : (v10 = true),
         v10)) {
      v11 = 0;
    }
    else {
      v11 = *(_QWORD*)(v6 + 8) == -1 ? 0LL : v7;
    }
    std___1___shared_weak_count___release_weak(v6);
    result =
        (float)(PSEUDO_UNFUSED((float)(*(float*)(*(_QWORD*)(a1 + 8) + 44LL) -
                                       *(float*)(v11 + 44)) *
                               (float)(*(float*)(*(_QWORD*)(a1 + 8) + 44LL) -
                                       *(float*)(v11 + 44)))) +
        (float)((float)(*(float*)(*(_QWORD*)(a1 + 8) + 40LL) -
                        *(float*)(v11 + 40)) *
                (float)(*(float*)(*(_QWORD*)(a1 + 8) + 40LL) -
                        *(float*)(v11 + 40)));
    if (result < 0x1.0000000000000p-2f) {
      v12 = *(_QWORD*)(v11 + 368);
      v22 = CharacterAnimator_1079e10(v12);
      result = PSEUDO_REGISTER(float, "s0", "=w");
      if ((v22 & 1) != 0) {
        result = CharacterAnimator_1079580(
            v12, -2109400973, -0x1.0000000000000p+0f, -0x1.0000000000000p+0f,
            0x1.0000000000000p+0f);
      }
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
    v13 = *(_QWORD*)(a1 + 8);
    if (*(_DWORD*)(v13 + 648) == 3) {
      *(_BYTE*)(a1 + 32) = 1;
      *(float*)&v14 =
          X8CALL_S0(float, game_combat_10690a0((void*)((__int64)&v40),
                                               *(_QWORD*)(v13 + 808)));
      if (GameData_21ec7b0 == 0 ||
          (v15 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
          (~*(_DWORD*)(v15 + 112) & 0x28000) != 0) {
        v16 = *(_QWORD*)(*(_QWORD*)(v13 + 808) + 88LL);
        v17 = *(_QWORD*)(v16 + 392);
        v18 = *(_QWORD*)(v16 + 400);
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                    memory_order_relaxed);
        }
        v19 = *(_DWORD*)(v17 + 11784);
        v20 = v19 > 0x12;
        v21 = 0x1FF7Fu >> v19;
        v22 = v20;
        v23 = v22 | v21;
        if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v18 + 16LL))(v18, v14);
          std___1___shared_weak_count___release_weak(v18);
        }
        if ((v23 & 1) != 0) {
          v24 = *(_QWORD*)(v13 + 808);
          *(_DWORD*)(v13 + 844) = *(_DWORD*)(v24 + 48);
          v25 = *(_DWORD*)(v24 + 52);
          *(_QWORD*)(v13 + 860) = 0x3F00000000000000LL;
          *(_DWORD*)(v13 + 848) = v25;
          *(_QWORD*)(v13 + 852) = v40;
        }
      }
      result = CharacterAnimator_1079580(
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL), 1817091785,
          0x1.5555560000000p-3f, -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
    }
  }
  v26 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 20LL);
  if ((v26 & 0x100000000LL) != 0) {
    LODWORD(result) = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 20LL);
    v27 = *(float*)&v26 +
          (float)(PSEUDO_UNFUSED((float)*(int*)(GameData_21d8778 + 24) *
                                 -0x1.1111120000000p-6f));
    if (v27 > 0x0.0p+0f) {
      v28 = GameData_21ec7b0;
      if (GameData_21ec7b0 != 0) {
        v29 = nn_os_ConvertToTimeSpan(
                  *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
                  1000 -
              *(_QWORD*)(v28 + 136);
        v30 = 0x1.e848000000000p+19f;
      }
      else {
        v29 = nn_os_ConvertToTimeSpan(
                  *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
              1000000;
        v30 = 0x1.f400000000000p+9f;
      }
      v31 = (float)v29;
      v32 = *(_QWORD**)(a1 + 8);
      result = v31 / v30;
      v33 = v32[10];
      if (v33 == 0 || ((v34 = *(_QWORD*)(v33 + 8), v35 = v32[11], v34 != -1)
                           ? (v36 = v35 == 0)
                           : (v36 = true),
                       v36)) {
        v37 = 0x1.11570c0000000p-5f;
      }
      else {
        v37 = (float)(*(float*)(*(_QWORD*)(v35 + 304) + 16LL) *
                      0x1.0aef000000000p+4f) *
              0x1.0624de0000000p-10f;
      }
      v38 = result - v37;
      if (v27 <= result && v38 < v27) {
        return CharacterAnimator_1079580(
            v32[46], -1193575777, -0x1.0000000000000p+0f,
            -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
