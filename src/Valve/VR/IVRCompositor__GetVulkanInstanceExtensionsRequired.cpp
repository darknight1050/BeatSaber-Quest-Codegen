// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired
#include "Valve/VR/IVRCompositor__GetVulkanInstanceExtensionsRequired.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired..ctor
Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired* Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetVulkanInstanceExtensionsRequired*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_GetVulkanInstanceExtensionsRequired", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired.Invoke
uint Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired::Invoke(System::Text::StringBuilder* pchValue, uint unBufferSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", pchValue, unBufferSize));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired::BeginInvoke(System::Text::StringBuilder* pchValue, uint unBufferSize, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchValue, unBufferSize, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired.EndInvoke
uint Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}
