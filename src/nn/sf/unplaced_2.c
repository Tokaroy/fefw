#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_17f530(__int64 a1, __int64 a2, unsigned __int8** a3);

__int64 nn_sf_17f530(__int64 a1, __int64 a2, unsigned __int8** a3)
{
  __int64 v3;
  unsigned __int8* v4;
  int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (a1 != 0) {
    v3 = a1 + 8;
  }
  else {
    v3 = 0;
  }
  v4 = *a3;
  v5 = *v4;
  if (v5 == 2) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(
        v3, *((unsigned int*)v4 + 1));
    result = v10;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
      return 0;
    }
  }
  else {
    result = 108042;
    if (v5 == 1) {
      v7 = *(_QWORD*)v3;
      v8 = v3;
      v9 = *((unsigned int*)v4 + 1);
      v11 = 0;
      v12 = 0;
      (*(void (**)(__int64, __int64))(v7 + 32))(v8, v9);
      return 133642;
    }
  }
  return result;
}

#pragma GCC visibility pop
