// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.SetUpTearDownCommand
#include "UnityEngine/TestTools/SetUpTearDownCommand.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.SetUpTearDownCommand/<InvokeBefore>d__2
  // [CompilerGeneratedAttribute] Offset: E3C9B4
  class SetUpTearDownCommand::$InvokeBefore$d__2 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Reflection.MethodInfo action
    // Size: 0x8
    // Offset: 0x20
    System::Reflection::MethodInfo* action;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext context
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*) == 0x8);
    // Creating value type constructor for type: $InvokeBefore$d__2
    $InvokeBefore$d__2(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, System::Reflection::MethodInfo* action_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* context_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, action{action_}, context{context_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x149EA7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetUpTearDownCommand::$InvokeBefore$d__2* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetUpTearDownCommand::$InvokeBefore$d__2*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x149EDA0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x149EDA4
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x149EE64
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x149EE6C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x149EECC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.SetUpTearDownCommand/<InvokeBefore>d__2
  #pragma pack(pop)
  static check_size<sizeof(SetUpTearDownCommand::$InvokeBefore$d__2), 40 + sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext*)> __UnityEngine_TestTools_SetUpTearDownCommand_$InvokeBefore$d__2SizeCheck;
  static_assert(sizeof(SetUpTearDownCommand::$InvokeBefore$d__2) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::SetUpTearDownCommand::$InvokeBefore$d__2*, "UnityEngine.TestTools", "SetUpTearDownCommand/<InvokeBefore>d__2");
