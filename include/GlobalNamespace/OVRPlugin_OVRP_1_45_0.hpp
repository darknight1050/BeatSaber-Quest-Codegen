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
  // Autogenerated type: OVRPlugin/OVRP_1_45_0
  class OVRPlugin::OVRP_1_45_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_45_0
    OVRP_1_45_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetSystemHmd3DofModeEnabled(ref OVRPlugin/Bool enabled)
    // Offset: 0x160ACD0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSystemHmd3DofModeEnabled(GlobalNamespace::OVRPlugin::Bool& enabled);
    // static public OVRPlugin/Result ovrp_Media_SetAvailableQueueIndexVulkan(System.UInt32 queueIndexVk)
    // Offset: 0x1604EAC
    static GlobalNamespace::OVRPlugin::Result ovrp_Media_SetAvailableQueueIndexVulkan(uint queueIndexVk);
    // static private System.Void .cctor()
    // Offset: 0x160AD50
    static void _cctor();
  }; // OVRPlugin/OVRP_1_45_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_45_0*, "", "OVRPlugin/OVRP_1_45_0");
