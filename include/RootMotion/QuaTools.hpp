// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.QuaTools
  // [] Offset: FFFFFFFF
  class QuaTools : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: QuaTools
    QuaTools() noexcept {}
    // static public UnityEngine.Quaternion Lerp(UnityEngine.Quaternion fromRotation, UnityEngine.Quaternion toRotation, System.Single weight)
    // Offset: 0x192A7D4
    static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion fromRotation, UnityEngine::Quaternion toRotation, float weight);
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion fromRotation, UnityEngine.Quaternion toRotation, System.Single weight)
    // Offset: 0x192A920
    static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion fromRotation, UnityEngine::Quaternion toRotation, float weight);
    // static public UnityEngine.Quaternion LinearBlend(UnityEngine.Quaternion q, System.Single weight)
    // Offset: 0x192AA6C
    static UnityEngine::Quaternion LinearBlend(UnityEngine::Quaternion q, float weight);
    // static public UnityEngine.Quaternion SphericalBlend(UnityEngine.Quaternion q, System.Single weight)
    // Offset: 0x192AB80
    static UnityEngine::Quaternion SphericalBlend(UnityEngine::Quaternion q, float weight);
    // static public UnityEngine.Quaternion FromToAroundAxis(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection, UnityEngine.Vector3 axis)
    // Offset: 0x192AC94
    static UnityEngine::Quaternion FromToAroundAxis(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection, UnityEngine::Vector3 axis);
    // static public UnityEngine.Quaternion RotationToLocalSpace(UnityEngine.Quaternion space, UnityEngine.Quaternion rotation)
    // Offset: 0x192AE20
    static UnityEngine::Quaternion RotationToLocalSpace(UnityEngine::Quaternion space, UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Quaternion from, UnityEngine.Quaternion to)
    // Offset: 0x191C1EC
    static UnityEngine::Quaternion FromToRotation(UnityEngine::Quaternion from, UnityEngine::Quaternion to);
    // static public UnityEngine.Vector3 GetAxis(UnityEngine.Vector3 v)
    // Offset: 0x192AEF0
    static UnityEngine::Vector3 GetAxis(UnityEngine::Vector3 v);
    // static public UnityEngine.Quaternion ClampRotation(UnityEngine.Quaternion rotation, System.Single clampWeight, System.Int32 clampSmoothing)
    // Offset: 0x192B174
    static UnityEngine::Quaternion ClampRotation(UnityEngine::Quaternion rotation, float clampWeight, int clampSmoothing);
    // static public System.Single ClampAngle(System.Single angle, System.Single clampWeight, System.Int32 clampSmoothing)
    // Offset: 0x192B388
    static float ClampAngle(float angle, float clampWeight, int clampSmoothing);
    // static public UnityEngine.Quaternion MatchRotation(UnityEngine.Quaternion targetRotation, UnityEngine.Vector3 targetforwardAxis, UnityEngine.Vector3 targetUpAxis, UnityEngine.Vector3 forwardAxis, UnityEngine.Vector3 upAxis)
    // Offset: 0x1924CA4
    static UnityEngine::Quaternion MatchRotation(UnityEngine::Quaternion targetRotation, UnityEngine::Vector3 targetforwardAxis, UnityEngine::Vector3 targetUpAxis, UnityEngine::Vector3 forwardAxis, UnityEngine::Vector3 upAxis);
    // static public UnityEngine.Vector3 ToBiPolar(UnityEngine.Vector3 euler)
    // Offset: 0x192B508
    static UnityEngine::Vector3 ToBiPolar(UnityEngine::Vector3 euler);
    // static public System.Single ToBiPolar(System.Single angle)
    // Offset: 0x192B618
    static float ToBiPolar(float angle);
  }; // RootMotion.QuaTools
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::QuaTools*, "RootMotion", "QuaTools");
