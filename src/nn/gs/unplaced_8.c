#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4811f0();
__int64 SdkRoutine_481ce0();
__int64 SdkRoutine_482120();
__int64 SdkRoutine_482560();
__int64 SdkRoutine_4829a0();
__int64 SdkRoutine_482de0();
__int64 SdkRoutine_483220();
__int64 SdkRoutine_483650();
__int64 SdkRoutine_483ed0();
__int64 SdkRoutine_484310();
__int64 SdkRoutine_484750();
__int64 SdkRoutine_484b80();
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_gs_47f8a0(__int64 result, char*, __int64, __int64, char);
void SdkRoutine_483a80();
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_gs_4772e0(__int64* a1, __int64* a2, _QWORD* a3, unsigned int a4);
__attribute__((swiftcall)) void nn_gs_47f460(PSEUDO_X8 x8_, __int64 a1);

__int64 nn_gs_4772e0(__int64* a1, __int64* a2, _QWORD* a3, unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64* v15;
  __int64 v16;
  int v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  struct {
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
    __int64 v33;
  } f_;

  {
    v5 = a3[2];
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v4 = a3[3];
    __asm__ volatile("" ::"r"(v4));
  }
  f_.v26 = 0;
  f_.v27 = 0;
  result = 65779;
  f_.v24 = 0;
  f_.v25 = 0;
  f_.v22 = 0;
  f_.v23 = 0;
  f_.v28 = v5;
  f_.v29 = v4;
  {
    v9 = a3[4];
    __asm__ volatile("" ::"r"(v9));
  }
  {
    v8 = a3[5];
    __asm__ volatile("" ::"r"(v8));
  }
  f_.v30 = v9;
  f_.v31 = v8;
  {
    v10 = a3[6];
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = a3[7];
    __asm__ volatile("" ::"r"(v11));
  }
  f_.v32 = v10;
  f_.v33 = v11;
  if ((_BYTE)v5 == 0) {
    v12 = 0;
    goto LABEL_9;
  }
  f_.v22 = f_.v28;
  f_.v23 = f_.v29;
  if ((_BYTE)v9 == 0) {
    v12 = 1;
    if ((_BYTE)f_.v30 != 0) {
      return result;
    }
  LABEL_9:
    if (v12 != 2 && (*((_BYTE*)&f_.v28 + 16 * v12 + 16) != 0 ||
                     v12 != 1 && *((_BYTE*)&f_.v28 + 16 * v12 + 32) != 0) ||
        (_BYTE)v5 == 0) {
      return result;
    }
    goto LABEL_14;
  }
  f_.v24 = f_.v30;
  f_.v25 = f_.v31;
  if ((_BYTE)v10 == 0) {
    v12 = 2;
    if ((_BYTE)f_.v32 != 0) {
      return result;
    }
    goto LABEL_9;
  }
  f_.v26 = f_.v32;
  f_.v27 = f_.v33;
  v12 = 3;
LABEL_14:
  v13 = 0;
  v14 = 0;
  v15 = (unsigned __int64*)&f_.v23;
  {
    v16 = HIWORD(*a3);
    __asm__ volatile("" ::"r"(v16));
  }
  do {
    {
      v17 = *((unsigned __int8*)v15 - 8);
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v18 = *v15;
      __asm__ volatile("" ::"r"(v18));
    }
    if (v17 == 8) {
      if ((unsigned __int8)*v15 > 5uLL) {
        return result;
      }
      v21 = (v16 + (8LL << v18)) & -(8LL << v18);
      if (v21 == 0) {
        return result;
      }
      if (DWORDn(v18, sizeof(v18) / 4 - 1) != 0) {
        v20 = (v21 * ((v18 >> 26) & 0x3FFFFFFFC0LL) + 1023) &
              0x7FFFFFFFFFFFFC00LL;
        if (v13 == 0) {
          goto LABEL_29;
        }
      }
      else {
        v20 = 0;
        if (v13 == 0) {
          goto LABEL_29;
        }
      }
    }
    else {
      if (v17 != 1) {
        return result;
      }
      v19 = DWORDn(v18, sizeof(v18) / 4 - 1);
      if (v19 != 0) {
        v20 = ((v16 + 1) * v19 + 1023) & 0x3FFFFFFFFFC00LL;
      }
      else {
        v20 = 0;
      }
      if (v13 == 0) {
        goto LABEL_29;
      }
    }
    v13 = (v13 + 1023) & 0xFFFFFFFFFFFFFC00LL;
    if (v20 >= -(__int64)v13) {
      return result;
    }
  LABEL_29:
    v13 += v20;
    v15 += 2;
    if (v14 == 0) {
      v14 = 1024;
    }
    --v12;
  } while (v12 != 0);
  if (a4 != 0 && v13 != 0) {
    if ((sizeof((v13) * (a4)) > 4
             ? ((unsigned __int128)(unsigned long long)(v13) *
                (unsigned long long)(a4)) >>
                       64 ==
                   0
             : ((unsigned long long)(unsigned int)(v13) * (unsigned int)(a4)) >>
                       32 ==
                   0)) {
      v12 = v13 * a4;
      goto LABEL_36;
    }
  }
  else {
  LABEL_36:
    *a1 = v12;
    *a2 = v14;
    return 0;
  }
  return result;
}

__attribute__((swiftcall)) void nn_gs_47f460(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 i;
  __int64 (*v7)();
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  int v11;
  __int64 (*v12)();
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  int v16;
  __int64 result;
  struct {
    _BYTE v18[312];
    _QWORD v19[3];
    int v20;
    int v21;
    __int64 v22;
    __int64 v23;
    int v24;
    int v25;
    __int64 v26;
    __int64 v27;
    int v28;
    int v29;
    __int64 v30;
    __int64 v31;
    int v32;
    int v33;
    __int64 v34;
    __int64 v35;
    int v36;
    int v37;
    __int64 v38;
    __int64 v39;
    int v40;
    int v41;
    __int64 v42;
    __int64 v43;
    int v44;
    int v45;
    __int64 v46;
    __int64 v47;
    int v48;
    int v49;
    __int64 v50;
    __int64 v51;
    int v52;
    int v53;
    __int64 v54;
    __int64 v55;
    int v56;
    int v57;
    __int64 v58;
    __int64 v59;
    int v60;
    int v61;
    __int64 v62;
    __int64 v63;
    int v64;
    int v65;
    __int64 v66;
    __int64 v67;
  } f_;
  char v68[16];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  f_.v19[0] = 0;
  f_.v19[1] = 0;
  f_.v21 = 0;
  f_.v25 = 0;
  f_.v19[2] = 1024;
  f_.v20 = 1;
  f_.v24 = 1;
  f_.v28 = 1;
  f_.v32 = 1;
  f_.v36 = 1;
  f_.v40 = 1;
  f_.v44 = 1;
  f_.v22 = 0;
  f_.v23 = 16;
  f_.v48 = 1;
  f_.v52 = 1;
  f_.v56 = 1;
  f_.v60 = 1;
  f_.v64 = 1;
  f_.v29 = 0;
  f_.v33 = 0;
  f_.v37 = 0;
  f_.v41 = 0;
  f_.v45 = 0;
  f_.v26 = 1;
  f_.v27 = 32;
  f_.v49 = 0;
  f_.v53 = 0;
  f_.v57 = 0;
  f_.v61 = 0;
  f_.v65 = 0;
  f_.v30 = 2;
  f_.v31 = 48;
  f_.v66 = 11;
  f_.v34 = 3;
  f_.v35 = 64;
  f_.v38 = 4;
  f_.v39 = 80;
  f_.v42 = 5;
  f_.v43 = 96;
  f_.v46 = 6;
  f_.v47 = 112;
  f_.v50 = 7;
  f_.v51 = 128;
  f_.v54 = 8;
  f_.v55 = 144;
  f_.v58 = 9;
  f_.v59 = 160;
  f_.v62 = 10;
  f_.v63 = 192;
  f_.v67 = 256;
  nn_gs_47f8a0((__int64)f_.v19, v68, (__int64)f_.v18, 6, 1),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  memcpy_plt((__int64)f_.v18, (__int64)f_.v19, 0x138u),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  v4 = a1 + 8;
  v5 = a1 + 56;
  memset_plt((__int64)f_.v19, 0, 0x138u),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
  for (i = 0;; i += 6) {
    {
      v10 = *(_QWORD*)&f_.v18[i * 8 + 8];
      __asm__ volatile("" ::"r"(v10));
    }
    {
      v11 = *(_DWORD*)&f_.v18[i * 8];
      __asm__ volatile("" ::"r"(v11));
    }
    f_.v19[i] = *(_QWORD*)&f_.v18[i * 8 + 16];
    if (v11 != 0) {
      if (v11 == 1) {
        v12 = SdkRoutine_4811f0;
        v13 = v5;
        switch (v10) {
        case 0LL:
          goto LABEL_11;
        case 1LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_481ce0;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        case 2LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_482120;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        case 3LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_482560;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        case 4LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_4829a0;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        case 5LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_482de0;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        case 6LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_483220;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        case 7LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_483650;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        case 8LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = &SdkRoutine_483a80;
          v14[2] = v5;
          if (i != 36) {
            goto LABEL_32;
          }
          {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
        case 9LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_483ed0;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        case 10LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_484310;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        case 11LL: {
          v14 = &f_.v19[i];
          __asm__ volatile("" ::"r"(v14));
        }
          v14[1] = SdkRoutine_484750;
          v14[2] = v5;
          if (i == 36) {
            memcpy_plt(a2, (__int64)f_.v19, 0x138u),
                result =
                    COERCE_AS(__typeof__(result),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
            return;
          }
          goto LABEL_32;
        default:
        LABEL_50:
          nn_diag_detail_AbortImpl_plt_856170(),
              result =
                  COERCE_AS(__typeof__(result),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
          {
            result;
            return;
          }
        }
      }
    LABEL_49:
      nn_diag_detail_AbortImpl_plt_856170(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    }
    v12 = SdkRoutine_484b80;
    v13 = v4;
    if (v10 != 0) {
      goto LABEL_48;
    }
  LABEL_11:
    {
      v14 = &f_.v19[i];
      __asm__ volatile("" ::"r"(v14));
    }
    v14[1] = v12;
    v14[2] = v13;
    if (i == 36) {
      break;
    }
  LABEL_32:
    {
      v15 = *(_QWORD*)&f_.v18[i * 8 + 32];
      __asm__ volatile("" ::"r"(v15));
    }
    {
      v16 = *(_DWORD*)&f_.v18[i * 8 + 24];
      __asm__ volatile("" ::"r"(v16));
    }
    v14[3] = *(_QWORD*)&f_.v18[i * 8 + 40];
    if (v16 == 1) {
      v7 = SdkRoutine_4811f0;
      v8 = v5;
      switch (v15) {
      case 0LL:
        goto LABEL_4;
      case 1LL:
        v7 = SdkRoutine_481ce0;
        goto LABEL_3;
      case 2LL:
        v7 = SdkRoutine_482120;
        goto LABEL_3;
      case 3LL:
        v7 = SdkRoutine_482560;
        goto LABEL_3;
      case 4LL:
        v7 = SdkRoutine_4829a0;
        goto LABEL_3;
      case 5LL:
        v7 = SdkRoutine_482de0;
        goto LABEL_3;
      case 6LL:
        v7 = SdkRoutine_483220;
        goto LABEL_3;
      case 7LL:
        v7 = SdkRoutine_483650;
        goto LABEL_3;
      case 8LL:
        v7 = (__int64 (*)())&SdkRoutine_483a80,
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
        goto LABEL_3;
      case 9LL:
        v7 = SdkRoutine_483ed0;
        goto LABEL_3;
      case 10LL:
        v7 = SdkRoutine_484310;
        goto LABEL_3;
      case 11LL:
        v7 = SdkRoutine_484750;
      LABEL_3:
        v8 = v5;
        goto LABEL_4;
      default:
        goto LABEL_50;
      }
    }
    if (v16 != 0) {
      goto LABEL_49;
    }
    v7 = SdkRoutine_484b80;
    v8 = v4;
    if (v15 != 0) {
    LABEL_48:
      nn_diag_detail_AbortImpl_plt_856170(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    }
  LABEL_4:
    {
      v9 = &f_.v19[i];
      __asm__ volatile("" ::"r"(v9));
    }
    v9[4] = v7;
    v9[5] = v8;
  }
  {
    memcpy_plt(a2, (__int64)f_.v19, 0x138u),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x6", "=r"));
    return;
  }
}

#pragma GCC visibility pop
