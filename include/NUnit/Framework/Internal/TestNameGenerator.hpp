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
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator
  class TestNameGenerator : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::NameFragment
    class NameFragment;
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::TestIDFragment
    class TestIDFragment;
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::FixedTextFragment
    class FixedTextFragment;
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::MethodNameFragment
    class MethodNameFragment;
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::NamespaceFragment
    class NamespaceFragment;
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::MethodFullNameFragment
    class MethodFullNameFragment;
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::ClassNameFragment
    class ClassNameFragment;
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::ClassFullNameFragment
    class ClassFullNameFragment;
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::ArgListFragment
    class ArgListFragment;
    // Nested type: NUnit::Framework::Internal::TestNameGenerator::ArgumentFragment
    class ArgumentFragment;
    // private System.String _pattern
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* pattern;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment> _fragments
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<NUnit::Framework::Internal::TestNameGenerator::NameFragment*>* fragments;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Internal::TestNameGenerator::NameFragment*>*) == 0x8);
    // Creating value type constructor for type: TestNameGenerator
    TestNameGenerator(::Il2CppString* pattern_ = {}, System::Collections::Generic::List_1<NUnit::Framework::Internal::TestNameGenerator::NameFragment*>* fragments_ = {}) noexcept : pattern{pattern_}, fragments{fragments_} {}
    // Get static field: static public System.String DefaultTestNamePattern
    static ::Il2CppString* _get_DefaultTestNamePattern();
    // Set static field: static public System.String DefaultTestNamePattern
    static void _set_DefaultTestNamePattern(::Il2CppString* value);
    // public System.Void .ctor(System.String pattern)
    // Offset: 0x2295ED4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestNameGenerator* New_ctor(::Il2CppString* pattern) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestNameGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestNameGenerator*, creationType>(pattern)));
    }
    // public System.String GetDisplayName(NUnit.Framework.Internal.TestMethod testMethod, System.Object[] args)
    // Offset: 0x2295F00
    ::Il2CppString* GetDisplayName(NUnit::Framework::Internal::TestMethod* testMethod, ::Array<::Il2CppObject*>* args);
    // static private System.Collections.Generic.List`1<NUnit.Framework.Internal.TestNameGenerator/NameFragment> BuildFragmentList(System.String pattern)
    // Offset: 0x2296098
    static System::Collections::Generic::List_1<NUnit::Framework::Internal::TestNameGenerator::NameFragment*>* BuildFragmentList(::Il2CppString* pattern);
    // static private System.Void .cctor()
    // Offset: 0x2296878
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2295E58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestNameGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestNameGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestNameGenerator*, creationType>()));
    }
  }; // NUnit.Framework.Internal.TestNameGenerator
  #pragma pack(pop)
  static check_size<sizeof(TestNameGenerator), 24 + sizeof(System::Collections::Generic::List_1<NUnit::Framework::Internal::TestNameGenerator::NameFragment*>*)> __NUnit_Framework_Internal_TestNameGeneratorSizeCheck;
  static_assert(sizeof(TestNameGenerator) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator*, "NUnit.Framework.Internal", "TestNameGenerator");
