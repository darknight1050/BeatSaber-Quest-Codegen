// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.IO
namespace Org::BouncyCastle::Utilities::IO {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.BaseInputStream
  // [] Offset: FFFFFFFF
  class BaseInputStream : public System::IO::Stream {
    public:
    // private System.Boolean closed
    // Size: 0x1
    // Offset: 0x28
    bool closed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BaseInputStream
    BaseInputStream(bool closed_ = {}) noexcept : closed{closed_} {}
    // public override System.Boolean get_CanRead()
    // Offset: 0x1E2AFD0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead_NEW()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x1E2AFE0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek_NEW()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1E2AFE8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite_NEW()
    bool get_CanWrite();
    // public override System.Void Close()
    // Offset: 0x1E2AFF0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Close_NEW()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x1E2B000
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush_NEW()
    void Flush();
    // public override System.Int64 get_Length()
    // Offset: 0x1E2B004
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length_NEW()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x1E2B064
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position_NEW()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x1E2B0C4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position_NEW(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1E2B124
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read_NEW(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x1E2B2BC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek_NEW(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x1E2B31C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength_NEW(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1E2B37C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write_NEW(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // protected System.Void .ctor()
    // Offset: 0x1E2B3DC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseInputStream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::IO::BaseInputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseInputStream*, creationType>()));
    }
  }; // Org.BouncyCastle.Utilities.IO.BaseInputStream
  #pragma pack(pop)
  static check_size<sizeof(BaseInputStream), 40 + sizeof(bool)> __Org_BouncyCastle_Utilities_IO_BaseInputStreamSizeCheck;
  static_assert(sizeof(BaseInputStream) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::BaseInputStream*, "Org.BouncyCastle.Utilities.IO", "BaseInputStream");
