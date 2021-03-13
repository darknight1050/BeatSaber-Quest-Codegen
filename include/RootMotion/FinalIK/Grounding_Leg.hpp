// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Grounding
#include "RootMotion/FinalIK/Grounding.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
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
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x114
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Grounding/Leg
  // [] Offset: FFFFFFFF
  class Grounding::Leg : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD15850
    // private System.Boolean <isGrounded>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool isGrounded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isGrounded and: IKPosition
    char __padding0[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD15860
    // private UnityEngine.Vector3 <IKPosition>k__BackingField
    // Size: 0xC
    // Offset: 0x14
    UnityEngine::Vector3 IKPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotationOffset
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Quaternion rotationOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // [CompilerGeneratedAttribute] Offset: 0xD15870
    // private System.Boolean <initiated>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: heightFromGround
    char __padding3[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD15880
    // private System.Single <heightFromGround>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    float heightFromGround;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD15890
    // private UnityEngine.Vector3 <velocity>k__BackingField
    // Size: 0xC
    // Offset: 0x38
    UnityEngine::Vector3 velocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Padding between fields: velocity and: transform
    char __padding5[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD158A0
    // private UnityEngine.Transform <transform>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD158B0
    // private System.Single <IKOffset>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    float IKOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean invertFootCenter
    // Size: 0x1
    // Offset: 0x54
    bool invertFootCenter;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: invertFootCenter and: heelHit
    char __padding8[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD158C0
    // private UnityEngine.RaycastHit <heelHit>k__BackingField
    // Size: 0x2C
    // Offset: 0x58
    UnityEngine::RaycastHit heelHit;
    // Field size check
    static_assert(sizeof(UnityEngine::RaycastHit) == 0x2C);
    // [CompilerGeneratedAttribute] Offset: 0xD158D0
    // private UnityEngine.RaycastHit <capsuleHit>k__BackingField
    // Size: 0x2C
    // Offset: 0x84
    UnityEngine::RaycastHit capsuleHit;
    // Field size check
    static_assert(sizeof(UnityEngine::RaycastHit) == 0x2C);
    // private RootMotion.FinalIK.Grounding grounding
    // Size: 0x8
    // Offset: 0xB0
    RootMotion::FinalIK::Grounding* grounding;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Grounding*) == 0x8);
    // private System.Single lastTime
    // Size: 0x4
    // Offset: 0xB8
    float lastTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single deltaTime
    // Size: 0x4
    // Offset: 0xBC
    float deltaTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0xC0
    UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion toHitNormal
    // Size: 0x10
    // Offset: 0xCC
    UnityEngine::Quaternion toHitNormal;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion r
    // Size: 0x10
    // Offset: 0xDC
    UnityEngine::Quaternion r;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 up
    // Size: 0xC
    // Offset: 0xEC
    UnityEngine::Vector3 up;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean doOverrideFootPosition
    // Size: 0x1
    // Offset: 0xF8
    bool doOverrideFootPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: doOverrideFootPosition and: overrideFootPosition
    char __padding18[0x3] = {};
    // private UnityEngine.Vector3 overrideFootPosition
    // Size: 0xC
    // Offset: 0xFC
    UnityEngine::Vector3 overrideFootPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 transformPosition
    // Size: 0xC
    // Offset: 0x108
    UnityEngine::Vector3 transformPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: Leg
    Leg(bool isGrounded_ = {}, UnityEngine::Vector3 IKPosition_ = {}, UnityEngine::Quaternion rotationOffset_ = {}, bool initiated_ = {}, float heightFromGround_ = {}, UnityEngine::Vector3 velocity_ = {}, UnityEngine::Transform* transform_ = {}, float IKOffset_ = {}, bool invertFootCenter_ = {}, UnityEngine::RaycastHit heelHit_ = {}, UnityEngine::RaycastHit capsuleHit_ = {}, RootMotion::FinalIK::Grounding* grounding_ = {}, float lastTime_ = {}, float deltaTime_ = {}, UnityEngine::Vector3 lastPosition_ = {}, UnityEngine::Quaternion toHitNormal_ = {}, UnityEngine::Quaternion r_ = {}, UnityEngine::Vector3 up_ = {}, bool doOverrideFootPosition_ = {}, UnityEngine::Vector3 overrideFootPosition_ = {}, UnityEngine::Vector3 transformPosition_ = {}) noexcept : isGrounded{isGrounded_}, IKPosition{IKPosition_}, rotationOffset{rotationOffset_}, initiated{initiated_}, heightFromGround{heightFromGround_}, velocity{velocity_}, transform{transform_}, IKOffset{IKOffset_}, invertFootCenter{invertFootCenter_}, heelHit{heelHit_}, capsuleHit{capsuleHit_}, grounding{grounding_}, lastTime{lastTime_}, deltaTime{deltaTime_}, lastPosition{lastPosition_}, toHitNormal{toHitNormal_}, r{r_}, up{up_}, doOverrideFootPosition{doOverrideFootPosition_}, overrideFootPosition{overrideFootPosition_}, transformPosition{transformPosition_} {}
    // public System.Boolean get_isGrounded()
    // Offset: 0x1A61044
    bool get_isGrounded();
    // private System.Void set_isGrounded(System.Boolean value)
    // Offset: 0x1A6104C
    void set_isGrounded(bool value);
    // public UnityEngine.Vector3 get_IKPosition()
    // Offset: 0x1A61058
    UnityEngine::Vector3 get_IKPosition();
    // private System.Void set_IKPosition(UnityEngine.Vector3 value)
    // Offset: 0x1A61064
    void set_IKPosition(UnityEngine::Vector3 value);
    // public System.Boolean get_initiated()
    // Offset: 0x1A61070
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x1A61078
    void set_initiated(bool value);
    // public System.Single get_heightFromGround()
    // Offset: 0x1A61084
    float get_heightFromGround();
    // private System.Void set_heightFromGround(System.Single value)
    // Offset: 0x1A6108C
    void set_heightFromGround(float value);
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x1A61094
    UnityEngine::Vector3 get_velocity();
    // private System.Void set_velocity(UnityEngine.Vector3 value)
    // Offset: 0x1A610A0
    void set_velocity(UnityEngine::Vector3 value);
    // public UnityEngine.Transform get_transform()
    // Offset: 0x1A610AC
    UnityEngine::Transform* get_transform();
    // private System.Void set_transform(UnityEngine.Transform value)
    // Offset: 0x1A610B4
    void set_transform(UnityEngine::Transform* value);
    // public System.Single get_IKOffset()
    // Offset: 0x1A610BC
    float get_IKOffset();
    // private System.Void set_IKOffset(System.Single value)
    // Offset: 0x1A610C4
    void set_IKOffset(float value);
    // public UnityEngine.RaycastHit get_heelHit()
    // Offset: 0x1A610CC
    UnityEngine::RaycastHit get_heelHit();
    // private System.Void set_heelHit(UnityEngine.RaycastHit value)
    // Offset: 0x1A610E4
    void set_heelHit(UnityEngine::RaycastHit value);
    // public UnityEngine.RaycastHit get_capsuleHit()
    // Offset: 0x1A61104
    UnityEngine::RaycastHit get_capsuleHit();
    // private System.Void set_capsuleHit(UnityEngine.RaycastHit value)
    // Offset: 0x1A6111C
    void set_capsuleHit(UnityEngine::RaycastHit value);
    // public UnityEngine.RaycastHit get_GetHitPoint()
    // Offset: 0x1A6113C
    UnityEngine::RaycastHit get_GetHitPoint();
    // public System.Void SetFootPosition(UnityEngine.Vector3 position)
    // Offset: 0x1A61184
    void SetFootPosition(UnityEngine::Vector3 position);
    // public System.Void Initiate(RootMotion.FinalIK.Grounding grounding, UnityEngine.Transform transform)
    // Offset: 0x1A5FE68
    void Initiate(RootMotion::FinalIK::Grounding* grounding, UnityEngine::Transform* transform);
    // public System.Void OnEnable()
    // Offset: 0x1A61198
    void OnEnable();
    // public System.Void Reset()
    // Offset: 0x1A60B64
    void Reset();
    // public System.Void Process()
    // Offset: 0x1A5FF74
    void Process();
    // public System.Single get_stepHeightFromGround()
    // Offset: 0x1A61EF8
    float get_stepHeightFromGround();
    // private UnityEngine.RaycastHit GetCapsuleHit(UnityEngine.Vector3 offsetFromHeel)
    // Offset: 0x1A61970
    UnityEngine::RaycastHit GetCapsuleHit(UnityEngine::Vector3 offsetFromHeel);
    // private UnityEngine.RaycastHit GetRaycastHit(UnityEngine.Vector3 offsetFromHeel)
    // Offset: 0x1A611E4
    UnityEngine::RaycastHit GetRaycastHit(UnityEngine::Vector3 offsetFromHeel);
    // private UnityEngine.Vector3 RotateNormal(UnityEngine.Vector3 normal)
    // Offset: 0x1A62078
    UnityEngine::Vector3 RotateNormal(UnityEngine::Vector3 normal);
    // private System.Void SetFootToPoint(UnityEngine.Vector3 normal, UnityEngine.Vector3 point)
    // Offset: 0x1A6161C
    void SetFootToPoint(UnityEngine::Vector3 normal, UnityEngine::Vector3 point);
    // private System.Void SetFootToPlane(UnityEngine.Vector3 planeNormal, UnityEngine.Vector3 planePoint, UnityEngine.Vector3 heelHitPoint)
    // Offset: 0x1A61724
    void SetFootToPlane(UnityEngine::Vector3 planeNormal, UnityEngine::Vector3 planePoint, UnityEngine::Vector3 heelHitPoint);
    // private System.Single GetHeightFromGround(UnityEngine.Vector3 hitPoint)
    // Offset: 0x1A62174
    float GetHeightFromGround(UnityEngine::Vector3 hitPoint);
    // private System.Void RotateFoot()
    // Offset: 0x1A61F84
    void RotateFoot();
    // private UnityEngine.Quaternion GetRotationOffsetTarget()
    // Offset: 0x1A622F8
    UnityEngine::Quaternion GetRotationOffsetTarget();
    // private System.Single get_rootYOffset()
    // Offset: 0x1A621D0
    float get_rootYOffset();
    // public System.Void .ctor()
    // Offset: 0x1A5FDB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Grounding::Leg* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Grounding::Leg::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Grounding::Leg*, creationType>()));
    }
  }; // RootMotion.FinalIK.Grounding/Leg
  #pragma pack(pop)
  static check_size<sizeof(Grounding::Leg), 264 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_Grounding_LegSizeCheck;
  static_assert(sizeof(Grounding::Leg) == 0x114);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounding::Leg*, "RootMotion.FinalIK", "Grounding/Leg");
