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
  // Autogenerated type: System.IO.UnexceptionalStreamWriter
  class UnexceptionalStreamWriter : public System::IO::StreamWriter {
    public:
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0xF6B6D8
    static UnexceptionalStreamWriter* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding);
    // public override System.Void Flush()
    // Offset: 0xF6B75C
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Flush()
    void Flush();
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xF6B828
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void Write(System.Char value)
    // Offset: 0xF6B914
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] value)
    // Offset: 0xF6B9E4
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] value)
    void Write(::Array<::Il2CppChar>* value);
    // public override System.Void Write(System.String value)
    // Offset: 0xF6BAB4
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.String value)
    void Write(::Il2CppString* value);
  }; // System.IO.UnexceptionalStreamWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnexceptionalStreamWriter*, "System.IO", "UnexceptionalStreamWriter");
#pragma pack(pop)
