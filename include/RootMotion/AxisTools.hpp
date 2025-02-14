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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: Axis
  struct Axis;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.AxisTools
  class AxisTools : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AxisTools
    AxisTools() noexcept {}
    // static public UnityEngine.Vector3 ToVector3(RootMotion.Axis axis)
    // Offset: 0x1C86E84
    static UnityEngine::Vector3 ToVector3(RootMotion::Axis axis);
    // static public RootMotion.Axis ToAxis(UnityEngine.Vector3 v)
    // Offset: 0x1C86F3C
    static RootMotion::Axis ToAxis(UnityEngine::Vector3 v);
    // static public RootMotion.Axis GetAxisToPoint(UnityEngine.Transform t, UnityEngine.Vector3 worldPosition)
    // Offset: 0x1C86FE8
    static RootMotion::Axis GetAxisToPoint(UnityEngine::Transform* t, UnityEngine::Vector3 worldPosition);
    // static public RootMotion.Axis GetAxisToDirection(UnityEngine.Transform t, UnityEngine.Vector3 direction)
    // Offset: 0x1C871CC
    static RootMotion::Axis GetAxisToDirection(UnityEngine::Transform* t, UnityEngine::Vector3 direction);
    // static public UnityEngine.Vector3 GetAxisVectorToPoint(UnityEngine.Transform t, UnityEngine.Vector3 worldPosition)
    // Offset: 0x1C87104
    static UnityEngine::Vector3 GetAxisVectorToPoint(UnityEngine::Transform* t, UnityEngine::Vector3 worldPosition);
    // static public UnityEngine.Vector3 GetAxisVectorToDirection(UnityEngine.Transform t, UnityEngine.Vector3 direction)
    // Offset: 0x1C872E8
    static UnityEngine::Vector3 GetAxisVectorToDirection(UnityEngine::Transform* t, UnityEngine::Vector3 direction);
    // static public UnityEngine.Vector3 GetAxisVectorToDirection(UnityEngine.Quaternion r, UnityEngine.Vector3 direction)
    // Offset: 0x1C87330
    static UnityEngine::Vector3 GetAxisVectorToDirection(UnityEngine::Quaternion r, UnityEngine::Vector3 direction);
    // public System.Void .ctor()
    // Offset: 0x1C875F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AxisTools* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::AxisTools::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AxisTools*, creationType>()));
    }
  }; // RootMotion.AxisTools
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::AxisTools*, "RootMotion", "AxisTools");
