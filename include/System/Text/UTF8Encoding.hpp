// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoder
  class Encoder;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x3A
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF8Encoding
  // [ComVisibleAttribute] Offset: D7B5EC
  class UTF8Encoding : public System::Text::Encoding {
    public:
    // Nested type: System::Text::UTF8Encoding::UTF8Encoder
    class UTF8Encoder;
    // Nested type: System::Text::UTF8Encoding::UTF8Decoder
    class UTF8Decoder;
    // private System.Boolean emitUTF8Identifier
    // Size: 0x1
    // Offset: 0x38
    bool emitUTF8Identifier;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isThrowException
    // Size: 0x1
    // Offset: 0x39
    bool isThrowException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UTF8Encoding
    UTF8Encoding(bool emitUTF8Identifier_ = {}, bool isThrowException_ = {}) noexcept : emitUTF8Identifier{emitUTF8Identifier_}, isThrowException{isThrowException_} {}
    // public System.Void .ctor(System.Boolean encoderShouldEmitUTF8Identifier)
    // Offset: 0x1CDC41C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding* New_ctor(bool encoderShouldEmitUTF8Identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF8Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding*, creationType>(encoderShouldEmitUTF8Identifier)));
    }
    // public System.Void .ctor(System.Boolean encoderShouldEmitUTF8Identifier, System.Boolean throwOnInvalidBytes)
    // Offset: 0x1CDDB30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding* New_ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF8Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding*, creationType>(encoderShouldEmitUTF8Identifier, throwOnInvalidBytes)));
    }
    // static private System.Int32 PtrDiff(System.Char* a, System.Char* b)
    // Offset: 0x1CECBE8
    static int PtrDiff(::Il2CppChar* a, ::Il2CppChar* b);
    // static private System.Int32 PtrDiff(System.Byte* a, System.Byte* b)
    // Offset: 0x1CECBF4
    static int PtrDiff(uint8_t* a, uint8_t* b);
    // static private System.Boolean InRange(System.Int32 ch, System.Int32 start, System.Int32 end)
    // Offset: 0x1CECBD4
    static bool InRange(int ch, int start, int end);
    // private System.Boolean FallbackInvalidByteSequence(ref System.Byte* pSrc, System.Int32 ch, System.Text.DecoderFallbackBuffer fallback, ref System.Char* pTarget)
    // Offset: 0x1CEE118
    bool FallbackInvalidByteSequence(uint8_t*& pSrc, int ch, System::Text::DecoderFallbackBuffer* fallback, ::Il2CppChar*& pTarget);
    // private System.Int32 FallbackInvalidByteSequence(System.Byte* pSrc, System.Int32 ch, System.Text.DecoderFallbackBuffer fallback)
    // Offset: 0x1CED8A8
    int FallbackInvalidByteSequence(uint8_t* pSrc, int ch, System::Text::DecoderFallbackBuffer* fallback);
    // private System.Byte[] GetBytesUnknown(ref System.Byte* pSrc, System.Int32 ch)
    // Offset: 0x1CEE190
    ::Array<uint8_t>* GetBytesUnknown(uint8_t*& pSrc, int ch);
    // public System.Void .ctor()
    // Offset: 0x1CEB234
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF8Encoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF8Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF8Encoding*, creationType>()));
    }
    // override System.Void SetDefaultFallbacks()
    // Offset: 0x1CEB25C
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::SetDefaultFallbacks()
    void SetDefaultFallbacks();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x1CEB314
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count);
    // public override System.Int32 GetByteCount(System.String chars)
    // Offset: 0x1CEB4E8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.String chars)
    int GetByteCount(::Il2CppString* chars);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x1CEB598
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count)
    int GetByteCount(::Il2CppChar* chars, int count);
    // public override System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x1CEB6B4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::Il2CppString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x1CEB924
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x1CEBBC4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x1CEBD28
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x1CEBEFC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count)
    int GetCharCount(uint8_t* bytes, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x1CEC018
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x1CEC2B8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // public override System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x1CEC41C
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    ::Il2CppString* GetString(::Array<uint8_t>* bytes, int index, int count);
    // override System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS baseEncoder)
    // Offset: 0x1CEC5F4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS baseEncoder)
    int GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* baseEncoder);
    // override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS baseEncoder)
    // Offset: 0x1CECBFC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS baseEncoder)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* baseEncoder);
    // override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x1CED3B4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS baseDecoder)
    int GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* baseDecoder);
    // override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    // Offset: 0x1CED8EC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS baseDecoder)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* baseDecoder);
    // public override System.Text.Decoder GetDecoder()
    // Offset: 0x1CEE3CC
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Decoder Encoding::GetDecoder()
    System::Text::Decoder* GetDecoder();
    // public override System.Text.Encoder GetEncoder()
    // Offset: 0x1CEE430
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Encoder Encoding::GetEncoder()
    System::Text::Encoder* GetEncoder();
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x1CEE494
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x1CEE5A0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
    // public override System.Byte[] GetPreamble()
    // Offset: 0x1CEE6AC
    // Implemented from: System.Text.Encoding
    // Base method: System.Byte[] Encoding::GetPreamble()
    ::Array<uint8_t>* GetPreamble();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1CEE754
    // Implemented from: System.Text.Encoding
    // Base method: System.Boolean Encoding::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1CEE848
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetHashCode()
    int GetHashCode();
  }; // System.Text.UTF8Encoding
  #pragma pack(pop)
  static check_size<sizeof(UTF8Encoding), 57 + sizeof(bool)> __System_Text_UTF8EncodingSizeCheck;
  static_assert(sizeof(UTF8Encoding) == 0x3A);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF8Encoding*, "System.Text", "UTF8Encoding");
