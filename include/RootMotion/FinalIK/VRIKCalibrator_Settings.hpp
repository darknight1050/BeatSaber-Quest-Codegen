// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.VRIKCalibrator
#include "RootMotion/FinalIK/VRIKCalibrator.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xA0
  // Autogenerated type: RootMotion.FinalIK.VRIKCalibrator/Settings
  // [] Offset: FFFFFFFF
  class VRIKCalibrator::Settings : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xDBB6E4
    // public System.Single scaleMlp
    // Size: 0x4
    // Offset: 0x10
    float scaleMlp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDBB71C
    // public UnityEngine.Vector3 headTrackerForward
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 headTrackerForward;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xDBB754
    // public UnityEngine.Vector3 headTrackerUp
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 headTrackerUp;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xDBB78C
    // public UnityEngine.Vector3 bodyTrackerForward
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 bodyTrackerForward;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xDBB7C4
    // public UnityEngine.Vector3 bodyTrackerUp
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 bodyTrackerUp;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xDBB7FC
    // public UnityEngine.Vector3 handTrackerForward
    // Size: 0xC
    // Offset: 0x44
    UnityEngine::Vector3 handTrackerForward;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xDBB834
    // public UnityEngine.Vector3 handTrackerUp
    // Size: 0xC
    // Offset: 0x50
    UnityEngine::Vector3 handTrackerUp;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xDBB86C
    // public UnityEngine.Vector3 footTrackerForward
    // Size: 0xC
    // Offset: 0x5C
    UnityEngine::Vector3 footTrackerForward;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xDBB8A4
    // public UnityEngine.Vector3 footTrackerUp
    // Size: 0xC
    // Offset: 0x68
    UnityEngine::Vector3 footTrackerUp;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [SpaceAttribute] Offset: 0xDBB8DC
    // [TooltipAttribute] Offset: 0xDBB8DC
    // public UnityEngine.Vector3 headOffset
    // Size: 0xC
    // Offset: 0x74
    UnityEngine::Vector3 headOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xDBB92C
    // public UnityEngine.Vector3 handOffset
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 handOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [TooltipAttribute] Offset: 0xDBB964
    // public System.Single footForwardOffset
    // Size: 0x4
    // Offset: 0x8C
    float footForwardOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDBB99C
    // public System.Single footInwardOffset
    // Size: 0x4
    // Offset: 0x90
    float footInwardOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDBB9D4
    // [RangeAttribute] Offset: 0xDBB9D4
    // public System.Single footHeadingOffset
    // Size: 0x4
    // Offset: 0x94
    float footHeadingOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDBBA30
    // public System.Single pelvisPositionWeight
    // Size: 0x4
    // Offset: 0x98
    float pelvisPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDBBA48
    // public System.Single pelvisRotationWeight
    // Size: 0x4
    // Offset: 0x9C
    float pelvisRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Settings
    Settings(float scaleMlp_ = {}, UnityEngine::Vector3 headTrackerForward_ = {}, UnityEngine::Vector3 headTrackerUp_ = {}, UnityEngine::Vector3 bodyTrackerForward_ = {}, UnityEngine::Vector3 bodyTrackerUp_ = {}, UnityEngine::Vector3 handTrackerForward_ = {}, UnityEngine::Vector3 handTrackerUp_ = {}, UnityEngine::Vector3 footTrackerForward_ = {}, UnityEngine::Vector3 footTrackerUp_ = {}, UnityEngine::Vector3 headOffset_ = {}, UnityEngine::Vector3 handOffset_ = {}, float footForwardOffset_ = {}, float footInwardOffset_ = {}, float footHeadingOffset_ = {}, float pelvisPositionWeight_ = {}, float pelvisRotationWeight_ = {}) noexcept : scaleMlp{scaleMlp_}, headTrackerForward{headTrackerForward_}, headTrackerUp{headTrackerUp_}, bodyTrackerForward{bodyTrackerForward_}, bodyTrackerUp{bodyTrackerUp_}, handTrackerForward{handTrackerForward_}, handTrackerUp{handTrackerUp_}, footTrackerForward{footTrackerForward_}, footTrackerUp{footTrackerUp_}, headOffset{headOffset_}, handOffset{handOffset_}, footForwardOffset{footForwardOffset_}, footInwardOffset{footInwardOffset_}, footHeadingOffset{footHeadingOffset_}, pelvisPositionWeight{pelvisPositionWeight_}, pelvisRotationWeight{pelvisRotationWeight_} {}
    // public System.Void .ctor()
    // Offset: 0x15EF114
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIKCalibrator::Settings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::VRIKCalibrator::Settings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIKCalibrator::Settings*, creationType>()));
    }
  }; // RootMotion.FinalIK.VRIKCalibrator/Settings
  static check_size<sizeof(VRIKCalibrator::Settings), 156 + sizeof(float)> __RootMotion_FinalIK_VRIKCalibrator_SettingsSizeCheck;
  static_assert(sizeof(VRIKCalibrator::Settings) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKCalibrator::Settings*, "RootMotion.FinalIK", "VRIKCalibrator/Settings");
#pragma pack(pop)
