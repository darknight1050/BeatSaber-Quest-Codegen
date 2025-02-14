// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.SceneManagement.LoadSceneMode
#include "UnityEngine/SceneManagement/LoadSceneMode.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
#include "UnityEngine/ResourceManagement/ResourceProviders/SceneInstance.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass110_0
  // [CompilerGeneratedAttribute] Offset: E01718
  class AddressablesImpl::$$c__DisplayClass110_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Object key
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public UnityEngine.SceneManagement.LoadSceneMode loadMode
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::SceneManagement::LoadSceneMode loadMode;
    // Field size check
    static_assert(sizeof(UnityEngine::SceneManagement::LoadSceneMode) == 0x4);
    // public System.Boolean activateOnLoad
    // Size: 0x1
    // Offset: 0x24
    bool activateOnLoad;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: activateOnLoad and: priority
    char __padding3[0x3] = {};
    // public System.Int32 priority
    // Size: 0x4
    // Offset: 0x28
    int priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass110_0
    $$c__DisplayClass110_0(UnityEngine::AddressableAssets::AddressablesImpl* $$4__this_ = {}, ::Il2CppObject* key_ = {}, UnityEngine::SceneManagement::LoadSceneMode loadMode_ = {}, bool activateOnLoad_ = {}, int priority_ = {}) noexcept : $$4__this{$$4__this_}, key{key_}, loadMode{loadMode_}, activateOnLoad{activateOnLoad_}, priority{priority_} {}
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.ResourceManagement.ResourceProviders.SceneInstance> <LoadSceneWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x13D44C8
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> $LoadSceneWithChain$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
    // public System.Void .ctor()
    // Offset: 0x13D28C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass110_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass110_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass110_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass110_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass110_0), 40 + sizeof(int)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass110_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass110_0) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass110_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass110_0");
