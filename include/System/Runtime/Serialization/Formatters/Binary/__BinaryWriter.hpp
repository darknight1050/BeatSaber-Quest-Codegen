// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "System/Runtime/Serialization/Formatters/FormatterTypeStyle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: BinaryWriter
  class BinaryWriter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ObjectWriter
  class ObjectWriter;
  // Forward declaring type: BinaryMethodCall
  class BinaryMethodCall;
  // Forward declaring type: BinaryMethodReturn
  class BinaryMethodReturn;
  // Forward declaring type: BinaryObject
  class BinaryObject;
  // Forward declaring type: BinaryObjectWithMap
  class BinaryObjectWithMap;
  // Forward declaring type: BinaryObjectWithMapTyped
  class BinaryObjectWithMapTyped;
  // Forward declaring type: BinaryObjectString
  class BinaryObjectString;
  // Forward declaring type: BinaryArray
  class BinaryArray;
  // Forward declaring type: MemberPrimitiveUnTyped
  class MemberPrimitiveUnTyped;
  // Forward declaring type: MemberPrimitiveTyped
  class MemberPrimitiveTyped;
  // Forward declaring type: ObjectNull
  class ObjectNull;
  // Forward declaring type: MemberReference
  class MemberReference;
  // Forward declaring type: BinaryAssembly
  class BinaryAssembly;
  // Forward declaring type: NameInfo
  class NameInfo;
  // Forward declaring type: WriteObjectInfo
  class WriteObjectInfo;
  // Forward declaring type: InternalPrimitiveTypeE
  struct InternalPrimitiveTypeE;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
  class __BinaryWriter : public ::Il2CppObject {
    public:
    // System.IO.Stream sout
    // Offset: 0x10
    System::IO::Stream* sout;
    // System.Runtime.Serialization.Formatters.FormatterTypeStyle formatterTypeStyle
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle;
    // System.Collections.Hashtable objectMapTable
    // Offset: 0x20
    System::Collections::Hashtable* objectMapTable;
    // System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter
    // Offset: 0x28
    System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter;
    // System.IO.BinaryWriter dataWriter
    // Offset: 0x30
    System::IO::BinaryWriter* dataWriter;
    // System.Int32 m_nestedObjectCount
    // Offset: 0x38
    int m_nestedObjectCount;
    // private System.Int32 nullCount
    // Offset: 0x3C
    int nullCount;
    // System.Runtime.Serialization.Formatters.Binary.BinaryMethodCall binaryMethodCall
    // Offset: 0x40
    System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* binaryMethodCall;
    // System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn binaryMethodReturn
    // Offset: 0x48
    System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* binaryMethodReturn;
    // System.Runtime.Serialization.Formatters.Binary.BinaryObject binaryObject
    // Offset: 0x50
    System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject;
    // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap binaryObjectWithMap
    // Offset: 0x58
    System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* binaryObjectWithMap;
    // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped binaryObjectWithMapTyped
    // Offset: 0x60
    System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* binaryObjectWithMapTyped;
    // System.Runtime.Serialization.Formatters.Binary.BinaryObjectString binaryObjectString
    // Offset: 0x68
    System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* binaryObjectString;
    // System.Runtime.Serialization.Formatters.Binary.BinaryArray binaryArray
    // Offset: 0x70
    System::Runtime::Serialization::Formatters::Binary::BinaryArray* binaryArray;
    // private System.Byte[] byteBuffer
    // Offset: 0x78
    ::Array<uint8_t>* byteBuffer;
    // private System.Int32 chunkSize
    // Offset: 0x80
    int chunkSize;
    // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped memberPrimitiveUnTyped
    // Offset: 0x88
    System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped;
    // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped memberPrimitiveTyped
    // Offset: 0x90
    System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped;
    // System.Runtime.Serialization.Formatters.Binary.ObjectNull objectNull
    // Offset: 0x98
    System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull;
    // System.Runtime.Serialization.Formatters.Binary.MemberReference memberReference
    // Offset: 0xA0
    System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference;
    // System.Runtime.Serialization.Formatters.Binary.BinaryAssembly binaryAssembly
    // Offset: 0xA8
    System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* binaryAssembly;
    // System.Void .ctor(System.IO.Stream sout, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, System.Runtime.Serialization.Formatters.FormatterTypeStyle formatterTypeStyle)
    // Offset: 0xF5341C
    static __BinaryWriter* New_ctor(System::IO::Stream* sout, System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle);
    // System.Void WriteBegin()
    // Offset: 0xF46B24
    void WriteBegin();
    // System.Void WriteEnd()
    // Offset: 0xF46D10
    void WriteEnd();
    // System.Void WriteBoolean(System.Boolean value)
    // Offset: 0xF534F4
    void WriteBoolean(bool value);
    // System.Void WriteByte(System.Byte value)
    // Offset: 0xF4CC18
    void WriteByte(uint8_t value);
    // private System.Void WriteBytes(System.Byte[] value)
    // Offset: 0xF53518
    void WriteBytes(::Array<uint8_t>* value);
    // private System.Void WriteBytes(System.Byte[] byteA, System.Int32 offset, System.Int32 size)
    // Offset: 0xF53538
    void WriteBytes(::Array<uint8_t>* byteA, int offset, int size);
    // System.Void WriteChar(System.Char value)
    // Offset: 0xF53558
    void WriteChar(::Il2CppChar value);
    // System.Void WriteChars(System.Char[] value)
    // Offset: 0xF53578
    void WriteChars(::Array<::Il2CppChar>* value);
    // System.Void WriteDecimal(System.Decimal value)
    // Offset: 0xF53598
    void WriteDecimal(System::Decimal value);
    // System.Void WriteSingle(System.Single value)
    // Offset: 0xF53664
    void WriteSingle(float value);
    // System.Void WriteDouble(System.Double value)
    // Offset: 0xF53688
    void WriteDouble(double value);
    // System.Void WriteInt16(System.Int16 value)
    // Offset: 0xF536AC
    void WriteInt16(int16_t value);
    // System.Void WriteInt32(System.Int32 value)
    // Offset: 0xF4CC38
    void WriteInt32(int value);
    // System.Void WriteInt64(System.Int64 value)
    // Offset: 0xF536D0
    void WriteInt64(int64_t value);
    // System.Void WriteSByte(System.SByte value)
    // Offset: 0xF536F4
    void WriteSByte(int8_t value);
    // System.Void WriteString(System.String value)
    // Offset: 0xF53640
    void WriteString(::Il2CppString* value);
    // System.Void WriteTimeSpan(System.TimeSpan value)
    // Offset: 0xF53714
    void WriteTimeSpan(System::TimeSpan value);
    // System.Void WriteDateTime(System.DateTime value)
    // Offset: 0xF53738
    void WriteDateTime(System::DateTime value);
    // System.Void WriteUInt16(System.UInt16 value)
    // Offset: 0xF5375C
    void WriteUInt16(uint16_t value);
    // System.Void WriteUInt32(System.UInt32 value)
    // Offset: 0xF53780
    void WriteUInt32(uint value);
    // System.Void WriteUInt64(System.UInt64 value)
    // Offset: 0xF537A4
    void WriteUInt64(uint64_t value);
    // System.Void WriteObjectEnd(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
    // Offset: 0xF48B80
    void WriteObjectEnd(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
    // System.Void WriteSerializationHeaderEnd()
    // Offset: 0xF46C90
    void WriteSerializationHeaderEnd();
    // System.Void WriteSerializationHeader(System.Int32 topId, System.Int32 headerId, System.Int32 minorVersion, System.Int32 majorVersion)
    // Offset: 0xF4A308
    void WriteSerializationHeader(int topId, int headerId, int minorVersion, int majorVersion);
    // System.Void WriteMethodCall()
    // Offset: 0xF46B48
    void WriteMethodCall();
    // System.Void WriteMethodReturn()
    // Offset: 0xF46BEC
    void WriteMethodReturn();
    // System.Void WriteObject(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Int32 numMembers, System.String[] memberNames, System.Type[] memberTypes, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[] memberObjectInfos)
    // Offset: 0xF4850C
    void WriteObject(System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, int numMembers, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes, ::Array<System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos);
    // System.Void WriteObjectString(System.Int32 objectId, System.String value)
    // Offset: 0xF47814
    void WriteObjectString(int objectId, ::Il2CppString* value);
    // System.Void WriteSingleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, System.Int32 length, System.Int32 lowerBound, System.Array array)
    // Offset: 0xF4927C
    void WriteSingleArray(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int length, int lowerBound, System::Array* array);
    // private System.Void WriteArrayAsBytes(System.Array array, System.Int32 typeLength)
    // Offset: 0xF53890
    void WriteArrayAsBytes(System::Array* array, int typeLength);
    // System.Void WriteJaggedArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, System.Int32 length, System.Int32 lowerBound)
    // Offset: 0xF49820
    void WriteJaggedArray(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int length, int lowerBound);
    // System.Void WriteRectangleArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, System.Int32 rank, System.Int32[] lengthA, System.Int32[] lowerBoundA)
    // Offset: 0xF499DC
    void WriteRectangleArray(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int rank, ::Array<int>* lengthA, ::Array<int>* lowerBoundA);
    // System.Void WriteObjectByteArray(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayNameInfo, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo arrayElemTypeNameInfo, System.Int32 length, System.Int32 lowerBound, System.Byte[] byteA)
    // Offset: 0xF49210
    void WriteObjectByteArray(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int length, int lowerBound, ::Array<uint8_t>* byteA);
    // System.Void WriteMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Object value)
    // Offset: 0xF49F90
    void WriteMember(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppObject* value);
    // System.Void WriteNullMember(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
    // Offset: 0xF4A234
    void WriteNullMember(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
    // System.Void WriteMemberObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Int32 idRef)
    // Offset: 0xF4A0FC
    void WriteMemberObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, int idRef);
    // System.Void WriteMemberNested(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo)
    // Offset: 0xF490F4
    void WriteMemberNested(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo);
    // System.Void WriteMemberString(System.Runtime.Serialization.Formatters.Binary.NameInfo memberNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.String value)
    // Offset: 0xF4A1C8
    void WriteMemberString(System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppString* value);
    // System.Void WriteItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo, System.Object value)
    // Offset: 0xF49F4C
    void WriteItem(System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::Il2CppObject* value);
    // System.Void WriteNullItem(System.Runtime.Serialization.Formatters.Binary.NameInfo itemNameInfo, System.Runtime.Serialization.Formatters.Binary.NameInfo typeNameInfo)
    // Offset: 0xF4A224
    void WriteNullItem(System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo);
    // System.Void WriteDelayedNullItem()
    // Offset: 0xF4A214
    void WriteDelayedNullItem();
    // System.Void WriteItemEnd()
    // Offset: 0xF4981C
    void WriteItemEnd();
    // private System.Void InternalWriteItemNull()
    // Offset: 0xF537C8
    void InternalWriteItemNull();
    // System.Void WriteItemObjectRef(System.Runtime.Serialization.Formatters.Binary.NameInfo nameInfo, System.Int32 idRef)
    // Offset: 0xF49DDC
    void WriteItemObjectRef(System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int idRef);
    // System.Void WriteAssembly(System.Type type, System.String assemblyString, System.Int32 assemId, System.Boolean isNew)
    // Offset: 0xF4A564
    void WriteAssembly(System::Type* type, ::Il2CppString* assemblyString, int assemId, bool isNew);
    // System.Void WriteValue(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE code, System.Object value)
    // Offset: 0xF53AE4
    void WriteValue(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::Il2CppObject* value);
  }; // System.Runtime.Serialization.Formatters.Binary.__BinaryWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*, "System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter");
#pragma pack(pop)
