// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.WindowsPlatform
  class WindowsPlatform : public ::CsObject {
    public:
    // Nested type: Oculus::Platform::WindowsPlatform::UnityLogDelegate
    class UnityLogDelegate;
    // private System.Void CPPLogCallback(System.IntPtr tag, System.IntPtr message)
    // Offset: 0x1951604
    void CPPLogCallback(System::IntPtr tag, System::IntPtr message);
    // private System.IntPtr getCallbackPointer()
    // Offset: 0x19516DC
    System::IntPtr getCallbackPointer();
    // public System.Boolean Initialize(System.String appId)
    // Offset: 0x195171C
    bool Initialize(::CsString* appId);
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.String appId)
    // Offset: 0x1951800
    Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::CsString* appId);
    // public System.Void .ctor()
    // Offset: 0x1951914
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WindowsPlatform* New_ctor();
  }; // Oculus.Platform.WindowsPlatform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::WindowsPlatform*, "Oculus.Platform", "WindowsPlatform");
#pragma pack(pop)
