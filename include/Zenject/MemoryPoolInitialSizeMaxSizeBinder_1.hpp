// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolMaxSizeBinder`1
#include "Zenject/MemoryPoolMaxSizeBinder_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: FactoryArgumentsToChoiceBinder`1 because it is already included!
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
  // Autogenerated type: Zenject.MemoryPoolInitialSizeMaxSizeBinder`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: CEEA78
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1 : public Zenject::MemoryPoolMaxSizeBinder_1<TContract> {
    public:
    // Creating value type constructor for type: MemoryPoolInitialSizeMaxSizeBinder_1
    MemoryPoolInitialSizeMaxSizeBinder_1() noexcept {}
    // public Zenject.MemoryPoolMaxSizeBinder`1<TContract> WithInitialSize(System.Int32 size)
    // Offset: 0xFFFFFFFF
    Zenject::MemoryPoolMaxSizeBinder_1<TContract>* WithInitialSize(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolInitialSizeMaxSizeBinder_1::WithInitialSize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WithInitialSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(size)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::MemoryPoolMaxSizeBinder_1<TContract>*, false>(this, ___internal__method, size);
    }
    // public Zenject.FactoryArgumentsToChoiceBinder`1<TContract> WithFixedSize(System.Int32 size)
    // Offset: 0xFFFFFFFF
    Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* WithFixedSize(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolInitialSizeMaxSizeBinder_1::WithFixedSize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WithFixedSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(size)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*, false>(this, ___internal__method, size);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolMaxSizeBinder`1
    // Base method: System.Void MemoryPoolMaxSizeBinder_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Base method: System.Void MemoryPoolExpandBinder_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, Zenject::MemoryPoolBindInfo* poolBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolInitialSizeMaxSizeBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo)));
    }
  }; // Zenject.MemoryPoolInitialSizeMaxSizeBinder`1
  // Could not write size check! Type: Zenject.MemoryPoolInitialSizeMaxSizeBinder`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1, "Zenject", "MemoryPoolInitialSizeMaxSizeBinder`1");
