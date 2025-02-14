// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: FindUnityObjectsHelper
  class FindUnityObjectsHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: FindUnityObjectsHelper
    FindUnityObjectsHelper() noexcept {}
    // static public System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> GetMonoBehavioursInLoadedScenes()
    // Offset: 0x1229504
    static System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* GetMonoBehavioursInLoadedScenes();
    // static public System.Collections.Generic.List`1<UnityEngine.GameObject> GetAllRootGameObjectsInLoadedScenes()
    // Offset: 0x1229720
    static System::Collections::Generic::List_1<UnityEngine::GameObject*>* GetAllRootGameObjectsInLoadedScenes();
    // static public System.Collections.Generic.List`1<UnityEngine.GameObject> GetAllGameObjectsInGameObject(UnityEngine.GameObject go)
    // Offset: 0x1229828
    static System::Collections::Generic::List_1<UnityEngine::GameObject*>* GetAllGameObjectsInGameObject(UnityEngine::GameObject* go);
    // static public System.Collections.Generic.List`1<UnityEngine.GameObject> GetAllGameObjectsInLoadedScenes()
    // Offset: 0x1229568
    static System::Collections::Generic::List_1<UnityEngine::GameObject*>* GetAllGameObjectsInLoadedScenes();
    // static public System.Collections.Generic.List`1<T> GetComponentsInGameObjects(System.Collections.Generic.IReadOnlyList`1<UnityEngine.GameObject> gameObjects)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<T>* GetComponentsInGameObjects(System::Collections::Generic::IReadOnlyList_1<UnityEngine::GameObject*>* gameObjects) {
      static_assert(std::is_convertible_v<T, UnityEngine::Behaviour*>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FindUnityObjectsHelper::GetComponentsInGameObjects");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "FindUnityObjectsHelper", "GetComponentsInGameObjects", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(gameObjects)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, gameObjects);
    }
  }; // FindUnityObjectsHelper
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FindUnityObjectsHelper*, "", "FindUnityObjectsHelper");
