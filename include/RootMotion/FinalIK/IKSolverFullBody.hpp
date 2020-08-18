// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FBIKChain
  class FBIKChain;
  // Forward declaring type: IKEffector
  class IKEffector;
  // Forward declaring type: IKMappingSpine
  class IKMappingSpine;
  // Forward declaring type: IKMappingBone
  class IKMappingBone;
  // Forward declaring type: IKMappingLimb
  class IKMappingLimb;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverFullBody
  class IKSolverFullBody : public RootMotion::FinalIK::IKSolver {
    public:
    // public System.Int32 iterations
    // Offset: 0x58
    int iterations;
    // public RootMotion.FinalIK.FBIKChain[] chain
    // Offset: 0x60
    ::Array<RootMotion::FinalIK::FBIKChain*>* chain;
    // public RootMotion.FinalIK.IKEffector[] effectors
    // Offset: 0x68
    ::Array<RootMotion::FinalIK::IKEffector*>* effectors;
    // public RootMotion.FinalIK.IKMappingSpine spineMapping
    // Offset: 0x70
    RootMotion::FinalIK::IKMappingSpine* spineMapping;
    // public RootMotion.FinalIK.IKMappingBone[] boneMappings
    // Offset: 0x78
    ::Array<RootMotion::FinalIK::IKMappingBone*>* boneMappings;
    // public RootMotion.FinalIK.IKMappingLimb[] limbMappings
    // Offset: 0x80
    ::Array<RootMotion::FinalIK::IKMappingLimb*>* limbMappings;
    // public System.Boolean FABRIKPass
    // Offset: 0x88
    bool FABRIKPass;
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPreRead
    // Offset: 0x90
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreRead;
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPreSolve
    // Offset: 0x98
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreSolve;
    // public RootMotion.FinalIK.IKSolver/IterationDelegate OnPreIteration
    // Offset: 0xA0
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration;
    // public RootMotion.FinalIK.IKSolver/IterationDelegate OnPostIteration
    // Offset: 0xA8
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPostIteration;
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPreBend
    // Offset: 0xB0
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreBend;
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnPostSolve
    // Offset: 0xB8
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostSolve;
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnStoreDefaultLocalState
    // Offset: 0xC0
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnStoreDefaultLocalState;
    // public RootMotion.FinalIK.IKSolver/UpdateDelegate OnFixTransforms
    // Offset: 0xC8
    RootMotion::FinalIK::IKSolver::UpdateDelegate* OnFixTransforms;
    // public RootMotion.FinalIK.IKEffector GetEffector(UnityEngine.Transform t)
    // Offset: 0x12A4398
    RootMotion::FinalIK::IKEffector* GetEffector(UnityEngine::Transform* t);
    // public RootMotion.FinalIK.FBIKChain GetChain(UnityEngine.Transform transform)
    // Offset: 0x12A448C
    RootMotion::FinalIK::FBIKChain* GetChain(UnityEngine::Transform* transform);
    // public System.Int32 GetChainIndex(UnityEngine.Transform transform)
    // Offset: 0x12A44E8
    int GetChainIndex(UnityEngine::Transform* transform);
    // public RootMotion.FinalIK.IKSolver/Node GetNode(System.Int32 chainIndex, System.Int32 nodeIndex)
    // Offset: 0x12A461C
    RootMotion::FinalIK::IKSolver::Node* GetNode(int chainIndex, int nodeIndex);
    // public System.Void GetChainAndNodeIndexes(UnityEngine.Transform transform, System.Int32 chainIndex, System.Int32 nodeIndex)
    // Offset: 0x12A4678
    void GetChainAndNodeIndexes(UnityEngine::Transform* transform, int& chainIndex, int& nodeIndex);
    // protected System.Void ReadPose()
    // Offset: 0x12A5110
    void ReadPose();
    // protected System.Void Solve()
    // Offset: 0x12A535C
    void Solve();
    // protected System.Void ApplyBendConstraints()
    // Offset: 0x12A5634
    void ApplyBendConstraints();
    // protected System.Void WritePose()
    // Offset: 0x12A5678
    void WritePose();
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x12A46F8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x12A48A8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Boolean IsValid(System.String message)
    // Offset: 0x12A4A1C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(System.String message)
    bool IsValid(::Il2CppString*& message);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x12A4C24
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x12A4CF8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x12A4DE0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x12A4F54
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x12A5768
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    static IKSolverFullBody* New_ctor();
  }; // RootMotion.FinalIK.IKSolverFullBody
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFullBody*, "RootMotion.FinalIK", "IKSolverFullBody");
#pragma pack(pop)
