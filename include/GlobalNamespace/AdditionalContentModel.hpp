// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AlwaysOwnedContentContainerSO
  class AlwaysOwnedContentContainerSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: AdditionalContentModel
  class AdditionalContentModel : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::AdditionalContentModel::EntitlementStatus
    struct EntitlementStatus;
    // Nested type: GlobalNamespace::AdditionalContentModel::OpenProductStoreResult
    struct OpenProductStoreResult;
    // Nested type: GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult
    struct UpdateEntitlementsResult;
    // Nested type: GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult
    struct IsPackBetterBuyThanLevelResult;
    // Nested type: GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10
    struct $GetLevelEntitlementStatusAsync$d__10;
    // Nested type: GlobalNamespace::AdditionalContentModel::$GetPackEntitlementStatusAsync$d__11
    struct $GetPackEntitlementStatusAsync$d__11;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: AdditionalContentModel/EntitlementStatus
    struct EntitlementStatus/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: EntitlementStatus
      constexpr EntitlementStatus(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public AdditionalContentModel/EntitlementStatus Failed
      static constexpr const int Failed = 0;
      // Get static field: static public AdditionalContentModel/EntitlementStatus Failed
      static GlobalNamespace::AdditionalContentModel::EntitlementStatus _get_Failed();
      // Set static field: static public AdditionalContentModel/EntitlementStatus Failed
      static void _set_Failed(GlobalNamespace::AdditionalContentModel::EntitlementStatus value);
      // static field const value: static public AdditionalContentModel/EntitlementStatus Owned
      static constexpr const int Owned = 1;
      // Get static field: static public AdditionalContentModel/EntitlementStatus Owned
      static GlobalNamespace::AdditionalContentModel::EntitlementStatus _get_Owned();
      // Set static field: static public AdditionalContentModel/EntitlementStatus Owned
      static void _set_Owned(GlobalNamespace::AdditionalContentModel::EntitlementStatus value);
      // static field const value: static public AdditionalContentModel/EntitlementStatus NotOwned
      static constexpr const int NotOwned = 2;
      // Get static field: static public AdditionalContentModel/EntitlementStatus NotOwned
      static GlobalNamespace::AdditionalContentModel::EntitlementStatus _get_NotOwned();
      // Set static field: static public AdditionalContentModel/EntitlementStatus NotOwned
      static void _set_NotOwned(GlobalNamespace::AdditionalContentModel::EntitlementStatus value);
    }; // AdditionalContentModel/EntitlementStatus
    #pragma pack(pop)
    static check_size<sizeof(AdditionalContentModel::EntitlementStatus), 0 + sizeof(int)> __GlobalNamespace_AdditionalContentModel_EntitlementStatusSizeCheck;
    static_assert(sizeof(AdditionalContentModel::EntitlementStatus) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: AdditionalContentModel/OpenProductStoreResult
    struct OpenProductStoreResult/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: OpenProductStoreResult
      constexpr OpenProductStoreResult(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public AdditionalContentModel/OpenProductStoreResult OK
      static constexpr const int OK = 0;
      // Get static field: static public AdditionalContentModel/OpenProductStoreResult OK
      static GlobalNamespace::AdditionalContentModel::OpenProductStoreResult _get_OK();
      // Set static field: static public AdditionalContentModel/OpenProductStoreResult OK
      static void _set_OK(GlobalNamespace::AdditionalContentModel::OpenProductStoreResult value);
      // static field const value: static public AdditionalContentModel/OpenProductStoreResult Failed
      static constexpr const int Failed = 1;
      // Get static field: static public AdditionalContentModel/OpenProductStoreResult Failed
      static GlobalNamespace::AdditionalContentModel::OpenProductStoreResult _get_Failed();
      // Set static field: static public AdditionalContentModel/OpenProductStoreResult Failed
      static void _set_Failed(GlobalNamespace::AdditionalContentModel::OpenProductStoreResult value);
    }; // AdditionalContentModel/OpenProductStoreResult
    #pragma pack(pop)
    static check_size<sizeof(AdditionalContentModel::OpenProductStoreResult), 0 + sizeof(int)> __GlobalNamespace_AdditionalContentModel_OpenProductStoreResultSizeCheck;
    static_assert(sizeof(AdditionalContentModel::OpenProductStoreResult) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: AdditionalContentModel/IsPackBetterBuyThanLevelResult
    struct IsPackBetterBuyThanLevelResult/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: IsPackBetterBuyThanLevelResult
      constexpr IsPackBetterBuyThanLevelResult(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public AdditionalContentModel/IsPackBetterBuyThanLevelResult PackIsBetter
      static constexpr const int PackIsBetter = 0;
      // Get static field: static public AdditionalContentModel/IsPackBetterBuyThanLevelResult PackIsBetter
      static GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult _get_PackIsBetter();
      // Set static field: static public AdditionalContentModel/IsPackBetterBuyThanLevelResult PackIsBetter
      static void _set_PackIsBetter(GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult value);
      // static field const value: static public AdditionalContentModel/IsPackBetterBuyThanLevelResult LevelIsBetter
      static constexpr const int LevelIsBetter = 1;
      // Get static field: static public AdditionalContentModel/IsPackBetterBuyThanLevelResult LevelIsBetter
      static GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult _get_LevelIsBetter();
      // Set static field: static public AdditionalContentModel/IsPackBetterBuyThanLevelResult LevelIsBetter
      static void _set_LevelIsBetter(GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult value);
      // static field const value: static public AdditionalContentModel/IsPackBetterBuyThanLevelResult Failed
      static constexpr const int Failed = 2;
      // Get static field: static public AdditionalContentModel/IsPackBetterBuyThanLevelResult Failed
      static GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult _get_Failed();
      // Set static field: static public AdditionalContentModel/IsPackBetterBuyThanLevelResult Failed
      static void _set_Failed(GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult value);
    }; // AdditionalContentModel/IsPackBetterBuyThanLevelResult
    #pragma pack(pop)
    static check_size<sizeof(AdditionalContentModel::IsPackBetterBuyThanLevelResult), 0 + sizeof(int)> __GlobalNamespace_AdditionalContentModel_IsPackBetterBuyThanLevelResultSizeCheck;
    static_assert(sizeof(AdditionalContentModel::IsPackBetterBuyThanLevelResult) == 0x4);
    // [InjectAttribute] Offset: 0xE15FD4
    // private AlwaysOwnedContentContainerSO _alwaysOwnedContentContainer
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AlwaysOwnedContentContainerSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE15FE4
    // private System.Action didInvalidateDataEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* didInvalidateDataEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: AdditionalContentModel
    AdditionalContentModel(GlobalNamespace::AlwaysOwnedContentContainerSO* alwaysOwnedContentContainer_ = {}, System::Action* didInvalidateDataEvent_ = {}) noexcept : alwaysOwnedContentContainer{alwaysOwnedContentContainer_}, didInvalidateDataEvent{didInvalidateDataEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didInvalidateDataEvent(System.Action value)
    // Offset: 0x1126318
    void add_didInvalidateDataEvent(System::Action* value);
    // public System.Void remove_didInvalidateDataEvent(System.Action value)
    // Offset: 0x11263BC
    void remove_didInvalidateDataEvent(System::Action* value);
    // protected System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0x1126460
    void OnApplicationFocus(bool hasFocus);
    // protected System.Void InvalidateData()
    // Offset: 0x112649C
    void InvalidateData();
    // public System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetLevelEntitlementStatusAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0x11264DC
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetLevelEntitlementStatusAsync(::Il2CppString* levelId, System::Threading::CancellationToken token);
    // public System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetPackEntitlementStatusAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x11265F0
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetPackEntitlementStatusAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // protected System.Void InvalidateDataInternal()
    // Offset: 0xFFFFFFFF
    void InvalidateDataInternal();
    // protected System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::Il2CppString* levelId, System::Threading::CancellationToken token);
    // protected System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetPackEntitlementStatusInternalAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // public System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelProductStoreAsync(::Il2CppString* levelId, System::Threading::CancellationToken token);
    // public System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::Il2CppString* levelPackId, System::Threading::CancellationToken token);
    // protected System.Void .ctor()
    // Offset: 0x1126704
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdditionalContentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AdditionalContentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdditionalContentModel*, creationType>()));
    }
  }; // AdditionalContentModel
  #pragma pack(pop)
  static check_size<sizeof(AdditionalContentModel), 32 + sizeof(System::Action*)> __GlobalNamespace_AdditionalContentModelSizeCheck;
  static_assert(sizeof(AdditionalContentModel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AdditionalContentModel*, "", "AdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AdditionalContentModel::EntitlementStatus, "", "AdditionalContentModel/EntitlementStatus");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AdditionalContentModel::OpenProductStoreResult, "", "AdditionalContentModel/OpenProductStoreResult");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult, "", "AdditionalContentModel/IsPackBetterBuyThanLevelResult");
