// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: OVRPlugin/OVRP_0_1_2
  class OVRPlugin::OVRP_0_1_2 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Posef ovrp_GetNodePose(OVRPlugin/Node nodeId)
    // Offset: 0xE9E384
    static GlobalNamespace::OVRPlugin::Posef ovrp_GetNodePose(GlobalNamespace::OVRPlugin::Node nodeId);
    // static public OVRPlugin/Bool ovrp_SetControllerVibration(System.UInt32 controllerMask, System.Single frequency, System.Single amplitude)
    // Offset: 0xE9E414
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetControllerVibration(uint controllerMask, float frequency, float amplitude);
    // static private System.Void .cctor()
    // Offset: 0xE9E4AC
    static void _cctor();
  }; // OVRPlugin/OVRP_0_1_2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_0_1_2*, "", "OVRPlugin/OVRP_0_1_2");
#pragma pack(pop)
