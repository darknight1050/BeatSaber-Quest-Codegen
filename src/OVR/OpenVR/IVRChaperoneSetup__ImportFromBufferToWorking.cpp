// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking
#include "OVR/OpenVR/IVRChaperoneSetup__ImportFromBufferToWorking.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking..ctor
OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking* OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRChaperoneSetup::_ImportFromBufferToWorking*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRChaperoneSetup/_ImportFromBufferToWorking", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking.Invoke
bool OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::Invoke(::CsString* pBuffer, uint nImportFlags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pBuffer, nImportFlags));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::BeginInvoke(::CsString* pBuffer, uint nImportFlags, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pBuffer, nImportFlags, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking.EndInvoke
bool OVR::OpenVR::IVRChaperoneSetup::_ImportFromBufferToWorking::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
