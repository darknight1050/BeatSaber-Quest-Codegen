// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallback
  class DecoderFallback;
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.Decoder
  class Decoder : public ::CsObject {
    public:
    // System.Text.DecoderFallback m_fallback
    // Offset: 0x10
    System::Text::DecoderFallback* m_fallback;
    // System.Text.DecoderFallbackBuffer m_fallbackBuffer
    // Offset: 0x18
    System::Text::DecoderFallbackBuffer* m_fallbackBuffer;
    // System.Void SerializeDecoder(System.Runtime.Serialization.SerializationInfo info)
    // Offset: 0x12D54F4
    void SerializeDecoder(System::Runtime::Serialization::SerializationInfo* info);
    // public System.Text.DecoderFallback get_Fallback()
    // Offset: 0x12D5568
    System::Text::DecoderFallback* get_Fallback();
    // public System.Text.DecoderFallbackBuffer get_FallbackBuffer()
    // Offset: 0x12D4DB0
    System::Text::DecoderFallbackBuffer* get_FallbackBuffer();
    // System.Boolean get_InternalHasFallbackBuffer()
    // Offset: 0x12D5570
    bool get_InternalHasFallbackBuffer();
    // public System.Void Reset()
    // Offset: 0x12D5580
    void Reset();
    // public System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x12D5654
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count, bool flush);
    // public System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    // Offset: 0x12D5660
    int GetCharCount(uint8_t* bytes, int count, bool flush);
    // public System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0xFFFFFFFF
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    // Offset: 0x12D57D0
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex, bool flush);
    // public System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    // Offset: 0x12D57DC
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, bool flush);
    // protected System.Void .ctor()
    // Offset: 0x12D5560
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Decoder* New_ctor();
  }; // System.Text.Decoder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::Decoder*, "System.Text", "Decoder");
#pragma pack(pop)
