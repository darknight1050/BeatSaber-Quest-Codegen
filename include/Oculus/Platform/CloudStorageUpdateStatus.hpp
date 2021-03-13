// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.CloudStorageUpdateStatus
  // [] Offset: FFFFFFFF
  struct CloudStorageUpdateStatus/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CloudStorageUpdateStatus
    constexpr CloudStorageUpdateStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xD09EE8
    // static field const value: static public Oculus.Platform.CloudStorageUpdateStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.CloudStorageUpdateStatus Unknown
    static Oculus::Platform::CloudStorageUpdateStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.CloudStorageUpdateStatus Unknown
    static void _set_Unknown(Oculus::Platform::CloudStorageUpdateStatus value);
    // [DescriptionAttribute] Offset: 0xD09F20
    // static field const value: static public Oculus.Platform.CloudStorageUpdateStatus Ok
    static constexpr const int Ok = 1;
    // Get static field: static public Oculus.Platform.CloudStorageUpdateStatus Ok
    static Oculus::Platform::CloudStorageUpdateStatus _get_Ok();
    // Set static field: static public Oculus.Platform.CloudStorageUpdateStatus Ok
    static void _set_Ok(Oculus::Platform::CloudStorageUpdateStatus value);
    // [DescriptionAttribute] Offset: 0xD09F58
    // static field const value: static public Oculus.Platform.CloudStorageUpdateStatus BetterVersionStored
    static constexpr const int BetterVersionStored = 2;
    // Get static field: static public Oculus.Platform.CloudStorageUpdateStatus BetterVersionStored
    static Oculus::Platform::CloudStorageUpdateStatus _get_BetterVersionStored();
    // Set static field: static public Oculus.Platform.CloudStorageUpdateStatus BetterVersionStored
    static void _set_BetterVersionStored(Oculus::Platform::CloudStorageUpdateStatus value);
    // [DescriptionAttribute] Offset: 0xD09F90
    // static field const value: static public Oculus.Platform.CloudStorageUpdateStatus ManualMergeRequired
    static constexpr const int ManualMergeRequired = 3;
    // Get static field: static public Oculus.Platform.CloudStorageUpdateStatus ManualMergeRequired
    static Oculus::Platform::CloudStorageUpdateStatus _get_ManualMergeRequired();
    // Set static field: static public Oculus.Platform.CloudStorageUpdateStatus ManualMergeRequired
    static void _set_ManualMergeRequired(Oculus::Platform::CloudStorageUpdateStatus value);
  }; // Oculus.Platform.CloudStorageUpdateStatus
  #pragma pack(pop)
  static check_size<sizeof(CloudStorageUpdateStatus), 0 + sizeof(int)> __Oculus_Platform_CloudStorageUpdateStatusSizeCheck;
  static_assert(sizeof(CloudStorageUpdateStatus) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CloudStorageUpdateStatus, "Oculus.Platform", "CloudStorageUpdateStatus");
