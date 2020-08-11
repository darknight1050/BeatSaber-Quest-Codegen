// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: ColorSchemesListSO
  class ColorSchemesListSO;
  // Forward declaring type: EnvironmentsListSO
  class EnvironmentsListSO;
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: PlayerData
  class PlayerData;
  // Forward declaring type: PlayerSaveData
  class PlayerSaveData;
  // Forward declaring type: PlayerSaveDataV1_0_1
  class PlayerSaveDataV1_0_1;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerDataFileManagerSO
  class PlayerDataFileManagerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Offset: 0x18
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // private ColorSchemesListSO _defaultColorSchemes
    // Offset: 0x20
    GlobalNamespace::ColorSchemesListSO* defaultColorSchemes;
    // private EnvironmentsListSO _allEnvironmentInfos
    // Offset: 0x28
    GlobalNamespace::EnvironmentsListSO* allEnvironmentInfos;
    // private EnvironmentTypeSO _normalEnvironmentType
    // Offset: 0x30
    GlobalNamespace::EnvironmentTypeSO* normalEnvironmentType;
    // private EnvironmentTypeSO _a360DegreesEnvironmentType
    // Offset: 0x38
    GlobalNamespace::EnvironmentTypeSO* a360DegreesEnvironmentType;
    // private BeatmapCharacteristicSO _defaultLastSelectedBeatmapCharacteristic
    // Offset: 0x40
    GlobalNamespace::BeatmapCharacteristicSO* defaultLastSelectedBeatmapCharacteristic;
    // static field const value: static private System.String kPlayerDataFileName
    static constexpr const char* kPlayerDataFileName = "PlayerData.dat";
    // Get static field: static private System.String kPlayerDataFileName
    static ::CsString* _get_kPlayerDataFileName();
    // Set static field: static private System.String kPlayerDataFileName
    static void _set_kPlayerDataFileName(::CsString* value);
    // static field const value: static private System.String kTempFileName
    static constexpr const char* kTempFileName = "PlayerData.dat.tmp";
    // Get static field: static private System.String kTempFileName
    static ::CsString* _get_kTempFileName();
    // Set static field: static private System.String kTempFileName
    static void _set_kTempFileName(::CsString* value);
    // static field const value: static private System.String kBackupFileName
    static constexpr const char* kBackupFileName = "PlayerData.dat.bak";
    // Get static field: static private System.String kBackupFileName
    static ::CsString* _get_kBackupFileName();
    // Set static field: static private System.String kBackupFileName
    static void _set_kBackupFileName(::CsString* value);
    // public System.Void Save(PlayerData playerData)
    // Offset: 0xBC60EC
    void Save(GlobalNamespace::PlayerData* playerData);
    // public PlayerData Load()
    // Offset: 0xBC7090
    GlobalNamespace::PlayerData* Load();
    // private PlayerData LoadFromJSONString(System.String jsonString)
    // Offset: 0xBC716C
    GlobalNamespace::PlayerData* LoadFromJSONString(::CsString* jsonString);
    // private PlayerData LoadFromCurrentVersion(PlayerSaveData playerSaveData)
    // Offset: 0xBC79DC
    GlobalNamespace::PlayerData* LoadFromCurrentVersion(GlobalNamespace::PlayerSaveData* playerSaveData);
    // private PlayerData LoadFromVersionV1_0_1(PlayerSaveDataV1_0_1 playerDataModelSaveData)
    // Offset: 0xBC73A8
    GlobalNamespace::PlayerData* LoadFromVersionV1_0_1(GlobalNamespace::PlayerSaveDataV1_0_1* playerDataModelSaveData);
    // public PlayerData CreateDefaultPlayerData()
    // Offset: 0xBC72DC
    GlobalNamespace::PlayerData* CreateDefaultPlayerData();
    // static public System.String GetLevelIdFromV_1_0_1LevelId(System.String oldLevelId, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xBC889C
    static ::CsString* GetLevelIdFromV_1_0_1LevelId(::CsString* oldLevelId, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // static public BeatmapCharacteristicSO GetBeatmapCharacteristicFromV_1_0_1LevelId(BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, System.String levelId)
    // Offset: 0xBC8774
    static GlobalNamespace::BeatmapCharacteristicSO* GetBeatmapCharacteristicFromV_1_0_1LevelId(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, ::CsString* levelId);
    // private OverrideEnvironmentSettings CreateDefaultOverrideEnvironmentSettings()
    // Offset: 0xBC8908
    GlobalNamespace::OverrideEnvironmentSettings* CreateDefaultOverrideEnvironmentSettings();
    // public System.Void .ctor()
    // Offset: 0xBC89C8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerDataFileManagerSO* New_ctor();
  }; // PlayerDataFileManagerSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataFileManagerSO*, "", "PlayerDataFileManagerSO");
#pragma pack(pop)
