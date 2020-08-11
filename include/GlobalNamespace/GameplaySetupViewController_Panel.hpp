// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: GameplaySetupViewController
#include "GlobalNamespace/GameplaySetupViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRefreshable
  class IRefreshable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplaySetupViewController/Panel
  class GameplaySetupViewController::Panel : public ::CsObject {
    public:
    // public readonly System.String title
    // Offset: 0x10
    ::CsString* title;
    // public readonly IRefreshable refreshable
    // Offset: 0x18
    GlobalNamespace::IRefreshable* refreshable;
    // public readonly UnityEngine.GameObject gameObject
    // Offset: 0x20
    UnityEngine::GameObject* gameObject;
    // public System.Void .ctor(System.String title, IRefreshable refreshable, UnityEngine.GameObject gameObject)
    // Offset: 0xB4080C
    static GameplaySetupViewController::Panel* New_ctor(::CsString* title, GlobalNamespace::IRefreshable* refreshable, UnityEngine::GameObject* gameObject);
  }; // GameplaySetupViewController/Panel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplaySetupViewController::Panel*, "", "GameplaySetupViewController/Panel");
#pragma pack(pop)
