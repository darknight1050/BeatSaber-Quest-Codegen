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
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestAssembly
  class TestAssembly;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ICustomAttributeProvider
  class ICustomAttributeProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.ActionsHelper
  class ActionsHelper : public ::CsObject {
    public:
    // static public NUnit.Framework.ITestAction[] GetActionsFromTestAssembly(NUnit.Framework.Internal.TestAssembly testAssembly)
    // Offset: 0x106BF6C
    static ::Array<NUnit::Framework::ITestAction*>* GetActionsFromTestAssembly(NUnit::Framework::Internal::TestAssembly* testAssembly);
    // static public NUnit.Framework.ITestAction[] GetActionsFromTestMethodInfo(NUnit.Framework.Interfaces.IMethodInfo testAssembly)
    // Offset: 0x106C168
    static ::Array<NUnit::Framework::ITestAction*>* GetActionsFromTestMethodInfo(NUnit::Framework::Interfaces::IMethodInfo* testAssembly);
    // static public NUnit.Framework.ITestAction[] GetActionsFromAttributeProvider(System.Reflection.ICustomAttributeProvider attributeProvider)
    // Offset: 0x106BF8C
    static ::Array<NUnit::Framework::ITestAction*>* GetActionsFromAttributeProvider(System::Reflection::ICustomAttributeProvider* attributeProvider);
    // static public NUnit.Framework.ITestAction[] GetActionsFromTypesAttributes(System.Type type)
    // Offset: 0x106C21C
    static ::Array<NUnit::Framework::ITestAction*>* GetActionsFromTypesAttributes(System::Type* type);
    // static private System.Type[] GetDeclaredInterfaces(System.Type type)
    // Offset: 0x106C3B4
    static ::Array<System::Type*>* GetDeclaredInterfaces(System::Type* type);
    // static private System.Int32 SortByTargetDescending(NUnit.Framework.ITestAction x, NUnit.Framework.ITestAction y)
    // Offset: 0x106C62C
    static int SortByTargetDescending(NUnit::Framework::ITestAction* x, NUnit::Framework::ITestAction* y);
  }; // NUnit.Framework.Internal.ActionsHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ActionsHelper*, "NUnit.Framework.Internal", "ActionsHelper");
#pragma pack(pop)
