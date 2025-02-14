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
  // Autogenerated type: OVRPlugin/OVRP_0_1_0
  class OVRPlugin::OVRP_0_1_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_0_1_0
    OVRP_0_1_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Sizei ovrp_GetEyeTextureSize(OVRPlugin/Eye eyeId)
    // Offset: 0x160519C
    static GlobalNamespace::OVRPlugin::Sizei ovrp_GetEyeTextureSize(GlobalNamespace::OVRPlugin::Eye eyeId);
    // static private System.Void .cctor()
    // Offset: 0x160521C
    static void _cctor();
  }; // OVRPlugin/OVRP_0_1_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_0_1_0*, "", "OVRPlugin/OVRP_0_1_0");
