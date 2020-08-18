// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.SolverManager
#include "RootMotion/SolverManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IK
  class IK : public RootMotion::SolverManager {
    public:
    // public RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0xFFFFFFFF
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // protected System.Void OpenUserManual()
    // Offset: 0xFFFFFFFF
    void OpenUserManual();
    // protected System.Void OpenScriptReference()
    // Offset: 0xFFFFFFFF
    void OpenScriptReference();
    // protected override System.Void UpdateSolver()
    // Offset: 0x12D97F0
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // protected override System.Void InitiateSolver()
    // Offset: 0x12D98E4
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void FixTransforms()
    // Offset: 0x12D9AB4
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
    // protected System.Void .ctor()
    // Offset: 0x12CC120
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static IK* New_ctor();
  }; // RootMotion.FinalIK.IK
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IK*, "RootMotion.FinalIK", "IK");
#pragma pack(pop)
