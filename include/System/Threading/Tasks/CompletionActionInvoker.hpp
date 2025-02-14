// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: ITaskCompletionAction
  class ITaskCompletionAction;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.CompletionActionInvoker
  class CompletionActionInvoker : public ::Il2CppObject/*, public System::Threading::IThreadPoolWorkItem*/ {
    public:
    // private readonly System.Threading.Tasks.ITaskCompletionAction m_action
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::ITaskCompletionAction* m_action;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::ITaskCompletionAction*) == 0x8);
    // private readonly System.Threading.Tasks.Task m_completingTask
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::Task* m_completingTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // Creating value type constructor for type: CompletionActionInvoker
    CompletionActionInvoker(System::Threading::Tasks::ITaskCompletionAction* m_action_ = {}, System::Threading::Tasks::Task* m_completingTask_ = {}) noexcept : m_action{m_action_}, m_completingTask{m_completingTask_} {}
    // Creating interface conversion operator: operator System::Threading::IThreadPoolWorkItem
    operator System::Threading::IThreadPoolWorkItem() noexcept {
      return *reinterpret_cast<System::Threading::IThreadPoolWorkItem*>(this);
    }
    // System.Void .ctor(System.Threading.Tasks.ITaskCompletionAction action, System.Threading.Tasks.Task completingTask)
    // Offset: 0x189B728
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompletionActionInvoker* New_ctor(System::Threading::Tasks::ITaskCompletionAction* action, System::Threading::Tasks::Task* completingTask) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::CompletionActionInvoker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompletionActionInvoker*, creationType>(action, completingTask)));
    }
    // public System.Void ExecuteWorkItem()
    // Offset: 0x189B760
    void ExecuteWorkItem();
    // public System.Void MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0x189B818
    void MarkAborted(System::Threading::ThreadAbortException* tae);
  }; // System.Threading.Tasks.CompletionActionInvoker
  #pragma pack(pop)
  static check_size<sizeof(CompletionActionInvoker), 24 + sizeof(System::Threading::Tasks::Task*)> __System_Threading_Tasks_CompletionActionInvokerSizeCheck;
  static_assert(sizeof(CompletionActionInvoker) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::CompletionActionInvoker*, "System.Threading.Tasks", "CompletionActionInvoker");
