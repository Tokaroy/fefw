#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvidia_5f0f00(_BYTE* a1, int a2);

__int64 nvidia_5f0f00(_BYTE* a1, int a2)
{
  __int64 v2;
  int v3;

  if (a1 != nullptr) {
    if ((unsigned int)a2 < 0x80 || (unsigned int)(a2 - 160) < 0x60) {
      goto LABEL_47;
    }
    if (a2 > 8210) {
      v2 = (unsigned int)(a2 - 8211);
      v3 = a2;
      LOBYTE(a2) = 0x80;
      switch (v2) {
      case 0LL:
        LOBYTE(a2) = -106;
        goto LABEL_47;
      case 1LL:
        LOBYTE(a2) = -105;
        goto LABEL_47;
      case 2LL:
      case 3LL:
      case 4LL:
      case 8LL:
      case 12LL:
      case 16LL:
      case 17LL:
      case 18LL:
      case 20LL:
      case 21LL:
      case 22LL:
      case 23LL:
      case 24LL:
      case 25LL:
      case 26LL:
      case 27LL:
      case 28LL:
      case 30LL:
      case 31LL:
      case 32LL:
      case 33LL:
      case 34LL:
      case 35LL:
      case 36LL:
      case 37LL:
      case 40LL:
      case 41LL:
      case 42LL:
      case 43LL:
      case 44LL:
      case 45LL:
      case 46LL:
      case 47LL:
      case 48LL:
      case 49LL:
      case 50LL:
      case 51LL:
      case 52LL:
      case 53LL:
      case 54LL:
      case 55LL:
      case 56LL:
      case 57LL:
      case 58LL:
      case 59LL:
      case 60LL:
      case 61LL:
      case 62LL:
      case 63LL:
      case 64LL:
      case 65LL:
      case 66LL:
      case 67LL:
      case 68LL:
      case 69LL:
      case 70LL:
      case 71LL:
      case 72LL:
      case 73LL:
      case 74LL:
      case 75LL:
      case 76LL:
      case 77LL:
      case 78LL:
      case 79LL:
      case 80LL:
      case 81LL:
      case 82LL:
      case 83LL:
      case 84LL:
      case 85LL:
      case 86LL:
      case 87LL:
      case 88LL:
      case 89LL:
      case 90LL:
      case 91LL:
      case 92LL:
      case 93LL:
      case 94LL:
      case 95LL:
      case 96LL:
      case 97LL:
      case 98LL:
      case 99LL:
      case 100LL:
      case 101LL:
      case 102LL:
      case 103LL:
      case 104LL:
      case 105LL:
      case 106LL:
      case 107LL:
      case 108LL:
      case 109LL:
      case 110LL:
      case 111LL:
      case 112LL:
      case 113LL:
      case 114LL:
      case 115LL:
      case 116LL:
      case 117LL:
      case 118LL:
      case 119LL:
      case 120LL:
      case 121LL:
      case 122LL:
      case 123LL:
      case 124LL:
      case 125LL:
      case 126LL:
      case 127LL:
      case 128LL:
      case 129LL:
      case 130LL:
      case 131LL:
      case 132LL:
      case 133LL:
      case 134LL:
      case 135LL:
      case 136LL:
      case 137LL:
      case 138LL:
      case 139LL:
      case 140LL:
      case 141LL:
      case 142LL:
      case 143LL:
      case 144LL:
      case 145LL:
      case 146LL:
      case 147LL:
      case 148LL:
      case 149LL:
      case 150LL:
      case 151LL:
      case 152LL:
        goto LABEL_26;
      case 5LL:
        LOBYTE(a2) = -111;
        goto LABEL_47;
      case 6LL:
        LOBYTE(a2) = -110;
        goto LABEL_47;
      case 7LL:
        LOBYTE(a2) = -126;
        goto LABEL_47;
      case 9LL:
        LOBYTE(a2) = -109;
        goto LABEL_47;
      case 10LL:
        LOBYTE(a2) = -108;
        goto LABEL_47;
      case 11LL:
        LOBYTE(a2) = -124;
        goto LABEL_47;
      case 13LL:
        LOBYTE(a2) = -122;
        goto LABEL_47;
      case 14LL:
        LOBYTE(a2) = -121;
        goto LABEL_47;
      case 15LL:
        LOBYTE(a2) = -107;
        goto LABEL_47;
      case 19LL:
        LOBYTE(a2) = -123;
        goto LABEL_47;
      case 29LL:
        LOBYTE(a2) = -119;
        goto LABEL_47;
      case 38LL:
        LOBYTE(a2) = -117;
        goto LABEL_47;
      case 39LL:
        LOBYTE(a2) = -101;
        goto LABEL_47;
      case 153LL:
        goto LABEL_47;
      default:
        if (v3 == 8482) {
          LOBYTE(a2) = -103;
        }
        else {
          if (v3 != 11302) {
            goto LABEL_26;
          }
          LOBYTE(a2) = -120;
        }
        break;
      }
      goto LABEL_47;
    }
    if (a2 <= 375) {
      if (a2 > 351) {
        if (a2 == 352) {
          LOBYTE(a2) = -118;
          goto LABEL_47;
        }
        if (a2 == 353) {
          LOBYTE(a2) = -102;
          goto LABEL_47;
        }
      }
      else {
        if (a2 == 338) {
          LOBYTE(a2) = -116;
          goto LABEL_47;
        }
        if (a2 == 339) {
          LOBYTE(a2) = -100;
          goto LABEL_47;
        }
      }
    }
    else if (a2 <= 381) {
      if (a2 == 376) {
        LOBYTE(a2) = -97;
        goto LABEL_47;
      }
      if (a2 == 381) {
        LOBYTE(a2) = -114;
        goto LABEL_47;
      }
    }
    else {
      switch (a2) {
      case 382:
        LOBYTE(a2) = -98;
        goto LABEL_47;
      case 402:
        LOBYTE(a2) = -125;
        goto LABEL_47;
      case 732:
        LOBYTE(a2) = -104;
      LABEL_47:
        *a1 = a2;
        return 1;
      default:
        break;
      }
    }
  LABEL_26:
    LOBYTE(a2) = -112;
    goto LABEL_47;
  }
  return 1;
}

#pragma GCC visibility pop
