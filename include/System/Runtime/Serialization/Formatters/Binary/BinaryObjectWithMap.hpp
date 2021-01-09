// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x34
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
  // [] Offset: FFFFFFFF
  class BinaryObjectWithMap : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum) == 0x4);
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x14
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.String name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int32 numMembers
    // Size: 0x4
    // Offset: 0x20
    int numMembers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numMembers and: memberNames
    char __padding3[0x4] = {};
    // System.String[] memberNames
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Il2CppString*>* memberNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Int32 assemId
    // Size: 0x4
    // Offset: 0x30
    int assemId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BinaryObjectWithMap
    BinaryObjectWithMap(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum_ = {}, int objectId_ = {}, ::Il2CppString* name_ = {}, int numMembers_ = {}, ::Array<::Il2CppString*>* memberNames_ = {}, int assemId_ = {}) noexcept : binaryHeaderEnum{binaryHeaderEnum_}, objectId{objectId_}, name{name_}, numMembers{numMembers_}, memberNames{memberNames_}, assemId{assemId_} {}
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x1342990
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectWithMap* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectWithMap*, creationType>(binaryHeaderEnum)));
    }
    // System.Void Set(System.Int32 objectId, System.String name, System.Int32 numMembers, System.String[] memberNames, System.Int32 assemId)
    // Offset: 0x13429BC
    void Set(int objectId, ::Il2CppString* name, int numMembers, ::Array<::Il2CppString*>* memberNames, int assemId);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x1342A24
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x1342B0C
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x1342C7C
    void Dump();
    // System.Void .ctor()
    // Offset: 0x1342988
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectWithMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectWithMap*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
  static check_size<sizeof(BinaryObjectWithMap), 48 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapSizeCheck;
  static_assert(sizeof(BinaryObjectWithMap) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMap");
#pragma pack(pop)
