// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder`2
#include "Zenject/FactoryFromBinder_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryToChoiceBinder`2
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D921B0
  template<typename TParam1, typename TContract>
  class FactoryToChoiceBinder_2 : public Zenject::FactoryFromBinder_2<TParam1, TContract> {
    public:
    // Creating value type constructor for type: FactoryToChoiceBinder_2
    FactoryToChoiceBinder_2() noexcept {}
    // public Zenject.FactoryFromBinder`2<TParam1,TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    Zenject::FactoryFromBinder_2<TParam1, TContract>* ToSelf() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_2::ToSelf");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ToSelf", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_2<TParam1, TContract>*, false>(this, ___internal__method);
    }
    // public Zenject.FactoryFromBinder`2<TParam1,TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FactoryFromBinder_2<TParam1, TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_2::To");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "To", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryFromBinder_2<TParam1, TConcrete>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryFromBinder`2
    // Base method: System.Void FactoryFromBinder_2::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryToChoiceBinder_2<TParam1, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceBinder_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryToChoiceBinder_2<TParam1, TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceBinder`2
  // Could not write size check! Type: Zenject.FactoryToChoiceBinder`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_2, "Zenject", "FactoryToChoiceBinder`2");
