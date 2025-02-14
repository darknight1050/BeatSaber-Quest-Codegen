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
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsUtilities
  class TlsUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TlsUtilities
    TlsUtilities() noexcept {}
    // Get static field: static public readonly System.Byte[] EmptyBytes
    static ::Array<uint8_t>* _get_EmptyBytes();
    // Set static field: static public readonly System.Byte[] EmptyBytes
    static void _set_EmptyBytes(::Array<uint8_t>* value);
    // Get static field: static public readonly System.Int16[] EmptyShorts
    static ::Array<int16_t>* _get_EmptyShorts();
    // Set static field: static public readonly System.Int16[] EmptyShorts
    static void _set_EmptyShorts(::Array<int16_t>* value);
    // Get static field: static public readonly System.Int32[] EmptyInts
    static ::Array<int>* _get_EmptyInts();
    // Set static field: static public readonly System.Int32[] EmptyInts
    static void _set_EmptyInts(::Array<int>* value);
    // Get static field: static public readonly System.Int64[] EmptyLongs
    static ::Array<int64_t>* _get_EmptyLongs();
    // Set static field: static public readonly System.Int64[] EmptyLongs
    static void _set_EmptyLongs(::Array<int64_t>* value);
    // Get static field: static readonly System.Byte[] SSL_CLIENT
    static ::Array<uint8_t>* _get_SSL_CLIENT();
    // Set static field: static readonly System.Byte[] SSL_CLIENT
    static void _set_SSL_CLIENT(::Array<uint8_t>* value);
    // Get static field: static readonly System.Byte[] SSL_SERVER
    static ::Array<uint8_t>* _get_SSL_SERVER();
    // Set static field: static readonly System.Byte[] SSL_SERVER
    static void _set_SSL_SERVER(::Array<uint8_t>* value);
    // Get static field: static readonly System.Byte[][] SSL3_CONST
    static ::Array<::Array<uint8_t>*>* _get_SSL3_CONST();
    // Set static field: static readonly System.Byte[][] SSL3_CONST
    static void _set_SSL3_CONST(::Array<::Array<uint8_t>*>* value);
    // static public System.Void WriteUint8(System.Byte i, System.IO.Stream output)
    // Offset: 0x124EC78
    static void WriteUint8(uint8_t i, System::IO::Stream* output);
    // static public System.Void WriteUint16(System.Int32 i, System.IO.Stream output)
    // Offset: 0x124ECA4
    static void WriteUint16(int i, System::IO::Stream* output);
    // static public System.Void WriteOpaque8(System.Byte[] buf, System.IO.Stream output)
    // Offset: 0x124E584
    static void WriteOpaque8(::Array<uint8_t>* buf, System::IO::Stream* output);
    // static public System.Void WriteOpaque16(System.Byte[] buf, System.IO.Stream output)
    // Offset: 0x124DA2C
    static void WriteOpaque16(::Array<uint8_t>* buf, System::IO::Stream* output);
    // static public System.Byte ReadUint8(System.IO.Stream input)
    // Offset: 0x124ECF8
    static uint8_t ReadUint8(System::IO::Stream* input);
    // static public System.Int32 ReadUint16(System.IO.Stream input)
    // Offset: 0x124ED88
    static int ReadUint16(System::IO::Stream* input);
    // static public System.Void ReadFully(System.Byte[] buf, System.IO.Stream input)
    // Offset: 0x124EE34
    static void ReadFully(::Array<uint8_t>* buf, System::IO::Stream* input);
    // static public System.Byte[] ReadOpaque8(System.IO.Stream input)
    // Offset: 0x124EEDC
    static ::Array<uint8_t>* ReadOpaque8(System::IO::Stream* input);
    // static public System.Byte[] ReadOpaque16(System.IO.Stream input)
    // Offset: 0x124D99C
    static ::Array<uint8_t>* ReadOpaque16(System::IO::Stream* input);
    // static private System.Byte[][] GenSsl3Const()
    // Offset: 0x124EF6C
    static ::Array<::Array<uint8_t>*>* GenSsl3Const();
    // static private System.Void .cctor()
    // Offset: 0x124F08C
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Tls.TlsUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsUtilities");
