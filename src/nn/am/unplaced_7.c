#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1c96e4(__int64);
__int64 SdkRoutine_1c9760(__int64, __int64);
__int64 SdkRoutine_1c9854(__int64, int);
__int64 SdkRoutine_1d3d5c(__int64);
__int64 SdkRoutine_1d3d98(_DWORD*);
__int64 am_interface_accessors_1c6b2c();
__int64 am_interface_accessors_1c6b88(_QWORD*);
__int64 am_service_proxy_1d5a68();
__int64 am_service_proxy_1d6444();
__int64 nn_am_1c6580(__int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_os_CloseNativeHandle_plt(unsigned int);
__int64 nn_os_GetCurrentProcessHandle_plt(__int64);
__int64 nn_os_SdkMutexType_Lock_plt(__int64);
__int64 nn_os_SdkMutexType_Unlock_plt(__int64);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(__int64, const char*);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(__int64);
__int64 nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
    __int64, __int64, unsigned int);
extern _UNKNOWN SdkData_efd0a0;
extern _UNKNOWN SdkData_efd100;
extern _UNKNOWN SdkData_efd1c0;
extern _UNKNOWN SdkData_efd1e0;
extern _UNKNOWN SdkData_efd200;
extern _UNKNOWN SdkData_efd220;
extern _UNKNOWN SdkData_efd280;
extern _UNKNOWN SdkData_efd2a0;
extern _UNKNOWN SdkData_efed60;
extern _UNKNOWN SdkData_efeea8;
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr_e59a88[])();
extern __int64 (*nn_sf_hipc_client_AddDomainProxyReference_ptr_e59f28[])();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr_e59b28)();
extern __int64 (*nn_sf_hipc_client_GetDomainProxyOwner_ptr_e59fc8)();
extern __int64 SdkData_e86d80;
extern __int64 SdkData_efd0a8;
extern __int64 SdkData_efd0b0;
extern __int64 SdkData_efd108;
extern __int64 SdkData_efd110;
extern __int64 SdkData_efd1c8;
extern __int64 SdkData_efd1d0;
extern __int64 SdkData_efd1e8;
extern __int64 SdkData_efd1f0;
extern __int64 SdkData_efd208;
extern __int64 SdkData_efd210;
extern __int64 SdkData_efd228;
extern __int64 SdkData_efd230;
extern __int64 SdkData_efd288;
extern __int64 SdkData_efd290;
extern __int64 SdkData_efd2a8;
extern __int64 SdkData_efd2b0;
extern __int64 SdkData_efd3a0[822];
extern __int64 SdkData_efed50;
extern __int64 SdkData_efeea0;
extern __int64 SdkData_efeeb0;
extern __int64 SdkData_efeeb8;
extern __int64 nn_am_detail_g_AppletAlternativeFunctions;
extern __int64 nn_am_detail_g_AppletCommonFunctions;
extern __int64 nn_am_detail_g_ApplicationCreator;
extern __int64 nn_am_detail_g_CMenuFunctions;
extern __int64 nn_am_detail_g_CMenuProxy;
extern __int64 nn_am_detail_g_GlobalStateController;
extern __int64 nn_am_detail_g_HomeMenuFunctions;
extern __int64 nn_am_detail_g_LibraryAppletProxy;
extern __int64 nn_am_detail_g_LibraryAppletSelfAccessor;
extern __int64 nn_am_detail_g_OverlayAppletProxy;
extern __int64 nn_am_detail_g_OverlayFunctions;
extern __int64 nn_am_detail_g_ProcessWindingController;
extern __int64 nn_am_detail_g_SystemAppletProxy;
extern __int64 nn_am_detail_g_SystemProcessCommonFunctions;
extern int SdkData_efd0a4;
extern int SdkData_efd104;
extern int SdkData_efd1c4;
extern int SdkData_efd1e4;
extern int SdkData_efd204;
extern int SdkData_efd224;
extern int SdkData_efd284;
extern int SdkData_efd2a4;
extern int SdkData_efed8c;
extern int SdkData_efeeac;
__int64 nn_am_1c6ac0();
__int64 nn_am_1c7634();
__int64 nn_am_1c7698(void* this_);
__int64 nn_am_1c7d7c();
__int64 nn_am_1c7de0(void* this_);
__int64 nn_am_1c8580();

__int64 nn_am_1c6ac0()
{
  am_interface_accessors_1c6b2c();
  am_interface_accessors_1c6b88(&nn_am_detail_g_ApplicationCreator);
  am_interface_accessors_1c6b88(&nn_am_detail_g_GlobalStateController);
  am_interface_accessors_1c6b88(&nn_am_detail_g_HomeMenuFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletAlternativeFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_SystemProcessCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_SystemAppletProxy);
  return am_interface_accessors_1c6b88(&SdkData_efeea0);
}

__int64 nn_am_1c7634()
{
  am_interface_accessors_1c6b2c();
  am_interface_accessors_1c6b88(&nn_am_detail_g_ProcessWindingController);
  am_interface_accessors_1c6b88(&nn_am_detail_g_LibraryAppletSelfAccessor);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletAlternativeFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_SystemProcessCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_LibraryAppletProxy);
  return am_interface_accessors_1c6b88(&SdkData_efeea0);
}

__int64 nn_am_1c7698(void* this_)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 i;
  int v14;
  int v15;
  __int64 j;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  int v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efeea8);
  if (SdkData_efeeac != 0) {
    if (SdkData_efeeb0 == 0) {
      SdkData_efeeb0 = (__int64)am_service_proxy_1d5a68;
      SdkData_efeeb8 = (__int64)SdkData_efd3a0;
    }
    ++SdkData_efeeac;
  }
  else {
    SdkRoutine_1c96e4((__int64)SdkData_efd3a0);
    {
      v1 = SdkData_efd3a0[0];
      __asm__ volatile("" ::"r"(v1));
    }
    v2 = SdkRoutine_1c9760((__int64)&SdkData_efed50, (__int64)&SdkData_efed50);
    nn_sf_hipc_InitializeHipcServiceResolution_plt(v2);
    LODWORD(v29) = 0;
    v3 = nn_sf_hipc_ConnectToHipcService_plt((__int64)&v29, "appletAE");
    if ((_DWORD)v3 != 0 ||
        (v4 = v29, LODWORD(v30) = 0,
         (_DWORD)(v3 =
                      nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
                          (__int64)&SdkData_efed50, (__int64)&v30, v29)) !=
             0)) {
      v24 = v3;
      nn_sf_hipc_FinalizeHipcServiceResolution_plt(v3);
      SdkData_efed50 = SdkData_e86d80 + 16;
      SdkRoutine_1d3d5c((__int64)&SdkData_efed50);
      SdkRoutine_1d3d98(SdkData_efd3a0);
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efeea8);
      LODWORD(v30) = v24;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v30);
    }
    v5 = v1 + 144;
    v6 = (int)v30;
    v7 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(v1 + 144) +
                                                     16LL))(v1 + 144, 56, 8);
    v8 = v7;
    if (v7 != 0) {
      *(_QWORD*)(v7 + 16) = &SdkData_efed50;
      *(_DWORD*)(v7 + 24) = v6;
      *(_DWORD*)(v7 + 28) = 0;
      *(_QWORD*)(v7 + 48) = v5;
      *(_DWORD*)(v7 + 40) = 1;
      *(_BYTE*)(v7 + 8) = 1;
      *(_QWORD*)v7 = nn_sf_hipc_client_AddDomainProxyReference_ptr_e59a88;
      *(_QWORD*)(v7 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr_e59b28;
    }
    v9 = SdkRoutine_1c9854((__int64)&SdkData_efed60, v4);
    ++SdkData_efed8c;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v9);
    SdkData_efeeac = 1;
    SdkData_efeea0 = v8;
    SdkData_efeeb0 = (__int64)am_service_proxy_1d5a68;
    SdkData_efeeb8 = (__int64)SdkData_efd3a0;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efeea8);
  v10 = nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd1c0);
  if (SdkData_efd1c4 != 0) {
    if (SdkData_efd1c8 == 0) {
      SdkData_efd1c8 = 0;
      SdkData_efd1d0 = 0;
    }
    ++SdkData_efd1c4;
  }
  else {
    v28 = 0;
    while (1) {
      v11 = SdkData_efeea0;
      LODWORD(v29) = nn_os_GetCurrentProcessHandle_plt(v10);
      BYTE4(v29) = 0;
      v30 = &v28;
      v12 = (*(__int64 (**)(__int64, __int64**, _QWORD, __int64*))(
          *(_QWORD*)v11 + 64LL))(v11, &v30, 0, &v29);
      if (BYTE4(v29) == 1) {
        nn_os_CloseNativeHandle_plt(v29);
      }
      if ((v12 & 0x3FFFFF) != 0x19280) {
        break;
      }
      v10 = nn_os_SleepThread_plt(10000000);
    }
    if (v12 != 0) {
      if (v28 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd1c0);
      LODWORD(v30) = v12;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v30);
    }
    SdkData_efd1c4 = 1;
    SdkData_efd1c8 = 0;
    SdkData_efd1d0 = 0;
    nn_am_detail_g_OverlayAppletProxy = v28;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd1c0);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd280);
  if (SdkData_efd284 != 0) {
    if (SdkData_efd288 == 0) {
      SdkData_efd288 = 0;
      SdkData_efd290 = 0;
    }
    ++SdkData_efd284;
  }
  else {
    v29 = 0;
    for (i = SdkData_efeea0;; i = SdkData_efeea0) {
      v30 = &v29;
      v14 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)i + 104LL))(i, &v30);
      if ((v14 & 0x3FFFFF) != 0x19280) {
        break;
      }
      nn_os_SleepThread_plt(10000000);
    }
    v15 = v14;
    if (v14 != 0) {
      if (v29 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd280);
      LODWORD(v30) = v15;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v30);
    }
    SdkData_efd284 = 1;
    SdkData_efd288 = 0;
    SdkData_efd290 = 0;
    nn_am_detail_g_SystemProcessCommonFunctions = v29;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd280);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd2a0);
  if (SdkData_efd2a4 != 0) {
    if (SdkData_efd2a8 == 0) {
      SdkData_efd2a8 = 0;
      SdkData_efd2b0 = 0;
    }
    ++SdkData_efd2a4;
  }
  else {
    v29 = 0;
    for (j = SdkData_efeea0;; j = SdkData_efeea0) {
      v30 = &v29;
      v17 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)j + 112LL))(j, &v30);
      if ((v17 & 0x3FFFFF) != 0x19280) {
        break;
      }
      nn_os_SleepThread_plt(10000000);
    }
    v18 = v17;
    if (v17 != 0) {
      if (v29 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd2a0);
      LODWORD(v30) = v18;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v30);
    }
    SdkData_efd2a4 = 1;
    SdkData_efd2a8 = 0;
    SdkData_efd2b0 = 0;
    nn_am_detail_g_AppletAlternativeFunctions = v29;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd2a0);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd0a0);
  if (SdkData_efd0a4 != 0) {
    if (SdkData_efd0a8 == 0) {
      SdkData_efd0a8 = 0;
      SdkData_efd0b0 = 0;
    }
    ++SdkData_efd0a4;
  }
  else {
    v29 = 0;
    v30 = &v29;
    v19 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_OverlayAppletProxy + 104LL))(
        nn_am_detail_g_OverlayAppletProxy, &v30);
    if (v19 != 0) {
      v25 = v19;
      if (v29 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd0a0);
      LODWORD(v30) = v25;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v30);
    }
    SdkData_efd0a4 = 1;
    SdkData_efd0a8 = 0;
    SdkData_efd0b0 = 0;
    nn_am_detail_g_AppletCommonFunctions = v29;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd0a0);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd1e0);
  if (SdkData_efd1e4 != 0) {
    if (SdkData_efd1e8 == 0) {
      SdkData_efd1e8 = 0;
      SdkData_efd1f0 = 0;
    }
    ++SdkData_efd1e4;
  }
  else {
    v29 = 0;
    v30 = &v29;
    v20 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_OverlayAppletProxy + 96LL))(
        nn_am_detail_g_OverlayAppletProxy, &v30);
    if (v20 != 0) {
      v26 = v20;
      if (v29 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd1e0);
      LODWORD(v30) = v26;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v30);
    }
    SdkData_efd1e4 = 1;
    SdkData_efd1e8 = 0;
    SdkData_efd1f0 = 0;
    nn_am_detail_g_OverlayFunctions = v29;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd1e0);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd100);
  if (SdkData_efd104 != 0) {
    if (SdkData_efd108 == 0) {
      SdkData_efd108 = 0;
      SdkData_efd110 = 0;
    }
    ++SdkData_efd104;
  }
  else {
    v29 = 0;
    v30 = &v29;
    v21 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_OverlayAppletProxy + 112LL))(
        nn_am_detail_g_OverlayAppletProxy, &v30);
    if (v21 != 0) {
      v27 = v21;
      if (v29 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd100);
      LODWORD(v30) = v27;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v30);
    }
    SdkData_efd104 = 1;
    SdkData_efd108 = 0;
    SdkData_efd110 = 0;
    nn_am_detail_g_GlobalStateController = v29;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd100);
  v22 = nn_am_detail_g_OverlayAppletProxy;
  if (nn_am_detail_g_OverlayAppletProxy != 0) {
    (**(void (***)(__int64))nn_am_detail_g_OverlayAppletProxy)(
        nn_am_detail_g_OverlayAppletProxy);
    (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
  }
  return nn_am_1c6580(v22);
}

__int64 nn_am_1c7d7c()
{
  am_interface_accessors_1c6b2c();
  am_interface_accessors_1c6b88(&nn_am_detail_g_GlobalStateController);
  am_interface_accessors_1c6b88(&nn_am_detail_g_OverlayFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletAlternativeFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_SystemProcessCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_OverlayAppletProxy);
  return am_interface_accessors_1c6b88(&SdkData_efeea0);
}

__int64 nn_am_1c7de0(void* this_)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 i;
  int v14;
  int v15;
  __int64 j;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;

  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efeea8);
  if (SdkData_efeeac != 0) {
    if (SdkData_efeeb0 == 0) {
      SdkData_efeeb0 = (__int64)am_service_proxy_1d6444;
      SdkData_efeeb8 = (__int64)SdkData_efd3a0;
    }
    ++SdkData_efeeac;
  }
  else {
    SdkRoutine_1c96e4((__int64)SdkData_efd3a0);
    {
      v1 = SdkData_efd3a0[0];
      __asm__ volatile("" ::"r"(v1));
    }
    v2 = SdkRoutine_1c9760((__int64)&SdkData_efed50, (__int64)&SdkData_efed50);
    nn_sf_hipc_InitializeHipcServiceResolution_plt(v2);
    LODWORD(v31) = 0;
    v3 = nn_sf_hipc_ConnectToHipcService_plt((__int64)&v31, "appletAE");
    if ((_DWORD)v3 != 0 ||
        (v4 = v31, LODWORD(v32) = 0,
         (_DWORD)(v3 =
                      nn_sf_hipc_client_HipcClientSessionManager_ConvertToDomainImpl_plt(
                          (__int64)&SdkData_efed50, (__int64)&v32, v31)) !=
             0)) {
      v25 = v3;
      nn_sf_hipc_FinalizeHipcServiceResolution_plt(v3);
      SdkData_efed50 = SdkData_e86d80 + 16;
      SdkRoutine_1d3d5c((__int64)&SdkData_efed50);
      SdkRoutine_1d3d98(SdkData_efd3a0);
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efeea8);
      LODWORD(v32) = v25;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v32);
    }
    v5 = v1 + 144;
    v6 = (int)v32;
    v7 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(v1 + 144) +
                                                     16LL))(v1 + 144, 56, 8);
    v8 = v7;
    if (v7 != 0) {
      *(_QWORD*)(v7 + 16) = &SdkData_efed50;
      *(_DWORD*)(v7 + 24) = v6;
      *(_DWORD*)(v7 + 28) = 0;
      *(_QWORD*)(v7 + 48) = v5;
      *(_DWORD*)(v7 + 40) = 1;
      *(_BYTE*)(v7 + 8) = 1;
      *(_QWORD*)v7 = nn_sf_hipc_client_AddDomainProxyReference_ptr_e59f28;
      *(_QWORD*)(v7 + 32) = &nn_sf_hipc_client_GetDomainProxyOwner_ptr_e59fc8;
    }
    v9 = SdkRoutine_1c9854((__int64)&SdkData_efed60, v4);
    ++SdkData_efed8c;
    nn_sf_hipc_FinalizeHipcServiceResolution_plt(v9);
    SdkData_efeeac = 1;
    SdkData_efeea0 = v8;
    SdkData_efeeb0 = (__int64)am_service_proxy_1d6444;
    SdkData_efeeb8 = (__int64)SdkData_efd3a0;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efeea8);
  v10 = nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd200);
  if (SdkData_efd204 != 0) {
    if (SdkData_efd208 == 0) {
      SdkData_efd208 = 0;
      SdkData_efd210 = 0;
    }
    ++SdkData_efd204;
  }
  else {
    v30 = 0;
    while (1) {
      v11 = SdkData_efeea0;
      LODWORD(v31) = nn_os_GetCurrentProcessHandle_plt(v10);
      BYTE4(v31) = 0;
      v32 = &v30;
      v12 = (*(__int64 (**)(__int64, __int64**, _QWORD, __int64*))(
          *(_QWORD*)v11 + 72LL))(v11, &v32, 0, &v31);
      if (BYTE4(v31) == 1) {
        nn_os_CloseNativeHandle_plt(v31);
      }
      if ((v12 & 0x3FFFFF) != 0x19280) {
        break;
      }
      v10 = nn_os_SleepThread_plt(10000000);
    }
    if (v12 != 0) {
      if (v30 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd200);
      LODWORD(v32) = v12;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v32);
    }
    SdkData_efd204 = 1;
    SdkData_efd208 = 0;
    SdkData_efd210 = 0;
    nn_am_detail_g_CMenuProxy = v30;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd200);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd280);
  if (SdkData_efd284 != 0) {
    if (SdkData_efd288 == 0) {
      SdkData_efd288 = 0;
      SdkData_efd290 = 0;
    }
    ++SdkData_efd284;
  }
  else {
    v31 = 0;
    for (i = SdkData_efeea0;; i = SdkData_efeea0) {
      v32 = &v31;
      v14 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)i + 104LL))(i, &v32);
      if ((v14 & 0x3FFFFF) != 0x19280) {
        break;
      }
      nn_os_SleepThread_plt(10000000);
    }
    v15 = v14;
    if (v14 != 0) {
      if (v31 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd280);
      LODWORD(v32) = v15;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v32);
    }
    SdkData_efd284 = 1;
    SdkData_efd288 = 0;
    SdkData_efd290 = 0;
    nn_am_detail_g_SystemProcessCommonFunctions = v31;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd280);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd2a0);
  if (SdkData_efd2a4 != 0) {
    if (SdkData_efd2a8 == 0) {
      SdkData_efd2a8 = 0;
      SdkData_efd2b0 = 0;
    }
    ++SdkData_efd2a4;
  }
  else {
    v31 = 0;
    for (j = SdkData_efeea0;; j = SdkData_efeea0) {
      v32 = &v31;
      v17 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)j + 112LL))(j, &v32);
      if ((v17 & 0x3FFFFF) != 0x19280) {
        break;
      }
      nn_os_SleepThread_plt(10000000);
    }
    v18 = v17;
    if (v17 != 0) {
      if (v31 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd2a0);
      LODWORD(v32) = v18;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v32);
    }
    SdkData_efd2a4 = 1;
    SdkData_efd2a8 = 0;
    SdkData_efd2b0 = 0;
    nn_am_detail_g_AppletAlternativeFunctions = v31;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd2a0);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd0a0);
  if (SdkData_efd0a4 != 0) {
    if (SdkData_efd0a8 == 0) {
      SdkData_efd0a8 = 0;
      SdkData_efd0b0 = 0;
    }
    ++SdkData_efd0a4;
  }
  else {
    v31 = 0;
    v32 = &v31;
    v19 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_CMenuProxy + 104LL))(nn_am_detail_g_CMenuProxy,
                                                      &v32);
    if (v19 != 0) {
      v26 = v19;
      if (v31 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd0a0);
      LODWORD(v32) = v26;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v32);
    }
    SdkData_efd0a4 = 1;
    SdkData_efd0a8 = 0;
    SdkData_efd0b0 = 0;
    nn_am_detail_g_AppletCommonFunctions = v31;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd0a0);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd1e0);
  if (SdkData_efd1e4 != 0) {
    if (SdkData_efd1e8 == 0) {
      SdkData_efd1e8 = 0;
      SdkData_efd1f0 = 0;
    }
    ++SdkData_efd1e4;
  }
  else {
    v31 = 0;
    v32 = &v31;
    v20 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_CMenuProxy + 96LL))(nn_am_detail_g_CMenuProxy,
                                                     &v32);
    if (v20 != 0) {
      v27 = v20;
      if (v31 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd1e0);
      LODWORD(v32) = v27;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v32);
    }
    SdkData_efd1e4 = 1;
    SdkData_efd1e8 = 0;
    SdkData_efd1f0 = 0;
    nn_am_detail_g_OverlayFunctions = v31;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd1e0);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd220);
  if (SdkData_efd224 != 0) {
    if (SdkData_efd228 == 0) {
      SdkData_efd228 = 0;
      SdkData_efd230 = 0;
    }
    ++SdkData_efd224;
  }
  else {
    v31 = 0;
    v32 = &v31;
    v21 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_CMenuProxy + 120LL))(nn_am_detail_g_CMenuProxy,
                                                      &v32);
    if (v21 != 0) {
      v28 = v21;
      if (v31 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd220);
      LODWORD(v32) = v28;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v32);
    }
    SdkData_efd224 = 1;
    SdkData_efd228 = 0;
    SdkData_efd230 = 0;
    nn_am_detail_g_CMenuFunctions = v31;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd220);
  nn_os_SdkMutexType_Lock_plt((__int64)&SdkData_efd100);
  if (SdkData_efd104 != 0) {
    if (SdkData_efd108 == 0) {
      SdkData_efd108 = 0;
      SdkData_efd110 = 0;
    }
    ++SdkData_efd104;
  }
  else {
    v31 = 0;
    v32 = &v31;
    v22 = (*(__int64 (**)(__int64, __int64**))(
        *(_QWORD*)nn_am_detail_g_CMenuProxy + 112LL))(nn_am_detail_g_CMenuProxy,
                                                      &v32);
    if (v22 != 0) {
      v29 = v22;
      if (v31 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
      }
      nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd100);
      LODWORD(v32) = v29;
      nn_diag_detail_AbortImpl_plt_858db0((__int64)&v32);
    }
    SdkData_efd104 = 1;
    SdkData_efd108 = 0;
    SdkData_efd110 = 0;
    nn_am_detail_g_GlobalStateController = v31;
  }
  nn_os_SdkMutexType_Unlock_plt((__int64)&SdkData_efd100);
  v23 = nn_am_detail_g_CMenuProxy;
  if (nn_am_detail_g_CMenuProxy != 0) {
    (**(void (***)(__int64))nn_am_detail_g_CMenuProxy)(
        nn_am_detail_g_CMenuProxy);
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
  }
  return nn_am_1c6580(v23);
}

__int64 nn_am_1c8580()
{
  am_interface_accessors_1c6b2c();
  am_interface_accessors_1c6b88(&nn_am_detail_g_GlobalStateController);
  am_interface_accessors_1c6b88(&nn_am_detail_g_CMenuFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_OverlayFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_AppletAlternativeFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_SystemProcessCommonFunctions);
  am_interface_accessors_1c6b88(&nn_am_detail_g_CMenuProxy);
  return am_interface_accessors_1c6b88(&SdkData_efeea0);
}

#pragma GCC visibility pop
