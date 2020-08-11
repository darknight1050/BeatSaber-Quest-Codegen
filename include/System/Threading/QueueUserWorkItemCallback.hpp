// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.QueueUserWorkItemCallback
  class QueueUserWorkItemCallback : public ::CsObject, public System::Threading::IThreadPoolWorkItem {
    public:
    // private System.Threading.WaitCallback callback
    // Offset: 0x10
    System::Threading::WaitCallback* callback;
    // private System.Threading.ExecutionContext context
    // Offset: 0x18
    System::Threading::ExecutionContext* context;
    // private System.Object state
    // Offset: 0x20
    ::CsObject* state;
    // Get static field: static System.Threading.ContextCallback ccb
    static System::Threading::ContextCallback* _get_ccb();
    // Set static field: static System.Threading.ContextCallback ccb
    static void _set_ccb(System::Threading::ContextCallback* value);
    // static private System.Void .cctor()
    // Offset: 0xCC2D88
    static void _cctor();
    // System.Void .ctor(System.Threading.WaitCallback waitCallback, System.Object stateObj, System.Boolean compressStack, System.Threading.StackCrawlMark stackMark)
    // Offset: 0xCC2E08
    static QueueUserWorkItemCallback* New_ctor(System::Threading::WaitCallback* waitCallback, ::CsObject* stateObj, bool compressStack, System::Threading::StackCrawlMark& stackMark);
    // static private System.Void WaitCallback_Context(System.Object state)
    // Offset: 0xCC33B0
    static void WaitCallback_Context(::CsObject* state);
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0xCC2F0C
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::ExecuteWorkItem()
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0xCC33AC
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::MarkAborted(System.Threading.ThreadAbortException tae)
    void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae);
  }; // System.Threading.QueueUserWorkItemCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::QueueUserWorkItemCallback*, "System.Threading", "QueueUserWorkItemCallback");
#pragma pack(pop)
