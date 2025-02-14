// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Including type: UnityEngine.SceneManagement.LoadSceneMode
#include "UnityEngine/SceneManagement/LoadSceneMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`2<T0, T1>
  template<typename T0, typename T1>
  class UnityAction_2;
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: UnloadSceneOptions
  struct UnloadSceneOptions;
  // Forward declaring type: LoadSceneParameters
  struct LoadSceneParameters;
}
// Completed forward declares
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SceneManagement.SceneManager
  // [RequiredByNativeCodeAttribute] Offset: D911F0
  // [NativeHeaderAttribute] Offset: D911F0
  class SceneManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SceneManager
    SceneManager() noexcept {}
    // Get static field: static System.Boolean s_AllowLoadScene
    static bool _get_s_AllowLoadScene();
    // Set static field: static System.Boolean s_AllowLoadScene
    static void _set_s_AllowLoadScene(bool value);
    // [DebuggerBrowsableAttribute] Offset: 0xD94620
    // [CompilerGeneratedAttribute] Offset: 0xD94620
    // Get static field: static private UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> sceneLoaded
    static UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode>* _get_sceneLoaded();
    // Set static field: static private UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> sceneLoaded
    static void _set_sceneLoaded(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD9465C
    // [CompilerGeneratedAttribute] Offset: 0xD9465C
    // Get static field: static private UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> sceneUnloaded
    static UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene>* _get_sceneUnloaded();
    // Set static field: static private UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> sceneUnloaded
    static void _set_sceneUnloaded(UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD94698
    // [CompilerGeneratedAttribute] Offset: 0xD94698
    // Get static field: static private UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> activeSceneChanged
    static UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::Scene>* _get_activeSceneChanged();
    // Set static field: static private UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> activeSceneChanged
    static void _set_activeSceneChanged(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::Scene>* value);
    // static public System.Int32 get_sceneCount()
    // Offset: 0x1B158F8
    static int get_sceneCount();
    // static public System.Int32 get_sceneCountInBuildSettings()
    // Offset: 0x1B1592C
    static int get_sceneCountInBuildSettings();
    // static public UnityEngine.SceneManagement.Scene GetActiveScene()
    // Offset: 0x1B15960
    static UnityEngine::SceneManagement::Scene GetActiveScene();
    // static public System.Boolean SetActiveScene(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1B15A2C
    static bool SetActiveScene(UnityEngine::SceneManagement::Scene scene);
    // static public UnityEngine.SceneManagement.Scene GetSceneByName(System.String name)
    // Offset: 0x1B15AF8
    static UnityEngine::SceneManagement::Scene GetSceneByName(::Il2CppString* name);
    // static public UnityEngine.SceneManagement.Scene GetSceneAt(System.Int32 index)
    // Offset: 0x1B15BE4
    static UnityEngine::SceneManagement::Scene GetSceneAt(int index);
    // static private UnityEngine.AsyncOperation UnloadSceneAsyncInternal(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.UnloadSceneOptions options)
    // Offset: 0x1B15CD0
    static UnityEngine::AsyncOperation* UnloadSceneAsyncInternal(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::UnloadSceneOptions options);
    // static private UnityEngine.AsyncOperation LoadSceneAsyncNameIndexInternal(System.String sceneName, System.Int32 sceneBuildIndex, UnityEngine.SceneManagement.LoadSceneParameters parameters, System.Boolean mustCompleteNextFrame)
    // Offset: 0x1B15DB8
    static UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::Il2CppString* sceneName, int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame);
    // static private UnityEngine.AsyncOperation UnloadSceneNameIndexInternal(System.String sceneName, System.Int32 sceneBuildIndex, System.Boolean immediately, UnityEngine.SceneManagement.UnloadSceneOptions options, out System.Boolean outSuccess)
    // Offset: 0x1B15EF0
    static UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::Il2CppString* sceneName, int sceneBuildIndex, bool immediately, UnityEngine::SceneManagement::UnloadSceneOptions options, bool& outSuccess);
    // static public System.Void MoveGameObjectToScene(UnityEngine.GameObject go, UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1B16040
    static void MoveGameObjectToScene(UnityEngine::GameObject* go, UnityEngine::SceneManagement::Scene scene);
    // static public System.Void add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> value)
    // Offset: 0x1B16128
    static void add_sceneLoaded(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode>* value);
    // static public System.Void remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> value)
    // Offset: 0x1B16218
    static void remove_sceneLoaded(UnityEngine::Events::UnityAction_2<UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::LoadSceneMode>* value);
    // static public System.Void add_sceneUnloaded(UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> value)
    // Offset: 0x1B16308
    static void add_sceneUnloaded(UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene>* value);
    // static public System.Void remove_sceneUnloaded(UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> value)
    // Offset: 0x1B163F8
    static void remove_sceneUnloaded(UnityEngine::Events::UnityAction_1<UnityEngine::SceneManagement::Scene>* value);
    // static public System.Void LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x1B164E8
    static void LoadScene(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode mode);
    // static public System.Void LoadScene(System.String sceneName)
    // Offset: 0x1B16610
    static void LoadScene(::Il2CppString* sceneName);
    // static public UnityEngine.SceneManagement.Scene LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneParameters parameters)
    // Offset: 0x1B16560
    static UnityEngine::SceneManagement::Scene LoadScene(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneParameters parameters);
    // static public System.Void LoadScene(System.Int32 sceneBuildIndex, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x1B16678
    static void LoadScene(int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneMode mode);
    // static public UnityEngine.SceneManagement.Scene LoadScene(System.Int32 sceneBuildIndex, UnityEngine.SceneManagement.LoadSceneParameters parameters)
    // Offset: 0x1B166F0
    static UnityEngine::SceneManagement::Scene LoadScene(int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters);
    // static public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneBuildIndex, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x1B167A0
    static UnityEngine::AsyncOperation* LoadSceneAsync(int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneMode mode);
    // static public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneBuildIndex, UnityEngine.SceneManagement.LoadSceneParameters parameters)
    // Offset: 0x1B16818
    static UnityEngine::AsyncOperation* LoadSceneAsync(int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters);
    // static public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x1B16894
    static UnityEngine::AsyncOperation* LoadSceneAsync(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode mode);
    // static public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName)
    // Offset: 0x1B16988
    static UnityEngine::AsyncOperation* LoadSceneAsync(::Il2CppString* sceneName);
    // static public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneParameters parameters)
    // Offset: 0x1B1690C
    static UnityEngine::AsyncOperation* LoadSceneAsync(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneParameters parameters);
    // static public UnityEngine.AsyncOperation UnloadSceneAsync(System.String sceneName)
    // Offset: 0x1B169F0
    static UnityEngine::AsyncOperation* UnloadSceneAsync(::Il2CppString* sceneName);
    // static public UnityEngine.AsyncOperation UnloadSceneAsync(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1B16A74
    static UnityEngine::AsyncOperation* UnloadSceneAsync(UnityEngine::SceneManagement::Scene scene);
    // static private System.Void Internal_SceneLoaded(UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.LoadSceneMode mode)
    // Offset: 0x1B16ADC
    static void Internal_SceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode);
    // static private System.Void Internal_SceneUnloaded(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1B16BA8
    static void Internal_SceneUnloaded(UnityEngine::SceneManagement::Scene scene);
    // static private System.Void Internal_ActiveSceneChanged(UnityEngine.SceneManagement.Scene previousActiveScene, UnityEngine.SceneManagement.Scene newActiveScene)
    // Offset: 0x1B16C60
    static void Internal_ActiveSceneChanged(UnityEngine::SceneManagement::Scene previousActiveScene, UnityEngine::SceneManagement::Scene newActiveScene);
    // static private System.Void .cctor()
    // Offset: 0x1B16D2C
    static void _cctor();
    // static private System.Void GetActiveScene_Injected(out UnityEngine.SceneManagement.Scene ret)
    // Offset: 0x1B159EC
    static void GetActiveScene_Injected(UnityEngine::SceneManagement::Scene& ret);
    // static private System.Boolean SetActiveScene_Injected(ref UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1B15AB8
    static bool SetActiveScene_Injected(UnityEngine::SceneManagement::Scene& scene);
    // static private System.Void GetSceneByName_Injected(System.String name, out UnityEngine.SceneManagement.Scene ret)
    // Offset: 0x1B15B94
    static void GetSceneByName_Injected(::Il2CppString* name, UnityEngine::SceneManagement::Scene& ret);
    // static private System.Void GetSceneAt_Injected(System.Int32 index, out UnityEngine.SceneManagement.Scene ret)
    // Offset: 0x1B15C80
    static void GetSceneAt_Injected(int index, UnityEngine::SceneManagement::Scene& ret);
    // static private UnityEngine.AsyncOperation UnloadSceneAsyncInternal_Injected(ref UnityEngine.SceneManagement.Scene scene, UnityEngine.SceneManagement.UnloadSceneOptions options)
    // Offset: 0x1B15D68
    static UnityEngine::AsyncOperation* UnloadSceneAsyncInternal_Injected(UnityEngine::SceneManagement::Scene& scene, UnityEngine::SceneManagement::UnloadSceneOptions options);
    // static private System.Void MoveGameObjectToScene_Injected(UnityEngine.GameObject go, ref UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x1B160D8
    static void MoveGameObjectToScene_Injected(UnityEngine::GameObject* go, UnityEngine::SceneManagement::Scene& scene);
  }; // UnityEngine.SceneManagement.SceneManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SceneManagement::SceneManager*, "UnityEngine.SceneManagement", "SceneManager");
