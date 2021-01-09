// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.IPAddressInformation
#include "System/Net/NetworkInformation/IPAddressInformation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  // Autogenerated type: System.Net.NetworkInformation.UnicastIPAddressInformation
  // [] Offset: FFFFFFFF
  class UnicastIPAddressInformation : public System::Net::NetworkInformation::IPAddressInformation {
    public:
    // Creating value type constructor for type: UnicastIPAddressInformation
    UnicastIPAddressInformation() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x119ACF4
    // Implemented from: System.Net.NetworkInformation.IPAddressInformation
    // Base method: System.Void IPAddressInformation::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicastIPAddressInformation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::UnicastIPAddressInformation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicastIPAddressInformation*, creationType>()));
    }
  }; // System.Net.NetworkInformation.UnicastIPAddressInformation
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnicastIPAddressInformation*, "System.Net.NetworkInformation", "UnicastIPAddressInformation");
#pragma pack(pop)
