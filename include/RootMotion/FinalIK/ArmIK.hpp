// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverArm
  class IKSolverArm;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  // Autogenerated type: RootMotion.FinalIK.ArmIK
  // [] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: DB4858
  // [AddComponentMenu] Offset: DB4858
  class ArmIK : public RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // public RootMotion.FinalIK.IKSolverArm solver
    // Size: 0x8
    // Offset: 0x38
    RootMotion::FinalIK::IKSolverArm* solver;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverArm*) == 0x8);
    // Creating value type constructor for type: ArmIK
    ArmIK(RootMotion::FinalIK::IKSolverArm* solver_ = {}) noexcept : solver{solver_} {}
    // private System.Void SupportGroup()
    // Offset: 0x174B6AC
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x174B6F8
    void ASThread();
    // protected override System.Void OpenUserManual()
    // Offset: 0x174B614
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x174B660
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x174B744
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    RootMotion::FinalIK::IKSolver* GetIKSolver();
    // public System.Void .ctor()
    // Offset: 0x174B74C
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArmIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ArmIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArmIK*, creationType>()));
    }
  }; // RootMotion.FinalIK.ArmIK
  static check_size<sizeof(ArmIK), 56 + sizeof(RootMotion::FinalIK::IKSolverArm*)> __RootMotion_FinalIK_ArmIKSizeCheck;
  static_assert(sizeof(ArmIK) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ArmIK*, "RootMotion.FinalIK", "ArmIK");
#pragma pack(pop)
