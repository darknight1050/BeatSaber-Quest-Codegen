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
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRCenterAdjust
  class VRCenterAdjust;
  // Forward declaring type: VRController
  class VRController;
  // Forward declaring type: MouseLook
  class MouseLook;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRInputModule
  class VRInputModule;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: FirstPersonFlyingController
  // [] Offset: FFFFFFFF
  class FirstPersonFlyingController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _moveSensitivity
    // Size: 0x4
    // Offset: 0x18
    float moveSensitivity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: moveSensitivity and: camera
    char __padding0[0x4] = {};
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // private System.Single _cameraFov
    // Size: 0x4
    // Offset: 0x28
    float cameraFov;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cameraFov and: centerAdjust
    char __padding2[0x4] = {};
    // private VRCenterAdjust _centerAdjust
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::VRCenterAdjust* centerAdjust;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRCenterAdjust*) == 0x8);
    // private VRController _controller0
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::VRController* controller0;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // private VRController _controller1
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::VRController* controller1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // private VRUIControls.VRInputModule _vrInputModule
    // Size: 0x8
    // Offset: 0x48
    VRUIControls::VRInputModule* vrInputModule;
    // Field size check
    static_assert(sizeof(VRUIControls::VRInputModule*) == 0x8);
    // private UnityEngine.GameObject[] _controllerModels
    // Size: 0x8
    // Offset: 0x50
    ::Array<UnityEngine::GameObject*>* controllerModels;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // private MouseLook _mouseLook
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MouseLook* mouseLook;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MouseLook*) == 0x8);
    // private UnityEngine.Transform _cameraTransform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* cameraTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: FirstPersonFlyingController
    FirstPersonFlyingController(float moveSensitivity_ = {}, UnityEngine::Camera* camera_ = {}, float cameraFov_ = {}, GlobalNamespace::VRCenterAdjust* centerAdjust_ = {}, GlobalNamespace::VRController* controller0_ = {}, GlobalNamespace::VRController* controller1_ = {}, VRUIControls::VRInputModule* vrInputModule_ = {}, ::Array<UnityEngine::GameObject*>* controllerModels_ = {}, GlobalNamespace::MouseLook* mouseLook_ = {}, UnityEngine::Transform* cameraTransform_ = {}) noexcept : moveSensitivity{moveSensitivity_}, camera{camera_}, cameraFov{cameraFov_}, centerAdjust{centerAdjust_}, controller0{controller0_}, controller1{controller1_}, vrInputModule{vrInputModule_}, controllerModels{controllerModels_}, mouseLook{mouseLook_}, cameraTransform{cameraTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF2E450
    void Awake();
    // protected System.Void Start()
    // Offset: 0xF2E45C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0xF2E678
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xF2E6AC
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0xF2E6DC
    void Update();
    // public System.Void .ctor()
    // Offset: 0xF2EAD4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirstPersonFlyingController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FirstPersonFlyingController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirstPersonFlyingController*, creationType>()));
    }
  }; // FirstPersonFlyingController
  #pragma pack(pop)
  static check_size<sizeof(FirstPersonFlyingController), 96 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_FirstPersonFlyingControllerSizeCheck;
  static_assert(sizeof(FirstPersonFlyingController) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FirstPersonFlyingController*, "", "FirstPersonFlyingController");
