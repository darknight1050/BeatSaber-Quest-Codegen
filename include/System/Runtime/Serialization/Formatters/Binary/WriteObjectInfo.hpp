// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
  // Forward declaring type: SerializationBinder
  class SerializationBinder;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerObjectInfoCache
  class SerObjectInfoCache;
  // Forward declaring type: SerObjectInfoInit
  class SerObjectInfoInit;
  // Forward declaring type: ObjectWriter
  class ObjectWriter;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
  class WriteObjectInfo : public ::Il2CppObject {
    public:
    // System.Int32 objectInfoId
    // Size: 0x4
    // Offset: 0x10
    int objectInfoId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectInfoId and: obj
    char __padding0[0x4] = {};
    // System.Object obj
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* obj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Type objectType
    // Size: 0x8
    // Offset: 0x20
    System::Type* objectType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Boolean isSi
    // Size: 0x1
    // Offset: 0x28
    bool isSi;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isNamed
    // Size: 0x1
    // Offset: 0x29
    bool isNamed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isTyped
    // Size: 0x1
    // Offset: 0x2A
    bool isTyped;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean isArray
    // Size: 0x1
    // Offset: 0x2B
    bool isArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isArray and: si
    char __padding6[0x4] = {};
    // System.Runtime.Serialization.SerializationInfo si
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::Serialization::SerializationInfo* si;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::SerializationInfo*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*) == 0x8);
    // System.Object[] memberData
    // Size: 0x8
    // Offset: 0x40
    ::Array<::Il2CppObject*>* memberData;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::ISerializationSurrogate*) == 0x8);
    // System.Runtime.Serialization.StreamingContext context
    // Size: 0xC
    // Offset: 0x50
    System::Runtime::Serialization::StreamingContext context;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContext) == 0xC);
    // Padding between fields: context and: serObjectInfoInit
    char __padding11[0x4] = {};
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    // Size: 0x8
    // Offset: 0x60
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*) == 0x8);
    // System.Int64 objectId
    // Size: 0x8
    // Offset: 0x68
    int64_t objectId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 assemId
    // Size: 0x8
    // Offset: 0x70
    int64_t assemId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.String binderTypeName
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppString* binderTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String binderAssemblyString
    // Size: 0x8
    // Offset: 0x80
    ::Il2CppString* binderAssemblyString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: WriteObjectInfo
    WriteObjectInfo(int objectInfoId_ = {}, ::Il2CppObject* obj_ = {}, System::Type* objectType_ = {}, bool isSi_ = {}, bool isNamed_ = {}, bool isTyped_ = {}, bool isArray_ = {}, System::Runtime::Serialization::SerializationInfo* si_ = {}, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache_ = {}, ::Array<::Il2CppObject*>* memberData_ = {}, System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate_ = {}, System::Runtime::Serialization::StreamingContext context_ = {}, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit_ = {}, int64_t objectId_ = {}, int64_t assemId_ = {}, ::Il2CppString* binderTypeName_ = {}, ::Il2CppString* binderAssemblyString_ = {}) noexcept : objectInfoId{objectInfoId_}, obj{obj_}, objectType{objectType_}, isSi{isSi_}, isNamed{isNamed_}, isTyped{isTyped_}, isArray{isArray_}, si{si_}, cache{cache_}, memberData{memberData_}, serializationSurrogate{serializationSurrogate_}, context{context_}, serObjectInfoInit{serObjectInfoInit_}, objectId{objectId_}, assemId{assemId_}, binderTypeName{binderTypeName_}, binderAssemblyString{binderAssemblyString_} {}
    // System.Void ObjectEnd()
    // Offset: 0x15F9520
    void ObjectEnd();
    // private System.Void InternalInit()
    // Offset: 0x15FC738
    void InternalInit();
    // static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(System.Object obj, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x15F8E4C
    static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::Il2CppObject* obj, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, System::Runtime::Serialization::SerializationBinder* binder);
    // System.Void InitSerialize(System.Object obj, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.Formatters.Binary.ObjectWriter objectWriter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x15FC82C
    void InitSerialize(::Il2CppObject* obj, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, System::Runtime::Serialization::SerializationBinder* binder);
    // static System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo Serialize(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x15F9F50
    static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, System::Runtime::Serialization::SerializationBinder* binder);
    // System.Void InitSerialize(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x15FD520
    void InitSerialize(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, System::Runtime::Serialization::SerializationBinder* binder);
    // private System.Void InitSiWrite()
    // Offset: 0x15FCE10
    void InitSiWrite();
    // static private System.Void CheckTypeForwardedFrom(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache, System.Type objectType, System.String binderAssemblyString)
    // Offset: 0x15FD0F8
    static void CheckTypeForwardedFrom(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache, System::Type* objectType, ::Il2CppString* binderAssemblyString);
    // private System.Void InitNoMembers()
    // Offset: 0x15FCD00
    void InitNoMembers();
    // private System.Void InitMemberInfo()
    // Offset: 0x15FD25C
    void InitMemberInfo();
    // System.String GetTypeFullName()
    // Offset: 0x15EE6B8
    ::Il2CppString* GetTypeFullName();
    // System.String GetAssemblyString()
    // Offset: 0x15EE68C
    ::Il2CppString* GetAssemblyString();
    // private System.Void InvokeSerializationBinder(System.Runtime.Serialization.SerializationBinder binder)
    // Offset: 0x15FCDE8
    void InvokeSerializationBinder(System::Runtime::Serialization::SerializationBinder* binder);
    // System.Type GetMemberType(System.Reflection.MemberInfo objMember)
    // Offset: 0x15FD7F0
    System::Type* GetMemberType(System::Reflection::MemberInfo* objMember);
    // System.Void GetMemberInfo(out System.String[] outMemberNames, out System.Type[] outMemberTypes, out System.Object[] outMemberData)
    // Offset: 0x15F9E40
    void GetMemberInfo(::Array<::Il2CppString*>*& outMemberNames, ::Array<System::Type*>*& outMemberTypes, ::Array<::Il2CppObject*>*& outMemberData);
    // static private System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
    // Offset: 0x15FC754
    static System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* GetObjectInfo(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);
    // static private System.Void PutObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo objectInfo)
    // Offset: 0x15FC718
    static void PutObjectInfo(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo);
    // System.Void .ctor()
    // Offset: 0x15FC710
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteObjectInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteObjectInfo*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo
  #pragma pack(pop)
  static check_size<sizeof(WriteObjectInfo), 128 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_Formatters_Binary_WriteObjectInfoSizeCheck;
  static_assert(sizeof(WriteObjectInfo) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
