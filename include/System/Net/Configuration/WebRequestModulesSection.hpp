// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Configuration.ConfigurationSection
#include "System/Configuration/ConfigurationSection.hpp"
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
  // Autogenerated type: System.Net.Configuration.WebRequestModulesSection
  class WebRequestModulesSection : public System::Configuration::ConfigurationSection {
    public:
    // public System.Void .ctor()
    // Offset: 0xF554D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WebRequestModulesSection* New_ctor();
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0xF55518
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
  }; // System.Net.Configuration.WebRequestModulesSection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::WebRequestModulesSection*, "System.Net.Configuration", "WebRequestModulesSection");
#pragma pack(pop)
