#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_ce5870(_QWORD* result, _QWORD*);
__int64 wld_anim_layer_ctrl_module_ce4870(__int64 a1, __int64 a2);

__int64 wld_anim_layer_ctrl_module_ce4870(__int64 a1, __int64 a2)
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
    char gap40_[8];
    _QWORD v11[4];
    _QWORD* v12;
  } f_;

  v2 = *(_QWORD*)(a1 + 24);
  v3 = *(_QWORD*)(a2 + 32);
  if (v3 == 0) {
    f_.v10 = nullptr;
    v5 = (_QWORD*)(v2 + 320);
    f_.v12 = nullptr;
    goto LABEL_10;
  }
  if (v3 != a2) {
    v4 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    f_.v10 = v4;
    v5 = (_QWORD*)(v2 + 320);
    if (v4 != nullptr) {
      goto LABEL_4;
    }
  LABEL_8:
    f_.v12 = nullptr;
    goto LABEL_10;
  }
  f_.v10 = f_.v9;
  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v3 + 24LL))(v3, f_.v9);
  v4 = f_.v10;
  v5 = (_QWORD*)(v2 + 320);
  if (f_.v10 == nullptr) {
    goto LABEL_8;
  }
LABEL_4:
  if (v4 == f_.v9) {
    f_.v12 = f_.v11;
    (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v4 + 24LL))(v4, f_.v11);
  }
  else {
    f_.v12 = (_QWORD*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v4 + 16LL))(v4);
  }
LABEL_10:
  GameRoutine_ce5870(f_.v11, v5);
  if (f_.v12 == f_.v11) {
    v6 = 32;
  }
  else {
    if (f_.v12 == nullptr) {
      goto LABEL_15;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*f_.v12 + v6))((__int64)f_.v12);
LABEL_15:
  result = (__int64)f_.v10;
  if (f_.v10 == f_.v9) {
    v8 = 32;
  }
  else {
    if (f_.v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)f_.v10 + v8))((__int64)f_.v10);
}

#pragma GCC visibility pop
