#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* computeMassAndDiagInertia(__int64, __int64, _QWORD*, float*, float*,
                                  char, __int64, const char*);
__int64 PxGetFoundation();
__int64 computeMassAndInertia(float*, char, __int64, float*, float*,
                              unsigned int, char);
__int64 physx_Ext_InertiaTensorComputer_Destroy_InertiaTensorComputer(_QWORD);
__int64
physx_Ext_InertiaTensorComputer_InertiaTensorComputer_556f80(__int64 result,
                                                             char);
__int64 updateMassAndInertia(__int64 a1, float* a2, unsigned int a3, int* a4,
                             char a5);

__int64 updateMassAndInertia(__int64 a1, float* a2, unsigned int a3, int* a4,
                             char a5)
{

#pragma clang fp contract(off)
  __int64 v10;
  int v15;
  int v16;
  int v17;
  float v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  void (*v24)(__int64, __int64, float);
  struct {
    int v26;
    __int64 v27;
    int v28;
    int v29;
    int v30;
    int v31;
    char gap28_[20];
    float v32;
    int v33;
    int v34;
    int v35;
    __int128 v36;
    _DWORD v37[3];
    float v38;
    __int64 v39;
  } f_;

  f_.v39 = v10;
  f_.v37[2] = 1065353216;
  f_.v38 = 0x1.0000000000000p+0f;
  *(_QWORD*)f_.v37 = 0x3F8000003F800000LL;
  *(_QWORD*)&f_.v36 = 0;
  *((_QWORD*)&f_.v36 + 1) = 0x3F80000000000000LL;
  if (a4 != nullptr) {
    v15 = *a4;
    v16 = a4[1];
    v17 = a4[2];
    f_.v33 = *a4;
    f_.v34 = v16;
    f_.v35 = v17;
    if (a2 == nullptr) {
      goto LABEL_9;
    }
  }
  else {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    f_.v33 = 0;
    f_.v34 = 0;
    f_.v35 = 0;
    if (a2 == nullptr) {
      goto LABEL_9;
    }
  }
  if (a3 != 0) {
    physx_Ext_InertiaTensorComputer_InertiaTensorComputer_556f80(
        (__int64)&f_.v26, 1);
    if ((computeMassAndInertia((float*)&f_.v26, 1, a1, a2, nullptr, a3,
                               a5 & 1) &
         1) != 0) {
      if (f_.v32 != 0x0.0p+0f) {
        computeMassAndDiagInertia((__int64)&f_.v26, (__int64)f_.v37, &f_.v36,
                                  &f_.v38, (float*)&f_.v33, a4 != nullptr, a1,
                                  "PxRigidBodyExt::updateMassAndInertia");
        v19 = f_.v38;
        v15 = f_.v33;
        v16 = f_.v34;
        v17 = f_.v35;
        v20 = 1;
      LABEL_12:
        physx_Ext_InertiaTensorComputer_Destroy_InertiaTensorComputer(&f_.v26);
        goto LABEL_13;
      }
    }
    else {
      v22 = PxGetFoundation();
      (*(void (**)(__int64, __int64, __int64, __int64, __int64, __int64))(
          *(_QWORD*)v22 + 88LL))(
          v22, 4,
          (__int64)"/Inside/Lib/PhysX/O/physx/source/physxextensions/src/"
                   "ExtRigidBodyExt.cpp",
          280,
          (__int64)"%s: Mass and inertia computation failed, setting mass to 1 "
                   "and inertia to (1,1,1)",
          (__int64)"PxRigidBodyExt::updateMassAndInertia");
    }
    v19 = 0x1.0000000000000p+0f;
    v20 = 0;
    goto LABEL_12;
  }
LABEL_9:
  v21 = PxGetFoundation();
  (*(void (**)(__int64, __int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)v21 + 88LL))(v21, 4,
                             (__int64)"/Inside/Lib/PhysX/O/physx/source/"
                                      "physxextensions/src/ExtRigidBodyExt.cpp",
                             288,
                             (__int64)"%s: No density specified, setting mass "
                                      "to 1 and inertia to (1,1,1)",
                             (__int64)"PxRigidBodyExt::updateMassAndInertia");
  v19 = 0x1.0000000000000p+0f;
  v20 = 0;
LABEL_13:
  (*(void (**)(__int64, float))(*(_QWORD*)a1 + 256LL))(a1, v19);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 280LL))(a1, (__int64)f_.v37);
  f_.v30 = v16;
  f_.v31 = v17;
  f_.v27 = *(_QWORD*)((char*)&f_.v36 + 4);
  v23 = *(_QWORD*)a1;
  f_.v26 = f_.v36;
  v24 = *(void (**)(__int64, __int64, float))(v23 + 240);
  f_.v28 = DWORDn(f_.v36, sizeof(f_.v36) / 4 - 1);
  f_.v29 = v15;
  v24(a1, (__int64)&f_.v26, *((float*)&f_.v36 + 3));
  return v20;
}

#pragma GCC visibility pop
