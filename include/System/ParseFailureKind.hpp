// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ParseFailureKind
  // [] Offset: FFFFFFFF
  struct ParseFailureKind/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ParseFailureKind
    constexpr ParseFailureKind(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ParseFailureKind None
    static constexpr const int None = 0;
    // Get static field: static public System.ParseFailureKind None
    static System::ParseFailureKind _get_None();
    // Set static field: static public System.ParseFailureKind None
    static void _set_None(System::ParseFailureKind value);
    // static field const value: static public System.ParseFailureKind ArgumentNull
    static constexpr const int ArgumentNull = 1;
    // Get static field: static public System.ParseFailureKind ArgumentNull
    static System::ParseFailureKind _get_ArgumentNull();
    // Set static field: static public System.ParseFailureKind ArgumentNull
    static void _set_ArgumentNull(System::ParseFailureKind value);
    // static field const value: static public System.ParseFailureKind Format
    static constexpr const int Format = 2;
    // Get static field: static public System.ParseFailureKind Format
    static System::ParseFailureKind _get_Format();
    // Set static field: static public System.ParseFailureKind Format
    static void _set_Format(System::ParseFailureKind value);
    // static field const value: static public System.ParseFailureKind FormatWithParameter
    static constexpr const int FormatWithParameter = 3;
    // Get static field: static public System.ParseFailureKind FormatWithParameter
    static System::ParseFailureKind _get_FormatWithParameter();
    // Set static field: static public System.ParseFailureKind FormatWithParameter
    static void _set_FormatWithParameter(System::ParseFailureKind value);
    // static field const value: static public System.ParseFailureKind FormatBadDateTimeCalendar
    static constexpr const int FormatBadDateTimeCalendar = 4;
    // Get static field: static public System.ParseFailureKind FormatBadDateTimeCalendar
    static System::ParseFailureKind _get_FormatBadDateTimeCalendar();
    // Set static field: static public System.ParseFailureKind FormatBadDateTimeCalendar
    static void _set_FormatBadDateTimeCalendar(System::ParseFailureKind value);
  }; // System.ParseFailureKind
  #pragma pack(pop)
  static check_size<sizeof(ParseFailureKind), 0 + sizeof(int)> __System_ParseFailureKindSizeCheck;
  static_assert(sizeof(ParseFailureKind) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ParseFailureKind, "System", "ParseFailureKind");
