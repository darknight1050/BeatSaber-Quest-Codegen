// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UnicodeEncoding
#include "System/Text/UnicodeEncoding.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
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
  // Size: 0x36
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UnicodeEncoding/Decoder
  // [] Offset: FFFFFFFF
  class UnicodeEncoding::Decoder : public System::Text::DecoderNLS {
    public:
    // System.Int32 lastByte
    // Size: 0x4
    // Offset: 0x30
    int lastByte;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Char lastChar
    // Size: 0x2
    // Offset: 0x34
    ::Il2CppChar lastChar;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Creating value type constructor for type: Decoder
    Decoder(int lastByte_ = {}, ::Il2CppChar lastChar_ = {}) noexcept : lastByte{lastByte_}, lastChar{lastChar_} {}
    // public System.Void .ctor(System.Text.UnicodeEncoding encoding)
    // Offset: 0x16F47C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding::Decoder* New_ctor(System::Text::UnicodeEncoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding::Decoder*, creationType>(encoding)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16F511C
    void System_Runtime_Serialization_ISerializable_GetObjectData_NEW(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16F4D64
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding::Decoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UnicodeEncoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding::Decoder*, creationType>(info, context)));
    }
    // public override System.Void Reset()
    // Offset: 0x16F5274
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::Reset()
    void Reset();
    // override System.Boolean get_HasState()
    // Offset: 0x16F529C
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Boolean DecoderNLS::get_HasState_NEW()
    bool get_HasState();
  }; // System.Text.UnicodeEncoding/Decoder
  #pragma pack(pop)
  static check_size<sizeof(UnicodeEncoding::Decoder), 52 + sizeof(::Il2CppChar)> __System_Text_UnicodeEncoding_DecoderSizeCheck;
  static_assert(sizeof(UnicodeEncoding::Decoder) == 0x36);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UnicodeEncoding::Decoder*, "System.Text", "UnicodeEncoding/Decoder");
