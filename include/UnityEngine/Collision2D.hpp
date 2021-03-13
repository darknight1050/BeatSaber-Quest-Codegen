// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.ContactPoint2D
#include "UnityEngine/ContactPoint2D.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Collision2D
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CC5B44
  class Collision2D : public ::Il2CppObject {
    public:
    // System.Int32 m_Collider
    // Size: 0x4
    // Offset: 0x10
    int m_Collider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_OtherCollider
    // Size: 0x4
    // Offset: 0x14
    int m_OtherCollider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_Rigidbody
    // Size: 0x4
    // Offset: 0x18
    int m_Rigidbody;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_OtherRigidbody
    // Size: 0x4
    // Offset: 0x1C
    int m_OtherRigidbody;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.Vector2 m_RelativeVelocity
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 m_RelativeVelocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // System.Int32 m_Enabled
    // Size: 0x4
    // Offset: 0x28
    int m_Enabled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_ContactCount
    // Size: 0x4
    // Offset: 0x2C
    int m_ContactCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.ContactPoint2D[] m_ReusedContacts
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::ContactPoint2D>* m_ReusedContacts;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ContactPoint2D>*) == 0x8);
    // UnityEngine.ContactPoint2D[] m_LegacyContacts
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::ContactPoint2D>* m_LegacyContacts;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ContactPoint2D>*) == 0x8);
    // Creating value type constructor for type: Collision2D
    Collision2D(int m_Collider_ = {}, int m_OtherCollider_ = {}, int m_Rigidbody_ = {}, int m_OtherRigidbody_ = {}, UnityEngine::Vector2 m_RelativeVelocity_ = {}, int m_Enabled_ = {}, int m_ContactCount_ = {}, ::Array<UnityEngine::ContactPoint2D>* m_ReusedContacts_ = {}, ::Array<UnityEngine::ContactPoint2D>* m_LegacyContacts_ = {}) noexcept : m_Collider{m_Collider_}, m_OtherCollider{m_OtherCollider_}, m_Rigidbody{m_Rigidbody_}, m_OtherRigidbody{m_OtherRigidbody_}, m_RelativeVelocity{m_RelativeVelocity_}, m_Enabled{m_Enabled_}, m_ContactCount{m_ContactCount_}, m_ReusedContacts{m_ReusedContacts_}, m_LegacyContacts{m_LegacyContacts_} {}
  }; // UnityEngine.Collision2D
  #pragma pack(pop)
  static check_size<sizeof(Collision2D), 56 + sizeof(::Array<UnityEngine::ContactPoint2D>*)> __UnityEngine_Collision2DSizeCheck;
  static_assert(sizeof(Collision2D) == 0x40);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Collision2D*, "UnityEngine", "Collision2D");
