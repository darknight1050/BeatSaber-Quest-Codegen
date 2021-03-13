// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallback
  class EncoderFallback;
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Encoder
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C93D28
  class Encoder : public ::Il2CppObject {
    public:
    // System.Text.EncoderFallback m_fallback
    // Size: 0x8
    // Offset: 0x10
    System::Text::EncoderFallback* m_fallback;
    // Field size check
    static_assert(sizeof(System::Text::EncoderFallback*) == 0x8);
    // System.Text.EncoderFallbackBuffer m_fallbackBuffer
    // Size: 0x8
    // Offset: 0x18
    System::Text::EncoderFallbackBuffer* m_fallbackBuffer;
    // Field size check
    static_assert(sizeof(System::Text::EncoderFallbackBuffer*) == 0x8);
    // Creating value type constructor for type: Encoder
    Encoder(System::Text::EncoderFallback* m_fallback_ = {}, System::Text::EncoderFallbackBuffer* m_fallbackBuffer_ = {}) noexcept : m_fallback{m_fallback_}, m_fallbackBuffer{m_fallbackBuffer_} {}
    // System.Void SerializeEncoder(System.Runtime.Serialization.SerializationInfo info)
    // Offset: 0x1A12044
    void SerializeEncoder(System::Runtime::Serialization::SerializationInfo* info);
    // public System.Text.EncoderFallback get_Fallback()
    // Offset: 0x1A120B8
    System::Text::EncoderFallback* get_Fallback();
    // public System.Text.EncoderFallbackBuffer get_FallbackBuffer()
    // Offset: 0x1A0F528
    System::Text::EncoderFallbackBuffer* get_FallbackBuffer();
    // System.Boolean get_InternalHasFallbackBuffer()
    // Offset: 0x1A0F518
    bool get_InternalHasFallbackBuffer();
    // public System.Void Reset()
    // Offset: 0x1A120C0
    void Reset();
    // public System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0xFFFFFFFF
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count, bool flush);
    // public System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Boolean flush)
    // Offset: 0x1A12194
    int GetByteCount(::Il2CppChar* chars, int count, bool flush);
    // public System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Boolean flush)
    // Offset: 0xFFFFFFFF
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex, bool flush);
    // public System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush)
    // Offset: 0x1A12314
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush);
    // public System.Void Convert(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    // Offset: 0x1A12540
    void Convert(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex, int byteCount, bool flush, int& charsUsed, int& bytesUsed, bool& completed);
    // public System.Void Convert(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Boolean flush, out System.Int32 charsUsed, out System.Int32 bytesUsed, out System.Boolean completed)
    // Offset: 0x1A12894
    void Convert(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, bool flush, int& charsUsed, int& bytesUsed, bool& completed);
    // protected System.Void .ctor()
    // Offset: 0x1A120B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoder*, creationType>()));
    }
  }; // System.Text.Encoder
  #pragma pack(pop)
  static check_size<sizeof(Encoder), 24 + sizeof(System::Text::EncoderFallbackBuffer*)> __System_Text_EncoderSizeCheck;
  static_assert(sizeof(Encoder) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoder*, "System.Text", "Encoder");
