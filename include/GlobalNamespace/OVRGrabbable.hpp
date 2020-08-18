// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRGrabber
  class OVRGrabber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRGrabbable
  class OVRGrabbable : public UnityEngine::MonoBehaviour {
    public:
    // protected System.Boolean m_allowOffhandGrab
    // Offset: 0x18
    bool m_allowOffhandGrab;
    // protected System.Boolean m_snapPosition
    // Offset: 0x19
    bool m_snapPosition;
    // protected System.Boolean m_snapOrientation
    // Offset: 0x1A
    bool m_snapOrientation;
    // protected UnityEngine.Transform m_snapOffset
    // Offset: 0x20
    UnityEngine::Transform* m_snapOffset;
    // protected UnityEngine.Collider[] m_grabPoints
    // Offset: 0x28
    ::Array<UnityEngine::Collider*>* m_grabPoints;
    // protected System.Boolean m_grabbedKinematic
    // Offset: 0x30
    bool m_grabbedKinematic;
    // protected UnityEngine.Collider m_grabbedCollider
    // Offset: 0x38
    UnityEngine::Collider* m_grabbedCollider;
    // protected OVRGrabber m_grabbedBy
    // Offset: 0x40
    GlobalNamespace::OVRGrabber* m_grabbedBy;
    // public System.Boolean get_allowOffhandGrab()
    // Offset: 0xDC36B8
    bool get_allowOffhandGrab();
    // public System.Boolean get_isGrabbed()
    // Offset: 0xDC36C0
    bool get_isGrabbed();
    // public System.Boolean get_snapPosition()
    // Offset: 0xDC3730
    bool get_snapPosition();
    // public System.Boolean get_snapOrientation()
    // Offset: 0xDC3738
    bool get_snapOrientation();
    // public UnityEngine.Transform get_snapOffset()
    // Offset: 0xDC3740
    UnityEngine::Transform* get_snapOffset();
    // public OVRGrabber get_grabbedBy()
    // Offset: 0xDC3748
    GlobalNamespace::OVRGrabber* get_grabbedBy();
    // public UnityEngine.Transform get_grabbedTransform()
    // Offset: 0xDC3750
    UnityEngine::Transform* get_grabbedTransform();
    // public UnityEngine.Rigidbody get_grabbedRigidbody()
    // Offset: 0xDC376C
    UnityEngine::Rigidbody* get_grabbedRigidbody();
    // public UnityEngine.Collider[] get_grabPoints()
    // Offset: 0xDC3788
    ::Array<UnityEngine::Collider*>* get_grabPoints();
    // public System.Void GrabBegin(OVRGrabber hand, UnityEngine.Collider grabPoint)
    // Offset: 0xDC3790
    void GrabBegin(GlobalNamespace::OVRGrabber* hand, UnityEngine::Collider* grabPoint);
    // public System.Void GrabEnd(UnityEngine.Vector3 linearVelocity, UnityEngine.Vector3 angularVelocity)
    // Offset: 0xDC3830
    void GrabEnd(UnityEngine::Vector3 linearVelocity, UnityEngine::Vector3 angularVelocity);
    // private System.Void Awake()
    // Offset: 0xDC3924
    void Awake();
    // protected System.Void Start()
    // Offset: 0xDC3A90
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0xDC3AFC
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0xDC3C58
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRGrabbable* New_ctor();
  }; // OVRGrabbable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGrabbable*, "", "OVRGrabbable");
#pragma pack(pop)
