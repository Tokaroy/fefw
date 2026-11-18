#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a79c60(_QWORD* result, _QWORD*);
__int64 wld_anim_layer_ctrl_module_ce4740(__int64 a1, __int64 a2);

__int64 wld_anim_layer_ctrl_module_ce4740(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  struct {
    _BYTE v9[32];
    _BYTE* v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v2 = *(_QWORD*)(a1 + 24);
  v3 = *(_QWORD*)(a2 + 32);
  if (v3 == 0) {
    v9_.v10 = nullptr;
    v5 = (_QWORD*)(v2 + 256);
    v11_.v12 = nullptr;
    goto LABEL_10;
  }
  if (v3 != a2) {
    v4 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    v9_.v10 = v4;
    v5 = (_QWORD*)(v2 + 256);
    if (v4 != nullptr) {
      goto LABEL_4;
    }
  LABEL_8:
    v11_.v12 = nullptr;
    goto LABEL_10;
  }
  v9_.v10 = v9_.v9;
  (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, (__int64)v9_.v9);
  v4 = v9_.v10;
  v5 = (_QWORD*)(v2 + 256);
  if (v9_.v10 == nullptr) {
    goto LABEL_8;
  }
LABEL_4:
  if (v4 == v9_.v9) {
    v11_.v12 = v11_.v11;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 24LL))((__int64)v4,
                                                          (__int64)v11_.v11);
  }
  else {
    v11_.v12 =
        (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))((__int64)v4);
  }
LABEL_10:
  GameRoutine_a79c60(v11_.v11, v5);
  if (v11_.v12 == v11_.v11) {
    v6 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_15;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v11_.v12 + v6))((__int64)v11_.v12);
LABEL_15:
  result = (__int64)v9_.v10;
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v9_.v10 + v8))((__int64)v9_.v10);
}

#pragma GCC visibility pop
