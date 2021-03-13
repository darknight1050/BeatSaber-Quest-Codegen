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
  // Autogenerated type: OVRPlugin/OVRP_1_42_0
  // [] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_42_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_42_0
    OVRP_1_42_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetAdaptiveGpuPerformanceScale2(ref System.Single adaptiveGpuPerformanceScale)
    // Offset: 0x155DE38
    static GlobalNamespace::OVRPlugin::Result ovrp_GetAdaptiveGpuPerformanceScale2(float& adaptiveGpuPerformanceScale);
    // static private System.Void .cctor()
    // Offset: 0x155DEB8
    static void _cctor();
  }; // OVRPlugin/OVRP_1_42_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_42_0*, "", "OVRPlugin/OVRP_1_42_0");
