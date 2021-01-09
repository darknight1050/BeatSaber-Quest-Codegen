// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TaskExtensions
#include "GlobalNamespace/TaskExtensions.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: TaskExtensions/<>c__DisplayClass0_0`1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA9B74
  template<typename T>
  class TaskExtensions::$$c__DisplayClass0_0_1 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<T> tcs
    // Size: 0x8
    // Offset: 0x0
    System::Threading::Tasks::TaskCompletionSource_1<T>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<T>*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x0
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0_1
    $$c__DisplayClass0_0_1(System::Threading::Tasks::TaskCompletionSource_1<T>* tcs_ = {}, System::Threading::CancellationToken cancellationToken_ = {}) noexcept : tcs{tcs_}, cancellationToken{cancellationToken_} {}
    // System.Void <WithCancellation>b__0()
    // Offset: 0xFFFFFFFF
    void $WithCancellation$b__0() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1::<WithCancellation>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<WithCancellation>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskExtensions::$$c__DisplayClass0_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskExtensions::$$c__DisplayClass0_0_1<T>*, creationType>()));
    }
  }; // TaskExtensions/<>c__DisplayClass0_0`1
  // Could not write size check! Type: TaskExtensions/<>c__DisplayClass0_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::TaskExtensions::$$c__DisplayClass0_0_1, "", "TaskExtensions/<>c__DisplayClass0_0`1");
