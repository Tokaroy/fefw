#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_58dbb0(__int64 result, _QWORD*);
float TextBox_59d550(__int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void memory_1909ee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);

void memory_1909ee0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{

#pragma clang fp contract(off)
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v12;
  float v13;
  __int16 v14;
  bool v15;
  struct {
    char gap0_[12];
    float v16;
    _BYTE v17[8];
    float v18;
  } f_;
  unsigned __int64 v19;

  if (a2 != 0) {
    *(_QWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
    *(_DWORD*)(a2 + 16) = -1;
  }
  if (a5 != 0) {
    v19 = ((vcvts_n_u64_f32(*(float*)(a5 + 80), 6u) & 0x3FFFF) << 30) &
              0xFFFFC0000000LL |
          ((vcvts_n_s64_f32(*(float*)(a5 + 260), 6u) & 0x7FFF) << 48) |
          vcvts_n_u64_f32(*(float*)(a5 + 248), 6u) & 0x7FFF |
          ((vcvts_n_u64_f32(*(float*)(a5 + 252), 6u) & 0x7FFF) << 15);
    GameRoutine_58dbb0(a5, &v19);
    ui_text_190a0c0(&f_.v18, (__int64)f_.v17, &f_.v16, (_QWORD*)a5,
                    *(_QWORD*)(a5 + 216));
    v6 = *(float*)(a5 + 248);
    v7 = *(float*)(a5 + 252);
    v19 = __PAIR64__(LODWORD(v9), LODWORD(v8));
    v10 = vabds_f32(v9, v7);
    if (vabds_f32(v8, v6) > 0x1.0000000000000p-23f |
        v10 > 0x1.0000000000000p-23f) {
      TextBox_59d550(a5, (__int64)&v19);
      v12 = f_.v16;
      v13 = *(float*)(a5 + 260);
      v14 = *(_WORD*)(a5 + 276) & 4;
      v15 = v13 == f_.v16;
      if (v13 != f_.v16) {
        v14 = 4;
      }
      *(_WORD*)(a5 + 276) = v14 | *(_WORD*)(a5 + 276) & 0xFFFB;
      if (!v15) {
        *(float*)(a5 + 260) = v12;
      }
    }
  }
}

#pragma GCC visibility pop
