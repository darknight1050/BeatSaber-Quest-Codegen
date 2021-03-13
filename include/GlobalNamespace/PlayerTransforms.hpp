// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC1
  #pragma pack(push, 1)
  // Autogenerated type: PlayerTransforms
  // [] Offset: FFFFFFFF
  class PlayerTransforms : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _originTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* originTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _leftHandTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* leftHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _rightHandTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* rightHandTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Boolean _overrideHeadPos
    // Size: 0x1
    // Offset: 0x38
    bool overrideHeadPos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideHeadPos and: overriddenHeadPos
    char __padding4[0x3] = {};
    // private UnityEngine.Vector3 _overriddenHeadPos
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 overriddenHeadPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _headWorldPos
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 headWorldPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _headWorldRot
    // Size: 0x10
    // Offset: 0x54
    UnityEngine::Quaternion headWorldRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _headPseudoLocalPos
    // Size: 0xC
    // Offset: 0x64
    UnityEngine::Vector3 headPseudoLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _headPseudoLocalRot
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Quaternion headPseudoLocalRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _leftHandPseudoLocalPos
    // Size: 0xC
    // Offset: 0x80
    UnityEngine::Vector3 leftHandPseudoLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _leftHandPseudoLocalRot
    // Size: 0x10
    // Offset: 0x8C
    UnityEngine::Quaternion leftHandPseudoLocalRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 _rightHandPseudoLocalPos
    // Size: 0xC
    // Offset: 0x9C
    UnityEngine::Vector3 rightHandPseudoLocalPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _rightHandPseudoLocalRot
    // Size: 0x10
    // Offset: 0xA8
    UnityEngine::Quaternion rightHandPseudoLocalRot;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Transform _originParentTransform
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::Transform* originParentTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Boolean _useOriginParentTransformForPseudoLocalCalculations
    // Size: 0x1
    // Offset: 0xC0
    bool useOriginParentTransformForPseudoLocalCalculations;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerTransforms
    PlayerTransforms(UnityEngine::Transform* headTransform_ = {}, UnityEngine::Transform* originTransform_ = {}, UnityEngine::Transform* leftHandTransform_ = {}, UnityEngine::Transform* rightHandTransform_ = {}, bool overrideHeadPos_ = {}, UnityEngine::Vector3 overriddenHeadPos_ = {}, UnityEngine::Vector3 headWorldPos_ = {}, UnityEngine::Quaternion headWorldRot_ = {}, UnityEngine::Vector3 headPseudoLocalPos_ = {}, UnityEngine::Quaternion headPseudoLocalRot_ = {}, UnityEngine::Vector3 leftHandPseudoLocalPos_ = {}, UnityEngine::Quaternion leftHandPseudoLocalRot_ = {}, UnityEngine::Vector3 rightHandPseudoLocalPos_ = {}, UnityEngine::Quaternion rightHandPseudoLocalRot_ = {}, UnityEngine::Transform* originParentTransform_ = {}, bool useOriginParentTransformForPseudoLocalCalculations_ = {}) noexcept : headTransform{headTransform_}, originTransform{originTransform_}, leftHandTransform{leftHandTransform_}, rightHandTransform{rightHandTransform_}, overrideHeadPos{overrideHeadPos_}, overriddenHeadPos{overriddenHeadPos_}, headWorldPos{headWorldPos_}, headWorldRot{headWorldRot_}, headPseudoLocalPos{headPseudoLocalPos_}, headPseudoLocalRot{headPseudoLocalRot_}, leftHandPseudoLocalPos{leftHandPseudoLocalPos_}, leftHandPseudoLocalRot{leftHandPseudoLocalRot_}, rightHandPseudoLocalPos{rightHandPseudoLocalPos_}, rightHandPseudoLocalRot{rightHandPseudoLocalRot_}, originParentTransform{originParentTransform_}, useOriginParentTransformForPseudoLocalCalculations{useOriginParentTransformForPseudoLocalCalculations_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Vector3 get_headWorldPos()
    // Offset: 0xF9A660
    UnityEngine::Vector3 get_headWorldPos();
    // public UnityEngine.Quaternion get_headWorldRot()
    // Offset: 0xF9A66C
    UnityEngine::Quaternion get_headWorldRot();
    // public UnityEngine.Vector3 get_headPseudoLocalPos()
    // Offset: 0xF9A678
    UnityEngine::Vector3 get_headPseudoLocalPos();
    // public UnityEngine.Quaternion get_headPseudoLocalRot()
    // Offset: 0xF9A684
    UnityEngine::Quaternion get_headPseudoLocalRot();
    // public UnityEngine.Vector3 get_leftHandPseudoLocalPos()
    // Offset: 0xF9A690
    UnityEngine::Vector3 get_leftHandPseudoLocalPos();
    // public UnityEngine.Quaternion get_leftHandPseudoLocalRot()
    // Offset: 0xF9A69C
    UnityEngine::Quaternion get_leftHandPseudoLocalRot();
    // public UnityEngine.Vector3 get_rightHandPseudoLocalPos()
    // Offset: 0xF9A6A8
    UnityEngine::Vector3 get_rightHandPseudoLocalPos();
    // public UnityEngine.Quaternion get_rightHandPseudoLocalRot()
    // Offset: 0xF9A6B4
    UnityEngine::Quaternion get_rightHandPseudoLocalRot();
    // protected System.Void Awake()
    // Offset: 0xF9A6C0
    void Awake();
    // public System.Void OverrideHeadPos(UnityEngine.Vector3 pos)
    // Offset: 0xF9A754
    void OverrideHeadPos(UnityEngine::Vector3 pos);
    // protected System.Void Update()
    // Offset: 0xF9A770
    void Update();
    // public System.Single MoveTowardsHead(System.Single start, System.Single end, UnityEngine.Quaternion noteInverseWorldRotation, System.Single t)
    // Offset: 0xF9A94C
    float MoveTowardsHead(float start, float end, UnityEngine::Quaternion noteInverseWorldRotation, float t);
    // public System.Single GetZPosOffsetByHeadPosAtTime(System.Single start, System.Single end, System.Single t)
    // Offset: 0xF9AAFC
    float GetZPosOffsetByHeadPosAtTime(float start, float end, float t);
    // private System.Single GetZPos(System.Single start, System.Single end, System.Single headOffsetZ, System.Single t)
    // Offset: 0xF9AA5C
    float GetZPos(float start, float end, float headOffsetZ, float t);
    // public System.Single HeadOffsetZ(UnityEngine.Quaternion noteInverseWorldRotation)
    // Offset: 0xF9A99C
    float HeadOffsetZ(UnityEngine::Quaternion noteInverseWorldRotation);
    // public System.Void .ctor()
    // Offset: 0xF9AB08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerTransforms* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerTransforms::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerTransforms*, creationType>()));
    }
  }; // PlayerTransforms
  #pragma pack(pop)
  static check_size<sizeof(PlayerTransforms), 192 + sizeof(bool)> __GlobalNamespace_PlayerTransformsSizeCheck;
  static_assert(sizeof(PlayerTransforms) == 0xC1);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerTransforms*, "", "PlayerTransforms");
