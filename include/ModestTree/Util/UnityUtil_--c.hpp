// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.Util.UnityUtil/<>c
  // [CompilerGeneratedAttribute] Offset: DDD668
  class UnityUtil::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly ModestTree.Util.UnityUtil/<>c <>9
    static ModestTree::Util::UnityUtil::$$c* _get_$$9();
    // Set static field: static public readonly ModestTree.Util.UnityUtil/<>c <>9
    static void _set_$$9(ModestTree::Util::UnityUtil::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean> <>9__3_0
    static System::Func_2<UnityEngine::SceneManagement::Scene, bool>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.SceneManagement.Scene,System.Boolean> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::SceneManagement::Scene, bool>* value);
    // Get static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__15_0
    static System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* _get_$$9__15_0();
    // Set static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__15_0
    static void _set_$$9__15_0(System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* value);
    // Get static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__18_0
    static System::Func_2<UnityEngine::Component*, int>* _get_$$9__18_0();
    // Set static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__18_0
    static void _set_$$9__18_0(System::Func_2<UnityEngine::Component*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__19_0
    static System::Func_2<UnityEngine::Component*, int>* _get_$$9__19_0();
    // Set static field: static public System.Func`2<UnityEngine.Component,System.Int32> <>9__19_0
    static void _set_$$9__19_0(System::Func_2<UnityEngine::Component*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__22_0
    static System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* _get_$$9__22_0();
    // Set static field: static public System.Func`2<UnityEngine.Transform,UnityEngine.GameObject> <>9__22_0
    static void _set_$$9__22_0(System::Func_2<UnityEngine::Transform*, UnityEngine::GameObject*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__23_0
    static System::Func_2<UnityEngine::GameObject*, bool>* _get_$$9__23_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__23_0
    static void _set_$$9__23_0(System::Func_2<UnityEngine::GameObject*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x136AD90
    static void _cctor();
    // System.Boolean <get_AllLoadedScenes>b__3_0(UnityEngine.SceneManagement.Scene scene)
    // Offset: 0x136ADFC
    bool $get_AllLoadedScenes$b__3_0(UnityEngine::SceneManagement::Scene scene);
    // UnityEngine.GameObject <GetRootParentOrSelf>b__15_0(UnityEngine.Transform x)
    // Offset: 0x136AE28
    UnityEngine::GameObject* $GetRootParentOrSelf$b__15_0(UnityEngine::Transform* x);
    // System.Int32 <GetComponentsInChildrenTopDown>b__18_0(UnityEngine.Component x)
    // Offset: 0x136AE44
    int $GetComponentsInChildrenTopDown$b__18_0(UnityEngine::Component* x);
    // System.Int32 <GetComponentsInChildrenBottomUp>b__19_0(UnityEngine.Component x)
    // Offset: 0x136AEDC
    int $GetComponentsInChildrenBottomUp$b__19_0(UnityEngine::Component* x);
    // UnityEngine.GameObject <GetAllGameObjects>b__22_0(UnityEngine.Transform x)
    // Offset: 0x136AF74
    UnityEngine::GameObject* $GetAllGameObjects$b__22_0(UnityEngine::Transform* x);
    // System.Boolean <GetAllRootGameObjects>b__23_0(UnityEngine.GameObject x)
    // Offset: 0x136AF90
    bool $GetAllRootGameObjects$b__23_0(UnityEngine::GameObject* x);
    // public System.Void .ctor()
    // Offset: 0x136ADF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::UnityUtil::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$$c*, creationType>()));
    }
  }; // ModestTree.Util.UnityUtil/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$$c*, "ModestTree.Util", "UnityUtil/<>c");
