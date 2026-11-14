#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

unsigned __int64 nnmusl_thread_7bc7a0();

unsigned __int64 nnmusl_thread_7bc7a0()
{
  return __builtin_arm_rsr64("tpidrro_el0") + 464;
}

#pragma GCC visibility pop
