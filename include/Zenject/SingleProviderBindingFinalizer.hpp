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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SingleProviderBindingFinalizer
  // [NoReflectionBakingAttribute] Offset: DDCBB0
  class SingleProviderBindingFinalizer : public Zenject::ProviderBindingFinalizer {
    public:
    // private readonly System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> _providerFactory
    // Size: 0x8
    // Offset: 0x18
    System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory;
    // Field size check
    static_assert(sizeof(System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>*) == 0x8);
    // Creating value type constructor for type: SingleProviderBindingFinalizer
    SingleProviderBindingFinalizer(System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory_ = {}) noexcept : providerFactory{providerFactory_} {}
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, System.Func`3<Zenject.DiContainer,System.Type,Zenject.IProvider> providerFactory)
    // Offset: 0x16D0504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SingleProviderBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>* providerFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SingleProviderBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SingleProviderBindingFinalizer*, creationType>(bindInfo, providerFactory)));
    }
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x16D053C
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.SingleProviderBindingFinalizer
  #pragma pack(pop)
  static check_size<sizeof(SingleProviderBindingFinalizer), 24 + sizeof(System::Func_3<Zenject::DiContainer*, System::Type*, Zenject::IProvider*>*)> __Zenject_SingleProviderBindingFinalizerSizeCheck;
  static_assert(sizeof(SingleProviderBindingFinalizer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SingleProviderBindingFinalizer*, "Zenject", "SingleProviderBindingFinalizer");
