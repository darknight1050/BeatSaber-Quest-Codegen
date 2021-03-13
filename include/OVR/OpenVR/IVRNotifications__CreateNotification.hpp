// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRNotifications
#include "OVR/OpenVR/IVRNotifications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
  // Forward declaring type: EVRNotificationType
  struct EVRNotificationType;
  // Forward declaring type: EVRNotificationStyle
  struct EVRNotificationStyle;
  // Forward declaring type: NotificationBitmap_t
  struct NotificationBitmap_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRNotifications/_CreateNotification
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE1958
  class IVRNotifications::_CreateNotification : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CreateNotification
    _CreateNotification() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D3F008
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRNotifications::_CreateNotification* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRNotifications::_CreateNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRNotifications::_CreateNotification*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRNotificationError Invoke(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, OVR.OpenVR.EVRNotificationType type, System.String pchText, OVR.OpenVR.EVRNotificationStyle style, ref OVR.OpenVR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId)
    // Offset: 0x1D3F018
    OVR::OpenVR::EVRNotificationError Invoke_NEW(uint64_t ulOverlayHandle, uint64_t ulUserValue, OVR::OpenVR::EVRNotificationType type, ::Il2CppString* pchText, OVR::OpenVR::EVRNotificationStyle style, OVR::OpenVR::NotificationBitmap_t& pImage, uint& pNotificationId);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, OVR.OpenVR.EVRNotificationType type, System.String pchText, OVR.OpenVR.EVRNotificationStyle style, ref OVR.OpenVR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D3F33C
    System::IAsyncResult* BeginInvoke_NEW(uint64_t ulOverlayHandle, uint64_t ulUserValue, OVR::OpenVR::EVRNotificationType type, ::Il2CppString* pchText, OVR::OpenVR::EVRNotificationStyle style, OVR::OpenVR::NotificationBitmap_t& pImage, uint& pNotificationId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRNotificationError EndInvoke(ref OVR.OpenVR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId, System.IAsyncResult result)
    // Offset: 0x1D3F46C
    OVR::OpenVR::EVRNotificationError EndInvoke_NEW(OVR::OpenVR::NotificationBitmap_t& pImage, uint& pNotificationId, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRNotifications/_CreateNotification
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRNotifications::_CreateNotification*, "OVR.OpenVR", "IVRNotifications/_CreateNotification");
