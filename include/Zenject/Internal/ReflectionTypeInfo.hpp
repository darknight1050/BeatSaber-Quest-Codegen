// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo
  class ReflectionTypeInfo : public ::CsObject {
    public:
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo
    class InjectFieldInfo;
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo
    class InjectParameterInfo;
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo
    class InjectPropertyInfo;
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo
    class InjectMethodInfo;
    // Nested type: Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo
    class InjectConstructorInfo;
    // public readonly System.Type Type
    // Offset: 0x10
    System::Type* Type;
    // public readonly System.Type BaseType
    // Offset: 0x18
    System::Type* BaseType;
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo> InjectProperties
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* InjectProperties;
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo> InjectFields
    // Offset: 0x28
    System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* InjectFields;
    // public readonly Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo InjectConstructor
    // Offset: 0x30
    Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* InjectConstructor;
    // public readonly System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo> InjectMethods
    // Offset: 0x38
    System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* InjectMethods;
    // public System.Void .ctor(System.Type type, System.Type baseType, Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo injectConstructor, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo> injectMethods, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo> injectFields, System.Collections.Generic.List`1<Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo> injectProperties)
    // Offset: 0xF29654
    static ReflectionTypeInfo* New_ctor(System::Type* type, System::Type* baseType, Zenject::Internal::ReflectionTypeInfo::InjectConstructorInfo* injectConstructor, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectMethodInfo*>* injectMethods, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo*>* injectFields, System::Collections::Generic::List_1<Zenject::Internal::ReflectionTypeInfo::InjectPropertyInfo*>* injectProperties);
  }; // Zenject.Internal.ReflectionTypeInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeInfo*, "Zenject.Internal", "ReflectionTypeInfo");
#pragma pack(pop)
