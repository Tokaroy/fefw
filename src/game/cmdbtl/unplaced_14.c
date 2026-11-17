#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdbtlUnitSelectMenu_1637be0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e030[4];
extern __int64 GameData_206e4c0;
bool game_cmdbtl_1638cb0(__int64 a1);

bool game_cmdbtl_1638cb0(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    v2 = __dynamic_cast(v1, GameData_212e030[0], &GameData_206e4c0, 0);
  }
  else {
    v2 = 0;
  }
  return (int)CmdbtlUnitSelectMenu_1637be0(v2) >=
         (signed __int32)*(_DWORD*)(v2 + 1424);
}

#pragma GCC visibility pop
