// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request
  class Request;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: RoomInviteNotificationList
  class RoomInviteNotificationList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Notifications
  class Notifications : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Notifications
    Notifications() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList> GetRoomInviteNotifications()
    // Offset: 0x14BDA30
    static Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* GetRoomInviteNotifications();
    // static public Oculus.Platform.Request MarkAsRead(System.UInt64 notificationID)
    // Offset: 0x14BDB3C
    static Oculus::Platform::Request* MarkAsRead(uint64_t notificationID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.RoomInviteNotificationList> GetNextRoomInviteNotificationListPage(Oculus.Platform.Models.RoomInviteNotificationList list)
    // Offset: 0x14BDC50
    static Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* GetNextRoomInviteNotificationListPage(Oculus::Platform::Models::RoomInviteNotificationList* list);
  }; // Oculus.Platform.Notifications
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Notifications*, "Oculus.Platform", "Notifications");
