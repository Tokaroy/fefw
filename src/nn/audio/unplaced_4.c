#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_1f4f90(PSEUDO_X8, __int64);
void nn_detail_UnexpectedDefaultImpl_plt_857150();
__int64 nn_audio_1f4a00(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nn_audio_1f5f70(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nn_audio_223300(__int64 a1, __int64 a2, _DWORD* a3);
__int64 nn_audio_225190(__int64 a1, __int64 a2, _DWORD* a3);

__int64 nn_audio_1f4a00(__int64 a1, __int64 a2, _DWORD* a3)
{
  unsigned int v3;
  int v4;

  {
    v3 = a3[1] - 1;
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 > 7 || ((0xA3u >> v3) & 1) == 0) {
    goto LABEL_13;
  }
  {
    v4 = a3[2];
    __asm__ volatile("" ::"r"(v4));
  }
  if (v4 <= 31999) {
    if (v4 == 8000 || v4 == 16000 || v4 == 22000) {
      goto LABEL_11;
    }
  LABEL_13:
    nn_detail_UnexpectedDefaultImpl_plt_857150();
  }
  if (v4 != 32000 && v4 != 48000 && v4 != 44100) {
    goto LABEL_13;
  }
LABEL_11:
  if ((unsigned int)(*(int*)a3 - 2) >= 4) {
    goto LABEL_13;
  }
  return X8CALL_X0(
      __int64,
      SdkRoutine_1f4f90((void*)(a1), (__int64)"InputInjector-%d=>%s%s%s=>%s"));
}

__int64 nn_audio_1f5f70(__int64 a1, __int64 a2, _DWORD* a3)
{
  unsigned int v3;
  int v4;

  {
    v3 = a3[1] - 1;
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 > 7 || ((0xA3u >> v3) & 1) == 0) {
    goto LABEL_13;
  }
  {
    v4 = a3[2];
    __asm__ volatile("" ::"r"(v4));
  }
  if (v4 <= 31999) {
    if (v4 == 8000 || v4 == 16000 || v4 == 22000) {
      goto LABEL_11;
    }
  LABEL_13:
    nn_detail_UnexpectedDefaultImpl_plt_857150();
  }
  if (v4 != 32000 && v4 != 48000 && v4 != 44100) {
    goto LABEL_13;
  }
LABEL_11:
  if ((unsigned int)(*(int*)a3 - 2) >= 4) {
    goto LABEL_13;
  }
  return X8CALL_X0(
      __int64,
      SdkRoutine_1f4f90((void*)(a1), (__int64)"InputStream-%d<=%s%s%s<=%s"));
}

__int64 nn_audio_223300(__int64 a1, __int64 a2, _DWORD* a3)
{
  unsigned int v3;
  int v4;

  {
    v3 = a3[1] - 1;
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 > 7 || ((0xA3u >> v3) & 1) == 0) {
    goto LABEL_13;
  }
  {
    v4 = a3[2];
    __asm__ volatile("" ::"r"(v4));
  }
  if (v4 <= 31999) {
    if (v4 == 8000 || v4 == 16000 || v4 == 22000) {
      goto LABEL_11;
    }
  LABEL_13:
    nn_detail_UnexpectedDefaultImpl_plt_857150();
  }
  if (v4 != 32000 && v4 != 48000 && v4 != 44100) {
    goto LABEL_13;
  }
LABEL_11:
  if ((unsigned int)(*(int*)a3 - 2) >= 4) {
    goto LABEL_13;
  }
  return X8CALL_X0(
      __int64,
      SdkRoutine_1f4f90((void*)(a1), (__int64)"OutputRecorder-%d<=%s%s%s<=%s"));
}

__int64 nn_audio_225190(__int64 a1, __int64 a2, _DWORD* a3)
{
  unsigned int v3;
  int v4;

  {
    v3 = a3[1] - 1;
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 > 7 || ((0xA3u >> v3) & 1) == 0) {
    goto LABEL_13;
  }
  {
    v4 = a3[2];
    __asm__ volatile("" ::"r"(v4));
  }
  if (v4 <= 31999) {
    if (v4 == 8000 || v4 == 16000 || v4 == 22000) {
      goto LABEL_11;
    }
  LABEL_13:
    nn_detail_UnexpectedDefaultImpl_plt_857150();
  }
  if (v4 != 32000 && v4 != 48000 && v4 != 44100) {
    goto LABEL_13;
  }
LABEL_11:
  if ((unsigned int)(*(int*)a3 - 2) >= 4) {
    goto LABEL_13;
  }
  return X8CALL_X0(
      __int64,
      SdkRoutine_1f4f90((void*)(a1), (__int64)"OutputStream-%d=>%s%s%s=>%s"));
}

#pragma GCC visibility pop
