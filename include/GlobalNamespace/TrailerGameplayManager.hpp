// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: MainCamera
  class MainCamera;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: TrailerGameplayManager
  // [] Offset: FFFFFFFF
  class TrailerGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TrailerGameplayManager::$Start$d__4
    class $Start$d__4;
    // private System.Boolean _disableMainCamera
    // Size: 0x1
    // Offset: 0x18
    bool disableMainCamera;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disableMainCamera and: gameScenesManager
    char __padding0[0x7] = {};
    // [InjectAttribute] Offset: 0xDC7DD0
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC7DE0
    // private GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xDC7DF0
    // private MainCamera _mainCamera
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MainCamera* mainCamera;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainCamera*) == 0x8);
    // Creating value type constructor for type: TrailerGameplayManager
    TrailerGameplayManager(bool disableMainCamera_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::MainCamera* mainCamera_ = {}) noexcept : disableMainCamera{disableMainCamera_}, gameScenesManager{gameScenesManager_}, gameSongController{gameSongController_}, mainCamera{mainCamera_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Collections.IEnumerator Start()
    // Offset: 0xFEF62C
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0xFEF6D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrailerGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrailerGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrailerGameplayManager*, creationType>()));
    }
  }; // TrailerGameplayManager
  static check_size<sizeof(TrailerGameplayManager), 48 + sizeof(GlobalNamespace::MainCamera*)> __GlobalNamespace_TrailerGameplayManagerSizeCheck;
  static_assert(sizeof(TrailerGameplayManager) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailerGameplayManager*, "", "TrailerGameplayManager");
#pragma pack(pop)
