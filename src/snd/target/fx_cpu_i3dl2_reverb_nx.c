#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1685a0(__int64 result);
extern _UNKNOWN* GameData_212c190;
extern int* GameData_2134848[27];
extern int* GameData_2134858[25];
float FxI3dl2ReverbNX_14fb90(float, float, float, float);
__int64 FxCpuI3dl2ReverbNX_setParam(__int64 a1, __int64 a2, float a3);

__int64 FxCpuI3dl2ReverbNX_setParam(__int64 a1, __int64 a2, float a3)
{
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;

  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL);
  v7 = *((float*)GameData_212c190 + 1);
  v8 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v9 = -*(float*)GameData_212c190;
  v11 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v10 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v12 = -v11;
  v13 =
      (float)((float)-(
                  float)(v8 -
                         (float)((float)(v10 +
                                         (float)((float)-(
                                                     float)(v11 -
                                                            (float)((float)(v7 -
                                                                            (float)(*(float*)
                                                                                        GameData_212c190 *
                                                                                    0x1.3bd3ce0000000p+1f)) *
                                                                    0x1.3bd3ce0000000p+1f)) *
                                                 0x1.3bd3ce0000000p+1f)) *
                                 0x1.3bd3ce0000000p+1f)) *
              0x1.3bd3ce0000000p+1f) +
      0x1.0000000000000p+0f;
  v14 =
      (float)((float)((float)((float)(v13 * 0x1.921fb60000000p+0f) *
                              0x1.6800000000000p+6f) *
                      0x1.921fb60000000p+1f) /
              0x1.6800000000000p+7f) +
      (float)(roundf(
                  (float)((float)((float)((float)(v13 * 0x1.921fb60000000p+0f) *
                                          0x1.6800000000000p+6f) *
                                  0x1.921fb60000000p+1f) /
                          0x1.6800000000000p+7f) *
                  0x1.45f3060000000p-3f) *
              -0x1.921fb60000000p+2f);
  if (v14 <= 0x1.921fb60000000p+0f) {
    v16 = v14;
    if (v14 >= -0x1.921fb60000000p+0f) {
      goto LABEL_6;
    }
    v15 = -0x1.921fb60000000p+1f;
  }
  else {
    v15 = 0x1.921fb60000000p+1f;
  }
  v16 = v15 - v14;
LABEL_6:
  *(float*)(v6 + 120) =
      -0x1.3880000000000p+13f *
      (float)(0x1.0000000000000p+0f -
              (float)(PSEUDO_UNFUSED(
                  (float)(0x1.0000000000000p+0f -
                          (float)(*(float*)a2 / -0x1.3880000000000p+13f)) *
                  (float)(v16 *
                          (float)((float)((float)((float)((float)(v10 +
                                                                  (float)((float)(v12 +
                                                                                  (float)((float)(v7 +
                                                                                                  (float)(v9 *
                                                                                                          (float)(v16 *
                                                                                                                  v16))) *
                                                                                          (float)(v16 *
                                                                                                  v16))) *
                                                                          (float)(v16 *
                                                                                  v16))) *
                                                          (float)(v16 * v16)) -
                                                  v8) *
                                          (float)(v16 * v16)) +
                                  0x1.0000000000000p+0f)))));
  if (v14 > 0x1.921fb60000000p+0f) {
    v17 = 0x1.921fb60000000p+1f;
  LABEL_10:
    v14 = v17 - v14;
    goto LABEL_11;
  }
  if (v14 < -0x1.921fb60000000p+0f) {
    v17 = -0x1.921fb60000000p+1f;
    goto LABEL_10;
  }
LABEL_11:
  *(float*)(v6 + 124) =
      *(float*)GameData_2134848[0] *
      (float)(0x1.0000000000000p+0f -
              (float)(PSEUDO_UNFUSED(
                  (float)(0x1.0000000000000p+0f -
                          (float)(*(float*)(a2 + 4) /
                                  *(float*)GameData_2134848[0])) *
                  (float)(v14 *
                          (float)((float)((float)((float)((float)(v10 +
                                                                  (float)((float)(v12 +
                                                                                  (float)((float)(v7 +
                                                                                                  (float)(v9 *
                                                                                                          (float)(v14 *
                                                                                                                  v14))) *
                                                                                          (float)(v14 *
                                                                                                  v14))) *
                                                                          (float)(v14 *
                                                                                  v14))) *
                                                          (float)(v14 * v14)) -
                                                  v8) *
                                          (float)(v14 * v14)) +
                                  0x1.0000000000000p+0f)))));
  *(float*)(v6 + 128) = (float)*(int*)(a2 + 8) / 0x1.f400000000000p+9f;
  *(_DWORD*)(v6 + 132) = *(_DWORD*)(a2 + 12);
  *(_DWORD*)(v6 + 136) = *(_DWORD*)(a2 + 16);
  *(float*)(v6 + 140) = (float)*(int*)(a2 + 20) / 0x1.f400000000000p+9f;
  *(float*)(v6 + 144) =
      FxI3dl2ReverbNX_14fb90(*(float*)(a2 + 24), *(float*)GameData_2134858[0],
                             0x1.f400000000000p+10f, a3);
  *(float*)(v6 + 148) = (float)*(int*)(a2 + 28) / 0x1.f400000000000p+9f;
  *(_DWORD*)(v6 + 152) = *(_DWORD*)(a2 + 32);
  *(_DWORD*)(v6 + 156) = *(_DWORD*)(a2 + 36);
  *(_DWORD*)(v6 + 160) = *(_DWORD*)(a2 + 40);
  *(float*)(v6 + 164) = a3 * *(float*)(a2 + 44);
  return GameRoutine_1685a0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
}

#pragma GCC visibility pop
