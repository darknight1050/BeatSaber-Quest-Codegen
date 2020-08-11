// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels/_RenderModelHasComponent
#include "Valve/VR/IVRRenderModels__RenderModelHasComponent.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRRenderModels/_RenderModelHasComponent..ctor
Valve::VR::IVRRenderModels::_RenderModelHasComponent* Valve::VR::IVRRenderModels::_RenderModelHasComponent::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRRenderModels::_RenderModelHasComponent*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRRenderModels/_RenderModelHasComponent", object, method));
}
// Autogenerated method: Valve.VR.IVRRenderModels/_RenderModelHasComponent.Invoke
bool Valve::VR::IVRRenderModels::_RenderModelHasComponent::Invoke(::CsString* pchRenderModelName, ::CsString* pchComponentName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pchRenderModelName, pchComponentName));
}
// Autogenerated method: Valve.VR.IVRRenderModels/_RenderModelHasComponent.BeginInvoke
System::IAsyncResult* Valve::VR::IVRRenderModels::_RenderModelHasComponent::BeginInvoke(::CsString* pchRenderModelName, ::CsString* pchComponentName, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchRenderModelName, pchComponentName, callback, object));
}
// Autogenerated method: Valve.VR.IVRRenderModels/_RenderModelHasComponent.EndInvoke
bool Valve::VR::IVRRenderModels::_RenderModelHasComponent::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
