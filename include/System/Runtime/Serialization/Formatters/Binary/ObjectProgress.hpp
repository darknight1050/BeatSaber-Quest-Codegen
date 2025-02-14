// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberValueE.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ParseRecord
  class ParseRecord;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectProgress
  class ObjectProgress : public ::Il2CppObject {
    public:
    // System.Boolean isInitial
    // Size: 0x1
    // Offset: 0x10
    bool isInitial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitial and: count
    char __padding0[0x3] = {};
    // System.Int32 count
    // Size: 0x4
    // Offset: 0x14
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum expectedType
    // Size: 0x4
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum) == 0x4);
    // Padding between fields: expectedType and: expectedTypeInformation
    char __padding2[0x4] = {};
    // System.Object expectedTypeInformation
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* expectedTypeInformation;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.String name
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE objectTypeEnum
    // Size: 0x4
    // Offset: 0x30
    System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE objectTypeEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE memberTypeEnum
    // Size: 0x4
    // Offset: 0x34
    System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE memberTypeEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE memberValueEnum
    // Size: 0x4
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE memberValueEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE) == 0x4);
    // Padding between fields: memberValueEnum and: dtType
    char __padding7[0x4] = {};
    // System.Type dtType
    // Size: 0x8
    // Offset: 0x40
    System::Type* dtType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Int32 numItems
    // Size: 0x4
    // Offset: 0x48
    int numItems;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum binaryTypeEnum
    // Size: 0x4
    // Offset: 0x4C
    System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum) == 0x4);
    // System.Object typeInformation
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* typeInformation;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 nullCount
    // Size: 0x4
    // Offset: 0x58
    int nullCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 memberLength
    // Size: 0x4
    // Offset: 0x5C
    int memberLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    // Size: 0x8
    // Offset: 0x60
    ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA;
    // Field size check
    static_assert(sizeof(::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*) == 0x8);
    // System.Object[] typeInformationA
    // Size: 0x8
    // Offset: 0x68
    ::Array<::Il2CppObject*>* typeInformationA;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // System.String[] memberNames
    // Size: 0x8
    // Offset: 0x70
    ::Array<::Il2CppString*>* memberNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Type[] memberTypes
    // Size: 0x8
    // Offset: 0x78
    ::Array<System::Type*>* memberTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.ParseRecord pr
    // Size: 0x8
    // Offset: 0x80
    System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::ParseRecord*) == 0x8);
    // Creating value type constructor for type: ObjectProgress
    ObjectProgress(bool isInitial_ = {}, int count_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType_ = {}, ::Il2CppObject* expectedTypeInformation_ = {}, ::Il2CppString* name_ = {}, System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE objectTypeEnum_ = {}, System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE memberTypeEnum_ = {}, System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE memberValueEnum_ = {}, System::Type* dtType_ = {}, int numItems_ = {}, System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum_ = {}, ::Il2CppObject* typeInformation_ = {}, int nullCount_ = {}, int memberLength_ = {}, ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA_ = {}, ::Array<::Il2CppObject*>* typeInformationA_ = {}, ::Array<::Il2CppString*>* memberNames_ = {}, ::Array<System::Type*>* memberTypes_ = {}, System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr_ = {}) noexcept : isInitial{isInitial_}, count{count_}, expectedType{expectedType_}, expectedTypeInformation{expectedTypeInformation_}, name{name_}, objectTypeEnum{objectTypeEnum_}, memberTypeEnum{memberTypeEnum_}, memberValueEnum{memberValueEnum_}, dtType{dtType_}, numItems{numItems_}, binaryTypeEnum{binaryTypeEnum_}, typeInformation{typeInformation_}, nullCount{nullCount_}, memberLength{memberLength_}, binaryTypeEnumA{binaryTypeEnumA_}, typeInformationA{typeInformationA_}, memberNames{memberNames_}, memberTypes{memberTypes_}, pr{pr_} {}
    // Get static field: static System.Int32 opRecordIdCount
    static int _get_opRecordIdCount();
    // Set static field: static System.Int32 opRecordIdCount
    static void _set_opRecordIdCount(int value);
    // System.Void Init()
    // Offset: 0x15F47E4
    void Init();
    // System.Void ArrayCountIncrement(System.Int32 value)
    // Offset: 0x15F48E0
    void ArrayCountIncrement(int value);
    // System.Boolean GetNext(out System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum outBinaryTypeEnum, out System.Object outTypeInformation)
    // Offset: 0x15F48F0
    bool GetNext(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& outBinaryTypeEnum, ::Il2CppObject*& outTypeInformation);
    // static private System.Void .cctor()
    // Offset: 0x15F4A14
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x15F476C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectProgress* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::ObjectProgress::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectProgress*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectProgress
  #pragma pack(pop)
  static check_size<sizeof(ObjectProgress), 128 + sizeof(System::Runtime::Serialization::Formatters::Binary::ParseRecord*)> __System_Runtime_Serialization_Formatters_Binary_ObjectProgressSizeCheck;
  static_assert(sizeof(ObjectProgress) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectProgress*, "System.Runtime.Serialization.Formatters.Binary", "ObjectProgress");
