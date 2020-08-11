// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadStart
  class ThreadStart : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xCD32D4
    static ThreadStart* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke()
    // Offset: 0xCD3D5C
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0xCD68C4
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xCD68F0
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.ThreadStart
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadStart*, "System.Threading", "ThreadStart");
#pragma pack(pop)
