// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRScreenshots/_GetScreenshotPropertyType
  class IVRScreenshots::_GetScreenshotPropertyType : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B3ED8
    static IVRScreenshots::_GetScreenshotPropertyType* New_ctor(::CsObject* object, System::IntPtr method);
    // public Valve.VR.EVRScreenshotType Invoke(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotError pError)
    // Offset: 0x16B3EEC
    Valve::VR::EVRScreenshotType Invoke(uint screenshotHandle, Valve::VR::EVRScreenshotError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, Valve.VR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B417C
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, Valve::VR::EVRScreenshotError& pError, System::AsyncCallback* callback, ::CsObject* object);
    // public Valve.VR.EVRScreenshotType EndInvoke(Valve.VR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x16B4230
    Valve::VR::EVRScreenshotType EndInvoke(Valve::VR::EVRScreenshotError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/_GetScreenshotPropertyType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_GetScreenshotPropertyType*, "Valve.VR", "IVRScreenshots/_GetScreenshotPropertyType");
#pragma pack(pop)
