// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: OVRPose
#include "GlobalNamespace/OVRPose.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: CharacterController
  class CharacterController;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRPlayerController
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: CDFFD8
  class OVRPlayerController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single Acceleration
    // Size: 0x4
    // Offset: 0x18
    float Acceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Damping
    // Size: 0x4
    // Offset: 0x1C
    float Damping;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single BackAndSideDampen
    // Size: 0x4
    // Offset: 0x20
    float BackAndSideDampen;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single JumpForce
    // Size: 0x4
    // Offset: 0x24
    float JumpForce;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RotationAmount
    // Size: 0x4
    // Offset: 0x28
    float RotationAmount;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single RotationRatchet
    // Size: 0x4
    // Offset: 0x2C
    float RotationRatchet;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xCE3238
    // public System.Boolean SnapRotation
    // Size: 0x1
    // Offset: 0x30
    bool SnapRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xCE3270
    // public System.Int32 FixedSpeedSteps
    // Size: 0x4
    // Offset: 0x34
    int FixedSpeedSteps;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean HmdResetsY
    // Size: 0x1
    // Offset: 0x38
    bool HmdResetsY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean HmdRotatesY
    // Size: 0x1
    // Offset: 0x39
    bool HmdRotatesY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single GravityModifier
    // Size: 0x4
    // Offset: 0x3C
    float GravityModifier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean useProfileData
    // Size: 0x1
    // Offset: 0x40
    bool useProfileData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single CameraHeight
    // Size: 0x4
    // Offset: 0x44
    float CameraHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCE32A8
    // private System.Action`1<UnityEngine.Transform> TransformUpdated
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<UnityEngine::Transform*>* TransformUpdated;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Transform*>*) == 0x8);
    // public System.Boolean Teleported
    // Size: 0x1
    // Offset: 0x50
    bool Teleported;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xCE32B8
    // private System.Action CameraUpdated
    // Size: 0x8
    // Offset: 0x58
    System::Action* CameraUpdated;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCE32C8
    // private System.Action PreCharacterMove
    // Size: 0x8
    // Offset: 0x60
    System::Action* PreCharacterMove;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // public System.Boolean EnableLinearMovement
    // Size: 0x1
    // Offset: 0x68
    bool EnableLinearMovement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean EnableRotation
    // Size: 0x1
    // Offset: 0x69
    bool EnableRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean RotationEitherThumbstick
    // Size: 0x1
    // Offset: 0x6A
    bool RotationEitherThumbstick;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected UnityEngine.CharacterController Controller
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::CharacterController* Controller;
    // Field size check
    static_assert(sizeof(UnityEngine::CharacterController*) == 0x8);
    // protected OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRCameraRig*) == 0x8);
    // private System.Single MoveScale
    // Size: 0x4
    // Offset: 0x80
    float MoveScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 MoveThrottle
    // Size: 0xC
    // Offset: 0x84
    UnityEngine::Vector3 MoveThrottle;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single FallSpeed
    // Size: 0x4
    // Offset: 0x90
    float FallSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Nullable`1<OVRPose> InitialPose
    // Size: 0xFFFFFFFF
    // Offset: 0x94
    System::Nullable_1<GlobalNamespace::OVRPose> InitialPose;
    // [CompilerGeneratedAttribute] Offset: 0xCE32D8
    // private System.Single <InitialYRotation>k__BackingField
    // Size: 0x4
    // Offset: 0xB4
    float InitialYRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single MoveScaleMultiplier
    // Size: 0x4
    // Offset: 0xB8
    float MoveScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single RotationScaleMultiplier
    // Size: 0x4
    // Offset: 0xBC
    float RotationScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean SkipMouseRotation
    // Size: 0x1
    // Offset: 0xC0
    bool SkipMouseRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean HaltUpdateMovement
    // Size: 0x1
    // Offset: 0xC1
    bool HaltUpdateMovement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean prevHatLeft
    // Size: 0x1
    // Offset: 0xC2
    bool prevHatLeft;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean prevHatRight
    // Size: 0x1
    // Offset: 0xC3
    bool prevHatRight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Single SimulationRate
    // Size: 0x4
    // Offset: 0xC4
    float SimulationRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single buttonRotation
    // Size: 0x4
    // Offset: 0xC8
    float buttonRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean ReadyToSnapTurn
    // Size: 0x1
    // Offset: 0xCC
    bool ReadyToSnapTurn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean playerControllerEnabled
    // Size: 0x1
    // Offset: 0xCD
    bool playerControllerEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVRPlayerController
    OVRPlayerController(float Acceleration_ = {}, float Damping_ = {}, float BackAndSideDampen_ = {}, float JumpForce_ = {}, float RotationAmount_ = {}, float RotationRatchet_ = {}, bool SnapRotation_ = {}, int FixedSpeedSteps_ = {}, bool HmdResetsY_ = {}, bool HmdRotatesY_ = {}, float GravityModifier_ = {}, bool useProfileData_ = {}, float CameraHeight_ = {}, System::Action_1<UnityEngine::Transform*>* TransformUpdated_ = {}, bool Teleported_ = {}, System::Action* CameraUpdated_ = {}, System::Action* PreCharacterMove_ = {}, bool EnableLinearMovement_ = {}, bool EnableRotation_ = {}, bool RotationEitherThumbstick_ = {}, UnityEngine::CharacterController* Controller_ = {}, GlobalNamespace::OVRCameraRig* CameraRig_ = {}, float MoveScale_ = {}, UnityEngine::Vector3 MoveThrottle_ = {}, float FallSpeed_ = {}, System::Nullable_1<GlobalNamespace::OVRPose> InitialPose_ = {}, float InitialYRotation_ = {}, float MoveScaleMultiplier_ = {}, float RotationScaleMultiplier_ = {}, bool SkipMouseRotation_ = {}, bool HaltUpdateMovement_ = {}, bool prevHatLeft_ = {}, bool prevHatRight_ = {}, float SimulationRate_ = {}, float buttonRotation_ = {}, bool ReadyToSnapTurn_ = {}, bool playerControllerEnabled_ = {}) noexcept : Acceleration{Acceleration_}, Damping{Damping_}, BackAndSideDampen{BackAndSideDampen_}, JumpForce{JumpForce_}, RotationAmount{RotationAmount_}, RotationRatchet{RotationRatchet_}, SnapRotation{SnapRotation_}, FixedSpeedSteps{FixedSpeedSteps_}, HmdResetsY{HmdResetsY_}, HmdRotatesY{HmdRotatesY_}, GravityModifier{GravityModifier_}, useProfileData{useProfileData_}, CameraHeight{CameraHeight_}, TransformUpdated{TransformUpdated_}, Teleported{Teleported_}, CameraUpdated{CameraUpdated_}, PreCharacterMove{PreCharacterMove_}, EnableLinearMovement{EnableLinearMovement_}, EnableRotation{EnableRotation_}, RotationEitherThumbstick{RotationEitherThumbstick_}, Controller{Controller_}, CameraRig{CameraRig_}, MoveScale{MoveScale_}, MoveThrottle{MoveThrottle_}, FallSpeed{FallSpeed_}, InitialPose{InitialPose_}, InitialYRotation{InitialYRotation_}, MoveScaleMultiplier{MoveScaleMultiplier_}, RotationScaleMultiplier{RotationScaleMultiplier_}, SkipMouseRotation{SkipMouseRotation_}, HaltUpdateMovement{HaltUpdateMovement_}, prevHatLeft{prevHatLeft_}, prevHatRight{prevHatRight_}, SimulationRate{SimulationRate_}, buttonRotation{buttonRotation_}, ReadyToSnapTurn{ReadyToSnapTurn_}, playerControllerEnabled{playerControllerEnabled_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_TransformUpdated(System.Action`1<UnityEngine.Transform> value)
    // Offset: 0x13B760C
    void add_TransformUpdated(System::Action_1<UnityEngine::Transform*>* value);
    // public System.Void remove_TransformUpdated(System.Action`1<UnityEngine.Transform> value)
    // Offset: 0x13B76B0
    void remove_TransformUpdated(System::Action_1<UnityEngine::Transform*>* value);
    // public System.Void add_CameraUpdated(System.Action value)
    // Offset: 0x13B7754
    void add_CameraUpdated(System::Action* value);
    // public System.Void remove_CameraUpdated(System.Action value)
    // Offset: 0x13B77F8
    void remove_CameraUpdated(System::Action* value);
    // public System.Void add_PreCharacterMove(System.Action value)
    // Offset: 0x13B789C
    void add_PreCharacterMove(System::Action* value);
    // public System.Void remove_PreCharacterMove(System.Action value)
    // Offset: 0x13B7940
    void remove_PreCharacterMove(System::Action* value);
    // public System.Single get_InitialYRotation()
    // Offset: 0x13B79E4
    float get_InitialYRotation();
    // private System.Void set_InitialYRotation(System.Single value)
    // Offset: 0x13B79EC
    void set_InitialYRotation(float value);
    // private System.Void Start()
    // Offset: 0x13B79F4
    void Start();
    // private System.Void Awake()
    // Offset: 0x13B7AC8
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x13B7C88
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x13B7C8C
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x13B7E10
    void Update();
    // protected System.Void UpdateController()
    // Offset: 0x13B7FFC
    void UpdateController_NEW();
    // public System.Void UpdateMovement()
    // Offset: 0x13B8888
    void UpdateMovement_NEW();
    // public System.Void UpdateTransform(OVRCameraRig rig)
    // Offset: 0x13B981C
    void UpdateTransform(GlobalNamespace::OVRCameraRig* rig);
    // public System.Boolean Jump()
    // Offset: 0x13B99C8
    bool Jump();
    // public System.Void Stop()
    // Offset: 0x13B9ACC
    void Stop();
    // public System.Void GetMoveScaleMultiplier(ref System.Single moveScaleMultiplier)
    // Offset: 0x13B9B60
    void GetMoveScaleMultiplier(float& moveScaleMultiplier);
    // public System.Void SetMoveScaleMultiplier(System.Single moveScaleMultiplier)
    // Offset: 0x13B9B6C
    void SetMoveScaleMultiplier(float moveScaleMultiplier);
    // public System.Void GetRotationScaleMultiplier(ref System.Single rotationScaleMultiplier)
    // Offset: 0x13B9B74
    void GetRotationScaleMultiplier(float& rotationScaleMultiplier);
    // public System.Void SetRotationScaleMultiplier(System.Single rotationScaleMultiplier)
    // Offset: 0x13B9B80
    void SetRotationScaleMultiplier(float rotationScaleMultiplier);
    // public System.Void GetSkipMouseRotation(ref System.Boolean skipMouseRotation)
    // Offset: 0x13B9B88
    void GetSkipMouseRotation(bool& skipMouseRotation);
    // public System.Void SetSkipMouseRotation(System.Boolean skipMouseRotation)
    // Offset: 0x13B9B94
    void SetSkipMouseRotation(bool skipMouseRotation);
    // public System.Void GetHaltUpdateMovement(ref System.Boolean haltUpdateMovement)
    // Offset: 0x13B9BA0
    void GetHaltUpdateMovement(bool& haltUpdateMovement);
    // public System.Void SetHaltUpdateMovement(System.Boolean haltUpdateMovement)
    // Offset: 0x13B9BAC
    void SetHaltUpdateMovement(bool haltUpdateMovement);
    // public System.Void ResetOrientation()
    // Offset: 0x13B9BB8
    void ResetOrientation();
    // public System.Void .ctor()
    // Offset: 0x13B9CB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPlayerController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRPlayerController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPlayerController*, creationType>()));
    }
  }; // OVRPlayerController
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlayerController*, "", "OVRPlayerController");
