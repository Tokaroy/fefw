#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1d560(_QWORD*);
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 spine_SkeletonData_findSkin(__int64, __int64);
__int64 spine_Skin_attachAll(__int64, __int64, __int64);
__int64 spine_Skin_getAttachment(_QWORD, _QWORD, _QWORD);
__int64 spine_SlotData_getAttachmentName(_QWORD);
__int64 spine_Slot_setAttachment(__int64 result, __int64);
__int64* spine_Skeleton_setSkin(__int64* result, __int64 a2);

__int64* spine_Skeleton_setSkin(__int64* result, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned __int64 i;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(_QWORD*)(a2 + 8) != 0) {
    v2 = result;
    v3 = spine_SkeletonData_findSkin(result[1], a2);
    result = v2;
  }
  else {
    v3 = 0;
  }
  v4 = result[30];
  if (v4 != v3) {
    v5 = v3;
    v6 = result;
    if (v3 != 0) {
      if (v4 != 0) {
        spine_Skin_attachAll(v3, (__int64)result, v4);
      }
      else {
        v7 = result[7];
        if (v7 != 0) {
          for (i = 0; i != v7; ++i) {
            if (i >= v6[7]) {
              __assert_fail("inIndex < _size",
                            "/Program/Externals/Spine/include\\spine/Vector.h",
                            162, "operator[]");
              __udf(0);
            }
            v9 = *(_QWORD*)(v6[9] + 8 * i);
            v10 = spine_SlotData_getAttachmentName(*(_QWORD*)(v9 + 8));
            if (*(_QWORD*)(v10 + 8) != 0) {
              v11 = spine_Skin_getAttachment(v5, i, v10);
              if (v11 != 0) {
                spine_Slot_setAttachment(v9, v11);
              }
            }
          }
        }
      }
    }
    v6[30] = v5;
    return (__int64*)GameRoutine_1d560(v6);
  }
  return result;
}

#pragma GCC visibility pop
