// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: InterpolationMode
  struct InterpolationMode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Interp
  class Interp : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Interp
    Interp() noexcept {}
    // static public System.Single Float(System.Single t, RootMotion.InterpolationMode mode)
    // Offset: 0x1A976CC
    static float Float(float t, RootMotion::InterpolationMode mode);
    // static public UnityEngine.Vector3 V3(UnityEngine.Vector3 v1, UnityEngine.Vector3 v2, System.Single t, RootMotion.InterpolationMode mode)
    // Offset: 0x1A98134
    static UnityEngine::Vector3 V3(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2, float t, RootMotion::InterpolationMode mode);
    // static public System.Single LerpValue(System.Single value, System.Single target, System.Single increaseSpeed, System.Single decreaseSpeed)
    // Offset: 0x1A9823C
    static float LerpValue(float value, float target, float increaseSpeed, float decreaseSpeed);
    // static private System.Single None(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97A38
    static float None(float t, float b, float c);
    // static private System.Single InOutCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97A44
    static float InOutCubic(float t, float b, float c);
    // static private System.Single InOutQuintic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97A68
    static float InOutQuintic(float t, float b, float c);
    // static private System.Single InQuintic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97AA4
    static float InQuintic(float t, float b, float c);
    // static private System.Single InQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97ABC
    static float InQuartic(float t, float b, float c);
    // static private System.Single InCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97AD0
    static float InCubic(float t, float b, float c);
    // static private System.Single InQuadratic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97AE4
    static float InQuadratic(float t, float b, float c);
    // static private System.Single OutQuintic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97AF4
    static float OutQuintic(float t, float b, float c);
    // static private System.Single OutQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97B3C
    static float OutQuartic(float t, float b, float c);
    // static private System.Single OutCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97B74
    static float OutCubic(float t, float b, float c);
    // static private System.Single OutInCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97B9C
    static float OutInCubic(float t, float b, float c);
    // static private System.Single OutInQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A98338
    static float OutInQuartic(float t, float b, float c);
    // static private System.Single BackInCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97BD0
    static float BackInCubic(float t, float b, float c);
    // static private System.Single BackInQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97BF8
    static float BackInQuartic(float t, float b, float c);
    // static private System.Single OutBackCubic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97C28
    static float OutBackCubic(float t, float b, float c);
    // static private System.Single OutBackQuartic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97C5C
    static float OutBackQuartic(float t, float b, float c);
    // static private System.Single OutElasticSmall(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97CA0
    static float OutElasticSmall(float t, float b, float c);
    // static private System.Single OutElasticBig(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97D04
    static float OutElasticBig(float t, float b, float c);
    // static private System.Single InElasticSmall(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97D68
    static float InElasticSmall(float t, float b, float c);
    // static private System.Single InElasticBig(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97DBC
    static float InElasticBig(float t, float b, float c);
    // static private System.Single InSine(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97E10
    static float InSine(float t, float b, float c);
    // static private System.Single OutSine(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97EA8
    static float OutSine(float t, float b, float c);
    // static private System.Single InOutSine(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97F3C
    static float InOutSine(float t, float b, float c);
    // static private System.Single InElastic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A9836C
    static float InElastic(float t, float b, float c);
    // static private System.Single OutElastic(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A97FE0
    static float OutElastic(float t, float b, float c);
    // static private System.Single InBack(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A980C4
    static float InBack(float t, float b, float c);
    // static private System.Single OutBack(System.Single t, System.Single b, System.Single c)
    // Offset: 0x1A980F4
    static float OutBack(float t, float b, float c);
    // public System.Void .ctor()
    // Offset: 0x1A98454
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Interp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Interp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Interp*, creationType>()));
    }
  }; // RootMotion.Interp
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Interp*, "RootMotion", "Interp");
