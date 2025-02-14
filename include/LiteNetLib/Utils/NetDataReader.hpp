// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ArraySegment`1<T>
  template<typename T>
  struct ArraySegment_1;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NetDataReader
  class NetDataReader : public ::Il2CppObject {
    public:
    // protected System.Byte[] _data
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // protected System.Int32 _position
    // Size: 0x4
    // Offset: 0x18
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 _dataSize
    // Size: 0x4
    // Offset: 0x1C
    int dataSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _offset
    // Size: 0x4
    // Offset: 0x20
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NetDataReader
    NetDataReader(::Array<uint8_t>* data_ = {}, int position_ = {}, int dataSize_ = {}, int offset_ = {}) noexcept : data{data_}, position{position_}, dataSize{dataSize_}, offset{offset_} {}
    // public System.Byte[] get_RawData()
    // Offset: 0x1B2F964
    ::Array<uint8_t>* get_RawData();
    // public System.Int32 get_RawDataSize()
    // Offset: 0x1B2F96C
    int get_RawDataSize();
    // public System.Int32 get_UserDataOffset()
    // Offset: 0x1B2F974
    int get_UserDataOffset();
    // public System.Int32 get_UserDataSize()
    // Offset: 0x1B2F97C
    int get_UserDataSize();
    // public System.Boolean get_IsNull()
    // Offset: 0x1B25CE0
    bool get_IsNull();
    // public System.Int32 get_Position()
    // Offset: 0x1B2F988
    int get_Position();
    // public System.Boolean get_EndOfData()
    // Offset: 0x1B2F990
    bool get_EndOfData();
    // public System.Int32 get_AvailableBytes()
    // Offset: 0x1B2F9A0
    int get_AvailableBytes();
    // public System.Void SkipBytes(System.Int32 count)
    // Offset: 0x1B2F9AC
    void SkipBytes(int count);
    // public System.Void SetSource(LiteNetLib.Utils.NetDataWriter dataWriter)
    // Offset: 0x1B2F9BC
    void SetSource(LiteNetLib::Utils::NetDataWriter* dataWriter);
    // public System.Void SetSource(System.Byte[] source)
    // Offset: 0x1B2F9E8
    void SetSource(::Array<uint8_t>* source);
    // public System.Void SetSource(System.Byte[] source, System.Int32 offset)
    // Offset: 0x1B2FA10
    void SetSource(::Array<uint8_t>* source, int offset);
    // public System.Void SetSource(System.Byte[] source, System.Int32 offset, System.Int32 maxSize)
    // Offset: 0x1B223BC
    void SetSource(::Array<uint8_t>* source, int offset, int maxSize);
    // public System.Void .ctor(System.Byte[] source)
    // Offset: 0x1B2FA38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataReader* New_ctor(::Array<uint8_t>* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataReader*, creationType>(source)));
    }
    // public System.Void .ctor(System.Byte[] source, System.Int32 offset)
    // Offset: 0x1B2FA7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataReader* New_ctor(::Array<uint8_t>* source, int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataReader*, creationType>(source, offset)));
    }
    // public System.Void .ctor(System.Byte[] source, System.Int32 offset, System.Int32 maxSize)
    // Offset: 0x1B23938
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataReader* New_ctor(::Array<uint8_t>* source, int offset, int maxSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataReader*, creationType>(source, offset, maxSize)));
    }
    // public System.Net.IPEndPoint GetNetEndPoint()
    // Offset: 0x1B2FACC
    System::Net::IPEndPoint* GetNetEndPoint();
    // public System.Byte GetByte()
    // Offset: 0x1B2FCCC
    uint8_t GetByte();
    // public System.SByte GetSByte()
    // Offset: 0x1B2FD18
    int8_t GetSByte();
    // public System.Boolean[] GetBoolArray()
    // Offset: 0x1B2FD64
    ::Array<bool>* GetBoolArray();
    // public System.UInt16[] GetUShortArray()
    // Offset: 0x1B2FE44
    ::Array<uint16_t>* GetUShortArray();
    // public System.Int16[] GetShortArray()
    // Offset: 0x1B2FF20
    ::Array<int16_t>* GetShortArray();
    // public System.Int64[] GetLongArray()
    // Offset: 0x1B2FFFC
    ::Array<int64_t>* GetLongArray();
    // public System.UInt64[] GetULongArray()
    // Offset: 0x1B300D8
    ::Array<uint64_t>* GetULongArray();
    // public System.Int32[] GetIntArray()
    // Offset: 0x1B301B4
    ::Array<int>* GetIntArray();
    // public System.UInt32[] GetUIntArray()
    // Offset: 0x1B30290
    ::Array<uint>* GetUIntArray();
    // public System.Single[] GetFloatArray()
    // Offset: 0x1B3036C
    ::Array<float>* GetFloatArray();
    // public System.Double[] GetDoubleArray()
    // Offset: 0x1B30448
    ::Array<double>* GetDoubleArray();
    // public System.String[] GetStringArray()
    // Offset: 0x1B30524
    ::Array<::Il2CppString*>* GetStringArray();
    // public System.String[] GetStringArray(System.Int32 maxStringLength)
    // Offset: 0x1B30650
    ::Array<::Il2CppString*>* GetStringArray(int maxStringLength);
    // public System.Boolean GetBool()
    // Offset: 0x1B3078C
    bool GetBool();
    // public System.Char GetChar()
    // Offset: 0x1B307E0
    ::Il2CppChar GetChar();
    // public System.UInt16 GetUShort()
    // Offset: 0x1B3086C
    uint16_t GetUShort();
    // public System.Int16 GetShort()
    // Offset: 0x1B308F8
    int16_t GetShort();
    // public System.Int64 GetLong()
    // Offset: 0x1B30984
    int64_t GetLong();
    // public System.UInt64 GetULong()
    // Offset: 0x1B30A10
    uint64_t GetULong();
    // public System.Int32 GetInt()
    // Offset: 0x1B2FC40
    int GetInt();
    // public System.UInt32 GetUInt()
    // Offset: 0x1B30A9C
    uint GetUInt();
    // public System.Single GetFloat()
    // Offset: 0x1B30B28
    float GetFloat();
    // public System.Double GetDouble()
    // Offset: 0x1B30BB4
    double GetDouble();
    // public System.String GetString(System.Int32 maxLength)
    // Offset: 0x1B2FB54
    ::Il2CppString* GetString(int maxLength);
    // public System.String GetString()
    // Offset: 0x1B1D4E4
    ::Il2CppString* GetString();
    // public System.ArraySegment`1<System.Byte> GetRemainingBytesSegment()
    // Offset: 0x1B30C40
    System::ArraySegment_1<uint8_t> GetRemainingBytesSegment();
    // public T Get()
    // Offset: 0xFFFFFFFF
    template<class T>
    T Get() {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataReader::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___generic__method);
    }
    // public System.Byte[] GetRemainingBytes()
    // Offset: 0x1B30CC4
    ::Array<uint8_t>* GetRemainingBytes();
    // public System.Void GetBytes(System.Byte[] destination, System.Int32 start, System.Int32 count)
    // Offset: 0x1B30D54
    void GetBytes(::Array<uint8_t>* destination, int start, int count);
    // public System.Void GetBytes(System.Byte[] destination, System.Int32 count)
    // Offset: 0x1B30DA0
    void GetBytes(::Array<uint8_t>* destination, int count);
    // public System.SByte[] GetSBytesWithLength()
    // Offset: 0x1B30DEC
    ::Array<int8_t>* GetSBytesWithLength();
    // public System.Byte[] GetBytesWithLength()
    // Offset: 0x1B30E8C
    ::Array<uint8_t>* GetBytesWithLength();
    // public System.Byte PeekByte()
    // Offset: 0x1B30F2C
    uint8_t PeekByte();
    // public System.SByte PeekSByte()
    // Offset: 0x1B30F6C
    int8_t PeekSByte();
    // public System.Boolean PeekBool()
    // Offset: 0x1B30FAC
    bool PeekBool();
    // public System.Char PeekChar()
    // Offset: 0x1B30FF4
    ::Il2CppChar PeekChar();
    // public System.UInt16 PeekUShort()
    // Offset: 0x1B31068
    uint16_t PeekUShort();
    // public System.Int16 PeekShort()
    // Offset: 0x1B310DC
    int16_t PeekShort();
    // public System.Int64 PeekLong()
    // Offset: 0x1B31150
    int64_t PeekLong();
    // public System.UInt64 PeekULong()
    // Offset: 0x1B311C4
    uint64_t PeekULong();
    // public System.Int32 PeekInt()
    // Offset: 0x1B31238
    int PeekInt();
    // public System.UInt32 PeekUInt()
    // Offset: 0x1B312AC
    uint PeekUInt();
    // public System.Single PeekFloat()
    // Offset: 0x1B31320
    float PeekFloat();
    // public System.Double PeekDouble()
    // Offset: 0x1B31394
    double PeekDouble();
    // public System.String PeekString(System.Int32 maxLength)
    // Offset: 0x1B31408
    ::Il2CppString* PeekString(int maxLength);
    // public System.String PeekString()
    // Offset: 0x1B31528
    ::Il2CppString* PeekString();
    // public System.Boolean TryGetByte(out System.Byte result)
    // Offset: 0x1B31604
    bool TryGetByte(uint8_t& result);
    // public System.Boolean TryGetSByte(out System.SByte result)
    // Offset: 0x1B3164C
    bool TryGetSByte(int8_t& result);
    // public System.Boolean TryGetBool(out System.Boolean result)
    // Offset: 0x1B31694
    bool TryGetBool(bool& result);
    // public System.Boolean TryGetChar(out System.Char result)
    // Offset: 0x1B316DC
    bool TryGetChar(::Il2CppChar& result);
    // public System.Boolean TryGetShort(out System.Int16 result)
    // Offset: 0x1B31724
    bool TryGetShort(int16_t& result);
    // public System.Boolean TryGetUShort(out System.UInt16 result)
    // Offset: 0x1B3176C
    bool TryGetUShort(uint16_t& result);
    // public System.Boolean TryGetInt(out System.Int32 result)
    // Offset: 0x1B317B4
    bool TryGetInt(int& result);
    // public System.Boolean TryGetUInt(out System.UInt32 result)
    // Offset: 0x1B317FC
    bool TryGetUInt(uint& result);
    // public System.Boolean TryGetLong(out System.Int64 result)
    // Offset: 0x1B31844
    bool TryGetLong(int64_t& result);
    // public System.Boolean TryGetULong(out System.UInt64 result)
    // Offset: 0x1B3188C
    bool TryGetULong(uint64_t& result);
    // public System.Boolean TryGetFloat(out System.Single result)
    // Offset: 0x1B318D4
    bool TryGetFloat(float& result);
    // public System.Boolean TryGetDouble(out System.Double result)
    // Offset: 0x1B31918
    bool TryGetDouble(double& result);
    // public System.Boolean TryGetString(out System.String result)
    // Offset: 0x1B3195C
    bool TryGetString(::Il2CppString*& result);
    // public System.Boolean TryGetStringArray(out System.String[] result)
    // Offset: 0x1B319C4
    bool TryGetStringArray(::Array<::Il2CppString*>*& result);
    // public System.Boolean TryGetBytesWithLength(out System.Byte[] result)
    // Offset: 0x1B31ABC
    bool TryGetBytesWithLength(::Array<uint8_t>*& result);
    // public System.Void Clear()
    // Offset: 0x1B2A6C0
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x1B222C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetDataReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetDataReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetDataReader*, creationType>()));
    }
  }; // LiteNetLib.Utils.NetDataReader
  #pragma pack(pop)
  static check_size<sizeof(NetDataReader), 32 + sizeof(int)> __LiteNetLib_Utils_NetDataReaderSizeCheck;
  static_assert(sizeof(NetDataReader) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NetDataReader*, "LiteNetLib.Utils", "NetDataReader");
