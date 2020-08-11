// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo
#include "OVR/OpenVR/IVRChaperoneSetup__GetLiveCollisionBoundsInfo.hpp"
// Including type: OVR.OpenVR.HmdQuad_t
#include "OVR/OpenVR/HmdQuad_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo..ctor
OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsInfo* OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsInfo::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRChaperoneSetup::_GetLiveCollisionBoundsInfo*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsInfo", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo.Invoke
bool OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsInfo::Invoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pQuadsBuffer, punQuadsCount));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsInfo::BeginInvoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pQuadsBuffer, punQuadsCount, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo.EndInvoke
bool OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsInfo::EndInvoke(uint& punQuadsCount, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", punQuadsCount, result));
}
