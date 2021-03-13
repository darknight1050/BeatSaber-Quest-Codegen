// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/Touch
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::Touch/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Touch
    constexpr Touch(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/Touch None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/Touch None
    static GlobalNamespace::OVRInput::Touch _get_None();
    // Set static field: static public OVRInput/Touch None
    static void _set_None(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch One
    static constexpr const int One = 1;
    // Get static field: static public OVRInput/Touch One
    static GlobalNamespace::OVRInput::Touch _get_One();
    // Set static field: static public OVRInput/Touch One
    static void _set_One(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch Two
    static constexpr const int Two = 2;
    // Get static field: static public OVRInput/Touch Two
    static GlobalNamespace::OVRInput::Touch _get_Two();
    // Set static field: static public OVRInput/Touch Two
    static void _set_Two(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch Three
    static constexpr const int Three = 4;
    // Get static field: static public OVRInput/Touch Three
    static GlobalNamespace::OVRInput::Touch _get_Three();
    // Set static field: static public OVRInput/Touch Three
    static void _set_Three(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch Four
    static constexpr const int Four = 8;
    // Get static field: static public OVRInput/Touch Four
    static GlobalNamespace::OVRInput::Touch _get_Four();
    // Set static field: static public OVRInput/Touch Four
    static void _set_Four(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch PrimaryIndexTrigger
    static constexpr const int PrimaryIndexTrigger = 8192;
    // Get static field: static public OVRInput/Touch PrimaryIndexTrigger
    static GlobalNamespace::OVRInput::Touch _get_PrimaryIndexTrigger();
    // Set static field: static public OVRInput/Touch PrimaryIndexTrigger
    static void _set_PrimaryIndexTrigger(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch PrimaryThumbstick
    static constexpr const int PrimaryThumbstick = 32768;
    // Get static field: static public OVRInput/Touch PrimaryThumbstick
    static GlobalNamespace::OVRInput::Touch _get_PrimaryThumbstick();
    // Set static field: static public OVRInput/Touch PrimaryThumbstick
    static void _set_PrimaryThumbstick(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch PrimaryThumbRest
    static constexpr const int PrimaryThumbRest = 4096;
    // Get static field: static public OVRInput/Touch PrimaryThumbRest
    static GlobalNamespace::OVRInput::Touch _get_PrimaryThumbRest();
    // Set static field: static public OVRInput/Touch PrimaryThumbRest
    static void _set_PrimaryThumbRest(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch PrimaryTouchpad
    static constexpr const int PrimaryTouchpad = 1024;
    // Get static field: static public OVRInput/Touch PrimaryTouchpad
    static GlobalNamespace::OVRInput::Touch _get_PrimaryTouchpad();
    // Set static field: static public OVRInput/Touch PrimaryTouchpad
    static void _set_PrimaryTouchpad(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch SecondaryIndexTrigger
    static constexpr const int SecondaryIndexTrigger = 2097152;
    // Get static field: static public OVRInput/Touch SecondaryIndexTrigger
    static GlobalNamespace::OVRInput::Touch _get_SecondaryIndexTrigger();
    // Set static field: static public OVRInput/Touch SecondaryIndexTrigger
    static void _set_SecondaryIndexTrigger(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch SecondaryThumbstick
    static constexpr const int SecondaryThumbstick = 8388608;
    // Get static field: static public OVRInput/Touch SecondaryThumbstick
    static GlobalNamespace::OVRInput::Touch _get_SecondaryThumbstick();
    // Set static field: static public OVRInput/Touch SecondaryThumbstick
    static void _set_SecondaryThumbstick(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch SecondaryThumbRest
    static constexpr const int SecondaryThumbRest = 1048576;
    // Get static field: static public OVRInput/Touch SecondaryThumbRest
    static GlobalNamespace::OVRInput::Touch _get_SecondaryThumbRest();
    // Set static field: static public OVRInput/Touch SecondaryThumbRest
    static void _set_SecondaryThumbRest(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch SecondaryTouchpad
    static constexpr const int SecondaryTouchpad = 2048;
    // Get static field: static public OVRInput/Touch SecondaryTouchpad
    static GlobalNamespace::OVRInput::Touch _get_SecondaryTouchpad();
    // Set static field: static public OVRInput/Touch SecondaryTouchpad
    static void _set_SecondaryTouchpad(GlobalNamespace::OVRInput::Touch value);
    // static field const value: static public OVRInput/Touch Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/Touch Any
    static GlobalNamespace::OVRInput::Touch _get_Any();
    // Set static field: static public OVRInput/Touch Any
    static void _set_Any(GlobalNamespace::OVRInput::Touch value);
  }; // OVRInput/Touch
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::Touch), 0 + sizeof(int)> __GlobalNamespace_OVRInput_TouchSizeCheck;
  static_assert(sizeof(OVRInput::Touch) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::Touch, "", "OVRInput/Touch");
