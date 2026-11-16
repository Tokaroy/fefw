#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1639680(_QWORD*, _QWORD*, _QWORD*, _QWORD*,
                            __int64 (**)(_QWORD));
bool game_templates_16397e0(__int64* a1, __int64* a2,
                            __int64 (**a3)(__int64, __int64));

bool game_templates_16397e0(__int64* a1, __int64* a2,
                            __int64 (**a3)(__int64, __int64))
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char v16;
  char v17;
  __int64 v18;
  char v19;
  __int64* v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  int v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  char* v39;

  v6 = a2 - a1;
  if (v6 > 2) {
    switch (v6) {
    case 3LL:
      v16 = (*a3)(a1[1], *a1);
      v17 = (*a3)(*(a2 - 1), a1[1]);
      if ((v16 & 1) != 0) {
        v18 = *a1;
        if ((v17 & 1) != 0) {
          *a1 = *(a2 - 1);
          *(a2 - 1) = v18;
        }
        else {
          *a1 = a1[1];
          a1[1] = v18;
          if ((((__int64 (*)(__int64))*a3)(*(a2 - 1)) & 1) != 0) {
            v30 = a1[1];
            a1[1] = *(a2 - 1);
            *(a2 - 1) = v30;
          }
        }
        return true;
      }
      if ((v17 & 1) == 0) {
        return true;
      }
      v24 = a1[1];
      a1[1] = *(a2 - 1);
      *(a2 - 1) = v24;
      v15 = (*a3)(a1[1], *a1);
      break;
    case 4LL:
      GameRoutine_1639680(a1, a1 + 1, a1 + 2, a2 - 1, (__int64 (**)(_QWORD))a3);
      return true;
    case 5LL:
      GameRoutine_1639680(a1, a1 + 1, a1 + 2, a1 + 3, (__int64 (**)(_QWORD))a3);
      if (((*a3)(*(a2 - 1), a1[3]) & 1) == 0) {
        return true;
      }
      v8 = a1[3];
      a1[3] = *(a2 - 1);
      *(a2 - 1) = v8;
      if (((*a3)(a1[3], a1[2]) & 1) == 0) {
        return true;
      }
      v10 = a1[2];
      v9 = a1[3];
      v11 = a1[1];
      a1[2] = v9;
      a1[3] = v10;
      if (((*a3)(v9, v11) & 1) == 0) {
        return true;
      }
      v13 = a1[1];
      v12 = a1[2];
      v14 = *a1;
      a1[1] = v12;
      a1[2] = v13;
      v15 = (*a3)(v12, v14);
      break;
    default:
      goto LABEL_16;
    }
    if ((v15 & 1) != 0) {
      v25 = *a1;
      *a1 = a1[1];
      a1[1] = v25;
    }
    return true;
  }
  if ((unsigned __int64)v6 < 2) {
    return true;
  }
  if (v6 == 2) {
    if (((*a3)(*(a2 - 1), *a1) & 1) != 0) {
      v7 = *a1;
      *a1 = *(a2 - 1);
      *(a2 - 1) = v7;
    }
    return true;
  }
LABEL_16:
  v19 = (*a3)(a1[1], *a1);
  v20 = a1 + 2;
  v21 = (*a3)(a1[2], a1[1]);
  if ((v19 & 1) != 0) {
    v22 = *a1;
    if ((v21 & 1) != 0) {
      v23 = a1[2];
      a1[2] = v22;
      *a1 = v23;
    }
    else {
      v31 = a1[2];
      *a1 = a1[1];
      a1[1] = v22;
      if ((((__int64 (*)(__int64))*a3)(v31) & 1) != 0) {
        v32 = a1[1];
        a1[1] = a1[2];
        a1[2] = v32;
      }
    }
  }
  else if ((v21 & 1) != 0) {
    v27 = a1[1];
    v26 = a1[2];
    v28 = *a1;
    a1[1] = v26;
    a1[2] = v27;
    if (((*a3)(v26, v28) & 1) != 0) {
      v29 = *a1;
      *a1 = a1[1];
      a1[1] = v29;
    }
  }
  v33 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v34 = 0;
  v35 = 0;
  while (1) {
    if (((*a3)(*v33, *v20) & 1) != 0) {
      v37 = *v33;
      v38 = v34;
      do {
        v39 = (char*)a1 + v38;
        *(__int64*)((char*)a1 + v38 + 24) = *(__int64*)((char*)a1 + v38 + 16);
        if (v38 == -16) {
          v36 = a1;
          goto LABEL_34;
        }
        v38 -= 8;
      } while (((*a3)(v37, *((_QWORD*)v39 + 1)) & 1) != 0);
      v36 = (__int64*)((char*)a1 + v38 + 24);
    LABEL_34:
      ++v35;
      *v36 = v37;
      if (v35 == 8) {
        return v33 + 1 == a2;
      }
    }
    v20 = v33++;
    v34 += 8;
    if (v33 == a2) {
      return true;
    }
  }
}

#pragma GCC visibility pop
