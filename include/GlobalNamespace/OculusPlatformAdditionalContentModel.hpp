// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: AdditionalContentModel/UpdateEntitlementsResult
#include "GlobalNamespace/AdditionalContentModel_UpdateEntitlementsResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusLevelProductsModelSO
  class OculusLevelProductsModelSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  // Autogenerated type: OculusPlatformAdditionalContentModel
  // [] Offset: FFFFFFFF
  class OculusPlatformAdditionalContentModel : public GlobalNamespace::AdditionalContentModel {
    public:
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$GetLevelEntitlementStatusInternalAsync$d__5
    struct $GetLevelEntitlementStatusInternalAsync$d__5;
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$GetPackEntitlementStatusInternalAsync$d__6
    struct $GetPackEntitlementStatusInternalAsync$d__6;
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$DataIsValidAsync$d__7
    struct $DataIsValidAsync$d__7;
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelProductStoreAsync$d__8
    struct $OpenLevelProductStoreAsync$d__8;
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__9
    struct $OpenLevelPackProductStoreAsync$d__9;
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$LaunchCheckoutFlow$d__10
    struct $LaunchCheckoutFlow$d__10;
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$IsPackBetterBuyThanLevelAsync$d__11
    struct $IsPackBetterBuyThanLevelAsync$d__11;
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: GlobalNamespace::OculusPlatformAdditionalContentModel::$CheckForNewEntitlementsAsync$d__12
    struct $CheckForNewEntitlementsAsync$d__12;
    // [InjectAttribute] Offset: 0xDC296C
    // private OculusLevelProductsModelSO _oculusLevelProductsModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProductsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusLevelProductsModelSO*) == 0x8);
    // private System.Collections.Generic.HashSet`1<System.String> _entitlementsSKU
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::HashSet_1<::Il2CppString*>* entitlementsSKU;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private System.Threading.SemaphoreSlim _semaphoreSlim
    // Size: 0x8
    // Offset: 0x38
    System::Threading::SemaphoreSlim* semaphoreSlim;
    // Field size check
    static_assert(sizeof(System::Threading::SemaphoreSlim*) == 0x8);
    // private System.Boolean _isDataValid
    // Size: 0x1
    // Offset: 0x40
    bool isDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OculusPlatformAdditionalContentModel
    OculusPlatformAdditionalContentModel(GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProductsModel_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* entitlementsSKU_ = {}, System::Threading::SemaphoreSlim* semaphoreSlim_ = {}, bool isDataValid_ = {}) noexcept : oculusLevelProductsModel{oculusLevelProductsModel_}, entitlementsSKU{entitlementsSKU_}, semaphoreSlim{semaphoreSlim_}, isDataValid{isDataValid_} {}
    // private System.Threading.Tasks.Task`1<System.Boolean> DataIsValidAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x100F1D4
    System::Threading::Tasks::Task_1<bool>* DataIsValidAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<Oculus.Platform.Message`1<Oculus.Platform.Models.Purchase>> LaunchCheckoutFlow(System.String sku)
    // Offset: 0x100F5AC
    System::Threading::Tasks::Task_1<Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase*>*>* LaunchCheckoutFlow(::Il2CppString* sku);
    // private System.Threading.Tasks.Task`1<AdditionalContentModel/UpdateEntitlementsResult> CheckForNewEntitlementsAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x100F7D0
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>* CheckForNewEntitlementsAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Boolean HasLevelEntitlement(System.String levelId)
    // Offset: 0x100F91C
    bool HasLevelEntitlement(::Il2CppString* levelId);
    // private System.Boolean HasLevelPackEntitlement(System.String levelPackId)
    // Offset: 0x100F99C
    bool HasLevelPackEntitlement(::Il2CppString* levelPackId);
    // protected override System.Void InvalidateDataInternal()
    // Offset: 0x100EF04
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::InvalidateDataInternal()
    void InvalidateDataInternal();
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x100EF0C
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::Il2CppString* levelId, System::Threading::CancellationToken cancellationToken);
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetPackEntitlementStatusInternalAsync(System.String packId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x100F070
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetPackEntitlementStatusInternalAsync(System.String packId, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::Il2CppString* packId, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x100F314
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelProductStoreAsync(::Il2CppString* levelId, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x100F460
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x100F6C4
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> AdditionalContentModel::IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public System.Void .ctor()
    // Offset: 0x100FA74
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformAdditionalContentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformAdditionalContentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformAdditionalContentModel*, creationType>()));
    }
  }; // OculusPlatformAdditionalContentModel
  static check_size<sizeof(OculusPlatformAdditionalContentModel), 64 + sizeof(bool)> __GlobalNamespace_OculusPlatformAdditionalContentModelSizeCheck;
  static_assert(sizeof(OculusPlatformAdditionalContentModel) == 0x41);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformAdditionalContentModel*, "", "OculusPlatformAdditionalContentModel");
#pragma pack(pop)
