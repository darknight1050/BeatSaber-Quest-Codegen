// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRController
  class VRController;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Skipping declaration: Mode because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorder
  class VRControllersRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRControllersRecorder::TypeSerializationBinder
    class TypeSerializationBinder;
    // Nested type: GlobalNamespace::VRControllersRecorder::SavedData
    class SavedData;
    // Nested type: GlobalNamespace::VRControllersRecorder::Mode
    struct Mode;
    // Nested type: GlobalNamespace::VRControllersRecorder::Keyframe
    class Keyframe;
    // Autogenerated type: VRControllersRecorder/Mode
    struct Mode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public VRControllersRecorder/Mode Record
      static constexpr const int Record = 0;
      // Get static field: static public VRControllersRecorder/Mode Record
      static GlobalNamespace::VRControllersRecorder::Mode _get_Record();
      // Set static field: static public VRControllersRecorder/Mode Record
      static void _set_Record(GlobalNamespace::VRControllersRecorder::Mode value);
      // static field const value: static public VRControllersRecorder/Mode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public VRControllersRecorder/Mode Playback
      static GlobalNamespace::VRControllersRecorder::Mode _get_Playback();
      // Set static field: static public VRControllersRecorder/Mode Playback
      static void _set_Playback(GlobalNamespace::VRControllersRecorder::Mode value);
      // static field const value: static public VRControllersRecorder/Mode Off
      static constexpr const int Off = 2;
      // Get static field: static public VRControllersRecorder/Mode Off
      static GlobalNamespace::VRControllersRecorder::Mode _get_Off();
      // Set static field: static public VRControllersRecorder/Mode Off
      static void _set_Off(GlobalNamespace::VRControllersRecorder::Mode value);
      // Creating value type constructor for type: Mode
      Mode(int value_ = {}) : value{value_} {}
    }; // VRControllersRecorder/Mode
    // private UnityEngine.TextAsset _recordingTextAsset
    // Offset: 0x18
    UnityEngine::TextAsset* recordingTextAsset;
    // private System.String _recordingFileName
    // Offset: 0x20
    ::Il2CppString* recordingFileName;
    // private VRControllersRecorder/Mode _mode
    // Offset: 0x28
    GlobalNamespace::VRControllersRecorder::Mode mode;
    // private System.Boolean _dontMoveHead
    // Offset: 0x2C
    bool dontMoveHead;
    // private System.Boolean _changeToNonVRCamera
    // Offset: 0x2D
    bool changeToNonVRCamera;
    // private System.Boolean _adjustSabersPositionBasedOnHeadPosition
    // Offset: 0x2E
    bool adjustSabersPositionBasedOnHeadPosition;
    // private UnityEngine.Vector3 _headRotationOffset
    // Offset: 0x30
    UnityEngine::Vector3 headRotationOffset;
    // private UnityEngine.Vector3 _headPositionOffset
    // Offset: 0x3C
    UnityEngine::Vector3 headPositionOffset;
    // private System.Single _headSmooth
    // Offset: 0x48
    float headSmooth;
    // private System.Single _cameraFOV
    // Offset: 0x4C
    float cameraFOV;
    // private System.Single _controllersTimeOffset
    // Offset: 0x50
    float controllersTimeOffset;
    // private System.Single _controllersSmooth
    // Offset: 0x54
    float controllersSmooth;
    // private VRController _controller0
    // Offset: 0x58
    GlobalNamespace::VRController* controller0;
    // private VRController _controller1
    // Offset: 0x60
    GlobalNamespace::VRController* controller1;
    // private UnityEngine.Transform _headTransform
    // Offset: 0x68
    UnityEngine::Transform* headTransform;
    // private UnityEngine.Camera _camera
    // Offset: 0x70
    UnityEngine::Camera* camera;
    // private UnityEngine.Camera _recorderCamera
    // Offset: 0x78
    UnityEngine::Camera* recorderCamera;
    // private UnityEngine.Transform _spawnRotationTransform
    // Offset: 0x80
    UnityEngine::Transform* spawnRotationTransform;
    // private AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x88
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private System.Collections.Generic.List`1<VRControllersRecorder/Keyframe> _keyframes
    // Offset: 0x90
    System::Collections::Generic::List_1<GlobalNamespace::VRControllersRecorder::Keyframe*>* keyframes;
    // private System.Int32 _keyframeIndex
    // Offset: 0x98
    int keyframeIndex;
    // public System.Void set_mode(VRControllersRecorder/Mode value)
    // Offset: 0x1969BD4
    void set_mode(GlobalNamespace::VRControllersRecorder::Mode value);
    // public VRControllersRecorder/Mode get_mode()
    // Offset: 0x1969BDC
    GlobalNamespace::VRControllersRecorder::Mode get_mode();
    // public System.Void set_recordingTextAsset(UnityEngine.TextAsset value)
    // Offset: 0x1969BE4
    void set_recordingTextAsset(UnityEngine::TextAsset* value);
    // public UnityEngine.TextAsset get_recordingTextAsset()
    // Offset: 0x1969BEC
    UnityEngine::TextAsset* get_recordingTextAsset();
    // public System.Void set_recordingFileName(System.String value)
    // Offset: 0x1969BF4
    void set_recordingFileName(::Il2CppString* value);
    // public System.String get_recordingFileName()
    // Offset: 0x1969BFC
    ::Il2CppString* get_recordingFileName();
    // public System.Void set_changeToNonVRCamera(System.Boolean value)
    // Offset: 0x1969C04
    void set_changeToNonVRCamera(bool value);
    // public System.Boolean get_changeToNonVRCamera()
    // Offset: 0x1969C10
    bool get_changeToNonVRCamera();
    // protected System.Void Start()
    // Offset: 0x1969C18
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x196A4E0
    void OnDestroy();
    // public System.Void SetDefaultSettings()
    // Offset: 0x196A810
    void SetDefaultSettings();
    // public System.Void SetInGamePlaybackDefaultSettings()
    // Offset: 0x196A8A8
    void SetInGamePlaybackDefaultSettings();
    // private System.Void PlaybackTick()
    // Offset: 0x196A944
    void PlaybackTick();
    // private System.Void SetPositionAndRotation(UnityEngine.Transform transf, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion targetRot, System.Single t)
    // Offset: 0x196B21C
    void SetPositionAndRotation(UnityEngine::Transform* transf, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion targetRot, float t);
    // private System.Void RecordTick()
    // Offset: 0x196B398
    void RecordTick();
    // protected System.Void Update()
    // Offset: 0x196B5E4
    void Update();
    // protected System.Void LateUpdate()
    // Offset: 0x196B658
    void LateUpdate();
    // private System.Void Save()
    // Offset: 0x196A4F0
    void Save();
    // private System.Void Load()
    // Offset: 0x1969F58
    void Load();
    // static public UnityEngine.AnimationClip CreateAnimationClipFromRecording(System.String recordingfilePath)
    // Offset: 0x196B680
    static UnityEngine::AnimationClip* CreateAnimationClipFromRecording(::Il2CppString* recordingfilePath);
    // public System.Void .ctor()
    // Offset: 0x196C21C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRControllersRecorder* New_ctor();
  }; // VRControllersRecorder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorder*, "", "VRControllersRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorder::Mode, "", "VRControllersRecorder/Mode");
#pragma pack(pop)
