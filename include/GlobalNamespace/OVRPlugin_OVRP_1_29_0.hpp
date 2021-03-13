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
  // Autogenerated type: OVRPlugin/OVRP_1_29_0
  // [] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_29_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_29_0
    OVRP_1_29_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetLayerAndroidSurfaceObject(System.Int32 layerId, ref System.IntPtr surfaceObject)
    // Offset: 0x155CA18
    static GlobalNamespace::OVRPlugin::Result ovrp_GetLayerAndroidSurfaceObject(int layerId, System::IntPtr& surfaceObject);
    // static public OVRPlugin/Result ovrp_SetHeadPoseModifier(ref OVRPlugin/Quatf relativeRotation, ref OVRPlugin/Vector3f relativeTranslation)
    // Offset: 0x155CAA8
    static GlobalNamespace::OVRPlugin::Result ovrp_SetHeadPoseModifier(GlobalNamespace::OVRPlugin::Quatf& relativeRotation, GlobalNamespace::OVRPlugin::Vector3f& relativeTranslation);
    // static public OVRPlugin/Result ovrp_GetHeadPoseModifier(out OVRPlugin/Quatf relativeRotation, out OVRPlugin/Vector3f relativeTranslation)
    // Offset: 0x155CB38
    static GlobalNamespace::OVRPlugin::Result ovrp_GetHeadPoseModifier(GlobalNamespace::OVRPlugin::Quatf& relativeRotation, GlobalNamespace::OVRPlugin::Vector3f& relativeTranslation);
    // static public OVRPlugin/Result ovrp_GetNodePoseStateRaw(OVRPlugin/Step stepId, System.Int32 frameIndex, OVRPlugin/Node nodeId, out OVRPlugin/PoseStatef nodePoseState)
    // Offset: 0x155CBC8
    static GlobalNamespace::OVRPlugin::Result ovrp_GetNodePoseStateRaw(GlobalNamespace::OVRPlugin::Step stepId, int frameIndex, GlobalNamespace::OVRPlugin::Node nodeId, GlobalNamespace::OVRPlugin::PoseStatef& nodePoseState);
    // static private System.Void .cctor()
    // Offset: 0x155CC70
    static void _cctor();
  }; // OVRPlugin/OVRP_1_29_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_29_0*, "", "OVRPlugin/OVRP_1_29_0");
