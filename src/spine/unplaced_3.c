#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10(_QWORD);
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 spine_Skeleton_getSlots(_QWORD);
__int64 spine_SlotData_getName(_QWORD);
__int64 spine_Slot_getData(_QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
extern __int64 (*spine_String_vtable[])();
void spine_19171d0(__int64, __int64, int8x16_t*, char, char);
__int64 spine_1917400_alt1(__int64 result, __int64 a2, unsigned __int64 a3,
                           int8x16_t* a4, char a5, char a6);
__int64 GameRoutine_19e10_alt1();
__int64 GameRoutine_1a0b950(__int64, __int64, unsigned __int64);
__int64 __assert_fail_alt1();
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(_QWORD*);
int GameRoutine_1a0a540(const char*, const char*, unsigned __int64);
__int64 spine_1917400(__int64 result, char* a2, unsigned __int64 a3,
                      int8x16_t* a4, char a5, char a6);

__int64 spine_1917400(__int64 result, char* a2, unsigned __int64 a3,
                      int8x16_t* a4, char a5, char a6)
{
  __int64 v6;
  __int64 v9;
  unsigned __int64 i;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 (**v25)();
    unsigned __int64 v26;
    __int64 v27;
    char v28;
  } v25_;

  if (*(_BYTE*)(result + 1041) == 1) {
    v6 = result;
    result = *(_QWORD*)(result + 96);
    if (result != 0) {
      result = spine_Skeleton_getSlots(result);
      v9 = *(_QWORD*)(result + 8);
      if (v9 != 0) {
        for (i = 0; v9 != i; ++i) {
          v11 = spine_Skeleton_getSlots(*(_QWORD*)(v6 + 96));
          if (i >= *(_QWORD*)(v11 + 8)) {
            __assert_fail_alt1();
            __udf(0);
          }
          v12 = *(_QWORD*)(*(_QWORD*)(v11 + 24) + 8 * i);
          v13 = spine_Slot_getData(v12);
          v14 = spine_SlotData_getName(v13);
          v25_.v25 = spine_String_vtable;
          v25_.v28 = 1;
          v15 = *(_QWORD*)(v14 + 16);
          if (v15 != 0) {
            v17 = v14;
            v25_.v26 = *(_QWORD*)(v14 + 8);
            v16 = v25_.v26;
            v18 = GameRoutine_19e10_alt1();
            v25_.v27 = (*(__int64 (**)(__int64, __int64, __int64, __int64))(
                *(_QWORD*)v18 + 24LL))(v18, v16 + 1,
                                       (__int64)"/Program/Externals/Spine/"
                                                "include\\spine/SpineString.h",
                                       68);
            GameRoutine_1a0b950(v25_.v27, *(_QWORD*)(v17 + 16),
                                *(_QWORD*)(v17 + 8) + 1LL);
            v15 = v25_.v26;
            v19 = v25_.v27;
            if (v25_.v26 >= a3) {
              goto LABEL_11;
            }
          }
          else {
            v19 = 0;
            v25_.v26 = 0;
            v25_.v27 = 0;
            if (a3 == 0) {
            LABEL_11:
              v20 = GameRoutine_1a0a540(a2, (const char*)(v19 + v15 - a3), a3);
              if ((_DWORD)v20 == 0) {
                spine_19171d0(v20, v12, a4, a5 & 1, a6 & 1);
                v19 = v25_.v27;
              }
            }
          }
          v25_.v25 = spine_String_vtable;
          if (v19 != 0 && (v25_.v28 & 1) != 0) {
            v21 = GameRoutine_19e10_alt1();
            (*(void (**)(__int64, __int64, __int64, __int64))(
                *(_QWORD*)v21 + 40LL))(v21, v19,
                                       (__int64)"/Program/Externals/Spine/"
                                                "include\\spine/SpineString.h",
                                       206);
          }
          result = spine_SpineObject_Destroy_SpineObject_4e8a0_alt1(&v25_.v25);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
