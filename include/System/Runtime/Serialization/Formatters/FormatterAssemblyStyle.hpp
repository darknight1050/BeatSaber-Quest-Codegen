// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters
namespace System::Runtime::Serialization::Formatters {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C9681C
  struct FormatterAssemblyStyle/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FormatterAssemblyStyle
    constexpr FormatterAssemblyStyle(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Simple
    static constexpr const int Simple = 0;
    // Get static field: static public System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Simple
    static System::Runtime::Serialization::Formatters::FormatterAssemblyStyle _get_Simple();
    // Set static field: static public System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Simple
    static void _set_Simple(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);
    // static field const value: static public System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Full
    static constexpr const int Full = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Full
    static System::Runtime::Serialization::Formatters::FormatterAssemblyStyle _get_Full();
    // Set static field: static public System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Full
    static void _set_Full(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);
  }; // System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
  #pragma pack(pop)
  static check_size<sizeof(FormatterAssemblyStyle), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_FormatterAssemblyStyleSizeCheck;
  static_assert(sizeof(FormatterAssemblyStyle) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle, "System.Runtime.Serialization.Formatters", "FormatterAssemblyStyle");
