// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: BipedIK
  class BipedIK;
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x88
  // Autogenerated type: RootMotion.FinalIK.GrounderBipedIK
  // [] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: DB4618
  // [AddComponentMenu] Offset: DB4618
  class GrounderBipedIK : public RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // [TooltipAttribute] Offset: 0xDB5978
    // public RootMotion.FinalIK.BipedIK ik
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::BipedIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::BipedIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB59B0
    // public System.Single spineBend
    // Size: 0x4
    // Offset: 0x48
    float spineBend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB59E8
    // public System.Single spineSpeed
    // Size: 0x4
    // Offset: 0x4C
    float spineSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Transform[] feet
    // Size: 0x8
    // Offset: 0x50
    ::Array<UnityEngine::Transform*>* feet;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private UnityEngine.Quaternion[] footRotations
    // Size: 0x8
    // Offset: 0x58
    ::Array<UnityEngine::Quaternion>* footRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // private UnityEngine.Vector3 animatedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 animatedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 solvedPelvisLocalPosition
    // Size: 0xC
    // Offset: 0x6C
    UnityEngine::Vector3 solvedPelvisLocalPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 spineOffset
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 spineOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single lastWeight
    // Size: 0x4
    // Offset: 0x84
    float lastWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: GrounderBipedIK
    GrounderBipedIK(RootMotion::FinalIK::BipedIK* ik_ = {}, float spineBend_ = {}, float spineSpeed_ = {}, ::Array<UnityEngine::Transform*>* feet_ = {}, ::Array<UnityEngine::Quaternion>* footRotations_ = {}, UnityEngine::Vector3 animatedPelvisLocalPosition_ = {}, UnityEngine::Vector3 solvedPelvisLocalPosition_ = {}, UnityEngine::Vector3 spineOffset_ = {}, float lastWeight_ = {}) noexcept : ik{ik_}, spineBend{spineBend_}, spineSpeed{spineSpeed_}, feet{feet_}, footRotations{footRotations_}, animatedPelvisLocalPosition{animatedPelvisLocalPosition_}, solvedPelvisLocalPosition{solvedPelvisLocalPosition_}, spineOffset{spineOffset_}, lastWeight{lastWeight_} {}
    // private System.Boolean IsReadyToInitiate()
    // Offset: 0x16FB400
    bool IsReadyToInitiate();
    // private System.Void Update()
    // Offset: 0x16FB4B0
    void Update();
    // private System.Void Initiate()
    // Offset: 0x16FB564
    void Initiate();
    // private System.Void OnDisable()
    // Offset: 0x16FBB2C
    void OnDisable();
    // private System.Void OnSolverUpdate()
    // Offset: 0x16FBB80
    void OnSolverUpdate();
    // private System.Void SetLegIK(RootMotion.FinalIK.IKSolverLimb limb, System.Int32 index)
    // Offset: 0x16FC334
    void SetLegIK(RootMotion::FinalIK::IKSolverLimb* limb, int index);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x16FC494
    void OnPostSolverUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x16FC624
    void OnDestroy();
    // protected override System.Void OpenUserManual()
    // Offset: 0x16FB264
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x16FB2B0
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x16FB2FC
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
    // public System.Void .ctor()
    // Offset: 0x16FC7C8
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrounderBipedIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GrounderBipedIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrounderBipedIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.GrounderBipedIK
  static check_size<sizeof(GrounderBipedIK), 132 + sizeof(float)> __RootMotion_FinalIK_GrounderBipedIKSizeCheck;
  static_assert(sizeof(GrounderBipedIK) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderBipedIK*, "RootMotion.FinalIK", "GrounderBipedIK");
#pragma pack(pop)
