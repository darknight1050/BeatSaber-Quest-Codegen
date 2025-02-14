// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeFieldInfo
  class RuntimeFieldInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: FieldAttributes
  struct FieldAttributes;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationFieldInfo
  class SerializationFieldInfo : public System::Reflection::FieldInfo {
    public:
    // private System.Reflection.RuntimeFieldInfo m_field
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::RuntimeFieldInfo* m_field;
    // Field size check
    static_assert(sizeof(System::Reflection::RuntimeFieldInfo*) == 0x8);
    // private System.String m_serializationName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_serializationName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SerializationFieldInfo
    SerializationFieldInfo(System::Reflection::RuntimeFieldInfo* m_field_ = {}, ::Il2CppString* m_serializationName_ = {}) noexcept : m_field{m_field_}, m_serializationName{m_serializationName_} {}
    // System.Void .ctor(System.Reflection.RuntimeFieldInfo field, System.String namePrefix)
    // Offset: 0x1683704
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationFieldInfo* New_ctor(System::Reflection::RuntimeFieldInfo* field, ::Il2CppString* namePrefix) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationFieldInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationFieldInfo*, creationType>(field, namePrefix)));
    }
    // System.Object InternalGetValue(System.Object obj)
    // Offset: 0x1683898
    ::Il2CppObject* InternalGetValue(::Il2CppObject* obj);
    // System.Void InternalSetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x16839AC
    void InternalSetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // System.Reflection.RuntimeFieldInfo get_FieldInfo()
    // Offset: 0x1683AE4
    System::Reflection::RuntimeFieldInfo* get_FieldInfo();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x16836BC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.Int32 get_MetadataToken()
    // Offset: 0x16836E0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::get_MetadataToken()
    int get_MetadataToken();
    // public override System.String get_Name()
    // Offset: 0x168379C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Type get_DeclaringType()
    // Offset: 0x16837A4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x16837C4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x16837E4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1683808
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x168382C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Type get_FieldType()
    // Offset: 0x1683850
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Type FieldInfo::get_FieldType()
    System::Type* get_FieldType();
    // public override System.Object GetValue(System.Object obj)
    // Offset: 0x1683874
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Object FieldInfo::GetValue(System.Object obj)
    ::Il2CppObject* GetValue(::Il2CppObject* obj);
    // public override System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x1683988
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // public override System.RuntimeFieldHandle get_FieldHandle()
    // Offset: 0x1683AEC
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.RuntimeFieldHandle FieldInfo::get_FieldHandle()
    System::RuntimeFieldHandle get_FieldHandle();
    // public override System.Reflection.FieldAttributes get_Attributes()
    // Offset: 0x1683B10
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Reflection.FieldAttributes FieldInfo::get_Attributes()
    System::Reflection::FieldAttributes get_Attributes();
  }; // System.Runtime.Serialization.SerializationFieldInfo
  #pragma pack(pop)
  static check_size<sizeof(SerializationFieldInfo), 24 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_SerializationFieldInfoSizeCheck;
  static_assert(sizeof(SerializationFieldInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationFieldInfo*, "System.Runtime.Serialization", "SerializationFieldInfo");
