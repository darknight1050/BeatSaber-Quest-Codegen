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
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.V3Tools
  class V3Tools : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector3 Lerp(UnityEngine.Vector3 fromVector, UnityEngine.Vector3 toVector, System.Single weight)
    // Offset: 0x11A2860
    static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 fromVector, UnityEngine::Vector3 toVector, float weight);
    // static public UnityEngine.Vector3 Slerp(UnityEngine.Vector3 fromVector, UnityEngine.Vector3 toVector, System.Single weight)
    // Offset: 0x11A2958
    static UnityEngine::Vector3 Slerp(UnityEngine::Vector3 fromVector, UnityEngine::Vector3 toVector, float weight);
    // static public UnityEngine.Vector3 ExtractVertical(UnityEngine.Vector3 v, UnityEngine.Vector3 verticalAxis, System.Single weight)
    // Offset: 0x11A2A50
    static UnityEngine::Vector3 ExtractVertical(UnityEngine::Vector3 v, UnityEngine::Vector3 verticalAxis, float weight);
    // static public UnityEngine.Vector3 ExtractHorizontal(UnityEngine.Vector3 v, UnityEngine.Vector3 normal, System.Single weight)
    // Offset: 0x11A2B48
    static UnityEngine::Vector3 ExtractHorizontal(UnityEngine::Vector3 v, UnityEngine::Vector3 normal, float weight);
    // static public UnityEngine.Vector3 ClampDirection(UnityEngine.Vector3 direction, UnityEngine.Vector3 normalDirection, System.Single clampWeight, System.Int32 clampSmoothing)
    // Offset: 0x11A2C48
    static UnityEngine::Vector3 ClampDirection(UnityEngine::Vector3 direction, UnityEngine::Vector3 normalDirection, float clampWeight, int clampSmoothing);
    // static public UnityEngine.Vector3 ClampDirection(UnityEngine.Vector3 direction, UnityEngine.Vector3 normalDirection, System.Single clampWeight, System.Int32 clampSmoothing, System.Boolean changed)
    // Offset: 0x11A2E6C
    static UnityEngine::Vector3 ClampDirection(UnityEngine::Vector3 direction, UnityEngine::Vector3 normalDirection, float clampWeight, int clampSmoothing, bool& changed);
    // static public UnityEngine.Vector3 ClampDirection(UnityEngine.Vector3 direction, UnityEngine.Vector3 normalDirection, System.Single clampWeight, System.Int32 clampSmoothing, System.Single clampValue)
    // Offset: 0x11A30A8
    static UnityEngine::Vector3 ClampDirection(UnityEngine::Vector3 direction, UnityEngine::Vector3 normalDirection, float clampWeight, int clampSmoothing, float& clampValue);
    // static public UnityEngine.Vector3 LineToPlane(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.Vector3 planeNormal, UnityEngine.Vector3 planePoint)
    // Offset: 0x11A32F8
    static UnityEngine::Vector3 LineToPlane(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::Vector3 planeNormal, UnityEngine::Vector3 planePoint);
    // static public UnityEngine.Vector3 PointToPlane(UnityEngine.Vector3 point, UnityEngine.Vector3 planePosition, UnityEngine.Vector3 planeNormal)
    // Offset: 0x11A34F8
    static UnityEngine::Vector3 PointToPlane(UnityEngine::Vector3 point, UnityEngine::Vector3 planePosition, UnityEngine::Vector3 planeNormal);
    // static public UnityEngine.Vector3 TransformPointUnscaled(UnityEngine.Transform t, UnityEngine.Vector3 point)
    // Offset: 0x11A36D4
    static UnityEngine::Vector3 TransformPointUnscaled(UnityEngine::Transform* t, UnityEngine::Vector3 point);
    // static public UnityEngine.Vector3 InverseTransformPointUnscaled(UnityEngine.Transform t, UnityEngine.Vector3 point)
    // Offset: 0x11A3808
    static UnityEngine::Vector3 InverseTransformPointUnscaled(UnityEngine::Transform* t, UnityEngine::Vector3 point);
  }; // RootMotion.V3Tools
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::V3Tools*, "RootMotion", "V3Tools");
#pragma pack(pop)
