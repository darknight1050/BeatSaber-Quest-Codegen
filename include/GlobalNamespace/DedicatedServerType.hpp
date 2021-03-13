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
  // Autogenerated type: DedicatedServerType
  // [] Offset: FFFFFFFF
  struct DedicatedServerType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DedicatedServerType
    constexpr DedicatedServerType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DedicatedServerType RelayServer
    static constexpr const int RelayServer = 0;
    // Get static field: static public DedicatedServerType RelayServer
    static GlobalNamespace::DedicatedServerType _get_RelayServer();
    // Set static field: static public DedicatedServerType RelayServer
    static void _set_RelayServer(GlobalNamespace::DedicatedServerType value);
    // static field const value: static public DedicatedServerType MatchmakingServer
    static constexpr const int MatchmakingServer = 1;
    // Get static field: static public DedicatedServerType MatchmakingServer
    static GlobalNamespace::DedicatedServerType _get_MatchmakingServer();
    // Set static field: static public DedicatedServerType MatchmakingServer
    static void _set_MatchmakingServer(GlobalNamespace::DedicatedServerType value);
  }; // DedicatedServerType
  #pragma pack(pop)
  static check_size<sizeof(DedicatedServerType), 0 + sizeof(int)> __GlobalNamespace_DedicatedServerTypeSizeCheck;
  static_assert(sizeof(DedicatedServerType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DedicatedServerType, "", "DedicatedServerType");
