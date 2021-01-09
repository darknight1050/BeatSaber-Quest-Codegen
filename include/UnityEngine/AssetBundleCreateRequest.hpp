// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundle
  class AssetBundle;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  // Autogenerated type: UnityEngine.AssetBundleCreateRequest
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D72910
  // [RequiredByNativeCodeAttribute] Offset: D72910
  class AssetBundleCreateRequest : public UnityEngine::AsyncOperation {
    public:
    // Creating value type constructor for type: AssetBundleCreateRequest
    AssetBundleCreateRequest() noexcept {}
    // public UnityEngine.AssetBundle get_assetBundle()
    // Offset: 0x1A09650
    UnityEngine::AssetBundle* get_assetBundle();
    // public System.Void .ctor()
    // Offset: 0x1A09690
    // Implemented from: UnityEngine.AsyncOperation
    // Base method: System.Void AsyncOperation::.ctor()
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetBundleCreateRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AssetBundleCreateRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetBundleCreateRequest*, creationType>()));
    }
  }; // UnityEngine.AssetBundleCreateRequest
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundleCreateRequest*, "UnityEngine", "AssetBundleCreateRequest");
#pragma pack(pop)
