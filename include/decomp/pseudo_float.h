#pragma once

#include "decomp/pseudo_helpers.h"

// A product kept apart from the sum it feeds, so the two never fuse.
#define PSEUDO_UNFUSED(x) \
  ({ \
    __typeof__(x) unfused_ = (x); \
    unfused_; \
  })

// The same, held in a register clang cannot see through, since contraction
// fuses across the statement expression above.
#define PSEUDO_ROUNDED(x) \
  ({ \
    __typeof__(x) rounded_ = (x); \
    __asm__("" : "+w"(rounded_)); \
    rounded_; \
  })

// A scalar written to the low lane of a vector register clears the others.
#define PSEUDO_LOW_LANE128(v, member, x) \
  ({ \
    union PseudoLanes128 low_ = {0}; \
    low_.member[0] = (x); \
    (v) = COERCE_AS(__typeof__(v), low_); \
  })
#define PSEUDO_LOW_LANE64(v, member, x) \
  ({ \
    union PseudoLanes64 low_ = {0}; \
    low_.member[0] = (x); \
    (v) = COERCE_AS(__typeof__(v), low_); \
  })
