// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/CameraAnchorType
  // [] Offset: FFFFFFFF
  struct OVRPlugin::CameraAnchorType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CameraAnchorType
    constexpr CameraAnchorType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/CameraAnchorType CameraAnchorType_PreDefined
    static constexpr const int CameraAnchorType_PreDefined = 0;
    // Get static field: static public OVRPlugin/CameraAnchorType CameraAnchorType_PreDefined
    static GlobalNamespace::OVRPlugin::CameraAnchorType _get_CameraAnchorType_PreDefined();
    // Set static field: static public OVRPlugin/CameraAnchorType CameraAnchorType_PreDefined
    static void _set_CameraAnchorType_PreDefined(GlobalNamespace::OVRPlugin::CameraAnchorType value);
    // static field const value: static public OVRPlugin/CameraAnchorType CameraAnchorType_Custom
    static constexpr const int CameraAnchorType_Custom = 1;
    // Get static field: static public OVRPlugin/CameraAnchorType CameraAnchorType_Custom
    static GlobalNamespace::OVRPlugin::CameraAnchorType _get_CameraAnchorType_Custom();
    // Set static field: static public OVRPlugin/CameraAnchorType CameraAnchorType_Custom
    static void _set_CameraAnchorType_Custom(GlobalNamespace::OVRPlugin::CameraAnchorType value);
    // static field const value: static public OVRPlugin/CameraAnchorType CameraAnchorType_Count
    static constexpr const int CameraAnchorType_Count = 2;
    // Get static field: static public OVRPlugin/CameraAnchorType CameraAnchorType_Count
    static GlobalNamespace::OVRPlugin::CameraAnchorType _get_CameraAnchorType_Count();
    // Set static field: static public OVRPlugin/CameraAnchorType CameraAnchorType_Count
    static void _set_CameraAnchorType_Count(GlobalNamespace::OVRPlugin::CameraAnchorType value);
    // static field const value: static public OVRPlugin/CameraAnchorType CameraAnchorType_EnumSize
    static constexpr const int CameraAnchorType_EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/CameraAnchorType CameraAnchorType_EnumSize
    static GlobalNamespace::OVRPlugin::CameraAnchorType _get_CameraAnchorType_EnumSize();
    // Set static field: static public OVRPlugin/CameraAnchorType CameraAnchorType_EnumSize
    static void _set_CameraAnchorType_EnumSize(GlobalNamespace::OVRPlugin::CameraAnchorType value);
  }; // OVRPlugin/CameraAnchorType
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraAnchorType), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_CameraAnchorTypeSizeCheck;
  static_assert(sizeof(OVRPlugin::CameraAnchorType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraAnchorType, "", "OVRPlugin/CameraAnchorType");
