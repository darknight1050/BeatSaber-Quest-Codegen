// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Configuration.ConfigurationSection
#include "System/Configuration/ConfigurationSection.hpp"
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
  // Skipping declaration: ConfigurationElement because it is already included!
  // Forward declaring type: ConfigurationSaveMode
  struct ConfigurationSaveMode;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.IgnoreSection
  class IgnoreSection : public System::Configuration::ConfigurationSection {
    public:
    // Creating value type constructor for type: IgnoreSection
    IgnoreSection() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23D8200
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IgnoreSection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Configuration::IgnoreSection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IgnoreSection*, creationType>()));
    }
    // protected internal override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x23D8240
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected internal override System.Void DeserializeSection(System.Xml.XmlReader xmlReader)
    // Offset: 0x23D8280
    // Implemented from: System.Configuration.ConfigurationSection
    // Base method: System.Void ConfigurationSection::DeserializeSection(System.Xml.XmlReader xmlReader)
    void DeserializeSection(System::Xml::XmlReader* xmlReader);
    // protected internal override System.Boolean IsModified()
    // Offset: 0x23D82C0
    // Implemented from: System.Configuration.ConfigurationSection
    // Base method: System.Boolean ConfigurationSection::IsModified()
    bool IsModified();
    // protected internal override System.Void Reset(System.Configuration.ConfigurationElement parentSection)
    // Offset: 0x23D8300
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::Reset(System.Configuration.ConfigurationElement parentSection)
    void Reset(System::Configuration::ConfigurationElement* parentSection);
    // protected internal override System.Void ResetModified()
    // Offset: 0x23D8340
    // Implemented from: System.Configuration.ConfigurationSection
    // Base method: System.Void ConfigurationSection::ResetModified()
    void ResetModified();
    // protected internal override System.String SerializeSection(System.Configuration.ConfigurationElement parentSection, System.String name, System.Configuration.ConfigurationSaveMode saveMode)
    // Offset: 0x23D8380
    // Implemented from: System.Configuration.ConfigurationSection
    // Base method: System.String ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement parentSection, System.String name, System.Configuration.ConfigurationSaveMode saveMode)
    ::Il2CppString* SerializeSection(System::Configuration::ConfigurationElement* parentSection, ::Il2CppString* name, System::Configuration::ConfigurationSaveMode saveMode);
  }; // System.Configuration.IgnoreSection
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::IgnoreSection*, "System.Configuration", "IgnoreSection");
