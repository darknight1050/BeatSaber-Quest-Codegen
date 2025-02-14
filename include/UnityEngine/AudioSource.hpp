// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AudioBehaviour
#include "UnityEngine/AudioBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: FFTWindow
  struct FFTWindow;
}
// Forward declaring namespace: UnityEngine::Audio
namespace UnityEngine::Audio {
  // Forward declaring type: AudioMixerGroup
  class AudioMixerGroup;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioSource
  // [RequireComponent] Offset: DBC2A0
  // [StaticAccessorAttribute] Offset: DBC2A0
  class AudioSource : public UnityEngine::AudioBehaviour {
    public:
    // Creating value type constructor for type: AudioSource
    AudioSource() noexcept {}
    // static private System.Single GetPitch(UnityEngine.AudioSource source)
    // Offset: 0x23B8F00
    static float GetPitch(UnityEngine::AudioSource* source);
    // static private System.Void SetPitch(UnityEngine.AudioSource source, System.Single pitch)
    // Offset: 0x23B8F40
    static void SetPitch(UnityEngine::AudioSource* source, float pitch);
    // static private System.Void PlayHelper(UnityEngine.AudioSource source, System.UInt64 delay)
    // Offset: 0x23B8F90
    static void PlayHelper(UnityEngine::AudioSource* source, uint64_t delay);
    // private System.Void Play(System.Double delay)
    // Offset: 0x23B8FE0
    void Play(double delay);
    // static private System.Void PlayOneShotHelper(UnityEngine.AudioSource source, UnityEngine.AudioClip clip, System.Single volumeScale)
    // Offset: 0x23B9030
    static void PlayOneShotHelper(UnityEngine::AudioSource* source, UnityEngine::AudioClip* clip, float volumeScale);
    // private System.Void Stop(System.Boolean stopOneShots)
    // Offset: 0x23B9090
    void Stop(bool stopOneShots);
    // static private System.Void GetSpectrumDataHelper(UnityEngine.AudioSource source, out System.Single[] samples, System.Int32 channel, UnityEngine.FFTWindow window)
    // Offset: 0x23B90E0
    static void GetSpectrumDataHelper(UnityEngine::AudioSource* source, ::Array<float>*& samples, int channel, UnityEngine::FFTWindow window);
    // public System.Single get_volume()
    // Offset: 0x23B9148
    float get_volume();
    // public System.Void set_volume(System.Single value)
    // Offset: 0x23B9188
    void set_volume(float value);
    // public System.Single get_pitch()
    // Offset: 0x23B91D8
    float get_pitch();
    // public System.Void set_pitch(System.Single value)
    // Offset: 0x23B9218
    void set_pitch(float value);
    // public System.Single get_time()
    // Offset: 0x23B9268
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x23B92A8
    void set_time(float value);
    // public System.Int32 get_timeSamples()
    // Offset: 0x23B92F8
    int get_timeSamples();
    // public UnityEngine.AudioClip get_clip()
    // Offset: 0x23B9338
    UnityEngine::AudioClip* get_clip();
    // public System.Void set_clip(UnityEngine.AudioClip value)
    // Offset: 0x23B9378
    void set_clip(UnityEngine::AudioClip* value);
    // public System.Void set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup value)
    // Offset: 0x23B93C8
    void set_outputAudioMixerGroup(UnityEngine::Audio::AudioMixerGroup* value);
    // public System.Void Play()
    // Offset: 0x23B9418
    void Play();
    // public System.Void PlayScheduled(System.Double time)
    // Offset: 0x23B945C
    void PlayScheduled(double time);
    // public System.Void PlayOneShot(UnityEngine.AudioClip clip)
    // Offset: 0x23B94B8
    void PlayOneShot(UnityEngine::AudioClip* clip);
    // public System.Void PlayOneShot(UnityEngine.AudioClip clip, System.Single volumeScale)
    // Offset: 0x23B94C0
    void PlayOneShot(UnityEngine::AudioClip* clip, float volumeScale);
    // public System.Void Stop()
    // Offset: 0x23B95BC
    void Stop();
    // public System.Void Pause()
    // Offset: 0x23B9600
    void Pause();
    // public System.Void UnPause()
    // Offset: 0x23B9640
    void UnPause();
    // public System.Boolean get_isPlaying()
    // Offset: 0x23B9680
    bool get_isPlaying();
    // public System.Void set_loop(System.Boolean value)
    // Offset: 0x23B96C0
    void set_loop(bool value);
    // public System.Boolean get_playOnAwake()
    // Offset: 0x23B9710
    bool get_playOnAwake();
    // public System.Void set_playOnAwake(System.Boolean value)
    // Offset: 0x23B9750
    void set_playOnAwake(bool value);
    // public System.Void set_ignoreListenerPause(System.Boolean value)
    // Offset: 0x23B97A0
    void set_ignoreListenerPause(bool value);
    // public System.Void set_spatialBlend(System.Single value)
    // Offset: 0x23B97F0
    void set_spatialBlend(float value);
    // public System.Void set_reverbZoneMix(System.Single value)
    // Offset: 0x23B9840
    void set_reverbZoneMix(float value);
    // public System.Void set_bypassEffects(System.Boolean value)
    // Offset: 0x23B9890
    void set_bypassEffects(bool value);
    // public System.Void set_bypassReverbZones(System.Boolean value)
    // Offset: 0x23B98E0
    void set_bypassReverbZones(bool value);
    // public System.Void set_dopplerLevel(System.Single value)
    // Offset: 0x23B9930
    void set_dopplerLevel(float value);
    // public System.Void set_spread(System.Single value)
    // Offset: 0x23B9980
    void set_spread(float value);
    // public System.Void set_priority(System.Int32 value)
    // Offset: 0x23B99D0
    void set_priority(int value);
    // public System.Void set_minDistance(System.Single value)
    // Offset: 0x23B9A20
    void set_minDistance(float value);
    // public System.Void GetSpectrumData(System.Single[] samples, System.Int32 channel, UnityEngine.FFTWindow window)
    // Offset: 0x23B9A70
    void GetSpectrumData(::Array<float>* samples, int channel, UnityEngine::FFTWindow window);
  }; // UnityEngine.AudioSource
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSource*, "UnityEngine", "AudioSource");
