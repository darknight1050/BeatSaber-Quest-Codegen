// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DisappearingArrowControllerBase`1
#include "GlobalNamespace/DisappearingArrowControllerBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerGameNoteController
  class MultiplayerConnectedPlayerGameNoteController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerConnectedPlayerDisappearingArrowController
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerDisappearingArrowController : public GlobalNamespace::DisappearingArrowControllerBase_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> {
    public:
    // private MultiplayerConnectedPlayerGameNoteController _gameNoteController
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* gameNoteController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerDisappearingArrowController
    MultiplayerConnectedPlayerDisappearingArrowController(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* gameNoteController_ = {}) noexcept : gameNoteController{gameNoteController_} {}
    // protected MultiplayerConnectedPlayerGameNoteController get_gameNoteController()
    // Offset: 0xFA951C
    GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* get_gameNoteController();
    // public System.Void .ctor()
    // Offset: 0xFA9524
    // Implemented from: DisappearingArrowControllerBase`1
    // Base method: System.Void DisappearingArrowControllerBase_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerDisappearingArrowController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerDisappearingArrowController*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerDisappearingArrowController
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*, "", "MultiplayerConnectedPlayerDisappearingArrowController");
