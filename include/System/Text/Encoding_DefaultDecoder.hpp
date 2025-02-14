// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Encoding/DefaultDecoder
  class Encoding::DefaultDecoder : public System::Text::Decoder/*, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IObjectReference*/ {
    public:
    // private System.Text.Encoding m_encoding
    // Size: 0x8
    // Offset: 0x20
    System::Text::Encoding* m_encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Boolean m_hasInitializedEncoding
    // Size: 0x1
    // Offset: 0x28
    bool m_hasInitializedEncoding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DefaultDecoder
    DefaultDecoder(System::Text::Encoding* m_encoding_ = {}, bool m_hasInitializedEncoding_ = {}) noexcept : m_encoding{m_encoding_}, m_hasInitializedEncoding{m_hasInitializedEncoding_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::IObjectReference
    operator System::Runtime::Serialization::IObjectReference() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IObjectReference*>(this);
    }
    // public System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x1CDC010
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding::DefaultDecoder* New_ctor(System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoding::DefaultDecoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding::DefaultDecoder*, creationType>(encoding)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CDC9A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding::DefaultDecoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoding::DefaultDecoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding::DefaultDecoder*, creationType>(info, context)));
    }
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CDCBD8
    ::Il2CppObject* GetRealObject(System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CDCC30
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x1CDCCD4
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    // Offset: 0x1CDCCE4
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count, System.Boolean flush)
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count, bool flush);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    // Offset: 0x1CDCD08
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetCharCount(System.Byte* bytes, System.Int32 count, System.Boolean flush)
    int GetCharCount(uint8_t* bytes, int count, bool flush);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x1CDCD2C
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    // Offset: 0x1CDCD3C
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex, System.Boolean flush)
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex, bool flush);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    // Offset: 0x1CDCD60
    // Implemented from: System.Text.Decoder
    // Base method: System.Int32 Decoder::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Boolean flush)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, bool flush);
  }; // System.Text.Encoding/DefaultDecoder
  #pragma pack(pop)
  static check_size<sizeof(Encoding::DefaultDecoder), 40 + sizeof(bool)> __System_Text_Encoding_DefaultDecoderSizeCheck;
  static_assert(sizeof(Encoding::DefaultDecoder) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding::DefaultDecoder*, "System.Text", "Encoding/DefaultDecoder");
