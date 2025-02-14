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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.IPAddressInformation
  class IPAddressInformation : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IPAddressInformation
    IPAddressInformation() noexcept {}
    // public System.Net.IPAddress get_Address()
    // Offset: 0xFFFFFFFF
    System::Net::IPAddress* get_Address();
    // protected System.Void .ctor()
    // Offset: 0x1472F10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPAddressInformation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::IPAddressInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPAddressInformation*, creationType>()));
    }
  }; // System.Net.NetworkInformation.IPAddressInformation
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::IPAddressInformation*, "System.Net.NetworkInformation", "IPAddressInformation");
