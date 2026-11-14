#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_632da0(PSEUDO_X8, __int64,
                                                   unsigned int);
__int64 GameRoutine_17d4db0(__int64, __int64);
__int64 GameRoutine_17d4f20(__int64, _QWORD*);
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 GameRoutine_632cd0(__int64, __int64);
__int64 fw_compression_GetFrameContentSize(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_templates_17d57c0(__int64, __int64**);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 nn_os_SignalTimerEvent(__int64);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_os_UnlockMutex(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_9b3b00(__int64*);
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 fs_633ae0(__int64 a1);

__int64 fs_633ae0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  __int64* v13;
  __int64* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  _BYTE* v30;
  __int64 v31;
  _QWORD* v32;
  _BYTE* v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  struct {
    __int64* v56;
    __int64* v57;
  } v56_;
  __int64 v58;
  _BYTE v59[32];
  _BYTE* v60;
  __int64 v61;
  struct {
    _QWORD v62[2];
    __int16 v63;
  } v62_;

  result = GameRoutine_17d4f20(a1 + 3536, &v61);
  v3 = v61;
  if (v61 != 0) {
    v4 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v8 = *(_QWORD*)v3;
      nn_os_AcquireReadLock(*(_QWORD*)v3 + 696LL);
      v9 = *(_DWORD*)(v8 + 656);
      nn_os_ReleaseReadLock(v8 + 696);
      if ((v9 & 0x10) != 0) {
        GameRoutine_632cd0(a1, v8);
        v5 = *v4;
        v6 = v3;
        goto LABEL_4;
      }
      GameRoutine_632da0((void*)(&v56_.v56), v8, *(_DWORD*)(v3 + 8));
      if (*(_QWORD*)(*v4 + 200) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v10, v3);
      nn_os_AcquireReadLock(v8 + 696);
      v11 = *(_DWORD*)(v8 + 656);
      nn_os_ReleaseReadLock(v8 + 696);
      if ((v11 & 8) != 0 && (v56_.v56 == v56_.v57 || v56_.v56[8] == 0)) {
        goto LABEL_69;
      }
      nn_os_AcquireReadLock(v8 + 696);
      v12 = *(_DWORD*)(v8 + 656);
      nn_os_ReleaseReadLock(v8 + 696);
      v13 = v56_.v56;
      v14 = v56_.v57;
      if ((v12 & 0x80) != 0 && v56_.v56 != v56_.v57 && v56_.v56[8] != 0) {
        v15 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 8, 16, 0);
        if ((unsigned __int64)v13[8] >> 4 <= 0x200000) {
          v16 = 0x200000;
        }
        else {
          v16 = (unsigned __int64)v13[8] >> 4;
        }
        v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 224, 16, 0);
        v18 = v56_.v56;
        v19 = v56_.v57;
        v20 = v17;
        *v17 = 0;
        v17[1] = 0;
        v17[2] = 0;
        v17[4] = 0;
        v17[10] = 0;
        v17[16] = 0;
        v17[22] = 0;
        v17[27] = 0;
        v17[12] = 0;
        v17[13] = 0;
        v17[14] = 0;
        if (v18 == v19) {
          v21 = 0;
          v22 = 0;
        }
        else {
          v21 = *v18;
          v22 = v18[8];
        }
        v62_.v63 = 0;
        v62_.v62[0] = 0;
        v62_.v62[1] = 0;
        v41 = (v16 + 0xFFFFF) & 0x1FFFFFFFFFF00000LL;
        if (v22 >= 0x12) {
          v42 = 18;
        }
        else {
          v42 = v22;
        }
        GameRoutine_1a0b950((__int64)v62_.v62, v21, v42);
        v43 = fw_compression_GetFrameContentSize((__int64)v62_.v62, 18);
        v20[14] = v8;
        game_templates_17d57c0((__int64)v20, &v56_.v56);
        v20[12] = v43;
        v20[13] = v41;
        *v15 = v20;
        GameRoutine_17d4db0(a1 + 3640, (__int64)v15);
        nn_os_LockMutex(a1 + 3688);
        v44 = *(_QWORD*)(a1 + 3680);
        nn_os_UnlockMutex(a1 + 3688);
        if (v44 >= 0x200) {
          do {
            nn_os_SleepThread(100000000);
            nn_os_LockMutex(a1 + 3688);
            v45 = *(_QWORD*)(a1 + 3680);
            nn_os_UnlockMutex(a1 + 3688);
          } while (v45 > 0x1FF);
        }
        goto LABEL_69;
      }
      if (v56_.v56 == v56_.v57) {
        v24 = &v58;
        v23 = 0;
      }
      else {
        v23 = v56_.v56[8];
        v24 = v56_.v56;
      }
      *(_QWORD*)(v8 + 576) = v23;
      v25 = *v24;
      *v24 = 0;
      v26 = *(_QWORD*)(v8 + 592);
      *(_QWORD*)(v8 + 592) = v25;
      if (v26 != 0) {
        v27 = *(_QWORD*)(v8 + 640);
        v62_.v62[0] = v26;
        if (v27 == 0) {
          goto LABEL_92;
        }
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v27 + 48LL))(v27, v62_.v62);
      }
      v28 = *(_QWORD**)(v8 + 640);
      v29 = (_QWORD*)(v8 + 608);
      *(_QWORD*)(v8 + 640) = 0;
      v30 = v13 == v14 ? v59 : v13 + 2;
      if (v28 == v29) {
        break;
      }
      if (v28 != nullptr) {
        v31 = 40;
      LABEL_37:
        (*(void (**)(__int64))(*v28 + v31))((__int64)v28);
      }
      v32 = v13 + 6;
      if (v13 == v14) {
        v32 = &v60;
      }
      v33 = (_BYTE*)*v32;
      if (*v32 != 0) {
        if (v33 == v30) {
          *(_QWORD*)(v8 + 640) = v29;
          (*(void (**)(_QWORD, __int64))(*(_QWORD*)*v32 + 24LL))(*v32,
                                                                 v8 + 608);
        }
        else {
          *(_QWORD*)(v8 + 640) = v33;
          *v32 = 0;
        }
      }
      else {
        *(_QWORD*)(v8 + 640) = 0;
      }
      nn_os_AcquireReadLock(v8 + 696);
      v34 = *(_DWORD*)(v8 + 656);
      nn_os_ReleaseReadLock(v8 + 696);
      if ((v34 & 0x10) != 0) {
        goto LABEL_60;
      }
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8) & 1) == 0) {
        if (*(_QWORD*)(v8 + 776) != *(_QWORD*)(v8 + 768)) {
          GameRoutine_17d4db0(a1 + 3944, v8);
          v40 = atomic_load((unsigned __int64*)(a1 + 4248));
          if (v40 == 0) {
            goto LABEL_69;
          }
        LABEL_59:
          nn_os_SignalTimerEvent(a1 + 4184);
          goto LABEL_69;
        }
      LABEL_60:
        GameRoutine_632cd0(a1, v8);
        goto LABEL_69;
      }
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 48LL))(v8) & 1) != 0 &&
          (*(_BYTE*)(a1 + 4745) & 1) == 0) {
        GameRoutine_17d4db0(a1 + 3840, v8);
      }
      else {
        nn_os_LockMutex(a1 + 3792);
        if ((*(_BYTE*)(a1 + 3832) & 1) == 0) {
          v35 = *(_QWORD*)(a1 + 3760);
          v36 = *(_QWORD*)(a1 + 3752);
          v37 = ((v35 - v36) << 6) - 1;
          if (v35 == v36) {
            v37 = 0;
          }
          v38 = *(_QWORD*)(a1 + 3784) + *(_QWORD*)(a1 + 3776);
          if (v37 == v38) {
            GameRoutine_9b3b00((__int64*)(a1 + 3744));
            v36 = *(_QWORD*)(a1 + 3752);
            v38 = *(_QWORD*)(a1 + 3784) + *(_QWORD*)(a1 + 3776);
          }
          *(_QWORD*)(*(_QWORD*)(v36 + 8 * (v38 >> 9)) + 8 * (v38 & 0x1FF)) = v8;
          ++*(_QWORD*)(a1 + 3784);
        }
        nn_os_UnlockMutex(a1 + 3792);
        v39 = atomic_load((unsigned __int64*)(a1 + 4248));
        if (v39 != 0) {
          goto LABEL_59;
        }
      }
    LABEL_69:
      v46 = v58;
      v58 = 0;
      if (v46 != 0) {
        v62_.v62[0] = v46;
        if (v60 == nullptr) {
        LABEL_92:
          GameRoutine_60a310();
        }
        (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v60 + 48LL))(v60, v62_.v62);
      }
      if (v60 == v59) {
        v47 = 32;
        goto LABEL_76;
      }
      if (v60 != nullptr) {
        v47 = 40;
      LABEL_76:
        (*(void (**)(__int64))(*(_QWORD*)v60 + v47))((__int64)v60);
      }
      v48 = v56_.v56;
      if (v56_.v56 == nullptr) {
        goto LABEL_8;
      }
      v49 = v56_.v57;
      if (v56_.v56 == v56_.v57) {
        goto LABEL_90;
      }
      v50 = v56_.v57;
      do {
        v53 = *(v50 - 10);
        v50 -= 10;
        v52 = v53;
        *v50 = 0;
        if (v53 != 0) {
          v62_.v62[0] = v52;
          v54 = *(v49 - 4);
          if (v54 == 0) {
            goto LABEL_92;
          }
          (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v54 + 48LL))(v54, v62_.v62);
        }
        v55 = (__int64*)*(v49 - 4);
        if (v49 - 8 == v55) {
          v51 = 32;
        LABEL_81:
          (*(void (**)(__int64))(*v55 + v51))((__int64)v55);
          goto LABEL_82;
        }
        if (v55 != nullptr) {
          v51 = 40;
          goto LABEL_81;
        }
      LABEL_82:
        v49 = v50;
      } while (v50 != v48);
      v56_.v57 = v48;
      v48 = v56_.v56;
      if (v56_.v56 != nullptr) {
      LABEL_90:
        v5 = *v4;
        v6 = (__int64)v48;
      LABEL_4:
        if (*(_QWORD*)(v5 + 200) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(v5 + v7, v6);
      }
    LABEL_8:
      result = GameRoutine_17d4f20(a1 + 3536, &v61);
      v3 = v61;
      if (v61 == 0) {
        return result;
      }
    }
    v31 = 32;
    goto LABEL_37;
  }
  return result;
}

#pragma GCC visibility pop
