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
  // Autogenerated type: OVRPlugin/OVRP_1_18_0
  class OVRPlugin::OVRP_1_18_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_SetHandNodePoseStateLatency(System.Double latencyInSeconds)
    // Offset: 0xE9FEB0
    static GlobalNamespace::OVRPlugin::Result ovrp_SetHandNodePoseStateLatency(double latencyInSeconds);
    // static public OVRPlugin/Result ovrp_GetHandNodePoseStateLatency(System.Double latencyInSeconds)
    // Offset: 0xE9FF38
    static GlobalNamespace::OVRPlugin::Result ovrp_GetHandNodePoseStateLatency(double& latencyInSeconds);
    // static public OVRPlugin/Result ovrp_GetAppHasInputFocus(OVRPlugin/Bool appHasInputFocus)
    // Offset: 0xE9FFB8
    static GlobalNamespace::OVRPlugin::Result ovrp_GetAppHasInputFocus(GlobalNamespace::OVRPlugin::Bool& appHasInputFocus);
    // static private System.Void .cctor()
    // Offset: 0xEA0038
    static void _cctor();
  }; // OVRPlugin/OVRP_1_18_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_18_0*, "", "OVRPlugin/OVRP_1_18_0");
#pragma pack(pop)
