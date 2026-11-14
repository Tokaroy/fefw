#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* GameRoutine_81e220(__int64*, _QWORD*);
_QWORD* GameRoutine_cfad30(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64* GameRoutine_18d0ec0(_QWORD*, unsigned __int8*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 AIThink_1207c40(__int64, int, int, unsigned int, unsigned int);
__int64 BaseNx_278c70(__int64, __int64);
__int64 BaseNx_2ae880(__int64*);
__int64 BattleInfo_796f20(__int64 result, __int64);
__int64 CharacterModel_cf4780(__int64);
__int64 CmdBtlSkipInput_1006910(__int64 result);
__int64 CombatSequenceImpl_10d5500();
__int64 CombatSequenceImpl_10d5530();
__int64 CombatSequenceImpl_10d5570();
__int64 CombatSequenceImpl_10d5610();
__int64 CombatSequenceImpl_10d5690();
__int64 CombatSequenceImpl_10d5820();
__int64 CombatSequenceImpl_10d58c0();
__int64 CombatSequenceImpl_10d59f0();
__int64 CombatSequenceImpl_10d5ea0();
__int64 CombatSequenceImpl_10d6170();
__int64 CombatSequenceImpl_10d6360();
__int64 CombatSequenceImpl_10d64b0();
__int64 CombatSequenceImpl_10d6630();
__int64 GameConverge_8ea270(__int64, unsigned int, __int64);
__int64 GameHr_10784f0(__int64, int, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_19ae900(__int64 result, int);
__int64 GameHr_29ecc0(_QWORD*, int, __int64*, __int64, __int64);
__int64 GameHr_2ae3e0(_QWORD*, int, _BYTE*, __int64);
__int64 GameHr_6c47b0(__int64, _BYTE*, char, char);
__int64 GameHr_eacc20(__int64, unsigned int, unsigned int, unsigned int);
__int64 GameRoutine_106b7b0(_QWORD*);
__int64 GameRoutine_109d160(_QWORD*, __int64);
__int64 GameRoutine_10d5560();
__int64 GameRoutine_10d55f0();
__int64 GameRoutine_10d6490();
__int64 GameRoutine_11d0d00(__int64, char);
__int64 GameRoutine_11d0dc0(__int64);
__int64 GameRoutine_11d0e50(__int64);
__int64 GameRoutine_120f3d0(__int64 result);
__int64 GameRoutine_181ab60(__int64 result);
__int64 GameRoutine_27e290(__int64 result);
__int64 GameRoutine_2adfb0(__int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_8f31e0(_QWORD*, unsigned __int64*);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 GameRoutine_e18130(__int64 result);
__int64 Impl_13261c0(__int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 MapUtil_753bb0(__int64 result);
__int64 ProcCmdBtlSeqBattle_e6b430(__int64);
__int64 ProcGameUIFade_15e1b80(__int64 result, unsigned int, unsigned int,
                               unsigned int, __int64);
__int64 RidePool_93cd60(_QWORD*, __int64);
__int64 RidePool_93e320(__int64, __int64, __int64, unsigned int, _DWORD*);
__int64 RidePool_93e660(_QWORD*, _BYTE*);
__int64 Seq_11cffe0(__int64, float, float, float);
__int64 SequenceNoteOnCallback_292500(__int64, int, _QWORD*, __int64);
__int64 SequenceNoteOnCallback_292580(__int64 result, __int64*, __int64);
__int64 SequenceSoundRuntime_291e40(__int64, int, int, _BYTE*, __int64);
__int64 SideStoryFile_12ae4c0(unsigned __int8);
__int64 SoundArchivePlayer_279ee0(__int64, __int64, _WORD*, __int64);
__int64 SoundArchivePlayer_27ea20(__int64 result, __int64*, __int64);
__int64 SoundArchivePlayer_29f660(__int64 result, __int64*, __int64);
__int64 SoundArchivePlayer_2aea40(__int64 result, __int64*, __int64);
__int64 SoundThread_2a1f40(__int64, __int64);
__int64 TargetEnumerator_77c150(__int64 result, __int64*, int, int);
__int64 TargetEnumerator_77e300(__int64, _WORD*, __int64);
__int64 UnitActor_81e020(__int64 result, __int64*);
__int64 UnitItemList_710ea0(__int64 result);
__int64 Unit_6c9ef0(__int64);
__int64 Unit_6cb490(__int64);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_809ba0(__int64, float);
__int64 game_932d40(unsigned __int8*);
__int64 game_AIThink_ToBreak(__int64 (**)(), int, int);
__int64 game_AIThink_ToDestroyImpl(_QWORD*, int, int, __int64 (**)());
__int64 game_GameConverge_Impl_TryJoin_closure0_Invoke(__int64, __int64*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitActor_FuncBuildCompleteSubscribe(_QWORD*, _QWORD*);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_SetPollution(__int64, int);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_combat_CombatSequenceImpl_DieTalkOrNothing();
__int64 game_combat_CombatUniverse_Setup(__int64, __int64*);
__int64 game_cutscene_181acc0(__int64 result);
__int64 game_gameui_19ae1e0(__int64 result);
__int64 game_gmap_13339e0();
__int64 game_zview_cf27d0(__int64, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_SleepThread(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_playAt_ff5f0(__int64, __int64, __int64, float, float, __int64,
                         unsigned int, unsigned int, int);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool AIThink_11fd9e0(__int64, __int64);
bool GameHr_27e5d0(__int64, int, _BYTE*, __int64);
bool GameRoutine_ceede0(__int64, unsigned __int64*, float);
bool game_HasSkill(_QWORD*, _DWORD*);
bool game_Unit_Unknown6c90c0(__int64);
char* CharacterModel_cf5da0(__int64);
const char* GameConst_7f8760(unsigned __int8);
const char* game_HashString32(const char* result);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_1aa5cc9;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN GameData_2235e18;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1fabfa0[])();
extern __int64 (*GameData_1fac020[])();
extern __int64 (*GameData_1fd82e0[])();
extern __int64 (*GameData_1fd8330[])();
extern __int64 (*GameData_1fd83b0[])();
extern __int64 (*GameData_1fd8400[])();
extern __int64 (*GameData_200ba78[])();
extern __int64 (*GameData_200bae8[])();
extern __int64 (*GameData_20187e8[])();
extern __int64 (*GameData_2019178[])();
extern __int64 (*GameData_2019208[])();
extern __int64 (*GameData_212c640[2])();
extern __int64 (*GameData_212c648)();
extern __int64 (*game_11f3740_ptr[7])();
extern __int64 (*game_combat_CombatSequenceImpl_vtable[])();
extern __int64* GameData_212c598[2];
extern __int64* GameData_212c628;
extern __int64* GameData_212c780;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c890[3];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d448[9];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_2130910[7];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21c99a8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd158;
extern __int64 GameData_21d3f90;
extern __int64 GameData_2203490;
extern __int64 GameData_220b6f0;
extern __int64 GameData_22190c0;
extern __int64 GameData_22357a0;
extern __int64 GameData_22357a8;
extern __int64 GameData_22357b0;
extern __int64 GameData_22357c0;
extern __int64 GameData_22357d0;
extern __int64 GameData_22357e0;
extern __int64 GameData_22357e8;
extern __int64 GameData_22357f0;
extern __int64 GameData_2235800;
extern __int64 GameData_2235810;
extern __int64 GameData_2235820;
extern __int64 GameData_2235828;
extern __int64 GameData_2235840;
extern __int64 GameData_2235850;
extern __int64 GameData_2235860;
extern __int64 GameData_2235868;
extern __int64 GameData_2235870;
extern __int64 GameData_2235880;
extern __int64 GameData_2235890;
extern __int64 GameData_22358a0;
extern __int64 GameData_22358a8;
extern __int64 GameData_22358b0;
extern __int64 GameData_22358c0;
extern __int64 GameData_22358d0;
extern __int64 GameData_22358e0;
extern __int64 GameData_22358e8;
extern __int64 GameData_22358f0;
extern __int64 GameData_2235900;
extern __int64 GameData_2235910;
extern __int64 GameData_2235920;
extern __int64 GameData_2235928;
extern __int64 GameData_2235940;
extern __int64 GameData_2235950;
extern __int64 GameData_2235960;
extern __int64 GameData_2235968;
extern __int64 GameData_2235970;
extern __int64 GameData_2235980;
extern __int64 GameData_2235990;
extern __int64 GameData_22359a0;
extern __int64 GameData_22359a8;
extern __int64 GameData_22359b0;
extern __int64 GameData_22359c0;
extern __int64 GameData_22359d0;
extern __int64 GameData_22359e0;
extern __int64 GameData_22359e8;
extern __int64 GameData_22359f0;
extern __int64 GameData_2235a00;
extern __int64 GameData_2235a10;
extern __int64 GameData_2235a20;
extern __int64 GameData_2235a28;
extern __int64 GameData_2235a30;
extern __int64 GameData_2235a40;
extern __int64 GameData_2235a50;
extern __int64 GameData_2235a60;
extern __int64 GameData_2235a68;
extern __int64 GameData_2235a70;
extern __int64 GameData_2235a80;
extern __int64 GameData_2235a90;
extern __int64 GameData_2235aa0;
extern __int64 GameData_2235aa8;
extern __int64 GameData_2235ab0;
extern __int64 GameData_2235ac0;
extern __int64 GameData_2235ad0;
extern __int64 GameData_2235ae0;
extern __int64 GameData_2235ae8;
extern __int64 GameData_2235af0;
extern __int64 GameData_2235b00;
extern __int64 GameData_2235b10;
extern __int64 GameData_2235b20;
extern __int64 GameData_2235b28;
extern __int64 GameData_2235b30;
extern __int64 GameData_2235b40;
extern __int64 GameData_2235b50;
extern __int64 GameData_2235b60;
extern __int64 GameData_2235b68;
extern __int64 GameData_2235b70;
extern __int64 GameData_2235b80;
extern __int64 GameData_2235b90;
extern __int64 GameData_2235ba0;
extern __int64 GameData_2235ba8;
extern __int64 GameData_2235bb0;
extern __int64 GameData_2235bc0;
extern __int64 GameData_2235bd0;
extern __int64 GameData_2235be0;
extern __int64 GameData_2235be8;
extern __int64 GameData_2235bf0;
extern __int64 GameData_2235c00;
extern __int64 GameData_2235c10;
extern __int64 GameData_2235c20;
extern __int64 GameData_2235c28;
extern __int64 GameData_2235c30;
extern __int64 GameData_2235c40;
extern __int64 GameData_2235c50;
extern __int64 GameData_2235c60;
extern __int64 GameData_2235c68;
extern __int64 GameData_2235c70;
extern __int64 GameData_2235c80;
extern __int64 GameData_2235c90;
extern __int64 GameData_2235ca0;
extern __int64 GameData_2235ca8;
extern __int64 GameData_2235cb0;
extern __int64 GameData_2235cc0;
extern __int64 GameData_2235cd0;
extern __int64 GameData_2235ce0;
extern __int64 GameData_2235ce8;
extern __int64 GameData_2235cf0;
extern __int64 GameData_2235d00;
extern __int64 GameData_2235d10;
extern __int64 GameData_2235d20;
extern __int64 GameData_2235d28;
extern __int64 GameData_2235d30;
extern __int64 GameData_2235d40;
extern __int64 GameData_2235d50;
extern __int64 GameData_2235d60;
extern __int64 GameData_2235d68;
extern __int64 GameData_2235d70;
extern __int64 GameData_2235d80;
extern __int64 GameData_2235d90;
extern __int64 GameData_2235da0;
extern __int64 GameData_2235da8;
extern __int64 GameData_2235db0;
extern __int64 GameData_2235dc0;
extern __int64 GameData_2235dd0;
extern __int64 GameData_2235de0;
extern __int64 GameData_2235de8;
extern __int64 GameData_2235df0;
extern __int64 GameData_2235e00;
extern __int64 GameData_2235e10;
extern __int64 GameData_2235e20;
extern __int64 GameData_2240050;
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_g_game_setting_ptr;
extern char GameData_1a94a43[];
extern char GameData_1a9f09e;
extern char GameData_21f42c0;
extern char GameData_2235798;
extern char GameData_22357d8;
extern char GameData_2235818;
extern char GameData_2235858;
extern char GameData_2235898;
extern char GameData_22358d8;
extern char GameData_2235918;
extern char GameData_2235958;
extern char GameData_2235998;
extern char GameData_22359d8;
extern char GameData_2235a18;
extern char GameData_2235a58;
extern char GameData_2235a98;
extern char GameData_2235ad8;
extern char GameData_2235b18;
extern char GameData_2235b58;
extern char GameData_2235b98;
extern char GameData_2235bd8;
extern char GameData_2235c18;
extern char GameData_2235c58;
extern char GameData_2235c98;
extern char GameData_2235cd8;
extern char GameData_2235d18;
extern char GameData_2235d58;
extern char GameData_2235d98;
extern char GameData_2235dd8;
extern int GameData_21d92e0;
extern int GameData_22357b8;
extern int GameData_22357c8;
extern int GameData_22357f8;
extern int GameData_2235808;
extern int GameData_2235838;
extern int GameData_2235848;
extern int GameData_2235878;
extern int GameData_2235888;
extern int GameData_22358b8;
extern int GameData_22358c8;
extern int GameData_22358f8;
extern int GameData_2235908;
extern int GameData_2235938;
extern int GameData_2235948;
extern int GameData_2235978;
extern int GameData_2235988;
extern int GameData_22359b8;
extern int GameData_22359c8;
extern int GameData_22359f8;
extern int GameData_2235a08;
extern int GameData_2235a38;
extern int GameData_2235a48;
extern int GameData_2235a78;
extern int GameData_2235a88;
extern int GameData_2235ab8;
extern int GameData_2235ac8;
extern int GameData_2235af8;
extern int GameData_2235b08;
extern int GameData_2235b38;
extern int GameData_2235b48;
extern int GameData_2235b78;
extern int GameData_2235b88;
extern int GameData_2235bb8;
extern int GameData_2235bc8;
extern int GameData_2235bf8;
extern int GameData_2235c08;
extern int GameData_2235c38;
extern int GameData_2235c48;
extern int GameData_2235c78;
extern int GameData_2235c88;
extern int GameData_2235cb8;
extern int GameData_2235cc8;
extern int GameData_2235cf8;
extern int GameData_2235d08;
extern int GameData_2235d38;
extern int GameData_2235d48;
extern int GameData_2235d78;
extern int GameData_2235d88;
extern int GameData_2235db8;
extern int GameData_2235dc8;
extern int GameData_2235df8;
extern int GameData_2235e08;
extern unsigned int GameData_1a83140[4];
float* GameRoutine_59fe80(float* result, float, float);
int __cxa_guard_acquire(__int64);
int strcmp(const char*, const char*);
int toupper(int);
unsigned __int64 strlen(const char*);
void* BaseNx_2a1b90();
void AIDeploy_1274c80(_QWORD*, __int64, int, unsigned int*);
void AIDeploy_1274f90(_QWORD*, __int64, int, unsigned int*);
void AIDeploy_1275160(_QWORD*, __int64, int, int, int, unsigned int*);
void GameHr_8679c0();
void GameHr_a5aca0(__int64);
void GameRoutine_18c9f10(__int64, char, int, int, char);
void GameRoutine_6e3b50(__int64, _QWORD*);
void GameRoutine_6e5a40(__int64*, unsigned __int64, _DWORD*);
void GameRoutine_7d6200(__int64*, _DWORD*);
void GameRoutine_8232c0(__int64*);
void GameRoutine_82f300(__int64*, unsigned __int64);
void GameRoutine_867df0();
void Seq_11d0af0(__int64);
void Unit_6db740(__int64, char, char);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) GameRoutine_892740();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_ffa3e0(_QWORD*, _QWORD*, _DWORD*);
void game_zview_cf7200(__int64, float32x4_t*, float32x4_t*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_279c80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    int a6, __int64 a7);
__int64 game_2ae7a0(__int64* a1);
__int64 game_5a42b0(__int64 a1, int a2);
__int64 game_5a65c0(__int64 a1, int a2);
__int64 game_6d00c0(__int64 a1);
__int64 game_7810b0(__int64 a1, int* a2, int* a3);
__int64 game_7815e0(__int64 a1, int* a2, int* a3);
__attribute__((swiftcall)) void game_7f8880(PSEUDO_X8 x8_, unsigned __int8 a1);
void game_82eee0(__int64 a1);
__int64 game_8ea690(__int64 a1, unsigned int a2, unsigned __int64* a3, char a4,
                    char a5);
__attribute__((swiftcall)) void game_93c6a0(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned __int8* a2, __int64 a3,
                                            char a4);
__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2);
void game_cf8840(__int64 a1);
__int64 game_e17bc0(__int64 a1);
__int64 game_e6c240(__int64 a1, __int64 a2);
float game_1062d90(float* a1, float* a2);
__int64 game_10d4da0(__int64 a1, __int64* a2, __int64 a3);
void game_11ce900(__int64 a1);
__int64 game_11fa1c0(__int64 a1, int a2, __int64 a3, __int64 a4);
__int64 game_1207aa0(__int64 a1, int a2, int a3, unsigned int a4,
                     unsigned int a5, char a6);
__attribute__((swiftcall)) void game_127c600(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned int a2);
void game_13602c0(__int64 a1);
__int64 game_18c2620(__int64 a1);

__int64 game_279c80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    int a6, __int64 a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v10;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  int v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v24_;
  __int64 v29[3];
  __int64 v30;

  if ((a3 & 0xFFF) != 0) {
    return 0;
  }
  v29[1] = v7;
  v29[2] = v8;
  v10 = a3 + a4;
  v29[0] = a3;
  if ((SoundArchivePlayer_279ee0(a1, a2, v29, a3 + a4) & 1) == 0) {
    return 0;
  }
  v24_.v27 = 0;
  v24_.v28 = 0;
  v24_.v25 = 0;
  v24_.v26 = 0;
  v24_.v24 = 0;
  if ((BaseNx_278c70(a2, (__int64)&v24_.v24) & 1) != 0) {
    if ((GameHr_29ecc0((_QWORD*)(a1 + 528), v24_.v25, v29, v10, a7) & 1) == 0) {
      return 0;
    }
    v16 = v24_.v24;
    v17 = HIDWORD(v24_.v28);
    *(_BYTE*)(a1 + 794) = v24_.v28;
    if ((SequenceSoundRuntime_291e40(a1 + 80, v16, v17, v29, v10) & 1) == 0) {
      return 0;
    }
    if (*(_BYTE*)(a1 + 794) == 1) {
      if (!GameHr_27e5d0(a1 + 464, SHIDWORD(v24_.v26), v29, v10)) {
        return 0;
      }
    }
    else if ((GameHr_2ae3e0((_QWORD*)(a1 + 320), SHIDWORD(v24_.v26), v29, v10) &
              1) == 0) {
      return 0;
    }
    if ((SequenceNoteOnCallback_292500(a1 + 80, SHIDWORD(v24_.v24), v29, v10) &
         1) == 0) {
      return 0;
    }
  }
  if (a6 >= 1) {
    v18 = v29[0];
    if ((v29[0] & 0x3F) != 0 ||
        v29[0] + ((112LL * (unsigned int)a6 + 63) & 0x7FFFFFFFC0LL) - v10 > 0) {
      return 0;
    }
    v19 = 0;
    v20 = 0;
    v29[0] += (112LL * (unsigned int)a6 + 63) & 0x7FFFFFFFC0LL;
    *(_QWORD*)(a1 + 736) = v18;
    *(_DWORD*)(a1 + 728) = a6;
    do {
      GameRoutine_27e290(*(_QWORD*)(a1 + 736) + v19);
      ++v20;
      v19 += 112;
    } while (v20 < *(int*)(a1 + 728));
  }
  if (a5 != 0) {
    if ((v29[0] & 0x3F) != 0) {
      return 0;
    }
    v30 = v29[0];
    v21 = (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL;
    v22 = *(unsigned __int8*)(a1 + 794);
    v29[0] +=
        v21 * (SHIDWORD(v24_.v26) + (__int64)(int)v24_.v24 + (int)v24_.v25);
    if (v22 == 1) {
      SoundArchivePlayer_27ea20(a1 + 464, &v30,
                                (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL);
    }
    else {
      SoundArchivePlayer_2aea40(a1 + 320, &v30,
                                (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL);
    }
    SequenceNoteOnCallback_292580(a1 + 80, &v30,
                                  (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL);
    SoundArchivePlayer_29f660(a1 + 528, &v30, (a5 + 3) & 0xFFFFFFFFFFFFFFFCLL);
    v23 = v30;
    *(_QWORD*)(a1 + 720) = v21;
    if (v23 - v10 > 0) {
      return 0;
    }
  }
  return 1;
}

__int64 game_2ae7a0(__int64* a1)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64* i;
  __int64* v5;
  __int64 v6;
  void* v7;

  BaseNx_2ae880(a1);
  while ((__int64*)a1[16] != a1 + 15) {
    nn_os_SleepThread(5000000);
  }
  v2 = (unsigned __int64)a1[12] >> 10;
  if ((int)v2 >= 1) {
    v3 = a1[11];
    do {
      GameRoutine_2adfb0(v3);
      v3 += 1024;
      LODWORD(v2) = v2 - 1;
    } while ((_DWORD)v2 != 0);
  }
  for (i = (__int64*)a1[14]; i != a1 + 13; i = (__int64*)a1[14]) {
    v5 = (__int64*)i[1];
    v6 = *v5;
    *(_QWORD*)(*i + 8) = v5;
    *v5 = *i;
    *(_QWORD*)(v6 + 8) = i;
    *i = v6;
  }
  v7 = BaseNx_2a1b90();
  return SoundThread_2a1f40((__int64)v7, (__int64)(a1 + 8));
}

__int64 game_5a42b0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v5;
  float32x2_t* v6;
  float32x2_t* v7;
  float32x2_t v8;
  float32x2_t v9;
  float32x2_t v10;
  float32x2_t v11;
  float32x2_t v12;
  float32x2_t v13;
  float32x2_t v14;
  float32x2_t v15;
  float32x2_t v16;
  float32x2_t v17;
  float32x2_t v18;
  float32x2_t v19;
  float32x2_t v20;
  float32x2_t v21;
  float32x2_t v22;
  float32x2_t v23;
  float32x2_t v24;
  float32x2_t v25;
  float32x2_t v26;
  float32x2_t v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float32x2_t v33;
  float32x2_t v34;
  float v35;
  float v36;

  v2 = *(_QWORD*)(a1 + 40);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  v6 = (float32x2_t*)(v2 + 24LL * a2);
  v7 = (float32x2_t*)(v2 + 24LL * ((a2 + 1) % v5));
  LANES64(v8).n64_u64[0] = LANES64(v6[2]).n64_u64[0];
  LANES64(v9).n64_f32[0] = LANES64(v6[1]).n64_f32[0] + LANES64(v8).n64_f32[0];
  LANES64(v9).n64_f32[1] = LANES64(v6[1]).n64_f32[1] + LANES64(v8).n64_f32[1];
  LANES64(v10).n64_u64[0] = LANES64(v7[2]).n64_u64[0];
  LANES64(v11).n64_u64[0] = LANES64_OF(vsub_f32(v9, v8)).n64_u64[0];
  LANES64(v13).n64_f32[0] = LANES64(*(v7)).n64_f32[0] + LANES64(v10).n64_f32[0];
  LANES64(v12).n64_u64[0] = LANES64_OF(vsub_f32(v10, v8)).n64_u64[0];
  LANES64(v13).n64_f32[1] = LANES64(*(v7)).n64_f32[1] + LANES64(v10).n64_f32[1];
  LANES64(v14).n64_u64[0] = LANES64_OF(vmul_f32(v12, v11)).n64_u64[0];
  LANES64(v15).n64_u64[0] = LANES64_OF(vmul_f32(v12, v12)).n64_u64[0];
  LANES64(v16).n64_u64[0] = LANES64_OF(vpadd_f32(v14, v14)).n64_u64[0];
  LANES64(v17).n64_u64[0] = LANES64_OF(vpadd_f32(v15, v15)).n64_u64[0];
  if (LANES64(v16).n64_f32[0] <= 0x0.0p+0f) {
    LANES64(v19).n64_u64[0] = LANES64_OF(vmul_f32(v11, v11)).n64_u64[0];
    LANES64(v19).n64_u32[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u32[0];
    LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v13, v8)).n64_u64[0];
    LANES64(v26).n64_u64[0] = LANES64_OF(vmul_f32(v12, v23)).n64_u64[0];
    LANES64(v25).n64_u64[0] = LANES64_OF(vpadd_f32(v26, v26)).n64_u64[0];
    if (LANES64(v25).n64_f32[0] <= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  else {
    LANES64(v18).n64_u64[0] = LANES64_OF(vsub_f32(v10, v9)).n64_u64[0];
    LANES64(v19).n64_u64[0] = LANES64_OF(vmul_f32(v18, v18)).n64_u64[0];
    LANES64(v19).n64_u32[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u32[0];
    LANES64(v20).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(v12, vrev64_s32(v11)),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    LANES64(v21).n64_u64[0] = LANES64_OF(vpadd_f32(v20, v20)).n64_u64[0];
    LANES64(v22).n64_u64[0] =
        LANES64_OF(vdiv_f32(vmul_f32(v21, v21), v17)).n64_u64[0];
    if ((LANES64_OF(vcgt_f32(v16, v17)).n64_u8[0] & 1) == 0) {
      PSEUDO_LOW_LANE64(v19, n64_u64, LANES64(v22).n64_u64[0]);
    }
    LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v13, v8)).n64_u64[0];
    LANES64(v24).n64_u64[0] = LANES64_OF(vmul_f32(v12, v23)).n64_u64[0];
    LANES64(v25).n64_u64[0] = LANES64_OF(vpadd_f32(v24, v24)).n64_u64[0];
    if (LANES64(v25).n64_f32[0] <= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  if ((LANES64_OF(vcgt_f32(v25, v17)).n64_u8[0] & 1) == 0) {
    LANES64(v33).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(v12, vrev64_s32(v23)),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    LANES64(v34).n64_u64[0] = LANES64_OF(vpadd_f32(v33, v33)).n64_u64[0];
    v35 = LANES64_OF(vdiv_f32(vmul_f32(v34, v34), v17)).n64_f32[0];
    v29 = *(float*)(a1 + 48);
    if (LANES64(v19).n64_f32[0] >= v35) {
      v30 = LANES64(v19).n64_f32[0];
    }
    else {
      v30 = v35;
    }
    goto LABEL_12;
  }
  LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v10, v13)).n64_u64[0];
LABEL_9:
  LANES64(v27).n64_u64[0] = LANES64_OF(vmul_f32(v23, v23)).n64_u64[0];
  v28 = LANES64_OF(vpadd_f32(v27, v27)).n64_f32[0];
  v29 = *(float*)(a1 + 48);
  if (LANES64(v19).n64_f32[0] >= v28) {
    v30 = LANES64(v19).n64_f32[0];
  }
  else {
    v30 = v28;
  }
LABEL_12:
  v31 = sqrtf(v30);
  if (v31 <= v29) {
    return 1;
  }
  v36 = ceilf(sqrtf(v31 / v29));
  GameRoutine_59fe80(&v36, 0x1.0000000000000p+0f, 0x1.0000000000000p+10f);
  return (unsigned int)(1 << -__clz((int)v36 - 1));
}

__int64 game_5a65c0(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v5;
  float32x2_t* v6;
  float32x2_t* v7;
  float32x2_t v8;
  float32x2_t v9;
  float32x2_t v10;
  float32x2_t v11;
  float32x2_t v12;
  float32x2_t v13;
  float32x2_t v14;
  float32x2_t v15;
  float32x2_t v16;
  float32x2_t v17;
  float32x2_t v18;
  float32x2_t v19;
  float32x2_t v20;
  float32x2_t v21;
  float32x2_t v22;
  float32x2_t v23;
  float32x2_t v24;
  float32x2_t v25;
  float32x2_t v26;
  float32x2_t v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float32x2_t v33;
  float32x2_t v34;
  float v35;
  float v36;

  v2 = *(_QWORD*)(a1 + 40);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  v6 = (float32x2_t*)(v2 + 24LL * a2);
  v7 = (float32x2_t*)(v2 + 24LL * ((a2 + 1) % v5));
  LANES64(v8).n64_u64[0] = LANES64(v6[2]).n64_u64[0];
  LANES64(v9).n64_f32[0] = LANES64(v6[1]).n64_f32[0] + LANES64(v8).n64_f32[0];
  LANES64(v9).n64_f32[1] = LANES64(v6[1]).n64_f32[1] + LANES64(v8).n64_f32[1];
  LANES64(v10).n64_u64[0] = LANES64(v7[2]).n64_u64[0];
  LANES64(v11).n64_u64[0] = LANES64_OF(vsub_f32(v9, v8)).n64_u64[0];
  LANES64(v13).n64_f32[0] = LANES64(*(v7)).n64_f32[0] + LANES64(v10).n64_f32[0];
  LANES64(v12).n64_u64[0] = LANES64_OF(vsub_f32(v10, v8)).n64_u64[0];
  LANES64(v13).n64_f32[1] = LANES64(*(v7)).n64_f32[1] + LANES64(v10).n64_f32[1];
  LANES64(v14).n64_u64[0] = LANES64_OF(vmul_f32(v12, v11)).n64_u64[0];
  LANES64(v15).n64_u64[0] = LANES64_OF(vmul_f32(v12, v12)).n64_u64[0];
  LANES64(v16).n64_u64[0] = LANES64_OF(vpadd_f32(v14, v14)).n64_u64[0];
  LANES64(v17).n64_u64[0] = LANES64_OF(vpadd_f32(v15, v15)).n64_u64[0];
  if (LANES64(v16).n64_f32[0] <= 0x0.0p+0f) {
    LANES64(v19).n64_u64[0] = LANES64_OF(vmul_f32(v11, v11)).n64_u64[0];
    LANES64(v19).n64_u32[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u32[0];
    LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v13, v8)).n64_u64[0];
    LANES64(v26).n64_u64[0] = LANES64_OF(vmul_f32(v12, v23)).n64_u64[0];
    LANES64(v25).n64_u64[0] = LANES64_OF(vpadd_f32(v26, v26)).n64_u64[0];
    if (LANES64(v25).n64_f32[0] <= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  else {
    LANES64(v18).n64_u64[0] = LANES64_OF(vsub_f32(v10, v9)).n64_u64[0];
    LANES64(v19).n64_u64[0] = LANES64_OF(vmul_f32(v18, v18)).n64_u64[0];
    LANES64(v19).n64_u32[0] = LANES64_OF(vpadd_f32(v19, v19)).n64_u32[0];
    LANES64(v20).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(v12, vrev64_s32(v11)),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    LANES64(v21).n64_u64[0] = LANES64_OF(vpadd_f32(v20, v20)).n64_u64[0];
    LANES64(v22).n64_u64[0] =
        LANES64_OF(vdiv_f32(vmul_f32(v21, v21), v17)).n64_u64[0];
    if ((LANES64_OF(vcgt_f32(v16, v17)).n64_u8[0] & 1) == 0) {
      PSEUDO_LOW_LANE64(v19, n64_u64, LANES64(v22).n64_u64[0]);
    }
    LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v13, v8)).n64_u64[0];
    LANES64(v24).n64_u64[0] = LANES64_OF(vmul_f32(v12, v23)).n64_u64[0];
    LANES64(v25).n64_u64[0] = LANES64_OF(vpadd_f32(v24, v24)).n64_u64[0];
    if (LANES64(v25).n64_f32[0] <= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  if ((LANES64_OF(vcgt_f32(v25, v17)).n64_u8[0] & 1) == 0) {
    LANES64(v33).n64_u64[0] =
        LANES64_OF(vmul_f32(vmul_f32(v12, vrev64_s32(v23)),
                            COERCE_FLOAT32X2_T(-0x1.000003f800000p-7)))
            .n64_u64[0];
    LANES64(v34).n64_u64[0] = LANES64_OF(vpadd_f32(v33, v33)).n64_u64[0];
    v35 = LANES64_OF(vdiv_f32(vmul_f32(v34, v34), v17)).n64_f32[0];
    v29 = *(float*)(a1 + 52);
    if (LANES64(v19).n64_f32[0] >= v35) {
      v30 = LANES64(v19).n64_f32[0];
    }
    else {
      v30 = v35;
    }
    goto LABEL_12;
  }
  LANES64(v23).n64_u64[0] = LANES64_OF(vsub_f32(v10, v13)).n64_u64[0];
LABEL_9:
  LANES64(v27).n64_u64[0] = LANES64_OF(vmul_f32(v23, v23)).n64_u64[0];
  v28 = LANES64_OF(vpadd_f32(v27, v27)).n64_f32[0];
  v29 = *(float*)(a1 + 52);
  if (LANES64(v19).n64_f32[0] >= v28) {
    v30 = LANES64(v19).n64_f32[0];
  }
  else {
    v30 = v28;
  }
LABEL_12:
  v31 = sqrtf(v30);
  if (v31 <= v29) {
    return 2;
  }
  v36 = ceilf(sqrtf(v31 / v29));
  GameRoutine_59fe80(&v36, 0x1.0000000000000p+0f, 0x1.0000000000000p+10f);
  return (unsigned int)((1 << -(char)__clz((int)v36 - 1)) + 1);
}

__int64 game_6d00c0(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int* v7;
  unsigned int* v8;
  __int64* v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  int v24;
  int v25;
  int v27;
  __int64 result;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  bool v34;
  int v35;
  __int64 v36;
  int v37;

  game_Unit_SetPollution(a1, 0);
  v2 = *(unsigned __int8*)(a1 + 500);
  if (*(_BYTE*)(a1 + 500) != 0) {
    v3 = Unit_6c9ef0(a1);
    *(_BYTE*)(a1 + 500) = v3 & (v3 >> 31);
    if (v2 != (unsigned __int8)(v3 & (v3 >> 31))) {
      v4 = *(unsigned __int16*)(a1 + 492);
      v5 = game_Unit_GetParam(a1);
      if (*(_WORD*)(a1 + 494) != 0 && v4 != *(unsigned __int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v5 >= (__int16)v4) {
        v6 = (__int16)v4;
      }
      else {
        v6 = v5;
      }
      if ((v4 & 0x8000u) != 0) {
        v6 = 0;
      }
      if (v6 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v6;
      }
    }
  }
  Unit_6cb490(a1);
  v7 = *(unsigned int**)(a1 + 1488);
  v8 = *(unsigned int**)(a1 + 1496);
  v9 = GameData_212c880[0];
  while (v7 != v8) {
    v10 = *v7;
    if ((*v7 & 0x7F000) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (v10 & 0xFFF)) +
                  104LL) != 9) {
      *v7 = v10 & 0xFFF80FFF;
    }
    ++v7;
  }
  UnitItemList_710ea0(a1 + 828);
  v11 = *(_DWORD*)(a1 + 1872);
  v12 = v11 & 0xFFF;
  if ((v11 & 0xFFF) == 0) {
    goto LABEL_53;
  }
  v13 = *(char**)(a1 + 608);
  v14 = *(char**)(a1 + 600);
  v15 = v13 - v14;
  if ((int)((unsigned __int64)(v13 - v14) >> 2) < 1) {
    v18 = 0;
    goto LABEL_48;
  }
  v16 = (v15 >> 2) & 7;
  if (((v15 >> 2) & 0x7FFFFFFF) - 1 < 7) {
    v17 = 0;
    v18 = 255;
    if (v16 == 0) {
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v19 = v14 + 18;
  v20 = 0;
  v21 = -8LL * ((v15 >> 5) & 0xFFFFFFF);
  v18 = 255;
  do {
    v20 -= 8;
    if (v18 >= *(v19 - 16)) {
      v18 = *(v19 - 16);
    }
    if (v18 >= *(v19 - 12)) {
      v18 = *(v19 - 12);
    }
    if (v18 >= *(v19 - 8)) {
      v18 = *(v19 - 8);
    }
    if (v18 >= *(v19 - 4)) {
      v18 = *(v19 - 4);
    }
    if (v18 >= *v19) {
      v18 = *v19;
    }
    if (v18 >= v19[4]) {
      v18 = v19[4];
    }
    if (v18 >= v19[8]) {
      v18 = v19[8];
    }
    v22 = v19[12];
    v19 += 32;
    if (v18 >= v22) {
      v18 = v22;
    }
  } while (v21 != v20);
  v17 = -v20;
  if (v16 != 0) {
  LABEL_44:
    v23 = &v14[4 * v17 + 2];
    do {
      v25 = *v23;
      v23 += 4;
      v24 = v25;
      if (v18 >= v25) {
        v18 = v24;
      }
      --v16;
    } while (v16 != 0);
  }
LABEL_48:
  if (v18 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v12) +
                                273LL) &&
      v14 != v13) {
    do {
      if ((*(_DWORD*)(a1 + 1872) & 0xFFF) == 0) {
        goto LABEL_69;
      }
      v31 = *v14;
      v32 = v14[1];
      if ((v32 | v31) < 0 ||
          ((v33 = *(_DWORD*)(a1 + 592)) > v31 ? (v34 = v33 <= v32)
                                              : (v34 = true),
           v34)) {
        LOBYTE(v35) =
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                 8LL * (*(_DWORD*)(a1 + 1872) & 0xFFF)) +
                      273LL);
        if ((_BYTE)v35 == 0) {
          goto LABEL_68;
        }
        v36 = -1;
      }
      else {
        LODWORD(v36) = v31 + v33 * v32;
        if ((v36 & 0x80000000) != 0) {
          v37 = 0;
        }
        else {
          v37 = *(char*)(*(_QWORD*)(a1 + 600) + 4LL * (unsigned int)v36 + 2);
        }
        v35 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                             8LL * (*(_DWORD*)(a1 + 1872) &
                                                    0xFFF)) +
                                  273LL);
        if (v37 >= v35) {
          goto LABEL_68;
        }
        v36 = (int)v36;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 600) + 4 * v36 + 2) = v35;
    LABEL_68:
      *(_BYTE*)(a1 + 805) = 0;
    LABEL_69:
      v14 += 4;
    } while (v14 != v13);
  }
LABEL_53:
  if (*(__int16*)(a1 + 492) <= 1) {
    v27 = 1;
  }
  else {
    v27 = *(__int16*)(a1 + 492);
  }
  result = game_Unit_GetParam(a1);
  if (*(_WORD*)(a1 + 494) != 0 &&
      *(unsigned __int16*)(a1 + 494) != (unsigned __int16)v27) {
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v27) {
    v29 = v27;
  }
  else {
    v29 = result;
  }
  if (v29 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v29;
  }
  v30 = *(_DWORD*)(a1 + 416);
  if ((v30 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v30 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    result = game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return result;
}

__int64 game_7810b0(__int64 a1, int* a2, int* a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v8;
  char v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  int v18;
  __int64* v19;
  __int64 v20;
  int v21;
  __int64 v23;
  unsigned int v24;
  int v25;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 result;
  int v32;
  char v33;
  char v34;
  char v35;
  __int16 v36;
  char v37;
  __int16 v38;
  int v39;
  struct {
    _BYTE v40[4];
    char v41;
  } v40_;
  struct {
    char gap24_[1];
    char v42;
    __int16 v43;
  } v42_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *a2;
  v4 = *a3;
  v6 = *(_QWORD*)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  if (v5 != 0) {
    LODWORD(v5) = *(_WORD*)(v5 + 16) & 0xFFF;
  }
  v32 = v5;
  TargetEnumerator_77c150((__int64)v40_.v40, (__int64*)v6, v3, v4),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v42_.v42 != 0) {
    v8 = game_UnitPool_Get(&v42_.v42),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v8 = nullptr;
  }
  if ((TargetEnumerator_77e300(v6, &v32, (__int64)v8) & 1) != 0) {
    v9 = v40_.v41 | 4;
  LABEL_8:
    v40_.v41 = v9;
    goto LABEL_9;
  }
  if ((v42_.v43 & 0x8000000000000000LL) != 0) {
    goto LABEL_41;
  }
  v12 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL);
  if (v12 == 0) {
    goto LABEL_41;
  }
  v13 = v12 + 144LL * v42_.v43;
  if ((MapUtil_753bb0(v13) & 1) == 0) {
    goto LABEL_41;
  }
  v14 = GameData_212c880[0];
  v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v32 & 0xFFF));
  if (v15 != 0) {
    v16 = *(unsigned __int8*)(v15 + 250);
    if ((unsigned int)v16 > 0x25) {
      goto LABEL_41;
    }
    if (((1LL << v16) & 0x6018181) == 0) {
      if (v16 != 37 ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 272LL))(v13) & 1) == 0) {
        goto LABEL_41;
      }
      goto LABEL_36;
    }
  }
  v18 = *(unsigned __int8*)(v6 + 8);
  v17 = (_BYTE*)(v6 + 8);
  if (v18 != 0) {
    v19 = game_UnitPool_Get(v17),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v19 = nullptr;
  }
  if (((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v13 + 280LL))(v13, v19) &
       1) == 0 ||
      (v20 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8LL * (v32 & 0xFFF)),
       (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v20 + 104)) & 1) ==
           0)) {
  LABEL_35:
    if (((*(__int64 (**)(__int64, int*))(*(_QWORD*)v13 + 296LL))(v13, &v32) &
         1) != 0) {
      goto LABEL_36;
    }
  LABEL_41:
    v30 = *(__int64**)(a1 + 64);
    v33 = 0;
    v39 = 0;
    v37 = 0;
    v34 = v3;
    v35 = v4;
    v38 = -1;
    v36 = 1033;
    if (v30 != nullptr) {
      v11 = *v30;
      goto LABEL_43;
    }
  LABEL_44:
    GameRoutine_60a310(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v21 = *(unsigned __int8*)(v20 + 106);
  if (*(_BYTE*)(v20 + 106) == 0 || v21 == 6) {
    v23 = *(_QWORD*)(v20 + 576);
    if (v23 == 0) {
      goto LABEL_35;
    }
  }
  else {
    if (v21 != 1) {
      goto LABEL_35;
    }
    v23 = *(_QWORD*)(v20 + 576);
    if (v23 == 0) {
      goto LABEL_36;
    }
  }
  v24 = *(unsigned __int8*)(v23 + 72);
  v25 = *(unsigned __int8*)(v23 + 73);
  if (v24 > 7 || v25 != 1) {
    goto LABEL_35;
  }
LABEL_36:
  v27 = v40_.v41;
  v28 = *(_QWORD*)(*v14 + 64);
  v40_.v41 |= 4u;
  v29 = *(_QWORD*)(v28 + 8LL * (v32 & 0xFFF));
  if (v29 != 0 && (unsigned int)*(unsigned __int8*)(v29 + 250) - 15 <= 1) {
    v9 = v27 | 5;
    goto LABEL_8;
  }
LABEL_9:
  v10 = *(__int64**)(a1 + 64);
  if (v10 == nullptr) {
    goto LABEL_44;
  }
  v11 = *v10;
LABEL_43:
  result = (*(__int64 (**)(__int64))(v11 + 48))((__int64)v10),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  **(_DWORD**)(a1 + 80) = v3;
  **(_DWORD**)(a1 + 88) = v4;
  **(_BYTE**)(a1 + 96) = 1;
  return result;
}

__int64 game_7815e0(__int64 a1, int* a2, int* a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64* v8;
  char v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 result;
  struct {
    char gap8_[3];
    char v15[5];
    int v16;
  } v15_;
  struct {
    _BYTE v17[4];
    char v18;
  } v17_;
  _BYTE v19[7];
  int v20;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *a2;
  v4 = *a3;
  v6 = *(__int64**)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  if (v5 != 0) {
    LODWORD(v5) = *(_WORD*)(v5 + 16) & 0xFFF;
  }
  v20 = v5;
  TargetEnumerator_77c150((__int64)v17_.v17, v6, v3, v4),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v19[0] != 0) {
    v8 = game_UnitPool_Get(v19),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  else {
    v8 = nullptr;
  }
  if ((TargetEnumerator_77e300((__int64)v6, &v20, (__int64)v8) & 1) == 0) {
    v13 = *(__int64**)(a1 + 64);
    v15_.v16 = 0;
    *(_WORD*)&v15_.v15[3] = -1;
    strcpy(v15_.v15, "\t\b");
    if (v13 != nullptr) {
      v12 = *v13;
      goto LABEL_14;
    }
  LABEL_15:
    GameRoutine_60a310(),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v9 = v17_.v18;
  v17_.v18 |= 8u;
  v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v20 & 0xFFF));
  if (v10 != 0 && (unsigned int)*(unsigned __int8*)(v10 + 250) - 15 <= 1) {
    v17_.v18 = v9 | 9;
  }
  v11 = *(__int64**)(a1 + 64);
  if (v11 == nullptr) {
    goto LABEL_15;
  }
  v12 = *v11;
LABEL_14:
  result = (*(__int64 (**)(__int64))(v12 + 48))((__int64)v11),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  **(_BYTE**)(a1 + 80) = 1;
  return result;
}

__attribute__((swiftcall)) void game_7f8880(PSEUDO_X8 x8_, unsigned __int8 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  __int64 v13;

  v3 = GameConst_7f8760(a1);
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (result | 7) + 1;
    }
    v6 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a2[1] = v5;
    a2[2] = v6;
    *a2 = v7 | 1;
    goto LABEL_9;
  }
  *(_BYTE*)a2 = 2 * result;
  v6 = (__int64)a2 + 1;
  if (result != 0) {
  LABEL_9:
    result = memmove(v6, (__int64)v3, v5);
  }
  *(_BYTE*)(v6 + v5) = 0;
  v8 = *(unsigned __int8*)a2;
  v9 = a2[1];
  v10 = (v8 & 1) == 0;
  v11 = v8 >> 1;
  if (v10) {
    v12 = (unsigned __int8*)a2 + 1;
  }
  else {
    v12 = (unsigned __int8*)a2[2];
  }
  if (v10) {
    v13 = v11;
  }
  else {
    v13 = v9;
  }
  for (; v13 != 0; --v13) {
    result = toupper(*v12);
    *v12++ = result;
  }
  {
    result;
    return;
  }
}

void game_82eee0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 primeEm;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = a1 + 3928064;
  v3 = 0;
  do {
    v4 = a1 + v3;
    v3 += 784;
    *(_QWORD*)v4 = 0;
    *(_QWORD*)(v4 + 8) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 20) = 0;
    *(_QWORD*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 120) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 128) = 0;
    *(_QWORD*)(v4 + 140) = 0;
    *(_QWORD*)(v4 + 132) = 0;
    *(_QWORD*)(v4 + 152) = 0;
    *(_QWORD*)(v4 + 160) = 0;
    *(_QWORD*)(v4 + 168) = 0;
    *(_QWORD*)(v4 + 176) = 0;
    *(_QWORD*)(v4 + 184) = 0;
    *(_QWORD*)(v4 + 192) = 0;
    *(_QWORD*)(v4 + 200) = 0;
    *(_QWORD*)(v4 + 208) = 0;
    *(_QWORD*)(v4 + 216) = 0;
    *(_QWORD*)(v4 + 224) = 0;
    *(_QWORD*)(v4 + 232) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 240) = 0;
    *(_QWORD*)(v4 + 244) = 0;
    *(_QWORD*)(v4 + 356) = 0;
    *(_QWORD*)(v4 + 364) = 0;
    *(_QWORD*)(v4 + 252) = 0;
    *(_QWORD*)(v4 + 312) = 0;
    *(_QWORD*)(v4 + 320) = 0;
    *(_QWORD*)(v4 + 296) = 0;
    *(_QWORD*)(v4 + 304) = 0;
    *(_QWORD*)(v4 + 280) = 0;
    *(_QWORD*)(v4 + 288) = 0;
    *(_QWORD*)(v4 + 264) = 0;
    *(_QWORD*)(v4 + 272) = 0;
    *(_QWORD*)(v4 + 328) = 0;
    *(_QWORD*)(v4 + 336) = 0;
    *(_QWORD*)(v4 + 344) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 352) = 0;
    *(_QWORD*)(v4 + 424) = 0;
    *(_QWORD*)(v4 + 432) = 0;
    *(_QWORD*)(v4 + 408) = 0;
    *(_QWORD*)(v4 + 416) = 0;
    *(_QWORD*)(v4 + 468) = 0;
    *(_QWORD*)(v4 + 476) = 0;
    *(_QWORD*)(v4 + 392) = 0;
    *(_QWORD*)(v4 + 400) = 0;
    *(_QWORD*)(v4 + 376) = 0;
    *(_QWORD*)(v4 + 384) = 0;
    *(_QWORD*)(v4 + 440) = 0;
    *(_QWORD*)(v4 + 448) = 0;
    *(_QWORD*)(v4 + 456) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 464) = 0;
    *(_QWORD*)(v4 + 552) = 0;
    *(_QWORD*)(v4 + 544) = 0;
    *(_QWORD*)(v4 + 536) = 0;
    *(_QWORD*)(v4 + 528) = 0;
    *(_QWORD*)(v4 + 520) = 0;
    *(_QWORD*)(v4 + 580) = 0;
    *(_QWORD*)(v4 + 588) = 0;
    *(_QWORD*)(v4 + 504) = 0;
    *(_QWORD*)(v4 + 512) = 0;
    *(_QWORD*)(v4 + 488) = 0;
    *(_QWORD*)(v4 + 496) = 0;
    *(_QWORD*)(v4 + 560) = 0;
    *(_QWORD*)(v4 + 568) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 576) = 0;
    *(_QWORD*)(v4 + 664) = 0;
    *(_QWORD*)(v4 + 656) = 0;
    *(_QWORD*)(v4 + 648) = 0;
    *(_QWORD*)(v4 + 640) = 0;
    *(_QWORD*)(v4 + 632) = 0;
    *(_QWORD*)(v4 + 624) = 0;
    *(_QWORD*)(v4 + 616) = 0;
    *(_QWORD*)(v4 + 608) = 0;
    *(_QWORD*)(v4 + 600) = 0;
    *(_QWORD*)(v4 + 672) = 0;
    *(_QWORD*)(v4 + 680) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 688) = 0;
    *(_QWORD*)(v4 + 692) = 0;
    *(_QWORD*)(v4 + 700) = 0;
    *(_QWORD*)(v4 + 776) = 0;
    *(_QWORD*)(v4 + 768) = 0;
    *(_QWORD*)(v4 + 760) = 0;
    *(_QWORD*)(v4 + 752) = 0;
    *(_QWORD*)(v4 + 744) = 0;
    *(_QWORD*)(v4 + 736) = 0;
    *(_QWORD*)(v4 + 728) = 0;
    *(_QWORD*)(v4 + 720) = 0;
    *(_QWORD*)(v4 + 712) = 0;
  } while (v3 != 3669904);
  *(_QWORD*)(a1 + 3932040) = 0;
  *(_DWORD*)(a1 + 3932048) = 0;
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      262136, 16, 0);
  v7 = v6 + 262136;
  *(_QWORD*)(v1 + 3992) = v6;
  *(_QWORD*)(v1 + 4008) = v6 + 262136;
  memset(v6, 0, 0x3FFF8u);
  *(_QWORD*)(v1 + 4000) = v7;
  v8 = (_QWORD*)(v1 + 4016);
  *(_QWORD*)(v1 + 4016) = 0;
  *(_QWORD*)(v1 + 4024) = 0;
  *(_QWORD*)(v1 + 4032) = 0;
  *(_QWORD*)(v1 + 4040) = 0;
  *(_DWORD*)(v1 + 4048) = 1065353216;
  primeEm = std___1___next_prime(0x7FFFu);
  v10 = *(_QWORD*)(v1 + 4024);
  v11 = primeEm;
  if (primeEm > v10) {
    goto LABEL_4;
  }
  if (primeEm < v10) {
    v12 = vcvtps_u64_f32((float)*(unsigned __int64*)(v1 + 4040) /
                         *(float*)(v1 + 4048));
    if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
      v12 = std___1___next_prime(v12);
    }
    else {
      v13 = 1LL << -(char)__clz(v12 - 1);
      if (v12 >= 2) {
        v12 = v13;
      }
    }
    if (v11 <= v12) {
      v11 = v12;
    }
    if (v11 < v10) {
    LABEL_4:
      GameRoutine_82f300((__int64*)(v1 + 4016), v11);
    }
  }
  v14 = 0;
  v15 = 3669904;
  do {
    v16 = a1 + v14;
    v17 = (_QWORD*)(a1 + v15);
    v14 += 784;
    v15 += 56;
    *v17 = v16;
    v17[1] = v16 + 112;
    v17[2] = v16 + 224;
    v17[3] = v16 + 336;
    v17[4] = v16 + 448;
    v17[5] = v16 + 560;
    v17[6] = v16 + 672;
  } while (v14 != 3669904);
  v18 = *(_QWORD*)(v1 + 3992);
  *(_QWORD*)(v1 + 3976) = a1 + 3669904;
  *(_DWORD*)(v1 + 3984) = 0;
  *(_QWORD*)(v1 + 4000) = v18;
  if (*(_QWORD*)(v1 + 4040) != 0) {
    v19 = *(_QWORD**)(v1 + 4032);
    if (v19 != nullptr) {
      do {
        v20 = (_QWORD*)*v19;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v21, (__int64)v19);
        v19 = v20;
      } while (v20 != nullptr);
    }
    v22 = *(_QWORD*)(v1 + 4024);
    *(_QWORD*)(v1 + 4032) = 0;
    if (v22 != 0) {
      v23 = v22 & 7;
      if (v22 >= 8) {
        v25 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        v24 = 0;
        do {
          *(_QWORD*)(*v8 + 8 * v24) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 8) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 16) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 24) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 32) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 40) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 48) = 0;
          v26 = *v8 + 8 * v24;
          v24 += 8;
          *(_QWORD*)(v26 + 56) = 0;
        } while (v25 != v24);
      }
      else {
        v24 = 0;
      }
      if (v23 != 0) {
        v27 = 8 * v24;
        do {
          --v23;
          *(_QWORD*)(*v8 + v27) = 0;
          v27 += 8;
        } while (v23 != 0);
      }
    }
    *(_QWORD*)(v1 + 4040) = 0;
  }
}

__int64 game_8ea690(__int64 a1, unsigned int a2, unsigned __int64* a3, char a4,
                    char a5)
{
  unsigned __int8 v8;
  __int64 v10;
  __int64 v11;
  __int64 (***v12)();
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 (**v24)();
    __int64 v25;
    __int64 v26;
    char gap24_[8];
    unsigned __int64* v27;
  } v24_;
  _BYTE v28[4];
  __int64 v29;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = a2;
  if ((GameConverge_8ea270(a1, a2, (__int64)a3) & 1) != 0) {
    v10 = GameRoutine_8f31e0((_QWORD*)(a1 + 216LL * v8 + 256), a3),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v10 != 0) {
      v11 = v10;
      v24_.v26 = a5 & 1;
      v24_.v24 = GameData_1fabfa0;
      v24_.v25 = v10;
      v12 = &v24_.v24;
      v24_.v27 = (unsigned __int64*)&v24_.v24;
      v13 = *(_QWORD*)(GameData_21ca310 + 56);
      v14 = *(_QWORD*)(v13 + 556216);
      if (v14 != 0) {
        GameRoutine_6c3980(*(_QWORD*)(v13 + 556216), v11),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        Unit_6db740(v14, v24_.v26, 0),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v15 = *(_QWORD*)(v14 + 392);
        v28[0] = a4;
        v16 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v16 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (v15 != v16 && (*(_BYTE*)(v14 + 418) & 8) == 0) {
          goto LABEL_8;
        }
        goto LABEL_21;
      }
    LABEL_26:
      v22 = 4;
      goto LABEL_27;
    }
    if ((unsigned __int64*)game_GetHero(v8) == a3) {
      v24_.v25 = SideStoryFile_12ae4c0(v8),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v24_.v24 = (__int64 (**)(void))game_HashString(v24_.v25),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (game_GameModeData_instance_ != 0) {
        v19 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v24_.v24),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v19 != 0 && *(_DWORD*)(v19 + 32) != 0) {
          v12 = &v24_.v24;
          v24_.v26 = a5 & 1;
          v24_.v24 = GameData_1fac020;
          v24_.v25 = (__int64)a3;
          v24_.v27 = (unsigned __int64*)&v24_.v24;
          v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
          if (v14 == 0) {
            goto LABEL_26;
          }
          v29 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
          game_GameConverge_Impl_TryJoin_closure0_Invoke((__int64)&v24_.v24,
                                                         &v29),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v20 = *(_QWORD*)(v14 + 392);
          v21 = game_GameModeData_instance_;
          v28[0] = a4;
          if (game_GameModeData_instance_ != 0) {
            v21 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          if (v20 != v21 && (*(_BYTE*)(v14 + 418) & 8) == 0) {
          LABEL_8:
            LODWORD(v29) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF;
            v17 = game_HasSkill((_QWORD*)(v14 + 1744), &v29),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (a4 != 9 && v17) {
              goto LABEL_10;
            }
            goto LABEL_22;
          }
        LABEL_21:
          if (a4 != 9) {
          LABEL_10:
            v18 = 0;
            goto LABEL_23;
          }
        LABEL_22:
          v18 = 1;
        LABEL_23:
          GameHr_6c47b0(v14, v28, v18, 0),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_120f3d0(v14),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v12 = (__int64 (***)(void))v24_.v27,
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v24_.v27 == (unsigned __int64*)&v24_.v24) {
            goto LABEL_26;
          }
          if (v24_.v27 != nullptr) {
            v22 = 5;
          LABEL_27:
            ((void (*)(__int64 (***)(void), __int64))(*v12)[v22])(v12, v11),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          return v14;
        }
      }
    }
  }
  return 0;
}

__attribute__((swiftcall)) void

game_93c6a0(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2, __int64 a3, char a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _BYTE* v12;
  __int64 i;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
  _QWORD* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 j;
  __int64 v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  struct {
    __int64 v31;
    int v32;
  } v31_;
  _QWORD** v33;
  struct {
    _QWORD* v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    _BYTE* v38;
  } v34_;

  if (*(_BYTE*)(a1 + 148) == 1) {
    if ((a4 & 1) != 0 && (RidePool_93e660((_QWORD*)a1, a2) & 0x80000000) == 0) {
      WORD1(v31_.v31) = 0;
      HIDWORD(v31_.v31) = 0;
      v34_.v35 = 0;
      v34_.v36 = 0;
      v34_.v37 = 0;
      v34_.v38 = nullptr;
      v33 = &v34_.v34;
      v34_.v34 = nullptr;
      GameRoutine_930b90((__int64)&v31_.v31, (__int64)a2);
      if ((_BYTE)v31_.v31 != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                                   8LL * (unsigned __int8)v31_.v31) +
                        96LL);
        if (v9 != 0) {
          LOBYTE(v31_.v31) = *(_BYTE*)(v9 + 16);
          if ((v34_.v36 & 1) != 0) {
            *v34_.v38 = 0;
            v34_.v37 = 0;
          }
          else {
            LOWORD(v34_.v36) = 0;
          }
          game_93c6a0(a1, (unsigned __int8*)&v31_.v31, a3, 1, a5);
          v31_.v32 = 0;
          v31_.v31 = 0;
          if ((v34_.v36 & 1) != 0) {
            *v34_.v38 = 0;
            v34_.v37 = 0;
          }
          else {
            LOWORD(v34_.v36) = 0;
          }
          GameRoutine_6e3b50((__int64)&v33, v34_.v34);
          v34_.v34 = nullptr;
          v34_.v35 = 0;
          v33 = &v34_.v34;
          if ((v34_.v36 & 1) != 0) {
            v20 = v34_.v38;
            if (v34_.v38 != nullptr) {
              v21 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v21 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                  (__int64)v34_.v38);
              v20 = v34_.v34;
            }
          }
          else {
            v20 = nullptr;
          }
          GameRoutine_6e3b50((__int64)&v33, v20);
          return;
        }
      }
      v31_.v32 = 0;
      v31_.v31 = 0;
      if ((v34_.v36 & 1) != 0) {
        *v34_.v38 = 0;
        v34_.v37 = 0;
      }
      else {
        LOWORD(v34_.v36) = 0;
      }
      GameRoutine_6e3b50((__int64)&v33, v34_.v34);
      v34_.v34 = nullptr;
      v34_.v35 = 0;
      v33 = &v34_.v34;
      if ((v34_.v36 & 1) != 0) {
        v10 = v34_.v38;
        if (v34_.v38 != nullptr) {
          v11 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v34_.v38);
          v10 = v34_.v34;
        }
      }
      else {
        v10 = nullptr;
      }
      GameRoutine_6e3b50((__int64)&v33, v10);
    }
  }
  else if ((RidePool_93cd60((_QWORD*)a1, (__int64)a2) & 0x80000000) == 0) {
    goto LABEL_9;
  }
  v12 = *(_BYTE**)(a1 + 120);
  for (i = 9; i != 209; i += 10) {
    if (*v12 == 0) {
      LODWORD(i) = i - 9;
    LABEL_43:
      v15 = *((_DWORD*)a2 + 1);
      if (((*(_BYTE*)(a1 + 148) | (unsigned __int8)GameData_21f42c0) & 1) !=
              0 &&
          v15 == 0) {
        if (game_GameModeData_instance_ != 0) {
          v16 = (*(_BYTE*)(game_GameModeData_instance_ + 15) & 0xF) << 24;
          v17 = (*(_DWORD*)(game_GameModeData_instance_ + 2712) + 1) & 0xFFFFFF;
        }
        else {
          v16 = 0;
          v17 = 1;
        }
        v18 =
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                 8LL * *a2) +
                      108LL) != 0
                ? *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                            64) +
                                                 8LL * *a2) +
                                      108LL)
                      << 28
                : v17;
        v15 = v18 | v16;
        if (game_GameModeData_instance_ != 0) {
          *(_DWORD*)(game_GameModeData_instance_ + 2712) = v17;
        }
      }
      LODWORD(v31_.v31) = v15;
      RidePool_93e320(a1, (__int64)a2, a3, i, &v31_.v31);
      v19 = 2;
      *(_DWORD*)(a5 + 4) = i;
      goto LABEL_54;
    }
    if (v12[64] == 0) {
      LODWORD(i) = i - 8;
      goto LABEL_43;
    }
    if (v12[128] == 0) {
      LODWORD(i) = i - 7;
      goto LABEL_43;
    }
    if (v12[192] == 0) {
      LODWORD(i) = i - 6;
      goto LABEL_43;
    }
    if (v12[256] == 0) {
      LODWORD(i) = i - 5;
      goto LABEL_43;
    }
    if (v12[320] == 0) {
      LODWORD(i) = i - 4;
      goto LABEL_43;
    }
    if (v12[384] == 0) {
      LODWORD(i) = i - 3;
      goto LABEL_43;
    }
    if (v12[448] == 0) {
      LODWORD(i) = i - 2;
      goto LABEL_43;
    }
    if (v12[512] == 0) {
      LODWORD(i) = i - 1;
      goto LABEL_43;
    }
    if (v12[576] == 0) {
      goto LABEL_43;
    }
    v12 += 640;
  }
  if (*a2 != 0) {
    v14 = game_932d40(a2);
  }
  else {
    v14 = -1;
  }
  v22 = -1;
  v23 = 0;
  for (j = 0; j != 200; ++j) {
    v25 = *(_QWORD*)(a1 + 120);
    if (*(_BYTE*)(v25 + v23) != 0) {
      v26 = game_932d40((unsigned __int8*)(v25 + v23));
      if (v26 <= v14) {
        v22 = j;
      }
      if (v26 < v14) {
        v14 = v26;
      }
    }
    v23 += 64;
  }
  if (v22 != -1) {
    v27 = *((_DWORD*)a2 + 1);
    if (((*(_BYTE*)(a1 + 148) | (unsigned __int8)GameData_21f42c0) & 1) != 0 &&
        v27 == 0) {
      if (game_GameModeData_instance_ != 0) {
        v28 = (*(_BYTE*)(game_GameModeData_instance_ + 15) & 0xF) << 24;
        v29 = (*(_DWORD*)(game_GameModeData_instance_ + 2712) + 1) & 0xFFFFFF;
      }
      else {
        v28 = 0;
        v29 = 1;
      }
      v30 =
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *a2) +
                    108LL) != 0
              ? *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                          64) +
                                               8LL * *a2) +
                                    108LL)
                    << 28
              : v29;
      v27 = v30 | v28;
      if (game_GameModeData_instance_ != 0) {
        *(_DWORD*)(game_GameModeData_instance_ + 2712) = v29;
      }
    }
    LODWORD(v31_.v31) = v27;
    RidePool_93e320(a1, (__int64)a2, a3, v22, &v31_.v31);
    v19 = 4;
    *(_DWORD*)(a5 + 4) = v22;
  LABEL_54:
    *(_BYTE*)a5 = v19;
    return;
  }
LABEL_9:
  *(_BYTE*)a5 = 1;
  *(_DWORD*)(a5 + 4) = -1;
}

__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float32x4_t v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t* result;
  int v19;
  int8x16_t v20;
  unsigned int v21;
  int8x16_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float v27;
  int8x16_t v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  int8x16_t v40;
  float v41;
  float v42;
  float32x4_t v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x2_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float32x4_t v66;
  int8x16_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  int8x16_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float v80;
  float v81;
  bool v82;
  unsigned int v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  int8x16_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  int8x16_t v92;
  int8x16_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  int8x16_t v103;
  int8x16_t v104;
  float32x4_t v105;
  int v106;
  int8x16_t v107;
  unsigned int v108;
  float32x4_t v109;
  int8x16_t v110;
  float32x4_t v111;
  int8x16_t v112;
  int v113;
  __int64 v114;
  int v115;
  __int64 v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  int8x16_t v121;
  float v122;
  float v123;
  float v124;
  unsigned __int64 v125;
  float v126;
  float v127;
  float v128;
  unsigned __int64 v129;
  float v130;
  float32x4_t v131;
  float32x4_t v132;
  int8x16_t v133;
  int8x16_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  struct {
    _QWORD v139[10];
    unsigned __int8 v140;
    char gap353_[103];
    float v141;
    float v142;
  } v139_;

  *(_QWORD*)(a3 + 8) = 0;
  v4 = -1024;
  do {
    v7 = a3 + v4;
    v4 += 128;
    *(_WORD*)(v7 + 1040) = 0;
    *(_DWORD*)(v7 + 1052) = 0;
    *(_WORD*)(v7 + 1056) = 0;
    *(_DWORD*)(v7 + 1068) = 0;
    *(_WORD*)(v7 + 1072) = 0;
    *(_DWORD*)(v7 + 1084) = 0;
    *(_WORD*)(v7 + 1088) = 0;
    *(_DWORD*)(v7 + 1100) = 0;
    *(_WORD*)(v7 + 1104) = 0;
    *(_DWORD*)(v7 + 1116) = 0;
    *(_WORD*)(v7 + 1120) = 0;
    *(_DWORD*)(v7 + 1132) = 0;
    *(_WORD*)(v7 + 1136) = 0;
    *(_DWORD*)(v7 + 1148) = 0;
    *(_WORD*)(v7 + 1152) = 0;
    *(_DWORD*)(v7 + 1164) = 0;
    *(_QWORD*)(v7 + 1044) = 0;
    *(_QWORD*)(v7 + 1060) = 0;
    *(_QWORD*)(v7 + 1076) = 0;
    *(_QWORD*)(v7 + 1092) = 0;
    *(_QWORD*)(v7 + 1108) = 0;
    *(_QWORD*)(v7 + 1124) = 0;
    *(_QWORD*)(v7 + 1140) = 0;
    *(_QWORD*)(v7 + 1156) = 0;
  } while (v4 != 0);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21fde98) != 0) {
    GameHr_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release((__int64)&GameData_21fde98);
  }
  v8 = a1[2];
  v9 = a1[3];
  v10 = a2[2];
  v11 = a2[3];
  LANES128(v12).n128_u32[3] = 0;
  v13 = a1[4];
  v14 = a2[4];
  v15 = v9 + (float)((float)(v11 - v9) * 0x1.99999a0000000p-5f);
  v16 = v11 + (float)((float)(v9 - v11) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_u32[3] = 0;
  LANES128(v12).n128_f32[0] =
      v8 + (float)((float)(v10 - v8) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_f32[0] =
      v10 + (float)((float)(v8 - v10) * 0x1.99999a0000000p-5f);
  LANES128(v12).n128_f32[1] = v15;
  LANES128(v17).n128_f32[1] = v16;
  LANES128(v12).n128_f32[2] =
      v13 + (float)((float)(v14 - v13) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_f32[2] =
      v14 + (float)((float)(v13 - v14) * 0x1.99999a0000000p-5f);
  v137 = v17;
  v138 = v12;
  result = X8CALL_X0(float32x4_t*,
                     collision_670c60((void*)((__int64)v139_.v139), &v138,
                                      &v137, 0x1000100000001LL));
  v20 = *(int8x16_t*)v139_.v139;
  v19 = v139_.v140;
  *(_BYTE*)(a3 + 1) = 0;
  *(_BYTE*)a3 = v19;
  LANES128(v20).n128_u32[3] = 0;
  if (v19 != 0) {
    v21 = -1;
  }
  else {
    v21 = 0;
  }
  v22 = vandq_s8(v20, vdupq_n_s32(v21));
  v23 = vsubq_f32(v22, v138);
  v24 = vmulq_f32(v23, v23);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  v25 = vsubq_f32(v137, v138);
  v26 = vmulq_f32(v25, v25);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
          .n64_u64[0];
  *(_DWORD*)(a3 + 4) =
      LANES64_OF(
          vdiv_f32(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))),
                   vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))))
          .n64_u32[0];
  if (v19 == 1) {
    v133 = v22;
    LANES128(v30).n128_u64[1] = 0;
    LANES128(v30).n128_f32[0] = a1[2] - a2[2];
    LANES128(v28).n128_f32[0] = LANES128(v30).n128_f32[0];
    HIDWORD(v29) = 0;
    v27 = a1[4] - a2[4];
    LANES128(v28).n128_f32[1] = a1[3] - a2[3];
    *(float*)&v29 = v27;
    LANES128(v30).n128_f32[1] = LANES128(v28).n128_f32[1];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                              memory_order_acquire) &
         1) == 0) {
      v125 = v29;
      v127 = v27;
      v129 = LANES128(v28).n128_u64[0];
      v131 = v30;
      v113 = __cxa_guard_acquire((__int64)&GameData_21a6170);
      v29 = v125;
      v27 = v127;
      LANES128(v28).n128_u64[0] = v129;
      v30 = v131;
      if (v113 != 0) {
        v114 = *((_QWORD*)GameData_212c550 + 1);
        *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
        *((_QWORD*)&GameData_21a6160 + 1) = v114;
        __cxa_guard_release((__int64)&GameData_21a6170);
        v29 = v125;
        v27 = v127;
        LANES128(v28).n128_u64[0] = v129;
        v30 = v131;
      }
    }
    LANES128(v30).n128_f32[2] = v27;
    LANES128(v28).n128_u64[1] = v29;
    LANES128(v31).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v31).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v33).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v34 = vmulq_f32(v31, v32);
    *(int8x8_t*)&LANES128(v33).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v35 = vmlsq_f32(v34, v32, v33);
    v36 = vmulq_f32(v35, v35);
    LANES128(v36).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v36).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v132 = v30;
        v115 = __cxa_guard_acquire((__int64)&GameData_21a6190);
        v30 = v132;
        if (v115 != 0) {
          v116 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v116;
          __cxa_guard_release((__int64)&GameData_21a6190);
          v30 = v132;
        }
      }
      v39 = COERCE_AS(int8x16_t, GameData_21a6180);
      LANES128(v39).n128_u32[3] = 0;
    }
    else {
      LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
      v37 = vrsqrteq_f32(v36);
      v38 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v36, v37)));
      v39 = vbicq_s8(
          vmulq_f32(v35,
                    vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38)))),
          vceqzq_f32(v36));
    }
    v40 = vmulq_f32(v39, v39);
    v41 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    LANES128(v40).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    v128 = *((float*)GameData_212c190 + 1);
    v130 = *(float*)GameData_212c190;
    v126 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v139_.v141 =
        *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v42 = v139_.v141;
    LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
    v45 = *(float*)GameData_212c188;
    v47 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v46 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v48 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v49 = vrsqrteq_f32(v43);
    v139_.v142 = *((float*)GameData_212c188 + 1);
    v44 = v139_.v142;
    v124 = v45;
    v122 = v47;
    v123 = v41;
    v50 = vmulq_f32(v49, vrsqrtsq_f32(v49, vmulq_f32(v43, v49)));
    v51 = vmulq_f32(v30, v30);
    v52 = vsubq_f32(COERCE_AS(float32x4_t, 0), v30);
    *(_DWORD*)(a3 + 1040) = 2;
    v53 = vmulq_n_f32(
        vbicq_s8(vmulq_f32(v39, vmulq_f32(v50, vrsqrtsq_f32(
                                                   v50, vmulq_f32(v43, v50)))),
                 vceqzq_f32(v43)),
        (float)((float)((float)-(
                            float)(v41 -
                                   (float)((float)(v42 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x1.9442500000000p-8f)) *
                                                                              0x1.9442500000000p-8f)) *
                                                           0x1.9442500000000p-8f)) *
                                           0x1.9442500000000p-8f)) *
                        0x1.9442500000000p-8f) +
                0x1.0000000000000p+0f) *
            0x1.41b2f80000000p-4f);
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v55).n128_u64[0] = LANES128(v52).n128_u64[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v57 = v53;
    LANES64(v58).n64_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
            .n64_u64[0];
    LANES128(v55).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v54).n128_u64[1] = LANES128(v56).n128_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v52).n128_u64[0];
    LANES128(v57).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v47 -
                                                              (float)((float)(v44 -
                                                                              (float)(v45 *
                                                                                      0x1.9442500000000p-8f)) *
                                                                      0x1.9442500000000p-8f)) *
                                                   0x1.9442500000000p-8f)) *
                                   0x1.9442500000000p-8f)) *
                0x1.9442500000000p-8f) +
        0x1.0000000000000p+0f;
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v59).n128_u64[0] = LANES64_OF(vpadd_f32(v58, v58)).n64_u64[0];
    LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
    v60 = vmulq_f32(v57, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v59).n128_u64[1] = LANES128(v59).n128_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v63 = vrsqrteq_f32(v59);
    *(int8x8_t*)&LANES128(v61).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v62).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v60).n128_u64[0]), 1);
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v65 = v44 - (float)(v45 * 0x0.0p+0f);
    LANES128(v66).n128_u64[0] = LANES128(v53).n128_u64[0];
    v67 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v43, v60),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v55, v61)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v56, v62)),
                  v64, v54);
    v68 = vmulq_f32(v63, vrsqrtsq_f32(v63, vmulq_f32(v59, v63)));
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
    LANES128(v66).n128_u64[1] = LANES128(v61).n128_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v56).n128_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v53).n128_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v69 = vmulq_f32(v63, v67);
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v62).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v67).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v63).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v121 = vbicq_s8(
        vmulq_f32(v30, vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v59, v68)))),
        vceqzq_f32(v59));
    v70 = vmulq_n_f32(
        v121,
        (float)((float)((float)-(
                            float)(v41 -
                                   (float)((float)(v42 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x0.0p+0f)) *
                                                                              0x0.0p+0f)) *
                                                           0x0.0p+0f)) *
                                           0x0.0p+0f)) *
                        0x0.0p+0f) +
                0x1.0000000000000p+0f) *
            0x0.0p+0f);
    v71 = vmlsq_f32(
        vmlaq_f32(vmlaq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v66, v64)),
                  COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v56, v62)),
        v63, v61);
    v72 = v70;
    LANES128(v71).n128_u32[3] = 0;
    LANES128(v72).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v47 -
                                                              (float)(v65 *
                                                                      0x0.0p+0f)) *
                                                   0x0.0p+0f)) *
                                   0x0.0p+0f)) *
                0x0.0p+0f) +
        0x1.0000000000000p+0f;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v73 = vmulq_f32(v72, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v54).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v64).n128_u64[0];
    LANES128(v64).n128_u64[1] = LANES128(v71).n128_u64[0];
    LANES128(v71).n128_u64[1] = LANES128(v61).n128_u64[0];
    v74 = v54;
    v119 = v54;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v68).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v54).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0]), 1);
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v120 = v61;
    v117 = v71;
    v118 = v64;
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v75 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v74, v73),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v71, v68)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v64, v54)),
                  v57, v61);
    LANES128(v61).n128_u64[0] = LANES128(v70).n128_u64[0];
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v72).n128_u64[0];
    LANES128(v72).n128_u64[1] = LANES128(v68).n128_u64[0];
    LANES128(v68).n128_u64[1] = LANES128(v70).n128_u64[0];
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v64).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v75).n128_u64[0]), 1);
    v76 = vmulq_f32(v61, v57);
    LANES128(v61).n128_f32[0] = a1[4];
    v77 = vmlaq_f32(vmulq_f32(v73, v75),
                    COERCE_AS(float32x4_t, GameData_1a83800), v76);
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v78 = vmulq_f32(v68, v64);
    LANES128(v64).n128_u32[3] = 0;
    v79 =
        vmlsq_f32(vmlaq_f32(v77, COERCE_AS(float32x4_t, GameData_1a83800), v78),
                  v70, v72);
    LANES128(v70).n128_f32[0] = a1[2];
    LANES128(v72).n128_f32[0] = a1[3];
    LANES128(v64).n128_f32[0] =
        LANES128(v70).n128_f32[0] +
        (float)((float)((float)(LANES128(v70).n128_f32[0] +
                                LANES128(v79).n128_f32[0]) -
                        LANES128(v70).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v64).n128_f32[1] =
        LANES128(v72).n128_f32[0] +
        (float)((float)((float)(LANES128(v72).n128_f32[0] +
                                LANES128(v79).n128_f32[1]) -
                        LANES128(v72).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v64).n128_f32[2] =
        LANES128(v61).n128_f32[0] +
        (float)((float)((float)(LANES128(v61).n128_f32[0] +
                                LANES128(v79).n128_f32[2]) -
                        LANES128(v61).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v72).n128_u32[3] = 0;
    v136 = v64;
    LANES128(v72).n128_u64[0] = __PAIR64__(
        (float)(LANES128(v72).n128_f32[0] + LANES128(v79).n128_f32[1]) +
            (float)((float)((float)(LANES128(v72).n128_f32[0] -
                                    LANES128(v72).n128_f32[0]) +
                            LANES128(v79).n128_f32[1]) *
                    0x1.99999a0000000p-5f),
        (float)(LANES128(v70).n128_f32[0] + LANES128(v79).n128_f32[0]) +
            (float)((float)((float)(LANES128(v70).n128_f32[0] -
                                    LANES128(v70).n128_f32[0]) +
                            LANES128(v79).n128_f32[0]) *
                    0x1.99999a0000000p-5f));
    LANES128(v72).n128_f32[2] =
        (float)(LANES128(v61).n128_f32[0] + LANES128(v79).n128_f32[2]) +
        (float)((float)((float)(LANES128(v61).n128_f32[0] -
                                LANES128(v61).n128_f32[0]) +
                        LANES128(v79).n128_f32[2]) *
                0x1.99999a0000000p-5f);
    v135 = v72;
    collision_670c60((void*)((__int64)v139_.v139), &v136, &v135,
                     0x1000100000001LL);
    v80 = v139_.v141;
    v81 = v139_.v142;
    *(_BYTE*)(a3 + 17) = 0;
    v82 = v139_.v140 == 0;
    *(_BYTE*)(a3 + 16) = v139_.v140;
    if (v82) {
      v83 = 0;
    }
    else {
      v83 = -1;
    }
    v84 = vmulq_n_f32(
        v121,
        (float)((float)((float)-(
                            float)(v123 -
                                   (float)((float)(v80 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x1.3bd3ce0000000p+1f)) *
                                                                              0x1.3bd3ce0000000p+1f)) *
                                                           0x1.3bd3ce0000000p+1f)) *
                                           0x1.3bd3ce0000000p+1f)) *
                        0x1.3bd3ce0000000p+1f) +
                0x1.0000000000000p+0f) *
            0x1.921fb60000000p+0f);
    v85 = v84;
    LANES128(v86).n128_u64[0] = LANES128(v84).n128_u64[0];
    LANES128(v85).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v122 -
                                                              (float)((float)(v81 -
                                                                              (float)(v124 *
                                                                                      0x1.3bd3ce0000000p+1f)) *
                                                                      0x1.3bd3ce0000000p+1f)) *
                                                   0x1.3bd3ce0000000p+1f)) *
                                   0x1.3bd3ce0000000p+1f)) *
                0x1.3bd3ce0000000p+1f) +
        0x1.0000000000000p+0f;
    v87 = vmulq_f32(v85, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v88).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v88).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v89).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v87).n128_u64[0]), 1);
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v91 = vmlaq_f32(vmlaq_f32(vmulq_f32(v119, v87),
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v117, v88)),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v118, v89));
    v92 = *(int8x16_t*)v139_.v139;
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v93 = vmlsq_f32(v91, v90, v120);
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v88).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v92).n128_u32[3] = 0;
    LANES128(v86).n128_u64[1] = LANES128(v89).n128_u64[0];
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v85).n128_u64[1] = LANES128(v85).n128_u64[0];
    LANES128(v94).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v89).n128_u64[1] = LANES128(v88).n128_u64[0];
    LANES128(v88).n128_u64[1] = LANES128(v84).n128_u64[0];
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v95 = vbslq_s8(vdupq_n_s32(v83), v92, v133);
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v94).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v93).n128_u64[0]), 1);
    v96 = a1[4];
    v97 = vmulq_f32(v85, v93);
    v134 = v95;
    v98 = vmulq_f32(v86, v90);
    v99 = vsubq_f32(v137, v138);
    v100 = vsubq_f32(v95, v138);
    *(int8x8_t*)&LANES128(v84).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v101 = vmulq_f32(v88, v94);
    LANES128(v86).n128_u32[3] = 0;
    v102 = vmlaq_f32(v97, COERCE_AS(float32x4_t, GameData_1a83800), v98);
    v103 = vmulq_f32(v99, v99);
    v104 = vmulq_f32(v100, v100);
    v105 = vmlsq_f32(
        vmlaq_f32(v102, COERCE_AS(float32x4_t, GameData_1a83800), v101), v84,
        v89);
    LANES128(v101).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v103, v103, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
            .n64_u64[0];
    LANES128(v103).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
            .n64_u64[0];
    LANES128(v84).n128_f32[0] = a1[2];
    PSEUDO_LOW_LANE128(v104, n128_f32, a1[3]);
    LANES128(v86).n128_f32[0] =
        LANES128(v84).n128_f32[0] +
        (float)((float)((float)(LANES128(v84).n128_f32[0] +
                                LANES128(v105).n128_f32[0]) -
                        LANES128(v84).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    *(_DWORD*)(a3 + 20) =
        LANES64_OF(
            vdiv_f32(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]))),
                     vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))))
            .n64_u32[0];
    LANES128(v86).n128_f32[1] =
        LANES128(v104).n128_f32[0] +
        (float)((float)((float)(LANES128(v104).n128_f32[0] +
                                LANES128(v105).n128_f32[1]) -
                        LANES128(v104).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v103).n128_u32[3] = 0;
    LANES128(v103).n128_f32[0] =
        (float)(LANES128(v84).n128_f32[0] + LANES128(v105).n128_f32[0]) +
        (float)((float)((float)(LANES128(v84).n128_f32[0] -
                                LANES128(v84).n128_f32[0]) +
                        LANES128(v105).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v86).n128_f32[2] =
        v96 + (float)((float)((float)(v96 + LANES128(v105).n128_f32[2]) - v96) *
                      0x1.99999a0000000p-5f);
    LANES128(v103).n128_f32[1] =
        (float)(LANES128(v104).n128_f32[0] + LANES128(v105).n128_f32[1]) +
        (float)((float)((float)(LANES128(v104).n128_f32[0] -
                                LANES128(v104).n128_f32[0]) +
                        LANES128(v105).n128_f32[1]) *
                0x1.99999a0000000p-5f);
    v136 = v86;
    LANES128(v103).n128_f32[2] =
        (float)(v96 + LANES128(v105).n128_f32[2]) +
        (float)((float)(LANES128(v105).n128_f32[2] + (float)(v96 - v96)) *
                0x1.99999a0000000p-5f);
    v135 = v103;
    result = X8CALL_X0(float32x4_t*,
                       collision_670c60((void*)((__int64)v139_.v139), &v136,
                                        &v135, 0x1000100000001LL));
    v107 = *(int8x16_t*)v139_.v139;
    v106 = v139_.v140;
    *(_WORD*)(a3 + 32) = v139_.v140;
    LANES128(v107).n128_u32[3] = 0;
    if (v106 != 0) {
      v108 = -1;
    }
    else {
      v108 = 0;
    }
    v109 = vsubq_f32(vbslq_s8(vdupq_n_s32(v108), v107, v134), v138);
    v110 = vmulq_f32(v109, v109);
    LANES128(v110).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
            .n64_u64[0];
    v111 = vsubq_f32(v137, v138);
    v112 = vmulq_f32(v111, v111);
    LANES128(v112).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v112, v112, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
            .n64_u64[0];
    *(_DWORD*)(a3 + 36) =
        LANES64_OF(
            vdiv_f32(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]))),
                     vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))))
            .n64_u32[0];
  }
  {
    result;
    return;
  }
}

void game_cf8840(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int128 v10;
  __int64 v11;
  float32x4_t* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int8x16_t* v16;
  int8x16_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64* v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  float32x4_t* v40;
  float32x4_t* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    unsigned __int64 v47;
    __int64 v48;
  } v47_;
  struct {
    __int64 v49;
    __int64 v50;
  } v49_;
  struct {
    float32x4_t v51;
    char gap48_[16];
    float32x4_t* v52;
  } v51_;

  if (GameData_21d92e0 == 1) {
    return;
  }
  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v1 + 152) & 1) == 0 ||
      (game_zview_cf27d0(GameData_220b6f0, *(_QWORD*)(v1 + 16)) & 1) == 0) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 8);
  CharacterModel_cf5da0(v3);
  CharacterModel_cf4780(v3);
  v4 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v4 + 128);
  v5 = *(_QWORD*)(v4 + 136);
  v49_.v49 = v6;
  v49_.v50 = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    v7 = 4202496;
    v8 = *(_DWORD*)(*(_QWORD*)(v3 + 16) + 384LL) & 2 |
         ((*(_DWORD*)(*(_QWORD*)(v3 + 16) + 384LL) & 0x20) != 0);
    if (game_ProcFadeView_instance_ != 0) {
      v9 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v9 + 172) == *(float*)(v9 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160);
      }
      else {
        v10 = *(_OWORD*)(v9 + 208);
      }
      if (*((float*)&v10 + 3) == 0x1.0000000000000p+0f) {
        if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                            v9 + 160, *((float*)&v10 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
          v7 = 0x2000;
        }
        else {
          v7 = 4202496;
        }
      }
    }
    v51_.v52 = nullptr;
    v11 = GameHr_10784f0((__int64)&v49_.v49, v8 | (unsigned int)v7,
                         (__int64)&v51_.v51);
    v12 = v51_.v52;
    *(_QWORD*)(v3 + 312) = v11;
    if (v12 == &v51_.v51) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
        goto LABEL_20;
      }
      v13 = 40;
    }
    (*(void (**)(float32x4_t*))(LANES128(*(v12)).n128_u64[0] + v13))(v12);
    v11 = *(_QWORD*)(v3 + 312);
  LABEL_20:
    if (v11 != 0) {
      *(_BYTE*)(v11 + 289) = 0;
      v14 = *(_QWORD*)(v3 + 16);
      v15 = *(_QWORD*)(v14 + 8);
      v16 = *(int8x16_t**)(v14 + 16);
      if (LANES128(v16[20]).n128_u8[0] == 1) {
        v17 = v16[19];
        v18 = *(int8x16_t*)(LANES128(v16[30]).n128_u64[1] + 16);
        LANES128(v19).n128_u64[0] = LANES128(v16[19]).n128_u64[0];
        LANES128(v20).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v21).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                .n64_u64[0];
        LANES128(v22).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v23).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
        LANES128(v19).n128_u64[1] = LANES128(v22).n128_u64[0];
        *(int32x2_t*)&LANES128(v23).n128_i8[8] =
            vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 1);
        *(int8x8_t*)&LANES128(v21).n128_i8[8] =
            vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
        v24 = vmlaq_f32(vmulq_f32(v18, v20),
                        COERCE_AS(float32x4_t, GameData_1a83800),
                        vmulq_f32(v19, v21));
        LANES128(v19).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v22).n128_u64[1] = LANES128(v19).n128_u64[0];
        LANES128(v19).n128_u64[1] = LANES128(v16[19]).n128_u64[0];
        LANES128(v17).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v17).n128_i8[8] =
            vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
        v51_.v51 =
            vmlsq_f32(vmlaq_f32(v24, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v19, v23)),
                      v17, v22);
      }
      else {
        v25 = LANES128(v16[30]).n128_u64[1];
        v27 = *(_QWORD*)(v25 + 16);
        v26 = *(_QWORD*)(v25 + 24);
        LANES128(v51_.v51).n128_u64[0] = v27;
        LANES128(v51_.v51).n128_u64[1] = v26;
      }
      game_zview_cf7200(v15, v16 + 35, &v51_.v51);
    }
  }
  v28 = v49_.v50;
  if (v49_.v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49_.v50 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  if (v6 != 0) {
    goto LABEL_63;
  }
  v29 = *(_QWORD*)(v3 + 16);
  do {
    v30 = v29;
    v29 = *(_QWORD*)(v29 + 600);
  } while (v29 != 0);
  if ((*(_BYTE*)(v30 + 388) & 0x20) == 0 ||
      (v31 = *(_QWORD**)(v30 + 168)) == nullptr) {
    if (*(_QWORD*)(*(_QWORD*)(v3 + 16) + 192LL) != 0) {
      *(_WORD*)(v3 + 366) = 257;
    }
    goto LABEL_63;
  }
  *(_WORD*)(v3 + 366) = 256;
  v32 = (__int64*)fw_memory_g_heap_manager_ptr;
  v33 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v33[1] = 0;
  v33[2] = 0;
  v33[8] = 0;
  *v33 = GameData_1fd82e0;
  v34 = *(_QWORD*)(v3 + 376);
  *(_QWORD*)(v3 + 368) = v33 + 4;
  *(_QWORD*)(v3 + 376) = v33;
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak(v34);
  }
  v35 = *(_QWORD**)(v3 + 368);
  LANES128(v51_.v51).n128_u64[0] = (unsigned __int64)GameData_1fd8330;
  LANES128(v51_.v51).n128_u64[1] = v3;
  v51_.v52 = &v51_.v51;
  GameRoutine_cfad30(&v51_.v51, v35);
  if (v51_.v52 == &v51_.v51) {
    v36 = 32;
    goto LABEL_42;
  }
  if (v51_.v52 != nullptr) {
    v36 = 40;
  LABEL_42:
    (*(void (**)(void))(LANES128(*(v51_.v52)).n128_u64[0] + v36))();
  }
  v37 = *(_QWORD*)(v3 + 376);
  v49_.v49 = *(_QWORD*)(v3 + 368);
  v49_.v50 = v37;
  if (v37 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                              memory_order_relaxed);
  }
  game_UnitActor_FuncBuildCompleteSubscribe(v31, &v49_.v49);
  if (v49_.v50 != 0) {
    std___1___shared_weak_count___release_weak(v49_.v50);
  }
  v38 = (_QWORD*)fw_memory_HeapManager_Allocate(*v32, 80, 16, 0);
  v38[1] = 0;
  v38[2] = 0;
  v38[8] = 0;
  *v38 = GameData_1fd83b0;
  v39 = *(_QWORD*)(v3 + 392);
  *(_QWORD*)(v3 + 384) = v38 + 4;
  *(_QWORD*)(v3 + 392) = v38;
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak(v39);
  }
  v40 = *(float32x4_t**)(v3 + 384);
  v41 = &v51_.v51;
  LANES128(v51_.v51).n128_u64[0] = (unsigned __int64)GameData_1fd8400;
  LANES128(v51_.v51).n128_u64[1] = v3;
  v51_.v52 = &v51_.v51;
  if (v40 == &v51_.v51) {
    goto LABEL_55;
  }
  v41 = (float32x4_t*)LANES128(v40[2]).n128_u64[0];
  if (v41 == v40) {
    v51_.v52 = nullptr;
    (*(void (**)(float32x4_t*, float32x4_t*))(LANES128(*(v41)).n128_u64[0] +
                                              24))(v41, &v51_.v51);
    (*(void (**)(unsigned __int64))(*(_QWORD*)LANES128(v40[2]).n128_u64[0] +
                                    32LL))(LANES128(v40[2]).n128_u64[0]);
    v51_.v52 = &v51_.v51;
    LANES128(*(v40)).n128_u64[0] = (unsigned __int64)GameData_1fd8400;
    LANES128(*(v40)).n128_u64[1] = v3;
    v42 = 32;
    v41 = &v51_.v51;
    LANES128(v40[2]).n128_u64[0] = (unsigned __int64)v40;
    goto LABEL_57;
  }
  LANES128(*(v40)).n128_u64[0] = (unsigned __int64)GameData_1fd8400;
  LANES128(*(v40)).n128_u64[1] = v3;
  v51_.v52 = v41;
  LANES128(v40[2]).n128_u64[0] = (unsigned __int64)v40;
  if (v41 == &v51_.v51) {
  LABEL_55:
    v42 = 32;
  }
  else {
    if (v41 == nullptr) {
      goto LABEL_58;
    }
    v42 = 40;
  }
LABEL_57:
  (*(void (**)(void))(LANES128(*(v41)).n128_u64[0] + v42))();
LABEL_58:
  v43 = *(_QWORD*)(v3 + 384);
  v44 = *(_QWORD*)(v3 + 392);
  v47_.v47 = v43;
  v47_.v48 = v44;
  if (v44 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                              memory_order_relaxed);
    LANES128(v51_.v51).n128_u64[0] = v43;
    LANES128(v51_.v51).n128_u64[1] = v44;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                              memory_order_relaxed);
    UnitActor_81e020((__int64)v31, (__int64*)&v51_.v51);
    std___1___shared_weak_count___release_weak(v44);
  }
  else {
    v51_.v51 = COERCE_AS(float32x4_t, v43);
    UnitActor_81e020((__int64)v31, (__int64*)&v51_.v51);
  }
  GameRoutine_81e220(v31 + 46, &v47_.v47);
  if (v47_.v48 != 0) {
    std___1___shared_weak_count___release_weak(v47_.v48);
  }
LABEL_63:
  v45 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v45 + 44) != 1 || *(_DWORD*)(v45 + 40) != 1) {
    *(_DWORD*)(v45 + 48) = 1;
    *(_BYTE*)(v45 + 52) = 1;
  }
  if ((*(_BYTE*)(v45 + 128) & 1) == 0 && (*(_BYTE*)(v45 + 129) & 1) != 0) {
    WaitRelease_cfa2a0(v45 + 32);
  }
}

__int64 game_e17bc0(__int64 a1)
{
  __int64 v1;
  float v2;
  float v4;
  __int64 result;
  float v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  float32x4_t* v10;
  __int64 v11;
  float32x4_t v12;
  __int64 v13;
  __int64 v14;
  float v15;
  unsigned __int64 v16;
  float32x4_t* v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float v25;
  float32x4_t v26;
  float32x4_t v27;
  int8x16_t v28;
  float v29;
  float32x4_t v30;
  int8x16_t v31;
  float32x4_t* v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(float*)(a1 + 16);
  v4 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 8LL) +
                       228LL) /
             0x1.8000000000000p+0f);
  if (v2 > 0x1.0000000000000p+0f) {
    v2 = v2 - v4;
    if (v2 >= 0x1.0000000000000p+0f) {
      goto LABEL_7;
    }
  }
  else if (v2 >= 0x1.0000000000000p+0f ||
           (v2 = v2 + v4) <= 0x1.0000000000000p+0f) {
  LABEL_7:
    *(float*)(a1 + 16) = v2;
    result = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL);
    v6 = *(float*)(a1 + 48) *
         (float)((float)(fminf(fmaxf(v2, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                         0x1.6666660000000p-1f) +
                 0x1.3333340000000p-2f);
    if ((*(_BYTE*)(a1 + 20) & 1) != 0) {
      *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 16) + 40LL) + 8LL) +
                64LL) = v6;
    }
    else {
      result =
          ((__int64 (*)(__int64, unsigned __int64*, float))GameRoutine_ceede0)(
              result, (unsigned __int64*)(a1 + 32), v6);
      *(_BYTE*)(a1 + 20) = 1;
    }
    v7 = *(_QWORD*)(a1 + 8);
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 24LL) + 16LL);
    if ((*(_QWORD*)(v8 + 24) & 0x1FFFFFFFFLL) != 0x100000001LL) {
      goto LABEL_20;
    }
    v9 = *(_QWORD**)(*(_QWORD*)(v8 + 40) + 8LL);
    v10 = (float32x4_t*)v9[12];
    v11 = v9[13] - (_QWORD)v10;
    if (v11 == 0) {
      goto LABEL_20;
    }
    v12 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v9[1] + 8LL) + 16LL) + 560LL);
    v13 = (v11 >> 5) & 3;
    if ((unsigned __int64)(v11 >> 5) >= 4) {
      v15 = 0x0.0p+0f;
      v16 = (v11 >> 5) & 0xFFFFFFFFFFFFFFFCLL;
      v17 = v10 + 4;
      v14 = 0;
      do {
        v18 = v17[-4];
        v14 += 4;
        v19 = vsubq_f32(v12, v18);
        LANES128(v18).n128_u32[3] = 0;
        v20 = vmulq_f32(v19, v19);
        LANES128(v20).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                .n64_u64[0];
        v21 = v15 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]))))
                        .n64_f32[0];
        v22 = v17[-2];
        v23 = vsubq_f32(v18, v22);
        LANES128(v22).n128_u32[3] = 0;
        v24 = vmulq_f32(v23, v23);
        LANES128(v24).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
                .n64_u64[0];
        v25 = v21 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))))
                        .n64_f32[0];
        v26 = *v17;
        v27 = vsubq_f32(v22, *v17);
        LANES128(v26).n128_u32[3] = 0;
        v28 = vmulq_f32(v27, v27);
        LANES128(v28).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                .n64_u64[0];
        v29 = v25 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]))))
                        .n64_f32[0];
        v12 = v17[2];
        v17 += 8;
        v30 = vsubq_f32(v26, v12);
        LANES128(v12).n128_u32[3] = 0;
        v31 = vmulq_f32(v30, v30);
        LANES128(v31).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                .n64_u64[0];
        v15 = v29 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]))))
                        .n64_f32[0];
      } while (v16 != v14);
    }
    else {
      v14 = 0;
      v15 = 0x0.0p+0f;
    }
    if (v13 != 0) {
      v32 = &v10[2 * v14];
      do {
        v33 = *v32;
        v32 += 2;
        v34 = v33;
        --v13;
        v35 = vsubq_f32(v12, v33);
        LANES128(v34).n128_u32[3] = 0;
        v36 = vmulq_f32(v35, v35);
        LANES128(v36).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
                .n64_u64[0];
        v15 = v15 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]))))
                        .n64_f32[0];
        v12 = v34;
      } while (v13 != 0);
    }
    if (v15 <= 0x1.0000000000000p-1f) {
    LABEL_20:
      if (*(_BYTE*)(v7 + 44) != 1 || *(_DWORD*)(v7 + 40) != 0) {
        *(_DWORD*)(v7 + 48) = 0;
        *(_BYTE*)(v7 + 52) = 1;
      }
      if ((*(_BYTE*)(v7 + 128) & 1) == 0 && (*(_BYTE*)(v7 + 129) & 1) != 0) {
        return GameRoutine_e18130(v7 + 32);
      }
    }
    return result;
  }
  v2 = 0x1.0000000000000p+0f;
  goto LABEL_7;
}

__int64 game_e6c240(__int64 a1, __int64 a2)
{
  unsigned int v4;
  char v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  char v10;
  char v11;

  v4 = (unsigned __int16)ProcCmdBtlSeqBattle_e6b430(a1);
  if (v4 < 0x100) {
    v5 = 0;
    return v5 & 1;
  }
  v6 = GameData_212dec0[0];
  if ((_BYTE)v4 != 0) {
    if ((unsigned __int8)v4 == 1) {
      v7 = 160;
    }
    else if ((unsigned __int8)v4 == 3) {
      v7 = 288;
    }
    else {
      v7 = 416;
    }
    *(_BYTE*)(GameData_2203490 + v7 + 672) = 1;
    v8 = *(_QWORD*)(a1 + 160);
    if (v8 == 0) {
      goto LABEL_15;
    }
  }
  else {
    *(_BYTE*)(*GameData_212ea58 + 704) = 1;
    if ((*(_BYTE*)(*v6 + 12) & 1) == 0) {
      CmdBtlSkipInput_1006910(GameData_22190c0);
    }
    v8 = *(_QWORD*)(a1 + 160);
    if (v8 == 0) {
    LABEL_15:
      v5 = 0;
      if (*(_QWORD*)(a1 + 192) == 0) {
        goto LABEL_23;
      }
      goto LABEL_16;
    }
  }
  v5 = BattleInfo_796f20(v8, a2);
  if (*(_QWORD*)(a1 + 192) != 0) {
  LABEL_16:
    if (GameData_21d3f90 != 0) {
      if ((unsigned __int8)v4 > 3u) {
        v9 = 3;
      }
      else {
        v9 = GameData_1a83140[v4 & 3];
      }
      v10 = GameHr_eacc20(a2, 8u, v9, 0xFFFFFFFF);
    }
    else {
      v10 = 0;
    }
    v5 |= v10;
  }
LABEL_23:
  if ((v5 & 1) != 0 && (*(_BYTE*)(*v6 + 12) & 1) == 0) {
    if ((*(_BYTE*)(GameData_22190c0 + 11) & 1) == 0 &&
        (*(_BYTE*)(GameData_22190c0 + 9) & 1) == 0 &&
        game_ProcFadeView_instance_ != 0) {
      v11 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
      *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 2;
      if (game_ProcFadeView_instance_ != 0) {
        game_809ba0(game_ProcFadeView_instance_, 0x1.1111120000000p-3f);
        if (game_ProcFadeView_instance_ != 0) {
          *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v11;
        }
      }
    }
    v5 = 1;
  }
  return v5 & 1;
}

float game_1062d90(float* a1, float* a2)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float result;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;

  {
    v2 = *a1;
    __asm__ volatile("" ::"w"(v2));
  }
  {
    v3 = a1[1];
    __asm__ volatile("" ::"w"(v3));
  }
  v4 = 0x1.0000000000000p+0f;
  v5 = 0x1.0000000000000p+0f;
  v6 = (float)(PSEUDO_UNFUSED(v3 * v3)) + (float)(v2 * v2);
  v7 = 0x0.0p+0f;
  v8 = 0x0.0p+0f;
  if (v6 >= 0x1.0000000000000p-23f) {
    v9 = 0x1.0000000000000p+0f / sqrtf(v6);
    v8 = v2 * v9;
    v5 = v3 * v9;
  }
  {
    v10 = *a2;
    __asm__ volatile("" ::"w"(v10));
  }
  {
    v11 = a2[1];
    __asm__ volatile("" ::"w"(v11));
  }
  v12 = (float)(PSEUDO_UNFUSED(v11 * v11)) + (float)(v10 * v10);
  if (v12 >= 0x1.0000000000000p-23f) {
    v13 = 0x1.0000000000000p+0f / sqrtf(v12);
    v7 = v10 * v13;
    v4 = v11 * v13;
  }
  v14 = (float)(PSEUDO_UNFUSED(v5 * v4)) + (float)(v8 * v7);
  result = 0x0.0p+0f;
  if (v14 < 0x1.fffffc0000000p-1f) {
    if (v14 <= -0x1.fffffc0000000p-1f) {
      return 0x1.921fb60000000p+1f;
    }
    v16 = sqrtf(0x1.0000000000000p+0f - (float)(v14 * v14));
    if (v14 >= 0x0.0p+0f) {
      {
        v21 = *(float*)GameData_212c2f0;
        __asm__ volatile("" ::"w"(v21));
      }
      {
        v22 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        __asm__ volatile("" ::"w"(v22));
      }
      {
        v23 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        __asm__ volatile("" ::"w"(v23));
      }
      {
        v24 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        __asm__ volatile("" ::"w"(v24));
      }
      if (v14 > 0x1.6a09e60000000p-1f) {
        v25 = v16 / v14;
        return v25 * (float)((
                                 float)((float)((float)((float)(v24 + (float)((float)((float)((float)(v23 + (float)((float)((float)((float)(v22 + (float)((float)((float)(v21 * (float)(v25 * v25)) - *((float*)GameData_212c2f0 + 1)) * (float)(v25 * v25))) * (float)(v25 * v25)) - *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) * (float)(v25 *
                                                                                                                                                                                                                                                                                                                                                                      v25))) *
                                                                                              (float)(v25 *
                                                                                                      v25)) -
                                                                                      *(float*)((char*)((
                                                                                                    __int128*)0x10LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c2f0 +
                                                                                                4)) *
                                                                              (float)(v25 *
                                                                                      v25))) *
                                                        (float)(v25 * v25)) -
                                                *(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c2f0 +
                                                          12)) *
                                        (float)(v25 * v25)) +
                             0x1.0000000000000p+0f);
      }
      v17 = v14 / v16;
      v18 = 0x1.921fb60000000p+0f;
      v19 =
          (float)((float)((float)((float)(v24 +
                                          (float)((float)((float)((float)(v23 +
                                                                          (float)((float)((float)((float)(v22 +
                                                                                                          (float)((float)((float)(v21 *
                                                                                                                                  (float)(v17 *
                                                                                                                                          v17)) -
                                                                                                                          *((float*)
                                                                                                                                GameData_212c2f0 +
                                                                                                                            1)) *
                                                                                                                  (float)(v17 *
                                                                                                                          v17))) *
                                                                                                  (float)(v17 *
                                                                                                          v17)) -
                                                                                          *(float*)((char*)((
                                                                                                        _UNKNOWN**)0x8LL) +
                                                                                                    (_QWORD)
                                                                                                        GameData_212c2f0 +
                                                                                                    4)) *
                                                                                  (float)(v17 *
                                                                                          v17))) *
                                                                  (float)(v17 *
                                                                          v17)) -
                                                          *(float*)((char*)((
                                                                        __int128*)0x10LL) +
                                                                    (_QWORD)
                                                                        GameData_212c2f0 +
                                                                    4)) *
                                                  (float)(v17 * v17))) *
                                  (float)(v17 * v17)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                                    (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v17 * v17)) +
          0x1.0000000000000p+0f;
      return v18 - (float)(PSEUDO_UNFUSED(v17 * v19));
    }
    if (v14 < -0x1.6a09e60000000p-1f) {
      v17 = (float)-v16 / v14;
      v18 = 0x1.921fb60000000p+1f;
      v19 =
          (float)((float)-(
                      float)(*(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c2f0 + 12) -
                             (float)((
                                         float)(*(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c2f0 +
                                                          8) +
                                                (float)((float)-(
                                                            float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((
                                                                                                                                                      float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((
                                                                                                                                                                                                                                            float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                                     4) -
                                                                                                                                                                                                                                                           (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                          float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                       GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                   1) -
                                                                                                                                                                                                                                                                                                                                                                 (float)(*(float*)GameData_212c2f0 * (float)(v17 *
                                                                                                                                                                                                                                                                                                                                                                                                             v17))) *
                                                                                                                                                                                                                                                                                                                                                      (float)(v17 *
                                                                                                                                                                                                                                                                                                                                                              v17))) *
                                                                                                                                                                                                                                                                   (float)(v17 *
                                                                                                                                                                                                                                                                           v17))) *
                                                                                                                                                                                                                                        (float)(v17 *
                                                                                                                                                                                                                                                v17))) *
                                                                                                                                                  (float)(v17 *
                                                                                                                                                          v17))) *
                                                        (float)(v17 * v17))) *
                                     (float)(v17 * v17))) *
                  (float)(v17 * v17)) +
          0x1.0000000000000p+0f;
      return v18 - (float)(PSEUDO_UNFUSED(v17 * v19));
    }
    v20 = (float)-v14 / v16;
    return (float)(PSEUDO_UNFUSED(
               v20 *
               (float)((float)((float)-(float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v20 *
                                                                                                                                                                                                                                                                                                                                                                                                v20))) *
                                                                                                                                                                                                                                                                                                       (float)(v20 *
                                                                                                                                                                                                                                                                                                               v20))) *
                                                                                                                                                                                                                                                                                    (float)(v20 *
                                                                                                                                                                                                                                                                                            v20))) *
                                                                                                                                                                                                                                                            (float)(v20 *
                                                                                                                                                                                                                                                                    v20))) *
                                                                                                                                                                         (float)(v20 *
                                                                                                                                                                                 v20))) *
                                                                          (float)(v20 *
                                                                                  v20))) *
                                                       (float)(v20 * v20))) *
                               (float)(v20 * v20)) +
                       0x1.0000000000000p+0f))) +
           0x1.921fb60000000p+0f;
  }
  return result;
}

__int64 game_10d4da0(__int64 a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  void (*v13)(_QWORD*);
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  float v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  char v22;
  __int16 v23;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235e18,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2235e18) != 0) {
    GameData_22357e0 = 0;
    GameData_22357e8 = (__int64)CombatSequenceImpl_10d5500;
    GameData_2235798 = 32;
    GameData_22357c0 = 0;
    GameData_22357c8 = 0;
    GameData_22357d0 = 0;
    GameData_22357a0 = 0;
    GameData_22357a8 = 0;
    GameData_22357b0 = 0;
    GameData_22357b8 = 0;
    GameData_22357d8 = 13;
    GameData_22357f0 = 0;
    GameData_22357f8 = 0;
    GameData_2235800 = 0;
    GameData_2235808 = 0;
    GameData_2235810 = 0;
    GameData_2235818 = 8;
    GameData_2235838 = 0;
    GameData_2235840 = 0;
    GameData_2235848 = 0;
    GameData_2235850 = 0;
    GameData_2235860 = 0;
    GameData_2235868 = (__int64)CombatSequenceImpl_10d5530;
    GameData_2235870 = 0;
    GameData_2235878 = 0;
    GameData_2235880 = 0;
    GameData_2235888 = 0;
    GameData_2235890 = 0;
    GameData_2235898 = 13;
    GameData_22358a0 = 0;
    GameData_22358a8 = (__int64)GameRoutine_10d5560;
    GameData_22358b0 = 0;
    GameData_22358b8 = 0;
    GameData_22358c0 = 0;
    GameData_22358c8 = 0;
    GameData_22358d0 = 0;
    GameData_22358e0 = 0;
    GameData_22358e8 = (__int64)CombatSequenceImpl_10d5530;
    GameData_22358f0 = 0;
    GameData_22358f8 = 0;
    GameData_2235900 = 0;
    GameData_2235908 = 0;
    GameData_2235910 = 0;
    GameData_2235918 = 8;
    GameData_2235820 = 0;
    GameData_2235828 = (__int64)GameData_212c640[0];
    GameData_2235858 = 15;
    GameData_22358d8 = 15;
    GameData_2235938 = 0;
    GameData_2235940 = 0;
    GameData_2235948 = 0;
    GameData_2235950 = 0;
    GameData_2235958 = 13;
    GameData_2235970 = 0;
    GameData_2235978 = 0;
    GameData_2235980 = 0;
    GameData_2235988 = 0;
    GameData_2235990 = 0;
    GameData_2235998 = 13;
    GameData_22359a0 = 0;
    GameData_22359b0 = 0;
    GameData_22359b8 = 0;
    GameData_22359c0 = 0;
    GameData_22359c8 = 0;
    GameData_22359d0 = 0;
    GameData_2235a00 = 0;
    GameData_2235a08 = 0;
    GameData_2235a10 = 0;
    GameData_22359f8 = 0;
    GameData_22359f0 = 0;
    GameData_22359e8 = 0;
    GameData_22359e0 = 0;
    GameData_2235a18 = 13;
    GameData_2235a20 = 0;
    GameData_2235a30 = 0;
    GameData_2235a38 = 0;
    GameData_2235a40 = 0;
    GameData_2235a48 = 0;
    GameData_2235a50 = 0;
    GameData_2235a58 = 13;
    GameData_2235a60 = 0;
    GameData_2235a70 = 0;
    GameData_2235a78 = 0;
    GameData_2235a80 = 0;
    GameData_2235a88 = 0;
    GameData_2235a90 = 0;
    GameData_2235a98 = 14;
    GameData_2235aa0 = 0;
    GameData_2235ab0 = 0;
    GameData_2235ab8 = 0;
    GameData_2235ac0 = 0;
    GameData_2235ac8 = 0;
    GameData_2235ad0 = 0;
    GameData_2235ad8 = 13;
    GameData_2235ae0 = 0;
    GameData_2235af0 = 0;
    GameData_2235af8 = 0;
    GameData_2235b00 = 0;
    GameData_2235b08 = 0;
    GameData_2235b10 = 0;
    GameData_2235b18 = 13;
    GameData_2235b20 = 0;
    GameData_2235b30 = 0;
    GameData_2235b38 = 0;
    GameData_2235b40 = 0;
    GameData_2235b48 = 0;
    GameData_2235b50 = 0;
    GameData_2235b58 = 13;
    GameData_2235b60 = 0;
    GameData_2235b70 = 0;
    GameData_2235b78 = 0;
    GameData_2235b80 = 0;
    GameData_2235b88 = 0;
    GameData_2235b90 = 0;
    GameData_2235920 = 0;
    GameData_2235928 = (__int64)GameData_212c648;
    GameData_2235960 = 0;
    GameData_2235968 = (__int64)CombatSequenceImpl_10d5570;
    GameData_22359a8 = (__int64)GameRoutine_10d55f0;
    GameData_22359d8 = 3;
    GameData_2235a28 = (__int64)CombatSequenceImpl_10d5610;
    GameData_2235a68 = (__int64)CombatSequenceImpl_10d5690;
    GameData_2235aa8 = (__int64)CombatSequenceImpl_10d5820;
    GameData_2235ae8 = (__int64)CombatSequenceImpl_10d58c0;
    GameData_2235b28 = (__int64)game_combat_CombatSequenceImpl_DieTalkOrNothing;
    GameData_2235b68 = (__int64)CombatSequenceImpl_10d59f0;
    v27 = (unsigned int)game_HashString32("notEvaporation");
    GameData_2235bc0 = (__int64)"notEvaporation";
    GameData_2235ba0 = 0;
    GameData_2235ba8 = 0;
    GameData_2235bb0 = 0;
    GameData_2235bb8 = v27;
    GameData_2235be8 = (__int64)CombatSequenceImpl_10d5ea0;
    GameData_2235b98 = 2;
    GameData_2235bc8 = 0;
    GameData_2235bd0 = 0;
    GameData_2235bd8 = 13;
    GameData_2235be0 = 0;
    GameData_2235bf0 = 0;
    GameData_2235bf8 = 0;
    GameData_2235c00 = 0;
    GameData_2235c08 = 0;
    GameData_2235c10 = 0;
    GameData_2235c28 = (__int64)CombatSequenceImpl_10d6170;
    GameData_2235c18 = 13;
    GameData_2235c20 = 0;
    GameData_2235c30 = 0;
    GameData_2235c38 = 0;
    GameData_2235c40 = 0;
    GameData_2235c48 = 0;
    GameData_2235c50 = 0;
    GameData_2235c58 = 14;
    GameData_2235c60 = 0;
    GameData_2235c68 = (__int64)CombatSequenceImpl_10d6360;
    GameData_2235c70 = 0;
    GameData_2235c78 = 0;
    GameData_2235c80 = 0;
    GameData_2235c88 = 0;
    GameData_2235c90 = 0;
    GameData_2235cb8 = (unsigned int)game_HashString32("end");
    GameData_2235c98 = 2;
    GameData_2235ca0 = 0;
    GameData_2235ca8 = 0;
    GameData_2235cb0 = 0;
    GameData_2235cc0 = (__int64)"end";
    GameData_2235cc8 = 0;
    GameData_2235cd0 = 0;
    GameData_2235ce8 = (__int64)GameRoutine_10d6490;
    GameData_2235cd8 = 13;
    GameData_2235ce0 = 0;
    GameData_2235cf0 = 0;
    GameData_2235cf8 = 0;
    GameData_2235d00 = 0;
    GameData_2235d08 = 0;
    GameData_2235d10 = 0;
    GameData_2235d18 = 13;
    GameData_2235d20 = 0;
    GameData_2235d28 = (__int64)CombatSequenceImpl_10d64b0;
    GameData_2235d30 = 0;
    GameData_2235d38 = 0;
    GameData_2235d40 = 0;
    GameData_2235d48 = 0;
    GameData_2235d50 = 0;
    GameData_2235d58 = 14;
    GameData_2235d60 = 0;
    GameData_2235d70 = 0;
    GameData_2235d78 = 0;
    GameData_2235d68 = (__int64)CombatSequenceImpl_10d6630;
    GameData_2235d80 = 0;
    GameData_2235d88 = 0;
    GameData_2235d90 = 0;
    GameData_2235d98 = 32;
    GameData_2235dc0 = 0;
    GameData_2235dc8 = 0;
    GameData_2235dd0 = 0;
    GameData_2235dd8 = 0;
    GameData_2235e00 = 0;
    GameData_2235e08 = 0;
    GameData_2235e10 = 0;
    GameData_2235db8 = 0;
    GameData_2235db0 = 0;
    GameData_2235da8 = 0;
    GameData_2235da0 = 0;
    GameData_2235de0 = 0;
    GameData_2235de8 = 0;
    GameData_2235df0 = 0;
    GameData_2235df8 = 0;
    __cxa_guard_release((__int64)&GameData_2235e18);
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      200, 16, 0);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 32) = 0;
  v9 = (_QWORD*)(v7 + 32);
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register(v7);
  v10 = *v6;
  *(_QWORD*)(v7 + 168) = a3;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_DWORD*)(v7 + 192) = 0;
  GameData_2235e20 = v7;
  *(_QWORD*)v7 = game_combat_CombatSequenceImpl_vtable;
  *(_QWORD*)(v7 + 152) = GameData_200ba78;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(v10, 264, 16, 0);
  GameRoutine_106b7b0(v11);
  v12 = GameData_212d448[0];
  v13 = *(void (**)(_QWORD*))(*v11 + 16LL);
  *GameData_212d448[0] = (__int64)v11;
  v13(v11);
  v14 = *v12;
  *(_QWORD*)(v7 + 160) = *v12;
  game_combat_CombatUniverse_Setup(v14, a2);
  GameRoutine_8232c0(
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(v7 + 160) + 128LL) + 72LL));
  if (*v12 != 0 && (v15 = *(_QWORD*)(*v12 + 8)) != 0 &&
      (*(_BYTE*)(v15 + 113) & 8) != 0) {
    GameRoutine_867df0();
  }
  else {
    GameHr_8679c0();
    v16 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v17 & 0x10) == 0) {
        v18 = *(float*)(game_ProcGameSkipView_instance_ + 224);
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            v17 & 0xFFFFFFE2 | 1;
        if (v18 > 0x0.0p+0f) {
          *(_DWORD*)(v16 + 224) = 0;
        }
      }
    }
  }
  v28_.v28[0] = GameData_200bae8;
  v28_.v28[1] = v7;
  v28_.v29 = v28_.v28;
  GameRoutine_109d160((_QWORD*)(v7 + 176), (__int64)v28_.v28);
  if (v28_.v29 == v28_.v28) {
    v19 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_15;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v28_.v29 + v19))((__int64)v28_.v29);
LABEL_15:
  if (a1 != 0) {
    v20 = *(_QWORD*)(a1 + 40);
    if (v20 != 0) {
      *(_QWORD*)(v20 + 48) = v7;
      *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v7;
    *(_QWORD*)(v7 + 24) = "CombatSequenceImpl";
    *(_QWORD*)(v7 + 32) = a1;
    *(_DWORD*)(v7 + 140) =
        (unsigned int)game_HashString32("CombatSequenceImpl");
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 24;
    *(_QWORD*)(v7 + 80) = 1;
    *(_QWORD*)(v7 + 8) = &GameData_2235798;
    *(_QWORD*)(v7 + 16) = &GameData_2235798;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
        (*(_WORD*)(v7 + 136) & 0x100) == 0) {
      *(_WORD*)(v7 + 136) |= 0x100u;
    }
    v21 = (_BYTE*)*v9;
    v22 = *(_BYTE*)(*v9 + 138LL);
    if (v22 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v21 + 64LL))(*v9);
      v22 = v21[138];
    }
    v21[138] = v22 + 1;
    v23 = *(_WORD*)(v7 + 136) | 2;
    goto LABEL_24;
  }
  v25 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628);
  if (v25 != 0) {
    v26 = *(_QWORD*)(v25 + 40);
    if (v26 != 0) {
      *(_QWORD*)(v26 + 48) = v7;
      *(_QWORD*)(v7 + 56) = *(_QWORD*)(v25 + 40);
    }
    *(_QWORD*)(v25 + 40) = v7;
    *(_QWORD*)(v7 + 24) = "CombatSequenceImpl";
    *(_QWORD*)(v7 + 32) = v25;
    *(_DWORD*)(v7 + 140) =
        (unsigned int)game_HashString32("CombatSequenceImpl");
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 24;
    *(_QWORD*)(v7 + 80) = 1;
    *(_QWORD*)(v7 + 8) = &GameData_2235798;
    *(_QWORD*)(v7 + 16) = &GameData_2235798;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
        (*(_WORD*)(v7 + 136) & 0x100) == 0) {
      v23 = *(_WORD*)(v7 + 136) | 0x100;
    LABEL_24:
      *(_WORD*)(v7 + 136) = v23;
    }
  }
  else if ((*(_WORD*)(v7 + 136) & 1) == 0) {
    ProcInst_657a50(v7, 1);
  }
  return v7;
}

void game_11ce900(__int64 a1)
{
  bool v2;
  float v3;
  __int64 v4;
  float v5;
  __int64* v6;
  float v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  __int64* v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  int v19;
  unsigned __int8* v20;
  unsigned int v21;
  bool v22;
  int v23;
  __int16 v25;
  __int64 v26;
  int v27;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0 &&
      (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3
           ? (v2 = (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) == 0)
           : (v2 = false),
       v2)) {
    v8 = *(_QWORD*)(a1 + 8);
    if (v8 != 0) {
      while (1) {
        if (*(_BYTE*)v8 == 2) {
          if (*(_DWORD*)(v8 + 32) == 2) {
            *(_QWORD*)(a1 + 16) = v8;
            v25 = *(_WORD*)(a1 + 136) & 0xFF7F;
            goto LABEL_52;
          }
        }
        else if (*(_BYTE*)v8 == 0) {
          return;
        }
        v8 += 64;
      }
    }
  }
  else {
    v3 = *(float*)(a1 + 744);
    if (v3 >= 0x0.0p+0f) {
      if (*(_BYTE*)(a1 + 691) == 1) {
        v4 = *(_QWORD*)(a1 + 680);
        if (v4 != 0) {
          game_cutscene_181acc0(v4),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
          v3 = v5 * 0x1.f400000000000p+9f;
        }
        else {
          v3 = 0x0.0p+0f;
        }
      }
      else {
        v6 = GameRoutine_18d0ec0((_QWORD*)(*GameData_212c598[0] + 144),
                                 (unsigned __int8*)(a1 + 720)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v6 != nullptr) {
          v7 = (float)*(__int64*)(v6[5] + 3696);
        }
        else {
          v7 = 0x0.0p+0f;
        }
        v3 = v7 / 0x1.f400000000000p+9f;
      }
    }
    v9 = *(float*)(a1 + 748);
    if (*(_BYTE*)(a1 + 691) == 1) {
      v10 = *(_QWORD*)(a1 + 680);
      if (v10 != 0) {
        GameRoutine_181ab60(v10),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        v12 = v11 * 0x1.f400000000000p+9f;
      }
      else {
        v12 = 0x0.0p+0f;
      }
    }
    else {
      v13 = GameRoutine_18d0ec0((_QWORD*)(*GameData_212c598[0] + 144),
                                (unsigned __int8*)(a1 + 720)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v13 != nullptr) {
        v14 = (float)*(__int64*)(v13[5] + 4880);
      }
      else {
        v14 = 0x0.0p+0f;
      }
      v12 = v14 / 0x1.f400000000000p+9f;
    }
    Seq_11cffe0(a1 + 152, v3, v9, v12),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
    game_gameui_19ae1e0(a1 + 384),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
    *(float*)(a1 + 748) = v3;
    v15 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
    if (v15 <= 0x0.0p+0f) {
      v16 = 0x1.119ce00000000p-6f;
    }
    else {
      v16 = v15 * 0x1.119ce00000000p-6f;
    }
    v17 = *(float*)(a1 + 744) + (float)(v16 * 0x1.f400000000000p+9f);
    *(float*)(a1 + 744) = v17;
    if (v17 >= 0x0.0p+0f) {
      v20 = *(unsigned __int8**)(a1 + 16);
      if (v20 != nullptr) {
        v21 = *v20;
        v22 = v21 > 0x10;
        v23 = (1 << v21) & 0x1CE00;
        if (!v22 && v23 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      v25 = *(_WORD*)(a1 + 136) | 8;
    LABEL_52:
      *(_WORD*)(a1 + 136) = v25;
    }
    else if (GameData_2240050 != 0 &&
             (int)((*(_QWORD*)(GameData_2240050 + 72) -
                    *(_QWORD*)(GameData_2240050 + 64)) >>
                   3) >= 1) {
      v18 = game_g_game_setting_ptr;
      v19 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
      if ((*(_BYTE*)(a1 + 637) & 1) != 0) {
        if ((v19 & 0x1002) != 0 &&
            (LayoutAccessor_1563280((__int64*)(a1 + 168), (__int64)"FastOut",
                                    0) &
             1) == 0 &&
            (LayoutAccessor_1563280((__int64*)(a1 + 168), (__int64)"FastIn",
                                    0) &
             1) == 0) {
          *(_BYTE*)(a1 + 376) = 0;
          GameHr_1562680(a1 + 168, "FastIn", 0x1.0000000000000p+0f),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
          if (*(_BYTE*)(a1 + 637) == 1) {
            GameHr_1562680(a1 + 400, "FastOut", 0x1.0000000000000p+0f),
                v11 = COERCE_AS(__typeof__(v11),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            if (GameData_2259540 != 0) {
              ProcGameUIFade_15e1b80(GameData_2259540, 1u, 0, 1u, 0),
                  v11 = COERCE_AS(__typeof__(v11),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v5 = COERCE_AS(__typeof__(v5),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
            }
            *(_BYTE*)(a1 + 637) = 0;
          }
        }
      }
      else {
        if ((v19 & 4) != 0) {
          GameRoutine_11d0d00(a1 + 152, 0),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v26 = *(_QWORD*)(a1 + 656);
        if (v26 != 0 && *(_WORD*)(v26 + 42) == 1 &&
            (*(_BYTE*)(*(_QWORD*)v18 + 953LL) & 0x10) != 0 &&
            (GameRoutine_11d0e50(a1 + 152) & 1) != 0) {
          *(_BYTE*)(a1 + 376) = 1;
          GameHr_1562680(a1 + 168, "FastOut", 0x1.0000000000000p+0f),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
          v27 = GameRoutine_11d0dc0(a1 + 152),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
          GameHr_19ae900(a1 + 384, v27),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        if ((*(_DWORD*)(*(_QWORD*)v18 + 952LL) & 0x7BCCB) != 0) {
          Seq_11d0af0(a1 + 152),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v5 =
                  COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
    }
  }
}

__int64 game_11fa1c0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 (**v9)();
  __int64 v10;
  char v11;
  __int64 v12;
  int v13;
  __int64 result;
  __int64 v15;
  char v16;
  char v17;
  int v18;
  _BYTE* v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  int v28;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 (**v36)();
  int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  __int64 (**v44)();
  int v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  __int64 (**v54)();
  int v55;
  int v56;
  int v57;
  unsigned __int8 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v63;
  __int64 v64;
  char* v65;
  char* v66;
  __int64 (**v67)();
  int v68;
  int v69;
  int v70;
  __int64 v71;
  char* v72;
  char* v73;
  __int64 (**v74)();
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  char* v83;
  __int64 (**v84)();
  int v85;
  int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  char* v93;
  __int64 (**v94)();
  int v95;
  int v96;
  int v97;
  unsigned __int8 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v103;
  __int64 v104;
  char* v105;
  char* v106;
  __int64 (**v107)();
  int v108;
  int v109;
  int v110;
  __int64 v111;
  struct {
    __int64 (*v112[4])();
    __int64 (**v113)();
  } v112_;
  _BYTE v114[4];
  unsigned int v115;
  int v116;

  v4 = *(_QWORD*)(a1 + 8);
  if (!game_Unit_Unknown6c90c0(v4)) {
    return 0;
  }
  v9 = v112_.v112;
  v10 = 876;
  v112_.v113 = v112_.v112;
  v111 = v4;
  LOBYTE(v116) = 0;
  v112_.v112[0] = (__int64 (*)())(GameData_2130910[0] + 2);
  v112_.v112[1] = game_11f3740_ptr[0];
  while (1) {
    v11 = (*((__int64 (**)(__int64 (**)(void), __int64*, __int64, int*))*v9 +
             6))(v9, &v111, v4 + v10, &v116);
    v9 = v112_.v113;
    if ((v11 & 1) != 0 || v10 == 1060) {
      break;
    }
    v10 += 8;
    v111 = v4;
    LOBYTE(v116) = 0;
    if (v112_.v113 == nullptr) {
    LABEL_6:
      GameRoutine_60a310();
    }
  }
  if (v112_.v113 == v112_.v112) {
    v12 = 32;
  }
  else {
    if (v112_.v113 == nullptr) {
      goto LABEL_12;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))((char*)*v112_.v113 + v12))((__int64)v112_.v113);
LABEL_12:
  if ((v11 & 1) == 0) {
    return 0;
  }
  v13 = *(unsigned __int16*)(a3 + 2);
  if (v13 == 65534) {
    v13 = -1;
  }
  else if (v13 == 0xFFFF) {
    v13 = 100;
  }
  else {
    result = 0;
    if ((v13 & 0x8000) != 0 || *(_BYTE*)a3 != 0) {
      return result;
    }
  }
  v15 = *(_QWORD*)(a1 + 8);
  v16 = *(_BYTE*)(v15 + 584);
  v17 = *(_BYTE*)(v15 + 585);
  if (a2 != 11) {
    v18 = *(__int16*)(a4 + 2);
    if (v18 != -1) {
      result = 0;
      if (v18 < 0) {
        return result;
      }
      if (*(_BYTE*)a4 != 1) {
        return result;
      }
      v17 = HIBYTE(*(_WORD*)(a4 + 2));
      v19 = (_BYTE*)*GameData_212ce98[0];
      if (*GameData_212ce98[0] != 0) {
        result = 0;
        if ((unsigned __int8)v19[26] <=
                (unsigned int)(unsigned __int8)(v18 - v19[24]) ||
            (unsigned __int8)v19[27] <=
                (unsigned int)(unsigned __int8)(BYTE1(v18) - v19[25])) {
          return result;
        }
      }
      v16 = *(_WORD*)(a4 + 2);
    }
  }
  if ((v13 & 0x80000000) == 0) {
    v20 = *(_QWORD*)(a1 + 8);
    LOBYTE(v112_.v112[0]) = 10;
    v21 = game_Unit_GetParam(v20);
    v15 = *(_QWORD*)(a1 + 8);
    v22 = v21 * v13 / 100;
    if (a2 == 11) {
      goto LABEL_29;
    }
  LABEL_33:
    v24 = 0;
    goto LABEL_34;
  }
  v22 = 100;
  if (a2 != 11) {
    goto LABEL_33;
  }
LABEL_29:
  v23 = *(__int16*)(a4 + 2);
  result = 0;
  if (v23 < 0 || *(_BYTE*)a4 != 2) {
    return result;
  }
  v24 = *(_QWORD*)(*(_QWORD*)(*GameData_212c890[0] + 64) + 8 * v23);
LABEL_34:
  v115 = 16809984;
  AIDeploy_1275160(*(_QWORD**)GameData_21306a0[0], v15, v16, v17, v22, &v115);
  v25 = *(_QWORD*)(v15 + 440);
  v26 = (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v25 != 0) {
    v27 = (__int64)&v26[3 * *(unsigned __int8*)(v25 + 16)];
  }
  else {
    v27 = *(_QWORD*)(GameData_21ca310 + 56) + 556216LL;
  }
  v28 = *(unsigned __int8*)(v27 + 16);
  if (v28 == 3 || v28 == 0) {
    if (v24 != 0) {
      goto LABEL_43;
    }
    goto LABEL_137;
  }
  v32 = *v26;
  if (v24 == 0) {
    if (v32 != 0) {
      while (!AIThink_11fd9e0(v15, v32)) {
      LABEL_126:
        v32 = *(_QWORD*)(v32 + 432);
        if (v32 == 0) {
          v25 = *(_QWORD*)(v15 + 440);
          goto LABEL_137;
        }
      }
      v72 = *(char**)(v32 + 600);
      v73 = *(char**)(v32 + 608);
      v74 = v112_.v112;
      v114[0] = 0;
      v112_.v112[0] = (__int64 (*)())GameData_20187e8;
      v112_.v112[1] = (__int64 (*)())v114;
      v112_.v113 = v112_.v112;
      if (v72 == v73) {
        goto LABEL_123;
      }
      v75 = *(char*)(v32 + 584);
      v76 = *(char*)(v32 + 585);
      do {
        v77 = v72[1] + v76;
        LODWORD(v111) = *v72 + v75;
        v116 = v77;
        if (v112_.v113 == nullptr) {
          goto LABEL_6;
        }
        (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
            v112_.v113, &v111, &v116);
        v72 += 4;
      } while (v72 != v73);
      v74 = v112_.v113;
      if (v112_.v113 == v112_.v112) {
      LABEL_123:
        v71 = 32;
      }
      else {
        if (v112_.v113 == nullptr) {
        LABEL_125:
          if ((v114[0] & 1) != 0) {
            return 1;
          }
          goto LABEL_126;
        }
        v71 = 40;
      }
      (*(void (**)(__int64))((char*)*v74 + v71))((__int64)v74);
      goto LABEL_125;
    }
  LABEL_137:
    v78 = *(_QWORD*)(GameData_21ca310 + 56);
    if (v25 != 0) {
      v79 = v78 + 24LL * *(unsigned __int8*)(v25 + 16) + 556000;
    }
    else {
      v79 = v78 + 556216;
    }
    if (*(_BYTE*)(v79 + 16) == 1) {
      goto LABEL_156;
    }
    v80 = *(_QWORD*)(v78 + 556024);
    if (v80 == 0) {
      goto LABEL_156;
    }
    while (!AIThink_11fd9e0(v15, v80)) {
    LABEL_146:
      v80 = *(_QWORD*)(v80 + 432);
      if (v80 == 0) {
        v25 = *(_QWORD*)(v15 + 440);
      LABEL_156:
        v88 = *(_QWORD*)(GameData_21ca310 + 56);
        if (v25 != 0) {
          v89 = v88 + 24LL * *(unsigned __int8*)(v25 + 16) + 556000;
        }
        else {
          v89 = v88 + 556216;
        }
        if (*(_BYTE*)(v89 + 16) == 2) {
          goto LABEL_175;
        }
        v90 = *(_QWORD*)(v88 + 556048);
        if (v90 == 0) {
          goto LABEL_175;
        }
        while (2) {
          if (AIThink_11fd9e0(v15, v90)) {
            v92 = *(char**)(v90 + 600);
            v93 = *(char**)(v90 + 608);
            v94 = v112_.v112;
            v114[0] = 0;
            v112_.v112[0] = (__int64 (*)())GameData_20187e8;
            v112_.v112[1] = (__int64 (*)())v114;
            v112_.v113 = v112_.v112;
            if (v92 == v93) {
              goto LABEL_162;
            }
            v95 = *(char*)(v90 + 584);
            v96 = *(char*)(v90 + 585);
            do {
              v97 = v92[1] + v96;
              LODWORD(v111) = *v92 + v95;
              v116 = v97;
              if (v112_.v113 == nullptr) {
                goto LABEL_6;
              }
              (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 +
                 6))(v112_.v113, &v111, &v116);
              v92 += 4;
            } while (v92 != v93);
            v94 = v112_.v113;
            if (v112_.v113 == v112_.v112) {
            LABEL_162:
              v91 = 32;
              goto LABEL_163;
            }
            if (v112_.v113 != nullptr) {
              v91 = 40;
            LABEL_163:
              (*(void (**)(__int64))((char*)*v94 + v91))((__int64)v94);
            }
            if ((v114[0] & 1) != 0) {
              return 1;
            }
          }
          v90 = *(_QWORD*)(v90 + 432);
          if (v90 == 0) {
            v25 = *(_QWORD*)(v15 + 440);
          LABEL_175:
            if (v25 != 0) {
              v98 = *(_BYTE*)(v25 + 16);
              v99 = *(_QWORD*)(GameData_21ca310 + 56);
              v100 = v99 + 24LL * v98 + 556000;
            }
            else {
              v99 = *(_QWORD*)(GameData_21ca310 + 56);
              v100 = v99 + 556216;
            }
            v101 = *(unsigned __int8*)(v100 + 16);
            if (v101 == 0 || v101 == 3) {
              return 0;
            }
            v103 = *(_QWORD*)(v99 + 556072);
            if (v103 == 0) {
              return 0;
            }
            while (2) {
              if (AIThink_11fd9e0(v15, v103)) {
                v105 = *(char**)(v103 + 600);
                v106 = *(char**)(v103 + 608);
                v107 = v112_.v112;
                v114[0] = 0;
                v112_.v112[0] = (__int64 (*)())GameData_20187e8;
                v112_.v112[1] = (__int64 (*)())v114;
                v112_.v113 = v112_.v112;
                if (v105 == v106) {
                  goto LABEL_187;
                }
                v108 = *(char*)(v103 + 584);
                v109 = *(char*)(v103 + 585);
                do {
                  v110 = v105[1] + v109;
                  LODWORD(v111) = *v105 + v108;
                  v116 = v110;
                  if (v112_.v113 == nullptr) {
                    goto LABEL_6;
                  }
                  (*((void (**)(__int64 (**)(void), __int64*,
                                int*))*v112_.v113 +
                     6))(v112_.v113, &v111, &v116);
                  v105 += 4;
                } while (v105 != v106);
                v107 = v112_.v113;
                if (v112_.v113 == v112_.v112) {
                LABEL_187:
                  v104 = 32;
                  goto LABEL_188;
                }
                if (v112_.v113 != nullptr) {
                  v104 = 40;
                LABEL_188:
                  (*(void (**)(__int64))((char*)*v107 + v104))((__int64)v107);
                }
                if ((v114[0] & 1) != 0) {
                  return 1;
                }
              }
              v103 = *(_QWORD*)(v103 + 432);
              if (v103 == 0) {
                return 0;
              }
              continue;
            }
          }
          continue;
        }
      }
    }
    v82 = *(char**)(v80 + 600);
    v83 = *(char**)(v80 + 608);
    v84 = v112_.v112;
    v114[0] = 0;
    v112_.v112[0] = (__int64 (*)())GameData_20187e8;
    v112_.v112[1] = (__int64 (*)())v114;
    v112_.v113 = v112_.v112;
    if (v82 == v83) {
      goto LABEL_143;
    }
    v85 = *(char*)(v80 + 584);
    v86 = *(char*)(v80 + 585);
    do {
      v87 = v82[1] + v86;
      LODWORD(v111) = *v82 + v85;
      v116 = v87;
      if (v112_.v113 == nullptr) {
        goto LABEL_6;
      }
      (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
          v112_.v113, &v111, &v116);
      v82 += 4;
    } while (v82 != v83);
    v84 = v112_.v113;
    if (v112_.v113 == v112_.v112) {
    LABEL_143:
      v81 = 32;
    }
    else {
      if (v112_.v113 == nullptr) {
      LABEL_145:
        if ((v114[0] & 1) != 0) {
          return 1;
        }
        goto LABEL_146;
      }
      v81 = 40;
    }
    (*(void (**)(__int64))((char*)*v84 + v81))((__int64)v84);
    goto LABEL_145;
  }
  if (v32 == 0) {
    goto LABEL_43;
  }
  do {
    if (!AIThink_11fd9e0(v15, v32) || *(_QWORD*)(v32 + 392) == v24) {
      goto LABEL_51;
    }
    v34 = *(char**)(v32 + 600);
    v35 = *(char**)(v32 + 608);
    v36 = v112_.v112;
    v114[0] = 0;
    v112_.v112[0] = (__int64 (*)())GameData_20187e8;
    v112_.v112[1] = (__int64 (*)())v114;
    v112_.v113 = v112_.v112;
    if (v34 == v35) {
      goto LABEL_48;
    }
    v37 = *(char*)(v32 + 584);
    v38 = *(char*)(v32 + 585);
    do {
      v39 = v34[1] + v38;
      LODWORD(v111) = *v34 + v37;
      v116 = v39;
      if (v112_.v113 == nullptr) {
        goto LABEL_6;
      }
      (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
          v112_.v113, &v111, &v116);
      v34 += 4;
    } while (v34 != v35);
    v36 = v112_.v113;
    if (v112_.v113 == v112_.v112) {
    LABEL_48:
      v33 = 32;
    LABEL_49:
      (*(void (**)(__int64))((char*)*v36 + v33))((__int64)v36);
      goto LABEL_50;
    }
    if (v112_.v113 != nullptr) {
      v33 = 40;
      goto LABEL_49;
    }
  LABEL_50:
    if ((v114[0] & 1) != 0) {
      return 1;
    }
  LABEL_51:
    v32 = *(_QWORD*)(v32 + 432);
  } while (v32 != 0);
  v25 = *(_QWORD*)(v15 + 440);
LABEL_43:
  v30 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v25 != 0) {
    v31 = v30 + 24LL * *(unsigned __int8*)(v25 + 16) + 556000;
  }
  else {
    v31 = v30 + 556216;
  }
  if (*(_BYTE*)(v31 + 16) != 1) {
    v40 = *(_QWORD*)(v30 + 556024);
    if (v40 != 0) {
      while (2) {
        if (AIThink_11fd9e0(v15, v40) && *(_QWORD*)(v40 + 392) != v24) {
          v42 = *(char**)(v40 + 600);
          v43 = *(char**)(v40 + 608);
          v44 = v112_.v112;
          v114[0] = 0;
          v112_.v112[0] = (__int64 (*)())GameData_20187e8;
          v112_.v112[1] = (__int64 (*)())v114;
          v112_.v113 = v112_.v112;
          if (v42 == v43) {
            goto LABEL_65;
          }
          v45 = *(char*)(v40 + 584);
          v46 = *(char*)(v40 + 585);
          do {
            v47 = v42[1] + v46;
            LODWORD(v111) = *v42 + v45;
            v116 = v47;
            if (v112_.v113 == nullptr) {
              goto LABEL_6;
            }
            (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
                v112_.v113, &v111, &v116);
            v42 += 4;
          } while (v42 != v43);
          v44 = v112_.v113;
          if (v112_.v113 == v112_.v112) {
          LABEL_65:
            v41 = 32;
            goto LABEL_66;
          }
          if (v112_.v113 != nullptr) {
            v41 = 40;
          LABEL_66:
            (*(void (**)(__int64))((char*)*v44 + v41))((__int64)v44);
          }
          if ((v114[0] & 1) != 0) {
            return 1;
          }
        }
        v40 = *(_QWORD*)(v40 + 432);
        if (v40 == 0) {
          v25 = *(_QWORD*)(v15 + 440);
          break;
        }
        continue;
      }
    }
  }
  v48 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v25 != 0) {
    v49 = v48 + 24LL * *(unsigned __int8*)(v25 + 16) + 556000;
  }
  else {
    v49 = v48 + 556216;
  }
  if (*(_BYTE*)(v49 + 16) != 2) {
    v50 = *(_QWORD*)(v48 + 556048);
    if (v50 != 0) {
      while (2) {
        if (AIThink_11fd9e0(v15, v50) && *(_QWORD*)(v50 + 392) != v24) {
          v52 = *(char**)(v50 + 600);
          v53 = *(char**)(v50 + 608);
          v54 = v112_.v112;
          v114[0] = 0;
          v112_.v112[0] = (__int64 (*)())GameData_20187e8;
          v112_.v112[1] = (__int64 (*)())v114;
          v112_.v113 = v112_.v112;
          if (v52 == v53) {
            goto LABEL_85;
          }
          v55 = *(char*)(v50 + 584);
          v56 = *(char*)(v50 + 585);
          do {
            v57 = v52[1] + v56;
            LODWORD(v111) = *v52 + v55;
            v116 = v57;
            if (v112_.v113 == nullptr) {
              goto LABEL_6;
            }
            (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
                v112_.v113, &v111, &v116);
            v52 += 4;
          } while (v52 != v53);
          v54 = v112_.v113;
          if (v112_.v113 == v112_.v112) {
          LABEL_85:
            v51 = 32;
            goto LABEL_86;
          }
          if (v112_.v113 != nullptr) {
            v51 = 40;
          LABEL_86:
            (*(void (**)(__int64))((char*)*v54 + v51))((__int64)v54);
          }
          if ((v114[0] & 1) != 0) {
            return 1;
          }
        }
        v50 = *(_QWORD*)(v50 + 432);
        if (v50 == 0) {
          v25 = *(_QWORD*)(v15 + 440);
          break;
        }
        continue;
      }
    }
  }
  if (v25 != 0) {
    v58 = *(_BYTE*)(v25 + 16);
    v59 = *(_QWORD*)(GameData_21ca310 + 56);
    v60 = v59 + 24LL * v58 + 556000;
  }
  else {
    v59 = *(_QWORD*)(GameData_21ca310 + 56);
    v60 = v59 + 556216;
  }
  v61 = *(unsigned __int8*)(v60 + 16);
  if (v61 != 0 && v61 != 3) {
    v63 = *(_QWORD*)(v59 + 556072);
    if (v63 != 0) {
      while (2) {
        if (AIThink_11fd9e0(v15, v63) && *(_QWORD*)(v63 + 392) != v24) {
          v65 = *(char**)(v63 + 600);
          v66 = *(char**)(v63 + 608);
          v67 = v112_.v112;
          v114[0] = 0;
          v112_.v112[0] = (__int64 (*)())GameData_20187e8;
          v112_.v112[1] = (__int64 (*)())v114;
          v112_.v113 = v112_.v112;
          if (v65 == v66) {
            goto LABEL_108;
          }
          v68 = *(char*)(v63 + 584);
          v69 = *(char*)(v63 + 585);
          do {
            v70 = v65[1] + v69;
            LODWORD(v111) = *v65 + v68;
            v116 = v70;
            if (v112_.v113 == nullptr) {
              goto LABEL_6;
            }
            (*((void (**)(__int64 (**)(void), __int64*, int*))*v112_.v113 + 6))(
                v112_.v113, &v111, &v116);
            v65 += 4;
          } while (v65 != v66);
          v67 = v112_.v113;
          if (v112_.v113 == v112_.v112) {
          LABEL_108:
            v64 = 32;
            goto LABEL_109;
          }
          if (v112_.v113 != nullptr) {
            v64 = 40;
          LABEL_109:
            (*(void (**)(__int64))((char*)*v67 + v64))((__int64)v67);
          }
          if ((v114[0] & 1) != 0) {
            return 1;
          }
        }
        v63 = *(_QWORD*)(v63 + 432);
        if (v63 == 0) {
          return 0;
        }
        continue;
      }
    }
  }
  return 0;
}

__int64 game_1207aa0(__int64 a1, int a2, int a3, unsigned int a4,
                     unsigned int a5, char a6)
{
  __int64 result;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  _QWORD* v15;
  __int64 (**v16)();
  __int64 v17;
  struct {
    __int64 (*v18[4])();
    __int64 (**v19)();
    char gap40_[36];
    char v20;
  } v18_;

  result = AIThink_1207c40(a1, a2, a3, a4, a5);
  if ((result & 1) != 0) {
    return result;
  }
  LODWORD(v18_.v18[0]) = 2;
  if ((a6 & 8) != 0) {
    v12 = *(_QWORD*)(a1 + 8);
    if (game_GameModeData_instance_ != 0) {
      v13 = *(unsigned __int8*)(game_GameModeData_instance_ + 13);
      v18_.v20 = 10;
      v11 = game_Unit_GetParam(v12);
      if (v13 == 1) {
        --v11;
      }
      else if (v13 == 0) {
        v11 -= 2;
      }
    }
    else {
      v18_.v20 = 10;
      v11 = game_Unit_GetParam(v12) - 2;
    }
  }
  else {
    v11 = -1;
  }
  v14 = *(_QWORD*)(a1 + 8);
  v15 = *(_QWORD**)GameData_21306a0[0];
  if (*(_BYTE*)(*GameData_212ce90[0] +
                *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1) {
    AIDeploy_1274c80(v15, v14, v11, (unsigned int*)v18_.v18);
    if ((a6 & 0x20) != 0) {
    LABEL_12:
      v16 = GameData_2019178;
      goto LABEL_15;
    }
  }
  else {
    AIDeploy_1274f90(v15, v14, v11, (unsigned int*)v18_.v18);
    if ((a6 & 0x20) != 0) {
      goto LABEL_12;
    }
  }
  v16 = GameData_2019208;
LABEL_15:
  v18_.v18[0] = (__int64 (*)())v16;
  v18_.v18[1] = (__int64 (*)())a1;
  v18_.v19 = v18_.v18;
  game_AIThink_ToDestroyImpl((_QWORD*)a1, a4, a5, v18_.v18);
  result = (__int64)v18_.v19;
  if (v18_.v19 == v18_.v18) {
    v17 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_20;
    }
    v17 = 40;
  }
  result =
      (*(__int64 (**)(__int64))((char*)*v18_.v19 + v17))((__int64)v18_.v19);
LABEL_20:
  if ((a6 & 2) != 0 && *(_BYTE*)(GameData_21cd108 + 20) == 1) {
    return game_AIThink_ToBreak((__int64 (**)(void))a1, a4, a5);
  }
  return result;
}

__attribute__((swiftcall)) void game_127c600(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  const char** v7;
  int v8;
  int v9;
  const char* v10;
  const char* v11;
  int v12;
  int v13;
  int v14;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  LODWORD(v4) = a2;
  if (*(_QWORD*)a1 != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 24LL) + 16LL);
    if (a2 == 0) {
      return;
    }
    if ((a2 & 0x80000000) == 0) {
      goto LABEL_4;
    }
  LABEL_19:
    GameRoutine_6e5a20();
  }
  if (a2 == 0) {
    return;
  }
  v5 = 0;
  if ((a2 & 0x80000000) != 0) {
    goto LABEL_19;
  }
LABEL_4:
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      4LL * a2, 16, 0);
  *a3 = v6;
  a3[1] = v6;
  a3[2] = v6 + 4LL * (unsigned int)v4;
  if ((unsigned int)v4 >= 0x50) {
    v4 = 80;
  }
  else {
    v4 = (unsigned int)v4;
  }
  if (v5 != 0) {
    v7 = (const char**)(v5 + 40);
    v8 = 0;
    do {
      v11 = *v7++;
      v10 = v11;
      v14 = v8;
      if (v11 != nullptr) {
        if (strcmp(v10, GameData_1a94a43) == 0 || v10[1] != 0 ||
            (unsigned int)((v12 = *(unsigned __int8*)v10) - 58) < 0xFFFFFFF6) {
          v9 = 0;
        }
        else {
          v9 = v12 - 48;
        }
        v14 = v9;
      }
      GameRoutine_7d6200(a3, &v14);
      v8 = v14;
      --v4;
    } while (v4 != 0);
  }
  else {
    v13 = 0;
    GameRoutine_6e5a40(a3, v4, &v13);
  }
}

void game_13602c0(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  struct {
    __int64 v23;
    _QWORD* v24;
    unsigned __int64 v25;
  } v23_;

  v23_.v24 = nullptr;
  v23_.v25 = 0;
  v23_.v23 = 0;
  v1 = *(_QWORD*)(*GameData_212c780 + 8);
  v2 = *(__int64**)(v1 + 48);
  v3 = *(__int64**)(v1 + 56);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 == v3) {
    v18 = 0;
  }
  else {
    v21 = a1;
    v5 = nullptr;
    do {
      v6 = *v2;
      if ((unsigned __int8)Impl_13261c0(*v2) == 9) {
        v7 = *(_QWORD*)(v6 + 120);
        if ((unsigned __int64)v5 < v23_.v25) {
          *v5++ = v7;
        }
        else {
          v8 = v23_.v23;
          v9 = (unsigned __int64)v5 - v23_.v23;
          v10 = ((__int64)v5 - v23_.v23) >> 3;
          v11 = v10 + 1;
          if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
            GameRoutine_892740();
          }
          v12 = v23_.v25 - v23_.v23;
          if ((__int64)(v23_.v25 - v23_.v23) >> 2 > v11) {
            v11 = v12 >> 2;
          }
          if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
            v13 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v13 = v11;
          }
          if (v13 != 0) {
            if (v13 >> 61 != 0) {
              GameRoutine_60a210();
            }
            v14 = fw_memory_HeapManager_Allocate(*v4, 8 * v13, 16, 0);
          }
          else {
            v14 = 0;
          }
          v15 = v14 + 8 * v13;
          v16 = v14 + v9 - 8 * v10;
          *(_QWORD*)(v14 + v9) = v7;
          v5 = (_QWORD*)(v14 + v9 + 8);
          memcpy(v16, v8, v9);
          v23_.v23 = v16;
          v23_.v25 = v15;
          if (v8 != 0) {
            v17 = 128;
            if (*(_QWORD*)(*v4 + 200) == 0) {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free(*v4 + v17, v8);
          }
        }
        v23_.v24 = v5;
      }
      ++v2;
    } while (v2 != v3);
    v18 = v23_.v23;
    a1 = v21;
  }
  LODWORD(v22[0]) = 0;
  game_ffa3e0((_QWORD*)(a1 + 72), &v23_.v23, v22);
  v22[1] = &GameData_1aa5cc9;
  v22[0] = game_HashString((__int64)&GameData_1aa5cc9);
  v19 = game_gmap_13339e0();
  game_VariableManager_SetFlag((__int64)v22, v19);
  if (v18 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v20, v18);
  }
}

__int64 game_18c2620(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int128 v7;
  struct {
    __int64* v9;
    __int64 v10;
    int v11;
  } v9_;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  v9_.v9 = (__int64*)"L_Gauge";
  v9_.v10 = 7;
  GameRoutine_1573280((void*)(&v12_.v12), (__int64*)(a1 + 80), &v9_.v9);
  if (v12_.v13 != 0) {
    v2 = std___1___shared_weak_count_lock(v12_.v13);
    v3 = v12_.v12;
    if (v12_.v13 != 0) {
      std___1___shared_weak_count___release_weak(v12_.v13);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        goto LABEL_12;
      }
    }
    else {
      GameRoutine_18c9f10(v3, *(_BYTE*)(a1 + 280), *(_DWORD*)(a1 + 328),
                          *(_DWORD*)(a1 + 332), *(_BYTE*)(a1 + 345));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
LABEL_12:
  LayoutAccessor_1560070((void*)(&v12_.v12), (__int64*)(a1 + 80), "L_Gauge");
  if (v12_.v13 != 0) {
    v5 = std___1___shared_weak_count_lock(v12_.v13);
    v6 = v12_.v12;
    if (v12_.v13 != 0) {
      std___1___shared_weak_count___release_weak(v12_.v13);
    }
    if (v5 != 0 && v6 != 0) {
      LayoutAccessor_1562cf0(v6, "Out_Unbreak");
    }
    else if (v5 == 0) {
      goto LABEL_21;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
LABEL_21:
  *(_DWORD*)(a1 + 276) = 0;
  GameHr_1562680(a1 + 80, "In", 0x1.0000000000000p+0f);
  if (*(_BYTE*)(a1 + 344) == 1) {
    v7 = *(_OWORD*)(a1 + 192);
    v9_.v10 = *(_QWORD*)(a1 + 192);
    v9_.v11 = DWORD2(v7);
    v9_.v9 = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830((__int64)&v12_.v12, 0x0.0p+0f);
    snd_playAt_ff5f0((__int64)"SE_SYS_BrazeGauge_Resist",
                     (__int64)"SE_SYS_BrazeGauge_Resist", (__int64)&v9_.v9,
                     0x0.0p+0f, 0x1.0000000000000p+0f, (__int64)&v12_.v12, 0,
                     0x10001u, 0);
    snd_Fade_Destroy_Fade(&v12_.v12);
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

#pragma GCC visibility pop
