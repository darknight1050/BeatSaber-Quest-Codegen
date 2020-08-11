// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput/_SetActionManifestPath
#include "OVR/OpenVR/IVRInput__SetActionManifestPath.hpp"
// Including type: OVR.OpenVR.EVRInputError
#include "OVR/OpenVR/EVRInputError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRInput/_SetActionManifestPath..ctor
OVR::OpenVR::IVRInput::_SetActionManifestPath* OVR::OpenVR::IVRInput::_SetActionManifestPath::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRInput::_SetActionManifestPath*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRInput/_SetActionManifestPath", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_SetActionManifestPath.Invoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_SetActionManifestPath::Invoke(::CsString* pchActionManifestPath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "Invoke", pchActionManifestPath));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_SetActionManifestPath.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRInput::_SetActionManifestPath::BeginInvoke(::CsString* pchActionManifestPath, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchActionManifestPath, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_SetActionManifestPath.EndInvoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_SetActionManifestPath::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "EndInvoke", result));
}
