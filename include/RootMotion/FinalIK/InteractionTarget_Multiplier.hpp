// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionTarget
#include "RootMotion/FinalIK/InteractionTarget.hpp"
// Including type: RootMotion.FinalIK.InteractionObject/WeightCurve/Type
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTarget/Multiplier
  // [] Offset: FFFFFFFF
  class InteractionTarget::Multiplier : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xD173CC
    // public RootMotion.FinalIK.InteractionObject/WeightCurve/Type curve
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::InteractionObject::WeightCurve::Type curve;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionObject::WeightCurve::Type) == 0x4);
    // [TooltipAttribute] Offset: 0xD17404
    // public System.Single multiplier
    // Size: 0x4
    // Offset: 0x14
    float multiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Multiplier
    Multiplier(RootMotion::FinalIK::InteractionObject::WeightCurve::Type curve_ = {}, float multiplier_ = {}) noexcept : curve{curve_}, multiplier{multiplier_} {}
    // public System.Void .ctor()
    // Offset: 0x191689C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTarget::Multiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionTarget::Multiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTarget::Multiplier*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTarget/Multiplier
  #pragma pack(pop)
  static check_size<sizeof(InteractionTarget::Multiplier), 20 + sizeof(float)> __RootMotion_FinalIK_InteractionTarget_MultiplierSizeCheck;
  static_assert(sizeof(InteractionTarget::Multiplier) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTarget::Multiplier*, "RootMotion.FinalIK", "InteractionTarget/Multiplier");
