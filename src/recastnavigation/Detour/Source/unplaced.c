#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float dtDistancePtSegSqr2D(float*, float*, float*, float*);
float recastnavigation_Detour_Source_2663e0();

float recastnavigation_Detour_Source_2663e0()
{
  _QWORD* v0;
  __int64 v1;
  float* v2;
  float* v3;
  char v4;
  __int64 v5;
  float* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned int v10;
  float v11;
  int v12;
  float v13;
  unsigned __int8* v14;
  unsigned __int8 v15;
  unsigned int v16;
  unsigned int v17;
  float* v18;
  unsigned int v19;
  unsigned int v20;
  float* v21;
  unsigned int v22;
  bool v23;
  unsigned int v24;
  float* v25;
  float v26;
  float v27;
  float v28;
  unsigned int v29;
  float v30;
  unsigned __int8* v31;
  unsigned int v32;
  unsigned int v33;
  float* v34;
  unsigned int v35;
  unsigned int v36;
  float* v37;
  unsigned int v38;
  unsigned int v39;
  float* v40;
  unsigned __int8 v41;
  float v42;
  float v43;
  float v44;
  float result;
  float* v46;
  float* v47;
  float* v48;
  float v49;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v5 = v1 + 4;
  v46 = v3;
  v6 = v2;
  v7 = v1;
  v8 = v0;
  v9 = v0[5] + 12LL * (unsigned int)((unsigned __int64)(v1 - v0[2]) >> 5);
  if ((v4 & 1) != 0) {
    v10 = *(unsigned __int8*)(v9 + 9);
    v11 = 0x0.0p+0f;
    v47 = nullptr;
    v48 = nullptr;
    v12 = 0;
    v13 = 0x1.fffffe0000000p+127f;
    while (1) {
      v14 = (unsigned __int8*)(v8[7] +
                               (unsigned int)(4 * (v12 + *(int*)(v9 + 4))));
      v15 = v14[3];
      if ((v15 & 0x15) != 0) {
        break;
      }
    LABEL_4:
      if (++v12 >= v10) {
        goto LABEL_50;
      }
    }
    v16 = *(unsigned __int8*)(v7 + 30);
    v17 = *v14;
    if (v17 >= v16) {
      v18 = (float*)(v8[6] + 12LL * (*(int*)v9 + v17 - v16));
      v19 = v14[1];
      v20 = v19 - v16;
      if (v19 >= v16) {
      LABEL_8:
        v21 = (float*)(v8[6] + 12LL * (*(int*)v9 + v20));
        v22 = v14[2];
        v23 = v22 >= v16;
        v24 = v22 - v16;
        if (!v23) {
        LABEL_14:
          v25 = (float*)(v8[3] + 12LL * *(unsigned __int16*)(v5 + 2LL * v22));
          if ((v14[3] & 0x10) != 0) {
            goto LABEL_15;
          }
          goto LABEL_18;
        }
      LABEL_10:
        v25 = (float*)(v8[6] + 12LL * (*(int*)v9 + v24));
        if ((v14[3] & 0x10) != 0) {
        LABEL_15:
          v26 = dtDistancePtSegSqr2D(v6, v25, v18, &v49),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
          if (v26 < v13) {
            v11 = v49;
            v13 = v26;
            v47 = v25;
            v48 = v18;
          }
          v15 = v14[3];
        }
      LABEL_18:
        if ((v15 & 1) != 0) {
          v27 = dtDistancePtSegSqr2D(v6, v18, v21, &v49),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
          if (v27 < v13) {
            v11 = v49;
            v13 = v27;
            v47 = v18;
            v48 = v21;
          }
          v15 = v14[3];
        }
        if ((v15 & 4) != 0) {
          v28 = dtDistancePtSegSqr2D(v6, v21, v25, &v49),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v1 = COERCE_AS(__typeof__(v1),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
          if (v28 < v13) {
            v11 = v49;
            v13 = v28;
            v47 = v21;
            v48 = v25;
          }
        }
        v10 = *(unsigned __int8*)(v9 + 9);
        goto LABEL_4;
      }
    }
    else {
      v18 = (float*)(v8[3] + 12LL * *(unsigned __int16*)(v5 + 2LL * *v14));
      v19 = v14[1];
      v20 = v19 - v16;
      if (v19 >= v16) {
        goto LABEL_8;
      }
    }
    v21 = (float*)(v8[3] + 12LL * *(unsigned __int16*)(v5 + 2LL * v19));
    v22 = v14[2];
    v23 = v22 >= v16;
    v24 = v22 - v16;
    if (!v23) {
      goto LABEL_14;
    }
    goto LABEL_10;
  }
  v11 = 0x0.0p+0f;
  v47 = nullptr;
  v48 = nullptr;
  v29 = 0;
  v30 = 0x1.fffffe0000000p+127f;
  do {
    v31 = (unsigned __int8*)(v8[7] + 4 * (v29 + *(int*)(v9 + 4)));
    v32 = *(unsigned __int8*)(v7 + 30);
    v33 = *v31;
    if (v33 >= v32) {
      v34 = (float*)(v8[6] + 12LL * (*(int*)v9 + v33 - v32));
      v35 = v31[1];
      v36 = v35 - v32;
      if (v35 < v32) {
      LABEL_29:
        v37 = (float*)(v8[3] + 12LL * *(unsigned __int16*)(v5 + 2LL * v35));
        v38 = v31[2];
        v23 = v38 >= v32;
        v39 = v38 - v32;
        if (!v23) {
          goto LABEL_30;
        }
        goto LABEL_35;
      }
    }
    else {
      v34 = (float*)(v8[3] + 12LL * *(unsigned __int16*)(v5 + 2LL * *v31));
      v35 = v31[1];
      v36 = v35 - v32;
      if (v35 < v32) {
        goto LABEL_29;
      }
    }
    v37 = (float*)(v8[6] + 12LL * (*(int*)v9 + v36));
    v38 = v31[2];
    v23 = v38 >= v32;
    v39 = v38 - v32;
    if (!v23) {
    LABEL_30:
      v40 = (float*)(v8[3] + 12LL * *(unsigned __int16*)(v5 + 2LL * v38));
      v41 = v31[3];
      if ((v41 & 0x10) != 0) {
        goto LABEL_39;
      }
      goto LABEL_36;
    }
  LABEL_35:
    v40 = (float*)(v8[6] + 12LL * (*(int*)v9 + v39));
    v41 = v31[3];
    if ((v41 & 0x10) == 0) {
    LABEL_36:
      if (v38 < v33) {
        if ((v41 & 1) == 0) {
          goto LABEL_42;
        }
        goto LABEL_43;
      }
    }
  LABEL_39:
    v42 = dtDistancePtSegSqr2D(v6, v40, v34, &v49),
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v1 = COERCE_AS(__typeof__(v1),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v2 = COERCE_AS(__typeof__(v2),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    if (v42 < v30) {
      v11 = v49;
      v30 = v42;
      v47 = v40;
      v48 = v34;
    }
    v41 = v31[3];
    if ((v41 & 1) == 0) {
    LABEL_42:
      if (*v31 < (unsigned int)v31[1]) {
        goto LABEL_46;
      }
    }
  LABEL_43:
    v43 = dtDistancePtSegSqr2D(v6, v34, v37, &v49),
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v1 = COERCE_AS(__typeof__(v1),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v2 = COERCE_AS(__typeof__(v2),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    if (v43 < v30) {
      v11 = v49;
      v30 = v43;
      v47 = v34;
      v48 = v37;
    }
    v41 = v31[3];
  LABEL_46:
    if ((v41 & 4) != 0 || v31[1] >= (unsigned int)v31[2]) {
      v44 = dtDistancePtSegSqr2D(v6, v37, v40, &v49),
      v0 = COERCE_AS(__typeof__(v0),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v1 = COERCE_AS(__typeof__(v1),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if (v44 < v30) {
        v11 = v49;
        v30 = v44;
        v47 = v37;
        v48 = v40;
      }
    }
    ++v29;
  } while (v29 < *(unsigned __int8*)(v9 + 9));
LABEL_50:
  *v46 = *v47 + (float)((float)(*v48 - *v47) * v11);
  v46[1] = v47[1] + (float)((float)(v48[1] - v47[1]) * v11);
  result = v47[2] + (float)((float)(v48[2] - v47[2]) * v11);
  v46[2] = result;
  return result;
}

#pragma GCC visibility pop
