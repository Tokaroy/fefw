#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nandroid_ABuffer_meta_plt(PSEUDO_X8);

__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);

__int64 SdkRoutine_86d6a0(_QWORD, _QWORD);

__int64 __cxa_guard_acquire_plt(_QWORD);

__int64 __cxa_guard_release_plt(_QWORD);

__int64 nandroid_AMessage_findInt64_plt(_QWORD, _QWORD, _QWORD);

__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);

__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);

__int64 nandroid_sp_report_race_plt(_QWORD);

__int64 nn_movie_detail_AllocateMemory(__int64, _QWORD**);

__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);

__int64 nn_movie_detail_HlsMediaExtractor_HlsSample_HlsSample_plt(_QWORD);

__int64 nn_movie_detail_MediaExtractorImpl_DoSelectTrack_plt(_QWORD, _QWORD);

__int64 nn_movie_detail_MediaExtractorImpl_DoSetMediaBuffer_plt(_QWORD, _QWORD);

__int64 nn_movie_detail_MediaExtractorImpl_DoSetMediaUri_plt(_QWORD, _QWORD);

__int64 nn_movie_detail_MediaExtractorImpl_DoSetUpMediaSourceMode_plt(_QWORD);

__int64
    nn_movie_detail_MediaExtractorImpl_TrackInfo_Destroy_TrackInfo_plt(_QWORD);

__int64 nn_movie_detail_MediaState_SetState_plt(_QWORD, _QWORD);

__int64 nn_os_GetTlsValue_plt(_QWORD);

__int64 nn_os_ReceiveMessageQueue_plt(_QWORD, _QWORD);

__int64 nn_os_SignalEvent_plt(_QWORD);

__int64 nn_os_SignalLightEvent_plt(void);

__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);

extern __int64 SdkData_e88330;

extern __int64 SdkData_e88540;

extern void (*SdkData_e88338[493])();

__int64 nn_movie_detail_4c8320(void* this_, void* a2);

__int64 nn_movie_detail_4d32e0(__int64* a1);

__int64 nn_movie_detail_4d4780(__int64 a1);

__int64 nn_movie_detail_4d9ae0(_QWORD* a1, __int64* a2, int a3, char a4,
                               char a5);

__int64 nn_movie_detail_4d32e0(__int64* a1)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v5)();
  _QWORD* v6;
  int v8;

  v2 = *a1;
  if (v2 != 0) {
    v3 = (_QWORD*)a1[3];
    a1[1] = v2;
    nn_movie_detail_FreeMemory(v2, v3);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v5 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v8 = __cxa_guard_acquire_plt(SdkData_e88330);
    v5 = SdkData_e88338[0];
    if (v8 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v5) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v5 = SdkData_e88338[0];
    }
  }
  v6 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v5);
  return nn_movie_detail_FreeMemory((__int64)a1, v6);
}

__int64 nn_movie_detail_4d4780(__int64 a1)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v3)();
  _QWORD** v4;
  int v6;

  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v3 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v6 = __cxa_guard_acquire_plt(SdkData_e88330);
    v3 = SdkData_e88338[0];
    if (v6 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v3) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v3 = SdkData_e88338[0];
    }
  }
  v4 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v3);
  return SdkRoutine_4c3860(16, a1, v4);
}

__int64 nn_movie_detail_4d9ae0(_QWORD* a1, __int64* a2, int a3, char a4,
                               char a5)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v11)();
  _QWORD** v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;

  *a1 = 0;
  a1[1] = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v11 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v11 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
  v13 = nn_movie_detail_AllocateMemory(64, v12);
  v14 = SdkData_e88540;
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 24) = v12;
  *(_QWORD*)v13 = v14 + 16;
  *(_QWORD*)(v13 + 8) = 0;
  result = nn_movie_detail_HlsMediaExtractor_HlsSample_HlsSample_plt(v13 + 32);
  *a1 = v13 + 32;
  a1[1] = v13;
  *(_DWORD*)(v13 + 32) = a3;
  if ((a4 & 1) != 0) {
    v18 = *(_QWORD*)(v13 + 48);
    v17 = v13 + 48;
    v16 = v18;
    *(_DWORD*)(v17 + 8) = 2;
    *(_QWORD*)(v17 - 8) = 0x7FFFFFFFFFFFFFFFLL;
    if (v18 != 0) {
      result = nandroid_RefBase_decStrong_plt(v16, v17);
    }
    if (v16 != *(_QWORD*)v17) {
      result = nandroid_sp_report_race_plt(result);
    }
    *(_QWORD*)v17 = 0;
    return result;
  }
  result = *a2;
  if (*a2 != 0) {
    nandroid_ABuffer_meta_plt((void*)(&v22));
    nandroid_AMessage_findInt64_plt(v22, "timeUs", v13 + 40);
    result = v22;
    if (v22 != 0) {
      result = nandroid_RefBase_decStrong_plt(v22, &v22);
    }
    v19 = *a2;
    v20 = (__int64*)(v13 + 48);
    v21 = *(_QWORD*)(v13 + 48);
    if (v19 != 0) {
      result = nandroid_RefBase_incStrong_plt(v19, v13 + 48);
    }
    if (v21 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v20 = (__int64*)(v13 + 48);
    v21 = *(_QWORD*)(v13 + 48);
    v19 = 0;
    if (v21 == 0) {
      goto LABEL_15;
    }
  }
  result = nandroid_RefBase_decStrong_plt(v21, v20);
LABEL_15:
  if (v21 != *v20) {
    result = nandroid_sp_report_race_plt(result);
  }
  *v20 = v19;
  if ((a5 & 1) != 0) {
    *(_DWORD*)(v13 + 56) = 0;
  }
  return result;
}

#pragma GCC visibility pop
