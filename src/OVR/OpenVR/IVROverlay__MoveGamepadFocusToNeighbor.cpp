// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor
#include "OVR/OpenVR/IVROverlay__MoveGamepadFocusToNeighbor.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.EOverlayDirection
#include "OVR/OpenVR/EOverlayDirection.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor..ctor
OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor* OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_MoveGamepadFocusToNeighbor*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_MoveGamepadFocusToNeighbor", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::Invoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", eDirection, ulFrom));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::BeginInvoke(OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eDirection, ulFrom, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}
