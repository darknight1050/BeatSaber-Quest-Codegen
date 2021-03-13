// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerPrefabBindingFinalizer
#include "Zenject/SubContainerPrefabBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorCached
  class SubContainerCreatorCached;
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
  // Autogenerated type: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CF03A0
  class SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1 : public ::Il2CppObject {
    public:
    // public Zenject.SubContainerCreatorCached containerCreator
    // Size: 0x8
    // Offset: 0x10
    Zenject::SubContainerCreatorCached* containerCreator;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerCreatorCached*) == 0x8);
    // public Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_1
    $$c__DisplayClass6_1(Zenject::SubContainerCreatorCached* containerCreator_ = {}, Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0* CS$$$8__locals1_ = {}) noexcept : containerCreator{containerCreator_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // Zenject.IProvider <FinalizeBindingSelf>b__1(Zenject.DiContainer _, System.Type contractType)
    // Offset: 0x151AE60
    Zenject::IProvider* $FinalizeBindingSelf$b__1(Zenject::DiContainer* _, System::Type* contractType);
    // public System.Void .ctor()
    // Offset: 0x151AC40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1*, creationType>()));
    }
  }; // Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_1
  #pragma pack(pop)
  static check_size<sizeof(SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1), 24 + sizeof(Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0*)> __Zenject_SubContainerPrefabBindingFinalizer_$$c__DisplayClass6_1SizeCheck;
  static_assert(sizeof(SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_1*, "Zenject", "SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_1");
