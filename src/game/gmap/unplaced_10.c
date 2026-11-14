#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1514360(__int64);
__int64 GameRoutine_1514a00(__int64 result, __int64, __int64);
__int64 GameRoutine_1522bc0(__int64, char);
__int64 GameRoutine_1522f20();
__int64 GameRoutine_1522f60();
__int64 GameRoutine_15232e0();
__int64 Impl_13261c0(__int64);
__int64 Impl_1328670(__int64);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 game_gmap_15230c0();
__int64 game_gmap_1523240();
__int64 game_gmap_1523320();
extern _UNKNOWN GameData_22532b8;
extern __int128 GameData_22532c0;
extern __int64 (*GameData_204a7b8[])();
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212d298)();
extern __int64 (*game_gmap_anonymous_ProcHeroWarp_vtable[])();
extern __int64* GameData_212c790;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
extern __int64 GameData_2253000;
extern __int64 GameData_2253008;
extern __int64 GameData_2253010;
extern __int64 GameData_2253020;
extern __int64 GameData_2253030;
extern __int64 GameData_2253040;
extern __int64 GameData_2253048;
extern __int64 GameData_2253060;
extern __int64 GameData_2253070;
extern __int64 GameData_2253080;
extern __int64 GameData_2253088;
extern __int64 GameData_2253090;
extern __int64 GameData_22530a0;
extern __int64 GameData_22530b0;
extern __int64 GameData_22530c0;
extern __int64 GameData_22530c8;
extern __int64 GameData_22530d0;
extern __int64 GameData_22530e0;
extern __int64 GameData_22530f0;
extern __int64 GameData_2253100;
extern __int64 GameData_2253108;
extern __int64 GameData_2253110;
extern __int64 GameData_2253120;
extern __int64 GameData_2253130;
extern __int64 GameData_2253140;
extern __int64 GameData_2253148;
extern __int64 GameData_2253150;
extern __int64 GameData_2253160;
extern __int64 GameData_2253170;
extern __int64 GameData_2253180;
extern __int64 GameData_2253188;
extern __int64 GameData_2253190;
extern __int64 GameData_22531a0;
extern __int64 GameData_22531b0;
extern __int64 GameData_22531c0;
extern __int64 GameData_22531c8;
extern __int64 GameData_22531d0;
extern __int64 GameData_22531e0;
extern __int64 GameData_22531f0;
extern __int64 GameData_2253200;
extern __int64 GameData_2253208;
extern __int64 GameData_2253210;
extern __int64 GameData_2253220;
extern __int64 GameData_2253230;
extern __int64 GameData_2253240;
extern __int64 GameData_2253248;
extern __int64 GameData_2253260;
extern __int64 GameData_2253270;
extern __int64 GameData_2253280;
extern __int64 GameData_2253288;
extern __int64 GameData_2253290;
extern __int64 GameData_22532a0;
extern __int64 GameData_22532b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern char GameData_2252ff8;
extern char GameData_2253038;
extern char GameData_2253078;
extern char GameData_22530b8;
extern char GameData_22530f8;
extern char GameData_2253138;
extern char GameData_2253178;
extern char GameData_22531b8;
extern char GameData_22531f8;
extern char GameData_2253238;
extern char GameData_2253278;
extern int GameData_2253018;
extern int GameData_2253028;
extern int GameData_2253058;
extern int GameData_2253068;
extern int GameData_2253098;
extern int GameData_22530a8;
extern int GameData_22530d8;
extern int GameData_22530e8;
extern int GameData_2253118;
extern int GameData_2253128;
extern int GameData_2253158;
extern int GameData_2253168;
extern int GameData_2253198;
extern int GameData_22531a8;
extern int GameData_22531d8;
extern int GameData_22531e8;
extern int GameData_2253218;
extern int GameData_2253228;
extern int GameData_2253258;
extern int GameData_2253268;
extern int GameData_2253298;
extern int GameData_22532a8;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
__int64 game_gmap_14c4bd0(__int64 a1);
__int64 game_gmap_14d3e20(__int64 a1);
__int64 game_gmap_14d3f10(__int64 a1);
__int64 game_gmap_1522300(__int64 a1, __int64 a2);

__int64 game_gmap_14c4bd0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v5;
  bool v8;

  v2 = **(_QWORD**)(a1 + 224);
  result = Impl_13261c0(v2);
  if ((unsigned __int8)result == 4 & (*(_BYTE*)(v2 + 178) & 2) == 0) {
    result = Impl_1328670(**(_QWORD**)(a1 + 224));
    if ((result & 1) != 0) {
      v5 = 2;
    }
    else {
      v8 = game_gmap_GmapClock_instance_ == 0 ||
           *(_WORD*)(game_gmap_GmapClock_instance_ + 22) == 0 |
               *(_WORD*)(game_gmap_GmapClock_instance_ + 20) == 0 ||
           *(_WORD*)(game_gmap_GmapClock_instance_ + 24) == 0;
      if (((v8 | *(_BYTE*)(a1 + 236)) & 1) != 0) {
        v5 = 2;
      }
      else {
        v5 = 3;
      }
    }
  }
  else {
    v5 = 1;
  }
  *(_DWORD*)(a1 + 152) = v5;
  return result;
}

__int64 game_gmap_14d3e20(__int64 a1)
{
  return GameRoutine_1514a00(a1, *(_QWORD*)(*(_QWORD*)(a1 + 216) + 72LL), 0);
}

__int64 game_gmap_14d3f10(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 216);
  v3 = *(_QWORD*)(v2 + 72);
  v4 = GameRoutine_1514360(v2);
  return GameRoutine_1514a00(a1, v3, v4);
}

__int64 game_gmap_1522300(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* i;
  __int64 v5;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (GameData_22532c0 != 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  v2 = 0;
  if (a2 == 0 || *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return v2;
  }
  v3 = GameData_212c790;
  for (i = *(__int64**)(*(_QWORD*)(*GameData_212c790 + 8) + 8LL);; ++i) {
    v5 = *i;
    if ((*(_QWORD*)(*i + 96) | *(_QWORD*)(*i + 552)) == 0 &&
        *(_DWORD*)(v5 + 84) == -1) {
      break;
    }
  }
  if (a2 != *(_QWORD*)v5) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22532b8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22532b8) != 0) {
      GameData_2252ff8 = 13;
      GameData_2253000 = 0;
      GameData_2253008 = (__int64)GameRoutine_1522f20;
      GameData_2253078 = 13;
      GameData_22530f8 = 13;
      GameData_2253178 = 13;
      GameData_22531b8 = 13;
      GameData_22531f8 = 13;
      GameData_2253010 = 0;
      GameData_2253018 = 0;
      GameData_2253020 = 0;
      GameData_2253028 = 0;
      GameData_2253030 = 0;
      GameData_2253038 = 8;
      GameData_2253058 = 0;
      GameData_2253060 = 0;
      GameData_2253068 = 0;
      GameData_2253070 = 0;
      GameData_2253090 = 0;
      GameData_2253098 = 0;
      GameData_22530a0 = 0;
      GameData_22530a8 = 0;
      GameData_22530b0 = 0;
      GameData_22530c0 = 0;
      GameData_22530c8 = 16;
      GameData_22530d0 = 1;
      GameData_22530d8 = 0;
      GameData_22530e0 = 0;
      GameData_22530e8 = 0;
      GameData_22530f0 = 0;
      GameData_2253100 = 0;
      GameData_2253108 = (__int64)game_gmap_15230c0;
      GameData_2253110 = 0;
      GameData_2253118 = 0;
      GameData_2253120 = 0;
      GameData_2253128 = 0;
      GameData_2253130 = 0;
      GameData_2253140 = 0;
      GameData_2253148 = 16;
      GameData_2253150 = 1;
      GameData_2253158 = 0;
      GameData_2253160 = 0;
      GameData_2253168 = 0;
      GameData_2253170 = 0;
      GameData_2253190 = 0;
      GameData_2253198 = 0;
      GameData_22531a0 = 0;
      GameData_22531a8 = 0;
      GameData_22531b0 = 0;
      GameData_22531d0 = 0;
      GameData_22531d8 = 0;
      GameData_22531e0 = 0;
      GameData_22531e8 = 0;
      GameData_22531f0 = 0;
      GameData_2253200 = 0;
      GameData_2253208 = (__int64)game_gmap_1523320;
      GameData_2253210 = 0;
      GameData_2253218 = 0;
      GameData_2253220 = 0;
      GameData_2253040 = 0;
      GameData_2253048 = (__int64)GameData_212d298;
      GameData_2253228 = 0;
      GameData_2253230 = 0;
      GameData_2253238 = 8;
      GameData_2253240 = 0;
      GameData_2253080 = 0;
      GameData_2253088 = (__int64)GameRoutine_1522f60;
      GameData_22530b8 = 14;
      GameData_2253138 = 14;
      GameData_2253180 = 0;
      GameData_2253188 = (__int64)game_gmap_1523240;
      GameData_22531c0 = 0;
      GameData_22531c8 = (__int64)GameRoutine_15232e0;
      GameData_2253258 = 0;
      GameData_2253260 = 0;
      GameData_2253268 = 0;
      GameData_2253270 = 0;
      GameData_2253278 = 0;
      GameData_22532a0 = 0;
      GameData_22532a8 = 0;
      GameData_22532b0 = 0;
      GameData_2253298 = 0;
      GameData_2253290 = 0;
      GameData_2253288 = 0;
      GameData_2253280 = 0;
      GameData_2253248 = (__int64)GameData_212c710[0];
      __cxa_guard_release((__int64)&GameData_22532b8);
    }
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        192, 16, 0);
    v9 = GameData_212c608[0];
    *(_QWORD*)(v2 + 96) = 0;
    *(_QWORD*)(v2 + 104) = 0;
    *(_QWORD*)(v2 + 112) = 0;
    *(_QWORD*)(v2 + 120) = 0;
    *(_QWORD*)(v2 + 128) = 0;
    *(_WORD*)(v2 + 136) = 0;
    *(_QWORD*)(v2 + 16) = 0;
    *(_QWORD*)(v2 + 24) = "NULL";
    *(_QWORD*)(v2 + 138) = 0;
    *(_QWORD*)(v2 + 144) = 0;
    *(_QWORD*)(v2 + 32) = 0;
    *(_QWORD*)(v2 + 40) = 0;
    *(_QWORD*)(v2 + 48) = 0;
    *(_QWORD*)(v2 + 56) = 0;
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 0;
    *(_QWORD*)(v2 + 80) = 0;
    *(_QWORD*)(v2 + 88) = 0;
    *(_QWORD*)v2 = v9 + 16;
    *(_QWORD*)(v2 + 8) = 0;
    game_ProcInst_Register(v2);
    *((_QWORD*)&GameData_22532c0 + 1) = v2;
    *(_QWORD*)v2 = GameData_204a7b8;
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v10 = *(_QWORD*)(*v3 + 8);
      v11 = *(__int64**)(v10 + 8);
      v12 = *(__int64**)(v10 + 16);
      while (v11 != v12) {
        v14 = *v11;
        if ((*(_QWORD*)(*v11 + 96) | *(_QWORD*)(*v11 + 552)) == 0 &&
            *(_DWORD*)(v14 + 84) == -1) {
          goto LABEL_22;
        }
        ++v11;
      }
    }
    v14 = 0;
  LABEL_22:
    v15 = *v8;
    *(_QWORD*)(v2 + 152) = v14;
    *(_QWORD*)(v2 + 160) = a2;
    *(_QWORD*)v2 = game_gmap_anonymous_ProcHeroWarp_vtable;
    v16 = fw_memory_HeapManager_Allocate(v15, 296, 16, 0);
    *(_DWORD*)(v16 + 48) = 0x2000;
    v17 = GameData_2131678;
    *(_QWORD*)(v16 + 8) = 0;
    *(_QWORD*)(v16 + 16) = 0;
    *(_DWORD*)(v16 + 32) = 0;
    *(_QWORD*)(v16 + 40) = 0;
    *(_DWORD*)(v16 + 104) = 0;
    *(_WORD*)(v16 + 108) = 256;
    *(_QWORD*)(v16 + 56) = 0;
    *(_QWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 0;
    *(_WORD*)(v16 + 80) = 0;
    *(_WORD*)(v16 + 116) = 0;
    *(_WORD*)(v16 + 136) = 0;
    *(_BYTE*)(v16 + 160) = 0;
    *(_BYTE*)(v16 + 288) = 0;
    *(_QWORD*)(v16 + 272) = 0;
    *(_QWORD*)(v16 + 280) = 0;
    *(_QWORD*)(v16 + 256) = 0;
    *(_QWORD*)(v16 + 264) = 0;
    *(_QWORD*)(v16 + 240) = 0;
    *(_QWORD*)(v16 + 248) = 0;
    *(_QWORD*)(v16 + 224) = 0;
    *(_QWORD*)(v16 + 232) = 0;
    *(_QWORD*)(v16 + 208) = 0;
    *(_QWORD*)(v16 + 216) = 0;
    *(_QWORD*)(v16 + 192) = 0;
    *(_QWORD*)(v16 + 200) = 0;
    *(_QWORD*)(v16 + 176) = 0;
    *(_QWORD*)(v16 + 184) = 0;
    *(_QWORD*)(v16 + 168) = 0;
    *(_QWORD*)(v16 + 120) = 0;
    *(_DWORD*)(v16 + 127) = 0;
    *(_QWORD*)(v2 + 176) = v16;
    *(_DWORD*)(v2 + 184) = 0;
    *(_BYTE*)(v2 + 188) = 0;
    *(_QWORD*)v16 = v17 + 16;
    *(_DWORD*)(v16 + 112) = -1082130432;
    *(_DWORD*)(v16 + 292) = 2;
    *(_QWORD*)(v16 + 24) = 0;
    *(_QWORD*)(v2 + 168) = v16 + 24;
    ProcInst_657850(v2, (__int64)&GameData_2252ff8, "ProcHeroWarp", 1, a1);
    return v2;
  }
  return GameRoutine_1522bc0(a1, 1);
}

#pragma GCC visibility pop
