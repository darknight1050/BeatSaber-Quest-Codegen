// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
  // [] Offset: FFFFFFFF
  class NetworkInterfaceFactory::UnixNetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory {
    public:
    // Creating value type constructor for type: UnixNetworkInterfaceAPI
    UnixNetworkInterfaceAPI() noexcept {}
    // static protected System.Int32 getifaddrs(out System.IntPtr ifap)
    // Offset: 0x1327B0C
    static int getifaddrs(System::IntPtr& ifap);
    // static protected System.Void freeifaddrs(System.IntPtr ifap)
    // Offset: 0x1327A88
    static void freeifaddrs(System::IntPtr ifap);
    // protected System.Void .ctor()
    // Offset: 0x1328538
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory::UnixNetworkInterfaceAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory::UnixNetworkInterfaceAPI*, creationType>()));
    }
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/UnixNetworkInterfaceAPI");
