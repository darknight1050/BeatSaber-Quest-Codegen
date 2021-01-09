// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  // Autogenerated type: System.Configuration.ConfigurationCollectionAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D43B3C
  class ConfigurationCollectionAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ConfigurationCollectionAttribute
    ConfigurationCollectionAttribute() noexcept {}
    // public System.Void .ctor(System.Type itemType)
    // Offset: 0x1A0B418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigurationCollectionAttribute* New_ctor(System::Type* itemType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Configuration::ConfigurationCollectionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigurationCollectionAttribute*, creationType>(itemType)));
    }
  }; // System.Configuration.ConfigurationCollectionAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationCollectionAttribute*, "System.Configuration", "ConfigurationCollectionAttribute");
#pragma pack(pop)
