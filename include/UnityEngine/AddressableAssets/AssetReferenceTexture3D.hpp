// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.AssetReferenceT`1
#include "UnityEngine/AddressableAssets/AssetReferenceT_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture3D
  class Texture3D;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AssetReferenceTexture3D
  class AssetReferenceTexture3D : public UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Texture3D*> {
    public:
    // Creating value type constructor for type: AssetReferenceTexture3D
    AssetReferenceTexture3D() noexcept {}
    // public System.Void .ctor(System.String guid)
    // Offset: 0x13D5F44
    // Implemented from: UnityEngine.AddressableAssets.AssetReferenceT`1
    // Base method: System.Void AssetReferenceT_1::.ctor(System.String guid)
    // Base method: System.Void AssetReference::.ctor(System.String guid)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceTexture3D* New_ctor(::Il2CppString* guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReferenceTexture3D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReferenceTexture3D*, creationType>(guid)));
    }
  }; // UnityEngine.AddressableAssets.AssetReferenceTexture3D
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReferenceTexture3D*, "UnityEngine.AddressableAssets", "AssetReferenceTexture3D");
