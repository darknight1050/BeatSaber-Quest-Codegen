// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GameScenesManager/ScenesStackData
  class GameScenesManager::ScenesStackData : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDE402C
    // private System.Collections.Generic.List`1<System.String> <sceneNames>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* sceneNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE403C
    // private Zenject.DiContainer <container>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: ScenesStackData
    ScenesStackData(System::Collections::Generic::List_1<::Il2CppString*>* sceneNames_ = {}, Zenject::DiContainer* container_ = {}) noexcept : sceneNames{sceneNames_}, container{container_} {}
    // public System.Collections.Generic.List`1<System.String> get_sceneNames()
    // Offset: 0x122D72C
    System::Collections::Generic::List_1<::Il2CppString*>* get_sceneNames();
    // private System.Void set_sceneNames(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0x122D734
    void set_sceneNames(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // public Zenject.DiContainer get_container()
    // Offset: 0x122D73C
    Zenject::DiContainer* get_container();
    // private System.Void set_container(Zenject.DiContainer value)
    // Offset: 0x122D744
    void set_container(Zenject::DiContainer* value);
    // public System.Void .ctor(System.Collections.Generic.List`1<System.String> sceneNames)
    // Offset: 0x122AD84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameScenesManager::ScenesStackData* New_ctor(System::Collections::Generic::List_1<::Il2CppString*>* sceneNames) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameScenesManager::ScenesStackData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameScenesManager::ScenesStackData*, creationType>(sceneNames)));
    }
    // public System.Void SetDiContainer(Zenject.DiContainer container)
    // Offset: 0x122C36C
    void SetDiContainer(Zenject::DiContainer* container);
  }; // GameScenesManager/ScenesStackData
  #pragma pack(pop)
  static check_size<sizeof(GameScenesManager::ScenesStackData), 24 + sizeof(Zenject::DiContainer*)> __GlobalNamespace_GameScenesManager_ScenesStackDataSizeCheck;
  static_assert(sizeof(GameScenesManager::ScenesStackData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::ScenesStackData*, "", "GameScenesManager/ScenesStackData");
