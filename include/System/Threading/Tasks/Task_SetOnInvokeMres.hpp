// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
// Including type: System.Threading.ManualResetEventSlim
#include "System/Threading/ManualResetEventSlim.hpp"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.Task/SetOnInvokeMres
  class Task::SetOnInvokeMres : public System::Threading::Tasks::ITaskCompletionAction, public System::Threading::ManualResetEventSlim {
    public:
    // System.Void .ctor()
    // Offset: 0xC41730
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Task::SetOnInvokeMres* New_ctor();
    // public System.Void Invoke(System.Threading.Tasks.Task completingTask)
    // Offset: 0xC434D8
    // Implemented from: System.Threading.Tasks.ITaskCompletionAction
    // Base method: System.Void ITaskCompletionAction::Invoke(System.Threading.Tasks.Task completingTask)
    void Invoke(System::Threading::Tasks::Task* completingTask);
    // Creating proxy method: System_Threading_Tasks_ITaskCompletionAction_Invoke
    // Maps to method: Invoke
    void System_Threading_Tasks_ITaskCompletionAction_Invoke(System::Threading::Tasks::Task* completingTask);
  }; // System.Threading.Tasks.Task/SetOnInvokeMres
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::SetOnInvokeMres*, "System.Threading.Tasks", "Task/SetOnInvokeMres");
#pragma pack(pop)
