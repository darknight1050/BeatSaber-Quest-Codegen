// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/BundledAssetProvider.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
#include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: IAssetBundleResource
  class IAssetBundleResource;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp
  class BundledAssetProvider::InternalOp : public ::Il2CppObject {
    public:
    // private UnityEngine.AssetBundleRequest m_RequestOperation
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AssetBundleRequest* m_RequestOperation;
    // Field size check
    static_assert(sizeof(UnityEngine::AssetBundleRequest*) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProvideHandle
    // Size: 0x18
    // Offset: 0x18
    UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle) == 0x18);
    // private System.String subObjectName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* subObjectName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: InternalOp
    InternalOp(UnityEngine::AssetBundleRequest* m_RequestOperation_ = {}, UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle_ = {}, ::Il2CppString* subObjectName_ = {}) noexcept : m_RequestOperation{m_RequestOperation_}, m_ProvideHandle{m_ProvideHandle_}, subObjectName{subObjectName_} {}
    // static UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource LoadBundleFromDependecies(System.Collections.Generic.IList`1<System.Object> results)
    // Offset: 0x19B319C
    static UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource* LoadBundleFromDependecies(System::Collections::Generic::IList_1<::Il2CppObject*>* results);
    // public System.Void Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    // Offset: 0x19B2D50
    void Start(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);
    // private System.Boolean WaitForCompletionHandler()
    // Offset: 0x19B38E0
    bool WaitForCompletionHandler();
    // private System.Void ActionComplete(UnityEngine.AsyncOperation obj)
    // Offset: 0x19B3564
    void ActionComplete(UnityEngine::AsyncOperation* obj);
    // public System.Single ProgressCallback()
    // Offset: 0x19B3D30
    float ProgressCallback();
    // public System.Void .ctor()
    // Offset: 0x19B2D48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BundledAssetProvider::InternalOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BundledAssetProvider::InternalOp*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.BundledAssetProvider/InternalOp
  #pragma pack(pop)
  static check_size<sizeof(BundledAssetProvider::InternalOp), 48 + sizeof(::Il2CppString*)> __UnityEngine_ResourceManagement_ResourceProviders_BundledAssetProvider_InternalOpSizeCheck;
  static_assert(sizeof(BundledAssetProvider::InternalOp) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::BundledAssetProvider::InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "BundledAssetProvider/InternalOp");
