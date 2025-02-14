// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefab
  // [NoReflectionBakingAttribute] Offset: DDD3F0
  class SubContainerCreatorByNewPrefab : public ::Il2CppObject/*, public Zenject::ISubContainerCreator*/ {
    public:
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x10
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // private readonly Zenject.IPrefabProvider _prefabProvider
    // Size: 0x8
    // Offset: 0x18
    Zenject::IPrefabProvider* prefabProvider;
    // Field size check
    static_assert(sizeof(Zenject::IPrefabProvider*) == 0x8);
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x20
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByNewPrefab
    SubContainerCreatorByNewPrefab(Zenject::GameObjectCreationParameters* gameObjectBindInfo_ = {}, Zenject::IPrefabProvider* prefabProvider_ = {}, Zenject::DiContainer* container_ = {}) noexcept : gameObjectBindInfo{gameObjectBindInfo_}, prefabProvider{prefabProvider_}, container{container_} {}
    // Creating interface conversion operator: operator Zenject::ISubContainerCreator
    operator Zenject::ISubContainerCreator() noexcept {
      return *reinterpret_cast<Zenject::ISubContainerCreator*>(this);
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.IPrefabProvider prefabProvider, Zenject.GameObjectCreationParameters gameObjectBindInfo)
    // Offset: 0x16D2178
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewPrefab* New_ctor(Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewPrefab::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewPrefab*, creationType>(container, prefabProvider, gameObjectBindInfo)));
    }
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext parentContext)
    // Offset: 0x16D35E8
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* parentContext);
  }; // Zenject.SubContainerCreatorByNewPrefab
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByNewPrefab), 32 + sizeof(Zenject::DiContainer*)> __Zenject_SubContainerCreatorByNewPrefabSizeCheck;
  static_assert(sizeof(SubContainerCreatorByNewPrefab) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewPrefab*, "Zenject", "SubContainerCreatorByNewPrefab");
