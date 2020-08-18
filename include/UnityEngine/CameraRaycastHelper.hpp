// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.CameraRaycastHelper
  class CameraRaycastHelper : public ::Il2CppObject {
    public:
    // static UnityEngine.GameObject RaycastTry(UnityEngine.Camera cam, UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x18CB248
    static UnityEngine::GameObject* RaycastTry(UnityEngine::Camera* cam, UnityEngine::Ray ray, float distance, int layerMask);
    // static UnityEngine.GameObject RaycastTry2D(UnityEngine.Camera cam, UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x18CB318
    static UnityEngine::GameObject* RaycastTry2D(UnityEngine::Camera* cam, UnityEngine::Ray ray, float distance, int layerMask);
    // static private UnityEngine.GameObject RaycastTry_Injected(UnityEngine.Camera cam, UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x18CB2B0
    static UnityEngine::GameObject* RaycastTry_Injected(UnityEngine::Camera* cam, UnityEngine::Ray& ray, float distance, int layerMask);
    // static private UnityEngine.GameObject RaycastTry2D_Injected(UnityEngine.Camera cam, UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x18CB380
    static UnityEngine::GameObject* RaycastTry2D_Injected(UnityEngine::Camera* cam, UnityEngine::Ray& ray, float distance, int layerMask);
  }; // UnityEngine.CameraRaycastHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CameraRaycastHelper*, "UnityEngine", "CameraRaycastHelper");
#pragma pack(pop)
