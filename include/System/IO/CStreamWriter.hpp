// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.StreamWriter
#include "System/IO/StreamWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TermInfoDriver
  class TermInfoDriver;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.CStreamWriter
  class CStreamWriter : public System::IO::StreamWriter {
    public:
    // private System.TermInfoDriver driver
    // Offset: 0x68
    System::TermInfoDriver* driver;
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Boolean leaveOpen)
    // Offset: 0x108D2EC
    static CStreamWriter* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding, bool leaveOpen);
    // public System.Void InternalWriteString(System.String val)
    // Offset: 0x108DA20
    void InternalWriteString(::Il2CppString* val);
    // public System.Void InternalWriteChar(System.Char val)
    // Offset: 0x108D94C
    void InternalWriteChar(::Il2CppChar val);
    // public System.Void InternalWriteChars(System.Char[] buffer, System.Int32 n)
    // Offset: 0x108DAF4
    void InternalWriteChars(::Array<::Il2CppChar>* buffer, int n);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x108D3FC
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void Write(System.Char val)
    // Offset: 0x108D778
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char val)
    void Write(::Il2CppChar val);
    // public override System.Void Write(System.Char[] val)
    // Offset: 0x108DBD4
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] val)
    void Write(::Array<::Il2CppChar>* val);
    // public override System.Void Write(System.String val)
    // Offset: 0x108DBFC
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.String val)
    void Write(::Il2CppString* val);
  }; // System.IO.CStreamWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::CStreamWriter*, "System.IO", "CStreamWriter");
#pragma pack(pop)
