// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverHeuristic
#include "RootMotion/FinalIK/IKSolverHeuristic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverCCD
  class IKSolverCCD : public RootMotion::FinalIK::IKSolverHeuristic {
    public:
    // public RootMotion.FinalIK.IKSolver/IterationDelegate OnPreIteration
    // Size: 0x8
    // Offset: 0x88
    RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // Creating value type constructor for type: IKSolverCCD
    IKSolverCCD(RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration_ = {}) noexcept : OnPreIteration{OnPreIteration_} {}
    // Creating conversion operator: operator RootMotion::FinalIK::IKSolver::IterationDelegate*
    constexpr operator RootMotion::FinalIK::IKSolver::IterationDelegate*() const noexcept {
      return OnPreIteration;
    }
    // public System.Void FadeOutBoneWeights()
    // Offset: 0x1BD7924
    void FadeOutBoneWeights();
    // protected System.Void Solve(UnityEngine.Vector3 targetPosition)
    // Offset: 0x1BD8734
    void Solve(UnityEngine::Vector3 targetPosition);
    // protected override System.Void OnInitiate()
    // Offset: 0x1BD79D4
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1BD7FD4
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1BD8E98
    // Implemented from: RootMotion.FinalIK.IKSolverHeuristic
    // Base method: System.Void IKSolverHeuristic::.ctor()
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverCCD* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverCCD::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverCCD*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverCCD
  #pragma pack(pop)
  static check_size<sizeof(IKSolverCCD), 136 + sizeof(RootMotion::FinalIK::IKSolver::IterationDelegate*)> __RootMotion_FinalIK_IKSolverCCDSizeCheck;
  static_assert(sizeof(IKSolverCCD) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverCCD*, "RootMotion.FinalIK", "IKSolverCCD");
