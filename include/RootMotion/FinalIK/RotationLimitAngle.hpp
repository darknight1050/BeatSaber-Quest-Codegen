// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.RotationLimit
#include "RootMotion/FinalIK/RotationLimit.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.RotationLimitAngle
  class RotationLimitAngle : public RootMotion::FinalIK::RotationLimit {
    public:
    // public System.Single limit
    // Offset: 0x38
    float limit;
    // public System.Single twistLimit
    // Offset: 0x3C
    float twistLimit;
    // private System.Void OpenUserManual()
    // Offset: 0x11943E0
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x119442C
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x1194478
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x11944C4
    void ASThread();
    // private UnityEngine.Quaternion LimitSwing(UnityEngine.Quaternion rotation)
    // Offset: 0x11945C8
    UnityEngine::Quaternion LimitSwing(UnityEngine::Quaternion rotation);
    // protected override UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x1194510
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: UnityEngine.Quaternion RotationLimit::LimitRotation(UnityEngine.Quaternion rotation)
    UnityEngine::Quaternion LimitRotation(UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x1194810
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: System.Void RotationLimit::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RotationLimitAngle* New_ctor();
  }; // RootMotion.FinalIK.RotationLimitAngle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RotationLimitAngle*, "RootMotion.FinalIK", "RotationLimitAngle");
#pragma pack(pop)
