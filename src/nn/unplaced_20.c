#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nn_66f330(PSEUDO_X8, __int64);
__int64 nvidia_64b750(__int64 result, __int64, __int64);
void nn_689f90(__int64 a1);

void nn_689f90(__int64 a1)
{
  int v2;
  int* v3;
  int v4;
  int v5;
  _DWORD* v6;
  int v7;
  _DWORD* v8;
  int v9;
  _DWORD* v10;
  int v11;
  unsigned __int64 v12;
  _DWORD* v13;
  int v14;
  _DWORD* v15;
  int v16;
  unsigned __int64 v17;
  _DWORD* v18;
  struct __attribute__((packed)) {
    __int128 v19;
    int v20;
  } g_;

  nn_66f330((void*)((int32x2_t*)&g_.v19), a1 + 40);
  *(_OWORD*)(a1 + 324) = g_.v19;
  *(_DWORD*)(a1 + 340) = g_.v20;
  v2 = *(_DWORD*)(a1 + 356);
  if ((v2 & 0x14) != 0) {
    if ((v2 & 4) != 0) {
      v3 = *(int**)(a1 + 11240);
      v4 = *(_DWORD*)(a1 + 328);
      if ((unsigned __int64)(v3 + 2) > *(_QWORD*)(a1 + 11248)) {
        nvidia_64b750(a1 + 11240, (__int64)v3,
                      4LL * (unsigned int)(*(int*)(a1 + 11344) + 2));
        v3 = *(int**)(a1 + 11240);
      }
      v5 = 536944640;
    }
    else {
      if ((v2 & 0x10) == 0) {
        return;
      }
      v3 = *(int**)(a1 + 11240);
      v4 = *(_DWORD*)(a1 + 332);
      if ((unsigned __int64)(v3 + 2) > *(_QWORD*)(a1 + 11248)) {
        nvidia_64b750(a1 + 11240, (__int64)v3,
                      4LL * (unsigned int)(*(int*)(a1 + 11344) + 2));
        v3 = *(int**)(a1 + 11240);
      }
      v5 = 536969216;
    }
    *v3 = v5;
    v3[1] = v4;
    v18 = v3 + 2;
  }
  else {
    v6 = *(_DWORD**)(a1 + 11240);
    v7 = *(_DWORD*)(a1 + 324);
    if ((unsigned __int64)(v6 + 2) > *(_QWORD*)(a1 + 11248)) {
      nvidia_64b750(a1 + 11240, *(_QWORD*)(a1 + 11240),
                    4LL * (unsigned int)(*(int*)(a1 + 11344) + 2));
      v6 = *(_DWORD**)(a1 + 11240);
    }
    v8 = v6 + 2;
    *(_DWORD*)v6 = 536936448;
    v6[1] = v7;
    *(_QWORD*)(a1 + 11240) = v6 + 2;
    v9 = *(_DWORD*)(a1 + 336);
    if ((unsigned __int64)(v6 + 4) > *(_QWORD*)(a1 + 11248)) {
      nvidia_64b750(a1 + 11240, (__int64)v8,
                    4LL * (unsigned int)(*(int*)(a1 + 11344) + 2));
      v8 = *(_DWORD**)(a1 + 11240);
    }
    *(_DWORD*)v8 = 536952832;
    v8[1] = v9;
    v10 = v8 + 2;
    v11 = *(_DWORD*)(a1 + 340);
    v12 = *(_QWORD*)(a1 + 11248);
    *(_QWORD*)(a1 + 11240) = v8 + 2;
    if ((unsigned __int64)(v8 + 4) > v12) {
      nvidia_64b750(a1 + 11240, (__int64)(v8 + 2),
                    4LL * (unsigned int)(*(int*)(a1 + 11344) + 2));
      v10 = *(_DWORD**)(a1 + 11240);
    }
    v13 = v10 + 2;
    *(_DWORD*)v10 = 536961024;
    v10[1] = v11;
    *(_QWORD*)(a1 + 11240) = v10 + 2;
    v14 = *(_DWORD*)(a1 + 328);
    if ((unsigned __int64)(v10 + 4) > *(_QWORD*)(a1 + 11248)) {
      nvidia_64b750(a1 + 11240, (__int64)v13,
                    4LL * (unsigned int)(*(int*)(a1 + 11344) + 2));
      v13 = *(_DWORD**)(a1 + 11240);
    }
    *(_DWORD*)v13 = 536944640;
    v13[1] = v14;
    v15 = v13 + 2;
    v16 = *(_DWORD*)(a1 + 332);
    v17 = *(_QWORD*)(a1 + 11248);
    *(_QWORD*)(a1 + 11240) = v13 + 2;
    if ((unsigned __int64)(v13 + 4) > v17) {
      nvidia_64b750(a1 + 11240, (__int64)(v13 + 2),
                    4LL * (unsigned int)(*(int*)(a1 + 11344) + 2));
      v15 = *(_DWORD**)(a1 + 11240);
    }
    *(_DWORD*)v15 = 536969216;
    v15[1] = v16;
    v18 = v15 + 2;
  }
  *(_QWORD*)(a1 + 11240) = v18;
}

#pragma GCC visibility pop
