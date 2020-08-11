// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: MemoryPoolBindInfo
  class MemoryPoolBindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPoolBindingFinalizer`1
  template<typename TContract>
  class MemoryPoolBindingFinalizer_1 : public Zenject::ProviderBindingFinalizer {
    public:
    // private readonly Zenject.MemoryPoolBindInfo _poolBindInfo
    // Offset: 0x0
    Zenject::MemoryPoolBindInfo* poolBindInfo;
    // private readonly Zenject.FactoryBindInfo _factoryBindInfo
    // Offset: 0x0
    Zenject::FactoryBindInfo* factoryBindInfo;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Offset: 0xFFFFFFFF
    static MemoryPoolBindingFinalizer_1<TContract>* New_ctor(Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, Zenject::MemoryPoolBindInfo* poolBindInfo) {
      return (MemoryPoolBindingFinalizer_1<TContract>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPoolBindingFinalizer_1<TContract>*>::get(), bindInfo, factoryBindInfo, poolBindInfo));
    }
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnFinalizeBinding", container));
    }
  }; // Zenject.MemoryPoolBindingFinalizer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolBindingFinalizer_1, "Zenject", "MemoryPoolBindingFinalizer`1");
#pragma pack(pop)
