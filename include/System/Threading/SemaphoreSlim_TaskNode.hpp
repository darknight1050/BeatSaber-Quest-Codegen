// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.SemaphoreSlim
#include "System/Threading/SemaphoreSlim.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.SemaphoreSlim/TaskNode
  class SemaphoreSlim::TaskNode : public System::Threading::IThreadPoolWorkItem, public System::Threading::Tasks::Task_1<bool> {
    public:
    // System.Threading.SemaphoreSlim/TaskNode Prev
    // Offset: 0x58
    System::Threading::SemaphoreSlim::TaskNode* Prev;
    // System.Threading.SemaphoreSlim/TaskNode Next
    // Offset: 0x60
    System::Threading::SemaphoreSlim::TaskNode* Next;
    // System.Void .ctor()
    // Offset: 0xC37FB4
    // Implemented from: System.Threading.Tasks.Task`1
    // Base method: System.Void Task`1::.ctor()
    // Base method: System.Void Task::.ctor()
    // Base method: System.Void Object::.ctor()
    static SemaphoreSlim::TaskNode* New_ctor();
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0xC39384
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::ExecuteWorkItem()
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0xC393D8
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::MarkAborted(System.Threading.ThreadAbortException tae)
    void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae);
  }; // System.Threading.SemaphoreSlim/TaskNode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SemaphoreSlim::TaskNode*, "System.Threading", "SemaphoreSlim/TaskNode");
#pragma pack(pop)
