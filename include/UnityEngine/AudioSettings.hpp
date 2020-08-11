// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioConfiguration
  struct AudioConfiguration;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioSettings
  class AudioSettings : public ::CsObject {
    public:
    // Nested type: UnityEngine::AudioSettings::AudioConfigurationChangeHandler
    class AudioConfigurationChangeHandler;
    // Nested type: UnityEngine::AudioSettings::Mobile
    class Mobile;
    // Get static field: static private UnityEngine.AudioSettings/AudioConfigurationChangeHandler OnAudioConfigurationChanged
    static UnityEngine::AudioSettings::AudioConfigurationChangeHandler* _get_OnAudioConfigurationChanged();
    // Set static field: static private UnityEngine.AudioSettings/AudioConfigurationChangeHandler OnAudioConfigurationChanged
    static void _set_OnAudioConfigurationChanged(UnityEngine::AudioSettings::AudioConfigurationChangeHandler* value);
    // static private System.Int32 GetSampleRate()
    // Offset: 0x1943624
    static int GetSampleRate();
    // static public System.Double get_dspTime()
    // Offset: 0x1943658
    static double get_dspTime();
    // static public System.Int32 get_outputSampleRate()
    // Offset: 0x194368C
    static int get_outputSampleRate();
    // static public System.String GetSpatializerPluginName()
    // Offset: 0x19436C0
    static ::CsString* GetSpatializerPluginName();
    // static public UnityEngine.AudioConfiguration GetConfiguration()
    // Offset: 0x19436F4
    static UnityEngine::AudioConfiguration GetConfiguration();
    // static System.Void InvokeOnAudioConfigurationChanged(System.Boolean deviceWasChanged)
    // Offset: 0x1943798
    static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged);
    // static System.Boolean StartAudioOutput()
    // Offset: 0x1943A7C
    static bool StartAudioOutput();
    // static System.Boolean StopAudioOutput()
    // Offset: 0x1943AB0
    static bool StopAudioOutput();
    // static private System.Void GetConfiguration_Injected(UnityEngine.AudioConfiguration ret)
    // Offset: 0x1943758
    static void GetConfiguration_Injected(UnityEngine::AudioConfiguration& ret);
  }; // UnityEngine.AudioSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSettings*, "UnityEngine", "AudioSettings");
#pragma pack(pop)
