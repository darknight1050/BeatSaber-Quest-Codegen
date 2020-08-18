// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllerTransformOffset
#include "GlobalNamespace/VRControllerTransformOffset.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersValueSOOffsets
  class VRControllersValueSOOffsets : public GlobalNamespace::VRControllerTransformOffset {
    public:
    // private Vector3SO _positionOffset
    // Offset: 0x18
    GlobalNamespace::Vector3SO* positionOffset;
    // private Vector3SO _rotationOffset
    // Offset: 0x20
    GlobalNamespace::Vector3SO* rotationOffset;
    // private System.Boolean _mirror
    // Offset: 0x28
    bool mirror;
    // public override UnityEngine.Vector3 get_positionOffset()
    // Offset: 0x196D258
    // Implemented from: VRControllerTransformOffset
    // Base method: UnityEngine.Vector3 VRControllerTransformOffset::get_positionOffset()
    UnityEngine::Vector3 get_positionOffset();
    // public override UnityEngine.Vector3 get_rotationOffset()
    // Offset: 0x196D2BC
    // Implemented from: VRControllerTransformOffset
    // Base method: UnityEngine.Vector3 VRControllerTransformOffset::get_rotationOffset()
    UnityEngine::Vector3 get_rotationOffset();
    // public System.Void .ctor()
    // Offset: 0x196D320
    // Implemented from: VRControllerTransformOffset
    // Base method: System.Void VRControllerTransformOffset::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRControllersValueSOOffsets* New_ctor();
  }; // VRControllersValueSOOffsets
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersValueSOOffsets*, "", "VRControllersValueSOOffsets");
#pragma pack(pop)
