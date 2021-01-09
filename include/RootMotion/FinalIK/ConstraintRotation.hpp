// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Constraint
#include "RootMotion/FinalIK/Constraint.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Size: 0x2C
  // Autogenerated type: RootMotion.FinalIK.ConstraintRotation
  // [] Offset: FFFFFFFF
  class ConstraintRotation : public RootMotion::FinalIK::Constraint {
    public:
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: ConstraintRotation
    ConstraintRotation(UnityEngine::Quaternion rotation_ = {}) noexcept : rotation{rotation_} {}
    // Creating conversion operator: operator UnityEngine::Quaternion
    constexpr operator UnityEngine::Quaternion() const noexcept {
      return rotation;
    }
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x174D600
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintRotation* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintRotation*, creationType>(transform)));
    }
    // public override System.Void UpdateConstraint()
    // Offset: 0x174D4D0
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
    // public System.Void .ctor()
    // Offset: 0x174D5F8
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintRotation*, creationType>()));
    }
  }; // RootMotion.FinalIK.ConstraintRotation
  static check_size<sizeof(ConstraintRotation), 28 + sizeof(UnityEngine::Quaternion)> __RootMotion_FinalIK_ConstraintRotationSizeCheck;
  static_assert(sizeof(ConstraintRotation) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintRotation*, "RootMotion.FinalIK", "ConstraintRotation");
#pragma pack(pop)
