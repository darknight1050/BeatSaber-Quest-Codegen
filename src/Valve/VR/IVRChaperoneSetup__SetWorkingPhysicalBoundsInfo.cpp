// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo
#include "Valve/VR/IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo.hpp"
// Including type: Valve.VR.HmdQuad_t
#include "Valve/VR/HmdQuad_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo..ctor
Valve::VR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo* Valve::VR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo", object, method));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo.Invoke
bool Valve::VR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::Invoke(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer, uint unQuadsCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pQuadsBuffer, unQuadsCount));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo.BeginInvoke
System::IAsyncResult* Valve::VR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::BeginInvoke(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer, uint unQuadsCount, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pQuadsBuffer, unQuadsCount, callback, object));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo.EndInvoke
bool Valve::VR::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
