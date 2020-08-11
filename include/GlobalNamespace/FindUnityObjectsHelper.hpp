// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Behaviour
  class Behaviour;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FindUnityObjectsHelper
  class FindUnityObjectsHelper : public ::CsObject {
    public:
    // static public System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> GetMonoBehavioursInLoadedScenes()
    // Offset: 0xC9BE5C
    static System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* GetMonoBehavioursInLoadedScenes();
    // static public System.Collections.Generic.List`1<UnityEngine.GameObject> GetAllGameObjectsInLoadedScenes()
    // Offset: 0xC9BEC0
    static System::Collections::Generic::List_1<UnityEngine::GameObject*>* GetAllGameObjectsInLoadedScenes();
    // static public System.Collections.Generic.List`1<T> GetComponentsInGameObjects(System.Collections.Generic.IReadOnlyList`1<UnityEngine.GameObject> gameObjects)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<T>* GetComponentsInGameObjects(System::Collections::Generic::IReadOnlyList_1<UnityEngine::GameObject*>* gameObjects) {
      static_assert(std::is_convertible_v<T, UnityEngine::Behaviour*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::List_1<T>*>("", "FindUnityObjectsHelper", "GetComponentsInGameObjects", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, gameObjects)));
    }
  }; // FindUnityObjectsHelper
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FindUnityObjectsHelper*, "", "FindUnityObjectsHelper");
#pragma pack(pop)
