// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VersionSaveData
#include "GlobalNamespace/VersionSaveData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveData
  class PlayerSaveData : public GlobalNamespace::VersionSaveData {
    public:
    // Nested type: GlobalNamespace::PlayerSaveData::GameplayModifiers
    class GameplayModifiers;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerSpecificSettings
    class PlayerSpecificSettings;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData
    class PlayerAllOverallStatsData;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerOverallStatsData
    class PlayerOverallStatsData;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerLevelStatsData
    class PlayerLevelStatsData;
    // Nested type: GlobalNamespace::PlayerSaveData::PlayerMissionStatsData
    class PlayerMissionStatsData;
    // Nested type: GlobalNamespace::PlayerSaveData::PracticeSettings
    class PracticeSettings;
    // Nested type: GlobalNamespace::PlayerSaveData::ColorScheme
    class ColorScheme;
    // Nested type: GlobalNamespace::PlayerSaveData::ColorSchemesSettings
    class ColorSchemesSettings;
    // Nested type: GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings
    class OverrideEnvironmentSettings;
    // Nested type: GlobalNamespace::PlayerSaveData::GuestPlayer
    class GuestPlayer;
    // Nested type: GlobalNamespace::PlayerSaveData::LocalPlayer
    class LocalPlayer;
    // public System.Collections.Generic.List`1<PlayerSaveData/LocalPlayer> localPlayers
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::LocalPlayer*>* localPlayers;
    // public System.Collections.Generic.List`1<PlayerSaveData/GuestPlayer> guestPlayers
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveData::GuestPlayer*>* guestPlayers;
    // static field const value: static public System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "2.0.6";
    // Get static field: static public System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static public System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1920BBC
    // Implemented from: VersionSaveData
    // Base method: System.Void VersionSaveData::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerSaveData* New_ctor();
  }; // PlayerSaveData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData*, "", "PlayerSaveData");
#pragma pack(pop)
