// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.PerformanceCountersElement
  // [] Offset: FFFFFFFF
  class PerformanceCountersElement : public System::Configuration::ConfigurationElement {
    public:
    // Creating value type constructor for type: PerformanceCountersElement
    PerformanceCountersElement() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x14C48F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PerformanceCountersElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Configuration::PerformanceCountersElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PerformanceCountersElement*, creationType>()));
    }
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x14C4938
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties_NEW()
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
  }; // System.Net.Configuration.PerformanceCountersElement
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::PerformanceCountersElement*, "System.Net.Configuration", "PerformanceCountersElement");
