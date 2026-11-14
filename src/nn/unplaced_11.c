#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 NvRmSyncClose_plt(_QWORD);
__int64 NvRmSyncWait_plt(_QWORD, _QWORD);
__int64 SdkRoutine_65cc80(_QWORD);
__int64 SdkRoutine_65cce0(_QWORD);
__int64 SdkRoutine_65ccf0();
__int64 SdkRoutine_65cd00();
__int64 SdkRoutine_65cd10(void);
__int64 SdkRoutine_65cd20();
__int64 SdkRoutine_65cd50();
__int64 SdkRoutine_65cd80(_QWORD);
__int64 SdkRoutine_65cd90(_QWORD, _QWORD);
__int64 SdkRoutine_65cda0();
__int64 SdkRoutine_65cdf0();
__int64 SdkRoutine_664dc0(__int64);
__int64 SdkRoutine_66eca0(__int64);
__int64 nn_65cc90();
__int64 nn_65cd30();
__int64 nn_65cdb0();
__int64 nn_66eba0(__int64 result, unsigned int);
__int64 nn_audio_CreateAudioRendererManager_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
extern _UNKNOWN* SdkData_e89bd8;
extern __int64 (*SdkData_e89d58)();
extern __int64 (*SdkData_e89d68[3])();
extern __int64 (*SdkData_e89d70[2])();
extern __int64 (*SdkData_e89d78)();
extern __int64 (*SdkData_e89d88[6])();
extern __int64 (*SdkData_e89d90[5])();
extern __int64 (*SdkData_e89d98[4])();
extern __int64 (*SdkData_e89da0[3])();
extern __int64 (*SdkData_e89da8[2])();
extern __int64 (*SdkData_e89db0)();
extern __int64 (*nn_65c5e0_ptr)(int, int, int, int, int, int, int, int, char);
extern __int64 (*nn_65ca10_ptr)(int, int, int, int, int, int, int, int, char);
__int64 nn_22f7a0(unsigned int* a1);
void nn_65cb70();
__int64 nn_6650a0(__int64 a1, __int64 a2);

__int64 nn_22f7a0(unsigned int* a1)
{
  unsigned int v1;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  _QWORD v10[2];
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  struct {
    __int64 v18;
    char gap64_[24];
    __int64 v19;
  } v18_;

  v1 = a1[11];
  v18_.v19 = 0;
  nn_audio_CreateAudioRendererManager_plt(v1 == 1);
  v3 = *a1;
  v4 = a1[1];
  v14 = 0;
  v15 = 0;
  v18_.v18 = 0;
  v10[0] = __PAIR64__(v4, v3);
  v10[1] = *((_QWORD*)a1 + 1);
  v11 = a1[4];
  v12 = *(_QWORD*)(a1 + 5);
  v13 = a1[7];
  LOBYTE(v14) = *((_BYTE*)a1 + 32);
  v5 = a1[10];
  HIDWORD(v14) = a1[9];
  LODWORD(v15) = v5;
  v6 = a1[12];
  BYTE2(v14) = a1[11];
  v7 = a1[13];
  BYTE3(v14) = v6;
  v16 = v7;
  v17 = (*(__int64 (**)(__int64, __int64*, _QWORD*))(
      *(_QWORD*)v18_.v19 + 40LL))(v18_.v19, &v18_.v18, v10);
  if (v17 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v17);
  }
  v8 = v18_.v18;
  if (v18_.v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18_.v19 + 8LL))(v18_.v19);
  }
  return v8 + 4096;
}

void nn_65cb70()
{
  void* v0;
  __int64 (*v1)();
  __int64 (*v2)();
  __int64 (*v3)();
  __int64 (*v4)(int, int, int, int, int, int, int, int, char);
  __int64 (*v5)();
  __int64 (*v6)();
  __int64 (*v7)();
  __int64 (*v8)();
  __int64 (*v9)();

  v0 = SdkData_e89bd8;
  *(_QWORD*)SdkData_e89bd8 = SdkRoutine_65cc80;
  *((_QWORD*)v0 + 1) = nn_65cc90;
  *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 4) =
      (__int64)SdkData_e89d58;
  *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 12) =
      (__int64)SdkRoutine_65cce0;
  *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0] = SdkRoutine_65ccf0;
  *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0 + 8] = SdkRoutine_65cd00;
  *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0) = (__int64)nn_65c5e0_ptr;
  *(__int64*)((char*)((__int64*)0x30LL) + (_QWORD)v0 + 8) =
      (__int64)SdkRoutine_65cd10;
  v1 = SdkData_e89d68[0];
  *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v0) = SdkRoutine_65cd20;
  *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v0 + 8) = nn_65cd30;
  v2 = SdkData_e89d70[0];
  v3 = SdkData_e89d78;
  *(__int64*)((char*)((__int64*)0x50LL) + (_QWORD)v0) = (__int64)v1;
  *(__int64*)((char*)((__int64*)0x50LL) + (_QWORD)v0 + 8) = (__int64)v2;
  *(_QWORD*)((char*)((char*)0x60LL) + (_QWORD)v0) = SdkRoutine_65cd50;
  *(_QWORD*)((char*)((char*)0x60LL) + (_QWORD)v0 + 8) = SdkRoutine_65cd90;
  v4 = nn_65ca10_ptr;
  *(_QWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)v0) = SdkRoutine_65cd80;
  *(_QWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)v0 + 8) = SdkRoutine_65cda0;
  v5 = SdkData_e89d88[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0x9CLL) + (_QWORD)v0 + 4) = v3;
  *(_QWORD*)((char*)((_UNKNOWN*)0x9CLL) + (_QWORD)v0 + 12) = v4;
  v6 = SdkData_e89d90[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0xB0LL) + (_QWORD)v0) = v5;
  *(_QWORD*)((char*)((_UNKNOWN*)0xB0LL) + (_QWORD)v0 + 8) = v6;
  v7 = SdkData_e89d98[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v0) = nn_65cdb0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v0 + 8) = SdkRoutine_65cdf0;
  v8 = SdkData_e89da0[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0xC0LL) + (_QWORD)v0) = v7;
  *(_QWORD*)((char*)((_UNKNOWN*)0xC0LL) + (_QWORD)v0 + 8) = v8;
  v9 = SdkData_e89db0;
  *(__int64 (**)(void))((char*)((_UNKNOWN*)0xD0LL) + (_QWORD)v0) =
      SdkData_e89da8[0];
  *(_QWORD*)((char*)((_UNKNOWN*)0xD0LL) + (_QWORD)v0 + 8) = v9;
}

__int64 nn_6650a0(__int64 a1, __int64 a2)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  void* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;

  result = a1 + 40;
  v3 = *(_DWORD*)(result + 184);
  if (v3 != 0) {
    v4 = *(_QWORD*)(result + 208);
    v5 = result;
    if ((*(_BYTE*)(v4 + 24) & 1) == 0) {
      if (*(_BYTE*)(result + 129) == 1) {
        v6 = *(_DWORD*)(result + 188);
        if (v6 != 0) {
          v7 = *(_QWORD*)(*(_QWORD*)(v4 + 16) + 7232LL);
          if (*(_DWORD*)v7 == 0 && (*(_BYTE*)(v7 + 16) & 1) != 0) {
            v8 = 0;
          }
          else {
            v8 = *(_QWORD*)(v7 + 48);
          }
          v9 = v3 + 1;
          v10 = v8 + 16LL * *(int*)(v4 + 320);
          v11 = SdkData_e89bd8;
          v12 = *(_DWORD*)(v10 + 4096) - v6 + *(_DWORD*)(result + 40);
          v13 = (*(__int64 (**)(__int64, __int64))(
                    (char*)((__int64*)0x38LL) + (_QWORD)SdkData_e89bd8))(result,
                                                                         a2) +
                100000;
          do {
            if (v12 >= v9) {
              break;
            }
            v14 = (*(__int64 (**)(__int64))((char*)((_UNKNOWN*)0x90LL) +
                                            (_QWORD)v11))(3);
            v15 = *(_DWORD*)(v10 + 4096);
            v16 = *(_DWORD*)(v5 + 40);
            v17 = (*(__int64 (**)(__int64))((char*)((__int64*)0x38LL) +
                                            (_QWORD)v11))(v14);
            if (v17 > v13) {
              v13 = v17 + 100000;
              SdkRoutine_664dc0(*(_QWORD*)(*(_QWORD*)(v5 + 208) + 16LL));
            }
            v12 = v15 - v6 + v16;
          } while (*(_BYTE*)(*(_QWORD*)(v5 + 208) + 24LL) != 1);
        }
        SdkRoutine_66eca0(v5);
        v4 = *(_QWORD*)(v5 + 208);
      }
      v18 = *(_QWORD*)(v4 + 16);
      nn_os_LockMutex_plt(v18 + 2344);
      v19 = *(_QWORD*)(*(_QWORD*)(v5 + 208) + 16LL);
      v20 = *(_QWORD*)(v19 + 2408);
      if (v20 != 0) {
        NvRmSyncWait_plt(*(_QWORD*)(v19 + 2408), 0xFFFFFFFFLL);
        NvRmSyncClose_plt(v20);
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 208) + 16LL) + 2408LL) = 0;
      }
      nn_66eba0(v5, *(_DWORD*)(v5 + 184));
      result = nn_os_UnlockMutex_plt(v18 + 2344);
      v3 = *(_DWORD*)(v5 + 184);
    }
    v21 = *(_DWORD*)(v5 + 188) + v3;
    *(_DWORD*)(v5 + 184) = 0;
    *(_DWORD*)(v5 + 188) = v21;
  }
  return result;
}

#pragma GCC visibility pop
