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
  // Autogenerated type: XRDeviceModel
  // [] Offset: FFFFFFFF
  struct XRDeviceModel/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: XRDeviceModel
    constexpr XRDeviceModel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public XRDeviceModel Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public XRDeviceModel Unknown
    static GlobalNamespace::XRDeviceModel _get_Unknown();
    // Set static field: static public XRDeviceModel Unknown
    static void _set_Unknown(GlobalNamespace::XRDeviceModel value);
    // static field const value: static public XRDeviceModel OculusRift
    static constexpr const int OculusRift = 1;
    // Get static field: static public XRDeviceModel OculusRift
    static GlobalNamespace::XRDeviceModel _get_OculusRift();
    // Set static field: static public XRDeviceModel OculusRift
    static void _set_OculusRift(GlobalNamespace::XRDeviceModel value);
    // static field const value: static public XRDeviceModel OculusQuest
    static constexpr const int OculusQuest = 2;
    // Get static field: static public XRDeviceModel OculusQuest
    static GlobalNamespace::XRDeviceModel _get_OculusQuest();
    // Set static field: static public XRDeviceModel OculusQuest
    static void _set_OculusQuest(GlobalNamespace::XRDeviceModel value);
    // static field const value: static public XRDeviceModel OculusQuestLink
    static constexpr const int OculusQuestLink = 3;
    // Get static field: static public XRDeviceModel OculusQuestLink
    static GlobalNamespace::XRDeviceModel _get_OculusQuestLink();
    // Set static field: static public XRDeviceModel OculusQuestLink
    static void _set_OculusQuestLink(GlobalNamespace::XRDeviceModel value);
    // static field const value: static public XRDeviceModel Other
    static constexpr const int Other = 4;
    // Get static field: static public XRDeviceModel Other
    static GlobalNamespace::XRDeviceModel _get_Other();
    // Set static field: static public XRDeviceModel Other
    static void _set_Other(GlobalNamespace::XRDeviceModel value);
  }; // XRDeviceModel
  #pragma pack(pop)
  static check_size<sizeof(XRDeviceModel), 0 + sizeof(int)> __GlobalNamespace_XRDeviceModelSizeCheck;
  static_assert(sizeof(XRDeviceModel) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::XRDeviceModel, "", "XRDeviceModel");
