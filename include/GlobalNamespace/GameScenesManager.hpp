// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectSceneLoader
  class ZenjectSceneLoader;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: String
  class String;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameScenesManager
  class GameScenesManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::GameScenesManager::ScenesStackData
    class ScenesStackData;
    // Nested type: GlobalNamespace::GameScenesManager::ScenePresentType
    struct ScenePresentType;
    // Nested type: GlobalNamespace::GameScenesManager::SceneDismissType
    struct SceneDismissType;
    // Nested type: GlobalNamespace::GameScenesManager::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    // Nested type: GlobalNamespace::GameScenesManager::$$c__DisplayClass31_0
    class $$c__DisplayClass31_0;
    // Nested type: GlobalNamespace::GameScenesManager::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: GlobalNamespace::GameScenesManager::$$c__DisplayClass33_0
    class $$c__DisplayClass33_0;
    // Nested type: GlobalNamespace::GameScenesManager::$ScenesTransitionCoroutine$d__36
    class $ScenesTransitionCoroutine$d__36;
    // private SceneInfo _emptyTransitionSceneInfo
    // Offset: 0x18
    GlobalNamespace::SceneInfo* emptyTransitionSceneInfo;
    // private Zenject.ZenjectSceneLoader _zenjectSceneLoader
    // Offset: 0x20
    Zenject::ZenjectSceneLoader* zenjectSceneLoader;
    // private System.Action`1<System.Single> transitionDidStartEvent
    // Offset: 0x28
    System::Action_1<float>* transitionDidStartEvent;
    // private System.Action beforeDismissingScenesEvent
    // Offset: 0x30
    System::Action* beforeDismissingScenesEvent;
    // private System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> transitionDidFinishEvent
    // Offset: 0x38
    System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* transitionDidFinishEvent;
    // private System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> installEarlyBindingsEvent
    // Offset: 0x40
    System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* installEarlyBindingsEvent;
    // private System.Boolean _inTransition
    // Offset: 0x48
    bool inTransition;
    // private System.Collections.Generic.List`1<GameScenesManager/ScenesStackData> _scenesStack
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::GameScenesManager::ScenesStackData*>* scenesStack;
    // private System.Collections.Generic.HashSet`1<System.String> _neverUnloadScenes
    // Offset: 0x58
    System::Collections::Generic::HashSet_1<::Il2CppString*>* neverUnloadScenes;
    // static field const value: static public System.Single kStandardTransitionLength
    static constexpr const float kStandardTransitionLength = 0.7;
    // Get static field: static public System.Single kStandardTransitionLength
    static float _get_kStandardTransitionLength();
    // Set static field: static public System.Single kStandardTransitionLength
    static void _set_kStandardTransitionLength(float value);
    // static field const value: static public System.Single kShortTransitionLength
    static constexpr const float kShortTransitionLength = 0.35;
    // Get static field: static public System.Single kShortTransitionLength
    static float _get_kShortTransitionLength();
    // Set static field: static public System.Single kShortTransitionLength
    static void _set_kShortTransitionLength(float value);
    // static field const value: static public System.Single kLongTransitionLength
    static constexpr const float kLongTransitionLength = 1.3;
    // Get static field: static public System.Single kLongTransitionLength
    static float _get_kLongTransitionLength();
    // Set static field: static public System.Single kLongTransitionLength
    static void _set_kLongTransitionLength(float value);
    // static field const value: static private System.String kRootContainerGOName
    static constexpr const char* kRootContainerGOName = "RootContainer";
    // Get static field: static private System.String kRootContainerGOName
    static ::Il2CppString* _get_kRootContainerGOName();
    // Set static field: static private System.String kRootContainerGOName
    static void _set_kRootContainerGOName(::Il2CppString* value);
    // public System.Void add_transitionDidStartEvent(System.Action`1<System.Single> value)
    // Offset: 0xC0F6B8
    void add_transitionDidStartEvent(System::Action_1<float>* value);
    // public System.Void remove_transitionDidStartEvent(System.Action`1<System.Single> value)
    // Offset: 0xC0F75C
    void remove_transitionDidStartEvent(System::Action_1<float>* value);
    // public System.Void add_beforeDismissingScenesEvent(System.Action value)
    // Offset: 0xC0F800
    void add_beforeDismissingScenesEvent(System::Action* value);
    // public System.Void remove_beforeDismissingScenesEvent(System.Action value)
    // Offset: 0xC0F8A4
    void remove_beforeDismissingScenesEvent(System::Action* value);
    // public System.Void add_transitionDidFinishEvent(System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> value)
    // Offset: 0xC0F948
    void add_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value);
    // public System.Void remove_transitionDidFinishEvent(System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> value)
    // Offset: 0xC0F9EC
    void remove_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value);
    // public System.Void add_installEarlyBindingsEvent(System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> value)
    // Offset: 0xC0FA90
    void add_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value);
    // public System.Void remove_installEarlyBindingsEvent(System.Action`2<ScenesTransitionSetupDataSO,Zenject.DiContainer> value)
    // Offset: 0xC0FB34
    void remove_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value);
    // public Zenject.DiContainer get_currentScenesContainer()
    // Offset: 0xC0FBD8
    Zenject::DiContainer* get_currentScenesContainer();
    // public System.Boolean get_isInTransition()
    // Offset: 0xC0FC38
    bool get_isInTransition();
    // public UnityEngine.WaitUntil get_waitUntilSceneTransitionFinish()
    // Offset: 0xC0FC40
    UnityEngine::WaitUntil* get_waitUntilSceneTransitionFinish();
    // public System.Void MarkSceneAsPersistent(System.String sceneName)
    // Offset: 0xC0FCD8
    void MarkSceneAsPersistent(::Il2CppString* sceneName);
    // public System.Collections.Generic.List`1<System.String> GetCurrentlyLoadedSceneNames()
    // Offset: 0xC0FD40
    System::Collections::Generic::List_1<::Il2CppString*>* GetCurrentlyLoadedSceneNames();
    // public System.Void PushScenes(ScenesTransitionSetupDataSO scenesTransitionSetupData, System.Single minDuration, System.Action afterMinDurationCallback, System.Action finishCallback)
    // Offset: 0xC0FE58
    void PushScenes(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float minDuration, System::Action* afterMinDurationCallback, System::Action* finishCallback);
    // public System.Void PopScenes(System.Single minDuration, System.Action afterMinDurationCallback, System.Action finishCallback)
    // Offset: 0xC10350
    void PopScenes(float minDuration, System::Action* afterMinDurationCallback, System::Action* finishCallback);
    // public System.Void ReplaceScenes(ScenesTransitionSetupDataSO scenesTransitionSetupData, System.Single minDuration, System.Action afterMinDurationCallback, System.Action finishCallback)
    // Offset: 0xC10534
    void ReplaceScenes(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float minDuration, System::Action* afterMinDurationCallback, System::Action* finishCallback);
    // public System.Void ClearAndOpenScenes(ScenesTransitionSetupDataSO scenesTransitionSetupData, System.Single minDuration, System.Action afterMinDurationCallback, System.Action finishCallback, System.Boolean unloadAllScenes)
    // Offset: 0xC107DC
    void ClearAndOpenScenes(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float minDuration, System::Action* afterMinDurationCallback, System::Action* finishCallback, bool unloadAllScenes);
    // private System.Collections.IEnumerator ScenesTransitionCoroutine(System.Collections.Generic.List`1<System.String> scenesToPresent, GameScenesManager/ScenePresentType presentType, System.Collections.Generic.List`1<System.String> scenesToDismiss, GameScenesManager/SceneDismissType dismissType, System.Single minDuration, System.Action afterMinDurationCallback, System.Action`1<Zenject.DiContainer> extraBindingsCallback, System.Action finishCallback)
    // Offset: 0xC10230
    System::Collections::IEnumerator* ScenesTransitionCoroutine(System::Collections::Generic::List_1<::Il2CppString*>* scenesToPresent, GlobalNamespace::GameScenesManager::ScenePresentType presentType, System::Collections::Generic::List_1<::Il2CppString*>* scenesToDismiss, GlobalNamespace::GameScenesManager::SceneDismissType dismissType, float minDuration, System::Action* afterMinDurationCallback, System::Action_1<Zenject::DiContainer*>* extraBindingsCallback, System::Action* finishCallback);
    // private System.Boolean IsAnySceneInStack(System.Collections.Generic.List`1<System.String> sceneNames)
    // Offset: 0xC10C74
    bool IsAnySceneInStack(System::Collections::Generic::List_1<::Il2CppString*>* sceneNames);
    // private System.Boolean IsSceneInStack(System.String searchSceneName)
    // Offset: 0xC10D7C
    bool IsSceneInStack(::Il2CppString* searchSceneName);
    // private System.Collections.Generic.List`1<System.String> SceneNamesFromSceneInfoArray(SceneInfo[] sceneInfos)
    // Offset: 0xC1011C
    System::Collections::Generic::List_1<::Il2CppString*>* SceneNamesFromSceneInfoArray(::Array<GlobalNamespace::SceneInfo*>* sceneInfos);
    // private System.Void SetActiveRootObjectsInScenes(System.Collections.Generic.List`1<System.String> sceneNames, System.Boolean value)
    // Offset: 0xC10FEC
    void SetActiveRootObjectsInScenes(System::Collections::Generic::List_1<::Il2CppString*>* sceneNames, bool value);
    // private System.Void ReparentRootGameObjectsToDisabledGameObject(System.String sceneName)
    // Offset: 0xC11250
    void ReparentRootGameObjectsToDisabledGameObject(::Il2CppString* sceneName);
    // private System.Void MoveGameObjectsFromContainerToSceneRoot(System.String sceneName)
    // Offset: 0xC11430
    void MoveGameObjectsFromContainerToSceneRoot(::Il2CppString* sceneName);
    // static public System.Void Log(System.String message)
    // Offset: 0xC116B4
    static void Log(::Il2CppString* message);
    // private System.Boolean <get_waitUntilSceneTransitionFinish>b__22_0()
    // Offset: 0xC117CC
    bool $get_waitUntilSceneTransitionFinish$b__22_0();
    // public System.Void .ctor()
    // Offset: 0xC1171C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameScenesManager* New_ctor();
  }; // GameScenesManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager*, "", "GameScenesManager");
#pragma pack(pop)
