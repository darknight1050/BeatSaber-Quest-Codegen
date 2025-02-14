// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuEnvironmentManager
#include "GlobalNamespace/MenuEnvironmentManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MenuEnvironmentManager/MenuEnvironmentObjects
  class MenuEnvironmentManager::MenuEnvironmentObjects : public ::Il2CppObject {
    public:
    // private MenuEnvironmentManager/MenuEnvironmentType _menuEnvironmentType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType menuEnvironmentType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType) == 0x4);
    // Padding between fields: menuEnvironmentType and: wrapper
    char __padding0[0x4] = {};
    // private UnityEngine.GameObject _wrapper
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* wrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: MenuEnvironmentObjects
    MenuEnvironmentObjects(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType menuEnvironmentType_ = {}, UnityEngine::GameObject* wrapper_ = {}) noexcept : menuEnvironmentType{menuEnvironmentType_}, wrapper{wrapper_} {}
    // public MenuEnvironmentManager/MenuEnvironmentType get_menuEnvironmentType()
    // Offset: 0x10DC56C
    GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType get_menuEnvironmentType();
    // public UnityEngine.GameObject get_wrapper()
    // Offset: 0x10DC574
    UnityEngine::GameObject* get_wrapper();
    // public System.Void .ctor()
    // Offset: 0x10DC57C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuEnvironmentManager::MenuEnvironmentObjects* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuEnvironmentManager::MenuEnvironmentObjects*, creationType>()));
    }
  }; // MenuEnvironmentManager/MenuEnvironmentObjects
  #pragma pack(pop)
  static check_size<sizeof(MenuEnvironmentManager::MenuEnvironmentObjects), 24 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_MenuEnvironmentManager_MenuEnvironmentObjectsSizeCheck;
  static_assert(sizeof(MenuEnvironmentManager::MenuEnvironmentObjects) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*, "", "MenuEnvironmentManager/MenuEnvironmentObjects");
