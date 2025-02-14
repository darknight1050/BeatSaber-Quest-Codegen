// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
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
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverHeuristic
  class IKSolverHeuristic : public RootMotion::FinalIK::IKSolver {
    public:
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Single tolerance
    // Size: 0x4
    // Offset: 0x60
    float tolerance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 maxIterations
    // Size: 0x4
    // Offset: 0x64
    int maxIterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean useRotationLimits
    // Size: 0x1
    // Offset: 0x68
    bool useRotationLimits;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean XY
    // Size: 0x1
    // Offset: 0x69
    bool XY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: XY and: bones
    char __padding4[0x6] = {};
    // public RootMotion.FinalIK.IKSolver/Bone[] bones
    // Size: 0x8
    // Offset: 0x70
    ::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolver::Bone*>*) == 0x8);
    // protected UnityEngine.Vector3 lastLocalDirection
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 lastLocalDirection;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // protected System.Single chainLength
    // Size: 0x4
    // Offset: 0x84
    float chainLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: IKSolverHeuristic
    IKSolverHeuristic(UnityEngine::Transform* target_ = {}, float tolerance_ = {}, int maxIterations_ = {}, bool useRotationLimits_ = {}, bool XY_ = {}, ::Array<RootMotion::FinalIK::IKSolver::Bone*>* bones_ = {}, UnityEngine::Vector3 lastLocalDirection_ = {}, float chainLength_ = {}) noexcept : target{target_}, tolerance{tolerance_}, maxIterations{maxIterations_}, useRotationLimits{useRotationLimits_}, XY{XY_}, bones{bones_}, lastLocalDirection{lastLocalDirection_}, chainLength{chainLength_} {}
    // public System.Boolean SetChain(UnityEngine.Transform[] hierarchy, UnityEngine.Transform root)
    // Offset: 0x1BE0EAC
    bool SetChain(::Array<UnityEngine::Transform*>* hierarchy, UnityEngine::Transform* root);
    // public System.Void AddBone(UnityEngine.Transform bone)
    // Offset: 0x1BE1040
    void AddBone(UnityEngine::Transform* bone);
    // protected System.Int32 get_minBones()
    // Offset: 0x1BE16F0
    int get_minBones();
    // protected System.Boolean get_boneLengthCanBeZero()
    // Offset: 0x1BE16F8
    bool get_boneLengthCanBeZero();
    // protected System.Boolean get_allowCommonParent()
    // Offset: 0x1BE1700
    bool get_allowCommonParent();
    // protected System.Void InitiateBones()
    // Offset: 0x1BD7A54
    void InitiateBones();
    // protected UnityEngine.Vector3 get_localDirection()
    // Offset: 0x1BE1710
    UnityEngine::Vector3 get_localDirection();
    // protected System.Single get_positionOffset()
    // Offset: 0x1BD8670
    float get_positionOffset();
    // protected UnityEngine.Vector3 GetSingularityOffset()
    // Offset: 0x1BD82CC
    UnityEngine::Vector3 GetSingularityOffset();
    // private System.Boolean SingularityDetected()
    // Offset: 0x1BE1844
    bool SingularityDetected();
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1BE117C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1BE11E8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1BE1268
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1BE15F4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1BE15FC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // protected override System.Void OnInitiate()
    // Offset: 0x1BE1708
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1BE170C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1BD6A24
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverHeuristic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverHeuristic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverHeuristic*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverHeuristic
  #pragma pack(pop)
  static check_size<sizeof(IKSolverHeuristic), 132 + sizeof(float)> __RootMotion_FinalIK_IKSolverHeuristicSizeCheck;
  static_assert(sizeof(IKSolverHeuristic) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverHeuristic*, "RootMotion.FinalIK", "IKSolverHeuristic");
