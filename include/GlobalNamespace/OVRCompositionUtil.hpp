// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRManager
#include "GlobalNamespace/OVRManager.hpp"
// Including type: OVRBoundary
#include "GlobalNamespace/OVRBoundary.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRCompositionUtil
  class OVRCompositionUtil : public ::Il2CppObject {
    public:
    // static public System.Void SafeDestroy(UnityEngine.GameObject obj)
    // Offset: 0xC28F14
    static void SafeDestroy(UnityEngine::GameObject* obj);
    // static public System.Void SafeDestroy(UnityEngine.GameObject obj)
    // Offset: 0xC28FB4
    static void SafeDestroy(UnityEngine::GameObject*& obj);
    // static public OVRPlugin/CameraDevice ConvertCameraDevice(OVRManager/CameraDevice cameraDevice)
    // Offset: 0xC2904C
    static GlobalNamespace::OVRPlugin::CameraDevice ConvertCameraDevice(GlobalNamespace::OVRManager::CameraDevice cameraDevice);
    // static public OVRBoundary/BoundaryType ToBoundaryType(OVRManager/VirtualGreenScreenType type)
    // Offset: 0xC29078
    static GlobalNamespace::OVRBoundary::BoundaryType ToBoundaryType(GlobalNamespace::OVRManager::VirtualGreenScreenType type);
    // static public UnityEngine.Vector3 GetWorldPosition(UnityEngine.Vector3 trackingSpacePosition)
    // Offset: 0xC2910C
    static UnityEngine::Vector3 GetWorldPosition(UnityEngine::Vector3 trackingSpacePosition);
    // static public System.Single GetMaximumBoundaryDistance(UnityEngine.Camera camera, OVRBoundary/BoundaryType boundaryType)
    // Offset: 0xC291B8
    static float GetMaximumBoundaryDistance(UnityEngine::Camera* camera, GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // static public UnityEngine.Mesh BuildBoundaryMesh(OVRBoundary/BoundaryType boundaryType, System.Single topY, System.Single bottomY)
    // Offset: 0xC293F8
    static UnityEngine::Mesh* BuildBoundaryMesh(GlobalNamespace::OVRBoundary::BoundaryType boundaryType, float topY, float bottomY);
    // public System.Void .ctor()
    // Offset: 0xC298A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRCompositionUtil* New_ctor();
  }; // OVRCompositionUtil
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCompositionUtil*, "", "OVRCompositionUtil");
#pragma pack(pop)
