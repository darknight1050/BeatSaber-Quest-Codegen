// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.IResourceGroveler
#include "System/Resources/IResourceGroveler.hpp"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Skipping declaration: UltimateResourceFallbackLocation because it is already included!
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ManifestBasedResourceGroveler
  // [] Offset: FFFFFFFF
  class ManifestBasedResourceGroveler : public ::Il2CppObject/*, public System::Resources::IResourceGroveler*/ {
    public:
    // private System.Resources.ResourceManager/ResourceManagerMediator _mediator
    // Size: 0x8
    // Offset: 0x10
    System::Resources::ResourceManager::ResourceManagerMediator* mediator;
    // Field size check
    static_assert(sizeof(System::Resources::ResourceManager::ResourceManagerMediator*) == 0x8);
    // Creating value type constructor for type: ManifestBasedResourceGroveler
    ManifestBasedResourceGroveler(System::Resources::ResourceManager::ResourceManagerMediator* mediator_ = {}) noexcept : mediator{mediator_} {}
    // Creating interface conversion operator: operator System::Resources::IResourceGroveler
    operator System::Resources::IResourceGroveler() noexcept {
      return *reinterpret_cast<System::Resources::IResourceGroveler*>(this);
    }
    // Creating conversion operator: operator System::Resources::ResourceManager::ResourceManagerMediator*
    constexpr operator System::Resources::ResourceManager::ResourceManagerMediator*() const noexcept {
      return mediator;
    }
    // public System.Void .ctor(System.Resources.ResourceManager/ResourceManagerMediator mediator)
    // Offset: 0x12F7400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestBasedResourceGroveler* New_ctor(System::Resources::ResourceManager::ResourceManagerMediator* mediator) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::ManifestBasedResourceGroveler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestBasedResourceGroveler*, creationType>(mediator)));
    }
    // static System.Globalization.CultureInfo GetNeutralResourcesLanguage(System.Reflection.Assembly a, ref System.Resources.UltimateResourceFallbackLocation fallbackLocation)
    // Offset: 0x12F742C
    static System::Globalization::CultureInfo* GetNeutralResourcesLanguage(System::Reflection::Assembly* a, System::Resources::UltimateResourceFallbackLocation& fallbackLocation);
    // static private System.Boolean GetNeutralResourcesLanguageAttribute(System.Reflection.Assembly assembly, ref System.String cultureName, ref System.Int16 fallbackLocation)
    // Offset: 0x12F775C
    static bool GetNeutralResourcesLanguageAttribute(System::Reflection::Assembly* assembly, ::Il2CppString*& cultureName, int16_t& fallbackLocation);
  }; // System.Resources.ManifestBasedResourceGroveler
  #pragma pack(pop)
  static check_size<sizeof(ManifestBasedResourceGroveler), 16 + sizeof(System::Resources::ResourceManager::ResourceManagerMediator*)> __System_Resources_ManifestBasedResourceGrovelerSizeCheck;
  static_assert(sizeof(ManifestBasedResourceGroveler) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ManifestBasedResourceGroveler*, "System.Resources", "ManifestBasedResourceGroveler");
