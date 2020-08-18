// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Constraint
#include "RootMotion/FinalIK/Constraint.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
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
  // Autogenerated type: RootMotion.FinalIK.ConstraintPositionOffset
  class ConstraintPositionOffset : public RootMotion::FinalIK::Constraint {
    public:
    // public UnityEngine.Vector3 offset
    // Offset: 0x1C
    UnityEngine::Vector3 offset;
    // private UnityEngine.Vector3 defaultLocalPosition
    // Offset: 0x28
    UnityEngine::Vector3 defaultLocalPosition;
    // private UnityEngine.Vector3 lastLocalPosition
    // Offset: 0x34
    UnityEngine::Vector3 lastLocalPosition;
    // private System.Boolean initiated
    // Offset: 0x40
    bool initiated;
    // public System.Void .ctor(UnityEngine.Transform transform)
    // Offset: 0x1308EC4
    static ConstraintPositionOffset* New_ctor(UnityEngine::Transform* transform);
    // private System.Boolean get_positionChanged()
    // Offset: 0x1308E00
    bool get_positionChanged();
    // public override System.Void UpdateConstraint()
    // Offset: 0x1308C64
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::UpdateConstraint()
    void UpdateConstraint();
    // public System.Void .ctor()
    // Offset: 0x1308EBC
    // Implemented from: RootMotion.FinalIK.Constraint
    // Base method: System.Void Constraint::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConstraintPositionOffset* New_ctor();
  }; // RootMotion.FinalIK.ConstraintPositionOffset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintPositionOffset*, "RootMotion.FinalIK", "ConstraintPositionOffset");
#pragma pack(pop)
