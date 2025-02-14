// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: TrueConstraint
  class TrueConstraint;
  // Forward declaring type: EqualConstraint
  class EqualConstraint;
  // Forward declaring type: GreaterThanOrEqualConstraint
  class GreaterThanOrEqualConstraint;
  // Forward declaring type: LessThanOrEqualConstraint
  class LessThanOrEqualConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Is
  class Is : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Is
    Is() noexcept {}
    // static public NUnit.Framework.Constraints.TrueConstraint get_True()
    // Offset: 0x229CDA8
    static NUnit::Framework::Constraints::TrueConstraint* get_True();
    // static public NUnit.Framework.Constraints.EqualConstraint EqualTo(System.Object expected)
    // Offset: 0x229CE04
    static NUnit::Framework::Constraints::EqualConstraint* EqualTo(::Il2CppObject* expected);
    // static public NUnit.Framework.Constraints.GreaterThanOrEqualConstraint GreaterThanOrEqualTo(System.Object expected)
    // Offset: 0x229CE68
    static NUnit::Framework::Constraints::GreaterThanOrEqualConstraint* GreaterThanOrEqualTo(::Il2CppObject* expected);
    // static public NUnit.Framework.Constraints.LessThanOrEqualConstraint LessThanOrEqualTo(System.Object expected)
    // Offset: 0x229CECC
    static NUnit::Framework::Constraints::LessThanOrEqualConstraint* LessThanOrEqualTo(::Il2CppObject* expected);
  }; // NUnit.Framework.Is
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Is*, "NUnit.Framework", "Is");
