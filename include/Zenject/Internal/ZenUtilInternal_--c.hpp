// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ZenUtilInternal
#include "Zenject/Internal/ZenUtilInternal.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SceneContext
  class SceneContext;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Autogenerated type: Zenject.Internal.ZenUtilInternal/<>c
  class ZenUtilInternal::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Zenject.Internal.ZenUtilInternal/<>c <>9
    static Zenject::Internal::ZenUtilInternal::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.Internal.ZenUtilInternal/<>c <>9
    static void _set_$$9(Zenject::Internal::ZenUtilInternal::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>> <>9__3_0
    static System::Func_2<UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<Zenject.SceneContext>> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>*>* value);
    // Get static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__10_0
    static System::Func_2<UnityEngine::GameObject*, bool>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<UnityEngine.GameObject,System.Boolean> <>9__10_0
    static void _set_$$9__10_0(System::Func_2<UnityEngine::GameObject*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0xF1DC84
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<Zenject.SceneContext> <GetAllSceneContexts>b__3_0(UnityEngine.GameObject root)
    // Offset: 0xF1DCF4
    System::Collections::Generic::IEnumerable_1<Zenject::SceneContext*>* $GetAllSceneContexts$b__3_0(UnityEngine::GameObject* root);
    // System.Boolean <GetRootGameObjects>b__10_0(UnityEngine.GameObject x)
    // Offset: 0xF1DD4C
    bool $GetRootGameObjects$b__10_0(UnityEngine::GameObject* x);
    // public System.Void .ctor()
    // Offset: 0xF1DCEC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ZenUtilInternal::$$c* New_ctor();
  }; // Zenject.Internal.ZenUtilInternal/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenUtilInternal::$$c*, "Zenject.Internal", "ZenUtilInternal/<>c");
#pragma pack(pop)
