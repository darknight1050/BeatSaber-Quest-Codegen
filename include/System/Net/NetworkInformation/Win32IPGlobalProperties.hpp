// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.IPGlobalProperties
#include "System/Net/NetworkInformation/IPGlobalProperties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.Win32IPGlobalProperties
  class Win32IPGlobalProperties : public System::Net::NetworkInformation::IPGlobalProperties {
    public:
    // Creating value type constructor for type: Win32IPGlobalProperties
    Win32IPGlobalProperties() noexcept {}
    // public override System.String get_DomainName()
    // Offset: 0x1476C0C
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.String IPGlobalProperties::get_DomainName()
    ::Il2CppString* get_DomainName();
    // public System.Void .ctor()
    // Offset: 0x1473130
    // Implemented from: System.Net.NetworkInformation.IPGlobalProperties
    // Base method: System.Void IPGlobalProperties::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32IPGlobalProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::Win32IPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32IPGlobalProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.Win32IPGlobalProperties
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32IPGlobalProperties*, "System.Net.NetworkInformation", "Win32IPGlobalProperties");
