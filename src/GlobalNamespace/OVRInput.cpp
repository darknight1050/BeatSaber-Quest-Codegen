// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/Button
#include "GlobalNamespace/OVRInput_Button.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
// Including type: OVRInput/Touch
#include "GlobalNamespace/OVRInput_Touch.hpp"
// Including type: OVRInput/RawTouch
#include "GlobalNamespace/OVRInput_RawTouch.hpp"
// Including type: OVRInput/NearTouch
#include "GlobalNamespace/OVRInput_NearTouch.hpp"
// Including type: OVRInput/RawNearTouch
#include "GlobalNamespace/OVRInput_RawNearTouch.hpp"
// Including type: OVRInput/Axis1D
#include "GlobalNamespace/OVRInput_Axis1D.hpp"
// Including type: OVRInput/RawAxis1D
#include "GlobalNamespace/OVRInput_RawAxis1D.hpp"
// Including type: OVRInput/Axis2D
#include "GlobalNamespace/OVRInput_Axis2D.hpp"
// Including type: OVRInput/RawAxis2D
#include "GlobalNamespace/OVRInput_RawAxis2D.hpp"
// Including type: OVRInput/OpenVRButton
#include "GlobalNamespace/OVRInput_OpenVRButton.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: OVRInput/Handedness
#include "GlobalNamespace/OVRInput_Handedness.hpp"
// Including type: OVRInput/OpenVRController
#include "GlobalNamespace/OVRInput_OpenVRController.hpp"
// Including type: OVRInput/OpenVRControllerDetails
#include "GlobalNamespace/OVRInput_OpenVRControllerDetails.hpp"
// Including type: OVRInput/HapticInfo
#include "GlobalNamespace/OVRInput_HapticInfo.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/OVRControllerTouch
#include "GlobalNamespace/OVRInput_OVRControllerTouch.hpp"
// Including type: OVRInput/OVRControllerLTouch
#include "GlobalNamespace/OVRInput_OVRControllerLTouch.hpp"
// Including type: OVRInput/OVRControllerRTouch
#include "GlobalNamespace/OVRInput_OVRControllerRTouch.hpp"
// Including type: OVRInput/OVRControllerHands
#include "GlobalNamespace/OVRInput_OVRControllerHands.hpp"
// Including type: OVRInput/OVRControllerLHand
#include "GlobalNamespace/OVRInput_OVRControllerLHand.hpp"
// Including type: OVRInput/OVRControllerRHand
#include "GlobalNamespace/OVRInput_OVRControllerRHand.hpp"
// Including type: OVRInput/OVRControllerRemote
#include "GlobalNamespace/OVRInput_OVRControllerRemote.hpp"
// Including type: OVRInput/OVRControllerGamepadPC
#include "GlobalNamespace/OVRInput_OVRControllerGamepadPC.hpp"
// Including type: OVRInput/OVRControllerGamepadMac
#include "GlobalNamespace/OVRInput_OVRControllerGamepadMac.hpp"
// Including type: OVRInput/OVRControllerGamepadAndroid
#include "GlobalNamespace/OVRInput_OVRControllerGamepadAndroid.hpp"
// Including type: OVRInput/OVRControllerTouchpad
#include "GlobalNamespace/OVRInput_OVRControllerTouchpad.hpp"
// Including type: OVRInput/OVRControllerLTrackedRemote
#include "GlobalNamespace/OVRInput_OVRControllerLTrackedRemote.hpp"
// Including type: OVRInput/OVRControllerRTrackedRemote
#include "GlobalNamespace/OVRInput_OVRControllerRTrackedRemote.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Including type: OVR.OpenVR.ETrackedDeviceProperty
#include "OVR/OpenVR/ETrackedDeviceProperty.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Single AXIS_AS_BUTTON_THRESHOLD
float GlobalNamespace::OVRInput::_get_AXIS_AS_BUTTON_THRESHOLD() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "OVRInput", "AXIS_AS_BUTTON_THRESHOLD"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Single AXIS_AS_BUTTON_THRESHOLD
void GlobalNamespace::OVRInput::_set_AXIS_AS_BUTTON_THRESHOLD(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "AXIS_AS_BUTTON_THRESHOLD", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Single AXIS_DEADZONE_THRESHOLD
float GlobalNamespace::OVRInput::_get_AXIS_DEADZONE_THRESHOLD() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "OVRInput", "AXIS_DEADZONE_THRESHOLD"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Single AXIS_DEADZONE_THRESHOLD
void GlobalNamespace::OVRInput::_set_AXIS_DEADZONE_THRESHOLD(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "AXIS_DEADZONE_THRESHOLD", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<OVRInput/OVRControllerBase> controllers
System::Collections::Generic::List_1<GlobalNamespace::OVRInput::OVRControllerBase*>* GlobalNamespace::OVRInput::_get_controllers() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<GlobalNamespace::OVRInput::OVRControllerBase*>*>("", "OVRInput", "controllers"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<OVRInput/OVRControllerBase> controllers
void GlobalNamespace::OVRInput::_set_controllers(System::Collections::Generic::List_1<GlobalNamespace::OVRInput::OVRControllerBase*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "controllers", value));
}
// Autogenerated static field getter
// Get static field: static private OVRInput/Controller activeControllerType
GlobalNamespace::OVRInput::Controller GlobalNamespace::OVRInput::_get_activeControllerType() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<GlobalNamespace::OVRInput::Controller>("", "OVRInput", "activeControllerType"));
}
// Autogenerated static field setter
// Set static field: static private OVRInput/Controller activeControllerType
void GlobalNamespace::OVRInput::_set_activeControllerType(GlobalNamespace::OVRInput::Controller value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "activeControllerType", value));
}
// Autogenerated static field getter
// Get static field: static private OVRInput/Controller connectedControllerTypes
GlobalNamespace::OVRInput::Controller GlobalNamespace::OVRInput::_get_connectedControllerTypes() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<GlobalNamespace::OVRInput::Controller>("", "OVRInput", "connectedControllerTypes"));
}
// Autogenerated static field setter
// Set static field: static private OVRInput/Controller connectedControllerTypes
void GlobalNamespace::OVRInput::_set_connectedControllerTypes(GlobalNamespace::OVRInput::Controller value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "connectedControllerTypes", value));
}
// Autogenerated static field getter
// Get static field: static private OVRPlugin/Step stepType
GlobalNamespace::OVRPlugin::Step GlobalNamespace::OVRInput::_get_stepType() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<GlobalNamespace::OVRPlugin::Step>("", "OVRInput", "stepType"));
}
// Autogenerated static field setter
// Set static field: static private OVRPlugin/Step stepType
void GlobalNamespace::OVRInput::_set_stepType(GlobalNamespace::OVRPlugin::Step value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "stepType", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 fixedUpdateCount
int GlobalNamespace::OVRInput::_get_fixedUpdateCount() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "OVRInput", "fixedUpdateCount"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 fixedUpdateCount
void GlobalNamespace::OVRInput::_set_fixedUpdateCount(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "fixedUpdateCount", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean _pluginSupportsActiveController
bool GlobalNamespace::OVRInput::_get__pluginSupportsActiveController() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("", "OVRInput", "_pluginSupportsActiveController"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean _pluginSupportsActiveController
void GlobalNamespace::OVRInput::_set__pluginSupportsActiveController(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "_pluginSupportsActiveController", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean _pluginSupportsActiveControllerCached
bool GlobalNamespace::OVRInput::_get__pluginSupportsActiveControllerCached() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("", "OVRInput", "_pluginSupportsActiveControllerCached"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean _pluginSupportsActiveControllerCached
void GlobalNamespace::OVRInput::_set__pluginSupportsActiveControllerCached(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "_pluginSupportsActiveControllerCached", value));
}
// Autogenerated static field getter
// Get static field: static private System.Version _pluginSupportsActiveControllerMinVersion
System::Version* GlobalNamespace::OVRInput::_get__pluginSupportsActiveControllerMinVersion() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRInput", "_pluginSupportsActiveControllerMinVersion"));
}
// Autogenerated static field setter
// Set static field: static private System.Version _pluginSupportsActiveControllerMinVersion
void GlobalNamespace::OVRInput::_set__pluginSupportsActiveControllerMinVersion(System::Version* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "_pluginSupportsActiveControllerMinVersion", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 NUM_HAPTIC_CHANNELS
int GlobalNamespace::OVRInput::_get_NUM_HAPTIC_CHANNELS() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "OVRInput", "NUM_HAPTIC_CHANNELS"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 NUM_HAPTIC_CHANNELS
void GlobalNamespace::OVRInput::_set_NUM_HAPTIC_CHANNELS(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "NUM_HAPTIC_CHANNELS", value));
}
// Autogenerated static field getter
// Get static field: static private OVRInput/HapticInfo[] hapticInfos
::Array<GlobalNamespace::OVRInput::HapticInfo*>* GlobalNamespace::OVRInput::_get_hapticInfos() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<GlobalNamespace::OVRInput::HapticInfo*>*>("", "OVRInput", "hapticInfos"));
}
// Autogenerated static field setter
// Set static field: static private OVRInput/HapticInfo[] hapticInfos
void GlobalNamespace::OVRInput::_set_hapticInfos(::Array<GlobalNamespace::OVRInput::HapticInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "hapticInfos", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single OPENVR_MAX_HAPTIC_AMPLITUDE
float GlobalNamespace::OVRInput::_get_OPENVR_MAX_HAPTIC_AMPLITUDE() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "OVRInput", "OPENVR_MAX_HAPTIC_AMPLITUDE"));
}
// Autogenerated static field setter
// Set static field: static private System.Single OPENVR_MAX_HAPTIC_AMPLITUDE
void GlobalNamespace::OVRInput::_set_OPENVR_MAX_HAPTIC_AMPLITUDE(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "OPENVR_MAX_HAPTIC_AMPLITUDE", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single HAPTIC_VIBRATION_DURATION_SECONDS
float GlobalNamespace::OVRInput::_get_HAPTIC_VIBRATION_DURATION_SECONDS() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "OVRInput", "HAPTIC_VIBRATION_DURATION_SECONDS"));
}
// Autogenerated static field setter
// Set static field: static private System.Single HAPTIC_VIBRATION_DURATION_SECONDS
void GlobalNamespace::OVRInput::_set_HAPTIC_VIBRATION_DURATION_SECONDS(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "HAPTIC_VIBRATION_DURATION_SECONDS", value));
}
// Autogenerated static field getter
// Get static field: static private System.String OPENVR_TOUCH_NAME
::CsString* GlobalNamespace::OVRInput::_get_OPENVR_TOUCH_NAME() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("", "OVRInput", "OPENVR_TOUCH_NAME"));
}
// Autogenerated static field setter
// Set static field: static private System.String OPENVR_TOUCH_NAME
void GlobalNamespace::OVRInput::_set_OPENVR_TOUCH_NAME(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "OPENVR_TOUCH_NAME", value));
}
// Autogenerated static field getter
// Get static field: static private System.String OPENVR_VIVE_CONTROLLER_NAME
::CsString* GlobalNamespace::OVRInput::_get_OPENVR_VIVE_CONTROLLER_NAME() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("", "OVRInput", "OPENVR_VIVE_CONTROLLER_NAME"));
}
// Autogenerated static field setter
// Set static field: static private System.String OPENVR_VIVE_CONTROLLER_NAME
void GlobalNamespace::OVRInput::_set_OPENVR_VIVE_CONTROLLER_NAME(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "OPENVR_VIVE_CONTROLLER_NAME", value));
}
// Autogenerated static field getter
// Get static field: static private System.String OPENVR_WINDOWSMR_CONTROLLER_NAME
::CsString* GlobalNamespace::OVRInput::_get_OPENVR_WINDOWSMR_CONTROLLER_NAME() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("", "OVRInput", "OPENVR_WINDOWSMR_CONTROLLER_NAME"));
}
// Autogenerated static field setter
// Set static field: static private System.String OPENVR_WINDOWSMR_CONTROLLER_NAME
void GlobalNamespace::OVRInput::_set_OPENVR_WINDOWSMR_CONTROLLER_NAME(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "OPENVR_WINDOWSMR_CONTROLLER_NAME", value));
}
// Autogenerated static field getter
// Get static field: static public OVRInput/OpenVRControllerDetails[] openVRControllerDetails
::Array<GlobalNamespace::OVRInput::OpenVRControllerDetails>* GlobalNamespace::OVRInput::_get_openVRControllerDetails() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<GlobalNamespace::OVRInput::OpenVRControllerDetails>*>("", "OVRInput", "openVRControllerDetails"));
}
// Autogenerated static field setter
// Set static field: static public OVRInput/OpenVRControllerDetails[] openVRControllerDetails
void GlobalNamespace::OVRInput::_set_openVRControllerDetails(::Array<GlobalNamespace::OVRInput::OpenVRControllerDetails>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput", "openVRControllerDetails", value));
}
// Autogenerated method: OVRInput.get_pluginSupportsActiveController
bool GlobalNamespace::OVRInput::get_pluginSupportsActiveController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "get_pluginSupportsActiveController"));
}
// Autogenerated method: OVRInput..cctor
void GlobalNamespace::OVRInput::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", ".cctor"));
}
// Autogenerated method: OVRInput.Update
void GlobalNamespace::OVRInput::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "Update"));
}
// Autogenerated method: OVRInput.FixedUpdate
void GlobalNamespace::OVRInput::FixedUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "FixedUpdate"));
}
// Autogenerated method: OVRInput.GetControllerOrientationTracked
bool GlobalNamespace::OVRInput::GetControllerOrientationTracked(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetControllerOrientationTracked", controllerType));
}
// Autogenerated method: OVRInput.GetControllerOrientationValid
bool GlobalNamespace::OVRInput::GetControllerOrientationValid(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetControllerOrientationValid", controllerType));
}
// Autogenerated method: OVRInput.GetControllerPositionTracked
bool GlobalNamespace::OVRInput::GetControllerPositionTracked(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetControllerPositionTracked", controllerType));
}
// Autogenerated method: OVRInput.GetControllerPositionValid
bool GlobalNamespace::OVRInput::GetControllerPositionValid(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetControllerPositionValid", controllerType));
}
// Autogenerated method: OVRInput.GetLocalControllerPosition
UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerPosition(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("", "OVRInput", "GetLocalControllerPosition", controllerType));
}
// Autogenerated method: OVRInput.GetLocalControllerVelocity
UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerVelocity(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("", "OVRInput", "GetLocalControllerVelocity", controllerType));
}
// Autogenerated method: OVRInput.GetLocalControllerAcceleration
UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAcceleration(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("", "OVRInput", "GetLocalControllerAcceleration", controllerType));
}
// Autogenerated method: OVRInput.GetLocalControllerRotation
UnityEngine::Quaternion GlobalNamespace::OVRInput::GetLocalControllerRotation(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("", "OVRInput", "GetLocalControllerRotation", controllerType));
}
// Autogenerated method: OVRInput.GetLocalControllerAngularVelocity
UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularVelocity(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("", "OVRInput", "GetLocalControllerAngularVelocity", controllerType));
}
// Autogenerated method: OVRInput.GetLocalControllerAngularAcceleration
UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularAcceleration(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("", "OVRInput", "GetLocalControllerAngularAcceleration", controllerType));
}
// Autogenerated method: OVRInput.GetDominantHand
GlobalNamespace::OVRInput::Handedness GlobalNamespace::OVRInput::GetDominantHand() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::Handedness>("", "OVRInput", "GetDominantHand"));
}
// Autogenerated method: OVRInput.Get
bool GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "Get", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.Get
bool GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::RawButton rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "Get", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedButton
bool GlobalNamespace::OVRInput::GetResolvedButton(GlobalNamespace::OVRInput::Button virtualMask, GlobalNamespace::OVRInput::RawButton rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetResolvedButton", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetDown
bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::OVRInput::Button virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetDown", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.GetDown
bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::OVRInput::RawButton rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetDown", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedButtonDown
bool GlobalNamespace::OVRInput::GetResolvedButtonDown(GlobalNamespace::OVRInput::Button virtualMask, GlobalNamespace::OVRInput::RawButton rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetResolvedButtonDown", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetUp
bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::OVRInput::Button virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetUp", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.GetUp
bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::OVRInput::RawButton rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetUp", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedButtonUp
bool GlobalNamespace::OVRInput::GetResolvedButtonUp(GlobalNamespace::OVRInput::Button virtualMask, GlobalNamespace::OVRInput::RawButton rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetResolvedButtonUp", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.Get
bool GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Touch virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "Get", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.Get
bool GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::RawTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "Get", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedTouch
bool GlobalNamespace::OVRInput::GetResolvedTouch(GlobalNamespace::OVRInput::Touch virtualMask, GlobalNamespace::OVRInput::RawTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetResolvedTouch", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetDown
bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::OVRInput::Touch virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetDown", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.GetDown
bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::OVRInput::RawTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetDown", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedTouchDown
bool GlobalNamespace::OVRInput::GetResolvedTouchDown(GlobalNamespace::OVRInput::Touch virtualMask, GlobalNamespace::OVRInput::RawTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetResolvedTouchDown", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetUp
bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::OVRInput::Touch virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetUp", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.GetUp
bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::OVRInput::RawTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetUp", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedTouchUp
bool GlobalNamespace::OVRInput::GetResolvedTouchUp(GlobalNamespace::OVRInput::Touch virtualMask, GlobalNamespace::OVRInput::RawTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetResolvedTouchUp", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.Get
bool GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::NearTouch virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "Get", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.Get
bool GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::RawNearTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "Get", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedNearTouch
bool GlobalNamespace::OVRInput::GetResolvedNearTouch(GlobalNamespace::OVRInput::NearTouch virtualMask, GlobalNamespace::OVRInput::RawNearTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetResolvedNearTouch", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetDown
bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::OVRInput::NearTouch virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetDown", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.GetDown
bool GlobalNamespace::OVRInput::GetDown(GlobalNamespace::OVRInput::RawNearTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetDown", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedNearTouchDown
bool GlobalNamespace::OVRInput::GetResolvedNearTouchDown(GlobalNamespace::OVRInput::NearTouch virtualMask, GlobalNamespace::OVRInput::RawNearTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetResolvedNearTouchDown", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetUp
bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::OVRInput::NearTouch virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetUp", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.GetUp
bool GlobalNamespace::OVRInput::GetUp(GlobalNamespace::OVRInput::RawNearTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetUp", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedNearTouchUp
bool GlobalNamespace::OVRInput::GetResolvedNearTouchUp(GlobalNamespace::OVRInput::NearTouch virtualMask, GlobalNamespace::OVRInput::RawNearTouch rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetResolvedNearTouchUp", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.Get
float GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Axis1D virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("", "OVRInput", "Get", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.Get
float GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::RawAxis1D rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("", "OVRInput", "Get", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedAxis1D
float GlobalNamespace::OVRInput::GetResolvedAxis1D(GlobalNamespace::OVRInput::Axis1D virtualMask, GlobalNamespace::OVRInput::RawAxis1D rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("", "OVRInput", "GetResolvedAxis1D", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.Get
UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Axis2D virtualMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>("", "OVRInput", "Get", virtualMask, controllerMask));
}
// Autogenerated method: OVRInput.Get
UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::RawAxis2D rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>("", "OVRInput", "Get", rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetResolvedAxis2D
UnityEngine::Vector2 GlobalNamespace::OVRInput::GetResolvedAxis2D(GlobalNamespace::OVRInput::Axis2D virtualMask, GlobalNamespace::OVRInput::RawAxis2D rawMask, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>("", "OVRInput", "GetResolvedAxis2D", virtualMask, rawMask, controllerMask));
}
// Autogenerated method: OVRInput.GetConnectedControllers
GlobalNamespace::OVRInput::Controller GlobalNamespace::OVRInput::GetConnectedControllers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::Controller>("", "OVRInput", "GetConnectedControllers"));
}
// Autogenerated method: OVRInput.IsControllerConnected
bool GlobalNamespace::OVRInput::IsControllerConnected(GlobalNamespace::OVRInput::Controller controller) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "IsControllerConnected", controller));
}
// Autogenerated method: OVRInput.GetActiveController
GlobalNamespace::OVRInput::Controller GlobalNamespace::OVRInput::GetActiveController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::Controller>("", "OVRInput", "GetActiveController"));
}
// Autogenerated method: OVRInput.StartVibration
void GlobalNamespace::OVRInput::StartVibration(float amplitude, float duration, UnityEngine::XR::XRNode controllerNode) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "StartVibration", amplitude, duration, controllerNode));
}
// Autogenerated method: OVRInput.SetOpenVRLocalPose
void GlobalNamespace::OVRInput::SetOpenVRLocalPose(UnityEngine::Vector3 leftPos, UnityEngine::Vector3 rightPos, UnityEngine::Quaternion leftRot, UnityEngine::Quaternion rightRot) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "SetOpenVRLocalPose", leftPos, rightPos, leftRot, rightRot));
}
// Autogenerated method: OVRInput.GetOpenVRStringProperty
::CsString* GlobalNamespace::OVRInput::GetOpenVRStringProperty(OVR::OpenVR::ETrackedDeviceProperty prop, uint deviceId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("", "OVRInput", "GetOpenVRStringProperty", prop, deviceId));
}
// Autogenerated method: OVRInput.UpdateXRControllerNodeIds
void GlobalNamespace::OVRInput::UpdateXRControllerNodeIds() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "UpdateXRControllerNodeIds"));
}
// Autogenerated method: OVRInput.UpdateXRControllerHaptics
void GlobalNamespace::OVRInput::UpdateXRControllerHaptics() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "UpdateXRControllerHaptics"));
}
// Autogenerated method: OVRInput.InitHapticInfo
void GlobalNamespace::OVRInput::InitHapticInfo() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "InitHapticInfo"));
}
// Autogenerated method: OVRInput.PlayHapticImpulse
void GlobalNamespace::OVRInput::PlayHapticImpulse(float amplitude, UnityEngine::XR::XRNode deviceNode) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "PlayHapticImpulse", amplitude, deviceNode));
}
// Autogenerated method: OVRInput.IsValidOpenVRDevice
bool GlobalNamespace::OVRInput::IsValidOpenVRDevice(uint deviceId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "IsValidOpenVRDevice", deviceId));
}
// Autogenerated method: OVRInput.SetControllerVibration
void GlobalNamespace::OVRInput::SetControllerVibration(float frequency, float amplitude, GlobalNamespace::OVRInput::Controller controllerMask) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "SetControllerVibration", frequency, amplitude, controllerMask));
}
// Autogenerated method: OVRInput.RecenterController
void GlobalNamespace::OVRInput::RecenterController(GlobalNamespace::OVRInput::Controller controllerMask) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRInput", "RecenterController", controllerMask));
}
// Autogenerated method: OVRInput.GetControllerWasRecentered
bool GlobalNamespace::OVRInput::GetControllerWasRecentered(GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "GetControllerWasRecentered", controllerMask));
}
// Autogenerated method: OVRInput.GetControllerRecenterCount
uint8_t GlobalNamespace::OVRInput::GetControllerRecenterCount(GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>("", "OVRInput", "GetControllerRecenterCount", controllerMask));
}
// Autogenerated method: OVRInput.GetControllerBatteryPercentRemaining
uint8_t GlobalNamespace::OVRInput::GetControllerBatteryPercentRemaining(GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>("", "OVRInput", "GetControllerBatteryPercentRemaining", controllerMask));
}
// Autogenerated method: OVRInput.CalculateAbsMax
UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateAbsMax(UnityEngine::Vector2 a, UnityEngine::Vector2 b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>("", "OVRInput", "CalculateAbsMax", a, b));
}
// Autogenerated method: OVRInput.CalculateAbsMax
float GlobalNamespace::OVRInput::CalculateAbsMax(float a, float b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("", "OVRInput", "CalculateAbsMax", a, b));
}
// Autogenerated method: OVRInput.CalculateDeadzone
UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateDeadzone(UnityEngine::Vector2 a, float deadzone) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>("", "OVRInput", "CalculateDeadzone", a, deadzone));
}
// Autogenerated method: OVRInput.CalculateDeadzone
float GlobalNamespace::OVRInput::CalculateDeadzone(float a, float deadzone) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("", "OVRInput", "CalculateDeadzone", a, deadzone));
}
// Autogenerated method: OVRInput.ShouldResolveController
bool GlobalNamespace::OVRInput::ShouldResolveController(GlobalNamespace::OVRInput::Controller controllerType, GlobalNamespace::OVRInput::Controller controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput", "ShouldResolveController", controllerType, controllerMask));
}
