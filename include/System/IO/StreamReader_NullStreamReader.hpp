// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.StreamReader
#include "System/IO/StreamReader.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.StreamReader/NullStreamReader
  class StreamReader::NullStreamReader : public System::IO::StreamReader {
    public:
    // System.Void .ctor()
    // Offset: 0xFF5118
    // Implemented from: System.IO.StreamReader
    // Base method: System.Void StreamReader::.ctor()
    // Base method: System.Void TextReader::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static StreamReader::NullStreamReader* New_ctor();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFF51C0
    // Implemented from: System.IO.StreamReader
    // Base method: System.Void StreamReader::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Peek()
    // Offset: 0xFF51C4
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0xFF51CC
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read()
    int Read();
    // public override System.Int32 Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0xFF51D4
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.String ReadLine()
    // Offset: 0xFF51DC
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadLine()
    ::CsString* ReadLine();
    // public override System.String ReadToEnd()
    // Offset: 0xFF51E4
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadToEnd()
    ::CsString* ReadToEnd();
    // override System.Int32 ReadBuffer()
    // Offset: 0xFF5234
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::ReadBuffer()
    int ReadBuffer();
  }; // System.IO.StreamReader/NullStreamReader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamReader::NullStreamReader*, "System.IO", "StreamReader/NullStreamReader");
#pragma pack(pop)
