#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2afd90(unsigned int);
void nn_detail_UnexpectedDefaultImpl();
__int64 memory_179cc0(__int64 a1);

__int64 memory_179cc0(__int64 a1)
{
  int v2;
  int v3;

  v2 = GameRoutine_2afd90(*(_DWORD*)(a1 + 96));
  v3 = *(_DWORD*)(a1 + 28);
  if (v3 == 0) {
    return 4LL * (int)(32000 * v2);
  }
  if (v3 != 1) {
    nn_detail_UnexpectedDefaultImpl();
  }
  return 4LL * (int)(48000 * v2);
}

#pragma GCC visibility pop
