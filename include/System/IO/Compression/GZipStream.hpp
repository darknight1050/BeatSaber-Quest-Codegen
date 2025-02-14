// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.Compression.CompressionMode
#include "System/IO/Compression/CompressionMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: DeflateStream
  class DeflateStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.GZipStream
  class GZipStream : public System::IO::Stream {
    public:
    // private System.IO.Compression.DeflateStream _deflateStream
    // Size: 0x8
    // Offset: 0x28
    System::IO::Compression::DeflateStream* deflateStream;
    // Field size check
    static_assert(sizeof(System::IO::Compression::DeflateStream*) == 0x8);
    // Creating value type constructor for type: GZipStream
    GZipStream(System::IO::Compression::DeflateStream* deflateStream_ = {}) noexcept : deflateStream{deflateStream_} {}
    // public System.Void .ctor(System.IO.Stream stream, System.IO.Compression.CompressionMode mode)
    // Offset: 0x1859744
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GZipStream* New_ctor(System::IO::Stream* stream, System::IO::Compression::CompressionMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Compression::GZipStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GZipStream*, creationType>(stream, mode)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.IO.Compression.CompressionMode mode, System.Boolean leaveOpen)
    // Offset: 0x185974C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GZipStream* New_ctor(System::IO::Stream* stream, System::IO::Compression::CompressionMode mode, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Compression::GZipStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GZipStream*, creationType>(stream, mode, leaveOpen)));
    }
    // private System.Void CheckDeflateStream()
    // Offset: 0x18599B0
    void CheckDeflateStream();
    // static private System.Void ThrowStreamClosedException()
    // Offset: 0x1859DE4
    static void ThrowStreamClosedException();
    // public override System.Boolean get_CanRead()
    // Offset: 0x1859800
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1859818
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x1859830
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Int64 get_Length()
    // Offset: 0x1859848
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x18598B4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x1859920
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Flush()
    // Offset: 0x185998C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x18599C8
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x1859A34
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int32 ReadByte()
    // Offset: 0x1859AA0
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.IAsyncResult BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x1859AC4
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* array, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x1859B88
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(System::IAsyncResult* asyncResult);
    // public override System.Int32 Read(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x1859BD8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] array, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* array, int offset, int count);
    // public override System.IAsyncResult BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x1859BFC
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* array, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x1859CC0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(System::IAsyncResult* asyncResult);
    // public override System.Void Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x1859CCC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* array, int offset, int count);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1859CF0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] array, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1859D78
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] array, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* array, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] array, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1859D9C
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] array, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* array, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1859DC0
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* CopyToAsync(System::IO::Stream* destination, int bufferSize, System::Threading::CancellationToken cancellationToken);
  }; // System.IO.Compression.GZipStream
  #pragma pack(pop)
  static check_size<sizeof(GZipStream), 40 + sizeof(System::IO::Compression::DeflateStream*)> __System_IO_Compression_GZipStreamSizeCheck;
  static_assert(sizeof(GZipStream) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::GZipStream*, "System.IO.Compression", "GZipStream");
