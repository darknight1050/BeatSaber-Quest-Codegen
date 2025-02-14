// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
#include "System/Net/NetworkInformation/CommonUnixIPGlobalProperties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetworkInformation.UnixIPGlobalProperties
  class UnixIPGlobalProperties : public System::Net::NetworkInformation::CommonUnixIPGlobalProperties {
    public:
    // Creating value type constructor for type: UnixIPGlobalProperties
    UnixIPGlobalProperties() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1473128
    // Implemented from: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
    // Base method: System.Void CommonUnixIPGlobalProperties::.ctor()
    // Base method: System.Void IPGlobalProperties::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnixIPGlobalProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::NetworkInformation::UnixIPGlobalProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnixIPGlobalProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.UnixIPGlobalProperties
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixIPGlobalProperties*, "System.Net.NetworkInformation", "UnixIPGlobalProperties");
