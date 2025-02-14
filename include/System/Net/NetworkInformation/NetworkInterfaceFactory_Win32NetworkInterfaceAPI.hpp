// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
// Including type: System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
#include "System/Net/NetworkInformation/Win32_IP_ADAPTER_ADDRESSES.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/Win32NetworkInterfaceAPI
  class NetworkInterfaceFactory::Win32NetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory {
    public:
    // Creating value type constructor for type: Win32NetworkInterfaceAPI
    Win32NetworkInterfaceAPI() noexcept {}
    // static private System.Int32 GetAdaptersAddresses(System.UInt32 family, System.UInt32 flags, System.IntPtr reserved, System.IntPtr info, ref System.Int32 size)
    // Offset: 0x1475E7C
    static int GetAdaptersAddresses(uint family, uint flags, System::IntPtr reserved, System::IntPtr info, int& size);
    // static private System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[] GetAdaptersAddresses()
    // Offset: 0x1475F38
    static ::Array<System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES>* GetAdaptersAddresses();
    // public override System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x14761BC
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Net.NetworkInformation.NetworkInterface[] NetworkInterfaceFactory::GetAllNetworkInterfaces()
    ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces();
    // public System.Void .ctor()
    // Offset: 0x1474AE0
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory::Win32NetworkInterfaceAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory::Win32NetworkInterfaceAPI*, creationType>()));
    }
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/Win32NetworkInterfaceAPI
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/Win32NetworkInterfaceAPI");
