#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float llvm_libcxx_21_libcxx_include___functional_106a7f0();

float llvm_libcxx_21_libcxx_include___functional_106a7f0()
{
  float v0;
  float v1;
  float v2;

  v0 = COERCE_AS(__typeof__(v0), PSEUDO_REGISTER(float, "s0", "=w")),
  v1 = COERCE_AS(__typeof__(v1), PSEUDO_REGISTER(float, "s1", "=w")),
  v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v0 <= v1) {
    return v0 * (float)(v0 * (float)((float)(v2 / v1) * 0x1.0000000000000p-1f));
  }
  else {
    return llvm_libcxx_21_libcxx_include___functional_106a7f0() +
           (float)(v2 * (float)(v0 - v1));
  }
}

#pragma GCC visibility pop
