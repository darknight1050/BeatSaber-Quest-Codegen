// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKConstraintBend
  class IKConstraintBend;
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FBIKChain
  class FBIKChain : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::FBIKChain::ChildConstraint
    class ChildConstraint;
    // Nested type: RootMotion::FinalIK::FBIKChain::Smoothing
    struct Smoothing;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: RootMotion.FinalIK.FBIKChain/Smoothing
    struct Smoothing/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Smoothing
      constexpr Smoothing(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.FBIKChain/Smoothing None
      static constexpr const int None = 0;
      // Get static field: static public RootMotion.FinalIK.FBIKChain/Smoothing None
      static RootMotion::FinalIK::FBIKChain::Smoothing _get_None();
      // Set static field: static public RootMotion.FinalIK.FBIKChain/Smoothing None
      static void _set_None(RootMotion::FinalIK::FBIKChain::Smoothing value);
      // static field const value: static public RootMotion.FinalIK.FBIKChain/Smoothing Exponential
      static constexpr const int Exponential = 1;
      // Get static field: static public RootMotion.FinalIK.FBIKChain/Smoothing Exponential
      static RootMotion::FinalIK::FBIKChain::Smoothing _get_Exponential();
      // Set static field: static public RootMotion.FinalIK.FBIKChain/Smoothing Exponential
      static void _set_Exponential(RootMotion::FinalIK::FBIKChain::Smoothing value);
      // static field const value: static public RootMotion.FinalIK.FBIKChain/Smoothing Cubic
      static constexpr const int Cubic = 2;
      // Get static field: static public RootMotion.FinalIK.FBIKChain/Smoothing Cubic
      static RootMotion::FinalIK::FBIKChain::Smoothing _get_Cubic();
      // Set static field: static public RootMotion.FinalIK.FBIKChain/Smoothing Cubic
      static void _set_Cubic(RootMotion::FinalIK::FBIKChain::Smoothing value);
    }; // RootMotion.FinalIK.FBIKChain/Smoothing
    #pragma pack(pop)
    static check_size<sizeof(FBIKChain::Smoothing), 0 + sizeof(int)> __RootMotion_FinalIK_FBIKChain_SmoothingSizeCheck;
    static_assert(sizeof(FBIKChain::Smoothing) == 0x4);
    // [RangeAttribute] Offset: 0xE08350
    // public System.Single pin
    // Size: 0x4
    // Offset: 0x10
    float pin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE08368
    // public System.Single pull
    // Size: 0x4
    // Offset: 0x14
    float pull;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE08380
    // public System.Single push
    // Size: 0x4
    // Offset: 0x18
    float push;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE08398
    // public System.Single pushParent
    // Size: 0x4
    // Offset: 0x1C
    float pushParent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE083B0
    // public System.Single reach
    // Size: 0x4
    // Offset: 0x20
    float reach;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public RootMotion.FinalIK.FBIKChain/Smoothing reachSmoothing
    // Size: 0x4
    // Offset: 0x24
    RootMotion::FinalIK::FBIKChain::Smoothing reachSmoothing;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FBIKChain::Smoothing) == 0x4);
    // public RootMotion.FinalIK.FBIKChain/Smoothing pushSmoothing
    // Size: 0x4
    // Offset: 0x28
    RootMotion::FinalIK::FBIKChain::Smoothing pushSmoothing;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FBIKChain::Smoothing) == 0x4);
    // Padding between fields: pushSmoothing and: nodes
    char __padding6[0x4] = {};
    // public RootMotion.FinalIK.IKSolver/Node[] nodes
    // Size: 0x8
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::IKSolver::Node*>* nodes;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolver::Node*>*) == 0x8);
    // public System.Int32[] children
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* children;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // public RootMotion.FinalIK.FBIKChain/ChildConstraint[] childConstraints
    // Size: 0x8
    // Offset: 0x40
    ::Array<RootMotion::FinalIK::FBIKChain::ChildConstraint*>* childConstraints;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::FBIKChain::ChildConstraint*>*) == 0x8);
    // public RootMotion.FinalIK.IKConstraintBend bendConstraint
    // Size: 0x8
    // Offset: 0x48
    RootMotion::FinalIK::IKConstraintBend* bendConstraint;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKConstraintBend*) == 0x8);
    // private System.Single rootLength
    // Size: 0x4
    // Offset: 0x50
    float rootLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x54
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: length
    char __padding12[0x3] = {};
    // private System.Single length
    // Size: 0x4
    // Offset: 0x58
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single distance
    // Size: 0x4
    // Offset: 0x5C
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private RootMotion.FinalIK.IKSolver/Point p
    // Size: 0x8
    // Offset: 0x60
    RootMotion::FinalIK::IKSolver::Point* p;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::Point*) == 0x8);
    // private System.Single reachForce
    // Size: 0x4
    // Offset: 0x68
    float reachForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single pullParentSum
    // Size: 0x4
    // Offset: 0x6C
    float pullParentSum;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single[] crossFades
    // Size: 0x8
    // Offset: 0x70
    ::Array<float>* crossFades;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // private System.Single sqrMag1
    // Size: 0x4
    // Offset: 0x78
    float sqrMag1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single sqrMag2
    // Size: 0x4
    // Offset: 0x7C
    float sqrMag2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single sqrMagDif
    // Size: 0x4
    // Offset: 0x80
    float sqrMagDif;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: FBIKChain
    FBIKChain(float pin_ = {}, float pull_ = {}, float push_ = {}, float pushParent_ = {}, float reach_ = {}, RootMotion::FinalIK::FBIKChain::Smoothing reachSmoothing_ = {}, RootMotion::FinalIK::FBIKChain::Smoothing pushSmoothing_ = {}, ::Array<RootMotion::FinalIK::IKSolver::Node*>* nodes_ = {}, ::Array<int>* children_ = {}, ::Array<RootMotion::FinalIK::FBIKChain::ChildConstraint*>* childConstraints_ = {}, RootMotion::FinalIK::IKConstraintBend* bendConstraint_ = {}, float rootLength_ = {}, bool initiated_ = {}, float length_ = {}, float distance_ = {}, RootMotion::FinalIK::IKSolver::Point* p_ = {}, float reachForce_ = {}, float pullParentSum_ = {}, ::Array<float>* crossFades_ = {}, float sqrMag1_ = {}, float sqrMag2_ = {}, float sqrMagDif_ = {}) noexcept : pin{pin_}, pull{pull_}, push{push_}, pushParent{pushParent_}, reach{reach_}, reachSmoothing{reachSmoothing_}, pushSmoothing{pushSmoothing_}, nodes{nodes_}, children{children_}, childConstraints{childConstraints_}, bendConstraint{bendConstraint_}, rootLength{rootLength_}, initiated{initiated_}, length{length_}, distance{distance_}, p{p_}, reachForce{reachForce_}, pullParentSum{pullParentSum_}, crossFades{crossFades_}, sqrMag1{sqrMag1_}, sqrMag2{sqrMag2_}, sqrMagDif{sqrMagDif_} {}
    // static field const value: static private System.Single maxLimbLength
    static constexpr const float maxLimbLength = 0.99999;
    // Get static field: static private System.Single maxLimbLength
    static float _get_maxLimbLength();
    // Set static field: static private System.Single maxLimbLength
    static void _set_maxLimbLength(float value);
    // public System.Void .ctor(System.Single pin, System.Single pull, params UnityEngine.Transform[] nodeTransforms)
    // Offset: 0x1C9990C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBIKChain* New_ctor(float pin, float pull, ::Array<UnityEngine::Transform*>* nodeTransforms) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FBIKChain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBIKChain*, creationType>(pin, pull, nodeTransforms)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.Single pin, System.Single pull, params UnityEngine.Transform[] nodeTransforms)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBIKChain* New_ctor(float pin, float pull, std::initializer_list<UnityEngine::Transform*> nodeTransforms) {
      return New_ctor<creationType>(pin, pull, ::Array<UnityEngine::Transform*>::New(nodeTransforms));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.Single pin, System.Single pull, params UnityEngine.Transform[] nodeTransforms)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static FBIKChain* New_ctor(float pin, float pull, TParams&&... nodeTransforms) {
      return New_ctor<creationType>(pin, pull, {nodeTransforms...});
    }
    // public System.Void SetNodes(params UnityEngine.Transform[] boneTransforms)
    // Offset: 0x1C99A18
    void SetNodes(::Array<UnityEngine::Transform*>* boneTransforms);
    // Creating initializer_list -> params proxy for: System.Void SetNodes(params UnityEngine.Transform[] boneTransforms)
    void SetNodes(std::initializer_list<UnityEngine::Transform*> boneTransforms);
    // Creating TArgs -> initializer_list proxy for: System.Void SetNodes(params UnityEngine.Transform[] boneTransforms)
    template<class ...TParams>
    void SetNodes(TParams&&... boneTransforms) {
      SetNodes({boneTransforms...});
    }
    // public System.Int32 GetNodeIndex(UnityEngine.Transform boneTransform)
    // Offset: 0x1C99B3C
    int GetNodeIndex(UnityEngine::Transform* boneTransform);
    // public System.Boolean IsValid(ref System.String message)
    // Offset: 0x1C99C18
    bool IsValid(::Il2CppString*& message);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C99D1C
    void Initiate(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void ReadPose(RootMotion.FinalIK.IKSolverFullBody solver, System.Boolean fullBody)
    // Offset: 0x1C9A43C
    void ReadPose(RootMotion::FinalIK::IKSolverFullBody* solver, bool fullBody);
    // private System.Void CalculateBoneLengths(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C99EAC
    void CalculateBoneLengths(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void Reach(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C9AB28
    void Reach(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public UnityEngine.Vector3 Push(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C9AECC
    UnityEngine::Vector3 Push(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void SolveTrigonometric(RootMotion.FinalIK.IKSolverFullBody solver, System.Boolean calculateBendDirection)
    // Offset: 0x1C9B2B0
    void SolveTrigonometric(RootMotion::FinalIK::IKSolverFullBody* solver, bool calculateBendDirection);
    // public System.Void Stage1(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C9B834
    void Stage1(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void Stage2(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Vector3 position)
    // Offset: 0x1C9BE04
    void Stage2(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Vector3 position);
    // public System.Void SolveConstraintSystems(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C9C09C
    void SolveConstraintSystems(RootMotion::FinalIK::IKSolverFullBody* solver);
    // private UnityEngine.Vector3 SolveFABRIKJoint(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single length)
    // Offset: 0x1C9BCFC
    UnityEngine::Vector3 SolveFABRIKJoint(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float length);
    // protected UnityEngine.Vector3 GetDirToBendPoint(UnityEngine.Vector3 direction, UnityEngine.Vector3 bendDirection, System.Single directionMagnitude)
    // Offset: 0x1C9B61C
    UnityEngine::Vector3 GetDirToBendPoint(UnityEngine::Vector3 direction, UnityEngine::Vector3 bendDirection, float directionMagnitude);
    // private System.Void SolveChildConstraints(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x1C9BC84
    void SolveChildConstraints(RootMotion::FinalIK::IKSolverFullBody* solver);
    // private System.Void SolveLinearConstraint(RootMotion.FinalIK.IKSolver/Node node1, RootMotion.FinalIK.IKSolver/Node node2, System.Single crossFade, System.Single distance)
    // Offset: 0x1C9C184
    void SolveLinearConstraint(RootMotion::FinalIK::IKSolver::Node* node1, RootMotion::FinalIK::IKSolver::Node* node2, float crossFade, float distance);
    // public System.Void ForwardReach(UnityEngine.Vector3 position)
    // Offset: 0x1C9BBA4
    void ForwardReach(UnityEngine::Vector3 position);
    // private System.Void BackwardReach(UnityEngine.Vector3 position)
    // Offset: 0x1C9BF84
    void BackwardReach(UnityEngine::Vector3 position);
    // public System.Void .ctor()
    // Offset: 0x1C99840
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FBIKChain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::FBIKChain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FBIKChain*, creationType>()));
    }
  }; // RootMotion.FinalIK.FBIKChain
  #pragma pack(pop)
  static check_size<sizeof(FBIKChain), 128 + sizeof(float)> __RootMotion_FinalIK_FBIKChainSizeCheck;
  static_assert(sizeof(FBIKChain) == 0x84);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBIKChain*, "RootMotion.FinalIK", "FBIKChain");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBIKChain::Smoothing, "RootMotion.FinalIK", "FBIKChain/Smoothing");
