// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncConnection
  class NetSyncConnection;
  // Forward declaring type: NetSyncSessionsChangedNotification
  class NetSyncSessionsChangedNotification;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.NetSync
  class NetSync : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NetSync
    NetSync() noexcept {}
    // static public System.Void SetConnectionStatusChangedNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncConnection> callback)
    // Offset: 0x14BD64C
    static void SetConnectionStatusChangedNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncConnection*>::Callback* callback);
    // static public System.Void SetSessionsChangedNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncSessionsChangedNotification> callback)
    // Offset: 0x14BD6C4
    static void SetSessionsChangedNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSessionsChangedNotification*>::Callback* callback);
  }; // Oculus.Platform.NetSync
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSync*, "Oculus.Platform", "NetSync");
