// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro._HorizontalAlignmentOptions
  // [] Offset: FFFFFFFF
  struct _HorizontalAlignmentOptions/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: _HorizontalAlignmentOptions
    constexpr _HorizontalAlignmentOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro._HorizontalAlignmentOptions Left
    static constexpr const int Left = 1;
    // Get static field: static public TMPro._HorizontalAlignmentOptions Left
    static TMPro::_HorizontalAlignmentOptions _get_Left();
    // Set static field: static public TMPro._HorizontalAlignmentOptions Left
    static void _set_Left(TMPro::_HorizontalAlignmentOptions value);
    // static field const value: static public TMPro._HorizontalAlignmentOptions Center
    static constexpr const int Center = 2;
    // Get static field: static public TMPro._HorizontalAlignmentOptions Center
    static TMPro::_HorizontalAlignmentOptions _get_Center();
    // Set static field: static public TMPro._HorizontalAlignmentOptions Center
    static void _set_Center(TMPro::_HorizontalAlignmentOptions value);
    // static field const value: static public TMPro._HorizontalAlignmentOptions Right
    static constexpr const int Right = 4;
    // Get static field: static public TMPro._HorizontalAlignmentOptions Right
    static TMPro::_HorizontalAlignmentOptions _get_Right();
    // Set static field: static public TMPro._HorizontalAlignmentOptions Right
    static void _set_Right(TMPro::_HorizontalAlignmentOptions value);
    // static field const value: static public TMPro._HorizontalAlignmentOptions Justified
    static constexpr const int Justified = 8;
    // Get static field: static public TMPro._HorizontalAlignmentOptions Justified
    static TMPro::_HorizontalAlignmentOptions _get_Justified();
    // Set static field: static public TMPro._HorizontalAlignmentOptions Justified
    static void _set_Justified(TMPro::_HorizontalAlignmentOptions value);
    // static field const value: static public TMPro._HorizontalAlignmentOptions Flush
    static constexpr const int Flush = 16;
    // Get static field: static public TMPro._HorizontalAlignmentOptions Flush
    static TMPro::_HorizontalAlignmentOptions _get_Flush();
    // Set static field: static public TMPro._HorizontalAlignmentOptions Flush
    static void _set_Flush(TMPro::_HorizontalAlignmentOptions value);
    // static field const value: static public TMPro._HorizontalAlignmentOptions Geometry
    static constexpr const int Geometry = 32;
    // Get static field: static public TMPro._HorizontalAlignmentOptions Geometry
    static TMPro::_HorizontalAlignmentOptions _get_Geometry();
    // Set static field: static public TMPro._HorizontalAlignmentOptions Geometry
    static void _set_Geometry(TMPro::_HorizontalAlignmentOptions value);
  }; // TMPro._HorizontalAlignmentOptions
  #pragma pack(pop)
  static check_size<sizeof(_HorizontalAlignmentOptions), 0 + sizeof(int)> __TMPro__HorizontalAlignmentOptionsSizeCheck;
  static_assert(sizeof(_HorizontalAlignmentOptions) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::_HorizontalAlignmentOptions, "TMPro", "_HorizontalAlignmentOptions");
