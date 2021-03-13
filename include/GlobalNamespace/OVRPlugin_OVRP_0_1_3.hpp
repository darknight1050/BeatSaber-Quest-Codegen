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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_0_1_3
  // [] Offset: FFFFFFFF
  class OVRPlugin::OVRP_0_1_3 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_0_1_3
    OVRP_0_1_3() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Posef ovrp_GetNodeVelocity(OVRPlugin/Node nodeId)
    // Offset: 0x1558F4C
    static GlobalNamespace::OVRPlugin::Posef ovrp_GetNodeVelocity(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Posef ovrp_GetNodeAcceleration(OVRPlugin/Node nodeId)
    // Offset: 0x1558FDC
    static GlobalNamespace::OVRPlugin::Posef ovrp_GetNodeAcceleration(GlobalNamespace::OVRPlugin::Node nodeId);
    // static private System.Void .cctor()
    // Offset: 0x155906C
    static void _cctor();
  }; // OVRPlugin/OVRP_0_1_3
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_0_1_3*, "", "OVRPlugin/OVRP_0_1_3");
