// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKEffector
  class IKEffector : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform bone
    // Offset: 0x10
    UnityEngine::Transform* bone;
    // public UnityEngine.Transform target
    // Offset: 0x18
    UnityEngine::Transform* target;
    // public System.Single positionWeight
    // Offset: 0x20
    float positionWeight;
    // public System.Single rotationWeight
    // Offset: 0x24
    float rotationWeight;
    // public UnityEngine.Vector3 position
    // Offset: 0x28
    UnityEngine::Vector3 position;
    // public UnityEngine.Quaternion rotation
    // Offset: 0x34
    UnityEngine::Quaternion rotation;
    // public UnityEngine.Vector3 positionOffset
    // Offset: 0x44
    UnityEngine::Vector3 positionOffset;
    // private System.Boolean <isEndEffector>k__BackingField
    // Offset: 0x50
    bool isEndEffector;
    // public System.Boolean effectChildNodes
    // Offset: 0x51
    bool effectChildNodes;
    // public System.Single maintainRelativePositionWeight
    // Offset: 0x54
    float maintainRelativePositionWeight;
    // public UnityEngine.Transform[] childBones
    // Offset: 0x58
    ::Array<UnityEngine::Transform*>* childBones;
    // public UnityEngine.Transform planeBone1
    // Offset: 0x60
    UnityEngine::Transform* planeBone1;
    // public UnityEngine.Transform planeBone2
    // Offset: 0x68
    UnityEngine::Transform* planeBone2;
    // public UnityEngine.Transform planeBone3
    // Offset: 0x70
    UnityEngine::Transform* planeBone3;
    // public UnityEngine.Quaternion planeRotationOffset
    // Offset: 0x78
    UnityEngine::Quaternion planeRotationOffset;
    // private System.Single posW
    // Offset: 0x88
    float posW;
    // private System.Single rotW
    // Offset: 0x8C
    float rotW;
    // private UnityEngine.Vector3[] localPositions
    // Offset: 0x90
    ::Array<UnityEngine::Vector3>* localPositions;
    // private System.Boolean usePlaneNodes
    // Offset: 0x98
    bool usePlaneNodes;
    // private UnityEngine.Quaternion animatedPlaneRotation
    // Offset: 0x9C
    UnityEngine::Quaternion animatedPlaneRotation;
    // private UnityEngine.Vector3 animatedPosition
    // Offset: 0xAC
    UnityEngine::Vector3 animatedPosition;
    // private System.Boolean firstUpdate
    // Offset: 0xB8
    bool firstUpdate;
    // private System.Int32 chainIndex
    // Offset: 0xBC
    int chainIndex;
    // private System.Int32 nodeIndex
    // Offset: 0xC0
    int nodeIndex;
    // private System.Int32 plane1ChainIndex
    // Offset: 0xC4
    int plane1ChainIndex;
    // private System.Int32 plane1NodeIndex
    // Offset: 0xC8
    int plane1NodeIndex;
    // private System.Int32 plane2ChainIndex
    // Offset: 0xCC
    int plane2ChainIndex;
    // private System.Int32 plane2NodeIndex
    // Offset: 0xD0
    int plane2NodeIndex;
    // private System.Int32 plane3ChainIndex
    // Offset: 0xD4
    int plane3ChainIndex;
    // private System.Int32 plane3NodeIndex
    // Offset: 0xD8
    int plane3NodeIndex;
    // private System.Int32[] childChainIndexes
    // Offset: 0xE0
    ::Array<int>* childChainIndexes;
    // private System.Int32[] childNodeIndexes
    // Offset: 0xE8
    ::Array<int>* childNodeIndexes;
    // public RootMotion.FinalIK.IKSolver/Node GetNode(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x12DB040
    RootMotion::FinalIK::IKSolver::Node* GetNode(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Boolean get_isEndEffector()
    // Offset: 0x12DB0A8
    bool get_isEndEffector();
    // private System.Void set_isEndEffector(System.Boolean value)
    // Offset: 0x12DB0B0
    void set_isEndEffector(bool value);
    // public System.Void PinToBone(System.Single positionWeight, System.Single rotationWeight)
    // Offset: 0x12DB0BC
    void PinToBone(float positionWeight, float rotationWeight);
    // public System.Void .ctor(UnityEngine.Transform bone, UnityEngine.Transform[] childBones)
    // Offset: 0x12DB2FC
    static IKEffector* New_ctor(UnityEngine::Transform* bone, ::Array<UnityEngine::Transform*>* childBones);
    // public System.Boolean IsValid(RootMotion.FinalIK.IKSolver solver, System.String message)
    // Offset: 0x12DB4A4
    bool IsValid(RootMotion::FinalIK::IKSolver* solver, ::Il2CppString*& message);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x12DB7A0
    void Initiate(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void ResetOffset(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x12DBA78
    void ResetOffset(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void SetToTarget()
    // Offset: 0x12DBBB8
    void SetToTarget();
    // public System.Void OnPreSolve(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x12DBC64
    void OnPreSolve(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void OnPostWrite()
    // Offset: 0x12DC2B8
    void OnPostWrite();
    // private UnityEngine.Quaternion GetPlaneRotation(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x12DC328
    UnityEngine::Quaternion GetPlaneRotation(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void Update(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x12DC540
    void Update(RootMotion::FinalIK::IKSolverFullBody* solver);
    // private UnityEngine.Vector3 GetPosition(RootMotion.FinalIK.IKSolverFullBody solver, UnityEngine.Quaternion planeRotationOffset)
    // Offset: 0x12DC888
    UnityEngine::Vector3 GetPosition(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Quaternion& planeRotationOffset);
    // public System.Void .ctor()
    // Offset: 0x12DB190
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IKEffector* New_ctor();
  }; // RootMotion.FinalIK.IKEffector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKEffector*, "RootMotion.FinalIK", "IKEffector");
#pragma pack(pop)
