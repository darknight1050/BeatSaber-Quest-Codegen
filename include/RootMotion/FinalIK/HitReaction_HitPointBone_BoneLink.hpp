// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReaction/HitPointBone
#include "RootMotion/FinalIK/HitReaction_HitPointBone.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x3C
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPointBone/BoneLink
  // [] Offset: FFFFFFFF
  class HitReaction::HitPointBone::BoneLink : public ::Il2CppObject {
    public:
    // [TooltipAttribute] Offset: 0xDBBBB0
    // public UnityEngine.Transform bone
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* bone;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDBBBE8
    // [RangeAttribute] Offset: 0xDBBBE8
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Quaternion lastValue
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion lastValue;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion current
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Quaternion current;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: BoneLink
    BoneLink(UnityEngine::Transform* bone_ = {}, float weight_ = {}, UnityEngine::Quaternion lastValue_ = {}, UnityEngine::Quaternion current_ = {}) noexcept : bone{bone_}, weight{weight_}, lastValue{lastValue_}, current{current_} {}
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, UnityEngine.Quaternion offset, System.Single crossFader)
    // Offset: 0x1705FE0
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, UnityEngine::Quaternion offset, float crossFader);
    // public System.Void CrossFadeStart()
    // Offset: 0x1705D68
    void CrossFadeStart();
    // public System.Void .ctor()
    // Offset: 0x1706150
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitReaction::HitPointBone::BoneLink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitReaction::HitPointBone::BoneLink*, creationType>()));
    }
  }; // RootMotion.FinalIK.HitReaction/HitPointBone/BoneLink
  static check_size<sizeof(HitReaction::HitPointBone::BoneLink), 44 + sizeof(UnityEngine::Quaternion)> __RootMotion_FinalIK_HitReaction_HitPointBone_BoneLinkSizeCheck;
  static_assert(sizeof(HitReaction::HitPointBone::BoneLink) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPointBone::BoneLink*, "RootMotion.FinalIK", "HitReaction/HitPointBone/BoneLink");
#pragma pack(pop)
