// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolInitialSizeMaxSizeBinder`1
#include "Zenject/MemoryPoolInitialSizeMaxSizeBinder_1.hpp"
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
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: MemoryPoolBindInfo
  class MemoryPoolBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MemoryPoolIdInitialSizeMaxSizeBinder`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: CEEA88
  template<typename TContract>
  class MemoryPoolIdInitialSizeMaxSizeBinder_1 : public Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> {
    public:
    // Creating value type constructor for type: MemoryPoolIdInitialSizeMaxSizeBinder_1
    MemoryPoolIdInitialSizeMaxSizeBinder_1() noexcept {}
    // public Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> WithId(System.Object identifier)
    // Offset: 0xFFFFFFFF
    Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* WithId(::Il2CppObject* identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1::WithId");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WithId", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(identifier)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*, false>(this, ___internal__method, identifier);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolInitialSizeMaxSizeBinder`1
    // Base method: System.Void MemoryPoolInitialSizeMaxSizeBinder_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Base method: System.Void MemoryPoolMaxSizeBinder_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Base method: System.Void MemoryPoolExpandBinder_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, Zenject::MemoryPoolBindInfo* poolBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo)));
    }
  }; // Zenject.MemoryPoolIdInitialSizeMaxSizeBinder`1
  // Could not write size check! Type: Zenject.MemoryPoolIdInitialSizeMaxSizeBinder`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1, "Zenject", "MemoryPoolIdInitialSizeMaxSizeBinder`1");
