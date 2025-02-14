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
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: OVRCameraRig
  // [ExecuteInEditMode] Offset: DCDB90
  class OVRCameraRig : public UnityEngine::MonoBehaviour {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDCFBB0
    // private UnityEngine.Transform <trackingSpace>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* trackingSpace;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFBC0
    // private UnityEngine.Transform <leftEyeAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* leftEyeAnchor;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFBD0
    // private UnityEngine.Transform <centerEyeAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* centerEyeAnchor;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFBE0
    // private UnityEngine.Transform <rightEyeAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* rightEyeAnchor;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFBF0
    // private UnityEngine.Transform <leftHandAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* leftHandAnchor;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFC00
    // private UnityEngine.Transform <rightHandAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* rightHandAnchor;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFC10
    // private UnityEngine.Transform <leftControllerAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* leftControllerAnchor;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFC20
    // private UnityEngine.Transform <rightControllerAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* rightControllerAnchor;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFC30
    // private UnityEngine.Transform <trackerAnchor>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* trackerAnchor;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCFC40
    // private System.Action`1<OVRCameraRig> UpdatedAnchors
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<GlobalNamespace::OVRCameraRig*>* UpdatedAnchors;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::OVRCameraRig*>*) == 0x8);
    // public System.Boolean usePerEyeCameras
    // Size: 0x1
    // Offset: 0x68
    bool usePerEyeCameras;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean useFixedUpdateForTracking
    // Size: 0x1
    // Offset: 0x69
    bool useFixedUpdateForTracking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean disableEyeAnchorCameras
    // Size: 0x1
    // Offset: 0x6A
    bool disableEyeAnchorCameras;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _skipUpdate
    // Size: 0x1
    // Offset: 0x6B
    bool skipUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: skipUpdate and: trackingSpaceName
    char __padding13[0x4] = {};
    // protected readonly System.String trackingSpaceName
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppString* trackingSpaceName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected readonly System.String trackerAnchorName
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* trackerAnchorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected readonly System.String leftEyeAnchorName
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* leftEyeAnchorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected readonly System.String centerEyeAnchorName
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* centerEyeAnchorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected readonly System.String rightEyeAnchorName
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* rightEyeAnchorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected readonly System.String leftHandAnchorName
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppString* leftHandAnchorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected readonly System.String rightHandAnchorName
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppString* rightHandAnchorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected readonly System.String leftControllerAnchorName
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppString* leftControllerAnchorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected readonly System.String rightControllerAnchorName
    // Size: 0x8
    // Offset: 0xB0
    ::Il2CppString* rightControllerAnchorName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected UnityEngine.Camera _centerEyeCamera
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::Camera* centerEyeCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // protected UnityEngine.Camera _leftEyeCamera
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::Camera* leftEyeCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // protected UnityEngine.Camera _rightEyeCamera
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::Camera* rightEyeCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // Creating value type constructor for type: OVRCameraRig
    OVRCameraRig(UnityEngine::Transform* trackingSpace_ = {}, UnityEngine::Transform* leftEyeAnchor_ = {}, UnityEngine::Transform* centerEyeAnchor_ = {}, UnityEngine::Transform* rightEyeAnchor_ = {}, UnityEngine::Transform* leftHandAnchor_ = {}, UnityEngine::Transform* rightHandAnchor_ = {}, UnityEngine::Transform* leftControllerAnchor_ = {}, UnityEngine::Transform* rightControllerAnchor_ = {}, UnityEngine::Transform* trackerAnchor_ = {}, System::Action_1<GlobalNamespace::OVRCameraRig*>* UpdatedAnchors_ = {}, bool usePerEyeCameras_ = {}, bool useFixedUpdateForTracking_ = {}, bool disableEyeAnchorCameras_ = {}, bool skipUpdate_ = {}, ::Il2CppString* trackingSpaceName_ = {}, ::Il2CppString* trackerAnchorName_ = {}, ::Il2CppString* leftEyeAnchorName_ = {}, ::Il2CppString* centerEyeAnchorName_ = {}, ::Il2CppString* rightEyeAnchorName_ = {}, ::Il2CppString* leftHandAnchorName_ = {}, ::Il2CppString* rightHandAnchorName_ = {}, ::Il2CppString* leftControllerAnchorName_ = {}, ::Il2CppString* rightControllerAnchorName_ = {}, UnityEngine::Camera* centerEyeCamera_ = {}, UnityEngine::Camera* leftEyeCamera_ = {}, UnityEngine::Camera* rightEyeCamera_ = {}) noexcept : trackingSpace{trackingSpace_}, leftEyeAnchor{leftEyeAnchor_}, centerEyeAnchor{centerEyeAnchor_}, rightEyeAnchor{rightEyeAnchor_}, leftHandAnchor{leftHandAnchor_}, rightHandAnchor{rightHandAnchor_}, leftControllerAnchor{leftControllerAnchor_}, rightControllerAnchor{rightControllerAnchor_}, trackerAnchor{trackerAnchor_}, UpdatedAnchors{UpdatedAnchors_}, usePerEyeCameras{usePerEyeCameras_}, useFixedUpdateForTracking{useFixedUpdateForTracking_}, disableEyeAnchorCameras{disableEyeAnchorCameras_}, skipUpdate{skipUpdate_}, trackingSpaceName{trackingSpaceName_}, trackerAnchorName{trackerAnchorName_}, leftEyeAnchorName{leftEyeAnchorName_}, centerEyeAnchorName{centerEyeAnchorName_}, rightEyeAnchorName{rightEyeAnchorName_}, leftHandAnchorName{leftHandAnchorName_}, rightHandAnchorName{rightHandAnchorName_}, leftControllerAnchorName{leftControllerAnchorName_}, rightControllerAnchorName{rightControllerAnchorName_}, centerEyeCamera{centerEyeCamera_}, leftEyeCamera{leftEyeCamera_}, rightEyeCamera{rightEyeCamera_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Camera get_leftEyeCamera()
    // Offset: 0x125F0BC
    UnityEngine::Camera* get_leftEyeCamera();
    // public UnityEngine.Camera get_rightEyeCamera()
    // Offset: 0x125F0D8
    UnityEngine::Camera* get_rightEyeCamera();
    // public UnityEngine.Transform get_trackingSpace()
    // Offset: 0x125F0F4
    UnityEngine::Transform* get_trackingSpace();
    // private System.Void set_trackingSpace(UnityEngine.Transform value)
    // Offset: 0x125F0FC
    void set_trackingSpace(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_leftEyeAnchor()
    // Offset: 0x125F104
    UnityEngine::Transform* get_leftEyeAnchor();
    // private System.Void set_leftEyeAnchor(UnityEngine.Transform value)
    // Offset: 0x125F10C
    void set_leftEyeAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_centerEyeAnchor()
    // Offset: 0x125F114
    UnityEngine::Transform* get_centerEyeAnchor();
    // private System.Void set_centerEyeAnchor(UnityEngine.Transform value)
    // Offset: 0x125F11C
    void set_centerEyeAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_rightEyeAnchor()
    // Offset: 0x125F124
    UnityEngine::Transform* get_rightEyeAnchor();
    // private System.Void set_rightEyeAnchor(UnityEngine.Transform value)
    // Offset: 0x125F12C
    void set_rightEyeAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_leftHandAnchor()
    // Offset: 0x125F134
    UnityEngine::Transform* get_leftHandAnchor();
    // private System.Void set_leftHandAnchor(UnityEngine.Transform value)
    // Offset: 0x125F13C
    void set_leftHandAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_rightHandAnchor()
    // Offset: 0x125F144
    UnityEngine::Transform* get_rightHandAnchor();
    // private System.Void set_rightHandAnchor(UnityEngine.Transform value)
    // Offset: 0x125F14C
    void set_rightHandAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_leftControllerAnchor()
    // Offset: 0x125F154
    UnityEngine::Transform* get_leftControllerAnchor();
    // private System.Void set_leftControllerAnchor(UnityEngine.Transform value)
    // Offset: 0x125F15C
    void set_leftControllerAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_rightControllerAnchor()
    // Offset: 0x125F164
    UnityEngine::Transform* get_rightControllerAnchor();
    // private System.Void set_rightControllerAnchor(UnityEngine.Transform value)
    // Offset: 0x125F16C
    void set_rightControllerAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_trackerAnchor()
    // Offset: 0x125F174
    UnityEngine::Transform* get_trackerAnchor();
    // private System.Void set_trackerAnchor(UnityEngine.Transform value)
    // Offset: 0x125F17C
    void set_trackerAnchor(UnityEngine::Transform* value);
    // public System.Void add_UpdatedAnchors(System.Action`1<OVRCameraRig> value)
    // Offset: 0x125F184
    void add_UpdatedAnchors(System::Action_1<GlobalNamespace::OVRCameraRig*>* value);
    // public System.Void remove_UpdatedAnchors(System.Action`1<OVRCameraRig> value)
    // Offset: 0x125F228
    void remove_UpdatedAnchors(System::Action_1<GlobalNamespace::OVRCameraRig*>* value);
    // protected System.Void Awake()
    // Offset: 0x125F2CC
    void Awake();
    // protected System.Void Start()
    // Offset: 0x125F2E0
    void Start();
    // protected System.Void FixedUpdate()
    // Offset: 0x125F370
    void FixedUpdate();
    // protected System.Void Update()
    // Offset: 0x125F390
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0x125F3B4
    void OnDestroy();
    // protected System.Void UpdateAnchors(System.Boolean updateEyeAnchors, System.Boolean updateHandAnchors)
    // Offset: 0x125F42C
    void UpdateAnchors(bool updateEyeAnchors, bool updateHandAnchors);
    // protected System.Void OnBeforeRenderCallback()
    // Offset: 0x12602A0
    void OnBeforeRenderCallback();
    // protected System.Void RaiseUpdatedAnchorsEvent()
    // Offset: 0x12603AC
    void RaiseUpdatedAnchorsEvent();
    // public System.Void EnsureGameObjectIntegrity()
    // Offset: 0x1260410
    void EnsureGameObjectIntegrity();
    // protected UnityEngine.Transform ConfigureAnchor(UnityEngine.Transform root, System.String name)
    // Offset: 0x1260C9C
    UnityEngine::Transform* ConfigureAnchor(UnityEngine::Transform* root, ::Il2CppString* name);
    // public UnityEngine.Matrix4x4 ComputeTrackReferenceMatrix()
    // Offset: 0x1260ED4
    UnityEngine::Matrix4x4 ComputeTrackReferenceMatrix();
    // public System.Void .ctor()
    // Offset: 0x12611D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCameraRig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRCameraRig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCameraRig*, creationType>()));
    }
  }; // OVRCameraRig
  #pragma pack(pop)
  static check_size<sizeof(OVRCameraRig), 200 + sizeof(UnityEngine::Camera*)> __GlobalNamespace_OVRCameraRigSizeCheck;
  static_assert(sizeof(OVRCameraRig) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCameraRig*, "", "OVRCameraRig");
