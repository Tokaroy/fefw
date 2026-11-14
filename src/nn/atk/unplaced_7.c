#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_289a90(__int64, unsigned int);
__int64 GameRoutine_289ad0(__int64 result, unsigned int);
void* SoundVoiceNX_14e360();
__int64 nn_atk_27e000();

__int64 nn_atk_27e000()
{
  void* v0;
  __int64 result;

  v0 = SoundVoiceNX_14e360();
  result = GameHr_289a90((__int64)v0, 0);
  if ((_DWORD)result != 0) {
    return GameRoutine_289ad0((__int64)v0, 0);
  }
  return result;
}

#pragma GCC visibility pop
