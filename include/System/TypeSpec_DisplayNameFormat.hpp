// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeSpec
#include "System/TypeSpec.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeSpec/DisplayNameFormat
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TypeSpec::DisplayNameFormat/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DisplayNameFormat
    constexpr DisplayNameFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.TypeSpec/DisplayNameFormat Default
    static constexpr const int Default = 0;
    // Get static field: static public System.TypeSpec/DisplayNameFormat Default
    static System::TypeSpec::DisplayNameFormat _get_Default();
    // Set static field: static public System.TypeSpec/DisplayNameFormat Default
    static void _set_Default(System::TypeSpec::DisplayNameFormat value);
    // static field const value: static public System.TypeSpec/DisplayNameFormat WANT_ASSEMBLY
    static constexpr const int WANT_ASSEMBLY = 1;
    // Get static field: static public System.TypeSpec/DisplayNameFormat WANT_ASSEMBLY
    static System::TypeSpec::DisplayNameFormat _get_WANT_ASSEMBLY();
    // Set static field: static public System.TypeSpec/DisplayNameFormat WANT_ASSEMBLY
    static void _set_WANT_ASSEMBLY(System::TypeSpec::DisplayNameFormat value);
    // static field const value: static public System.TypeSpec/DisplayNameFormat NO_MODIFIERS
    static constexpr const int NO_MODIFIERS = 2;
    // Get static field: static public System.TypeSpec/DisplayNameFormat NO_MODIFIERS
    static System::TypeSpec::DisplayNameFormat _get_NO_MODIFIERS();
    // Set static field: static public System.TypeSpec/DisplayNameFormat NO_MODIFIERS
    static void _set_NO_MODIFIERS(System::TypeSpec::DisplayNameFormat value);
  }; // System.TypeSpec/DisplayNameFormat
  #pragma pack(pop)
  static check_size<sizeof(TypeSpec::DisplayNameFormat), 0 + sizeof(int)> __System_TypeSpec_DisplayNameFormatSizeCheck;
  static_assert(sizeof(TypeSpec::DisplayNameFormat) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TypeSpec::DisplayNameFormat, "System", "TypeSpec/DisplayNameFormat");
