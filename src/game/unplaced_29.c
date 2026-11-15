#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_oe_GetCurrentFocusState(void);
__int64 nn_oe_GetCurrentGraphicsScale(void);
__int64 nn_oe_PopNotificationMessage(void);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 nn_os_SignalLightEvent(__int64);
__int64 nn_os_SleepThread(_QWORD);
extern _UNKNOWN GameData_22660d0;
extern _UNKNOWN GameData_22660dc;
extern _UNKNOWN GameData_22660e8;
extern __int64 GameData_212d6e8;
extern __int64 game_g_game_setting_ptr;
extern int GameData_2266118;
void nn_oe_LeaveExitRequestHandlingSection();
void __attribute__((noreturn)) game_17e3de0();

void __attribute__((noreturn)) game_17e3de0()
{
  __int64* v0;
  int v1;
  int CurrentGraphicsScaleEv;
  __int64 v3;
  __int64** v4;
  __int64 v5;
  unsigned int v6;
  int v7;

  v0 = (__int64*)game_g_game_setting_ptr;
  while (1) {
    while (1) {
      v1 = nn_oe_PopNotificationMessage();
      if (v1 <= 29) {
        break;
      }
      switch (v1) {
      case 30:
        nn_os_SignalLightEvent((__int64)&GameData_22660d0);
        break;
      case 31:
        nn_os_SignalLightEvent((__int64)&GameData_22660dc);
        break;
      case 300:
        CurrentGraphicsScaleEv = nn_oe_GetCurrentGraphicsScale();
        if (GameData_2266118 != CurrentGraphicsScaleEv) {
          GameData_2266118 = CurrentGraphicsScaleEv;
          nn_os_SignalLightEvent((__int64)&GameData_22660e8);
        }
        break;
      default:
        break;
      }
    }
    switch (v1) {
    case 15:
      nn_oe_GetCurrentFocusState();
      break;
    case 16:
      v3 = *v0;
      if (*v0 != 0) {
        nn_os_AcquireWriteLock(v3 + 984);
        *(_DWORD*)(v3 + 1032) = 1;
        nn_os_ReleaseWriteLock(v3 + 984);
      }
      break;
    case 4:
      v4 = (__int64**)GameData_212d6e8;
      while (*v4 != nullptr) {
        v5 = **v4;
        if (v5 == 0) {
          break;
        }
        v6 = atomic_load((unsigned int*)(v5 + 804));
        if (v6 == 0) {
          v7 = atomic_load((unsigned __int8*)(*(_QWORD*)(v5 + 792) + 81LL));
          if (v7 != 1) {
            break;
          }
        }
        nn_os_SleepThread(16000000);
      }
      nn_oe_LeaveExitRequestHandlingSection();
      while (1) {
        nn_os_SleepThread(86400000000000LL);
      }
    default:
      break;
    }
  }
}

#pragma GCC visibility pop
