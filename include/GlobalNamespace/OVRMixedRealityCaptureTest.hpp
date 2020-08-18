// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRPlugin/Fovf
#include "GlobalNamespace/OVRPlugin_Fovf.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRMixedRealityCaptureTest
  class OVRMixedRealityCaptureTest : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode
    struct CameraMode;
    // Autogenerated type: OVRMixedRealityCaptureTest/CameraMode
    struct CameraMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OVRMixedRealityCaptureTest/CameraMode Normal
      static constexpr const int Normal = 0;
      // Get static field: static public OVRMixedRealityCaptureTest/CameraMode Normal
      static GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode _get_Normal();
      // Set static field: static public OVRMixedRealityCaptureTest/CameraMode Normal
      static void _set_Normal(GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode value);
      // static field const value: static public OVRMixedRealityCaptureTest/CameraMode OverrideFov
      static constexpr const int OverrideFov = 1;
      // Get static field: static public OVRMixedRealityCaptureTest/CameraMode OverrideFov
      static GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode _get_OverrideFov();
      // Set static field: static public OVRMixedRealityCaptureTest/CameraMode OverrideFov
      static void _set_OverrideFov(GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode value);
      // static field const value: static public OVRMixedRealityCaptureTest/CameraMode ThirdPerson
      static constexpr const int ThirdPerson = 2;
      // Get static field: static public OVRMixedRealityCaptureTest/CameraMode ThirdPerson
      static GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode _get_ThirdPerson();
      // Set static field: static public OVRMixedRealityCaptureTest/CameraMode ThirdPerson
      static void _set_ThirdPerson(GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode value);
      // Creating value type constructor for type: CameraMode
      CameraMode(int value_ = {}) : value{value_} {}
    }; // OVRMixedRealityCaptureTest/CameraMode
    // private System.Boolean inited
    // Offset: 0x18
    bool inited;
    // private OVRMixedRealityCaptureTest/CameraMode currentMode
    // Offset: 0x1C
    GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode currentMode;
    // public UnityEngine.Camera defaultExternalCamera
    // Offset: 0x20
    UnityEngine::Camera* defaultExternalCamera;
    // private OVRPlugin/Fovf defaultFov
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::Fovf defaultFov;
    // private System.Void Start()
    // Offset: 0xE481F4
    void Start();
    // private System.Void Initialize()
    // Offset: 0xE482A4
    void Initialize();
    // private System.Void UpdateDefaultExternalCamera()
    // Offset: 0xE4880C
    void UpdateDefaultExternalCamera();
    // private System.Void Update()
    // Offset: 0xE48E88
    void Update();
    // public System.Void .ctor()
    // Offset: 0xE49A38
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRMixedRealityCaptureTest* New_ctor();
  }; // OVRMixedRealityCaptureTest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureTest*, "", "OVRMixedRealityCaptureTest");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode, "", "OVRMixedRealityCaptureTest/CameraMode");
#pragma pack(pop)
