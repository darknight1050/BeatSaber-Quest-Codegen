// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.MessageEnum
#include "System/Runtime/Serialization/Formatters/Binary/MessageEnum.hpp"
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
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
  class BinaryMethodReturn : public ::Il2CppObject {
    public:
    // private System.Object returnValue
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* returnValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object[] args
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Object callContext
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* callContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Type[] argTypes
    // Size: 0x8
    // Offset: 0x28
    ::Array<System::Type*>* argTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // private System.Boolean bArgsPrimitive
    // Size: 0x1
    // Offset: 0x30
    bool bArgsPrimitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bArgsPrimitive and: messageEnum
    char __padding4[0x3] = {};
    // private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum
    // Size: 0x4
    // Offset: 0x34
    System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::MessageEnum) == 0x4);
    // private System.Type returnType
    // Size: 0x8
    // Offset: 0x38
    System::Type* returnType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: BinaryMethodReturn
    BinaryMethodReturn(::Il2CppObject* returnValue_ = {}, ::Array<::Il2CppObject*>* args_ = {}, ::Il2CppObject* callContext_ = {}, ::Array<System::Type*>* argTypes_ = {}, bool bArgsPrimitive_ = {}, System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum_ = {}, System::Type* returnType_ = {}) noexcept : returnValue{returnValue_}, args{args_}, callContext{callContext_}, argTypes{argTypes_}, bArgsPrimitive{bArgsPrimitive_}, messageEnum{messageEnum_}, returnType{returnType_} {}
    // Get static field: static private System.Object instanceOfVoid
    static ::Il2CppObject* _get_instanceOfVoid();
    // Set static field: static private System.Object instanceOfVoid
    static void _set_instanceOfVoid(::Il2CppObject* value);
    // static private System.Void .cctor()
    // Offset: 0x15F0774
    static void _cctor();
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x15F082C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Dump()
    // Offset: 0x15F096C
    void Dump();
    // System.Void .ctor()
    // Offset: 0x15F081C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryMethodReturn* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryMethodReturn*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
  #pragma pack(pop)
  static check_size<sizeof(BinaryMethodReturn), 56 + sizeof(System::Type*)> __System_Runtime_Serialization_Formatters_Binary_BinaryMethodReturnSizeCheck;
  static_assert(sizeof(BinaryMethodReturn) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodReturn");
