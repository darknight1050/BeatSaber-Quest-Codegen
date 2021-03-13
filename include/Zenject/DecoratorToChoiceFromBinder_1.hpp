// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: FactoryFromBinder`2<TParam1, TContract>
  template<typename TParam1, typename TContract>
  class FactoryFromBinder_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.DecoratorToChoiceFromBinder`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: CEE928
  template<typename TContract>
  class DecoratorToChoiceFromBinder_1 : public ::Il2CppObject {
    public:
    // private Zenject.DiContainer _bindContainer
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* bindContainer;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private Zenject.BindInfo _bindInfo
    // Size: 0x8
    // Offset: 0x0
    Zenject::BindInfo* bindInfo;
    // Field size check
    static_assert(sizeof(Zenject::BindInfo*) == 0x8);
    // private Zenject.FactoryBindInfo _factoryBindInfo
    // Size: 0x8
    // Offset: 0x0
    Zenject::FactoryBindInfo* factoryBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::FactoryBindInfo*) == 0x8);
    // Creating value type constructor for type: DecoratorToChoiceFromBinder_1
    DecoratorToChoiceFromBinder_1(Zenject::DiContainer* bindContainer_ = {}, Zenject::BindInfo* bindInfo_ = {}, Zenject::FactoryBindInfo* factoryBindInfo_ = {}) noexcept : bindContainer{bindContainer_}, bindInfo{bindInfo_}, factoryBindInfo{factoryBindInfo_} {}
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoratorToChoiceFromBinder_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DecoratorToChoiceFromBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoratorToChoiceFromBinder_1<TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo)));
    }
    // public Zenject.FactoryFromBinder`2<TContract,TConcrete> With()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FactoryFromBinder_2<TContract, TConcrete>* With() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DecoratorToChoiceFromBinder_1::With");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "With", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_2<TContract, TConcrete>*, false>(this, ___generic__method);
    }
  }; // Zenject.DecoratorToChoiceFromBinder`1
  // Could not write size check! Type: Zenject.DecoratorToChoiceFromBinder`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::DecoratorToChoiceFromBinder_1, "Zenject", "DecoratorToChoiceFromBinder`1");
