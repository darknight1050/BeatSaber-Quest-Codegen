// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/FailCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand/<ExecuteEnumerable>d__4
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D44C60
  class FailCommand::$ExecuteEnumerable$d__4 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: context
    char __padding2[0x4] = {};
    // private NUnit.Framework.Internal.ITestExecutionContext context
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Internal::ITestExecutionContext* context;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand <>4__this
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand*) == 0x8);
    // Creating value type constructor for type: $ExecuteEnumerable$d__4
    $ExecuteEnumerable$d__4(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, int $$l__initialThreadId_ = {}, NUnit::Framework::Internal::ITestExecutionContext* context_ = {}, NUnit::Framework::Internal::ITestExecutionContext* $$3__context_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, context{context_}, $$3__context{$$3__context_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1344380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FailCommand::$ExecuteEnumerable$d__4* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::$ExecuteEnumerable$d__4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FailCommand::$ExecuteEnumerable$d__4*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x13443B8
    void System_IDisposable_Dispose_NEW();
    // private System.Boolean MoveNext()
    // Offset: 0x13443BC
    bool MoveNext_NEW();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x13444C4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x13444CC
    void System_Collections_IEnumerator_Reset_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x134452C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0x1344534
    System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator_NEW();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x13445E8
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator_NEW();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand/<ExecuteEnumerable>d__4
  #pragma pack(pop)
  static check_size<sizeof(FailCommand::$ExecuteEnumerable$d__4), 56 + sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_FailCommand_$ExecuteEnumerable$d__4SizeCheck;
  static_assert(sizeof(FailCommand::$ExecuteEnumerable$d__4) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::$ExecuteEnumerable$d__4*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "FailCommand/<ExecuteEnumerable>d__4");
