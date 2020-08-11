// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Framework.Interfaces.IXmlNodeBuilder
#include "NUnit/Framework/Interfaces/IXmlNodeBuilder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
  // Forward declaring type: RunState
  struct RunState;
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ITest
  class ITest : public NUnit::Framework::Interfaces::IXmlNodeBuilder {
    public:
    // public System.String get_Id()
    // Offset: 0xFFFFFFFF
    ::CsString* get_Id();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::CsString* get_Name();
    // public System.String get_FullName()
    // Offset: 0xFFFFFFFF
    ::CsString* get_FullName();
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // public NUnit.Framework.Interfaces.IMethodInfo get_Method()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::IMethodInfo* get_Method();
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Int32 get_TestCaseCount()
    // Offset: 0xFFFFFFFF
    int get_TestCaseCount();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // public NUnit.Framework.Interfaces.ITest get_Parent()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITest* get_Parent();
    // public System.Boolean get_IsSuite()
    // Offset: 0xFFFFFFFF
    bool get_IsSuite();
    // public System.Boolean get_HasChildren()
    // Offset: 0xFFFFFFFF
    bool get_HasChildren();
    // public System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
  }; // NUnit.Framework.Interfaces.ITest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITest*, "NUnit.Framework.Interfaces", "ITest");
#pragma pack(pop)
