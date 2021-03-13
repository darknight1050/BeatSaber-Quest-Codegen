// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.PathConstraint
#include "NUnit/Framework/Constraints/PathConstraint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.SamePathConstraint
  // [] Offset: FFFFFFFF
  class SamePathConstraint : public NUnit::Framework::Constraints::PathConstraint {
    public:
    // Creating value type constructor for type: SamePathConstraint
    SamePathConstraint() noexcept {}
    // public System.Void .ctor(System.String expected)
    // Offset: 0x15A6518
    // Implemented from: NUnit.Framework.Constraints.PathConstraint
    // Base method: System.Void PathConstraint::.ctor(System.String expected)
    // Base method: System.Void StringConstraint::.ctor(System.String expected)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SamePathConstraint* New_ctor(::Il2CppString* expected) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::SamePathConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SamePathConstraint*, creationType>(expected)));
    }
    // public override System.String get_Description()
    // Offset: 0x15A7DFC
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.String StringConstraint::get_Description()
    ::Il2CppString* get_Description();
    // protected override System.Boolean Matches(System.String actual)
    // Offset: 0x15A7E80
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.Boolean StringConstraint::Matches_NEW(System.String actual)
    bool Matches(::Il2CppString* actual);
  }; // NUnit.Framework.Constraints.SamePathConstraint
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::SamePathConstraint*, "NUnit.Framework.Constraints", "SamePathConstraint");
