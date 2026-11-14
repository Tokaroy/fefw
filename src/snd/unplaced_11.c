#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* snd_Game_s_instance_ptr[3];
extern __int64 snd_g_frameCount_ptr;
void snd_e9590();

void snd_e9590()
{
  _QWORD* v0;
  __int64 v1;

  v0 = (_QWORD*)*snd_Game_s_instance_ptr[0];
  v1 = *(_QWORD*)snd_g_frameCount_ptr;
  v0[41] = 0;
  v0[39] = v1;
  v0[40] = 0;
}

#pragma GCC visibility pop
