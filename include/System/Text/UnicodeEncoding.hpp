// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: Encoder
  class Encoder;
  // Forward declaring type: Decoder
  class Decoder;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x3B
  // Autogenerated type: System.Text.UnicodeEncoding
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D37FC8
  class UnicodeEncoding : public System::Text::Encoding {
    public:
    // Nested type: System::Text::UnicodeEncoding::Decoder
    class Decoder;
    // [OptionalFieldAttribute] Offset: 0xD3E094
    // System.Boolean isThrowException
    // Size: 0x1
    // Offset: 0x38
    bool isThrowException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean bigEndian
    // Size: 0x1
    // Offset: 0x39
    bool bigEndian;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean byteOrderMark
    // Size: 0x1
    // Offset: 0x3A
    bool byteOrderMark;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UnicodeEncoding
    UnicodeEncoding(bool isThrowException_ = {}, bool bigEndian_ = {}, bool byteOrderMark_ = {}) noexcept : isThrowException{isThrowException_}, bigEndian{bigEndian_}, byteOrderMark{byteOrderMark_} {}
    // Get static field: static private readonly System.UInt64 highLowPatternMask
    static uint64_t _get_highLowPatternMask();
    // Set static field: static private readonly System.UInt64 highLowPatternMask
    static void _set_highLowPatternMask(uint64_t value);
    // public System.Void .ctor(System.Boolean bigEndian, System.Boolean byteOrderMark)
    // Offset: 0x16AD9A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding*, creationType>(bigEndian, byteOrderMark)));
    }
    // public System.Void .ctor(System.Boolean bigEndian, System.Boolean byteOrderMark, System.Boolean throwOnInvalidBytes)
    // Offset: 0x16AD9B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding*, creationType>(bigEndian, byteOrderMark, throwOnInvalidBytes)));
    }
    // static private System.Void .cctor()
    // Offset: 0x16B1298
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x16AD990
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding*, creationType>()));
    }
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x16ADA3C
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // override System.Void SetDefaultFallbacks()
    // Offset: 0x16ADA44
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::SetDefaultFallbacks()
    void SetDefaultFallbacks();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x16ADB28
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count);
    // public override System.Int32 GetByteCount(System.String s)
    // Offset: 0x16ADCFC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.String s)
    int GetByteCount(::Il2CppString* s);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x16ADDAC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count)
    int GetByteCount(::Il2CppChar* chars, int count);
    // public override System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x16ADEC8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::Il2CppString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x16AE138
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x16AE3D8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x16AE53C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x16AE710
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count)
    int GetCharCount(uint8_t* bytes, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x16AE82C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x16AEACC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // public override System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x16AEC30
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    ::Il2CppString* GetString(::Array<uint8_t>* bytes, int index, int count);
    // override System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS encoder)
    // Offset: 0x16AEE08
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS encoder)
    int GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* encoder);
    // override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    // Offset: 0x16AF404
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* encoder);
    // override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x16AFC04
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    int GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* baseDecoder);
    // override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x16B0364
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* baseDecoder);
    // public override System.Text.Encoder GetEncoder()
    // Offset: 0x16B0CD0
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Encoder Encoding::GetEncoder()
    System::Text::Encoder* GetEncoder();
    // public override System.Text.Decoder GetDecoder()
    // Offset: 0x16B0D34
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Decoder Encoding::GetDecoder()
    System::Text::Decoder* GetDecoder();
    // public override System.Byte[] GetPreamble()
    // Offset: 0x16B0DB0
    // Implemented from: System.Text.Encoding
    // Base method: System.Byte[] Encoding::GetPreamble()
    ::Array<uint8_t>* GetPreamble();
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x16B0E94
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x16B0FA0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x16B10B0
    // Implemented from: System.Text.Encoding
    // Base method: System.Boolean Encoding::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x16B11F8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetHashCode()
    int GetHashCode();
  }; // System.Text.UnicodeEncoding
  static check_size<sizeof(UnicodeEncoding), 58 + sizeof(bool)> __System_Text_UnicodeEncodingSizeCheck;
  static_assert(sizeof(UnicodeEncoding) == 0x3B);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UnicodeEncoding*, "System.Text", "UnicodeEncoding");
#pragma pack(pop)
