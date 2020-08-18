// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SavWav
  class SavWav : public ::Il2CppObject {
    public:
    // static field const value: static private System.UInt32 HeaderSize
    static constexpr const uint HeaderSize = 44u;
    // Get static field: static private System.UInt32 HeaderSize
    static uint _get_HeaderSize();
    // Set static field: static private System.UInt32 HeaderSize
    static void _set_HeaderSize(uint value);
    // static field const value: static private System.Single RescaleFactor
    static constexpr const float RescaleFactor = 32767;
    // Get static field: static private System.Single RescaleFactor
    static float _get_RescaleFactor();
    // Set static field: static private System.Single RescaleFactor
    static void _set_RescaleFactor(float value);
    // static public System.Void Save(System.String filepath, UnityEngine.AudioClip clip, System.Single start, System.Single duration)
    // Offset: 0xB9E85C
    static void Save(::Il2CppString* filepath, UnityEngine::AudioClip* clip, float start, float duration);
    // static public System.Byte[] GetWav(UnityEngine.AudioClip clip, System.UInt32 length, System.Single start, System.Single duration)
    // Offset: 0xB9EB1C
    static ::Array<uint8_t>* GetWav(UnityEngine::AudioClip* clip, uint& length, float start, float duration);
    // static private System.Byte[] ConvertAndWrite(UnityEngine.AudioClip clip, System.UInt32 length, System.UInt32 samplesAfterTrimming, System.Single start, System.Single duration)
    // Offset: 0xB9EB68
    static ::Array<uint8_t>* ConvertAndWrite(UnityEngine::AudioClip* clip, uint& length, uint& samplesAfterTrimming, float start, float duration);
    // static private System.Void AddDataToBuffer(System.Byte[] buffer, System.UInt32 offset, System.Byte[] addBytes)
    // Offset: 0xB9F01C
    static void AddDataToBuffer(::Array<uint8_t>* buffer, uint& offset, ::Array<uint8_t>* addBytes);
    // static private System.Void WriteHeader(System.Byte[] stream, UnityEngine.AudioClip clip, System.UInt32 length, System.UInt32 samples)
    // Offset: 0xB9ED8C
    static void WriteHeader(::Array<uint8_t>* stream, UnityEngine::AudioClip* clip, uint length, uint samples);
  }; // SavWav
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SavWav*, "", "SavWav");
#pragma pack(pop)
