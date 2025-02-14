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
  // Autogenerated type: OVRPlugin/OVRP_1_55_1
  class OVRPlugin::OVRP_1_55_1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_55_1
    OVRP_1_55_1() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_PollEvent2(ref OVRPlugin/EventType eventType, ref System.IntPtr eventData)
    // Offset: 0x160BE44
    static GlobalNamespace::OVRPlugin::Result ovrp_PollEvent2(GlobalNamespace::OVRPlugin::EventType& eventType, System::IntPtr& eventData);
    // static private System.Void .cctor()
    // Offset: 0x160BED4
    static void _cctor();
  }; // OVRPlugin/OVRP_1_55_1
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_55_1*, "", "OVRPlugin/OVRP_1_55_1");
