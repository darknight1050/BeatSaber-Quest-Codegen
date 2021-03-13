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
  // Autogenerated type: OVRPlugin/SkeletonType
  // [] Offset: FFFFFFFF
  struct OVRPlugin::SkeletonType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SkeletonType
    constexpr SkeletonType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/SkeletonType None
    static constexpr const int None = -1;
    // Get static field: static public OVRPlugin/SkeletonType None
    static GlobalNamespace::OVRPlugin::SkeletonType _get_None();
    // Set static field: static public OVRPlugin/SkeletonType None
    static void _set_None(GlobalNamespace::OVRPlugin::SkeletonType value);
    // static field const value: static public OVRPlugin/SkeletonType HandLeft
    static constexpr const int HandLeft = 0;
    // Get static field: static public OVRPlugin/SkeletonType HandLeft
    static GlobalNamespace::OVRPlugin::SkeletonType _get_HandLeft();
    // Set static field: static public OVRPlugin/SkeletonType HandLeft
    static void _set_HandLeft(GlobalNamespace::OVRPlugin::SkeletonType value);
    // static field const value: static public OVRPlugin/SkeletonType HandRight
    static constexpr const int HandRight = 1;
    // Get static field: static public OVRPlugin/SkeletonType HandRight
    static GlobalNamespace::OVRPlugin::SkeletonType _get_HandRight();
    // Set static field: static public OVRPlugin/SkeletonType HandRight
    static void _set_HandRight(GlobalNamespace::OVRPlugin::SkeletonType value);
  }; // OVRPlugin/SkeletonType
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::SkeletonType), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_SkeletonTypeSizeCheck;
  static_assert(sizeof(OVRPlugin::SkeletonType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::SkeletonType, "", "OVRPlugin/SkeletonType");
