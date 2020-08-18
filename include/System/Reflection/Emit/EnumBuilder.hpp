// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.TypeInfo
#include "System/Reflection/TypeInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Skipping declaration: BindingFlags because it is already included!
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: ParameterModifier
  struct ParameterModifier;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Type because it is already included!
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Autogenerated type: System.Reflection.Emit.EnumBuilder
  class EnumBuilder : public System::Reflection::TypeInfo {
    public:
    // public override System.Reflection.Assembly get_Assembly()
    // Offset: 0x12C4440
    // Implemented from: System.Type
    // Base method: System.Reflection.Assembly Type::get_Assembly()
    System::Reflection::Assembly* get_Assembly();
    // public override System.String get_AssemblyQualifiedName()
    // Offset: 0x12C449C
    // Implemented from: System.Type
    // Base method: System.String Type::get_AssemblyQualifiedName()
    ::Il2CppString* get_AssemblyQualifiedName();
    // public override System.Type get_BaseType()
    // Offset: 0x12C44F8
    // Implemented from: System.Type
    // Base method: System.Type Type::get_BaseType()
    System::Type* get_BaseType();
    // public override System.String get_FullName()
    // Offset: 0x12C4554
    // Implemented from: System.Type
    // Base method: System.String Type::get_FullName()
    ::Il2CppString* get_FullName();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x12C45B0
    // Implemented from: System.Type
    // Base method: System.Reflection.Module Type::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.String get_Name()
    // Offset: 0x12C460C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.String get_Namespace()
    // Offset: 0x12C4668
    // Implemented from: System.Type
    // Base method: System.String Type::get_Namespace()
    ::Il2CppString* get_Namespace();
    // public override System.Type GetElementType()
    // Offset: 0x12C46C4
    // Implemented from: System.Type
    // Base method: System.Type Type::GetElementType()
    System::Type* GetElementType();
    // public override System.Type get_UnderlyingSystemType()
    // Offset: 0x12C4720
    // Implemented from: System.Type
    // Base method: System.Type Type::get_UnderlyingSystemType()
    System::Type* get_UnderlyingSystemType();
    // protected override System.Reflection.TypeAttributes GetAttributeFlagsImpl()
    // Offset: 0x12C4760
    // Implemented from: System.Type
    // Base method: System.Reflection.TypeAttributes Type::GetAttributeFlagsImpl()
    System::Reflection::TypeAttributes GetAttributeFlagsImpl();
    // protected override System.Reflection.ConstructorInfo GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x12C47A0
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo Type::GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::ConstructorInfo* GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.ConstructorInfo[] GetConstructors(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x12C47E0
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo[] Type::GetConstructors(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::ConstructorInfo*>* GetConstructors(System::Reflection::BindingFlags bindingAttr);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x12C4820
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x12C4860
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.EventInfo GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x12C48A0
    // Implemented from: System.Type
    // Base method: System.Reflection.EventInfo Type::GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Reflection::EventInfo* GetEvent(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x12C48E0
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo Type::GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Reflection::FieldInfo* GetField(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo[] GetFields(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x12C4920
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo[] Type::GetFields(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::FieldInfo*>* GetFields(System::Reflection::BindingFlags bindingAttr);
    // public override System.Type[] GetInterfaces()
    // Offset: 0x12C4960
    // Implemented from: System.Type
    // Base method: System.Type[] Type::GetInterfaces()
    ::Array<System::Type*>* GetInterfaces();
    // protected override System.Reflection.MethodInfo GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x12C49A0
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo Type::GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::MethodInfo* GetMethodImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.MethodInfo[] GetMethods(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x12C49E0
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo[] Type::GetMethods(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::MethodInfo*>* GetMethods(System::Reflection::BindingFlags bindingAttr);
    // public override System.Type GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x12C4A20
    // Implemented from: System.Type
    // Base method: System.Type Type::GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Type* GetNestedType(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.PropertyInfo[] GetProperties(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x12C4A60
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo[] Type::GetProperties(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::PropertyInfo*>* GetProperties(System::Reflection::BindingFlags bindingAttr);
    // protected override System.Reflection.PropertyInfo GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x12C4AA0
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo Type::GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::PropertyInfo* GetPropertyImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Type* returnType, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // protected override System.Boolean HasElementTypeImpl()
    // Offset: 0x12C4AE0
    // Implemented from: System.Type
    // Base method: System.Boolean Type::HasElementTypeImpl()
    bool HasElementTypeImpl();
    // public override System.Object InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    // Offset: 0x12C4B20
    // Implemented from: System.Type
    // Base method: System.Object Type::InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    ::Il2CppObject* InvokeMember(::Il2CppString* name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Il2CppObject* target, ::Array<::Il2CppObject*>* args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* culture, ::Array<::Il2CppString*>* namedParameters);
    // protected override System.Boolean IsArrayImpl()
    // Offset: 0x12C4B60
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsArrayImpl()
    bool IsArrayImpl();
    // protected override System.Boolean IsByRefImpl()
    // Offset: 0x12C4BA0
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsByRefImpl()
    bool IsByRefImpl();
    // protected override System.Boolean IsCOMObjectImpl()
    // Offset: 0x12C4BE0
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsCOMObjectImpl()
    bool IsCOMObjectImpl();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x12C4C20
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // protected override System.Boolean IsPointerImpl()
    // Offset: 0x12C4C60
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPointerImpl()
    bool IsPointerImpl();
    // protected override System.Boolean IsPrimitiveImpl()
    // Offset: 0x12C4CA0
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPrimitiveImpl()
    bool IsPrimitiveImpl();
  }; // System.Reflection.Emit.EnumBuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::EnumBuilder*, "System.Reflection.Emit", "EnumBuilder");
#pragma pack(pop)
