// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets
namespace UnityEngine::AddressableAssets {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: IResourceLocator
  class IResourceLocator;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.UpdateCatalogsOperation
  class UpdateCatalogsOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> {
    public:
    // Nested type: UnityEngine::AddressableAssets::UpdateCatalogsOperation::$$c
    class $$c;
    // private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.AddressableAssets.AddressablesImpl/ResourceLocatorInfo> m_LocatorInfos
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::List_1<UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*>* m_LocatorInfos;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*>*) == 0x8);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> m_DepOp
    // Size: 0xFFFFFFFF
    // Offset: 0x90
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp;
    // Creating value type constructor for type: UpdateCatalogsOperation
    UpdateCatalogsOperation(UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables_ = {}, System::Collections::Generic::List_1<UnityEngine::AddressableAssets::AddressablesImpl::ResourceLocatorInfo*>* m_LocatorInfos_ = {}, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp_ = {}) noexcept : m_Addressables{m_Addressables_}, m_LocatorInfos{m_LocatorInfos_}, m_DepOp{m_DepOp_} {}
    // public System.Void .ctor(UnityEngine.AddressableAssets.AddressablesImpl aa)
    // Offset: 0x13D339C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UpdateCatalogsOperation* New_ctor(UnityEngine::AddressableAssets::AddressablesImpl* aa) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::UpdateCatalogsOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UpdateCatalogsOperation*, creationType>(aa)));
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.List`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator>> Start(System.Collections.Generic.IEnumerable`1<System.String> catalogIds)
    // Offset: 0x13D3400
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> Start(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* catalogIds);
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x13DEA88
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void Destroy()
    // Offset: 0x13DEBB0
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Destroy()
    void Destroy();
    // protected override System.Void GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> dependencies)
    // Offset: 0x13DEC38
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::GetDependencies(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> dependencies)
    void GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* dependencies);
    // protected override System.Void Execute()
    // Offset: 0x13DECE4
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
  }; // UnityEngine.AddressableAssets.UpdateCatalogsOperation
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::UpdateCatalogsOperation*, "UnityEngine.AddressableAssets", "UpdateCatalogsOperation");
