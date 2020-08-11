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
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationSupportedMimeTypes
  class IVRApplications::_GetApplicationSupportedMimeTypes : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD22EC
    static IVRApplications::_GetApplicationSupportedMimeTypes* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.String pchAppKey, System.Text.StringBuilder pchMimeTypesBuffer, System.UInt32 unMimeTypesBuffer)
    // Offset: 0xFC902C
    bool Invoke(::CsString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.Text.StringBuilder pchMimeTypesBuffer, System.UInt32 unMimeTypesBuffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD2300
    System::IAsyncResult* BeginInvoke(::CsString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xFD23A0
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationSupportedMimeTypes
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationSupportedMimeTypes*, "Valve.VR", "IVRApplications/_GetApplicationSupportedMimeTypes");
#pragma pack(pop)
