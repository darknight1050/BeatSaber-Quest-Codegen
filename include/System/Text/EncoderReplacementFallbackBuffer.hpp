// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.EncoderFallbackBuffer
#include "System/Text/EncoderFallbackBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderReplacementFallback
  class EncoderReplacementFallback;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncoderReplacementFallbackBuffer
  // [] Offset: FFFFFFFF
  class EncoderReplacementFallbackBuffer : public System::Text::EncoderFallbackBuffer {
    public:
    // private System.String strDefault
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* strDefault;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 fallbackCount
    // Size: 0x4
    // Offset: 0x38
    int fallbackCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 fallbackIndex
    // Size: 0x4
    // Offset: 0x3C
    int fallbackIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EncoderReplacementFallbackBuffer
    EncoderReplacementFallbackBuffer(::Il2CppString* strDefault_ = {}, int fallbackCount_ = {}, int fallbackIndex_ = {}) noexcept : strDefault{strDefault_}, fallbackCount{fallbackCount_}, fallbackIndex{fallbackIndex_} {}
    // public System.Void .ctor(System.Text.EncoderReplacementFallback fallback)
    // Offset: 0x1AFEA8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderReplacementFallbackBuffer* New_ctor(System::Text::EncoderReplacementFallback* fallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::EncoderReplacementFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderReplacementFallbackBuffer*, creationType>(fallback)));
    }
    // public override System.Boolean Fallback(System.Char charUnknown, System.Int32 index)
    // Offset: 0x1AFEBA8
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback_NEW(System.Char charUnknown, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknown, int index);
    // public override System.Boolean Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0x1AFED18
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback_NEW(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x1AFEFF8
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Char EncoderFallbackBuffer::GetNextChar_NEW()
    ::Il2CppChar GetNextChar();
    // public override System.Boolean MovePrevious()
    // Offset: 0x1AFF044
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::MovePrevious_NEW()
    bool MovePrevious();
    // public override System.Int32 get_Remaining()
    // Offset: 0x1AFF074
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Int32 EncoderFallbackBuffer::get_Remaining_NEW()
    int get_Remaining();
    // public override System.Void Reset()
    // Offset: 0x1AFF080
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Void EncoderFallbackBuffer::Reset_NEW()
    void Reset();
  }; // System.Text.EncoderReplacementFallbackBuffer
  #pragma pack(pop)
  static check_size<sizeof(EncoderReplacementFallbackBuffer), 60 + sizeof(int)> __System_Text_EncoderReplacementFallbackBufferSizeCheck;
  static_assert(sizeof(EncoderReplacementFallbackBuffer) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderReplacementFallbackBuffer*, "System.Text", "EncoderReplacementFallbackBuffer");
