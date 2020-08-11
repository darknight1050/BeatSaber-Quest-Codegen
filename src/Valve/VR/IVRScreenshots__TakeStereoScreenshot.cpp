// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots/_TakeStereoScreenshot
#include "Valve/VR/IVRScreenshots__TakeStereoScreenshot.hpp"
// Including type: Valve.VR.EVRScreenshotError
#include "Valve/VR/EVRScreenshotError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRScreenshots/_TakeStereoScreenshot..ctor
Valve::VR::IVRScreenshots::_TakeStereoScreenshot* Valve::VR::IVRScreenshots::_TakeStereoScreenshot::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRScreenshots::_TakeStereoScreenshot*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRScreenshots/_TakeStereoScreenshot", object, method));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_TakeStereoScreenshot.Invoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_TakeStereoScreenshot::Invoke(uint& pOutScreenshotHandle, ::CsString* pchPreviewFilename, ::CsString* pchVRFilename) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "Invoke", pOutScreenshotHandle, pchPreviewFilename, pchVRFilename));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_TakeStereoScreenshot.BeginInvoke
System::IAsyncResult* Valve::VR::IVRScreenshots::_TakeStereoScreenshot::BeginInvoke(uint& pOutScreenshotHandle, ::CsString* pchPreviewFilename, ::CsString* pchVRFilename, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pOutScreenshotHandle, pchPreviewFilename, pchVRFilename, callback, object));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_TakeStereoScreenshot.EndInvoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_TakeStereoScreenshot::EndInvoke(uint& pOutScreenshotHandle, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "EndInvoke", pOutScreenshotHandle, result));
}
