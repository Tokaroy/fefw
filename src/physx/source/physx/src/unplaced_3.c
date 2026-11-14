#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2f3390(unsigned int, __int64);
__int64 PxGetFoundation();
__int64 physx_source_physx_src_2f33e0(__int64 a1, __int64 a2, __int64 a3);
__int64 physx_source_physx_src_2f3470(__int64 a1, __int64 a2, __int64 a3);
__int64 physx_source_physx_src_2f3500(__int64 a1, __int64 a2, __int64 a3);
__int64 physx_source_physx_src_2f3590(__int64 a1, __int64 a2, __int64 a3,
                                      int a4);
__int64 physx_source_physx_src_2f3630(__int64 a1, __int64 a2, __int64 a3);
__int64 physx_source_physx_src_2f36c0(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5);

__int64 physx_source_physx_src_2f33e0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v3 + 1002) == 1) {
    v4 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v4 + 88LL))(
        v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpDirectGPUAPI.cpp",
        80,
        "PxDirectGPUAPI::setRigidDynamicData(): not allowed while simulation "
        "is running. Call will be ignored.");
  }
  else if ((*(_BYTE*)(v3 + 6009) & 1) != 0) {
    if (a2 != 0 && a3 != 0) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 1488) + 344LL))(
          *(_QWORD*)(v3 + 1488));
    }
    else {
      return GameRoutine_2f3390(
          0x56u, (__int64)"PxDirectGPUAPI::setRigidDynamicData(): data and/or "
                          "gpuIndices has to be valid pointer.");
    }
  }
  else {
    return GameRoutine_2f3390(
        0x53u, (__int64)"PxDirectGPUAPI::setRigidDynamicData(): it is illegal "
                        "to call this function if the scene is not con"
                        "figured for direct-GPU access or the direct-GPU API "
                        "has not been initialized yet.");
  }
}

__int64 physx_source_physx_src_2f3470(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v3 + 1002) == 1) {
    v4 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v4 + 88LL))(
        v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpDirectGPUAPI.cpp",
        94,
        "PxDirectGPUAPI::getArticulationData(): not allowed while simulation "
        "is running. Call will be ignored.");
  }
  else if ((*(_BYTE*)(v3 + 6009) & 1) != 0) {
    if (a2 != 0 && a3 != 0) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 1488) + 352LL))(
          *(_QWORD*)(v3 + 1488));
    }
    else {
      return GameRoutine_2f3390(
          0x64u, (__int64)"PxDirectGPUAPI::getArticulationData(): data and/or "
                          "gpuIndices has to be valid pointer.");
    }
  }
  else {
    return GameRoutine_2f3390(
        0x61u, (__int64)"PxDirectGPUAPI::getArticulationData(): it is illegal "
                        "to call this function if the scene is not con"
                        "figured for direct-GPU access or the direct-GPU API "
                        "has not been initialized yet.");
  }
}

__int64 physx_source_physx_src_2f3500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v3 + 1002) == 1) {
    v4 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v4 + 88LL))(
        v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpDirectGPUAPI.cpp",
        108,
        "PxDirectGPUAPI::setArticulationData(): not allowed while simulation "
        "is running. Call will be ignored.");
  }
  else if ((*(_BYTE*)(v3 + 6009) & 1) != 0) {
    if (a2 != 0 && a3 != 0) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 1488) + 360LL))(
          *(_QWORD*)(v3 + 1488));
    }
    else {
      return GameRoutine_2f3390(
          0x72u, (__int64)"PxDirectGPUAPI::setArticulationData(): data and/or "
                          "gpuIndices has to be valid pointer.");
    }
  }
  else {
    return GameRoutine_2f3390(
        0x6Fu, (__int64)"PxDirectGPUAPI::setArticulationData(): it is illegal "
                        "to call this function if the scene is not con"
                        "figured for direct-GPU access or the direct-GPU API "
                        "has not been initialized yet.");
  }
}

__int64 physx_source_physx_src_2f3590(__int64 a1, __int64 a2, __int64 a3,
                                      int a4)
{
  __int64 v4;
  __int64 v5;

  v4 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v4 + 1002) == 1) {
    v5 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v5 + 88LL))(
        v5, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpDirectGPUAPI.cpp",
        122,
        "PxDirectGPUAPI::computeArticulationData(): not allowed while "
        "simulation is running. Call will be ignored.");
  }
  else if ((*(_BYTE*)(v4 + 6009) & 1) != 0) {
    if (a4 == 0 || a2 != 0 && a3 != 0) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 1488) + 368LL))(
          *(_QWORD*)(v4 + 1488));
    }
    else {
      return GameRoutine_2f3390(
          0x81u, (__int64)"PxDirectGPUAPI::computeArticulationData(): data "
                          "and/or gpuIndices has to be valid pointer.");
    }
  }
  else {
    return GameRoutine_2f3390(
        0x7Du, (__int64)"PxDirectGPUAPI::computeArticulationData(): it is "
                        "illegal to call this function if the scene is not"
                        " configured for direct-GPU access or the direct-GPU "
                        "API has not been initialized yet.");
  }
}

__int64 physx_source_physx_src_2f3630(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v3 + 1002) == 1) {
    v4 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v4 + 88LL))(
        v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpDirectGPUAPI.cpp",
        137,
        "PxDirectGPUAPI::copyContactData(): not allowed while simulation is "
        "running. Call will be ignored.");
  }
  else if ((*(_BYTE*)(v3 + 6009) & 1) != 0) {
    if (a2 != 0 && a3 != 0) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 1488) + 384LL))(
          *(_QWORD*)(v3 + 1488));
    }
    else {
      return GameRoutine_2f3390(
          0x8Fu, (__int64)"PxDirectGPUAPI::copyContactData(): data and/or "
                          "numContactPairs has to be valid pointer.");
    }
  }
  else {
    return GameRoutine_2f3390(
        0x8Cu, (__int64)"PxDirectGPUAPI::copyContactData(): it is illegal to "
                        "call this function if the scene is not configu"
                        "red for direct-GPU access or the direct-GPU API has "
                        "not been initialized yet.");
  }
}

__int64 physx_source_physx_src_2f36c0(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4, __int64 a5)
{
  __int64 v5;
  __int64 v6;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v5 + 1002) == 1) {
    v6 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v6 + 88LL))(
        v6, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpDirectGPUAPI.cpp",
        151,
        "PxDirectGPUAPI::evaluateSDFDistances(): not allowed while simulation "
        "is running. Call will be ignored.");
  }
  else if ((*(_BYTE*)(v5 + 6009) & 1) != 0) {
    if (a2 != 0 && a3 != 0 && a4 != 0 && a5 != 0) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 1488) + 376LL))(
          *(_QWORD*)(v5 + 1488));
    }
    else {
      return GameRoutine_2f3390(
          0x9Du, (__int64)"PxDirectGPUAPI::evaluateSDFDistances(): pointer "
                          "arguments have to be valid pointers.");
    }
  }
  else {
    return GameRoutine_2f3390(
        0x9Au, (__int64)"PxDirectGPUAPI::evaluateSDFDistances(): it is illegal "
                        "to call this function if the scene is not co"
                        "nfigured for direct-GPU access or the direct-GPU API "
                        "has not been initialized yet.");
  }
}

#pragma GCC visibility pop
