// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: MenuEnvironmentType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: MenuEnvironmentManager
  class MenuEnvironmentManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType
    struct MenuEnvironmentType;
    // Nested type: GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects
    class MenuEnvironmentObjects;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MenuEnvironmentManager/MenuEnvironmentType
    struct MenuEnvironmentType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MenuEnvironmentType
      constexpr MenuEnvironmentType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MenuEnvironmentManager/MenuEnvironmentType None
      static constexpr const int None = 0;
      // Get static field: static public MenuEnvironmentManager/MenuEnvironmentType None
      static GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType _get_None();
      // Set static field: static public MenuEnvironmentManager/MenuEnvironmentType None
      static void _set_None(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType value);
      // static field const value: static public MenuEnvironmentManager/MenuEnvironmentType Default
      static constexpr const int Default = 1;
      // Get static field: static public MenuEnvironmentManager/MenuEnvironmentType Default
      static GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType _get_Default();
      // Set static field: static public MenuEnvironmentManager/MenuEnvironmentType Default
      static void _set_Default(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType value);
      // static field const value: static public MenuEnvironmentManager/MenuEnvironmentType Lobby
      static constexpr const int Lobby = 2;
      // Get static field: static public MenuEnvironmentManager/MenuEnvironmentType Lobby
      static GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType _get_Lobby();
      // Set static field: static public MenuEnvironmentManager/MenuEnvironmentType Lobby
      static void _set_Lobby(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType value);
    }; // MenuEnvironmentManager/MenuEnvironmentType
    #pragma pack(pop)
    static check_size<sizeof(MenuEnvironmentManager::MenuEnvironmentType), 0 + sizeof(int)> __GlobalNamespace_MenuEnvironmentManager_MenuEnvironmentTypeSizeCheck;
    static_assert(sizeof(MenuEnvironmentManager::MenuEnvironmentType) == 0x4);
    // private MenuEnvironmentManager/MenuEnvironmentObjects[] _data
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*>* data;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*>*) == 0x8);
    // private MenuEnvironmentManager/MenuEnvironmentType _prevMenuEnvironmentType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType prevMenuEnvironmentType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType) == 0x4);
    // Creating value type constructor for type: MenuEnvironmentManager
    MenuEnvironmentManager(::Array<GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentObjects*>* data_ = {}, GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType prevMenuEnvironmentType_ = {}) noexcept : data{data_}, prevMenuEnvironmentType{prevMenuEnvironmentType_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x10DC3AC
    void Start();
    // public System.Void ShowEnvironmentType(MenuEnvironmentManager/MenuEnvironmentType menuEnvironmentType)
    // Offset: 0x10DC3B4
    void ShowEnvironmentType(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType menuEnvironmentType);
    // public System.Void .ctor()
    // Offset: 0x10DC564
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuEnvironmentManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuEnvironmentManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuEnvironmentManager*, creationType>()));
    }
  }; // MenuEnvironmentManager
  #pragma pack(pop)
  static check_size<sizeof(MenuEnvironmentManager), 32 + sizeof(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType)> __GlobalNamespace_MenuEnvironmentManagerSizeCheck;
  static_assert(sizeof(MenuEnvironmentManager) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuEnvironmentManager*, "", "MenuEnvironmentManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentType, "", "MenuEnvironmentManager/MenuEnvironmentType");
