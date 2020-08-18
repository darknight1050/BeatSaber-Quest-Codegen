// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: OVRManager/CompositionMethod
#include "GlobalNamespace/OVRManager.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: OVRManager/CameraDevice
// Already included the same include: GlobalNamespace/OVRManager.hpp
// Including type: OVRManager/DepthQuality
// Already included the same include: GlobalNamespace/OVRManager.hpp
// Including type: OVRManager/VirtualGreenScreenType
// Already included the same include: GlobalNamespace/OVRManager.hpp
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: OVRManager because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRMixedRealityCaptureSettings
  class OVRMixedRealityCaptureSettings : public UnityEngine::ScriptableObject {
    public:
    // public System.Boolean enableMixedReality
    // Offset: 0x18
    bool enableMixedReality;
    // public UnityEngine.LayerMask extraHiddenLayers
    // Offset: 0x1C
    UnityEngine::LayerMask extraHiddenLayers;
    // public OVRManager/CompositionMethod compositionMethod
    // Offset: 0x20
    GlobalNamespace::OVRManager::CompositionMethod compositionMethod;
    // public UnityEngine.Color externalCompositionBackdropColorRift
    // Offset: 0x24
    UnityEngine::Color externalCompositionBackdropColorRift;
    // public UnityEngine.Color externalCompositionBackdropColorQuest
    // Offset: 0x34
    UnityEngine::Color externalCompositionBackdropColorQuest;
    // public OVRManager/CameraDevice capturingCameraDevice
    // Offset: 0x44
    GlobalNamespace::OVRManager::CameraDevice capturingCameraDevice;
    // public System.Boolean flipCameraFrameHorizontally
    // Offset: 0x48
    bool flipCameraFrameHorizontally;
    // public System.Boolean flipCameraFrameVertically
    // Offset: 0x49
    bool flipCameraFrameVertically;
    // public System.Single handPoseStateLatency
    // Offset: 0x4C
    float handPoseStateLatency;
    // public System.Single sandwichCompositionRenderLatency
    // Offset: 0x50
    float sandwichCompositionRenderLatency;
    // public System.Int32 sandwichCompositionBufferedFrames
    // Offset: 0x54
    int sandwichCompositionBufferedFrames;
    // public UnityEngine.Color chromaKeyColor
    // Offset: 0x58
    UnityEngine::Color chromaKeyColor;
    // public System.Single chromaKeySimilarity
    // Offset: 0x68
    float chromaKeySimilarity;
    // public System.Single chromaKeySmoothRange
    // Offset: 0x6C
    float chromaKeySmoothRange;
    // public System.Single chromaKeySpillRange
    // Offset: 0x70
    float chromaKeySpillRange;
    // public System.Boolean useDynamicLighting
    // Offset: 0x74
    bool useDynamicLighting;
    // public OVRManager/DepthQuality depthQuality
    // Offset: 0x78
    GlobalNamespace::OVRManager::DepthQuality depthQuality;
    // public System.Single dynamicLightingSmoothFactor
    // Offset: 0x7C
    float dynamicLightingSmoothFactor;
    // public System.Single dynamicLightingDepthVariationClampingValue
    // Offset: 0x80
    float dynamicLightingDepthVariationClampingValue;
    // public OVRManager/VirtualGreenScreenType virtualGreenScreenType
    // Offset: 0x84
    GlobalNamespace::OVRManager::VirtualGreenScreenType virtualGreenScreenType;
    // public System.Single virtualGreenScreenTopY
    // Offset: 0x88
    float virtualGreenScreenTopY;
    // public System.Single virtualGreenScreenBottomY
    // Offset: 0x8C
    float virtualGreenScreenBottomY;
    // public System.Boolean virtualGreenScreenApplyDepthCulling
    // Offset: 0x90
    bool virtualGreenScreenApplyDepthCulling;
    // public System.Single virtualGreenScreenDepthTolerance
    // Offset: 0x94
    float virtualGreenScreenDepthTolerance;
    // public System.Void ReadFrom(OVRManager manager)
    // Offset: 0xE47FB8
    void ReadFrom(GlobalNamespace::OVRManager* manager);
    // public System.Void ApplyTo(OVRManager manager)
    // Offset: 0xE4808C
    void ApplyTo(GlobalNamespace::OVRManager* manager);
    // public System.Void .ctor()
    // Offset: 0xE48160
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRMixedRealityCaptureSettings* New_ctor();
  }; // OVRMixedRealityCaptureSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureSettings*, "", "OVRMixedRealityCaptureSettings");
#pragma pack(pop)
