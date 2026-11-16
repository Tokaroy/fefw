#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_485840();
__int64 SdkRoutine_485c90();
__int64 SdkRoutine_4860f0();
__int64 SdkRoutine_486550();
__int64 SdkRoutine_4869b0();
__int64 SdkRoutine_486e10();
__int64 SdkRoutine_487270();
__int64 SdkRoutine_4876d0();
__int64 SdkRoutine_487b30();
__int64 nn_gs_47f8a0(__int64 result, char*, __int64, __int64, char);
void nn_diag_detail_AbortImpl_plt_856170();
__attribute__((swiftcall)) void nn_gs_484fc0(PSEUDO_X8 x8_, __int64 a1);

__attribute__((swiftcall)) void nn_gs_484fc0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)();
  __int64 (*v13)();
  __int64 (*v14)();
  __int64 (*v15)();
  __int64 (*v16)();
  __int64 (*v17)();
  __int64 (*v18)();
  __int64 (*v19)();
  __int64 (*v20)();
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
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    char v49[7];
    char v50;
  } f_;

  f_.v22 = 0;
  f_.v23 = 0;
  f_.v24 = 64;
  f_.v25 = 0;
  f_.v26 = 1;
  f_.v27 = 400;
  f_.v28 = 0;
  f_.v29 = 2;
  f_.v30 = 448;
  f_.v31 = 0;
  f_.v32 = 3;
  f_.v33 = 512;
  f_.v34 = 0;
  f_.v35 = 4;
  f_.v36 = 576;
  f_.v37 = 0;
  f_.v38 = 5;
  f_.v39 = 672;
  f_.v44 = 7;
  f_.v45 = 1024;
  f_.v40 = 0;
  f_.v41 = 6;
  f_.v46 = 0;
  f_.v47 = 8;
  f_.v42 = 816;
  f_.v43 = 0;
  f_.v48 = 1360;
  nn_gs_47f8a0((__int64)&f_.v22, f_.v49, (__int64)&f_.v50, 6, 1);
  if ((_DWORD)f_.v22 != 0) {
    goto LABEL_182;
  }
  v4 = f_.v27;
  v5 = f_.v30;
  v6 = f_.v33;
  v7 = f_.v36;
  v8 = f_.v39;
  v9 = f_.v42;
  v10 = f_.v45;
  v11 = f_.v48;
  if (f_.v23 <= 3) {
    if (f_.v23 > 1) {
      v12 = f_.v23 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v23 != 0) {
      if (f_.v23 != 1) {
        goto LABEL_183;
      }
      v12 = SdkRoutine_485c90;
    }
    else {
      v12 = SdkRoutine_485840;
    }
  }
  else if (f_.v23 <= 5) {
    v12 = f_.v23 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v23) {
    case 6LL:
      v12 = SdkRoutine_487270;
      break;
    case 7LL:
      v12 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v12 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v25 != 0) {
    goto LABEL_182;
  }
  if (f_.v26 <= 3) {
    if (f_.v26 > 1) {
      v13 = f_.v26 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v26 != 0) {
      if (f_.v26 != 1) {
        goto LABEL_183;
      }
      v13 = SdkRoutine_485c90;
    }
    else {
      v13 = SdkRoutine_485840;
    }
  }
  else if (f_.v26 <= 5) {
    v13 = f_.v26 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v26) {
    case 6LL:
      v13 = SdkRoutine_487270;
      break;
    case 7LL:
      v13 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v13 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v28 != 0) {
    goto LABEL_182;
  }
  if (f_.v29 <= 3) {
    if (f_.v29 > 1) {
      v14 = f_.v29 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v29 != 0) {
      if (f_.v29 != 1) {
        goto LABEL_183;
      }
      v14 = SdkRoutine_485c90;
    }
    else {
      v14 = SdkRoutine_485840;
    }
  }
  else if (f_.v29 <= 5) {
    v14 = f_.v29 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v29) {
    case 6LL:
      v14 = SdkRoutine_487270;
      break;
    case 7LL:
      v14 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v14 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v31 != 0) {
    goto LABEL_182;
  }
  if (f_.v32 <= 3) {
    if (f_.v32 > 1) {
      v15 = f_.v32 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v32 != 0) {
      if (f_.v32 != 1) {
        goto LABEL_183;
      }
      v15 = SdkRoutine_485c90;
    }
    else {
      v15 = SdkRoutine_485840;
    }
  }
  else if (f_.v32 <= 5) {
    v15 = f_.v32 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v32) {
    case 6LL:
      v15 = SdkRoutine_487270;
      break;
    case 7LL:
      v15 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v15 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v34 != 0) {
    goto LABEL_182;
  }
  if (f_.v35 <= 3) {
    if (f_.v35 > 1) {
      v16 = f_.v35 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v35 != 0) {
      if (f_.v35 != 1) {
        goto LABEL_183;
      }
      v16 = SdkRoutine_485c90;
    }
    else {
      v16 = SdkRoutine_485840;
    }
  }
  else if (f_.v35 <= 5) {
    v16 = f_.v35 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v35) {
    case 6LL:
      v16 = SdkRoutine_487270;
      break;
    case 7LL:
      v16 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v16 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v37 != 0) {
    goto LABEL_182;
  }
  if (f_.v38 <= 3) {
    if (f_.v38 > 1) {
      v17 = f_.v38 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v38 != 0) {
      if (f_.v38 != 1) {
        goto LABEL_183;
      }
      v17 = SdkRoutine_485c90;
    }
    else {
      v17 = SdkRoutine_485840;
    }
  }
  else if (f_.v38 <= 5) {
    v17 = f_.v38 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v38) {
    case 6LL:
      v17 = SdkRoutine_487270;
      break;
    case 7LL:
      v17 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v17 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v40 != 0) {
    goto LABEL_182;
  }
  if (f_.v41 <= 3) {
    if (f_.v41 > 1) {
      v18 = f_.v41 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v41 != 0) {
      if (f_.v41 != 1) {
        goto LABEL_183;
      }
      v18 = SdkRoutine_485c90;
    }
    else {
      v18 = SdkRoutine_485840;
    }
  }
  else if (f_.v41 <= 5) {
    v18 = f_.v41 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v41) {
    case 6LL:
      v18 = SdkRoutine_487270;
      break;
    case 7LL:
      v18 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v18 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v43 != 0) {
    goto LABEL_182;
  }
  if (f_.v44 <= 3) {
    if (f_.v44 > 1) {
      v19 = f_.v44 == 2 ? SdkRoutine_4860f0 : SdkRoutine_486550;
    }
    else if (f_.v44 != 0) {
      if (f_.v44 != 1) {
        goto LABEL_183;
      }
      v19 = SdkRoutine_485c90;
    }
    else {
      v19 = SdkRoutine_485840;
    }
  }
  else if (f_.v44 <= 5) {
    v19 = f_.v44 == 4 ? SdkRoutine_4869b0 : SdkRoutine_486e10;
  }
  else {
    switch (f_.v44) {
    case 6LL:
      v19 = SdkRoutine_487270;
      break;
    case 7LL:
      v19 = SdkRoutine_4876d0;
      break;
    case 8LL:
      v19 = SdkRoutine_487b30;
      break;
    default:
      goto LABEL_183;
    }
  }
  if ((_DWORD)f_.v46 != 0) {
  LABEL_182:
    nn_diag_detail_AbortImpl_plt_856170();
  }
  if (f_.v47 <= 3) {
    if (f_.v47 <= 1) {
      if (f_.v47 == 0) {
        v20 = SdkRoutine_485840;
        goto LABEL_181;
      }
      if (f_.v47 == 1) {
        v20 = SdkRoutine_485c90;
        goto LABEL_181;
      }
      goto LABEL_183;
    }
    if (f_.v47 == 2) {
      v20 = SdkRoutine_4860f0;
    }
    else {
      v20 = SdkRoutine_486550;
    }
  }
  else {
    if (f_.v47 > 5) {
      switch (f_.v47) {
      case 6LL:
        v20 = SdkRoutine_487270;
        goto LABEL_181;
      case 7LL:
        v20 = SdkRoutine_4876d0;
        goto LABEL_181;
      case 8LL:
        v20 = SdkRoutine_487b30;
        goto LABEL_181;
      default:
        break;
      }
    LABEL_183:
      nn_diag_detail_AbortImpl_plt_856170();
    }
    if (f_.v47 == 4) {
      v20 = SdkRoutine_4869b0;
    }
    else {
      v20 = SdkRoutine_486e10;
    }
  }
LABEL_181:
  *a2 = f_.v24;
  a2[1] = (__int64)v12;
  a2[6] = v5;
  a2[7] = (__int64)v14;
  a2[12] = v7;
  a2[13] = (__int64)v16;
  a2[18] = v9;
  a2[19] = (__int64)v18;
  a2[24] = v11;
  a2[25] = (__int64)v20;
  a2[2] = a1 + 8;
  a2[3] = v4;
  a2[4] = (__int64)v13;
  a2[5] = a1 + 8;
  a2[8] = a1 + 8;
  a2[9] = v6;
  a2[10] = (__int64)v15;
  a2[11] = a1 + 8;
  a2[14] = a1 + 8;
  a2[15] = v8;
  a2[16] = (__int64)v17;
  a2[17] = a1 + 8;
  a2[20] = a1 + 8;
  a2[21] = v10;
  a2[22] = (__int64)v19;
  a2[23] = a1 + 8;
  a2[26] = a1 + 8;
  {
    a1 + 8;
    return;
  }
}

#pragma GCC visibility pop
