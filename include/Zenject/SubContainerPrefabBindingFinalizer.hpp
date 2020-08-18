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
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
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
  // Autogenerated type: Zenject.SubContainerPrefabBindingFinalizer
  class SubContainerPrefabBindingFinalizer : public Zenject::ProviderBindingFinalizer {
    public:
    // Nested type: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    // private readonly System.Object _subIdentifier
    // Offset: 0x18
    ::Il2CppObject* subIdentifier;
    // private readonly System.Boolean _resolveAll
    // Offset: 0x20
    bool resolveAll;
    // private readonly System.Func`2<Zenject.DiContainer,Zenject.ISubContainerCreator> _subContainerCreatorFactory
    // Offset: 0x28
    System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* subContainerCreatorFactory;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, System.Object subIdentifier, System.Boolean resolveAll, System.Func`2<Zenject.DiContainer,Zenject.ISubContainerCreator> subContainerCreatorFactory)
    // Offset: 0xF2A8EC
    static SubContainerPrefabBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, ::Il2CppObject* subIdentifier, bool resolveAll, System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* subContainerCreatorFactory);
    // private System.Void FinalizeBindingConcrete(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes)
    // Offset: 0xF2E8E8
    void FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes);
    // private System.Void FinalizeBindingSelf(Zenject.DiContainer container)
    // Offset: 0xF2E6F8
    void FinalizeBindingSelf(Zenject::DiContainer* container);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xF2E660
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.SubContainerPrefabBindingFinalizer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerPrefabBindingFinalizer*, "Zenject", "SubContainerPrefabBindingFinalizer");
#pragma pack(pop)
