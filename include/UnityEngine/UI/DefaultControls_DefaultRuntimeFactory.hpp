// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.UI.DefaultControls
#include "UnityEngine/UI/DefaultControls.hpp"
// Including type: UnityEngine.UI.DefaultControls/IFactoryControls
#include "UnityEngine/UI/DefaultControls_IFactoryControls.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.DefaultControls/DefaultRuntimeFactory
  class DefaultControls::DefaultRuntimeFactory : public ::CsObject, public UnityEngine::UI::DefaultControls::IFactoryControls {
    public:
    // Get static field: static public UnityEngine.UI.DefaultControls/IFactoryControls Default
    static UnityEngine::UI::DefaultControls::IFactoryControls* _get_Default();
    // Set static field: static public UnityEngine.UI.DefaultControls/IFactoryControls Default
    static void _set_Default(UnityEngine::UI::DefaultControls::IFactoryControls* value);
    // static private System.Void .cctor()
    // Offset: 0xDF6870
    static void _cctor();
    // public UnityEngine.GameObject CreateGameObject(System.String name, System.Type[] components)
    // Offset: 0xDF67F4
    // Implemented from: UnityEngine.UI.DefaultControls/IFactoryControls
    // Base method: UnityEngine.GameObject IFactoryControls::CreateGameObject(System.String name, System.Type[] components)
    UnityEngine::GameObject* CreateGameObject(::CsString* name, ::Array<System::Type*>* components);
    // public System.Void .ctor()
    // Offset: 0xDF6868
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DefaultControls::DefaultRuntimeFactory* New_ctor();
  }; // UnityEngine.UI.DefaultControls/DefaultRuntimeFactory
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::DefaultControls::DefaultRuntimeFactory*, "UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory");
#pragma pack(pop)
