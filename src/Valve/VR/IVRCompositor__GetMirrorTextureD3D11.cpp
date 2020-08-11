// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_GetMirrorTextureD3D11
#include "Valve/VR/IVRCompositor__GetMirrorTextureD3D11.hpp"
// Including type: Valve.VR.EVRCompositorError
#include "Valve/VR/EVRCompositorError.hpp"
// Including type: Valve.VR.EVREye
#include "Valve/VR/EVREye.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_GetMirrorTextureD3D11..ctor
Valve::VR::IVRCompositor::_GetMirrorTextureD3D11* Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetMirrorTextureD3D11*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_GetMirrorTextureD3D11", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetMirrorTextureD3D11.Invoke
Valve::VR::EVRCompositorError Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::Invoke(Valve::VR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRCompositorError>(this, "Invoke", eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetMirrorTextureD3D11.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::BeginInvoke(Valve::VR::EVREye eEye, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetMirrorTextureD3D11.EndInvoke
Valve::VR::EVRCompositorError Valve::VR::IVRCompositor::_GetMirrorTextureD3D11::EndInvoke(System::IntPtr& ppD3D11ShaderResourceView, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRCompositorError>(this, "EndInvoke", ppD3D11ShaderResourceView, result));
}
