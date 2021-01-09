// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: CompressionMode
  struct CompressionMode;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x38
  // Autogenerated type: System.IO.Compression.DeflateStreamNative
  // [] Offset: FFFFFFFF
  class DeflateStreamNative : public ::Il2CppObject {
    public:
    // Nested type: System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite
    class UnmanagedReadOrWrite;
    // Nested type: System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle
    class SafeDeflateStreamHandle;
    // private System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite feeder
    // Size: 0x8
    // Offset: 0x10
    System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* feeder;
    // Field size check
    static_assert(sizeof(System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*) == 0x8);
    // private System.IO.Stream base_stream
    // Size: 0x8
    // Offset: 0x18
    System::IO::Stream* base_stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle z_stream
    // Size: 0x8
    // Offset: 0x20
    System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* z_stream;
    // Field size check
    static_assert(sizeof(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*) == 0x8);
    // private System.Runtime.InteropServices.GCHandle data
    // Size: 0x4
    // Offset: 0x28
    System::Runtime::InteropServices::GCHandle data;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::GCHandle) == 0x4);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x2C
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: io_buffer
    char __padding4[0x3] = {};
    // private System.Byte[] io_buffer
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* io_buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: DeflateStreamNative
    DeflateStreamNative(System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* feeder_ = {}, System::IO::Stream* base_stream_ = {}, System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* z_stream_ = {}, System::Runtime::InteropServices::GCHandle data_ = {}, bool disposed_ = {}, ::Array<uint8_t>* io_buffer_ = {}) noexcept : feeder{feeder_}, base_stream{base_stream_}, z_stream{z_stream_}, data{data_}, disposed{disposed_}, io_buffer{io_buffer_} {}
    // static public System.IO.Compression.DeflateStreamNative Create(System.IO.Stream compressedStream, System.IO.Compression.CompressionMode mode, System.Boolean gzip)
    // Offset: 0x1488CFC
    static System::IO::Compression::DeflateStreamNative* Create(System::IO::Stream* compressedStream, System::IO::Compression::CompressionMode mode, bool gzip);
    // public System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1488EF4
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0x14895D4
    void Flush();
    // public System.Int32 ReadZStream(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x1489018
    int ReadZStream(System::IntPtr buffer, int length);
    // public System.Void WriteZStream(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x14892AC
    void WriteZStream(System::IntPtr buffer, int length);
    // static private System.Int32 UnmanagedRead(System.IntPtr buffer, System.Int32 length, System.IntPtr data)
    // Offset: 0x148A9C0
    static int UnmanagedRead(System::IntPtr buffer, int length, System::IntPtr data);
    // private System.Int32 UnmanagedRead(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x148AEBC
    int UnmanagedRead(System::IntPtr buffer, int length);
    // static private System.Int32 UnmanagedWrite(System.IntPtr buffer, System.Int32 length, System.IntPtr data)
    // Offset: 0x148AA8C
    static int UnmanagedWrite(System::IntPtr buffer, int length, System::IntPtr data);
    // private System.Int32 UnmanagedWrite(System.IntPtr buffer, System.Int32 length)
    // Offset: 0x148AFF4
    int UnmanagedWrite(System::IntPtr buffer, int length);
    // static private System.Void CheckResult(System.Int32 result, System.String where)
    // Offset: 0x148ACF0
    static void CheckResult(int result, ::Il2CppString* where);
    // static private System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle CreateZStream(System.IO.Compression.CompressionMode compress, System.Boolean gzip, System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite feeder, System.IntPtr data)
    // Offset: 0x148AB74
    static System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* CreateZStream(System::IO::Compression::CompressionMode compress, bool gzip, System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* feeder, System::IntPtr data);
    // static private System.Int32 CloseZStream(System.IntPtr stream)
    // Offset: 0x148B1AC
    static int CloseZStream(System::IntPtr stream);
    // static private System.Int32 Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle stream)
    // Offset: 0x148AC80
    static int Flush(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* stream);
    // static private System.Int32 ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle stream, System.IntPtr buffer, System.Int32 length)
    // Offset: 0x148ADBC
    static int ReadZStream(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* stream, System::IntPtr buffer, int length);
    // static private System.Int32 WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle stream, System.IntPtr buffer, System.Int32 length)
    // Offset: 0x148AE3C
    static int WriteZStream(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle* stream, System::IntPtr buffer, int length);
    // private System.Void .ctor()
    // Offset: 0x148AB58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStreamNative* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Compression::DeflateStreamNative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStreamNative*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x148AC14
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.IO.Compression.DeflateStreamNative
  static check_size<sizeof(DeflateStreamNative), 48 + sizeof(::Array<uint8_t>*)> __System_IO_Compression_DeflateStreamNativeSizeCheck;
  static_assert(sizeof(DeflateStreamNative) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::DeflateStreamNative*, "System.IO.Compression", "DeflateStreamNative");
#pragma pack(pop)
