#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_hub_Character_RebuildAppearance(__int64);
extern __int64 GameData_21ec7c0;
__int64 game_proc_e1dce0();

__int64 game_proc_e1dce0()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(__int64**)(GameData_21ec7c0 + 24);
  for (i = *(__int64**)(GameData_21ec7c0 + 32); v0 != i;
       result = game_hub_Character_RebuildAppearance(v2)) {
    v2 = *v0;
    v0 += 2;
  }
  return result;
}

#pragma GCC visibility pop
