// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ContactPoint
  // [UsedByNativeCodeAttribute] Offset: DA3710
  // [NativeHeaderAttribute] Offset: DA3710
  struct ContactPoint/*, public System::ValueType*/ {
    public:
    // UnityEngine.Vector3 m_Point
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 m_Point;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0xC
    UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // System.Int32 m_ThisColliderInstanceID
    // Size: 0x4
    // Offset: 0x18
    int m_ThisColliderInstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_OtherColliderInstanceID
    // Size: 0x4
    // Offset: 0x1C
    int m_OtherColliderInstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Single m_Separation
    // Size: 0x4
    // Offset: 0x20
    float m_Separation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ContactPoint
    constexpr ContactPoint(UnityEngine::Vector3 m_Point_ = {}, UnityEngine::Vector3 m_Normal_ = {}, int m_ThisColliderInstanceID_ = {}, int m_OtherColliderInstanceID_ = {}, float m_Separation_ = {}) noexcept : m_Point{m_Point_}, m_Normal{m_Normal_}, m_ThisColliderInstanceID{m_ThisColliderInstanceID_}, m_OtherColliderInstanceID{m_OtherColliderInstanceID_}, m_Separation{m_Separation_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.ContactPoint
  #pragma pack(pop)
  static check_size<sizeof(ContactPoint), 32 + sizeof(float)> __UnityEngine_ContactPointSizeCheck;
  static_assert(sizeof(ContactPoint) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ContactPoint, "UnityEngine", "ContactPoint");
