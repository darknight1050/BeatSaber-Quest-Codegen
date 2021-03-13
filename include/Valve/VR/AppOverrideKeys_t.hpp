// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Valve.VR.AppOverrideKeys_t
  // [] Offset: FFFFFFFF
  struct AppOverrideKeys_t/*, public System::ValueType*/ {
    public:
    // public System.IntPtr pchKey
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr pchKey;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr pchValue
    // Size: 0x8
    // Offset: 0x8
    System::IntPtr pchValue;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: AppOverrideKeys_t
    constexpr AppOverrideKeys_t(System::IntPtr pchKey_ = {}, System::IntPtr pchValue_ = {}) noexcept : pchKey{pchKey_}, pchValue{pchValue_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Valve.VR.AppOverrideKeys_t
  #pragma pack(pop)
  static check_size<sizeof(AppOverrideKeys_t), 8 + sizeof(System::IntPtr)> __Valve_VR_AppOverrideKeys_tSizeCheck;
  static_assert(sizeof(AppOverrideKeys_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::AppOverrideKeys_t, "Valve.VR", "AppOverrideKeys_t");
