#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_codec_hwacod_shim_GetClientHipcSession_plt(PSEUDO_X8);
__int64 memcpy_plt(__int64, __int64, unsigned __int64);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_codec_hwacod_32f470(__int64 a1);

__int64 nn_codec_hwacod_32f470(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  __int64 v9;
  struct {
    char gap0_[8];
    _DWORD v10[2];
    __int64 v11;
    int v12;
    int v13;
    char gap32_[256];
    int v15;
    unsigned int v16;
  } f_;
  __int64 v14;
  __int64 v17;

  v17 = 0;
  nn_codec_hwacod_shim_GetClientHipcSession_plt((void*)(&v17));
  v2 = v17;
  f_.v16 = 0;
  memset_plt((__int64)f_.v10, 0, 0x118u);
  v9 = 3;
  {
    v3 = *(_DWORD*)(a1 + 280);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 == 3) {
    v9 = 2;
    {
      v5 = *(_DWORD*)(a1 + 4);
      __asm__ volatile("" ::"r"(v5));
    }
    f_.v10[0] = *(_DWORD*)a1;
    f_.v10[1] = v5;
    f_.v11 = *(_QWORD*)(a1 + 8);
    {
      v6 = *(_DWORD*)(a1 + 20);
      __asm__ volatile("" ::"r"(v6));
    }
    f_.v12 = *(_DWORD*)(a1 + 16);
    f_.v13 = v6;
    memcpy_plt((__int64)&v14, a1 + 24, 0xFFu);
  }
  else {
    if (v3 == 2) {
      v9 = 1;
    }
    else {
      if (v3 != 1) {
        goto LABEL_8;
      }
      v9 = 0;
    }
    {
      v4 = *(_DWORD*)(a1 + 4);
      __asm__ volatile("" ::"r"(v4));
    }
    f_.v10[0] = *(_DWORD*)a1;
    f_.v10[1] = v4;
    f_.v11 = *(_QWORD*)(a1 + 8);
  }
LABEL_8:
  f_.v15 = (*(__int64 (**)(__int64, unsigned int*, __int64*, __int64))(
      *(_QWORD*)v2 + 48LL))(v2, &f_.v16, &v9, 1);
  if (f_.v15 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&f_.v15);
  }
  v7 = f_.v16;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  return v7;
}

#pragma GCC visibility pop
