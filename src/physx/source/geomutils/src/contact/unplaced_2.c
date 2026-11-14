#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void physx_Gu_ConvexShape_support(PSEUDO_X8, float*,
                                                             float*);

__int64 physx_Gu_ConvexShape_contactFace(float*, float*, float*, float*,
                                         __int64);

__int64 physx_Gu_makeConvexShape(__int64, __int64, __int64);

bool physx_source_geomutils_src_contact_4685c0(__int64 a1, __int64 a2,
                                               float* a3, __int64 a4, float* a5,
                                               __int64 a6, __int64 a7);

#pragma GCC visibility pop
