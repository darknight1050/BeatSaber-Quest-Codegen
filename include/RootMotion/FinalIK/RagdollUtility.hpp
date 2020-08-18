// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.AnimatorUpdateMode
#include "UnityEngine/AnimatorUpdateMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.RagdollUtility
  class RagdollUtility : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::RagdollUtility::Rigidbone
    class Rigidbone;
    // Nested type: RootMotion::FinalIK::RagdollUtility::Child
    class Child;
    // Nested type: RootMotion::FinalIK::RagdollUtility::$DisableRagdollSmooth$d__21
    class $DisableRagdollSmooth$d__21;
    // public RootMotion.FinalIK.IK ik
    // Offset: 0x18
    RootMotion::FinalIK::IK* ik;
    // public System.Single ragdollToAnimationTime
    // Offset: 0x20
    float ragdollToAnimationTime;
    // public System.Boolean applyIkOnRagdoll
    // Offset: 0x24
    bool applyIkOnRagdoll;
    // public System.Single applyVelocity
    // Offset: 0x28
    float applyVelocity;
    // public System.Single applyAngularVelocity
    // Offset: 0x2C
    float applyAngularVelocity;
    // private UnityEngine.Animator animator
    // Offset: 0x30
    UnityEngine::Animator* animator;
    // private RootMotion.FinalIK.RagdollUtility/Rigidbone[] rigidbones
    // Offset: 0x38
    ::Array<RootMotion::FinalIK::RagdollUtility::Rigidbone*>* rigidbones;
    // private RootMotion.FinalIK.RagdollUtility/Child[] children
    // Offset: 0x40
    ::Array<RootMotion::FinalIK::RagdollUtility::Child*>* children;
    // private System.Boolean enableRagdollFlag
    // Offset: 0x48
    bool enableRagdollFlag;
    // private UnityEngine.AnimatorUpdateMode animatorUpdateMode
    // Offset: 0x4C
    UnityEngine::AnimatorUpdateMode animatorUpdateMode;
    // private RootMotion.FinalIK.IK[] allIKComponents
    // Offset: 0x50
    ::Array<RootMotion::FinalIK::IK*>* allIKComponents;
    // private System.Boolean[] fixTransforms
    // Offset: 0x58
    ::Array<bool>* fixTransforms;
    // private System.Single ragdollWeight
    // Offset: 0x60
    float ragdollWeight;
    // private System.Single ragdollWeightV
    // Offset: 0x64
    float ragdollWeightV;
    // private System.Boolean fixedFrame
    // Offset: 0x68
    bool fixedFrame;
    // private System.Boolean[] disabledIKComponents
    // Offset: 0x70
    ::Array<bool>* disabledIKComponents;
    // public System.Void EnableRagdoll()
    // Offset: 0x11908C8
    void EnableRagdoll();
    // public System.Void DisableRagdoll()
    // Offset: 0x1190978
    void DisableRagdoll();
    // public System.Void Start()
    // Offset: 0x1190AB4
    void Start();
    // private System.Collections.IEnumerator DisableRagdollSmooth()
    // Offset: 0x1190A38
    System::Collections::IEnumerator* DisableRagdollSmooth();
    // private System.Void Update()
    // Offset: 0x119113C
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x1191388
    void FixedUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1191440
    void LateUpdate();
    // private System.Void AfterLastIK()
    // Offset: 0x1191680
    void AfterLastIK();
    // private System.Void AfterAnimation()
    // Offset: 0x11914C0
    void AfterAnimation();
    // private System.Void OnFinalPose()
    // Offset: 0x119163C
    void OnFinalPose();
    // private System.Void RagdollEnabler()
    // Offset: 0x119171C
    void RagdollEnabler();
    // private System.Boolean get_isRagdoll()
    // Offset: 0x1190900
    bool get_isRagdoll();
    // private System.Void RecordVelocities()
    // Offset: 0x11916B4
    void RecordVelocities();
    // private System.Boolean get_ikUsed()
    // Offset: 0x11914FC
    bool get_ikUsed();
    // private System.Void StoreLocalState()
    // Offset: 0x11909D0
    void StoreLocalState();
    // private System.Void FixTransforms(System.Single weight)
    // Offset: 0x11913C8
    void FixTransforms(float weight);
    // private System.Void OnDestroy()
    // Offset: 0x1191EC0
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1191FE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RagdollUtility* New_ctor();
  }; // RootMotion.FinalIK.RagdollUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RagdollUtility*, "RootMotion.FinalIK", "RagdollUtility");
#pragma pack(pop)
