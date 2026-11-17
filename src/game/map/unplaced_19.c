#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float game_map_f0ea60();

float game_map_f0ea60()
{

#pragma clang fp contract(off)
  float result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  return result;
}

#pragma GCC visibility pop
