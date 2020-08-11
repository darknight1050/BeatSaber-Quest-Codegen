// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRApplications
#include "Valve/VR/CVRApplications.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.EVRApplicationError
#include "Valve/VR/EVRApplicationError.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: Valve.VR.AppOverrideKeys_t
#include "Valve/VR/AppOverrideKeys_t.hpp"
// Including type: Valve.VR.EVRApplicationProperty
#include "Valve/VR/EVRApplicationProperty.hpp"
// Including type: Valve.VR.EVRApplicationTransitionState
#include "Valve/VR/EVRApplicationTransitionState.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.CVRApplications..ctor
Valve::VR::CVRApplications* Valve::VR::CVRApplications::New_ctor(System::IntPtr pInterface) {
  return (CVRApplications*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "CVRApplications", pInterface));
}
// Autogenerated method: Valve.VR.CVRApplications.AddApplicationManifest
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::AddApplicationManifest(::CsString* pchApplicationManifestFullPath, bool bTemporary) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "AddApplicationManifest", pchApplicationManifestFullPath, bTemporary));
}
// Autogenerated method: Valve.VR.CVRApplications.RemoveApplicationManifest
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::RemoveApplicationManifest(::CsString* pchApplicationManifestFullPath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "RemoveApplicationManifest", pchApplicationManifestFullPath));
}
// Autogenerated method: Valve.VR.CVRApplications.IsApplicationInstalled
bool Valve::VR::CVRApplications::IsApplicationInstalled(::CsString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsApplicationInstalled", pchAppKey));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationCount
uint Valve::VR::CVRApplications::GetApplicationCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetApplicationCount"));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationKeyByIndex
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::GetApplicationKeyByIndex(uint unApplicationIndex, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "GetApplicationKeyByIndex", unApplicationIndex, pchAppKeyBuffer, unAppKeyBufferLen));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationKeyByProcessId
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::GetApplicationKeyByProcessId(uint unProcessId, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "GetApplicationKeyByProcessId", unProcessId, pchAppKeyBuffer, unAppKeyBufferLen));
}
// Autogenerated method: Valve.VR.CVRApplications.LaunchApplication
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::LaunchApplication(::CsString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "LaunchApplication", pchAppKey));
}
// Autogenerated method: Valve.VR.CVRApplications.LaunchTemplateApplication
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::LaunchTemplateApplication(::CsString* pchTemplateAppKey, ::CsString* pchNewAppKey, ::Array<Valve::VR::AppOverrideKeys_t>* pKeys) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "LaunchTemplateApplication", pchTemplateAppKey, pchNewAppKey, pKeys));
}
// Autogenerated method: Valve.VR.CVRApplications.LaunchApplicationFromMimeType
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::LaunchApplicationFromMimeType(::CsString* pchMimeType, ::CsString* pchArgs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "LaunchApplicationFromMimeType", pchMimeType, pchArgs));
}
// Autogenerated method: Valve.VR.CVRApplications.LaunchDashboardOverlay
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::LaunchDashboardOverlay(::CsString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "LaunchDashboardOverlay", pchAppKey));
}
// Autogenerated method: Valve.VR.CVRApplications.CancelApplicationLaunch
bool Valve::VR::CVRApplications::CancelApplicationLaunch(::CsString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CancelApplicationLaunch", pchAppKey));
}
// Autogenerated method: Valve.VR.CVRApplications.IdentifyApplication
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::IdentifyApplication(uint unProcessId, ::CsString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "IdentifyApplication", unProcessId, pchAppKey));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationProcessId
uint Valve::VR::CVRApplications::GetApplicationProcessId(::CsString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetApplicationProcessId", pchAppKey));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationsErrorNameFromEnum
::CsString* Valve::VR::CVRApplications::GetApplicationsErrorNameFromEnum(Valve::VR::EVRApplicationError error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetApplicationsErrorNameFromEnum", error));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationPropertyString
uint Valve::VR::CVRApplications::GetApplicationPropertyString(::CsString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, System::Text::StringBuilder* pchPropertyValueBuffer, uint unPropertyValueBufferLen, Valve::VR::EVRApplicationError& peError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetApplicationPropertyString", pchAppKey, eProperty, pchPropertyValueBuffer, unPropertyValueBufferLen, peError));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationPropertyBool
bool Valve::VR::CVRApplications::GetApplicationPropertyBool(::CsString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetApplicationPropertyBool", pchAppKey, eProperty, peError));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationPropertyUint64
uint64_t Valve::VR::CVRApplications::GetApplicationPropertyUint64(::CsString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "GetApplicationPropertyUint64", pchAppKey, eProperty, peError));
}
// Autogenerated method: Valve.VR.CVRApplications.SetApplicationAutoLaunch
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::SetApplicationAutoLaunch(::CsString* pchAppKey, bool bAutoLaunch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "SetApplicationAutoLaunch", pchAppKey, bAutoLaunch));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationAutoLaunch
bool Valve::VR::CVRApplications::GetApplicationAutoLaunch(::CsString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetApplicationAutoLaunch", pchAppKey));
}
// Autogenerated method: Valve.VR.CVRApplications.SetDefaultApplicationForMimeType
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::SetDefaultApplicationForMimeType(::CsString* pchAppKey, ::CsString* pchMimeType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "SetDefaultApplicationForMimeType", pchAppKey, pchMimeType));
}
// Autogenerated method: Valve.VR.CVRApplications.GetDefaultApplicationForMimeType
bool Valve::VR::CVRApplications::GetDefaultApplicationForMimeType(::CsString* pchMimeType, System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetDefaultApplicationForMimeType", pchMimeType, pchAppKeyBuffer, unAppKeyBufferLen));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationSupportedMimeTypes
bool Valve::VR::CVRApplications::GetApplicationSupportedMimeTypes(::CsString* pchAppKey, System::Text::StringBuilder* pchMimeTypesBuffer, uint unMimeTypesBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetApplicationSupportedMimeTypes", pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationsThatSupportMimeType
uint Valve::VR::CVRApplications::GetApplicationsThatSupportMimeType(::CsString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetApplicationsThatSupportMimeType", pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationLaunchArguments
uint Valve::VR::CVRApplications::GetApplicationLaunchArguments(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetApplicationLaunchArguments", unHandle, pchArgs, unArgs));
}
// Autogenerated method: Valve.VR.CVRApplications.GetStartingApplication
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::GetStartingApplication(System::Text::StringBuilder* pchAppKeyBuffer, uint unAppKeyBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "GetStartingApplication", pchAppKeyBuffer, unAppKeyBufferLen));
}
// Autogenerated method: Valve.VR.CVRApplications.GetTransitionState
Valve::VR::EVRApplicationTransitionState Valve::VR::CVRApplications::GetTransitionState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationTransitionState>(this, "GetTransitionState"));
}
// Autogenerated method: Valve.VR.CVRApplications.PerformApplicationPrelaunchCheck
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::PerformApplicationPrelaunchCheck(::CsString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "PerformApplicationPrelaunchCheck", pchAppKey));
}
// Autogenerated method: Valve.VR.CVRApplications.GetApplicationsTransitionStateNameFromEnum
::CsString* Valve::VR::CVRApplications::GetApplicationsTransitionStateNameFromEnum(Valve::VR::EVRApplicationTransitionState state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetApplicationsTransitionStateNameFromEnum", state));
}
// Autogenerated method: Valve.VR.CVRApplications.IsQuitUserPromptRequested
bool Valve::VR::CVRApplications::IsQuitUserPromptRequested() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsQuitUserPromptRequested"));
}
// Autogenerated method: Valve.VR.CVRApplications.LaunchInternalProcess
Valve::VR::EVRApplicationError Valve::VR::CVRApplications::LaunchInternalProcess(::CsString* pchBinaryPath, ::CsString* pchArguments, ::CsString* pchWorkingDirectory) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "LaunchInternalProcess", pchBinaryPath, pchArguments, pchWorkingDirectory));
}
// Autogenerated method: Valve.VR.CVRApplications.GetCurrentSceneProcessId
uint Valve::VR::CVRApplications::GetCurrentSceneProcessId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "GetCurrentSceneProcessId"));
}
