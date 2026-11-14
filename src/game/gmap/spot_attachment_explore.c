#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_135c2e0(void);
__int64 GameRoutine_151a420();
__int64 GameRoutine_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 atoi(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab1630;
extern _UNKNOWN GameData_1ac136e;
extern __int64 (*game_gmap_SpotAttachmentDispatch_vtable)();
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212d740[3];
extern __int64 GameData_21c99b8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c780;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64 SpotAttachmentExplore_Unknown30(__int64 a1);
__int64 SpotAttachmentExplore_Unknown40_alt1(_QWORD* a1) __asm__(
    "SpotAttachmentExplore_Unknown40");
__int64 SpotAttachmentExplore_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "SpotAttachmentExplore_DeletingDestructor");
__int64 Impl_13261c0(_QWORD);
__int64 SpotAttachmentDungeon_151b000(void);
__int64 SpotAttachmentExplore_151a420(void);
__int64 SpotAttachmentFort_151b980(void);
__int64 game_gmap_SpotAttachmentDungeon_GetData(_QWORD);
__int64 game_gmap_SpotAttachmentExplore_GetData(void);
__int64 game_gmap_SpotAttachmentFort_GetData(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab7f34;
extern __int64 GameData_21c9ed0;
bool SpotAttachmentExplore_15199c0(__int64 a1, __int64 a2);
__int64 SpotAttachmentExplore_151a420();
__int64 GameRoutine_1328d60(_QWORD);
__int64 GameRoutine_8ae640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8af240(_QWORD, _QWORD);
extern __int64 GameData_21f1618;
extern __int64 GameData_2241720;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
__int64 SpotAttachmentExplore_15197c0(_QWORD* a1, char a2);
__int64 SpotAttachmentExplore_15198a0(__int64 a1);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 game_gmap_SpotAttachmentExplore_GetData_alt1() __asm__(
    "game_gmap_SpotAttachmentExplore_GetData");
extern __int64 (*GameData_202c698[])();
extern __int64 GameData_21c96e8;
__int64 SpotAttachmentExplore_151a540();
__int64 GmapExploreInfo_135c2e0(__int64, __int64, char);
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             __int64);
__int64
SpotAttachmentDungeon_151b000_alt1() __asm__("SpotAttachmentDungeon_151b000");
__int64 SpotAttachmentFort_151b980_alt1() __asm__("SpotAttachmentFort_151b980");
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_gmap_SpotAttachmentDungeon_GetData_alt1() __asm__(
    "game_gmap_SpotAttachmentDungeon_GetData");
__int64 game_gmap_SpotAttachmentFort_GetData_alt1() __asm__(
    "game_gmap_SpotAttachmentFort_GetData");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
int atoi_alt1(const char*) __asm__("atoi");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpotAttachmentExplore_Unknown40(_QWORD* a1);
void SpotAttachmentExplore_DeletingDestructor(_QWORD* a1);
__int64 Dir_70e760(__int16*, __int16*);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void GmapExploreInfo_135d220(__int64, __int64*, int);
void SpotAttachmentExplore_Unknown17(__int64* a1, int a2);
__int64 GmapExploreInfo_135c2e0_alt1(_QWORD*, char,
                                     char) __asm__("GmapExploreInfo_135c2e0");
__int64
RuntimeBuffer_8924a0_alt1(__int64 result, __int64, unsigned __int64,
                          unsigned __int8) __asm__("RuntimeBuffer_8924a0");

__int64 SpotAttachmentExplore_15197c0(_QWORD* a1, char a2)
{
  __int64 result;
  __int64 v4;
  _QWORD v5[3];

  if ((a2 & 1) == 0) {
    return (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 88LL))(a1, 0);
  }
  GameRoutine_8af240(v5, a1 + 6);
  result = GameRoutine_8ae640(v5, 0, 0);
  if (v5[0] != 0) {
    v5[1] = v5[0];
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v5[0]);
  }
  if (GameData_2241720 != 0) {
    *(_BYTE*)(GameData_2241720 + 1688) = 1;
  }
  if (GameData_21f1618 != 0) {
    return GameRoutine_1328d60(a1[4]);
  }
  return result;
}

__int64 SpotAttachmentExplore_15198a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD v10[2];

  v1 = *(_QWORD*)(a1 + 32);
  if (v1 != 0) {
    v2 = 0;
    v3 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
    v4 = GameData_212ceb0;
    v5 = GameData_212c780;
    while (1) {
      v6 = *(_QWORD*)(v3 + 48);
      if (*(_BYTE*)(v6 + v2) != 0) {
        v7 = *(_DWORD*)(v6 + v2 + 4);
        if (v7 != 0 && *v5 != 0) {
          v10[1] = &GameData_1a9f09e;
          v10[0] = v7;
          if (SpotMgr_132ffa0(v10) == v1) {
            break;
          }
        }
      }
      v2 += 8;
      if (v2 == 2400) {
        return *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                          8LL * *(unsigned __int8*)v4);
      }
    }
    v4 = (__int64*)(*(_QWORD*)(v3 + 48) + v2);
  }
  else {
    v4 = GameData_212ceb0;
  }
  return *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                    8LL * *(unsigned __int8*)v4);
}

bool SpotAttachmentExplore_15199c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int8 v5;
  __int64 v6;
  unsigned __int8* v7;
  int v8;
  __int64 v9;
  unsigned __int8 v10;
  __int64 v11;
  unsigned __int8* v12;
  int v13;
  __int64 v14;
  unsigned __int8 v15;
  __int64 v16;
  unsigned __int8* v17;
  int v18;
  __int64 v19;
  unsigned __int8* v20;
  __int64 v21;
  int v22;
  int v23;
  _BOOL8 result;
  __int64 v26;
  unsigned __int8* v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v32;
  unsigned __int8* v33;
  __int64 v34;
  int v35;
  int v36;

  v4 = game_gmap_SpotAttachmentExplore_GetData_alt1();
  v5 = Impl_13261c0_alt1(a1);
  v6 = *(unsigned __int16*)(v4 + 48);
  if (*(_WORD*)(v4 + 48) == 0) {
  LABEL_5:
    v9 = game_gmap_SpotAttachmentDungeon_GetData_alt1();
    v10 = Impl_13261c0_alt1(a1);
    v11 = *(unsigned __int16*)(v9 + 48);
    if (*(_WORD*)(v9 + 48) != 0) {
      v12 = *(unsigned __int8**)(v9 + 56);
      while (1) {
        v13 = *v12++;
        if (v13 == v10) {
          break;
        }
        if (--v11 == 0) {
          goto LABEL_9;
        }
      }
      if (*(_QWORD*)(a2 + 64) != 0) {
        v26 = SpotAttachmentDungeon_151b000_alt1();
        if (*(_WORD*)(v26 + 32) != 0) {
          v27 = *(unsigned __int8**)(v26 + 40);
          v28 = *(unsigned __int16*)(v26 + 32) - 1LL;
          v29 = *(unsigned __int8*)(*(_QWORD*)(a2 + 64) + 250LL);
          do {
            v30 = *v27++;
            result = v30 == v29;
          } while (v30 != v29 && v28-- != 0);
          return result;
        }
      }
    }
    else {
    LABEL_9:
      v14 = game_gmap_SpotAttachmentFort_GetData_alt1();
      v15 = Impl_13261c0_alt1(a1);
      v16 = *(unsigned __int16*)(v14 + 48);
      if (*(_WORD*)(v14 + 48) != 0) {
        v17 = *(unsigned __int8**)(v14 + 56);
        while (1) {
          v18 = *v17++;
          if (v18 == v15) {
            break;
          }
          if (--v16 == 0) {
            return false;
          }
        }
        if (*(_QWORD*)(a2 + 64) != 0) {
          v32 = SpotAttachmentFort_151b980_alt1();
          if (*(_WORD*)(v32 + 32) != 0) {
            v33 = *(unsigned __int8**)(v32 + 40);
            v34 = *(unsigned __int16*)(v32 + 32) - 1LL;
            v35 = *(unsigned __int8*)(*(_QWORD*)(a2 + 64) + 250LL);
            do {
              v36 = *v33++;
              result = v36 == v35;
            } while (v36 != v35 && v34-- != 0);
            return result;
          }
        }
      }
    }
    return false;
  }
  v7 = *(unsigned __int8**)(v4 + 56);
  while (1) {
    v8 = *v7++;
    if (v8 == v5) {
      break;
    }
    if (--v6 == 0) {
      goto LABEL_5;
    }
  }
  if (*(_QWORD*)(a2 + 64) == 0) {
    return false;
  }
  v19 = SpotAttachmentExplore_151a420();
  if (*(_WORD*)(v19 + 32) == 0) {
    return false;
  }
  v20 = *(unsigned __int8**)(v19 + 40);
  v21 = *(unsigned __int16*)(v19 + 32) - 1LL;
  v22 = *(unsigned __int8*)(*(_QWORD*)(a2 + 64) + 250LL);
  do {
    v23 = *v20++;
    result = v23 == v22;
  } while (v23 != v22 && v21-- != 0);
  return result;
}

__int64 SpotAttachmentExplore_151a420()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1ab7f34);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21c9ed0 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21c9ed0 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ed0 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  return v6[3];
                }
              }
              else if ((v9 & v3) != v4) {
                return 0;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return v8;
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
                return v6[3];
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return 0;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 SpotAttachmentExplore_151a540()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  unsigned __int8 v11;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    while (v2 != v3) {
      v5 = *v2++;
      v4 = v5;
      if (*(_DWORD*)(v5 + 84) == v1) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v4 = *v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v6 = *(_QWORD*)(game_gmap_SpotAttachmentExplore_GetData_alt1() + 40);
  v11 = 0;
  v9_.v9[0] = GameData_202c698;
  v9_.v9[1] = &v11;
  v9_.v10 = v9_.v9;
  v9_.v9[2] = v6;
  Troop_133ed80(v4, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v7 = 32;
    goto LABEL_16;
  }
  if (v9_.v10 != nullptr) {
    v7 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v9_.v10 + v7))((__int64)v9_.v10);
  }
  return v11;
}

void SpotAttachmentExplore_Unknown17(__int64* a1, int a2)
{
  __int16* v3;
  __int64 v4;
  __int64 v6;
  __int16* v7;
  __int64 v8;
  char v9;
  __int64 v10;
  int v12;

  v3 = (__int16*)a1 + 10;
  {
    v4 = *((__int16*)a1 + 10);
    __asm__ volatile("" ::"r"(v4));
  }
  {
    v6 = *((__int16*)a1 + 11);
    __asm__ volatile("" ::"r"(v6));
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v7 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((v6 << 24) + (v4 << 32) + ((__int64)v3[2] << 18) +
          ((__int64)v3[3] << 12) + ((__int64)v3[4] << 6) + v3[5] >=
      (unsigned __int64)(((__int64)v7[1] << 24) + ((__int64)*v7 << 32) +
                         ((__int64)v7[2] << 18) + ((__int64)v7[3] << 12) +
                         ((__int64)v7[4] << 6) + v7[5])) {
    a2 += ~(unsigned int)Dir_70e760(v7, v3);
  }
  {
    v8 = a1[4];
    __asm__ volatile("" ::"r"(v8));
  }
  v9 = Impl_13261c0_alt1(v8);
  if (a2 >= 1) {
    {
      v10 = *(_QWORD*)(v8 + 144);
      __asm__ volatile("" ::"r"(v10));
    }
    if (v9 == 5 && v10 != 0) {
      do {
        if ((*(unsigned int (**)(__int64*))(*a1 + 256))(a1) == 0) {
          break;
        }
        v12 = (*(__int64 (**)(__int64*))(*a1 + 240))(a1);
        GmapExploreInfo_135d220(v10, a1 + 6, v12);
        --a2;
      } while (a2 != 0);
    }
  }
}

__int64 SpotAttachmentExplore_Unknown30(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  __int64 v10;
  int v11;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
  v2 = GameRoutine_151a420();
  v3 = *(unsigned __int8*)(v1 + 50);
  if (v3 >= 3) {
    if (v3 >= 5) {
      if (v3 >= 7) {
        if (v3 >= 9) {
          v6 = v3 >= 0xB;
          v4 = 4;
          if (v6) {
            v4 = 5;
          }
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
        else {
          v4 = 3;
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
      }
      else {
        v4 = 2;
        v5 = *(_QWORD*)(v1 + 64);
        if (v5 == 0) {
          goto LABEL_21;
        }
      }
    }
    else {
      v4 = 1;
      v5 = *(_QWORD*)(v1 + 64);
      if (v5 == 0) {
        goto LABEL_21;
      }
    }
  }
  else {
    v4 = 0;
    v5 = *(_QWORD*)(v1 + 64);
    if (v5 == 0) {
      goto LABEL_21;
    }
  }
  v7 = *(unsigned __int16*)(v2 + 32);
  if (*(_WORD*)(v2 + 32) == 0) {
  LABEL_21:
    v10 = 72;
    return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
  }
  v8 = *(unsigned __int8**)(v2 + 40);
  v9 = *(unsigned __int8*)(v5 + 250);
  v10 = 72;
  while (1) {
    v11 = *v8++;
    if (v11 == v9) {
      break;
    }
    if (--v7 == 0) {
      return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
    }
  }
  v10 = 56;
  return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
}

void SpotAttachmentExplore_Unknown40(_QWORD* a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  int* v17;
  __int64 v18;
  int* v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  int v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  _QWORD* v47;
  bool v48;
  unsigned __int64 v49;
  _QWORD* v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  _QWORD* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  struct {
    __int64 v85;
    __int64 v86;
    __int64 v87;
  } v85_;
  unsigned __int64 v88[2];

  v2 = game_HashString_alt1((__int64)&GameData_1ac136e);
  if (v2 == 0) {
    goto LABEL_25;
  }
  v3 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v3 == 0 | *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_25;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v6);
  if (v7 == nullptr || (v8 = (_QWORD*)*v7) == nullptr) {
  LABEL_25:
    v10 = 0;
    goto LABEL_26;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v11 = v8[1];
      if (v11 == v2) {
        if (v8[2] == v2) {
          goto LABEL_136;
        }
      }
      else if ((v11 & v5) != v6) {
        goto LABEL_25;
      }
      v8 = (_QWORD*)*v8;
      v10 = 0;
      if (v8 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_25;
    }
  LABEL_15:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v8[2] != v2) {
    goto LABEL_15;
  }
LABEL_136:
  v10 = v8[3];
LABEL_26:
  v85_.v86 = 0;
  v85_.v87 = 0;
  v85_.v85 = 0;
  v12 = *(_QWORD**)(*(_QWORD*)GameData_212d740[0] + 8LL);
  v14 = v12[3];
  v13 = v12[4];
  v15 = v12[1];
  v16 = (int*)(v12 + 6);
  v17 = (int*)v12 + 13;
  if (v13 == v14) {
    v18 = *v12;
  }
  else {
    v15 = v12[4];
    v18 = v12[3];
  }
  if (v13 == v14) {
    v19 = v16;
  }
  else {
    v19 = v17;
  }
  v20 = *v19;
  if (0xAAAAAAAAAAAAAAABLL * ((v15 - v18) >> 3) <= v20) {
    v26 = 0;
    v25 = 0;
  }
  else {
    v21 = (unsigned __int8*)(v18 + 24LL * (int)v20);
    v22 = *v21;
    if ((v22 & 1) != 0) {
      v23 = *((_QWORD*)v21 + 2);
    }
    else {
      v23 = (__int64)(v21 + 1);
    }
    if ((v22 & 1) != 0) {
      v24 = *((_QWORD*)v21 + 1);
    }
    else {
      v24 = v22 >> 1;
    }
    RuntimeBuffer_8924a0_alt1((__int64)&v85_.v85, v23, v24, 0x2Fu);
    v26 = v85_.v85;
    v25 = v85_.v86;
  }
  if (0xAAAAAAAAAAAAAAABLL * ((v25 - v26) >> 3) < 4) {
    v28 = 0;
  }
  else {
    if ((*(_BYTE*)(v26 + 72) & 1) != 0) {
      v27 = *(const char**)(v26 + 88);
    }
    else {
      v27 = (const char*)(v26 + 73);
    }
    v28 = atoi_alt1(v27);
    if ((*(_BYTE*)(v26 + 48) & 1) != 0) {
      v29 = *(_QWORD*)(v26 + 64);
    }
    else {
      v29 = v26 + 49;
    }
    v30 = game_HashString_alt1(v29);
    if (v30 != 0) {
      v31 = *(_QWORD*)(GameData_21c99b8 + 96);
      if (v31 != 0 & *(_QWORD*)(GameData_21c99b8 + 112) != 0) {
        v33 = v31 - 1;
        if ((v31 & (v31 - 1)) != 0) {
          v34 = v30;
          if (v30 >= v31) {
            v34 = v30 % v31;
          }
        }
        else {
          v34 = v33 & v30;
        }
        v35 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v34);
        if (v35 != nullptr) {
          v36 = (_QWORD*)*v35;
          if (v36 != nullptr) {
            if ((v31 & v33) == 0) {
              while (1) {
                v38 = v36[1];
                if (v38 == v30) {
                  if (v36[2] == v30) {
                    goto LABEL_137;
                  }
                }
                else if ((v38 & v33) != v34) {
                  goto LABEL_73;
                }
                v36 = (_QWORD*)*v36;
                if (v36 == nullptr) {
                  goto LABEL_73;
                }
              }
            }
            do {
              v37 = v36[1];
              if (v37 == v30) {
                if (v36[2] == v30) {
                LABEL_137:
                  v10 = v36[3];
                  goto LABEL_74;
                }
              }
              else {
                if (v37 >= v31) {
                  v37 %= v31;
                }
                if (v37 != v34) {
                  break;
                }
              }
              v36 = (_QWORD*)*v36;
            } while (v36 != nullptr);
          }
        }
      }
    }
  LABEL_73:
    v10 = 0;
  }
LABEL_74:
  v39 = -1;
  do {
    v88[1] = (unsigned __int64)&GameData_1ab1630;
    v42 = game_HashString_alt1((__int64)&GameData_1ab1630);
    v43 = game_GameModeData_instance_;
    v88[0] = v42;
    if (game_GameModeData_instance_ != 0) {
      v44 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v88);
      if (v44 != 0) {
        v43 = *(_DWORD*)(v44 + 32);
      }
      else {
        v43 = 0;
      }
    }
    if (++v39 >= v43) {
      break;
    }
    if ((*(int (**)(_QWORD*))(*a1 + 248LL))(a1) < v28 ||
        ((v45 = a1[4], v46 = (unsigned __int8)Impl_13261c0_alt1(v45),
          v47 = *(_QWORD**)(v45 + 144), v46 == 5)
             ? (v48 = v47 == nullptr)
             : (v48 = true),
         v48)) {
      v50 = (_QWORD*)a1[7];
      v49 = a1[8];
      if ((unsigned __int64)v50 < v49) {
        *v50 = v10;
        v40 = (__int64)(v50 + 1);
      }
      else {
        v51 = a1[6];
        v52 = (char*)v50 - v51;
        v53 = ((__int64)v50 - v51) >> 3;
        v54 = v53 + 1;
        if ((unsigned __int64)(v53 + 1) >> 61 != 0) {
          goto LABEL_138;
        }
        v55 = v49 - v51;
        if (v55 >> 2 > v54) {
          v54 = v55 >> 2;
        }
        if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF8LL) {
          v56 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v56 = v54;
        }
        if (v56 != 0) {
          if (v56 >> 61 != 0) {
            goto LABEL_139;
          }
          v57 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v56, 16, 0);
        }
        else {
          v57 = 0;
        }
        v63 = v57 + 8 * v56;
        v64 = (unsigned __int64)v50 - v51;
        v65 = (__int64)&v52[v57 + -8 * v53];
        *(_QWORD*)&v52[v57] = v10;
        v40 = (__int64)&v52[v57 + 8];
        memcpy_alt1(v65, v51, v64);
        a1[6] = v65;
        a1[7] = v40;
        a1[8] = v63;
        if (v51 != 0) {
          v66 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v51);
        }
      }
    }
    else {
      v58 = v28;
      v59 = v10;
      v60 = *(_QWORD*)(GmapExploreInfo_135c2e0_alt1(v47, 0, 0) + 48);
      v62 = (_QWORD*)a1[7];
      v61 = a1[8];
      if ((unsigned __int64)v62 >= v61) {
        v67 = a1[6];
        v68 = (char*)v62 - v67;
        v69 = ((__int64)v62 - v67) >> 3;
        v70 = v69 + 1;
        if ((unsigned __int64)(v69 + 1) >> 61 != 0) {
        LABEL_138:
          GameRoutine_6e5c60_alt1();
        }
        v71 = v61 - v67;
        if (v71 >> 2 > v70) {
          v70 = v71 >> 2;
        }
        if ((unsigned __int64)v71 >= 0x7FFFFFFFFFFFFFF8LL) {
          v72 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v72 = v70;
        }
        if (v72 != 0) {
          if (v72 >> 61 != 0) {
          LABEL_139:
            GameRoutine_60a210_alt1();
          }
          v73 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v72, 16, 0);
        }
        else {
          v73 = 0;
        }
        v74 = v73 + 8 * v72;
        v75 = (unsigned __int64)v62 - v67;
        v76 = (__int64)&v68[v73 + -8 * v69];
        *(_QWORD*)&v68[v73] = v60;
        v40 = (__int64)&v68[v73 + 8];
        memcpy_alt1(v76, v67, v75);
        a1[6] = v76;
        a1[7] = v40;
        a1[8] = v74;
        if (v67 != 0) {
          v77 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v77 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v67);
        }
        v10 = v59;
        v28 = v58;
      }
      else {
        *v62 = v60;
        v40 = (__int64)(v62 + 1);
        v10 = v59;
        v28 = v58;
      }
    }
    v41 = *a1;
    a1[7] = v40;
  } while ((*(unsigned int (**)(_QWORD*))(v41 + 256))(a1) != 0);
  v78 = v85_.v85;
  if (v85_.v85 != 0) {
    v79 = v85_.v86;
    if (v85_.v85 == v85_.v86) {
      goto LABEL_132;
    }
    v80 = v85_.v86;
    do {
      v81 = *(_BYTE*)(v80 - 24);
      v80 -= 24;
      if ((v81 & 1) != 0) {
        v82 = *(_QWORD*)(v79 - 8);
        if (v82 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v83 = 128;
          }
          else {
            v83 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v83,
                                             v82);
        }
      }
      v79 = v80;
    } while (v80 != v78);
    v85_.v86 = v78;
    v78 = v85_.v85;
    if (v85_.v85 != 0) {
    LABEL_132:
      v84 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v84 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, v78);
    }
  }
}

void SpotAttachmentExplore_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v10;
  unsigned int v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    unsigned int v18[2];
    char* v19;
  } v18_;

  v1 = a1[4];
  *a1 = &game_gmap_SpotAttachmentDispatch_vtable;
  if (v1 != 0) {
    v3 = 0;
    v4 = GameData_212cf80[0];
    v5 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
    v6 = GameData_212c780;
    while (1) {
      v7 = *(_QWORD*)(v5 + 48);
      if (*(_BYTE*)(v7 + v3) != 0) {
        v8 = *(_DWORD*)(v7 + v3 + 4);
        if (v8 != 0 && *v6 != 0) {
          v18_.v19 = &GameData_1a9f09e;
          v18_.v18[0] = v8;
          v18_.v18[1] = 0;
          if (SpotMgr_132ffa0_alt1(v18_.v18) == v1) {
            break;
          }
        }
      }
      v3 += 8;
      if (v3 == 2400) {
        goto LABEL_19;
      }
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 48LL) + v3;
    v11 = *(_DWORD*)(v10 + 4);
    if (v11 != 0 && *v6 != 0) {
      v18_.v19 = &GameData_1a9f09e;
      v18_.v18[0] = v11;
      v18_.v18[1] = 0;
      if (SpotMgr_132ffa0_alt1(v18_.v18) != 0) {
        *(_DWORD*)(v10 + 4) = 0;
      }
    }
  }
LABEL_19:
  v13 = a1[6];
  v14 = fw_memory_g_heap_manager_ptr;
  if (v13 != 0) {
    v15 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v13;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v15 + v16, v13);
  }
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v17, (__int64)a1);
}

#pragma GCC visibility pop
