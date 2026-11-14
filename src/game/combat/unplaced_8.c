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
      if ((CharacterAnimator_1079e10(v12) & 1) != 0) {
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
