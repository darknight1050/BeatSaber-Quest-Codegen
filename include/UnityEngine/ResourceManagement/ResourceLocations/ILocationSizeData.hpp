// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceLocations.ILocationSizeData
  class ILocationSizeData {
    public:
    // Creating value type constructor for type: ILocationSizeData
    ILocationSizeData() noexcept {}
    // public System.Int64 ComputeSize(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location, UnityEngine.ResourceManagement.ResourceManager resourceManager)
    // Offset: 0xFFFFFFFF
    int64_t ComputeSize(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, UnityEngine::ResourceManagement::ResourceManager* resourceManager);
  }; // UnityEngine.ResourceManagement.ResourceLocations.ILocationSizeData
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData*, "UnityEngine.ResourceManagement.ResourceLocations", "ILocationSizeData");
