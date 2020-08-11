// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixer
  class AudioMixer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AudioManagerSO
  class AudioManagerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private UnityEngine.Audio.AudioMixer _audioMixer
    // Offset: 0x18
    UnityEngine::Audio::AudioMixer* audioMixer;
    // private System.Single _spatializerPluginLatancy
    // Offset: 0x20
    float spatializerPluginLatancy;
    // private System.Single _spatializerSFXVolumeOffset
    // Offset: 0x24
    float spatializerSFXVolumeOffset;
    // static field const value: static private System.String kMSHRTFSpatializerPluginName
    static constexpr const char* kMSHRTFSpatializerPluginName = "MS HRTF Spatializer";
    // Get static field: static private System.String kMSHRTFSpatializerPluginName
    static ::CsString* _get_kMSHRTFSpatializerPluginName();
    // Set static field: static private System.String kMSHRTFSpatializerPluginName
    static void _set_kMSHRTFSpatializerPluginName(::CsString* value);
    // static field const value: static private System.String kSFXVolume
    static constexpr const char* kSFXVolume = "SFXVolume";
    // Get static field: static private System.String kSFXVolume
    static ::CsString* _get_kSFXVolume();
    // Set static field: static private System.String kSFXVolume
    static void _set_kSFXVolume(::CsString* value);
    // static field const value: static private System.String kMainVolume
    static constexpr const char* kMainVolume = "MainVolume";
    // Get static field: static private System.String kMainVolume
    static ::CsString* _get_kMainVolume();
    // Set static field: static private System.String kMainVolume
    static void _set_kMainVolume(::CsString* value);
    // static field const value: static private System.String kMusicPitch
    static constexpr const char* kMusicPitch = "MusicPitch";
    // Get static field: static private System.String kMusicPitch
    static ::CsString* _get_kMusicPitch();
    // Set static field: static private System.String kMusicPitch
    static void _set_kMusicPitch(::CsString* value);
    // static field const value: static private System.String kMusicPitchShifterWet
    static constexpr const char* kMusicPitchShifterWet = "MusicPitchShifterWet";
    // Get static field: static private System.String kMusicPitchShifterWet
    static ::CsString* _get_kMusicPitchShifterWet();
    // Set static field: static private System.String kMusicPitchShifterWet
    static void _set_kMusicPitchShifterWet(::CsString* value);
    // private System.Single _sfxVolumeOffset
    // Offset: 0x28
    float sfxVolumeOffset;
    // private System.Single _sfxVolume
    // Offset: 0x2C
    float sfxVolume;
    // private System.Boolean _sfxEnabled
    // Offset: 0x30
    bool sfxEnabled;
    // public System.Single get_sfxLatency()
    // Offset: 0x196F484
    float get_sfxLatency();
    // public System.Void Init()
    // Offset: 0x196F4EC
    void Init();
    // public System.Void set_mainVolume(System.Single value)
    // Offset: 0x196F590
    void set_mainVolume(float value);
    // public System.Void set_sfxVolume(System.Single value)
    // Offset: 0x196F5FC
    void set_sfxVolume(float value);
    // public System.Boolean get_sfxEnabled()
    // Offset: 0x196F688
    bool get_sfxEnabled();
    // public System.Void set_sfxEnabled(System.Boolean value)
    // Offset: 0x196F690
    void set_sfxEnabled(bool value);
    // public System.Void set_musicPitch(System.Single value)
    // Offset: 0x196F6B0
    void set_musicPitch(float value);
    // public System.Void .ctor()
    // Offset: 0x196F780
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioManagerSO* New_ctor();
  }; // AudioManagerSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioManagerSO*, "", "AudioManagerSO");
#pragma pack(pop)
