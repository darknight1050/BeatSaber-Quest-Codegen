// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Sizei
  // [] Offset: FFFFFFFF
  struct OVRPlugin::Sizei/*, public System::ValueType*/ {
    public:
    // public System.Int32 w
    // Size: 0x4
    // Offset: 0x0
    int w;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 h
    // Size: 0x4
    // Offset: 0x4
    int h;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Sizei
    constexpr Sizei(int w_ = {}, int h_ = {}) noexcept : w{w_}, h{h_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static public readonly OVRPlugin/Sizei zero
    static GlobalNamespace::OVRPlugin::Sizei _get_zero();
    // Set static field: static public readonly OVRPlugin/Sizei zero
    static void _set_zero(GlobalNamespace::OVRPlugin::Sizei value);
    // static private System.Void .cctor()
    // Offset: 0x1560B4C
    static void _cctor();
  }; // OVRPlugin/Sizei
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Sizei), 4 + sizeof(int)> __GlobalNamespace_OVRPlugin_SizeiSizeCheck;
  static_assert(sizeof(OVRPlugin::Sizei) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Sizei, "", "OVRPlugin/Sizei");
