// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.IPHostEntry
  class IPHostEntry : public ::Il2CppObject {
    public:
    // private System.String hostName
    // Offset: 0x10
    ::Il2CppString* hostName;
    // private System.String[] aliases
    // Offset: 0x18
    ::Array<::Il2CppString*>* aliases;
    // private System.Net.IPAddress[] addressList
    // Offset: 0x20
    ::Array<System::Net::IPAddress*>* addressList;
    // System.Boolean isTrustedHost
    // Offset: 0x28
    bool isTrustedHost;
    // public System.Void set_HostName(System.String value)
    // Offset: 0xECAB9C
    void set_HostName(::Il2CppString* value);
    // public System.Void set_Aliases(System.String[] value)
    // Offset: 0xECABA4
    void set_Aliases(::Array<::Il2CppString*>* value);
    // public System.Net.IPAddress[] get_AddressList()
    // Offset: 0xECABAC
    ::Array<System::Net::IPAddress*>* get_AddressList();
    // public System.Void set_AddressList(System.Net.IPAddress[] value)
    // Offset: 0xECABB4
    void set_AddressList(::Array<System::Net::IPAddress*>* value);
    // public System.Void .ctor()
    // Offset: 0xEC8604
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IPHostEntry* New_ctor();
  }; // System.Net.IPHostEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::IPHostEntry*, "System.Net", "IPHostEntry");
#pragma pack(pop)
