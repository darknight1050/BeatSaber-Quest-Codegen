// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.Inertia/Body
#include "RootMotion/FinalIK/Inertia_Body.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.Inertia/Body/EffectorLink
  class Inertia::Body::EffectorLink : public ::CsObject {
    public:
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // public System.Single weight
    // Offset: 0x14
    float weight;
    // public System.Void .ctor()
    // Offset: 0x143222C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Inertia::Body::EffectorLink* New_ctor();
  }; // RootMotion.FinalIK.Inertia/Body/EffectorLink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Inertia::Body::EffectorLink*, "RootMotion.FinalIK", "Inertia/Body/EffectorLink");
#pragma pack(pop)
