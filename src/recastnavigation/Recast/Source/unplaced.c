#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_283930(__int64);
bool GameRoutine_283920(_QWORD*);
void GameRoutine_2839d0();
void nn_detail_UnexpectedDefaultImpl();
__int64 recastnavigation_Recast_Source_282520(__int64 a1, unsigned int a2,
                                              _DWORD* a3);

__int64 recastnavigation_Recast_Source_282520(__int64 a1, unsigned int a2,
                                              _DWORD* a3)
{
  __int64 v4;
  _DWORD* v6;
  __int64 result;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  _DWORD* v15;

  v4 = 3LL * a2;
  v6 = (_DWORD*)(a1 + 24LL * a2);
  v6[97] = *(_DWORD*)a3;
  v6[98] = a3[1];
  v6[99] = a3[2];
  result = *(_QWORD*)(a1 + 464);
  v6[100] = a3[3];
  v6[101] = a3[4];
  v6[102] = a3[5];
  if (result != 0) {
    result = ((__int64 (*)(_QWORD*))GameRoutine_283920)((_QWORD*)result);
    if ((result & 1) != 0) {
      result = GameRoutine_283930(*(_QWORD*)(a1 + 464));
      if ((int)result >= 1) {
        v9 = 8 * v4;
        v10 = ((__int64 (*)(_QWORD, __int64))GameRoutine_2839d0)(
            *(_QWORD*)(a1 + 464), 1);
        *(_DWORD*)(v10 + 8 + 24LL * a2) = *(_DWORD*)a3;
        v11 = (_DWORD*)(v10 + 8 + v9);
        v11[1] = a3[1];
        v11[2] = a3[2];
        v11[3] = a3[3];
        v11[4] = a3[4];
        v11[5] = a3[5];
        result = GameRoutine_283930(*(_QWORD*)(a1 + 464));
        if ((int)result >= 2) {
          v12 = ((__int64 (*)(_QWORD, __int64))GameRoutine_2839d0)(
              *(_QWORD*)(a1 + 464), 2);
          *(_DWORD*)(v12 + 8 + 24LL * a2) = *(_DWORD*)a3;
          v13 = (_DWORD*)(v12 + 8 + v9);
          v13[1] = a3[1];
          v13[2] = a3[2];
          v13[3] = a3[3];
          v13[4] = a3[4];
          v13[5] = a3[5];
          result = GameRoutine_283930(*(_QWORD*)(a1 + 464));
          if ((int)result >= 3) {
            v14 = ((__int64 (*)(_QWORD, __int64))GameRoutine_2839d0)(
                *(_QWORD*)(a1 + 464), 3);
            *(_DWORD*)(v14 + 8 + 24LL * a2) = *(_DWORD*)a3;
            v15 = (_DWORD*)(v14 + 8 + v9);
            v15[1] = a3[1];
            v15[2] = a3[2];
            v15[3] = a3[3];
            v15[4] = a3[4];
            v15[5] = a3[5];
            result = GameRoutine_283930(*(_QWORD*)(a1 + 464));
            if ((int)result >= 4) {
              nn_detail_UnexpectedDefaultImpl();
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
