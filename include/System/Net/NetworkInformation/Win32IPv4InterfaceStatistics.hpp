// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.IPv4InterfaceStatistics
#include "System/Net/NetworkInformation/IPv4InterfaceStatistics.hpp"
// Including type: System.Net.NetworkInformation.Win32_MIB_IFROW
#include "System/Net/NetworkInformation/Win32_MIB_IFROW.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x80
  // Autogenerated type: System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
  // [] Offset: FFFFFFFF
  class Win32IPv4InterfaceStatistics : public System::Net::NetworkInformation::IPv4InterfaceStatistics {
    public:
    // private System.Net.NetworkInformation.Win32_MIB_IFROW info
    // Size: 0x70
    // Offset: 0x10
    System::Net::NetworkInformation::Win32_MIB_IFROW info;
    // Field size check
    static_assert(sizeof(System::Net::NetworkInformation::Win32_MIB_IFROW) == 0x70);
    // Creating value type constructor for type: Win32IPv4InterfaceStatistics
    Win32IPv4InterfaceStatistics(System::Net::NetworkInformation::Win32_MIB_IFROW info_ = {}) noexcept : info{info_} {}
    // Creating conversion operator: operator System::Net::NetworkInformation::Win32_MIB_IFROW
    constexpr operator System::Net::NetworkInformation::Win32_MIB_IFROW() const noexcept {
      return info;
    }
    // public System.Void .ctor(System.Net.NetworkInformation.Win32_MIB_IFROW info)
    // Offset: 0x119E2B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32IPv4InterfaceStatistics* New_ctor(System::Net::NetworkInformation::Win32_MIB_IFROW info) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::Win32IPv4InterfaceStatistics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32IPv4InterfaceStatistics*, creationType>(info)));
    }
  }; // System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
  static check_size<sizeof(Win32IPv4InterfaceStatistics), 16 + sizeof(System::Net::NetworkInformation::Win32_MIB_IFROW)> __System_Net_NetworkInformation_Win32IPv4InterfaceStatisticsSizeCheck;
  static_assert(sizeof(Win32IPv4InterfaceStatistics) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32IPv4InterfaceStatistics*, "System.Net.NetworkInformation", "Win32IPv4InterfaceStatistics");
#pragma pack(pop)
