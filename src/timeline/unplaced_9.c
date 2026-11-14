#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern unsigned int GameData_1b37d88[29];
unsigned __int128 timeline_ce90(unsigned int** a1);

unsigned __int128 timeline_ce90(unsigned int** a1)
{
  unsigned int* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  int v6;
  __int64 v7;
  unsigned __int128 result;

  v1 = *a1;
  v2 = (unsigned __int64)a1[1];
  v3 = **a1;
  if (v2 >= v3) {
    v6 = v2 - v3;
    v7 = __clz((unsigned int)(v6 + 16));
    *(_QWORD*)&result = 28 - v7;
    *((_QWORD*)&result + 1) =
        *(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v7) + 8) +
        16LL * (v6 - GameData_1b37d88[28 - v7]);
  }
  else {
    *(_QWORD*)&result = 0;
    *((_QWORD*)&result + 1) = *((_QWORD*)v1 + 1) + 16 * v2;
  }
  return result;
}

#pragma GCC visibility pop
