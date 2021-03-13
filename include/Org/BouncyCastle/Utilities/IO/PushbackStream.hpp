// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Utilities.IO.FilterStream
#include "Org/BouncyCastle/Utilities/IO/FilterStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.IO
namespace Org::BouncyCastle::Utilities::IO {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.PushbackStream
  // [] Offset: FFFFFFFF
  class PushbackStream : public Org::BouncyCastle::Utilities::IO::FilterStream {
    public:
    // private System.Int32 buf
    // Size: 0x4
    // Offset: 0x30
    int buf;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PushbackStream
    PushbackStream(int buf_ = {}) noexcept : buf{buf_} {}
    // public System.Void Unread(System.Int32 b)
    // Offset: 0x1E2C200
    void Unread_NEW(int b);
    // public System.Void .ctor(System.IO.Stream s)
    // Offset: 0x1E2C13C
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Void FilterStream::.ctor(System.IO.Stream s)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PushbackStream* New_ctor(System::IO::Stream* s) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::IO::PushbackStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PushbackStream*, creationType>(s)));
    }
    // public override System.Int32 ReadByte()
    // Offset: 0x1E2C148
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Int32 FilterStream::ReadByte()
    int ReadByte();
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1E2C188
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Int32 FilterStream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* buffer, int offset, int count);
  }; // Org.BouncyCastle.Utilities.IO.PushbackStream
  #pragma pack(pop)
  static check_size<sizeof(PushbackStream), 48 + sizeof(int)> __Org_BouncyCastle_Utilities_IO_PushbackStreamSizeCheck;
  static_assert(sizeof(PushbackStream) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::PushbackStream*, "Org.BouncyCastle.Utilities.IO", "PushbackStream");
