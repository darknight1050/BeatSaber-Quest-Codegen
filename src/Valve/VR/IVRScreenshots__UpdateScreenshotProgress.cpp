// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots/_UpdateScreenshotProgress
#include "Valve/VR/IVRScreenshots__UpdateScreenshotProgress.hpp"
// Including type: Valve.VR.EVRScreenshotError
#include "Valve/VR/EVRScreenshotError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRScreenshots/_UpdateScreenshotProgress..ctor
Valve::VR::IVRScreenshots::_UpdateScreenshotProgress* Valve::VR::IVRScreenshots::_UpdateScreenshotProgress::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRScreenshots::_UpdateScreenshotProgress*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRScreenshots/_UpdateScreenshotProgress", object, method));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_UpdateScreenshotProgress.Invoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_UpdateScreenshotProgress::Invoke(uint screenshotHandle, float flProgress) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "Invoke", screenshotHandle, flProgress));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_UpdateScreenshotProgress.BeginInvoke
System::IAsyncResult* Valve::VR::IVRScreenshots::_UpdateScreenshotProgress::BeginInvoke(uint screenshotHandle, float flProgress, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", screenshotHandle, flProgress, callback, object));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_UpdateScreenshotProgress.EndInvoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_UpdateScreenshotProgress::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "EndInvoke", result));
}
