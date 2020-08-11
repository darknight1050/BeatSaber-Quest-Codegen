// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRRenderModels/_GetComponentRenderModelName
#include "Valve/VR/IVRRenderModels__GetComponentRenderModelName.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRRenderModels/_GetComponentRenderModelName..ctor
Valve::VR::IVRRenderModels::_GetComponentRenderModelName* Valve::VR::IVRRenderModels::_GetComponentRenderModelName::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRRenderModels::_GetComponentRenderModelName*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRRenderModels/_GetComponentRenderModelName", object, method));
}
// Autogenerated method: Valve.VR.IVRRenderModels/_GetComponentRenderModelName.Invoke
uint Valve::VR::IVRRenderModels::_GetComponentRenderModelName::Invoke(::CsString* pchRenderModelName, ::CsString* pchComponentName, System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen));
}
// Autogenerated method: Valve.VR.IVRRenderModels/_GetComponentRenderModelName.BeginInvoke
System::IAsyncResult* Valve::VR::IVRRenderModels::_GetComponentRenderModelName::BeginInvoke(::CsString* pchRenderModelName, ::CsString* pchComponentName, System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen, callback, object));
}
// Autogenerated method: Valve.VR.IVRRenderModels/_GetComponentRenderModelName.EndInvoke
uint Valve::VR::IVRRenderModels::_GetComponentRenderModelName::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}
