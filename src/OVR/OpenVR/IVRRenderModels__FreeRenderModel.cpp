// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels/_FreeRenderModel
#include "OVR/OpenVR/IVRRenderModels__FreeRenderModel.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_FreeRenderModel..ctor
OVR::OpenVR::IVRRenderModels::_FreeRenderModel* OVR::OpenVR::IVRRenderModels::_FreeRenderModel::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRRenderModels::_FreeRenderModel*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRRenderModels/_FreeRenderModel", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_FreeRenderModel.Invoke
void OVR::OpenVR::IVRRenderModels::_FreeRenderModel::Invoke(System::IntPtr pRenderModel) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pRenderModel));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_FreeRenderModel.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRRenderModels::_FreeRenderModel::BeginInvoke(System::IntPtr pRenderModel, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pRenderModel, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_FreeRenderModel.EndInvoke
void OVR::OpenVR::IVRRenderModels::_FreeRenderModel::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
