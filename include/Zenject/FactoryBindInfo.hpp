// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryBindInfo
  class FactoryBindInfo : public ::CsObject {
    public:
    // private System.Type <FactoryType>k__BackingField
    // Offset: 0x10
    System::Type* FactoryType;
    // private System.Func`2<Zenject.DiContainer,Zenject.IProvider> <ProviderFunc>k__BackingField
    // Offset: 0x18
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* ProviderFunc;
    // private System.Collections.Generic.List`1<Zenject.TypeValuePair> <Arguments>k__BackingField
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* Arguments;
    // public System.Void .ctor(System.Type factoryType)
    // Offset: 0xF1A520
    static FactoryBindInfo* New_ctor(System::Type* factoryType);
    // public System.Type get_FactoryType()
    // Offset: 0xF1A5B8
    System::Type* get_FactoryType();
    // private System.Void set_FactoryType(System.Type value)
    // Offset: 0xF1A5C0
    void set_FactoryType(System::Type* value);
    // public System.Func`2<Zenject.DiContainer,Zenject.IProvider> get_ProviderFunc()
    // Offset: 0xF1A5C8
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* get_ProviderFunc();
    // public System.Void set_ProviderFunc(System.Func`2<Zenject.DiContainer,Zenject.IProvider> value)
    // Offset: 0xF1A5D0
    void set_ProviderFunc(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* value);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_Arguments()
    // Offset: 0xF1A5D8
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_Arguments();
    // public System.Void set_Arguments(System.Collections.Generic.List`1<Zenject.TypeValuePair> value)
    // Offset: 0xF1A5E0
    void set_Arguments(System::Collections::Generic::List_1<Zenject::TypeValuePair>* value);
  }; // Zenject.FactoryBindInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryBindInfo*, "Zenject", "FactoryBindInfo");
#pragma pack(pop)
