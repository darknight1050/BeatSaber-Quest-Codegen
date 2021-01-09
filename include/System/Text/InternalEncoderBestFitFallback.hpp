// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.EncoderFallback
#include "System/Text/EncoderFallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x28
  // Autogenerated type: System.Text.InternalEncoderBestFitFallback
  // [] Offset: FFFFFFFF
  class InternalEncoderBestFitFallback : public System::Text::EncoderFallback {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x18
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // System.Char[] arrayBestFit
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppChar>* arrayBestFit;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // Creating value type constructor for type: InternalEncoderBestFitFallback
    InternalEncoderBestFitFallback(System::Text::Encoding* encoding_ = {}, ::Array<::Il2CppChar>* arrayBestFit_ = {}) noexcept : encoding{encoding_}, arrayBestFit{arrayBestFit_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x159E8B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalEncoderBestFitFallback* New_ctor(System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::InternalEncoderBestFitFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalEncoderBestFitFallback*, creationType>(encoding)));
    }
    // public override System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x15A4E20
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Text.EncoderFallbackBuffer EncoderFallback::CreateFallbackBuffer()
    System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x15A4FA4
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Int32 EncoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x15A4FAC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15A5080
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.InternalEncoderBestFitFallback
  static check_size<sizeof(InternalEncoderBestFitFallback), 32 + sizeof(::Array<::Il2CppChar>*)> __System_Text_InternalEncoderBestFitFallbackSizeCheck;
  static_assert(sizeof(InternalEncoderBestFitFallback) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::InternalEncoderBestFitFallback*, "System.Text", "InternalEncoderBestFitFallback");
#pragma pack(pop)
