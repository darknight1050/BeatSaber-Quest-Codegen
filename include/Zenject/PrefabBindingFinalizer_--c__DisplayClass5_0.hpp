// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PrefabBindingFinalizer
#include "Zenject/PrefabBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  // Autogenerated type: Zenject.PrefabBindingFinalizer/<>c__DisplayClass5_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93AE8
  class PrefabBindingFinalizer::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabBindingFinalizer <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::PrefabBindingFinalizer* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::PrefabBindingFinalizer*) == 0x8);
    // public Zenject.DiContainer container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // public System.Collections.Generic.List`1<System.Type> concreteTypes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Type*>* concreteTypes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Type*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_0
    $$c__DisplayClass5_0(Zenject::PrefabBindingFinalizer* $$4__this_ = {}, Zenject::DiContainer* container_ = {}, System::Collections::Generic::List_1<System::Type*>* concreteTypes_ = {}) noexcept : $$4__this{$$4__this_}, container{container_}, concreteTypes{concreteTypes_} {}
    // Zenject.IProvider <FinalizeBindingConcrete>b__0(Zenject.DiContainer _, System.Type concreteType)
    // Offset: 0x134AA10
    Zenject::IProvider* $FinalizeBindingConcrete$b__0(Zenject::DiContainer* _, System::Type* concreteType);
    // public System.Void .ctor()
    // Offset: 0x1349EDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabBindingFinalizer::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabBindingFinalizer::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabBindingFinalizer::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // Zenject.PrefabBindingFinalizer/<>c__DisplayClass5_0
  static check_size<sizeof(PrefabBindingFinalizer::$$c__DisplayClass5_0), 32 + sizeof(System::Collections::Generic::List_1<System::Type*>*)> __Zenject_PrefabBindingFinalizer_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(PrefabBindingFinalizer::$$c__DisplayClass5_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabBindingFinalizer::$$c__DisplayClass5_0*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass5_0");
#pragma pack(pop)
