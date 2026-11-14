#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_27caf0(__int64 result, __int64);
__int64 GameRoutine_291500(__int64 result);
__int64 PlayerHeap_284200(_QWORD*);
__int64 WaveSoundLoader_FreePlayerHeapTask_Unknown2(__int64* a1);

__int64 WaveSoundLoader_FreePlayerHeapTask_Unknown2(__int64* a1)
{
  _QWORD* v2;

  v2 = (_QWORD*)a1[15];
  if (v2 != nullptr) {
    PlayerHeap_284200(v2);
    GameRoutine_27caf0(a1[11], a1[15]);
  }
  return GameRoutine_291500(a1[16]);
}

#pragma GCC visibility pop
