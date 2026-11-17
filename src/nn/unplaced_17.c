#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvRmGpuAddressSpaceAllocationClose_plt(void);
__int64 __errno_location_plt();
__int64 nn_65e040(__int64, __int64);
__int64 nn_os_FinalizeMutex_plt(__int64);
__int64 nn_socket_RecvMMsg_plt();
extern _UNKNOWN* SdkData_e89bd8;
__int64 nn_b5780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5);
__int64 nn_65d680(__int64 a1);

__int64 nn_b5780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5)
{
  if (a5 == nullptr ||
      (*a5 & 0x8000000000000000LL) == 0 && a5[1] < 0x3B9ACA00u) {
    return nn_socket_RecvMMsg_plt();
  }
  *(_DWORD*)__errno_location_plt() = 22;
  return -1;
}

__int64 nn_65d680(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;

  v4 = *(_QWORD*)(a1 + 112);
  v2 = a1 + 112;
  v3 = v4;
  if (v4 != 0) {
    nn_65e040(v2, v3);
  }
  *(_QWORD*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 120) = 0;
  v5 = *(_QWORD*)(a1 + 64);
  v6 = a1 + 48;
  v7 = SdkData_e89bd8;
  if (v5 != a1 + 48) {
    do {
      if (v5 == v6) {
        break;
      }
      v9 = *(_QWORD*)(v5 + 16);
      v8 = *(_QWORD*)(v5 + 24);
      *(_QWORD*)(v9 + 24) = v8;
      *(_QWORD*)(v8 + 16) = *(_QWORD*)(v5 + 16);
      if (v5 != a1 + 80) {
        (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v7))(v5);
      }
      v5 = v9;
      --*(_QWORD*)(a1 + 40);
    } while (v9 != v6);
  }
  if (*(_QWORD*)(a1 + 16) != 0) {
    NvRmGpuAddressSpaceAllocationClose_plt();
  }
  nn_os_FinalizeMutex_plt(a1 + 128);
  result = *(_QWORD*)(a1 + 64);
  if (result != v6) {
    do {
      if (result == v6) {
        break;
      }
      v12 = *(_QWORD*)(result + 16);
      v11 = *(_QWORD*)(result + 24);
      *(_QWORD*)(v12 + 24) = v11;
      *(_QWORD*)(v11 + 16) = *(_QWORD*)(result + 16);
      if (result != a1 + 80) {
        (*(void (**)(__int64))((char*)(*(void*(*)[1])0x18LL) + (_QWORD)v7))(
            result);
      }
      result = v12;
      --*(_QWORD*)(a1 + 40);
    } while (v12 != v6);
  }
  return result;
}

#pragma GCC visibility pop
