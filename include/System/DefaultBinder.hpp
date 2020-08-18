// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.Binder
#include "System/Reflection/Binder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: ParameterModifier
  struct ParameterModifier;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.DefaultBinder
  class DefaultBinder : public System::Reflection::Binder {
    public:
    // Nested type: System::DefaultBinder::BinderState
    class BinderState;
    // Nested type: System::DefaultBinder::$$c
    class $$c;
    // static public System.Reflection.MethodBase ExactBinding(System.Reflection.MethodBase[] match, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xBEF204
    static System::Reflection::MethodBase* ExactBinding(::Array<System::Reflection::MethodBase*>* match, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // static public System.Reflection.PropertyInfo ExactPropertyBinding(System.Reflection.PropertyInfo[] match, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xBEF584
    static System::Reflection::PropertyInfo* ExactPropertyBinding(::Array<System::Reflection::PropertyInfo*>* match, System::Type* returnType, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // static private System.Int32 FindMostSpecific(System.Reflection.ParameterInfo[] p1, System.Int32[] paramOrder1, System.Type paramArrayType1, System.Reflection.ParameterInfo[] p2, System.Int32[] paramOrder2, System.Type paramArrayType2, System.Type[] types, System.Object[] args)
    // Offset: 0xBEE9E4
    static int FindMostSpecific(::Array<System::Reflection::ParameterInfo*>* p1, ::Array<int>* paramOrder1, System::Type* paramArrayType1, ::Array<System::Reflection::ParameterInfo*>* p2, ::Array<int>* paramOrder2, System::Type* paramArrayType2, ::Array<System::Type*>* types, ::Array<::Il2CppObject*>* args);
    // static private System.Int32 FindMostSpecificType(System.Type c1, System.Type c2, System.Type t)
    // Offset: 0xBEE64C
    static int FindMostSpecificType(System::Type* c1, System::Type* c2, System::Type* t);
    // static private System.Int32 FindMostSpecificMethod(System.Reflection.MethodBase m1, System.Int32[] paramOrder1, System.Type paramArrayType1, System.Reflection.MethodBase m2, System.Int32[] paramOrder2, System.Type paramArrayType2, System.Type[] types, System.Object[] args)
    // Offset: 0xBECDF0
    static int FindMostSpecificMethod(System::Reflection::MethodBase* m1, ::Array<int>* paramOrder1, System::Type* paramArrayType1, System::Reflection::MethodBase* m2, ::Array<int>* paramOrder2, System::Type* paramArrayType2, ::Array<System::Type*>* types, ::Array<::Il2CppObject*>* args);
    // static private System.Int32 FindMostSpecificField(System.Reflection.FieldInfo cur1, System.Reflection.FieldInfo cur2)
    // Offset: 0xBED350
    static int FindMostSpecificField(System::Reflection::FieldInfo* cur1, System::Reflection::FieldInfo* cur2);
    // static private System.Int32 FindMostSpecificProperty(System.Reflection.PropertyInfo cur1, System.Reflection.PropertyInfo cur2)
    // Offset: 0xBEEDDC
    static int FindMostSpecificProperty(System::Reflection::PropertyInfo* cur1, System::Reflection::PropertyInfo* cur2);
    // static System.Boolean CompareMethodSigAndName(System.Reflection.MethodBase m1, System.Reflection.MethodBase m2)
    // Offset: 0xBEF858
    static bool CompareMethodSigAndName(System::Reflection::MethodBase* m1, System::Reflection::MethodBase* m2);
    // static System.Int32 GetHierarchyDepth(System.Type t)
    // Offset: 0xBEF9D0
    static int GetHierarchyDepth(System::Type* t);
    // static System.Reflection.MethodBase FindMostDerivedNewSlotMeth(System.Reflection.MethodBase[] match, System.Int32 cMatches)
    // Offset: 0xBEF458
    static System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(::Array<System::Reflection::MethodBase*>* match, int cMatches);
    // static private System.Void ReorderParams(System.Int32[] paramOrder, System.Object[] vars)
    // Offset: 0xBECC5C
    static void ReorderParams(::Array<int>* paramOrder, ::Array<::Il2CppObject*>* vars);
    // static private System.Boolean CreateParamOrder(System.Int32[] paramOrder, System.Reflection.ParameterInfo[] pars, System.String[] names)
    // Offset: 0xBEC8C8
    static bool CreateParamOrder(::Array<int>* paramOrder, ::Array<System::Reflection::ParameterInfo*>* pars, ::Array<::Il2CppString*>* names);
    // static private System.Boolean CanConvertPrimitive(System.RuntimeType source, System.RuntimeType target)
    // Offset: 0xBEDAC0
    static bool CanConvertPrimitive(System::RuntimeType* source, System::RuntimeType* target);
    // static private System.Boolean CanConvertPrimitiveObjectToType(System.Object source, System.RuntimeType type)
    // Offset: 0xBECB14
    static bool CanConvertPrimitiveObjectToType(::Il2CppObject* source, System::RuntimeType* type);
    // public override System.Reflection.MethodBase BindToMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo cultureInfo, System.String[] names, System.Object state)
    // Offset: 0xBEA994
    // Implemented from: System.Reflection.Binder
    // Base method: System.Reflection.MethodBase Binder::BindToMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo cultureInfo, System.String[] names, System.Object state)
    System::Reflection::MethodBase* BindToMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<::Il2CppObject*>*& args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* cultureInfo, ::Array<::Il2CppString*>* names, ::Il2CppObject*& state);
    // public override System.Reflection.FieldInfo BindToField(System.Reflection.BindingFlags bindingAttr, System.Reflection.FieldInfo[] match, System.Object value, System.Globalization.CultureInfo cultureInfo)
    // Offset: 0xBECF04
    // Implemented from: System.Reflection.Binder
    // Base method: System.Reflection.FieldInfo Binder::BindToField(System.Reflection.BindingFlags bindingAttr, System.Reflection.FieldInfo[] match, System.Object value, System.Globalization.CultureInfo cultureInfo)
    System::Reflection::FieldInfo* BindToField(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::FieldInfo*>* match, ::Il2CppObject* value, System::Globalization::CultureInfo* cultureInfo);
    // public override System.Reflection.MethodBase SelectMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xBED3FC
    // Implemented from: System.Reflection.Binder
    // Base method: System.Reflection.MethodBase Binder::SelectMethod(System.Reflection.BindingFlags bindingAttr, System.Reflection.MethodBase[] match, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::MethodBase* SelectMethod(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::MethodBase*>* match, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Reflection.PropertyInfo SelectProperty(System.Reflection.BindingFlags bindingAttr, System.Reflection.PropertyInfo[] match, System.Type returnType, System.Type[] indexes, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xBEDD04
    // Implemented from: System.Reflection.Binder
    // Base method: System.Reflection.PropertyInfo Binder::SelectProperty(System.Reflection.BindingFlags bindingAttr, System.Reflection.PropertyInfo[] match, System.Type returnType, System.Type[] indexes, System.Reflection.ParameterModifier[] modifiers)
    System::Reflection::PropertyInfo* SelectProperty(System::Reflection::BindingFlags bindingAttr, ::Array<System::Reflection::PropertyInfo*>* match, System::Type* returnType, ::Array<System::Type*>* indexes, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public override System.Object ChangeType(System.Object value, System.Type type, System.Globalization.CultureInfo cultureInfo)
    // Offset: 0xBEEE88
    // Implemented from: System.Reflection.Binder
    // Base method: System.Object Binder::ChangeType(System.Object value, System.Type type, System.Globalization.CultureInfo cultureInfo)
    ::Il2CppObject* ChangeType(::Il2CppObject* value, System::Type* type, System::Globalization::CultureInfo* cultureInfo);
    // public override System.Void ReorderArgumentArray(System.Object[] args, System.Object state)
    // Offset: 0xBEEF08
    // Implemented from: System.Reflection.Binder
    // Base method: System.Void Binder::ReorderArgumentArray(System.Object[] args, System.Object state)
    void ReorderArgumentArray(::Array<::Il2CppObject*>*& args, ::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0xBEFA7C
    // Implemented from: System.Reflection.Binder
    // Base method: System.Void Binder::.ctor()
    // Base method: System.Void Object::.ctor()
    static DefaultBinder* New_ctor();
  }; // System.DefaultBinder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DefaultBinder*, "System", "DefaultBinder");
#pragma pack(pop)
