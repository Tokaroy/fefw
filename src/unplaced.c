#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09be0(_QWORD, _QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a670(_QWORD, _QWORD);
__int64 nn_fs_DeleteFile(_QWORD);
extern char GameData_1a9f09e;
__int64 _657350(__int64 a1, __int64 a2);

__int64 _657350(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  char* v10;
  char* v11;
  char* v12;
  _QWORD v14[34];

  v4 = atomic_load((unsigned __int8*)(a1 + 81));
  if (v4 != 1) {
    return 514;
  }
  v14[32] = v2;
  v14[33] = v3;
  v5 = *(unsigned __int8*)(a1 + 56);
  v7 = v5 >> 1;
  v8 = (v5 & 1) == 0;
  v9 = *(_QWORD*)(a1 + 64);
  v10 = *(char**)(a1 + 72);
  memset(&v14[12], 0, 160);
  if (v8) {
    v9 = v7;
  }
  v11 = (char*)(a1 + 57);
  memset(v14, 0, 96);
  if (!v8) {
    v11 = v10;
  }
  if (v9 != 0) {
    v12 = v11;
  }
  else {
    v12 = &GameData_1a9f09e;
  }
  GameRoutine_1a09be0(v14, v12);
  strcpy((char*)v14 + GameRoutine_1a09c70(v14), ":/");
  GameRoutine_1a0a670(v14, a2);
  return nn_fs_DeleteFile(v14);
}

#pragma GCC visibility pop
