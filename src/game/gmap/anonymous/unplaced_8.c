#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MultiMenu_1788690(_QWORD*, char);
__int64 game_gmap_anonymous_CorpsPoolMenu_MoveTab(__int64);
__int64 game_gmap_anonymous_172ff80(_DWORD* a1, char a2);

__int64 game_gmap_anonymous_172ff80(_DWORD* a1, char a2)
{
  _QWORD* v3;
  int v4;

  if ((signed __int32)a1[165] >= (signed __int32)a1[164] &&
      (v3 = a1, v4 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 1120LL))(a1),
       a1 = v3, v4 != 0) &&
      (a2 & 1) != 0 && (*(_DWORD*)(v3[132] + 356LL) & 1) == 0) {
    return MultiMenu_1788690(v3, 1);
  }
  else {
    return game_gmap_anonymous_CorpsPoolMenu_MoveTab((__int64)a1);
  }
}

#pragma GCC visibility pop
