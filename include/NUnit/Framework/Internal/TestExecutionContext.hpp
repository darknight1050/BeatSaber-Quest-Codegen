// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Compatibility.LongLivedMarshalByRefObject
#include "NUnit/Compatibility/LongLivedMarshalByRefObject.hpp"
// Including type: NUnit.Framework.Internal.ITestExecutionContext
#include "NUnit/Framework/Internal/ITestExecutionContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestListener
  class ITestListener;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: IPrincipal
  class IPrincipal;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework
namespace NUnit::Framework {
  // Forward declaring type: ITestAction
  class ITestAction;
}
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestExecutionContext
  class TestExecutionContext : public NUnit::Compatibility::LongLivedMarshalByRefObject, public NUnit::Framework::Internal::ITestExecutionContext {
    public:
    // private NUnit.Framework.Internal.TestExecutionContext _priorContext
    // Offset: 0x18
    NUnit::Framework::Internal::TestExecutionContext* priorContext;
    // private NUnit.Framework.Interfaces.ITestListener _listener
    // Offset: 0x20
    NUnit::Framework::Interfaces::ITestListener* listener;
    // private System.Int32 _assertCount
    // Offset: 0x28
    int assertCount;
    // private System.Globalization.CultureInfo _currentCulture
    // Offset: 0x30
    System::Globalization::CultureInfo* currentCulture;
    // private System.Globalization.CultureInfo _currentUICulture
    // Offset: 0x38
    System::Globalization::CultureInfo* currentUICulture;
    // private NUnit.Framework.Internal.TestResult _currentResult
    // Offset: 0x40
    NUnit::Framework::Internal::TestResult* currentResult;
    // private System.Security.Principal.IPrincipal _currentPrincipal
    // Offset: 0x48
    System::Security::Principal::IPrincipal* currentPrincipal;
    // Get static field: static private readonly System.String CONTEXT_KEY
    static ::CsString* _get_CONTEXT_KEY();
    // Set static field: static private readonly System.String CONTEXT_KEY
    static void _set_CONTEXT_KEY(::CsString* value);
    // private NUnit.Framework.Internal.Test <CurrentTest>k__BackingField
    // Offset: 0x50
    NUnit::Framework::Internal::Test* CurrentTest;
    // private System.IO.TextWriter <OutWriter>k__BackingField
    // Offset: 0x58
    System::IO::TextWriter* OutWriter;
    // private System.Object <TestObject>k__BackingField
    // Offset: 0x60
    ::CsObject* TestObject;
    // private System.Int32 <TestCaseTimeout>k__BackingField
    // Offset: 0x68
    int TestCaseTimeout;
    // private System.Collections.Generic.List`1<NUnit.Framework.ITestAction> <UpstreamActions>k__BackingField
    // Offset: 0x70
    System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* UpstreamActions;
    // private NUnit.Framework.Constraints.ValueFormatter <CurrentValueFormatter>k__BackingField
    // Offset: 0x78
    NUnit::Framework::Constraints::ValueFormatter* CurrentValueFormatter;
    // private System.Boolean <IsSingleThreaded>k__BackingField
    // Offset: 0x80
    bool IsSingleThreaded;
    // Get static field: static private NUnit.Framework.Constraints.ValueFormatter CS$<>9__CachedAnonymousMethodDelegate1
    static NUnit::Framework::Constraints::ValueFormatter* _get_CS$$$9__CachedAnonymousMethodDelegate1();
    // Set static field: static private NUnit.Framework.Constraints.ValueFormatter CS$<>9__CachedAnonymousMethodDelegate1
    static void _set_CS$$$9__CachedAnonymousMethodDelegate1(NUnit::Framework::Constraints::ValueFormatter* value);
    // static public NUnit.Framework.Internal.ITestExecutionContext get_CurrentContext()
    // Offset: 0x18D9234
    static NUnit::Framework::Internal::ITestExecutionContext* get_CurrentContext();
    // static public NUnit.Framework.Internal.TestExecutionContext GetTestExecutionContext()
    // Offset: 0x18D92E0
    static NUnit::Framework::Internal::TestExecutionContext* GetTestExecutionContext();
    // public NUnit.Framework.Internal.Test get_CurrentTest()
    // Offset: 0x18D9388
    NUnit::Framework::Internal::Test* get_CurrentTest();
    // private System.Void set_OutWriter(System.IO.TextWriter value)
    // Offset: 0x18D93EC
    void set_OutWriter(System::IO::TextWriter* value);
    // NUnit.Framework.Interfaces.ITestListener get_Listener()
    // Offset: 0x18D9404
    NUnit::Framework::Interfaces::ITestListener* get_Listener();
    // public System.Void set_TestCaseTimeout(System.Int32 value)
    // Offset: 0x18D940C
    void set_TestCaseTimeout(int value);
    // private System.Void set_UpstreamActions(System.Collections.Generic.List`1<NUnit.Framework.ITestAction> value)
    // Offset: 0x18D9414
    void set_UpstreamActions(System::Collections::Generic::List_1<NUnit::Framework::ITestAction*>* value);
    // private System.Void set_CurrentValueFormatter(NUnit.Framework.Constraints.ValueFormatter value)
    // Offset: 0x18D9424
    void set_CurrentValueFormatter(NUnit::Framework::Constraints::ValueFormatter* value);
    // public System.Void set_IsSingleThreaded(System.Boolean value)
    // Offset: 0x18D942C
    void set_IsSingleThreaded(bool value);
    // static private System.String <.ctor>b__0(System.Object val)
    // Offset: 0x18D944C
    static ::CsString* $_ctor$b__0(::CsObject* val);
    // static private System.Void .cctor()
    // Offset: 0x18D94C4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18D8FFC
    // Implemented from: NUnit.Compatibility.LongLivedMarshalByRefObject
    // Base method: System.Void LongLivedMarshalByRefObject::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static TestExecutionContext* New_ctor();
    // public NUnit.Framework.Internal.TestResult get_CurrentResult()
    // Offset: 0x18D9390
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: NUnit.Framework.Internal.TestResult ITestExecutionContext::get_CurrentResult()
    NUnit::Framework::Internal::TestResult* get_CurrentResult();
    // public System.Void set_CurrentResult(NUnit.Framework.Internal.TestResult value)
    // Offset: 0x18D9398
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Void ITestExecutionContext::set_CurrentResult(NUnit.Framework.Internal.TestResult value)
    void set_CurrentResult(NUnit::Framework::Internal::TestResult* value);
    // public System.IO.TextWriter get_OutWriter()
    // Offset: 0x18D93E4
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.IO.TextWriter ITestExecutionContext::get_OutWriter()
    System::IO::TextWriter* get_OutWriter();
    // public System.Object get_TestObject()
    // Offset: 0x18D93F4
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Object ITestExecutionContext::get_TestObject()
    ::CsObject* get_TestObject();
    // public System.Void set_TestObject(System.Object value)
    // Offset: 0x18D93FC
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Void ITestExecutionContext::set_TestObject(System.Object value)
    void set_TestObject(::CsObject* value);
    // public NUnit.Framework.Constraints.ValueFormatter get_CurrentValueFormatter()
    // Offset: 0x18D941C
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: NUnit.Framework.Constraints.ValueFormatter ITestExecutionContext::get_CurrentValueFormatter()
    NUnit::Framework::Constraints::ValueFormatter* get_CurrentValueFormatter();
    // public System.Void IncrementAssertCount()
    // Offset: 0x18D9438
    // Implemented from: NUnit.Framework.Internal.ITestExecutionContext
    // Base method: System.Void ITestExecutionContext::IncrementAssertCount()
    void IncrementAssertCount();
    // public override System.Object InitializeLifetimeService()
    // Offset: 0x18D9444
    // Implemented from: NUnit.Compatibility.LongLivedMarshalByRefObject
    // Base method: System.Object LongLivedMarshalByRefObject::InitializeLifetimeService()
    ::CsObject* InitializeLifetimeService();
  }; // NUnit.Framework.Internal.TestExecutionContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestExecutionContext*, "NUnit.Framework.Internal", "TestExecutionContext");
#pragma pack(pop)
