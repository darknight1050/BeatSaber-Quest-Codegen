// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IMultiplayerRichPresenceData
  class IMultiplayerRichPresenceData/*, public GlobalNamespace::IRichPresenceData*/ {
    public:
    // Creating value type constructor for type: IMultiplayerRichPresenceData
    IMultiplayerRichPresenceData() noexcept {}
    // Creating interface conversion operator: operator GlobalNamespace::IRichPresenceData
    operator GlobalNamespace::IRichPresenceData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRichPresenceData*>(this);
    }
    // public System.String get_multiplayerLobbyCode()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_multiplayerLobbyCode();
    // public System.Void set_multiplayerLobbyCode(System.String value)
    // Offset: 0xFFFFFFFF
    void set_multiplayerLobbyCode(::Il2CppString* value);
    // public System.Boolean get_isJoinable()
    // Offset: 0xFFFFFFFF
    bool get_isJoinable();
  }; // IMultiplayerRichPresenceData
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMultiplayerRichPresenceData*, "", "IMultiplayerRichPresenceData");
