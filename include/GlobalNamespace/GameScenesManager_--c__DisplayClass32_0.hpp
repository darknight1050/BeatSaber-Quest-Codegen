// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameScenesManager/<>c__DisplayClass32_0
  class GameScenesManager::$$c__DisplayClass32_0 : public ::CsObject {
    public:
    // public GameScenesManager <>4__this
    // Offset: 0x10
    GlobalNamespace::GameScenesManager* $$4__this;
    // public System.Collections.Generic.List`1<System.String> newSceneNames
    // Offset: 0x18
    System::Collections::Generic::List_1<::CsString*>* newSceneNames;
    // public System.Collections.Generic.List`1<System.String> emptyTransitionSceneNameList
    // Offset: 0x20
    System::Collections::Generic::List_1<::CsString*>* emptyTransitionSceneNameList;
    // public GameScenesManager/ScenesStackData scenesStackData
    // Offset: 0x28
    GlobalNamespace::GameScenesManager::ScenesStackData* scenesStackData;
    // public ScenesTransitionSetupDataSO scenesTransitionSetupData
    // Offset: 0x30
    GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // public System.Action finishCallback
    // Offset: 0x38
    System::Action* finishCallback;
    // public System.Action`1<Zenject.DiContainer> <>9__1
    // Offset: 0x40
    System::Action_1<Zenject::DiContainer*>* $$9__1;
    // public System.Action <>9__2
    // Offset: 0x48
    System::Action* $$9__2;
    // System.Void <ReplaceScenes>b__0()
    // Offset: 0xC9EE10
    void $ReplaceScenes$b__0();
    // System.Void <ReplaceScenes>b__1(Zenject.DiContainer container)
    // Offset: 0xC9EF4C
    void $ReplaceScenes$b__1(Zenject::DiContainer* container);
    // System.Void <ReplaceScenes>b__2()
    // Offset: 0xC9EFF4
    void $ReplaceScenes$b__2();
    // public System.Void .ctor()
    // Offset: 0xC9DACC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GameScenesManager::$$c__DisplayClass32_0* New_ctor();
  }; // GameScenesManager/<>c__DisplayClass32_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::$$c__DisplayClass32_0*, "", "GameScenesManager/<>c__DisplayClass32_0");
#pragma pack(pop)
