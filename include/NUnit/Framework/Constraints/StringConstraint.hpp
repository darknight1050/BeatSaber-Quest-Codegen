// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.Constraint
#include "NUnit/Framework/Constraints/Constraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.StringConstraint
  class StringConstraint : public NUnit::Framework::Constraints::Constraint {
    public:
    // protected System.String expected
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* expected;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.Boolean caseInsensitive
    // Size: 0x1
    // Offset: 0x38
    bool caseInsensitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: caseInsensitive and: descriptionText
    char __padding1[0x7] = {};
    // protected System.String descriptionText
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* descriptionText;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: StringConstraint
    StringConstraint(::Il2CppString* expected_ = {}, bool caseInsensitive_ = {}, ::Il2CppString* descriptionText_ = {}) noexcept : expected{expected_}, caseInsensitive{caseInsensitive_}, descriptionText{descriptionText_} {}
    // protected System.Void .ctor(System.String expected)
    // Offset: 0x1716058
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringConstraint* New_ctor(::Il2CppString* expected) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::StringConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringConstraint*, creationType>(expected)));
    }
    // protected System.Boolean Matches(System.String actual)
    // Offset: 0xFFFFFFFF
    bool Matches(::Il2CppString* actual);
    // public override System.String get_Description()
    // Offset: 0x1716624
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: System.String Constraint::get_Description()
    ::Il2CppString* get_Description();
    // public override NUnit.Framework.Constraints.ConstraintResult ApplyTo(System.Object actual)
    // Offset: 0x17166E4
    // Implemented from: NUnit.Framework.Constraints.Constraint
    // Base method: NUnit.Framework.Constraints.ConstraintResult Constraint::ApplyTo(System.Object actual)
    NUnit::Framework::Constraints::ConstraintResult* ApplyTo(::Il2CppObject* actual);
  }; // NUnit.Framework.Constraints.StringConstraint
  #pragma pack(pop)
  static check_size<sizeof(StringConstraint), 64 + sizeof(::Il2CppString*)> __NUnit_Framework_Constraints_StringConstraintSizeCheck;
  static_assert(sizeof(StringConstraint) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::StringConstraint*, "NUnit.Framework.Constraints", "StringConstraint");
