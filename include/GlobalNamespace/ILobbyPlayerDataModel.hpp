// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: ILevelGameplaySetupData
#include "GlobalNamespace/ILevelGameplaySetupData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel/*, public GlobalNamespace::ILevelGameplaySetupData*/ {
    public:
    // Creating value type constructor for type: ILobbyPlayerDataModel
    ILobbyPlayerDataModel() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelGameplaySetupData
    operator GlobalNamespace::ILevelGameplaySetupData() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelGameplaySetupData*>(this);
    }
    // public System.Boolean get_isActive()
    // Offset: 0xFFFFFFFF
    bool get_isActive();
    // public System.Void set_isActive(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isActive(bool value);
    // public System.Boolean get_isReady()
    // Offset: 0xFFFFFFFF
    bool get_isReady();
    // public System.Void set_isReady(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isReady(bool value);
    // public System.Boolean get_isInLobby()
    // Offset: 0xFFFFFFFF
    bool get_isInLobby();
    // public System.Void set_isInLobby(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_isInLobby(bool value);
  }; // ILobbyPlayerDataModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILobbyPlayerDataModel*, "", "ILobbyPlayerDataModel");
