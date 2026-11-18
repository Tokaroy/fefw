#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0();
extern _UNALIGNED_INT32 GameData_21f6001;
extern _UNALIGNED_INT64 GameData_21f601c;
extern _UNALIGNED_INT64 GameData_21f6034;
extern _UNALIGNED_INT64 GameData_21f604c;
extern __int64 GameData_21f5fc8;
extern __int64 GameData_21f5fd0;
extern __int64 GameData_21f5fd8;
extern __int64 GameData_21f5fe0;
extern __int64 GameData_21f5fe8;
extern __int64 GameData_21f5ff0;
extern __int64 GameData_21f5ff8;
extern __int64 GameData_21f6008;
extern __int64 GameData_21f6010;
extern __int64 GameData_21f6028;
extern __int64 GameData_21f6040;
extern __int64 GameData_21f6058;
extern __int64 GameData_21f6060;
extern __int64 GameData_21f6068;
extern __int64 GameData_21f6070;
extern __int64 GameData_21f6078;
extern __int64 GameData_21f6080;
extern __int64 GameData_21f6088;
extern __int64 GameData_21f6090;
extern char GameData_21f6000;
extern int GameData_21f6018;
extern int GameData_21f6024;
extern int GameData_21f6030;
extern int GameData_21f603c;
extern int GameData_21f6048;
extern int GameData_21f6054;
__int64 game_templates_9ad2e0();

__int64 game_templates_9ad2e0()
{
  GameData_21f5fd8 = 0xFF00000000LL;
  GameData_21f5fe0 = 1;
  GameData_21f6000 = 1;
  GameData_21f6024 = 1;
  GameData_21f6001 = 0;
  *(int*)((char*)&GameData_21f6001 + 3) = 0;
  GameData_21f6068 = 0;
  GameData_21f6070 = 0;
  GameData_21f6078 = 0;
  GameData_21f6080 = 0;
  GameData_21f6088 = 0;
  GameData_21f6090 = 0;
  GameData_21f5ff8 = 0x100000003LL;
  GameData_21f5fe8 = 0x20000FFFFLL;
  GameData_21f5ff0 = 0xFF0000000000LL;
  GameData_21f6048 = 255;
  GameData_21f6008 = 0xFF0100000001LL;
  GameData_21f6010 = 0x100000003LL;
  GameData_21f6040 = 0x300000001LL;
  GameData_21f6018 = 65280;
  GameData_21f604c = 0x300000002LL;
  GameData_21f601c = 0x200000002LL;
  GameData_21f6054 = 511;
  GameData_21f6028 = 0x200000003LL;
  GameData_21f6030 = 257;
  GameData_21f6034 = 0x200000000LL;
  GameData_21f603c = 256;
  GameData_21f6058 = 0x300000001LL;
  GameData_21f6060 = 256;
  GameData_21f5fc8 = (__int64)&GameData_21f5fd8;
  GameData_21f5fd0 = 12;
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
