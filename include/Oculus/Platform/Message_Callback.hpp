// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Message/Callback
  class Message::Callback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xDFB880
    static Message::Callback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(Oculus.Platform.Message message)
    // Offset: 0xDF2BA0
    void Invoke(Oculus::Platform::Message* message);
    // public System.IAsyncResult BeginInvoke(Oculus.Platform.Message message, System.AsyncCallback callback, System.Object object)
    // Offset: 0xDFB894
    System::IAsyncResult* BeginInvoke(Oculus::Platform::Message* message, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xDFB8B8
    void EndInvoke(System::IAsyncResult* result);
  }; // Oculus.Platform.Message/Callback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Message::Callback*, "Oculus.Platform", "Message/Callback");
#pragma pack(pop)
