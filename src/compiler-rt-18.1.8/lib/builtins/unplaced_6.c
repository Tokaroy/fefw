#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

double compiler_rt_18_1_8_lib_builtins_855840(double a1, double a2,
                                              long double a3, long double a4,
                                              long double a5, int8x16_t a6);

double compiler_rt_18_1_8_lib_builtins_855840(double a1, double a2,
                                              long double a3, long double a4,
                                              long double a5, int8x16_t a6)
{
  double v6;
  double v7;
  int v8;
  double v9;
  double v10;
  int v11;
  int v12;
  double v13;
  double v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  int v18;
  char v19;
  int v20;
  __int64 v21;
  unsigned __int64 v22;
  bool v23;
  float64x2_t v24;
  double v25;
  int v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  int v30;
  char v31;
  int v32;
  __int64 v33;
  unsigned __int64 v34;
  float64x2_t v35;
  double v36;
  unsigned __int64 v37;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  bool v42;
  int v43;
  char v44;
  int v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  float64x2_t v49;
  double v50;
  unsigned __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;

  v6 = fmax(fabs(*(double*)&a3), fabs(*(double*)&a4));
  v7 = -__builtin_inff();
  {
    v8 = __clz((unsigned long long)(*(unsigned __int64*)&v6));
    __asm__ volatile("" ::"r"(v8));
  }
  {
    v9 = (double)(int)(((*(_QWORD*)&v6 << ((unsigned __int8)v8 - 11) >> 52) &
                        0x7FF) -
                       v8 - 1012);
    __asm__ volatile("" ::"w"(v9));
  }
  if (*(_QWORD*)&v6 >> 52 != 0) {
    v9 = (double)(int)((*(_QWORD*)&v6 >> 52) - 1023);
    __asm__ volatile("" ::"w"(v9));
  }
  if (v6 != 0x0.0p+0) {
    v7 = v9;
  }
  if (*(_QWORD*)&v6 >> 52 == 2047) {
    v10 = v6;
  }
  else {
    v10 = v7;
  }
  if (fabs(v10) > 0x1.fffffffffffffp+1023) {
    v11 = 0;
    goto LABEL_10;
  }
  v11 = (int)v10;
  v26 = -(int)v10;
  if (*(double*)&a3 == 0x0.0p+0 ||
      (_DWORD)(v27 = (*(_QWORD*)&a3 >> 52) & 0x7FFLL) == 2047) {
  LABEL_40:
    if (*(double*)&a4 == 0x0.0p+0) {
      goto LABEL_10;
    }
    goto LABEL_41;
  }
  {
    v28 = *(_QWORD*)&a3 & 0xFFFFFFFFFFFFFLL;
    __asm__ volatile("" ::"r"(v28));
  }
  v29 = (_DWORD)v27 == 0;
  {
    v30 = __clz((unsigned long long)(*(_QWORD*)&a3 & 0xFFFFFFFFFFFFFLL));
    __asm__ volatile("" ::"r"(v30));
  }
  v31 = v30 - 11;
  v32 = 12 - v30;
  {
    v33 = (*(_QWORD*)&a3 & 0xFFFFFFFFFFFFFLL) << v31;
    __asm__ volatile("" ::"r"(v33));
  }
  if ((_DWORD)v27 == 0) {
    LODWORD(v27) = v32;
  }
  v34 = v33 & 0xFFEFFFFFFFFFFFFFLL;
  if (v29) {
    v28 = v34;
  }
  v23 = __OFADD__((_DWORD)v27, v26);
  LODWORD(v27) = v27 - (int)v10;
  if (v23) {
    v27 = ((int)v27 >> 31) ^ 0x80000000;
  }
  else {
    v27 = (unsigned int)v27;
  }
  if ((int)v27 < 2047) {
    {
      v39 = *(_QWORD*)&a3 & 0x8000000000000000LL;
      __asm__ volatile("" ::"r"(v39));
    }
    if ((int)v27 <= 0) {
      v54 = v28 | v39 | 0x10000000000000LL;
      if ((int)v27 <= -1021) {
        v55 = -1021;
      }
      else {
        v55 = v27;
      }
      *(double*)&a3 =
          *(double*)&v54 *
          COERCE_DOUBLE((unsigned __int64)(unsigned int)(v55 + 1022) << 52);
      if (*(double*)&a4 == 0x0.0p+0) {
        goto LABEL_10;
      }
      goto LABEL_41;
    }
    *(_QWORD*)&a3 = v39 | (v27 << 52) | v28;
    goto LABEL_40;
  }
  LANES128(v35).n128_u64[0] = -1;
  LANES128(v35).n128_u64[1] = -1;
  *(_QWORD*)&a5 = 0x7FE0000000000000LL;
  a6 = vnegq_f64(v35);
  v36 =
      LANES128_OF(vbslq_s8(a6, *(int8x16_t*)&a5, *(int8x16_t*)&a3)).n128_f64[0];
  *(double*)&a3 = v36 + v36;
  if (*(double*)&a4 == 0x0.0p+0) {
    goto LABEL_10;
  }
LABEL_41:
  {
    v40 = (*(_QWORD*)&a4 >> 52) & 0x7FFLL;
    __asm__ volatile("" ::"r"(v40));
  }
  if ((_DWORD)v40 != 2047) {
    {
      v41 = *(_QWORD*)&a4 & 0xFFFFFFFFFFFFFLL;
      __asm__ volatile("" ::"r"(v41));
    }
    v42 = (_DWORD)v40 == 0;
    {
      v43 = __clz((unsigned long long)(*(_QWORD*)&a4 & 0xFFFFFFFFFFFFFLL));
      __asm__ volatile("" ::"r"(v43));
    }
    v44 = v43 - 11;
    v45 = 12 - v43;
    {
      v46 = (*(_QWORD*)&a4 & 0xFFFFFFFFFFFFFLL) << v44;
      __asm__ volatile("" ::"r"(v46));
    }
    if ((_DWORD)v40 == 0) {
      LODWORD(v40) = v45;
    }
    v47 = v46 & 0xFFEFFFFFFFFFFFFFLL;
    if (v42) {
      v41 = v47;
    }
    v23 = __OFADD__((_DWORD)v40, v26);
    LODWORD(v48) = v40 - (int)v10;
    if (v23) {
      v48 = ((int)v48 >> 31) ^ 0x80000000;
    }
    else {
      v48 = (unsigned int)v48;
    }
    if ((int)v48 < 2047) {
      {
        v51 = *(_QWORD*)&a4 & 0x8000000000000000LL;
        __asm__ volatile("" ::"r"(v51));
      }
      if ((int)v48 <= 0) {
        if ((int)v48 <= -1021) {
          LODWORD(v48) = -1021;
        }
        *(double*)&a4 =
            COERCE_DOUBLE(v41 | v51 | 0x10000000000000LL) *
            COERCE_DOUBLE((unsigned __int64)(unsigned int)(v48 + 1022) << 52);
      }
      else {
        *(_QWORD*)&a4 = v51 | (v48 << 52) | v41;
      }
    }
    else {
      LANES128(v49).n128_u64[0] = -1;
      LANES128(v49).n128_u64[1] = -1;
      *(_QWORD*)&a5 = 0x7FE0000000000000LL;
      a6 = vnegq_f64(v49);
      v50 = LANES128_OF(vbslq_s8(a6, *(int8x16_t*)&a5, *(int8x16_t*)&a4))
                .n128_f64[0];
      *(double*)&a4 = v50 + v50;
    }
  }
LABEL_10:
  v12 = -v11;
  v13 = PSEUDO_UNFUSED(*(double*)&a4 * *(double*)&a4) +
        *(double*)&a3 * *(double*)&a3;
  *(double*)&a5 =
      (PSEUDO_UNFUSED(a2 * *(double*)&a4) + a1 * *(double*)&a3) / v13;
  if (*(double*)&a5 != 0x0.0p+0) {
    v14 = (PSEUDO_UNFUSED(a2 * *(double*)&a4) + a1 * *(double*)&a3) / v13;
    {
      v15 = (*(_QWORD*)&a5 >> 52) & 0x7FFLL;
      __asm__ volatile("" ::"r"(v15));
    }
    if ((_DWORD)v15 != 2047) {
      {
        v16 = *(_QWORD*)&v14 & 0xFFFFFFFFFFFFFLL;
        __asm__ volatile("" ::"r"(v16));
      }
      v17 = (_DWORD)v15 == 0;
      {
        v18 = __clz((unsigned long long)(*(_QWORD*)&v14 & 0xFFFFFFFFFFFFFLL));
        __asm__ volatile("" ::"r"(v18));
      }
      v19 = v18 - 11;
      v20 = 12 - v18;
      {
        v21 = (*(_QWORD*)&v14 & 0xFFFFFFFFFFFFFLL) << v19;
        __asm__ volatile("" ::"r"(v21));
      }
      if ((_DWORD)v15 == 0) {
        LODWORD(v15) = v20;
      }
      v22 = v21 & 0xFFEFFFFFFFFFFFFFLL;
      if (v17) {
        v16 = v22;
      }
      v23 = __OFADD__((_DWORD)v15, v12);
      LODWORD(v15) = v15 + v12;
      if (v23) {
        v15 = ((int)v15 >> 31) ^ 0x80000000;
      }
      else {
        v15 = (unsigned int)v15;
      }
      if ((int)v15 < 2047) {
        {
          v37 = *(_QWORD*)&a5 & 0x8000000000000000LL;
          __asm__ volatile("" ::"r"(v37));
        }
        if ((int)v15 <= 0) {
          v52 = v16 | v37 | 0x10000000000000LL;
          if ((int)v15 <= -1021) {
            v53 = -1021;
          }
          else {
            v53 = v15;
          }
          *(double*)&a5 =
              *(double*)&v52 *
              COERCE_DOUBLE((unsigned __int64)(unsigned int)(v53 + 1022) << 52);
        }
        else {
          *(_QWORD*)&a5 = v37 | (v15 << 52) | v16;
        }
      }
      else {
        LANES128(v24).n128_u64[0] = -1;
        LANES128(v24).n128_u64[1] = -1;
        PSEUDO_LOW_LANE128(a6, n128_u64, 0x7FE0000000000000LL);
        v25 = LANES128_OF(vbslq_s8(vnegq_f64(v24), a6, *(int8x16_t*)&a5))
                  .n128_f64[0];
        *(double*)&a5 = v25 + v25;
      }
    }
  }
  return *(double*)&a5;
}

#pragma GCC visibility pop
