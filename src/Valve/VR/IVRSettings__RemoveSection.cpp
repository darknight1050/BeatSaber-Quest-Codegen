// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSettings/_RemoveSection
#include "Valve/VR/IVRSettings__RemoveSection.hpp"
// Including type: Valve.VR.EVRSettingsError
#include "Valve/VR/EVRSettingsError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSettings/_RemoveSection..ctor
Valve::VR::IVRSettings::_RemoveSection* Valve::VR::IVRSettings::_RemoveSection::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSettings::_RemoveSection*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSettings/_RemoveSection", object, method));
}
// Autogenerated method: Valve.VR.IVRSettings/_RemoveSection.Invoke
void Valve::VR::IVRSettings::_RemoveSection::Invoke(::CsString* pchSection, Valve::VR::EVRSettingsError& peError) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pchSection, peError));
}
// Autogenerated method: Valve.VR.IVRSettings/_RemoveSection.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSettings::_RemoveSection::BeginInvoke(::CsString* pchSection, Valve::VR::EVRSettingsError& peError, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchSection, peError, callback, object));
}
// Autogenerated method: Valve.VR.IVRSettings/_RemoveSection.EndInvoke
void Valve::VR::IVRSettings::_RemoveSection::EndInvoke(Valve::VR::EVRSettingsError& peError, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", peError, result));
}
