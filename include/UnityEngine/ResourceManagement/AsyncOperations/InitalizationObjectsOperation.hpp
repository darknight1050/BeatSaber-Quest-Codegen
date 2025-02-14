// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::Initialization
namespace UnityEngine::AddressableAssets::Initialization {
  // Forward declaring type: ResourceManagerRuntimeData
  class ResourceManagerRuntimeData;
}
// Forward declaring namespace: UnityEngine::AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AddressablesImpl
  class AddressablesImpl;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.AsyncOperations.InitalizationObjectsOperation
  class InitalizationObjectsOperation : public UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
    public:
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData> m_RtdOp
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> m_RtdOp;
    // private UnityEngine.AddressableAssets.AddressablesImpl m_Addressables
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // private UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> m_DepOp
    // Size: 0xFFFFFFFF
    // Offset: 0xA0
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp;
    // Creating value type constructor for type: InitalizationObjectsOperation
    InitalizationObjectsOperation(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> m_RtdOp_ = {}, UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables_ = {}, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> m_DepOp_ = {}) noexcept : m_RtdOp{m_RtdOp_}, m_Addressables{m_Addressables_}, m_DepOp{m_DepOp_} {}
    // public System.Void Init(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.Initialization.ResourceManagerRuntimeData> rtdOp, UnityEngine.AddressableAssets.AddressablesImpl addressables)
    // Offset: 0x23A2AD0
    void Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::Initialization::ResourceManagerRuntimeData*> rtdOp, UnityEngine::AddressableAssets::AddressablesImpl* addressables);
    // System.Boolean LogRuntimeWarnings(System.String pathToBuildLogs)
    // Offset: 0x23A2B54
    bool LogRuntimeWarnings(::Il2CppString* pathToBuildLogs);
    // private System.Void <Execute>b__8_0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>> obj)
    // Offset: 0x23A341C
    void $Execute$b__8_0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> obj);
    // protected override System.String get_DebugName()
    // Offset: 0x23A2B0C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.String AsyncOperationBase_1::get_DebugName()
    ::Il2CppString* get_DebugName();
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x23A2D00
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void Execute()
    // Offset: 0x23A2E60
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
    // public System.Void .ctor()
    // Offset: 0x23A33CC
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitalizationObjectsOperation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitalizationObjectsOperation*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.AsyncOperations.InitalizationObjectsOperation
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation*, "UnityEngine.ResourceManagement.AsyncOperations", "InitalizationObjectsOperation");
