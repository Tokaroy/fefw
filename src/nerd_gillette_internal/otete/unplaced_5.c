#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool nerd_gillette_internal_otete_74bd60(void* this_, int* a2,
                                         unsigned __int64 a3);

bool nerd_gillette_internal_otete_74bd60(void* this_, int* a2,
                                         unsigned __int64 a3)
{
  int v3;
  int v4;
  bool v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  char v10;
  _BOOL4 v11;
  __int64 v12;
  unsigned int v14;
  int v15;
  int v16;
  char v17;
  char v18;
  int v19;
  int v20;
  char v21;
  char v22;
  int v23;
  int v24;
  char v25;
  char v26;
  int v27;
  int v28;
  char v29;
  char v30;
  int v31;
  int v32;
  char v33;
  char v34;
  int v35;
  int v36;
  char v37;
  char v38;
  int v39;

  v3 = *(_DWORD*)this_;
  if ((unsigned int)a2 >= 0xFF) {
    v4 = 255;
  }
  else {
    v4 = (int)a2;
  }
  if ((int)a2 < 0) {
    v4 = 0;
  }
  v5 = v4 == 255;
  v6 = v4 != 255 & v4 == 0;
  v7 = (v3 - v4) * (v3 - v4);
  if ((unsigned int)v7 >= 0xFE01) {
    LOBYTE(v4) = 0;
  }
  if (v7 >= 65025) {
    v7 = 65025;
  }
  if (a3 < 2) {
    v11 = false;
    goto LABEL_25;
  }
  if ((unsigned int)((int)a2 + 16) >= 0xFF) {
    v8 = 255;
  }
  else {
    v8 = (int)a2 + 16;
  }
  if ((int)a2 >= -16) {
    v9 = v8;
  }
  else {
    v9 = 0;
  }
  if (v9 != 0) {
    if (v9 == 255) {
      v10 = 1;
      if (v5) {
        v11 = false;
        v12 = 1;
        goto LABEL_36;
      }
      goto LABEL_30;
    }
  }
  else {
    v12 = 1;
    if (v6) {
      v11 = false;
      v6 = true;
      v10 = v5;
      goto LABEL_36;
    }
    v6 = true;
  }
  v10 = v5;
LABEL_30:
  v14 = (v3 - v9) * (v3 - v9);
  v11 = v14 < v7;
  if (v14 < v7) {
    LOBYTE(v4) = v9;
  }
  if ((int)v14 < v7) {
    v7 = (v3 - v9) * (v3 - v9);
  }
  if (a3 == 2) {
    goto LABEL_25;
  }
  v12 = 2;
LABEL_36:
  v15 = (int)a2 - 16;
  if ((unsigned int)((int)a2 - 16) >= 0xFF) {
    v15 = 255;
  }
  if ((int)a2 >= 16) {
    v16 = v15;
  }
  else {
    v16 = 0;
  }
  if (v16 != 0) {
    if (v16 == 255) {
      v17 = 1;
      v18 = v6;
      if ((v10 & 1) != 0) {
        v18 = v6;
        goto LABEL_51;
      }
    }
    else {
      v18 = v6;
      v17 = v10;
    }
  }
  else {
    v18 = 1;
    v17 = v10;
    if (v6) {
      v17 = v10;
      goto LABEL_51;
    }
  }
  if ((v3 - v16) * (v3 - v16) < v7) {
    LOBYTE(v4) = v16;
    v11 = v12;
    v7 = (v3 - v16) * (v3 - v16);
  }
  if (++v12 >= a3) {
    goto LABEL_25;
  }
LABEL_51:
  v19 = (int)a2 + 64;
  if ((unsigned int)((int)a2 + 64) >= 0xFF) {
    v19 = 255;
  }
  if ((int)a2 >= -64) {
    v20 = v19;
  }
  else {
    v20 = 0;
  }
  if (v20 != 0) {
    if (v20 == 255) {
      v21 = 1;
      v22 = v18;
      if ((v17 & 1) != 0) {
        v22 = v18;
        goto LABEL_66;
      }
    }
    else {
      v22 = v18;
      v21 = v17;
    }
  }
  else {
    v22 = 1;
    v21 = v17;
    if ((v18 & 1) != 0) {
      v21 = v17;
      goto LABEL_66;
    }
  }
  if ((v3 - v20) * (v3 - v20) < v7) {
    LOBYTE(v4) = v20;
    v11 = v12;
    v7 = (v3 - v20) * (v3 - v20);
  }
  if (++v12 >= a3) {
    goto LABEL_25;
  }
LABEL_66:
  v23 = (int)a2 - 64;
  if ((unsigned int)((int)a2 - 64) >= 0xFF) {
    v23 = 255;
  }
  if ((int)a2 >= 64) {
    v24 = v23;
  }
  else {
    v24 = 0;
  }
  if (v24 != 0) {
    if (v24 == 255) {
      v25 = 1;
      v26 = v22;
      if ((v21 & 1) != 0) {
        v26 = v22;
        goto LABEL_81;
      }
    }
    else {
      v26 = v22;
      v25 = v21;
    }
  }
  else {
    v26 = 1;
    v25 = v21;
    if ((v22 & 1) != 0) {
      v25 = v21;
      goto LABEL_81;
    }
  }
  if ((v3 - v24) * (v3 - v24) < v7) {
    LOBYTE(v4) = v24;
    v11 = v12;
    v7 = (v3 - v24) * (v3 - v24);
  }
  if (++v12 >= a3) {
    goto LABEL_25;
  }
LABEL_81:
  v27 = (int)a2 + 8;
  if ((unsigned int)((int)a2 + 8) >= 0xFF) {
    v27 = 255;
  }
  if ((int)a2 >= -8) {
    v28 = v27;
  }
  else {
    v28 = 0;
  }
  if (v28 != 0) {
    if (v28 == 255) {
      v29 = 1;
      v30 = v26;
      if ((v25 & 1) != 0) {
        v30 = v26;
        goto LABEL_96;
      }
    }
    else {
      v30 = v26;
      v29 = v25;
    }
  }
  else {
    v30 = 1;
    v29 = v25;
    if ((v26 & 1) != 0) {
      v29 = v25;
      goto LABEL_96;
    }
  }
  if ((v3 - v28) * (v3 - v28) < v7) {
    LOBYTE(v4) = v28;
    v11 = v12;
    v7 = (v3 - v28) * (v3 - v28);
  }
  if (++v12 >= a3) {
    goto LABEL_25;
  }
LABEL_96:
  v31 = (int)a2 - 8;
  if ((unsigned int)((int)a2 - 8) >= 0xFF) {
    v31 = 255;
  }
  if ((int)a2 >= 8) {
    v32 = v31;
  }
  else {
    v32 = 0;
  }
  if (v32 != 0) {
    if (v32 == 255) {
      v33 = 1;
      v34 = v30;
      if ((v29 & 1) != 0) {
        v34 = v30;
        goto LABEL_111;
      }
    }
    else {
      v34 = v30;
      v33 = v29;
    }
  }
  else {
    v34 = 1;
    v33 = v29;
    if ((v30 & 1) != 0) {
      v33 = v29;
      goto LABEL_111;
    }
  }
  if ((v3 - v32) * (v3 - v32) < v7) {
    LOBYTE(v4) = v32;
    v11 = v12;
    v7 = (v3 - v32) * (v3 - v32);
  }
  if (++v12 >= a3) {
    goto LABEL_25;
  }
LABEL_111:
  v35 = (int)a2 + 128;
  if ((unsigned int)((int)a2 + 128) >= 0xFF) {
    v35 = 255;
  }
  if ((int)a2 >= -128) {
    v36 = v35;
  }
  else {
    v36 = 0;
  }
  if (v36 != 0) {
    if (v36 == 255) {
      v37 = 1;
      v38 = v34;
      if ((v33 & 1) != 0) {
        v38 = v34;
        goto LABEL_126;
      }
    }
    else {
      v38 = v34;
      v37 = v33;
    }
  }
  else {
    v38 = 1;
    v37 = v33;
    if ((v34 & 1) != 0) {
      v37 = v33;
      goto LABEL_126;
    }
  }
  if ((v3 - v36) * (v3 - v36) < v7) {
    LOBYTE(v4) = v36;
    v11 = v12;
    v7 = (v3 - v36) * (v3 - v36);
  }
  if (++v12 >= a3) {
    goto LABEL_25;
  }
LABEL_126:
  v39 = (int)a2 - 128;
  if ((unsigned int)((int)a2 - 128) >= 0xFF) {
    v39 = 255;
  }
  if ((int)a2 < 128) {
    v39 = 0;
  }
  if (v39 == 0) {
    if ((v38 & 1) == 0) {
      goto LABEL_135;
    }
  LABEL_25:
    *(_DWORD*)this_ = (unsigned __int8)v4;
    return v11;
  }
  if (v39 == 255 && (v37 & 1) != 0) {
    goto LABEL_25;
  }
LABEL_135:
  if ((v3 - v39) * (v3 - v39) < v7) {
    LOBYTE(v4) = v39;
    v11 = v12;
  }
  *(_DWORD*)this_ = (unsigned __int8)v4;
  return v11;
}

#pragma GCC visibility pop
