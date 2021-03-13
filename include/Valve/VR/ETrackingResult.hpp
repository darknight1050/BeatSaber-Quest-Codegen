// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.ETrackingResult
  // [] Offset: FFFFFFFF
  struct ETrackingResult/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ETrackingResult
    constexpr ETrackingResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.ETrackingResult Uninitialized
    static constexpr const int Uninitialized = 1;
    // Get static field: static public Valve.VR.ETrackingResult Uninitialized
    static Valve::VR::ETrackingResult _get_Uninitialized();
    // Set static field: static public Valve.VR.ETrackingResult Uninitialized
    static void _set_Uninitialized(Valve::VR::ETrackingResult value);
    // static field const value: static public Valve.VR.ETrackingResult Calibrating_InProgress
    static constexpr const int Calibrating_InProgress = 100;
    // Get static field: static public Valve.VR.ETrackingResult Calibrating_InProgress
    static Valve::VR::ETrackingResult _get_Calibrating_InProgress();
    // Set static field: static public Valve.VR.ETrackingResult Calibrating_InProgress
    static void _set_Calibrating_InProgress(Valve::VR::ETrackingResult value);
    // static field const value: static public Valve.VR.ETrackingResult Calibrating_OutOfRange
    static constexpr const int Calibrating_OutOfRange = 101;
    // Get static field: static public Valve.VR.ETrackingResult Calibrating_OutOfRange
    static Valve::VR::ETrackingResult _get_Calibrating_OutOfRange();
    // Set static field: static public Valve.VR.ETrackingResult Calibrating_OutOfRange
    static void _set_Calibrating_OutOfRange(Valve::VR::ETrackingResult value);
    // static field const value: static public Valve.VR.ETrackingResult Running_OK
    static constexpr const int Running_OK = 200;
    // Get static field: static public Valve.VR.ETrackingResult Running_OK
    static Valve::VR::ETrackingResult _get_Running_OK();
    // Set static field: static public Valve.VR.ETrackingResult Running_OK
    static void _set_Running_OK(Valve::VR::ETrackingResult value);
    // static field const value: static public Valve.VR.ETrackingResult Running_OutOfRange
    static constexpr const int Running_OutOfRange = 201;
    // Get static field: static public Valve.VR.ETrackingResult Running_OutOfRange
    static Valve::VR::ETrackingResult _get_Running_OutOfRange();
    // Set static field: static public Valve.VR.ETrackingResult Running_OutOfRange
    static void _set_Running_OutOfRange(Valve::VR::ETrackingResult value);
  }; // Valve.VR.ETrackingResult
  #pragma pack(pop)
  static check_size<sizeof(ETrackingResult), 0 + sizeof(int)> __Valve_VR_ETrackingResultSizeCheck;
  static_assert(sizeof(ETrackingResult) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::ETrackingResult, "Valve.VR", "ETrackingResult");
