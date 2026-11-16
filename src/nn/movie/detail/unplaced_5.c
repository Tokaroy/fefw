#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_RefBase_decStrong_plt(__int64, __int64);
__int64 nn_diag_detail_AbortImpl_plt_858db0(__int64);
__int64 nn_movie_detail_BaseMediaExtractor_Finalize_plt(void);
__int64 nn_movie_detail_MediaState_Destroy_MediaState_plt_86d340(__int64);
__int64 nn_os_FinalizeMutex_plt(__int64);
extern __int64 SdkData_e88418;
void nn_movie_detail_4cdc70(void* this_);

void nn_movie_detail_4cdc70(void* this_)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  int v6;

  v2 = SdkData_e88418 + 304;
  *(_QWORD*)this_ = SdkData_e88418 + 16;
  *((_QWORD*)this_ + 1) = v2;
  v6 = nn_movie_detail_BaseMediaExtractor_Finalize_plt();
  if (v6 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0((__int64)&v6);
  }
  v3 = *((_QWORD**)this_ + 182);
  if (v3 != nullptr) {
    nandroid_RefBase_decStrong_plt((__int64)v3 + *(_QWORD*)(*v3 - 24LL),
                                   (__int64)this_ + 1456);
  }
  v4 = *((_QWORD**)this_ + 181);
  if (v4 != nullptr) {
    nandroid_RefBase_decStrong_plt((__int64)v4 + *(_QWORD*)(*v4 - 24LL),
                                   (__int64)this_ + 1448);
  }
  nn_os_FinalizeMutex_plt((__int64)this_ + 1400);
  v5 = *((_QWORD*)this_ + 173);
  *((_QWORD*)this_ + 173) = 0;
  if (v5 != 0) {
    (*((void (**)(__int64))this_ + 174))(v5);
  }
  nn_movie_detail_MediaState_Destroy_MediaState_plt_86d340((__int64)this_ + 64);
}

#pragma GCC visibility pop
