// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: RootMotion.FinalIK.VRIKCalibrator
#include "RootMotion/FinalIK/VRIKCalibrator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Skipping declaration: VRIK because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.VRIKRootController
  // [] Offset: FFFFFFFF
  class VRIKRootController : public UnityEngine::MonoBehaviour {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD15798
    // private UnityEngine.Vector3 <pelvisTargetRight>k__BackingField
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 pelvisTargetRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: pelvisTargetRight and: pelvisTarget
    char __padding0[0x4] = {};
    // private UnityEngine.Transform pelvisTarget
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* pelvisTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform leftFootTarget
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* leftFootTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform rightFootTarget
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* rightFootTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private RootMotion.FinalIK.VRIK ik
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::VRIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::VRIK*) == 0x8);
    // Creating value type constructor for type: VRIKRootController
    VRIKRootController(UnityEngine::Vector3 pelvisTargetRight_ = {}, UnityEngine::Transform* pelvisTarget_ = {}, UnityEngine::Transform* leftFootTarget_ = {}, UnityEngine::Transform* rightFootTarget_ = {}, RootMotion::FinalIK::VRIK* ik_ = {}) noexcept : pelvisTargetRight{pelvisTargetRight_}, pelvisTarget{pelvisTarget_}, leftFootTarget{leftFootTarget_}, rightFootTarget{rightFootTarget_}, ik{ik_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Vector3 get_pelvisTargetRight()
    // Offset: 0x1926A70
    UnityEngine::Vector3 get_pelvisTargetRight();
    // private System.Void set_pelvisTargetRight(UnityEngine.Vector3 value)
    // Offset: 0x1926A7C
    void set_pelvisTargetRight(UnityEngine::Vector3 value);
    // private System.Void Awake()
    // Offset: 0x1926A88
    void Awake();
    // public System.Void Calibrate()
    // Offset: 0x19255D4
    void Calibrate();
    // public System.Void Calibrate(RootMotion.FinalIK.VRIKCalibrator/CalibrationData data)
    // Offset: 0x19265DC
    void Calibrate(RootMotion::FinalIK::VRIKCalibrator::CalibrationData* data);
    // private System.Void OnPreUpdate()
    // Offset: 0x1926B60
    void OnPreUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x1927004
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x19270FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIKRootController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::VRIKRootController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIKRootController*, creationType>()));
    }
  }; // RootMotion.FinalIK.VRIKRootController
  #pragma pack(pop)
  static check_size<sizeof(VRIKRootController), 64 + sizeof(RootMotion::FinalIK::VRIK*)> __RootMotion_FinalIK_VRIKRootControllerSizeCheck;
  static_assert(sizeof(VRIKRootController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKRootController*, "RootMotion.FinalIK", "VRIKRootController");
