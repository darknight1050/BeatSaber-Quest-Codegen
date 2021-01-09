// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.StreamWriter
#include "System/IO/StreamWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x68
  // Autogenerated type: System.IO.UnexceptionalStreamWriter
  // [] Offset: FFFFFFFF
  class UnexceptionalStreamWriter : public System::IO::StreamWriter {
    public:
    // Creating value type constructor for type: UnexceptionalStreamWriter
    UnexceptionalStreamWriter() noexcept {}
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0x13AECB0
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::.ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnexceptionalStreamWriter* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::UnexceptionalStreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnexceptionalStreamWriter*, creationType>(stream, encoding)));
    }
    // public override System.Void Flush()
    // Offset: 0x13AED34
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Flush()
    void Flush();
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x13AEE00
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void Write(System.Char value)
    // Offset: 0x13AEEEC
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] value)
    // Offset: 0x13AEFBC
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] value)
    void Write(::Array<::Il2CppChar>* value);
    // public override System.Void Write(System.String value)
    // Offset: 0x13AF08C
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.String value)
    void Write(::Il2CppString* value);
  }; // System.IO.UnexceptionalStreamWriter
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnexceptionalStreamWriter*, "System.IO", "UnexceptionalStreamWriter");
#pragma pack(pop)
