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
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainCamera
  class MainCamera : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Camera _camera
    // Offset: 0x18
    UnityEngine::Camera* camera;
    // private UnityEngine.Transform _transform
    // Offset: 0x20
    UnityEngine::Transform* transform;
    // public UnityEngine.Camera get_camera()
    // Offset: 0x19427B8
    UnityEngine::Camera* get_camera();
    // public System.Void set_enableCamera(System.Boolean value)
    // Offset: 0x19427C0
    void set_enableCamera(bool value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x19427F4
    UnityEngine::Vector3 get_position();
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x1942810
    UnityEngine::Quaternion get_rotation();
    // protected System.Void Awake()
    // Offset: 0x194282C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x19428A8
    void OnEnable();
    // protected System.Void Update()
    // Offset: 0x19428AC
    void Update();
    // protected System.Void OnDisable()
    // Offset: 0x19428B0
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x19428B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainCamera* New_ctor();
  }; // MainCamera
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainCamera*, "", "MainCamera");
#pragma pack(pop)
