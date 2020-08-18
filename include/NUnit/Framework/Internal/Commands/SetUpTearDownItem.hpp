// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Autogenerated type: NUnit.Framework.Internal.Commands.SetUpTearDownItem
  class SetUpTearDownItem : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.IList`1<System.Reflection.MethodInfo> _setUpMethods
    // Offset: 0x10
    System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* setUpMethods;
    // private System.Collections.Generic.IList`1<System.Reflection.MethodInfo> _tearDownMethods
    // Offset: 0x18
    System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* tearDownMethods;
    // private System.Boolean _setUpWasRun
    // Offset: 0x20
    bool setUpWasRun;
    // public System.Void .ctor(System.Collections.Generic.IList`1<System.Reflection.MethodInfo> setUpMethods, System.Collections.Generic.IList`1<System.Reflection.MethodInfo> tearDownMethods)
    // Offset: 0xFE5050
    static SetUpTearDownItem* New_ctor(System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* setUpMethods, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* tearDownMethods);
    // public System.Boolean get_HasMethods()
    // Offset: 0xFE50A0
    bool get_HasMethods();
    // public System.Void RunSetUp(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xFE43E8
    void RunSetUp(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public System.Void RunTearDown(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xFE4D2C
    void RunTearDown(NUnit::Framework::Internal::ITestExecutionContext* context);
    // private System.Void RunSetUpOrTearDownMethod(NUnit.Framework.Internal.ITestExecutionContext context, System.Reflection.MethodInfo method)
    // Offset: 0xFE51DC
    void RunSetUpOrTearDownMethod(NUnit::Framework::Internal::ITestExecutionContext* context, System::Reflection::MethodInfo* method);
    // private System.Object RunNonAsyncMethod(System.Reflection.MethodInfo method, NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xFE51EC
    ::Il2CppObject* RunNonAsyncMethod(System::Reflection::MethodInfo* method, NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.SetUpTearDownItem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::SetUpTearDownItem*, "NUnit.Framework.Internal.Commands", "SetUpTearDownItem");
#pragma pack(pop)
