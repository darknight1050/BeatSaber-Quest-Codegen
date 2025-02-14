// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SavWav
  class SavWav : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SavWav
    SavWav() noexcept {}
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
    // Offset: 0x10E2FDC
    static void Save(::Il2CppString* filepath, UnityEngine::AudioClip* clip, float start, float duration);
    // static public System.Byte[] GetWav(UnityEngine.AudioClip clip, out System.UInt32 length, System.Single start, System.Single duration)
    // Offset: 0x10E3278
    static ::Array<uint8_t>* GetWav(UnityEngine::AudioClip* clip, uint& length, float start, float duration);
    // static private System.Byte[] ConvertAndWrite(UnityEngine.AudioClip clip, out System.UInt32 length, out System.UInt32 samplesAfterTrimming, System.Single start, System.Single duration)
    // Offset: 0x10E32C4
    static ::Array<uint8_t>* ConvertAndWrite(UnityEngine::AudioClip* clip, uint& length, uint& samplesAfterTrimming, float start, float duration);
    // static private System.Void AddDataToBuffer(System.Byte[] buffer, ref System.UInt32 offset, System.Byte[] addBytes)
    // Offset: 0x10E3778
    static void AddDataToBuffer(::Array<uint8_t>* buffer, uint& offset, ::Array<uint8_t>* addBytes);
    // static private System.Void WriteHeader(System.Byte[] stream, UnityEngine.AudioClip clip, System.UInt32 length, System.UInt32 samples)
    // Offset: 0x10E34E8
    static void WriteHeader(::Array<uint8_t>* stream, UnityEngine::AudioClip* clip, uint length, uint samples);
  }; // SavWav
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SavWav*, "", "SavWav");
