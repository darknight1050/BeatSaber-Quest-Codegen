// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Randomizer
  class Randomizer;
  // Forward declaring type: TestNameGenerator
  class TestNameGenerator;
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestCaseParameters
  class TestCaseParameters;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder
  // [] Offset: FFFFFFFF
  class NUnitTestCaseBuilder : public ::Il2CppObject {
    public:
    // private readonly NUnit.Framework.Internal.Randomizer _randomizer
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::Randomizer* randomizer;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::Randomizer*) == 0x8);
    // private readonly NUnit.Framework.Internal.TestNameGenerator _nameGenerator
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::TestNameGenerator* nameGenerator;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestNameGenerator*) == 0x8);
    // Creating value type constructor for type: NUnitTestCaseBuilder
    NUnitTestCaseBuilder(NUnit::Framework::Internal::Randomizer* randomizer_ = {}, NUnit::Framework::Internal::TestNameGenerator* nameGenerator_ = {}) noexcept : randomizer{randomizer_}, nameGenerator{nameGenerator_} {}
    // public NUnit.Framework.Internal.TestMethod BuildTestMethod(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite, NUnit.Framework.Internal.TestCaseParameters parms)
    // Offset: 0x159BC78
    NUnit::Framework::Internal::TestMethod* BuildTestMethod(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite, NUnit::Framework::Internal::TestCaseParameters* parms);
    // static private System.Boolean CheckTestMethodSignature(NUnit.Framework.Internal.TestMethod testMethod, NUnit.Framework.Internal.TestCaseParameters parms)
    // Offset: 0x15AC5F0
    static bool CheckTestMethodSignature(NUnit::Framework::Internal::TestMethod* testMethod, NUnit::Framework::Internal::TestCaseParameters* parms);
    // static private System.Boolean MarkAsNotRunnable(NUnit.Framework.Internal.TestMethod testMethod, System.String reason)
    // Offset: 0x15ACE04
    static bool MarkAsNotRunnable(NUnit::Framework::Internal::TestMethod* testMethod, ::Il2CppString* reason);
    // public System.Void .ctor()
    // Offset: 0x159B544
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NUnitTestCaseBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NUnitTestCaseBuilder*, creationType>()));
    }
  }; // NUnit.Framework.Internal.Builders.NUnitTestCaseBuilder
  #pragma pack(pop)
  static check_size<sizeof(NUnitTestCaseBuilder), 24 + sizeof(NUnit::Framework::Internal::TestNameGenerator*)> __NUnit_Framework_Internal_Builders_NUnitTestCaseBuilderSizeCheck;
  static_assert(sizeof(NUnitTestCaseBuilder) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::NUnitTestCaseBuilder*, "NUnit.Framework.Internal.Builders", "NUnitTestCaseBuilder");
