// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.IO
namespace Org::BouncyCastle::Utilities::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.Streams
  // [] Offset: FFFFFFFF
  class Streams : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Streams
    Streams() noexcept {}
    // static public System.Byte[] ReadAll(System.IO.Stream inStr)
    // Offset: 0x1E2C29C
    static ::Array<uint8_t>* ReadAll(System::IO::Stream* inStr);
    // static public System.Int32 ReadFully(System.IO.Stream inStr, System.Byte[] buf)
    // Offset: 0x1E2C404
    static int ReadFully(System::IO::Stream* inStr, ::Array<uint8_t>* buf);
    // static public System.Int32 ReadFully(System.IO.Stream inStr, System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x1E2C420
    static int ReadFully(System::IO::Stream* inStr, ::Array<uint8_t>* buf, int off, int len);
    // static public System.Void PipeAll(System.IO.Stream inStr, System.IO.Stream outStr)
    // Offset: 0x1E2C31C
    static void PipeAll(System::IO::Stream* inStr, System::IO::Stream* outStr);
    // static public System.Int32 WriteBufTo(System.IO.MemoryStream buf, System.Byte[] output, System.Int32 offset)
    // Offset: 0x1E2C4AC
    static int WriteBufTo(System::IO::MemoryStream* buf, ::Array<uint8_t>* output, int offset);
  }; // Org.BouncyCastle.Utilities.IO.Streams
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::Streams*, "Org.BouncyCastle.Utilities.IO", "Streams");
