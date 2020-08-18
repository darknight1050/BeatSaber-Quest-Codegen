// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.ConstraintStatus
#include "NUnit/Framework/Constraints/ConstraintStatus.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: IConstraint
  class IConstraint;
  // Forward declaring type: MessageWriter
  class MessageWriter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.ConstraintResult
  class ConstraintResult : public ::Il2CppObject {
    public:
    // private NUnit.Framework.Constraints.IConstraint _constraint
    // Offset: 0x10
    NUnit::Framework::Constraints::IConstraint* constraint;
    // private System.Object <ActualValue>k__BackingField
    // Offset: 0x18
    ::Il2CppObject* ActualValue;
    // private NUnit.Framework.Constraints.ConstraintStatus <Status>k__BackingField
    // Offset: 0x20
    NUnit::Framework::Constraints::ConstraintStatus Status;
    // public System.Void .ctor(NUnit.Framework.Constraints.IConstraint constraint, System.Object actualValue)
    // Offset: 0xFD2730
    static ConstraintResult* New_ctor(NUnit::Framework::Constraints::IConstraint* constraint, ::Il2CppObject* actualValue);
    // public System.Void .ctor(NUnit.Framework.Constraints.IConstraint constraint, System.Object actualValue, System.Boolean isSuccess)
    // Offset: 0xFD2780
    static ConstraintResult* New_ctor(NUnit::Framework::Constraints::IConstraint* constraint, ::Il2CppObject* actualValue, bool isSuccess);
    // public System.Object get_ActualValue()
    // Offset: 0xFD27BC
    ::Il2CppObject* get_ActualValue();
    // private System.Void set_ActualValue(System.Object value)
    // Offset: 0xFD27C4
    void set_ActualValue(::Il2CppObject* value);
    // public NUnit.Framework.Constraints.ConstraintStatus get_Status()
    // Offset: 0xFD27CC
    NUnit::Framework::Constraints::ConstraintStatus get_Status();
    // public System.Void set_Status(NUnit.Framework.Constraints.ConstraintStatus value)
    // Offset: 0xFD27D4
    void set_Status(NUnit::Framework::Constraints::ConstraintStatus value);
    // public System.Boolean get_IsSuccess()
    // Offset: 0xFD27DC
    bool get_IsSuccess();
    // public System.String get_Description()
    // Offset: 0xFD27EC
    ::Il2CppString* get_Description();
    // public System.Void WriteMessageTo(NUnit.Framework.Constraints.MessageWriter writer)
    // Offset: 0xFD289C
    void WriteMessageTo(NUnit::Framework::Constraints::MessageWriter* writer);
    // public System.Void WriteActualValueTo(NUnit.Framework.Constraints.MessageWriter writer)
    // Offset: 0xFD28C8
    void WriteActualValueTo(NUnit::Framework::Constraints::MessageWriter* writer);
  }; // NUnit.Framework.Constraints.ConstraintResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ConstraintResult*, "NUnit.Framework.Constraints", "ConstraintResult");
#pragma pack(pop)
