// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
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
  // Autogenerated type: OVRPlugin/OVRP_1_15_0
  class OVRPlugin::OVRP_1_15_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static field const value: static public System.Int32 OVRP_EXTERNAL_CAMERA_NAME_SIZE
    static constexpr const int OVRP_EXTERNAL_CAMERA_NAME_SIZE = 32;
    // Get static field: static public System.Int32 OVRP_EXTERNAL_CAMERA_NAME_SIZE
    static int _get_OVRP_EXTERNAL_CAMERA_NAME_SIZE();
    // Set static field: static public System.Int32 OVRP_EXTERNAL_CAMERA_NAME_SIZE
    static void _set_OVRP_EXTERNAL_CAMERA_NAME_SIZE(int value);
    // static public OVRPlugin/Result ovrp_InitializeMixedReality()
    // Offset: 0xE9EDA8
    static GlobalNamespace::OVRPlugin::Result ovrp_InitializeMixedReality();
    // static public OVRPlugin/Result ovrp_ShutdownMixedReality()
    // Offset: 0xE9EE1C
    static GlobalNamespace::OVRPlugin::Result ovrp_ShutdownMixedReality();
    // static public OVRPlugin/Bool ovrp_GetMixedRealityInitialized()
    // Offset: 0xE9EE90
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetMixedRealityInitialized();
    // static public OVRPlugin/Result ovrp_UpdateExternalCamera()
    // Offset: 0xE9EF04
    static GlobalNamespace::OVRPlugin::Result ovrp_UpdateExternalCamera();
    // static public OVRPlugin/Result ovrp_GetExternalCameraCount(System.Int32 cameraCount)
    // Offset: 0xE9EF78
    static GlobalNamespace::OVRPlugin::Result ovrp_GetExternalCameraCount(int& cameraCount);
    // static public OVRPlugin/Result ovrp_GetExternalCameraName(System.Int32 cameraId, System.Char[] cameraName)
    // Offset: 0xE9EFF8
    static GlobalNamespace::OVRPlugin::Result ovrp_GetExternalCameraName(int cameraId, ::Array<::Il2CppChar>* cameraName);
    // static public OVRPlugin/Result ovrp_GetExternalCameraIntrinsics(System.Int32 cameraId, OVRPlugin/CameraIntrinsics cameraIntrinsics)
    // Offset: 0xE9F114
    static GlobalNamespace::OVRPlugin::Result ovrp_GetExternalCameraIntrinsics(int cameraId, GlobalNamespace::OVRPlugin::CameraIntrinsics& cameraIntrinsics);
    // static public OVRPlugin/Result ovrp_GetExternalCameraExtrinsics(System.Int32 cameraId, OVRPlugin/CameraExtrinsics cameraExtrinsics)
    // Offset: 0xE9F1A4
    static GlobalNamespace::OVRPlugin::Result ovrp_GetExternalCameraExtrinsics(int cameraId, GlobalNamespace::OVRPlugin::CameraExtrinsics& cameraExtrinsics);
    // static public OVRPlugin/Result ovrp_CalculateLayerDesc(OVRPlugin/OverlayShape shape, OVRPlugin/LayerLayout layout, OVRPlugin/Sizei textureSize, System.Int32 mipLevels, System.Int32 sampleCount, OVRPlugin/EyeTextureFormat format, System.Int32 layerFlags, OVRPlugin/LayerDesc layerDesc)
    // Offset: 0xE9F234
    static GlobalNamespace::OVRPlugin::Result ovrp_CalculateLayerDesc(GlobalNamespace::OVRPlugin::OverlayShape shape, GlobalNamespace::OVRPlugin::LayerLayout layout, GlobalNamespace::OVRPlugin::Sizei& textureSize, int mipLevels, int sampleCount, GlobalNamespace::OVRPlugin::EyeTextureFormat format, int layerFlags, GlobalNamespace::OVRPlugin::LayerDesc& layerDesc);
    // static public OVRPlugin/Result ovrp_EnqueueSetupLayer(OVRPlugin/LayerDesc desc, System.IntPtr layerId)
    // Offset: 0xE9F37C
    static GlobalNamespace::OVRPlugin::Result ovrp_EnqueueSetupLayer(GlobalNamespace::OVRPlugin::LayerDesc& desc, System::IntPtr layerId);
    // static public OVRPlugin/Result ovrp_EnqueueDestroyLayer(System.IntPtr layerId)
    // Offset: 0xE9F46C
    static GlobalNamespace::OVRPlugin::Result ovrp_EnqueueDestroyLayer(System::IntPtr layerId);
    // static public OVRPlugin/Result ovrp_GetLayerTextureStageCount(System.Int32 layerId, System.Int32 layerTextureStageCount)
    // Offset: 0xE9F4EC
    static GlobalNamespace::OVRPlugin::Result ovrp_GetLayerTextureStageCount(int layerId, int& layerTextureStageCount);
    // static public OVRPlugin/Result ovrp_GetLayerTexturePtr(System.Int32 layerId, System.Int32 stage, OVRPlugin/Eye eyeId, System.IntPtr textureHandle)
    // Offset: 0xE9F57C
    static GlobalNamespace::OVRPlugin::Result ovrp_GetLayerTexturePtr(int layerId, int stage, GlobalNamespace::OVRPlugin::Eye eyeId, System::IntPtr& textureHandle);
    // static public OVRPlugin/Result ovrp_EnqueueSubmitLayer(System.UInt32 flags, System.IntPtr textureLeft, System.IntPtr textureRight, System.Int32 layerId, System.Int32 frameIndex, OVRPlugin/Posef pose, OVRPlugin/Vector3f scale, System.Int32 layerIndex)
    // Offset: 0xE9F624
    static GlobalNamespace::OVRPlugin::Result ovrp_EnqueueSubmitLayer(uint flags, System::IntPtr textureLeft, System::IntPtr textureRight, int layerId, int frameIndex, GlobalNamespace::OVRPlugin::Posef& pose, GlobalNamespace::OVRPlugin::Vector3f& scale, int layerIndex);
    // static public OVRPlugin/Result ovrp_GetNodeFrustum2(OVRPlugin/Node nodeId, OVRPlugin/Frustumf2 nodeFrustum)
    // Offset: 0xE9F6FC
    static GlobalNamespace::OVRPlugin::Result ovrp_GetNodeFrustum2(GlobalNamespace::OVRPlugin::Node nodeId, GlobalNamespace::OVRPlugin::Frustumf2& nodeFrustum);
    // static public OVRPlugin/Bool ovrp_GetEyeTextureArrayEnabled()
    // Offset: 0xE9F78C
    static GlobalNamespace::OVRPlugin::Bool ovrp_GetEyeTextureArrayEnabled();
    // static private System.Void .cctor()
    // Offset: 0xE9F800
    static void _cctor();
  }; // OVRPlugin/OVRP_1_15_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_15_0*, "", "OVRPlugin/OVRP_1_15_0");
#pragma pack(pop)
