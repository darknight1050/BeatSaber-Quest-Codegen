// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.Task/WhenAllPromise`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class Task::WhenAllPromise_1 : public System::Threading::Tasks::Task_1<::Array<T>*>/*, public System::Threading::Tasks::ITaskCompletionAction*/ {
    public:
    // private readonly System.Threading.Tasks.Task`1<T>[] m_tasks
    // Size: 0x8
    // Offset: 0x0
    ::Array<System::Threading::Tasks::Task_1<T>*>* m_tasks;
    // Field size check
    static_assert(sizeof(::Array<System::Threading::Tasks::Task_1<T>*>*) == 0x8);
    // private System.Int32 m_count
    // Size: 0x4
    // Offset: 0x0
    int m_count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: WhenAllPromise_1
    WhenAllPromise_1(::Array<System::Threading::Tasks::Task_1<T>*>* m_tasks_ = {}, int m_count_ = {}) noexcept : m_tasks{m_tasks_}, m_count{m_count_} {}
    // Creating interface conversion operator: operator System::Threading::Tasks::ITaskCompletionAction
    operator System::Threading::Tasks::ITaskCompletionAction() noexcept {
      return *reinterpret_cast<System::Threading::Tasks::ITaskCompletionAction*>(this);
    }
    // System.Void .ctor(System.Threading.Tasks.Task`1<T>[] tasks)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Task::WhenAllPromise_1<T>* New_ctor(::Array<System::Threading::Tasks::Task_1<T>*>* tasks) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Task::WhenAllPromise_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Task::WhenAllPromise_1<T>*, creationType>(tasks)));
    }
    // public System.Void Invoke(System.Threading.Tasks.Task ignored)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Threading.Tasks.ITaskCompletionAction
    // Base method: System.Void ITaskCompletionAction::Invoke(System.Threading.Tasks.Task ignored)
    void Invoke(System::Threading::Tasks::Task* ignored) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Task::WhenAllPromise_1::Invoke");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(ignored)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, ignored);
    }
    // Creating proxy method: System_Threading_Tasks_ITaskCompletionAction_Invoke
    // Maps to method: Invoke
    void System_Threading_Tasks_ITaskCompletionAction_Invoke(System::Threading::Tasks::Task* ignored) {
      Invoke(ignored);
    }
    // override System.Boolean get_ShouldNotifyDebuggerOfWaitCompletion()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Threading.Tasks.Task
    // Base method: System.Boolean Task::get_ShouldNotifyDebuggerOfWaitCompletion()
    bool get_ShouldNotifyDebuggerOfWaitCompletion() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::Task::WhenAllPromise_1::get_ShouldNotifyDebuggerOfWaitCompletion");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_ShouldNotifyDebuggerOfWaitCompletion", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
  }; // System.Threading.Tasks.Task/WhenAllPromise`1
  // Could not write size check! Type: System.Threading.Tasks.Task/WhenAllPromise`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::Task::WhenAllPromise_1, "System.Threading.Tasks", "Task/WhenAllPromise`1");
