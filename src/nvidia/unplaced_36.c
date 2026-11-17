#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nvidia_619950(PSEUDO_X8, __int64, _DWORD*,
                                              __int64);
__int64 SdkRoutine_602440(_QWORD);
bool nvidia_619fb0(__int64, __int64);
__int64 nvidia_61dc00(__int64 a1);

__int64 nvidia_61dc00(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  struct {
    char gap0_[64];
    _BYTE v23[8];
    unsigned int v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } f_;
  __int64 v30;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v1 + 40);
  if (v3 != 0) {
    v4 = SdkRoutine_602440(a1);
    nvidia_619950((void*)((__int64)f_.v23), v4,
                  *(_DWORD**)(*(_QWORD*)(a1 + 8) + 40LL), v4 + 64);
    if ((f_.v23[0] & 1) == 0) {
      return f_.v24;
    }
    if (!nvidia_619fb0((__int64)&f_.v24, v4)) {
      return 11;
    }
    v3 = v30;
    v5 = f_.v28;
    v6 = f_.v25;
    v7 = f_.v26;
    v8 = f_.v27;
    v9 = f_.v24;
    *(_QWORD*)(a1 + 108) = f_.v29;
    v1 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 116) = v3;
    LODWORD(v3) = 1;
    *(_QWORD*)(a1 + 92) = v8;
    *(_QWORD*)(a1 + 100) = v5;
    *(_QWORD*)(a1 + 76) = v6;
    *(_QWORD*)(a1 + 84) = v7;
    *(_DWORD*)(a1 + 72) = v9;
  }
  if (*(_BYTE*)(v1 + 3032) != 1) {
    goto LABEL_9;
  }
  v10 = SdkRoutine_602440(a1);
  nvidia_619950((void*)((__int64)f_.v23), v10,
                *(_DWORD**)(*(_QWORD*)(a1 + 8) + 3048LL), v10 + 64);
  if ((f_.v23[0] & 1) == 0) {
    return f_.v24;
  }
  if (!nvidia_619fb0((__int64)&f_.v24, v10)) {
    return 11;
  }
  v3 = v30;
  v11 = f_.v28;
  v12 = f_.v25;
  v13 = f_.v26;
  v14 = f_.v27;
  v15 = f_.v24;
  *(_QWORD*)(a1 + 164) = f_.v29;
  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 172) = v3;
  LODWORD(v3) = 1;
  *(_QWORD*)(a1 + 148) = v14;
  *(_QWORD*)(a1 + 156) = v11;
  *(_QWORD*)(a1 + 132) = v12;
  *(_QWORD*)(a1 + 140) = v13;
  *(_DWORD*)(a1 + 128) = v15;
LABEL_9:
  if (*(_QWORD*)(v1 + 3360) != 0) {
    v16 = SdkRoutine_602440(a1);
    nvidia_619950((void*)((__int64)f_.v23), v16,
                  *(_DWORD**)(*(_QWORD*)(a1 + 8) + 3360LL), v16 + 64);
    if ((f_.v23[0] & 1) != 0) {
      if (nvidia_619fb0((__int64)&f_.v24, v16)) {
        v17 = v30;
        v19 = f_.v28;
        v20 = f_.v25;
        v21 = f_.v26;
        v22 = f_.v24;
        *(_QWORD*)(a1 + 388) = f_.v29;
        *(_QWORD*)(a1 + 396) = v17;
        *(_QWORD*)(a1 + 356) = v20;
        *(_QWORD*)(a1 + 364) = v21;
        *(_DWORD*)(a1 + 352) = v22;
        *(_QWORD*)(a1 + 372) = f_.v27;
        *(_QWORD*)(a1 + 380) = v19;
        return 0;
      }
      return 11;
    }
    return f_.v24;
  }
  if ((_DWORD)v3 != 0) {
    return 0;
  }
  else {
    return 11;
  }
}

#pragma GCC visibility pop
