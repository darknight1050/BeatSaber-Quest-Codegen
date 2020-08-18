// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ScopableBindingFinalizer
  class ScopableBindingFinalizer : public Zenject::ProviderBindingFinalizer {
    public:
    // Nested type: Zenject::ScopableBindingFinalizer::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: Zenject::ScopableBindingFinalizer::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // private readonly System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> _providerFactory
    // Offset: 0x18
    System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> providerFactory)
    // Offset: 0xF290A8
    static ScopableBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory);
    // private System.Void FinalizeBindingConcrete(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes)
    // Offset: 0xF292A8
    void FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes);
    // private System.Void FinalizeBindingSelf(Zenject.DiContainer container)
    // Offset: 0xF29190
    void FinalizeBindingSelf(Zenject::DiContainer* container);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xF290F8
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.ScopableBindingFinalizer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScopableBindingFinalizer*, "Zenject", "ScopableBindingFinalizer");
#pragma pack(pop)
