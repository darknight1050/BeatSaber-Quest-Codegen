// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverArm
  class IKSolverArm : public RootMotion::FinalIK::IKSolver {
    public:
    // [RangeAttribute] Offset: 0xE085B4
    // public System.Single IKRotationWeight
    // Size: 0x4
    // Offset: 0x58
    float IKRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Quaternion IKRotation
    // Size: 0x10
    // Offset: 0x5C
    UnityEngine::Quaternion IKRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Padding between fields: IKRotation and: chest
    char __padding1[0x4] = {};
    // public RootMotion.FinalIK.IKSolver/Point chest
    // Size: 0x8
    // Offset: 0x70
    RootMotion::FinalIK::IKSolver::Point* chest;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/Point shoulder
    // Size: 0x8
    // Offset: 0x78
    RootMotion::FinalIK::IKSolver::Point* shoulder;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/Point upperArm
    // Size: 0x8
    // Offset: 0x80
    RootMotion::FinalIK::IKSolver::Point* upperArm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/Point forearm
    // Size: 0x8
    // Offset: 0x88
    RootMotion::FinalIK::IKSolver::Point* forearm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/Point hand
    // Size: 0x8
    // Offset: 0x90
    RootMotion::FinalIK::IKSolver::Point* hand;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // public System.Boolean isLeft
    // Size: 0x1
    // Offset: 0x98
    bool isLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLeft and: arm
    char __padding7[0x7] = {};
    // public RootMotion.FinalIK.IKSolverVR/Arm arm
    // Size: 0x8
    // Offset: 0xA0
    RootMotion::FinalIK::IKSolverVR::Arm* arm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Arm*) == 0x8);
    // private UnityEngine.Vector3[] positions
    // Size: 0x8
    // Offset: 0xA8
    ::Array<UnityEngine::Vector3>* positions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Quaternion[] rotations
    // Size: 0x8
    // Offset: 0xB0
    ::Array<UnityEngine::Quaternion>* rotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // Creating value type constructor for type: IKSolverArm
    IKSolverArm(float IKRotationWeight_ = {}, UnityEngine::Quaternion IKRotation_ = {}, RootMotion::FinalIK::IKSolver::Point* chest_ = {}, RootMotion::FinalIK::IKSolver::Point* shoulder_ = {}, RootMotion::FinalIK::IKSolver::Point* upperArm_ = {}, RootMotion::FinalIK::IKSolver::Point* forearm_ = {}, RootMotion::FinalIK::IKSolver::Point* hand_ = {}, bool isLeft_ = {}, RootMotion::FinalIK::IKSolverVR::Arm* arm_ = {}, ::Array<UnityEngine::Vector3>* positions_ = {}, ::Array<UnityEngine::Quaternion>* rotations_ = {}) noexcept : IKRotationWeight{IKRotationWeight_}, IKRotation{IKRotation_}, chest{chest_}, shoulder{shoulder_}, upperArm{upperArm_}, forearm{forearm_}, hand{hand_}, isLeft{isLeft_}, arm{arm_}, positions{positions_}, rotations{rotations_} {}
    // public System.Boolean SetChain(UnityEngine.Transform chest, UnityEngine.Transform shoulder, UnityEngine.Transform upperArm, UnityEngine.Transform forearm, UnityEngine.Transform hand, UnityEngine.Transform root)
    // Offset: 0x1BD6E08
    bool SetChain(UnityEngine::Transform* chest, UnityEngine::Transform* shoulder, UnityEngine::Transform* upperArm, UnityEngine::Transform* forearm, UnityEngine::Transform* hand, UnityEngine::Transform* root);
    // private System.Void Solve()
    // Offset: 0x1BD75D4
    void Solve();
    // private System.Void Read()
    // Offset: 0x1BD729C
    void Read();
    // private System.Void Write()
    // Offset: 0x1BD7640
    void Write();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1BD6A94
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1BD6E78
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1BD6FD4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1BD716C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1BD71C8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x1BD7238
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1BD75A8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1BD77CC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverArm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverArm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverArm*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverArm
  #pragma pack(pop)
  static check_size<sizeof(IKSolverArm), 176 + sizeof(::Array<UnityEngine::Quaternion>*)> __RootMotion_FinalIK_IKSolverArmSizeCheck;
  static_assert(sizeof(IKSolverArm) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverArm*, "RootMotion.FinalIK", "IKSolverArm");
