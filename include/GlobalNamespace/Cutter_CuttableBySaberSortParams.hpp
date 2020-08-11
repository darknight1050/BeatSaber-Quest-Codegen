// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Cutter
#include "GlobalNamespace/Cutter.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CuttableBySaber
  class CuttableBySaber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Cutter/CuttableBySaberSortParams
  class Cutter::CuttableBySaberSortParams : public ::CsObject {
    public:
    // public CuttableBySaber cuttableBySaber
    // Offset: 0x10
    GlobalNamespace::CuttableBySaber* cuttableBySaber;
    // public System.Single distance
    // Offset: 0x18
    float distance;
    // public UnityEngine.Vector3 pos
    // Offset: 0x1C
    UnityEngine::Vector3 pos;
    // public System.Void .ctor()
    // Offset: 0xBCFE38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Cutter::CuttableBySaberSortParams* New_ctor();
  }; // Cutter/CuttableBySaberSortParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Cutter::CuttableBySaberSortParams*, "", "Cutter/CuttableBySaberSortParams");
#pragma pack(pop)
