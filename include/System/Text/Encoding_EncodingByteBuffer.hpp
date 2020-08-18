// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.Encoding/EncodingByteBuffer
  class Encoding::EncodingByteBuffer : public ::Il2CppObject {
    public:
    // private System.Byte* bytes
    // Offset: 0x10
    uint8_t* bytes;
    // private System.Byte* byteStart
    // Offset: 0x18
    uint8_t* byteStart;
    // private System.Byte* byteEnd
    // Offset: 0x20
    uint8_t* byteEnd;
    // private System.Char* chars
    // Offset: 0x28
    ::Il2CppChar* chars;
    // private System.Char* charStart
    // Offset: 0x30
    ::Il2CppChar* charStart;
    // private System.Char* charEnd
    // Offset: 0x38
    ::Il2CppChar* charEnd;
    // private System.Int32 byteCountResult
    // Offset: 0x40
    int byteCountResult;
    // private System.Text.Encoding enc
    // Offset: 0x48
    System::Text::Encoding* enc;
    // private System.Text.EncoderNLS encoder
    // Offset: 0x50
    System::Text::EncoderNLS* encoder;
    // System.Text.EncoderFallbackBuffer fallbackBuffer
    // Offset: 0x58
    System::Text::EncoderFallbackBuffer* fallbackBuffer;
    // System.Void .ctor(System.Text.Encoding inEncoding, System.Text.EncoderNLS inEncoder, System.Byte* inByteStart, System.Int32 inByteCount, System.Char* inCharStart, System.Int32 inCharCount)
    // Offset: 0x1253174
    static Encoding::EncodingByteBuffer* New_ctor(System::Text::Encoding* inEncoding, System::Text::EncoderNLS* inEncoder, uint8_t* inByteStart, int inByteCount, ::Il2CppChar* inCharStart, int inCharCount);
    // System.Boolean AddByte(System.Byte b, System.Int32 moreBytesExpected)
    // Offset: 0x12533F8
    bool AddByte(uint8_t b, int moreBytesExpected);
    // System.Boolean AddByte(System.Byte b1)
    // Offset: 0x12534D0
    bool AddByte(uint8_t b1);
    // System.Boolean AddByte(System.Byte b1, System.Byte b2)
    // Offset: 0x12534D8
    bool AddByte(uint8_t b1, uint8_t b2);
    // System.Boolean AddByte(System.Byte b1, System.Byte b2, System.Int32 moreBytesExpected)
    // Offset: 0x12534E0
    bool AddByte(uint8_t b1, uint8_t b2, int moreBytesExpected);
    // System.Void MovePrevious(System.Boolean bThrow)
    // Offset: 0x125344C
    void MovePrevious(bool bThrow);
    // System.Boolean get_MoreData()
    // Offset: 0x1253538
    bool get_MoreData();
    // System.Char GetNextChar()
    // Offset: 0x125358C
    ::Il2CppChar GetNextChar();
    // System.Int32 get_CharsUsed()
    // Offset: 0x12535FC
    int get_CharsUsed();
    // System.Int32 get_Count()
    // Offset: 0x1253614
    int get_Count();
  }; // System.Text.Encoding/EncodingByteBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding::EncodingByteBuffer*, "System.Text", "Encoding/EncodingByteBuffer");
#pragma pack(pop)
