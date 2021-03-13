// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.TrackingSpaceType
  // [] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: CDCE60
  struct TrackingSpaceType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TrackingSpaceType
    constexpr TrackingSpaceType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.TrackingSpaceType Stationary
    static constexpr const int Stationary = 0;
    // Get static field: static public UnityEngine.XR.TrackingSpaceType Stationary
    static UnityEngine::XR::TrackingSpaceType _get_Stationary();
    // Set static field: static public UnityEngine.XR.TrackingSpaceType Stationary
    static void _set_Stationary(UnityEngine::XR::TrackingSpaceType value);
    // static field const value: static public UnityEngine.XR.TrackingSpaceType RoomScale
    static constexpr const int RoomScale = 1;
    // Get static field: static public UnityEngine.XR.TrackingSpaceType RoomScale
    static UnityEngine::XR::TrackingSpaceType _get_RoomScale();
    // Set static field: static public UnityEngine.XR.TrackingSpaceType RoomScale
    static void _set_RoomScale(UnityEngine::XR::TrackingSpaceType value);
  }; // UnityEngine.XR.TrackingSpaceType
  #pragma pack(pop)
  static check_size<sizeof(TrackingSpaceType), 0 + sizeof(int)> __UnityEngine_XR_TrackingSpaceTypeSizeCheck;
  static_assert(sizeof(TrackingSpaceType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::TrackingSpaceType, "UnityEngine.XR", "TrackingSpaceType");
