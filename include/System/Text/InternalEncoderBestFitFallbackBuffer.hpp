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
  // Forward declaring type: InternalEncoderBestFitFallback
  class InternalEncoderBestFitFallback;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.InternalEncoderBestFitFallbackBuffer
  class InternalEncoderBestFitFallbackBuffer : public System::Text::EncoderFallbackBuffer {
    public:
    // private System.Char cBestFit
    // Size: 0x2
    // Offset: 0x30
    ::Il2CppChar cBestFit;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: cBestFit and: oFallback
    char __padding0[0x6] = {};
    // private System.Text.InternalEncoderBestFitFallback oFallback
    // Size: 0x8
    // Offset: 0x38
    System::Text::InternalEncoderBestFitFallback* oFallback;
    // Field size check
    static_assert(sizeof(System::Text::InternalEncoderBestFitFallback*) == 0x8);
    // private System.Int32 iCount
    // Size: 0x4
    // Offset: 0x40
    int iCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 iSize
    // Size: 0x4
    // Offset: 0x44
    int iSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InternalEncoderBestFitFallbackBuffer
    InternalEncoderBestFitFallbackBuffer(::Il2CppChar cBestFit_ = {}, System::Text::InternalEncoderBestFitFallback* oFallback_ = {}, int iCount_ = {}, int iSize_ = {}) noexcept : cBestFit{cBestFit_}, oFallback{oFallback_}, iCount{iCount_}, iSize{iSize_} {}
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x1CDF828
    static ::Il2CppObject* get_InternalSyncObject();
    // public System.Void .ctor(System.Text.InternalEncoderBestFitFallback fallback)
    // Offset: 0x1CDF634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalEncoderBestFitFallbackBuffer* New_ctor(System::Text::InternalEncoderBestFitFallback* fallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::InternalEncoderBestFitFallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalEncoderBestFitFallbackBuffer*, creationType>(fallback)));
    }
    // private System.Char TryBestFit(System.Char cUnknown)
    // Offset: 0x1CDF8F4
    ::Il2CppChar TryBestFit(::Il2CppChar cUnknown);
    // public override System.Boolean Fallback(System.Char charUnknown, System.Int32 index)
    // Offset: 0x1CDF8B8
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknown, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknown, int index);
    // public override System.Boolean Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0x1CDF9D4
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::Fallback(System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    bool Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x1CDFC64
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Char EncoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public override System.Boolean MovePrevious()
    // Offset: 0x1CDFCA4
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Boolean EncoderFallbackBuffer::MovePrevious()
    bool MovePrevious();
    // public override System.Int32 get_Remaining()
    // Offset: 0x1CDFCD0
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Int32 EncoderFallbackBuffer::get_Remaining()
    int get_Remaining();
    // public override System.Void Reset()
    // Offset: 0x1CDFCDC
    // Implemented from: System.Text.EncoderFallbackBuffer
    // Base method: System.Void EncoderFallbackBuffer::Reset()
    void Reset();
  }; // System.Text.InternalEncoderBestFitFallbackBuffer
  #pragma pack(pop)
  static check_size<sizeof(InternalEncoderBestFitFallbackBuffer), 68 + sizeof(int)> __System_Text_InternalEncoderBestFitFallbackBufferSizeCheck;
  static_assert(sizeof(InternalEncoderBestFitFallbackBuffer) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::InternalEncoderBestFitFallbackBuffer*, "System.Text", "InternalEncoderBestFitFallbackBuffer");
