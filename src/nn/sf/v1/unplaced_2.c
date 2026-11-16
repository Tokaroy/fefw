#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_GetMultiWaitHolderUserData_plt(__int64);
__int64 nn_os_LinkMultiWaitHolder_plt(__int64, __int64);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_os_SignalEvent_plt(__int64);
__int64 nn_sf_hipc_AcceptSession_plt(__int64, unsigned int);
__int64 nn_sf_hipc_AttachWaitHolderForReceive_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_server_ClientInfo_NewClientInfo_plt(__int64);
__int64
nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
    __int64, __int64);
void nn_diag_detail_AbortImpl_plt_856170();
__int64 nn_sf_v1_17d250(_QWORD* a1, __int64 a2);

__int64 nn_sf_v1_17d250(_QWORD* a1, __int64 a2)
{
  __int64 (***v4)(__int64);
  __int64 (**v5)(__int64);
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  _QWORD* v16;
  _QWORD v18[2];
  struct {
    __int64 v19;
    char gap24_[4];
    unsigned int v20;
  } v19_;

  if (nn_os_GetMultiWaitHolderUserData_plt(a2) != 2) {
    nn_diag_detail_AbortImpl_plt_856170();
  }
  v4 = *(__int64 (****)(__int64))(a2 + 104);
  if (v4 == nullptr) {
    v13 = (*(__int64 (**)(__int64, __int64, __int64))(*a1 + 48LL))(
        (__int64)a1, *(unsigned int*)(a2 + 80), a2);
    goto LABEL_10;
  }
  v5 = *v4;
  v6 = *(_DWORD*)(a2 + 84);
  v18[0] = *(_QWORD*)(a2 + 104);
  v7 = (*v5)((__int64)v4);
  v18[1] = *(_QWORD*)(a2 + 112);
  v8 = nn_sf_hipc_server_ClientInfo_NewClientInfo_plt(v7);
  v9 = *a1;
  v19_.v19 = v8;
  v10 = (*(__int64 (**)(__int64, __int64, __int64))(v9 + 8))(
      (__int64)a1, (__int64)v18, (__int64)&v19_.v19);
  if (v10 != 0) {
    v11 = v10;
    v19_.v20 = 0;
    v12 = nn_sf_hipc_AcceptSession_plt((__int64)&v19_.v20, v6);
    if (v12 != 0) {
      v13 = v12;
      (*(void (**)(__int64, __int64))*a1)((__int64)a1, v11);
      v14 = v18[0];
      if (v18[0] == 0) {
        goto LABEL_10;
      }
    }
    else {
      v15 = v19_.v20;
      nn_sf_hipc_AttachWaitHolderForReceive_plt(v11, v19_.v20);
      *(_BYTE*)(v11 + 68) = 0;
      *(_DWORD*)(v11 + 72) = v15;
      *(_DWORD*)(v11 + 64) = 1;
      nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
          (__int64)a1, v11);
      v13 = 0;
      v14 = v18[0];
      if (v18[0] == 0) {
        goto LABEL_10;
      }
    }
  LABEL_9:
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
    goto LABEL_10;
  }
  v13 = 52235;
  v14 = v18[0];
  if (v18[0] != 0) {
    goto LABEL_9;
  }
LABEL_10:
  nn_os_SdkMutexType_Lock_plt((__int64)(a1 + 43));
  nn_os_LinkMultiWaitHolder_plt((__int64)(a1 + 44), a2);
  nn_os_SignalEvent_plt((__int64)(a1 + 27));
  nn_os_SdkMutexType_Lock_plt((__int64)(a1 + 50));
  v16 = (_QWORD*)a1[52];
  if (v16 != a1 + 51) {
    nn_os_SignalEvent_plt((__int64)(v16 + 17));
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)(a1 + 50));
  nn_os_SdkMutexType_Unlock_plt((__int64)(a1 + 43));
  return v13;
}

#pragma GCC visibility pop
