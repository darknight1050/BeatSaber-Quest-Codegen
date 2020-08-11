// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots/_SubmitScreenshot
#include "OVR/OpenVR/IVRScreenshots__SubmitScreenshot.hpp"
// Including type: OVR.OpenVR.EVRScreenshotError
#include "OVR/OpenVR/EVRScreenshotError.hpp"
// Including type: OVR.OpenVR.EVRScreenshotType
#include "OVR/OpenVR/EVRScreenshotType.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_SubmitScreenshot..ctor
OVR::OpenVR::IVRScreenshots::_SubmitScreenshot* OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRScreenshots::_SubmitScreenshot*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRScreenshots/_SubmitScreenshot", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_SubmitScreenshot.Invoke
OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::Invoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::CsString* pchSourcePreviewFilename, ::CsString* pchSourceVRFilename) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRScreenshotError>(this, "Invoke", screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename));
}
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_SubmitScreenshot.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::BeginInvoke(uint screenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::CsString* pchSourcePreviewFilename, ::CsString* pchSourceVRFilename, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", screenshotHandle, type, pchSourcePreviewFilename, pchSourceVRFilename, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_SubmitScreenshot.EndInvoke
OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots::_SubmitScreenshot::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRScreenshotError>(this, "EndInvoke", result));
}
