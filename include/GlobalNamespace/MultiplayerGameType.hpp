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
  // Autogenerated type: MultiplayerGameType
  struct MultiplayerGameType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MultiplayerGameType
    constexpr MultiplayerGameType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerGameType None
    static constexpr const int None = 0;
    // Get static field: static public MultiplayerGameType None
    static GlobalNamespace::MultiplayerGameType _get_None();
    // Set static field: static public MultiplayerGameType None
    static void _set_None(GlobalNamespace::MultiplayerGameType value);
    // static field const value: static public MultiplayerGameType QuickPlay
    static constexpr const int QuickPlay = 1;
    // Get static field: static public MultiplayerGameType QuickPlay
    static GlobalNamespace::MultiplayerGameType _get_QuickPlay();
    // Set static field: static public MultiplayerGameType QuickPlay
    static void _set_QuickPlay(GlobalNamespace::MultiplayerGameType value);
    // static field const value: static public MultiplayerGameType Private
    static constexpr const int Private = 2;
    // Get static field: static public MultiplayerGameType Private
    static GlobalNamespace::MultiplayerGameType _get_Private();
    // Set static field: static public MultiplayerGameType Private
    static void _set_Private(GlobalNamespace::MultiplayerGameType value);
  }; // MultiplayerGameType
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerGameType), 0 + sizeof(int)> __GlobalNamespace_MultiplayerGameTypeSizeCheck;
  static_assert(sizeof(MultiplayerGameType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerGameType, "", "MultiplayerGameType");
