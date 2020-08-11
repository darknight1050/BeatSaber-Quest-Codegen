// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.CVRRenderModels
#include "OVR/OpenVR/CVRRenderModels.hpp"
// Including type: OVR.OpenVR.CVRRenderModels/_GetComponentStatePacked
#include "OVR/OpenVR/CVRRenderModels__GetComponentStatePacked.hpp"
// Including type: OVR.OpenVR.CVRRenderModels/GetComponentStateUnion
#include "OVR/OpenVR/CVRRenderModels_GetComponentStateUnion.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.EVRRenderModelError
#include "OVR/OpenVR/EVRRenderModelError.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: OVR.OpenVR.RenderModel_ControllerMode_State_t
#include "OVR/OpenVR/RenderModel_ControllerMode_State_t.hpp"
// Including type: OVR.OpenVR.RenderModel_ComponentState_t
#include "OVR/OpenVR/RenderModel_ComponentState_t.hpp"
// Including type: OVR.OpenVR.VRControllerState_t
#include "OVR/OpenVR/VRControllerState_t.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.CVRRenderModels..ctor
OVR::OpenVR::CVRRenderModels* OVR::OpenVR::CVRRenderModels::New_ctor(System::IntPtr pInterface) {
  return (CVRRenderModels*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "CVRRenderModels", pInterface));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.LoadRenderModel_Async
OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadRenderModel_Async(::CsString* pchRenderModelName, System::IntPtr& ppRenderModel) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRRenderModelError>(this, "LoadRenderModel_Async", pchRenderModelName, ppRenderModel));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.FreeRenderModel
void OVR::OpenVR::CVRRenderModels::FreeRenderModel(System::IntPtr pRenderModel) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FreeRenderModel", pRenderModel));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.LoadTexture_Async
OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadTexture_Async(int textureId, System::IntPtr& ppTexture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRRenderModelError>(this, "LoadTexture_Async", textureId, ppTexture));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.FreeTexture
void OVR::OpenVR::CVRRenderModels::FreeTexture(System::IntPtr pTexture) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FreeTexture", pTexture));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.LoadTextureD3D11_Async
OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadTextureD3D11_Async(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRRenderModelError>(this, "LoadTextureD3D11_Async", textureId, pD3D11Device, ppD3D11Texture2D));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.LoadIntoTextureD3D11_Async
OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadIntoTextureD3D11_Async(int textureId, System::IntPtr pDstTexture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRRenderModelError>(this, "LoadIntoTextureD3D11_Async", textureId, pDstTexture));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.FreeTextureD3D11
void OVR::OpenVR::CVRRenderModels::FreeTextureD3D11(System::IntPtr pD3D11Texture2D) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FreeTextureD3D11", pD3D11Texture2D));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetRenderModelName
uint OVR::OpenVR::CVRRenderModels::GetRenderModelName(uint unRenderModelIndex, System::Text::StringBuilder* pchRenderModelName, uint unRenderModelNameLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetRenderModelName", unRenderModelIndex, pchRenderModelName, unRenderModelNameLen));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetRenderModelCount
uint OVR::OpenVR::CVRRenderModels::GetRenderModelCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetRenderModelCount"));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetComponentCount
uint OVR::OpenVR::CVRRenderModels::GetComponentCount(::CsString* pchRenderModelName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetComponentCount", pchRenderModelName));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetComponentName
uint OVR::OpenVR::CVRRenderModels::GetComponentName(::CsString* pchRenderModelName, uint unComponentIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetComponentName", pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetComponentButtonMask
uint64_t OVR::OpenVR::CVRRenderModels::GetComponentButtonMask(::CsString* pchRenderModelName, ::CsString* pchComponentName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "GetComponentButtonMask", pchRenderModelName, pchComponentName));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetComponentRenderModelName
uint OVR::OpenVR::CVRRenderModels::GetComponentRenderModelName(::CsString* pchRenderModelName, ::CsString* pchComponentName, System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetComponentRenderModelName", pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetComponentStateForDevicePath
bool OVR::OpenVR::CVRRenderModels::GetComponentStateForDevicePath(::CsString* pchRenderModelName, ::CsString* pchComponentName, uint64_t devicePath, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetComponentStateForDevicePath", pchRenderModelName, pchComponentName, devicePath, pState, pComponentState));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetComponentState
bool OVR::OpenVR::CVRRenderModels::GetComponentState(::CsString* pchRenderModelName, ::CsString* pchComponentName, OVR::OpenVR::VRControllerState_t& pControllerState, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetComponentState", pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.RenderModelHasComponent
bool OVR::OpenVR::CVRRenderModels::RenderModelHasComponent(::CsString* pchRenderModelName, ::CsString* pchComponentName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "RenderModelHasComponent", pchRenderModelName, pchComponentName));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetRenderModelThumbnailURL
uint OVR::OpenVR::CVRRenderModels::GetRenderModelThumbnailURL(::CsString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, OVR::OpenVR::EVRRenderModelError& peError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetRenderModelThumbnailURL", pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetRenderModelOriginalPath
uint OVR::OpenVR::CVRRenderModels::GetRenderModelOriginalPath(::CsString* pchRenderModelName, System::Text::StringBuilder* pchOriginalPath, uint unOriginalPathLen, OVR::OpenVR::EVRRenderModelError& peError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetRenderModelOriginalPath", pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError));
}
// Autogenerated method: OVR.OpenVR.CVRRenderModels.GetRenderModelErrorNameFromEnum
::CsString* OVR::OpenVR::CVRRenderModels::GetRenderModelErrorNameFromEnum(OVR::OpenVR::EVRRenderModelError error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetRenderModelErrorNameFromEnum", error));
}
