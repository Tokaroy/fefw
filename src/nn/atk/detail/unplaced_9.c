#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_29bac0(__int64);
_QWORD* GameRoutine_2a86a0(_QWORD* result, __int64, __int64, __int64);
_QWORD* GameRoutine_2b9620(_QWORD* result, __int64, __int64, __int64, int, int);
__int64 GameRoutine_283c20(_QWORD);
__int64 GameRoutine_283cc0(__int64);
__int64 GameRoutine_2a1ed0(__int64);
__int64 GameRoutine_2a4b00(char**, char*, char*, __int64);
__int64 nn_codec_GetOpusDecoderWorkBufferSize(_QWORD, _QWORD);
bool GameRoutine_283cd0(__int64);
extern _QWORD GameData_21a3560[6];
extern _UNKNOWN GameData_21a3518;
extern _UNKNOWN GameData_21a3548;
extern __int64 GameData_2135528[4];
extern __int64 GameData_21a3590;
extern char GameData_21a3598;
typedef __int64 GameAlign_21a359c __attribute__((aligned(4)));
extern GameAlign_21a359c GameData_21a359c;
void* BaseNx_2a1b90();
__int64 nn_atk_detail_2a19c0();
__int64 nn_atk_detail_2a69c0(__int64 a1);
__int64 nn_atk_detail_2a9b20(_QWORD* a1, __int64 a2, __int64 a3);
char* nn_atk_detail_2b9870(char* result, __int64 a2, int a3);

__int64 nn_atk_detail_2a19c0()
{
  void* v0;

  v0 = BaseNx_2a1b90();
  return GameRoutine_2a1ed0((__int64)v0);
}

__int64 nn_atk_detail_2a69c0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 304);
  if (result != 0) {
    return GameRoutine_283cc0(result);
  }
  return result;
}

__int64 nn_atk_detail_2a9b20(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;

  result = a1[44];
  if (result != 0) {
    result = ((__int64 (*)(__int64))GameRoutine_283cd0)(result);
    if (a2 != 0 && (result & 1) != 0) {
      v7 = GameRoutine_283c20(a1[44]);
      if (a3 != 0) {
        v8 = a3;
      }
      else {
        v8 = a2;
      }
      return (__int64)GameRoutine_2a86a0(a1, a2, v8, v7);
    }
  }
  return result;
}

char* nn_atk_detail_2b9870(char* result, __int64 a2, int a3)
{
  char* v3;
  __int64 OpusDecoderWorkBufferSizeEii;
  __int64 v6;

  if ((GameData_21a3598 & 1) == 0) {
    v3 = result;
    OpusDecoderWorkBufferSizeEii =
        nn_codec_GetOpusDecoderWorkBufferSize(48000, 2);
    if ((GameData_21a3598 & 1) == 0) {
      v6 = *(_QWORD*)GameData_2135528[0] + OpusDecoderWorkBufferSizeEii + 4096;
      GameRoutine_2a4b00((char**)&GameData_21a3548, v3, (char*)(152LL * a3),
                         152);
      GameData_21a3590 = v6;
      GameRoutine_2b9620(GameData_21a3560, (__int64)&v3[152 * a3], v6 * a3, v6,
                         a3, 4);
      GameData_21a359c = 0x100000001LL;
      GameData_21a3598 = 1;
    }
    return (char*)GameRoutine_29bac0((__int64)&GameData_21a3518);
  }
  return result;
}

#pragma GCC visibility pop
