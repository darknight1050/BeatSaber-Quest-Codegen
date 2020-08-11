// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorderSaveData/PositionAndRotation
  class VRControllersRecorderSaveData::PositionAndRotation : public ::CsObject {
    public:
    // public System.Single posX
    // Offset: 0x10
    float posX;
    // public System.Single posY
    // Offset: 0x14
    float posY;
    // public System.Single posZ
    // Offset: 0x18
    float posZ;
    // public System.Single rotX
    // Offset: 0x1C
    float rotX;
    // public System.Single rotY
    // Offset: 0x20
    float rotY;
    // public System.Single rotZ
    // Offset: 0x24
    float rotZ;
    // public System.Single rotW
    // Offset: 0x28
    float rotW;
    // public System.Void .ctor()
    // Offset: 0xC3E1C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRControllersRecorderSaveData::PositionAndRotation* New_ctor();
  }; // VRControllersRecorderSaveData/PositionAndRotation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*, "", "VRControllersRecorderSaveData/PositionAndRotation");
#pragma pack(pop)
