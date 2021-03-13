// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CapsuleCollider
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CB7B2C
  // [NativeHeaderAttribute] Offset: CB7B2C
  class CapsuleCollider : public UnityEngine::Collider {
    public:
    // Creating value type constructor for type: CapsuleCollider
    CapsuleCollider() noexcept {}
    // public UnityEngine.Vector3 get_center()
    // Offset: 0x216F5A8
    UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0x216F658
    void set_center(UnityEngine::Vector3 value);
    // public System.Single get_radius()
    // Offset: 0x216F700
    float get_radius();
    // public System.Void set_radius(System.Single value)
    // Offset: 0x216F740
    void set_radius(float value);
    // public System.Single get_height()
    // Offset: 0x216F790
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0x216F7D0
    void set_height(float value);
    // public System.Void set_direction(System.Int32 value)
    // Offset: 0x216F820
    void set_direction(int value);
    // private System.Void get_center_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x216F608
    void get_center_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_center_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x216F6B0
    void set_center_Injected(UnityEngine::Vector3& value);
  }; // UnityEngine.CapsuleCollider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CapsuleCollider*, "UnityEngine", "CapsuleCollider");
