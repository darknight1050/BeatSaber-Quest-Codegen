// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReaction
#include "RootMotion/FinalIK/HitReaction.hpp"
// Including type: RootMotion.FinalIK.HitReaction/HitPoint
#include "RootMotion/FinalIK/HitReaction_HitPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPointEffector
  class HitReaction::HitPointEffector : public RootMotion::FinalIK::HitReaction::HitPoint {
    public:
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink
    class EffectorLink;
    // [TooltipAttribute] Offset: 0xE0C4F8
    // public UnityEngine.AnimationCurve offsetInForceDirection
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::AnimationCurve* offsetInForceDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0C530
    // public UnityEngine.AnimationCurve offsetInUpDirection
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::AnimationCurve* offsetInUpDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0C568
    // public RootMotion.FinalIK.HitReaction/HitPointEffector/EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x60
    ::Array<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>* effectorLinks;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>*) == 0x8);
    // Creating value type constructor for type: HitPointEffector
    HitPointEffector(UnityEngine::AnimationCurve* offsetInForceDirection_ = {}, UnityEngine::AnimationCurve* offsetInUpDirection_ = {}, ::Array<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>* effectorLinks_ = {}) noexcept : offsetInForceDirection{offsetInForceDirection_}, offsetInUpDirection{offsetInUpDirection_}, effectorLinks{effectorLinks_} {}
    // protected override System.Single GetLength()
    // Offset: 0x1C4902C
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Single HitPoint::GetLength()
    float GetLength();
    // protected override System.Void CrossFadeStart()
    // Offset: 0x1C491A4
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x1C49224
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // public System.Void .ctor()
    // Offset: 0x1C49544
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction::HitPointEffector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReaction::HitPointEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction::HitPointEffector*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReaction/HitPointEffector
  #pragma pack(pop)
  static check_size<sizeof(HitReaction::HitPointEffector), 96 + sizeof(::Array<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>*)> __RootMotion_FinalIK_HitReaction_HitPointEffectorSizeCheck;
  static_assert(sizeof(HitReaction::HitPointEffector) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPointEffector*, "RootMotion.FinalIK", "HitReaction/HitPointEffector");
