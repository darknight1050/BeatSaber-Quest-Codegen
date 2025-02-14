// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
#include "System/Net/NetworkInformation/NetworkInterfaceFactory_UnixNetworkInterfaceAPI.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/MacOsNetworkInterfaceAPI
  class NetworkInterfaceFactory::MacOsNetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI {
    public:
    // Creating value type constructor for type: MacOsNetworkInterfaceAPI
    MacOsNetworkInterfaceAPI() noexcept {}
    // public override System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x14755AC
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Net.NetworkInformation.NetworkInterface[] NetworkInterfaceFactory::GetAllNetworkInterfaces()
    ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces();
    // public System.Void .ctor()
    // Offset: 0x1474AD0
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
    // Base method: System.Void UnixNetworkInterfaceAPI::.ctor()
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory::MacOsNetworkInterfaceAPI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::NetworkInterfaceFactory::MacOsNetworkInterfaceAPI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory::MacOsNetworkInterfaceAPI*, creationType>()));
    }
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/MacOsNetworkInterfaceAPI
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory::MacOsNetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/MacOsNetworkInterfaceAPI");
