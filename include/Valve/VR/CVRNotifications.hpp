// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRNotifications
#include "Valve/VR/IVRNotifications.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
  // Forward declaring type: EVRNotificationType
  struct EVRNotificationType;
  // Forward declaring type: EVRNotificationStyle
  struct EVRNotificationStyle;
  // Forward declaring type: NotificationBitmap_t
  struct NotificationBitmap_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x20
  // Autogenerated type: Valve.VR.CVRNotifications
  // [] Offset: FFFFFFFF
  class CVRNotifications : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRNotifications FnTable
    // Size: 0x10
    // Offset: 0x10
    Valve::VR::IVRNotifications FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRNotifications) == 0x10);
    // Creating value type constructor for type: CVRNotifications
    CVRNotifications(Valve::VR::IVRNotifications FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRNotifications
    constexpr operator Valve::VR::IVRNotifications() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1369BA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRNotifications* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRNotifications::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRNotifications*, creationType>(pInterface)));
    }
    // public Valve.VR.EVRNotificationError CreateNotification(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, Valve.VR.EVRNotificationType type, System.String pchText, Valve.VR.EVRNotificationStyle style, ref Valve.VR.NotificationBitmap_t pImage, ref System.UInt32 pNotificationId)
    // Offset: 0x1369CAC
    Valve::VR::EVRNotificationError CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, Valve::VR::EVRNotificationType type, ::Il2CppString* pchText, Valve::VR::EVRNotificationStyle style, Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId);
    // public Valve.VR.EVRNotificationError RemoveNotification(System.UInt32 notificationId)
    // Offset: 0x1369CD0
    Valve::VR::EVRNotificationError RemoveNotification(uint notificationId);
  }; // Valve.VR.CVRNotifications
  static check_size<sizeof(CVRNotifications), 16 + sizeof(Valve::VR::IVRNotifications)> __Valve_VR_CVRNotificationsSizeCheck;
  static_assert(sizeof(CVRNotifications) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRNotifications*, "Valve.VR", "CVRNotifications");
#pragma pack(pop)
