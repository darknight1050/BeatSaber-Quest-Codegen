// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: System.Net.Configuration.HttpWebRequestElement
  // [] Offset: FFFFFFFF
  class HttpWebRequestElement : public System::Configuration::ConfigurationElement {
    public:
    // Creating value type constructor for type: HttpWebRequestElement
    HttpWebRequestElement() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x130CC4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebRequestElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Configuration::HttpWebRequestElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebRequestElement*, creationType>()));
    }
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x130CC8C
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
  }; // System.Net.Configuration.HttpWebRequestElement
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::HttpWebRequestElement*, "System.Net.Configuration", "HttpWebRequestElement");
#pragma pack(pop)
