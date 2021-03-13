// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UpdateConnectionStateReason
  // [] Offset: FFFFFFFF
  struct UpdateConnectionStateReason/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: UpdateConnectionStateReason
    constexpr UpdateConnectionStateReason(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UpdateConnectionStateReason Init
    static constexpr const int Init = 0;
    // Get static field: static public UpdateConnectionStateReason Init
    static GlobalNamespace::UpdateConnectionStateReason _get_Init();
    // Set static field: static public UpdateConnectionStateReason Init
    static void _set_Init(GlobalNamespace::UpdateConnectionStateReason value);
    // static field const value: static public UpdateConnectionStateReason PlayerOrderChanged
    static constexpr const int PlayerOrderChanged = 1;
    // Get static field: static public UpdateConnectionStateReason PlayerOrderChanged
    static GlobalNamespace::UpdateConnectionStateReason _get_PlayerOrderChanged();
    // Set static field: static public UpdateConnectionStateReason PlayerOrderChanged
    static void _set_PlayerOrderChanged(GlobalNamespace::UpdateConnectionStateReason value);
    // static field const value: static public UpdateConnectionStateReason Connected
    static constexpr const int Connected = 2;
    // Get static field: static public UpdateConnectionStateReason Connected
    static GlobalNamespace::UpdateConnectionStateReason _get_Connected();
    // Set static field: static public UpdateConnectionStateReason Connected
    static void _set_Connected(GlobalNamespace::UpdateConnectionStateReason value);
    // static field const value: static public UpdateConnectionStateReason StartSession
    static constexpr const int StartSession = 3;
    // Get static field: static public UpdateConnectionStateReason StartSession
    static GlobalNamespace::UpdateConnectionStateReason _get_StartSession();
    // Set static field: static public UpdateConnectionStateReason StartSession
    static void _set_StartSession(GlobalNamespace::UpdateConnectionStateReason value);
    // static field const value: static public UpdateConnectionStateReason StartDedicatedServer
    static constexpr const int StartDedicatedServer = 4;
    // Get static field: static public UpdateConnectionStateReason StartDedicatedServer
    static GlobalNamespace::UpdateConnectionStateReason _get_StartDedicatedServer();
    // Set static field: static public UpdateConnectionStateReason StartDedicatedServer
    static void _set_StartDedicatedServer(GlobalNamespace::UpdateConnectionStateReason value);
    // static field const value: static public UpdateConnectionStateReason SyncTimeInitialized
    static constexpr const int SyncTimeInitialized = 5;
    // Get static field: static public UpdateConnectionStateReason SyncTimeInitialized
    static GlobalNamespace::UpdateConnectionStateReason _get_SyncTimeInitialized();
    // Set static field: static public UpdateConnectionStateReason SyncTimeInitialized
    static void _set_SyncTimeInitialized(GlobalNamespace::UpdateConnectionStateReason value);
    // static field const value: static public UpdateConnectionStateReason ManualDisconnect
    static constexpr const int ManualDisconnect = 6;
    // Get static field: static public UpdateConnectionStateReason ManualDisconnect
    static GlobalNamespace::UpdateConnectionStateReason _get_ManualDisconnect();
    // Set static field: static public UpdateConnectionStateReason ManualDisconnect
    static void _set_ManualDisconnect(GlobalNamespace::UpdateConnectionStateReason value);
    // static field const value: static public UpdateConnectionStateReason RemoteDisconnect
    static constexpr const int RemoteDisconnect = 7;
    // Get static field: static public UpdateConnectionStateReason RemoteDisconnect
    static GlobalNamespace::UpdateConnectionStateReason _get_RemoteDisconnect();
    // Set static field: static public UpdateConnectionStateReason RemoteDisconnect
    static void _set_RemoteDisconnect(GlobalNamespace::UpdateConnectionStateReason value);
    // static field const value: static public UpdateConnectionStateReason ConnectionFailed
    static constexpr const int ConnectionFailed = 8;
    // Get static field: static public UpdateConnectionStateReason ConnectionFailed
    static GlobalNamespace::UpdateConnectionStateReason _get_ConnectionFailed();
    // Set static field: static public UpdateConnectionStateReason ConnectionFailed
    static void _set_ConnectionFailed(GlobalNamespace::UpdateConnectionStateReason value);
    // static field const value: static public UpdateConnectionStateReason OnDestroy
    static constexpr const int OnDestroy = 9;
    // Get static field: static public UpdateConnectionStateReason OnDestroy
    static GlobalNamespace::UpdateConnectionStateReason _get_OnDestroy();
    // Set static field: static public UpdateConnectionStateReason OnDestroy
    static void _set_OnDestroy(GlobalNamespace::UpdateConnectionStateReason value);
  }; // UpdateConnectionStateReason
  #pragma pack(pop)
  static check_size<sizeof(UpdateConnectionStateReason), 0 + sizeof(int)> __GlobalNamespace_UpdateConnectionStateReasonSizeCheck;
  static_assert(sizeof(UpdateConnectionStateReason) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UpdateConnectionStateReason, "", "UpdateConnectionStateReason");
