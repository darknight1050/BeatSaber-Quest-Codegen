// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.VectorHash
  class VectorHash : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: VectorHash
    VectorHash() noexcept {}
    // static field const value: static public System.Single FltCompareResolution
    static constexpr const float FltCompareResolution = 1000;
    // Get static field: static public System.Single FltCompareResolution
    static float _get_FltCompareResolution();
    // Set static field: static public System.Single FltCompareResolution
    static void _set_FltCompareResolution(float value);
    // static private System.Int32 HashFloat(System.Single f)
    // Offset: 0x22A78D8
    static int HashFloat(float f);
    // static public System.Int32 GetHashCode(UnityEngine.Vector2 v)
    // Offset: 0x22A7918
    static int GetHashCode(UnityEngine::Vector2 v);
    // static public System.Int32 GetHashCode(UnityEngine.Vector3 v)
    // Offset: 0x22A7994
    static int GetHashCode(UnityEngine::Vector3 v);
    // static public System.Int32 GetHashCode(UnityEngine.Vector4 v)
    // Offset: 0x22A7A44
    static int GetHashCode(UnityEngine::Vector4 v);
  }; // UnityEngine.ProBuilder.VectorHash
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::VectorHash*, "UnityEngine.ProBuilder", "VectorHash");
