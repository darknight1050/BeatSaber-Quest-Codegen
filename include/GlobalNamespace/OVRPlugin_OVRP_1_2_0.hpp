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
  // Autogenerated type: OVRPlugin/OVRP_1_2_0
  class OVRPlugin::OVRP_1_2_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Bool ovrp_SetSystemVSyncCount(System.Int32 vsyncCount)
    // Offset: 0xEA243C
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemVSyncCount(int vsyncCount);
    // static public OVRPlugin/Bool ovrpi_SetTrackingCalibratedOrigin()
    // Offset: 0xEA24BC
    static GlobalNamespace::OVRPlugin::Bool ovrpi_SetTrackingCalibratedOrigin();
    // static private System.Void .cctor()
    // Offset: 0xEA2530
    static void _cctor();
  }; // OVRPlugin/OVRP_1_2_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_2_0*, "", "OVRPlugin/OVRP_1_2_0");
#pragma pack(pop)
