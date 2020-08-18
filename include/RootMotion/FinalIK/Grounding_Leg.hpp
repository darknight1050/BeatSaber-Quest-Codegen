// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: RootMotion.FinalIK.Grounding/Leg
  class Grounding::Leg : public ::Il2CppObject {
    public:
    // private System.Boolean <isGrounded>k__BackingField
    // Offset: 0x10
    bool isGrounded;
    // private UnityEngine.Vector3 <IKPosition>k__BackingField
    // Offset: 0x14
    UnityEngine::Vector3 IKPosition;
    // public UnityEngine.Quaternion rotationOffset
    // Offset: 0x20
    UnityEngine::Quaternion rotationOffset;
    // private System.Boolean <initiated>k__BackingField
    // Offset: 0x30
    bool initiated;
    // private System.Single <heightFromGround>k__BackingField
    // Offset: 0x34
    float heightFromGround;
    // private UnityEngine.Vector3 <velocity>k__BackingField
    // Offset: 0x38
    UnityEngine::Vector3 velocity;
    // private UnityEngine.Transform <transform>k__BackingField
    // Offset: 0x48
    UnityEngine::Transform* transform;
    // private System.Single <IKOffset>k__BackingField
    // Offset: 0x50
    float IKOffset;
    // public System.Boolean invertFootCenter
    // Offset: 0x54
    bool invertFootCenter;
    // private UnityEngine.RaycastHit <heelHit>k__BackingField
    // Offset: 0x58
    UnityEngine::RaycastHit heelHit;
    // private UnityEngine.RaycastHit <capsuleHit>k__BackingField
    // Offset: 0x84
    UnityEngine::RaycastHit capsuleHit;
    // private RootMotion.FinalIK.Grounding grounding
    // Offset: 0xB0
    RootMotion::FinalIK::Grounding* grounding;
    // private System.Single lastTime
    // Offset: 0xB8
    float lastTime;
    // private System.Single deltaTime
    // Offset: 0xBC
    float deltaTime;
    // private UnityEngine.Vector3 lastPosition
    // Offset: 0xC0
    UnityEngine::Vector3 lastPosition;
    // private UnityEngine.Quaternion toHitNormal
    // Offset: 0xCC
    UnityEngine::Quaternion toHitNormal;
    // private UnityEngine.Quaternion r
    // Offset: 0xDC
    UnityEngine::Quaternion r;
    // private UnityEngine.Vector3 up
    // Offset: 0xEC
    UnityEngine::Vector3 up;
    // private System.Boolean doOverrideFootPosition
    // Offset: 0xF8
    bool doOverrideFootPosition;
    // private UnityEngine.Vector3 overrideFootPosition
    // Offset: 0xFC
    UnityEngine::Vector3 overrideFootPosition;
    // private UnityEngine.Vector3 transformPosition
    // Offset: 0x108
    UnityEngine::Vector3 transformPosition;
    // public System.Boolean get_isGrounded()
    // Offset: 0x12D58D8
    bool get_isGrounded();
    // private System.Void set_isGrounded(System.Boolean value)
    // Offset: 0x12D58E0
    void set_isGrounded(bool value);
    // public UnityEngine.Vector3 get_IKPosition()
    // Offset: 0x12D58EC
    UnityEngine::Vector3 get_IKPosition();
    // private System.Void set_IKPosition(UnityEngine.Vector3 value)
    // Offset: 0x12D58F8
    void set_IKPosition(UnityEngine::Vector3 value);
    // public System.Boolean get_initiated()
    // Offset: 0x12D5904
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x12D590C
    void set_initiated(bool value);
    // public System.Single get_heightFromGround()
    // Offset: 0x12D5918
    float get_heightFromGround();
    // private System.Void set_heightFromGround(System.Single value)
    // Offset: 0x12D5920
    void set_heightFromGround(float value);
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x12D5928
    UnityEngine::Vector3 get_velocity();
    // private System.Void set_velocity(UnityEngine.Vector3 value)
    // Offset: 0x12D5934
    void set_velocity(UnityEngine::Vector3 value);
    // public UnityEngine.Transform get_transform()
    // Offset: 0x12D5940
    UnityEngine::Transform* get_transform();
    // private System.Void set_transform(UnityEngine.Transform value)
    // Offset: 0x12D5948
    void set_transform(UnityEngine::Transform* value);
    // public System.Single get_IKOffset()
    // Offset: 0x12D5950
    float get_IKOffset();
    // private System.Void set_IKOffset(System.Single value)
    // Offset: 0x12D5958
    void set_IKOffset(float value);
    // public UnityEngine.RaycastHit get_heelHit()
    // Offset: 0x12D5960
    UnityEngine::RaycastHit get_heelHit();
    // private System.Void set_heelHit(UnityEngine.RaycastHit value)
    // Offset: 0x12D5978
    void set_heelHit(UnityEngine::RaycastHit value);
    // public UnityEngine.RaycastHit get_capsuleHit()
    // Offset: 0x12D5998
    UnityEngine::RaycastHit get_capsuleHit();
    // private System.Void set_capsuleHit(UnityEngine.RaycastHit value)
    // Offset: 0x12D59B0
    void set_capsuleHit(UnityEngine::RaycastHit value);
    // public UnityEngine.RaycastHit get_GetHitPoint()
    // Offset: 0x12D59D0
    UnityEngine::RaycastHit get_GetHitPoint();
    // public System.Void SetFootPosition(UnityEngine.Vector3 position)
    // Offset: 0x12D5A18
    void SetFootPosition(UnityEngine::Vector3 position);
    // public System.Void Initiate(RootMotion.FinalIK.Grounding grounding, UnityEngine.Transform transform)
    // Offset: 0x12D46C4
    void Initiate(RootMotion::FinalIK::Grounding* grounding, UnityEngine::Transform* transform);
    // public System.Void OnEnable()
    // Offset: 0x12D5A2C
    void OnEnable();
    // public System.Void Reset()
    // Offset: 0x12D53F8
    void Reset();
    // public System.Void Process()
    // Offset: 0x12D4808
    void Process();
    // public System.Single get_stepHeightFromGround()
    // Offset: 0x12D678C
    float get_stepHeightFromGround();
    // private UnityEngine.RaycastHit GetCapsuleHit(UnityEngine.Vector3 offsetFromHeel)
    // Offset: 0x12D6204
    UnityEngine::RaycastHit GetCapsuleHit(UnityEngine::Vector3 offsetFromHeel);
    // private UnityEngine.RaycastHit GetRaycastHit(UnityEngine.Vector3 offsetFromHeel)
    // Offset: 0x12D5A78
    UnityEngine::RaycastHit GetRaycastHit(UnityEngine::Vector3 offsetFromHeel);
    // private UnityEngine.Vector3 RotateNormal(UnityEngine.Vector3 normal)
    // Offset: 0x12D690C
    UnityEngine::Vector3 RotateNormal(UnityEngine::Vector3 normal);
    // private System.Void SetFootToPoint(UnityEngine.Vector3 normal, UnityEngine.Vector3 point)
    // Offset: 0x12D5EB0
    void SetFootToPoint(UnityEngine::Vector3 normal, UnityEngine::Vector3 point);
    // private System.Void SetFootToPlane(UnityEngine.Vector3 planeNormal, UnityEngine.Vector3 planePoint, UnityEngine.Vector3 heelHitPoint)
    // Offset: 0x12D5FB8
    void SetFootToPlane(UnityEngine::Vector3 planeNormal, UnityEngine::Vector3 planePoint, UnityEngine::Vector3 heelHitPoint);
    // private System.Single GetHeightFromGround(UnityEngine.Vector3 hitPoint)
    // Offset: 0x12D6A08
    float GetHeightFromGround(UnityEngine::Vector3 hitPoint);
    // private System.Void RotateFoot()
    // Offset: 0x12D6818
    void RotateFoot();
    // private UnityEngine.Quaternion GetRotationOffsetTarget()
    // Offset: 0x12D6B8C
    UnityEngine::Quaternion GetRotationOffsetTarget();
    // private System.Single get_rootYOffset()
    // Offset: 0x12D6A64
    float get_rootYOffset();
    // public System.Void .ctor()
    // Offset: 0x12D4614
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Grounding::Leg* New_ctor();
  }; // RootMotion.FinalIK.Grounding/Leg
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Grounding::Leg*, "RootMotion.FinalIK", "Grounding/Leg");
#pragma pack(pop)
