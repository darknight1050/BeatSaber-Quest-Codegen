// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots/_RequestScreenshot
#include "OVR/OpenVR/IVRScreenshots__RequestScreenshot.hpp"
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
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_RequestScreenshot..ctor
OVR::OpenVR::IVRScreenshots::_RequestScreenshot* OVR::OpenVR::IVRScreenshots::_RequestScreenshot::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRScreenshots::_RequestScreenshot*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRScreenshots/_RequestScreenshot", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_RequestScreenshot.Invoke
OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots::_RequestScreenshot::Invoke(uint& pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::CsString* pchPreviewFilename, ::CsString* pchVRFilename) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRScreenshotError>(this, "Invoke", pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename));
}
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_RequestScreenshot.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRScreenshots::_RequestScreenshot::BeginInvoke(uint& pOutScreenshotHandle, OVR::OpenVR::EVRScreenshotType type, ::CsString* pchPreviewFilename, ::CsString* pchVRFilename, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_RequestScreenshot.EndInvoke
OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots::_RequestScreenshot::EndInvoke(uint& pOutScreenshotHandle, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRScreenshotError>(this, "EndInvoke", pOutScreenshotHandle, result));
}
