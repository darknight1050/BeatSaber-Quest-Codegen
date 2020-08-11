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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_LaunchApplicationFromMimeType
  class IVRApplications::_LaunchApplicationFromMimeType : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD2AE4
    static IVRApplications::_LaunchApplicationFromMimeType* New_ctor(::CsObject* object, System::IntPtr method);
    // public Valve.VR.EVRApplicationError Invoke(System.String pchMimeType, System.String pchArgs)
    // Offset: 0xFC5C78
    Valve::VR::EVRApplicationError Invoke(::CsString* pchMimeType, ::CsString* pchArgs);
    // public System.IAsyncResult BeginInvoke(System.String pchMimeType, System.String pchArgs, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD2AF8
    System::IAsyncResult* BeginInvoke(::CsString* pchMimeType, ::CsString* pchArgs, System::AsyncCallback* callback, ::CsObject* object);
    // public Valve.VR.EVRApplicationError EndInvoke(System.IAsyncResult result)
    // Offset: 0xFD2B28
    Valve::VR::EVRApplicationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_LaunchApplicationFromMimeType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_LaunchApplicationFromMimeType*, "Valve.VR", "IVRApplications/_LaunchApplicationFromMimeType");
#pragma pack(pop)
