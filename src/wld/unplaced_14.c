#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 wld_a8b5a0(__int64 result);
void Object_a8ade0(__int64);
unsigned __int8 wld_a8b480(_BYTE* a1);

unsigned __int8 wld_a8b480(_BYTE* a1)
{
  int v1;
  _BYTE* v2;
  __int64 v4;
  _BYTE* v5;
  __int64* v6;
  __int64* v7;
  _BYTE* v8;

  if ((a1[290] & 1) != 0) {
    goto LABEL_12;
  }
  if ((a1[291] & 1) == 0) {
    if (a1[288] != 1) {
      return;
    }
    v8 = a1;
    do {
      v8 = *((_BYTE**)v8 + 92);
      if (v8 == nullptr) {
        break;
      }
    } while ((v8[288] & 1) != 0);
  }
  if (a1[300] != 2) {
    goto LABEL_12;
  }
  v1 = 0;
  if (a1[289] == 1 && (a1[288] & 1) != 0) {
    v2 = a1;
    do {
      v2 = *((_BYTE**)v2 + 92);
      v1 = v2 == nullptr;
    } while (v2 != nullptr && v2[289] == 1 && v2[288] == 1 &&
             (v2[300] & 0xFD) != 1);
  }
  if ((unsigned __int8)a1[292] != v1) {
  LABEL_12:
    wld_a8b5a0((__int64)a1);
    Object_a8ade0((__int64)a1);
    v4 = 584;
    if (a1[664] != 0) {
      v4 = 640;
    }
    v5 = &a1[v4];
    v6 = *(__int64**)v5;
    v7 = *((__int64**)v5 + 1);
    while (v6 != v7) {
      if (*(_BYTE*)(*v6 + 18) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v6 + 40LL))(*v6);
      }
      ++v6;
    }
  }
}

#pragma GCC visibility pop
