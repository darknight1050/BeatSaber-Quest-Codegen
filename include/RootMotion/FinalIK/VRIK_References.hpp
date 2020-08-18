// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.VRIK
#include "RootMotion/FinalIK/VRIK.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.VRIK/References
  class VRIK::References : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform root
    // Offset: 0x10
    UnityEngine::Transform* root;
    // public UnityEngine.Transform pelvis
    // Offset: 0x18
    UnityEngine::Transform* pelvis;
    // public UnityEngine.Transform spine
    // Offset: 0x20
    UnityEngine::Transform* spine;
    // public UnityEngine.Transform chest
    // Offset: 0x28
    UnityEngine::Transform* chest;
    // public UnityEngine.Transform neck
    // Offset: 0x30
    UnityEngine::Transform* neck;
    // public UnityEngine.Transform head
    // Offset: 0x38
    UnityEngine::Transform* head;
    // public UnityEngine.Transform leftShoulder
    // Offset: 0x40
    UnityEngine::Transform* leftShoulder;
    // public UnityEngine.Transform leftUpperArm
    // Offset: 0x48
    UnityEngine::Transform* leftUpperArm;
    // public UnityEngine.Transform leftForearm
    // Offset: 0x50
    UnityEngine::Transform* leftForearm;
    // public UnityEngine.Transform leftHand
    // Offset: 0x58
    UnityEngine::Transform* leftHand;
    // public UnityEngine.Transform rightShoulder
    // Offset: 0x60
    UnityEngine::Transform* rightShoulder;
    // public UnityEngine.Transform rightUpperArm
    // Offset: 0x68
    UnityEngine::Transform* rightUpperArm;
    // public UnityEngine.Transform rightForearm
    // Offset: 0x70
    UnityEngine::Transform* rightForearm;
    // public UnityEngine.Transform rightHand
    // Offset: 0x78
    UnityEngine::Transform* rightHand;
    // public UnityEngine.Transform leftThigh
    // Offset: 0x80
    UnityEngine::Transform* leftThigh;
    // public UnityEngine.Transform leftCalf
    // Offset: 0x88
    UnityEngine::Transform* leftCalf;
    // public UnityEngine.Transform leftFoot
    // Offset: 0x90
    UnityEngine::Transform* leftFoot;
    // public UnityEngine.Transform leftToes
    // Offset: 0x98
    UnityEngine::Transform* leftToes;
    // public UnityEngine.Transform rightThigh
    // Offset: 0xA0
    UnityEngine::Transform* rightThigh;
    // public UnityEngine.Transform rightCalf
    // Offset: 0xA8
    UnityEngine::Transform* rightCalf;
    // public UnityEngine.Transform rightFoot
    // Offset: 0xB0
    UnityEngine::Transform* rightFoot;
    // public UnityEngine.Transform rightToes
    // Offset: 0xB8
    UnityEngine::Transform* rightToes;
    // public UnityEngine.Transform[] GetTransforms()
    // Offset: 0x1199908
    ::Array<UnityEngine::Transform*>* GetTransforms();
    // public System.Boolean get_isFilled()
    // Offset: 0x119926C
    bool get_isFilled();
    // public System.Boolean get_isEmpty()
    // Offset: 0x1198DF0
    bool get_isEmpty();
    // static public System.Boolean AutoDetectReferences(UnityEngine.Transform root, RootMotion.FinalIK.VRIK/References references)
    // Offset: 0x11988CC
    static bool AutoDetectReferences(UnityEngine::Transform* root, RootMotion::FinalIK::VRIK::References*& references);
    // public System.Void .ctor()
    // Offset: 0x1199900
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRIK::References* New_ctor();
  }; // RootMotion.FinalIK.VRIK/References
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIK::References*, "RootMotion.FinalIK", "VRIK/References");
#pragma pack(pop)
