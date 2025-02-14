// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Globalization.Unicode.SimpleCollator
#include "Mono/Globalization/Unicode/SimpleCollator.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.Globalization.Unicode.SimpleCollator/Escape
  struct SimpleCollator::Escape/*, public System::ValueType*/ {
    public:
    // public System.String Source
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* Source;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 Index
    // Size: 0x4
    // Offset: 0x8
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Start
    // Size: 0x4
    // Offset: 0xC
    int Start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 End
    // Size: 0x4
    // Offset: 0x10
    int End;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Optional
    // Size: 0x4
    // Offset: 0x14
    int Optional;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Escape
    constexpr Escape(::Il2CppString* Source_ = {}, int Index_ = {}, int Start_ = {}, int End_ = {}, int Optional_ = {}) noexcept : Source{Source_}, Index{Index_}, Start{Start_}, End{End_}, Optional{Optional_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Mono.Globalization.Unicode.SimpleCollator/Escape
  #pragma pack(pop)
  static check_size<sizeof(SimpleCollator::Escape), 20 + sizeof(int)> __Mono_Globalization_Unicode_SimpleCollator_EscapeSizeCheck;
  static_assert(sizeof(SimpleCollator::Escape) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::SimpleCollator::Escape, "Mono.Globalization.Unicode", "SimpleCollator/Escape");
