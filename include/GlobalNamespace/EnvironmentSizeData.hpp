// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: FloorType because it is already included!
  // Skipping declaration: CeilingType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentSizeData
  // [] Offset: FFFFFFFF
  class EnvironmentSizeData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::EnvironmentSizeData::FloorType
    struct FloorType;
    // Nested type: GlobalNamespace::EnvironmentSizeData::CeilingType
    struct CeilingType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EnvironmentSizeData/FloorType
    // [] Offset: FFFFFFFF
    struct FloorType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: FloorType
      constexpr FloorType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
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
    }; // EnvironmentSizeData/FloorType
    #pragma pack(pop)
    static check_size<sizeof(EnvironmentSizeData::FloorType), 0 + sizeof(int)> __GlobalNamespace_EnvironmentSizeData_FloorTypeSizeCheck;
    static_assert(sizeof(EnvironmentSizeData::FloorType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EnvironmentSizeData/CeilingType
    // [] Offset: FFFFFFFF
    struct CeilingType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: CeilingType
      constexpr CeilingType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
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
    }; // EnvironmentSizeData/CeilingType
    #pragma pack(pop)
    static check_size<sizeof(EnvironmentSizeData::CeilingType), 0 + sizeof(int)> __GlobalNamespace_EnvironmentSizeData_CeilingTypeSizeCheck;
    static_assert(sizeof(EnvironmentSizeData::CeilingType) == 0x4);
    // private EnvironmentSizeData/FloorType _floorType
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::EnvironmentSizeData::FloorType floorType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentSizeData::FloorType) == 0x4);
    // private EnvironmentSizeData/CeilingType _ceilingType
    // Size: 0x4
    // Offset: 0x14
    GlobalNamespace::EnvironmentSizeData::CeilingType ceilingType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentSizeData::CeilingType) == 0x4);
    // Creating value type constructor for type: EnvironmentSizeData
    EnvironmentSizeData(GlobalNamespace::EnvironmentSizeData::FloorType floorType_ = {}, GlobalNamespace::EnvironmentSizeData::CeilingType ceilingType_ = {}) noexcept : floorType{floorType_}, ceilingType{ceilingType_} {}
    // public EnvironmentSizeData/FloorType get_floorType()
    // Offset: 0xF2889C
    GlobalNamespace::EnvironmentSizeData::FloorType get_floorType();
    // public EnvironmentSizeData/CeilingType get_ceilingType()
    // Offset: 0xF288A4
    GlobalNamespace::EnvironmentSizeData::CeilingType get_ceilingType();
    // public System.Void .ctor()
    // Offset: 0xF288AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentSizeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentSizeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentSizeData*, creationType>()));
    }
  }; // EnvironmentSizeData
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentSizeData), 20 + sizeof(GlobalNamespace::EnvironmentSizeData::CeilingType)> __GlobalNamespace_EnvironmentSizeDataSizeCheck;
  static_assert(sizeof(EnvironmentSizeData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSizeData*, "", "EnvironmentSizeData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSizeData::FloorType, "", "EnvironmentSizeData/FloorType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSizeData::CeilingType, "", "EnvironmentSizeData/CeilingType");
