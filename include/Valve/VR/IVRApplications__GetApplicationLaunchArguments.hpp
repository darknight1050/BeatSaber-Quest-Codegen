// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationLaunchArguments
  class IVRApplications::_GetApplicationLaunchArguments : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD1E54
    static IVRApplications::_GetApplicationLaunchArguments* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.UInt32 unHandle, System.Text.StringBuilder pchArgs, System.UInt32 unArgs)
    // Offset: 0xFC98C0
    uint Invoke(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unHandle, System.Text.StringBuilder pchArgs, System.UInt32 unArgs, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD1E68
    System::IAsyncResult* BeginInvoke(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs, System::AsyncCallback* callback, ::CsObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0xFD1F18
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationLaunchArguments
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationLaunchArguments*, "Valve.VR", "IVRApplications/_GetApplicationLaunchArguments");
#pragma pack(pop)
