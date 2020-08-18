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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Rotate
  class Rotate : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Vector3 _rotationVector
    // Offset: 0x18
    UnityEngine::Vector3 rotationVector;
    // public System.Single _speed
    // Offset: 0x24
    float speed;
    // private UnityEngine.Transform _transform
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // private UnityEngine.Vector3 _startRotationAngles
    // Offset: 0x30
    UnityEngine::Vector3 startRotationAngles;
    // protected System.Void Awake()
    // Offset: 0xC18824
    void Awake();
    // protected System.Void OnBecameVisible()
    // Offset: 0xC18900
    void OnBecameVisible();
    // protected System.Void OnBecameInvisible()
    // Offset: 0xC1890C
    void OnBecameInvisible();
    // protected System.Void Update()
    // Offset: 0xC18918
    void Update();
    // public System.Void .ctor()
    // Offset: 0xC18A20
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Rotate* New_ctor();
  }; // Rotate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Rotate*, "", "Rotate");
#pragma pack(pop)
