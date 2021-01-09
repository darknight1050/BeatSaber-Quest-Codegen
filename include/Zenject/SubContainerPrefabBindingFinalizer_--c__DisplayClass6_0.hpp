// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerPrefabBindingFinalizer
#include "Zenject/SubContainerPrefabBindingFinalizer.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  // Autogenerated type: Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93BF8
  class SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public Zenject.SubContainerPrefabBindingFinalizer <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::SubContainerPrefabBindingFinalizer* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::SubContainerPrefabBindingFinalizer*) == 0x8);
    // public Zenject.DiContainer container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_0
    $$c__DisplayClass6_0(Zenject::SubContainerPrefabBindingFinalizer* $$4__this_ = {}, Zenject::DiContainer* container_ = {}) noexcept : $$4__this{$$4__this_}, container{container_} {}
    // Zenject.IProvider <FinalizeBindingSelf>b__0(Zenject.DiContainer _, System.Type contractType)
    // Offset: 0x1357D5C
    Zenject::IProvider* $FinalizeBindingSelf$b__0(Zenject::DiContainer* _, System::Type* contractType);
    // public System.Void .ctor()
    // Offset: 0x1357BF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // Zenject.SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_0
  static check_size<sizeof(SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0), 24 + sizeof(Zenject::DiContainer*)> __Zenject_SubContainerPrefabBindingFinalizer_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerPrefabBindingFinalizer::$$c__DisplayClass6_0*, "Zenject", "SubContainerPrefabBindingFinalizer/<>c__DisplayClass6_0");
#pragma pack(pop)
