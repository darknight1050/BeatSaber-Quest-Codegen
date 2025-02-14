// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskToApm
#include "System/Threading/Tasks/TaskToApm.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
  class TaskToApm::TaskWrapperAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // readonly System.Threading.Tasks.Task Task
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::Task* Task;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // private readonly System.Object m_state
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Boolean m_completedSynchronously
    // Size: 0x1
    // Offset: 0x20
    bool m_completedSynchronously;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TaskWrapperAsyncResult
    TaskWrapperAsyncResult(System::Threading::Tasks::Task* Task_ = {}, ::Il2CppObject* m_state_ = {}, bool m_completedSynchronously_ = {}) noexcept : Task{Task_}, m_state{m_state_}, m_completedSynchronously{m_completedSynchronously_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // System.Void .ctor(System.Threading.Tasks.Task task, System.Object state, System.Boolean completedSynchronously)
    // Offset: 0x1877F54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskToApm::TaskWrapperAsyncResult* New_ctor(System::Threading::Tasks::Task* task, ::Il2CppObject* state, bool completedSynchronously) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskToApm::TaskWrapperAsyncResult*, creationType>(task, state, completedSynchronously)));
    }
    // private System.Object System.IAsyncResult.get_AsyncState()
    // Offset: 0x187816C
    ::Il2CppObject* System_IAsyncResult_get_AsyncState();
    // private System.Boolean System.IAsyncResult.get_CompletedSynchronously()
    // Offset: 0x1878174
    bool System_IAsyncResult_get_CompletedSynchronously();
    // private System.Boolean System.IAsyncResult.get_IsCompleted()
    // Offset: 0x187817C
    bool System_IAsyncResult_get_IsCompleted();
    // private System.Threading.WaitHandle System.IAsyncResult.get_AsyncWaitHandle()
    // Offset: 0x1878198
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
  }; // System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(TaskToApm::TaskWrapperAsyncResult), 32 + sizeof(bool)> __System_Threading_Tasks_TaskToApm_TaskWrapperAsyncResultSizeCheck;
  static_assert(sizeof(TaskToApm::TaskWrapperAsyncResult) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult*, "System.Threading.Tasks", "TaskToApm/TaskWrapperAsyncResult");
