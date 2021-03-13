// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ILobbyGameStateController
#include "GlobalNamespace/ILobbyGameStateController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ILobbyHostGameStateController
  // [] Offset: FFFFFFFF
  class ILobbyHostGameStateController/*, public GlobalNamespace::ILobbyGameStateController*/ {
    public:
    // Creating value type constructor for type: ILobbyHostGameStateController
    ILobbyHostGameStateController() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::ILobbyGameStateController
    operator GlobalNamespace::ILobbyGameStateController() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILobbyGameStateController*>(this);
    }
    // public System.Void StartGame()
    // Offset: 0xFFFFFFFF
    void StartGame_NEW();
    // public System.Void CancelGame()
    // Offset: 0xFFFFFFFF
    void CancelGame_NEW();
  }; // ILobbyHostGameStateController
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILobbyHostGameStateController*, "", "ILobbyHostGameStateController");
