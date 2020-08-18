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
  // Skipping declaration: Width because it is already included!
  // Skipping declaration: FloorType because it is already included!
  // Skipping declaration: CeilingType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnvironmentSizeData
  class EnvironmentSizeData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::EnvironmentSizeData::Width
    struct Width;
    // Nested type: GlobalNamespace::EnvironmentSizeData::FloorType
    struct FloorType;
    // Nested type: GlobalNamespace::EnvironmentSizeData::CeilingType
    struct CeilingType;
    // Autogenerated type: EnvironmentSizeData/Width
    struct Width : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public EnvironmentSizeData/Width Normal
      static constexpr const int Normal = 0;
      // Get static field: static public EnvironmentSizeData/Width Normal
      static GlobalNamespace::EnvironmentSizeData::Width _get_Normal();
      // Set static field: static public EnvironmentSizeData/Width Normal
      static void _set_Normal(GlobalNamespace::EnvironmentSizeData::Width value);
      // static field const value: static public EnvironmentSizeData/Width Narrow
      static constexpr const int Narrow = 1;
      // Get static field: static public EnvironmentSizeData/Width Narrow
      static GlobalNamespace::EnvironmentSizeData::Width _get_Narrow();
      // Set static field: static public EnvironmentSizeData/Width Narrow
      static void _set_Narrow(GlobalNamespace::EnvironmentSizeData::Width value);
      // static field const value: static public EnvironmentSizeData/Width Circle
      static constexpr const int Circle = 2;
      // Get static field: static public EnvironmentSizeData/Width Circle
      static GlobalNamespace::EnvironmentSizeData::Width _get_Circle();
      // Set static field: static public EnvironmentSizeData/Width Circle
      static void _set_Circle(GlobalNamespace::EnvironmentSizeData::Width value);
      // Creating value type constructor for type: Width
      Width(int value_ = {}) : value{value_} {}
    }; // EnvironmentSizeData/Width
    // Autogenerated type: EnvironmentSizeData/FloorType
    struct FloorType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public EnvironmentSizeData/FloorType NoFloor
      static constexpr const int NoFloor = 0;
      // Get static field: static public EnvironmentSizeData/FloorType NoFloor
      static GlobalNamespace::EnvironmentSizeData::FloorType _get_NoFloor();
      // Set static field: static public EnvironmentSizeData/FloorType NoFloor
      static void _set_NoFloor(GlobalNamespace::EnvironmentSizeData::FloorType value);
      // static field const value: static public EnvironmentSizeData/FloorType CloseTo0
      static constexpr const int CloseTo0 = 1;
      // Get static field: static public EnvironmentSizeData/FloorType CloseTo0
      static GlobalNamespace::EnvironmentSizeData::FloorType _get_CloseTo0();
      // Set static field: static public EnvironmentSizeData/FloorType CloseTo0
      static void _set_CloseTo0(GlobalNamespace::EnvironmentSizeData::FloorType value);
      // Creating value type constructor for type: FloorType
      FloorType(int value_ = {}) : value{value_} {}
    }; // EnvironmentSizeData/FloorType
    // Autogenerated type: EnvironmentSizeData/CeilingType
    struct CeilingType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public EnvironmentSizeData/CeilingType NoCeiling
      static constexpr const int NoCeiling = 0;
      // Get static field: static public EnvironmentSizeData/CeilingType NoCeiling
      static GlobalNamespace::EnvironmentSizeData::CeilingType _get_NoCeiling();
      // Set static field: static public EnvironmentSizeData/CeilingType NoCeiling
      static void _set_NoCeiling(GlobalNamespace::EnvironmentSizeData::CeilingType value);
      // static field const value: static public EnvironmentSizeData/CeilingType LowCeiling
      static constexpr const int LowCeiling = 1;
      // Get static field: static public EnvironmentSizeData/CeilingType LowCeiling
      static GlobalNamespace::EnvironmentSizeData::CeilingType _get_LowCeiling();
      // Set static field: static public EnvironmentSizeData/CeilingType LowCeiling
      static void _set_LowCeiling(GlobalNamespace::EnvironmentSizeData::CeilingType value);
      // Creating value type constructor for type: CeilingType
      CeilingType(int value_ = {}) : value{value_} {}
    }; // EnvironmentSizeData/CeilingType
    // private EnvironmentSizeData/Width _width
    // Offset: 0x10
    GlobalNamespace::EnvironmentSizeData::Width width;
    // private EnvironmentSizeData/FloorType _floorType
    // Offset: 0x14
    GlobalNamespace::EnvironmentSizeData::FloorType floorType;
    // private EnvironmentSizeData/CeilingType _ceilingType
    // Offset: 0x18
    GlobalNamespace::EnvironmentSizeData::CeilingType ceilingType;
    // public EnvironmentSizeData/Width get_width()
    // Offset: 0x192F8CC
    GlobalNamespace::EnvironmentSizeData::Width get_width();
    // public EnvironmentSizeData/FloorType get_floorType()
    // Offset: 0x192F8D4
    GlobalNamespace::EnvironmentSizeData::FloorType get_floorType();
    // public EnvironmentSizeData/CeilingType get_ceilingType()
    // Offset: 0x192F8DC
    GlobalNamespace::EnvironmentSizeData::CeilingType get_ceilingType();
    // public System.Void .ctor()
    // Offset: 0x192F8E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EnvironmentSizeData* New_ctor();
  }; // EnvironmentSizeData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSizeData*, "", "EnvironmentSizeData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSizeData::Width, "", "EnvironmentSizeData/Width");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSizeData::FloorType, "", "EnvironmentSizeData/FloorType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSizeData::CeilingType, "", "EnvironmentSizeData/CeilingType");
#pragma pack(pop)
