// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandaloneMonobehavior
#include "GlobalNamespace/StandaloneMonobehavior.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: StandaloneMonobehavior/<RunAsyncCoroutine>d__19
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D055B0
  class StandaloneMonobehavior::$RunAsyncCoroutine$d__19 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x20
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // public StandaloneMonobehavior <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::StandaloneMonobehavior* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandaloneMonobehavior*) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> tcs
    // Size: 0x8
    // Offset: 0x30
    System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*) == 0x8);
    // Creating value type constructor for type: $RunAsyncCoroutine$d__19
    $RunAsyncCoroutine$d__19(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::StandaloneMonobehavior* $$4__this_ = {}, System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, cancellationToken{cancellationToken_}, $$4__this{$$4__this_}, tcs{tcs_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x15CA994
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandaloneMonobehavior::$RunAsyncCoroutine$d__19* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__19::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneMonobehavior::$RunAsyncCoroutine$d__19*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x15CAA98
    void System_IDisposable_Dispose_NEW();
    // private System.Boolean MoveNext()
    // Offset: 0x15CAA9C
    bool MoveNext_NEW();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x15CAB7C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current_NEW();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x15CAB84
    void System_Collections_IEnumerator_Reset_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x15CABE4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
  }; // StandaloneMonobehavior/<RunAsyncCoroutine>d__19
  #pragma pack(pop)
  static check_size<sizeof(StandaloneMonobehavior::$RunAsyncCoroutine$d__19), 48 + sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*)> __GlobalNamespace_StandaloneMonobehavior_$RunAsyncCoroutine$d__19SizeCheck;
  static_assert(sizeof(StandaloneMonobehavior::$RunAsyncCoroutine$d__19) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandaloneMonobehavior::$RunAsyncCoroutine$d__19*, "", "StandaloneMonobehavior/<RunAsyncCoroutine>d__19");
