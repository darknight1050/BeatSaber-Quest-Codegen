// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: EqualConstraint
  class EqualConstraint;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.Is
  class Is : public ::CsObject {
    public:
    // static public NUnit.Framework.Constraints.EqualConstraint EqualTo(System.Object expected)
    // Offset: 0x18E1D0C
    static NUnit::Framework::Constraints::EqualConstraint* EqualTo(::CsObject* expected);
  }; // NUnit.Framework.Is
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Is*, "NUnit.Framework", "Is");
#pragma pack(pop)
