// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.HitReaction
#include "RootMotion/FinalIK/HitReaction.hpp"
// Including type: RootMotion.FinalIK.HitReaction/HitPoint
#include "RootMotion/FinalIK/HitReaction_HitPoint.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.HitReaction/HitPointEffector
  class HitReaction::HitPointEffector : public RootMotion::FinalIK::HitReaction::HitPoint {
    public:
    // Nested type: RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink
    class EffectorLink;
    // public UnityEngine.AnimationCurve offsetInForceDirection
    // Offset: 0x50
    UnityEngine::AnimationCurve* offsetInForceDirection;
    // public UnityEngine.AnimationCurve offsetInUpDirection
    // Offset: 0x58
    UnityEngine::AnimationCurve* offsetInUpDirection;
    // public RootMotion.FinalIK.HitReaction/HitPointEffector/EffectorLink[] effectorLinks
    // Offset: 0x60
    ::Array<RootMotion::FinalIK::HitReaction::HitPointEffector::EffectorLink*>* effectorLinks;
    // protected override System.Single GetLength()
    // Offset: 0x12D80A4
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Single HitPoint::GetLength()
    float GetLength();
    // protected override System.Void CrossFadeStart()
    // Offset: 0x12D821C
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::CrossFadeStart()
    void CrossFadeStart();
    // protected override System.Void OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    // Offset: 0x12D829C
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::OnApply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight)
    void OnApply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
    // public System.Void .ctor()
    // Offset: 0x12D85BC
    // Implemented from: RootMotion.FinalIK.HitReaction/HitPoint
    // Base method: System.Void HitPoint::.ctor()
    // Base method: System.Void Object::.ctor()
    static HitReaction::HitPointEffector* New_ctor();
  }; // RootMotion.FinalIK.HitReaction/HitPointEffector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::HitReaction::HitPointEffector*, "RootMotion.FinalIK", "HitReaction/HitPointEffector");
#pragma pack(pop)
