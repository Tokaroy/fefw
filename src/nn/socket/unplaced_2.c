#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_socket_182840(void* this_, int a2);

__int64 nn_socket_182840(void* this_, int a2)
{
  int v2;
  int v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned int v8;

  {
    v2 = (signed __int32)(*((_DWORD*)this_ + 28) + 1) % 28;
    __asm__ volatile("" ::"r"(v2));
  }
  v3 = 28;
  *((_DWORD*)this_ + 28) = v2;
  while (1) {
    v4 = v2;
    if (*((_DWORD*)this_ + v2) == 0) {
      break;
    }
    *((_DWORD*)this_ + 28) = (v2 + 1) % 28;
    v4 = (v2 + 1) % 28;
    if (*((_DWORD*)this_ + v4) == 0) {
      break;
    }
    v5 = v4 + 1;
    *((_DWORD*)this_ + 28) = v5 % 28;
    v4 = v5 % 28;
    if (*((_DWORD*)this_ + v4) == 0) {
      break;
    }
    v6 = v4 + 1;
    *((_DWORD*)this_ + 28) = v6 % 28;
    v4 = v6 % 28;
    if (*((_DWORD*)this_ + v4) == 0) {
      break;
    }
    v3 -= 4;
    v2 = ((int)v4 + 1) % 28;
    *((_DWORD*)this_ + 28) = v2;
    if (v3 == 0) {
      return 0xFFFFFFFFLL;
    }
  }
  *((_DWORD*)this_ + v4) = a2;
  {
    v8 = *((_DWORD*)this_ + 28);
    __asm__ volatile("" ::"r"(v8));
  }
  ++*((_DWORD*)this_ + 29);
  return v8;
}

#pragma GCC visibility pop
