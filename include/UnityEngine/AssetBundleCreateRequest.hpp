// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AsyncOperation
#include "UnityEngine/AsyncOperation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AssetBundleCreateRequest
  // [RequiredByNativeCodeAttribute] Offset: DBAB0C
  // [NativeHeaderAttribute] Offset: DBAB0C
  class AssetBundleCreateRequest : public UnityEngine::AsyncOperation {
    public:
    // Creating value type constructor for type: AssetBundleCreateRequest
    AssetBundleCreateRequest() noexcept {}
    // public UnityEngine.AssetBundle get_assetBundle()
    // Offset: 0x23D4FA8
    UnityEngine::AssetBundle* get_assetBundle();
    // public System.Void .ctor()
    // Offset: 0x23D4FE8
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
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundleCreateRequest*, "UnityEngine", "AssetBundleCreateRequest");
