// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color32
  struct Color32;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8F
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/EmitParams
  struct ParticleSystem::EmitParams/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xDC0ED4
    // private UnityEngine.ParticleSystem/Particle m_Particle
    // Size: 0x84
    // Offset: 0x0
    UnityEngine::ParticleSystem::Particle m_Particle;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::Particle) == 0x84);
    // [NativeNameAttribute] Offset: 0xDC0F0C
    // private System.Boolean m_PositionSet
    // Size: 0x1
    // Offset: 0x84
    bool m_PositionSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC0F44
    // private System.Boolean m_VelocitySet
    // Size: 0x1
    // Offset: 0x85
    bool m_VelocitySet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC0F7C
    // private System.Boolean m_AxisOfRotationSet
    // Size: 0x1
    // Offset: 0x86
    bool m_AxisOfRotationSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC0FB4
    // private System.Boolean m_RotationSet
    // Size: 0x1
    // Offset: 0x87
    bool m_RotationSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC0FEC
    // private System.Boolean m_AngularVelocitySet
    // Size: 0x1
    // Offset: 0x88
    bool m_AngularVelocitySet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC1024
    // private System.Boolean m_StartSizeSet
    // Size: 0x1
    // Offset: 0x89
    bool m_StartSizeSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC105C
    // private System.Boolean m_StartColorSet
    // Size: 0x1
    // Offset: 0x8A
    bool m_StartColorSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC1094
    // private System.Boolean m_RandomSeedSet
    // Size: 0x1
    // Offset: 0x8B
    bool m_RandomSeedSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC10CC
    // private System.Boolean m_StartLifetimeSet
    // Size: 0x1
    // Offset: 0x8C
    bool m_StartLifetimeSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC1104
    // private System.Boolean m_MeshIndexSet
    // Size: 0x1
    // Offset: 0x8D
    bool m_MeshIndexSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xDC113C
    // private System.Boolean m_ApplyShapeToPosition
    // Size: 0x1
    // Offset: 0x8E
    bool m_ApplyShapeToPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EmitParams
    constexpr EmitParams(UnityEngine::ParticleSystem::Particle m_Particle_ = {}, bool m_PositionSet_ = {}, bool m_VelocitySet_ = {}, bool m_AxisOfRotationSet_ = {}, bool m_RotationSet_ = {}, bool m_AngularVelocitySet_ = {}, bool m_StartSizeSet_ = {}, bool m_StartColorSet_ = {}, bool m_RandomSeedSet_ = {}, bool m_StartLifetimeSet_ = {}, bool m_MeshIndexSet_ = {}, bool m_ApplyShapeToPosition_ = {}) noexcept : m_Particle{m_Particle_}, m_PositionSet{m_PositionSet_}, m_VelocitySet{m_VelocitySet_}, m_AxisOfRotationSet{m_AxisOfRotationSet_}, m_RotationSet{m_RotationSet_}, m_AngularVelocitySet{m_AngularVelocitySet_}, m_StartSizeSet{m_StartSizeSet_}, m_StartColorSet{m_StartColorSet_}, m_RandomSeedSet{m_RandomSeedSet_}, m_StartLifetimeSet{m_StartLifetimeSet_}, m_MeshIndexSet{m_MeshIndexSet_}, m_ApplyShapeToPosition{m_ApplyShapeToPosition_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0xF231EC
    void set_position(UnityEngine::Vector3 value);
    // public System.Void set_applyShapeToPosition(System.Boolean value)
    // Offset: 0xF23200
    void set_applyShapeToPosition(bool value);
    // public System.Void set_rotation3D(UnityEngine.Vector3 value)
    // Offset: 0xF2320C
    void set_rotation3D(UnityEngine::Vector3 value);
    // public System.Void set_startColor(UnityEngine.Color32 value)
    // Offset: 0xF23238
    void set_startColor(UnityEngine::Color32 value);
  }; // UnityEngine.ParticleSystem/EmitParams
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::EmitParams), 142 + sizeof(bool)> __UnityEngine_ParticleSystem_EmitParamsSizeCheck;
  static_assert(sizeof(ParticleSystem::EmitParams) == 0x8F);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
