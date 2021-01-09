// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.StackedController
#include "HMUI/StackedController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  // Autogenerated type: GameLobbyViewController
  // [] Offset: FFFFFFFF
  class GameLobbyViewController : public HMUI::StackedController {
    public:
    // Creating value type constructor for type: GameLobbyViewController
    GameLobbyViewController() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1A19590
    // Implemented from: HMUI.StackedController
    // Base method: System.Void StackedController::.ctor()
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameLobbyViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameLobbyViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameLobbyViewController*, creationType>()));
    }
  }; // GameLobbyViewController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameLobbyViewController*, "", "GameLobbyViewController");
#pragma pack(pop)
