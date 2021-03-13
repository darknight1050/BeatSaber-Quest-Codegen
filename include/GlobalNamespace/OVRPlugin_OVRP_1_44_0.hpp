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
  // Autogenerated type: OVRPlugin/OVRP_1_44_0
  // [] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_44_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_44_0
    OVRP_1_44_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static public OVRPlugin/Result ovrp_GetHandTrackingEnabled(ref OVRPlugin/Bool handTrackingEnabled)
    // Offset: 0x155DFA8
    static GlobalNamespace::OVRPlugin::Result ovrp_GetHandTrackingEnabled(GlobalNamespace::OVRPlugin::Bool& handTrackingEnabled);
    // static public OVRPlugin/Result ovrp_GetHandState(OVRPlugin/Step stepId, OVRPlugin/Hand hand, out OVRPlugin/HandStateInternal handState)
    // Offset: 0x155E028
    static GlobalNamespace::OVRPlugin::Result ovrp_GetHandState(GlobalNamespace::OVRPlugin::Step stepId, GlobalNamespace::OVRPlugin::Hand hand, GlobalNamespace::OVRPlugin::HandStateInternal& handState);
    // static public OVRPlugin/Result ovrp_GetSkeleton(OVRPlugin/SkeletonType skeletonType, out OVRPlugin/Skeleton skeleton)
    // Offset: 0x155E0C0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetSkeleton(GlobalNamespace::OVRPlugin::SkeletonType skeletonType, GlobalNamespace::OVRPlugin::Skeleton& skeleton);
    // static public OVRPlugin/Result ovrp_GetMesh(OVRPlugin/MeshType meshType, System.IntPtr meshPtr)
    // Offset: 0x155E18C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetMesh(GlobalNamespace::OVRPlugin::MeshType meshType, System::IntPtr meshPtr);
    // static public OVRPlugin/Result ovrp_OverrideExternalCameraFov(System.Int32 cameraId, OVRPlugin/Bool useOverriddenFov, ref OVRPlugin/Fovf fov)
    // Offset: 0x155E218
    static GlobalNamespace::OVRPlugin::Result ovrp_OverrideExternalCameraFov(int cameraId, GlobalNamespace::OVRPlugin::Bool useOverriddenFov, GlobalNamespace::OVRPlugin::Fovf& fov);
    // static public OVRPlugin/Result ovrp_GetUseOverriddenExternalCameraFov(System.Int32 cameraId, out OVRPlugin/Bool useOverriddenFov)
    // Offset: 0x155E2B0
    static GlobalNamespace::OVRPlugin::Result ovrp_GetUseOverriddenExternalCameraFov(int cameraId, GlobalNamespace::OVRPlugin::Bool& useOverriddenFov);
    // static public OVRPlugin/Result ovrp_OverrideExternalCameraStaticPose(System.Int32 cameraId, OVRPlugin/Bool useOverriddenPose, ref OVRPlugin/Posef poseInStageOrigin)
    // Offset: 0x155E340
    static GlobalNamespace::OVRPlugin::Result ovrp_OverrideExternalCameraStaticPose(int cameraId, GlobalNamespace::OVRPlugin::Bool useOverriddenPose, GlobalNamespace::OVRPlugin::Posef& poseInStageOrigin);
    // static public OVRPlugin/Result ovrp_GetUseOverriddenExternalCameraStaticPose(System.Int32 cameraId, out OVRPlugin/Bool useOverriddenStaticPose)
    // Offset: 0x155E3D8
    static GlobalNamespace::OVRPlugin::Result ovrp_GetUseOverriddenExternalCameraStaticPose(int cameraId, GlobalNamespace::OVRPlugin::Bool& useOverriddenStaticPose);
    // static public OVRPlugin/Result ovrp_ResetDefaultExternalCamera()
    // Offset: 0x155E468
    static GlobalNamespace::OVRPlugin::Result ovrp_ResetDefaultExternalCamera();
    // static public OVRPlugin/Result ovrp_SetDefaultExternalCamera(System.String cameraName, ref OVRPlugin/CameraIntrinsics cameraIntrinsics, ref OVRPlugin/CameraExtrinsics cameraExtrinsics)
    // Offset: 0x155E4DC
    static GlobalNamespace::OVRPlugin::Result ovrp_SetDefaultExternalCamera(::Il2CppString* cameraName, GlobalNamespace::OVRPlugin::CameraIntrinsics& cameraIntrinsics, GlobalNamespace::OVRPlugin::CameraExtrinsics& cameraExtrinsics);
    // static public OVRPlugin/Result ovrp_GetLocalTrackingSpaceRecenterCount(ref System.Int32 recenterCount)
    // Offset: 0x155E58C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetLocalTrackingSpaceRecenterCount(int& recenterCount);
    // static private System.Void .cctor()
    // Offset: 0x155E60C
    static void _cctor();
  }; // OVRPlugin/OVRP_1_44_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_44_0*, "", "OVRPlugin/OVRP_1_44_0");
