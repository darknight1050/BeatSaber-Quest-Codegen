// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
  class SerializationHeaderRecord : public ::CsObject {
    public:
    // System.Int32 binaryFormatterMajorVersion
    // Offset: 0x10
    int binaryFormatterMajorVersion;
    // System.Int32 binaryFormatterMinorVersion
    // Offset: 0x14
    int binaryFormatterMinorVersion;
    // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // System.Int32 topId
    // Offset: 0x1C
    int topId;
    // System.Int32 headerId
    // Offset: 0x20
    int headerId;
    // System.Int32 majorVersion
    // Offset: 0x24
    int majorVersion;
    // System.Int32 minorVersion
    // Offset: 0x28
    int minorVersion;
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum, System.Int32 topId, System.Int32 headerId, System.Int32 majorVersion, System.Int32 minorVersion)
    // Offset: 0xFDAE00
    static SerializationHeaderRecord* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int topId, int headerId, int majorVersion, int minorVersion);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0xFDAE5C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static private System.Int32 GetInt32(System.Byte[] buffer, System.Int32 index)
    // Offset: 0xFDAF54
    static int GetInt32(::Array<uint8_t>* buffer, int index);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0xFDAFD4
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0xFDB1AC
    void Dump();
    // System.Void .ctor()
    // Offset: 0xFDADF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SerializationHeaderRecord* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.SerializationHeaderRecord
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*, "System.Runtime.Serialization.Formatters.Binary", "SerializationHeaderRecord");
#pragma pack(pop)
