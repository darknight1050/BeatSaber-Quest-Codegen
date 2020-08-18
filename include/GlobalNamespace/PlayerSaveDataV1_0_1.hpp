// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
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
  // Autogenerated type: PlayerSaveDataV1_0_1
  class PlayerSaveDataV1_0_1 : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::GameplayModifiers
    class GameplayModifiers;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings
    class PlayerSpecificSettings;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData
    class PlayerAllOverallStatsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerOverallStatsData
    class PlayerOverallStatsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerLevelStatsData
    class PlayerLevelStatsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::PlayerMissionStatsData
    class PlayerMissionStatsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData
    class AchievementsData;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer
    class LocalPlayer;
    // Nested type: GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer
    class GuestPlayer;
    // public System.String version
    // Offset: 0x10
    ::Il2CppString* version;
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/LocalPlayer> localPlayers
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::LocalPlayer*>* localPlayers;
    // public System.Collections.Generic.List`1<PlayerSaveDataV1_0_1/GuestPlayer> guestPlayers
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::PlayerSaveDataV1_0_1::GuestPlayer*>* guestPlayers;
    // public BeatmapDifficulty lastSelectedBeatmapDifficulty
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;
    // static field const value: static private BeatmapDifficulty kDefaulLastSelectedBeatmapDifficulty
    static constexpr const int kDefaulLastSelectedBeatmapDifficulty = 1;
    // Get static field: static private BeatmapDifficulty kDefaulLastSelectedBeatmapDifficulty
    static GlobalNamespace::BeatmapDifficulty _get_kDefaulLastSelectedBeatmapDifficulty();
    // Set static field: static private BeatmapDifficulty kDefaulLastSelectedBeatmapDifficulty
    static void _set_kDefaulLastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "";
    // Get static field: static public System.String kCurrentVersion
    static ::Il2CppString* _get_kCurrentVersion();
    // Set static field: static public System.String kCurrentVersion
    static void _set_kCurrentVersion(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0xB8F11C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveDataV1_0_1* New_ctor();
  }; // PlayerSaveDataV1_0_1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1*, "", "PlayerSaveDataV1_0_1");
#pragma pack(pop)
