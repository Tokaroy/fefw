#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD MovieData_a78f8[36];
__int64 opus_src_6caf0(int a1, int a2, int a3, int a4, int a5, int a6);

__int64 opus_src_6caf0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;

  v6 = a1 / a6;
  v7 = a3 + 2 * a5 + 1;
  if (a1 / a6 < 12000) {
    v8 = 1;
  LABEL_13:
    v9 =
        (int)((v6 - MovieData_a78f8[5 * v8 - 5]) *
                  MovieData_a78f8[5 * v8 + v7] +
              (MovieData_a78f8[5 * v8] - v6) *
                  MovieData_a78f8[5 * v8 - 5 + v7]) /
        (signed __int32)(MovieData_a78f8[5 * v8] - MovieData_a78f8[5 * v8 - 5]);
    goto LABEL_14;
  }
  if (v6 >> 7 < 0x7D) {
    v8 = 2;
    goto LABEL_13;
  }
  if (v6 >> 5 < 0x271) {
    v8 = 3;
    goto LABEL_13;
  }
  if (v6 >> 6 < 0x177) {
    v8 = 4;
    goto LABEL_13;
  }
  if (v6 >> 8 < 0x7D) {
    v8 = 5;
    goto LABEL_13;
  }
  if (v6 >> 9 < 0x7D) {
    v8 = 6;
    goto LABEL_13;
  }
  {
    v9 = MovieData_a78f8[v7 + 30] + ((v6 - 64000) >> 1);
    __asm__ volatile("" ::"r"(v9));
  }
LABEL_14:
  if (a4 == 0) {
    v9 += 100;
  }
  if (a2 == 1104) {
    v9 += 300;
  }
  v10 = v9 * a6;
  if ((int)v6 > 11999 & a6 == 2) {
    return v10 - 1000;
  }
  else {
    return v10;
  }
}

#pragma GCC visibility pop
