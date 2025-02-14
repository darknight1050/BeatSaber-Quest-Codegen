// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PrefabResourceBindingFinalizer
#include "Zenject/PrefabResourceBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: PrefabInstantiatorCached
  class PrefabInstantiatorCached;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabResourceBindingFinalizer/<>c__DisplayClass5_1
  // [CompilerGeneratedAttribute] Offset: DDE2B8
  class PrefabResourceBindingFinalizer::$$c__DisplayClass5_1 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabInstantiatorCached prefabCreator
    // Size: 0x8
    // Offset: 0x10
    Zenject::PrefabInstantiatorCached* prefabCreator;
    // Field size check
    static_assert(sizeof(Zenject::PrefabInstantiatorCached*) == 0x8);
    // public Zenject.PrefabResourceBindingFinalizer/<>c__DisplayClass5_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_1
    $$c__DisplayClass5_1(Zenject::PrefabInstantiatorCached* prefabCreator_ = {}, Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0* CS$$$8__locals1_ = {}) noexcept : prefabCreator{prefabCreator_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // Zenject.IProvider <FinalizeBindingConcrete>b__1(Zenject.DiContainer _, System.Type concreteType)
    // Offset: 0x16C9D94
    Zenject::IProvider* $FinalizeBindingConcrete$b__1(Zenject::DiContainer* _, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0x16C9C68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabResourceBindingFinalizer::$$c__DisplayClass5_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabResourceBindingFinalizer::$$c__DisplayClass5_1*, creationType>()));
    }
  }; // Zenject.PrefabResourceBindingFinalizer/<>c__DisplayClass5_1
  #pragma pack(pop)
  static check_size<sizeof(PrefabResourceBindingFinalizer::$$c__DisplayClass5_1), 24 + sizeof(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*)> __Zenject_PrefabResourceBindingFinalizer_$$c__DisplayClass5_1SizeCheck;
  static_assert(sizeof(PrefabResourceBindingFinalizer::$$c__DisplayClass5_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_1*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_1");
