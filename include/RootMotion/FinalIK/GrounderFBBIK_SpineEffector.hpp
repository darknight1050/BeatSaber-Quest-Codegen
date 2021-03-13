// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.GrounderFBBIK
#include "RootMotion/FinalIK/GrounderFBBIK.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GrounderFBBIK/SpineEffector
  // [] Offset: FFFFFFFF
  class GrounderFBBIK::SpineEffector : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xD157A8
    // public RootMotion.FinalIK.FullBodyBipedEffector effectorType
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effectorType;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [TooltipAttribute] Offset: 0xD157E0
    // public System.Single horizontalWeight
    // Size: 0x4
    // Offset: 0x14
    float horizontalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xD15818
    // public System.Single verticalWeight
    // Size: 0x4
    // Offset: 0x18
    float verticalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: SpineEffector
    SpineEffector(RootMotion::FinalIK::FullBodyBipedEffector effectorType_ = {}, float horizontalWeight_ = {}, float verticalWeight_ = {}) noexcept : effectorType{effectorType_}, horizontalWeight{horizontalWeight_}, verticalWeight{verticalWeight_} {}
    // public System.Void .ctor(RootMotion.FinalIK.FullBodyBipedEffector effectorType, System.Single horizontalWeight, System.Single verticalWeight)
    // Offset: 0x1A5AFA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderFBBIK::SpineEffector* New_ctor(RootMotion::FinalIK::FullBodyBipedEffector effectorType, float horizontalWeight, float verticalWeight) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderFBBIK::SpineEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderFBBIK::SpineEffector*, creationType>(effectorType, horizontalWeight, verticalWeight)));
    }
    // public System.Void .ctor()
    // Offset: 0x1A5AF94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderFBBIK::SpineEffector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderFBBIK::SpineEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderFBBIK::SpineEffector*, creationType>()));
    }
  }; // RootMotion.FinalIK.GrounderFBBIK/SpineEffector
  #pragma pack(pop)
  static check_size<sizeof(GrounderFBBIK::SpineEffector), 24 + sizeof(float)> __RootMotion_FinalIK_GrounderFBBIK_SpineEffectorSizeCheck;
  static_assert(sizeof(GrounderFBBIK::SpineEffector) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderFBBIK::SpineEffector*, "RootMotion.FinalIK", "GrounderFBBIK/SpineEffector");
