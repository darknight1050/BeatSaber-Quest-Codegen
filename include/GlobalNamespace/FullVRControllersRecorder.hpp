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
  // Forward declaring type: VRControllersRecorderData
  class VRControllersRecorderData;
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
  // Autogenerated type: FullVRControllersRecorder
  class FullVRControllersRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FullVRControllersRecorder::Mode
    struct Mode;
    // Autogenerated type: FullVRControllersRecorder/Mode
    struct Mode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public FullVRControllersRecorder/Mode Record
      static constexpr const int Record = 0;
      // Get static field: static public FullVRControllersRecorder/Mode Record
      static GlobalNamespace::FullVRControllersRecorder::Mode _get_Record();
      // Set static field: static public FullVRControllersRecorder/Mode Record
      static void _set_Record(GlobalNamespace::FullVRControllersRecorder::Mode value);
      // static field const value: static public FullVRControllersRecorder/Mode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public FullVRControllersRecorder/Mode Playback
      static GlobalNamespace::FullVRControllersRecorder::Mode _get_Playback();
      // Set static field: static public FullVRControllersRecorder/Mode Playback
      static void _set_Playback(GlobalNamespace::FullVRControllersRecorder::Mode value);
      // static field const value: static public FullVRControllersRecorder/Mode Off
      static constexpr const int Off = 2;
      // Get static field: static public FullVRControllersRecorder/Mode Off
      static GlobalNamespace::FullVRControllersRecorder::Mode _get_Off();
      // Set static field: static public FullVRControllersRecorder/Mode Off
      static void _set_Off(GlobalNamespace::FullVRControllersRecorder::Mode value);
      // Creating value type constructor for type: Mode
      Mode(int value_ = {}) : value{value_} {}
    }; // FullVRControllersRecorder/Mode
    // private System.String _recordingFilePath
    // Offset: 0x18
    ::Il2CppString* recordingFilePath;
    // private FullVRControllersRecorder/Mode _mode
    // Offset: 0x20
    GlobalNamespace::FullVRControllersRecorder::Mode mode;
    // private System.Single _timeOffset
    // Offset: 0x24
    float timeOffset;
    // private System.Single _othersSmooth
    // Offset: 0x28
    float othersSmooth;
    // private System.Single _handsSmooth
    // Offset: 0x2C
    float handsSmooth;
    // private System.Single _playbackFloorOffset
    // Offset: 0x30
    float playbackFloorOffset;
    // private VRController[] _controllers
    // Offset: 0x38
    ::Array<GlobalNamespace::VRController*>* controllers;
    // private AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x40
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private System.Action`1<VRController> didSetControllerTransformEvent
    // Offset: 0x48
    System::Action_1<GlobalNamespace::VRController*>* didSetControllerTransformEvent;
    // private System.Int32 _keyframeIndex
    // Offset: 0x50
    int keyframeIndex;
    // private VRControllersRecorderData _data
    // Offset: 0x58
    GlobalNamespace::VRControllersRecorderData* data;
    // public System.Void add_didSetControllerTransformEvent(System.Action`1<VRController> value)
    // Offset: 0x1936CEC
    void add_didSetControllerTransformEvent(System::Action_1<GlobalNamespace::VRController*>* value);
    // public System.Void remove_didSetControllerTransformEvent(System.Action`1<VRController> value)
    // Offset: 0x1936D90
    void remove_didSetControllerTransformEvent(System::Action_1<GlobalNamespace::VRController*>* value);
    // protected System.Void Start()
    // Offset: 0x1936E34
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x193724C
    void OnDestroy();
    // private System.Void PlaybackTick()
    // Offset: 0x19372F8
    void PlaybackTick();
    // private System.Void RecordTick()
    // Offset: 0x19376D8
    void RecordTick();
    // protected System.Void Update()
    // Offset: 0x1937880
    void Update();
    // protected System.Void LateUpdate()
    // Offset: 0x19378D0
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x19378E0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FullVRControllersRecorder* New_ctor();
  }; // FullVRControllersRecorder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FullVRControllersRecorder*, "", "FullVRControllersRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FullVRControllersRecorder::Mode, "", "FullVRControllersRecorder/Mode");
#pragma pack(pop)
