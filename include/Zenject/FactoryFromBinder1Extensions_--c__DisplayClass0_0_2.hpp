// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FactoryFromBinder1Extensions
#include "Zenject/FactoryFromBinder1Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder1Extensions/<>c__DisplayClass0_0`2
  template<typename TParam1, typename TContract>
  class FactoryFromBinder1Extensions::$$c__DisplayClass0_0_2 : public ::CsObject {
    public:
    // public System.Guid factoryId
    // Offset: 0x0
    System::Guid factoryId;
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromIFactory>b__0", container)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder1Extensions::$$c__DisplayClass0_0_2<TParam1, TContract>* New_ctor() {
      return (FactoryFromBinder1Extensions::$$c__DisplayClass0_0_2<TParam1, TContract>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder1Extensions::$$c__DisplayClass0_0_2<TParam1, TContract>*>::get())));
    }
  }; // Zenject.FactoryFromBinder1Extensions/<>c__DisplayClass0_0`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder1Extensions::$$c__DisplayClass0_0_2, "Zenject", "FactoryFromBinder1Extensions/<>c__DisplayClass0_0`2");
#pragma pack(pop)
