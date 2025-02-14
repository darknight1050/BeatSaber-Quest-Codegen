// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBindingFinalizer
  // [NoReflectionBakingAttribute] Offset: DDCBC0
  class SubContainerBindingFinalizer : public Zenject::ProviderBindingFinalizer {
    public:
    // Nested type: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::SubContainerBindingFinalizer::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    // private readonly System.Object _subIdentifier
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* subIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Boolean _resolveAll
    // Size: 0x1
    // Offset: 0x20
    bool resolveAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: resolveAll and: creatorFactory
    char __padding1[0x7] = {};
    // private readonly System.Func`2<Zenject.DiContainer,Zenject.ISubContainerCreator> _creatorFactory
    // Size: 0x8
    // Offset: 0x28
    System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* creatorFactory;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>*) == 0x8);
    // Creating value type constructor for type: SubContainerBindingFinalizer
    SubContainerBindingFinalizer(::Il2CppObject* subIdentifier_ = {}, bool resolveAll_ = {}, System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* creatorFactory_ = {}) noexcept : subIdentifier{subIdentifier_}, resolveAll{resolveAll_}, creatorFactory{creatorFactory_} {}
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, System.Object subIdentifier, System.Boolean resolveAll, System.Func`2<Zenject.DiContainer,Zenject.ISubContainerCreator> creatorFactory)
    // Offset: 0x16D0854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, ::Il2CppObject* subIdentifier, bool resolveAll, System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>* creatorFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBindingFinalizer*, creationType>(bindInfo, subIdentifier, resolveAll, creatorFactory)));
    }
    // private System.Void FinalizeBindingConcrete(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes)
    // Offset: 0x16D25B4
    void FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes);
    // private System.Void FinalizeBindingSelf(Zenject.DiContainer container)
    // Offset: 0x16D2414
    void FinalizeBindingSelf(Zenject::DiContainer* container);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x16D237C
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.SubContainerBindingFinalizer
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBindingFinalizer), 40 + sizeof(System::Func_2<Zenject::DiContainer*, Zenject::ISubContainerCreator*>*)> __Zenject_SubContainerBindingFinalizerSizeCheck;
  static_assert(sizeof(SubContainerBindingFinalizer) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBindingFinalizer*, "Zenject", "SubContainerBindingFinalizer");
