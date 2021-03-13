// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRPlugin/Fovf
#include "GlobalNamespace/OVRPlugin_Fovf.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVRMixedRealityCaptureTest
  // [] Offset: FFFFFFFF
  class OVRMixedRealityCaptureTest : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode
    struct CameraMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRMixedRealityCaptureTest/CameraMode
    // [] Offset: FFFFFFFF
    struct CameraMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: CameraMode
      constexpr CameraMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
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
    }; // OVRMixedRealityCaptureTest/CameraMode
    #pragma pack(pop)
    static check_size<sizeof(OVRMixedRealityCaptureTest::CameraMode), 0 + sizeof(int)> __GlobalNamespace_OVRMixedRealityCaptureTest_CameraModeSizeCheck;
    static_assert(sizeof(OVRMixedRealityCaptureTest::CameraMode) == 0x4);
    // private System.Boolean inited
    // Size: 0x1
    // Offset: 0x18
    bool inited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inited and: currentMode
    char __padding0[0x3] = {};
    // private OVRMixedRealityCaptureTest/CameraMode currentMode
    // Size: 0x4
    // Offset: 0x1C
    GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode currentMode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode) == 0x4);
    // public UnityEngine.Camera defaultExternalCamera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* defaultExternalCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private OVRPlugin/Fovf defaultFov
    // Size: 0x10
    // Offset: 0x28
    GlobalNamespace::OVRPlugin::Fovf defaultFov;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Fovf) == 0x10);
    // Creating value type constructor for type: OVRMixedRealityCaptureTest
    OVRMixedRealityCaptureTest(bool inited_ = {}, GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode currentMode_ = {}, UnityEngine::Camera* defaultExternalCamera_ = {}, GlobalNamespace::OVRPlugin::Fovf defaultFov_ = {}) noexcept : inited{inited_}, currentMode{currentMode_}, defaultExternalCamera{defaultExternalCamera_}, defaultFov{defaultFov_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x13A99AC
    void Start();
    // private System.Void Initialize()
    // Offset: 0x13A9A5C
    void Initialize();
    // private System.Void UpdateDefaultExternalCamera()
    // Offset: 0x13A9E8C
    void UpdateDefaultExternalCamera();
    // private System.Void Update()
    // Offset: 0x13AA6FC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x13AB330
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMixedRealityCaptureTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRMixedRealityCaptureTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMixedRealityCaptureTest*, creationType>()));
    }
  }; // OVRMixedRealityCaptureTest
  #pragma pack(pop)
  static check_size<sizeof(OVRMixedRealityCaptureTest), 40 + sizeof(GlobalNamespace::OVRPlugin::Fovf)> __GlobalNamespace_OVRMixedRealityCaptureTestSizeCheck;
  static_assert(sizeof(OVRMixedRealityCaptureTest) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureTest*, "", "OVRMixedRealityCaptureTest");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMixedRealityCaptureTest::CameraMode, "", "OVRMixedRealityCaptureTest/CameraMode");
