// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory
  class NetworkInterfaceFactory : public ::Il2CppObject {
    public:
    // Nested type: System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI
    class UnixNetworkInterfaceAPI;
    // Nested type: System::Net::NetworkInformation::NetworkInterfaceFactory::MacOsNetworkInterfaceAPI
    class MacOsNetworkInterfaceAPI;
    // Nested type: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI
    class LinuxNetworkInterfaceAPI;
    // Nested type: System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI
    class Win32NetworkInterfaceAPI;
    // Creating value type constructor for type: NetworkInterfaceFactory
    NetworkInterfaceFactory() noexcept {}
    // public System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0xFFFFFFFF
    ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces();
    // static public System.Net.NetworkInformation.NetworkInterfaceFactory Create()
    // Offset: 0x14749B8
    static System::Net::NetworkInformation::NetworkInterfaceFactory* Create();
    // protected System.Void .ctor()
    // Offset: 0x1474AE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkInterfaceFactory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::NetworkInterfaceFactory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkInterfaceFactory*, creationType>()));
    }
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory*, "System.Net.NetworkInformation", "NetworkInterfaceFactory");
