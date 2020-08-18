// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  class Decoder : public ::Il2CppObject {
    public:
    // System.Text.DecoderFallback m_fallback
    // Offset: 0x10
    System::Text::DecoderFallback* m_fallback;
    // System.Text.DecoderFallbackBuffer m_fallbackBuffer
    // Offset: 0x18
    System::Text::DecoderFallbackBuffer* m_fallbackBuffer;
    // System.Void SerializeDecoder(System.Runtime.Serialization.SerializationInfo info)
    // Offset: 0x124A1FC
    void SerializeDecoder(System::Runtime::Serialization::SerializationInfo* info);
    // public System.Text.DecoderFallback get_Fallback()
    // Offset: 0x124A270
    System::Text::DecoderFallback* get_Fallback();
    // public System.Text.DecoderFallbackBuffer get_FallbackBuffer()
    // Offset: 0x1249AB8
    System::Text::DecoderFallbackBuffer* get_FallbackBuffer();
    // System.Boolean get_InternalHasFallbackBuffer()
    // Offset: 0x124A278
    bool get_InternalHasFallbackBuffer();
    // public System.Void Reset()
    // Offset: 0x124A288
    void Reset();
    // public System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x124A35C
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count, bool flush);
    // public System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    // Offset: 0x124A368
    int GetCharCount(uint8_t* bytes, int count, bool flush);
    // public System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0xFFFFFFFF
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    // Offset: 0x124A4D8
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex, bool flush);
    // public System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    // Offset: 0x124A4E4
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, bool flush);
    // protected System.Void .ctor()
    // Offset: 0x124A268
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Decoder* New_ctor();
  }; // System.Text.Decoder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::Decoder*, "System.Text", "Decoder");
#pragma pack(pop)
