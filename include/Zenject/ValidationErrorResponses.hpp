// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ValidationErrorResponses
  // [] Offset: FFFFFFFF
  struct ValidationErrorResponses/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ValidationErrorResponses
    constexpr ValidationErrorResponses(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.ValidationErrorResponses Log
    static constexpr const int Log = 0;
    // Get static field: static public Zenject.ValidationErrorResponses Log
    static Zenject::ValidationErrorResponses _get_Log();
    // Set static field: static public Zenject.ValidationErrorResponses Log
    static void _set_Log(Zenject::ValidationErrorResponses value);
    // static field const value: static public Zenject.ValidationErrorResponses Throw
    static constexpr const int Throw = 1;
    // Get static field: static public Zenject.ValidationErrorResponses Throw
    static Zenject::ValidationErrorResponses _get_Throw();
    // Set static field: static public Zenject.ValidationErrorResponses Throw
    static void _set_Throw(Zenject::ValidationErrorResponses value);
  }; // Zenject.ValidationErrorResponses
  #pragma pack(pop)
  static check_size<sizeof(ValidationErrorResponses), 0 + sizeof(int)> __Zenject_ValidationErrorResponsesSizeCheck;
  static_assert(sizeof(ValidationErrorResponses) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationErrorResponses, "Zenject", "ValidationErrorResponses");
