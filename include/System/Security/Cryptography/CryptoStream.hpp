// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Security.Cryptography.CryptoStreamMode
#include "System/Security/Cryptography/CryptoStreamMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x5F
  // Autogenerated type: System.Security.Cryptography.CryptoStream
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A320
  class CryptoStream : public System::IO::Stream {
    public:
    // Nested type: System::Security::Cryptography::CryptoStream::HopToThreadPoolAwaitable
    struct HopToThreadPoolAwaitable;
    // Nested type: System::Security::Cryptography::CryptoStream::$ReadAsyncInternal$d__34
    struct $ReadAsyncInternal$d__34;
    // Nested type: System::Security::Cryptography::CryptoStream::$WriteAsyncInternal$d__37
    struct $WriteAsyncInternal$d__37;
    // private System.IO.Stream _stream
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Security.Cryptography.ICryptoTransform _Transform
    // Size: 0x8
    // Offset: 0x30
    System::Security::Cryptography::ICryptoTransform* Transform;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::ICryptoTransform*) == 0x8);
    // private System.Byte[] _InputBuffer
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* InputBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _InputBufferIndex
    // Size: 0x4
    // Offset: 0x40
    int InputBufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _InputBlockSize
    // Size: 0x4
    // Offset: 0x44
    int InputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] _OutputBuffer
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* OutputBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _OutputBufferIndex
    // Size: 0x4
    // Offset: 0x50
    int OutputBufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _OutputBlockSize
    // Size: 0x4
    // Offset: 0x54
    int OutputBlockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Security.Cryptography.CryptoStreamMode _transformMode
    // Size: 0x4
    // Offset: 0x58
    System::Security::Cryptography::CryptoStreamMode transformMode;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::CryptoStreamMode) == 0x4);
    // private System.Boolean _canRead
    // Size: 0x1
    // Offset: 0x5C
    bool canRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _canWrite
    // Size: 0x1
    // Offset: 0x5D
    bool canWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _finalBlockTransformed
    // Size: 0x1
    // Offset: 0x5E
    bool finalBlockTransformed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CryptoStream
    CryptoStream(System::IO::Stream* stream_ = {}, System::Security::Cryptography::ICryptoTransform* Transform_ = {}, ::Array<uint8_t>* InputBuffer_ = {}, int InputBufferIndex_ = {}, int InputBlockSize_ = {}, ::Array<uint8_t>* OutputBuffer_ = {}, int OutputBufferIndex_ = {}, int OutputBlockSize_ = {}, System::Security::Cryptography::CryptoStreamMode transformMode_ = {}, bool canRead_ = {}, bool canWrite_ = {}, bool finalBlockTransformed_ = {}) noexcept : stream{stream_}, Transform{Transform_}, InputBuffer{InputBuffer_}, InputBufferIndex{InputBufferIndex_}, InputBlockSize{InputBlockSize_}, OutputBuffer{OutputBuffer_}, OutputBufferIndex{OutputBufferIndex_}, OutputBlockSize{OutputBlockSize_}, transformMode{transformMode_}, canRead{canRead_}, canWrite{canWrite_}, finalBlockTransformed{finalBlockTransformed_} {}
    // public System.Void .ctor(System.IO.Stream stream, System.Security.Cryptography.ICryptoTransform transform, System.Security.Cryptography.CryptoStreamMode mode)
    // Offset: 0x1458ED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CryptoStream* New_ctor(System::IO::Stream* stream, System::Security::Cryptography::ICryptoTransform* transform, System::Security::Cryptography::CryptoStreamMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::CryptoStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CryptoStream*, creationType>(stream, transform, mode)));
    }
    // public System.Boolean get_HasFlushedFinalBlock()
    // Offset: 0x14593DC
    bool get_HasFlushedFinalBlock();
    // public System.Void FlushFinalBlock()
    // Offset: 0x14593E4
    void FlushFinalBlock();
    // private System.Threading.Tasks.Task`1<System.Int32> ReadAsyncInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x145A0BC
    System::Threading::Tasks::Task_1<int>* ReadAsyncInternal(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task WriteAsyncInternal(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x145AA20
    System::Threading::Tasks::Task* WriteAsyncInternal(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public System.Void Clear()
    // Offset: 0x145AB7C
    void Clear();
    // private System.Void InitializeBuffer()
    // Offset: 0x14590C8
    void InitializeBuffer();
    // public override System.Boolean get_CanRead()
    // Offset: 0x1459244
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x145924C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1459254
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x145925C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x14592DC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x145935C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Flush()
    // Offset: 0x1459618
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x145961C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x145969C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x145971C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1459E14
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x145A228
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x145A780
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x145AB8C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.CryptoStream
  static check_size<sizeof(CryptoStream), 94 + sizeof(bool)> __System_Security_Cryptography_CryptoStreamSizeCheck;
  static_assert(sizeof(CryptoStream) == 0x5F);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoStream*, "System.Security.Cryptography", "CryptoStream");
#pragma pack(pop)
