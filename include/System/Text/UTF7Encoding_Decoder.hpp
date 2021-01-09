// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UTF7Encoding
#include "System/Text/UTF7Encoding.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Size: 0x39
  // Autogenerated type: System.Text.UTF7Encoding/Decoder
  // [] Offset: FFFFFFFF
  class UTF7Encoding::Decoder : public System::Text::DecoderNLS {
    public:
    // System.Int32 bits
    // Size: 0x4
    // Offset: 0x30
    int bits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 bitCount
    // Size: 0x4
    // Offset: 0x34
    int bitCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean firstByte
    // Size: 0x1
    // Offset: 0x38
    bool firstByte;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Decoder
    Decoder(int bits_ = {}, int bitCount_ = {}, bool firstByte_ = {}) noexcept : bits{bits_}, bitCount{bitCount_}, firstByte{firstByte_} {}
    // public System.Void .ctor(System.Text.UTF7Encoding encoding)
    // Offset: 0x16A8F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::Decoder* New_ctor(System::Text::UTF7Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF7Encoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::Decoder*, creationType>(encoding)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16A9100
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::Decoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::UTF7Encoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::Decoder*, creationType>(info, context)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16A9354
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void Reset()
    // Offset: 0x16A944C
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::Reset()
    void Reset();
    // override System.Boolean get_HasState()
    // Offset: 0x16A9474
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Boolean DecoderNLS::get_HasState()
    bool get_HasState();
  }; // System.Text.UTF7Encoding/Decoder
  static check_size<sizeof(UTF7Encoding::Decoder), 56 + sizeof(bool)> __System_Text_UTF7Encoding_DecoderSizeCheck;
  static_assert(sizeof(UTF7Encoding::Decoder) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UTF7Encoding::Decoder*, "System.Text", "UTF7Encoding/Decoder");
#pragma pack(pop)
