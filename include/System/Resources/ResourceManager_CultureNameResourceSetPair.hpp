// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.ResourceManager
#include "System/Resources/ResourceManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceSet
  class ResourceSet;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ResourceManager/CultureNameResourceSetPair
  class ResourceManager::CultureNameResourceSetPair : public ::Il2CppObject {
    public:
    // public System.String lastCultureName
    // Offset: 0x10
    ::Il2CppString* lastCultureName;
    // public System.Resources.ResourceSet lastResourceSet
    // Offset: 0x18
    System::Resources::ResourceSet* lastResourceSet;
    // public System.Void .ctor()
    // Offset: 0x10BB25C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ResourceManager::CultureNameResourceSetPair* New_ctor();
  }; // System.Resources.ResourceManager/CultureNameResourceSetPair
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceManager::CultureNameResourceSetPair*, "System.Resources", "ResourceManager/CultureNameResourceSetPair");
#pragma pack(pop)
