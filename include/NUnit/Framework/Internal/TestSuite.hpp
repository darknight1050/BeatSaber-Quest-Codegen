// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITest because it is already included!
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: TNode
  class TNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestSuite
  class TestSuite : public NUnit::Framework::Internal::Test {
    public:
    // Writing base type padding for base size: 0x75 to desired offset: 0x78
    char ___base_padding[0x3] = {};
    // private System.Collections.Generic.List`1<NUnit.Framework.Interfaces.ITest> tests
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>* tests;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE04A28
    // [CompilerGeneratedAttribute] Offset: 0xE04A28
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    ::Array<::Il2CppObject*>* Arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE04A64
    // [CompilerGeneratedAttribute] Offset: 0xE04A64
    // private System.Boolean <MaintainTestOrder>k__BackingField
    // Size: 0x1
    // Offset: 0x88
    bool MaintainTestOrder;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TestSuite
    TestSuite(System::Collections::Generic::List_1<NUnit::Framework::Interfaces::ITest*>* tests_ = {}, ::Array<::Il2CppObject*>* Arguments_ = {}, bool MaintainTestOrder_ = {}) noexcept : tests{tests_}, Arguments{Arguments_}, MaintainTestOrder{MaintainTestOrder_} {}
    // public System.Void Sort()
    // Offset: 0x229971C
    void Sort();
    // public System.Void Add(NUnit.Framework.Internal.Test test)
    // Offset: 0x2299A10
    void Add(NUnit::Framework::Internal::Test* test);
    // public System.Object[] get_Arguments()
    // Offset: 0x2299D54
    ::Array<::Il2CppObject*>* get_Arguments();
    // System.Void set_Arguments(System.Object[] value)
    // Offset: 0x2299D5C
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // protected System.Boolean get_MaintainTestOrder()
    // Offset: 0x2299D64
    bool get_MaintainTestOrder();
    // protected System.Void set_MaintainTestOrder(System.Boolean value)
    // Offset: 0x2299D6C
    void set_MaintainTestOrder(bool value);
    // protected System.Void CheckSetUpTearDownMethods(System.Type attrType)
    // Offset: 0x22957FC
    void CheckSetUpTearDownMethods(System::Type* attrType);
    // public System.Void .ctor(System.String name)
    // Offset: 0x2294420
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuite* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuite*, creationType>(name)));
    }
    // public System.Void .ctor(System.String parentSuiteName, System.String name)
    // Offset: 0x229125C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(System.String parentSuiteName, System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuite* New_ctor(::Il2CppString* parentSuiteName, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuite*, creationType>(parentSuiteName, name)));
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    // Offset: 0x2295744
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestSuite* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* fixtureType) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestSuite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestSuite*, creationType>(fixtureType)));
    }
    // public override System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0x2299A80
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> Test::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public override System.Int32 get_TestCaseCount()
    // Offset: 0x2299A88
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Int32 Test::get_TestCaseCount()
    int get_TestCaseCount();
    // public override NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0x2299D78
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Internal.TestResult Test::MakeTestResult()
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x2299E7C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Boolean Test::get_HasChildren()
    bool get_HasChildren();
    // public override System.String get_XmlElementName()
    // Offset: 0x2299ED4
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_XmlElementName()
    ::Il2CppString* get_XmlElementName();
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x2299F1C
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Interfaces.TNode Test::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Internal.TestSuite
  #pragma pack(pop)
  static check_size<sizeof(TestSuite), 136 + sizeof(bool)> __NUnit_Framework_Internal_TestSuiteSizeCheck;
  static_assert(sizeof(TestSuite) == 0x89);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestSuite*, "NUnit.Framework.Internal", "TestSuite");
