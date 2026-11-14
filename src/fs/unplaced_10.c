#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_639910(char*, _QWORD*);
__int64 GameRoutine_63f060(_BYTE*, __int64, long double);
__int64 GameRoutine_640a40(_BYTE*, __int64, double);
__int64 GameRoutine_642060(_BYTE*, __int64, long double);
__int64 GameRoutine_642ea0(__int64, char*, __int64, __int64*);
__int64 GameRoutine_642fe0(__int64**, __int64*);
__int64 fs_638a60(__int64**, char);
__int64 fs_63cc30(__int64, unsigned __int8);
__int64 fs_63cd90(__int64, unsigned int);
__int64 fs_63cee0(__int64, __int64);
__int64 fs_63dab0(__int64, __int64, unsigned __int64, __int64);
__int64 fs_63ec50(__int64, unsigned int);
__int64 fs_63eda0(__int64, unsigned __int64);
__int64 fs_63eef0(__int64, __int64, unsigned __int64, unsigned __int64);
unsigned __int64 GameRoutine_1a09c70(const char*);
unsigned __int8* GameRoutine_638b90(char*, unsigned __int8**, __int16);
void __attribute__((noreturn)) GameRoutine_638240(const char*);
void __attribute__((noreturn)) fs_639520(__int64);
__int64 fs_638520(__int64** a1, __int64* a2);
unsigned __int64 fs_63b370(__int64 a1, unsigned int* a2);

__int64 fs_638520(__int64** a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 result;
  char* v3;
  __int64 v4;
  __int64* v5;
  __int64** v6;
  unsigned __int8* v7;
  __int64* v9;
  int v10;
  __int64* v11;
  __int64** v12;
  unsigned __int8* v13;
  long double v14;
  __int64* v15;
  __int64** v16;
  unsigned __int8* v17;
  double v18;
  __int64* v19;
  __int64** v20;
  unsigned __int8* v21;
  char* v22;
  __int64* v23;
  __int64** v24;
  unsigned __int8* v25;
  __int64* v27;
  unsigned __int64 v28;
  __int64* v30;
  __int64 v31;
  long double v32;
  __int64 v35;
  __int64 v38;
  long double v40;
  __int64 v41;
  int v42;
  char v43;
  __int16 v44;
  char v45;

  switch (*((_BYTE*)a2 + 16)) {
  case 0:
    GameRoutine_638240("The argument index value is too large for the number "
                       "of arguments supplied");
  case 1:
    return fs_638a60(a1, *(_BYTE*)a2);
  case 2:
    return fs_63cc30((__int64)a1, *(_BYTE*)a2);
  case 3:
    return fs_63cd90((__int64)a1, *(_DWORD*)a2);
  case 4:
    return fs_63cee0((__int64)a1, *a2);
  case 5:
    return fs_63dab0((__int64)a1, (__int64)a2, *a2, a2[1]);
  case 6:
    return fs_63ec50((__int64)a1, *(_DWORD*)a2);
  case 7:
    return fs_63eda0((__int64)a1, *a2);
  case 8:
    return fs_63eef0((__int64)a1, (__int64)a2, *a2, a2[1]);
  case 9:
    v10 = *(_DWORD*)a2;
    v41 = 0;
    v44 = 0;
    v45 = 0;
    v42 = -1;
    v43 = 32;
    if (*(_BYTE*)a1[2] == 1) {
      v11 = *a1;
      v12 = a1;
      v13 = GameRoutine_638b90((char*)&v41, (unsigned __int8**)*a1, 319);
      if ((unsigned int)BYTE1(v41) - 13 < 6) {
        if ((SWORD1(v41) & 0x80000000) == 0 && v42 == -1) {
          v42 = 6;
        }
        goto LABEL_48;
      }
      if (BYTE1(v41) > 0xCu || ((1 << SBYTE1(v41)) & 0x1801) == 0) {
        goto LABEL_65;
      }
    LABEL_48:
      *v11 = (__int64)v13;
      a1 = v12;
    }
    v30 = a1[1];
    v31 = GameRoutine_639910((char*)&v41, v30);
    LODWORD(v32) = v10;
    result = GameRoutine_63f060(v30, v31, v32);
  LABEL_62:
    *v30 = result;
    return result;
  case 0xA:
    v18 = *(double*)a2;
    v41 = 0;
    v44 = 0;
    v45 = 0;
    v42 = -1;
    v43 = 32;
    if (*(_BYTE*)a1[2] != 1) {
      goto LABEL_61;
    }
    v19 = *a1;
    v20 = a1;
    v21 = GameRoutine_638b90((char*)&v41, (unsigned __int8**)*a1, 319);
    if ((unsigned int)BYTE1(v41) - 13 < 6) {
      if ((SWORD1(v41) & 0x80000000) == 0 && v42 == -1) {
        v42 = 6;
      }
    LABEL_60:
      *v19 = (__int64)v21;
      a1 = v20;
    LABEL_61:
      v30 = a1[1];
      v38 = GameRoutine_639910((char*)&v41, v30);
      result = GameRoutine_640a40(v30, v38, v18);
      goto LABEL_62;
    }
    if (BYTE1(v41) <= 0xCu && ((1 << SBYTE1(v41)) & 0x1801) != 0) {
      goto LABEL_60;
    }
    goto LABEL_65;
  case 0xB:
    v14 = *(long double*)a2;
    v41 = 0;
    v44 = 0;
    v45 = 0;
    v42 = -1;
    v43 = 32;
    v40 = v14;
    if (*(_BYTE*)a1[2] == 1) {
      v15 = *a1;
      v16 = a1;
      v17 = GameRoutine_638b90((char*)&v41, (unsigned __int8**)*a1, 319);
      if ((unsigned int)BYTE1(v41) - 13 >= 6) {
        if (BYTE1(v41) > 0xCu || ((1 << SBYTE1(v41)) & 0x1801) == 0) {
        LABEL_65:
          fs_639520((__int64)"a floating-point");
        }
      }
      else if ((SWORD1(v41) & 0x80000000) == 0 && v42 == -1) {
        v42 = 6;
      }
      *v15 = (__int64)v17;
      a1 = v16;
    }
    v30 = a1[1];
    v35 = GameRoutine_639910((char*)&v41, v30);
    result = GameRoutine_642060(v30, v35, v40);
    goto LABEL_62;
  case 0xC:
    v44 = 0;
    v45 = 0;
    v22 = (char*)*a2;
    v41 = 1;
    v42 = -1;
    v43 = 32;
    if (*(_BYTE*)a1[2] == 1) {
      v23 = *a1;
      v24 = a1;
      v25 = GameRoutine_638b90((char*)&v41, (unsigned __int8**)*a1, 296);
      if (BYTE1(v41) >= 2u && BYTE1(v41) != 19) {
        goto LABEL_64;
      }
      *v23 = (__int64)v25;
      a1 = v24;
    }
    v27 = a1[1];
    v28 = GameRoutine_1a09c70(v22);
    result = GameRoutine_642ea0((__int64)&v41, v22, v28, v27);
    *v27 = result;
    return result;
  case 0xD:
    v44 = 0;
    v45 = 0;
    v3 = (char*)*a2;
    v4 = a2[1];
    v41 = 1;
    v42 = -1;
    v43 = 32;
    if (*(_BYTE*)a1[2] == 1) {
      v5 = *a1;
      v6 = a1;
      v7 = GameRoutine_638b90((char*)&v41, (unsigned __int8**)*a1, 296);
      if (BYTE1(v41) >= 2u && BYTE1(v41) != 19) {
      LABEL_64:
        GameRoutine_638240("The type option contains an invalid value for a "
                           "string formatting argument");
      }
      *v5 = (__int64)v7;
      a1 = v6;
    }
    v9 = a1[1];
    result = GameRoutine_642ea0((__int64)&v41, v3, v4, v9);
    *v9 = result;
    return result;
  case 0xE:
    return GameRoutine_642fe0(a1, a2);
  case 0xF:
    return ((__int64 (*)(__int64*, __int64*, __int64))a2[1])(*a1, a1[1], *a2);
  default:
    abort();
  }
}

unsigned __int64 fs_63b370(__int64 a1, unsigned int* a2)
{
  unsigned __int64 result;

  switch (*((_BYTE*)a2 + 16)) {
  case 0:
    GameRoutine_638240("The argument index value is too large for the number "
                       "of arguments supplied");
  case 1:
  case 2:
  case 5:
  case 8:
  case 9:
  case 0xA:
  case 0xB:
  case 0xC:
  case 0xD:
  case 0xE:
  case 0xF:
    GameRoutine_638240("Replacement argument isn't a standard signed or "
                       "unsigned integer type");
  case 3:
    result = *a2;
    if ((result & 0x80000000) != 0) {
      goto LABEL_13;
    }
    return result;
  case 4:
    result = *(_QWORD*)a2;
    if ((*(_QWORD*)a2 & 0x8000000000000000LL) != 0) {
    LABEL_13:
      GameRoutine_638240("An argument index may not have a negative value");
    }
    if (result >> 31 != 0) {
      goto LABEL_11;
    }
    return result;
  case 6:
    result = *a2;
    if ((result & 0x80000000) == 0) {
      return result;
    }
    goto LABEL_11;
  case 7:
    result = *(_QWORD*)a2;
    if (*(_QWORD*)a2 >> 31 != 0) {
    LABEL_11:
      GameRoutine_638240(
          "The value of the argument index exceeds its maximum value");
    }
    return result;
  default:
    abort();
  }
}

#pragma GCC visibility pop
