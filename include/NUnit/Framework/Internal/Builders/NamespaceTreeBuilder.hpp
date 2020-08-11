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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Autogenerated type: NUnit.Framework.Internal.Builders.NamespaceTreeBuilder
  class NamespaceTreeBuilder : public ::CsObject {
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,NUnit.Framework.Internal.TestSuite> namespaceSuites
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::CsString*, NUnit::Framework::Internal::TestSuite*>* namespaceSuites;
    // private NUnit.Framework.Internal.TestSuite rootSuite
    // Offset: 0x18
    NUnit::Framework::Internal::TestSuite* rootSuite;
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite rootSuite)
    // Offset: 0x105DA70
    static NamespaceTreeBuilder* New_ctor(NUnit::Framework::Internal::TestSuite* rootSuite);
    // public NUnit.Framework.Internal.TestSuite get_RootSuite()
    // Offset: 0x105DDC0
    NUnit::Framework::Internal::TestSuite* get_RootSuite();
    // public System.Void Add(System.Collections.Generic.IList`1<NUnit.Framework.Internal.Test> fixtures)
    // Offset: 0x105DB08
    void Add(System::Collections::Generic::IList_1<NUnit::Framework::Internal::Test*>* fixtures);
    // public System.Void Add(NUnit.Framework.Internal.TestSuite fixture)
    // Offset: 0x1070F68
    void Add(NUnit::Framework::Internal::TestSuite* fixture);
    // static private System.String GetNamespaceForFixture(NUnit.Framework.Internal.TestSuite fixture)
    // Offset: 0x1071038
    static ::CsString* GetNamespaceForFixture(NUnit::Framework::Internal::TestSuite* fixture);
    // private NUnit.Framework.Internal.TestSuite BuildFromNameSpace(System.String ns)
    // Offset: 0x1071154
    NUnit::Framework::Internal::TestSuite* BuildFromNameSpace(::CsString* ns);
    // private System.Void AddSetUpFixture(NUnit.Framework.Internal.TestSuite newSetupFixture, NUnit.Framework.Internal.TestSuite containingSuite, System.String ns)
    // Offset: 0x107131C
    void AddSetUpFixture(NUnit::Framework::Internal::TestSuite* newSetupFixture, NUnit::Framework::Internal::TestSuite* containingSuite, ::CsString* ns);
  }; // NUnit.Framework.Internal.Builders.NamespaceTreeBuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::NamespaceTreeBuilder*, "NUnit.Framework.Internal.Builders", "NamespaceTreeBuilder");
#pragma pack(pop)
