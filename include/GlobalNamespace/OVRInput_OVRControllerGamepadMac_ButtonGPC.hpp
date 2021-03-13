// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerGamepadMac
#include "GlobalNamespace/OVRInput_OVRControllerGamepadMac.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerGamepadMac/ButtonGPC
  // [] Offset: FFFFFFFF
  struct OVRInput::OVRControllerGamepadMac::ButtonGPC/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ButtonGPC
    constexpr ButtonGPC(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC None
    static constexpr const int None = -1;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC None
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_None();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC None
    static void _set_None(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC A
    static constexpr const int A = 0;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC A
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_A();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC A
    static void _set_A(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC B
    static constexpr const int B = 1;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC B
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_B();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC B
    static void _set_B(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC X
    static constexpr const int X = 2;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC X
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_X();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC X
    static void _set_X(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Y
    static constexpr const int Y = 3;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Y
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_Y();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Y
    static void _set_Y(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Up
    static constexpr const int Up = 4;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Up
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_Up();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Up
    static void _set_Up(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Down
    static constexpr const int Down = 5;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Down
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_Down();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Down
    static void _set_Down(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Left
    static constexpr const int Left = 6;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Left
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_Left();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Left
    static void _set_Left(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Right
    static constexpr const int Right = 7;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Right
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_Right();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Right
    static void _set_Right(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Start
    static constexpr const int Start = 8;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Start
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_Start();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Start
    static void _set_Start(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Back
    static constexpr const int Back = 9;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Back
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_Back();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Back
    static void _set_Back(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC LStick
    static constexpr const int LStick = 10;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC LStick
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_LStick();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC LStick
    static void _set_LStick(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC RStick
    static constexpr const int RStick = 11;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC RStick
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_RStick();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC RStick
    static void _set_RStick(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC LeftShoulder
    static constexpr const int LeftShoulder = 12;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC LeftShoulder
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_LeftShoulder();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC LeftShoulder
    static void _set_LeftShoulder(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC RightShoulder
    static constexpr const int RightShoulder = 13;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC RightShoulder
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_RightShoulder();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC RightShoulder
    static void _set_RightShoulder(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
    // static field const value: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Max
    static constexpr const int Max = 14;
    // Get static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Max
    static GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC _get_Max();
    // Set static field: static public OVRInput/OVRControllerGamepadMac/ButtonGPC Max
    static void _set_Max(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC value);
  }; // OVRInput/OVRControllerGamepadMac/ButtonGPC
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::OVRControllerGamepadMac::ButtonGPC), 0 + sizeof(int)> __GlobalNamespace_OVRInput_OVRControllerGamepadMac_ButtonGPCSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerGamepadMac::ButtonGPC) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerGamepadMac::ButtonGPC, "", "OVRInput/OVRControllerGamepadMac/ButtonGPC");
