// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveData/GameplayModifiers
  class PlayerSaveData::GameplayModifiers : public ::CsObject {
    public:
    // Nested type: GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType
    struct EnabledObstacleType;
    // Nested type: GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType
    struct EnergyType;
    // Nested type: GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed
    struct SongSpeed;
    // Autogenerated type: PlayerSaveData/GameplayModifiers/EnabledObstacleType
    struct EnabledObstacleType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType All
      static constexpr const int All = 0;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType All
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType _get_All();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType All
      static void _set_All(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType FullHeightOnly
      static constexpr const int FullHeightOnly = 1;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType FullHeightOnly
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType _get_FullHeightOnly();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType FullHeightOnly
      static void _set_FullHeightOnly(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType None
      static constexpr const int None = 2;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType None
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType _get_None();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnabledObstacleType None
      static void _set_None(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType value);
      // Creating value type constructor for type: EnabledObstacleType
      EnabledObstacleType(int value_ = {}) : value{value_} {}
    }; // PlayerSaveData/GameplayModifiers/EnabledObstacleType
    // Autogenerated type: PlayerSaveData/GameplayModifiers/EnergyType
    struct EnergyType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnergyType Bar
      static constexpr const int Bar = 0;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnergyType Bar
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType _get_Bar();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnergyType Bar
      static void _set_Bar(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/EnergyType Battery
      static constexpr const int Battery = 1;
      // Get static field: static public PlayerSaveData/GameplayModifiers/EnergyType Battery
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType _get_Battery();
      // Set static field: static public PlayerSaveData/GameplayModifiers/EnergyType Battery
      static void _set_Battery(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType value);
      // Creating value type constructor for type: EnergyType
      EnergyType(int value_ = {}) : value{value_} {}
    }; // PlayerSaveData/GameplayModifiers/EnergyType
    // Autogenerated type: PlayerSaveData/GameplayModifiers/SongSpeed
    struct SongSpeed : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public PlayerSaveData/GameplayModifiers/SongSpeed Normal
      static constexpr const int Normal = 0;
      // Get static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Normal
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed _get_Normal();
      // Set static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Normal
      static void _set_Normal(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/SongSpeed Faster
      static constexpr const int Faster = 1;
      // Get static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Faster
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed _get_Faster();
      // Set static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Faster
      static void _set_Faster(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed value);
      // static field const value: static public PlayerSaveData/GameplayModifiers/SongSpeed Slower
      static constexpr const int Slower = 2;
      // Get static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Slower
      static GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed _get_Slower();
      // Set static field: static public PlayerSaveData/GameplayModifiers/SongSpeed Slower
      static void _set_Slower(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed value);
      // Creating value type constructor for type: SongSpeed
      SongSpeed(int value_ = {}) : value{value_} {}
    }; // PlayerSaveData/GameplayModifiers/SongSpeed
    // public PlayerSaveData/GameplayModifiers/EnergyType energyType
    // Offset: 0x10
    GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType energyType;
    // public System.Boolean noFail
    // Offset: 0x14
    bool noFail;
    // public System.Boolean instaFail
    // Offset: 0x15
    bool instaFail;
    // public System.Boolean failOnSaberClash
    // Offset: 0x16
    bool failOnSaberClash;
    // public PlayerSaveData/GameplayModifiers/EnabledObstacleType enabledObstacleType
    // Offset: 0x18
    GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType enabledObstacleType;
    // public System.Boolean fastNotes
    // Offset: 0x1C
    bool fastNotes;
    // public System.Boolean strictAngles
    // Offset: 0x1D
    bool strictAngles;
    // public System.Boolean disappearingArrows
    // Offset: 0x1E
    bool disappearingArrows;
    // public System.Boolean ghostNotes
    // Offset: 0x1F
    bool ghostNotes;
    // public System.Boolean noBombs
    // Offset: 0x20
    bool noBombs;
    // public PlayerSaveData/GameplayModifiers/SongSpeed songSpeed
    // Offset: 0x24
    GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed songSpeed;
    // public System.Void .ctor()
    // Offset: 0xBC6E8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveData::GameplayModifiers* New_ctor();
  }; // PlayerSaveData/GameplayModifiers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GameplayModifiers*, "", "PlayerSaveData/GameplayModifiers");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnabledObstacleType, "", "PlayerSaveData/GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GameplayModifiers::EnergyType, "", "PlayerSaveData/GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GameplayModifiers::SongSpeed, "", "PlayerSaveData/GameplayModifiers/SongSpeed");
#pragma pack(pop)
