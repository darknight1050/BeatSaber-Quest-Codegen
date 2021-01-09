// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x1C
  // Autogenerated type: RootMotion.FinalIK.Constraint
  // [] Offset: FFFFFFFF
  class Constraint : public ::Il2CppObject {
    public:
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Constraint
    Constraint(UnityEngine::Transform* transform_ = {}, float weight_ = {}) noexcept : transform{transform_}, weight{weight_} {}
    // public System.Boolean get_isValid()
    // Offset: 0x174D07C
    bool get_isValid();
    // public System.Void UpdateConstraint()
    // Offset: 0xFFFFFFFF
    void UpdateConstraint();
    // protected System.Void .ctor()
    // Offset: 0x174D0EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Constraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Constraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Constraint*, creationType>()));
    }
  }; // RootMotion.FinalIK.Constraint
  static check_size<sizeof(Constraint), 24 + sizeof(float)> __RootMotion_FinalIK_ConstraintSizeCheck;
  static_assert(sizeof(Constraint) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Constraint*, "RootMotion.FinalIK", "Constraint");
#pragma pack(pop)
