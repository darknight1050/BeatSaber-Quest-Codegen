// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: CollisionDetectionMode
  struct CollisionDetectionMode;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: ForceMode
  struct ForceMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rigidbody
  // [NativeHeaderAttribute] Offset: DA3358
  // [RequireComponent] Offset: DA3358
  class Rigidbody : public UnityEngine::Component {
    public:
    // Creating value type constructor for type: Rigidbody
    Rigidbody() noexcept {}
    // public System.Void set_velocity(UnityEngine.Vector3 value)
    // Offset: 0x23BEF90
    void set_velocity(UnityEngine::Vector3 value);
    // public System.Void set_angularVelocity(UnityEngine.Vector3 value)
    // Offset: 0x23BF038
    void set_angularVelocity(UnityEngine::Vector3 value);
    // public System.Void set_mass(System.Single value)
    // Offset: 0x23BF0E0
    void set_mass(float value);
    // public System.Void set_useGravity(System.Boolean value)
    // Offset: 0x23BF130
    void set_useGravity(bool value);
    // public System.Boolean get_isKinematic()
    // Offset: 0x23BF180
    bool get_isKinematic();
    // public System.Void set_isKinematic(System.Boolean value)
    // Offset: 0x23BF1C0
    void set_isKinematic(bool value);
    // public System.Void set_collisionDetectionMode(UnityEngine.CollisionDetectionMode value)
    // Offset: 0x23BF210
    void set_collisionDetectionMode(UnityEngine::CollisionDetectionMode value);
    // public UnityEngine.Vector3 get_worldCenterOfMass()
    // Offset: 0x23BF260
    UnityEngine::Vector3 get_worldCenterOfMass();
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x23BF310
    UnityEngine::Vector3 get_position();
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x23BF3C0
    void set_position(UnityEngine::Vector3 value);
    // public System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x23BF468
    void set_rotation(UnityEngine::Quaternion value);
    // public System.Single get_maxAngularVelocity()
    // Offset: 0x23BF510
    float get_maxAngularVelocity();
    // public System.Void MovePosition(UnityEngine.Vector3 position)
    // Offset: 0x23BF550
    void MovePosition(UnityEngine::Vector3 position);
    // public System.Void MoveRotation(UnityEngine.Quaternion rot)
    // Offset: 0x23BF5F8
    void MoveRotation(UnityEngine::Quaternion rot);
    // public System.Void WakeUp()
    // Offset: 0x23BF6A0
    void WakeUp();
    // public System.Void AddForce(UnityEngine.Vector3 force, UnityEngine.ForceMode mode)
    // Offset: 0x23BF6E0
    void AddForce(UnityEngine::Vector3 force, UnityEngine::ForceMode mode);
    // public System.Void AddForceAtPosition(UnityEngine.Vector3 force, UnityEngine.Vector3 position, UnityEngine.ForceMode mode)
    // Offset: 0x23BF7A0
    void AddForceAtPosition(UnityEngine::Vector3 force, UnityEngine::Vector3 position, UnityEngine::ForceMode mode);
    // public System.Void AddForceAtPosition(UnityEngine.Vector3 force, UnityEngine.Vector3 position)
    // Offset: 0x23BF87C
    void AddForceAtPosition(UnityEngine::Vector3 force, UnityEngine::Vector3 position);
    // private System.Void set_velocity_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23BEFE8
    void set_velocity_Injected(UnityEngine::Vector3& value);
    // private System.Void set_angularVelocity_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23BF090
    void set_angularVelocity_Injected(UnityEngine::Vector3& value);
    // private System.Void get_worldCenterOfMass_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x23BF2C0
    void get_worldCenterOfMass_Injected(UnityEngine::Vector3& ret);
    // private System.Void get_position_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x23BF370
    void get_position_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_position_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x23BF418
    void set_position_Injected(UnityEngine::Vector3& value);
    // private System.Void set_rotation_Injected(ref UnityEngine.Quaternion value)
    // Offset: 0x23BF4C0
    void set_rotation_Injected(UnityEngine::Quaternion& value);
    // private System.Void MovePosition_Injected(ref UnityEngine.Vector3 position)
    // Offset: 0x23BF5A8
    void MovePosition_Injected(UnityEngine::Vector3& position);
    // private System.Void MoveRotation_Injected(ref UnityEngine.Quaternion rot)
    // Offset: 0x23BF650
    void MoveRotation_Injected(UnityEngine::Quaternion& rot);
    // private System.Void AddForce_Injected(ref UnityEngine.Vector3 force, UnityEngine.ForceMode mode)
    // Offset: 0x23BF748
    void AddForce_Injected(UnityEngine::Vector3& force, UnityEngine::ForceMode mode);
    // private System.Void AddForceAtPosition_Injected(ref UnityEngine.Vector3 force, ref UnityEngine.Vector3 position, UnityEngine.ForceMode mode)
    // Offset: 0x23BF814
    void AddForceAtPosition_Injected(UnityEngine::Vector3& force, UnityEngine::Vector3& position, UnityEngine::ForceMode mode);
    // public System.Void .ctor()
    // Offset: 0x23BF884
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Rigidbody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Rigidbody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Rigidbody*, creationType>()));
    }
  }; // UnityEngine.Rigidbody
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
