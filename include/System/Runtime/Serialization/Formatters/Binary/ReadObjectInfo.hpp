// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectManager
  class ObjectManager;
  // Forward declaring type: ISerializationSurrogate
  class ISerializationSurrogate;
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerObjectInfoCache
  class SerObjectInfoCache;
  // Forward declaring type: SerObjectInfoInit
  class SerObjectInfoInit;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo
  class ReadObjectInfo : public ::Il2CppObject {
    public:
    // System.Int32 objectInfoId
    // Offset: 0x10
    int objectInfoId;
    // System.Type objectType
    // Offset: 0x18
    System::Type* objectType;
    // System.Runtime.Serialization.ObjectManager objectManager
    // Offset: 0x20
    System::Runtime::Serialization::ObjectManager* objectManager;
    // System.Int32 count
    // Offset: 0x28
    int count;
    // System.Boolean isSi
    // Offset: 0x2C
    bool isSi;
    // System.Boolean isNamed
    // Offset: 0x2D
    bool isNamed;
    // System.Boolean isTyped
    // Offset: 0x2E
    bool isTyped;
    // System.Boolean bSimpleAssembly
    // Offset: 0x2F
    bool bSimpleAssembly;
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache cache
    // Offset: 0x30
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* cache;
    // System.String[] wireMemberNames
    // Offset: 0x38
    ::Array<::Il2CppString*>* wireMemberNames;
    // System.Type[] wireMemberTypes
    // Offset: 0x40
    ::Array<System::Type*>* wireMemberTypes;
    // private System.Int32 lastPosition
    // Offset: 0x48
    int lastPosition;
    // System.Runtime.Serialization.ISerializationSurrogate serializationSurrogate
    // Offset: 0x50
    System::Runtime::Serialization::ISerializationSurrogate* serializationSurrogate;
    // System.Runtime.Serialization.StreamingContext context
    // Offset: 0x58
    System::Runtime::Serialization::StreamingContext context;
    // System.Collections.Generic.List`1<System.Type> memberTypesList
    // Offset: 0x68
    System::Collections::Generic::List_1<System::Type*>* memberTypesList;
    // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit
    // Offset: 0x70
    System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit;
    // System.Runtime.Serialization.IFormatterConverter formatterConverter
    // Offset: 0x78
    System::Runtime::Serialization::IFormatterConverter* formatterConverter;
    // Get static field: static System.Int32 readObjectInfoCounter
    static int _get_readObjectInfoCounter();
    // Set static field: static System.Int32 readObjectInfoCounter
    static void _set_readObjectInfoCounter(int value);
    // System.Void ObjectEnd()
    // Offset: 0xF4B0F4
    void ObjectEnd();
    // System.Void PrepareForReuse()
    // Offset: 0xF4B0F8
    void PrepareForReuse();
    // static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0xF4B100
    static System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager* objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // System.Void Init(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0xF4B214
    void Init(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager* objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // static System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo Create(System.Type objectType, System.String[] memberNames, System.Type[] memberTypes, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0xF4B4A4
    static System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* Create(System::Type* objectType, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager* objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // System.Void Init(System.Type objectType, System.String[] memberNames, System.Type[] memberTypes, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context, System.Runtime.Serialization.ObjectManager objectManager, System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean bSimpleAssembly)
    // Offset: 0xF4B54C
    void Init(System::Type* objectType, ::Array<::Il2CppString*>* memberNames, ::Array<System::Type*>* memberTypes, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context, System::Runtime::Serialization::ObjectManager* objectManager, System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit, System::Runtime::Serialization::IFormatterConverter* converter, bool bSimpleAssembly);
    // private System.Void InitReadConstructor(System.Type objectType, System.Runtime.Serialization.ISurrogateSelector surrogateSelector, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xF4B2D8
    void InitReadConstructor(System::Type* objectType, System::Runtime::Serialization::ISurrogateSelector* surrogateSelector, System::Runtime::Serialization::StreamingContext context);
    // private System.Void InitSiRead()
    // Offset: 0xF4B6F0
    void InitSiRead();
    // private System.Void InitNoMembers()
    // Offset: 0xF4B67C
    void InitNoMembers();
    // private System.Void InitMemberInfo()
    // Offset: 0xF4B778
    void InitMemberInfo();
    // System.Reflection.MemberInfo GetMemberInfo(System.String name)
    // Offset: 0xF4BBEC
    System::Reflection::MemberInfo* GetMemberInfo(::Il2CppString* name);
    // System.Type GetType(System.String name)
    // Offset: 0xF4BF00
    System::Type* GetType(::Il2CppString* name);
    // System.Void AddValue(System.String name, System.Object value, System.Runtime.Serialization.SerializationInfo si, System.Object[] memberData)
    // Offset: 0xF4C080
    void AddValue(::Il2CppString* name, ::Il2CppObject* value, System::Runtime::Serialization::SerializationInfo*& si, ::Array<::Il2CppObject*>*& memberData);
    // System.Void InitDataStore(System.Runtime.Serialization.SerializationInfo si, System.Object[] memberData)
    // Offset: 0xF4C1FC
    void InitDataStore(System::Runtime::Serialization::SerializationInfo*& si, ::Array<::Il2CppObject*>*& memberData);
    // System.Void RecordFixup(System.Int64 objectId, System.String name, System.Int64 idRef)
    // Offset: 0xF4C2EC
    void RecordFixup(int64_t objectId, ::Il2CppString* name, int64_t idRef);
    // System.Void PopulateObjectMembers(System.Object obj, System.Object[] memberData)
    // Offset: 0xF4C3A8
    void PopulateObjectMembers(::Il2CppObject* obj, ::Array<::Il2CppObject*>* memberData);
    // private System.Int32 Position(System.String name)
    // Offset: 0xF4BDC8
    int Position(::Il2CppString* name);
    // System.Type[] GetMemberTypes(System.String[] inMemberNames, System.Type objectType)
    // Offset: 0xF4C454
    ::Array<System::Type*>* GetMemberTypes(::Array<::Il2CppString*>* inMemberNames, System::Type* objectType);
    // System.Type GetMemberType(System.Reflection.MemberInfo objMember)
    // Offset: 0xF4BA8C
    System::Type* GetMemberType(System::Reflection::MemberInfo* objMember);
    // static private System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo GetObjectInfo(System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit serObjectInfoInit)
    // Offset: 0xF4B19C
    static System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* GetObjectInfo(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* serObjectInfoInit);
    // System.Void .ctor()
    // Offset: 0xF4B0EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ReadObjectInfo* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "ReadObjectInfo");
#pragma pack(pop)
