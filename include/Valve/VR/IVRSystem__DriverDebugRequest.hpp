// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_DriverDebugRequest
  class IVRSystem::_DriverDebugRequest : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16288E4
    static IVRSystem::_DriverDebugRequest* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.UInt32 unDeviceIndex, System.String pchRequest, System.Text.StringBuilder pchResponseBuffer, System.UInt32 unResponseBufferSize)
    // Offset: 0x16288F8
    uint Invoke(uint unDeviceIndex, ::Il2CppString* pchRequest, System::Text::StringBuilder* pchResponseBuffer, uint unResponseBufferSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, System.String pchRequest, System.Text.StringBuilder pchResponseBuffer, System.UInt32 unResponseBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1628BC0
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, ::Il2CppString* pchRequest, System::Text::StringBuilder* pchResponseBuffer, uint unResponseBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1628C74
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_DriverDebugRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_DriverDebugRequest*, "Valve.VR", "IVRSystem/_DriverDebugRequest");
#pragma pack(pop)
