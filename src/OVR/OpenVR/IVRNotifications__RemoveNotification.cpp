// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRNotifications/_RemoveNotification
#include "OVR/OpenVR/IVRNotifications__RemoveNotification.hpp"
// Including type: OVR.OpenVR.EVRNotificationError
#include "OVR/OpenVR/EVRNotificationError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRNotifications/_RemoveNotification..ctor
OVR::OpenVR::IVRNotifications::_RemoveNotification* OVR::OpenVR::IVRNotifications::_RemoveNotification::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRNotifications::_RemoveNotification*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRNotifications/_RemoveNotification", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRNotifications/_RemoveNotification.Invoke
OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications::_RemoveNotification::Invoke(uint notificationId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRNotificationError>(this, "Invoke", notificationId));
}
// Autogenerated method: OVR.OpenVR.IVRNotifications/_RemoveNotification.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRNotifications::_RemoveNotification::BeginInvoke(uint notificationId, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", notificationId, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRNotifications/_RemoveNotification.EndInvoke
OVR::OpenVR::EVRNotificationError OVR::OpenVR::IVRNotifications::_RemoveNotification::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRNotificationError>(this, "EndInvoke", result));
}
