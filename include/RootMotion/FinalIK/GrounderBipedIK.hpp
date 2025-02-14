// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounder
#include "RootMotion/FinalIK/Grounder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GrounderBipedIK
  // [HelpURLAttribute] Offset: E05DCC
  // [AddComponentMenu] Offset: E05DCC
  class GrounderBipedIK : public RootMotion::FinalIK::Grounder {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // [TooltipAttribute] Offset: 0xE0712C
    // public RootMotion.FinalIK.BipedIK ik
    // Size: 0x8
    // Offset: 0x40
    RootMotion::FinalIK::BipedIK* ik;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::BipedIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xE07164
    // public System.Single spineBend
    // Size: 0x4
    // Offset: 0x48
    float spineBend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE0719C
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
    // Offset: 0x1C3E6B8
    bool IsReadyToInitiate();
    // private System.Void Update()
    // Offset: 0x1C3E768
    void Update();
    // private System.Void Initiate()
    // Offset: 0x1C3E81C
    void Initiate();
    // private System.Void OnDisable()
    // Offset: 0x1C3ED30
    void OnDisable();
    // private System.Void OnSolverUpdate()
    // Offset: 0x1C3ED84
    void OnSolverUpdate();
    // private System.Void SetLegIK(RootMotion.FinalIK.IKSolverLimb limb, System.Int32 index)
    // Offset: 0x1C3F538
    void SetLegIK(RootMotion::FinalIK::IKSolverLimb* limb, int index);
    // private System.Void OnPostSolverUpdate()
    // Offset: 0x1C3F698
    void OnPostSolverUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x1C3F828
    void OnDestroy();
    // protected override System.Void OpenUserManual()
    // Offset: 0x1C3E51C
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x1C3E568
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::OpenScriptReference()
    void OpenScriptReference();
    // public override System.Void ResetPosition()
    // Offset: 0x1C3E5B4
    // Implemented from: RootMotion.FinalIK.Grounder
    // Base method: System.Void Grounder::ResetPosition()
    void ResetPosition();
    // public System.Void .ctor()
    // Offset: 0x1C3F998
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
  #pragma pack(pop)
  static check_size<sizeof(GrounderBipedIK), 132 + sizeof(float)> __RootMotion_FinalIK_GrounderBipedIKSizeCheck;
  static_assert(sizeof(GrounderBipedIK) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderBipedIK*, "RootMotion.FinalIK", "GrounderBipedIK");
