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
  // Size: 0x6D
  // Autogenerated type: RootMotion.FinalIK.ConstraintRotationOffset
  // [] Offset: FFFFFFFF
  class ConstraintRotationOffset : public RootMotion::FinalIK::Constraint {
    public:
    // public UnityEngine.Quaternion offset
    // Size: 0x10
    // Offset: 0x1C
    UnityEngine::Quaternion offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion defaultRotation
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Quaternion defaultRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x3C
    UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion lastLocalRotation
    // Size: 0x10
    // Offset: 0x4C
    UnityEngine::Quaternion lastLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion defaultTargetLocalRotation
    // Size: 0x10
    // Offset: 0x5C
    UnityEngine::Quaternion defaultTargetLocalRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x6C
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ConstraintRotationOffset
    ConstraintRotationOffset(UnityEngine::Quaternion offset_ = {}, UnityEngine::Quaternion defaultRotation_ = {}, UnityEngine::Quaternion defaultLocalRotation_ = {}, UnityEngine::Quaternion lastLocalRotation_ = {}, UnityEngine::Quaternion defaultTargetLocalRotation_ = {}, bool initiated_ = {}) noexcept : offset{offset_}, defaultRotation{defaultRotation_}, defaultLocalRotation{defaultLocalRotation_}, lastLocalRotation{lastLocalRotation_}, defaultTargetLocalRotation{defaultTargetLocalRotation_}, initiated{initiated_} {}
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x174D8AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintRotationOffset* New_ctor(UnityEngine::Transform* transform) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintRotationOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintRotationOffset*, creationType>(transform)));
    }
    // private System.Boolean get_rotationChanged()
    // Offset: 0x174D7D4
    bool get_rotationChanged();
    // public override System.Void UpdateConstraint()
    // Offset: 0x174D634
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
    // public System.Void .ctor()
    // Offset: 0x174D8A4
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintRotationOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::ConstraintRotationOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintRotationOffset*, creationType>()));
    }
  }; // RootMotion.FinalIK.ConstraintRotationOffset
  static check_size<sizeof(ConstraintRotationOffset), 108 + sizeof(bool)> __RootMotion_FinalIK_ConstraintRotationOffsetSizeCheck;
  static_assert(sizeof(ConstraintRotationOffset) == 0x6D);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintRotationOffset*, "RootMotion.FinalIK", "ConstraintRotationOffset");
#pragma pack(pop)
