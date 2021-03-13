// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.RagdollUtility
#include "RootMotion/FinalIK/RagdollUtility.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Joint
  class Joint;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RagdollUtility/Rigidbone
  // [] Offset: FFFFFFFF
  class RagdollUtility::Rigidbone : public ::Il2CppObject {
    public:
    // public UnityEngine.Rigidbody r
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Rigidbody* r;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // public UnityEngine.Transform t
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* t;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Collider collider
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Collider* collider;
    // Field size check
    static_assert(sizeof(UnityEngine::Collider*) == 0x8);
    // public UnityEngine.Joint joint
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Joint* joint;
    // Field size check
    static_assert(sizeof(UnityEngine::Joint*) == 0x8);
    // public UnityEngine.Rigidbody c
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Rigidbody* c;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody*) == 0x8);
    // public System.Boolean updateAnchor
    // Size: 0x1
    // Offset: 0x38
    bool updateAnchor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updateAnchor and: deltaPosition
    char __padding5[0x3] = {};
    // public UnityEngine.Vector3 deltaPosition
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 deltaPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion deltaRotation
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Quaternion deltaRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // public System.Single deltaTime
    // Size: 0x4
    // Offset: 0x58
    float deltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x5C
    UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion lastRotation
    // Size: 0x10
    // Offset: 0x68
    UnityEngine::Quaternion lastRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Creating value type constructor for type: Rigidbone
    Rigidbone(UnityEngine::Rigidbody* r_ = {}, UnityEngine::Transform* t_ = {}, UnityEngine::Collider* collider_ = {}, UnityEngine::Joint* joint_ = {}, UnityEngine::Rigidbody* c_ = {}, bool updateAnchor_ = {}, UnityEngine::Vector3 deltaPosition_ = {}, UnityEngine::Quaternion deltaRotation_ = {}, float deltaTime_ = {}, UnityEngine::Vector3 lastPosition_ = {}, UnityEngine::Quaternion lastRotation_ = {}) noexcept : r{r_}, t{t_}, collider{collider_}, joint{joint_}, c{c_}, updateAnchor{updateAnchor_}, deltaPosition{deltaPosition_}, deltaRotation{deltaRotation_}, deltaTime{deltaTime_}, lastPosition{lastPosition_}, lastRotation{lastRotation_} {}
    // public System.Void .ctor(UnityEngine.Rigidbody r)
    // Offset: 0x191ADF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RagdollUtility::Rigidbone* New_ctor(UnityEngine::Rigidbody* r) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::RagdollUtility::Rigidbone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RagdollUtility::Rigidbone*, creationType>(r)));
    }
    // public System.Void RecordVelocity()
    // Offset: 0x191BA04
    void RecordVelocity();
    // public System.Void WakeUp(System.Single velocityWeight, System.Single angularVelocityWeight)
    // Offset: 0x191B7E8
    void WakeUp(float velocityWeight, float angularVelocityWeight);
  }; // RootMotion.FinalIK.RagdollUtility/Rigidbone
  #pragma pack(pop)
  static check_size<sizeof(RagdollUtility::Rigidbone), 104 + sizeof(UnityEngine::Quaternion)> __RootMotion_FinalIK_RagdollUtility_RigidboneSizeCheck;
  static_assert(sizeof(RagdollUtility::Rigidbone) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RagdollUtility::Rigidbone*, "RootMotion.FinalIK", "RagdollUtility/Rigidbone");
