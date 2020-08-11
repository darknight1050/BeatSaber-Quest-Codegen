// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.IOAsyncResult
  class IOAsyncResult : public ::CsObject, public System::IAsyncResult {
    public:
    // private System.AsyncCallback async_callback
    // Offset: 0x10
    System::AsyncCallback* async_callback;
    // private System.Object async_state
    // Offset: 0x18
    ::CsObject* async_state;
    // private System.Threading.ManualResetEvent wait_handle
    // Offset: 0x20
    System::Threading::ManualResetEvent* wait_handle;
    // private System.Boolean completed_synchronously
    // Offset: 0x28
    bool completed_synchronously;
    // private System.Boolean completed
    // Offset: 0x29
    bool completed;
    // protected System.Void .ctor(System.AsyncCallback async_callback, System.Object async_state)
    // Offset: 0xF522B0
    static IOAsyncResult* New_ctor(System::AsyncCallback* async_callback, ::CsObject* async_state);
    // public System.AsyncCallback get_AsyncCallback()
    // Offset: 0xF52300
    System::AsyncCallback* get_AsyncCallback();
    // protected System.Void set_CompletedSynchronously(System.Boolean value)
    // Offset: 0xF5241C
    void set_CompletedSynchronously(bool value);
    // public System.Boolean get_IsCompleted()
    // Offset: 0xF52428
    bool get_IsCompleted();
    // protected System.Void set_IsCompleted(System.Boolean value)
    // Offset: 0xF52430
    void set_IsCompleted(bool value);
    // System.Void CompleteDisposed()
    // Offset: 0xFFFFFFFF
    void CompleteDisposed();
    // public System.Object get_AsyncState()
    // Offset: 0xF52308
    // Implemented from: System.IAsyncResult
    // Base method: System.Object IAsyncResult::get_AsyncState()
    ::CsObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0xF52310
    // Implemented from: System.IAsyncResult
    // Base method: System.Threading.WaitHandle IAsyncResult::get_AsyncWaitHandle()
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // Creating proxy method: System_IAsyncResult_get_AsyncWaitHandle
    // Maps to method: get_AsyncWaitHandle
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
  }; // System.IOAsyncResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IOAsyncResult*, "System", "IOAsyncResult");
#pragma pack(pop)
