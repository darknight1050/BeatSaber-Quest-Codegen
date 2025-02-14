// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.AddressableAssets.Addressables/MergeMode
#include "UnityEngine/AddressableAssets/Addressables.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass75_0`1
  // [CompilerGeneratedAttribute] Offset: E01648
  template<typename TObject>
  class AddressablesImpl::$$c__DisplayClass75_0_1 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Collections.IEnumerable keys
    // Size: 0x8
    // Offset: 0x0
    System::Collections::IEnumerable* keys;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerable*) == 0x8);
    // public System.Action`1<TObject> callback
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<TObject>* callback;
    // Field size check
    static_assert(sizeof(System::Action_1<TObject>*) == 0x8);
    // public UnityEngine.AddressableAssets.Addressables/MergeMode mode
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::AddressableAssets::Addressables::MergeMode mode;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::Addressables::MergeMode) == 0x4);
    // public System.Boolean releaseDependenciesOnFailure
    // Size: 0x1
    // Offset: 0x0
    bool releaseDependenciesOnFailure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass75_0_1
    $$c__DisplayClass75_0_1(UnityEngine::AddressableAssets::AddressablesImpl* $$4__this_ = {}, System::Collections::IEnumerable* keys_ = {}, System::Action_1<TObject>* callback_ = {}, UnityEngine::AddressableAssets::Addressables::MergeMode mode_ = {}, bool releaseDependenciesOnFailure_ = {}) noexcept : $$4__this{$$4__this_}, keys{keys_}, callback{callback_}, mode{mode_}, releaseDependenciesOnFailure{releaseDependenciesOnFailure_} {}
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<TObject>> <LoadAssetsWithChain>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>*> $LoadAssetsWithChain$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass75_0_1::<LoadAssetsWithChain>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<LoadAssetsWithChain>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(op)})));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>*>, false>(this, ___internal__method, op);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass75_0_1<TObject>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass75_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass75_0_1<TObject>*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass75_0`1
  // Could not write size check! Type: UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass75_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass75_0_1, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass75_0`1");
