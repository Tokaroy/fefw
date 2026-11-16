#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_CreateTransferMemory_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroyTransferMemory_plt(__int64);
__int64 nn_os_DetachTransferMemory_plt(__int64);
void nn_detail_UnexpectedDefaultImpl_plt_857150();
__int64 nn_ec_3ff360(__int64 a1, __int64* a2, __int64 a3, __int64 a4, char a5);

__int64 nn_ec_3ff360(__int64 a1, __int64* a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  struct {
    unsigned int v14;
    int v15;
  } v14_;
  __int64 v16;

  result = nn_os_CreateTransferMemory_plt(a1 + 40, a3, a4, 0);
  if ((_DWORD)result == 0) {
    v14_.v15 = 1;
    v14_.v14 = nn_os_DetachTransferMemory_plt(a1 + 40);
    if (a5 == 1) {
      v11 = *a2;
      v16 = a1 + 32;
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
          *(_QWORD*)v11 + 32LL))(v11, (__int64)&v16, 0, (__int64)&v14_.v14, a4);
    }
    else {
      if (a5 != 0) {
        nn_detail_UnexpectedDefaultImpl_plt_857150();
      }
      v10 = *a2;
      v16 = a1 + 32;
      result = (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
          *(_QWORD*)v10 + 72LL))(v10, (__int64)&v16, 0, (__int64)&v14_.v14, a4);
    }
    if ((_DWORD)result != 0) {
      v13 = result;
      nn_os_DestroyTransferMemory_plt(a1 + 40);
      result = v13;
      if ((unsigned __int8)v14_.v15 != 1) {
        return result;
      }
    }
    else if ((unsigned __int8)v14_.v15 != 1) {
      return result;
    }
    v12 = result;
    nn_os_CloseNativeHandle_plt(v14_.v14);
    return v12;
  }
  return result;
}

#pragma GCC visibility pop
