// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_0_1_1
  // [] Offset: FFFFFFFF
  class OVRPlugin::OVRP_0_1_1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_0_1_1
    OVRP_0_1_1() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Bool ovrp_SetOverlayQuad2(OVRPlugin/Bool onTop, OVRPlugin/Bool headLocked, System.IntPtr texture, System.IntPtr device, OVRPlugin/Posef pose, OVRPlugin/Vector3f scale)
    // Offset: 0x1558C4C
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetOverlayQuad2(GlobalNamespace::OVRPlugin::Bool onTop, GlobalNamespace::OVRPlugin::Bool headLocked, System::IntPtr texture, System::IntPtr device, GlobalNamespace::OVRPlugin::Posef pose, GlobalNamespace::OVRPlugin::Vector3f scale);
    // static private System.Void .cctor()
    // Offset: 0x1558D34
    static void _cctor();
  }; // OVRPlugin/OVRP_0_1_1
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_0_1_1*, "", "OVRPlugin/OVRP_0_1_1");
