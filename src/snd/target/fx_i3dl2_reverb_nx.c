#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c190;
float FxI3dl2ReverbNX_14fb90(float a1, float a2, float a3, float a4);
__int64 EffectI3dl2Reverb_2b0f80(__int64 result, float);
__int64 EffectI3dl2Reverb_2b1000(__int64 result, float);
__int64 EffectI3dl2Reverb_2b1080(__int64 result, __int64);
__int64 EffectI3dl2Reverb_2b1100(__int64 result, float);
__int64 EffectI3dl2Reverb_2b1180(__int64 result, float);
__int64 EffectI3dl2Reverb_2b1270(__int64 result, float);
__int64 EffectI3dl2Reverb_2b1360(__int64 result, float);
__int64 EffectI3dl2Reverb_2b13e0(__int64 result, float);
__int64 EffectI3dl2Reverb_2b1460(__int64 result, float);
__int64 GameRoutine_2b14e0(__int64 result, float);
__int64 nn_atk_EffectI3dl2Reverb_SetLateReverbDelayTime(__int64 result,
                                                        __int64);
__int64 nn_atk_EffectI3dl2Reverb_SetReflectionDelayTime(__int64 result,
                                                        __int64);
__int64 FxI3dl2ReverbNX_setParam(__int64 a1, __int64 a2, float a3);

__int64 FxI3dl2ReverbNX_setParam(__int64 a1, __int64 a2, float a3)
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
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;

  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL);
  v7 = *((float*)GameData_212c190 + 1);
  v8 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v9 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v10 = -*(float*)GameData_212c190;
  v11 = -v8;
  v12 = -(float)(v8 - (float)((float)(v7 - (float)(*(float*)GameData_212c190 *
                                                   0x1.3bd3ce0000000p+1f)) *
                              0x1.3bd3ce0000000p+1f));
  v13 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v14 = -v13;
  v15 =
      (float)((float)((float)((float)((float)((float)-(
                                                  float)(v13 -
                                                         (float)((float)(v9 +
                                                                         (float)(v12 *
                                                                                 0x1.3bd3ce0000000p+1f)) *
                                                                 0x1.3bd3ce0000000p+1f)) *
                                              0x1.3bd3ce0000000p+1f) +
                                      0x1.0000000000000p+0f) *
                              0x1.921fb60000000p+0f) *
                      0x1.6800000000000p+6f) *
              0x1.921fb60000000p+1f) /
      0x1.6800000000000p+7f;
  v16 = roundf(v15 * 0x1.45f3060000000p-3f);
  v17 = v15 + (float)(v16 * -0x1.921fb60000000p+2f);
  if (!(v17 > 0x1.921fb60000000p+0f)) {
    v19 = v15 + (float)(v16 * -0x1.921fb60000000p+2f);
    if (!(v17 < -0x1.921fb60000000p+0f)) {
      goto LABEL_6;
    }
    v18 = -0x1.921fb60000000p+1f;
  }
  else {
    v18 = 0x1.921fb60000000p+1f;
  }
  v19 = v18 - v17;
LABEL_6:
  EffectI3dl2Reverb_2b0f80(
      v6,
      -0x1.3880000000000p+13f *
          (float)(0x1.0000000000000p+0f -
                  (float)(PSEUDO_UNFUSED(
                      (float)(0x1.0000000000000p+0f -
                              (float)(*(float*)a2 / -0x1.3880000000000p+13f)) *
                      (float)(v19 *
                              (float)((float)((float)(v14 +
                                                      (float)((float)(v9 +
                                                                      (float)((float)(v11 +
                                                                                      (float)((float)(v7 +
                                                                                                      (float)(v10 *
                                                                                                              (float)(v19 *
                                                                                                                      v19))) *
                                                                                              (float)(v19 *
                                                                                                      v19))) *
                                                                              (float)(v19 *
                                                                                      v19))) *
                                                              (float)(v19 *
                                                                      v19))) *
                                              (float)(v19 * v19)) +
                                      0x1.0000000000000p+0f))))));
  if (v17 > 0x1.921fb60000000p+0f) {
    v20 = 0x1.921fb60000000p+1f;
  LABEL_10:
    v17 = v20 - v17;
    goto LABEL_11;
  }
  if (v17 < -0x1.921fb60000000p+0f) {
    v20 = -0x1.921fb60000000p+1f;
    goto LABEL_10;
  }
LABEL_11:
  EffectI3dl2Reverb_2b1000(
      *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL),
      -0x1.3880000000000p+13f *
          (float)(0x1.0000000000000p+0f -
                  (float)(PSEUDO_UNFUSED(
                      (float)(0x1.0000000000000p+0f -
                              (float)(*(float*)(a2 + 4) /
                                      -0x1.3880000000000p+13f)) *
                      (float)(v17 *
                              (float)((float)((float)(v14 +
                                                      (float)((float)(v9 +
                                                                      (float)((float)(v11 +
                                                                                      (float)((float)(v7 +
                                                                                                      (float)(v10 *
                                                                                                              (float)(v17 *
                                                                                                                      v17))) *
                                                                                              (float)(v17 *
                                                                                                      v17))) *
                                                                              (float)(v17 *
                                                                                      v17))) *
                                                              (float)(v17 *
                                                                      v17))) *
                                              (float)(v17 * v17)) +
                                      0x1.0000000000000p+0f))))));
  EffectI3dl2Reverb_2b1080(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL),
                           1000000LL * *(int*)(a2 + 8));
  EffectI3dl2Reverb_2b1100(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL),
                           *(float*)(a2 + 12));
  EffectI3dl2Reverb_2b1180(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL),
                           *(float*)(a2 + 16));
  nn_atk_EffectI3dl2Reverb_SetReflectionDelayTime(
      *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL), 1000000LL * *(int*)(a2 + 20));
  v21 = *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL);
  v22 = FxI3dl2ReverbNX_14fb90(*(float*)(a2 + 24), -0x1.3880000000000p+13f,
                               0x1.f400000000000p+10f, a3);
  EffectI3dl2Reverb_2b1270(v21, v22);
  nn_atk_EffectI3dl2Reverb_SetLateReverbDelayTime(
      *(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL), 1000000LL * *(int*)(a2 + 28));
  EffectI3dl2Reverb_2b1360(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL),
                           *(float*)(a2 + 32));
  EffectI3dl2Reverb_2b13e0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL),
                           *(float*)(a2 + 36));
  EffectI3dl2Reverb_2b1460(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL),
                           *(float*)(a2 + 40));
  return GameRoutine_2b14e0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL),
                            *(float*)(a2 + 44));
}

float FxI3dl2ReverbNX_14fb90(float a1, float a2, float a3, float a4)
{
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  bool v13;
  float v14;
  float v15;
  float result;
  float v17;

  v4 = (float)((float)((float)(a4 * 0x1.6800000000000p+6f) *
                       0x1.921fb60000000p+1f) /
               0x1.6800000000000p+7f) +
       (float)(roundf((float)((float)((float)(a4 * 0x1.6800000000000p+6f) *
                                      0x1.921fb60000000p+1f) /
                              0x1.6800000000000p+7f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (!(v4 > 0x1.921fb60000000p+0f)) {
    if (!(v4 < -0x1.921fb60000000p+0f)) {
      goto LABEL_6;
    }
    v5 = -0x1.921fb60000000p+1f;
  }
  else {
    v5 = 0x1.921fb60000000p+1f;
  }
  v4 = v5 - v4;
LABEL_6:
  v6 = *((float*)GameData_212c190 + 1);
  v7 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v9 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v8 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v10 =
      (float)((float)((float)(v4 *
                              (float)((float)((float)-(
                                                  float)(v7 -
                                                         (float)((float)(v8 +
                                                                         (float)((float)-(
                                                                                     float)(v9 -
                                                                                            (float)((float)(v6 -
                                                                                                            (float)(*(float*)
                                                                                                                        GameData_212c190 *
                                                                                                                    (float)(v4 *
                                                                                                                            v4))) *
                                                                                                    (float)(v4 *
                                                                                                            v4))) *
                                                                                 (float)(v4 *
                                                                                         v4))) *
                                                                 (float)(v4 *
                                                                         v4))) *
                                              (float)(v4 * v4)) +
                                      0x1.0000000000000p+0f)) *
                      0x1.6800000000000p+6f) *
              0x1.921fb60000000p+1f) /
      0x1.6800000000000p+7f;
  v11 = v10 +
        (float)(roundf(v10 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (!(v11 > 0x1.921fb60000000p+0f)) {
    if (!(v11 < -0x1.921fb60000000p+0f)) {
      goto LABEL_11;
    }
    v12 = -0x1.921fb60000000p+1f;
  }
  else {
    v12 = 0x1.921fb60000000p+1f;
  }
  v11 = v12 - v11;
LABEL_11:
  v13 = a3 == 0x0.0p+0f;
  v14 =
      v11 *
      (float)((float)((float)((float)((float)(v8 +
                                              (float)((float)((float)((float)(v6 +
                                                                              (float)((float)-*(
                                                                                          float*)
                                                                                          GameData_212c190 *
                                                                                      (float)(v11 *
                                                                                              v11))) *
                                                                      (float)(v11 *
                                                                              v11)) -
                                                              v9) *
                                                      (float)(v11 * v11))) *
                                      (float)(v11 * v11)) -
                              v7) *
                      (float)(v11 * v11)) +
              0x1.0000000000000p+0f);
  v15 = (float)(a2 - a3) *
        (float)(0x1.0000000000000p+0f -
                (float)(PSEUDO_UNFUSED(
                    (float)(0x1.0000000000000p+0f -
                            (float)((float)(a1 - a3) / (float)(a2 - a3))) *
                    v14)));
  result =
      a2 *
      (float)(0x1.0000000000000p+0f -
              (float)(PSEUDO_UNFUSED(
                  (float)(0x1.0000000000000p+0f - (float)(a1 / a2)) * v14)));
  v17 = a3 + v15;
  if (!v13) {
    return v17;
  }
  return result;
}

#pragma GCC visibility pop
