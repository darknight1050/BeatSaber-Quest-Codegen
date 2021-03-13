// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: NetworkInterfaceFactory
  class NetworkInterfaceFactory;
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.SystemNetworkInterface
  // [] Offset: FFFFFFFF
  class SystemNetworkInterface : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SystemNetworkInterface
    SystemNetworkInterface() noexcept {}
    // Get static field: static private readonly System.Net.NetworkInformation.NetworkInterfaceFactory nif
    static System::Net::NetworkInformation::NetworkInterfaceFactory* _get_nif();
    // Set static field: static private readonly System.Net.NetworkInformation.NetworkInterfaceFactory nif
    static void _set_nif(System::Net::NetworkInformation::NetworkInterfaceFactory* value);
    // static public System.Net.NetworkInformation.NetworkInterface[] GetNetworkInterfaces()
    // Offset: 0x13276BC
    static ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetNetworkInterfaces();
    // static private System.Void .cctor()
    // Offset: 0x1329440
    static void _cctor();
  }; // System.Net.NetworkInformation.SystemNetworkInterface
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::SystemNetworkInterface*, "System.Net.NetworkInformation", "SystemNetworkInterface");
