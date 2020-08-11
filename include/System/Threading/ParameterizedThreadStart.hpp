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
  // Autogenerated type: System.Threading.ParameterizedThreadStart
  class ParameterizedThreadStart : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x13C6CC8
    static ParameterizedThreadStart* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object obj)
    // Offset: 0x13C6CDC
    void Invoke(::CsObject* obj);
    // public System.IAsyncResult BeginInvoke(System.Object obj, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13C7094
    System::IAsyncResult* BeginInvoke(::CsObject* obj, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x13C70B8
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.ParameterizedThreadStart
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ParameterizedThreadStart*, "System.Threading", "ParameterizedThreadStart");
#pragma pack(pop)
