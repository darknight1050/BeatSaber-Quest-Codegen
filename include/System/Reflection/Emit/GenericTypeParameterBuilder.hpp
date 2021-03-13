// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.GenericTypeParameterBuilder
  // [] Offset: FFFFFFFF
  class GenericTypeParameterBuilder : public System::Reflection::TypeInfo {
    public:
    // Creating value type constructor for type: GenericTypeParameterBuilder
    GenericTypeParameterBuilder() noexcept {}
    // public override System.Reflection.Assembly get_Assembly()
    // Offset: 0x1AC25C8
    // Implemented from: System.Type
    // Base method: System.Reflection.Assembly Type::get_Assembly_NEW()
    System::Reflection::Assembly* get_Assembly();
    // public override System.String get_AssemblyQualifiedName()
    // Offset: 0x1AC2624
    // Implemented from: System.Type
    // Base method: System.String Type::get_AssemblyQualifiedName_NEW()
    ::Il2CppString* get_AssemblyQualifiedName();
    // public override System.Type get_BaseType()
    // Offset: 0x1AC2680
    // Implemented from: System.Type
    // Base method: System.Type Type::get_BaseType_NEW()
    System::Type* get_BaseType();
    // public override System.String get_FullName()
    // Offset: 0x1AC26DC
    // Implemented from: System.Type
    // Base method: System.String Type::get_FullName_NEW()
    ::Il2CppString* get_FullName();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x1AC2738
    // Implemented from: System.Type
    // Base method: System.Reflection.Module Type::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.String get_Name()
    // Offset: 0x1AC2794
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name_NEW()
    ::Il2CppString* get_Name();
    // public override System.String get_Namespace()
    // Offset: 0x1AC27F0
    // Implemented from: System.Type
    // Base method: System.String Type::get_Namespace_NEW()
    ::Il2CppString* get_Namespace();
    // public override System.Type GetElementType()
    // Offset: 0x1AC284C
    // Implemented from: System.Type
    // Base method: System.Type Type::GetElementType_NEW()
    System::Type* GetElementType();
    // public override System.Type get_UnderlyingSystemType()
    // Offset: 0x1AC28A8
    // Implemented from: System.Type
    // Base method: System.Type Type::get_UnderlyingSystemType_NEW()
    System::Type* get_UnderlyingSystemType();
    // protected override System.Reflection.TypeAttributes GetAttributeFlagsImpl()
    // Offset: 0x1AC28E8
    // Implemented from: System.Type
    // Base method: System.Reflection.TypeAttributes Type::GetAttributeFlagsImpl_NEW()
    System::Reflection::TypeAttributes GetAttributeFlagsImpl();
    // protected override System.Reflection.ConstructorInfo GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1AC2928
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo Type::GetConstructorImpl_NEW(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::ConstructorInfo* GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.ConstructorInfo[] GetConstructors(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1AC2968
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo[] Type::GetConstructors_NEW(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::ConstructorInfo*>* GetConstructors(System::Reflection::BindingFlags bindingAttr);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1AC29A8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes_NEW(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1AC29E8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes_NEW(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.EventInfo GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1AC2A28
    // Implemented from: System.Type
    // Base method: System.Reflection.EventInfo Type::GetEvent_NEW(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Reflection::EventInfo* GetEvent(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1AC2A68
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo Type::GetField_NEW(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Reflection::FieldInfo* GetField(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo[] GetFields(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1AC2AA8
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo[] Type::GetFields_NEW(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::FieldInfo*>* GetFields(System::Reflection::BindingFlags bindingAttr);
    // public override System.Type[] GetInterfaces()
    // Offset: 0x1AC2AE8
    // Implemented from: System.Type
    // Base method: System.Type[] Type::GetInterfaces_NEW()
    ::Array<System::Type*>* GetInterfaces();
    // protected override System.Reflection.MethodInfo GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1AC2B28
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo Type::GetMethodImpl_NEW(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::MethodInfo* GetMethodImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.MethodInfo[] GetMethods(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1AC2B68
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo[] Type::GetMethods_NEW(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::MethodInfo*>* GetMethods(System::Reflection::BindingFlags bindingAttr);
    // public override System.Type GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1AC2BA8
    // Implemented from: System.Type
    // Base method: System.Type Type::GetNestedType_NEW(System.String name, System.Reflection.BindingFlags bindingAttr)
    System::Type* GetNestedType(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.PropertyInfo[] GetProperties(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x1AC2BE8
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo[] Type::GetProperties_NEW(System.Reflection.BindingFlags bindingAttr)
    ::Array<System::Reflection::PropertyInfo*>* GetProperties(System::Reflection::BindingFlags bindingAttr);
    // protected override System.Reflection.PropertyInfo GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x1AC2C28
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo Type::GetPropertyImpl_NEW(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::PropertyInfo* GetPropertyImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Type* returnType, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // protected override System.Boolean HasElementTypeImpl()
    // Offset: 0x1AC2C68
    // Implemented from: System.Type
    // Base method: System.Boolean Type::HasElementTypeImpl_NEW()
    bool HasElementTypeImpl();
    // public override System.Object InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    // Offset: 0x1AC2CA8
    // Implemented from: System.Type
    // Base method: System.Object Type::InvokeMember_NEW(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    ::Il2CppObject* InvokeMember(::Il2CppString* name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Il2CppObject* target, ::Array<::Il2CppObject*>* args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* culture, ::Array<::Il2CppString*>* namedParameters);
    // protected override System.Boolean IsArrayImpl()
    // Offset: 0x1AC2CE8
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsArrayImpl_NEW()
    bool IsArrayImpl();
    // protected override System.Boolean IsByRefImpl()
    // Offset: 0x1AC2D28
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsByRefImpl_NEW()
    bool IsByRefImpl();
    // protected override System.Boolean IsCOMObjectImpl()
    // Offset: 0x1AC2D68
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsCOMObjectImpl_NEW()
    bool IsCOMObjectImpl();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1AC2DA8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined_NEW(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // protected override System.Boolean IsPointerImpl()
    // Offset: 0x1AC2DE8
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPointerImpl_NEW()
    bool IsPointerImpl();
    // protected override System.Boolean IsPrimitiveImpl()
    // Offset: 0x1AC2E28
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPrimitiveImpl_NEW()
    bool IsPrimitiveImpl();
  }; // System.Reflection.Emit.GenericTypeParameterBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::GenericTypeParameterBuilder*, "System.Reflection.Emit", "GenericTypeParameterBuilder");
