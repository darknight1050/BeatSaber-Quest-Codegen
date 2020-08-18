// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: EnergyType because it is already included!
  // Skipping declaration: EnabledObstacleType because it is already included!
  // Skipping declaration: SongSpeed because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifiers
  class GameplayModifiers : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::GameplayModifiers::EnabledObstacleType
    struct EnabledObstacleType;
    // Nested type: GlobalNamespace::GameplayModifiers::EnergyType
    struct EnergyType;
    // Nested type: GlobalNamespace::GameplayModifiers::SongSpeed
    struct SongSpeed;
    // Autogenerated type: GameplayModifiers/EnabledObstacleType
    struct EnabledObstacleType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public GameplayModifiers/EnabledObstacleType All
      static constexpr const int All = 0;
      // Get static field: static public GameplayModifiers/EnabledObstacleType All
      static GlobalNamespace::GameplayModifiers::EnabledObstacleType _get_All();
      // Set static field: static public GameplayModifiers/EnabledObstacleType All
      static void _set_All(GlobalNamespace::GameplayModifiers::EnabledObstacleType value);
      // static field const value: static public GameplayModifiers/EnabledObstacleType FullHeightOnly
      static constexpr const int FullHeightOnly = 1;
      // Get static field: static public GameplayModifiers/EnabledObstacleType FullHeightOnly
      static GlobalNamespace::GameplayModifiers::EnabledObstacleType _get_FullHeightOnly();
      // Set static field: static public GameplayModifiers/EnabledObstacleType FullHeightOnly
      static void _set_FullHeightOnly(GlobalNamespace::GameplayModifiers::EnabledObstacleType value);
      // static field const value: static public GameplayModifiers/EnabledObstacleType NoObstacles
      static constexpr const int NoObstacles = 2;
      // Get static field: static public GameplayModifiers/EnabledObstacleType NoObstacles
      static GlobalNamespace::GameplayModifiers::EnabledObstacleType _get_NoObstacles();
      // Set static field: static public GameplayModifiers/EnabledObstacleType NoObstacles
      static void _set_NoObstacles(GlobalNamespace::GameplayModifiers::EnabledObstacleType value);
      // Creating value type constructor for type: EnabledObstacleType
      EnabledObstacleType(int value_ = {}) : value{value_} {}
    }; // GameplayModifiers/EnabledObstacleType
    // Autogenerated type: GameplayModifiers/EnergyType
    struct EnergyType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public GameplayModifiers/EnergyType Bar
      static constexpr const int Bar = 0;
      // Get static field: static public GameplayModifiers/EnergyType Bar
      static GlobalNamespace::GameplayModifiers::EnergyType _get_Bar();
      // Set static field: static public GameplayModifiers/EnergyType Bar
      static void _set_Bar(GlobalNamespace::GameplayModifiers::EnergyType value);
      // static field const value: static public GameplayModifiers/EnergyType Battery
      static constexpr const int Battery = 1;
      // Get static field: static public GameplayModifiers/EnergyType Battery
      static GlobalNamespace::GameplayModifiers::EnergyType _get_Battery();
      // Set static field: static public GameplayModifiers/EnergyType Battery
      static void _set_Battery(GlobalNamespace::GameplayModifiers::EnergyType value);
      // Creating value type constructor for type: EnergyType
      EnergyType(int value_ = {}) : value{value_} {}
    }; // GameplayModifiers/EnergyType
    // Autogenerated type: GameplayModifiers/SongSpeed
    struct SongSpeed : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public GameplayModifiers/SongSpeed Normal
      static constexpr const int Normal = 0;
      // Get static field: static public GameplayModifiers/SongSpeed Normal
      static GlobalNamespace::GameplayModifiers::SongSpeed _get_Normal();
      // Set static field: static public GameplayModifiers/SongSpeed Normal
      static void _set_Normal(GlobalNamespace::GameplayModifiers::SongSpeed value);
      // static field const value: static public GameplayModifiers/SongSpeed Faster
      static constexpr const int Faster = 1;
      // Get static field: static public GameplayModifiers/SongSpeed Faster
      static GlobalNamespace::GameplayModifiers::SongSpeed _get_Faster();
      // Set static field: static public GameplayModifiers/SongSpeed Faster
      static void _set_Faster(GlobalNamespace::GameplayModifiers::SongSpeed value);
      // static field const value: static public GameplayModifiers/SongSpeed Slower
      static constexpr const int Slower = 2;
      // Get static field: static public GameplayModifiers/SongSpeed Slower
      static GlobalNamespace::GameplayModifiers::SongSpeed _get_Slower();
      // Set static field: static public GameplayModifiers/SongSpeed Slower
      static void _set_Slower(GlobalNamespace::GameplayModifiers::SongSpeed value);
      // Creating value type constructor for type: SongSpeed
      SongSpeed(int value_ = {}) : value{value_} {}
    }; // GameplayModifiers/SongSpeed
    // private GameplayModifiers/EnergyType _energyType
    // Offset: 0x10
    GlobalNamespace::GameplayModifiers::EnergyType energyType;
    // private System.Boolean _noFail
    // Offset: 0x14
    bool noFail;
    // private System.Boolean _demoNoFail
    // Offset: 0x15
    bool demoNoFail;
    // private System.Boolean _instaFail
    // Offset: 0x16
    bool instaFail;
    // private System.Boolean _failOnSaberClash
    // Offset: 0x17
    bool failOnSaberClash;
    // private GameplayModifiers/EnabledObstacleType _enabledObstacleType
    // Offset: 0x18
    GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstacleType;
    // private System.Boolean _demoNoObstacles
    // Offset: 0x1C
    bool demoNoObstacles;
    // private System.Boolean _noBombs
    // Offset: 0x1D
    bool noBombs;
    // private System.Boolean _fastNotes
    // Offset: 0x1E
    bool fastNotes;
    // private System.Boolean _strictAngles
    // Offset: 0x1F
    bool strictAngles;
    // private System.Boolean _disappearingArrows
    // Offset: 0x20
    bool disappearingArrows;
    // private System.Boolean _ghostNotes
    // Offset: 0x21
    bool ghostNotes;
    // private GameplayModifiers/SongSpeed _songSpeed
    // Offset: 0x24
    GlobalNamespace::GameplayModifiers::SongSpeed songSpeed;
    // private System.Boolean _noArrows
    // Offset: 0x28
    bool noArrows;
    // public GameplayModifiers/EnergyType get_energyType()
    // Offset: 0xB3F284
    GlobalNamespace::GameplayModifiers::EnergyType get_energyType();
    // public System.Void set_energyType(GameplayModifiers/EnergyType value)
    // Offset: 0xB3F28C
    void set_energyType(GlobalNamespace::GameplayModifiers::EnergyType value);
    // public System.Boolean get_batteryEnergy()
    // Offset: 0xB3F294
    bool get_batteryEnergy();
    // public System.Void set_batteryEnergy(System.Boolean value)
    // Offset: 0xB3F2A4
    void set_batteryEnergy(bool value);
    // public System.Boolean get_noFail()
    // Offset: 0xB3F2D0
    bool get_noFail();
    // public System.Void set_noFail(System.Boolean value)
    // Offset: 0xB3F2D8
    void set_noFail(bool value);
    // public System.Boolean get_demoNoFail()
    // Offset: 0xB3F2E4
    bool get_demoNoFail();
    // public System.Void set_demoNoFail(System.Boolean value)
    // Offset: 0xB3F2EC
    void set_demoNoFail(bool value);
    // public System.Boolean get_instaFail()
    // Offset: 0xB3F2F8
    bool get_instaFail();
    // public System.Void set_instaFail(System.Boolean value)
    // Offset: 0xB3F300
    void set_instaFail(bool value);
    // public System.Boolean get_failOnSaberClash()
    // Offset: 0xB3F30C
    bool get_failOnSaberClash();
    // public System.Void set_failOnSaberClash(System.Boolean value)
    // Offset: 0xB3F314
    void set_failOnSaberClash(bool value);
    // public GameplayModifiers/EnabledObstacleType get_enabledObstacleType()
    // Offset: 0xB3F320
    GlobalNamespace::GameplayModifiers::EnabledObstacleType get_enabledObstacleType();
    // public System.Void set_enabledObstacleType(GameplayModifiers/EnabledObstacleType value)
    // Offset: 0xB3F328
    void set_enabledObstacleType(GlobalNamespace::GameplayModifiers::EnabledObstacleType value);
    // public System.Boolean get_noObstacles()
    // Offset: 0xB3F330
    bool get_noObstacles();
    // public System.Void set_noObstacles(System.Boolean value)
    // Offset: 0xB3F340
    void set_noObstacles(bool value);
    // public System.Boolean get_demoNoObstacles()
    // Offset: 0xB3F364
    bool get_demoNoObstacles();
    // public System.Void set_demoNoObstacles(System.Boolean value)
    // Offset: 0xB3F36C
    void set_demoNoObstacles(bool value);
    // public System.Boolean get_fastNotes()
    // Offset: 0xB3F378
    bool get_fastNotes();
    // public System.Void set_fastNotes(System.Boolean value)
    // Offset: 0xB3F380
    void set_fastNotes(bool value);
    // public System.Boolean get_strictAngles()
    // Offset: 0xB3F38C
    bool get_strictAngles();
    // public System.Void set_strictAngles(System.Boolean value)
    // Offset: 0xB3F394
    void set_strictAngles(bool value);
    // public System.Boolean get_disappearingArrows()
    // Offset: 0xB3F3A0
    bool get_disappearingArrows();
    // public System.Void set_disappearingArrows(System.Boolean value)
    // Offset: 0xB3F3A8
    void set_disappearingArrows(bool value);
    // public System.Boolean get_ghostNotes()
    // Offset: 0xB3F3B4
    bool get_ghostNotes();
    // public System.Void set_ghostNotes(System.Boolean value)
    // Offset: 0xB3F3BC
    void set_ghostNotes(bool value);
    // public System.Boolean get_noBombs()
    // Offset: 0xB3F3C8
    bool get_noBombs();
    // public System.Void set_noBombs(System.Boolean value)
    // Offset: 0xB3F3D0
    void set_noBombs(bool value);
    // public GameplayModifiers/SongSpeed get_songSpeed()
    // Offset: 0xB3F3DC
    GlobalNamespace::GameplayModifiers::SongSpeed get_songSpeed();
    // public System.Void set_songSpeed(GameplayModifiers/SongSpeed value)
    // Offset: 0xB3F3E4
    void set_songSpeed(GlobalNamespace::GameplayModifiers::SongSpeed value);
    // public System.Single get_songSpeedMul()
    // Offset: 0xB3EE20
    float get_songSpeedMul();
    // public System.Boolean get_noArrows()
    // Offset: 0xB3F3EC
    bool get_noArrows();
    // public System.Void set_noArrows(System.Boolean value)
    // Offset: 0xB3F3F4
    void set_noArrows(bool value);
    // static public GameplayModifiers get_defaultModifiers()
    // Offset: 0xB3F400
    static GlobalNamespace::GameplayModifiers* get_defaultModifiers();
    // public System.Void .ctor(GameplayModifiers gameplayModifiers)
    // Offset: 0xB3F4F4
    static GameplayModifiers* New_ctor(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void ResetToDefault()
    // Offset: 0xB3F4D8
    void ResetToDefault();
    // public System.Boolean IsWithoutModifiers()
    // Offset: 0xB3F590
    bool IsWithoutModifiers();
    // public System.Void .ctor()
    // Offset: 0xB3F49C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GameplayModifiers* New_ctor();
  }; // GameplayModifiers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiers*, "", "GameplayModifiers");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiers::EnabledObstacleType, "", "GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiers::EnergyType, "", "GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiers::SongSpeed, "", "GameplayModifiers/SongSpeed");
#pragma pack(pop)
