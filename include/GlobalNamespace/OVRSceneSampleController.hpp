// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPlayerController
  class OVRPlayerController;
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
  // Forward declaring type: OVRGridCube
  class OVRGridCube;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: OVRSceneSampleController
  // [] Offset: FFFFFFFF
  class OVRSceneSampleController : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.KeyCode quitKey
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::KeyCode quitKey;
    // Field size check
    static_assert(sizeof(UnityEngine::KeyCode) == 0x4);
    // Padding between fields: quitKey and: fadeInTexture
    char __padding0[0x4] = {};
    // public UnityEngine.Texture fadeInTexture
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Texture* fadeInTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture*) == 0x8);
    // public System.Single speedRotationIncrement
    // Size: 0x4
    // Offset: 0x28
    float speedRotationIncrement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: speedRotationIncrement and: playerController
    char __padding2[0x4] = {};
    // private OVRPlayerController playerController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::OVRPlayerController* playerController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlayerController*) == 0x8);
    // private OVRCameraRig cameraController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::OVRCameraRig* cameraController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRCameraRig*) == 0x8);
    // public System.String layerName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* layerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean visionMode
    // Size: 0x1
    // Offset: 0x48
    bool visionMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: visionMode and: gridCube
    char __padding6[0x7] = {};
    // private OVRGridCube gridCube
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::OVRGridCube* gridCube;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRGridCube*) == 0x8);
    // Creating value type constructor for type: OVRSceneSampleController
    OVRSceneSampleController(UnityEngine::KeyCode quitKey_ = {}, UnityEngine::Texture* fadeInTexture_ = {}, float speedRotationIncrement_ = {}, GlobalNamespace::OVRPlayerController* playerController_ = {}, GlobalNamespace::OVRCameraRig* cameraController_ = {}, ::Il2CppString* layerName_ = {}, bool visionMode_ = {}, GlobalNamespace::OVRGridCube* gridCube_ = {}) noexcept : quitKey{quitKey_}, fadeInTexture{fadeInTexture_}, speedRotationIncrement{speedRotationIncrement_}, playerController{playerController_}, cameraController{cameraController_}, layerName{layerName_}, visionMode{visionMode_}, gridCube{gridCube_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Awake()
    // Offset: 0x1565410
    void Awake();
    // private System.Void Start()
    // Offset: 0x15655AC
    void Start();
    // private System.Void Update()
    // Offset: 0x1565698
    void Update();
    // private System.Void UpdateVisionMode()
    // Offset: 0x1565848
    void UpdateVisionMode();
    // private System.Void UpdateSpeedAndRotationScaleMultiplier()
    // Offset: 0x156592C
    void UpdateSpeedAndRotationScaleMultiplier();
    // private System.Void UpdateRecenterPose()
    // Offset: 0x156577C
    void UpdateRecenterPose();
    // public System.Void .ctor()
    // Offset: 0x1565A20
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneSampleController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRSceneSampleController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneSampleController*, creationType>()));
    }
  }; // OVRSceneSampleController
  #pragma pack(pop)
  static check_size<sizeof(OVRSceneSampleController), 80 + sizeof(GlobalNamespace::OVRGridCube*)> __GlobalNamespace_OVRSceneSampleControllerSizeCheck;
  static_assert(sizeof(OVRSceneSampleController) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSceneSampleController*, "", "OVRSceneSampleController");
