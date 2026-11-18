#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_627be0(__int64*, unsigned __int64);
__int64 nvidia_628dc0(__int64* a1, unsigned __int64 a2);

__int64 nvidia_628dc0(__int64* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  unsigned __int64 v11;
  _QWORD* v12;

  result = nvidia_627be0(a1, a2);
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    v6 = v5 - a2;
    if (v5 <= a2) {
      if (v5 >= a2) {
        return result;
      }
      v7 = *a1;
      v8 = ((_BYTE)a2 - (_BYTE)v5) & 7;
      if ((((_BYTE)a2 - (_BYTE)v5) & 7) != 0) {
        v9 = v7 + 12 * v5;
        v5 += v8;
        v10 = (_DWORD*)(v9 + 8);
        do {
          *((_QWORD*)v10 - 1) = 0;
          *(_DWORD*)v10 = 0;
          v10 += 3;
          --v8;
        } while (v8 != 0);
      }
      if (v6 <= 0xFFFFFFFFFFFFFFF8LL) {
        v11 = a2 - v5;
        v12 = (_QWORD*)(v7 + 12 * v5 + 48);
        do {
          *(v12 - 6) = 0;
          *(v12 - 5) = 0;
          *(v12 - 4) = 0;
          *(v12 - 3) = 0;
          v11 -= 8LL;
          *(v12 - 2) = 0;
          *(v12 - 1) = 0;
          *v12 = 0;
          v12[1] = 0;
          v12[2] = 0;
          v12[3] = 0;
          v12[4] = 0;
          v12[5] = 0;
          v12 += 12;
        } while (v11 != 0);
      }
    }
    a1[1] = a2;
  }
  return result;
}

#pragma GCC visibility pop
