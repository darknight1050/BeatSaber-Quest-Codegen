// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: InterpolationMode
  struct InterpolationMode;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/Footstep
  class IKSolverVR::Footstep : public ::Il2CppObject {
    public:
    // public System.Single stepSpeed
    // Size: 0x4
    // Offset: 0x10
    float stepSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 characterSpaceOffset
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 characterSpaceOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion stepToRootRot
    // Size: 0x10
    // Offset: 0x3C
    UnityEngine::Quaternion stepToRootRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public System.Boolean isSupportLeg
    // Size: 0x1
    // Offset: 0x4C
    bool isSupportLeg;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isSupportLeg and: stepProgress
    char __padding5[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE0AB10
    // private System.Single <stepProgress>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    float stepProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 stepFrom
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 stepFrom;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 stepTo
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 stepTo;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion stepFromRot
    // Size: 0x10
    // Offset: 0x6C
    UnityEngine::Quaternion stepFromRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Quaternion stepToRot
    // Size: 0x10
    // Offset: 0x7C
    UnityEngine::Quaternion stepToRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion footRelativeToRoot
    // Size: 0x10
    // Offset: 0x8C
    UnityEngine::Quaternion footRelativeToRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Single supportLegW
    // Size: 0x4
    // Offset: 0x9C
    float supportLegW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single supportLegWV
    // Size: 0x4
    // Offset: 0xA0
    float supportLegWV;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Footstep
    Footstep(float stepSpeed_ = {}, UnityEngine::Vector3 characterSpaceOffset_ = {}, UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion rotation_ = {}, UnityEngine::Quaternion stepToRootRot_ = {}, bool isSupportLeg_ = {}, float stepProgress_ = {}, UnityEngine::Vector3 stepFrom_ = {}, UnityEngine::Vector3 stepTo_ = {}, UnityEngine::Quaternion stepFromRot_ = {}, UnityEngine::Quaternion stepToRot_ = {}, UnityEngine::Quaternion footRelativeToRoot_ = {}, float supportLegW_ = {}, float supportLegWV_ = {}) noexcept : stepSpeed{stepSpeed_}, characterSpaceOffset{characterSpaceOffset_}, position{position_}, rotation{rotation_}, stepToRootRot{stepToRootRot_}, isSupportLeg{isSupportLeg_}, stepProgress{stepProgress_}, stepFrom{stepFrom_}, stepTo{stepTo_}, stepFromRot{stepFromRot_}, stepToRot{stepToRot_}, footRelativeToRoot{footRelativeToRoot_}, supportLegW{supportLegW_}, supportLegWV{supportLegWV_} {}
    // public System.Boolean get_isStepping()
    // Offset: 0x1DE14E4
    bool get_isStepping();
    // public System.Single get_stepProgress()
    // Offset: 0x1DE14F8
    float get_stepProgress();
    // private System.Void set_stepProgress(System.Single value)
    // Offset: 0x1DE1500
    void set_stepProgress(float value);
    // public System.Void .ctor(UnityEngine.Quaternion rootRotation, UnityEngine.Vector3 footPosition, UnityEngine.Quaternion footRotation, UnityEngine.Vector3 characterSpaceOffset)
    // Offset: 0x1DE1508
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR::Footstep* New_ctor(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation, UnityEngine::Vector3 characterSpaceOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::Footstep::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR::Footstep*, creationType>(rootRotation, footPosition, footRotation, characterSpaceOffset)));
    }
    // public System.Void Reset(UnityEngine.Quaternion rootRotation, UnityEngine.Vector3 footPosition, UnityEngine.Quaternion footRotation)
    // Offset: 0x1DE1698
    void Reset(UnityEngine::Quaternion rootRotation, UnityEngine::Vector3 footPosition, UnityEngine::Quaternion footRotation);
    // public System.Void StepTo(UnityEngine.Vector3 p, UnityEngine.Quaternion rootRotation, System.Single stepThreshold)
    // Offset: 0x1DE16E0
    void StepTo(UnityEngine::Vector3 p, UnityEngine::Quaternion rootRotation, float stepThreshold);
    // public System.Void UpdateStepping(UnityEngine.Vector3 p, UnityEngine.Quaternion rootRotation, System.Single speed)
    // Offset: 0x1DE18A0
    void UpdateStepping(UnityEngine::Vector3 p, UnityEngine::Quaternion rootRotation, float speed);
    // public System.Void UpdateStanding(UnityEngine.Quaternion rootRotation, System.Single minAngle, System.Single speed)
    // Offset: 0x1DE1A78
    void UpdateStanding(UnityEngine::Quaternion rootRotation, float minAngle, float speed);
    // public System.Void Update(RootMotion.InterpolationMode interpolation, UnityEngine.Events.UnityEvent onStep)
    // Offset: 0x1DE1C64
    void Update(RootMotion::InterpolationMode interpolation, UnityEngine::Events::UnityEvent* onStep);
  }; // RootMotion.FinalIK.IKSolverVR/Footstep
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR::Footstep), 160 + sizeof(float)> __RootMotion_FinalIK_IKSolverVR_FootstepSizeCheck;
  static_assert(sizeof(IKSolverVR::Footstep) == 0xA4);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::Footstep*, "RootMotion.FinalIK", "IKSolverVR/Footstep");
